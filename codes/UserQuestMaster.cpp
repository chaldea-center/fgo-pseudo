void __fastcall UserQuestMaster___ctor(UserQuestMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16F98 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string___ctor__, method, v2);
    byte_4B16F98 = 1;
  }
  this->fields.oldId = -1LL;
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    58,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string___ctor__);
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
  __int64 v9; // x2
  UserQuestEntity_o *v10; // x22
  const MethodInfo *v11; // x1
  __int64 v12; // x1
  int64_t UserId; // x0
  __int64 v14; // x1

  if ( (byte_4B16FA2 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, *(_QWORD *)&questId, *(_QWORD *)&phase);
    sub_1BCA7E0(&UserQuestEntity_TypeInfo, v8, v9);
    byte_4B16FA2 = 1;
  }
  if ( !questId )
    return 0LL;
  v10 = (UserQuestEntity_o *)sub_1BCAA2C(UserQuestEntity_TypeInfo, *(_QWORD *)&questId, *(_QWORD *)&phase, updatedAt);
  UserQuestEntity___ctor(v10, v11);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v12);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !v10 )
    sub_1BCAA3C(UserId, v14);
  v10->fields.userId = UserId;
  v10->fields.questId = questId;
  v10->fields.questPhase = phase;
  v10->fields.clearNum = 1;
  v10->fields.updatedAt = updatedAt;
  return v10;
}


// local variable allocation has failed, the output may be wrong!
UserQuestEntity_o *__fastcall UserQuestMaster__GetEntity(
        UserQuestMaster_o *this,
        int64_t userId,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *PK; // x1

  if ( (byte_4B16F99 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string__GetEntity__,
      userId,
      *(_QWORD *)&questId);
    sub_1BCA7E0(&UserQuestEntity_TypeInfo, v7, v8);
    byte_4B16F99 = 1;
  }
  if ( !UserQuestEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserQuestEntity_TypeInfo, userId);
  PK = (Il2CppObject *)UserQuestEntity__CreatePK(userId, questId, *(const MethodInfo **)&questId);
  return (UserQuestEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                PK,
                                (const MethodInfo_31B3198 *)Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string__GetEntity__);
}


