void __fastcall UserQuestMaster___ctor(UserQuestMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C22D9A & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string___ctor__, method);
    byte_4C22D9A = 1;
  }
  this->fields.oldId = -1LL;
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    62,
    (const MethodInfo_329D5DC *)Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string___ctor__);
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
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  __int64 v16; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v18; // w21
  Il2CppObject *Item; // x23

  if ( (byte_4C22DA5 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_UserQuestEntity__get_Count__, method);
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_UserQuestEntity__get_Item__, v3);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__UserQuestEntity___ctor__, v4);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__UserQuestEntity__set_Item__, v5);
    sub_1C3B764(&System_Collections_Generic_Dictionary_int__UserQuestEntity__TypeInfo, v6);
    sub_1C3B764(&NetworkManager_TypeInfo, v7);
    byte_4C22DA5 = 1;
  }
  if ( this->fields.isDirty )
  {
    this->fields.isDirty = 0;
    v8 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C3B9B0(System_Collections_Generic_Dictionary_int__UserQuestEntity__TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v8,
      (const MethodInfo_32F41C8 *)Method_System_Collections_Generic_Dictionary_int__UserQuestEntity___ctor__);
    this->fields.idCache = (struct System_Collections_Generic_Dictionary_int__UserQuestEntity__o *)v8;
    p_idCache = &this->fields.idCache;
    sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.idCache, (int64_t)v8, v10, v11, v12, v13, v14, v15);
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
LABEL_19:
      sub_1C3B9C0(list, v16);
    v18 = 0;
    while ( v18 < System_Collections_ObjectModel_Collection_object___get_Count(
                    list,
                    (const MethodInfo_32351F4 *)Method_System_Collections_ObjectModel_Collection_UserQuestEntity__get_Count__) )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( list )
      {
        Item = System_Collections_ObjectModel_Collection_object___get_Item(
                 list,
                 v18,
                 (const MethodInfo_3235284 *)Method_System_Collections_ObjectModel_Collection_UserQuestEntity__get_Item__);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4C1C955 )
        {
          sub_1C3B764(&NetworkManager_TypeInfo, v16);
          byte_4C1C955 = 1;
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
              (const MethodInfo_32F4B88 *)Method_System_Collections_Generic_Dictionary_int__UserQuestEntity__set_Item__);
          }
          list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
          ++v18;
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

  if ( (byte_4C22DA4 & 1) == 0 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, *(_QWORD *)&questId);
    sub_1C3B764(&UserQuestEntity_TypeInfo, v8);
    byte_4C22DA4 = 1;
  }
  if ( !questId )
    return 0LL;
  v9 = (UserQuestEntity_o *)sub_1C3B9B0(UserQuestEntity_TypeInfo);
  UserQuestEntity___ctor(v9, v10);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C1C955 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, v11);
    byte_4C1C955 = 1;
  }
  v12 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v12 = NetworkManager_TypeInfo;
  }
  if ( !v9 )
    sub_1C3B9C0(v12, v11);
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
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct System_Collections_Generic_Dictionary_int__UserQuestEntity__o **p_idCache; // x19

  this->fields.idCache = 0LL;
  p_idCache = &this->fields.idCache;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.idCache, 0LL, v2, v3, v4, v5, v6, v7);
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

  if ( (byte_4C22DA6 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__UserQuestEntity__TryGetValue__, *(_QWORD *)&id);
    byte_4C22DA6 = 1;
  }
  value = 0LL;
  UserQuestMaster__CreateCache(this, *(const MethodInfo **)&id);
  idCache = this->fields.idCache;
  if ( !idCache )
    sub_1C3B9C0(0LL, v5);
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         (System_Collections_Generic_Dictionary_int__object__o *)idCache,
         id,
         &value,
         (const MethodInfo_32F6328 *)Method_System_Collections_Generic_Dictionary_int__UserQuestEntity__TryGetValue__) )
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

  if ( (byte_4C22D9B & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string__GetEntity__, userId);
    sub_1C3B764(&NetworkManager_TypeInfo, v7);
    sub_1C3B764(&Method_SingletonTemplate_QuestTree__get_Instance__, v8);
    sub_1C3B764(&UserQuestEntity_TypeInfo, v9);
    byte_4C22D9B = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
    sub_1C3B9C0(0LL, v11);
  if ( BYTE1(Instance[4].monitor) )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C1C955 )
    {
      sub_1C3B764(&NetworkManager_TypeInfo, v11);
      byte_4C1C955 = 1;
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
                                (const MethodInfo_329F900 *)Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string__GetEntity__);
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
  Il2CppObject *Instance; // x0
  __int64 v31; // x1
  Il2CppObject *MasterData_object; // x20
  System_Collections_Generic_List_object__o *v33; // x22
  System_Collections_ObjectModel_Collection_T__o *v34; // x8
  __int64 v35; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x23
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v38; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v41; // x8
  __int64 v42; // x9
  int32_t *v43; // x10
  __int64 v44; // x0
  __int64 v45; // x0
  __int64 v46; // x1
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  int64_t v53; // x8
  struct System_Object_array *items; // x9
  _QWORD *v55; // x10
  __int64 size; // x11
  Il2CppClass **v57; // x0
  System_Collections_Generic_IEnumerator_T__c *v58; // x8
  __int64 v59; // x9
  int32_t *v60; // x10
  __int64 v61; // x0
  UserQuestMaster___c_c *v62; // x8
  System_Comparison_T__o *_9__11_0; // x23
  Il2CppObject *v64; // x24
  struct UserQuestMaster___c_StaticFields *static_fields; // x0
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  __int64 v72; // x24
  __int64 v73; // x0
  __int64 v74; // x1
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7
  Il2CppObject *current; // x1
  __int64 v82; // x23
  __int64 v83; // x0
  __int64 v84; // x1
  QuestEntity_o *QuestEntity; // x22
  System_Func_int__bool__o *v86; // x25
  __int64 TypeFlag; // x0
  __int64 v88; // x1
  Il2CppObject *v89; // x0
  __int64 v90; // x1
  int32_t WarID_ByQuestID; // w23
  BalanceConfig_c *v92; // x0
  int v94; // [xsp+Ch] [xbp-A4h]
  System_Collections_Generic_List_Enumerator_object__o v96; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v97; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4C22DA3 & 1) == 0 )
  {
    sub_1C3B764(&BalanceConfig_TypeInfo, userId);
    sub_1C3B764(&Method_BasicHelper_Any_int___, v6);
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_UserQuestEntity__GetEnumerator__, v7);
    sub_1C3B764(&System_Comparison_UserQuestEntity__TypeInfo, v8);
    sub_1C3B764(&Method_DataManager_GetMasterData_ConstantMaster___, v9);
    sub_1C3B764(&Method_DataManager_GetMasterData_QuestMaster___, v10);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__Dispose__, v11);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__MoveNext__, v12);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__get_Current__, v13);
    sub_1C3B764(&System_Func_int__bool__TypeInfo, v14);
    sub_1C3B764(&System_IDisposable_TypeInfo, v15);
    sub_1C3B764(&System_Collections_Generic_IEnumerator_UserQuestEntity__TypeInfo, v16);
    sub_1C3B764(&System_Collections_IEnumerator_TypeInfo, v17);
    sub_1C3B764(&Method_System_Collections_Generic_List_UserQuestEntity__Add__, v18);
    sub_1C3B764(&Method_System_Collections_Generic_List_UserQuestEntity__GetEnumerator__, v19);
    sub_1C3B764(&Method_System_Collections_Generic_List_UserQuestEntity__Sort__, v20);
    sub_1C3B764(&Method_System_Collections_Generic_List_UserQuestEntity___ctor__, v21);
    sub_1C3B764(&System_Collections_Generic_List_UserQuestEntity__TypeInfo, v22);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23);
    sub_1C3B764(&Method_SingletonTemplate_QuestTree__get_Instance__, v24);
    sub_1C3B764(&Method_UserQuestMaster___c__GetLatestMainScenarioLastQuest_b__11_0__, v25);
    sub_1C3B764(&Method_UserQuestMaster___c__DisplayClass11_0__GetLatestMainScenarioLastQuest_b__1__, v26);
    sub_1C3B764(&UserQuestMaster___c__DisplayClass11_0_TypeInfo, v27);
    sub_1C3B764(&UserQuestMaster___c_TypeInfo, v28);
    sub_1C3B764(&StringLiteral_3485/*"CLOSE_ITEMLIST"*/, v29);
    byte_4C22DA3 = 1;
  }
  memset(&v97, 0, sizeof(v97));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_67;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_QuestMaster___);
  v33 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_UserQuestEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v33,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_UserQuestEntity___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_67;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ConstantMaster___);
  if ( !Instance )
    goto LABEL_67;
  Instance = (Il2CppObject *)ConstantMaster__GetValue(
                               (ConstantMaster_o *)Instance,
                               (System_String_o *)StringLiteral_3485/*"CLOSE_ITEMLIST"*/,
                               0LL);
  v34 = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  v94 = (int)Instance;
  if ( !v34 )
    goto LABEL_67;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 v34,
                 (const MethodInfo_32357CC *)Method_System_Collections_ObjectModel_Collection_UserQuestEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C3B9C0(0LL, v35);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v38 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v38;
        p_offset += 4;
        if ( !v38 )
          goto LABEL_12;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_12:
      p_method = sub_1C8D744(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v41 = Enumerator->klass;
    v42 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v43 = &v41->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_UserQuestEntity__c **)v43 - 1) != System_Collections_Generic_IEnumerator_UserQuestEntity__TypeInfo )
      {
        --v42;
        v43 += 4;
        if ( !v42 )
          goto LABEL_19;
      }
      v44 = (__int64)&v41->vtable[*v43].method;
    }
    else
    {
LABEL_19:
      v44 = sub_1C8D744(Enumerator, System_Collections_Generic_IEnumerator_UserQuestEntity__TypeInfo, 0LL);
    }
    v45 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v44)(
            Enumerator,
            *(_QWORD *)(v44 + 8));
    v53 = v45;
    if ( !v45 )
      sub_1C3B9C0(0LL, v46);
    if ( *(_QWORD *)(v45 + 24) == userId && *(_DWORD *)(v45 + 40) )
    {
      if ( !v33 )
        sub_1C3B9C0(v45, v46);
      items = v33->fields._items;
      v55 = Method_System_Collections_Generic_List_UserQuestEntity__Add__;
      ++v33->fields._version;
      if ( !items )
        sub_1C3B9C0(v45, v46);
      size = v33->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v33,
          (Il2CppObject *)v45,
          *(const MethodInfo_368BC6C **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
      }
      else
      {
        v57 = &items->obj.klass + size;
        v33->fields._size = size + 1;
        v57[4] = (Il2CppClass *)v53;
        sub_1C3B708((PartyOrganizationUtility_o *)(v57 + 4), v53, v47, v48, v49, v50, v51, v52);
      }
    }
  }
  v58 = Enumerator->klass;
  v59 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v60 = &v58->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v60 - 1) != System_IDisposable_TypeInfo )
    {
      --v59;
      v60 += 4;
      if ( !v59 )
        goto LABEL_33;
    }
    v61 = (__int64)&v58->vtable[*v60].method;
  }
  else
  {
LABEL_33:
    v61 = sub_1C8D744(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  Instance = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v61)(
                               Enumerator,
                               *(_QWORD *)(v61 + 8));
  v62 = UserQuestMaster___c_TypeInfo;
  if ( !UserQuestMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserQuestMaster___c_TypeInfo);
    v62 = UserQuestMaster___c_TypeInfo;
  }
  _9__11_0 = (System_Comparison_T__o *)v62->static_fields->__9__11_0;
  if ( !_9__11_0 )
  {
    if ( !v62->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v62);
      v62 = UserQuestMaster___c_TypeInfo;
    }
    v64 = (Il2CppObject *)v62->static_fields->__9;
    _9__11_0 = (System_Comparison_T__o *)sub_1C3B9B0(System_Comparison_UserQuestEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__11_0,
      v64,
      Method_UserQuestMaster___c__GetLatestMainScenarioLastQuest_b__11_0__,
      0LL);
    static_fields = UserQuestMaster___c_TypeInfo->static_fields;
    static_fields->__9__11_0 = (struct System_Comparison_UserQuestEntity__o *)_9__11_0;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&static_fields->__9__11_0,
      (int64_t)_9__11_0,
      v66,
      v67,
      v68,
      v69,
      v70,
      v71);
  }
  if ( !v33 )
