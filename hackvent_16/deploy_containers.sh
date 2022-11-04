#!/bin/sh

# scp -r jcoinz/container_jcoinz/ muffinx@challenges.hackvent.hacking-lab.com:/home/muffinx/
# scp -r marshmallows/container_marshmallows/ muffinx@challenges.hackvent.hacking-lab.com:/home/muffinx/
#scp -r pengus_site/container_pengus_site/ muffinx@challenges.hackvent.hacking-lab.com:/home/muffinx/
scp -r m3m0ry/container_m3m0ry muffinx@challenges.hackvent.hacking-lab.com:/home/muffinx/

# ssh -t muffinx@challenges.hackvent.hacking-lab.com '/bin/sh -c "sudo /home/muffinx/container_jcoinz/start.sh"'
# ssh -t muffinx@challenges.hackvent.hacking-lab.com '/bin/sh -c "sudo /home/muffinx/container_marshmallows/start.sh"'
# ssh -t muffinx@challenges.hackvent.hacking-lab.com '/bin/sh -c "sudo /home/muffinx/container_pengus_site/start.sh"'
ssh -t muffinx@challenges.hackvent.hacking-lab.com '/bin/sh -c "sudo /home/muffinx/container_m3m0ry/start.sh"'
