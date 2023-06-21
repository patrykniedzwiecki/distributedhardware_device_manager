/*
 * Copyright (c) 2023 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef OHOS_DM_IPC_GET_LOCAL_DEVICEID_RSP_H
#define OHOS_DM_IPC_GET_LOCAL_DEVICEID_RSP_H

#include "ipc_req.h"

namespace OHOS {
namespace DistributedHardware {
class IpcGetLocalDeviceIdRsp : public IpcRsp {
    DECLARE_IPC_MODEL(IpcGetLocalDeviceIdRsp);

public:
    /**
     * @tc.name: IpcGetLocalDeviceInfoRsp::GetLocalDeviceId
     * @tc.desc: Ipc get local device information reply Get Local DeviceId
     * @tc.type: FUNC
     */
    const std::string &GetLocalDeviceId() const
    {
        return deviceId_;
    }

    /**
     * @tc.name: IpcGetLocalDeviceInfoRsp::SetLocalDeviceId
     * @tc.desc: Ipc get local device information reply Set Local DeviceId
     * @tc.type: FUNC
     */
    void SetLocalDeviceId(const std::string &deviceId)
    {
        deviceId_ = deviceId;
    }

private:
    std::string deviceId_;
};
} // namespace DistributedHardware
} // namespace OHOS
#endif // OHOS_DM_IPC_GET_LOCAL_DEVICEID_RSP_H