LABEL_67:
    sub_1C3B9C0(Instance, v31);
  System_Collections_Generic_List_object___Sort_57202480(
    v33,
    _9__11_0,
    (const MethodInfo_368D730 *)Method_System_Collections_Generic_List_UserQuestEntity__Sort__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v96,
    v33,
    (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_UserQuestEntity__GetEnumerator__);
  v97 = v96;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v97,
            (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__MoveNext__) )
  {
    v72 = sub_1C3B9B0(UserQuestMaster___c__DisplayClass11_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v72, 0LL);
    if ( !v72 )
      sub_1C3B9C0(v73, v74);
    current = v97.fields._current;
    *(_QWORD *)(v72 + 16) = v97.fields._current;
    v82 = v72 + 16;
    sub_1C3B708((PartyOrganizationUtility_o *)(v72 + 16), (int64_t)current, v75, v76, v77, v78, v79, v80);
    if ( !*(_QWORD *)(v72 + 16) )
      sub_1C3B9C0(v83, v84);
    if ( !MasterData_object )
      sub_1C3B9C0(v83, v84);
    QuestEntity = QuestMaster__getQuestEntity(
                    (QuestMaster_o *)MasterData_object,
                    *(_DWORD *)(*(_QWORD *)(v72 + 16) + 32LL),
                    0LL);
    if ( QuestEntity )
    {
      v86 = (System_Func_int__bool__o *)sub_1C3B9B0(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(
        v86,
        (Il2CppObject *)v72,
        Method_UserQuestMaster___c__DisplayClass11_0__GetLatestMainScenarioLastQuest_b__1__,
        0LL);
      if ( BasicHelper__Any_int_(
             (System_Collections_Generic_List_T__o *)materialLatestClearList,
             (System_Func_T__bool__o *)v86,
             (const MethodInfo_2FDA848 *)Method_BasicHelper_Any_int___) )
      {
        goto LABEL_60;
      }
      TypeFlag = QuestEntity__GetTypeFlag(QuestEntity, 0LL);
      if ( (_DWORD)TypeFlag == 2 )
      {
        if ( QuestEntity->fields.chapterId )
          goto LABEL_57;
        if ( !*(_QWORD *)v82 )
          sub_1C3B9C0(TypeFlag, v88);
        if ( *(_DWORD *)(*(_QWORD *)v82 + 32LL) <= v94 )
        {
LABEL_57:
          v89 = SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_QuestTree__get_Instance__);
          if ( !*(_QWORD *)v82 )
            sub_1C3B9C0(v89, v90);
          if ( !v89 )
            sub_1C3B9C0(0LL, v90);
          WarID_ByQuestID = QuestTree__GetWarID_ByQuestID((QuestTree_o *)v89, *(_DWORD *)(*(_QWORD *)v82 + 32LL), 0LL);
          v92 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v92 = BalanceConfig_TypeInfo;
          }
          if ( WarID_ByQuestID < v92->static_fields->PowerUpQuestWarId )
            goto LABEL_60;
        }
      }
    }
  }
  QuestEntity = 0LL;
