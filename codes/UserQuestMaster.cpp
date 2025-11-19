void UserQuestMaster___ctor(UserQuestMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CB720B & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string___ctor__);
    byte_4CB720B = 1;
  }
  this->fields.oldId = -1;
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    62,
    (const MethodInfo_33FB870 *)Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string___ctor__);
}


void UserQuestMaster__CreateCache(UserQuestMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v3; // x21
  struct System_Collections_Generic_Dictionary_int__UserQuestEntity__o **p_idCache; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  __int64 v7; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v9; // w21
  Il2CppObject *Item; // x23

  if ( (byte_4CB7216 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_UserQuestEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_UserQuestEntity__get_Item__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__UserQuestEntity___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__UserQuestEntity__set_Item__);
    sub_1C6BA08(&System_Collections_Generic_Dictionary_int__UserQuestEntity__TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB7216 = 1;
  }
  if ( this->fields.isDirty )
  {
    this->fields.isDirty = 0;
    v3 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C6BC54(System_Collections_Generic_Dictionary_int__UserQuestEntity__TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v3,
      (const MethodInfo_3451B1C *)Method_System_Collections_Generic_Dictionary_int__UserQuestEntity___ctor__);
    this->fields.idCache = (struct System_Collections_Generic_Dictionary_int__UserQuestEntity__o *)v3;
    p_idCache = &this->fields.idCache;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.idCache, (int32_t)v3, v5, v6);
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
LABEL_19:
      sub_1C6BC60(list, v7);
    v9 = 0;
    while ( v9 < System_Collections_ObjectModel_Collection_object___get_Count(
                   list,
                   (const MethodInfo_3391E64 *)Method_System_Collections_ObjectModel_Collection_UserQuestEntity__get_Count__) )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( list )
      {
        Item = System_Collections_ObjectModel_Collection_object___get_Item(
                 list,
                 v9,
                 (const MethodInfo_3391EF4 *)Method_System_Collections_ObjectModel_Collection_UserQuestEntity__get_Item__);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4CB002A )
        {
          sub_1C6BA08(&NetworkManager_TypeInfo);
          byte_4CB002A = 1;
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
              (const MethodInfo_34524DC *)Method_System_Collections_Generic_Dictionary_int__UserQuestEntity__set_Item__);
          }
          list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
          ++v9;
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
  __int64 v10; // x1
  NetworkManager_c *v11; // x0
  int64_t userIdNumber; // x8

  if ( (byte_4CB7215 & 1) == 0 )
  {
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&UserQuestEntity_TypeInfo);
    byte_4CB7215 = 1;
  }
  if ( !questId )
    return 0;
  v8 = (UserQuestEntity_o *)sub_1C6BC54(UserQuestEntity_TypeInfo);
  UserQuestEntity___ctor(v8, v9);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CB002A )
  {
    sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB002A = 1;
  }
  v11 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v11 = NetworkManager_TypeInfo;
  }
  if ( !v8 )
    sub_1C6BC60(v11, v10);
  userIdNumber = v11->static_fields->userIdNumber;
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
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.idCache, 0, v2, v3);
  *((_BYTE *)p_idCache - 8) = 1;
}


// local variable allocation has failed, the output may be wrong!
UserQuestEntity_o *UserQuestMaster__GetCacheById(UserQuestMaster_o *this, int32_t id, const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_Dictionary_int__UserQuestEntity__o *idCache; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CB7217 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__UserQuestEntity__TryGetValue__);
    byte_4CB7217 = 1;
  }
  value = 0;
  UserQuestMaster__CreateCache(this, *(const MethodInfo **)&id);
  idCache = this->fields.idCache;
  if ( !idCache )
    sub_1C6BC60(0, v5);
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         (System_Collections_Generic_Dictionary_int__object__o *)idCache,
         id,
         &value,
         (const MethodInfo_3453C7C *)Method_System_Collections_Generic_Dictionary_int__UserQuestEntity__TryGetValue__) )
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
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  NetworkManager_c *v10; // x0
  Il2CppObject *PK; // x1

  if ( (byte_4CB720C & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string__GetEntity__);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C6BA08(&UserQuestEntity_TypeInfo);
    byte_4CB720C = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3A4F8A4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
    sub_1C6BC60(0, v8);
  if ( BYTE1(Instance[4].monitor) )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4CB002A )
    {
      sub_1C6BA08(&NetworkManager_TypeInfo);
      byte_4CB002A = 1;
    }
    v10 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v10 = NetworkManager_TypeInfo;
    }
    if ( v10->static_fields->userIdNumber == userId )
      return UserQuestMaster__GetCacheById(this, questId, v9);
  }
  if ( !UserQuestEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserQuestEntity_TypeInfo);
  PK = (Il2CppObject *)UserQuestEntity__CreatePK(userId, questId, v9);
  return (UserQuestEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                PK,
                                (const MethodInfo_33FDB94 *)Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string__GetEntity__);
}


