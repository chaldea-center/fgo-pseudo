void UserQuestMaster___ctor(UserQuestMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C43EE6 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string___ctor__);
    byte_4C43EE6 = 1;
  }
  this->fields.oldId = -1;
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    62,
    (const MethodInfo_33A3834 *)Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string___ctor__);
}


void UserQuestMaster__CreateCache(UserQuestMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v3; // x21
  struct System_Collections_Generic_Dictionary_int__UserQuestEntity__o **p_idCache; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v8; // w21
  Il2CppObject *Item; // x23

  if ( (byte_4C43EF1 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_UserQuestEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_UserQuestEntity__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__UserQuestEntity___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__UserQuestEntity__set_Item__);
    sub_1C37058(&System_Collections_Generic_Dictionary_int__UserQuestEntity__TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C43EF1 = 1;
  }
  if ( this->fields.isDirty )
  {
    this->fields.isDirty = 0;
    v3 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C372A4(System_Collections_Generic_Dictionary_int__UserQuestEntity__TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v3,
      (const MethodInfo_33F9BB0 *)Method_System_Collections_Generic_Dictionary_int__UserQuestEntity___ctor__);
    this->fields.idCache = (struct System_Collections_Generic_Dictionary_int__UserQuestEntity__o *)v3;
    p_idCache = &this->fields.idCache;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.idCache, (int32_t)v3, v5, v6);
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
LABEL_19:
      sub_1C372B4(list);
    v8 = 0;
    while ( v8 < System_Collections_ObjectModel_Collection_object___get_Count(
                   list,
                   (const MethodInfo_333A510 *)Method_System_Collections_ObjectModel_Collection_UserQuestEntity__get_Count__) )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( list )
      {
        Item = System_Collections_ObjectModel_Collection_object___get_Item(
                 list,
                 v8,
                 (const MethodInfo_333A5A0 *)Method_System_Collections_ObjectModel_Collection_UserQuestEntity__get_Item__);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4C3CD62 )
        {
          sub_1C37058(&NetworkManager_TypeInfo);
          byte_4C3CD62 = 1;
        }
        list = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          list = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager_TypeInfo;
        }
        if ( Item )
        {
          if ( list[7].fields.items[4].klass == Item[1].monitor )
          {
            list = (System_Collections_ObjectModel_Collection_T__o *)*p_idCache;
            if ( !*p_idCache )
              goto LABEL_19;
            System_Collections_Generic_Dictionary_int__object___set_Item(
              (System_Collections_Generic_Dictionary_int__object__o *)list,
              (int32_t)Item[2].klass,
              Item,
              (const MethodInfo_33FA570 *)Method_System_Collections_Generic_Dictionary_int__UserQuestEntity__set_Item__);
          }
          list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
          ++v8;
          if ( list )
            continue;
        }
      }
      goto LABEL_19;
    }
  }
}


UserQuestEntity_o *UserQuestMaster__CreateQuestClearDummyData(
        UserQuestMaster_o *this,
        int32_t questId,
        int32_t phase,
        int64_t updatedAt,
        const MethodInfo *method)
{
  UserQuestEntity_o *v8; // x22
  const MethodInfo *v9; // x1
  NetworkManager_c *v10; // x0
  int64_t userIdNumber; // x8

  if ( (byte_4C43EF0 & 1) == 0 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&UserQuestEntity_TypeInfo);
    byte_4C43EF0 = 1;
  }
  if ( !questId )
    return 0;
  v8 = (UserQuestEntity_o *)sub_1C372A4(UserQuestEntity_TypeInfo);
  UserQuestEntity___ctor(v8, v9);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C3CD62 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C3CD62 = 1;
  }
  v10 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v10 = NetworkManager_TypeInfo;
  }
  if ( !v8 )
    sub_1C372B4(v10);
  userIdNumber = v10->static_fields->userIdNumber;
  v8->fields.questId = questId;
  v8->fields.questPhase = phase;
  v8->fields.clearNum = 1;
  v8->fields.updatedAt = updatedAt;
  v8->fields.userId = userIdNumber;
  return v8;
}


void UserQuestMaster__DeleteCache(UserQuestMaster_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct System_Collections_Generic_Dictionary_int__UserQuestEntity__o **p_idCache; // x19

  this->fields.idCache = 0;
  p_idCache = &this->fields.idCache;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.idCache, 0, v2, v3);
  *((_BYTE *)p_idCache - 8) = 1;
}


// local variable allocation has failed, the output may be wrong!
UserQuestEntity_o *UserQuestMaster__GetCacheById(UserQuestMaster_o *this, int32_t id, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__UserQuestEntity__o *idCache; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C43EF2 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__UserQuestEntity__TryGetValue__);
    byte_4C43EF2 = 1;
  }
  value = 0;
  UserQuestMaster__CreateCache(this, *(const MethodInfo **)&id);
  idCache = this->fields.idCache;
  if ( !idCache )
    sub_1C372B4(0);
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         (System_Collections_Generic_Dictionary_int__object__o *)idCache,
         id,
         &value,
         (const MethodInfo_33FBD10 *)Method_System_Collections_Generic_Dictionary_int__UserQuestEntity__TryGetValue__) )
  {
    return (UserQuestEntity_o *)value;
  }
  else
  {
    return 0;
  }
}


