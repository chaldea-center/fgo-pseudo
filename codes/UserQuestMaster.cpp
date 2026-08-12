void UserQuestMaster___ctor(UserQuestMaster_o *this, const MethodInfo *method)
{
  const MethodInfo_3F1339C *v3; // x2

  if ( (byte_59717F5 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string___ctor__);
    byte_59717F5 = 1;
  }
  v3 = (const MethodInfo_3F1339C *)Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string___ctor__;
  this->fields.oldId = -1;
  DataMasterBase_object__object__object____ctor((DataMasterBase_TMaster__TEntity__PKType__o *)this, 62, v3);
}


void UserQuestMaster__CreateCache(UserQuestMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v3; // x21
  struct System_Collections_Generic_Dictionary_int__UserQuestEntity__o **p_idCache; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  __int64 v11; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v13; // w21
  Il2CppObject *Item; // x23

  if ( (byte_5971800 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_UserQuestEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_UserQuestEntity__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__UserQuestEntity___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__UserQuestEntity__set_Item__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__UserQuestEntity__TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5971800 = 1;
  }
  if ( this->fields.isDirty )
  {
    this->fields.isDirty = 0;
    v3 = (System_Collections_Generic_Dictionary_int__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__UserQuestEntity__TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v3,
      (const MethodInfo_3F9BAFC *)Method_System_Collections_Generic_Dictionary_int__UserQuestEntity___ctor__);
    this->fields.idCache = (struct System_Collections_Generic_Dictionary_int__UserQuestEntity__o *)v3;
    p_idCache = &this->fields.idCache;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.idCache, (int32_t)v3, v5, v6, v7, v8, v9, v10);
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
LABEL_19:
      sub_2213CDC(list, v11);
    v13 = 0;
    while ( v13 < System_Collections_ObjectModel_Collection_object___get_Count(
                    list,
                    (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_UserQuestEntity__get_Count__) )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( list )
      {
        Item = System_Collections_ObjectModel_Collection_object___get_Item(
                 list,
                 v13,
                 (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_UserQuestEntity__get_Item__);
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v11);
        if ( !byte_5969EF2 )
        {
          sub_2213A60(&NetworkManager_TypeInfo);
          byte_5969EF2 = 1;
        }
        list = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager_TypeInfo;
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v11);
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
              (const MethodInfo_3F9C49C *)Method_System_Collections_Generic_Dictionary_int__UserQuestEntity__set_Item__);
          }
          list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
          ++v13;
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
  struct NetworkManager_StaticFields *static_fields; // x8
  int64_t userIdNumber; // x8

  if ( (byte_59717FF & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&UserQuestEntity_TypeInfo);
    byte_59717FF = 1;
  }
  if ( !questId )
    return 0;
  v8 = (UserQuestEntity_o *)sub_2213CCC(UserQuestEntity_TypeInfo);
  UserQuestEntity___ctor(v8, v9);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v10);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  v11 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v10);
    v11 = NetworkManager_TypeInfo;
  }
  if ( !v8 )
    sub_2213CDC(v11, v10);
  static_fields = v11->static_fields;
  v8->fields.questId = questId;
  v8->fields.questPhase = phase;
  v8->fields.clearNum = 1;
  userIdNumber = static_fields->userIdNumber;
  v8->fields.updatedAt = updatedAt;
  v8->fields.userId = userIdNumber;
  return v8;
}


void UserQuestMaster__DeleteCache(UserQuestMaster_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_Collections_Generic_Dictionary_int__UserQuestEntity__o **p_idCache; // x19

  this->fields.idCache = 0;
  p_idCache = &this->fields.idCache;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.idCache, 0, v2, v3, v4, v5, v6, v7);
  *((_BYTE *)p_idCache - 8) = 1;
}


// local variable allocation has failed, the output may be wrong!
UserQuestEntity_o *UserQuestMaster__GetCacheById(UserQuestMaster_o *this, int32_t id, const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_Dictionary_int__UserQuestEntity__o *idCache; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5971801 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__UserQuestEntity__TryGetValue__);
    byte_5971801 = 1;
  }
  value = 0;
  UserQuestMaster__CreateCache(this, *(const MethodInfo **)&id);
  idCache = this->fields.idCache;
  if ( !idCache )
    sub_2213CDC(0, v5);
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         (System_Collections_Generic_Dictionary_int__object__o *)idCache,
         id,
         &value,
         (const MethodInfo_3F9DF8C *)Method_System_Collections_Generic_Dictionary_int__UserQuestEntity__TryGetValue__) )
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

  if ( (byte_59717F6 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string__GetEntity__);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_2213A60(&UserQuestEntity_TypeInfo);
    byte_59717F6 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v8);
  if ( BYTE1(Instance[4].monitor) )
  {
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8);
    if ( !byte_5969EF2 )
    {
      sub_2213A60(&NetworkManager_TypeInfo);
      byte_5969EF2 = 1;
    }
    v10 = NetworkManager_TypeInfo;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8);
      v10 = NetworkManager_TypeInfo;
    }
    if ( v10->static_fields->userIdNumber == userId )
      return UserQuestMaster__GetCacheById(this, questId, v9);
  }
  if ( !*(&UserQuestEntity_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UserQuestEntity_TypeInfo, v8);
  PK = (Il2CppObject *)UserQuestEntity__CreatePK(userId, questId, v9);
  return (UserQuestEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                PK,
                                (const MethodInfo_3F157EC *)Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string__GetEntity__);
}


