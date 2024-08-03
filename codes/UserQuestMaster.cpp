void __fastcall UserQuestMaster___ctor(UserQuestMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FD16A & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string___ctor__, method);
    byte_49FD16A = 1;
  }
  this->fields.oldId = -1LL;
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    58,
    (const MethodInfo_30D41BC *)Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserQuestEntity_o *__fastcall UserQuestMaster__CreateQuestClearDummyData(
        UserQuestMaster_o *this,
        int32_t questId,
        int32_t phase,
        int64_t updatedAt,
        const MethodInfo *method)
{
  __int64 v8; // x1
  UserQuestEntity_o *v9; // x22
  const MethodInfo *v10; // x1
  int64_t UserId; // x0

  if ( (byte_49FD174 & 1) == 0 )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, *(_QWORD *)&questId);
    sub_1B640C8(&UserQuestEntity_TypeInfo, v8);
    byte_49FD174 = 1;
  }
  if ( !questId )
    return 0LL;
  v9 = (UserQuestEntity_o *)sub_1B64314(UserQuestEntity_TypeInfo, *(_QWORD *)&questId, *(_QWORD *)&phase);
  UserQuestEntity___ctor(v9, v10);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !v9 )
    sub_1B64324(UserId);
  v9->fields.userId = UserId;
  v9->fields.questId = questId;
  v9->fields.questPhase = phase;
  v9->fields.clearNum = 1;
  v9->fields.updatedAt = updatedAt;
  return v9;
}


// local variable allocation has failed, the output may be wrong!
UserQuestEntity_o *__fastcall UserQuestMaster__GetEntity(
        UserQuestMaster_o *this,
        int64_t userId,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  Il2CppObject *PK; // x1

  if ( (byte_49FD16B & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string__GetEntity__, userId);
    sub_1B640C8(&UserQuestEntity_TypeInfo, v7);
    byte_49FD16B = 1;
  }
  if ( !UserQuestEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserQuestEntity_TypeInfo);
  PK = (Il2CppObject *)UserQuestEntity__CreatePK(userId, questId, *(const MethodInfo **)&questId);
  return (UserQuestEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                PK,
                                (const MethodInfo_30D41FC *)Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string__GetEntity__);
}