UserQuestEntity_o *UserQuestMaster__GetEntity(
        UserQuestMaster_o *this,
        int64_t userId,
        int32_t questId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v8; // x2
  NetworkManager_c *v9; // x0
  Il2CppObject *PK; // x1

  if ( (byte_4C43EE7 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string__GetEntity__);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C37058(&UserQuestEntity_TypeInfo);
    byte_4C43EE7 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  if ( BYTE1(Instance[4].monitor) )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C3CD62 )
    {
      sub_1C37058(&NetworkManager_TypeInfo);
      byte_4C3CD62 = 1;
    }
    v9 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v9 = NetworkManager_TypeInfo;
    }
    if ( v9->static_fields->userIdNumber == userId )
      return UserQuestMaster__GetCacheById(this, questId, v8);
  }
  if ( !UserQuestEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserQuestEntity_TypeInfo);
  PK = (Il2CppObject *)UserQuestEntity__CreatePK(userId, questId, v8);
  return (UserQuestEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                PK,
                                (const MethodInfo_33A5B58 *)Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string__GetEntity__);
}


QuestEntity_o *UserQuestMaster__GetLatestMainScenarioLastQuest(
        UserQuestMaster_o *this,
        int64_t userId,
        System_Collections_Generic_List_int__o *materialLatestClearList,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x20
  System_Collections_Generic_List_object__o *v9; // x22
  System_Collections_ObjectModel_Collection_T__o *list; // x8
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x23
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v13; // x9
  int32_t *p_offset; // x10
  __int64 v15; // x0
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  __int64 v17; // x9
  int32_t *v18; // x10
  __int64 v19; // x0
  __int64 v20; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  __int64 v23; // x8
  struct System_Object_array *items; // x9
  _QWORD *v25; // x10
  __int64 size; // x11
  Il2CppClass **v27; // x0
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  __int64 v29; // x9
  int32_t *v30; // x10
  __int64 v31; // x0
  UserQuestMaster___c_c *v32; // x8
  System_Comparison_T__o *_9__11_0; // x23
  Il2CppObject *v34; // x24
  struct UserQuestMaster___c_StaticFields *static_fields; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  __int64 v38; // x23
  __int64 v39; // x0
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  int32_t current; // w1
  __int64 v43; // x22
  __int64 v44; // x0
  _BOOL4 QuestEntity; // w0
  System_Func_int__bool__o *v46; // x24
  _BOOL8 v47; // x0
  QuestEntity_o *v48; // x23
  __int64 TypeFlag; // x0
  Il2CppObject *v50; // x0
  int32_t WarID_ByQuestID; // w22
  BalanceConfig_c *v52; // x0
  int v54; // [xsp+4h] [xbp-9Ch]
  System_Collections_Generic_List_Enumerator_object__o v55; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v56; // [xsp+20h] [xbp-80h] BYREF
  QuestEntity_o *entity; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4C43EEF & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&Method_BasicHelper_Any_int___);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_UserQuestEntity__GetEnumerator__);
    sub_1C37058(&System_Comparison_UserQuestEntity__TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_ConstantMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__get_Current__);
    sub_1C37058(&System_Func_int__bool__TypeInfo);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerator_UserQuestEntity__TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_UserQuestEntity__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_UserQuestEntity__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_UserQuestEntity__Sort__);
    sub_1C37058(&Method_System_Collections_Generic_List_UserQuestEntity___ctor__);
    sub_1C37058(&System_Collections_Generic_List_UserQuestEntity__TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C37058(&Method_UserQuestMaster___c__GetLatestMainScenarioLastQuest_b__11_0__);
    sub_1C37058(&Method_UserQuestMaster___c__DisplayClass11_0__GetLatestMainScenarioLastQuest_b__1__);
    sub_1C37058(&UserQuestMaster___c__DisplayClass11_0_TypeInfo);
    sub_1C37058(&UserQuestMaster___c_TypeInfo);
    sub_1C37058(&StringLiteral_3337/*"CHAPTER_F_END_ID"*/);
    byte_4C43EEF = 1;
  }
  entity = 0;
  memset(&v56, 0, sizeof(v56));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_71;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_QuestMaster___);
  v9 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_UserQuestEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_UserQuestEntity___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_71;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ConstantMaster___);
  if ( !Instance )
    goto LABEL_71;
  Instance = (Il2CppObject *)ConstantMaster__GetValue(
                               (ConstantMaster_o *)Instance,
                               (System_String_o *)StringLiteral_3337/*"CHAPTER_F_END_ID"*/,
                               0);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  v54 = (int)Instance;
  if ( !list )
    goto LABEL_71;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_333AAE8 *)Method_System_Collections_ObjectModel_Collection_UserQuestEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C372B4(0);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v13 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        p_offset += 4;
        if ( !v13 )
          goto LABEL_12;
      }
      v15 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_12:
      v15 = sub_1C87870(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
            Enumerator,
            *(_QWORD *)(v15 + 8))
        & 1) == 0 )
      break;
    v16 = Enumerator->klass;
    v17 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v18 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_UserQuestEntity__c **)v18 - 1) != System_Collections_Generic_IEnumerator_UserQuestEntity__TypeInfo )
      {
        --v17;
        v18 += 4;
        if ( !v17 )
          goto LABEL_19;
      }
      v19 = (__int64)&v16->vtable[*v18];
    }
    else
    {
LABEL_19:
      v19 = sub_1C87870(Enumerator, System_Collections_Generic_IEnumerator_UserQuestEntity__TypeInfo, 0);
    }
    v20 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
            Enumerator,
            *(_QWORD *)(v19 + 8));
    v23 = v20;
    if ( !v20 )
      sub_1C372B4(0);
    if ( *(_QWORD *)(v20 + 24) == userId && *(_DWORD *)(v20 + 40) )
    {
      if ( !v9 )
        sub_1C372B4(v20);
      items = v9->fields._items;
      v25 = Method_System_Collections_Generic_List_UserQuestEntity__Add__;
      ++v9->fields._version;
      if ( !items )
        sub_1C372B4(v20);
      size = v9->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v9,
          (Il2CppObject *)v20,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
      }
      else
      {
        v27 = &items->obj.klass + size;
        v9->fields._size = size + 1;
        v27[4] = (Il2CppClass *)v23;
        sub_1C36FFC((CGThumbnailListItem_o *)(v27 + 4), v23, v21, v22);
      }
    }
  }
  v28 = Enumerator->klass;
  v29 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v30 = &v28->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
    {
      --v29;
      v30 += 4;
      if ( !v29 )
        goto LABEL_33;
    }
    v31 = (__int64)&v28->vtable[*v30];
  }
  else
  {
LABEL_33:
    v31 = sub_1C87870(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  Instance = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(
                               Enumerator,
                               *(_QWORD *)(v31 + 8));
  v32 = UserQuestMaster___c_TypeInfo;
  if ( !UserQuestMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserQuestMaster___c_TypeInfo);
    v32 = UserQuestMaster___c_TypeInfo;
  }
  _9__11_0 = (System_Comparison_T__o *)v32->static_fields->__9__11_0;
  if ( !_9__11_0 )
  {
    if ( !v32->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v32);
      v32 = UserQuestMaster___c_TypeInfo;
    }
    v34 = (Il2CppObject *)v32->static_fields->__9;
    _9__11_0 = (System_Comparison_T__o *)sub_1C372A4(System_Comparison_UserQuestEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__11_0,
      v34,
      Method_UserQuestMaster___c__GetLatestMainScenarioLastQuest_b__11_0__,
      0);
    static_fields = UserQuestMaster___c_TypeInfo->static_fields;
    static_fields->__9__11_0 = (struct System_Comparison_UserQuestEntity__o *)_9__11_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__11_0, (int32_t)_9__11_0, v36, v37);
  }
  if ( !v9 )