QuestEntity_o *UserQuestMaster__GetLatestMainScenarioLastQuest(
        UserQuestMaster_o *this,
        int64_t userId,
        System_Collections_Generic_List_int__o *materialLatestClearList,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *MasterData_object; // x20
  System_Collections_Generic_List_object__o *v10; // x22
  System_Collections_ObjectModel_Collection_T__o *list; // x8
  __int64 v12; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x23
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v15; // x9
  int32_t *p_offset; // x10
  __int64 v17; // x0
  System_Collections_Generic_IEnumerator_T__c *v18; // x8
  __int64 v19; // x9
  int32_t *v20; // x10
  __int64 v21; // x0
  __int64 v22; // x0
  __int64 v23; // x1
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  __int64 v26; // x8
  struct System_Object_array *items; // x9
  _QWORD *v28; // x10
  __int64 size; // x11
  Il2CppClass **v30; // x0
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  __int64 v32; // x9
  int32_t *v33; // x10
  __int64 v34; // x0
  UserQuestMaster___c_c *v35; // x8
  System_Comparison_T__o *_9__11_0; // x23
  Il2CppObject *v37; // x24
  struct UserQuestMaster___c_StaticFields *static_fields; // x0
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  __int64 v41; // x23
  __int64 v42; // x0
  __int64 v43; // x1
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  int32_t current; // w1
  __int64 v47; // x22
  __int64 v48; // x0
  __int64 v49; // x1
  _BOOL4 QuestEntity; // w0
  System_Func_int__bool__o *v51; // x24
  _BOOL8 v52; // x0
  __int64 v53; // x1
  QuestEntity_o *v54; // x23
  __int64 TypeFlag; // x0
  __int64 v56; // x1
  Il2CppObject *v57; // x0
  __int64 v58; // x1
  int32_t WarID_ByQuestID; // w22
  BalanceConfig_c *v60; // x0
  int v62; // [xsp+4h] [xbp-9Ch]
  System_Collections_Generic_List_Enumerator_object__o v63; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v64; // [xsp+20h] [xbp-80h] BYREF
  QuestEntity_o *entity; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4CB7214 & 1) == 0 )
  {
    sub_1C6BA08(&BalanceConfig_TypeInfo);
    sub_1C6BA08(&Method_BasicHelper_Any_int___);
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_UserQuestEntity__GetEnumerator__);
    sub_1C6BA08(&System_Comparison_UserQuestEntity__TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMasterData_ConstantMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__get_Current__);
    sub_1C6BA08(&System_Func_int__bool__TypeInfo);
    sub_1C6BA08(&System_IDisposable_TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_IEnumerator_UserQuestEntity__TypeInfo);
    sub_1C6BA08(&System_Collections_IEnumerator_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_UserQuestEntity__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_UserQuestEntity__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_UserQuestEntity__Sort__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_UserQuestEntity___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_UserQuestEntity__TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C6BA08(&Method_UserQuestMaster___c__GetLatestMainScenarioLastQuest_b__11_0__);
    sub_1C6BA08(&Method_UserQuestMaster___c__DisplayClass11_0__GetLatestMainScenarioLastQuest_b__1__);
    sub_1C6BA08(&UserQuestMaster___c__DisplayClass11_0_TypeInfo);
    sub_1C6BA08(&UserQuestMaster___c_TypeInfo);
    sub_1C6BA08(&StringLiteral_3329/*"CHAPTER_F_END_ID"*/);
    byte_4CB7214 = 1;
  }
  entity = 0;
  memset(&v64, 0, sizeof(v64));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_71;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_QuestMaster___);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_UserQuestEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_UserQuestEntity___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_71;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ConstantMaster___);
  if ( !Instance )
    goto LABEL_71;
  Instance = (Il2CppObject *)ConstantMaster__GetValue(
                               (ConstantMaster_o *)Instance,
                               (System_String_o *)StringLiteral_3329/*"CHAPTER_F_END_ID"*/,
                               0);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  v62 = (int)Instance;
  if ( !list )
    goto LABEL_71;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_339243C *)Method_System_Collections_ObjectModel_Collection_UserQuestEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C6BC60(0, v12);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v15 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v15;
        p_offset += 4;
        if ( !v15 )
          goto LABEL_12;
      }
      v17 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_12:
      v17 = sub_1C41D90(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
            Enumerator,
            *(_QWORD *)(v17 + 8))
        & 1) == 0 )
      break;
    v18 = Enumerator->klass;
    v19 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v20 = &v18->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_UserQuestEntity__c **)v20 - 1) != System_Collections_Generic_IEnumerator_UserQuestEntity__TypeInfo )
      {
        --v19;
        v20 += 4;
        if ( !v19 )
          goto LABEL_19;
      }
      v21 = (__int64)&v18->vtable[*v20];
    }
    else
    {
LABEL_19:
      v21 = sub_1C41D90(Enumerator, System_Collections_Generic_IEnumerator_UserQuestEntity__TypeInfo, 0);
    }
    v22 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(
            Enumerator,
            *(_QWORD *)(v21 + 8));
    v26 = v22;
    if ( !v22 )
      sub_1C6BC60(0, v23);
    if ( *(_QWORD *)(v22 + 24) == userId && *(_DWORD *)(v22 + 40) )
    {
      if ( !v10 )
        sub_1C6BC60(v22, v23);
      items = v10->fields._items;
      v28 = Method_System_Collections_Generic_List_UserQuestEntity__Add__;
      ++v10->fields._version;
      if ( !items )
        sub_1C6BC60(v22, v23);
      size = v10->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v10,
          (Il2CppObject *)v22,
          *(const MethodInfo_3800974 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
      }
      else
      {
        v30 = &items->obj.klass + size;
        v10->fields._size = size + 1;
        v30[4] = (Il2CppClass *)v26;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v30 + 4), v26, v24, v25);
      }
    }
  }
  v31 = Enumerator->klass;
  v32 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v33 = &v31->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
    {
      --v32;
      v33 += 4;
      if ( !v32 )
        goto LABEL_33;
    }
    v34 = (__int64)&v31->vtable[*v33];
  }
  else
  {
LABEL_33:
    v34 = sub_1C41D90(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  Instance = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(
                               Enumerator,
                               *(_QWORD *)(v34 + 8));
  v35 = UserQuestMaster___c_TypeInfo;
  if ( !UserQuestMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserQuestMaster___c_TypeInfo);
    v35 = UserQuestMaster___c_TypeInfo;
  }
  _9__11_0 = (System_Comparison_T__o *)v35->static_fields->__9__11_0;
  if ( !_9__11_0 )
  {
    if ( !v35->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v35);
      v35 = UserQuestMaster___c_TypeInfo;
    }
    v37 = (Il2CppObject *)v35->static_fields->__9;
    _9__11_0 = (System_Comparison_T__o *)sub_1C6BC54(System_Comparison_UserQuestEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__11_0,
      v37,
      Method_UserQuestMaster___c__GetLatestMainScenarioLastQuest_b__11_0__,
      0);
    static_fields = UserQuestMaster___c_TypeInfo->static_fields;
    static_fields->__9__11_0 = (struct System_Comparison_UserQuestEntity__o *)_9__11_0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__11_0, (int32_t)_9__11_0, v39, v40);
  }
  if ( !v10 )
