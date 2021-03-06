﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/PingStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ssm/model/PlatformType.h>
#include <aws/ssm/model/ResourceType.h>
#include <aws/ssm/model/InstanceAggregatedAssociationOverview.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SSM
{
namespace Model
{

  /**
   * <p>Describes a filter for a specific list of instances. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/InstanceInformation">AWS
   * API Reference</a></p>
   */
  class AWS_SSM_API InstanceInformation
  {
  public:
    InstanceInformation();
    InstanceInformation(const Aws::Utils::Json::JsonValue& jsonValue);
    InstanceInformation& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The instance ID. </p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The instance ID. </p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The instance ID. </p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The instance ID. </p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The instance ID. </p>
     */
    inline InstanceInformation& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The instance ID. </p>
     */
    inline InstanceInformation& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The instance ID. </p>
     */
    inline InstanceInformation& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>Connection status of the SSM Agent. </p>
     */
    inline const PingStatus& GetPingStatus() const{ return m_pingStatus; }

    /**
     * <p>Connection status of the SSM Agent. </p>
     */
    inline void SetPingStatus(const PingStatus& value) { m_pingStatusHasBeenSet = true; m_pingStatus = value; }

    /**
     * <p>Connection status of the SSM Agent. </p>
     */
    inline void SetPingStatus(PingStatus&& value) { m_pingStatusHasBeenSet = true; m_pingStatus = std::move(value); }

    /**
     * <p>Connection status of the SSM Agent. </p>
     */
    inline InstanceInformation& WithPingStatus(const PingStatus& value) { SetPingStatus(value); return *this;}

    /**
     * <p>Connection status of the SSM Agent. </p>
     */
    inline InstanceInformation& WithPingStatus(PingStatus&& value) { SetPingStatus(std::move(value)); return *this;}


    /**
     * <p>The date and time when agent last pinged Systems Manager service. </p>
     */
    inline const Aws::Utils::DateTime& GetLastPingDateTime() const{ return m_lastPingDateTime; }

    /**
     * <p>The date and time when agent last pinged Systems Manager service. </p>
     */
    inline void SetLastPingDateTime(const Aws::Utils::DateTime& value) { m_lastPingDateTimeHasBeenSet = true; m_lastPingDateTime = value; }

    /**
     * <p>The date and time when agent last pinged Systems Manager service. </p>
     */
    inline void SetLastPingDateTime(Aws::Utils::DateTime&& value) { m_lastPingDateTimeHasBeenSet = true; m_lastPingDateTime = std::move(value); }

    /**
     * <p>The date and time when agent last pinged Systems Manager service. </p>
     */
    inline InstanceInformation& WithLastPingDateTime(const Aws::Utils::DateTime& value) { SetLastPingDateTime(value); return *this;}

    /**
     * <p>The date and time when agent last pinged Systems Manager service. </p>
     */
    inline InstanceInformation& WithLastPingDateTime(Aws::Utils::DateTime&& value) { SetLastPingDateTime(std::move(value)); return *this;}


    /**
     * <p>The version of the SSM Agent running on your Linux instance. </p>
     */
    inline const Aws::String& GetAgentVersion() const{ return m_agentVersion; }

    /**
     * <p>The version of the SSM Agent running on your Linux instance. </p>
     */
    inline void SetAgentVersion(const Aws::String& value) { m_agentVersionHasBeenSet = true; m_agentVersion = value; }

    /**
     * <p>The version of the SSM Agent running on your Linux instance. </p>
     */
    inline void SetAgentVersion(Aws::String&& value) { m_agentVersionHasBeenSet = true; m_agentVersion = std::move(value); }

    /**
     * <p>The version of the SSM Agent running on your Linux instance. </p>
     */
    inline void SetAgentVersion(const char* value) { m_agentVersionHasBeenSet = true; m_agentVersion.assign(value); }

    /**
     * <p>The version of the SSM Agent running on your Linux instance. </p>
     */
    inline InstanceInformation& WithAgentVersion(const Aws::String& value) { SetAgentVersion(value); return *this;}

    /**
     * <p>The version of the SSM Agent running on your Linux instance. </p>
     */
    inline InstanceInformation& WithAgentVersion(Aws::String&& value) { SetAgentVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the SSM Agent running on your Linux instance. </p>
     */
    inline InstanceInformation& WithAgentVersion(const char* value) { SetAgentVersion(value); return *this;}


    /**
     * <p>Indicates whether latest version of the SSM Agent is running on your
     * instance. Some older versions of Windows Server use the EC2Config service to
     * process SSM requests. For this reason, this field does not indicate whether or
     * not the latest version is installed on Windows managed instances.</p>
     */
    inline bool GetIsLatestVersion() const{ return m_isLatestVersion; }

    /**
     * <p>Indicates whether latest version of the SSM Agent is running on your
     * instance. Some older versions of Windows Server use the EC2Config service to
     * process SSM requests. For this reason, this field does not indicate whether or
     * not the latest version is installed on Windows managed instances.</p>
     */
    inline void SetIsLatestVersion(bool value) { m_isLatestVersionHasBeenSet = true; m_isLatestVersion = value; }

    /**
     * <p>Indicates whether latest version of the SSM Agent is running on your
     * instance. Some older versions of Windows Server use the EC2Config service to
     * process SSM requests. For this reason, this field does not indicate whether or
     * not the latest version is installed on Windows managed instances.</p>
     */
    inline InstanceInformation& WithIsLatestVersion(bool value) { SetIsLatestVersion(value); return *this;}


    /**
     * <p>The operating system platform type. </p>
     */
    inline const PlatformType& GetPlatformType() const{ return m_platformType; }

    /**
     * <p>The operating system platform type. </p>
     */
    inline void SetPlatformType(const PlatformType& value) { m_platformTypeHasBeenSet = true; m_platformType = value; }

    /**
     * <p>The operating system platform type. </p>
     */
    inline void SetPlatformType(PlatformType&& value) { m_platformTypeHasBeenSet = true; m_platformType = std::move(value); }

    /**
     * <p>The operating system platform type. </p>
     */
    inline InstanceInformation& WithPlatformType(const PlatformType& value) { SetPlatformType(value); return *this;}

    /**
     * <p>The operating system platform type. </p>
     */
    inline InstanceInformation& WithPlatformType(PlatformType&& value) { SetPlatformType(std::move(value)); return *this;}


    /**
     * <p>The name of the operating system platform running on your instance. </p>
     */
    inline const Aws::String& GetPlatformName() const{ return m_platformName; }

    /**
     * <p>The name of the operating system platform running on your instance. </p>
     */
    inline void SetPlatformName(const Aws::String& value) { m_platformNameHasBeenSet = true; m_platformName = value; }

    /**
     * <p>The name of the operating system platform running on your instance. </p>
     */
    inline void SetPlatformName(Aws::String&& value) { m_platformNameHasBeenSet = true; m_platformName = std::move(value); }

    /**
     * <p>The name of the operating system platform running on your instance. </p>
     */
    inline void SetPlatformName(const char* value) { m_platformNameHasBeenSet = true; m_platformName.assign(value); }

    /**
     * <p>The name of the operating system platform running on your instance. </p>
     */
    inline InstanceInformation& WithPlatformName(const Aws::String& value) { SetPlatformName(value); return *this;}

    /**
     * <p>The name of the operating system platform running on your instance. </p>
     */
    inline InstanceInformation& WithPlatformName(Aws::String&& value) { SetPlatformName(std::move(value)); return *this;}

    /**
     * <p>The name of the operating system platform running on your instance. </p>
     */
    inline InstanceInformation& WithPlatformName(const char* value) { SetPlatformName(value); return *this;}


    /**
     * <p>The version of the OS platform running on your instance. </p>
     */
    inline const Aws::String& GetPlatformVersion() const{ return m_platformVersion; }

    /**
     * <p>The version of the OS platform running on your instance. </p>
     */
    inline void SetPlatformVersion(const Aws::String& value) { m_platformVersionHasBeenSet = true; m_platformVersion = value; }

    /**
     * <p>The version of the OS platform running on your instance. </p>
     */
    inline void SetPlatformVersion(Aws::String&& value) { m_platformVersionHasBeenSet = true; m_platformVersion = std::move(value); }

    /**
     * <p>The version of the OS platform running on your instance. </p>
     */
    inline void SetPlatformVersion(const char* value) { m_platformVersionHasBeenSet = true; m_platformVersion.assign(value); }

    /**
     * <p>The version of the OS platform running on your instance. </p>
     */
    inline InstanceInformation& WithPlatformVersion(const Aws::String& value) { SetPlatformVersion(value); return *this;}

    /**
     * <p>The version of the OS platform running on your instance. </p>
     */
    inline InstanceInformation& WithPlatformVersion(Aws::String&& value) { SetPlatformVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the OS platform running on your instance. </p>
     */
    inline InstanceInformation& WithPlatformVersion(const char* value) { SetPlatformVersion(value); return *this;}


    /**
     * <p>The activation ID created by Systems Manager when the server or VM was
     * registered.</p>
     */
    inline const Aws::String& GetActivationId() const{ return m_activationId; }

    /**
     * <p>The activation ID created by Systems Manager when the server or VM was
     * registered.</p>
     */
    inline void SetActivationId(const Aws::String& value) { m_activationIdHasBeenSet = true; m_activationId = value; }

    /**
     * <p>The activation ID created by Systems Manager when the server or VM was
     * registered.</p>
     */
    inline void SetActivationId(Aws::String&& value) { m_activationIdHasBeenSet = true; m_activationId = std::move(value); }

    /**
     * <p>The activation ID created by Systems Manager when the server or VM was
     * registered.</p>
     */
    inline void SetActivationId(const char* value) { m_activationIdHasBeenSet = true; m_activationId.assign(value); }

    /**
     * <p>The activation ID created by Systems Manager when the server or VM was
     * registered.</p>
     */
    inline InstanceInformation& WithActivationId(const Aws::String& value) { SetActivationId(value); return *this;}

    /**
     * <p>The activation ID created by Systems Manager when the server or VM was
     * registered.</p>
     */
    inline InstanceInformation& WithActivationId(Aws::String&& value) { SetActivationId(std::move(value)); return *this;}

    /**
     * <p>The activation ID created by Systems Manager when the server or VM was
     * registered.</p>
     */
    inline InstanceInformation& WithActivationId(const char* value) { SetActivationId(value); return *this;}


    /**
     * <p>The Amazon Identity and Access Management (IAM) role assigned to EC2
     * instances or managed instances. </p>
     */
    inline const Aws::String& GetIamRole() const{ return m_iamRole; }

    /**
     * <p>The Amazon Identity and Access Management (IAM) role assigned to EC2
     * instances or managed instances. </p>
     */
    inline void SetIamRole(const Aws::String& value) { m_iamRoleHasBeenSet = true; m_iamRole = value; }

    /**
     * <p>The Amazon Identity and Access Management (IAM) role assigned to EC2
     * instances or managed instances. </p>
     */
    inline void SetIamRole(Aws::String&& value) { m_iamRoleHasBeenSet = true; m_iamRole = std::move(value); }

    /**
     * <p>The Amazon Identity and Access Management (IAM) role assigned to EC2
     * instances or managed instances. </p>
     */
    inline void SetIamRole(const char* value) { m_iamRoleHasBeenSet = true; m_iamRole.assign(value); }

    /**
     * <p>The Amazon Identity and Access Management (IAM) role assigned to EC2
     * instances or managed instances. </p>
     */
    inline InstanceInformation& WithIamRole(const Aws::String& value) { SetIamRole(value); return *this;}

    /**
     * <p>The Amazon Identity and Access Management (IAM) role assigned to EC2
     * instances or managed instances. </p>
     */
    inline InstanceInformation& WithIamRole(Aws::String&& value) { SetIamRole(std::move(value)); return *this;}

    /**
     * <p>The Amazon Identity and Access Management (IAM) role assigned to EC2
     * instances or managed instances. </p>
     */
    inline InstanceInformation& WithIamRole(const char* value) { SetIamRole(value); return *this;}


    /**
     * <p>The date the server or VM was registered with AWS as a managed instance.</p>
     */
    inline const Aws::Utils::DateTime& GetRegistrationDate() const{ return m_registrationDate; }

    /**
     * <p>The date the server or VM was registered with AWS as a managed instance.</p>
     */
    inline void SetRegistrationDate(const Aws::Utils::DateTime& value) { m_registrationDateHasBeenSet = true; m_registrationDate = value; }

    /**
     * <p>The date the server or VM was registered with AWS as a managed instance.</p>
     */
    inline void SetRegistrationDate(Aws::Utils::DateTime&& value) { m_registrationDateHasBeenSet = true; m_registrationDate = std::move(value); }

    /**
     * <p>The date the server or VM was registered with AWS as a managed instance.</p>
     */
    inline InstanceInformation& WithRegistrationDate(const Aws::Utils::DateTime& value) { SetRegistrationDate(value); return *this;}

    /**
     * <p>The date the server or VM was registered with AWS as a managed instance.</p>
     */
    inline InstanceInformation& WithRegistrationDate(Aws::Utils::DateTime&& value) { SetRegistrationDate(std::move(value)); return *this;}


    /**
     * <p>The type of instance. Instances are either EC2 instances or managed
     * instances. </p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The type of instance. Instances are either EC2 instances or managed
     * instances. </p>
     */
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The type of instance. Instances are either EC2 instances or managed
     * instances. </p>
     */
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The type of instance. Instances are either EC2 instances or managed
     * instances. </p>
     */
    inline InstanceInformation& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of instance. Instances are either EC2 instances or managed
     * instances. </p>
     */
    inline InstanceInformation& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}


    /**
     * <p>The name of the managed instance.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the managed instance.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the managed instance.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the managed instance.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the managed instance.</p>
     */
    inline InstanceInformation& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the managed instance.</p>
     */
    inline InstanceInformation& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the managed instance.</p>
     */
    inline InstanceInformation& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The IP address of the managed instance.</p>
     */
    inline const Aws::String& GetIPAddress() const{ return m_iPAddress; }

    /**
     * <p>The IP address of the managed instance.</p>
     */
    inline void SetIPAddress(const Aws::String& value) { m_iPAddressHasBeenSet = true; m_iPAddress = value; }

    /**
     * <p>The IP address of the managed instance.</p>
     */
    inline void SetIPAddress(Aws::String&& value) { m_iPAddressHasBeenSet = true; m_iPAddress = std::move(value); }

    /**
     * <p>The IP address of the managed instance.</p>
     */
    inline void SetIPAddress(const char* value) { m_iPAddressHasBeenSet = true; m_iPAddress.assign(value); }

    /**
     * <p>The IP address of the managed instance.</p>
     */
    inline InstanceInformation& WithIPAddress(const Aws::String& value) { SetIPAddress(value); return *this;}

    /**
     * <p>The IP address of the managed instance.</p>
     */
    inline InstanceInformation& WithIPAddress(Aws::String&& value) { SetIPAddress(std::move(value)); return *this;}

    /**
     * <p>The IP address of the managed instance.</p>
     */
    inline InstanceInformation& WithIPAddress(const char* value) { SetIPAddress(value); return *this;}


    /**
     * <p>The fully qualified host name of the managed instance.</p>
     */
    inline const Aws::String& GetComputerName() const{ return m_computerName; }

    /**
     * <p>The fully qualified host name of the managed instance.</p>
     */
    inline void SetComputerName(const Aws::String& value) { m_computerNameHasBeenSet = true; m_computerName = value; }

    /**
     * <p>The fully qualified host name of the managed instance.</p>
     */
    inline void SetComputerName(Aws::String&& value) { m_computerNameHasBeenSet = true; m_computerName = std::move(value); }

    /**
     * <p>The fully qualified host name of the managed instance.</p>
     */
    inline void SetComputerName(const char* value) { m_computerNameHasBeenSet = true; m_computerName.assign(value); }

    /**
     * <p>The fully qualified host name of the managed instance.</p>
     */
    inline InstanceInformation& WithComputerName(const Aws::String& value) { SetComputerName(value); return *this;}

    /**
     * <p>The fully qualified host name of the managed instance.</p>
     */
    inline InstanceInformation& WithComputerName(Aws::String&& value) { SetComputerName(std::move(value)); return *this;}

    /**
     * <p>The fully qualified host name of the managed instance.</p>
     */
    inline InstanceInformation& WithComputerName(const char* value) { SetComputerName(value); return *this;}


    /**
     * <p>The status of the association.</p>
     */
    inline const Aws::String& GetAssociationStatus() const{ return m_associationStatus; }

    /**
     * <p>The status of the association.</p>
     */
    inline void SetAssociationStatus(const Aws::String& value) { m_associationStatusHasBeenSet = true; m_associationStatus = value; }

    /**
     * <p>The status of the association.</p>
     */
    inline void SetAssociationStatus(Aws::String&& value) { m_associationStatusHasBeenSet = true; m_associationStatus = std::move(value); }

    /**
     * <p>The status of the association.</p>
     */
    inline void SetAssociationStatus(const char* value) { m_associationStatusHasBeenSet = true; m_associationStatus.assign(value); }

    /**
     * <p>The status of the association.</p>
     */
    inline InstanceInformation& WithAssociationStatus(const Aws::String& value) { SetAssociationStatus(value); return *this;}

    /**
     * <p>The status of the association.</p>
     */
    inline InstanceInformation& WithAssociationStatus(Aws::String&& value) { SetAssociationStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the association.</p>
     */
    inline InstanceInformation& WithAssociationStatus(const char* value) { SetAssociationStatus(value); return *this;}


    /**
     * <p>The date the association was last executed.</p>
     */
    inline const Aws::Utils::DateTime& GetLastAssociationExecutionDate() const{ return m_lastAssociationExecutionDate; }

    /**
     * <p>The date the association was last executed.</p>
     */
    inline void SetLastAssociationExecutionDate(const Aws::Utils::DateTime& value) { m_lastAssociationExecutionDateHasBeenSet = true; m_lastAssociationExecutionDate = value; }

    /**
     * <p>The date the association was last executed.</p>
     */
    inline void SetLastAssociationExecutionDate(Aws::Utils::DateTime&& value) { m_lastAssociationExecutionDateHasBeenSet = true; m_lastAssociationExecutionDate = std::move(value); }

    /**
     * <p>The date the association was last executed.</p>
     */
    inline InstanceInformation& WithLastAssociationExecutionDate(const Aws::Utils::DateTime& value) { SetLastAssociationExecutionDate(value); return *this;}

    /**
     * <p>The date the association was last executed.</p>
     */
    inline InstanceInformation& WithLastAssociationExecutionDate(Aws::Utils::DateTime&& value) { SetLastAssociationExecutionDate(std::move(value)); return *this;}


    /**
     * <p>The last date the association was successfully run.</p>
     */
    inline const Aws::Utils::DateTime& GetLastSuccessfulAssociationExecutionDate() const{ return m_lastSuccessfulAssociationExecutionDate; }

    /**
     * <p>The last date the association was successfully run.</p>
     */
    inline void SetLastSuccessfulAssociationExecutionDate(const Aws::Utils::DateTime& value) { m_lastSuccessfulAssociationExecutionDateHasBeenSet = true; m_lastSuccessfulAssociationExecutionDate = value; }

    /**
     * <p>The last date the association was successfully run.</p>
     */
    inline void SetLastSuccessfulAssociationExecutionDate(Aws::Utils::DateTime&& value) { m_lastSuccessfulAssociationExecutionDateHasBeenSet = true; m_lastSuccessfulAssociationExecutionDate = std::move(value); }

    /**
     * <p>The last date the association was successfully run.</p>
     */
    inline InstanceInformation& WithLastSuccessfulAssociationExecutionDate(const Aws::Utils::DateTime& value) { SetLastSuccessfulAssociationExecutionDate(value); return *this;}

    /**
     * <p>The last date the association was successfully run.</p>
     */
    inline InstanceInformation& WithLastSuccessfulAssociationExecutionDate(Aws::Utils::DateTime&& value) { SetLastSuccessfulAssociationExecutionDate(std::move(value)); return *this;}


    /**
     * <p>Information about the association.</p>
     */
    inline const InstanceAggregatedAssociationOverview& GetAssociationOverview() const{ return m_associationOverview; }

    /**
     * <p>Information about the association.</p>
     */
    inline void SetAssociationOverview(const InstanceAggregatedAssociationOverview& value) { m_associationOverviewHasBeenSet = true; m_associationOverview = value; }

    /**
     * <p>Information about the association.</p>
     */
    inline void SetAssociationOverview(InstanceAggregatedAssociationOverview&& value) { m_associationOverviewHasBeenSet = true; m_associationOverview = std::move(value); }

    /**
     * <p>Information about the association.</p>
     */
    inline InstanceInformation& WithAssociationOverview(const InstanceAggregatedAssociationOverview& value) { SetAssociationOverview(value); return *this;}

    /**
     * <p>Information about the association.</p>
     */
    inline InstanceInformation& WithAssociationOverview(InstanceAggregatedAssociationOverview&& value) { SetAssociationOverview(std::move(value)); return *this;}

  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet;

    PingStatus m_pingStatus;
    bool m_pingStatusHasBeenSet;

    Aws::Utils::DateTime m_lastPingDateTime;
    bool m_lastPingDateTimeHasBeenSet;

    Aws::String m_agentVersion;
    bool m_agentVersionHasBeenSet;

    bool m_isLatestVersion;
    bool m_isLatestVersionHasBeenSet;

    PlatformType m_platformType;
    bool m_platformTypeHasBeenSet;

    Aws::String m_platformName;
    bool m_platformNameHasBeenSet;

    Aws::String m_platformVersion;
    bool m_platformVersionHasBeenSet;

    Aws::String m_activationId;
    bool m_activationIdHasBeenSet;

    Aws::String m_iamRole;
    bool m_iamRoleHasBeenSet;

    Aws::Utils::DateTime m_registrationDate;
    bool m_registrationDateHasBeenSet;

    ResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_iPAddress;
    bool m_iPAddressHasBeenSet;

    Aws::String m_computerName;
    bool m_computerNameHasBeenSet;

    Aws::String m_associationStatus;
    bool m_associationStatusHasBeenSet;

    Aws::Utils::DateTime m_lastAssociationExecutionDate;
    bool m_lastAssociationExecutionDateHasBeenSet;

    Aws::Utils::DateTime m_lastSuccessfulAssociationExecutionDate;
    bool m_lastSuccessfulAssociationExecutionDateHasBeenSet;

    InstanceAggregatedAssociationOverview m_associationOverview;
    bool m_associationOverviewHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
