node {
    stage('Get-docker') {
        checkout scm
        docker.image('alpine:latest').inside {
            echo "this worked!"
        }
    }
}