LABEL_71:
    sub_1C372B4(Instance);
  System_Collections_Generic_List_object___Sort_58346216(
    v9,
    _9__11_0,
    (const MethodInfo_37A4AE8 *)Method_System_Collections_Generic_List_UserQuestEntity__Sort__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v55,
    v9,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_UserQuestEntity__GetEnumerator__);
  v56 = v55;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v56,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__MoveNext__) )
  {
    v38 = sub_1C372A4(UserQuestMaster___c__DisplayClass11_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v38, 0);
    if ( !v38 )
      sub_1C372B4(v39);
    current = (int32_t)v56.fields._current;
    *(_QWORD *)(v38 + 16) = v56.fields._current;
    v43 = v38 + 16;
    sub_1C36FFC((CGThumbnailListItem_o *)(v38 + 16), current, v40, v41);
    if ( !*(_QWORD *)(v38 + 16) )
      sub_1C372B4(v44);
    if ( !MasterData_object )
      sub_1C372B4(v44);
    QuestEntity = QuestMaster__TryGetQuestEntity(
                    (QuestMaster_o *)MasterData_object,
                    &entity,
                    *(_DWORD *)(*(_QWORD *)(v38 + 16) + 32LL),
                    0);
    if ( entity && QuestEntity )
    {
      v46 = (System_Func_int__bool__o *)sub_1C372A4(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(
        v46,
        (Il2CppObject *)v38,
        Method_UserQuestMaster___c__DisplayClass11_0__GetLatestMainScenarioLastQuest_b__1__,
        0);
      v47 = BasicHelper__Any_int_(
              (System_Collections_Generic_List_T__o *)materialLatestClearList,
              (System_Func_T__bool__o *)v46,
              (const MethodInfo_30D0CCC *)Method_BasicHelper_Any_int___);
      v48 = entity;
      if ( v47 )
        goto LABEL_63;
      if ( !entity )
        sub_1C372B4(v47);
      TypeFlag = QuestEntity__GetTypeFlag(entity, 0);
      if ( (_DWORD)TypeFlag == 2 )
      {
        if ( !entity )
          sub_1C372B4(TypeFlag);
        if ( entity->fields.chapterId )
          goto LABEL_60;
        if ( !*(_QWORD *)v43 )
          sub_1C372B4(TypeFlag);
        if ( *(_DWORD *)(*(_QWORD *)v43 + 32LL) <= v54 )
        {
LABEL_60:
          v50 = SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_QuestTree__get_Instance__);
          if ( !*(_QWORD *)v43 )
            sub_1C372B4(v50);
          if ( !v50 )
            sub_1C372B4(0);
          WarID_ByQuestID = QuestTree__GetWarID_ByQuestID((QuestTree_o *)v50, *(_DWORD *)(*(_QWORD *)v43 + 32LL), 0);
          v52 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v52 = BalanceConfig_TypeInfo;
          }
          if ( WarID_ByQuestID < v52->static_fields->PowerUpQuestWarId )
          {
            v48 = entity;
            goto LABEL_63;
          }
        }
      }
    }
  }
  v48 = 0;
LABEL_63:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v56,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__Dispose__);
  return v48;
}


