void __fastcall UserEventBoardGameTokenMaster___ctor(UserEventBoardGameTokenMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA1EA & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_UserEventBoardGameTokenMaster__UserEventBoardGameTokenEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42EA1EA = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    308,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_UserEventBoardGameTokenMaster__UserEventBoardGameTokenEntity__string___ctor__);
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

  if ( (byte_42EA1E8 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_UserEventBoardGameTokenMaster__UserEventBoardGameTokenEntity__string__GetEntity__,
      userId,
      eventId,
      *(_QWORD *)&tokenId);
    byte_42EA1E8 = 1;
  }
  PK = UserEventBoardGameTokenEntity__CreatePK(userId, eventId, tokenId, *(const MethodInfo **)&tokenId);
  return (UserEventBoardGameTokenEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                              (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                              PK,
                                              (const MethodInfo_23FB260 *)Method_DataMasterBase_UserEventBoardGameTokenMaster__UserEventBoardGameTokenEntity__string__GetEntity__);
}


UserEventBoardGameTokenEntity_array *__fastcall UserEventBoardGameTokenMaster__GetList(
        UserEventBoardGameTokenMaster_o *this,
        int64_t userId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v30; // x19
  __int64 v31; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v33; // x1
  __int64 v34; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v37; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v40; // x3
  System_Collections_Generic_IEnumerator_T__c *v41; // x8
  unsigned __int64 v42; // x10
  int32_t *v43; // x11
  __int64 v44; // x0
  __int64 v45; // x0
  UserEventBoardGameTokenEntity_c *v46; // x1
  __int64 v47; // x10
  System_Collections_Generic_IEnumerator_T__c *v48; // x8
  unsigned __int64 v49; // x10
  int32_t *v50; // x11
  __int64 v51; // x0

  if ( (byte_42EA1EB & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      userId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserEventBoardGameTokenEntity__Add__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserEventBoardGameTokenEntity__ToArray__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserEventBoardGameTokenEntity___ctor__, v21, v22, v23);
    sub_B5D5C4(&System_Collections_Generic_List_UserEventBoardGameTokenEntity__TypeInfo, v24, v25, v26);
    sub_B5D5C4(&UserEventBoardGameTokenEntity_TypeInfo, v27, v28, v29);
    byte_42EA1EB = 1;
  }
  v30 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UserEventBoardGameTokenEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v30,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UserEventBoardGameTokenEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_34;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v33);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v37 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v37;
        p_offset += 4;
        if ( v37 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v34);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v41 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v42 = 0LL;
      v43 = &v41->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v43 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v42;
        v43 += 4;
        if ( v42 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v44 = (__int64)&v41->vtable[*v43].method;
    }
    else
    {
LABEL_16:
      v44 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v40);
    }
    v45 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v44)(
            Enumerator,
            *(_QWORD *)(v44 + 8));
    if ( v45 )
    {
      v46 = UserEventBoardGameTokenEntity_TypeInfo;
      v47 = *(&UserEventBoardGameTokenEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)v45 + 300LL) < (unsigned int)v47
        || *(UserEventBoardGameTokenEntity_c **)(*(_QWORD *)(*(_QWORD *)v45 + 200LL) + 8 * v47 - 8) != UserEventBoardGameTokenEntity_TypeInfo )
      {
        v45 = sub_B5D990(v45);
LABEL_33:
        sub_B5D69C(v45, v46);
      }
      if ( *(_QWORD *)(v45 + 16) == userId )
      {
        if ( !v30 )
          goto LABEL_33;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v30,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v45,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UserEventBoardGameTokenEntity__Add__);
      }
    }
  }
  v48 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v49 = 0LL;
    v50 = &v48->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v50 - 1) != System_IDisposable_TypeInfo )
    {
      ++v49;
      v50 += 4;
      if ( v49 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v51 = (__int64)&v48->vtable[*v50].method;
  }
  else
  {
LABEL_28:
    v51 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v40);
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v51)(
                                                                                       Enumerator,
                                                                                       *(_QWORD *)(v51 + 8));
  if ( !v30 )
LABEL_34:
    sub_B5D69C(list, v31);
  return (UserEventBoardGameTokenEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v30,
                                                  (const MethodInfo_305910C *)Method_System_Collections_Generic_List_UserEventBoardGameTokenEntity__ToArray__);
}


