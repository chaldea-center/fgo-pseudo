void __fastcall UserQuestMaster___ctor(UserQuestMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BEE3 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string___ctor__);
    byte_4A5BEE3 = 1;
  }
  this->fields.oldId = -1LL;
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    58,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string___ctor__);
}


UserQuestEntity_o *__fastcall UserQuestMaster__CreateQuestClearDummyData(
        UserQuestMaster_o *this,
        int32_t questId,
        int32_t phase,
        int64_t updatedAt,
        const MethodInfo *method)
{
  UserQuestEntity_o *v8; // x22
  const MethodInfo *v9; // x1
  int64_t UserId; // x0
  __int64 v11; // x1

  if ( (byte_4A5BEED & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&UserQuestEntity_TypeInfo);
    byte_4A5BEED = 1;
  }
  if ( !questId )
    return 0LL;
  v8 = (UserQuestEntity_o *)sub_1B887FC(UserQuestEntity_TypeInfo);
  UserQuestEntity___ctor(v8, v9);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !v8 )
    sub_1B8880C(UserId, v11);
  v8->fields.userId = UserId;
  v8->fields.questId = questId;
  v8->fields.questPhase = phase;
  v8->fields.clearNum = 1;
  v8->fields.updatedAt = updatedAt;
  return v8;
}


// local variable allocation has failed, the output may be wrong!
UserQuestEntity_o *__fastcall UserQuestMaster__GetEntity(
        UserQuestMaster_o *this,
        int64_t userId,
        int32_t questId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5BEE4 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string__GetEntity__);
    sub_1B885B0(&UserQuestEntity_TypeInfo);
    byte_4A5BEE4 = 1;
  }
  if ( !UserQuestEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserQuestEntity_TypeInfo);
  PK = (Il2CppObject *)UserQuestEntity__CreatePK(userId, questId, *(const MethodInfo **)&questId);
  return (UserQuestEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                PK,
                                (const MethodInfo_311DC8C *)Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string__GetEntity__);
}