QuestEntity_o *__fastcall UserQuestMaster__GetLatestMainScenarioLastQuest(
        UserQuestMaster_o *this,
        int64_t userId,
        System_Collections_Generic_List_int__o *materialLatestClearList,
        const MethodInfo *method)
{
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
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x1
  __int64 v55; // x2
  Il2CppObject *Instance; // x0
  __int64 v57; // x1
  Il2CppObject *MasterData_object; // x20
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x3
  System_Collections_Generic_List_object__o *v62; // x22
  System_Collections_ObjectModel_Collection_T__o *v63; // x8
  __int64 v64; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x23
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v67; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v70; // x8
  __int64 v71; // x9
  int32_t *v72; // x10
  __int64 v73; // x0
  __int64 v74; // x0
  __int64 v75; // x1
  int64_t v76; // x2
  int32_t v77; // w3
  System_String_o *v78; // x4
  BattleSetupInfo_o *v79; // x5
  FollowerInfo_o *v80; // x6
  PartyListViewItem_o *v81; // x7
  int64_t v82; // x8
  UserQuestEntity_c *v83; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v86; // x10
  __int64 size; // x11
  Il2CppClass **v88; // x0
  System_Collections_Generic_IEnumerator_T__c *v89; // x8
  __int64 v90; // x9
  int32_t *v91; // x10
  __int64 v92; // x0
  __int64 v93; // x2
  __int64 v94; // x3
  UserQuestMaster___c_c *v95; // x8
  System_Comparison_T__o *_9__11_0; // x23
  Il2CppObject *v97; // x24
  struct UserQuestMaster___c_StaticFields *static_fields; // x0
  int64_t v99; // x2
  int32_t v100; // w3
  System_String_o *v101; // x4
  BattleSetupInfo_o *v102; // x5
  FollowerInfo_o *v103; // x6
  PartyListViewItem_o *v104; // x7
  __int64 v105; // x1
  __int64 v106; // x2
  __int64 v107; // x3
  __int64 v108; // x24
  __int64 v109; // x0
  __int64 v110; // x1
  int64_t v111; // x2
  int32_t v112; // w3
  System_String_o *v113; // x4
  BattleSetupInfo_o *v114; // x5
  FollowerInfo_o *v115; // x6
  PartyListViewItem_o *v116; // x7
  Il2CppObject *current; // x1
  __int64 v118; // x23
  __int64 v119; // x0
  __int64 v120; // x1
  __int64 v121; // x1
  __int64 v122; // x2
  __int64 v123; // x3
  QuestEntity_o *QuestEntity; // x22
  System_Func_int__bool__o *v125; // x25
  __int64 TypeFlag; // x0
  __int64 v127; // x1
  Il2CppObject *v128; // x0
  __int64 v129; // x1
  __int64 v130; // x1
  int32_t WarID_ByQuestID; // w23
  BalanceConfig_c *v132; // x0
  int v134; // [xsp+Ch] [xbp-A4h]
  System_Collections_Generic_List_Enumerator_object__o v136; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v137; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4B16FA1 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, userId, materialLatestClearList);
    sub_1BCA7E0(&Method_BasicHelper_Any_int___, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v8, v9);
    sub_1BCA7E0(&System_Comparison_UserQuestEntity__TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ConstantMaster___, v12, v13);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestMaster___, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__Dispose__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__MoveNext__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__get_Current__, v20, v21);
    sub_1BCA7E0(&System_Func_int__bool__TypeInfo, v22, v23);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v24, v25);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v26, v27);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v28, v29);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserQuestEntity__Add__, v30, v31);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserQuestEntity__GetEnumerator__, v32, v33);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserQuestEntity__Sort__, v34, v35);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserQuestEntity___ctor__, v36, v37);
    sub_1BCA7E0(&System_Collections_Generic_List_UserQuestEntity__TypeInfo, v38, v39);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v40, v41);
    sub_1BCA7E0(&Method_SingletonTemplate_QuestTree__get_Instance__, v42, v43);
    sub_1BCA7E0(&Method_UserQuestMaster___c__GetLatestMainScenarioLastQuest_b__11_0__, v44, v45);
    sub_1BCA7E0(&Method_UserQuestMaster___c__DisplayClass11_0__GetLatestMainScenarioLastQuest_b__1__, v46, v47);
    sub_1BCA7E0(&UserQuestMaster___c__DisplayClass11_0_TypeInfo, v48, v49);
    sub_1BCA7E0(&UserQuestMaster___c_TypeInfo, v50, v51);
    sub_1BCA7E0(&UserQuestEntity_TypeInfo, v52, v53);
    sub_1BCA7E0(&StringLiteral_3474/*"CHAPTER_F_END_ID"*/, v54, v55);
    byte_4B16FA1 = 1;
  }
  memset(&v137, 0, sizeof(v137));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_70;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestMaster___);
  v62 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_UserQuestEntity__TypeInfo,
                                                       v59,
                                                       v60,
                                                       v61);
  System_Collections_Generic_List_object____ctor(
    v62,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UserQuestEntity___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_70;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ConstantMaster___);
  if ( !Instance )
    goto LABEL_70;
  Instance = (Il2CppObject *)ConstantMaster__GetValue(
                               (ConstantMaster_o *)Instance,
                               (System_String_o *)StringLiteral_3474/*"CHAPTER_F_END_ID"*/,
                               0LL);
  v63 = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  v134 = (int)Instance;
  if ( !v63 )
    goto LABEL_70;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 v63,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v64);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v67 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v67;
        p_offset += 4;
        if ( !v67 )
          goto LABEL_12;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_12:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v70 = Enumerator->klass;
    v71 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v72 = &v70->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v72 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v71;
        v72 += 4;
        if ( !v71 )
          goto LABEL_19;
      }
      v73 = (__int64)&v70->vtable[*v72].method;
    }
    else
    {
LABEL_19:
      v73 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v74 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v73)(
            Enumerator,
            *(_QWORD *)(v73 + 8));
    v82 = v74;
    if ( !v74 )
      goto LABEL_64;
    v83 = UserQuestEntity_TypeInfo;
    methodPtr_low = LOBYTE(UserQuestEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v74 + 304LL) < (unsigned int)methodPtr_low
      || *(UserQuestEntity_c **)(*(_QWORD *)(*(_QWORD *)v74 + 200LL) + 8 * methodPtr_low - 8) != UserQuestEntity_TypeInfo )
    {
      sub_1BCACFC(v74);
LABEL_64:
      sub_1BCAA3C(v74, v75);
    }
    if ( *(_QWORD *)(v74 + 24) == userId && *(_DWORD *)(v74 + 40) )
    {
      if ( !v62 )
        sub_1BCAA3C(v74, UserQuestEntity_TypeInfo);
      items = v62->fields._items;
      v86 = Method_System_Collections_Generic_List_UserQuestEntity__Add__;
      ++v62->fields._version;
      if ( !items )
        sub_1BCAA3C(v74, v83);
      size = v62->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v62,
          (Il2CppObject *)v74,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v86[4] + 192LL) + 112LL));
      }
      else
      {
        v88 = &items->obj.klass + size;
        v62->fields._size = size + 1;
        v88[4] = (Il2CppClass *)v82;
        sub_1BCA784((PartyOrganizationUtility_o *)(v88 + 4), v82, v76, v77, v78, v79, v80, v81);
      }
    }
  }
  v89 = Enumerator->klass;
  v90 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v91 = &v89->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v91 - 1) != System_IDisposable_TypeInfo )
    {
      --v90;
      v91 += 4;
      if ( !v90 )
        goto LABEL_35;
    }
    v92 = (__int64)&v89->vtable[*v91].method;
  }
  else
  {
LABEL_35:
    v92 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  Instance = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v92)(
                               Enumerator,
                               *(_QWORD *)(v92 + 8));
  v95 = UserQuestMaster___c_TypeInfo;
  if ( !UserQuestMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserQuestMaster___c_TypeInfo, v57);
    v95 = UserQuestMaster___c_TypeInfo;
  }
  _9__11_0 = (System_Comparison_T__o *)v95->static_fields->__9__11_0;
  if ( !_9__11_0 )
  {
    if ( !v95->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v95, v57);
      v95 = UserQuestMaster___c_TypeInfo;
    }
    v97 = (Il2CppObject *)v95->static_fields->__9;
    _9__11_0 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_UserQuestEntity__TypeInfo, v57, v93, v94);
    System_Comparison_object____ctor(
      _9__11_0,
      v97,
      Method_UserQuestMaster___c__GetLatestMainScenarioLastQuest_b__11_0__,
      0LL);
    static_fields = UserQuestMaster___c_TypeInfo->static_fields;
    static_fields->__9__11_0 = (struct System_Comparison_UserQuestEntity__o *)_9__11_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__11_0,
      (int64_t)_9__11_0,
      v99,
      v100,
      v101,
      v102,
      v103,
      v104);
  }
  if ( !v62 )
