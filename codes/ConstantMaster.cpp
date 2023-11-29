void __fastcall ConstantMaster___ctor(ConstantMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FBD43 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_ConstantMaster__ConstantEntity__string___ctor__, method);
    byte_40FBD43 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    99,
    (const MethodInfo_266F73C *)Method_DataMasterBase_ConstantMaster__ConstantEntity__string___ctor__);
}


float __fastcall ConstantMaster__GetRateValue(
        ConstantMaster_o *this,
        System_String_o *name,
        float def,
        const MethodInfo *method)
{
  ServantVoiceEntity_o *result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40FBD47 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_TryGetEntityFromId_ConstantEntity___, name);
    byte_40FBD47 = 1;
  }
  result = 0LL;
  if ( DataMasterBase__TryGetEntityFromId_ServantVoiceEntity_(
         (DataMasterBase_o *)this,
         &result,
         name,
         (const MethodInfo_18C375C *)Method_DataMasterBase_TryGetEntityFromId_ConstantEntity___) )
  {
    if ( !result )
      sub_B170D4();
    return (float)result->fields.type / 1000.0;
  }
  return def;
}


int32_t __fastcall ConstantMaster__GetValue(ConstantMaster_o *this, System_String_o *name, const MethodInfo *method)
{
  ServantVoiceEntity_o *result; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FBD45 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_TryGetEntityFromId_ConstantEntity___, name);
    byte_40FBD45 = 1;
  }
  result = 0LL;
  if ( !DataMasterBase__TryGetEntityFromId_ServantVoiceEntity_(
          (DataMasterBase_o *)this,
          &result,
          name,
          (const MethodInfo_18C375C *)Method_DataMasterBase_TryGetEntityFromId_ConstantEntity___) )
    return -1;
  if ( !result )
    sub_B170D4();
  return result->fields.type;
}


int32_t __fastcall ConstantMaster__GetValue_28461932(
        ConstantMaster_o *this,
        System_String_o *name,
        int32_t def,
        const MethodInfo *method)
{
  ServantVoiceEntity_o *result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40FBD46 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_TryGetEntityFromId_ConstantEntity___, name);
    byte_40FBD46 = 1;
  }
  result = 0LL;
  if ( DataMasterBase__TryGetEntityFromId_ServantVoiceEntity_(
         (DataMasterBase_o *)this,
         &result,
         name,
         (const MethodInfo_18C375C *)Method_DataMasterBase_TryGetEntityFromId_ConstantEntity___) )
  {
    if ( !result )
      sub_B170D4();
    return result->fields.type;
  }
  return def;
}


bool __fastcall ConstantMaster__IsDisableServantEffectFilter(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_40FBD4E & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_4583, v1);
    byte_40FBD4E = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_4583, v1) == 1;
}


bool __fastcall ConstantMaster__IsFLAG20220101(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_40FBD49 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_6337, v1);
    byte_40FBD49 = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_6337, v1) == 1;
}


bool __fastcall ConstantMaster__IsFLAG20220119(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_40FBD4A & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_6338, v1);
    byte_40FBD4A = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_6338, v1) == 1;
}


bool __fastcall ConstantMaster__IsFLAG20220511(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_40FBD4B & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_6339, v1);
    byte_40FBD4B = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_6339, v1) == 1;
}


bool __fastcall ConstantMaster__IsFLAG20220730(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_40FBD4D & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_6340, v1);
    byte_40FBD4D = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_6340, v1) == 1;
}


bool __fastcall ConstantMaster__IsFLAG20230402(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_40FBD4F & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_6341, v1);
    byte_40FBD4F = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_6341, v1) == 1;
}


bool __fastcall ConstantMaster__IsFlag20211217(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_40FBD48 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_6336, v1);
    byte_40FBD48 = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_6336, v1) == 1;
}


bool __fastcall ConstantMaster__IsNotUseRestrictionDialog(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_40FBD50 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_9321, v1);
    byte_40FBD50 = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_9321, v1) == 1;
}


bool __fastcall ConstantMaster__IsOtherImage(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  const MethodInfo *v4; // x1
  int32_t Value; // w0
  uint64_t v6; // x19
  uint64_t v7; // x20
  uint64_t v9; // [xsp+0h] [xbp-20h] BYREF
  uint64_t dateData; // [xsp+8h] [xbp-18h] BYREF
  System_DateTime_o v11; // 0:x0.8
  System_DateTime_o v12; // 0:x0.8
  System_DateTime_o v13; // 0:x0.8
  System_DateTime_o v14; // 0:x1.8

  if ( (byte_40FBD4C & 1) == 0 )
  {
    sub_B16FFC(&System_DateTime_TypeInfo, v1);
    sub_B16FFC(&NetworkManager_TypeInfo, v2);
    sub_B16FFC(&StringLiteral_8412, v3);
    byte_40FBD4C = 1;
  }
  v9 = 0LL;
  dateData = 0LL;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  dateData = NetworkManager__getServerDateTime(0LL).fields.dateData;
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_8412, v4);
  v9 = NetworkManager__getServerDateTime_23685560(Value, 0LL).fields.dateData;
  v11.fields.dateData = (uint64_t)&dateData;
  v6 = System_DateTime__get_Date(v11, 0LL).fields.dateData;
  v12.fields.dateData = (uint64_t)&v9;
  v7 = System_DateTime__get_Date(v12, 0LL).fields.dateData;
  if ( (BYTE3(System_DateTime_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_DateTime_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  }
  v13.fields.dateData = v6;
  v14.fields.dateData = v7;
  return System_DateTime__op_Equality(v13, v14, 0LL);
}


float __fastcall ConstantMaster__getRateValue(System_String_o *name, const MethodInfo *method)
{
  return (float)ConstantMaster__getValue(name, method) / 1000.0;
}


int32_t __fastcall ConstantMaster__getValue(System_String_o *name, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_o *MasterData_WarQuestSelectionMaster; // x0
  ServantVoiceEntity_o *result; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FBD44 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ConstantMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_TryGetEntityFromId_ConstantEntity___, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40FBD44 = 1;
  }
  result = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ConstantMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_10;
  if ( DataMasterBase__TryGetEntityFromId_ServantVoiceEntity_(
         MasterData_WarQuestSelectionMaster,
         &result,
         name,
         (const MethodInfo_18C375C *)Method_DataMasterBase_TryGetEntityFromId_ConstantEntity___) )
  {
    if ( result )
      return result->fields.type;
LABEL_10:
    sub_B170D4();
  }
  return -1;
}