QuestEntity_o *__fastcall UserQuestMaster__GetLatestMainScenarioLastQuest(
        UserQuestMaster_o *this,
        int64_t userId,
        System_Collections_Generic_List_int__o *materialLatestClearList,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x20
  System_Collections_Generic_List_object__o *v9; // x22
  System_Collections_ObjectModel_Collection_T__o *v10; // x8
  __int64 v11; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x23
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v14; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  __int64 v18; // x9
  int32_t *v19; // x10
  __int64 v20; // x0
  __int64 v21; // x0
  __int64 v22; // x1
  int32_t v23; // w2
  int32_t v24; // w3
  __int64 v25; // x8
  UserQuestEntity_c *v26; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v29; // x10
  __int64 size; // x11
  Il2CppClass **v31; // x0
  System_Collections_Generic_IEnumerator_T__c *v32; // x8
  __int64 v33; // x9
  int32_t *v34; // x10
  __int64 v35; // x0
  UserQuestMaster___c_c *v36; // x8
  System_Comparison_T__o *_9__11_0; // x23
  Il2CppObject *v38; // x24
  struct UserQuestMaster___c_StaticFields *static_fields; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  __int64 v42; // x24
  __int64 v43; // x0
  __int64 v44; // x1
  int32_t v45; // w2
  int32_t v46; // w3
  int32_t current; // w1
  __int64 v48; // x23
  __int64 v49; // x0
  __int64 v50; // x1
  QuestEntity_o *QuestEntity; // x22
  System_Func_int__bool__o *v52; // x25
  __int64 TypeFlag; // x0
  __int64 v54; // x1
  Il2CppObject *v55; // x0
  __int64 v56; // x1
  int32_t WarID_ByQuestID; // w23
  BalanceConfig_c *v58; // x0
  int v60; // [xsp+Ch] [xbp-A4h]
  System_Collections_Generic_List_Enumerator_object__o v62; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v63; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4A5BEEC & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_BasicHelper_Any_int___);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&System_Comparison_UserQuestEntity__TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ConstantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__get_Current__);
    sub_1B885B0(&System_Func_int__bool__TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserQuestEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserQuestEntity__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserQuestEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserQuestEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_UserQuestEntity__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1B885B0(&Method_UserQuestMaster___c__GetLatestMainScenarioLastQuest_b__11_0__);
    sub_1B885B0(&Method_UserQuestMaster___c__DisplayClass11_0__GetLatestMainScenarioLastQuest_b__1__);
    sub_1B885B0(&UserQuestMaster___c__DisplayClass11_0_TypeInfo);
    sub_1B885B0(&UserQuestMaster___c_TypeInfo);
    sub_1B885B0(&UserQuestEntity_TypeInfo);
    sub_1B885B0(&StringLiteral_3448/*"CHAPTER_F_END_ID"*/);
    byte_4A5BEEC = 1;
  }
  memset(&v63, 0, sizeof(v63));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_70;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestMaster___);
  v9 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UserQuestEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UserQuestEntity___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_70;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ConstantMaster___);
  if ( !Instance )
    goto LABEL_70;
  Instance = (Il2CppObject *)ConstantMaster__GetValue(
                               (ConstantMaster_o *)Instance,
                               (System_String_o *)StringLiteral_3448/*"CHAPTER_F_END_ID"*/,
                               0LL);
  v10 = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  v60 = (int)Instance;
  if ( !v10 )
    goto LABEL_70;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 v10,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v11);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v14 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        p_offset += 4;
        if ( !v14 )
          goto LABEL_12;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_12:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v17 = Enumerator->klass;
    v18 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v19 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_19;
      }
      v20 = (__int64)&v17->vtable[*v19].method;
    }
    else
    {
LABEL_19:
      v20 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v21 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
            Enumerator,
            *(_QWORD *)(v20 + 8));
    v25 = v21;
    if ( !v21 )
      goto LABEL_64;
    v26 = UserQuestEntity_TypeInfo;
    methodPtr_low = LOBYTE(UserQuestEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v21 + 304LL) < (unsigned int)methodPtr_low
      || *(UserQuestEntity_c **)(*(_QWORD *)(*(_QWORD *)v21 + 200LL) + 8 * methodPtr_low - 8) != UserQuestEntity_TypeInfo )
    {
      sub_1B88ACC(v21);
LABEL_64:
      sub_1B8880C(v21, v22);
    }
    if ( *(_QWORD *)(v21 + 24) == userId && *(_DWORD *)(v21 + 40) )
    {
      if ( !v9 )
        sub_1B8880C(v21, UserQuestEntity_TypeInfo);
      items = v9->fields._items;
      v29 = Method_System_Collections_Generic_List_UserQuestEntity__Add__;
      ++v9->fields._version;
      if ( !items )
        sub_1B8880C(v21, v26);
      size = v9->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v9,
          (Il2CppObject *)v21,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
      }
      else
      {
        v31 = &items->obj.klass + size;
        v9->fields._size = size + 1;
        v31[4] = (Il2CppClass *)v25;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v31 + 4), v25, v23, v24);
      }
    }
  }
  v32 = Enumerator->klass;
  v33 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v34 = &v32->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v34 - 1) != System_IDisposable_TypeInfo )
    {
      --v33;
      v34 += 4;
      if ( !v33 )
        goto LABEL_35;
    }
    v35 = (__int64)&v32->vtable[*v34].method;
  }
  else
  {
LABEL_35:
    v35 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  Instance = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v35)(
                               Enumerator,
                               *(_QWORD *)(v35 + 8));
  v36 = UserQuestMaster___c_TypeInfo;
  if ( !UserQuestMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserQuestMaster___c_TypeInfo);
    v36 = UserQuestMaster___c_TypeInfo;
  }
  _9__11_0 = (System_Comparison_T__o *)v36->static_fields->__9__11_0;
  if ( !_9__11_0 )
  {
    if ( !v36->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v36);
      v36 = UserQuestMaster___c_TypeInfo;
    }
    v38 = (Il2CppObject *)v36->static_fields->__9;
    _9__11_0 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_UserQuestEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__11_0,
      v38,
      Method_UserQuestMaster___c__GetLatestMainScenarioLastQuest_b__11_0__,
      0LL);
    static_fields = UserQuestMaster___c_TypeInfo->static_fields;
    static_fields->__9__11_0 = (struct System_Comparison_UserQuestEntity__o *)_9__11_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__11_0, (int32_t)_9__11_0, v40, v41);
  }
  if ( !v9 )
