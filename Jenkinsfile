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
        sh 'ls -la'
      }
    }

    stage('Build') {
      steps {
        sh '''cmake -S ./ -B out/build/;
cd ./out/build;
make;
cd ../../;'''
      }
    }

  }
}