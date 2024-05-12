void __fastcall UserEventBoardGameTokenMaster___ctor(UserEventBoardGameTokenMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438CB3C & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_UserEventBoardGameTokenMaster__UserEventBoardGameTokenEntity__string___ctor__);
    byte_438CB3C = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    308,
    (const MethodInfo_21FBC48 *)Method_DataMasterBase_UserEventBoardGameTokenMaster__UserEventBoardGameTokenEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserEventBoardGameTokenEntity_o *__fastcall UserEventBoardGameTokenMaster__GetEntity(
        UserEventBoardGameTokenMaster_o *this,
        int64_t userId,
        int32_t eventId,
        int32_t tokenId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_438CB3A & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_UserEventBoardGameTokenMaster__UserEventBoardGameTokenEntity__string__GetEntity__);
    byte_438CB3A = 1;
  }
  PK = UserEventBoardGameTokenEntity__CreatePK(userId, eventId, tokenId, *(const MethodInfo **)&tokenId);
  return (UserEventBoardGameTokenEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                              (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                              PK,
                                              (const MethodInfo_21FBCE4 *)Method_DataMasterBase_UserEventBoardGameTokenMaster__UserEventBoardGameTokenEntity__string__GetEntity__);
}


UserEventBoardGameTokenEntity_array *__fastcall UserEventBoardGameTokenMaster__GetList(
        UserEventBoardGameTokenMaster_o *this,
        int64_t userId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x19
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v8; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v11; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  unsigned __int64 v15; // x10
  int32_t *v16; // x11
  __int64 v17; // x0
  __int64 v18; // x0
  UserEventBoardGameTokenEntity_c *v19; // x1
  __int64 v20; // x10
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  unsigned __int64 v22; // x10
  int32_t *v23; // x11
  __int64 v24; // x0

  if ( (byte_438CB3D & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_UserEventBoardGameTokenEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserEventBoardGameTokenEntity__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserEventBoardGameTokenEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_UserEventBoardGameTokenEntity__TypeInfo);
    sub_B775C4(&UserEventBoardGameTokenEntity_TypeInfo);
    byte_438CB3D = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_UserEventBoardGameTokenEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_UserEventBoardGameTokenEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_34;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2CC56C8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B7769C(0LL, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v11 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v11;
        p_offset += 4;
        if ( v11 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_B0F4C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v14 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v15 = 0LL;
      v16 = &v14->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v16 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v15;
        v16 += 4;
        if ( v15 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v17 = (__int64)&v14->vtable[*v16].method;
    }
    else
    {
LABEL_16:
      v17 = sub_B0F4C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v18 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
            Enumerator,
            *(_QWORD *)(v17 + 8));
    if ( v18 )
    {
      v19 = UserEventBoardGameTokenEntity_TypeInfo;
      v20 = *(&UserEventBoardGameTokenEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)v18 + 300LL) < (unsigned int)v20
        || *(UserEventBoardGameTokenEntity_c **)(*(_QWORD *)(*(_QWORD *)v18 + 200LL) + 8 * v20 - 8) != UserEventBoardGameTokenEntity_TypeInfo )
      {
        v18 = sub_B77990(v18);
LABEL_33:
        sub_B7769C(v18, v19);
      }
      if ( *(_QWORD *)(v18 + 16) == userId )
      {
        if ( !v5 )
          goto LABEL_33;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v5,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v18,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_UserEventBoardGameTokenEntity__Add__);
      }
    }
  }
  v21 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v22 = 0LL;
    v23 = &v21->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v23 - 1) != System_IDisposable_TypeInfo )
    {
      ++v22;
      v23 += 4;
      if ( v22 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v24 = (__int64)&v21->vtable[*v23].method;
  }
  else
  {
LABEL_28:
    v24 = sub_B0F4C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
                                                                                       Enumerator,
                                                                                       *(_QWORD *)(v24 + 8));
  if ( !v5 )
LABEL_34:
    sub_B7769C(list, v6);
  return (UserEventBoardGameTokenEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                                  (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_UserEventBoardGameTokenEntity__ToArray__);
}


UserEventBoardGameTokenEntity_array *__fastcall UserEventBoardGameTokenMaster__GetList_28291420(
        UserEventBoardGameTokenMaster_o *this,
        const MethodInfo *method)
{
  int64_t UserId; // x1
  const MethodInfo *v4; // x2

  if ( (byte_438CB3E & 1) == 0 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    byte_438CB3E = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  return UserEventBoardGameTokenMaster__GetList(this, UserId, v4);
}


bool __fastcall UserEventBoardGameTokenMaster__IsHavingGroupToken(
        UserEventBoardGameTokenMaster_o *this,
        int32_t gameFlagVal,
        int32_t kindNum,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v8; // x1
  EventBoardGameTokenMaster_o *MasterData_WarQuestSelectionMaster; // x21
  const MethodInfo *v10; // x1
  int v11; // w8
  void *v12; // x22
  unsigned int v13; // w23
  int v14; // w24
  int32_t *v15; // x8
  __int64 v17; // x0
  EventBoardGameTokenEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_438CB40 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_EventBoardGameTokenMaster___);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438CB40 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (EventBoardGameTokenMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                              (DataManager_o *)Instance,
                                                                              (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventBoardGameTokenMaster___),
        (Instance = UserEventBoardGameTokenMaster__GetList_28291420(this, v10)) == 0LL) )
  {
LABEL_18:
    sub_B7769C(Instance, v8);
  }
  v11 = *((_DWORD *)Instance + 6);
  v12 = Instance;
  if ( v11 < 1 )
    return 0;
  v13 = 0;
  v14 = 0;
  while ( 1 )
  {
    if ( v13 >= v11 )
    {
      v17 = sub_B776C8(Instance);
      sub_B77668(v17, 0LL);
    }
    v15 = (int32_t *)*((_QWORD *)v12 + (int)v13 + 4);
    if ( !v15 )
      goto LABEL_18;
    if ( v15[8] >= 1 )
    {
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_18;
      Instance = (void *)EventBoardGameTokenMaster__TryGetEntity(
                           MasterData_WarQuestSelectionMaster,
                           &entity,
                           v15[6],
                           v15[7],
                           0LL);
      if ( entity )
      {
        if ( (entity->fields.flag & gameFlagVal) != 0 && ++v14 >= kindNum )
          return 1;
      }
    }
    v11 = *((_DWORD *)v12 + 6);
    if ( (int)++v13 >= v11 )
      return 0;
  }
}