LABEL_71:
    sub_1C6BC60(Instance, v8);
  System_Collections_Generic_List_object___Sort_58729528(
    v10,
    _9__11_0,
    (const MethodInfo_3802438 *)Method_System_Collections_Generic_List_UserQuestEntity__Sort__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v63,
    v10,
    (const MethodInfo_380146C *)Method_System_Collections_Generic_List_UserQuestEntity__GetEnumerator__);
  v64 = v63;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v64,
            (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__MoveNext__) )
  {
    v41 = sub_1C6BC54(UserQuestMaster___c__DisplayClass11_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v41, 0);
    if ( !v41 )
      sub_1C6BC60(v42, v43);
    current = (int32_t)v64.fields._current;
    *(_QWORD *)(v41 + 16) = v64.fields._current;
    v47 = v41 + 16;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v41 + 16), current, v44, v45);
    if ( !*(_QWORD *)(v41 + 16) )
      sub_1C6BC60(v48, v49);
    if ( !MasterData_object )
      sub_1C6BC60(v48, v49);
    QuestEntity = QuestMaster__TryGetQuestEntity(
                    (QuestMaster_o *)MasterData_object,
                    &entity,
                    *(_DWORD *)(*(_QWORD *)(v41 + 16) + 32LL),
                    0);
    if ( entity && QuestEntity )
    {
      v51 = (System_Func_int__bool__o *)sub_1C6BC54(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(
        v51,
        (Il2CppObject *)v41,
        Method_UserQuestMaster___c__DisplayClass11_0__GetLatestMainScenarioLastQuest_b__1__,
        0);
      v52 = BasicHelper__Any_int_(
              (System_Collections_Generic_List_T__o *)materialLatestClearList,
              (System_Func_T__bool__o *)v51,
              (const MethodInfo_3124104 *)Method_BasicHelper_Any_int___);
      v54 = entity;
      if ( v52 )
        goto LABEL_63;
      if ( !entity )
        sub_1C6BC60(v52, v53);
      TypeFlag = QuestEntity__GetTypeFlag(entity, 0);
      if ( (_DWORD)TypeFlag == 2 )
      {
        if ( !entity )
          sub_1C6BC60(TypeFlag, v56);
        if ( entity->fields.chapterId )
          goto LABEL_60;
        if ( !*(_QWORD *)v47 )
          sub_1C6BC60(TypeFlag, v56);
        if ( *(_DWORD *)(*(_QWORD *)v47 + 32LL) <= v62 )
        {
LABEL_60:
          v57 = SingletonTemplate_object___get_Instance((const MethodInfo_3A4F8A4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
          if ( !*(_QWORD *)v47 )
            sub_1C6BC60(v57, v58);
          if ( !v57 )
            sub_1C6BC60(0, v58);
          WarID_ByQuestID = QuestTree__GetWarID_ByQuestID((QuestTree_o *)v57, *(_DWORD *)(*(_QWORD *)v47 + 32LL), 0);
          v60 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v60 = BalanceConfig_TypeInfo;
          }
          if ( WarID_ByQuestID < v60->static_fields->PowerUpQuestWarId )
          {
            v54 = entity;
            goto LABEL_63;
          }
        }
      }
    }
  }
  v54 = 0;
LABEL_63:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v64,
    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__Dispose__);
  return v54;
}