LABEL_60:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v97,
    (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__Dispose__);
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
  Il2CppObject *Instance; // x0
  __int64 v31; // x1
  Il2CppObject *MasterData_object; // x20
  System_Collections_Generic_List_object__o *v33; // x22
  System_Collections_ObjectModel_Collection_T__o *v34; // x8
  __int64 v35; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x23
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v38; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v41; // x8
  __int64 v42; // x9
  int32_t *v43; // x10
  __int64 v44; // x0
  Il2CppObject *v45; // x0
  __int64 v46; // x1
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  int64_t v53; // x8
  struct System_Object_array *items; // x9
  _QWORD *v55; // x10
  __int64 size; // x11
  Il2CppClass **v57; // x0
  System_Collections_Generic_IEnumerator_T__c *v58; // x8
  __int64 v59; // x9
  int32_t *v60; // x10
  __int64 v61; // x0
  UserQuestMaster___c_c *v62; // x8
  System_Comparison_T__o *_9__10_0; // x23
  Il2CppObject *v64; // x24
  struct UserQuestMaster___c_StaticFields *static_fields; // x0
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  __int64 v72; // x24
  __int64 v73; // x0
  __int64 v74; // x1
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7
  Il2CppObject *current; // x1
  __int64 v82; // x23
  __int64 v83; // x0
  __int64 v84; // x1
  QuestEntity_o *QuestEntity; // x22
  System_Func_int__bool__o *v86; // x25
  __int64 TypeFlag; // x0
  __int64 v88; // x1
  Il2CppObject *v89; // x0
  __int64 v90; // x1
  int32_t WarID_ByQuestID; // w23
  BalanceConfig_c *v92; // x0
  int v94; // [xsp+Ch] [xbp-A4h]
  System_Collections_Generic_List_Enumerator_object__o v96; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v97; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4C22DA2 & 1) == 0 )
  {
    sub_1C3B764(&BalanceConfig_TypeInfo, userId);
    sub_1C3B764(&Method_BasicHelper_Any_int___, v6);
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_UserQuestEntity__GetEnumerator__, v7);
    sub_1C3B764(&System_Comparison_UserQuestEntity__TypeInfo, v8);
    sub_1C3B764(&Method_DataManager_GetMasterData_ConstantMaster___, v9);
    sub_1C3B764(&Method_DataManager_GetMasterData_QuestMaster___, v10);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__Dispose__, v11);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__MoveNext__, v12);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__get_Current__, v13);
    sub_1C3B764(&System_Func_int__bool__TypeInfo, v14);
    sub_1C3B764(&System_IDisposable_TypeInfo, v15);
    sub_1C3B764(&System_Collections_Generic_IEnumerator_UserQuestEntity__TypeInfo, v16);
    sub_1C3B764(&System_Collections_IEnumerator_TypeInfo, v17);
    sub_1C3B764(&Method_System_Collections_Generic_List_UserQuestEntity__Add__, v18);
    sub_1C3B764(&Method_System_Collections_Generic_List_UserQuestEntity__GetEnumerator__, v19);
    sub_1C3B764(&Method_System_Collections_Generic_List_UserQuestEntity__Sort__, v20);
    sub_1C3B764(&Method_System_Collections_Generic_List_UserQuestEntity___ctor__, v21);
    sub_1C3B764(&System_Collections_Generic_List_UserQuestEntity__TypeInfo, v22);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23);
    sub_1C3B764(&Method_SingletonTemplate_QuestTree__get_Instance__, v24);
    sub_1C3B764(&Method_UserQuestMaster___c__GetMainScenarioLatestClear_b__10_0__, v25);
    sub_1C3B764(&Method_UserQuestMaster___c__DisplayClass10_0__GetMainScenarioLatestClear_b__1__, v26);
    sub_1C3B764(&UserQuestMaster___c__DisplayClass10_0_TypeInfo, v27);
    sub_1C3B764(&UserQuestMaster___c_TypeInfo, v28);
    sub_1C3B764(&StringLiteral_3485/*"CLOSE_ITEMLIST"*/, v29);
    byte_4C22DA2 = 1;
  }
  memset(&v97, 0, sizeof(v97));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_66;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_QuestMaster___);
  v33 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_UserQuestEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v33,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_UserQuestEntity___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_66;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ConstantMaster___);
  if ( !Instance )
    goto LABEL_66;
  Instance = (Il2CppObject *)ConstantMaster__GetValue(
                               (ConstantMaster_o *)Instance,
                               (System_String_o *)StringLiteral_3485/*"CLOSE_ITEMLIST"*/,
                               0LL);
  v34 = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  v94 = (int)Instance;
  if ( !v34 )
    goto LABEL_66;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 v34,
                 (const MethodInfo_32357CC *)Method_System_Collections_ObjectModel_Collection_UserQuestEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C3B9C0(0LL, v35);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v38 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v38;
        p_offset += 4;
        if ( !v38 )
          goto LABEL_12;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_12:
      p_method = sub_1C8D744(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v41 = Enumerator->klass;
    v42 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v43 = &v41->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_UserQuestEntity__c **)v43 - 1) != System_Collections_Generic_IEnumerator_UserQuestEntity__TypeInfo )
      {
        --v42;
        v43 += 4;
        if ( !v42 )
          goto LABEL_19;
      }
      v44 = (__int64)&v41->vtable[*v43].method;
    }
    else
    {
LABEL_19:
      v44 = sub_1C8D744(Enumerator, System_Collections_Generic_IEnumerator_UserQuestEntity__TypeInfo, 0LL);
    }
    v45 = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v44)(
                            Enumerator,
                            *(_QWORD *)(v44 + 8));
    v53 = (int64_t)v45;
    if ( !v45 )
      sub_1C3B9C0(0LL, v46);
    if ( v45[1].monitor == (void *)userId )
    {
      if ( !v33 )
        sub_1C3B9C0(v45, v46);
      items = v33->fields._items;
      v55 = Method_System_Collections_Generic_List_UserQuestEntity__Add__;
      ++v33->fields._version;
      if ( !items )
        sub_1C3B9C0(v45, v46);
      size = v33->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v33,
          v45,
          *(const MethodInfo_368BC6C **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
      }
      else
      {
        v57 = &items->obj.klass + size;
        v33->fields._size = size + 1;
        v57[4] = (Il2CppClass *)v53;
        sub_1C3B708((PartyOrganizationUtility_o *)(v57 + 4), v53, v47, v48, v49, v50, v51, v52);
      }
    }
  }
  v58 = Enumerator->klass;
  v59 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v60 = &v58->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v60 - 1) != System_IDisposable_TypeInfo )
    {
      --v59;
      v60 += 4;
      if ( !v59 )
        goto LABEL_32;
    }
    v61 = (__int64)&v58->vtable[*v60].method;
  }
  else
  {
LABEL_32:
    v61 = sub_1C8D744(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  Instance = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v61)(
                               Enumerator,
                               *(_QWORD *)(v61 + 8));
  v62 = UserQuestMaster___c_TypeInfo;
  if ( !UserQuestMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserQuestMaster___c_TypeInfo);
    v62 = UserQuestMaster___c_TypeInfo;
  }
  _9__10_0 = (System_Comparison_T__o *)v62->static_fields->__9__10_0;
  if ( !_9__10_0 )
  {
    if ( !v62->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v62);
      v62 = UserQuestMaster___c_TypeInfo;
    }
    v64 = (Il2CppObject *)v62->static_fields->__9;
    _9__10_0 = (System_Comparison_T__o *)sub_1C3B9B0(System_Comparison_UserQuestEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__10_0,
      v64,
      Method_UserQuestMaster___c__GetMainScenarioLatestClear_b__10_0__,
      0LL);
    static_fields = UserQuestMaster___c_TypeInfo->static_fields;
    static_fields->__9__10_0 = (struct System_Comparison_UserQuestEntity__o *)_9__10_0;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&static_fields->__9__10_0,
      (int64_t)_9__10_0,
      v66,
      v67,
      v68,
      v69,
      v70,
      v71);
  }
  if ( !v33 )
