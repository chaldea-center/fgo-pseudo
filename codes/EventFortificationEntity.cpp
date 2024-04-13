void __fastcall EventFortificationEntity___ctor(EventFortificationEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EB229 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42EB229 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall EventFortificationEntity__CreatePK(int32_t eventId, int32_t idx, const MethodInfo *method)
{
  __int64 v3; // x3

  if ( (byte_42EB226 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_CreateMultiplePK_int__int___, idx, (_DWORD)method, v3);
    byte_42EB226 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           idx,
           (const MethodInfo_1AE3018 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall EventFortificationEntity__CreatePrimaryKey(
        EventFortificationEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EventFortificationEntity__CreatePK(this->fields.eventId, this->fields.idx, v2);
}


int32_t __fastcall EventFortificationEntity__GetGiftItemIcon(
        EventFortificationEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  GiftMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v9; // x1
  GiftEntity_o *DataById; // x0

  if ( (byte_42EB227 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_GiftMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    byte_42EB227 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (GiftMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_GiftMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B5D69C(0LL, v9);
  DataById = GiftMaster__getDataById(Master_WarQuestSelectionMaster, this->fields.giftId, 0LL);
  if ( DataById )
    return GiftEntity__getIconImageId(DataById, 0LL);
  else
    return -1;
}


bool __fastcall EventFortificationEntity__IsOpenFortificationWarningDialog(
        EventFortificationEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  UserEventFortificationMaster_o *Master_WarQuestSelectionMaster; // x20
  int64_t UserId; // x0
  __int64 v31; // x1
  const MethodInfo *v32; // x3
  WellFired_USFGOPlayBgmEventConditional_CondBGM_array *setSvtInfos; // x19
  EventFortificationEntity___c_c *v36; // x0
  struct EventFortificationEntity___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__14_0; // x20
  Il2CppObject *v39; // x21
  struct EventFortificationEntity___c_StaticFields *v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  UserEventFortificationEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42EB228 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Any_SetSvtInfo___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_EventFortificationDetailMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserEventFortificationMaster___, v8, v9, v10);
    sub_B5D5C4(&DataManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_System_Func_SetSvtInfo__bool___ctor__, v14, v15, v16);
    sub_B5D5C4(&System_Func_SetSvtInfo__bool__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&NetworkManager_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_EventFortificationEntity___c__IsOpenFortificationWarningDialog_b__14_0__, v23, v24, v25);
    sub_B5D5C4(&EventFortificationEntity___c_TypeInfo, v26, v27, v28);
    byte_42EB228 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  entity = 0LL;
  Master_WarQuestSelectionMaster = (UserEventFortificationMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserEventFortificationMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_26;
  UserEventFortificationMaster__TryGetEntity(
    Master_WarQuestSelectionMaster,
    &entity,
    UserId,
    this->fields.eventId,
    this->fields.idx,
    0LL);
  UserId = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventFortificationDetailMaster___);
  if ( !UserId )
    goto LABEL_26;
  UserId = (int64_t)EventFortificationDetailMaster__GetEntitiesByOpend(
                      (EventFortificationDetailMaster_o *)UserId,
                      this->fields.eventId,
                      this->fields.idx,
                      v32);
  if ( !entity )
    return 1;
  setSvtInfos = (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)entity->fields.setSvtInfos;
  if ( !setSvtInfos )
    return 1;
  if ( !UserId )
LABEL_26:
    sub_B5D69C(UserId, v31);
  if ( (signed int)setSvtInfos->max_length < *(_DWORD *)(UserId + 24) )
    return 1;
  v36 = EventFortificationEntity___c_TypeInfo;
  if ( (BYTE3(EventFortificationEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventFortificationEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventFortificationEntity___c_TypeInfo);
    v36 = EventFortificationEntity___c_TypeInfo;
  }
  static_fields = v36->static_fields;
  _9__14_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__14_0;
  if ( !_9__14_0 )
  {
    if ( (BYTE3(v36->vtable._0_Equals.methodPtr) & 4) != 0 && !v36->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v36);
      static_fields = EventFortificationEntity___c_TypeInfo->static_fields;
    }
    v39 = (Il2CppObject *)static_fields->__9;
    _9__14_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_SetSvtInfo__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__14_0,
      v39,
      Method_EventFortificationEntity___c__IsOpenFortificationWarningDialog_b__14_0__,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_SetSvtInfo__bool___ctor__);
    v40 = EventFortificationEntity___c_TypeInfo->static_fields;
    v40->__9__14_0 = (struct System_Func_SetSvtInfo__bool__o *)_9__14_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v40->__9__14_0,
      (System_Int32_array **)_9__14_0,
      v41,
      v42,
      v43,
      v44,
      v45,
      v46);
  }
  return BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
           setSvtInfos,
           (System_Func_T__bool__o *)_9__14_0,
           (const MethodInfo_1AD6DE0 *)Method_BasicHelper_Any_SetSvtInfo___);
}


void __fastcall EventFortificationEntity___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct EventFortificationEntity___c_StaticFields *static_fields; // x0

  if ( (byte_42E6509 & 1) == 0 )
  {
    sub_B5D5C4(&EventFortificationEntity___c_TypeInfo, v1, v2, v3);
    byte_42E6509 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(EventFortificationEntity___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = EventFortificationEntity___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventFortificationEntity___c_o *)v4;
  sub_B5D560(static_fields);
}


void __fastcall EventFortificationEntity___c___ctor(EventFortificationEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventFortificationEntity___c___IsOpenFortificationWarningDialog_b__14_0(
        EventFortificationEntity___c_o *this,
        SetSvtInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_B5D69C(this, 0LL);
  return !info->fields.type && info->fields.svtId < 1;
}