QuestEntity_o *UserQuestMaster__GetMainScenarioLatestClear(
        UserQuestMaster_o *this,
        int64_t userId,
        System_Collections_Generic_List_int__o *materialLatestClearList,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x20
  System_Collections_Generic_List_object__o *v9; // x22
  System_Collections_ObjectModel_Collection_T__o *list; // x8
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x23
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v13; // x9
  int32_t *p_offset; // x10
  __int64 v15; // x0
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  __int64 v17; // x9
  int32_t *v18; // x10
  __int64 v19; // x0
  Il2CppObject *v20; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  Il2CppObject *v23; // x8
  struct System_Object_array *items; // x9
  _QWORD *v25; // x10
  __int64 size; // x11
  Il2CppClass **v27; // x0
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  __int64 v29; // x9
  int32_t *v30; // x10
  __int64 v31; // x0
  UserQuestMaster___c_c *v32; // x8
  System_Comparison_T__o *_9__10_0; // x23
  Il2CppObject *v34; // x24
  struct UserQuestMaster___c_StaticFields *static_fields; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  __int64 v38; // x23
  __int64 v39; // x0
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  int32_t current; // w1
  __int64 v43; // x22
  __int64 v44; // x0
  _BOOL4 QuestEntity; // w0
  System_Func_int__bool__o *v46; // x24
  _BOOL8 v47; // x0
  QuestEntity_o *v48; // x23
  __int64 TypeFlag; // x0
  Il2CppObject *v50; // x0
  int32_t WarID_ByQuestID; // w22
  BalanceConfig_c *v52; // x0
  int v54; // [xsp+4h] [xbp-9Ch]
  System_Collections_Generic_List_Enumerator_object__o v55; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v56; // [xsp+20h] [xbp-80h] BYREF
  QuestEntity_o *entity; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4C43EEE & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&Method_BasicHelper_Any_int___);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_UserQuestEntity__GetEnumerator__);
    sub_1C37058(&System_Comparison_UserQuestEntity__TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_ConstantMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__get_Current__);
    sub_1C37058(&System_Func_int__bool__TypeInfo);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerator_UserQuestEntity__TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_UserQuestEntity__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_UserQuestEntity__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_UserQuestEntity__Sort__);
    sub_1C37058(&Method_System_Collections_Generic_List_UserQuestEntity___ctor__);
    sub_1C37058(&System_Collections_Generic_List_UserQuestEntity__TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C37058(&Method_UserQuestMaster___c__GetMainScenarioLatestClear_b__10_0__);
    sub_1C37058(&Method_UserQuestMaster___c__DisplayClass10_0__GetMainScenarioLatestClear_b__1__);
    sub_1C37058(&UserQuestMaster___c__DisplayClass10_0_TypeInfo);
    sub_1C37058(&UserQuestMaster___c_TypeInfo);
    sub_1C37058(&StringLiteral_3337/*"CHAPTER_F_END_ID"*/);
    byte_4C43EEE = 1;
  }
  entity = 0;
  memset(&v56, 0, sizeof(v56));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_70;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_QuestMaster___);
  v9 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_UserQuestEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_UserQuestEntity___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_70;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ConstantMaster___);
  if ( !Instance )
    goto LABEL_70;
  Instance = (Il2CppObject *)ConstantMaster__GetValue(
                               (ConstantMaster_o *)Instance,
                               (System_String_o *)StringLiteral_3337/*"CHAPTER_F_END_ID"*/,
                               0);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  v54 = (int)Instance;
  if ( !list )
    goto LABEL_70;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_333AAE8 *)Method_System_Collections_ObjectModel_Collection_UserQuestEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C372B4(0);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v13 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        p_offset += 4;
        if ( !v13 )
          goto LABEL_12;
      }
      v15 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_12:
      v15 = sub_1C87870(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
            Enumerator,
            *(_QWORD *)(v15 + 8))
        & 1) == 0 )
      break;
    v16 = Enumerator->klass;
    v17 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v18 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_UserQuestEntity__c **)v18 - 1) != System_Collections_Generic_IEnumerator_UserQuestEntity__TypeInfo )
      {
        --v17;
        v18 += 4;
        if ( !v17 )
          goto LABEL_19;
      }
      v19 = (__int64)&v16->vtable[*v18];
    }
    else
    {
LABEL_19:
      v19 = sub_1C87870(Enumerator, System_Collections_Generic_IEnumerator_UserQuestEntity__TypeInfo, 0);
    }
    v20 = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
                            Enumerator,
                            *(_QWORD *)(v19 + 8));
    v23 = v20;
    if ( !v20 )
      sub_1C372B4(0);
    if ( v20[1].monitor == (void *)userId )
    {
      if ( !v9 )
        sub_1C372B4(v20);
      items = v9->fields._items;
      v25 = Method_System_Collections_Generic_List_UserQuestEntity__Add__;
      ++v9->fields._version;
      if ( !items )
        sub_1C372B4(v20);
      size = v9->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v9,
          v20,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
      }
      else
      {
        v27 = &items->obj.klass + size;
        v9->fields._size = size + 1;
        v27[4] = (Il2CppClass *)v23;
        sub_1C36FFC((CGThumbnailListItem_o *)(v27 + 4), (int32_t)v23, v21, v22);
      }
    }
  }
  v28 = Enumerator->klass;
  v29 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v30 = &v28->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
    {
      --v29;
      v30 += 4;
      if ( !v29 )
        goto LABEL_32;
    }
    v31 = (__int64)&v28->vtable[*v30];
  }
  else
  {
LABEL_32:
    v31 = sub_1C87870(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  Instance = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(
                               Enumerator,
                               *(_QWORD *)(v31 + 8));
  v32 = UserQuestMaster___c_TypeInfo;
  if ( !UserQuestMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserQuestMaster___c_TypeInfo);
    v32 = UserQuestMaster___c_TypeInfo;
  }
  _9__10_0 = (System_Comparison_T__o *)v32->static_fields->__9__10_0;
  if ( !_9__10_0 )
  {
    if ( !v32->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v32);
      v32 = UserQuestMaster___c_TypeInfo;
    }
    v34 = (Il2CppObject *)v32->static_fields->__9;
    _9__10_0 = (System_Comparison_T__o *)sub_1C372A4(System_Comparison_UserQuestEntity__TypeInfo);
    System_Comparison_object____ctor(_9__10_0, v34, Method_UserQuestMaster___c__GetMainScenarioLatestClear_b__10_0__, 0);
    static_fields = UserQuestMaster___c_TypeInfo->static_fields;
    static_fields->__9__10_0 = (struct System_Comparison_UserQuestEntity__o *)_9__10_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__10_0, (int32_t)_9__10_0, v36, v37);
  }
  if ( !v9 )