LABEL_66:
    sub_1C3B9C0(Instance, v31);
  System_Collections_Generic_List_object___Sort_57202480(
    v33,
    _9__10_0,
    (const MethodInfo_368D730 *)Method_System_Collections_Generic_List_UserQuestEntity__Sort__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v96,
    v33,
    (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_UserQuestEntity__GetEnumerator__);
  v97 = v96;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v97,
            (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__MoveNext__) )
  {
    v72 = sub_1C3B9B0(UserQuestMaster___c__DisplayClass10_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v72, 0LL);
    if ( !v72 )
      sub_1C3B9C0(v73, v74);
    current = v97.fields._current;
    *(_QWORD *)(v72 + 16) = v97.fields._current;
    v82 = v72 + 16;
    sub_1C3B708((PartyOrganizationUtility_o *)(v72 + 16), (int64_t)current, v75, v76, v77, v78, v79, v80);
    if ( !*(_QWORD *)(v72 + 16) )
      sub_1C3B9C0(v83, v84);
    if ( !MasterData_object )
      sub_1C3B9C0(v83, v84);
    QuestEntity = QuestMaster__getQuestEntity(
                    (QuestMaster_o *)MasterData_object,
                    *(_DWORD *)(*(_QWORD *)(v72 + 16) + 32LL),
                    0LL);
    if ( QuestEntity )
    {
      v86 = (System_Func_int__bool__o *)sub_1C3B9B0(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(
        v86,
        (Il2CppObject *)v72,
        Method_UserQuestMaster___c__DisplayClass10_0__GetMainScenarioLatestClear_b__1__,
        0LL);
      if ( BasicHelper__Any_int_(
             (System_Collections_Generic_List_T__o *)materialLatestClearList,
             (System_Func_T__bool__o *)v86,
             (const MethodInfo_2FDA848 *)Method_BasicHelper_Any_int___) )
      {
        goto LABEL_59;
      }
      TypeFlag = QuestEntity__GetTypeFlag(QuestEntity, 0LL);
      if ( (_DWORD)TypeFlag == 2 )
      {
        if ( QuestEntity->fields.chapterId )
          goto LABEL_56;
        if ( !*(_QWORD *)v82 )
          sub_1C3B9C0(TypeFlag, v88);
        if ( *(_DWORD *)(*(_QWORD *)v82 + 32LL) <= v94 )
        {
LABEL_56:
          v89 = SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_QuestTree__get_Instance__);
          if ( !*(_QWORD *)v82 )
            sub_1C3B9C0(v89, v90);
          if ( !v89 )
            sub_1C3B9C0(0LL, v90);
          WarID_ByQuestID = QuestTree__GetWarID_ByQuestID((QuestTree_o *)v89, *(_DWORD *)(*(_QWORD *)v82 + 32LL), 0LL);
          v92 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v92 = BalanceConfig_TypeInfo;
          }
          if ( WarID_ByQuestID < v92->static_fields->PowerUpQuestWarId )
            goto LABEL_59;
        }
      }
    }
  }
  QuestEntity = 0LL;
