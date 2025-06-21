void __fastcall UserQuestMaster___ctor(UserQuestMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B1D3EF & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string___ctor__, method);
    byte_4B1D3EF = 1;
  }
  this->fields.oldId = -1LL;
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    62,
    (const MethodInfo_32CA594 *)Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string___ctor__);
}


void __fastcall UserQuestMaster__CreateCache(UserQuestMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_int__object__o *v8; // x21
  struct System_Collections_Generic_Dictionary_int__UserQuestEntity__o **p_idCache; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  __int64 v12; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v14; // w21
  Il2CppObject *Item; // x23

  if ( (byte_4B1D3FA & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_UserQuestEntity__get_Count__, method);
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_UserQuestEntity__get_Item__, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__UserQuestEntity___ctor__, v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__UserQuestEntity__set_Item__, v5);
    sub_1BCAFF8(&System_Collections_Generic_Dictionary_int__UserQuestEntity__TypeInfo, v6);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v7);
    byte_4B1D3FA = 1;
  }
  if ( this->fields.isDirty )
  {
    this->fields.isDirty = 0;
    v8 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCB244(System_Collections_Generic_Dictionary_int__UserQuestEntity__TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v8,
      (const MethodInfo_3320910 *)Method_System_Collections_Generic_Dictionary_int__UserQuestEntity___ctor__);
    this->fields.idCache = (struct System_Collections_Generic_Dictionary_int__UserQuestEntity__o *)v8;
    p_idCache = &this->fields.idCache;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.idCache, (int32_t)v8, v10, v11);
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
LABEL_19:
      sub_1BCB254(list, v12);
    v14 = 0;
    while ( v14 < System_Collections_ObjectModel_Collection_object___get_Count(
                    list,
                    (const MethodInfo_32635E8 *)Method_System_Collections_ObjectModel_Collection_UserQuestEntity__get_Count__) )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( list )
      {
        Item = System_Collections_ObjectModel_Collection_object___get_Item(
                 list,
                 v14,
                 (const MethodInfo_3263678 *)Method_System_Collections_ObjectModel_Collection_UserQuestEntity__get_Item__);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4B165D1 )
        {
          sub_1BCAFF8(&NetworkManager_TypeInfo, v12);
          byte_4B165D1 = 1;
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
              (const MethodInfo_33212D0 *)Method_System_Collections_Generic_Dictionary_int__UserQuestEntity__set_Item__);
          }
          list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
          ++v14;
          if ( list )
            continue;
        }
      }
      goto LABEL_19;
    }
  }
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
  __int64 v11; // x1
  NetworkManager_c *v12; // x0
  int64_t userIdNumber; // x8

  if ( (byte_4B1D3F9 & 1) == 0 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, *(_QWORD *)&questId);
    sub_1BCAFF8(&UserQuestEntity_TypeInfo, v8);
    byte_4B1D3F9 = 1;
  }
  if ( !questId )
    return 0LL;
  v9 = (UserQuestEntity_o *)sub_1BCB244(UserQuestEntity_TypeInfo);
  UserQuestEntity___ctor(v9, v10);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B165D1 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, v11);
    byte_4B165D1 = 1;
  }
  v12 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v12 = NetworkManager_TypeInfo;
  }
  if ( !v9 )
    sub_1BCB254(v12, v11);
  userIdNumber = v12->static_fields->userIdNumber;
  v9->fields.questId = questId;
  v9->fields.questPhase = phase;
  v9->fields.clearNum = 1;
  v9->fields.updatedAt = updatedAt;
  v9->fields.userId = userIdNumber;
  return v9;
}


void __fastcall UserQuestMaster__DeleteCache(UserQuestMaster_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct System_Collections_Generic_Dictionary_int__UserQuestEntity__o **p_idCache; // x19

  this->fields.idCache = 0LL;
  p_idCache = &this->fields.idCache;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.idCache, 0, v2, v3);
  *((_BYTE *)p_idCache - 8) = 1;
}


// local variable allocation has failed, the output may be wrong!
UserQuestEntity_o *__fastcall UserQuestMaster__GetCacheById(
        UserQuestMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_Dictionary_int__UserQuestEntity__o *idCache; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B1D3FB & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__UserQuestEntity__TryGetValue__, *(_QWORD *)&id);
    byte_4B1D3FB = 1;
  }
  value = 0LL;
  UserQuestMaster__CreateCache(this, *(const MethodInfo **)&id);
  idCache = this->fields.idCache;
  if ( !idCache )
    sub_1BCB254(0LL, v5);
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         (System_Collections_Generic_Dictionary_int__object__o *)idCache,
         id,
         &value,
         (const MethodInfo_3322A70 *)Method_System_Collections_Generic_Dictionary_int__UserQuestEntity__TryGetValue__) )
  {
    return (UserQuestEntity_o *)value;
  }
  else
  {
    return 0LL;
  }
}