QuestEntity_o *UserQuestMaster__GetMainScenarioLatestClear(
        UserQuestMaster_o *this,
        int64_t userId,
        System_Collections_Generic_List_int__o *materialLatestClearList,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *MasterData_object; // x20
  System_Collections_Generic_List_object__o *v10; // x22
  System_Collections_ObjectModel_Collection_T__o *list; // x8
  __int64 v12; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x23
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v15; // x9
  int32_t *p_offset; // x10
  __int64 v17; // x0
  System_Collections_Generic_IEnumerator_T__c *v18; // x8
  __int64 v19; // x9
  int32_t *v20; // x10
  __int64 v21; // x0
  Il2CppObject *v22; // x0
  __int64 v23; // x1
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  Il2CppObject *v26; // x8
  struct System_Object_array *items; // x9
  _QWORD *v28; // x10
  __int64 size; // x11
  Il2CppClass **v30; // x0
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  __int64 v32; // x9
  int32_t *v33; // x10
  __int64 v34; // x0
  UserQuestMaster___c_c *v35; // x8
  System_Comparison_T__o *_9__10_0; // x23
  Il2CppObject *v37; // x24
  struct UserQuestMaster___c_StaticFields *static_fields; // x0
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  __int64 v41; // x23
  __int64 v42; // x0
  __int64 v43; // x1
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  int32_t current; // w1
  __int64 v47; // x22
  __int64 v48; // x0
  __int64 v49; // x1
  _BOOL4 QuestEntity; // w0
  System_Func_int__bool__o *v51; // x24
  _BOOL8 v52; // x0
  __int64 v53; // x1
  QuestEntity_o *v54; // x23
  __int64 TypeFlag; // x0
  __int64 v56; // x1
  Il2CppObject *v57; // x0
  __int64 v58; // x1
  int32_t WarID_ByQuestID; // w22
  BalanceConfig_c *v60; // x0
  int v62; // [xsp+4h] [xbp-9Ch]
  System_Collections_Generic_List_Enumerator_object__o v63; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v64; // [xsp+20h] [xbp-80h] BYREF
  QuestEntity_o *entity; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4CB7213 & 1) == 0 )
  {
    sub_1C6BA08(&BalanceConfig_TypeInfo);
    sub_1C6BA08(&Method_BasicHelper_Any_int___);
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_UserQuestEntity__GetEnumerator__);
    sub_1C6BA08(&System_Comparison_UserQuestEntity__TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMasterData_ConstantMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__get_Current__);
    sub_1C6BA08(&System_Func_int__bool__TypeInfo);
    sub_1C6BA08(&System_IDisposable_TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_IEnumerator_UserQuestEntity__TypeInfo);
    sub_1C6BA08(&System_Collections_IEnumerator_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_UserQuestEntity__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_UserQuestEntity__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_UserQuestEntity__Sort__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_UserQuestEntity___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_UserQuestEntity__TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C6BA08(&Method_UserQuestMaster___c__GetMainScenarioLatestClear_b__10_0__);
    sub_1C6BA08(&Method_UserQuestMaster___c__DisplayClass10_0__GetMainScenarioLatestClear_b__1__);
    sub_1C6BA08(&UserQuestMaster___c__DisplayClass10_0_TypeInfo);
    sub_1C6BA08(&UserQuestMaster___c_TypeInfo);
    sub_1C6BA08(&StringLiteral_3329/*"CHAPTER_F_END_ID"*/);
    byte_4CB7213 = 1;
  }
  entity = 0;
  memset(&v64, 0, sizeof(v64));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_70;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_QuestMaster___);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_UserQuestEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_UserQuestEntity___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_70;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ConstantMaster___);
  if ( !Instance )
    goto LABEL_70;
  Instance = (Il2CppObject *)ConstantMaster__GetValue(
                               (ConstantMaster_o *)Instance,
                               (System_String_o *)StringLiteral_3329/*"CHAPTER_F_END_ID"*/,
                               0);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  v62 = (int)Instance;
  if ( !list )
    goto LABEL_70;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_339243C *)Method_System_Collections_ObjectModel_Collection_UserQuestEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C6BC60(0, v12);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v15 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v15;
        p_offset += 4;
        if ( !v15 )
          goto LABEL_12;
      }
      v17 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_12:
      v17 = sub_1C41D90(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
            Enumerator,
            *(_QWORD *)(v17 + 8))
        & 1) == 0 )
      break;
    v18 = Enumerator->klass;
    v19 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v20 = &v18->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_UserQuestEntity__c **)v20 - 1) != System_Collections_Generic_IEnumerator_UserQuestEntity__TypeInfo )
      {
        --v19;
        v20 += 4;
        if ( !v19 )
          goto LABEL_19;
      }
      v21 = (__int64)&v18->vtable[*v20];
    }
    else
    {
LABEL_19:
      v21 = sub_1C41D90(Enumerator, System_Collections_Generic_IEnumerator_UserQuestEntity__TypeInfo, 0);
    }
    v22 = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(
                            Enumerator,
                            *(_QWORD *)(v21 + 8));
    v26 = v22;
    if ( !v22 )
      sub_1C6BC60(0, v23);
    if ( v22[1].monitor == (void *)userId )
    {
      if ( !v10 )
        sub_1C6BC60(v22, v23);
      items = v10->fields._items;
      v28 = Method_System_Collections_Generic_List_UserQuestEntity__Add__;
      ++v10->fields._version;
      if ( !items )
        sub_1C6BC60(v22, v23);
      size = v10->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v10,
          v22,
          *(const MethodInfo_3800974 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
      }
      else
      {
        v30 = &items->obj.klass + size;
        v10->fields._size = size + 1;
        v30[4] = (Il2CppClass *)v26;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v30 + 4), (int32_t)v26, v24, v25);
      }
    }
  }
  v31 = Enumerator->klass;
  v32 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v33 = &v31->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
    {
      --v32;
      v33 += 4;
      if ( !v32 )
        goto LABEL_32;
    }
    v34 = (__int64)&v31->vtable[*v33];
  }
  else
  {
LABEL_32:
    v34 = sub_1C41D90(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  Instance = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(
                               Enumerator,
                               *(_QWORD *)(v34 + 8));
  v35 = UserQuestMaster___c_TypeInfo;
  if ( !UserQuestMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserQuestMaster___c_TypeInfo);
    v35 = UserQuestMaster___c_TypeInfo;
  }
  _9__10_0 = (System_Comparison_T__o *)v35->static_fields->__9__10_0;
  if ( !_9__10_0 )
  {
    if ( !v35->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v35);
      v35 = UserQuestMaster___c_TypeInfo;
    }
    v37 = (Il2CppObject *)v35->static_fields->__9;
    _9__10_0 = (System_Comparison_T__o *)sub_1C6BC54(System_Comparison_UserQuestEntity__TypeInfo);
    System_Comparison_object____ctor(_9__10_0, v37, Method_UserQuestMaster___c__GetMainScenarioLatestClear_b__10_0__, 0);
    static_fields = UserQuestMaster___c_TypeInfo->static_fields;
    static_fields->__9__10_0 = (struct System_Comparison_UserQuestEntity__o *)_9__10_0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__10_0, (int32_t)_9__10_0, v39, v40);
  }
  if ( !v10 )
