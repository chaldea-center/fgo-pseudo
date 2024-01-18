void __fastcall UserEventBoardGameTokenMaster___ctor(UserEventBoardGameTokenMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4188B22 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_UserEventBoardGameTokenMaster__UserEventBoardGameTokenEntity__string___ctor__,
      method);
    byte_4188B22 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    307,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_UserEventBoardGameTokenMaster__UserEventBoardGameTokenEntity__string___ctor__);
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

  if ( (byte_4188B20 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_UserEventBoardGameTokenMaster__UserEventBoardGameTokenEntity__string__GetEntity__,
      userId);
    byte_4188B20 = 1;
  }
  PK = UserEventBoardGameTokenEntity__CreatePK(userId, eventId, tokenId, *(const MethodInfo **)&tokenId);
  return (UserEventBoardGameTokenEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                              (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                              PK,
                                              (const MethodInfo_24E4520 *)Method_DataMasterBase_UserEventBoardGameTokenMaster__UserEventBoardGameTokenEntity__string__GetEntity__);
}


UserEventBoardGameTokenEntity_array *__fastcall UserEventBoardGameTokenMaster__GetList(
        UserEventBoardGameTokenMaster_o *this,
        int64_t userId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x19
  __int64 v14; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v16; // x1
  __int64 v17; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v20; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v23; // x3
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  unsigned __int64 v25; // x10
  int32_t *v26; // x11
  __int64 v27; // x0
  __int64 v28; // x0
  UserEventBoardGameTokenEntity_c *v29; // x1
  __int64 v30; // x10
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  unsigned __int64 v32; // x10
  int32_t *v33; // x11
  __int64 v34; // x0

  if ( (byte_4188B23 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, userId);
    sub_B2C35C(&System_IDisposable_TypeInfo, v5);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserEventBoardGameTokenEntity__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserEventBoardGameTokenEntity__ToArray__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserEventBoardGameTokenEntity___ctor__, v10);
    sub_B2C35C(&System_Collections_Generic_List_UserEventBoardGameTokenEntity__TypeInfo, v11);
    sub_B2C35C(&UserEventBoardGameTokenEntity_TypeInfo, v12);
    byte_4188B23 = 1;
  }
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_UserEventBoardGameTokenEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_UserEventBoardGameTokenEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_34;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v16);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v20 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v20;
        p_offset += 4;
        if ( v20 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v17);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v24 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v25 = 0LL;
      v26 = &v24->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v26 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v25;
        v26 += 4;
        if ( v25 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v27 = (__int64)&v24->vtable[*v26].method;
    }
    else
    {
LABEL_16:
      v27 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v23);
    }
    v28 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(
            Enumerator,
            *(_QWORD *)(v27 + 8));
    if ( v28 )
    {
      v29 = UserEventBoardGameTokenEntity_TypeInfo;
      v30 = *(&UserEventBoardGameTokenEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)v28 + 300LL) < (unsigned int)v30
        || *(UserEventBoardGameTokenEntity_c **)(*(_QWORD *)(*(_QWORD *)v28 + 200LL) + 8 * v30 - 8) != UserEventBoardGameTokenEntity_TypeInfo )
      {
        v28 = sub_B2C728(v28);
LABEL_33:
        sub_B2C434(v28, v29);
      }
      if ( *(_QWORD *)(v28 + 16) == userId )
      {
        if ( !v13 )
          goto LABEL_33;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v13,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v28,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UserEventBoardGameTokenEntity__Add__);
      }
    }
  }
  v31 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v32 = 0LL;
    v33 = &v31->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
    {
      ++v32;
      v33 += 4;
      if ( v32 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v34 = (__int64)&v31->vtable[*v33].method;
  }
  else
  {
LABEL_28:
    v34 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v23);
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(
                                                                                       Enumerator,
                                                                                       *(_QWORD *)(v34 + 8));
  if ( !v13 )
LABEL_34:
    sub_B2C434(list, v14);
  return (UserEventBoardGameTokenEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v13,
                                                  (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_UserEventBoardGameTokenEntity__ToArray__);
}


UserEventBoardGameTokenEntity_array *__fastcall UserEventBoardGameTokenMaster__GetList_26998172(
        UserEventBoardGameTokenMaster_o *this,
        const MethodInfo *method)
{
  int64_t UserId; // x1
  const MethodInfo *v4; // x2

  if ( (byte_4188B24 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    byte_4188B24 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  return UserEventBoardGameTokenMaster__GetList(this, UserId, v4);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserEventBoardGameTokenMaster__IsHavingGroupToken(
        UserEventBoardGameTokenMaster_o *this,
        int32_t gameFlagVal,
        int32_t kindNum,
        const MethodInfo *method)
{
  __int64 v7; // x1
  void *Instance; // x0
  __int64 v9; // x1
  EventBoardGameTokenMaster_o *MasterData_WarQuestSelectionMaster; // x21
  const MethodInfo *v11; // x1
  int v12; // w8
  void *v13; // x22
  unsigned int v14; // w23
  int v15; // w24
  int32_t *v16; // x8
  __int64 v18; // x0
  EventBoardGameTokenEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4188B26 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventBoardGameTokenMaster___, *(_QWORD *)&gameFlagVal);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4188B26 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (EventBoardGameTokenMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                              (DataManager_o *)Instance,
                                                                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventBoardGameTokenMaster___),
        (Instance = UserEventBoardGameTokenMaster__GetList_26998172(this, v11)) == 0LL) )
  {
LABEL_18:
    sub_B2C434(Instance, v9);
  }
  v12 = *((_DWORD *)Instance + 6);
  v13 = Instance;
  if ( v12 < 1 )
    return 0;
  v14 = 0;
  v15 = 0;
  while ( 1 )
  {
    if ( v14 >= v12 )
    {
      v18 = sub_B2C460(Instance);
      sub_B2C400(v18, 0LL);
    }
    v16 = (int32_t *)*((_QWORD *)v13 + (int)v14 + 4);
    if ( !v16 )
      goto LABEL_18;
    if ( v16[8] >= 1 )
    {
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_18;
      Instance = (void *)EventBoardGameTokenMaster__TryGetEntity(
                           MasterData_WarQuestSelectionMaster,
                           &entity,
                           v16[6],
                           v16[7],
                           0LL);
      if ( entity )
      {
        if ( (entity->fields.flag & gameFlagVal) != 0 && ++v15 >= kindNum )
          return 1;
      }
    }
    v12 = *((_DWORD *)v13 + 6);
    if ( (int)++v14 >= v12 )
      return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserEventBoardGameTokenMaster__IsHavingToken(
        UserEventBoardGameTokenMaster_o *this,
        int32_t tokenId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UserEventBoardGameTokenMaster___c__DisplayClass5_0_o *v9; // x21
  __int64 v10; // x0
  const MethodInfo *v11; // x1
  UserEventBoardGameTokenEntity_array *List_26998172; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v13; // x20

  if ( (byte_4188B25 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_Any_UserEventBoardGameTokenEntity___, *(_QWORD *)&tokenId);
    sub_B2C35C(&Method_System_Func_UserEventBoardGameTokenEntity__bool___ctor__, v5);
    sub_B2C35C(&System_Func_UserEventBoardGameTokenEntity__bool__TypeInfo, v6);
    sub_B2C35C(&Method_UserEventBoardGameTokenMaster___c__DisplayClass5_0__IsHavingToken_b__0__, v7);
    sub_B2C35C(&UserEventBoardGameTokenMaster___c__DisplayClass5_0_TypeInfo, v8);
    byte_4188B25 = 1;
  }
  v9 = (UserEventBoardGameTokenMaster___c__DisplayClass5_0_o *)sub_B2C42C(UserEventBoardGameTokenMaster___c__DisplayClass5_0_TypeInfo);
  UserEventBoardGameTokenMaster___c__DisplayClass5_0___ctor(v9, 0LL);
  if ( !v9 )
    sub_B2C434(v10, v11);
  v9->fields.tokenId = tokenId;
  List_26998172 = UserEventBoardGameTokenMaster__GetList_26998172(this, v11);
  v13 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_UserEventBoardGameTokenEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v13,
    (Il2CppObject *)v9,
    Method_UserEventBoardGameTokenMaster___c__DisplayClass5_0__IsHavingToken_b__0__,
    (const MethodInfo_2711C04 *)Method_System_Func_UserEventBoardGameTokenEntity__bool___ctor__);
  return BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
           (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)List_26998172,
           (System_Func_T__bool__o *)v13,
           (const MethodInfo_1726758 *)Method_BasicHelper_Any_UserEventBoardGameTokenEntity___);
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

  if ( (byte_4188B21 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_UserEventBoardGameTokenMaster__UserEventBoardGameTokenEntity__string__TryGetEntity__,
      entity);
    byte_4188B21 = 1;
  }
  PK = UserEventBoardGameTokenEntity__CreatePK(userId, eventId, tokenId, *(const MethodInfo **)&eventId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_UserEventBoardGameTokenMaster__UserEventBoardGameTokenEntity__string__TryGetEntity__);
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
    sub_B2C434(this, 0LL);
  return x->fields.tokenId == this->fields.tokenId && x->fields.num > 0;
}