LABEL_59:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v97,
    (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__Dispose__);
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
    sub_1C3B9C0(this, userId);
  v4 = *(_QWORD *)&questIds->max_length;
  v6 = (int)v4 > 0;
  if ( (int)v4 >= 1 )
  {
    v8 = this;
    v9 = 0LL;
    do
    {
      if ( v9 >= (unsigned int)v4 )
        sub_1C3B9C8(this, userId);
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
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  Il2CppObject *PK; // x2

  if ( (byte_4C22D9C & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string__TryGetEntity__, entity);
    sub_1C3B764(&NetworkManager_TypeInfo, v9);
    sub_1C3B764(&Method_SingletonTemplate_QuestTree__get_Instance__, v10);
    sub_1C3B764(&UserQuestEntity_TypeInfo, v11);
    byte_4C22D9C = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
    sub_1C3B9C0(0LL, v13);
  if ( !BYTE1(Instance[4].monitor) )
    goto LABEL_19;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C1C955 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, v13);
    byte_4C1C955 = 1;
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
    sub_1C3B708((PartyOrganizationUtility_o *)entity, (int64_t)CacheById, v17, v18, v19, v20, v21, v22);
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
             (const MethodInfo_329F94C *)Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string__TryGetEntity__);
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
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  System_String_o *userIdString; // x20
  System_String_o *v17; // x0
  System_String_o *v18; // x20
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *lookup; // x0
  __int64 v20; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *v22; // x19
  __int64 v23; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__UserQuestEntity__c **p_offset; // x10
  __int64 p_method; // x0
  __int64 v27; // [xsp+0h] [xbp-40h] BYREF
  int32_t v28; // [xsp+Ch] [xbp-34h] BYREF
  int64_t v29; // [xsp+18h] [xbp-28h] BYREF

  v29 = userId;
  v28 = questId;
  if ( (byte_4C22D9E & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string__get_lookup__, userId);
    sub_1C3B764(&System_Collections_Generic_IReadOnlyDictionary_string__UserQuestEntity__TypeInfo, v6);
    sub_1C3B764(&StringLiteral_1525/*"</Exponent></RSAKeyValue>"*/, v7);
    byte_4C22D9E = 1;
  }
  v27 = 0LL;
  if ( this->fields.oldId != userId )
  {
    this->fields.oldId = userId;
    v8 = System_Int64__ToString((int64_t)&v29, 0LL);
    v9 = System_String__Concat_63368612(v8, (System_String_o *)StringLiteral_1525/*"</Exponent></RSAKeyValue>"*/, 0LL);
    this->fields.userIdString = v9;
    sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.userIdString, (int64_t)v9, v10, v11, v12, v13, v14, v15);
  }
  userIdString = this->fields.userIdString;
  v17 = System_Int32__ToString((int32_t)&v28, 0LL);
  v18 = System_String__Concat_63368612(userIdString, v17, 0LL);
  lookup = DataMasterBase_object__object__object___get_lookup(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             (const MethodInfo_329D6F4 *)Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string__get_lookup__);
  if ( !lookup )
    goto LABEL_16;
  klass = lookup->klass;
  v22 = lookup;
  v23 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__UserQuestEntity__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__UserQuestEntity__TypeInfo )
    {
      --v23;
      p_offset += 2;
      if ( !v23 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
  }
  else
  {
LABEL_10:
    p_method = sub_1C8D744(
                 lookup,
                 System_Collections_Generic_IReadOnlyDictionary_string__UserQuestEntity__TypeInfo,
                 1LL);
  }
  lookup = (System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *, System_String_o *, __int64 *, _QWORD))p_method)(
                                                                                  v22,
                                                                                  v18,
                                                                                  &v27,
                                                                                  *(_QWORD *)(p_method + 8));
  if ( ((unsigned __int8)lookup & 1) != 0 )
  {
    if ( v27 )
      return *(_DWORD *)(v27 + 56);
LABEL_16:
    sub_1C3B9C0(lookup, v20);
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

  if ( (byte_4C22D9F & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_UserQuestEntity__get_Count__, userId);
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_UserQuestEntity__get_Item__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__Remove__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_int___ctor___77852768, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__get_Count__, v10);
    sub_1C3B764(&System_Collections_Generic_List_int__TypeInfo, v11);
    byte_4C22D9F = 1;
  }
  v12 = (System_Collections_Generic_List_int__o *)sub_1C3B9B0(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_57074972(
    v12,
    (System_Collections_Generic_IEnumerable_T__o *)questIds,
    (const MethodInfo_366E51C *)Method_System_Collections_Generic_List_int___ctor___77852768);
  list = this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_32351F4 *)Method_System_Collections_ObjectModel_Collection_UserQuestEntity__get_Count__);
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
               (const MethodInfo_3235284 *)Method_System_Collections_ObjectModel_Collection_UserQuestEntity__get_Item__);
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
              (const MethodInfo_3670144 *)Method_System_Collections_Generic_List_int__Remove__)
        || (v17 += v19[14], v12->fields._size) )
      {
LABEL_19:
        if ( v16 != ++v18 )
          continue;
      }
      return v17;
    }