LABEL_70:
    sub_1B8880C(Instance, v7);
  System_Collections_Generic_List_object___Sort_55571192(
    v9,
    _9__11_0,
    (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_UserQuestEntity__Sort__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v62,
    v9,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_UserQuestEntity__GetEnumerator__);
  v63 = v62;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v63,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__MoveNext__) )
  {
    v42 = sub_1B887FC(UserQuestMaster___c__DisplayClass11_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v42, 0LL);
    if ( !v42 )
      sub_1B8880C(v43, v44);
    current = (int32_t)v63.fields._current;
    *(_QWORD *)(v42 + 16) = v63.fields._current;
    v48 = v42 + 16;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v42 + 16), current, v45, v46);
    if ( !*(_QWORD *)(v42 + 16) )
      sub_1B8880C(v49, v50);
    if ( !MasterData_object )
      sub_1B8880C(v49, v50);
    QuestEntity = QuestMaster__getQuestEntity(
                    (QuestMaster_o *)MasterData_object,
                    *(_DWORD *)(*(_QWORD *)(v42 + 16) + 32LL),
                    0LL);
    if ( QuestEntity )
    {
      v52 = (System_Func_int__bool__o *)sub_1B887FC(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(
        v52,
        (Il2CppObject *)v42,
        Method_UserQuestMaster___c__DisplayClass11_0__GetLatestMainScenarioLastQuest_b__1__,
        0LL);
      if ( BasicHelper__Any_int_(
             (System_Collections_Generic_List_T__o *)materialLatestClearList,
             (System_Func_T__bool__o *)v52,
             (const MethodInfo_2E6A9A4 *)Method_BasicHelper_Any_int___) )
      {
        goto LABEL_62;
      }
      TypeFlag = QuestEntity__GetTypeFlag(QuestEntity, 0LL);
      if ( (_DWORD)TypeFlag == 2 )
      {
        if ( QuestEntity->fields.chapterId )
          goto LABEL_59;
        if ( !*(_QWORD *)v48 )
          sub_1B8880C(TypeFlag, v54);
        if ( *(_DWORD *)(*(_QWORD *)v48 + 32LL) <= v60 )
        {
LABEL_59:
          v55 = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_QuestTree__get_Instance__);
          if ( !*(_QWORD *)v48 )
            sub_1B8880C(v55, v56);
          if ( !v55 )
            sub_1B8880C(0LL, v56);
          WarID_ByQuestID = QuestTree__GetWarID_ByQuestID((QuestTree_o *)v55, *(_DWORD *)(*(_QWORD *)v48 + 32LL), 0LL);
          v58 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v58 = BalanceConfig_TypeInfo;
          }
          if ( WarID_ByQuestID < v58->static_fields->PowerUpQuestWarId )
            goto LABEL_62;
        }
      }
    }
  }
  QuestEntity = 0LL;
LABEL_62:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v63,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__Dispose__);
  return QuestEntity;
}


