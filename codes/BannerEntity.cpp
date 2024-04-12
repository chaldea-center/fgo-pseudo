void __fastcall BannerEntity___ctor(BannerEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42ACEFB & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_int___ctor__);
    byte_42ACEFB = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_23E2184 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall BannerEntity__CreatePrimaryKey(BannerEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


int32_t __fastcall BannerEntity__GetBannerId(BannerEntity_o *this, const MethodInfo *method)
{
  BannerAddMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x3
  int32_t result; // w0

  if ( (byte_42ACEF9 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_BannerAddMaster___);
    sub_B52984(&DataManager_TypeInfo);
    byte_42ACEF9 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (BannerAddMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_BannerAddMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B52A5C(0LL, v4);
  result = BannerAddMaster__getOverwriteBannerId(Master_WarQuestSelectionMaster, this->fields.bannerId, 1, v5);
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
  System_String_o *linkBody; // x20
  System_Char_array *v6; // x0
  System_Char_array *v7; // x1
  __int64 v9; // x0

  if ( (byte_42ACEFA & 1) == 0 )
  {
    sub_B52984(&char___TypeInfo);
    byte_42ACEFA = 1;
  }
  linkBody = this->fields.linkBody;
  v6 = (System_Char_array *)sub_B5299C(char___TypeInfo, 1LL);
  if ( !v6 )
    goto LABEL_7;
  v7 = v6;
  if ( !v6->max_length )
  {
    v9 = sub_B52A88(v6);
    sub_B52A28(v9, 0LL);
  }
  v6->m_Items[2] = separator;
  if ( !linkBody )
LABEL_7:
    sub_B52A5C(v6, v7);
  return System_String__Split(linkBody, v6, 0LL);
}


bool __fastcall BannerEntity__IsEnable(BannerEntity_o *this, const MethodInfo *method)
{
  int64_t Time; // x0

  if ( (byte_42ACEF8 & 1) == 0 )
  {
    sub_B52984(&NetworkManager_TypeInfo);
    byte_42ACEF8 = 1;
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