LABEL_16:
    sub_1C3B9C0(list, v13);
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
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  System_String_o *userIdString; // x20
  System_String_o *v17; // x0
  System_String_o *v18; // x20
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *lookup; // x0
  __int64 v20; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *v22; // x19
  __int64 v23; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__UserQuestEntity__c **p_offset; // x10
  __int64 p_method; // x0
  __int64 v27; // [xsp+0h] [xbp-40h] BYREF
  int32_t v28; // [xsp+Ch] [xbp-34h] BYREF
  int64_t v29; // [xsp+18h] [xbp-28h] BYREF

  v29 = userId;
  v28 = questId;
  if ( (byte_4C22DA0 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string__get_lookup__, userId);
    sub_1C3B764(&System_Collections_Generic_IReadOnlyDictionary_string__UserQuestEntity__TypeInfo, v6);
    sub_1C3B764(&StringLiteral_1525/*"</Exponent></RSAKeyValue>"*/, v7);
    byte_4C22DA0 = 1;
  }
  v27 = 0LL;
  if ( this->fields.oldId != userId )
  {
    this->fields.oldId = userId;
    v8 = System_Int64__ToString((int64_t)&v29, 0LL);
    v9 = System_String__Concat_63368612(v8, (System_String_o *)StringLiteral_1525/*"</Exponent></RSAKeyValue>"*/, 0LL);
    this->fields.userIdString = v9;
    sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.userIdString, (int64_t)v9, v10, v11, v12, v13, v14, v15);
  }
  userIdString = this->fields.userIdString;
  v17 = System_Int32__ToString((int32_t)&v28, 0LL);
  v18 = System_String__Concat_63368612(userIdString, v17, 0LL);
  lookup = DataMasterBase_object__object__object___get_lookup(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             (const MethodInfo_329D6F4 *)Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string__get_lookup__);
  if ( !lookup )
    goto LABEL_16;
  klass = lookup->klass;
  v22 = lookup;
  v23 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__UserQuestEntity__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__UserQuestEntity__TypeInfo )
    {
      --v23;
      p_offset += 2;
      if ( !v23 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
  }
  else
  {
LABEL_10:
    p_method = sub_1C8D744(
                 lookup,
                 System_Collections_Generic_IReadOnlyDictionary_string__UserQuestEntity__TypeInfo,
                 1LL);
  }
  lookup = (System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *, System_String_o *, __int64 *, _QWORD))p_method)(
                                                                                  v22,
                                                                                  v18,
                                                                                  &v27,
                                                                                  *(_QWORD *)(p_method + 8));
  if ( ((unsigned __int8)lookup & 1) != 0 )
  {
    if ( v27 )
      return *(_DWORD *)(v27 + 40);
LABEL_16:
    sub_1C3B9C0(lookup, v20);
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

  if ( (byte_4C22DA1 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_UserQuestEntity__get_Count__, userId);
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_UserQuestEntity__get_Item__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__Remove__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_int___ctor___77852768, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__get_Count__, v10);
    sub_1C3B764(&System_Collections_Generic_List_int__TypeInfo, v11);
    byte_4C22DA1 = 1;
  }
  v12 = (System_Collections_Generic_List_int__o *)sub_1C3B9B0(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_57074972(
    v12,
    (System_Collections_Generic_IEnumerable_T__o *)questIds,
    (const MethodInfo_366E51C *)Method_System_Collections_Generic_List_int___ctor___77852768);
  list = this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_32351F4 *)Method_System_Collections_ObjectModel_Collection_UserQuestEntity__get_Count__);
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
               (const MethodInfo_3235284 *)Method_System_Collections_ObjectModel_Collection_UserQuestEntity__get_Item__);
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
              (const MethodInfo_3670144 *)Method_System_Collections_Generic_List_int__Remove__)
        || (v17 += v19[10], v12->fields._size) )
      {
LABEL_19:
        if ( v16 != ++v18 )
          continue;
      }
      return v17;
    }
