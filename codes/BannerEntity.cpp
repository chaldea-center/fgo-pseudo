void __fastcall BannerEntity___ctor(BannerEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B15E58 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_int___ctor__, method, v2);
    byte_4B15E58 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_31B2C40 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall BannerEntity__CreatePrimaryKey(BannerEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


int32_t __fastcall BannerEntity__GetBannerId(BannerEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  int32_t result; // w0

  if ( (byte_4B15E55 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_BannerAddMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    byte_4B15E55 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_BannerAddMaster___);
  if ( !Master_object )
    sub_1BCAA3C(0LL, v7);
  result = BannerAddMaster__getOverwriteBannerId((BannerAddMaster_o *)Master_object, this->fields.bannerId, 1, v8);
  if ( result == -1 )
    return this->fields.bannerId;
  return result;
}


System_Collections_Generic_Dictionary_string__object__o *__fastcall BannerEntity__GetDetailScrollDialogInfo(
        BannerEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2

  if ( (byte_4B15E56 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_GetValue_Dictionary_string__object____, method, v2);
    sub_1BCA7E0(&StringLiteral_5369/*"DetailScrollDialog"*/, v4, v5);
    byte_4B15E56 = 1;
  }
  return (System_Collections_Generic_Dictionary_string__object__o *)BasicHelper__GetValue_object_(
                                                                      this->fields.script,
                                                                      (System_String_o *)StringLiteral_5369/*"DetailScrollDialog"*/,
                                                                      0LL,
                                                                      (const MethodInfo_2F00C2C *)Method_BasicHelper_GetValue_Dictionary_string__object____);
}


int32_t __fastcall BannerEntity__GetDeviceType(BannerEntity_o *this, const MethodInfo *method)
{
  return this->fields.deviceType;
}


// local variable allocation has failed, the output may be wrong!
System_String_array *__fastcall BannerEntity__GetLinkBody(
        BannerEntity_o *this,
        uint16_t separator,
        const MethodInfo *method)
{
  System_String_o *linkBody; // x0

  linkBody = this->fields.linkBody;
  if ( !linkBody )
    sub_1BCAA3C(0LL, separator);
  return System_String__Split(linkBody, separator, 0, 0LL);
}


bool __fastcall BannerEntity__IsEnable(BannerEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  int64_t Time; // x0
  __int64 v7; // x1
  int32_t condId; // w20
  int32_t condType; // w21
  int64_t condNum; // x19

  if ( (byte_4B15E54 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, method, v2);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v4, v5);
    byte_4B15E54 = 1;
  }
  if ( this->fields.bannerId < 1 || this->fields.terminalBannerPriority < 1 || this->fields.deviceType > 1u )
    return 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  Time = NetworkManager__getTime(0LL);
  if ( Time < this->fields.noticeAt || Time >= this->fields.finishedAt )
    return 0;
  condType = this->fields.condType;
  condId = this->fields.condId;
  condNum = this->fields.condNum;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v7);
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
  __int64 v2; // x2

  if ( (byte_4B15E57 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_6375/*"ExchangeSvtCoin"*/, method, v2);
    byte_4B15E57 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_6375/*"ExchangeSvtCoin"*/, 0, 0LL) > 0;
}