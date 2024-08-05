void __fastcall UserQuestMaster___ctor(UserQuestMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FF263 & 1) == 0 )
  {
    sub_1B64870(&Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string___ctor__, method);
    byte_49FF263 = 1;
  }
  this->fields.oldId = -1LL;
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    58,
    (const MethodInfo_30D6498 *)Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string___ctor__);
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
  __int64 v12; // x1

  if ( (byte_49FF26D & 1) == 0 )
  {
    sub_1B64870(&NetworkManager_TypeInfo, *(_QWORD *)&questId);
    sub_1B64870(&UserQuestEntity_TypeInfo, v8);
    byte_49FF26D = 1;
  }
  if ( !questId )
    return 0LL;
  v9 = (UserQuestEntity_o *)sub_1B64ABC(UserQuestEntity_TypeInfo);
  UserQuestEntity___ctor(v9, v10);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !v9 )
    sub_1B64ACC(UserId, v12);
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

  if ( (byte_49FF264 & 1) == 0 )
  {
    sub_1B64870(&Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string__GetEntity__, userId);
    sub_1B64870(&UserQuestEntity_TypeInfo, v7);
    byte_49FF264 = 1;
  }
  if ( !UserQuestEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserQuestEntity_TypeInfo);
  PK = (Il2CppObject *)UserQuestEntity__CreatePK(userId, questId, *(const MethodInfo **)&questId);
  return (UserQuestEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                PK,
                                (const MethodInfo_30D64D8 *)Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string__GetEntity__);
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
  __int64 v32; // x1
  Il2CppObject *MasterData_object; // x20
  System_Collections_Generic_List_object__o *v34; // x22
  System_Collections_ObjectModel_Collection_T__o *v35; // x8
  __int64 v36; // x1
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
  __int64 v47; // x1
  int32_t v48; // w2
  int32_t v49; // w3
  __int64 v50; // x8
  UserQuestEntity_c *v51; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v54; // x10
  __int64 size; // x11
  Il2CppClass **v56; // x0
  System_Collections_Generic_IEnumerator_T__c *v57; // x8
  __int64 v58; // x9
  int32_t *v59; // x10
  __int64 v60; // x0
  UserQuestMaster___c_c *v61; // x8
  System_Comparison_T__o *_9__11_0; // x23
  Il2CppObject *v63; // x24
  struct UserQuestMaster___c_StaticFields *static_fields; // x0
  int32_t v65; // w2
  int32_t v66; // w3
  __int64 v67; // x24
  __int64 v68; // x0
  __int64 v69; // x1
  int32_t v70; // w2
  int32_t v71; // w3
  int32_t current; // w1
  __int64 v73; // x23
  __int64 v74; // x0
  __int64 v75; // x1
  QuestEntity_o *QuestEntity; // x22
  System_Func_int__bool__o *v77; // x25
  __int64 TypeFlag; // x0
  __int64 v79; // x1
  Il2CppObject *v80; // x0
  __int64 v81; // x1
  int32_t WarID_ByQuestID; // w23
  BalanceConfig_c *v83; // x0
  int v85; // [xsp+Ch] [xbp-A4h]
  System_Collections_Generic_List_Enumerator_object__o v87; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v88; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_49FF26C & 1) == 0 )
  {
    sub_1B64870(&BalanceConfig_TypeInfo, userId);
    sub_1B64870(&Method_BasicHelper_Any_int___, v6);
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v7);
    sub_1B64870(&System_Comparison_UserQuestEntity__TypeInfo, v8);
    sub_1B64870(&Method_DataManager_GetMasterData_ConstantMaster___, v9);
    sub_1B64870(&Method_DataManager_GetMasterData_QuestMaster___, v10);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__Dispose__, v11);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__MoveNext__, v12);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__get_Current__, v13);
    sub_1B64870(&System_Func_int__bool__TypeInfo, v14);
    sub_1B64870(&System_IDisposable_TypeInfo, v15);
    sub_1B64870(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v16);
    sub_1B64870(&System_Collections_IEnumerator_TypeInfo, v17);
    sub_1B64870(&Method_System_Collections_Generic_List_UserQuestEntity__Add__, v18);
    sub_1B64870(&Method_System_Collections_Generic_List_UserQuestEntity__GetEnumerator__, v19);
    sub_1B64870(&Method_System_Collections_Generic_List_UserQuestEntity__Sort__, v20);
    sub_1B64870(&Method_System_Collections_Generic_List_UserQuestEntity___ctor__, v21);
    sub_1B64870(&System_Collections_Generic_List_UserQuestEntity__TypeInfo, v22);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23);
    sub_1B64870(&Method_SingletonTemplate_QuestTree__get_Instance__, v24);
    sub_1B64870(&Method_UserQuestMaster___c__GetLatestMainScenarioLastQuest_b__11_0__, v25);
    sub_1B64870(&Method_UserQuestMaster___c__DisplayClass11_0__GetLatestMainScenarioLastQuest_b__1__, v26);
    sub_1B64870(&UserQuestMaster___c__DisplayClass11_0_TypeInfo, v27);
    sub_1B64870(&UserQuestMaster___c_TypeInfo, v28);
    sub_1B64870(&UserQuestEntity_TypeInfo, v29);
    sub_1B64870(&StringLiteral_3425/*"CHAPTER_F_END_ID"*/, v30);
    byte_49FF26C = 1;
  }
  memset(&v88, 0, sizeof(v88));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_70;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_QuestMaster___);
  v34 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_UserQuestEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v34,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_UserQuestEntity___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_70;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_ConstantMaster___);
  if ( !Instance )
    goto LABEL_70;
  Instance = (Il2CppObject *)ConstantMaster__GetValue(
                               (ConstantMaster_o *)Instance,
                               (System_String_o *)StringLiteral_3425/*"CHAPTER_F_END_ID"*/,
                               0LL);
  v35 = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  v85 = (int)Instance;
  if ( !v35 )
    goto LABEL_70;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 v35,
                 (const MethodInfo_30733BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B64ACC(0LL, v36);
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
      p_method = sub_1BB6850(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v45 = sub_1BB6850(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v46 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v45)(
            Enumerator,
            *(_QWORD *)(v45 + 8));
    v50 = v46;
    if ( !v46 )
      goto LABEL_64;
    v51 = UserQuestEntity_TypeInfo;
    methodPtr_low = LOBYTE(UserQuestEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v46 + 304LL) < (unsigned int)methodPtr_low
      || *(UserQuestEntity_c **)(*(_QWORD *)(*(_QWORD *)v46 + 200LL) + 8 * methodPtr_low - 8) != UserQuestEntity_TypeInfo )
    {
      sub_1B64D8C(v46);
LABEL_64:
      sub_1B64ACC(v46, v47);
    }
    if ( *(_QWORD *)(v46 + 24) == userId && *(_DWORD *)(v46 + 40) )
    {
      if ( !v34 )
        sub_1B64ACC(v46, UserQuestEntity_TypeInfo);
      items = v34->fields._items;
      v54 = Method_System_Collections_Generic_List_UserQuestEntity__Add__;
      ++v34->fields._version;
      if ( !items )
        sub_1B64ACC(v46, v51);
      size = v34->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v34,
          (Il2CppObject *)v46,
          *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
      }
      else
      {
        v56 = &items->obj.klass + size;
        v34->fields._size = size + 1;
        v56[4] = (Il2CppClass *)v50;
        sub_1B64814((ServantStatusBattleListViewItem_o *)(v56 + 4), v50, v48, v49);
      }
    }
  }
  v57 = Enumerator->klass;
  v58 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v59 = &v57->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v59 - 1) != System_IDisposable_TypeInfo )
    {
      --v58;
      v59 += 4;
      if ( !v58 )
        goto LABEL_35;
    }
    v60 = (__int64)&v57->vtable[*v59].method;
  }
  else
  {
LABEL_35:
    v60 = sub_1BB6850(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  Instance = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v60)(
                               Enumerator,
                               *(_QWORD *)(v60 + 8));
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
    _9__11_0 = (System_Comparison_T__o *)sub_1B64ABC(System_Comparison_UserQuestEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__11_0,
      v63,
      Method_UserQuestMaster___c__GetLatestMainScenarioLastQuest_b__11_0__,
      0LL);
    static_fields = UserQuestMaster___c_TypeInfo->static_fields;
    static_fields->__9__11_0 = (struct System_Comparison_UserQuestEntity__o *)_9__11_0;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&static_fields->__9__11_0, (int32_t)_9__11_0, v65, v66);
  }
  if ( !v34 )
