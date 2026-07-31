void BannerEntity___ctor(BannerEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938289 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_int___ctor__);
    byte_5938289 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3EDAD70 *)Method_DataEntityBase_int___ctor__);
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

  if ( (byte_5938286 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_BannerAddMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    byte_5938286 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_BannerAddMaster___);
  if ( !Master_object )
    sub_21FFECC(0, v4);
  result = BannerAddMaster__getOverwriteBannerId((BannerAddMaster_o *)Master_object, this->fields.bannerId, 1, v5);
  if ( result == -1 )
    return this->fields.bannerId;
  return result;
}


System_Collections_Generic_Dictionary_string__object__o *BannerEntity__GetDetailScrollDialogInfo(
        BannerEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_5938287 & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_GetValue_Dictionary_string__object____);
    sub_21FFC50(&StringLiteral_5435/*"DetailScrollDialog"*/);
    byte_5938287 = 1;
  }
  return (System_Collections_Generic_Dictionary_string__object__o *)BasicHelper__GetValue_object_(
                                                                      this->fields.script,
                                                                      (System_String_o *)StringLiteral_5435/*"DetailScrollDialog"*/,
                                                                      0,
                                                                      (const MethodInfo_37E0CE0 *)Method_BasicHelper_GetValue_Dictionary_string__object____);
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
    sub_21FFECC(0, separator);
  return System_String__Split(linkBody, separator, 0, 0);
}


bool BannerEntity__IsEnable(BannerEntity_o *this, const MethodInfo *method)
{
  int64_t Time; // x0
  __int64 v4; // x1
  int32_t condType; // w20
  int32_t condId; // w21
  int64_t condNum; // x19

  if ( (byte_5938285 & 1) == 0 )
  {
    sub_21FFC50(&CondType_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5938285 = 1;
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
  if ( (byte_5938288 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_6552/*"ExchangeSvtCoin"*/);
    byte_5938288 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_6552/*"ExchangeSvtCoin"*/, 0, 0) > 0;
}