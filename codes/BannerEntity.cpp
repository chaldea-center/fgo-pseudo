void __fastcall BannerEntity___ctor(BannerEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40F6EE4 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_int___ctor__, method);
    byte_40F6EE4 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_266F234 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall BannerEntity__CreatePrimaryKey(BannerEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


int32_t __fastcall BannerEntity__GetBannerId(BannerEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BannerAddMaster_o *Master_WarQuestSelectionMaster; // x0
  const MethodInfo *v5; // x3
  int32_t result; // w0

  if ( (byte_40F6EE2 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_BannerAddMaster___, method);
    sub_B16FFC(&DataManager_TypeInfo, v3);
    byte_40F6EE2 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (BannerAddMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_BannerAddMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B170D4();
  result = BannerAddMaster__getOverwriteBannerId(Master_WarQuestSelectionMaster, this->fields.bannerId, 1, v5);
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
  __int64 v7; // x2

  if ( (byte_40F6EE3 & 1) == 0 )
  {
    sub_B16FFC(&char___TypeInfo, separator);
    byte_40F6EE3 = 1;
  }
  linkBody = this->fields.linkBody;
  v6 = (System_Char_array *)sub_B17014(char___TypeInfo, 1LL, method);
  if ( !v6 )
    goto LABEL_7;
  if ( !v6->max_length )
  {
    sub_B17100(v6, v6, v7);
    sub_B170A0();
  }
  v6->m_Items[2] = separator;
  if ( !linkBody )
LABEL_7:
    sub_B170D4();
  return System_String__Split(linkBody, v6, 0LL);
}


bool __fastcall BannerEntity__IsEnable(BannerEntity_o *this, const MethodInfo *method)
{
  int64_t Time; // x0

  if ( (byte_40F6EE1 & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, method);
    byte_40F6EE1 = 1;
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