QuestEntity_o *__fastcall UserQuestMaster__GetLatestMainScenarioLastQuest(
        UserQuestMaster_o *this,
        int64_t userId,
        System_Collections_Generic_List_int__o *materialLatestClearList,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x20
  __int64 v33; // x1
  __int64 v34; // x2
  System_Collections_Generic_List_object__o *v35; // x22
  System_Collections_ObjectModel_Collection_T__o *v36; // x8
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x23
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v39; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v42; // x8
  __int64 v43; // x9
  int32_t *v44; // x10
  __int64 v45; // x0
  __int64 v46; // x0
  int32_t v47; // w2
  int32_t v48; // w3
  __int64 v49; // x8
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v52; // x10
  __int64 size; // x11
  Il2CppClass **v54; // x0
  System_Collections_Generic_IEnumerator_T__c *v55; // x8
  __int64 v56; // x9
  int32_t *v57; // x10
  __int64 v58; // x0
  __int64 v59; // x1
  __int64 v60; // x2
  UserQuestMaster___c_c *v61; // x8
  System_Comparison_T__o *_9__11_0; // x23
  Il2CppObject *v63; // x24
  struct UserQuestMaster___c_StaticFields *static_fields; // x0
  int32_t v65; // w2
  int32_t v66; // w3
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x24
  __int64 v70; // x0
  int32_t v71; // w2
  int32_t v72; // w3
  int32_t current; // w1
  __int64 v74; // x23
  __int64 v75; // x0
  __int64 v76; // x1
  __int64 v77; // x2
  QuestEntity_o *QuestEntity; // x22
  System_Func_int__bool__o *v79; // x25
  __int64 TypeFlag; // x0
  Il2CppObject *v81; // x0
  int32_t WarID_ByQuestID; // w23
  BalanceConfig_c *v83; // x0
  int v85; // [xsp+Ch] [xbp-A4h]
  System_Collections_Generic_List_Enumerator_object__o v87; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v88; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_49FD173 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, userId);
    sub_1B640C8(&Method_BasicHelper_Any_int___, v6);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v7);
    sub_1B640C8(&System_Comparison_UserQuestEntity__TypeInfo, v8);
    sub_1B640C8(&Method_DataManager_GetMasterData_ConstantMaster___, v9);
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestMaster___, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__Dispose__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__MoveNext__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__get_Current__, v13);
    sub_1B640C8(&System_Func_int__bool__TypeInfo, v14);
    sub_1B640C8(&System_IDisposable_TypeInfo, v15);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v16);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserQuestEntity__Add__, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserQuestEntity__GetEnumerator__, v19);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserQuestEntity__Sort__, v20);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserQuestEntity___ctor__, v21);
    sub_1B640C8(&System_Collections_Generic_List_UserQuestEntity__TypeInfo, v22);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23);
    sub_1B640C8(&Method_SingletonTemplate_QuestTree__get_Instance__, v24);
    sub_1B640C8(&Method_UserQuestMaster___c__GetLatestMainScenarioLastQuest_b__11_0__, v25);
    sub_1B640C8(&Method_UserQuestMaster___c__DisplayClass11_0__GetLatestMainScenarioLastQuest_b__1__, v26);
    sub_1B640C8(&UserQuestMaster___c__DisplayClass11_0_TypeInfo, v27);
    sub_1B640C8(&UserQuestMaster___c_TypeInfo, v28);
    sub_1B640C8(&UserQuestEntity_TypeInfo, v29);
    sub_1B640C8(&StringLiteral_3426/*"CHAPTER_F_END_ID"*/, v30);
    byte_49FD173 = 1;
  }
  memset(&v88, 0, sizeof(v88));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_70;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestMaster___);
  v35 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_UserQuestEntity__TypeInfo,
                                                       v33,
                                                       v34);
  System_Collections_Generic_List_object____ctor(
    v35,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_UserQuestEntity___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_70;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ConstantMaster___);
  if ( !Instance )
    goto LABEL_70;
  Instance = (Il2CppObject *)ConstantMaster__GetValue(
                               (ConstantMaster_o *)Instance,
                               (System_String_o *)StringLiteral_3426/*"CHAPTER_F_END_ID"*/,
                               0LL);
  v36 = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  v85 = (int)Instance;
  if ( !v36 )
    goto LABEL_70;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 v36,
                 (const MethodInfo_30710E0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B64324(0LL);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v39 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v39;
        p_offset += 4;
        if ( !v39 )
          goto LABEL_12;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_12:
      p_method = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v42 = Enumerator->klass;
    v43 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v44 = &v42->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v44 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v43;
        v44 += 4;
        if ( !v43 )
          goto LABEL_19;
      }
      v45 = (__int64)&v42->vtable[*v44].method;
    }
    else
    {
LABEL_19:
      v45 = sub_1BB60A8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v46 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v45)(
            Enumerator,
            *(_QWORD *)(v45 + 8));
    v49 = v46;
    if ( !v46 )
      goto LABEL_64;
    methodPtr_low = LOBYTE(UserQuestEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v46 + 304LL) < (unsigned int)methodPtr_low
      || *(UserQuestEntity_c **)(*(_QWORD *)(*(_QWORD *)v46 + 200LL) + 8 * methodPtr_low - 8) != UserQuestEntity_TypeInfo )
    {
      sub_1B645E4(v46);
LABEL_64:
      sub_1B64324(v46);
    }
    if ( *(_QWORD *)(v46 + 24) == userId && *(_DWORD *)(v46 + 40) )
    {
      if ( !v35 )
        sub_1B64324(v46);
      items = v35->fields._items;
      v52 = Method_System_Collections_Generic_List_UserQuestEntity__Add__;
      ++v35->fields._version;
      if ( !items )
        sub_1B64324(v46);
      size = v35->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v35,
          (Il2CppObject *)v46,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
      }
      else
      {
        v54 = &items->obj.klass + size;
        v35->fields._size = size + 1;
        v54[4] = (Il2CppClass *)v49;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v54 + 4), v49, v47, v48);
      }
    }
  }
  v55 = Enumerator->klass;
  v56 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v57 = &v55->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v57 - 1) != System_IDisposable_TypeInfo )
    {
      --v56;
      v57 += 4;
      if ( !v56 )
        goto LABEL_35;
    }
    v58 = (__int64)&v55->vtable[*v57].method;
  }
  else
  {
LABEL_35:
    v58 = sub_1BB60A8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  Instance = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v58)(
                               Enumerator,
                               *(_QWORD *)(v58 + 8));
  v61 = UserQuestMaster___c_TypeInfo;
  if ( !UserQuestMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserQuestMaster___c_TypeInfo);
    v61 = UserQuestMaster___c_TypeInfo;
  }
  _9__11_0 = (System_Comparison_T__o *)v61->static_fields->__9__11_0;
  if ( !_9__11_0 )
  {
    if ( !v61->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v61);
      v61 = UserQuestMaster___c_TypeInfo;
    }
    v63 = (Il2CppObject *)v61->static_fields->__9;
    _9__11_0 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_UserQuestEntity__TypeInfo, v59, v60);
    System_Comparison_object____ctor(
      _9__11_0,
      v63,
      Method_UserQuestMaster___c__GetLatestMainScenarioLastQuest_b__11_0__,
      0LL);
    static_fields = UserQuestMaster___c_TypeInfo->static_fields;
    static_fields->__9__11_0 = (struct System_Comparison_UserQuestEntity__o *)_9__11_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__11_0, (int32_t)_9__11_0, v65, v66);
  }
  if ( !v35 )