LABEL_70:
    sub_1C6BC60(Instance, v8);
  System_Collections_Generic_List_object___Sort_58729528(
    v10,
    _9__10_0,
    (const MethodInfo_3802438 *)Method_System_Collections_Generic_List_UserQuestEntity__Sort__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v63,
    v10,
    (const MethodInfo_380146C *)Method_System_Collections_Generic_List_UserQuestEntity__GetEnumerator__);
  v64 = v63;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v64,
            (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__MoveNext__) )
  {
    v41 = sub_1C6BC54(UserQuestMaster___c__DisplayClass10_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v41, 0);
    if ( !v41 )
      sub_1C6BC60(v42, v43);
    current = (int32_t)v64.fields._current;
    *(_QWORD *)(v41 + 16) = v64.fields._current;
    v47 = v41 + 16;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v41 + 16), current, v44, v45);
    if ( !*(_QWORD *)(v41 + 16) )
      sub_1C6BC60(v48, v49);
    if ( !MasterData_object )
      sub_1C6BC60(v48, v49);
    QuestEntity = QuestMaster__TryGetQuestEntity(
                    (QuestMaster_o *)MasterData_object,
                    &entity,
                    *(_DWORD *)(*(_QWORD *)(v41 + 16) + 32LL),
                    0);
    if ( entity && QuestEntity )
    {
      v51 = (System_Func_int__bool__o *)sub_1C6BC54(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(
        v51,
        (Il2CppObject *)v41,
        Method_UserQuestMaster___c__DisplayClass10_0__GetMainScenarioLatestClear_b__1__,
        0);
      v52 = BasicHelper__Any_int_(
              (System_Collections_Generic_List_T__o *)materialLatestClearList,
              (System_Func_T__bool__o *)v51,
              (const MethodInfo_3124104 *)Method_BasicHelper_Any_int___);
      v54 = entity;
      if ( v52 )
        goto LABEL_62;
      if ( !entity )
        sub_1C6BC60(v52, v53);
      TypeFlag = QuestEntity__GetTypeFlag(entity, 0);
      if ( (_DWORD)TypeFlag == 2 )
      {
        if ( !entity )
          sub_1C6BC60(TypeFlag, v56);
        if ( entity->fields.chapterId )
          goto LABEL_59;
        if ( !*(_QWORD *)v47 )
          sub_1C6BC60(TypeFlag, v56);
        if ( *(_DWORD *)(*(_QWORD *)v47 + 32LL) <= v62 )
        {
LABEL_59:
          v57 = SingletonTemplate_object___get_Instance((const MethodInfo_3A4F8A4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
          if ( !*(_QWORD *)v47 )
            sub_1C6BC60(v57, v58);
          if ( !v57 )
            sub_1C6BC60(0, v58);
          WarID_ByQuestID = QuestTree__GetWarID_ByQuestID((QuestTree_o *)v57, *(_DWORD *)(*(_QWORD *)v47 + 32LL), 0);
          v60 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v60 = BalanceConfig_TypeInfo;
          }
          if ( WarID_ByQuestID < v60->static_fields->PowerUpQuestWarId )
          {
            v54 = entity;
            goto LABEL_62;
          }
        }
      }
    }
  }
  v54 = 0;
LABEL_62:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v64,
    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__Dispose__);
  return v54;
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
    sub_1C6BC60(this, userId);
  max_length = questIds->max_length;
  v6 = (int)max_length > 0;
  if ( (int)max_length >= 1 )
  {
    v8 = this;
    v9 = 0;
    do
    {
      if ( v9 >= (unsigned int)max_length )
        sub_1C6BC68(this);
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
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  NetworkManager_c *v12; // x0
  UserQuestEntity_o *CacheById; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  Il2CppObject *PK; // x2

  if ( (byte_4CB720D & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string__TryGetEntity__);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C6BA08(&UserQuestEntity_TypeInfo);
    byte_4CB720D = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3A4F8A4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
    sub_1C6BC60(0, v10);
  if ( !BYTE1(Instance[4].monitor) )
    goto LABEL_19;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CB002A )
  {
    sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB002A = 1;
  }
  v12 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v12 = NetworkManager_TypeInfo;
  }
  if ( v12->static_fields->userIdNumber == userId )
  {
    CacheById = UserQuestMaster__GetCacheById(this, questId, v11);
    *entity = CacheById;
    sub_1C6B9AC((CGThumbnailListItem_o *)entity, (int32_t)CacheById, v14, v15);
    return *entity != 0;
  }
  else
  {
LABEL_19:
    if ( !UserQuestEntity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserQuestEntity_TypeInfo);
    PK = (Il2CppObject *)UserQuestEntity__CreatePK(userId, questId, v11);
    return DataMasterBase_object__object__object___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             (Il2CppObject **)entity,
             PK,
             (const MethodInfo_33FDBE0 *)Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string__TryGetEntity__);
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
  __int64 v14; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *v16; // x19
  __int64 v17; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__UserQuestEntity__c **p_offset; // x10
  __int64 v19; // x0
  __int64 v21; // [xsp+0h] [xbp-40h] BYREF
  int32_t v22; // [xsp+Ch] [xbp-34h] BYREF
  int64_t v23; // [xsp+18h] [xbp-28h] BYREF

  v23 = userId;
  v22 = questId;
  if ( (byte_4CB720F & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string__get_lookup__);
    sub_1C6BA08(&System_Collections_Generic_IReadOnlyDictionary_string__UserQuestEntity__TypeInfo);
    sub_1C6BA08(&StringLiteral_1449/*":"*/);
    byte_4CB720F = 1;
  }
  v21 = 0;
  if ( this->fields.oldId != userId )
  {
    this->fields.oldId = userId;
    v6 = System_Int64__ToString((int64_t)&v23, 0);
    v7 = System_String__Concat_63966792(v6, (System_String_o *)StringLiteral_1449/*":"*/, 0);
    this->fields.userIdString = v7;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.userIdString, (int32_t)v7, v8, v9);
  }
  userIdString = this->fields.userIdString;
  v11 = System_Int32__ToString((int32_t)&v22, 0);
  v12 = System_String__Concat_63966792(userIdString, v11, 0);
  lookup = DataMasterBase_object__object__object___get_lookup(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             (const MethodInfo_33FB988 *)Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string__get_lookup__);
  if ( !lookup )
    goto LABEL_16;
  klass = lookup->klass;
  v16 = lookup;
  v17 = *(unsigned __int16 *)&lookup->klass->_2.rank;
  if ( *(_WORD *)&lookup->klass->_2.rank )
  {
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__UserQuestEntity__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__UserQuestEntity__TypeInfo )
    {
      --v17;
      p_offset += 2;
      if ( !v17 )
        goto LABEL_10;
    }
    v19 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1];
  }
  else
  {
LABEL_10:
    v19 = sub_1C41D90(lookup, System_Collections_Generic_IReadOnlyDictionary_string__UserQuestEntity__TypeInfo, 1);
  }
  lookup = (System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *, System_String_o *, __int64 *, _QWORD))v19)(
                                                                                  v16,
                                                                                  v12,
                                                                                  &v21,
                                                                                  *(_QWORD *)(v19 + 8));
  if ( ((unsigned __int8)lookup & 1) != 0 )
  {
    if ( v21 )
      return *(_DWORD *)(v21 + 56);
LABEL_16:
    sub_1C6BC60(lookup, v14);
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
  __int64 v8; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v11; // w23
  int32_t v12; // w22
  int32_t v13; // w24
  _DWORD *v14; // x25

  if ( (byte_4CB7210 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_UserQuestEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_UserQuestEntity__get_Item__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__Remove__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int___ctor___78518792);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C6BA08(&System_Collections_Generic_List_int__TypeInfo);
    byte_4CB7210 = 1;
  }
  v7 = (System_Collections_Generic_List_int__o *)sub_1C6BC54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_58602020(
    v7,
    (System_Collections_Generic_IEnumerable_T__o *)questIds,
    (const MethodInfo_37E3224 *)Method_System_Collections_Generic_List_int___ctor___78518792);
  list = this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3391E64 *)Method_System_Collections_ObjectModel_Collection_UserQuestEntity__get_Count__);
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
               (const MethodInfo_3391EF4 *)Method_System_Collections_ObjectModel_Collection_UserQuestEntity__get_Item__);
      if ( !list )
        break;
      v14 = list;
      if ( *((_QWORD *)list + 3) != userId )
        goto LABEL_19;
      if ( !v7 )
        break;
      if ( !System_Collections_Generic_List_int___Remove(
              v7,
              *((_DWORD *)list + 8),
              (const MethodInfo_37E4E4C *)Method_System_Collections_Generic_List_int__Remove__)
        || (v12 += v14[14], v7->fields._size) )
      {
LABEL_19:
        if ( v11 != ++v13 )
          continue;
      }
      return v12;
    }