LABEL_70:
    sub_1BCAA3C(Instance, v57);
  System_Collections_Generic_List_object___Sort_56244000(
    v62,
    _9__11_0,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_UserQuestEntity__Sort__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v136,
    v62,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_UserQuestEntity__GetEnumerator__);
  v137 = v136;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v137,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__MoveNext__) )
  {
    v108 = sub_1BCAA2C(UserQuestMaster___c__DisplayClass11_0_TypeInfo, v105, v106, v107);
    System_Object___ctor((Il2CppObject *)v108, 0LL);
    if ( !v108 )
      sub_1BCAA3C(v109, v110);
    current = v137.fields._current;
    *(_QWORD *)(v108 + 16) = v137.fields._current;
    v118 = v108 + 16;
    sub_1BCA784((PartyOrganizationUtility_o *)(v108 + 16), (int64_t)current, v111, v112, v113, v114, v115, v116);
    if ( !*(_QWORD *)(v108 + 16) )
      sub_1BCAA3C(v119, v120);
    if ( !MasterData_object )
      sub_1BCAA3C(v119, v120);
    QuestEntity = QuestMaster__getQuestEntity(
                    (QuestMaster_o *)MasterData_object,
                    *(_DWORD *)(*(_QWORD *)(v108 + 16) + 32LL),
                    0LL);
    if ( QuestEntity )
    {
      v125 = (System_Func_int__bool__o *)sub_1BCAA2C(System_Func_int__bool__TypeInfo, v121, v122, v123);
      System_Func_int__bool____ctor(
        v125,
        (Il2CppObject *)v108,
        Method_UserQuestMaster___c__DisplayClass11_0__GetLatestMainScenarioLastQuest_b__1__,
        0LL);
      if ( BasicHelper__Any_int_(
             (System_Collections_Generic_List_T__o *)materialLatestClearList,
             (System_Func_T__bool__o *)v125,
             (const MethodInfo_2EFD968 *)Method_BasicHelper_Any_int___) )
      {
        goto LABEL_62;
      }
      TypeFlag = QuestEntity__GetTypeFlag(QuestEntity, 0LL);
      if ( (_DWORD)TypeFlag == 2 )
      {
        if ( QuestEntity->fields.chapterId )
          goto LABEL_59;
        if ( !*(_QWORD *)v118 )
          sub_1BCAA3C(TypeFlag, v127);
        if ( *(_DWORD *)(*(_QWORD *)v118 + 32LL) <= v134 )
        {
LABEL_59:
          v128 = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_QuestTree__get_Instance__);
          if ( !*(_QWORD *)v118 )
            sub_1BCAA3C(v128, v129);
          if ( !v128 )
            sub_1BCAA3C(0LL, v129);
          WarID_ByQuestID = QuestTree__GetWarID_ByQuestID((QuestTree_o *)v128, *(_DWORD *)(*(_QWORD *)v118 + 32LL), 0LL);
          v132 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v130);
            v132 = BalanceConfig_TypeInfo;
          }
          if ( WarID_ByQuestID < v132->static_fields->PowerUpQuestWarId )
            goto LABEL_62;
        }
      }
    }
  }
  QuestEntity = 0LL;
LABEL_62:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v137,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__Dispose__);
  return QuestEntity;
}