QuestEntity_o *__fastcall UserQuestMaster__GetMainScenarioLatestClear(
        UserQuestMaster_o *this,
        int64_t userId,
        System_Collections_Generic_List_int__o *materialLatestClearList,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x20
  System_Collections_Generic_List_object__o *v9; // x22
  System_Collections_ObjectModel_Collection_T__o *v10; // x8
  __int64 v11; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x23
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v14; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  __int64 v18; // x9
  int32_t *v19; // x10
  __int64 v20; // x0
  Il2CppObject *v21; // x0
  __int64 v22; // x1
  int32_t v23; // w2
  int32_t v24; // w3
  Il2CppObject *v25; // x8
  UserQuestEntity_c *v26; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v29; // x10
  __int64 size; // x11
  Il2CppClass **v31; // x0
  System_Collections_Generic_IEnumerator_T__c *v32; // x8
  __int64 v33; // x9
  int32_t *v34; // x10
  __int64 v35; // x0
  UserQuestMaster___c_c *v36; // x8
  System_Comparison_T__o *_9__10_0; // x23
  Il2CppObject *v38; // x24
  struct UserQuestMaster___c_StaticFields *static_fields; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  __int64 v42; // x24
  __int64 v43; // x0
  __int64 v44; // x1
  int32_t v45; // w2
  int32_t v46; // w3
  int32_t current; // w1
  __int64 v48; // x23
  __int64 v49; // x0
  __int64 v50; // x1
  QuestEntity_o *QuestEntity; // x22
  System_Func_int__bool__o *v52; // x25
  __int64 TypeFlag; // x0
  __int64 v54; // x1
  Il2CppObject *v55; // x0
  __int64 v56; // x1
  int32_t WarID_ByQuestID; // w23
  BalanceConfig_c *v58; // x0
  int v60; // [xsp+Ch] [xbp-A4h]
  System_Collections_Generic_List_Enumerator_object__o v62; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v63; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4A5BEEB & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_BasicHelper_Any_int___);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&System_Comparison_UserQuestEntity__TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ConstantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__get_Current__);
    sub_1B885B0(&System_Func_int__bool__TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserQuestEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserQuestEntity__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserQuestEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserQuestEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_UserQuestEntity__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1B885B0(&Method_UserQuestMaster___c__GetMainScenarioLatestClear_b__10_0__);
    sub_1B885B0(&Method_UserQuestMaster___c__DisplayClass10_0__GetMainScenarioLatestClear_b__1__);
    sub_1B885B0(&UserQuestMaster___c__DisplayClass10_0_TypeInfo);
    sub_1B885B0(&UserQuestMaster___c_TypeInfo);
    sub_1B885B0(&UserQuestEntity_TypeInfo);
    sub_1B885B0(&StringLiteral_3448/*"CHAPTER_F_END_ID"*/);
    byte_4A5BEEB = 1;
  }
  memset(&v63, 0, sizeof(v63));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_69;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestMaster___);
  v9 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UserQuestEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UserQuestEntity___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_69;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ConstantMaster___);
  if ( !Instance )
    goto LABEL_69;
  Instance = (Il2CppObject *)ConstantMaster__GetValue(
                               (ConstantMaster_o *)Instance,
                               (System_String_o *)StringLiteral_3448/*"CHAPTER_F_END_ID"*/,
                               0LL);
  v10 = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  v60 = (int)Instance;
  if ( !v10 )
    goto LABEL_69;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 v10,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v11);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v14 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        p_offset += 4;
        if ( !v14 )
          goto LABEL_12;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_12:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v17 = Enumerator->klass;
    v18 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v19 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_19;
      }
      v20 = (__int64)&v17->vtable[*v19].method;
    }
    else
    {
LABEL_19:
      v20 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v21 = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
                            Enumerator,
                            *(_QWORD *)(v20 + 8));
    v25 = v21;
    if ( !v21 )
      goto LABEL_63;
    v26 = UserQuestEntity_TypeInfo;
    methodPtr_low = LOBYTE(UserQuestEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v21->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
      || (UserQuestEntity_c *)v21->klass->_2.typeHierarchy[methodPtr_low - 1] != UserQuestEntity_TypeInfo )
    {
      sub_1B88ACC(v21);
LABEL_63:
      sub_1B8880C(v21, v22);
    }
    if ( v21[1].monitor == (void *)userId )
    {
      if ( !v9 )
        sub_1B8880C(v21, UserQuestEntity_TypeInfo);
      items = v9->fields._items;
      v29 = Method_System_Collections_Generic_List_UserQuestEntity__Add__;
      ++v9->fields._version;
      if ( !items )
        sub_1B8880C(v21, v26);
      size = v9->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v9,
          v21,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
      }
      else
      {
        v31 = &items->obj.klass + size;
        v9->fields._size = size + 1;
        v31[4] = (Il2CppClass *)v25;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v31 + 4), (int32_t)v25, v23, v24);
      }
    }
  }
  v32 = Enumerator->klass;
  v33 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v34 = &v32->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v34 - 1) != System_IDisposable_TypeInfo )
    {
      --v33;
      v34 += 4;
      if ( !v33 )
        goto LABEL_34;
    }
    v35 = (__int64)&v32->vtable[*v34].method;
  }
  else
  {
LABEL_34:
    v35 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  Instance = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v35)(
                               Enumerator,
                               *(_QWORD *)(v35 + 8));
  v36 = UserQuestMaster___c_TypeInfo;
  if ( !UserQuestMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserQuestMaster___c_TypeInfo);
    v36 = UserQuestMaster___c_TypeInfo;
  }
  _9__10_0 = (System_Comparison_T__o *)v36->static_fields->__9__10_0;
  if ( !_9__10_0 )
  {
    if ( !v36->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v36);
      v36 = UserQuestMaster___c_TypeInfo;
    }
    v38 = (Il2CppObject *)v36->static_fields->__9;
    _9__10_0 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_UserQuestEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__10_0,
      v38,
      Method_UserQuestMaster___c__GetMainScenarioLatestClear_b__10_0__,
      0LL);
    static_fields = UserQuestMaster___c_TypeInfo->static_fields;
    static_fields->__9__10_0 = (struct System_Comparison_UserQuestEntity__o *)_9__10_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__10_0, (int32_t)_9__10_0, v40, v41);
  }
  if ( !v9 )