LABEL_16:
    sub_1C6BC60(list, v8);
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
  __int64 v14; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *v16; // x19
  __int64 v17; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__UserQuestEntity__c **p_offset; // x10
  __int64 v19; // x0
  __int64 v21; // [xsp+0h] [xbp-40h] BYREF
  int32_t v22; // [xsp+Ch] [xbp-34h] BYREF
  int64_t v23; // [xsp+18h] [xbp-28h] BYREF

  v23 = userId;
  v22 = questId;
  if ( (byte_4CB7211 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string__get_lookup__);
    sub_1C6BA08(&System_Collections_Generic_IReadOnlyDictionary_string__UserQuestEntity__TypeInfo);
    sub_1C6BA08(&StringLiteral_1449/*":"*/);
    byte_4CB7211 = 1;
  }
  v21 = 0;
  if ( this->fields.oldId != userId )
  {
    this->fields.oldId = userId;
    v6 = System_Int64__ToString((int64_t)&v23, 0);
    v7 = System_String__Concat_63966792(v6, (System_String_o *)StringLiteral_1449/*":"*/, 0);
    this->fields.userIdString = v7;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.userIdString, (int32_t)v7, v8, v9);
  }
  userIdString = this->fields.userIdString;
  v11 = System_Int32__ToString((int32_t)&v22, 0);
  v12 = System_String__Concat_63966792(userIdString, v11, 0);
  lookup = DataMasterBase_object__object__object___get_lookup(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             (const MethodInfo_33FB988 *)Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string__get_lookup__);
  if ( !lookup )
    goto LABEL_16;
  klass = lookup->klass;
  v16 = lookup;
  v17 = *(unsigned __int16 *)&lookup->klass->_2.rank;
  if ( *(_WORD *)&lookup->klass->_2.rank )
  {
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__UserQuestEntity__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__UserQuestEntity__TypeInfo )
    {
      --v17;
      p_offset += 2;
      if ( !v17 )
        goto LABEL_10;
    }
    v19 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1];
  }
  else
  {
LABEL_10:
    v19 = sub_1C41D90(lookup, System_Collections_Generic_IReadOnlyDictionary_string__UserQuestEntity__TypeInfo, 1);
  }
  lookup = (System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *, System_String_o *, __int64 *, _QWORD))v19)(
                                                                                  v16,
                                                                                  v12,
                                                                                  &v21,
                                                                                  *(_QWORD *)(v19 + 8));
  if ( ((unsigned __int8)lookup & 1) != 0 )
  {
    if ( v21 )
      return *(_DWORD *)(v21 + 40);
LABEL_16:
    sub_1C6BC60(lookup, v14);
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
  __int64 v8; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v11; // w23
  int32_t v12; // w22
  int32_t v13; // w24
  _DWORD *v14; // x25

  if ( (byte_4CB7212 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_UserQuestEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_UserQuestEntity__get_Item__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__Remove__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int___ctor___78518792);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C6BA08(&System_Collections_Generic_List_int__TypeInfo);
    byte_4CB7212 = 1;
  }
  v7 = (System_Collections_Generic_List_int__o *)sub_1C6BC54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_58602020(
    v7,
    (System_Collections_Generic_IEnumerable_T__o *)questIds,
    (const MethodInfo_37E3224 *)Method_System_Collections_Generic_List_int___ctor___78518792);
  list = this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3391E64 *)Method_System_Collections_ObjectModel_Collection_UserQuestEntity__get_Count__);
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
               (const MethodInfo_3391EF4 *)Method_System_Collections_ObjectModel_Collection_UserQuestEntity__get_Item__);
      if ( !list )
        break;
      v14 = list;
      if ( *((_QWORD *)list + 3) != userId )
        goto LABEL_19;
      if ( !v7 )
        break;
      if ( !System_Collections_Generic_List_int___Remove(
              v7,
              *((_DWORD *)list + 8),
              (const MethodInfo_37E4E4C *)Method_System_Collections_Generic_List_int__Remove__)
        || (v12 += v14[10], v7->fields._size) )
      {
LABEL_19:
        if ( v11 != ++v13 )
          continue;
      }
      return v12;
    }