QuestEntity_o *__fastcall UserQuestMaster__GetMainScenarioLatestClear(
        UserQuestMaster_o *this,
        int64_t userId,
        System_Collections_Generic_List_int__o *materialLatestClearList,
        const MethodInfo *method)
{
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
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x1
  __int64 v55; // x2
  Il2CppObject *Instance; // x0
  __int64 v57; // x1
  Il2CppObject *MasterData_object; // x20
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x3
  System_Collections_Generic_List_object__o *v62; // x22
  System_Collections_ObjectModel_Collection_T__o *v63; // x8
  __int64 v64; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x23
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v67; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v70; // x8
  __int64 v71; // x9
  int32_t *v72; // x10
  __int64 v73; // x0
  Il2CppObject *v74; // x0
  __int64 v75; // x1
  int64_t v76; // x2
  int32_t v77; // w3
  System_String_o *v78; // x4
  BattleSetupInfo_o *v79; // x5
  FollowerInfo_o *v80; // x6
  PartyListViewItem_o *v81; // x7
  int64_t v82; // x8
  UserQuestEntity_c *v83; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v86; // x10
  __int64 size; // x11
  Il2CppClass **v88; // x0
  System_Collections_Generic_IEnumerator_T__c *v89; // x8
  __int64 v90; // x9
  int32_t *v91; // x10
  __int64 v92; // x0
  __int64 v93; // x2
  __int64 v94; // x3
  UserQuestMaster___c_c *v95; // x8
  System_Comparison_T__o *_9__10_0; // x23
  Il2CppObject *v97; // x24
  struct UserQuestMaster___c_StaticFields *static_fields; // x0
  int64_t v99; // x2
  int32_t v100; // w3
  System_String_o *v101; // x4
  BattleSetupInfo_o *v102; // x5
  FollowerInfo_o *v103; // x6
  PartyListViewItem_o *v104; // x7
  __int64 v105; // x1
  __int64 v106; // x2
  __int64 v107; // x3
  __int64 v108; // x24
  __int64 v109; // x0
  __int64 v110; // x1
  int64_t v111; // x2
  int32_t v112; // w3
  System_String_o *v113; // x4
  BattleSetupInfo_o *v114; // x5
  FollowerInfo_o *v115; // x6
  PartyListViewItem_o *v116; // x7
  Il2CppObject *current; // x1
  __int64 v118; // x23
  __int64 v119; // x0
  __int64 v120; // x1
  __int64 v121; // x1
  __int64 v122; // x2
  __int64 v123; // x3
  QuestEntity_o *QuestEntity; // x22
  System_Func_int__bool__o *v125; // x25
  __int64 TypeFlag; // x0
  __int64 v127; // x1
  Il2CppObject *v128; // x0
  __int64 v129; // x1
  __int64 v130; // x1
  int32_t WarID_ByQuestID; // w23
  BalanceConfig_c *v132; // x0
  int v134; // [xsp+Ch] [xbp-A4h]
  System_Collections_Generic_List_Enumerator_object__o v136; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v137; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4B16FA0 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, userId, materialLatestClearList);
    sub_1BCA7E0(&Method_BasicHelper_Any_int___, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v8, v9);
    sub_1BCA7E0(&System_Comparison_UserQuestEntity__TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ConstantMaster___, v12, v13);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestMaster___, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__Dispose__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__MoveNext__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__get_Current__, v20, v21);
    sub_1BCA7E0(&System_Func_int__bool__TypeInfo, v22, v23);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v24, v25);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v26, v27);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v28, v29);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserQuestEntity__Add__, v30, v31);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserQuestEntity__GetEnumerator__, v32, v33);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserQuestEntity__Sort__, v34, v35);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserQuestEntity___ctor__, v36, v37);
    sub_1BCA7E0(&System_Collections_Generic_List_UserQuestEntity__TypeInfo, v38, v39);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v40, v41);
    sub_1BCA7E0(&Method_SingletonTemplate_QuestTree__get_Instance__, v42, v43);
    sub_1BCA7E0(&Method_UserQuestMaster___c__GetMainScenarioLatestClear_b__10_0__, v44, v45);
    sub_1BCA7E0(&Method_UserQuestMaster___c__DisplayClass10_0__GetMainScenarioLatestClear_b__1__, v46, v47);
    sub_1BCA7E0(&UserQuestMaster___c__DisplayClass10_0_TypeInfo, v48, v49);
    sub_1BCA7E0(&UserQuestMaster___c_TypeInfo, v50, v51);
    sub_1BCA7E0(&UserQuestEntity_TypeInfo, v52, v53);
    sub_1BCA7E0(&StringLiteral_3474/*"CHAPTER_F_END_ID"*/, v54, v55);
    byte_4B16FA0 = 1;
  }
  memset(&v137, 0, sizeof(v137));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_69;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestMaster___);
  v62 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_UserQuestEntity__TypeInfo,
                                                       v59,
                                                       v60,
                                                       v61);
  System_Collections_Generic_List_object____ctor(
    v62,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UserQuestEntity___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_69;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ConstantMaster___);
  if ( !Instance )
    goto LABEL_69;
  Instance = (Il2CppObject *)ConstantMaster__GetValue(
                               (ConstantMaster_o *)Instance,
                               (System_String_o *)StringLiteral_3474/*"CHAPTER_F_END_ID"*/,
                               0LL);
  v63 = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  v134 = (int)Instance;
  if ( !v63 )
    goto LABEL_69;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 v63,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v64);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v67 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v67;
        p_offset += 4;
        if ( !v67 )
          goto LABEL_12;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_12:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v70 = Enumerator->klass;
    v71 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v72 = &v70->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v72 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v71;
        v72 += 4;
        if ( !v71 )
          goto LABEL_19;
      }
      v73 = (__int64)&v70->vtable[*v72].method;
    }
    else
    {
LABEL_19:
      v73 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v74 = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v73)(
                            Enumerator,
                            *(_QWORD *)(v73 + 8));
    v82 = (int64_t)v74;
    if ( !v74 )
      goto LABEL_63;
    v83 = UserQuestEntity_TypeInfo;
    methodPtr_low = LOBYTE(UserQuestEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v74->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
      || (UserQuestEntity_c *)v74->klass->_2.typeHierarchy[methodPtr_low - 1] != UserQuestEntity_TypeInfo )
    {
      sub_1BCACFC(v74);
LABEL_63:
      sub_1BCAA3C(v74, v75);
    }
    if ( v74[1].monitor == (void *)userId )
    {
      if ( !v62 )
        sub_1BCAA3C(v74, UserQuestEntity_TypeInfo);
      items = v62->fields._items;
      v86 = Method_System_Collections_Generic_List_UserQuestEntity__Add__;
      ++v62->fields._version;
      if ( !items )
        sub_1BCAA3C(v74, v83);
      size = v62->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v62,
          v74,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v86[4] + 192LL) + 112LL));
      }
      else
      {
        v88 = &items->obj.klass + size;
        v62->fields._size = size + 1;
        v88[4] = (Il2CppClass *)v82;
        sub_1BCA784((PartyOrganizationUtility_o *)(v88 + 4), v82, v76, v77, v78, v79, v80, v81);
      }
    }
  }
  v89 = Enumerator->klass;
  v90 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v91 = &v89->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v91 - 1) != System_IDisposable_TypeInfo )
    {
      --v90;
      v91 += 4;
      if ( !v90 )
        goto LABEL_34;
    }
    v92 = (__int64)&v89->vtable[*v91].method;
  }
  else
  {
LABEL_34:
    v92 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  Instance = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v92)(
                               Enumerator,
                               *(_QWORD *)(v92 + 8));
  v95 = UserQuestMaster___c_TypeInfo;
  if ( !UserQuestMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserQuestMaster___c_TypeInfo, v57);
    v95 = UserQuestMaster___c_TypeInfo;
  }
  _9__10_0 = (System_Comparison_T__o *)v95->static_fields->__9__10_0;
  if ( !_9__10_0 )
  {
    if ( !v95->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v95, v57);
      v95 = UserQuestMaster___c_TypeInfo;
    }
    v97 = (Il2CppObject *)v95->static_fields->__9;
    _9__10_0 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_UserQuestEntity__TypeInfo, v57, v93, v94);
    System_Comparison_object____ctor(
      _9__10_0,
      v97,
      Method_UserQuestMaster___c__GetMainScenarioLatestClear_b__10_0__,
      0LL);
    static_fields = UserQuestMaster___c_TypeInfo->static_fields;
    static_fields->__9__10_0 = (struct System_Comparison_UserQuestEntity__o *)_9__10_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__10_0,
      (int64_t)_9__10_0,
      v99,
      v100,
      v101,
      v102,
      v103,
      v104);
  }
  if ( !v62 )