QuestEntity_o *UserQuestMaster__GetLatestMainScenarioLastQuest(
        UserQuestMaster_o *this,
        int64_t userId,
        System_Collections_Generic_List_int__o *materialLatestClearList,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *MasterData_object; // x20
  System_Collections_Generic_List_object__o *v10; // x22
  System_Collections_ObjectModel_Collection_T__o *list; // x8
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  System_Collections_Generic_IEnumerator_T__o *v13; // x1
  System_Collections_Generic_IEnumerator_T__o *v14; // x24
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v16; // x9
  int *p_offset; // x10
  __int64 v18; // x0
  __int64 v19; // x0
  System_Collections_Generic_IEnumerator_T__o *v20; // x24
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  __int64 v22; // x9
  int *v23; // x10
  __int64 v24; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0
  System_Collections_Generic_IEnumerator_T__o *v35; // x24
  System_Collections_Generic_IEnumerator_T__c *v36; // x8
  __int64 v37; // x9
  int *v38; // x10
  __int64 v39; // x0
  struct UserQuestMaster___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__11_0; // x23
  Il2CppObject *v42; // x24
  struct UserQuestMaster___c_StaticFields *v43; // x0
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  __int64 v50; // x23
  __int64 v51; // x0
  __int64 v52; // x1
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7
  int32_t current; // w1
  __int64 v60; // x22
  __int64 v61; // x0
  __int64 v62; // x1
  bool QuestEntity; // w0
  System_Func_int__bool__o *v64; // x24
  _BOOL8 v65; // x0
  __int64 v66; // x1
  QuestEntity_o *v67; // x23
  __int64 TypeFlag; // x0
  __int64 v69; // x1
  Il2CppObject *v70; // x0
  __int64 v71; // x1
  __int64 v72; // x1
  int32_t WarID_ByQuestID; // w22
  BalanceConfig_c *v74; // x0
  int v76; // [xsp+4h] [xbp-ACh]
  System_Collections_Generic_List_Enumerator_object__o v77; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v78; // [xsp+20h] [xbp-90h] BYREF
  System_Collections_Generic_IEnumerator_T__o *v79; // [xsp+40h] [xbp-70h] BYREF
  QuestEntity_o *entity; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_59717FE & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_BasicHelper_Any_int___);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_UserQuestEntity__GetEnumerator__);
    sub_2213A60(&System_Comparison_UserQuestEntity__TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_ConstantMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__get_Current__);
    sub_2213A60(&System_Func_int__bool__TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_UserQuestEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_UserQuestEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserQuestEntity__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserQuestEntity__Sort__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserQuestEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_UserQuestEntity__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_2213A60(&Method_UserQuestMaster___c__GetLatestMainScenarioLastQuest_b__11_0__);
    sub_2213A60(&Method_UserQuestMaster___c__DisplayClass11_0__GetLatestMainScenarioLastQuest_b__1__);
    sub_2213A60(&UserQuestMaster___c__DisplayClass11_0_TypeInfo);
    sub_2213A60(&UserQuestMaster___c_TypeInfo);
    sub_2213A60(&StringLiteral_3476/*"CHAPTER_F_END_ID"*/);
    byte_59717FE = 1;
  }
  v79 = 0;
  entity = 0;
  memset(&v78, 0, sizeof(v78));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_76;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestMaster___);
  v10 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_UserQuestEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_UserQuestEntity___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_76;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ConstantMaster___);
  if ( !Instance )
    goto LABEL_76;
  Instance = (void *)ConstantMaster__GetValue((ConstantMaster_o *)Instance, (System_String_o *)StringLiteral_3476/*"CHAPTER_F_END_ID"*/, 0);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  v76 = (int)Instance;
  if ( !list )
    goto LABEL_76;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_UserQuestEntity__GetEnumerator__);
  v79 = Enumerator;
  v77.fields._list = 0;
  *(_QWORD *)&v77.fields._index = &v79;
  if ( !Enumerator )
