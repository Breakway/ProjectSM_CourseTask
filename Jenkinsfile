pipeline {
  agent any
  stages {
    stage('Checkout code') {
      steps {
        git(url: 'https://github.com/Breakway/ProjectSM_CourseTask.git', branch: 'main')
      }
    }

    stage('Log') {
      steps {
        bat '''
dir
echo $PATH;
git submodule update --init
'''
      }
    }

    stage('Build') {
      steps {
        bat '''
"C:\Program Files\CMake\bin\cmake.exe" -S ./ -B out/build/
cd ./out/build/
mingw32-make;
cd ../../
'''
      }
    }

    stage('Run Tests') {
      steps {
        bat 'cd ./out/build/tests/ && ./ExampleTests && cd ../../../'
      }
    }

  }
}
