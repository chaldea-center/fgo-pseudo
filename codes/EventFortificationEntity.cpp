void __fastcall EventFortificationEntity___ctor(EventFortificationEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40FC6B0 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_string___ctor__, method);
    byte_40FC6B0 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_266F2D4 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventFortificationEntity__CreatePK(int32_t eventId, int32_t idx, const MethodInfo *method)
{
  if ( (byte_40FC6AD & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&idx);
    byte_40FC6AD = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           idx,
           (const MethodInfo_18C21A0 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  GiftEntity_o *DataById; // x0

  if ( (byte_40FC6AE & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_GiftMaster___, method);
    sub_B16FFC(&DataManager_TypeInfo, v3);
    byte_40FC6AE = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (GiftMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_GiftMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B170D4();
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
  EventFortificationDetailMaster_o *v13; // x0
  const MethodInfo *v14; // x3
  EventFortificationDetailEntity_array *EntitiesByOpend; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  WellFired_USFGOPlayBgmEventConditional_CondBGM_array *setSvtInfos; // x19
  EventFortificationEntity___c_c *v23; // x0
  struct EventFortificationEntity___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__14_0; // x20
  Il2CppObject *v26; // x21
  struct EventFortificationEntity___c_StaticFields *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  UserEventFortificationEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40FC6AF & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Any_SetSvtInfo___, method);
    sub_B16FFC(&Method_DataManager_GetMaster_EventFortificationDetailMaster___, v3);
    sub_B16FFC(&Method_DataManager_GetMaster_UserEventFortificationMaster___, v4);
    sub_B16FFC(&DataManager_TypeInfo, v5);
    sub_B16FFC(&Method_System_Func_SetSvtInfo__bool___ctor__, v6);
    sub_B16FFC(&System_Func_SetSvtInfo__bool__TypeInfo, v7);
    sub_B16FFC(&NetworkManager_TypeInfo, v8);
    sub_B16FFC(&Method_EventFortificationEntity___c__IsOpenFortificationWarningDialog_b__14_0__, v9);
    sub_B16FFC(&EventFortificationEntity___c_TypeInfo, v10);
    byte_40FC6AF = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  entity = 0LL;
  Master_WarQuestSelectionMaster = (UserEventFortificationMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserEventFortificationMaster___);
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
  v13 = (EventFortificationDetailMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventFortificationDetailMaster___);
  if ( !v13 )
    goto LABEL_26;
  EntitiesByOpend = EventFortificationDetailMaster__GetEntitiesByOpend(v13, this->fields.eventId, this->fields.idx, v14);
  if ( !entity )
    return 1;
  setSvtInfos = (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)entity->fields.setSvtInfos;
  if ( !setSvtInfos )
    return 1;
  if ( !EntitiesByOpend )
LABEL_26:
    sub_B170D4();
  if ( (signed int)setSvtInfos->max_length < (signed int)EntitiesByOpend->max_length )
    return 1;
  v23 = EventFortificationEntity___c_TypeInfo;
  if ( (BYTE3(EventFortificationEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventFortificationEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventFortificationEntity___c_TypeInfo);
    v23 = EventFortificationEntity___c_TypeInfo;
  }
  static_fields = v23->static_fields;
  _9__14_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__14_0;
  if ( !_9__14_0 )
  {
    if ( (BYTE3(v23->vtable._0_Equals.methodPtr) & 4) != 0 && !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      static_fields = EventFortificationEntity___c_TypeInfo->static_fields;
    }
    v26 = (Il2CppObject *)static_fields->__9;
    _9__14_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                    System_Func_SetSvtInfo__bool__TypeInfo,
                                                                                    v16,
                                                                                    v17,
                                                                                    v18,
                                                                                    v19);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__14_0,
      v26,
      Method_EventFortificationEntity___c__IsOpenFortificationWarningDialog_b__14_0__,
      (const MethodInfo_2B6AB40 *)Method_System_Func_SetSvtInfo__bool___ctor__);
    v27 = EventFortificationEntity___c_TypeInfo->static_fields;
    v27->__9__14_0 = (struct System_Func_SetSvtInfo__bool__o *)_9__14_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v27->__9__14_0,
      (System_Int32_array **)_9__14_0,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
  }
  return BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
           setSvtInfos,
           (System_Func_T__bool__o *)_9__14_0,
           (const MethodInfo_18B6074 *)Method_BasicHelper_Any_SetSvtInfo___);
}


void __fastcall EventFortificationEntity___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F6FA3 & 1) == 0 )
  {
    sub_B16FFC(&EventFortificationEntity___c_TypeInfo, v1);
    byte_40F6FA3 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(EventFortificationEntity___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)EventFortificationEntity___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
  return !info->fields.type && info->fields.svtId < 1;
}