LABEL_32:
    sub_2213CDC(Enumerator, v13);
  v14 = Enumerator;
  while ( 1 )
  {
    klass = v14->klass;
    v16 = *(unsigned __int16 *)&v14->klass->_2.rank;
    if ( *(_WORD *)&v14->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v16;
        p_offset += 4;
        if ( !v16 )
          goto LABEL_13;
      }
      v18 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_13:
      v18 = sub_224BC3C(v14, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v19 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
            v14,
            *(_QWORD *)(v18 + 8));
    if ( (v19 & 1) == 0 )
      break;
    v20 = v79;
    if ( !v79 )
      sub_2213CDC(v19, v8);
    v21 = v79->klass;
    v22 = *(unsigned __int16 *)&v79->klass->_2.rank;
    if ( *(_WORD *)&v79->klass->_2.rank )
    {
      v23 = &v21->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_UserQuestEntity__c **)v23 - 1) != System_Collections_Generic_IEnumerator_UserQuestEntity__TypeInfo )
      {
        --v22;
        v23 += 4;
        if ( !v22 )
          goto LABEL_21;
      }
      v24 = (__int64)&v21->vtable[*v23];
    }
    else
    {
LABEL_21:
      v24 = sub_224BC3C(v79, System_Collections_Generic_IEnumerator_UserQuestEntity__TypeInfo, 0);
    }
    Enumerator = (System_Collections_Generic_IEnumerator_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
                                                                  v20,
                                                                  *(_QWORD *)(v24 + 8));
    v13 = Enumerator;
    if ( !Enumerator )
      sub_2213CDC(0, 0);
    if ( Enumerator[1].monitor == (void *)userId && LODWORD(Enumerator[2].monitor) )
    {
      if ( !v10
        || (items = v10->fields._items,
            v32 = Method_System_Collections_Generic_List_UserQuestEntity__Add__,
            ++v10->fields._version,
            !items) )
      {
        sub_2213CDC(Enumerator, Enumerator);
      }
      size = v10->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v10,
          (Il2CppObject *)Enumerator,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
      }
      else
      {
        v34 = &items->obj.klass + size;
        v10->fields._size = size + 1;
        v34[4] = (Il2CppClass *)v13;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v34 + 4), (int32_t)v13, v25, v26, v27, v28, v29, v30);
      }
    }
    v14 = v79;
    if ( !v79 )
      goto LABEL_32;
  }
  v35 = v79;
  if ( v79 )
  {
    v36 = v79->klass;
    v37 = *(unsigned __int16 *)&v79->klass->_2.rank;
    if ( *(_WORD *)&v79->klass->_2.rank )
    {
      v38 = &v36->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
      {
        --v37;
        v38 += 4;
        if ( !v37 )
          goto LABEL_38;
      }
      v39 = (__int64)&v36->vtable[*v38];
    }
    else
    {
LABEL_38:
      v39 = sub_224BC3C(v79, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v39)(v35, *(_QWORD *)(v39 + 8));
  }
  Instance = UserQuestMaster___c_TypeInfo;
  if ( !*(&UserQuestMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UserQuestMaster___c_TypeInfo, v8);
    Instance = UserQuestMaster___c_TypeInfo;
  }
  static_fields = (struct UserQuestMaster___c_StaticFields *)*((_QWORD *)Instance + 23);
  _9__11_0 = (System_Comparison_T__o *)static_fields->__9__11_0;
  if ( !_9__11_0 )
  {
    if ( !*((_DWORD *)Instance + 57) )
    {
      j_il2cpp_runtime_class_init_0(Instance, v8);
      static_fields = UserQuestMaster___c_TypeInfo->static_fields;
    }
    v42 = (Il2CppObject *)static_fields->__9;
    _9__11_0 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_UserQuestEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__11_0,
      v42,
      Method_UserQuestMaster___c__GetLatestMainScenarioLastQuest_b__11_0__,
      0);
    v43 = UserQuestMaster___c_TypeInfo->static_fields;
    v43->__9__11_0 = (struct System_Comparison_UserQuestEntity__o *)_9__11_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v43->__9__11_0, (int32_t)_9__11_0, v44, v45, v46, v47, v48, v49);
  }
  if ( !v10 )
LABEL_76:
    sub_2213CDC(Instance, v8);
  System_Collections_Generic_List_object___Sort_71849708(
    v10,
    _9__11_0,
    (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_UserQuestEntity__Sort__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v77,
    v10,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_UserQuestEntity__GetEnumerator__);
  v78 = v77;
  v77.fields._list = 0;
  *(_QWORD *)&v77.fields._index = &v78;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v78,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__MoveNext__) )
  {
    v50 = sub_2213CCC(UserQuestMaster___c__DisplayClass11_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v50, 0);
    if ( !v50 )
      sub_2213CDC(v51, v52);
    current = (int32_t)v78.fields._current;
    *(_QWORD *)(v50 + 16) = v78.fields._current;
    v60 = v50 + 16;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v50 + 16), current, v53, v54, v55, v56, v57, v58);
    if ( !*(_QWORD *)(v50 + 16) )
      sub_2213CDC(v61, v62);
    if ( !MasterData_object )
      sub_2213CDC(v61, v62);
    QuestEntity = QuestMaster__TryGetQuestEntity(
                    (QuestMaster_o *)MasterData_object,
                    &entity,
                    *(_DWORD *)(*(_QWORD *)(v50 + 16) + 32LL),
                    0);
    if ( QuestEntity && entity != 0 )
    {
      v64 = (System_Func_int__bool__o *)sub_2213CCC(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(
        v64,
        (Il2CppObject *)v50,
        Method_UserQuestMaster___c__DisplayClass11_0__GetLatestMainScenarioLastQuest_b__1__,
        0);
      v65 = BasicHelper__Any_int_(
              (System_Collections_Generic_List_T__o *)materialLatestClearList,
              (System_Func_T__bool__o *)v64,
              (const MethodInfo_380FAB4 *)Method_BasicHelper_Any_int___);
      v67 = entity;
      if ( v65 )
        goto LABEL_68;
      if ( !entity )
        sub_2213CDC(v65, v66);
      TypeFlag = QuestEntity__GetTypeFlag(entity, 0);
      if ( (_DWORD)TypeFlag == 2 )
      {
        if ( !entity )
          sub_2213CDC(TypeFlag, v69);
        if ( entity->fields.chapterId )
          goto LABEL_65;
        if ( !*(_QWORD *)v60 )
          sub_2213CDC(TypeFlag, v69);
        if ( *(_DWORD *)(*(_QWORD *)v60 + 32LL) <= v76 )
        {
LABEL_65:
          v70 = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_QuestTree__get_Instance__);
          if ( !*(_QWORD *)v60 )
            sub_2213CDC(v70, v71);
          if ( !v70 )
            sub_2213CDC(0, v71);
          WarID_ByQuestID = QuestTree__GetWarID_ByQuestID((QuestTree_o *)v70, *(_DWORD *)(*(_QWORD *)v60 + 32LL), 0);
          v74 = BalanceConfig_TypeInfo;
          if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v72);
            v74 = BalanceConfig_TypeInfo;
          }
          if ( WarID_ByQuestID < v74->static_fields->PowerUpQuestWarId )
          {
            v67 = entity;
            goto LABEL_68;
          }
        }
      }
    }
  }
  v67 = 0;
