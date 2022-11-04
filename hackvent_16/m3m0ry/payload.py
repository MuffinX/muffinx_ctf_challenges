#!/usr/bin/env python


payload = b''

payload += ('00' * 4) + ('41' * 4) * 20
#payload += ('00' * 4)
payload += '\n'

with open('/tmp/payload', 'wb') as write_payload: write_payload.write(payload)