UserQuestEntity_o *__fastcall UserQuestMaster__GetEntity(
        UserQuestMaster_o *this,
        int64_t userId,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  NetworkManager_c *v13; // x0
  Il2CppObject *PK; // x1

  if ( (byte_4B1D3F0 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string__GetEntity__, userId);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v7);
    sub_1BCAFF8(&Method_SingletonTemplate_QuestTree__get_Instance__, v8);
    sub_1BCAFF8(&UserQuestEntity_TypeInfo, v9);
    byte_4B1D3F0 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
    sub_1BCB254(0LL, v11);
  if ( BYTE1(Instance[4].monitor) )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4B165D1 )
    {
      sub_1BCAFF8(&NetworkManager_TypeInfo, v11);
      byte_4B165D1 = 1;
    }
    v13 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v13 = NetworkManager_TypeInfo;
    }
    if ( v13->static_fields->userIdNumber == userId )
      return UserQuestMaster__GetCacheById(this, questId, v12);
  }
  if ( !UserQuestEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserQuestEntity_TypeInfo);
  PK = (Il2CppObject *)UserQuestEntity__CreatePK(userId, questId, v12);
  return (UserQuestEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                PK,
                                (const MethodInfo_32CC8B8 *)Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string__GetEntity__);
}


QuestEntity_o *__fastcall UserQuestMaster__GetLatestMainScenarioLastQuest(
        UserQuestMaster_o *this,
        int64_t userId,
        System_Collections_Generic_List_int__o *materialLatestClearList,
        const MethodInfo *method)
{
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
  System_Collections_ObjectModel_Collection_T__o *list; // x8
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
  const MethodInfo *v49; // x3
  __int64 v50; // x8
  struct System_Object_array *items; // x9
  _QWORD *v52; // x10
  __int64 size; // x11
  Il2CppClass **v54; // x0
  System_Collections_Generic_IEnumerator_T__c *v55; // x8
  __int64 v56; // x9
  int32_t *v57; // x10
  __int64 v58; // x0
  UserQuestMaster___c_c *v59; // x8
  System_Comparison_T__o *_9__11_0; // x23
  Il2CppObject *v61; // x24
  struct UserQuestMaster___c_StaticFields *static_fields; // x0
  int32_t v63; // w2
  const MethodInfo *v64; // x3
  __int64 v65; // x23
  __int64 v66; // x0
  __int64 v67; // x1
  int32_t v68; // w2
  const MethodInfo *v69; // x3
  int32_t current; // w1
  __int64 v71; // x22
  __int64 v72; // x0
  __int64 v73; // x1
  _BOOL4 QuestEntity; // w0
  System_Func_int__bool__o *v75; // x24
  _BOOL8 v76; // x0
  __int64 v77; // x1
  QuestEntity_o *v78; // x23
  __int64 TypeFlag; // x0
  __int64 v80; // x1
  Il2CppObject *v81; // x0
  __int64 v82; // x1
  int32_t WarID_ByQuestID; // w22
  BalanceConfig_c *v84; // x0
  int v86; // [xsp+4h] [xbp-9Ch]
  System_Collections_Generic_List_Enumerator_object__o v87; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v88; // [xsp+20h] [xbp-80h] BYREF
  QuestEntity_o *entity; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4B1D3F8 & 1) == 0 )
  {
    sub_1BCAFF8(&BalanceConfig_TypeInfo, userId);
    sub_1BCAFF8(&Method_BasicHelper_Any_int___, v7);
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_UserQuestEntity__GetEnumerator__, v8);
    sub_1BCAFF8(&System_Comparison_UserQuestEntity__TypeInfo, v9);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ConstantMaster___, v10);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_QuestMaster___, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__Dispose__, v12);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__MoveNext__, v13);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__get_Current__, v14);
    sub_1BCAFF8(&System_Func_int__bool__TypeInfo, v15);
    sub_1BCAFF8(&System_IDisposable_TypeInfo, v16);
    sub_1BCAFF8(&System_Collections_Generic_IEnumerator_UserQuestEntity__TypeInfo, v17);
    sub_1BCAFF8(&System_Collections_IEnumerator_TypeInfo, v18);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_UserQuestEntity__Add__, v19);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_UserQuestEntity__GetEnumerator__, v20);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_UserQuestEntity__Sort__, v21);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_UserQuestEntity___ctor__, v22);
    sub_1BCAFF8(&System_Collections_Generic_List_UserQuestEntity__TypeInfo, v23);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    sub_1BCAFF8(&Method_SingletonTemplate_QuestTree__get_Instance__, v25);
    sub_1BCAFF8(&Method_UserQuestMaster___c__GetLatestMainScenarioLastQuest_b__11_0__, v26);
    sub_1BCAFF8(&Method_UserQuestMaster___c__DisplayClass11_0__GetLatestMainScenarioLastQuest_b__1__, v27);
    sub_1BCAFF8(&UserQuestMaster___c__DisplayClass11_0_TypeInfo, v28);
    sub_1BCAFF8(&UserQuestMaster___c_TypeInfo, v29);
    sub_1BCAFF8(&StringLiteral_3311/*"CHAPTER_F_END_ID"*/, v30);
    byte_4B1D3F8 = 1;
  }
  entity = 0LL;
  memset(&v88, 0, sizeof(v88));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_71;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_QuestMaster___);
  v34 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_UserQuestEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v34,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_UserQuestEntity___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_71;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ConstantMaster___);
  if ( !Instance )
    goto LABEL_71;
  Instance = (Il2CppObject *)ConstantMaster__GetValue(
                               (ConstantMaster_o *)Instance,
                               (System_String_o *)StringLiteral_3311/*"CHAPTER_F_END_ID"*/,
                               0LL);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  v86 = (int)Instance;
  if ( !list )
    goto LABEL_71;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3263BC0 *)Method_System_Collections_ObjectModel_Collection_UserQuestEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCB254(0LL, v36);
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
      p_method = sub_1C1B560(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      while ( *((System_Collections_Generic_IEnumerator_UserQuestEntity__c **)v44 - 1) != System_Collections_Generic_IEnumerator_UserQuestEntity__TypeInfo )
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
      v45 = sub_1C1B560(Enumerator, System_Collections_Generic_IEnumerator_UserQuestEntity__TypeInfo, 0LL);
    }
    v46 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v45)(
            Enumerator,
            *(_QWORD *)(v45 + 8));
    v50 = v46;
    if ( !v46 )
      sub_1BCB254(0LL, v47);
    if ( *(_QWORD *)(v46 + 24) == userId && *(_DWORD *)(v46 + 40) )
    {
      if ( !v34 )
        sub_1BCB254(v46, v47);
      items = v34->fields._items;
      v52 = Method_System_Collections_Generic_List_UserQuestEntity__Add__;
      ++v34->fields._version;
      if ( !items )
        sub_1BCB254(v46, v47);
      size = v34->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v34,
          (Il2CppObject *)v46,
          *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
      }
      else
      {
        v54 = &items->obj.klass + size;
        v34->fields._size = size + 1;
        v54[4] = (Il2CppClass *)v50;
        sub_1BCAF9C((CGThumbnailListItem_o *)(v54 + 4), v50, v48, v49);
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
        goto LABEL_33;
    }
    v58 = (__int64)&v55->vtable[*v57].method;
  }
  else
  {
LABEL_33:
    v58 = sub_1C1B560(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  Instance = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v58)(
                               Enumerator,
                               *(_QWORD *)(v58 + 8));
  v59 = UserQuestMaster___c_TypeInfo;
  if ( !UserQuestMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserQuestMaster___c_TypeInfo);
    v59 = UserQuestMaster___c_TypeInfo;
  }
  _9__11_0 = (System_Comparison_T__o *)v59->static_fields->__9__11_0;
  if ( !_9__11_0 )
  {
    if ( !v59->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v59);
      v59 = UserQuestMaster___c_TypeInfo;
    }
    v61 = (Il2CppObject *)v59->static_fields->__9;
    _9__11_0 = (System_Comparison_T__o *)sub_1BCB244(System_Comparison_UserQuestEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__11_0,
      v61,
      Method_UserQuestMaster___c__GetLatestMainScenarioLastQuest_b__11_0__,
      0LL);
    static_fields = UserQuestMaster___c_TypeInfo->static_fields;
    static_fields->__9__11_0 = (struct System_Comparison_UserQuestEntity__o *)_9__11_0;
    sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__11_0, (int32_t)_9__11_0, v63, v64);
  }
  if ( !v34 )