LABEL_68:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v78,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__Dispose__);
  return v67;
}


QuestEntity_o *UserQuestMaster__GetMainScenarioLatestClear(
        UserQuestMaster_o *this,
        int64_t userId,
        System_Collections_Generic_List_int__o *materialLatestClearList,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *MasterData_object; // x20
  System_Collections_Generic_List_object__o *v10; // x22
  System_Collections_ObjectModel_Collection_T__o *list; // x8
  Il2CppObject *Enumerator; // x0
  Il2CppObject *v13; // x1
  Il2CppObject *v14; // x24
  Il2CppClass *klass; // x8
  __int64 v16; // x9
  int *p_offset; // x10
  __int64 v18; // x0
  __int64 v19; // x0
  Il2CppObject *v20; // x24
  Il2CppClass *v21; // x8
  __int64 v22; // x9
  int *v23; // x10
  __int64 v24; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0
  Il2CppObject *v35; // x24
  Il2CppClass *v36; // x8
  __int64 v37; // x9
  int *v38; // x10
  __int64 v39; // x0
  struct UserQuestMaster___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__10_0; // x23
  Il2CppObject *v42; // x24
  struct UserQuestMaster___c_StaticFields *v43; // x0
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  __int64 v50; // x23
  __int64 v51; // x0
  __int64 v52; // x1
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7
  int32_t current; // w1
  __int64 v60; // x22
  __int64 v61; // x0
  __int64 v62; // x1
  bool QuestEntity; // w0
  System_Func_int__bool__o *v64; // x24
  _BOOL8 v65; // x0
  __int64 v66; // x1
  QuestEntity_o *v67; // x23
  __int64 TypeFlag; // x0
  __int64 v69; // x1
  Il2CppObject *v70; // x0
  __int64 v71; // x1
  __int64 v72; // x1
  int32_t WarID_ByQuestID; // w22
  BalanceConfig_c *v74; // x0
  int v76; // [xsp+4h] [xbp-ACh]
  System_Collections_Generic_List_Enumerator_object__o v77; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v78; // [xsp+20h] [xbp-90h] BYREF
  Il2CppObject *v79; // [xsp+40h] [xbp-70h] BYREF
  QuestEntity_o *entity; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_59717FD & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_BasicHelper_Any_int___);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_UserQuestEntity__GetEnumerator__);
    sub_2213A60(&System_Comparison_UserQuestEntity__TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_ConstantMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__get_Current__);
    sub_2213A60(&System_Func_int__bool__TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_UserQuestEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_UserQuestEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserQuestEntity__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserQuestEntity__Sort__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserQuestEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_UserQuestEntity__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_2213A60(&Method_UserQuestMaster___c__GetMainScenarioLatestClear_b__10_0__);
    sub_2213A60(&Method_UserQuestMaster___c__DisplayClass10_0__GetMainScenarioLatestClear_b__1__);
    sub_2213A60(&UserQuestMaster___c__DisplayClass10_0_TypeInfo);
    sub_2213A60(&UserQuestMaster___c_TypeInfo);
    sub_2213A60(&StringLiteral_3476/*"CHAPTER_F_END_ID"*/);
    byte_59717FD = 1;
  }
  v79 = 0;
  entity = 0;
  memset(&v78, 0, sizeof(v78));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_75;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestMaster___);
  v10 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_UserQuestEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_UserQuestEntity___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_75;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ConstantMaster___);
  if ( !Instance )
    goto LABEL_75;
  Instance = (void *)ConstantMaster__GetValue((ConstantMaster_o *)Instance, (System_String_o *)StringLiteral_3476/*"CHAPTER_F_END_ID"*/, 0);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  v76 = (int)Instance;
  if ( !list )
    goto LABEL_75;
  Enumerator = (Il2CppObject *)System_Collections_ObjectModel_Collection_object___GetEnumerator(
                                 list,
                                 (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_UserQuestEntity__GetEnumerator__);
  v79 = Enumerator;
  v77.fields._list = 0;
  *(_QWORD *)&v77.fields._index = &v79;
  if ( !Enumerator )
LABEL_31:
    sub_2213CDC(Enumerator, v13);
  v14 = Enumerator;
  while ( 1 )
  {
    klass = v14->klass;
    v16 = *(unsigned __int16 *)&v14->klass->_2.rank;
    if ( *(_WORD *)&v14->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v16;
        p_offset += 4;
        if ( !v16 )
          goto LABEL_13;
      }
      v18 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_13:
      v18 = sub_224BC3C(v14, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v19 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v18)(v14, *(_QWORD *)(v18 + 8));
    if ( (v19 & 1) == 0 )
      break;
    v20 = v79;
    if ( !v79 )
      sub_2213CDC(v19, v8);
    v21 = v79->klass;
    v22 = *(unsigned __int16 *)&v79->klass->_2.rank;
    if ( *(_WORD *)&v79->klass->_2.rank )
    {
      v23 = &v21->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_UserQuestEntity__c **)v23 - 1) != System_Collections_Generic_IEnumerator_UserQuestEntity__TypeInfo )
      {
        --v22;
        v23 += 4;
        if ( !v22 )
          goto LABEL_21;
      }
      v24 = (__int64)&v21->vtable[*v23];
    }
    else
    {
LABEL_21:
      v24 = sub_224BC3C(v79, System_Collections_Generic_IEnumerator_UserQuestEntity__TypeInfo, 0);
    }
    Enumerator = (Il2CppObject *)(*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v24)(v20, *(_QWORD *)(v24 + 8));
    v13 = Enumerator;
    if ( !Enumerator )
      sub_2213CDC(0, 0);
    if ( Enumerator[1].monitor == (void *)userId )
    {
      if ( !v10
        || (items = v10->fields._items,
            v32 = Method_System_Collections_Generic_List_UserQuestEntity__Add__,
            ++v10->fields._version,
            !items) )
      {
        sub_2213CDC(Enumerator, Enumerator);
      }
      size = v10->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v10,
          Enumerator,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
      }
      else
      {
        v34 = &items->obj.klass + size;
        v10->fields._size = size + 1;
        v34[4] = (Il2CppClass *)v13;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v34 + 4), (int32_t)v13, v25, v26, v27, v28, v29, v30);
      }
    }
    v14 = v79;
    if ( !v79 )
      goto LABEL_31;
  }
  v35 = v79;
  if ( v79 )
  {
    v36 = v79->klass;
    v37 = *(unsigned __int16 *)&v79->klass->_2.rank;
    if ( *(_WORD *)&v79->klass->_2.rank )
    {
      v38 = &v36->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
      {
        --v37;
        v38 += 4;
        if ( !v37 )
          goto LABEL_37;
      }
      v39 = (__int64)&v36->vtable[*v38];
    }
    else
    {
LABEL_37:
      v39 = sub_224BC3C(v79, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(Il2CppObject *, _QWORD))v39)(v35, *(_QWORD *)(v39 + 8));
  }
  Instance = UserQuestMaster___c_TypeInfo;
  if ( !*(&UserQuestMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UserQuestMaster___c_TypeInfo, v8);
    Instance = UserQuestMaster___c_TypeInfo;
  }
  static_fields = (struct UserQuestMaster___c_StaticFields *)*((_QWORD *)Instance + 23);
  _9__10_0 = (System_Comparison_T__o *)static_fields->__9__10_0;
  if ( !_9__10_0 )
  {
    if ( !*((_DWORD *)Instance + 57) )
    {
      j_il2cpp_runtime_class_init_0(Instance, v8);
      static_fields = UserQuestMaster___c_TypeInfo->static_fields;
    }
    v42 = (Il2CppObject *)static_fields->__9;
    _9__10_0 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_UserQuestEntity__TypeInfo);
    System_Comparison_object____ctor(_9__10_0, v42, Method_UserQuestMaster___c__GetMainScenarioLatestClear_b__10_0__, 0);
    v43 = UserQuestMaster___c_TypeInfo->static_fields;
    v43->__9__10_0 = (struct System_Comparison_UserQuestEntity__o *)_9__10_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v43->__9__10_0, (int32_t)_9__10_0, v44, v45, v46, v47, v48, v49);
  }
  if ( !v10 )
