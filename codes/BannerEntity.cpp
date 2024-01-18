void __fastcall BannerEntity___ctor(BannerEntity_o *this, const MethodInfo *method)
{
  if ( (byte_41849E9 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_int___ctor__, method);
    byte_41849E9 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_24E3F7C *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall BannerEntity__CreatePrimaryKey(BannerEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


int32_t __fastcall BannerEntity__GetBannerId(BannerEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BannerAddMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x3
  int32_t result; // w0

  if ( (byte_41849E7 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_BannerAddMaster___, method);
    sub_B2C35C(&DataManager_TypeInfo, v3);
    byte_41849E7 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (BannerAddMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_BannerAddMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B2C434(0LL, v5);
  result = BannerAddMaster__getOverwriteBannerId(Master_WarQuestSelectionMaster, this->fields.bannerId, 1, v6);
  if ( result == -1 )
    return this->fields.bannerId;
  return result;
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
  System_String_o *linkBody; // x20
  System_Char_array *v6; // x0
  System_Char_array *v7; // x1
  __int64 v9; // x0

  if ( (byte_41849E8 & 1) == 0 )
  {
    sub_B2C35C(&char___TypeInfo, separator);
    byte_41849E8 = 1;
  }
  linkBody = this->fields.linkBody;
  v6 = (System_Char_array *)sub_B2C374(char___TypeInfo, 1LL);
  if ( !v6 )
    goto LABEL_7;
  v7 = v6;
  if ( !v6->max_length )
  {
    v9 = sub_B2C460(v6);
    sub_B2C400(v9, 0LL);
  }
  v6->m_Items[2] = separator;
  if ( !linkBody )
LABEL_7:
    sub_B2C434(v6, v7);
  return System_String__Split(linkBody, v6, 0LL);
}


bool __fastcall BannerEntity__IsEnable(BannerEntity_o *this, const MethodInfo *method)
{
  int64_t Time; // x0

  if ( (byte_41849E6 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    byte_41849E6 = 1;
  }
  if ( this->fields.bannerId < 1 || this->fields.terminalBannerPriority < 1 || this->fields.deviceType > 1u )
    return 0;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  return Time >= this->fields.noticeAt && Time < this->fields.finishedAt;
}


bool __fastcall BannerEntity__IsEnableDevice(BannerEntity_o *this, const MethodInfo *method)
{
  int32_t deviceType; // w8

  deviceType = this->fields.deviceType;
  if ( !deviceType )
    return 1;
  if ( deviceType == 9 )
    return 0;
  return deviceType == 1;
}