LABEL_70:
    sub_1B64ACC(Instance, v32);
  System_Collections_Generic_List_object___Sort_55252244(
    v34,
    _9__11_0,
    (const MethodInfo_34B1514 *)Method_System_Collections_Generic_List_UserQuestEntity__Sort__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v87,
    v34,
    (const MethodInfo_34B0548 *)Method_System_Collections_Generic_List_UserQuestEntity__GetEnumerator__);
  v88 = v87;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v88,
            (const MethodInfo_322C38C *)Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__MoveNext__) )
  {
    v67 = sub_1B64ABC(UserQuestMaster___c__DisplayClass11_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v67, 0LL);
    if ( !v67 )
      sub_1B64ACC(v68, v69);
    current = (int32_t)v88.fields._current;
    *(_QWORD *)(v67 + 16) = v88.fields._current;
    v73 = v67 + 16;
    sub_1B64814((ServantStatusBattleListViewItem_o *)(v67 + 16), current, v70, v71);
    if ( !*(_QWORD *)(v67 + 16) )
      sub_1B64ACC(v74, v75);
    if ( !MasterData_object )
      sub_1B64ACC(v74, v75);
    QuestEntity = QuestMaster__getQuestEntity(
                    (QuestMaster_o *)MasterData_object,
                    *(_DWORD *)(*(_QWORD *)(v67 + 16) + 32LL),
                    0LL);
    if ( QuestEntity )
    {
      v77 = (System_Func_int__bool__o *)sub_1B64ABC(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(
        v77,
        (Il2CppObject *)v67,
        Method_UserQuestMaster___c__DisplayClass11_0__GetLatestMainScenarioLastQuest_b__1__,
        0LL);
      if ( BasicHelper__Any_int_(
             (System_Collections_Generic_List_T__o *)materialLatestClearList,
             (System_Func_T__bool__o *)v77,
             (const MethodInfo_2E26820 *)Method_BasicHelper_Any_int___) )
      {
        goto LABEL_62;
      }
      TypeFlag = QuestEntity__GetTypeFlag(QuestEntity, 0LL);
      if ( (_DWORD)TypeFlag == 2 )
      {
        if ( QuestEntity->fields.chapterId )
          goto LABEL_59;
        if ( !*(_QWORD *)v73 )
          sub_1B64ACC(TypeFlag, v79);
        if ( *(_DWORD *)(*(_QWORD *)v73 + 32LL) <= v85 )
        {
LABEL_59:
          v80 = SingletonTemplate_object___get_Instance((const MethodInfo_36EE738 *)Method_SingletonTemplate_QuestTree__get_Instance__);
          if ( !*(_QWORD *)v73 )
            sub_1B64ACC(v80, v81);
          if ( !v80 )
            sub_1B64ACC(0LL, v81);
          WarID_ByQuestID = QuestTree__GetWarID_ByQuestID((QuestTree_o *)v80, *(_DWORD *)(*(_QWORD *)v73 + 32LL), 0LL);
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
    (const MethodInfo_322C388 *)Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__Dispose__);
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
  __int64 v32; // x1
  Il2CppObject *MasterData_object; // x20
  System_Collections_Generic_List_object__o *v34; // x22
  System_Collections_ObjectModel_Collection_T__o *v35; // x8
  __int64 v36; // x1
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
  __int64 v47; // x1
  int32_t v48; // w2
  int32_t v49; // w3
  Il2CppObject *v50; // x8
  UserQuestEntity_c *v51; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v54; // x10
  __int64 size; // x11
  Il2CppClass **v56; // x0
  System_Collections_Generic_IEnumerator_T__c *v57; // x8
  __int64 v58; // x9
  int32_t *v59; // x10
  __int64 v60; // x0
  UserQuestMaster___c_c *v61; // x8
  System_Comparison_T__o *_9__10_0; // x23
  Il2CppObject *v63; // x24
  struct UserQuestMaster___c_StaticFields *static_fields; // x0
  int32_t v65; // w2
  int32_t v66; // w3
  __int64 v67; // x24
  __int64 v68; // x0
  __int64 v69; // x1
  int32_t v70; // w2
  int32_t v71; // w3
  int32_t current; // w1
  __int64 v73; // x23
  __int64 v74; // x0
  __int64 v75; // x1
  QuestEntity_o *QuestEntity; // x22
  System_Func_int__bool__o *v77; // x25
  __int64 TypeFlag; // x0
  __int64 v79; // x1
  Il2CppObject *v80; // x0
  __int64 v81; // x1
  int32_t WarID_ByQuestID; // w23
  BalanceConfig_c *v83; // x0
  int v85; // [xsp+Ch] [xbp-A4h]
  System_Collections_Generic_List_Enumerator_object__o v87; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v88; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_49FF26B & 1) == 0 )
  {
    sub_1B64870(&BalanceConfig_TypeInfo, userId);
    sub_1B64870(&Method_BasicHelper_Any_int___, v6);
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v7);
    sub_1B64870(&System_Comparison_UserQuestEntity__TypeInfo, v8);
    sub_1B64870(&Method_DataManager_GetMasterData_ConstantMaster___, v9);
    sub_1B64870(&Method_DataManager_GetMasterData_QuestMaster___, v10);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__Dispose__, v11);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__MoveNext__, v12);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__get_Current__, v13);
    sub_1B64870(&System_Func_int__bool__TypeInfo, v14);
    sub_1B64870(&System_IDisposable_TypeInfo, v15);
    sub_1B64870(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v16);
    sub_1B64870(&System_Collections_IEnumerator_TypeInfo, v17);
    sub_1B64870(&Method_System_Collections_Generic_List_UserQuestEntity__Add__, v18);
    sub_1B64870(&Method_System_Collections_Generic_List_UserQuestEntity__GetEnumerator__, v19);
    sub_1B64870(&Method_System_Collections_Generic_List_UserQuestEntity__Sort__, v20);
    sub_1B64870(&Method_System_Collections_Generic_List_UserQuestEntity___ctor__, v21);
    sub_1B64870(&System_Collections_Generic_List_UserQuestEntity__TypeInfo, v22);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23);
    sub_1B64870(&Method_SingletonTemplate_QuestTree__get_Instance__, v24);
    sub_1B64870(&Method_UserQuestMaster___c__GetMainScenarioLatestClear_b__10_0__, v25);
    sub_1B64870(&Method_UserQuestMaster___c__DisplayClass10_0__GetMainScenarioLatestClear_b__1__, v26);
    sub_1B64870(&UserQuestMaster___c__DisplayClass10_0_TypeInfo, v27);
    sub_1B64870(&UserQuestMaster___c_TypeInfo, v28);
    sub_1B64870(&UserQuestEntity_TypeInfo, v29);
    sub_1B64870(&StringLiteral_3425/*"CHAPTER_F_END_ID"*/, v30);
    byte_49FF26B = 1;
  }
  memset(&v88, 0, sizeof(v88));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_69;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_QuestMaster___);
  v34 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_UserQuestEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v34,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_UserQuestEntity___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_69;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_ConstantMaster___);
  if ( !Instance )
    goto LABEL_69;
  Instance = (Il2CppObject *)ConstantMaster__GetValue(
                               (ConstantMaster_o *)Instance,
                               (System_String_o *)StringLiteral_3425/*"CHAPTER_F_END_ID"*/,
                               0LL);
  v35 = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  v85 = (int)Instance;
  if ( !v35 )
    goto LABEL_69;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 v35,
                 (const MethodInfo_30733BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B64ACC(0LL, v36);
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
      p_method = sub_1BB6850(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v45 = sub_1BB6850(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v46 = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v45)(
                            Enumerator,
                            *(_QWORD *)(v45 + 8));
    v50 = v46;
    if ( !v46 )
      goto LABEL_63;
    v51 = UserQuestEntity_TypeInfo;
    methodPtr_low = LOBYTE(UserQuestEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v46->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
      || (UserQuestEntity_c *)v46->klass->_2.typeHierarchy[methodPtr_low - 1] != UserQuestEntity_TypeInfo )
    {
      sub_1B64D8C(v46);
LABEL_63:
      sub_1B64ACC(v46, v47);
    }
    if ( v46[1].monitor == (void *)userId )
    {
      if ( !v34 )
        sub_1B64ACC(v46, UserQuestEntity_TypeInfo);
      items = v34->fields._items;
      v54 = Method_System_Collections_Generic_List_UserQuestEntity__Add__;
      ++v34->fields._version;
      if ( !items )
        sub_1B64ACC(v46, v51);
      size = v34->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v34,
          v46,
          *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
      }
      else
      {
        v56 = &items->obj.klass + size;
        v34->fields._size = size + 1;
        v56[4] = (Il2CppClass *)v50;
        sub_1B64814((ServantStatusBattleListViewItem_o *)(v56 + 4), (int32_t)v50, v48, v49);
      }
    }
  }
  v57 = Enumerator->klass;
  v58 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v59 = &v57->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v59 - 1) != System_IDisposable_TypeInfo )
    {
      --v58;
      v59 += 4;
      if ( !v58 )
        goto LABEL_34;
    }
    v60 = (__int64)&v57->vtable[*v59].method;
  }
  else
  {
LABEL_34:
    v60 = sub_1BB6850(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  Instance = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v60)(
                               Enumerator,
                               *(_QWORD *)(v60 + 8));
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
    _9__10_0 = (System_Comparison_T__o *)sub_1B64ABC(System_Comparison_UserQuestEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__10_0,
      v63,
      Method_UserQuestMaster___c__GetMainScenarioLatestClear_b__10_0__,
      0LL);
    static_fields = UserQuestMaster___c_TypeInfo->static_fields;
    static_fields->__9__10_0 = (struct System_Comparison_UserQuestEntity__o *)_9__10_0;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&static_fields->__9__10_0, (int32_t)_9__10_0, v65, v66);
  }
  if ( !v34 )
