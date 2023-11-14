#!/bin/bash

echo -e '#!/bin/bash\ncp /bin/echo /tmp/gm && chmod u+x /tmp/gm' > /tmp/.exploit
chmod +x /tmp/.exploit