LABEL_75:
    sub_2213CDC(Instance, v8);
  System_Collections_Generic_List_object___Sort_71849708(
    v10,
    _9__10_0,
    (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_UserQuestEntity__Sort__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v77,
    v10,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_UserQuestEntity__GetEnumerator__);
  v78 = v77;
  v77.fields._list = 0;
  *(_QWORD *)&v77.fields._index = &v78;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v78,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__MoveNext__) )
  {
    v50 = sub_2213CCC(UserQuestMaster___c__DisplayClass10_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v50, 0);
    if ( !v50 )
      sub_2213CDC(v51, v52);
    current = (int32_t)v78.fields._current;
    *(_QWORD *)(v50 + 16) = v78.fields._current;
    v60 = v50 + 16;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v50 + 16), current, v53, v54, v55, v56, v57, v58);
    if ( !*(_QWORD *)(v50 + 16) )
      sub_2213CDC(v61, v62);
    if ( !MasterData_object )
      sub_2213CDC(v61, v62);
    QuestEntity = QuestMaster__TryGetQuestEntity(
                    (QuestMaster_o *)MasterData_object,
                    &entity,
                    *(_DWORD *)(*(_QWORD *)(v50 + 16) + 32LL),
                    0);
    if ( QuestEntity && entity != 0 )
    {
      v64 = (System_Func_int__bool__o *)sub_2213CCC(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(
        v64,
        (Il2CppObject *)v50,
        Method_UserQuestMaster___c__DisplayClass10_0__GetMainScenarioLatestClear_b__1__,
        0);
      v65 = BasicHelper__Any_int_(
              (System_Collections_Generic_List_T__o *)materialLatestClearList,
              (System_Func_T__bool__o *)v64,
              (const MethodInfo_380FAB4 *)Method_BasicHelper_Any_int___);
      v67 = entity;
      if ( v65 )
        goto LABEL_67;
      if ( !entity )
        sub_2213CDC(v65, v66);
      TypeFlag = QuestEntity__GetTypeFlag(entity, 0);
      if ( (_DWORD)TypeFlag == 2 )
      {
        if ( !entity )
          sub_2213CDC(TypeFlag, v69);
        if ( entity->fields.chapterId )
          goto LABEL_64;
        if ( !*(_QWORD *)v60 )
          sub_2213CDC(TypeFlag, v69);
        if ( *(_DWORD *)(*(_QWORD *)v60 + 32LL) <= v76 )
        {
LABEL_64:
          v70 = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_QuestTree__get_Instance__);
          if ( !*(_QWORD *)v60 )
            sub_2213CDC(v70, v71);
          if ( !v70 )
            sub_2213CDC(0, v71);
          WarID_ByQuestID = QuestTree__GetWarID_ByQuestID((QuestTree_o *)v70, *(_DWORD *)(*(_QWORD *)v60 + 32LL), 0);
          v74 = BalanceConfig_TypeInfo;
          if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v72);
            v74 = BalanceConfig_TypeInfo;
          }
          if ( WarID_ByQuestID < v74->static_fields->PowerUpQuestWarId )
          {
            v67 = entity;
            goto LABEL_67;
          }
        }
      }
    }
  }
  v67 = 0;
