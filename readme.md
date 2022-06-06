# sms2slack

[![Compile](../../actions/workflows/compile.yml/badge.svg)](../..//actions/workflows/compile.yml)

A code for sms2slack device that forwards... SMS messages to Slack. :)

## Prerequisite

1. Create **Slack Incoming Webhook URL** and save it for later use, using [Incoming WebHooks app](https://apps.slack.com/apps/A0F7XDUAZ-incoming-webhooks?tab=more_info).
2. Click on **[Use this template](https://github.com/teamniteo/sms2slack/generate)** and choose your **Private** repository name.

## Generating firmware

1. Go to [Settings/Secrets/Actions/New](../../settings/secrets/actions/new) in your repo. For name enter **SECRETS_FILE**
2. For value enter the following replacing with correct values:
```
who: "+1 111 111 111"
slack_webhook: https://hooks.slack.com/services/replace-me
admin_password: changeme_no_really_change_me
wifi: "my wifi name"
wifi_password: "my wifi password"
```
3. Generate the firmware file by clicking the **Run workflow** button on [Actions/Compile](../../actions/workflows/compile.yml) and then refresh the page, so that you see a new workflow running.
4. Wait for the workflow to finish, and then download **firmware.bin** under the **Summary/Artifacts** tab.

## Flashing firmware

1. Go to the https://web.esphome.io/
2. Attach your device and click on **Connect* and select "USB to UART Bridge" in the web browser prompt
3. Click on **Install** and select your previously downloaded file and click **Install**
4. After 2-3 minutes your device should connect to WiFi you specified in config, if nothing happens check the **Logs**.

## Updating firmware

1. Generate the firmware file by clicking the **Run workflow** button on [Actions/Compile](../../actions/workflows/compile.yml) and then refresh the page, so that you see a new workflow running.
2. Wait for the workflow to finish, and then download **firmware.bin** under the **Summary/Artifacts** tab.
3. Login as **admin** to the sms2slack dashboard and upload the **firmware.bin** as an OTA update. 
