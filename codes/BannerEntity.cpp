void BannerEntity___ctor(BannerEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4E0463D & 1) == 0 )
  {
    sub_1CE6700(&Method_DataEntityBase_int___ctor__);
    byte_4E0463D = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_34E6B24 *)Method_DataEntityBase_int___ctor__);
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

  if ( (byte_4E0463A & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMaster_BannerAddMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    byte_4E0463A = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_BannerAddMaster___);
  if ( !Master_object )
    sub_1CE6958(0, v4);
  result = BannerAddMaster__getOverwriteBannerId((BannerAddMaster_o *)Master_object, this->fields.bannerId, 1, v5);
  if ( result == -1 )
    return this->fields.bannerId;
  return result;
}


System_Collections_Generic_Dictionary_string__object__o *BannerEntity__GetDetailScrollDialogInfo(
        BannerEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4E0463B & 1) == 0 )
  {
    sub_1CE6700(&Method_BasicHelper_GetValue_Dictionary_string__object____);
    sub_1CE6700(&StringLiteral_5291/*"DetailScrollDialog"*/);
    byte_4E0463B = 1;
  }
  return (System_Collections_Generic_Dictionary_string__object__o *)BasicHelper__GetValue_object_(
                                                                      this->fields.script,
                                                                      (System_String_o *)StringLiteral_5291/*"DetailScrollDialog"*/,
                                                                      0,
                                                                      (const MethodInfo_31F1AB0 *)Method_BasicHelper_GetValue_Dictionary_string__object____);
}


int32_t BannerEntity__GetDeviceType(BannerEntity_o *this, const MethodInfo *method)
{
  return this->fields.deviceType;
}


System_String_array *BannerEntity__GetLinkBody(BannerEntity_o *this, uint16_t separator, const MethodInfo *method)
{
  System_String_o *linkBody; // x0

  linkBody = this->fields.linkBody;
  if ( !linkBody )
    sub_1CE6958(0, separator);
  return System_String__Split(linkBody, separator, 0, 0);
}


bool BannerEntity__IsEnable(BannerEntity_o *this, const MethodInfo *method)
{
  int64_t Time; // x0
  int32_t condId; // w20
  int32_t condType; // w21
  int64_t condNum; // x19

  if ( (byte_4E04639 & 1) == 0 )
  {
    sub_1CE6700(&CondType_TypeInfo);
    sub_1CE6700(&NetworkManager_TypeInfo);
    byte_4E04639 = 1;
  }
  if ( this->fields.bannerId < 1 || this->fields.terminalBannerPriority < 1 || this->fields.deviceType > 1u )
    return 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  if ( Time < this->fields.noticeAt || Time >= this->fields.finishedAt )
    return 0;
  condType = this->fields.condType;
  condId = this->fields.condId;
  condNum = this->fields.condNum;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(condType, condId, condNum, 0, 0, 0);
}


bool BannerEntity__IsEnableDevice(BannerEntity_o *this, const MethodInfo *method)
{
  int32_t deviceType; // w8

  deviceType = this->fields.deviceType;
  if ( deviceType && deviceType != 9 )
    return deviceType == 1;
  else
    return deviceType == 0;
}


bool BannerEntity__IsExchangeSvtCoin(BannerEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4E0463C & 1) == 0 )
  {
    sub_1CE6700(&StringLiteral_6341/*"ExchangeSvtCoin"*/);
    byte_4E0463C = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_6341/*"ExchangeSvtCoin"*/, 0, 0) > 0;
}