LABEL_67:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v78,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__Dispose__);
  return v67;
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
    sub_2213CDC(this, userId);
  max_length = questIds->max_length;
  v6 = (int)max_length > 0;
  if ( (int)max_length >= 1 )
  {
    v8 = this;
    v9 = 0;
    do
    {
      if ( v9 >= (unsigned int)max_length )
        sub_2213CE4(this);
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
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  Il2CppObject *PK; // x2

  if ( (byte_59717F7 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string__TryGetEntity__);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_2213A60(&UserQuestEntity_TypeInfo);
    byte_59717F7 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v10);
  if ( !BYTE1(Instance[4].monitor) )
    goto LABEL_19;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v10);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  v12 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v10);
    v12 = NetworkManager_TypeInfo;
  }
  if ( v12->static_fields->userIdNumber == userId )
  {
    CacheById = UserQuestMaster__GetCacheById(this, questId, v11);
    *entity = CacheById;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)entity, (int32_t)CacheById, v14, v15, v16, v17, v18, v19);
    return *entity != 0;
  }
  else
  {
LABEL_19:
    if ( !*(&UserQuestEntity_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UserQuestEntity_TypeInfo, v10);
    PK = (Il2CppObject *)UserQuestEntity__CreatePK(userId, questId, v11);
    return DataMasterBase_object__object__object___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             (Il2CppObject **)entity,
             PK,
             (const MethodInfo_3F15838 *)Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string__TryGetEntity__);
  }
}