LABEL_71:
    sub_1BCB254(Instance, v32);
  System_Collections_Generic_List_object___Sort_57390740(
    v34,
    _9__11_0,
    (const MethodInfo_36BB694 *)Method_System_Collections_Generic_List_UserQuestEntity__Sort__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v87,
    v34,
    (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_UserQuestEntity__GetEnumerator__);
  v88 = v87;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v88,
            (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__MoveNext__) )
  {
    v65 = sub_1BCB244(UserQuestMaster___c__DisplayClass11_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v65, 0LL);
    if ( !v65 )
      sub_1BCB254(v66, v67);
    current = (int32_t)v88.fields._current;
    *(_QWORD *)(v65 + 16) = v88.fields._current;
    v71 = v65 + 16;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v65 + 16), current, v68, v69);
    if ( !*(_QWORD *)(v65 + 16) )
      sub_1BCB254(v72, v73);
    if ( !MasterData_object )
      sub_1BCB254(v72, v73);
    QuestEntity = QuestMaster__TryGetQuestEntity(
                    (QuestMaster_o *)MasterData_object,
                    &entity,
                    *(_DWORD *)(*(_QWORD *)(v65 + 16) + 32LL),
                    0LL);
    if ( entity && QuestEntity )
    {
      v75 = (System_Func_int__bool__o *)sub_1BCB244(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(
        v75,
        (Il2CppObject *)v65,
        Method_UserQuestMaster___c__DisplayClass11_0__GetLatestMainScenarioLastQuest_b__1__,
        0LL);
      v76 = BasicHelper__Any_int_(
              (System_Collections_Generic_List_T__o *)materialLatestClearList,
              (System_Func_T__bool__o *)v75,
              (const MethodInfo_3003BF0 *)Method_BasicHelper_Any_int___);
      v78 = entity;
      if ( v76 )
        goto LABEL_63;
      if ( !entity )
        sub_1BCB254(v76, v77);
      TypeFlag = QuestEntity__GetTypeFlag(entity, 0LL);
      if ( (_DWORD)TypeFlag == 2 )
      {
        if ( !entity )
          sub_1BCB254(TypeFlag, v80);
        if ( entity->fields.chapterId )
          goto LABEL_60;
        if ( !*(_QWORD *)v71 )
          sub_1BCB254(TypeFlag, v80);
        if ( *(_DWORD *)(*(_QWORD *)v71 + 32LL) <= v86 )
        {
LABEL_60:
          v81 = SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
          if ( !*(_QWORD *)v71 )
            sub_1BCB254(v81, v82);
          if ( !v81 )
            sub_1BCB254(0LL, v82);
          WarID_ByQuestID = QuestTree__GetWarID_ByQuestID((QuestTree_o *)v81, *(_DWORD *)(*(_QWORD *)v71 + 32LL), 0LL);
          v84 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v84 = BalanceConfig_TypeInfo;
          }
          if ( WarID_ByQuestID < v84->static_fields->PowerUpQuestWarId )
          {
            v78 = entity;
            goto LABEL_63;
          }
        }
      }
    }
  }
  v78 = 0LL;
