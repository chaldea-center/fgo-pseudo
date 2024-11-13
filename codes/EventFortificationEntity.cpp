void __fastcall EventFortificationEntity___ctor(EventFortificationEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B161A0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, method, v2);
    byte_4B161A0 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventFortificationEntity__CreatePK(int32_t eventId, int32_t idx, const MethodInfo *method)
{
  if ( (byte_4B1619D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&idx, method);
    byte_4B1619D = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           idx,
           (const MethodInfo_2F10EB4 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1
  GiftEntity_o *DataById; // x0

  if ( (byte_4B1619E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_GiftMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    byte_4B1619E = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_GiftMaster___);
  if ( !Master_object )
    sub_1BCAA3C(0LL, v7);
  DataById = GiftMaster__getDataById((GiftMaster_o *)Master_object, this->fields.giftId, 0LL);
  if ( DataById )
    return GiftEntity__getIconImageId(DataById, 0LL);
  else
    return -1;
}


bool __fastcall EventFortificationEntity__IsOpenFortificationWarningDialog(
        EventFortificationEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  Il2CppObject *Master_object; // x20
  int64_t UserId; // x0
  __int64 v21; // x1
  const MethodInfo *v22; // x3
  __int64 v23; // x2
  __int64 v24; // x3
  System_Object_array *setSvtInfos; // x19
  EventFortificationEntity___c_c *v28; // x0
  System_Func_object__bool__o *_9__14_0; // x20
  Il2CppObject *v30; // x21
  struct EventFortificationEntity___c_StaticFields *static_fields; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  UserEventFortificationEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B1619F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_SetSvtInfo___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventFortificationDetailMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserEventFortificationMaster___, v6, v7);
    sub_1BCA7E0(&DataManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&System_Func_SetSvtInfo__bool__TypeInfo, v10, v11);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_EventFortificationEntity___c__IsOpenFortificationWarningDialog_b__14_0__, v14, v15);
    sub_1BCA7E0(&EventFortificationEntity___c_TypeInfo, v16, v17);
    byte_4B1619F = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  entity = 0LL;
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserEventFortificationMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v18);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !Master_object )
    goto LABEL_22;
  UserEventFortificationMaster__TryGetEntity(
    (UserEventFortificationMaster_o *)Master_object,
    &entity,
    UserId,
    this->fields.eventId,
    this->fields.idx,
    0LL);
  UserId = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventFortificationDetailMaster___);
  if ( !UserId )
    goto LABEL_22;
  UserId = (int64_t)EventFortificationDetailMaster__GetEntitiesByOpend(
                      (EventFortificationDetailMaster_o *)UserId,
                      this->fields.eventId,
                      this->fields.idx,
                      v22);
  if ( !entity )
    return 1;
  setSvtInfos = (System_Object_array *)entity->fields.setSvtInfos;
  if ( !setSvtInfos )
    return 1;
  if ( !UserId )
LABEL_22:
    sub_1BCAA3C(UserId, v21);
  if ( (signed int)setSvtInfos->max_length < *(_DWORD *)(UserId + 24) )
    return 1;
  v28 = EventFortificationEntity___c_TypeInfo;
  if ( !EventFortificationEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventFortificationEntity___c_TypeInfo, v21);
    v28 = EventFortificationEntity___c_TypeInfo;
  }
  _9__14_0 = (System_Func_object__bool__o *)v28->static_fields->__9__14_0;
  if ( !_9__14_0 )
  {
    if ( !v28->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v28, v21);
      v28 = EventFortificationEntity___c_TypeInfo;
    }
    v30 = (Il2CppObject *)v28->static_fields->__9;
    _9__14_0 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_SetSvtInfo__bool__TypeInfo, v21, v23, v24);
    System_Func_object__bool____ctor(
      _9__14_0,
      v30,
      Method_EventFortificationEntity___c__IsOpenFortificationWarningDialog_b__14_0__,
      0LL);
    static_fields = EventFortificationEntity___c_TypeInfo->static_fields;
    static_fields->__9__14_0 = (struct System_Func_SetSvtInfo__bool__o *)_9__14_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__14_0,
      (int64_t)_9__14_0,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37);
  }
  return BasicHelper__Any_object__49274176(
           setSvtInfos,
           (System_Func_T__bool__o *)_9__14_0,
           (const MethodInfo_2EFDD40 *)Method_BasicHelper_Any_SetSvtInfo___);
}


void __fastcall EventFortificationEntity___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B161A1 & 1) == 0 )
  {
    sub_1BCA7E0(&EventFortificationEntity___c_TypeInfo, v1, v2);
    byte_4B161A1 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(EventFortificationEntity___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  EventFortificationEntity___c_TypeInfo->static_fields->__9 = (struct EventFortificationEntity___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)EventFortificationEntity___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, 0LL);
  return !info->fields.type && info->fields.svtId < 1;
}