int32_t UserQuestMaster__getChallengeCountsFromId(
        UserQuestMaster_o *this,
        int64_t userId,
        int32_t questId,
        const MethodInfo *method)
{
  int64_t oldId; // x8
  System_String_o *v7; // x0
  struct System_String_o *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_String_o *userIdString; // x20
  System_String_o *v16; // x0
  System_String_o *v17; // x20
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *lookup; // x0
  __int64 v19; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *v21; // x19
  __int64 v22; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__UserQuestEntity__c **p_offset; // x10
  __int64 v24; // x0
  __int64 v26; // [xsp+0h] [xbp-40h] BYREF
  int32_t v27; // [xsp+Ch] [xbp-34h] BYREF
  int64_t v28; // [xsp+18h] [xbp-28h] BYREF

  v28 = userId;
  v27 = questId;
  if ( (byte_59717F9 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string__get_lookup__);
    sub_2213A60(&System_Collections_Generic_IReadOnlyDictionary_string__UserQuestEntity__TypeInfo);
    sub_2213A60(&StringLiteral_1533/*":"*/);
    byte_59717F9 = 1;
  }
  oldId = this->fields.oldId;
  v26 = 0;
  if ( oldId != userId )
  {
    this->fields.oldId = userId;
    v7 = System_Int64__ToString((int64_t)&v28, 0);
    v8 = System_String__Concat_75651716(v7, (System_String_o *)StringLiteral_1533/*":"*/, 0);
    this->fields.userIdString = v8;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.userIdString,
      (int32_t)v8,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  userIdString = this->fields.userIdString;
  v16 = System_Int32__ToString((int32_t)&v27, 0);
  v17 = System_String__Concat_75651716(userIdString, v16, 0);
  lookup = DataMasterBase_object__object__object___get_lookup(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             (const MethodInfo_3F134B8 *)Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string__get_lookup__);
  if ( !lookup )
    goto LABEL_16;
  klass = lookup->klass;
  v21 = lookup;
  v22 = *(unsigned __int16 *)&lookup->klass->_2.rank;
  if ( *(_WORD *)&lookup->klass->_2.rank )
  {
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__UserQuestEntity__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__UserQuestEntity__TypeInfo )
    {
      --v22;
      p_offset += 2;
      if ( !v22 )
        goto LABEL_10;
    }
    v24 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1];
  }
  else
  {
LABEL_10:
    v24 = sub_224BC3C(lookup, System_Collections_Generic_IReadOnlyDictionary_string__UserQuestEntity__TypeInfo, 1);
  }
  lookup = (System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *, System_String_o *, __int64 *, _QWORD))v24)(
                                                                                  v21,
                                                                                  v17,
                                                                                  &v26,
                                                                                  *(_QWORD *)(v24 + 8));
  if ( ((unsigned __int8)lookup & 1) != 0 )
  {
    if ( v26 )
      return *(_DWORD *)(v26 + 56);
LABEL_16:
    sub_2213CDC(lookup, v19);
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

  if ( (byte_59717FA & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_UserQuestEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_UserQuestEntity__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Remove__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor___91653480);
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    byte_59717FA = 1;
  }
  v7 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_71723804(
    v7,
    (System_Collections_Generic_IEnumerable_T__o *)questIds,
    (const MethodInfo_4466B1C *)Method_System_Collections_Generic_List_int___ctor___91653480);
  list = this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_UserQuestEntity__get_Count__);
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
               (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_UserQuestEntity__get_Item__);
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
              (const MethodInfo_4468730 *)Method_System_Collections_Generic_List_int__Remove__)
        || (v12 += v14[14], v7->fields._size) )
      {
LABEL_19:
        if ( v11 != ++v13 )
          continue;
      }
      return v12;
    }
LABEL_16:
    sub_2213CDC(list, v8);
  }
  return 0;
}


int32_t UserQuestMaster__getClearCountsFromId(
        UserQuestMaster_o *this,
        int64_t userId,
        int32_t questId,
        const MethodInfo *method)
{
  int64_t oldId; // x8
  System_String_o *v7; // x0
  struct System_String_o *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_String_o *userIdString; // x20
  System_String_o *v16; // x0
  System_String_o *v17; // x20
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *lookup; // x0
  __int64 v19; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *v21; // x19
  __int64 v22; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__UserQuestEntity__c **p_offset; // x10
  __int64 v24; // x0
  __int64 v26; // [xsp+0h] [xbp-40h] BYREF
  int32_t v27; // [xsp+Ch] [xbp-34h] BYREF
  int64_t v28; // [xsp+18h] [xbp-28h] BYREF

  v28 = userId;
  v27 = questId;
  if ( (byte_59717FB & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string__get_lookup__);
    sub_2213A60(&System_Collections_Generic_IReadOnlyDictionary_string__UserQuestEntity__TypeInfo);
    sub_2213A60(&StringLiteral_1533/*":"*/);
    byte_59717FB = 1;
  }
  oldId = this->fields.oldId;
  v26 = 0;
  if ( oldId != userId )
  {
    this->fields.oldId = userId;
    v7 = System_Int64__ToString((int64_t)&v28, 0);
    v8 = System_String__Concat_75651716(v7, (System_String_o *)StringLiteral_1533/*":"*/, 0);
    this->fields.userIdString = v8;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.userIdString,
      (int32_t)v8,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  userIdString = this->fields.userIdString;
  v16 = System_Int32__ToString((int32_t)&v27, 0);
  v17 = System_String__Concat_75651716(userIdString, v16, 0);
  lookup = DataMasterBase_object__object__object___get_lookup(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             (const MethodInfo_3F134B8 *)Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string__get_lookup__);
  if ( !lookup )
    goto LABEL_16;
  klass = lookup->klass;
  v21 = lookup;
  v22 = *(unsigned __int16 *)&lookup->klass->_2.rank;
  if ( *(_WORD *)&lookup->klass->_2.rank )
  {
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__UserQuestEntity__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__UserQuestEntity__TypeInfo )
    {
      --v22;
      p_offset += 2;
      if ( !v22 )
        goto LABEL_10;
    }
    v24 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1];
  }
  else
  {
LABEL_10:
    v24 = sub_224BC3C(lookup, System_Collections_Generic_IReadOnlyDictionary_string__UserQuestEntity__TypeInfo, 1);
  }
  lookup = (System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *, System_String_o *, __int64 *, _QWORD))v24)(
                                                                                  v21,
                                                                                  v17,
                                                                                  &v26,
                                                                                  *(_QWORD *)(v24 + 8));
  if ( ((unsigned __int8)lookup & 1) != 0 )
  {
    if ( v26 )
      return *(_DWORD *)(v26 + 40);
LABEL_16:
    sub_2213CDC(lookup, v19);
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

  if ( (byte_59717FC & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_UserQuestEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_UserQuestEntity__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Remove__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor___91653480);
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    byte_59717FC = 1;
  }
  v7 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_71723804(
    v7,
    (System_Collections_Generic_IEnumerable_T__o *)questIds,
    (const MethodInfo_4466B1C *)Method_System_Collections_Generic_List_int___ctor___91653480);
  list = this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_UserQuestEntity__get_Count__);
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
               (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_UserQuestEntity__get_Item__);
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
              (const MethodInfo_4468730 *)Method_System_Collections_Generic_List_int__Remove__)
        || (v12 += v14[10], v7->fields._size) )
      {
LABEL_19:
        if ( v11 != ++v13 )
          continue;
      }
      return v12;
    }