LABEL_63:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v88,
    (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__Dispose__);
  return v78;
}


QuestEntity_o *__fastcall UserQuestMaster__GetMainScenarioLatestClear(
        UserQuestMaster_o *this,
        int64_t userId,
        System_Collections_Generic_List_int__o *materialLatestClearList,
        const MethodInfo *method)
{
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
  System_Collections_ObjectModel_Collection_T__o *list; // x8
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
  const MethodInfo *v49; // x3
  Il2CppObject *v50; // x8
  struct System_Object_array *items; // x9
  _QWORD *v52; // x10
  __int64 size; // x11
  Il2CppClass **v54; // x0
  System_Collections_Generic_IEnumerator_T__c *v55; // x8
  __int64 v56; // x9
  int32_t *v57; // x10
  __int64 v58; // x0
  UserQuestMaster___c_c *v59; // x8
  System_Comparison_T__o *_9__10_0; // x23
  Il2CppObject *v61; // x24
  struct UserQuestMaster___c_StaticFields *static_fields; // x0
  int32_t v63; // w2
  const MethodInfo *v64; // x3
  __int64 v65; // x23
  __int64 v66; // x0
  __int64 v67; // x1
  int32_t v68; // w2
  const MethodInfo *v69; // x3
  int32_t current; // w1
  __int64 v71; // x22
  __int64 v72; // x0
  __int64 v73; // x1
  _BOOL4 QuestEntity; // w0
  System_Func_int__bool__o *v75; // x24
  _BOOL8 v76; // x0
  __int64 v77; // x1
  QuestEntity_o *v78; // x23
  __int64 TypeFlag; // x0
  __int64 v80; // x1
  Il2CppObject *v81; // x0
  __int64 v82; // x1
  int32_t WarID_ByQuestID; // w22
  BalanceConfig_c *v84; // x0
  int v86; // [xsp+4h] [xbp-9Ch]
  System_Collections_Generic_List_Enumerator_object__o v87; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v88; // [xsp+20h] [xbp-80h] BYREF
  QuestEntity_o *entity; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4B1D3F7 & 1) == 0 )
  {
    sub_1BCAFF8(&BalanceConfig_TypeInfo, userId);
    sub_1BCAFF8(&Method_BasicHelper_Any_int___, v7);
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_UserQuestEntity__GetEnumerator__, v8);
    sub_1BCAFF8(&System_Comparison_UserQuestEntity__TypeInfo, v9);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ConstantMaster___, v10);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_QuestMaster___, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__Dispose__, v12);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__MoveNext__, v13);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__get_Current__, v14);
    sub_1BCAFF8(&System_Func_int__bool__TypeInfo, v15);
    sub_1BCAFF8(&System_IDisposable_TypeInfo, v16);
    sub_1BCAFF8(&System_Collections_Generic_IEnumerator_UserQuestEntity__TypeInfo, v17);
    sub_1BCAFF8(&System_Collections_IEnumerator_TypeInfo, v18);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_UserQuestEntity__Add__, v19);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_UserQuestEntity__GetEnumerator__, v20);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_UserQuestEntity__Sort__, v21);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_UserQuestEntity___ctor__, v22);
    sub_1BCAFF8(&System_Collections_Generic_List_UserQuestEntity__TypeInfo, v23);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    sub_1BCAFF8(&Method_SingletonTemplate_QuestTree__get_Instance__, v25);
    sub_1BCAFF8(&Method_UserQuestMaster___c__GetMainScenarioLatestClear_b__10_0__, v26);
    sub_1BCAFF8(&Method_UserQuestMaster___c__DisplayClass10_0__GetMainScenarioLatestClear_b__1__, v27);
    sub_1BCAFF8(&UserQuestMaster___c__DisplayClass10_0_TypeInfo, v28);
    sub_1BCAFF8(&UserQuestMaster___c_TypeInfo, v29);
    sub_1BCAFF8(&StringLiteral_3311/*"CHAPTER_F_END_ID"*/, v30);
    byte_4B1D3F7 = 1;
  }
  entity = 0LL;
  memset(&v88, 0, sizeof(v88));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_70;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_QuestMaster___);
  v34 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_UserQuestEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v34,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_UserQuestEntity___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_70;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ConstantMaster___);
  if ( !Instance )
    goto LABEL_70;
  Instance = (Il2CppObject *)ConstantMaster__GetValue(
                               (ConstantMaster_o *)Instance,
                               (System_String_o *)StringLiteral_3311/*"CHAPTER_F_END_ID"*/,
                               0LL);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  v86 = (int)Instance;
  if ( !list )
    goto LABEL_70;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3263BC0 *)Method_System_Collections_ObjectModel_Collection_UserQuestEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCB254(0LL, v36);
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
      p_method = sub_1C1B560(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      while ( *((System_Collections_Generic_IEnumerator_UserQuestEntity__c **)v44 - 1) != System_Collections_Generic_IEnumerator_UserQuestEntity__TypeInfo )
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
      v45 = sub_1C1B560(Enumerator, System_Collections_Generic_IEnumerator_UserQuestEntity__TypeInfo, 0LL);
    }
    v46 = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v45)(
                            Enumerator,
                            *(_QWORD *)(v45 + 8));
    v50 = v46;
    if ( !v46 )
      sub_1BCB254(0LL, v47);
    if ( v46[1].monitor == (void *)userId )
    {
      if ( !v34 )
        sub_1BCB254(v46, v47);
      items = v34->fields._items;
      v52 = Method_System_Collections_Generic_List_UserQuestEntity__Add__;
      ++v34->fields._version;
      if ( !items )
        sub_1BCB254(v46, v47);
      size = v34->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v34,
          v46,
          *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
      }
      else
      {
        v54 = &items->obj.klass + size;
        v34->fields._size = size + 1;
        v54[4] = (Il2CppClass *)v50;
        sub_1BCAF9C((CGThumbnailListItem_o *)(v54 + 4), (int32_t)v50, v48, v49);
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
        goto LABEL_32;
    }
    v58 = (__int64)&v55->vtable[*v57].method;
  }
  else
  {
LABEL_32:
    v58 = sub_1C1B560(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  Instance = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v58)(
                               Enumerator,
                               *(_QWORD *)(v58 + 8));
  v59 = UserQuestMaster___c_TypeInfo;
  if ( !UserQuestMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserQuestMaster___c_TypeInfo);
    v59 = UserQuestMaster___c_TypeInfo;
  }
  _9__10_0 = (System_Comparison_T__o *)v59->static_fields->__9__10_0;
  if ( !_9__10_0 )
  {
    if ( !v59->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v59);
      v59 = UserQuestMaster___c_TypeInfo;
    }
    v61 = (Il2CppObject *)v59->static_fields->__9;
    _9__10_0 = (System_Comparison_T__o *)sub_1BCB244(System_Comparison_UserQuestEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__10_0,
      v61,
      Method_UserQuestMaster___c__GetMainScenarioLatestClear_b__10_0__,
      0LL);
    static_fields = UserQuestMaster___c_TypeInfo->static_fields;
    static_fields->__9__10_0 = (struct System_Comparison_UserQuestEntity__o *)_9__10_0;
    sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__10_0, (int32_t)_9__10_0, v63, v64);
  }
  if ( !v34 )