LABEL_69:
    sub_1BCAA3C(Instance, v57);
  System_Collections_Generic_List_object___Sort_56244000(
    v62,
    _9__10_0,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_UserQuestEntity__Sort__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v136,
    v62,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_UserQuestEntity__GetEnumerator__);
  v137 = v136;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v137,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__MoveNext__) )
  {
    v108 = sub_1BCAA2C(UserQuestMaster___c__DisplayClass10_0_TypeInfo, v105, v106, v107);
    System_Object___ctor((Il2CppObject *)v108, 0LL);
    if ( !v108 )
      sub_1BCAA3C(v109, v110);
    current = v137.fields._current;
    *(_QWORD *)(v108 + 16) = v137.fields._current;
    v118 = v108 + 16;
    sub_1BCA784((PartyOrganizationUtility_o *)(v108 + 16), (int64_t)current, v111, v112, v113, v114, v115, v116);
    if ( !*(_QWORD *)(v108 + 16) )
      sub_1BCAA3C(v119, v120);
    if ( !MasterData_object )
      sub_1BCAA3C(v119, v120);
    QuestEntity = QuestMaster__getQuestEntity(
                    (QuestMaster_o *)MasterData_object,
                    *(_DWORD *)(*(_QWORD *)(v108 + 16) + 32LL),
                    0LL);
    if ( QuestEntity )
    {
      v125 = (System_Func_int__bool__o *)sub_1BCAA2C(System_Func_int__bool__TypeInfo, v121, v122, v123);
      System_Func_int__bool____ctor(
        v125,
        (Il2CppObject *)v108,
        Method_UserQuestMaster___c__DisplayClass10_0__GetMainScenarioLatestClear_b__1__,
        0LL);
      if ( BasicHelper__Any_int_(
             (System_Collections_Generic_List_T__o *)materialLatestClearList,
             (System_Func_T__bool__o *)v125,
             (const MethodInfo_2EFD968 *)Method_BasicHelper_Any_int___) )
      {
        goto LABEL_61;
      }
      TypeFlag = QuestEntity__GetTypeFlag(QuestEntity, 0LL);
      if ( (_DWORD)TypeFlag == 2 )
      {
        if ( QuestEntity->fields.chapterId )
          goto LABEL_58;
        if ( !*(_QWORD *)v118 )
          sub_1BCAA3C(TypeFlag, v127);
        if ( *(_DWORD *)(*(_QWORD *)v118 + 32LL) <= v134 )
        {
LABEL_58:
          v128 = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_QuestTree__get_Instance__);
          if ( !*(_QWORD *)v118 )
            sub_1BCAA3C(v128, v129);
          if ( !v128 )
            sub_1BCAA3C(0LL, v129);
          WarID_ByQuestID = QuestTree__GetWarID_ByQuestID((QuestTree_o *)v128, *(_DWORD *)(*(_QWORD *)v118 + 32LL), 0LL);
          v132 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v130);
            v132 = BalanceConfig_TypeInfo;
          }
          if ( WarID_ByQuestID < v132->static_fields->PowerUpQuestWarId )
            goto LABEL_61;
        }
      }
    }
  }
  QuestEntity = 0LL;