LABEL_16:
    sub_2213CDC(list, v8);
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
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
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
  if ( (byte_59717F8 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string__get_lookup__);
    sub_2213A60(&System_Collections_Generic_IReadOnlyDictionary_string__UserQuestEntity__TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_2213A60(&StringLiteral_1533/*":"*/);
    byte_59717F8 = 1;
  }
  v28 = 0;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  if ( Instance[73] )
  {
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8);
    if ( !byte_5969EF2 )
    {
      sub_2213A60(&NetworkManager_TypeInfo);
      byte_5969EF2 = 1;
    }
    v10 = NetworkManager_TypeInfo;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8);
      v10 = NetworkManager_TypeInfo;
    }
    if ( v10->static_fields->userIdNumber == userId )
      return UserQuestMaster__GetCacheById(this, questId, v9);
  }
  if ( this->fields.oldId != userId )
  {
    this->fields.oldId = userId;
    v12 = System_Int64__ToString((int64_t)&v30, 0);
    v13 = System_String__Concat_75651716(v12, (System_String_o *)StringLiteral_1533/*":"*/, 0);
    this->fields.userIdString = v13;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.userIdString,
      (int32_t)v13,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  userIdString = this->fields.userIdString;
  v21 = System_Int32__ToString((int32_t)&v29, 0);
  v22 = System_String__Concat_75651716(userIdString, v21, 0);
  Instance = DataMasterBase_object__object__object___get_lookup(
               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
               (const MethodInfo_3F134B8 *)Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string__get_lookup__);
  if ( !Instance )
LABEL_25:
    sub_2213CDC(Instance, v8);
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
    v27 = sub_224BC3C(Instance, System_Collections_Generic_IReadOnlyDictionary_string__UserQuestEntity__TypeInfo, 1);
  }
  if ( ((*(__int64 (__fastcall **)(_BYTE *, System_String_o *, UserQuestEntity_o **, _QWORD))v27)(
          v24,
          v22,
          &v28,
          *(_QWORD *)(v27 + 8))
      & 1) != 0 )
    return v28;
  else
    return 0;
}


void UserQuestMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5971802 & 1) == 0 )
  {
    sub_2213A60(&UserQuestMaster___c_TypeInfo);
    byte_5971802 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(UserQuestMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  UserQuestMaster___c_TypeInfo->static_fields->__9 = (struct UserQuestMaster___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)UserQuestMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_2213CDC(this, x);
  return y->fields.questId - x->fields.questId;
}


int32_t UserQuestMaster___c___GetMainScenarioLatestClear_b__10_0(
        UserQuestMaster___c_o *this,
        UserQuestEntity_o *x,
        UserQuestEntity_o *y,
        const MethodInfo *method)
{
  int64_t updatedAt; // x8
  int64_t v5; // x9

  if ( !y || !x )
    sub_2213CDC(this, x);
  updatedAt = y->fields.updatedAt;
  v5 = x->fields.updatedAt;
  if ( updatedAt - v5 < 0 )
    return -1;
  if ( updatedAt == v5 )
    return y->fields.questId - x->fields.questId;
  return 1;
}


void UserQuestMaster___c__DisplayClass10_0___ctor(
        UserQuestMaster___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
bool UserQuestMaster___c__DisplayClass10_0___GetMainScenarioLatestClear_b__1(
        UserQuestMaster___c__DisplayClass10_0_o *this,
        int32_t a,
        const MethodInfo *method)
{
  struct UserQuestEntity_o *usrEnt; // x8

  usrEnt = this->fields.usrEnt;
  if ( !usrEnt )
    sub_2213CDC(this, *(_QWORD *)&a);
  return usrEnt->fields.questId == a;
}


void UserQuestMaster___c__DisplayClass11_0___ctor(
        UserQuestMaster___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
bool UserQuestMaster___c__DisplayClass11_0___GetLatestMainScenarioLastQuest_b__1(
        UserQuestMaster___c__DisplayClass11_0_o *this,
        int32_t a,
        const MethodInfo *method)
{
  struct UserQuestEntity_o *usrEnt; // x8

  usrEnt = this->fields.usrEnt;
  if ( !usrEnt )
    sub_2213CDC(this, *(_QWORD *)&a);
  return usrEnt->fields.questId == a;
}