LABEL_16:
    sub_1C3B9C0(list, v13);
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
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  System_String_o *userIdString; // x20
  System_String_o *v25; // x0
  System_String_o *v26; // x20
  __int64 v27; // x8
  _BYTE *v28; // x19
  __int64 v29; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__UserQuestEntity__c **v30; // x10
  __int64 v31; // x0
  UserQuestEntity_o *v32; // [xsp+8h] [xbp-48h] BYREF
  int32_t v33; // [xsp+14h] [xbp-3Ch] BYREF
  int64_t v34; // [xsp+18h] [xbp-38h] BYREF

  v34 = userId;
  v33 = questId;
  if ( (byte_4C22D9D & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string__get_lookup__, userId);
    sub_1C3B764(&System_Collections_Generic_IReadOnlyDictionary_string__UserQuestEntity__TypeInfo, v7);
    sub_1C3B764(&NetworkManager_TypeInfo, v8);
    sub_1C3B764(&Method_SingletonTemplate_QuestTree__get_Instance__, v9);
    sub_1C3B764(&StringLiteral_1525/*"</Exponent></RSAKeyValue>"*/, v10);
    byte_4C22D9D = 1;
  }
  v32 = 0LL;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  if ( Instance[73] )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C1C955 )
    {
      sub_1C3B764(&NetworkManager_TypeInfo, v12);
      byte_4C1C955 = 1;
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
    v16 = System_Int64__ToString((int64_t)&v34, 0LL);
    v17 = System_String__Concat_63368612(v16, (System_String_o *)StringLiteral_1525/*"</Exponent></RSAKeyValue>"*/, 0LL);
    this->fields.userIdString = v17;
    sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.userIdString, (int64_t)v17, v18, v19, v20, v21, v22, v23);
  }
  userIdString = this->fields.userIdString;
  v25 = System_Int32__ToString((int32_t)&v33, 0LL);
  v26 = System_String__Concat_63368612(userIdString, v25, 0LL);
  Instance = DataMasterBase_object__object__object___get_lookup(
               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
               (const MethodInfo_329D6F4 *)Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string__get_lookup__);
  if ( !Instance )