LABEL_61:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v137,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__Dispose__);
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
    sub_1BCAA3C(this, userId);
  v4 = *(_QWORD *)&questIds->max_length;
  v6 = (int)v4 > 0;
  if ( (int)v4 >= 1 )
  {
    v8 = this;
    v9 = 0LL;
    do
    {
      if ( v9 >= (unsigned int)v4 )
        sub_1BCAA44(this, userId);
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
  __int64 v10; // x2
  Il2CppObject *PK; // x2

  if ( (byte_4B16F9A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string__TryGetEntity__, entity, userId);
    sub_1BCA7E0(&UserQuestEntity_TypeInfo, v9, v10);
    byte_4B16F9A = 1;
  }
  if ( !UserQuestEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserQuestEntity_TypeInfo, entity);
  PK = (Il2CppObject *)UserQuestEntity__CreatePK(userId, questId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall UserQuestMaster__getChallengeCountsFromId(
        UserQuestMaster_o *this,
        int64_t userId,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  System_String_o *v10; // x0
  struct System_String_o *v11; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  System_String_o *userIdString; // x20
  System_String_o *v19; // x0
  System_String_o *v20; // x20
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  __int64 v22; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v24; // x19
  __int64 v25; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x10
  __int64 p_method; // x0
  __int64 methodPtr_low; // x9
  UserQuestMaster_o *v30; // x0
  int64_t v31; // x1
  System_Int32_array *v32; // x2
  const MethodInfo *v33; // x3
  int32_t *v34; // [xsp+8h] [xbp-38h] BYREF
  int32_t v35; // [xsp+14h] [xbp-2Ch] BYREF
  int64_t v36; // [xsp+18h] [xbp-28h] BYREF

  v36 = userId;
  v35 = questId;
  if ( (byte_4B16F9C & 1) == 0 )
  {
    sub_1BCA7E0(
      &System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
      userId,
      *(_QWORD *)&questId);
    sub_1BCA7E0(&UserQuestEntity_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_1541/*":"*/, v8, v9);
    byte_4B16F9C = 1;
  }
  v34 = 0LL;
  if ( this->fields.oldId != userId )
  {
    this->fields.oldId = userId;
    v10 = System_Int64__ToString((int64_t)&v36, 0LL);
    v11 = System_String__Concat_62401220(v10, (System_String_o *)StringLiteral_1541/*":"*/, 0LL);
    this->fields.userIdString = v11;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.userIdString, (int64_t)v11, v12, v13, v14, v15, v16, v17);
  }
  userIdString = this->fields.userIdString;
  v19 = System_Int32__ToString((int32_t)&v35, 0LL);
  v20 = System_String__Concat_62401220(userIdString, v19, 0LL);
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_18;
  klass = lookup->klass;
  v24 = lookup;
  v25 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v25;
      p_offset += 2;
      if ( !v25 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
  }
  else
  {
LABEL_10:
    p_method = sub_1C1C7C0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, int32_t **, _QWORD))p_method)(
          v24,
          v20,
          &v34,
          *(_QWORD *)(p_method + 8)) & 1) == 0 )
    return 0;
  lookup = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *)v34;
  if ( !v34 )
LABEL_18:
    sub_1BCAA3C(lookup, v22);
  methodPtr_low = LOBYTE(UserQuestEntity_TypeInfo->vtable._0_Equals.methodPtr);
  if ( *(unsigned __int8 *)(*(_QWORD *)v34 + 304LL) >= (unsigned int)methodPtr_low
    && *(UserQuestEntity_c **)(*(_QWORD *)(*(_QWORD *)v34 + 200LL) + 8 * methodPtr_low - 8) == UserQuestEntity_TypeInfo )
  {
    return v34[14];
  }
  sub_1BCACFC(v34);
  return UserQuestMaster__getChallengeCountsFromIds(v30, v31, v32, v33);
}


