
# Test Plan


| Test ID | Description | Input | Expected output | Actual Output |
| --- | --- | --- | --- | --- |
| 01 | Check mean | values = {1,1,1,2,3,4,5}, no.of values =7  | 2.428571 |  2.428571 |
| 02 | Check median | values = {1,1,1,2,3,4,5}, no.of values =7 | 2.900000 |  2.900000 |
| 03 | Check mode | values = {1,1,1,2,3,4,5}, no.of values =7 | 1.000000 | 1.000000 |


| Test ID | Description | Input | Expected output | Actual Output |
| --- | --- | --- | --- | --- |
| 01 | Check patient registration status | 125 (aadhar no) | 0 | 0 (registered, not vaccinated) |
| 02 | Check patient registration status | 130 (aadhar no) | 1 | 1 (registered, vaccinated) |
| 03 | Check patient vaccination status | 3 (patient id) | 1 | 1 (first dose) |
| 04 | Check patient vaccination status | 3 (patient id) | 2 | 2 (second dose) |
| 05 | Check patient vaccination status | 3 (patient id) | 3 | 3 (already vaccinated) |