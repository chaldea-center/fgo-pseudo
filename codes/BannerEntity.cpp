void __fastcall BannerEntity___ctor(BannerEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5ADCC & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_int___ctor__);
    byte_4A5ADCC = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_311D734 *)Method_DataEntityBase_int___ctor__);
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

  if ( (byte_4A5ADCB & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_BannerAddMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    byte_4A5ADCB = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_BannerAddMaster___);
  if ( !Master_object )
    sub_1B8880C(0LL, v4);
  result = BannerAddMaster__getOverwriteBannerId((BannerAddMaster_o *)Master_object, this->fields.bannerId, 1, v5);
  if ( result == -1 )
    return this->fields.bannerId;
  return result;
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
    sub_1B8880C(0LL, separator);
  return System_String__Split(linkBody, separator, 0, 0LL);
}


bool __fastcall BannerEntity__IsEnable(BannerEntity_o *this, const MethodInfo *method)
{
  int64_t Time; // x0

  if ( (byte_4A5ADCA & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5ADCA = 1;
  }
  if ( this->fields.bannerId < 1 || this->fields.terminalBannerPriority < 1 || this->fields.deviceType > 1u )
    return 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  return Time >= this->fields.noticeAt && Time < this->fields.finishedAt;
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