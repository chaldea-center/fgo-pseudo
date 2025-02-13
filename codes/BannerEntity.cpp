void __fastcall BannerEntity___ctor(BannerEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BDC18E & 1) == 0 )
  {
    sub_1C21E38(&Method_DataEntityBase_int___ctor__);
    byte_4BDC18E = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_32598E4 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall BannerEntity__CreatePrimaryKey(BannerEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


int32_t __fastcall BannerEntity__GetBannerId(BannerEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x3
  int32_t result; // w0

  if ( (byte_4BDC18B & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_BannerAddMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    byte_4BDC18B = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_BannerAddMaster___);
  if ( !Master_object )
    sub_1C22094(0LL, v4);
  result = BannerAddMaster__getOverwriteBannerId((BannerAddMaster_o *)Master_object, this->fields.bannerId, 1, v5);
  if ( result == -1 )
    return this->fields.bannerId;
  return result;
}


System_Collections_Generic_Dictionary_string__object__o *__fastcall BannerEntity__GetDetailScrollDialogInfo(
        BannerEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BDC18C & 1) == 0 )
  {
    sub_1C21E38(&Method_BasicHelper_GetValue_Dictionary_string__object____);
    sub_1C21E38(&StringLiteral_5404/*"DetailScrollDialog"*/);
    byte_4BDC18C = 1;
  }
  return (System_Collections_Generic_Dictionary_string__object__o *)BasicHelper__GetValue_object_(
                                                                      this->fields.script,
                                                                      (System_String_o *)StringLiteral_5404/*"DetailScrollDialog"*/,
                                                                      0LL,
                                                                      (const MethodInfo_2F9DDA0 *)Method_BasicHelper_GetValue_Dictionary_string__object____);
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
    sub_1C22094(0LL, separator);
  return System_String__Split(linkBody, separator, 0, 0LL);
}


bool __fastcall BannerEntity__IsEnable(BannerEntity_o *this, const MethodInfo *method)
{
  int64_t Time; // x0
  int32_t condId; // w20
  int32_t condType; // w21
  int64_t condNum; // x19

  if ( (byte_4BDC18A & 1) == 0 )
  {
    sub_1C21E38(&CondType_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BDC18A = 1;
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
  if ( (byte_4BDC18D & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_6422/*"ExchangeSvtCoin"*/);
    byte_4BDC18D = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_6422/*"ExchangeSvtCoin"*/, 0, 0LL) > 0;
}