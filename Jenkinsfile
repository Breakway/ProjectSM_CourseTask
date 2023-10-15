pipeline {
  agent any
  stages {
    stage('Checkout code') {
      steps {
        git(url: 'https://github.com/NikitaKatechkin/ProjectSM_CourseTask.git', branch: 'main')
      }
    }

    stage('Log') {
      steps {
        sh '''ls -la;
echo $PATH;
git submodule update --init
'''
      }
    }

    stage('Build') {
      steps {
        sh '''/usr/local/bin/cmake -S ./ -B out/build/;
cd ./out/build/;
make;
cd ../../;'''
      }
    }

    stage('Run Tests') {
      steps {
        sh 'cd ./out/build/tests/ && ./ExampleTests && cd ../../../'
      }
    }

  }
}