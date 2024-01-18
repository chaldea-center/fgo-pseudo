void __fastcall EventFortificationEntity___ctor(EventFortificationEntity_o *this, const MethodInfo *method)
{
  if ( (byte_418A3E7 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_418A3E7 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventFortificationEntity__CreatePK(int32_t eventId, int32_t idx, const MethodInfo *method)
{
  if ( (byte_418A3E4 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&idx);
    byte_418A3E4 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           idx,
           (const MethodInfo_1732908 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  __int64 v3; // x1
  GiftMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v5; // x1
  GiftEntity_o *DataById; // x0

  if ( (byte_418A3E5 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_GiftMaster___, method);
    sub_B2C35C(&DataManager_TypeInfo, v3);
    byte_418A3E5 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (GiftMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_GiftMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B2C434(0LL, v5);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UserEventFortificationMaster_o *Master_WarQuestSelectionMaster; // x20
  int64_t UserId; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  WellFired_USFGOPlayBgmEventConditional_CondBGM_array *setSvtInfos; // x19
  EventFortificationEntity___c_c *v18; // x0
  struct EventFortificationEntity___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__14_0; // x20
  Il2CppObject *v21; // x21
  struct EventFortificationEntity___c_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  UserEventFortificationEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_418A3E6 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_Any_SetSvtInfo___, method);
    sub_B2C35C(&Method_DataManager_GetMaster_EventFortificationDetailMaster___, v3);
    sub_B2C35C(&Method_DataManager_GetMaster_UserEventFortificationMaster___, v4);
    sub_B2C35C(&DataManager_TypeInfo, v5);
    sub_B2C35C(&Method_System_Func_SetSvtInfo__bool___ctor__, v6);
    sub_B2C35C(&System_Func_SetSvtInfo__bool__TypeInfo, v7);
    sub_B2C35C(&NetworkManager_TypeInfo, v8);
    sub_B2C35C(&Method_EventFortificationEntity___c__IsOpenFortificationWarningDialog_b__14_0__, v9);
    sub_B2C35C(&EventFortificationEntity___c_TypeInfo, v10);
    byte_418A3E6 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  entity = 0LL;
  Master_WarQuestSelectionMaster = (UserEventFortificationMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserEventFortificationMaster___);
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
  UserId = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventFortificationDetailMaster___);
  if ( !UserId )
    goto LABEL_26;
  UserId = (int64_t)EventFortificationDetailMaster__GetEntitiesByOpend(
                      (EventFortificationDetailMaster_o *)UserId,
                      this->fields.eventId,
                      this->fields.idx,
                      v14);
  if ( !entity )
    return 1;
  setSvtInfos = (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)entity->fields.setSvtInfos;
  if ( !setSvtInfos )
    return 1;
  if ( !UserId )
LABEL_26:
    sub_B2C434(UserId, v13);
  if ( (signed int)setSvtInfos->max_length < *(_DWORD *)(UserId + 24) )
    return 1;
  v18 = EventFortificationEntity___c_TypeInfo;
  if ( (BYTE3(EventFortificationEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventFortificationEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventFortificationEntity___c_TypeInfo);
    v18 = EventFortificationEntity___c_TypeInfo;
  }
  static_fields = v18->static_fields;
  _9__14_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__14_0;
  if ( !_9__14_0 )
  {
    if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      static_fields = EventFortificationEntity___c_TypeInfo->static_fields;
    }
    v21 = (Il2CppObject *)static_fields->__9;
    _9__14_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_SetSvtInfo__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__14_0,
      v21,
      Method_EventFortificationEntity___c__IsOpenFortificationWarningDialog_b__14_0__,
      (const MethodInfo_2711C04 *)Method_System_Func_SetSvtInfo__bool___ctor__);
    v22 = EventFortificationEntity___c_TypeInfo->static_fields;
    v22->__9__14_0 = (struct System_Func_SetSvtInfo__bool__o *)_9__14_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v22->__9__14_0,
      (System_Int32_array **)_9__14_0,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  return BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
           setSvtInfos,
           (System_Func_T__bool__o *)_9__14_0,
           (const MethodInfo_1726758 *)Method_BasicHelper_Any_SetSvtInfo___);
}


void __fastcall EventFortificationEntity___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct EventFortificationEntity___c_StaticFields *static_fields; // x0

  if ( (byte_4184AD6 & 1) == 0 )
  {
    sub_B2C35C(&EventFortificationEntity___c_TypeInfo, v1);
    byte_4184AD6 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(EventFortificationEntity___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = EventFortificationEntity___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventFortificationEntity___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, 0LL);
  return !info->fields.type && info->fields.svtId < 1;
}