LABEL_69:
    sub_1B8880C(Instance, v7);
  System_Collections_Generic_List_object___Sort_55571192(
    v9,
    _9__10_0,
    (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_UserQuestEntity__Sort__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v62,
    v9,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_UserQuestEntity__GetEnumerator__);
  v63 = v62;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v63,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__MoveNext__) )
  {
    v42 = sub_1B887FC(UserQuestMaster___c__DisplayClass10_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v42, 0LL);
    if ( !v42 )
      sub_1B8880C(v43, v44);
    current = (int32_t)v63.fields._current;
    *(_QWORD *)(v42 + 16) = v63.fields._current;
    v48 = v42 + 16;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v42 + 16), current, v45, v46);
    if ( !*(_QWORD *)(v42 + 16) )
      sub_1B8880C(v49, v50);
    if ( !MasterData_object )
      sub_1B8880C(v49, v50);
    QuestEntity = QuestMaster__getQuestEntity(
                    (QuestMaster_o *)MasterData_object,
                    *(_DWORD *)(*(_QWORD *)(v42 + 16) + 32LL),
                    0LL);
    if ( QuestEntity )
    {
      v52 = (System_Func_int__bool__o *)sub_1B887FC(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(
        v52,
        (Il2CppObject *)v42,
        Method_UserQuestMaster___c__DisplayClass10_0__GetMainScenarioLatestClear_b__1__,
        0LL);
      if ( BasicHelper__Any_int_(
             (System_Collections_Generic_List_T__o *)materialLatestClearList,
             (System_Func_T__bool__o *)v52,
             (const MethodInfo_2E6A9A4 *)Method_BasicHelper_Any_int___) )
      {
        goto LABEL_61;
      }
      TypeFlag = QuestEntity__GetTypeFlag(QuestEntity, 0LL);
      if ( (_DWORD)TypeFlag == 2 )
      {
        if ( QuestEntity->fields.chapterId )
          goto LABEL_58;
        if ( !*(_QWORD *)v48 )
          sub_1B8880C(TypeFlag, v54);
        if ( *(_DWORD *)(*(_QWORD *)v48 + 32LL) <= v60 )
        {
LABEL_58:
          v55 = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_QuestTree__get_Instance__);
          if ( !*(_QWORD *)v48 )
            sub_1B8880C(v55, v56);
          if ( !v55 )
            sub_1B8880C(0LL, v56);
          WarID_ByQuestID = QuestTree__GetWarID_ByQuestID((QuestTree_o *)v55, *(_DWORD *)(*(_QWORD *)v48 + 32LL), 0LL);
          v58 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v58 = BalanceConfig_TypeInfo;
          }
          if ( WarID_ByQuestID < v58->static_fields->PowerUpQuestWarId )
            goto LABEL_61;
        }
      }
    }
  }
  QuestEntity = 0LL;
LABEL_61:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v63,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__Dispose__);
  return QuestEntity;
}


bool __fastcall UserQuestMaster__IsQuestResetAndQuestClear(
        UserQuestMaster_o *this,
        int64_t userId,
        int32_t questId,
        const MethodInfo *method)
{
  UserQuestEntity_o *EntityFromId; // x0

  EntityFromId = UserQuestMaster__getEntityFromId(this, userId, questId, method);
  return EntityFromId && EntityFromId->fields.clearNum >= 1 && (EntityFromId->fields.status & 2) != 0;
}


bool __fastcall UserQuestMaster__IsQuestResetAndQuestClearIds(
        UserQuestMaster_o *this,
        int64_t userId,
        System_Int32_array *questIds,
        const MethodInfo *method)
{
  __int64 v4; // x8
  bool v6; // w22
  UserQuestMaster_o *v8; // x21
  unsigned __int64 v9; // x23

  if ( !questIds )
    sub_1B8880C(this, userId);
  v4 = *(_QWORD *)&questIds->max_length;
  v6 = (int)v4 > 0;
  if ( (int)v4 >= 1 )
  {
    v8 = this;
    v9 = 0LL;
    do
    {
      if ( v9 >= (unsigned int)v4 )
        sub_1B88814(this, userId);
      this = (UserQuestMaster_o *)UserQuestMaster__getEntityFromId(v8, userId, questIds->m_Items[v9 + 1], method);
      if ( this && SLODWORD(this->fields._lookup) >= 1 && (BYTE4(this->fields.sb) & 2) != 0 )
        break;
      LODWORD(v4) = questIds->max_length;
      v6 = (__int64)++v9 < (int)v4;
    }
    while ( (__int64)v9 < (int)v4 );
  }
  return v6;
}


bool __fastcall UserQuestMaster__TryGetEntity(
        UserQuestMaster_o *this,
        UserQuestEntity_o **entity,
        int64_t userId,
        int32_t questId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A5BEE5 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string__TryGetEntity__);
    sub_1B885B0(&UserQuestEntity_TypeInfo);
    byte_4A5BEE5 = 1;
  }
  if ( !UserQuestEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserQuestEntity_TypeInfo);
  PK = (Il2CppObject *)UserQuestEntity__CreatePK(userId, questId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string__TryGetEntity__);
}


