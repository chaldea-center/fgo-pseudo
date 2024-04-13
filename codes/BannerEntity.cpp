void __fastcall BannerEntity___ctor(BannerEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E6620 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_int___ctor__, (_DWORD)method, v2, v3);
    byte_42E6620 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_23FACBC *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall BannerEntity__CreatePrimaryKey(BannerEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


int32_t __fastcall BannerEntity__GetBannerId(BannerEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  BannerAddMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  int32_t result; // w0

  if ( (byte_42E661E & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_BannerAddMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    byte_42E661E = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (BannerAddMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_BannerAddMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B5D69C(0LL, v9);
  result = BannerAddMaster__getOverwriteBannerId(Master_WarQuestSelectionMaster, this->fields.bannerId, 1, v10);
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
  __int64 v3; // x3
  System_String_o *linkBody; // x20
  System_Char_array *v7; // x0
  System_Char_array *v8; // x1
  __int64 v10; // x0

  if ( (byte_42E661F & 1) == 0 )
  {
    sub_B5D5C4(&char___TypeInfo, separator, (_DWORD)method, v3);
    byte_42E661F = 1;
  }
  linkBody = this->fields.linkBody;
  v7 = (System_Char_array *)sub_B5D5DC(char___TypeInfo, 1LL);
  if ( !v7 )
    goto LABEL_7;
  v8 = v7;
  if ( !v7->max_length )
  {
    v10 = sub_B5D6C8(v7);
    sub_B5D668(v10, 0LL);
  }
  v7->m_Items[2] = separator;
  if ( !linkBody )
LABEL_7:
    sub_B5D69C(v7, v8);
  return System_String__Split(linkBody, v7, 0LL);
}


bool __fastcall BannerEntity__IsEnable(BannerEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int64_t Time; // x0

  if ( (byte_42E661D & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E661D = 1;
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