LABEL_25:
    sub_1C3B9C0(Instance, v12);
  v27 = *(_QWORD *)Instance;
  v28 = Instance;
  v29 = *(unsigned __int16 *)(*(_QWORD *)Instance + 302LL);
  if ( *(_WORD *)(*(_QWORD *)Instance + 302LL) )
  {
    v30 = (System_Collections_Generic_IReadOnlyDictionary_string__UserQuestEntity__c **)(*(_QWORD *)(v27 + 176) + 8LL);
    while ( *(v30 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__UserQuestEntity__TypeInfo )
    {
      --v29;
      v30 += 2;
      if ( !v29 )
        goto LABEL_20;
    }
    v31 = v27 + 16LL * (*(_DWORD *)v30 + 1) + 312;
  }
  else
  {
LABEL_20:
    v31 = sub_1C8D744(Instance, System_Collections_Generic_IReadOnlyDictionary_string__UserQuestEntity__TypeInfo, 1LL);
  }
  if ( ((*(__int64 (__fastcall **)(_BYTE *, System_String_o *, UserQuestEntity_o **, _QWORD))v31)(
          v28,
          v26,
          &v32,
          *(_QWORD *)(v31 + 8)) & 1) != 0 )
    return v32;
  else
    return 0LL;
}


void __fastcall UserQuestMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4C22DA7 & 1) == 0 )
  {
    sub_1C3B764(&UserQuestMaster___c_TypeInfo, v1);
    byte_4C22DA7 = 1;
  }
  v2 = (Il2CppObject *)sub_1C3B9B0(UserQuestMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  UserQuestMaster___c_TypeInfo->static_fields->__9 = (struct UserQuestMaster___c_o *)v2;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)UserQuestMaster___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C3B9C0(this, x);
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
    sub_1C3B9C0(this, x);
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
    sub_1C3B9C0(this, a);
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
    sub_1C3B9C0(this, a);
  return usrEnt->fields.questId == a;
}