LABEL_70:
    sub_1C372B4(Instance);
  System_Collections_Generic_List_object___Sort_58346216(
    v9,
    _9__10_0,
    (const MethodInfo_37A4AE8 *)Method_System_Collections_Generic_List_UserQuestEntity__Sort__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v55,
    v9,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_UserQuestEntity__GetEnumerator__);
  v56 = v55;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v56,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__MoveNext__) )
  {
    v38 = sub_1C372A4(UserQuestMaster___c__DisplayClass10_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v38, 0);
    if ( !v38 )
      sub_1C372B4(v39);
    current = (int32_t)v56.fields._current;
    *(_QWORD *)(v38 + 16) = v56.fields._current;
    v43 = v38 + 16;
    sub_1C36FFC((CGThumbnailListItem_o *)(v38 + 16), current, v40, v41);
    if ( !*(_QWORD *)(v38 + 16) )
      sub_1C372B4(v44);
    if ( !MasterData_object )
      sub_1C372B4(v44);
    QuestEntity = QuestMaster__TryGetQuestEntity(
                    (QuestMaster_o *)MasterData_object,
                    &entity,
                    *(_DWORD *)(*(_QWORD *)(v38 + 16) + 32LL),
                    0);
    if ( entity && QuestEntity )
    {
      v46 = (System_Func_int__bool__o *)sub_1C372A4(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(
        v46,
        (Il2CppObject *)v38,
        Method_UserQuestMaster___c__DisplayClass10_0__GetMainScenarioLatestClear_b__1__,
        0);
      v47 = BasicHelper__Any_int_(
              (System_Collections_Generic_List_T__o *)materialLatestClearList,
              (System_Func_T__bool__o *)v46,
              (const MethodInfo_30D0CCC *)Method_BasicHelper_Any_int___);
      v48 = entity;
      if ( v47 )
        goto LABEL_62;
      if ( !entity )
        sub_1C372B4(v47);
      TypeFlag = QuestEntity__GetTypeFlag(entity, 0);
      if ( (_DWORD)TypeFlag == 2 )
      {
        if ( !entity )
          sub_1C372B4(TypeFlag);
        if ( entity->fields.chapterId )
          goto LABEL_59;
        if ( !*(_QWORD *)v43 )
          sub_1C372B4(TypeFlag);
        if ( *(_DWORD *)(*(_QWORD *)v43 + 32LL) <= v54 )
        {
LABEL_59:
          v50 = SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_QuestTree__get_Instance__);
          if ( !*(_QWORD *)v43 )
            sub_1C372B4(v50);
          if ( !v50 )
            sub_1C372B4(0);
          WarID_ByQuestID = QuestTree__GetWarID_ByQuestID((QuestTree_o *)v50, *(_DWORD *)(*(_QWORD *)v43 + 32LL), 0);
          v52 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v52 = BalanceConfig_TypeInfo;
          }
          if ( WarID_ByQuestID < v52->static_fields->PowerUpQuestWarId )
          {
            v48 = entity;
            goto LABEL_62;
          }
        }
      }
    }
  }
  v48 = 0;
LABEL_62:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v56,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__Dispose__);
  return v48;
}


bool UserQuestMaster__IsQuestResetAndQuestClear(
        UserQuestMaster_o *this,
        int64_t userId,
        int32_t questId,
        const MethodInfo *method)
{
  UserQuestEntity_o *EntityFromId; // x0

  EntityFromId = UserQuestMaster__getEntityFromId(this, userId, questId, method);
  return EntityFromId && EntityFromId->fields.clearNum >= 1 && (EntityFromId->fields.status & 2) != 0;
}


bool UserQuestMaster__IsQuestResetAndQuestClearIds(
        UserQuestMaster_o *this,
        int64_t userId,
        System_Int32_array *questIds,
        const MethodInfo *method)
{
  il2cpp_array_size_t max_length; // x8
  bool v6; // w22
  UserQuestMaster_o *v8; // x21
  unsigned __int64 v9; // x23

  if ( !questIds )
    sub_1C372B4(this);
  max_length = questIds->max_length;
  v6 = (int)max_length > 0;
  if ( (int)max_length >= 1 )
  {
    v8 = this;
    v9 = 0;
    do
    {
      if ( v9 >= (unsigned int)max_length )
        sub_1C372BC(this);
      this = (UserQuestMaster_o *)UserQuestMaster__getEntityFromId(v8, userId, questIds->m_Items[v9], method);
      if ( this && SLODWORD(this->fields.list) >= 1 && (BYTE4(this->fields.seriazlier) & 2) != 0 )
        break;
      LODWORD(max_length) = questIds->max_length;
      v6 = (__int64)++v9 < (int)max_length;
    }
    while ( (__int64)v9 < (int)max_length );
  }
  return v6;
}


void UserQuestMaster__OnListChangedImplementation(
        UserQuestMaster_o *this,
        System_Collections_Specialized_NotifyCollectionChangedEventArgs_o *e,
        const MethodInfo *method)
{
  this->fields.isDirty = 1;
}