UserEventBoardGameTokenEntity_array *__fastcall UserEventBoardGameTokenMaster__GetList_28067076(
        UserEventBoardGameTokenMaster_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int64_t UserId; // x1
  const MethodInfo *v6; // x2

  if ( (byte_42EA1EC & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA1EC = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  return UserEventBoardGameTokenMaster__GetList(this, UserId, v6);
}


bool __fastcall UserEventBoardGameTokenMaster__IsHavingGroupToken(
        UserEventBoardGameTokenMaster_o *this,
        int32_t gameFlagVal,
        int32_t kindNum,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  void *Instance; // x0
  __int64 v11; // x1
  EventBoardGameTokenMaster_o *MasterData_WarQuestSelectionMaster; // x21
  const MethodInfo *v13; // x1
  int v14; // w8
  void *v15; // x22
  unsigned int v16; // w23
  int v17; // w24
  int32_t *v18; // x8
  __int64 v20; // x0
  EventBoardGameTokenEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42EA1EE & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventBoardGameTokenMaster___, gameFlagVal, kindNum, method);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8, v9);
    byte_42EA1EE = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (EventBoardGameTokenMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                              (DataManager_o *)Instance,
                                                                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventBoardGameTokenMaster___),
        (Instance = UserEventBoardGameTokenMaster__GetList_28067076(this, v13)) == 0LL) )
  {
LABEL_18:
    sub_B5D69C(Instance, v11);
  }
  v14 = *((_DWORD *)Instance + 6);
  v15 = Instance;
  if ( v14 < 1 )
    return 0;
  v16 = 0;
  v17 = 0;
  while ( 1 )
  {
    if ( v16 >= v14 )
    {
      v20 = sub_B5D6C8(Instance);
      sub_B5D668(v20, 0LL);
    }
    v18 = (int32_t *)*((_QWORD *)v15 + (int)v16 + 4);
    if ( !v18 )
      goto LABEL_18;
    if ( v18[8] >= 1 )
    {
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_18;
      Instance = (void *)EventBoardGameTokenMaster__TryGetEntity(
                           MasterData_WarQuestSelectionMaster,
                           &entity,
                           v18[6],
                           v18[7],
                           0LL);
      if ( entity )
      {
        if ( (entity->fields.flag & gameFlagVal) != 0 && ++v17 >= kindNum )
          return 1;
      }
    }
    v14 = *((_DWORD *)v15 + 6);
    if ( (int)++v16 >= v14 )
      return 0;
  }
}


bool __fastcall UserEventBoardGameTokenMaster__IsHavingToken(
        UserEventBoardGameTokenMaster_o *this,
        int32_t tokenId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  UserEventBoardGameTokenMaster___c__DisplayClass5_0_o *v18; // x21
  __int64 v19; // x0
  const MethodInfo *v20; // x1
  UserEventBoardGameTokenEntity_array *List_28067076; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v22; // x20

  if ( (byte_42EA1ED & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Any_UserEventBoardGameTokenEntity___, tokenId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Func_UserEventBoardGameTokenEntity__bool___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Func_UserEventBoardGameTokenEntity__bool__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_UserEventBoardGameTokenMaster___c__DisplayClass5_0__IsHavingToken_b__0__, v12, v13, v14);
    sub_B5D5C4(&UserEventBoardGameTokenMaster___c__DisplayClass5_0_TypeInfo, v15, v16, v17);
    byte_42EA1ED = 1;
  }
  v18 = (UserEventBoardGameTokenMaster___c__DisplayClass5_0_o *)sub_B5D694(UserEventBoardGameTokenMaster___c__DisplayClass5_0_TypeInfo);
  UserEventBoardGameTokenMaster___c__DisplayClass5_0___ctor(v18, 0LL);
  if ( !v18 )
    sub_B5D69C(v19, v20);
  v18->fields.tokenId = tokenId;
  List_28067076 = UserEventBoardGameTokenMaster__GetList_28067076(this, v20);
  v22 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_UserEventBoardGameTokenEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v22,
    (Il2CppObject *)v18,
    Method_UserEventBoardGameTokenMaster___c__DisplayClass5_0__IsHavingToken_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_UserEventBoardGameTokenEntity__bool___ctor__);
  return BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
           (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)List_28067076,
           (System_Func_T__bool__o *)v22,
           (const MethodInfo_1AD6DE0 *)Method_BasicHelper_Any_UserEventBoardGameTokenEntity___);
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

  if ( (byte_42EA1E9 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_UserEventBoardGameTokenMaster__UserEventBoardGameTokenEntity__string__TryGetEntity__,
      (_DWORD)entity,
      userId,
      *(_QWORD *)&eventId);
    byte_42EA1E9 = 1;
  }
  PK = UserEventBoardGameTokenEntity__CreatePK(userId, eventId, tokenId, *(const MethodInfo **)&eventId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_UserEventBoardGameTokenMaster__UserEventBoardGameTokenEntity__string__TryGetEntity__);
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
    sub_B5D69C(this, 0LL);
  return x->fields.tokenId == this->fields.tokenId && x->fields.num > 0;
}