int32_t __fastcall UserQuestMaster__getChallengeCountsFromIds(
        UserQuestMaster_o *this,
        int64_t userId,
        System_Int32_array *questIds,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_int__o *v19; // x21
  __int64 v20; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v23; // w23
  int32_t v24; // w22
  int32_t v25; // w24
  _DWORD *v26; // x25
  __int64 methodPtr_low; // x10

  if ( (byte_4B16F9D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, userId, questIds);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Remove__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor___76787440, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, v13, v14);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v15, v16);
    sub_1BCA7E0(&UserQuestEntity_TypeInfo, v17, v18);
    byte_4B16F9D = 1;
  }
  v19 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    userId,
                                                    questIds,
                                                    method);
  System_Collections_Generic_List_int____ctor_56116492(
    v19,
    (System_Collections_Generic_IEnumerable_T__o *)questIds,
    (const MethodInfo_358450C *)Method_System_Collections_Generic_List_int___ctor___76787440);
  list = this->fields.list;
  if ( !list )
    goto LABEL_18;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v23 = Count;
    v24 = 0;
    v25 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v25,
               (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v26 = list;
      methodPtr_low = LOBYTE(UserQuestEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
        || *(UserQuestEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != UserQuestEntity_TypeInfo )
      {
        break;
      }
      if ( *((_QWORD *)list + 3) != userId )
        goto LABEL_21;
      if ( !v19 )
        break;
      if ( !System_Collections_Generic_List_int___Remove(
              v19,
              *((_DWORD *)list + 8),
              (const MethodInfo_3586134 *)Method_System_Collections_Generic_List_int__Remove__)
        || (v24 += v26[14], v19->fields._size) )
      {
LABEL_21:
        if ( v23 != ++v25 )
          continue;
      }
      return v24;
    }
LABEL_18:
    sub_1BCAA3C(list, v20);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall UserQuestMaster__getClearCountsFromId(
        UserQuestMaster_o *this,
        int64_t userId,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  System_String_o *v10; // x0
  struct System_String_o *v11; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  System_String_o *userIdString; // x20
  System_String_o *v19; // x0
  System_String_o *v20; // x20
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  __int64 v22; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v24; // x19
  __int64 v25; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x10
  __int64 p_method; // x0
  __int64 methodPtr_low; // x9
  UserQuestMaster_o *v30; // x0
  int64_t v31; // x1
  System_Int32_array *v32; // x2
  const MethodInfo *v33; // x3
  int32_t *v34; // [xsp+8h] [xbp-38h] BYREF
  int32_t v35; // [xsp+14h] [xbp-2Ch] BYREF
  int64_t v36; // [xsp+18h] [xbp-28h] BYREF

  v36 = userId;
  v35 = questId;
  if ( (byte_4B16F9E & 1) == 0 )
  {
    sub_1BCA7E0(
      &System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
      userId,
      *(_QWORD *)&questId);
    sub_1BCA7E0(&UserQuestEntity_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_1541/*":"*/, v8, v9);
    byte_4B16F9E = 1;
  }
  v34 = 0LL;
  if ( this->fields.oldId != userId )
  {
    this->fields.oldId = userId;
    v10 = System_Int64__ToString((int64_t)&v36, 0LL);
    v11 = System_String__Concat_62401220(v10, (System_String_o *)StringLiteral_1541/*":"*/, 0LL);
    this->fields.userIdString = v11;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.userIdString, (int64_t)v11, v12, v13, v14, v15, v16, v17);
  }
  userIdString = this->fields.userIdString;
  v19 = System_Int32__ToString((int32_t)&v35, 0LL);
  v20 = System_String__Concat_62401220(userIdString, v19, 0LL);
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_18;
  klass = lookup->klass;
  v24 = lookup;
  v25 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v25;
      p_offset += 2;
      if ( !v25 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
  }
  else
  {
LABEL_10:
    p_method = sub_1C1C7C0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, int32_t **, _QWORD))p_method)(
          v24,
          v20,
          &v34,
          *(_QWORD *)(p_method + 8)) & 1) == 0 )
    return 0;
  lookup = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *)v34;
  if ( !v34 )
LABEL_18:
    sub_1BCAA3C(lookup, v22);
  methodPtr_low = LOBYTE(UserQuestEntity_TypeInfo->vtable._0_Equals.methodPtr);
  if ( *(unsigned __int8 *)(*(_QWORD *)v34 + 304LL) >= (unsigned int)methodPtr_low
    && *(UserQuestEntity_c **)(*(_QWORD *)(*(_QWORD *)v34 + 200LL) + 8 * methodPtr_low - 8) == UserQuestEntity_TypeInfo )
  {
    return v34[10];
  }
  sub_1BCACFC(v34);
  return UserQuestMaster__getClearCountsFromIds(v30, v31, v32, v33);
}