bool UserQuestMaster__TryGetEntity(
        UserQuestMaster_o *this,
        UserQuestEntity_o **entity,
        int64_t userId,
        int32_t questId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v10; // x2
  NetworkManager_c *v11; // x0
  UserQuestEntity_o *CacheById; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  Il2CppObject *PK; // x2

  if ( (byte_4C43EE8 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string__TryGetEntity__);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C37058(&UserQuestEntity_TypeInfo);
    byte_4C43EE8 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  if ( !BYTE1(Instance[4].monitor) )
    goto LABEL_19;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C3CD62 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C3CD62 = 1;
  }
  v11 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v11 = NetworkManager_TypeInfo;
  }
  if ( v11->static_fields->userIdNumber == userId )
  {
    CacheById = UserQuestMaster__GetCacheById(this, questId, v10);
    *entity = CacheById;
    sub_1C36FFC((CGThumbnailListItem_o *)entity, (int32_t)CacheById, v13, v14);
    return *entity != 0;
  }
  else
  {
LABEL_19:
    if ( !UserQuestEntity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserQuestEntity_TypeInfo);
    PK = (Il2CppObject *)UserQuestEntity__CreatePK(userId, questId, v10);
    return DataMasterBase_object__object__object___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             (Il2CppObject **)entity,
             PK,
             (const MethodInfo_33A5BA4 *)Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string__TryGetEntity__);
  }
}


int32_t UserQuestMaster__getChallengeCountsFromId(
        UserQuestMaster_o *this,
        int64_t userId,
        int32_t questId,
        const MethodInfo *method)
{
  System_String_o *v6; // x0
  struct System_String_o *v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_String_o *userIdString; // x20
  System_String_o *v11; // x0
  System_String_o *v12; // x20
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *lookup; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *v15; // x19
  __int64 v16; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__UserQuestEntity__c **p_offset; // x10
  __int64 v18; // x0
  __int64 v20; // [xsp+0h] [xbp-40h] BYREF
  int32_t v21; // [xsp+Ch] [xbp-34h] BYREF
  int64_t v22; // [xsp+18h] [xbp-28h] BYREF

  v22 = userId;
  v21 = questId;
  if ( (byte_4C43EEA & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string__get_lookup__);
    sub_1C37058(&System_Collections_Generic_IReadOnlyDictionary_string__UserQuestEntity__TypeInfo);
    sub_1C37058(&StringLiteral_1457/*":"*/);
    byte_4C43EEA = 1;
  }
  v20 = 0;
  if ( this->fields.oldId != userId )
  {
    this->fields.oldId = userId;
    v6 = System_Int64__ToString((int64_t)&v22, 0);
    v7 = System_String__Concat_63561656(v6, (System_String_o *)StringLiteral_1457/*":"*/, 0);
    this->fields.userIdString = v7;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.userIdString, (int32_t)v7, v8, v9);
  }
  userIdString = this->fields.userIdString;
  v11 = System_Int32__ToString((int32_t)&v21, 0);
  v12 = System_String__Concat_63561656(userIdString, v11, 0);
  lookup = DataMasterBase_object__object__object___get_lookup(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             (const MethodInfo_33A394C *)Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string__get_lookup__);
  if ( !lookup )
    goto LABEL_16;
  klass = lookup->klass;
  v15 = lookup;
  v16 = *(unsigned __int16 *)&lookup->klass->_2.rank;
  if ( *(_WORD *)&lookup->klass->_2.rank )
  {
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__UserQuestEntity__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__UserQuestEntity__TypeInfo )
    {
      --v16;
      p_offset += 2;
      if ( !v16 )
        goto LABEL_10;
    }
    v18 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1];
  }
  else
  {
LABEL_10:
    v18 = sub_1C87870(lookup, System_Collections_Generic_IReadOnlyDictionary_string__UserQuestEntity__TypeInfo, 1);
  }
  lookup = (System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *, System_String_o *, __int64 *, _QWORD))v18)(
                                                                                  v15,
                                                                                  v12,
                                                                                  &v20,
                                                                                  *(_QWORD *)(v18 + 8));
  if ( ((unsigned __int8)lookup & 1) != 0 )
  {
    if ( v20 )
      return *(_DWORD *)(v20 + 56);
LABEL_16:
    sub_1C372B4(lookup);
  }
  return 0;
}


int32_t UserQuestMaster__getChallengeCountsFromIds(
        UserQuestMaster_o *this,
        int64_t userId,
        System_Int32_array *questIds,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v7; // x21
  void *list; // x0
  int32_t Count; // w0
  int32_t v10; // w23
  int32_t v11; // w22
  int32_t v12; // w24
  _DWORD *v13; // x25

  if ( (byte_4C43EEB & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_UserQuestEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_UserQuestEntity__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Remove__);
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor___78055976);
    sub_1C37058(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C37058(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C43EEB = 1;
  }
  v7 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_58218708(
    v7,
    (System_Collections_Generic_IEnumerable_T__o *)questIds,
    (const MethodInfo_37858D4 *)Method_System_Collections_Generic_List_int___ctor___78055976);
  list = this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_333A510 *)Method_System_Collections_ObjectModel_Collection_UserQuestEntity__get_Count__);
  if ( Count >= 1 )
  {
    v10 = Count;
    v11 = 0;
    v12 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v12,
               (const MethodInfo_333A5A0 *)Method_System_Collections_ObjectModel_Collection_UserQuestEntity__get_Item__);
      if ( !list )
        break;
      v13 = list;
      if ( *((_QWORD *)list + 3) != userId )
        goto LABEL_19;
      if ( !v7 )
        break;
      if ( !System_Collections_Generic_List_int___Remove(
              v7,
              *((_DWORD *)list + 8),
              (const MethodInfo_37874FC *)Method_System_Collections_Generic_List_int__Remove__)
        || (v11 += v13[14], v7->fields._size) )
      {
LABEL_19:
        if ( v10 != ++v12 )
          continue;
      }
      return v11;
    }
