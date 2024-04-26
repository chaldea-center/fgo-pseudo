void __fastcall EventFortificationEntity___ctor(EventFortificationEntity_o *this, const MethodInfo *method)
{
  if ( (byte_43545C8 & 1) == 0 )
  {
    sub_B70694(&Method_DataEntityBase_string___ctor__);
    byte_43545C8 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21C038C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall EventFortificationEntity__CreatePK(int32_t eventId, int32_t idx, const MethodInfo *method)
{
  if ( (byte_43545C5 & 1) == 0 )
  {
    sub_B70694(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_43545C5 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           idx,
           (const MethodInfo_1CA236C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  GiftMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v4; // x1
  GiftEntity_o *DataById; // x0

  if ( (byte_43545C6 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_GiftMaster___);
    sub_B70694(&DataManager_TypeInfo);
    byte_43545C6 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (GiftMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_GiftMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B7076C(0LL, v4);
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
  UserEventFortificationMaster_o *Master_WarQuestSelectionMaster; // x20
  int64_t UserId; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x3
  WellFired_USFGOPlayBgmEventConditional_CondBGM_array *setSvtInfos; // x19
  EventFortificationEntity___c_c *v10; // x0
  struct EventFortificationEntity___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__14_0; // x20
  Il2CppObject *v13; // x21
  struct EventFortificationEntity___c_StaticFields *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  UserEventFortificationEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_43545C7 & 1) == 0 )
  {
    sub_B70694(&Method_BasicHelper_Any_SetSvtInfo___);
    sub_B70694(&Method_DataManager_GetMaster_EventFortificationDetailMaster___);
    sub_B70694(&Method_DataManager_GetMaster_UserEventFortificationMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_System_Func_SetSvtInfo__bool___ctor__);
    sub_B70694(&System_Func_SetSvtInfo__bool__TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_EventFortificationEntity___c__IsOpenFortificationWarningDialog_b__14_0__);
    sub_B70694(&EventFortificationEntity___c_TypeInfo);
    byte_43545C7 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  entity = 0LL;
  Master_WarQuestSelectionMaster = (UserEventFortificationMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_UserEventFortificationMaster___);
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
  UserId = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_EventFortificationDetailMaster___);
  if ( !UserId )
    goto LABEL_26;
  UserId = (int64_t)EventFortificationDetailMaster__GetEntitiesByOpend(
                      (EventFortificationDetailMaster_o *)UserId,
                      this->fields.eventId,
                      this->fields.idx,
                      v6);
  if ( !entity )
    return 1;
  setSvtInfos = (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)entity->fields.setSvtInfos;
  if ( !setSvtInfos )
    return 1;
  if ( !UserId )
LABEL_26:
    sub_B7076C(UserId, v5);
  if ( (signed int)setSvtInfos->max_length < *(_DWORD *)(UserId + 24) )
    return 1;
  v10 = EventFortificationEntity___c_TypeInfo;
  if ( (BYTE3(EventFortificationEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventFortificationEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventFortificationEntity___c_TypeInfo);
    v10 = EventFortificationEntity___c_TypeInfo;
  }
  static_fields = v10->static_fields;
  _9__14_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__14_0;
  if ( !_9__14_0 )
  {
    if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      static_fields = EventFortificationEntity___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__14_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_SetSvtInfo__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__14_0,
      v13,
      Method_EventFortificationEntity___c__IsOpenFortificationWarningDialog_b__14_0__,
      (const MethodInfo_29AC578 *)Method_System_Func_SetSvtInfo__bool___ctor__);
    v14 = EventFortificationEntity___c_TypeInfo->static_fields;
    v14->__9__14_0 = (struct System_Func_SetSvtInfo__bool__o *)_9__14_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v14->__9__14_0,
      (System_Int32_array **)_9__14_0,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  return BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
           setSvtInfos,
           (System_Func_T__bool__o *)_9__14_0,
           (const MethodInfo_1BDCB34 *)Method_BasicHelper_Any_SetSvtInfo___);
}


void __fastcall EventFortificationEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct EventFortificationEntity___c_StaticFields *static_fields; // x0

  if ( (byte_434F055 & 1) == 0 )
  {
    sub_B70694(&EventFortificationEntity___c_TypeInfo);
    byte_434F055 = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(EventFortificationEntity___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = EventFortificationEntity___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventFortificationEntity___c_o *)v1;
  sub_B70630(static_fields);
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
    sub_B7076C(this, 0LL);
  return !info->fields.type && info->fields.svtId < 1;
}