LABEL_69:
    sub_1B64ACC(Instance, v32);
  System_Collections_Generic_List_object___Sort_55252244(
    v34,
    _9__10_0,
    (const MethodInfo_34B1514 *)Method_System_Collections_Generic_List_UserQuestEntity__Sort__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v87,
    v34,
    (const MethodInfo_34B0548 *)Method_System_Collections_Generic_List_UserQuestEntity__GetEnumerator__);
  v88 = v87;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v88,
            (const MethodInfo_322C38C *)Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__MoveNext__) )
  {
    v67 = sub_1B64ABC(UserQuestMaster___c__DisplayClass10_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v67, 0LL);
    if ( !v67 )
      sub_1B64ACC(v68, v69);
    current = (int32_t)v88.fields._current;
    *(_QWORD *)(v67 + 16) = v88.fields._current;
    v73 = v67 + 16;
    sub_1B64814((ServantStatusBattleListViewItem_o *)(v67 + 16), current, v70, v71);
    if ( !*(_QWORD *)(v67 + 16) )
      sub_1B64ACC(v74, v75);
    if ( !MasterData_object )
      sub_1B64ACC(v74, v75);
    QuestEntity = QuestMaster__getQuestEntity(
                    (QuestMaster_o *)MasterData_object,
                    *(_DWORD *)(*(_QWORD *)(v67 + 16) + 32LL),
                    0LL);
    if ( QuestEntity )
    {
      v77 = (System_Func_int__bool__o *)sub_1B64ABC(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(
        v77,
        (Il2CppObject *)v67,
        Method_UserQuestMaster___c__DisplayClass10_0__GetMainScenarioLatestClear_b__1__,
        0LL);
      if ( BasicHelper__Any_int_(
             (System_Collections_Generic_List_T__o *)materialLatestClearList,
             (System_Func_T__bool__o *)v77,
             (const MethodInfo_2E26820 *)Method_BasicHelper_Any_int___) )
      {
        goto LABEL_61;
      }
      TypeFlag = QuestEntity__GetTypeFlag(QuestEntity, 0LL);
      if ( (_DWORD)TypeFlag == 2 )
      {
        if ( QuestEntity->fields.chapterId )
          goto LABEL_58;
        if ( !*(_QWORD *)v73 )
          sub_1B64ACC(TypeFlag, v79);
        if ( *(_DWORD *)(*(_QWORD *)v73 + 32LL) <= v85 )
        {
LABEL_58:
          v80 = SingletonTemplate_object___get_Instance((const MethodInfo_36EE738 *)Method_SingletonTemplate_QuestTree__get_Instance__);
          if ( !*(_QWORD *)v73 )
            sub_1B64ACC(v80, v81);
          if ( !v80 )
            sub_1B64ACC(0LL, v81);
          WarID_ByQuestID = QuestTree__GetWarID_ByQuestID((QuestTree_o *)v80, *(_DWORD *)(*(_QWORD *)v73 + 32LL), 0LL);
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
    (const MethodInfo_322C388 *)Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__Dispose__);
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
    sub_1B64ACC(this, userId);
  v4 = *(_QWORD *)&questIds->max_length;
  v6 = (int)v4 > 0;
  if ( (int)v4 >= 1 )
  {
    v8 = this;
    v9 = 0LL;
    do
    {
      if ( v9 >= (unsigned int)v4 )
        sub_1B64AD4(this, userId);
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

  if ( (byte_49FF265 & 1) == 0 )
  {
    sub_1B64870(&Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string__TryGetEntity__, entity);
    sub_1B64870(&UserQuestEntity_TypeInfo, v9);
    byte_49FF265 = 1;
  }
  if ( !UserQuestEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserQuestEntity_TypeInfo);
  PK = (Il2CppObject *)UserQuestEntity__CreatePK(userId, questId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D6528 *)Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string__TryGetEntity__);
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
  __int64 v16; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v18; // x19
  __int64 v19; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x10
  __int64 p_method; // x0
  __int64 methodPtr_low; // x9
  UserQuestMaster_o *v24; // x0
  int64_t v25; // x1
  System_Int32_array *v26; // x2
  const MethodInfo *v27; // x3
  int32_t *v28; // [xsp+8h] [xbp-38h] BYREF
  int32_t v29; // [xsp+14h] [xbp-2Ch] BYREF
  int64_t v30; // [xsp+18h] [xbp-28h] BYREF

  v30 = userId;
  v29 = questId;
  if ( (byte_49FF267 & 1) == 0 )
  {
    sub_1B64870(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, userId);
    sub_1B64870(&UserQuestEntity_TypeInfo, v6);
    sub_1B64870(&StringLiteral_1545/*":"*/, v7);
    byte_49FF267 = 1;
  }
  v28 = 0LL;
  if ( this->fields.oldId != userId )
  {
    this->fields.oldId = userId;
    v8 = System_Int64__ToString((int64_t)&v30, 0LL);
    v9 = System_String__Concat_61383576(v8, (System_String_o *)StringLiteral_1545/*":"*/, 0LL);
    this->fields.userIdString = v9;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.userIdString, (int32_t)v9, v10, v11);
  }
  userIdString = this->fields.userIdString;
  v13 = System_Int32__ToString((int32_t)&v29, 0LL);
  v14 = System_String__Concat_61383576(userIdString, v13, 0LL);
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_18;
  klass = lookup->klass;
  v18 = lookup;
  v19 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v19;
      p_offset += 2;
      if ( !v19 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
  }
  else
  {
LABEL_10:
    p_method = sub_1BB6850(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, int32_t **, _QWORD))p_method)(
          v18,
          v14,
          &v28,
          *(_QWORD *)(p_method + 8)) & 1) == 0 )
    return 0;
  lookup = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *)v28;
  if ( !v28 )