LABEL_16:
    sub_1C372B4(list);
  }
  return 0;
}


int32_t UserQuestMaster__getClearCountsFromId(
        UserQuestMaster_o *this,
        int64_t userId,
        int32_t questId,
        const MethodInfo *method)
{
  System_String_o *v6; // x0
  struct System_String_o *v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_String_o *userIdString; // x20
  System_String_o *v11; // x0
  System_String_o *v12; // x20
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *lookup; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *v15; // x19
  __int64 v16; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__UserQuestEntity__c **p_offset; // x10
  __int64 v18; // x0
  __int64 v20; // [xsp+0h] [xbp-40h] BYREF
  int32_t v21; // [xsp+Ch] [xbp-34h] BYREF
  int64_t v22; // [xsp+18h] [xbp-28h] BYREF

  v22 = userId;
  v21 = questId;
  if ( (byte_4C43EEC & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string__get_lookup__);
    sub_1C37058(&System_Collections_Generic_IReadOnlyDictionary_string__UserQuestEntity__TypeInfo);
    sub_1C37058(&StringLiteral_1457/*":"*/);
    byte_4C43EEC = 1;
  }
  v20 = 0;
  if ( this->fields.oldId != userId )
  {
    this->fields.oldId = userId;
    v6 = System_Int64__ToString((int64_t)&v22, 0);
    v7 = System_String__Concat_63561656(v6, (System_String_o *)StringLiteral_1457/*":"*/, 0);
    this->fields.userIdString = v7;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.userIdString, (int32_t)v7, v8, v9);
  }
  userIdString = this->fields.userIdString;
  v11 = System_Int32__ToString((int32_t)&v21, 0);
  v12 = System_String__Concat_63561656(userIdString, v11, 0);
  lookup = DataMasterBase_object__object__object___get_lookup(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             (const MethodInfo_33A394C *)Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string__get_lookup__);
  if ( !lookup )
    goto LABEL_16;
  klass = lookup->klass;
  v15 = lookup;
  v16 = *(unsigned __int16 *)&lookup->klass->_2.rank;
  if ( *(_WORD *)&lookup->klass->_2.rank )
  {
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__UserQuestEntity__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__UserQuestEntity__TypeInfo )
    {
      --v16;
      p_offset += 2;
      if ( !v16 )
        goto LABEL_10;
    }
    v18 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1];
  }
  else
  {
LABEL_10:
    v18 = sub_1C87870(lookup, System_Collections_Generic_IReadOnlyDictionary_string__UserQuestEntity__TypeInfo, 1);
  }
  lookup = (System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *, System_String_o *, __int64 *, _QWORD))v18)(
                                                                                  v15,
                                                                                  v12,
                                                                                  &v20,
                                                                                  *(_QWORD *)(v18 + 8));
  if ( ((unsigned __int8)lookup & 1) != 0 )
  {
    if ( v20 )
      return *(_DWORD *)(v20 + 40);
LABEL_16:
    sub_1C372B4(lookup);
  }
  return 0;
}


int32_t UserQuestMaster__getClearCountsFromIds(
        UserQuestMaster_o *this,
        int64_t userId,
        System_Int32_array *questIds,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v7; // x21
  void *list; // x0
  int32_t Count; // w0
  int32_t v10; // w23
  int32_t v11; // w22
  int32_t v12; // w24
  _DWORD *v13; // x25

  if ( (byte_4C43EED & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_UserQuestEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_UserQuestEntity__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Remove__);
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor___78055976);
    sub_1C37058(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C37058(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C43EED = 1;
  }
  v7 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_58218708(
    v7,
    (System_Collections_Generic_IEnumerable_T__o *)questIds,
    (const MethodInfo_37858D4 *)Method_System_Collections_Generic_List_int___ctor___78055976);
  list = this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_333A510 *)Method_System_Collections_ObjectModel_Collection_UserQuestEntity__get_Count__);
  if ( Count >= 1 )
  {
    v10 = Count;
    v11 = 0;
    v12 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v12,
               (const MethodInfo_333A5A0 *)Method_System_Collections_ObjectModel_Collection_UserQuestEntity__get_Item__);
      if ( !list )
        break;
      v13 = list;
      if ( *((_QWORD *)list + 3) != userId )
        goto LABEL_19;
      if ( !v7 )
        break;
      if ( !System_Collections_Generic_List_int___Remove(
              v7,
              *((_DWORD *)list + 8),
              (const MethodInfo_37874FC *)Method_System_Collections_Generic_List_int__Remove__)
        || (v11 += v13[10], v7->fields._size) )
      {
LABEL_19:
        if ( v10 != ++v12 )
          continue;
      }
      return v11;
    }
LABEL_16:
    sub_1C372B4(list);
  }
  return 0;
}