LABEL_70:
    sub_1B64324(Instance);
  System_Collections_Generic_List_object___Sort_55243320(
    v35,
    _9__11_0,
    (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_UserQuestEntity__Sort__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v87,
    v35,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_UserQuestEntity__GetEnumerator__);
  v88 = v87;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v88,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__MoveNext__) )
  {
    v69 = sub_1B64314(UserQuestMaster___c__DisplayClass11_0_TypeInfo, v67, v68);
    System_Object___ctor((Il2CppObject *)v69, 0LL);
    if ( !v69 )
      sub_1B64324(v70);
    current = (int32_t)v88.fields._current;
    *(_QWORD *)(v69 + 16) = v88.fields._current;
    v74 = v69 + 16;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v69 + 16), current, v71, v72);
    if ( !*(_QWORD *)(v69 + 16) )
      sub_1B64324(v75);
    if ( !MasterData_object )
      sub_1B64324(v75);
    QuestEntity = QuestMaster__getQuestEntity(
                    (QuestMaster_o *)MasterData_object,
                    *(_DWORD *)(*(_QWORD *)(v69 + 16) + 32LL),
                    0LL);
    if ( QuestEntity )
    {
      v79 = (System_Func_int__bool__o *)sub_1B64314(System_Func_int__bool__TypeInfo, v76, v77);
      System_Func_int__bool____ctor(
        v79,
        (Il2CppObject *)v69,
        Method_UserQuestMaster___c__DisplayClass11_0__GetLatestMainScenarioLastQuest_b__1__,
        0LL);
      if ( BasicHelper__Any_int_(
             (System_Collections_Generic_List_T__o *)materialLatestClearList,
             (System_Func_T__bool__o *)v79,
             (const MethodInfo_2E24544 *)Method_BasicHelper_Any_int___) )
      {
        goto LABEL_62;
      }
      TypeFlag = QuestEntity__GetTypeFlag(QuestEntity, 0LL);
      if ( (_DWORD)TypeFlag == 2 )
      {
        if ( QuestEntity->fields.chapterId )
          goto LABEL_59;
        if ( !*(_QWORD *)v74 )
          sub_1B64324(TypeFlag);
        if ( *(_DWORD *)(*(_QWORD *)v74 + 32LL) <= v85 )
        {
LABEL_59:
          v81 = SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_QuestTree__get_Instance__);
          if ( !*(_QWORD *)v74 )
            sub_1B64324(v81);
          if ( !v81 )
            sub_1B64324(0LL);
          WarID_ByQuestID = QuestTree__GetWarID_ByQuestID((QuestTree_o *)v81, *(_DWORD *)(*(_QWORD *)v74 + 32LL), 0LL);
          v83 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v83 = BalanceConfig_TypeInfo;
          }
          if ( WarID_ByQuestID < v83->static_fields->PowerUpQuestWarId )
            goto LABEL_62;
        }
      }
    }
  }
  QuestEntity = 0LL;
LABEL_62:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v88,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__Dispose__);
  return QuestEntity;
}