LABEL_70:
    sub_1BCB254(Instance, v32);
  System_Collections_Generic_List_object___Sort_57390740(
    v34,
    _9__10_0,
    (const MethodInfo_36BB694 *)Method_System_Collections_Generic_List_UserQuestEntity__Sort__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v87,
    v34,
    (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_UserQuestEntity__GetEnumerator__);
  v88 = v87;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v88,
            (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__MoveNext__) )
  {
    v65 = sub_1BCB244(UserQuestMaster___c__DisplayClass10_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v65, 0LL);
    if ( !v65 )
      sub_1BCB254(v66, v67);
    current = (int32_t)v88.fields._current;
    *(_QWORD *)(v65 + 16) = v88.fields._current;
    v71 = v65 + 16;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v65 + 16), current, v68, v69);
    if ( !*(_QWORD *)(v65 + 16) )
      sub_1BCB254(v72, v73);
    if ( !MasterData_object )
      sub_1BCB254(v72, v73);
    QuestEntity = QuestMaster__TryGetQuestEntity(
                    (QuestMaster_o *)MasterData_object,
                    &entity,
                    *(_DWORD *)(*(_QWORD *)(v65 + 16) + 32LL),
                    0LL);
    if ( entity && QuestEntity )
    {
      v75 = (System_Func_int__bool__o *)sub_1BCB244(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(
        v75,
        (Il2CppObject *)v65,
        Method_UserQuestMaster___c__DisplayClass10_0__GetMainScenarioLatestClear_b__1__,
        0LL);
      v76 = BasicHelper__Any_int_(
              (System_Collections_Generic_List_T__o *)materialLatestClearList,
              (System_Func_T__bool__o *)v75,
              (const MethodInfo_3003BF0 *)Method_BasicHelper_Any_int___);
      v78 = entity;
      if ( v76 )
        goto LABEL_62;
      if ( !entity )
        sub_1BCB254(v76, v77);
      TypeFlag = QuestEntity__GetTypeFlag(entity, 0LL);
      if ( (_DWORD)TypeFlag == 2 )
      {
        if ( !entity )
          sub_1BCB254(TypeFlag, v80);
        if ( entity->fields.chapterId )
          goto LABEL_59;
        if ( !*(_QWORD *)v71 )
          sub_1BCB254(TypeFlag, v80);
        if ( *(_DWORD *)(*(_QWORD *)v71 + 32LL) <= v86 )
        {
LABEL_59:
          v81 = SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
          if ( !*(_QWORD *)v71 )
            sub_1BCB254(v81, v82);
          if ( !v81 )
            sub_1BCB254(0LL, v82);
          WarID_ByQuestID = QuestTree__GetWarID_ByQuestID((QuestTree_o *)v81, *(_DWORD *)(*(_QWORD *)v71 + 32LL), 0LL);
          v84 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v84 = BalanceConfig_TypeInfo;
          }
          if ( WarID_ByQuestID < v84->static_fields->PowerUpQuestWarId )
          {
            v78 = entity;
            goto LABEL_62;
          }
        }
      }
    }
  }
  v78 = 0LL;