UserQuestEntity_o *UserQuestMaster__getEntityFromId(
        UserQuestMaster_o *this,
        int64_t userId,
        int32_t questId,
        const MethodInfo *method)
{
  _BYTE *Instance; // x0
  const MethodInfo *v8; // x2
  NetworkManager_c *v9; // x0
  System_String_o *v11; // x0
  struct System_String_o *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_String_o *userIdString; // x20
  System_String_o *v16; // x0
  System_String_o *v17; // x20
  __int64 v18; // x8
  _BYTE *v19; // x19
  __int64 v20; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__UserQuestEntity__c **v21; // x10
  __int64 v22; // x0
  UserQuestEntity_o *v23; // [xsp+8h] [xbp-48h] BYREF
  int32_t v24; // [xsp+14h] [xbp-3Ch] BYREF
  int64_t v25; // [xsp+18h] [xbp-38h] BYREF

  v25 = userId;
  v24 = questId;
  if ( (byte_4C43EE9 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string__get_lookup__);
    sub_1C37058(&System_Collections_Generic_IReadOnlyDictionary_string__UserQuestEntity__TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C37058(&StringLiteral_1457/*":"*/);
    byte_4C43EE9 = 1;
  }
  v23 = 0;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  if ( Instance[73] )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C3CD62 )
    {
      sub_1C37058(&NetworkManager_TypeInfo);
      byte_4C3CD62 = 1;
    }
    v9 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v9 = NetworkManager_TypeInfo;
    }
    if ( v9->static_fields->userIdNumber == userId )
      return UserQuestMaster__GetCacheById(this, questId, v8);
  }
  if ( this->fields.oldId != userId )
  {
    this->fields.oldId = userId;
    v11 = System_Int64__ToString((int64_t)&v25, 0);
    v12 = System_String__Concat_63561656(v11, (System_String_o *)StringLiteral_1457/*":"*/, 0);
    this->fields.userIdString = v12;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.userIdString, (int32_t)v12, v13, v14);
  }
  userIdString = this->fields.userIdString;
  v16 = System_Int32__ToString((int32_t)&v24, 0);
  v17 = System_String__Concat_63561656(userIdString, v16, 0);
  Instance = DataMasterBase_object__object__object___get_lookup(
               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
               (const MethodInfo_33A394C *)Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string__get_lookup__);
  if ( !Instance )
LABEL_25:
    sub_1C372B4(Instance);
  v18 = *(_QWORD *)Instance;
  v19 = Instance;
  v20 = *(unsigned __int16 *)(*(_QWORD *)Instance + 302LL);
  if ( *(_WORD *)(*(_QWORD *)Instance + 302LL) )
  {
    v21 = (System_Collections_Generic_IReadOnlyDictionary_string__UserQuestEntity__c **)(*(_QWORD *)(v18 + 176) + 8LL);
    while ( *(v21 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__UserQuestEntity__TypeInfo )
    {
      --v20;
      v21 += 2;
      if ( !v20 )
        goto LABEL_20;
    }
    v22 = v18 + 16LL * (*(_DWORD *)v21 + 1) + 312;
  }
  else
  {
LABEL_20:
    v22 = sub_1C87870(Instance, System_Collections_Generic_IReadOnlyDictionary_string__UserQuestEntity__TypeInfo, 1);
  }
  if ( ((*(__int64 (__fastcall **)(_BYTE *, System_String_o *, UserQuestEntity_o **, _QWORD))v22)(
          v19,
          v17,
          &v23,
          *(_QWORD *)(v22 + 8))
      & 1) != 0 )
    return v23;
  else
    return 0;
}


void UserQuestMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C43EF3 & 1) == 0 )
  {
    sub_1C37058(&UserQuestMaster___c_TypeInfo);
    byte_4C43EF3 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(UserQuestMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  UserQuestMaster___c_TypeInfo->static_fields->__9 = (struct UserQuestMaster___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)UserQuestMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void UserQuestMaster___c___ctor(UserQuestMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t UserQuestMaster___c___GetLatestMainScenarioLastQuest_b__11_0(
        UserQuestMaster___c_o *this,
        UserQuestEntity_o *x,
        UserQuestEntity_o *y,
        const MethodInfo *method)
{
  if ( !y || !x )
    sub_1C372B4(this);
  return y->fields.questId - x->fields.questId;
}


int32_t UserQuestMaster___c___GetMainScenarioLatestClear_b__10_0(
        UserQuestMaster___c_o *this,
        UserQuestEntity_o *x,
        UserQuestEntity_o *y,
        const MethodInfo *method)
{
  int64_t v4; // x8

  if ( !y || !x )
    sub_1C372B4(this);
  v4 = y->fields.updatedAt - x->fields.updatedAt;
  if ( v4 < 0 )
    return -1;
  if ( v4 )
    return 1;
  return y->fields.questId - x->fields.questId;
}


void UserQuestMaster___c__DisplayClass10_0___ctor(
        UserQuestMaster___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool UserQuestMaster___c__DisplayClass10_0___GetMainScenarioLatestClear_b__1(
        UserQuestMaster___c__DisplayClass10_0_o *this,
        int32_t a,
        const MethodInfo *method)
{
  struct UserQuestEntity_o *usrEnt; // x8

  usrEnt = this->fields.usrEnt;
  if ( !usrEnt )
    sub_1C372B4(this);
  return usrEnt->fields.questId == a;
}


void UserQuestMaster___c__DisplayClass11_0___ctor(
        UserQuestMaster___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool UserQuestMaster___c__DisplayClass11_0___GetLatestMainScenarioLastQuest_b__1(
        UserQuestMaster___c__DisplayClass11_0_o *this,
        int32_t a,
        const MethodInfo *method)
{
  struct UserQuestEntity_o *usrEnt; // x8

  usrEnt = this->fields.usrEnt;
  if ( !usrEnt )
    sub_1C372B4(this);
  return usrEnt->fields.questId == a;
}