int32_t __fastcall UserQuestMaster__getChallengeCountsFromId(
        UserQuestMaster_o *this,
        int64_t userId,
        int32_t questId,
        const MethodInfo *method)
{
  System_String_o *v6; // x0
  struct System_String_o *v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *userIdString; // x20
  System_String_o *v11; // x0
  System_String_o *v12; // x20
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  __int64 v14; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v16; // x19
  __int64 v17; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x10
  __int64 p_method; // x0
  __int64 methodPtr_low; // x9
  UserQuestMaster_o *v22; // x0
  int64_t v23; // x1
  System_Int32_array *v24; // x2
  const MethodInfo *v25; // x3
  int32_t *v26; // [xsp+8h] [xbp-38h] BYREF
  int32_t v27; // [xsp+14h] [xbp-2Ch] BYREF
  int64_t v28; // [xsp+18h] [xbp-28h] BYREF

  v28 = userId;
  v27 = questId;
  if ( (byte_4A5BEE7 & 1) == 0 )
  {
    sub_1B885B0(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_1B885B0(&UserQuestEntity_TypeInfo);
    sub_1B885B0(&StringLiteral_1544/*":"*/);
    byte_4A5BEE7 = 1;
  }
  v26 = 0LL;
  if ( this->fields.oldId != userId )
  {
    this->fields.oldId = userId;
    v6 = System_Int64__ToString((int64_t)&v28, 0LL);
    v7 = System_String__Concat_61707032(v6, (System_String_o *)StringLiteral_1544/*":"*/, 0LL);
    this->fields.userIdString = v7;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.userIdString, (int32_t)v7, v8, v9);
  }
  userIdString = this->fields.userIdString;
  v11 = System_Int32__ToString((int32_t)&v27, 0LL);
  v12 = System_String__Concat_61707032(userIdString, v11, 0LL);
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_18;
  klass = lookup->klass;
  v16 = lookup;
  v17 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v17;
      p_offset += 2;
      if ( !v17 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
  }
  else
  {
LABEL_10:
    p_method = sub_1BDA590(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, int32_t **, _QWORD))p_method)(
          v16,
          v12,
          &v26,
          *(_QWORD *)(p_method + 8)) & 1) == 0 )
    return 0;
  lookup = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *)v26;
  if ( !v26 )
LABEL_18:
    sub_1B8880C(lookup, v14);
  methodPtr_low = LOBYTE(UserQuestEntity_TypeInfo->vtable._0_Equals.methodPtr);
  if ( *(unsigned __int8 *)(*(_QWORD *)v26 + 304LL) >= (unsigned int)methodPtr_low
    && *(UserQuestEntity_c **)(*(_QWORD *)(*(_QWORD *)v26 + 200LL) + 8 * methodPtr_low - 8) == UserQuestEntity_TypeInfo )
  {
    return v26[14];
  }
  sub_1B88ACC(v26);
  return UserQuestMaster__getChallengeCountsFromIds(v22, v23, v24, v25);
}


int32_t __fastcall UserQuestMaster__getChallengeCountsFromIds(
        UserQuestMaster_o *this,
        int64_t userId,
        System_Int32_array *questIds,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v7; // x21
  __int64 v8; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v11; // w23
  int32_t v12; // w22
  int32_t v13; // w24
  _DWORD *v14; // x25
  __int64 methodPtr_low; // x10

  if ( (byte_4A5BEE8 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Remove__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor___76036512);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&UserQuestEntity_TypeInfo);
    byte_4A5BEE8 = 1;
  }
  v7 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_55443684(
    v7,
    (System_Collections_Generic_IEnumerable_T__o *)questIds,
    (const MethodInfo_34E00E4 *)Method_System_Collections_Generic_List_int___ctor___76036512);
  list = this->fields.list;
  if ( !list )
    goto LABEL_18;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0;
    v13 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v13,
               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v14 = list;
      methodPtr_low = LOBYTE(UserQuestEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
        || *(UserQuestEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != UserQuestEntity_TypeInfo )
      {
        break;
      }
      if ( *((_QWORD *)list + 3) != userId )
        goto LABEL_21;
      if ( !v7 )
        break;
      if ( !System_Collections_Generic_List_int___Remove(
              v7,
              *((_DWORD *)list + 8),
              (const MethodInfo_34E1D0C *)Method_System_Collections_Generic_List_int__Remove__)
        || (v12 += v14[14], v7->fields._size) )
      {
LABEL_21:
        if ( v11 != ++v13 )
          continue;
      }
      return v12;
    }
LABEL_18:
    sub_1B8880C(list, v8);
  }
  return 0;
}