int32_t __fastcall UserQuestMaster__getClearCountsFromIds(
        UserQuestMaster_o *this,
        int64_t userId,
        System_Int32_array *questIds,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_int__o *v19; // x21
  __int64 v20; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v23; // w23
  int32_t v24; // w22
  int32_t v25; // w24
  _DWORD *v26; // x25
  __int64 methodPtr_low; // x10

  if ( (byte_4B16F9F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, userId, questIds);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Remove__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor___76787440, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, v13, v14);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v15, v16);
    sub_1BCA7E0(&UserQuestEntity_TypeInfo, v17, v18);
    byte_4B16F9F = 1;
  }
  v19 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    userId,
                                                    questIds,
                                                    method);
  System_Collections_Generic_List_int____ctor_56116492(
    v19,
    (System_Collections_Generic_IEnumerable_T__o *)questIds,
    (const MethodInfo_358450C *)Method_System_Collections_Generic_List_int___ctor___76787440);
  list = this->fields.list;
  if ( !list )
    goto LABEL_18;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v23 = Count;
    v24 = 0;
    v25 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v25,
               (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v26 = list;
      methodPtr_low = LOBYTE(UserQuestEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
        || *(UserQuestEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != UserQuestEntity_TypeInfo )
      {
        break;
      }
      if ( *((_QWORD *)list + 3) != userId )
        goto LABEL_21;
      if ( !v19 )
        break;
      if ( !System_Collections_Generic_List_int___Remove(
              v19,
              *((_DWORD *)list + 8),
              (const MethodInfo_3586134 *)Method_System_Collections_Generic_List_int__Remove__)
        || (v24 += v26[10], v19->fields._size) )
      {
LABEL_21:
        if ( v23 != ++v25 )
          continue;
      }
      return v24;
    }
LABEL_18:
    sub_1BCAA3C(list, v20);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
UserQuestEntity_o *__fastcall UserQuestMaster__getEntityFromId(
        UserQuestMaster_o *this,
        int64_t userId,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  System_String_o *v10; // x0
  struct System_String_o *v11; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  System_String_o *userIdString; // x20
  System_String_o *v19; // x0
  System_String_o *v20; // x20
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  __int64 v22; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v24; // x21
  __int64 v25; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *v28; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v29; // x19
  __int64 v30; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v31; // x10
  __int64 v32; // x0
  UserQuestEntity_o *result; // x0
  __int64 methodPtr_low; // x10
  int32_t v35; // [xsp+Ch] [xbp-34h] BYREF
  int64_t v36; // [xsp+18h] [xbp-28h] BYREF

  v36 = userId;
  v35 = questId;
  if ( (byte_4B16F9B & 1) == 0 )
  {
    sub_1BCA7E0(
      &System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
      userId,
      *(_QWORD *)&questId);
    sub_1BCA7E0(&UserQuestEntity_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_1541/*":"*/, v8, v9);
    byte_4B16F9B = 1;
  }
  if ( this->fields.oldId != userId )
  {
    this->fields.oldId = userId;
    v10 = System_Int64__ToString((int64_t)&v36, 0LL);
    v11 = System_String__Concat_62401220(v10, (System_String_o *)StringLiteral_1541/*":"*/, 0LL);
    this->fields.userIdString = v11;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.userIdString, (int64_t)v11, v12, v13, v14, v15, v16, v17);
  }
  userIdString = this->fields.userIdString;
  v19 = System_Int32__ToString((int32_t)&v35, 0LL);
  v20 = System_String__Concat_62401220(userIdString, v19, 0LL);
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_27;
  klass = lookup->klass;
  v24 = lookup;
  v25 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v25;
      p_offset += 4;
      if ( !v25 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_10:
    p_method = sub_1C1C7C0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))p_method)(
          v24,
          v20,
          *(_QWORD *)(p_method + 8)) & 1) == 0 )
    return 0LL;
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
LABEL_27:
    sub_1BCAA3C(lookup, v22);
  v28 = lookup->klass;
  v29 = lookup;
  v30 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    v31 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v28->_1.interfaceOffsets->offset;
    while ( *(v31 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v30;
      v31 += 2;
      if ( !v30 )
        goto LABEL_18;
    }
    v32 = (__int64)&v28->vtable[*(_DWORD *)v31 + 2].method;
  }
  else
  {
LABEL_18:
    v32 = sub_1C1C7C0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
  }
  result = (UserQuestEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))v32)(
                                  v29,
                                  v20,
                                  *(_QWORD *)(v32 + 8));
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
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B16FA3 & 1) == 0 )
  {
    sub_1BCA7E0(&UserQuestMaster___c_TypeInfo, v1, v2);
    byte_4B16FA3 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(UserQuestMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  UserQuestMaster___c_TypeInfo->static_fields->__9 = (struct UserQuestMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)UserQuestMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, x);
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
    sub_1BCAA3C(this, x);
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserQuestMaster___c__DisplayClass10_0___GetMainScenarioLatestClear_b__1(
        UserQuestMaster___c__DisplayClass10_0_o *this,
        int32_t a,
        const MethodInfo *method)
{
  struct UserQuestEntity_o *usrEnt; // x8

  usrEnt = this->fields.usrEnt;
  if ( !usrEnt )
    sub_1BCAA3C(this, *(_QWORD *)&a);
  return usrEnt->fields.questId == a;
}


void __fastcall UserQuestMaster___c__DisplayClass11_0___ctor(
        UserQuestMaster___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserQuestMaster___c__DisplayClass11_0___GetLatestMainScenarioLastQuest_b__1(
        UserQuestMaster___c__DisplayClass11_0_o *this,
        int32_t a,
        const MethodInfo *method)
{
  struct UserQuestEntity_o *usrEnt; // x8

  usrEnt = this->fields.usrEnt;
  if ( !usrEnt )
    sub_1BCAA3C(this, *(_QWORD *)&a);
  return usrEnt->fields.questId == a;
}