LABEL_16:
    sub_1C6BC60(list, v8);
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
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  NetworkManager_c *v10; // x0
  System_String_o *v12; // x0
  struct System_String_o *v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_String_o *userIdString; // x20
  System_String_o *v17; // x0
  System_String_o *v18; // x20
  __int64 v19; // x8
  _BYTE *v20; // x19
  __int64 v21; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__UserQuestEntity__c **v22; // x10
  __int64 v23; // x0
  UserQuestEntity_o *v24; // [xsp+8h] [xbp-48h] BYREF
  int32_t v25; // [xsp+14h] [xbp-3Ch] BYREF
  int64_t v26; // [xsp+18h] [xbp-38h] BYREF

  v26 = userId;
  v25 = questId;
  if ( (byte_4CB720E & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string__get_lookup__);
    sub_1C6BA08(&System_Collections_Generic_IReadOnlyDictionary_string__UserQuestEntity__TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C6BA08(&StringLiteral_1449/*":"*/);
    byte_4CB720E = 1;
  }
  v24 = 0;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3A4F8A4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  if ( Instance[73] )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4CB002A )
    {
      sub_1C6BA08(&NetworkManager_TypeInfo);
      byte_4CB002A = 1;
    }
    v10 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v10 = NetworkManager_TypeInfo;
    }
    if ( v10->static_fields->userIdNumber == userId )
      return UserQuestMaster__GetCacheById(this, questId, v9);
  }
  if ( this->fields.oldId != userId )
  {
    this->fields.oldId = userId;
    v12 = System_Int64__ToString((int64_t)&v26, 0);
    v13 = System_String__Concat_63966792(v12, (System_String_o *)StringLiteral_1449/*":"*/, 0);
    this->fields.userIdString = v13;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.userIdString, (int32_t)v13, v14, v15);
  }
  userIdString = this->fields.userIdString;
  v17 = System_Int32__ToString((int32_t)&v25, 0);
  v18 = System_String__Concat_63966792(userIdString, v17, 0);
  Instance = DataMasterBase_object__object__object___get_lookup(
               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
               (const MethodInfo_33FB988 *)Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string__get_lookup__);
  if ( !Instance )