int32_t __fastcall UserQuestMaster__getClearCountsFromId(
        UserQuestMaster_o *this,
        int64_t userId,
        int32_t questId,
        const MethodInfo *method)
{
  System_String_o *v6; // x0
  struct System_String_o *v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *userIdString; // x20
  System_String_o *v11; // x0
  System_String_o *v12; // x20
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  __int64 v14; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v16; // x19
  __int64 v17; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x10
  __int64 p_method; // x0
  __int64 methodPtr_low; // x9
  UserQuestMaster_o *v22; // x0
  int64_t v23; // x1
  System_Int32_array *v24; // x2
  const MethodInfo *v25; // x3
  int32_t *v26; // [xsp+8h] [xbp-38h] BYREF
  int32_t v27; // [xsp+14h] [xbp-2Ch] BYREF
  int64_t v28; // [xsp+18h] [xbp-28h] BYREF

  v28 = userId;
  v27 = questId;
  if ( (byte_4A5BEE9 & 1) == 0 )
  {
    sub_1B885B0(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_1B885B0(&UserQuestEntity_TypeInfo);
    sub_1B885B0(&StringLiteral_1544/*":"*/);
    byte_4A5BEE9 = 1;
  }
  v26 = 0LL;
  if ( this->fields.oldId != userId )
  {
    this->fields.oldId = userId;
    v6 = System_Int64__ToString((int64_t)&v28, 0LL);
    v7 = System_String__Concat_61707032(v6, (System_String_o *)StringLiteral_1544/*":"*/, 0LL);
    this->fields.userIdString = v7;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.userIdString, (int32_t)v7, v8, v9);
  }
  userIdString = this->fields.userIdString;
  v11 = System_Int32__ToString((int32_t)&v27, 0LL);
  v12 = System_String__Concat_61707032(userIdString, v11, 0LL);
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_18;
  klass = lookup->klass;
  v16 = lookup;
  v17 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v17;
      p_offset += 2;
      if ( !v17 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
  }
  else
  {
LABEL_10:
    p_method = sub_1BDA590(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, int32_t **, _QWORD))p_method)(
          v16,
          v12,
          &v26,
          *(_QWORD *)(p_method + 8)) & 1) == 0 )
    return 0;
  lookup = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *)v26;
  if ( !v26 )
LABEL_18:
    sub_1B8880C(lookup, v14);
  methodPtr_low = LOBYTE(UserQuestEntity_TypeInfo->vtable._0_Equals.methodPtr);
  if ( *(unsigned __int8 *)(*(_QWORD *)v26 + 304LL) >= (unsigned int)methodPtr_low
    && *(UserQuestEntity_c **)(*(_QWORD *)(*(_QWORD *)v26 + 200LL) + 8 * methodPtr_low - 8) == UserQuestEntity_TypeInfo )
  {
    return v26[10];
  }
  sub_1B88ACC(v26);
  return UserQuestMaster__getClearCountsFromIds(v22, v23, v24, v25);
}


int32_t __fastcall UserQuestMaster__getClearCountsFromIds(
        UserQuestMaster_o *this,
        int64_t userId,
        System_Int32_array *questIds,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v7; // x21
  __int64 v8; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v11; // w23
  int32_t v12; // w22
  int32_t v13; // w24
  _DWORD *v14; // x25
  __int64 methodPtr_low; // x10

  if ( (byte_4A5BEEA & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Remove__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor___76036512);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&UserQuestEntity_TypeInfo);
    byte_4A5BEEA = 1;
  }
  v7 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_55443684(
    v7,
    (System_Collections_Generic_IEnumerable_T__o *)questIds,
    (const MethodInfo_34E00E4 *)Method_System_Collections_Generic_List_int___ctor___76036512);
  list = this->fields.list;
  if ( !list )
    goto LABEL_18;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0;
    v13 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v13,
               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v14 = list;
      methodPtr_low = LOBYTE(UserQuestEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
        || *(UserQuestEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != UserQuestEntity_TypeInfo )
      {
        break;
      }
      if ( *((_QWORD *)list + 3) != userId )
        goto LABEL_21;
      if ( !v7 )
        break;
      if ( !System_Collections_Generic_List_int___Remove(
              v7,
              *((_DWORD *)list + 8),
              (const MethodInfo_34E1D0C *)Method_System_Collections_Generic_List_int__Remove__)
        || (v12 += v14[10], v7->fields._size) )
      {
LABEL_21:
        if ( v11 != ++v13 )
          continue;
      }
      return v12;
    }
LABEL_18:
    sub_1B8880C(list, v8);
  }
  return 0;
}


