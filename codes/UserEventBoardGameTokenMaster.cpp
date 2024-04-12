void __fastcall UserEventBoardGameTokenMaster___ctor(UserEventBoardGameTokenMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B150F & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_UserEventBoardGameTokenMaster__UserEventBoardGameTokenEntity__string___ctor__);
    byte_42B150F = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    308,
    (const MethodInfo_23E268C *)Method_DataMasterBase_UserEventBoardGameTokenMaster__UserEventBoardGameTokenEntity__string___ctor__);
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

  if ( (byte_42B150D & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_UserEventBoardGameTokenMaster__UserEventBoardGameTokenEntity__string__GetEntity__);
    byte_42B150D = 1;
  }
  PK = UserEventBoardGameTokenEntity__CreatePK(userId, eventId, tokenId, *(const MethodInfo **)&tokenId);
  return (UserEventBoardGameTokenEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                              (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                              PK,
                                              (const MethodInfo_23E2728 *)Method_DataMasterBase_UserEventBoardGameTokenMaster__UserEventBoardGameTokenEntity__string__GetEntity__);
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
  __int64 v9; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v12; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v15; // x3
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  unsigned __int64 v17; // x10
  int32_t *v18; // x11
  __int64 v19; // x0
  __int64 v20; // x0
  UserEventBoardGameTokenEntity_c *v21; // x1
  __int64 v22; // x10
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  unsigned __int64 v24; // x10
  int32_t *v25; // x11
  __int64 v26; // x0

  if ( (byte_42B1510 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_UserEventBoardGameTokenEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_UserEventBoardGameTokenEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_UserEventBoardGameTokenEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_UserEventBoardGameTokenEntity__TypeInfo);
    sub_B52984(&UserEventBoardGameTokenEntity_TypeInfo);
    byte_42B1510 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_UserEventBoardGameTokenEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_UserEventBoardGameTokenEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_34;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v12 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v12;
        p_offset += 4;
        if ( v12 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v9);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v16 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v17 = 0LL;
      v18 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v18 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v17;
        v18 += 4;
        if ( v17 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v19 = (__int64)&v16->vtable[*v18].method;
    }
    else
    {
LABEL_16:
      v19 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v15);
    }
    v20 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
            Enumerator,
            *(_QWORD *)(v19 + 8));
    if ( v20 )
    {
      v21 = UserEventBoardGameTokenEntity_TypeInfo;
      v22 = *(&UserEventBoardGameTokenEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)v20 + 300LL) < (unsigned int)v22
        || *(UserEventBoardGameTokenEntity_c **)(*(_QWORD *)(*(_QWORD *)v20 + 200LL) + 8 * v22 - 8) != UserEventBoardGameTokenEntity_TypeInfo )
      {
        v20 = sub_B52D50(v20);
LABEL_33:
        sub_B52A5C(v20, v21);
      }
      if ( *(_QWORD *)(v20 + 16) == userId )
      {
        if ( !v5 )
          goto LABEL_33;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v5,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v20,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_UserEventBoardGameTokenEntity__Add__);
      }
    }
  }
  v23 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v24 = 0LL;
    v25 = &v23->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v25 - 1) != System_IDisposable_TypeInfo )
    {
      ++v24;
      v25 += 4;
      if ( v24 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v26 = (__int64)&v23->vtable[*v25].method;
  }
  else
  {
LABEL_28:
    v26 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v15);
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(
                                                                                       Enumerator,
                                                                                       *(_QWORD *)(v26 + 8));
  if ( !v5 )
LABEL_34:
    sub_B52A5C(list, v6);
  return (UserEventBoardGameTokenEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                                  (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_UserEventBoardGameTokenEntity__ToArray__);
}


UserEventBoardGameTokenEntity_array *__fastcall UserEventBoardGameTokenMaster__GetList_27449832(
        UserEventBoardGameTokenMaster_o *this,
        const MethodInfo *method)
{
  int64_t UserId; // x1
  const MethodInfo *v4; // x2

  if ( (byte_42B1511 & 1) == 0 )
  {
    sub_B52984(&NetworkManager_TypeInfo);
    byte_42B1511 = 1;
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

  if ( (byte_42B1513 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_EventBoardGameTokenMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B1513 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (EventBoardGameTokenMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                              (DataManager_o *)Instance,
                                                                              (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventBoardGameTokenMaster___),
        (Instance = UserEventBoardGameTokenMaster__GetList_27449832(this, v10)) == 0LL) )
  {
LABEL_18:
    sub_B52A5C(Instance, v8);
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
      v17 = sub_B52A88(Instance);
      sub_B52A28(v17, 0LL);
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
  UserEventBoardGameTokenEntity_array *List_27449832; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v9; // x20

  if ( (byte_42B1512 & 1) == 0 )
  {
    sub_B52984(&Method_BasicHelper_Any_UserEventBoardGameTokenEntity___);
    sub_B52984(&Method_System_Func_UserEventBoardGameTokenEntity__bool___ctor__);
    sub_B52984(&System_Func_UserEventBoardGameTokenEntity__bool__TypeInfo);
    sub_B52984(&Method_UserEventBoardGameTokenMaster___c__DisplayClass5_0__IsHavingToken_b__0__);
    sub_B52984(&UserEventBoardGameTokenMaster___c__DisplayClass5_0_TypeInfo);
    byte_42B1512 = 1;
  }
  v5 = (UserEventBoardGameTokenMaster___c__DisplayClass5_0_o *)sub_B52A54(UserEventBoardGameTokenMaster___c__DisplayClass5_0_TypeInfo);
  UserEventBoardGameTokenMaster___c__DisplayClass5_0___ctor(v5, 0LL);
  if ( !v5 )
    sub_B52A5C(v6, v7);
  v5->fields.tokenId = tokenId;
  List_27449832 = UserEventBoardGameTokenMaster__GetList_27449832(this, v7);
  v9 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_UserEventBoardGameTokenEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_UserEventBoardGameTokenMaster___c__DisplayClass5_0__IsHavingToken_b__0__,
    (const MethodInfo_2BC90BC *)Method_System_Func_UserEventBoardGameTokenEntity__bool___ctor__);
  return BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
           (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)List_27449832,
           (System_Func_T__bool__o *)v9,
           (const MethodInfo_1A41D18 *)Method_BasicHelper_Any_UserEventBoardGameTokenEntity___);
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

  if ( (byte_42B150E & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_UserEventBoardGameTokenMaster__UserEventBoardGameTokenEntity__string__TryGetEntity__);
    byte_42B150E = 1;
  }
  PK = UserEventBoardGameTokenEntity__CreatePK(userId, eventId, tokenId, *(const MethodInfo **)&eventId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_UserEventBoardGameTokenMaster__UserEventBoardGameTokenEntity__string__TryGetEntity__);
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
    sub_B52A5C(this, 0LL);
  return x->fields.tokenId == this->fields.tokenId && x->fields.num > 0;
}