LABEL_62:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v88,
    (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__Dispose__);
  return v78;
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
    sub_1BCB254(this, userId);
  v4 = *(_QWORD *)&questIds->max_length;
  v6 = (int)v4 > 0;
  if ( (int)v4 >= 1 )
  {
    v8 = this;
    v9 = 0LL;
    do
    {
      if ( v9 >= (unsigned int)v4 )
        sub_1BCB25C(this, userId, questIds);
      this = (UserQuestMaster_o *)UserQuestMaster__getEntityFromId(v8, userId, questIds->m_Items[v9 + 1], method);
      if ( this && SLODWORD(this->fields.list) >= 1 && (BYTE4(this->fields.seriazlier) & 2) != 0 )
        break;
      LODWORD(v4) = questIds->max_length;
      v6 = (__int64)++v9 < (int)v4;
    }
    while ( (__int64)v9 < (int)v4 );
  }
  return v6;
}


void __fastcall UserQuestMaster__OnListChangedImplementation(
        UserQuestMaster_o *this,
        System_Collections_Specialized_NotifyCollectionChangedEventArgs_o *e,
        const MethodInfo *method)
{
  this->fields.isDirty = 1;
}


bool __fastcall UserQuestMaster__TryGetEntity(
        UserQuestMaster_o *this,
        UserQuestEntity_o **entity,
        int64_t userId,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  Il2CppObject *Instance; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  NetworkManager_c *v15; // x0
  UserQuestEntity_o *CacheById; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  Il2CppObject *PK; // x2

  if ( (byte_4B1D3F1 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string__TryGetEntity__, entity);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v9);
    sub_1BCAFF8(&Method_SingletonTemplate_QuestTree__get_Instance__, v10);
    sub_1BCAFF8(&UserQuestEntity_TypeInfo, v11);
    byte_4B1D3F1 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
    sub_1BCB254(0LL, v13);
  if ( !BYTE1(Instance[4].monitor) )
    goto LABEL_19;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B165D1 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, v13);
    byte_4B165D1 = 1;
  }
  v15 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v15 = NetworkManager_TypeInfo;
  }
  if ( v15->static_fields->userIdNumber == userId )
  {
    CacheById = UserQuestMaster__GetCacheById(this, questId, v14);
    *entity = CacheById;
    sub_1BCAF9C((CGThumbnailListItem_o *)entity, (int32_t)CacheById, v17, v18);
    return *entity != 0LL;
  }
  else
  {
LABEL_19:
    if ( !UserQuestEntity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserQuestEntity_TypeInfo);
    PK = (Il2CppObject *)UserQuestEntity__CreatePK(userId, questId, v14);
    return DataMasterBase_object__object__object___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             (Il2CppObject **)entity,
             PK,
             (const MethodInfo_32CC904 *)Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string__TryGetEntity__);
  }
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
  const MethodInfo *v11; // x3
  System_String_o *userIdString; // x20
  System_String_o *v13; // x0
  System_String_o *v14; // x20
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *lookup; // x0
  __int64 v16; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *v18; // x19
  __int64 v19; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__UserQuestEntity__c **p_offset; // x10
  __int64 p_method; // x0
  __int64 v23; // [xsp+0h] [xbp-40h] BYREF
  int32_t v24; // [xsp+Ch] [xbp-34h] BYREF
  int64_t v25; // [xsp+18h] [xbp-28h] BYREF

  v25 = userId;
  v24 = questId;
  if ( (byte_4B1D3F3 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string__get_lookup__, userId);
    sub_1BCAFF8(&System_Collections_Generic_IReadOnlyDictionary_string__UserQuestEntity__TypeInfo, v6);
    sub_1BCAFF8(&StringLiteral_1448/*":"*/, v7);
    byte_4B1D3F3 = 1;
  }
  v23 = 0LL;
  if ( this->fields.oldId != userId )
  {
    this->fields.oldId = userId;
    v8 = System_Int64__ToString((int64_t)&v25, 0LL);
    v9 = System_String__Concat_62450424(v8, (System_String_o *)StringLiteral_1448/*":"*/, 0LL);
    this->fields.userIdString = v9;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.userIdString, (int32_t)v9, v10, v11);
  }
  userIdString = this->fields.userIdString;
  v13 = System_Int32__ToString((int32_t)&v24, 0LL);
  v14 = System_String__Concat_62450424(userIdString, v13, 0LL);
  lookup = DataMasterBase_object__object__object___get_lookup(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             (const MethodInfo_32CA6AC *)Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string__get_lookup__);
  if ( !lookup )
    goto LABEL_16;
  klass = lookup->klass;
  v18 = lookup;
  v19 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__UserQuestEntity__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__UserQuestEntity__TypeInfo )
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
    p_method = sub_1C1B560(
                 lookup,
                 System_Collections_Generic_IReadOnlyDictionary_string__UserQuestEntity__TypeInfo,
                 1LL);
  }
  lookup = (System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *, System_String_o *, __int64 *, _QWORD))p_method)(
                                                                                  v18,
                                                                                  v14,
                                                                                  &v23,
                                                                                  *(_QWORD *)(p_method + 8));
  if ( ((unsigned __int8)lookup & 1) != 0 )
  {
    if ( v23 )
      return *(_DWORD *)(v23 + 56);
LABEL_16:
    sub_1BCB254(lookup, v16);
  }
  return 0;
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
  System_Collections_Generic_List_int__o *v12; // x21
  __int64 v13; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v16; // w23
  int32_t v17; // w22
  int32_t v18; // w24
  _DWORD *v19; // x25

  if ( (byte_4B1D3F4 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_UserQuestEntity__get_Count__, userId);
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_UserQuestEntity__get_Item__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__Remove__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int___ctor___76866480, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__get_Count__, v10);
    sub_1BCAFF8(&System_Collections_Generic_List_int__TypeInfo, v11);
    byte_4B1D3F4 = 1;
  }
  v12 = (System_Collections_Generic_List_int__o *)sub_1BCB244(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_57263232(
    v12,
    (System_Collections_Generic_IEnumerable_T__o *)questIds,
    (const MethodInfo_369C480 *)Method_System_Collections_Generic_List_int___ctor___76866480);
  list = this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_32635E8 *)Method_System_Collections_ObjectModel_Collection_UserQuestEntity__get_Count__);
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
               (const MethodInfo_3263678 *)Method_System_Collections_ObjectModel_Collection_UserQuestEntity__get_Item__);
      if ( !list )
        break;
      v19 = list;
      if ( *((_QWORD *)list + 3) != userId )
        goto LABEL_19;
      if ( !v12 )
        break;
      if ( !System_Collections_Generic_List_int___Remove(
              v12,
              *((_DWORD *)list + 8),
              (const MethodInfo_369E0A8 *)Method_System_Collections_Generic_List_int__Remove__)
        || (v17 += v19[14], v12->fields._size) )
      {
LABEL_19:
        if ( v16 != ++v18 )
          continue;
      }
      return v17;
    }
