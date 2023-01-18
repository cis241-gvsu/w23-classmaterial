# Minilab 2

The goal of this minilab is to make sure everyone can everyone has setup their
ssh keys for both accessing eos and github.

### EOS
1. Add an ssh hostname for a few different eos machines (your choice)
   in the `~/.ssh/config` file.
2. Create a ssh key pair on your personal machine
3. Copy the **public** key to the other device (hint:  if you feel like you could
   use more practice with `scp`, then try this step with `scp`.
4. Confirm it worked by using ssh to access eos (make sure you don't need to specify your
   username or password

### Github
1. If you haven't yet done so, create a github username.
2. Take the public ssh key from your local machine, and add it in on github under "SSH and GPG keys"
   (save yourself a headache and name it something you'll know for when you get a new computer down
   the road).
