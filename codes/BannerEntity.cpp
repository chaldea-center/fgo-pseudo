void BannerEntity___ctor(BannerEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970431 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_int___ctor__);
    byte_5970431 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3F0E518 *)Method_DataEntityBase_int___ctor__);
}


int32_t BannerEntity__CreatePrimaryKey(BannerEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


int32_t BannerEntity__GetBannerId(BannerEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x3
  int32_t result; // w0

  if ( (byte_597042E & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_BannerAddMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    byte_597042E = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_BannerAddMaster___);
  if ( !Master_object )
    sub_2213CDC(0, v4);
  result = BannerAddMaster__getOverwriteBannerId((BannerAddMaster_o *)Master_object, this->fields.bannerId, 1, v5);
  if ( result == -1 )
    return this->fields.bannerId;
  return result;
}


System_Collections_Generic_Dictionary_string__object__o *BannerEntity__GetDetailScrollDialogInfo(
        BannerEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_597042F & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_GetValue_Dictionary_string__object____);
    sub_2213A60(&StringLiteral_5447/*"DetailScrollDialog"*/);
    byte_597042F = 1;
  }
  return (System_Collections_Generic_Dictionary_string__object__o *)BasicHelper__GetValue_object_(
                                                                      this->fields.script,
                                                                      (System_String_o *)StringLiteral_5447/*"DetailScrollDialog"*/,
                                                                      0,
                                                                      (const MethodInfo_3814090 *)Method_BasicHelper_GetValue_Dictionary_string__object____);
}


int32_t BannerEntity__GetDeviceType(BannerEntity_o *this, const MethodInfo *method)
{
  return this->fields.deviceType;
}


// local variable allocation has failed, the output may be wrong!
System_String_array *BannerEntity__GetLinkBody(BannerEntity_o *this, uint16_t separator, const MethodInfo *method)
{
  System_String_o *linkBody; // x0

  linkBody = this->fields.linkBody;
  if ( !linkBody )
    sub_2213CDC(0, separator);
  return System_String__Split(linkBody, separator, 0, 0);
}


bool BannerEntity__IsEnable(BannerEntity_o *this, const MethodInfo *method)
{
  int64_t Time; // x0
  __int64 v4; // x1
  int32_t condType; // w20
  int32_t condId; // w21
  int64_t condNum; // x19

  if ( (byte_597042D & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_597042D = 1;
  }
  if ( this->fields.bannerId < 1 || this->fields.terminalBannerPriority < 1 || this->fields.deviceType > 1u )
    return 0;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  Time = NetworkManager__getTime(0);
  if ( Time < this->fields.noticeAt || Time >= this->fields.finishedAt )
    return 0;
  condType = this->fields.condType;
  condId = this->fields.condId;
  condNum = this->fields.condNum;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v4);
  return CondType__IsOpen(condType, condId, condNum, 0, 0, 0);
}


bool BannerEntity__IsEnableDevice(BannerEntity_o *this, const MethodInfo *method)
{
  return (this->fields.deviceType < 0xAu) & (3u >> this->fields.deviceType);
}


bool BannerEntity__IsExchangeSvtCoin(BannerEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970430 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_6564/*"ExchangeSvtCoin"*/);
    byte_5970430 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_6564/*"ExchangeSvtCoin"*/, 0, 0) > 0;
}