LABEL_16:
    sub_1BCB254(list, v13);
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
  const MethodInfo *v11; // x3
  System_String_o *userIdString; // x20
  System_String_o *v13; // x0
  System_String_o *v14; // x20
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *lookup; // x0
  __int64 v16; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *v18; // x19
  __int64 v19; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__UserQuestEntity__c **p_offset; // x10
  __int64 p_method; // x0
  __int64 v23; // [xsp+0h] [xbp-40h] BYREF
  int32_t v24; // [xsp+Ch] [xbp-34h] BYREF
  int64_t v25; // [xsp+18h] [xbp-28h] BYREF

  v25 = userId;
  v24 = questId;
  if ( (byte_4B1D3F5 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string__get_lookup__, userId);
    sub_1BCAFF8(&System_Collections_Generic_IReadOnlyDictionary_string__UserQuestEntity__TypeInfo, v6);
    sub_1BCAFF8(&StringLiteral_1448/*":"*/, v7);
    byte_4B1D3F5 = 1;
  }
  v23 = 0LL;
  if ( this->fields.oldId != userId )
  {
    this->fields.oldId = userId;
    v8 = System_Int64__ToString((int64_t)&v25, 0LL);
    v9 = System_String__Concat_62450424(v8, (System_String_o *)StringLiteral_1448/*":"*/, 0LL);
    this->fields.userIdString = v9;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.userIdString, (int32_t)v9, v10, v11);
  }
  userIdString = this->fields.userIdString;
  v13 = System_Int32__ToString((int32_t)&v24, 0LL);
  v14 = System_String__Concat_62450424(userIdString, v13, 0LL);
  lookup = DataMasterBase_object__object__object___get_lookup(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             (const MethodInfo_32CA6AC *)Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string__get_lookup__);
  if ( !lookup )
    goto LABEL_16;
  klass = lookup->klass;
  v18 = lookup;
  v19 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__UserQuestEntity__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__UserQuestEntity__TypeInfo )
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
    p_method = sub_1C1B560(
                 lookup,
                 System_Collections_Generic_IReadOnlyDictionary_string__UserQuestEntity__TypeInfo,
                 1LL);
  }
  lookup = (System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *, System_String_o *, __int64 *, _QWORD))p_method)(
                                                                                  v18,
                                                                                  v14,
                                                                                  &v23,
                                                                                  *(_QWORD *)(p_method + 8));
  if ( ((unsigned __int8)lookup & 1) != 0 )
  {
    if ( v23 )
      return *(_DWORD *)(v23 + 40);
LABEL_16:
    sub_1BCB254(lookup, v16);
  }
  return 0;
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
  System_Collections_Generic_List_int__o *v12; // x21
  __int64 v13; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v16; // w23
  int32_t v17; // w22
  int32_t v18; // w24
  _DWORD *v19; // x25

  if ( (byte_4B1D3F6 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_UserQuestEntity__get_Count__, userId);
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_UserQuestEntity__get_Item__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__Remove__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int___ctor___76866480, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__get_Count__, v10);
    sub_1BCAFF8(&System_Collections_Generic_List_int__TypeInfo, v11);
    byte_4B1D3F6 = 1;
  }
  v12 = (System_Collections_Generic_List_int__o *)sub_1BCB244(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_57263232(
    v12,
    (System_Collections_Generic_IEnumerable_T__o *)questIds,
    (const MethodInfo_369C480 *)Method_System_Collections_Generic_List_int___ctor___76866480);
  list = this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_32635E8 *)Method_System_Collections_ObjectModel_Collection_UserQuestEntity__get_Count__);
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
               (const MethodInfo_3263678 *)Method_System_Collections_ObjectModel_Collection_UserQuestEntity__get_Item__);
      if ( !list )
        break;
      v19 = list;
      if ( *((_QWORD *)list + 3) != userId )
        goto LABEL_19;
      if ( !v12 )
        break;
      if ( !System_Collections_Generic_List_int___Remove(
              v12,
              *((_DWORD *)list + 8),
              (const MethodInfo_369E0A8 *)Method_System_Collections_Generic_List_int__Remove__)
        || (v17 += v19[10], v12->fields._size) )
      {
LABEL_19:
        if ( v16 != ++v18 )
          continue;
      }
      return v17;
    }