LABEL_18:
    sub_1B64ACC(lookup, v16);
  methodPtr_low = LOBYTE(UserQuestEntity_TypeInfo->vtable._0_Equals.methodPtr);
  if ( *(unsigned __int8 *)(*(_QWORD *)v28 + 304LL) >= (unsigned int)methodPtr_low
    && *(UserQuestEntity_c **)(*(_QWORD *)(*(_QWORD *)v28 + 200LL) + 8 * methodPtr_low - 8) == UserQuestEntity_TypeInfo )
  {
    return v28[14];
  }
  sub_1B64D8C(v28);
  return UserQuestMaster__getChallengeCountsFromIds(v24, v25, v26, v27);
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
  __int64 v14; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v17; // w23
  int32_t v18; // w22
  int32_t v19; // w24
  _DWORD *v20; // x25
  __int64 methodPtr_low; // x10

  if ( (byte_49FF268 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, userId);
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1B64870(&Method_System_Collections_Generic_List_int__Remove__, v8);
    sub_1B64870(&Method_System_Collections_Generic_List_int___ctor___75665656, v9);
    sub_1B64870(&Method_System_Collections_Generic_List_int__get_Count__, v10);
    sub_1B64870(&System_Collections_Generic_List_int__TypeInfo, v11);
    sub_1B64870(&UserQuestEntity_TypeInfo, v12);
    byte_49FF268 = 1;
  }
  v13 = (System_Collections_Generic_List_int__o *)sub_1B64ABC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_55122572(
    v13,
    (System_Collections_Generic_IEnumerable_T__o *)questIds,
    (const MethodInfo_3491A8C *)Method_System_Collections_Generic_List_int___ctor___75665656);
  list = this->fields.list;
  if ( !list )
    goto LABEL_18;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3072DE4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v17 = Count;
    v18 = 0;
    v19 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v19,
               (const MethodInfo_3072E74 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v20 = list;
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
              (const MethodInfo_3493754 *)Method_System_Collections_Generic_List_int__Remove__)
        || (v18 += v20[14], v13->fields._size) )
      {
LABEL_21:
        if ( v17 != ++v19 )
          continue;
      }
      return v18;
    }