QuestEntity_o *__fastcall UserQuestMaster__GetMainScenarioLatestClear(
        UserQuestMaster_o *this,
        int64_t userId,
        System_Collections_Generic_List_int__o *materialLatestClearList,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x20
  __int64 v33; // x1
  __int64 v34; // x2
  System_Collections_Generic_List_object__o *v35; // x22
  System_Collections_ObjectModel_Collection_T__o *v36; // x8
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x23
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v39; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v42; // x8
  __int64 v43; // x9
  int32_t *v44; // x10
  __int64 v45; // x0
  Il2CppObject *v46; // x0
  int32_t v47; // w2
  int32_t v48; // w3
  Il2CppObject *v49; // x8
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v52; // x10
  __int64 size; // x11
  Il2CppClass **v54; // x0
  System_Collections_Generic_IEnumerator_T__c *v55; // x8
  __int64 v56; // x9
  int32_t *v57; // x10
  __int64 v58; // x0
  __int64 v59; // x1
  __int64 v60; // x2
  UserQuestMaster___c_c *v61; // x8
  System_Comparison_T__o *_9__10_0; // x23
  Il2CppObject *v63; // x24
  struct UserQuestMaster___c_StaticFields *static_fields; // x0
  int32_t v65; // w2
  int32_t v66; // w3
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x24
  __int64 v70; // x0
  int32_t v71; // w2
  int32_t v72; // w3
  int32_t current; // w1
  __int64 v74; // x23
  __int64 v75; // x0
  __int64 v76; // x1
  __int64 v77; // x2
  QuestEntity_o *QuestEntity; // x22
  System_Func_int__bool__o *v79; // x25
  __int64 TypeFlag; // x0
  Il2CppObject *v81; // x0
  int32_t WarID_ByQuestID; // w23
  BalanceConfig_c *v83; // x0
  int v85; // [xsp+Ch] [xbp-A4h]
  System_Collections_Generic_List_Enumerator_object__o v87; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v88; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_49FD172 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, userId);
    sub_1B640C8(&Method_BasicHelper_Any_int___, v6);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v7);
    sub_1B640C8(&System_Comparison_UserQuestEntity__TypeInfo, v8);
    sub_1B640C8(&Method_DataManager_GetMasterData_ConstantMaster___, v9);
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestMaster___, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__Dispose__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__MoveNext__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__get_Current__, v13);
    sub_1B640C8(&System_Func_int__bool__TypeInfo, v14);
    sub_1B640C8(&System_IDisposable_TypeInfo, v15);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v16);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserQuestEntity__Add__, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserQuestEntity__GetEnumerator__, v19);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserQuestEntity__Sort__, v20);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserQuestEntity___ctor__, v21);
    sub_1B640C8(&System_Collections_Generic_List_UserQuestEntity__TypeInfo, v22);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23);
    sub_1B640C8(&Method_SingletonTemplate_QuestTree__get_Instance__, v24);
    sub_1B640C8(&Method_UserQuestMaster___c__GetMainScenarioLatestClear_b__10_0__, v25);
    sub_1B640C8(&Method_UserQuestMaster___c__DisplayClass10_0__GetMainScenarioLatestClear_b__1__, v26);
    sub_1B640C8(&UserQuestMaster___c__DisplayClass10_0_TypeInfo, v27);
    sub_1B640C8(&UserQuestMaster___c_TypeInfo, v28);
    sub_1B640C8(&UserQuestEntity_TypeInfo, v29);
    sub_1B640C8(&StringLiteral_3426/*"CHAPTER_F_END_ID"*/, v30);
    byte_49FD172 = 1;
  }
  memset(&v88, 0, sizeof(v88));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_69;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestMaster___);
  v35 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_UserQuestEntity__TypeInfo,
                                                       v33,
                                                       v34);
  System_Collections_Generic_List_object____ctor(
    v35,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_UserQuestEntity___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_69;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ConstantMaster___);
  if ( !Instance )
    goto LABEL_69;
  Instance = (Il2CppObject *)ConstantMaster__GetValue(
                               (ConstantMaster_o *)Instance,
                               (System_String_o *)StringLiteral_3426/*"CHAPTER_F_END_ID"*/,
                               0LL);
  v36 = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  v85 = (int)Instance;
  if ( !v36 )
    goto LABEL_69;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 v36,
                 (const MethodInfo_30710E0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B64324(0LL);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v39 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v39;
        p_offset += 4;
        if ( !v39 )
          goto LABEL_12;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_12:
      p_method = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v42 = Enumerator->klass;
    v43 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v44 = &v42->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v44 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v43;
        v44 += 4;
        if ( !v43 )
          goto LABEL_19;
      }
      v45 = (__int64)&v42->vtable[*v44].method;
    }
    else
    {
LABEL_19:
      v45 = sub_1BB60A8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v46 = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v45)(
                            Enumerator,
                            *(_QWORD *)(v45 + 8));
    v49 = v46;
    if ( !v46 )
      goto LABEL_63;
    methodPtr_low = LOBYTE(UserQuestEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v46->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
      || (UserQuestEntity_c *)v46->klass->_2.typeHierarchy[methodPtr_low - 1] != UserQuestEntity_TypeInfo )
    {
      sub_1B645E4(v46);
LABEL_63:
      sub_1B64324(v46);
    }
    if ( v46[1].monitor == (void *)userId )
    {
      if ( !v35 )
        sub_1B64324(v46);
      items = v35->fields._items;
      v52 = Method_System_Collections_Generic_List_UserQuestEntity__Add__;
      ++v35->fields._version;
      if ( !items )
        sub_1B64324(v46);
      size = v35->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v35,
          v46,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
      }
      else
      {
        v54 = &items->obj.klass + size;
        v35->fields._size = size + 1;
        v54[4] = (Il2CppClass *)v49;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v54 + 4), (int32_t)v49, v47, v48);
      }
    }
  }
  v55 = Enumerator->klass;
  v56 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v57 = &v55->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v57 - 1) != System_IDisposable_TypeInfo )
    {
      --v56;
      v57 += 4;
      if ( !v56 )
        goto LABEL_34;
    }
    v58 = (__int64)&v55->vtable[*v57].method;
  }
  else
  {
LABEL_34:
    v58 = sub_1BB60A8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  Instance = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v58)(
                               Enumerator,
                               *(_QWORD *)(v58 + 8));
  v61 = UserQuestMaster___c_TypeInfo;
  if ( !UserQuestMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserQuestMaster___c_TypeInfo);
    v61 = UserQuestMaster___c_TypeInfo;
  }
  _9__10_0 = (System_Comparison_T__o *)v61->static_fields->__9__10_0;
  if ( !_9__10_0 )
  {
    if ( !v61->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v61);
      v61 = UserQuestMaster___c_TypeInfo;
    }
    v63 = (Il2CppObject *)v61->static_fields->__9;
    _9__10_0 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_UserQuestEntity__TypeInfo, v59, v60);
    System_Comparison_object____ctor(
      _9__10_0,
      v63,
      Method_UserQuestMaster___c__GetMainScenarioLatestClear_b__10_0__,
      0LL);
    static_fields = UserQuestMaster___c_TypeInfo->static_fields;
    static_fields->__9__10_0 = (struct System_Comparison_UserQuestEntity__o *)_9__10_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__10_0, (int32_t)_9__10_0, v65, v66);
  }
  if ( !v35 )