LABEL_25:
    sub_1C6BC60(Instance, v8);
  v19 = *(_QWORD *)Instance;
  v20 = Instance;
  v21 = *(unsigned __int16 *)(*(_QWORD *)Instance + 302LL);
  if ( *(_WORD *)(*(_QWORD *)Instance + 302LL) )
  {
    v22 = (System_Collections_Generic_IReadOnlyDictionary_string__UserQuestEntity__c **)(*(_QWORD *)(v19 + 176) + 8LL);
    while ( *(v22 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__UserQuestEntity__TypeInfo )
    {
      --v21;
      v22 += 2;
      if ( !v21 )
        goto LABEL_20;
    }
    v23 = v19 + 16LL * (*(_DWORD *)v22 + 1) + 312;
  }
  else
  {
LABEL_20:
    v23 = sub_1C41D90(Instance, System_Collections_Generic_IReadOnlyDictionary_string__UserQuestEntity__TypeInfo, 1);
  }
  if ( ((*(__int64 (__fastcall **)(_BYTE *, System_String_o *, UserQuestEntity_o **, _QWORD))v23)(
          v20,
          v18,
          &v24,
          *(_QWORD *)(v23 + 8))
      & 1) != 0 )
    return v24;
  else
    return 0;
}


void UserQuestMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4CB7218 & 1) == 0 )
  {
    sub_1C6BA08(&UserQuestMaster___c_TypeInfo);
    byte_4CB7218 = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(UserQuestMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  UserQuestMaster___c_TypeInfo->static_fields->__9 = (struct UserQuestMaster___c_o *)v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)UserQuestMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C6BC60(this, x);
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
    sub_1C6BC60(this, x);
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
    sub_1C6BC60(this, a);
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
    sub_1C6BC60(this, a);
  return usrEnt->fields.questId == a;
}