LABEL_18:
    sub_1B64ACC(list, v14);
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
  __int64 v16; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v18; // x19
  __int64 v19; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x10
  __int64 p_method; // x0
  __int64 methodPtr_low; // x9
  UserQuestMaster_o *v24; // x0
  int64_t v25; // x1
  System_Int32_array *v26; // x2
  const MethodInfo *v27; // x3
  int32_t *v28; // [xsp+8h] [xbp-38h] BYREF
  int32_t v29; // [xsp+14h] [xbp-2Ch] BYREF
  int64_t v30; // [xsp+18h] [xbp-28h] BYREF

  v30 = userId;
  v29 = questId;
  if ( (byte_49FF269 & 1) == 0 )
  {
    sub_1B64870(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, userId);
    sub_1B64870(&UserQuestEntity_TypeInfo, v6);
    sub_1B64870(&StringLiteral_1545/*":"*/, v7);
    byte_49FF269 = 1;
  }
  v28 = 0LL;
  if ( this->fields.oldId != userId )
  {
    this->fields.oldId = userId;
    v8 = System_Int64__ToString((int64_t)&v30, 0LL);
    v9 = System_String__Concat_61383576(v8, (System_String_o *)StringLiteral_1545/*":"*/, 0LL);
    this->fields.userIdString = v9;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.userIdString, (int32_t)v9, v10, v11);
  }
  userIdString = this->fields.userIdString;
  v13 = System_Int32__ToString((int32_t)&v29, 0LL);
  v14 = System_String__Concat_61383576(userIdString, v13, 0LL);
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_18;
  klass = lookup->klass;
  v18 = lookup;
  v19 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v19;
      p_offset += 2;
      if ( !v19 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
  }
  else
  {
LABEL_10:
    p_method = sub_1BB6850(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, int32_t **, _QWORD))p_method)(
          v18,
          v14,
          &v28,
          *(_QWORD *)(p_method + 8)) & 1) == 0 )
    return 0;
  lookup = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *)v28;
  if ( !v28 )
