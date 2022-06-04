# sms2slack

## Prerequisite

1. Create ***Slack Incoming Webhook URL** and save it for later use, see https://slack.com/help/articles/115005265063-Incoming-webhooks-for-Slack

## Compile

1. Click on **Use this template** choose your name and select **Private**
2. Go to [Settings/Secrets/Actions/New](../../settings/secrets/actions/new) for name enter **SECRETS_FILE**
3. For value enter the following replacing with correct values:
```
who: +1 111 111 111
slack_webhook: https://slack.com....
```
4. Generate firmware file by clicking **Run workflow** button on [Actions/Compile](../../actions/workflows/compile.yml) adn then refreshing the page.
5. Wait for workflow to finish, and then download **firmware.bin** under **Summary/Artifacts** tab.

## Flash
1. Go to the https://web.esphome.io/
2. Attach your device and click on Connect and Select "USB to UART Bridge" in web browser prompt
3. Click on **Install** and select your previously downloaded file and click **Install**
4. Continue by configuring **Wi-Fi** for your device.