LABEL_69:
    sub_1B64324(Instance);
  System_Collections_Generic_List_object___Sort_55243320(
    v35,
    _9__10_0,
    (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_UserQuestEntity__Sort__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v87,
    v35,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_UserQuestEntity__GetEnumerator__);
  v88 = v87;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v88,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__MoveNext__) )
  {
    v69 = sub_1B64314(UserQuestMaster___c__DisplayClass10_0_TypeInfo, v67, v68);
    System_Object___ctor((Il2CppObject *)v69, 0LL);
    if ( !v69 )
      sub_1B64324(v70);
    current = (int32_t)v88.fields._current;
    *(_QWORD *)(v69 + 16) = v88.fields._current;
    v74 = v69 + 16;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v69 + 16), current, v71, v72);
    if ( !*(_QWORD *)(v69 + 16) )
      sub_1B64324(v75);
    if ( !MasterData_object )
      sub_1B64324(v75);
    QuestEntity = QuestMaster__getQuestEntity(
                    (QuestMaster_o *)MasterData_object,
                    *(_DWORD *)(*(_QWORD *)(v69 + 16) + 32LL),
                    0LL);
    if ( QuestEntity )
    {
      v79 = (System_Func_int__bool__o *)sub_1B64314(System_Func_int__bool__TypeInfo, v76, v77);
      System_Func_int__bool____ctor(
        v79,
        (Il2CppObject *)v69,
        Method_UserQuestMaster___c__DisplayClass10_0__GetMainScenarioLatestClear_b__1__,
        0LL);
      if ( BasicHelper__Any_int_(
             (System_Collections_Generic_List_T__o *)materialLatestClearList,
             (System_Func_T__bool__o *)v79,
             (const MethodInfo_2E24544 *)Method_BasicHelper_Any_int___) )
      {
        goto LABEL_61;
      }
      TypeFlag = QuestEntity__GetTypeFlag(QuestEntity, 0LL);
      if ( (_DWORD)TypeFlag == 2 )
      {
        if ( QuestEntity->fields.chapterId )
          goto LABEL_58;
        if ( !*(_QWORD *)v74 )
          sub_1B64324(TypeFlag);
        if ( *(_DWORD *)(*(_QWORD *)v74 + 32LL) <= v85 )
        {
LABEL_58:
          v81 = SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_QuestTree__get_Instance__);
          if ( !*(_QWORD *)v74 )
            sub_1B64324(v81);
          if ( !v81 )
            sub_1B64324(0LL);
          WarID_ByQuestID = QuestTree__GetWarID_ByQuestID((QuestTree_o *)v81, *(_DWORD *)(*(_QWORD *)v74 + 32LL), 0LL);
          v83 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v83 = BalanceConfig_TypeInfo;
          }
          if ( WarID_ByQuestID < v83->static_fields->PowerUpQuestWarId )
            goto LABEL_61;
        }
      }
    }
  }
  QuestEntity = 0LL;