LABEL_18:
    sub_1B64ACC(lookup, v16);
  methodPtr_low = LOBYTE(UserQuestEntity_TypeInfo->vtable._0_Equals.methodPtr);
  if ( *(unsigned __int8 *)(*(_QWORD *)v28 + 304LL) >= (unsigned int)methodPtr_low
    && *(UserQuestEntity_c **)(*(_QWORD *)(*(_QWORD *)v28 + 200LL) + 8 * methodPtr_low - 8) == UserQuestEntity_TypeInfo )
  {
    return v28[10];
  }
  sub_1B64D8C(v28);
  return UserQuestMaster__getClearCountsFromIds(v24, v25, v26, v27);
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
  __int64 v14; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v17; // w23
  int32_t v18; // w22
  int32_t v19; // w24
  _DWORD *v20; // x25
  __int64 methodPtr_low; // x10

  if ( (byte_49FF26A & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, userId);
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1B64870(&Method_System_Collections_Generic_List_int__Remove__, v8);
    sub_1B64870(&Method_System_Collections_Generic_List_int___ctor___75665656, v9);
    sub_1B64870(&Method_System_Collections_Generic_List_int__get_Count__, v10);
    sub_1B64870(&System_Collections_Generic_List_int__TypeInfo, v11);
    sub_1B64870(&UserQuestEntity_TypeInfo, v12);
    byte_49FF26A = 1;
  }
  v13 = (System_Collections_Generic_List_int__o *)sub_1B64ABC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_55122572(
    v13,
    (System_Collections_Generic_IEnumerable_T__o *)questIds,
    (const MethodInfo_3491A8C *)Method_System_Collections_Generic_List_int___ctor___75665656);
  list = this->fields.list;
  if ( !list )
    goto LABEL_18;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3072DE4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v17 = Count;
    v18 = 0;
    v19 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v19,
               (const MethodInfo_3072E74 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v20 = list;
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
              (const MethodInfo_3493754 *)Method_System_Collections_Generic_List_int__Remove__)
        || (v18 += v20[10], v13->fields._size) )
      {
LABEL_21:
        if ( v17 != ++v19 )
          continue;
      }
      return v18;
    }