LABEL_16:
    sub_1BCB254(list, v13);
  }
  return 0;
}


UserQuestEntity_o *__fastcall UserQuestMaster__getEntityFromId(
        UserQuestMaster_o *this,
        int64_t userId,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  _BYTE *Instance; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  NetworkManager_c *v14; // x0
  System_String_o *v16; // x0
  struct System_String_o *v17; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_String_o *userIdString; // x20
  System_String_o *v21; // x0
  System_String_o *v22; // x20
  __int64 v23; // x8
  _BYTE *v24; // x19
  __int64 v25; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__UserQuestEntity__c **v26; // x10
  __int64 v27; // x0
  UserQuestEntity_o *v28; // [xsp+8h] [xbp-48h] BYREF
  int32_t v29; // [xsp+14h] [xbp-3Ch] BYREF
  int64_t v30; // [xsp+18h] [xbp-38h] BYREF

  v30 = userId;
  v29 = questId;
  if ( (byte_4B1D3F2 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string__get_lookup__, userId);
    sub_1BCAFF8(&System_Collections_Generic_IReadOnlyDictionary_string__UserQuestEntity__TypeInfo, v7);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v8);
    sub_1BCAFF8(&Method_SingletonTemplate_QuestTree__get_Instance__, v9);
    sub_1BCAFF8(&StringLiteral_1448/*":"*/, v10);
    byte_4B1D3F2 = 1;
  }
  v28 = 0LL;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  if ( Instance[73] )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4B165D1 )
    {
      sub_1BCAFF8(&NetworkManager_TypeInfo, v12);
      byte_4B165D1 = 1;
    }
    v14 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v14 = NetworkManager_TypeInfo;
    }
    if ( v14->static_fields->userIdNumber == userId )
      return UserQuestMaster__GetCacheById(this, questId, v13);
  }
  if ( this->fields.oldId != userId )
  {
    this->fields.oldId = userId;
    v16 = System_Int64__ToString((int64_t)&v30, 0LL);
    v17 = System_String__Concat_62450424(v16, (System_String_o *)StringLiteral_1448/*":"*/, 0LL);
    this->fields.userIdString = v17;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.userIdString, (int32_t)v17, v18, v19);
  }
  userIdString = this->fields.userIdString;
  v21 = System_Int32__ToString((int32_t)&v29, 0LL);
  v22 = System_String__Concat_62450424(userIdString, v21, 0LL);
  Instance = DataMasterBase_object__object__object___get_lookup(
               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
               (const MethodInfo_32CA6AC *)Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string__get_lookup__);
  if ( !Instance )
LABEL_25:
    sub_1BCB254(Instance, v12);
  v23 = *(_QWORD *)Instance;
  v24 = Instance;
  v25 = *(unsigned __int16 *)(*(_QWORD *)Instance + 302LL);
  if ( *(_WORD *)(*(_QWORD *)Instance + 302LL) )
  {
    v26 = (System_Collections_Generic_IReadOnlyDictionary_string__UserQuestEntity__c **)(*(_QWORD *)(v23 + 176) + 8LL);
    while ( *(v26 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__UserQuestEntity__TypeInfo )
    {
      --v25;
      v26 += 2;
      if ( !v25 )
        goto LABEL_20;
    }
    v27 = v23 + 16LL * (*(_DWORD *)v26 + 1) + 312;
  }
  else
  {
LABEL_20:
    v27 = sub_1C1B560(Instance, System_Collections_Generic_IReadOnlyDictionary_string__UserQuestEntity__TypeInfo, 1LL);
  }
  if ( ((*(__int64 (__fastcall **)(_BYTE *, System_String_o *, UserQuestEntity_o **, _QWORD))v27)(
          v24,
          v22,
          &v28,
          *(_QWORD *)(v27 + 8)) & 1) != 0 )
    return v28;
  else
    return 0LL;
}


void __fastcall UserQuestMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B1D3FC & 1) == 0 )
  {
    sub_1BCAFF8(&UserQuestMaster___c_TypeInfo, v1);
    byte_4B1D3FC = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(UserQuestMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  UserQuestMaster___c_TypeInfo->static_fields->__9 = (struct UserQuestMaster___c_o *)v2;
  sub_1BCAF9C((CGThumbnailListItem_o *)UserQuestMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1BCB254(this, x);
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
    sub_1BCB254(this, x);
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
    sub_1BCB254(this, a);
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
    sub_1BCB254(this, a);
  return usrEnt->fields.questId == a;
}