LABEL_61:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v88,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__Dispose__);
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
    sub_1B64324(this);
  v4 = *(_QWORD *)&questIds->max_length;
  v6 = (int)v4 > 0;
  if ( (int)v4 >= 1 )
  {
    v8 = this;
    v9 = 0LL;
    do
    {
      if ( v9 >= (unsigned int)v4 )
        sub_1B6432C(this, userId);
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
  __int64 v9; // x1
  Il2CppObject *PK; // x2

  if ( (byte_49FD16C & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string__TryGetEntity__, entity);
    sub_1B640C8(&UserQuestEntity_TypeInfo, v9);
    byte_49FD16C = 1;
  }
  if ( !UserQuestEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserQuestEntity_TypeInfo);
  PK = (Il2CppObject *)UserQuestEntity__CreatePK(userId, questId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D424C *)Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string__TryGetEntity__);
}


int32_t __fastcall UserQuestMaster__getChallengeCountsFromId(
        UserQuestMaster_o *this,
        int64_t userId,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  System_String_o *v8; // x0
  struct System_String_o *v9; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *userIdString; // x20
  System_String_o *v13; // x0
  System_String_o *v14; // x20
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v17; // x19
  __int64 v18; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x10
  __int64 p_method; // x0
  __int64 methodPtr_low; // x9
  UserQuestMaster_o *v23; // x0
  int64_t v24; // x1
  System_Int32_array *v25; // x2
  const MethodInfo *v26; // x3
  int32_t *v27; // [xsp+8h] [xbp-38h] BYREF
  int32_t v28; // [xsp+14h] [xbp-2Ch] BYREF
  int64_t v29; // [xsp+18h] [xbp-28h] BYREF

  v29 = userId;
  v28 = questId;
  if ( (byte_49FD16E & 1) == 0 )
  {
    sub_1B640C8(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, userId);
    sub_1B640C8(&UserQuestEntity_TypeInfo, v6);
    sub_1B640C8(&StringLiteral_1546/*":"*/, v7);
    byte_49FD16E = 1;
  }
  v27 = 0LL;
  if ( this->fields.oldId != userId )
  {
    this->fields.oldId = userId;
    v8 = System_Int64__ToString((int64_t)&v29, 0LL);
    v9 = System_String__Concat_61375396(v8, (System_String_o *)StringLiteral_1546/*":"*/, 0LL);
    this->fields.userIdString = v9;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.userIdString, (int32_t)v9, v10, v11);
  }
  userIdString = this->fields.userIdString;
  v13 = System_Int32__ToString((int32_t)&v28, 0LL);
  v14 = System_String__Concat_61375396(userIdString, v13, 0LL);
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_18;
  klass = lookup->klass;
  v17 = lookup;
  v18 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v18;
      p_offset += 2;
      if ( !v18 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
  }
  else
  {
LABEL_10:
    p_method = sub_1BB60A8(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, int32_t **, _QWORD))p_method)(
          v17,
          v14,
          &v27,
          *(_QWORD *)(p_method + 8)) & 1) == 0 )
    return 0;
  lookup = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *)v27;
  if ( !v27 )
LABEL_18:
    sub_1B64324(lookup);
  methodPtr_low = LOBYTE(UserQuestEntity_TypeInfo->vtable._0_Equals.methodPtr);
  if ( *(unsigned __int8 *)(*(_QWORD *)v27 + 304LL) >= (unsigned int)methodPtr_low
    && *(UserQuestEntity_c **)(*(_QWORD *)(*(_QWORD *)v27 + 200LL) + 8 * methodPtr_low - 8) == UserQuestEntity_TypeInfo )
  {
    return v27[14];
  }
  sub_1B645E4(v27);
  return UserQuestMaster__getChallengeCountsFromIds(v23, v24, v25, v26);
}