bool __fastcall UserEventBoardGameTokenMaster__IsHavingToken(
        UserEventBoardGameTokenMaster_o *this,
        int32_t tokenId,
        const MethodInfo *method)
{
  UserEventBoardGameTokenMaster___c__DisplayClass5_0_o *v5; // x21
  __int64 v6; // x0
  const MethodInfo *v7; // x1
  UserEventBoardGameTokenEntity_array *List_28291420; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v9; // x20

  if ( (byte_438CB3F & 1) == 0 )
  {
    sub_B775C4(&Method_BasicHelper_Any_UserEventBoardGameTokenEntity___);
    sub_B775C4(&Method_System_Func_UserEventBoardGameTokenEntity__bool___ctor__);
    sub_B775C4(&System_Func_UserEventBoardGameTokenEntity__bool__TypeInfo);
    sub_B775C4(&Method_UserEventBoardGameTokenMaster___c__DisplayClass5_0__IsHavingToken_b__0__);
    sub_B775C4(&UserEventBoardGameTokenMaster___c__DisplayClass5_0_TypeInfo);
    byte_438CB3F = 1;
  }
  v5 = (UserEventBoardGameTokenMaster___c__DisplayClass5_0_o *)sub_B77694(UserEventBoardGameTokenMaster___c__DisplayClass5_0_TypeInfo);
  UserEventBoardGameTokenMaster___c__DisplayClass5_0___ctor(v5, 0LL);
  if ( !v5 )
    sub_B7769C(v6, v7);
  v5->fields.tokenId = tokenId;
  List_28291420 = UserEventBoardGameTokenMaster__GetList_28291420(this, v7);
  v9 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_UserEventBoardGameTokenEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_UserEventBoardGameTokenMaster___c__DisplayClass5_0__IsHavingToken_b__0__,
    (const MethodInfo_29E92C4 *)Method_System_Func_UserEventBoardGameTokenEntity__bool___ctor__);
  return BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
           (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)List_28291420,
           (System_Func_T__bool__o *)v9,
           (const MethodInfo_1C661F0 *)Method_BasicHelper_Any_UserEventBoardGameTokenEntity___);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserEventBoardGameTokenMaster__TryGetEntity(
        UserEventBoardGameTokenMaster_o *this,
        UserEventBoardGameTokenEntity_o **entity,
        int64_t userId,
        int32_t eventId,
        int32_t tokenId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_438CB3B & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_UserEventBoardGameTokenMaster__UserEventBoardGameTokenEntity__string__TryGetEntity__);
    byte_438CB3B = 1;
  }
  PK = UserEventBoardGameTokenEntity__CreatePK(userId, eventId, tokenId, *(const MethodInfo **)&eventId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21FBD3C *)Method_DataMasterBase_UserEventBoardGameTokenMaster__UserEventBoardGameTokenEntity__string__TryGetEntity__);
}


void __fastcall UserEventBoardGameTokenMaster___c__DisplayClass5_0___ctor(
        UserEventBoardGameTokenMaster___c__DisplayClass5_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall UserEventBoardGameTokenMaster___c__DisplayClass5_0___IsHavingToken_b__0(
        UserEventBoardGameTokenMaster___c__DisplayClass5_0_o *this,
        UserEventBoardGameTokenEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7769C(this, 0LL);
  return x->fields.tokenId == this->fields.tokenId && x->fields.num > 0;
}