UserQuestEntity_o *__fastcall UserQuestMaster__getEntityFromId(
        UserQuestMaster_o *this,
        int64_t userId,
        int32_t questId,
        const MethodInfo *method)
{
  System_String_o *v6; // x0
  struct System_String_o *v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *userIdString; // x20
  System_String_o *v11; // x0
  System_String_o *v12; // x20
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  __int64 v14; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v16; // x21
  __int64 v17; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *v20; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v21; // x19
  __int64 v22; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v23; // x10
  __int64 v24; // x0
  UserQuestEntity_o *result; // x0
  __int64 methodPtr_low; // x10
  int32_t v27; // [xsp+Ch] [xbp-34h] BYREF
  int64_t v28; // [xsp+18h] [xbp-28h] BYREF

  v28 = userId;
  v27 = questId;
  if ( (byte_4A5BEE6 & 1) == 0 )
  {
    sub_1B885B0(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_1B885B0(&UserQuestEntity_TypeInfo);
    sub_1B885B0(&StringLiteral_1544/*":"*/);
    byte_4A5BEE6 = 1;
  }
  if ( this->fields.oldId != userId )
  {
    this->fields.oldId = userId;
    v6 = System_Int64__ToString((int64_t)&v28, 0LL);
    v7 = System_String__Concat_61707032(v6, (System_String_o *)StringLiteral_1544/*":"*/, 0LL);
    this->fields.userIdString = v7;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.userIdString, (int32_t)v7, v8, v9);
  }
  userIdString = this->fields.userIdString;
  v11 = System_Int32__ToString((int32_t)&v27, 0LL);
  v12 = System_String__Concat_61707032(userIdString, v11, 0LL);
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_27;
  klass = lookup->klass;
  v16 = lookup;
  v17 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v17;
      p_offset += 4;
      if ( !v17 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_10:
    p_method = sub_1BDA590(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))p_method)(
          v16,
          v12,
          *(_QWORD *)(p_method + 8)) & 1) == 0 )
    return 0LL;
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
LABEL_27:
    sub_1B8880C(lookup, v14);
  v20 = lookup->klass;
  v21 = lookup;
  v22 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    v23 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v20->_1.interfaceOffsets->offset;
    while ( *(v23 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v22;
      v23 += 2;
      if ( !v22 )
        goto LABEL_18;
    }
    v24 = (__int64)&v20->vtable[*(_DWORD *)v23 + 2].method;
  }
  else
  {
LABEL_18:
    v24 = sub_1BDA590(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
  }
  result = (UserQuestEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))v24)(
                                  v21,
                                  v12,
                                  *(_QWORD *)(v24 + 8));
  if ( result )
  {
    methodPtr_low = LOBYTE(UserQuestEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
      return 0LL;
    if ( (UserQuestEntity_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != UserQuestEntity_TypeInfo )
      return 0LL;
  }
  return result;
}


void __fastcall UserQuestMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5BEEE & 1) == 0 )
  {
    sub_1B885B0(&UserQuestMaster___c_TypeInfo);
    byte_4A5BEEE = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(UserQuestMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  UserQuestMaster___c_TypeInfo->static_fields->__9 = (struct UserQuestMaster___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)UserQuestMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void __fastcall UserQuestMaster___c___ctor(UserQuestMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall UserQuestMaster___c___GetLatestMainScenarioLastQuest_b__11_0(
        UserQuestMaster___c_o *this,
        UserQuestEntity_o *x,
        UserQuestEntity_o *y,
        const MethodInfo *method)
{
  if ( !y || !x )
    sub_1B8880C(this, x);
  return y->fields.questId - x->fields.questId;
}


int32_t __fastcall UserQuestMaster___c___GetMainScenarioLatestClear_b__10_0(
        UserQuestMaster___c_o *this,
        UserQuestEntity_o *x,
        UserQuestEntity_o *y,
        const MethodInfo *method)
{
  int64_t v4; // x8

  if ( !y || !x )
    sub_1B8880C(this, x);
  v4 = y->fields.updatedAt - x->fields.updatedAt;
  if ( v4 < 0 )
    return -1;
  if ( v4 )
    return 1;
  return y->fields.questId - x->fields.questId;
}


void __fastcall UserQuestMaster___c__DisplayClass10_0___ctor(
        UserQuestMaster___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall UserQuestMaster___c__DisplayClass10_0___GetMainScenarioLatestClear_b__1(
        UserQuestMaster___c__DisplayClass10_0_o *this,
        int32_t a,
        const MethodInfo *method)
{
  struct UserQuestEntity_o *usrEnt; // x8

  usrEnt = this->fields.usrEnt;
  if ( !usrEnt )
    sub_1B8880C(this, a);
  return usrEnt->fields.questId == a;
}


void __fastcall UserQuestMaster___c__DisplayClass11_0___ctor(
        UserQuestMaster___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall UserQuestMaster___c__DisplayClass11_0___GetLatestMainScenarioLastQuest_b__1(
        UserQuestMaster___c__DisplayClass11_0_o *this,
        int32_t a,
        const MethodInfo *method)
{
  struct UserQuestEntity_o *usrEnt; // x8

  usrEnt = this->fields.usrEnt;
  if ( !usrEnt )
    sub_1B8880C(this, a);
  return usrEnt->fields.questId == a;
}