int32_t __fastcall UserQuestMaster__getChallengeCountsFromIds(
        UserQuestMaster_o *this,
        int64_t userId,
        System_Int32_array *questIds,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_int__o *v13; // x21
  void *list; // x0
  int32_t Count; // w0
  int32_t v16; // w23
  int32_t v17; // w22
  int32_t v18; // w24
  _DWORD *v19; // x25
  __int64 methodPtr_low; // x10

  if ( (byte_49FD16F & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, userId);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Remove__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor___75657200, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Count__, v10);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v11);
    sub_1B640C8(&UserQuestEntity_TypeInfo, v12);
    byte_49FD16F = 1;
  }
  v13 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    userId,
                                                    questIds);
  System_Collections_Generic_List_int____ctor_55113648(
    v13,
    (System_Collections_Generic_IEnumerable_T__o *)questIds,
    (const MethodInfo_348F7B0 *)Method_System_Collections_Generic_List_int___ctor___75657200);
  list = this->fields.list;
  if ( !list )
    goto LABEL_18;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v16 = Count;
    v17 = 0;
    v18 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v18,
               (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v19 = list;
      methodPtr_low = LOBYTE(UserQuestEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
        || *(UserQuestEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != UserQuestEntity_TypeInfo )
      {
        break;
      }
      if ( *((_QWORD *)list + 3) != userId )
        goto LABEL_21;
      if ( !v13 )
        break;
      if ( !System_Collections_Generic_List_int___Remove(
              v13,
              *((_DWORD *)list + 8),
              (const MethodInfo_3491478 *)Method_System_Collections_Generic_List_int__Remove__)
        || (v17 += v19[14], v13->fields._size) )
      {
LABEL_21:
        if ( v16 != ++v18 )
          continue;
      }
      return v17;
    }
LABEL_18:
    sub_1B64324(list);
  }
  return 0;
}


int32_t __fastcall UserQuestMaster__getClearCountsFromId(
        UserQuestMaster_o *this,
        int64_t userId,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  System_String_o *v8; // x0
  struct System_String_o *v9; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *userIdString; // x20
  System_String_o *v13; // x0
  System_String_o *v14; // x20
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v17; // x19
  __int64 v18; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x10
  __int64 p_method; // x0
  __int64 methodPtr_low; // x9
  UserQuestMaster_o *v23; // x0
  int64_t v24; // x1
  System_Int32_array *v25; // x2
  const MethodInfo *v26; // x3
  int32_t *v27; // [xsp+8h] [xbp-38h] BYREF
  int32_t v28; // [xsp+14h] [xbp-2Ch] BYREF
  int64_t v29; // [xsp+18h] [xbp-28h] BYREF

  v29 = userId;
  v28 = questId;
  if ( (byte_49FD170 & 1) == 0 )
  {
    sub_1B640C8(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, userId);
    sub_1B640C8(&UserQuestEntity_TypeInfo, v6);
    sub_1B640C8(&StringLiteral_1546/*":"*/, v7);
    byte_49FD170 = 1;
  }
  v27 = 0LL;
  if ( this->fields.oldId != userId )
  {
    this->fields.oldId = userId;
    v8 = System_Int64__ToString((int64_t)&v29, 0LL);
    v9 = System_String__Concat_61375396(v8, (System_String_o *)StringLiteral_1546/*":"*/, 0LL);
    this->fields.userIdString = v9;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.userIdString, (int32_t)v9, v10, v11);
  }
  userIdString = this->fields.userIdString;
  v13 = System_Int32__ToString((int32_t)&v28, 0LL);
  v14 = System_String__Concat_61375396(userIdString, v13, 0LL);
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_18;
  klass = lookup->klass;
  v17 = lookup;
  v18 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v18;
      p_offset += 2;
      if ( !v18 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
  }
  else
  {
LABEL_10:
    p_method = sub_1BB60A8(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, int32_t **, _QWORD))p_method)(
          v17,
          v14,
          &v27,
          *(_QWORD *)(p_method + 8)) & 1) == 0 )
    return 0;
  lookup = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *)v27;
  if ( !v27 )
LABEL_18:
    sub_1B64324(lookup);
  methodPtr_low = LOBYTE(UserQuestEntity_TypeInfo->vtable._0_Equals.methodPtr);
  if ( *(unsigned __int8 *)(*(_QWORD *)v27 + 304LL) >= (unsigned int)methodPtr_low
    && *(UserQuestEntity_c **)(*(_QWORD *)(*(_QWORD *)v27 + 200LL) + 8 * methodPtr_low - 8) == UserQuestEntity_TypeInfo )
  {
    return v27[10];
  }
  sub_1B645E4(v27);
  return UserQuestMaster__getClearCountsFromIds(v23, v24, v25, v26);
}


