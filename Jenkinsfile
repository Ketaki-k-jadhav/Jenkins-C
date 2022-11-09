Pipeline {
    agent any
    stages {
        stage ('Makefile') {
            steps {
                script {
                   sh '''#!/bin/bash

                        make
                    
                    '''
                }
            }
        }
        stage ('Execute') {
            steps {
                script {
                    sh '''#!/bin/bash
                    
                    ./out
                   
                    '''
                }
            }
        }
        stage ('Clean') {
            steps {
                script {
                    sh '''#!/bin/bash

                    make clean
                    
                    '''
                }
            }
        }
    }
}