LABEL_18:
    sub_1B64ACC(list, v14);
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
  __int64 v16; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v18; // x21
  __int64 v19; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *v22; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v23; // x19
  __int64 v24; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v25; // x10
  __int64 v26; // x0
  UserQuestEntity_o *result; // x0
  __int64 methodPtr_low; // x10
  int32_t v29; // [xsp+Ch] [xbp-34h] BYREF
  int64_t v30; // [xsp+18h] [xbp-28h] BYREF

  v30 = userId;
  v29 = questId;
  if ( (byte_49FF266 & 1) == 0 )
  {
    sub_1B64870(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, userId);
    sub_1B64870(&UserQuestEntity_TypeInfo, v6);
    sub_1B64870(&StringLiteral_1545/*":"*/, v7);
    byte_49FF266 = 1;
  }
  if ( this->fields.oldId != userId )
  {
    this->fields.oldId = userId;
    v8 = System_Int64__ToString((int64_t)&v30, 0LL);
    v9 = System_String__Concat_61383576(v8, (System_String_o *)StringLiteral_1545/*":"*/, 0LL);
    this->fields.userIdString = v9;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.userIdString, (int32_t)v9, v10, v11);
  }
  userIdString = this->fields.userIdString;
  v13 = System_Int32__ToString((int32_t)&v29, 0LL);
  v14 = System_String__Concat_61383576(userIdString, v13, 0LL);
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_27;
  klass = lookup->klass;
  v18 = lookup;
  v19 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v19;
      p_offset += 4;
      if ( !v19 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_10:
    p_method = sub_1BB6850(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))p_method)(
          v18,
          v14,
          *(_QWORD *)(p_method + 8)) & 1) == 0 )
    return 0LL;
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
LABEL_27:
    sub_1B64ACC(lookup, v16);
  v22 = lookup->klass;
  v23 = lookup;
  v24 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    v25 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v22->_1.interfaceOffsets->offset;
    while ( *(v25 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v24;
      v25 += 2;
      if ( !v24 )
        goto LABEL_18;
    }
    v26 = (__int64)&v22->vtable[*(_DWORD *)v25 + 2].method;
  }
  else
  {
LABEL_18:
    v26 = sub_1BB6850(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
  }
  result = (UserQuestEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))v26)(
                                  v23,
                                  v14,
                                  *(_QWORD *)(v26 + 8));
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
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_49FF26E & 1) == 0 )
  {
    sub_1B64870(&UserQuestMaster___c_TypeInfo, v1);
    byte_49FF26E = 1;
  }
  v2 = (Il2CppObject *)sub_1B64ABC(UserQuestMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  UserQuestMaster___c_TypeInfo->static_fields->__9 = (struct UserQuestMaster___c_o *)v2;
  sub_1B64814((ServantStatusBattleListViewItem_o *)UserQuestMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1B64ACC(this, x);
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
    sub_1B64ACC(this, x);
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
    sub_1B64ACC(this, a);
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
    sub_1B64ACC(this, a);
  return usrEnt->fields.questId == a;
}