int32_t __fastcall UserQuestMaster__getClearCountsFromIds(
        UserQuestMaster_o *this,
        int64_t userId,
        System_Int32_array *questIds,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_int__o *v13; // x21
  void *list; // x0
  int32_t Count; // w0
  int32_t v16; // w23
  int32_t v17; // w22
  int32_t v18; // w24
  _DWORD *v19; // x25
  __int64 methodPtr_low; // x10

  if ( (byte_49FD171 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, userId);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Remove__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor___75657200, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Count__, v10);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v11);
    sub_1B640C8(&UserQuestEntity_TypeInfo, v12);
    byte_49FD171 = 1;
  }
  v13 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    userId,
                                                    questIds);
  System_Collections_Generic_List_int____ctor_55113648(
    v13,
    (System_Collections_Generic_IEnumerable_T__o *)questIds,
    (const MethodInfo_348F7B0 *)Method_System_Collections_Generic_List_int___ctor___75657200);
  list = this->fields.list;
  if ( !list )
    goto LABEL_18;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v16 = Count;
    v17 = 0;
    v18 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v18,
               (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v19 = list;
      methodPtr_low = LOBYTE(UserQuestEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
        || *(UserQuestEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != UserQuestEntity_TypeInfo )
      {
        break;
      }
      if ( *((_QWORD *)list + 3) != userId )
        goto LABEL_21;
      if ( !v13 )
        break;
      if ( !System_Collections_Generic_List_int___Remove(
              v13,
              *((_DWORD *)list + 8),
              (const MethodInfo_3491478 *)Method_System_Collections_Generic_List_int__Remove__)
        || (v17 += v19[10], v13->fields._size) )
      {
LABEL_21:
        if ( v16 != ++v18 )
          continue;
      }
      return v17;
    }
LABEL_18:
    sub_1B64324(list);
  }
  return 0;
}


UserQuestEntity_o *__fastcall UserQuestMaster__getEntityFromId(
        UserQuestMaster_o *this,
        int64_t userId,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  System_String_o *v8; // x0
  struct System_String_o *v9; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *userIdString; // x20
  System_String_o *v13; // x0
  System_String_o *v14; // x20
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v17; // x21
  __int64 v18; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *v21; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v22; // x19
  __int64 v23; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v24; // x10
  __int64 v25; // x0
  UserQuestEntity_o *result; // x0
  __int64 methodPtr_low; // x10
  int32_t v28; // [xsp+Ch] [xbp-34h] BYREF
  int64_t v29; // [xsp+18h] [xbp-28h] BYREF

  v29 = userId;
  v28 = questId;
  if ( (byte_49FD16D & 1) == 0 )
  {
    sub_1B640C8(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, userId);
    sub_1B640C8(&UserQuestEntity_TypeInfo, v6);
    sub_1B640C8(&StringLiteral_1546/*":"*/, v7);
    byte_49FD16D = 1;
  }
  if ( this->fields.oldId != userId )
  {
    this->fields.oldId = userId;
    v8 = System_Int64__ToString((int64_t)&v29, 0LL);
    v9 = System_String__Concat_61375396(v8, (System_String_o *)StringLiteral_1546/*":"*/, 0LL);
    this->fields.userIdString = v9;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.userIdString, (int32_t)v9, v10, v11);
  }
  userIdString = this->fields.userIdString;
  v13 = System_Int32__ToString((int32_t)&v28, 0LL);
  v14 = System_String__Concat_61375396(userIdString, v13, 0LL);
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_27;
  klass = lookup->klass;
  v17 = lookup;
  v18 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v18;
      p_offset += 4;
      if ( !v18 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_10:
    p_method = sub_1BB60A8(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))p_method)(
          v17,
          v14,
          *(_QWORD *)(p_method + 8)) & 1) == 0 )
    return 0LL;
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
LABEL_27:
    sub_1B64324(lookup);
  v21 = lookup->klass;
  v22 = lookup;
  v23 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    v24 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v21->_1.interfaceOffsets->offset;
    while ( *(v24 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v23;
      v24 += 2;
      if ( !v23 )
        goto LABEL_18;
    }
    v25 = (__int64)&v21->vtable[*(_DWORD *)v24 + 2].method;
  }
  else
  {
LABEL_18:
    v25 = sub_1BB60A8(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
  }
  result = (UserQuestEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))v25)(
                                  v22,
                                  v14,
                                  *(_QWORD *)(v25 + 8));
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
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FD175 & 1) == 0 )
  {
    sub_1B640C8(&UserQuestMaster___c_TypeInfo, v1);
    byte_49FD175 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(UserQuestMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  UserQuestMaster___c_TypeInfo->static_fields->__9 = (struct UserQuestMaster___c_o *)v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)UserQuestMaster___c_TypeInfo->static_fields, (int32_t)v3, v4, v5);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
  return usrEnt->fields.questId == a;
}