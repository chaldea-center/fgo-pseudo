void __fastcall BannerEntity___ctor(BannerEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B66810 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataEntityBase_int___ctor__, method);
    byte_4B66810 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_31FD5C4 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall BannerEntity__CreatePrimaryKey(BannerEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


int32_t __fastcall BannerEntity__GetBannerId(BannerEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x3
  int32_t result; // w0

  if ( (byte_4B6680D & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMaster_BannerAddMaster___, method);
    sub_1BE4ACC(&DataManager_TypeInfo, v3);
    byte_4B6680D = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_BannerAddMaster___);
  if ( !Master_object )
    sub_1BE4D28(0LL, v5);
  result = BannerAddMaster__getOverwriteBannerId((BannerAddMaster_o *)Master_object, this->fields.bannerId, 1, v6);
  if ( result == -1 )
    return this->fields.bannerId;
  return result;
}


System_Collections_Generic_Dictionary_string__object__o *__fastcall BannerEntity__GetDetailScrollDialogInfo(
        BannerEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1

  if ( (byte_4B6680E & 1) == 0 )
  {
    sub_1BE4ACC(&Method_BasicHelper_GetValue_Dictionary_string__object____, method);
    sub_1BE4ACC(&StringLiteral_5380/*"DetailScrollDialog"*/, v3);
    byte_4B6680E = 1;
  }
  return (System_Collections_Generic_Dictionary_string__object__o *)BasicHelper__GetValue_object_(
                                                                      this->fields.script,
                                                                      (System_String_o *)StringLiteral_5380/*"DetailScrollDialog"*/,
                                                                      0LL,
                                                                      (const MethodInfo_2F470AC *)Method_BasicHelper_GetValue_Dictionary_string__object____);
}


int32_t __fastcall BannerEntity__GetDeviceType(BannerEntity_o *this, const MethodInfo *method)
{
  return this->fields.deviceType;
}


System_String_array *__fastcall BannerEntity__GetLinkBody(
        BannerEntity_o *this,
        uint16_t separator,
        const MethodInfo *method)
{
  System_String_o *linkBody; // x0

  linkBody = this->fields.linkBody;
  if ( !linkBody )
    sub_1BE4D28(0LL, separator);
  return System_String__Split(linkBody, separator, 0, 0LL);
}


bool __fastcall BannerEntity__IsEnable(BannerEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  int64_t Time; // x0
  int32_t condId; // w20
  int32_t condType; // w21
  int64_t condNum; // x19

  if ( (byte_4B6680C & 1) == 0 )
  {
    sub_1BE4ACC(&CondType_TypeInfo, method);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v3);
    byte_4B6680C = 1;
  }
  if ( this->fields.bannerId < 1 || this->fields.terminalBannerPriority < 1 || this->fields.deviceType > 1u )
    return 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( Time < this->fields.noticeAt || Time >= this->fields.finishedAt )
    return 0;
  condType = this->fields.condType;
  condId = this->fields.condId;
  condNum = this->fields.condNum;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(condType, condId, condNum, 0, 0LL, 0LL);
}


bool __fastcall BannerEntity__IsEnableDevice(BannerEntity_o *this, const MethodInfo *method)
{
  int32_t deviceType; // w8

  deviceType = this->fields.deviceType;
  if ( deviceType && deviceType != 9 )
    return deviceType == 1;
  else
    return deviceType == 0;
}


bool __fastcall BannerEntity__IsExchangeSvtCoin(BannerEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B6680F & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_6390/*"ExchangeSvtCoin"*/, method);
    byte_4B6680F = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_6390/*"ExchangeSvtCoin"*/, 0, 0LL) > 0;
}