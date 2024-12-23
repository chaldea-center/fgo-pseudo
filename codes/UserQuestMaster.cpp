void __fastcall UserQuestMaster___ctor(UserQuestMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B67992 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string___ctor__, method);
    byte_4B67992 = 1;
  }
  this->fields.oldId = -1LL;
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    62,
    (const MethodInfo_31FDADC *)Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string___ctor__);
}


void __fastcall UserQuestMaster__CreateCache(UserQuestMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_int__object__o *v9; // x21
  struct System_Collections_Generic_Dictionary_int__UserQuestEntity__o **p_idCache; // x20
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  __int64 v17; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v19; // w21
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x10
  Il2CppObject *v22; // x23

  if ( (byte_4B6799D & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__UserQuestEntity___ctor__, v4);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__UserQuestEntity__set_Item__, v5);
    sub_1BE4ACC(&System_Collections_Generic_Dictionary_int__UserQuestEntity__TypeInfo, v6);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v7);
    sub_1BE4ACC(&UserQuestEntity_TypeInfo, v8);
    byte_4B6799D = 1;
  }
  if ( this->fields.isDirty )
  {
    this->fields.isDirty = 0;
    v9 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BE4D18(System_Collections_Generic_Dictionary_int__UserQuestEntity__TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v9,
      (const MethodInfo_324FE94 *)Method_System_Collections_Generic_Dictionary_int__UserQuestEntity___ctor__);
    this->fields.idCache = (struct System_Collections_Generic_Dictionary_int__UserQuestEntity__o *)v9;
    p_idCache = &this->fields.idCache;
    sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.idCache, (int64_t)v9, v11, v12, v13, v14, v15, v16);
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
LABEL_25:
      sub_1BE4D28(list, v17);
    v19 = 0;
    while ( v19 < System_Collections_ObjectModel_Collection_object___get_Count(
                    list,
                    (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( list )
      {
        Item = System_Collections_ObjectModel_Collection_object___get_Item(
                 list,
                 v19,
                 (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( Item
          && (methodPtr_low = LOBYTE(UserQuestEntity_TypeInfo->vtable._0_Equals.methodPtr),
              LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low) )
        {
          if ( (UserQuestEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == UserQuestEntity_TypeInfo )
            v22 = Item;
          else
            v22 = 0LL;
        }
        else
        {
          v22 = 0LL;
        }
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4B61717 )
        {
          sub_1BE4ACC(&NetworkManager_TypeInfo, v17);
          byte_4B61717 = 1;
        }
        list = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          list = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager_TypeInfo;
        }
        if ( v22 )
        {
          if ( list[7].fields.items[4].klass == v22[1].monitor )
          {
            list = (System_Collections_ObjectModel_Collection_T__o *)*p_idCache;
            if ( !*p_idCache )
              goto LABEL_25;
            System_Collections_Generic_Dictionary_int__object___set_Item(
              (System_Collections_Generic_Dictionary_int__object__o *)list,
              (int32_t)v22[2].klass,
              v22,
              (const MethodInfo_3250854 *)Method_System_Collections_Generic_Dictionary_int__UserQuestEntity__set_Item__);
          }
          list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
          ++v19;
          if ( list )
            continue;
        }
      }
      goto LABEL_25;
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

  if ( (byte_4B6799C & 1) == 0 )
  {
    sub_1BE4ACC(&NetworkManager_TypeInfo, *(_QWORD *)&questId);
    sub_1BE4ACC(&UserQuestEntity_TypeInfo, v8);
    byte_4B6799C = 1;
  }
  if ( !questId )
    return 0LL;
  v9 = (UserQuestEntity_o *)sub_1BE4D18(UserQuestEntity_TypeInfo);
  UserQuestEntity___ctor(v9, v10);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B61717 )
  {
    sub_1BE4ACC(&NetworkManager_TypeInfo, v11);
    byte_4B61717 = 1;
  }
  v12 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v12 = NetworkManager_TypeInfo;
  }
  if ( !v9 )
    sub_1BE4D28(v12, v11);
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
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.idCache, 0LL, v2, v3, v4, v5, v6, v7);
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

  if ( (byte_4B6799E & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__UserQuestEntity__TryGetValue__, *(_QWORD *)&id);
    byte_4B6799E = 1;
  }
  value = 0LL;
  UserQuestMaster__CreateCache(this, *(const MethodInfo **)&id);
  idCache = this->fields.idCache;
  if ( !idCache )
    sub_1BE4D28(0LL, v5);
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         (System_Collections_Generic_Dictionary_int__object__o *)idCache,
         id,
         &value,
         (const MethodInfo_3251FF4 *)Method_System_Collections_Generic_Dictionary_int__UserQuestEntity__TryGetValue__) )
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

  if ( (byte_4B67993 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string__GetEntity__, userId);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v7);
    sub_1BE4ACC(&Method_SingletonTemplate_QuestTree__get_Instance__, v8);
    sub_1BE4ACC(&UserQuestEntity_TypeInfo, v9);
    byte_4B67993 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38291E8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
    sub_1BE4D28(0LL, v11);
  if ( BYTE1(Instance[4].monitor) )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4B61717 )
    {
      sub_1BE4ACC(&NetworkManager_TypeInfo, v11);
      byte_4B61717 = 1;
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
                                (const MethodInfo_31FDB1C *)Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string__GetEntity__);
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
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  int64_t v54; // x8
  UserQuestEntity_c *v55; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v58; // x10
  __int64 size; // x11
  Il2CppClass **v60; // x0
  System_Collections_Generic_IEnumerator_T__c *v61; // x8
  __int64 v62; // x9
  int32_t *v63; // x10
  __int64 v64; // x0
  UserQuestMaster___c_c *v65; // x8
  System_Comparison_T__o *_9__11_0; // x23
  Il2CppObject *v67; // x24
  struct UserQuestMaster___c_StaticFields *static_fields; // x0
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  __int64 v75; // x24
  __int64 v76; // x0
  __int64 v77; // x1
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  Il2CppObject *current; // x1
  __int64 v85; // x23
  __int64 v86; // x0
  __int64 v87; // x1
  QuestEntity_o *QuestEntity; // x22
  System_Func_int__bool__o *v89; // x25
  __int64 TypeFlag; // x0
  __int64 v91; // x1
  Il2CppObject *v92; // x0
  __int64 v93; // x1
  int32_t WarID_ByQuestID; // w23
  BalanceConfig_c *v95; // x0
  int v97; // [xsp+Ch] [xbp-A4h]
  System_Collections_Generic_List_Enumerator_object__o v99; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v100; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4B6799B & 1) == 0 )
  {
    sub_1BE4ACC(&BalanceConfig_TypeInfo, userId);
    sub_1BE4ACC(&Method_BasicHelper_Any_int___, v6);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v7);
    sub_1BE4ACC(&System_Comparison_UserQuestEntity__TypeInfo, v8);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ConstantMaster___, v9);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_QuestMaster___, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__Dispose__, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__MoveNext__, v12);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__get_Current__, v13);
    sub_1BE4ACC(&System_Func_int__bool__TypeInfo, v14);
    sub_1BE4ACC(&System_IDisposable_TypeInfo, v15);
    sub_1BE4ACC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v16);
    sub_1BE4ACC(&System_Collections_IEnumerator_TypeInfo, v17);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_UserQuestEntity__Add__, v18);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_UserQuestEntity__GetEnumerator__, v19);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_UserQuestEntity__Sort__, v20);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_UserQuestEntity___ctor__, v21);
    sub_1BE4ACC(&System_Collections_Generic_List_UserQuestEntity__TypeInfo, v22);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23);
    sub_1BE4ACC(&Method_SingletonTemplate_QuestTree__get_Instance__, v24);
    sub_1BE4ACC(&Method_UserQuestMaster___c__GetLatestMainScenarioLastQuest_b__11_0__, v25);
    sub_1BE4ACC(&Method_UserQuestMaster___c__DisplayClass11_0__GetLatestMainScenarioLastQuest_b__1__, v26);
    sub_1BE4ACC(&UserQuestMaster___c__DisplayClass11_0_TypeInfo, v27);
    sub_1BE4ACC(&UserQuestMaster___c_TypeInfo, v28);
    sub_1BE4ACC(&UserQuestEntity_TypeInfo, v29);
    sub_1BE4ACC(&StringLiteral_3482/*"CHAPTER_F_END_ID"*/, v30);
    byte_4B6799B = 1;
  }
  memset(&v100, 0, sizeof(v100));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_70;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_QuestMaster___);
  v34 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_UserQuestEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v34,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_UserQuestEntity___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_70;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ConstantMaster___);
  if ( !Instance )
    goto LABEL_70;
  Instance = (Il2CppObject *)ConstantMaster__GetValue(
                               (ConstantMaster_o *)Instance,
                               (System_String_o *)StringLiteral_3482/*"CHAPTER_F_END_ID"*/,
                               0LL);
  v35 = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  v97 = (int)Instance;
  if ( !v35 )
    goto LABEL_70;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 v35,
                 (const MethodInfo_319A36C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BE4D28(0LL, v36);
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
      p_method = sub_1C36AAC(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v45 = sub_1C36AAC(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v46 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v45)(
            Enumerator,
            *(_QWORD *)(v45 + 8));
    v54 = v46;
    if ( !v46 )
      goto LABEL_64;
    v55 = UserQuestEntity_TypeInfo;
    methodPtr_low = LOBYTE(UserQuestEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v46 + 304LL) < (unsigned int)methodPtr_low
      || *(UserQuestEntity_c **)(*(_QWORD *)(*(_QWORD *)v46 + 200LL) + 8 * methodPtr_low - 8) != UserQuestEntity_TypeInfo )
    {
      sub_1BE4FE8(v46);
LABEL_64:
      sub_1BE4D28(v46, v47);
    }
    if ( *(_QWORD *)(v46 + 24) == userId && *(_DWORD *)(v46 + 40) )
    {
      if ( !v34 )
        sub_1BE4D28(v46, UserQuestEntity_TypeInfo);
      items = v34->fields._items;
      v58 = Method_System_Collections_Generic_List_UserQuestEntity__Add__;
      ++v34->fields._version;
      if ( !items )
        sub_1BE4D28(v46, v55);
      size = v34->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v34,
          (Il2CppObject *)v46,
          *(const MethodInfo_35EC224 **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
      }
      else
      {
        v60 = &items->obj.klass + size;
        v34->fields._size = size + 1;
        v60[4] = (Il2CppClass *)v54;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v60 + 4), v54, v48, v49, v50, v51, v52, v53);
      }
    }
  }
  v61 = Enumerator->klass;
  v62 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v63 = &v61->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v63 - 1) != System_IDisposable_TypeInfo )
    {
      --v62;
      v63 += 4;
      if ( !v62 )
        goto LABEL_35;
    }
    v64 = (__int64)&v61->vtable[*v63].method;
  }
  else
  {
LABEL_35:
    v64 = sub_1C36AAC(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  Instance = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v64)(
                               Enumerator,
                               *(_QWORD *)(v64 + 8));
  v65 = UserQuestMaster___c_TypeInfo;
  if ( !UserQuestMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserQuestMaster___c_TypeInfo);
    v65 = UserQuestMaster___c_TypeInfo;
  }
  _9__11_0 = (System_Comparison_T__o *)v65->static_fields->__9__11_0;
  if ( !_9__11_0 )
  {
    if ( !v65->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v65);
      v65 = UserQuestMaster___c_TypeInfo;
    }
    v67 = (Il2CppObject *)v65->static_fields->__9;
    _9__11_0 = (System_Comparison_T__o *)sub_1BE4D18(System_Comparison_UserQuestEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__11_0,
      v67,
      Method_UserQuestMaster___c__GetLatestMainScenarioLastQuest_b__11_0__,
      0LL);
    static_fields = UserQuestMaster___c_TypeInfo->static_fields;
    static_fields->__9__11_0 = (struct System_Comparison_UserQuestEntity__o *)_9__11_0;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&static_fields->__9__11_0,
      (int64_t)_9__11_0,
      v69,
      v70,
      v71,
      v72,
      v73,
      v74);
  }
  if ( !v34 )
LABEL_70:
    sub_1BE4D28(Instance, v32);
  System_Collections_Generic_List_object___Sort_56548584(
    v34,
    _9__11_0,
    (const MethodInfo_35EDCE8 *)Method_System_Collections_Generic_List_UserQuestEntity__Sort__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v99,
    v34,
    (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_UserQuestEntity__GetEnumerator__);
  v100 = v99;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v100,
            (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__MoveNext__) )
  {
    v75 = sub_1BE4D18(UserQuestMaster___c__DisplayClass11_0_TypeInfo);
    UserQuestMaster___c__DisplayClass11_0___ctor((UserQuestMaster___c__DisplayClass11_0_o *)v75, 0LL);
    if ( !v75 )
      sub_1BE4D28(v76, v77);
    current = v100.fields._current;
    *(_QWORD *)(v75 + 16) = v100.fields._current;
    v85 = v75 + 16;
    sub_1BE4A70((PartyOrganizationUtility_o *)(v75 + 16), (int64_t)current, v78, v79, v80, v81, v82, v83);
    if ( !*(_QWORD *)(v75 + 16) )
      sub_1BE4D28(v86, v87);
    if ( !MasterData_object )
      sub_1BE4D28(v86, v87);
    QuestEntity = QuestMaster__getQuestEntity(
                    (QuestMaster_o *)MasterData_object,
                    *(_DWORD *)(*(_QWORD *)(v75 + 16) + 32LL),
                    0LL);
    if ( QuestEntity )
    {
      v89 = (System_Func_int__bool__o *)sub_1BE4D18(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(
        v89,
        (Il2CppObject *)v75,
        Method_UserQuestMaster___c__DisplayClass11_0__GetLatestMainScenarioLastQuest_b__1__,
        0LL);
      if ( BasicHelper__Any_int_(
             (System_Collections_Generic_List_T__o *)materialLatestClearList,
             (System_Func_T__bool__o *)v89,
             (const MethodInfo_2F43D50 *)Method_BasicHelper_Any_int___) )
      {
        goto LABEL_62;
      }
      TypeFlag = QuestEntity__GetTypeFlag(QuestEntity, 0LL);
      if ( (_DWORD)TypeFlag == 2 )
      {
        if ( QuestEntity->fields.chapterId )
          goto LABEL_59;
        if ( !*(_QWORD *)v85 )
          sub_1BE4D28(TypeFlag, v91);
        if ( *(_DWORD *)(*(_QWORD *)v85 + 32LL) <= v97 )
        {
LABEL_59:
          v92 = SingletonTemplate_object___get_Instance((const MethodInfo_38291E8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
          if ( !*(_QWORD *)v85 )
            sub_1BE4D28(v92, v93);
          if ( !v92 )
            sub_1BE4D28(0LL, v93);
          WarID_ByQuestID = QuestTree__GetWarID_ByQuestID((QuestTree_o *)v92, *(_DWORD *)(*(_QWORD *)v85 + 32LL), 0LL);
          v95 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v95 = BalanceConfig_TypeInfo;
          }
          if ( WarID_ByQuestID < v95->static_fields->PowerUpQuestWarId )
            goto LABEL_62;
        }
      }
    }
  }
  QuestEntity = 0LL;
LABEL_62:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v100,
    (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__Dispose__);
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
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  int64_t v54; // x8
  UserQuestEntity_c *v55; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v58; // x10
  __int64 size; // x11
  Il2CppClass **v60; // x0
  System_Collections_Generic_IEnumerator_T__c *v61; // x8
  __int64 v62; // x9
  int32_t *v63; // x10
  __int64 v64; // x0
  UserQuestMaster___c_c *v65; // x8
  System_Comparison_T__o *_9__10_0; // x23
  Il2CppObject *v67; // x24
  struct UserQuestMaster___c_StaticFields *static_fields; // x0
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  __int64 v75; // x24
  __int64 v76; // x0
  __int64 v77; // x1
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  Il2CppObject *current; // x1
  __int64 v85; // x23
  __int64 v86; // x0
  __int64 v87; // x1
  QuestEntity_o *QuestEntity; // x22
  System_Func_int__bool__o *v89; // x25
  __int64 TypeFlag; // x0
  __int64 v91; // x1
  Il2CppObject *v92; // x0
  __int64 v93; // x1
  int32_t WarID_ByQuestID; // w23
  BalanceConfig_c *v95; // x0
  int v97; // [xsp+Ch] [xbp-A4h]
  System_Collections_Generic_List_Enumerator_object__o v99; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v100; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4B6799A & 1) == 0 )
  {
    sub_1BE4ACC(&BalanceConfig_TypeInfo, userId);
    sub_1BE4ACC(&Method_BasicHelper_Any_int___, v6);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v7);
    sub_1BE4ACC(&System_Comparison_UserQuestEntity__TypeInfo, v8);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ConstantMaster___, v9);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_QuestMaster___, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__Dispose__, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__MoveNext__, v12);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__get_Current__, v13);
    sub_1BE4ACC(&System_Func_int__bool__TypeInfo, v14);
    sub_1BE4ACC(&System_IDisposable_TypeInfo, v15);
    sub_1BE4ACC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v16);
    sub_1BE4ACC(&System_Collections_IEnumerator_TypeInfo, v17);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_UserQuestEntity__Add__, v18);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_UserQuestEntity__GetEnumerator__, v19);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_UserQuestEntity__Sort__, v20);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_UserQuestEntity___ctor__, v21);
    sub_1BE4ACC(&System_Collections_Generic_List_UserQuestEntity__TypeInfo, v22);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23);
    sub_1BE4ACC(&Method_SingletonTemplate_QuestTree__get_Instance__, v24);
    sub_1BE4ACC(&Method_UserQuestMaster___c__GetMainScenarioLatestClear_b__10_0__, v25);
    sub_1BE4ACC(&Method_UserQuestMaster___c__DisplayClass10_0__GetMainScenarioLatestClear_b__1__, v26);
    sub_1BE4ACC(&UserQuestMaster___c__DisplayClass10_0_TypeInfo, v27);
    sub_1BE4ACC(&UserQuestMaster___c_TypeInfo, v28);
    sub_1BE4ACC(&UserQuestEntity_TypeInfo, v29);
    sub_1BE4ACC(&StringLiteral_3482/*"CHAPTER_F_END_ID"*/, v30);
    byte_4B6799A = 1;
  }
  memset(&v100, 0, sizeof(v100));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_69;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_QuestMaster___);
  v34 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_UserQuestEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v34,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_UserQuestEntity___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_69;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ConstantMaster___);
  if ( !Instance )
    goto LABEL_69;
  Instance = (Il2CppObject *)ConstantMaster__GetValue(
                               (ConstantMaster_o *)Instance,
                               (System_String_o *)StringLiteral_3482/*"CHAPTER_F_END_ID"*/,
                               0LL);
  v35 = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  v97 = (int)Instance;
  if ( !v35 )
    goto LABEL_69;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 v35,
                 (const MethodInfo_319A36C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BE4D28(0LL, v36);
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
      p_method = sub_1C36AAC(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v45 = sub_1C36AAC(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v46 = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v45)(
                            Enumerator,
                            *(_QWORD *)(v45 + 8));
    v54 = (int64_t)v46;
    if ( !v46 )
      goto LABEL_63;
    v55 = UserQuestEntity_TypeInfo;
    methodPtr_low = LOBYTE(UserQuestEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v46->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
      || (UserQuestEntity_c *)v46->klass->_2.typeHierarchy[methodPtr_low - 1] != UserQuestEntity_TypeInfo )
    {
      sub_1BE4FE8(v46);
LABEL_63:
      sub_1BE4D28(v46, v47);
    }
    if ( v46[1].monitor == (void *)userId )
    {
      if ( !v34 )
        sub_1BE4D28(v46, UserQuestEntity_TypeInfo);
      items = v34->fields._items;
      v58 = Method_System_Collections_Generic_List_UserQuestEntity__Add__;
      ++v34->fields._version;
      if ( !items )
        sub_1BE4D28(v46, v55);
      size = v34->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v34,
          v46,
          *(const MethodInfo_35EC224 **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
      }
      else
      {
        v60 = &items->obj.klass + size;
        v34->fields._size = size + 1;
        v60[4] = (Il2CppClass *)v54;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v60 + 4), v54, v48, v49, v50, v51, v52, v53);
      }
    }
  }
  v61 = Enumerator->klass;
  v62 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v63 = &v61->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v63 - 1) != System_IDisposable_TypeInfo )
    {
      --v62;
      v63 += 4;
      if ( !v62 )
        goto LABEL_34;
    }
    v64 = (__int64)&v61->vtable[*v63].method;
  }
  else
  {
LABEL_34:
    v64 = sub_1C36AAC(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  Instance = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v64)(
                               Enumerator,
                               *(_QWORD *)(v64 + 8));
  v65 = UserQuestMaster___c_TypeInfo;
  if ( !UserQuestMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserQuestMaster___c_TypeInfo);
    v65 = UserQuestMaster___c_TypeInfo;
  }
  _9__10_0 = (System_Comparison_T__o *)v65->static_fields->__9__10_0;
  if ( !_9__10_0 )
  {
    if ( !v65->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v65);
      v65 = UserQuestMaster___c_TypeInfo;
    }
    v67 = (Il2CppObject *)v65->static_fields->__9;
    _9__10_0 = (System_Comparison_T__o *)sub_1BE4D18(System_Comparison_UserQuestEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__10_0,
      v67,
      Method_UserQuestMaster___c__GetMainScenarioLatestClear_b__10_0__,
      0LL);
    static_fields = UserQuestMaster___c_TypeInfo->static_fields;
    static_fields->__9__10_0 = (struct System_Comparison_UserQuestEntity__o *)_9__10_0;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&static_fields->__9__10_0,
      (int64_t)_9__10_0,
      v69,
      v70,
      v71,
      v72,
      v73,
      v74);
  }
  if ( !v34 )
LABEL_69:
    sub_1BE4D28(Instance, v32);
  System_Collections_Generic_List_object___Sort_56548584(
    v34,
    _9__10_0,
    (const MethodInfo_35EDCE8 *)Method_System_Collections_Generic_List_UserQuestEntity__Sort__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v99,
    v34,
    (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_UserQuestEntity__GetEnumerator__);
  v100 = v99;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v100,
            (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__MoveNext__) )
  {
    v75 = sub_1BE4D18(UserQuestMaster___c__DisplayClass10_0_TypeInfo);
    UserQuestMaster___c__DisplayClass10_0___ctor((UserQuestMaster___c__DisplayClass10_0_o *)v75, 0LL);
    if ( !v75 )
      sub_1BE4D28(v76, v77);
    current = v100.fields._current;
    *(_QWORD *)(v75 + 16) = v100.fields._current;
    v85 = v75 + 16;
    sub_1BE4A70((PartyOrganizationUtility_o *)(v75 + 16), (int64_t)current, v78, v79, v80, v81, v82, v83);
    if ( !*(_QWORD *)(v75 + 16) )
      sub_1BE4D28(v86, v87);
    if ( !MasterData_object )
      sub_1BE4D28(v86, v87);
    QuestEntity = QuestMaster__getQuestEntity(
                    (QuestMaster_o *)MasterData_object,
                    *(_DWORD *)(*(_QWORD *)(v75 + 16) + 32LL),
                    0LL);
    if ( QuestEntity )
    {
      v89 = (System_Func_int__bool__o *)sub_1BE4D18(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(
        v89,
        (Il2CppObject *)v75,
        Method_UserQuestMaster___c__DisplayClass10_0__GetMainScenarioLatestClear_b__1__,
        0LL);
      if ( BasicHelper__Any_int_(
             (System_Collections_Generic_List_T__o *)materialLatestClearList,
             (System_Func_T__bool__o *)v89,
             (const MethodInfo_2F43D50 *)Method_BasicHelper_Any_int___) )
      {
        goto LABEL_61;
      }
      TypeFlag = QuestEntity__GetTypeFlag(QuestEntity, 0LL);
      if ( (_DWORD)TypeFlag == 2 )
      {
        if ( QuestEntity->fields.chapterId )
          goto LABEL_58;
        if ( !*(_QWORD *)v85 )
          sub_1BE4D28(TypeFlag, v91);
        if ( *(_DWORD *)(*(_QWORD *)v85 + 32LL) <= v97 )
        {
LABEL_58:
          v92 = SingletonTemplate_object___get_Instance((const MethodInfo_38291E8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
          if ( !*(_QWORD *)v85 )
            sub_1BE4D28(v92, v93);
          if ( !v92 )
            sub_1BE4D28(0LL, v93);
          WarID_ByQuestID = QuestTree__GetWarID_ByQuestID((QuestTree_o *)v92, *(_DWORD *)(*(_QWORD *)v85 + 32LL), 0LL);
          v95 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v95 = BalanceConfig_TypeInfo;
          }
          if ( WarID_ByQuestID < v95->static_fields->PowerUpQuestWarId )
            goto LABEL_61;
        }
      }
    }
  }
  QuestEntity = 0LL;
LABEL_61:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v100,
    (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__Dispose__);
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
    sub_1BE4D28(this, userId);
  v4 = *(_QWORD *)&questIds->max_length;
  v6 = (int)v4 > 0;
  if ( (int)v4 >= 1 )
  {
    v8 = this;
    v9 = 0LL;
    do
    {
      if ( v9 >= (unsigned int)v4 )
        sub_1BE4D30(this, userId);
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

  if ( (byte_4B67994 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string__TryGetEntity__, entity);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v9);
    sub_1BE4ACC(&Method_SingletonTemplate_QuestTree__get_Instance__, v10);
    sub_1BE4ACC(&UserQuestEntity_TypeInfo, v11);
    byte_4B67994 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38291E8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
    sub_1BE4D28(0LL, v13);
  if ( !BYTE1(Instance[4].monitor) )
    goto LABEL_19;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B61717 )
  {
    sub_1BE4ACC(&NetworkManager_TypeInfo, v13);
    byte_4B61717 = 1;
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
    sub_1BE4A70((PartyOrganizationUtility_o *)entity, (int64_t)CacheById, v17, v18, v19, v20, v21, v22);
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
             (const MethodInfo_31FDB6C *)Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string__TryGetEntity__);
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
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  __int64 v20; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v22; // x19
  __int64 v23; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x10
  __int64 p_method; // x0
  __int64 methodPtr_low; // x9
  UserQuestMaster_o *v28; // x0
  int64_t v29; // x1
  System_Int32_array *v30; // x2
  const MethodInfo *v31; // x3
  int32_t *v32; // [xsp+8h] [xbp-38h] BYREF
  int32_t v33; // [xsp+14h] [xbp-2Ch] BYREF
  int64_t v34; // [xsp+18h] [xbp-28h] BYREF

  v34 = userId;
  v33 = questId;
  if ( (byte_4B67996 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, userId);
    sub_1BE4ACC(&UserQuestEntity_TypeInfo, v6);
    sub_1BE4ACC(&StringLiteral_1542/*":"*/, v7);
    byte_4B67996 = 1;
  }
  v32 = 0LL;
  if ( this->fields.oldId != userId )
  {
    this->fields.oldId = userId;
    v8 = System_Int64__ToString((int64_t)&v34, 0LL);
    v9 = System_String__Concat_62698808(v8, (System_String_o *)StringLiteral_1542/*":"*/, 0LL);
    this->fields.userIdString = v9;
    sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.userIdString, (int64_t)v9, v10, v11, v12, v13, v14, v15);
  }
  userIdString = this->fields.userIdString;
  v17 = System_Int32__ToString((int32_t)&v33, 0LL);
  v18 = System_String__Concat_62698808(userIdString, v17, 0LL);
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_18;
  klass = lookup->klass;
  v22 = lookup;
  v23 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
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
    p_method = sub_1C36AAC(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, int32_t **, _QWORD))p_method)(
          v22,
          v18,
          &v32,
          *(_QWORD *)(p_method + 8)) & 1) == 0 )
    return 0;
  lookup = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *)v32;
  if ( !v32 )
LABEL_18:
    sub_1BE4D28(lookup, v20);
  methodPtr_low = LOBYTE(UserQuestEntity_TypeInfo->vtable._0_Equals.methodPtr);
  if ( *(unsigned __int8 *)(*(_QWORD *)v32 + 304LL) >= (unsigned int)methodPtr_low
    && *(UserQuestEntity_c **)(*(_QWORD *)(*(_QWORD *)v32 + 200LL) + 8 * methodPtr_low - 8) == UserQuestEntity_TypeInfo )
  {
    return v32[14];
  }
  sub_1BE4FE8(v32);
  return UserQuestMaster__getChallengeCountsFromIds(v28, v29, v30, v31);
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

  if ( (byte_4B67997 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, userId);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__Remove__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int___ctor___77109024, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__get_Count__, v10);
    sub_1BE4ACC(&System_Collections_Generic_List_int__TypeInfo, v11);
    sub_1BE4ACC(&UserQuestEntity_TypeInfo, v12);
    byte_4B67997 = 1;
  }
  v13 = (System_Collections_Generic_List_int__o *)sub_1BE4D18(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_56421076(
    v13,
    (System_Collections_Generic_IEnumerable_T__o *)questIds,
    (const MethodInfo_35CEAD4 *)Method_System_Collections_Generic_List_int___ctor___77109024);
  list = this->fields.list;
  if ( !list )
    goto LABEL_18;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
               (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
              (const MethodInfo_35D06FC *)Method_System_Collections_Generic_List_int__Remove__)
        || (v18 += v20[14], v13->fields._size) )
      {
LABEL_21:
        if ( v17 != ++v19 )
          continue;
      }
      return v18;
    }
LABEL_18:
    sub_1BE4D28(list, v14);
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
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  __int64 v20; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v22; // x19
  __int64 v23; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x10
  __int64 p_method; // x0
  __int64 methodPtr_low; // x9
  UserQuestMaster_o *v28; // x0
  int64_t v29; // x1
  System_Int32_array *v30; // x2
  const MethodInfo *v31; // x3
  int32_t *v32; // [xsp+8h] [xbp-38h] BYREF
  int32_t v33; // [xsp+14h] [xbp-2Ch] BYREF
  int64_t v34; // [xsp+18h] [xbp-28h] BYREF

  v34 = userId;
  v33 = questId;
  if ( (byte_4B67998 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, userId);
    sub_1BE4ACC(&UserQuestEntity_TypeInfo, v6);
    sub_1BE4ACC(&StringLiteral_1542/*":"*/, v7);
    byte_4B67998 = 1;
  }
  v32 = 0LL;
  if ( this->fields.oldId != userId )
  {
    this->fields.oldId = userId;
    v8 = System_Int64__ToString((int64_t)&v34, 0LL);
    v9 = System_String__Concat_62698808(v8, (System_String_o *)StringLiteral_1542/*":"*/, 0LL);
    this->fields.userIdString = v9;
    sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.userIdString, (int64_t)v9, v10, v11, v12, v13, v14, v15);
  }
  userIdString = this->fields.userIdString;
  v17 = System_Int32__ToString((int32_t)&v33, 0LL);
  v18 = System_String__Concat_62698808(userIdString, v17, 0LL);
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_18;
  klass = lookup->klass;
  v22 = lookup;
  v23 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
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
    p_method = sub_1C36AAC(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, int32_t **, _QWORD))p_method)(
          v22,
          v18,
          &v32,
          *(_QWORD *)(p_method + 8)) & 1) == 0 )
    return 0;
  lookup = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *)v32;
  if ( !v32 )
LABEL_18:
    sub_1BE4D28(lookup, v20);
  methodPtr_low = LOBYTE(UserQuestEntity_TypeInfo->vtable._0_Equals.methodPtr);
  if ( *(unsigned __int8 *)(*(_QWORD *)v32 + 304LL) >= (unsigned int)methodPtr_low
    && *(UserQuestEntity_c **)(*(_QWORD *)(*(_QWORD *)v32 + 200LL) + 8 * methodPtr_low - 8) == UserQuestEntity_TypeInfo )
  {
    return v32[10];
  }
  sub_1BE4FE8(v32);
  return UserQuestMaster__getClearCountsFromIds(v28, v29, v30, v31);
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

  if ( (byte_4B67999 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, userId);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__Remove__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int___ctor___77109024, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__get_Count__, v10);
    sub_1BE4ACC(&System_Collections_Generic_List_int__TypeInfo, v11);
    sub_1BE4ACC(&UserQuestEntity_TypeInfo, v12);
    byte_4B67999 = 1;
  }
  v13 = (System_Collections_Generic_List_int__o *)sub_1BE4D18(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_56421076(
    v13,
    (System_Collections_Generic_IEnumerable_T__o *)questIds,
    (const MethodInfo_35CEAD4 *)Method_System_Collections_Generic_List_int___ctor___77109024);
  list = this->fields.list;
  if ( !list )
    goto LABEL_18;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
               (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
              (const MethodInfo_35D06FC *)Method_System_Collections_Generic_List_int__Remove__)
        || (v18 += v20[10], v13->fields._size) )
      {
LABEL_21:
        if ( v17 != ++v19 )
          continue;
      }
      return v18;
    }
LABEL_18:
    sub_1BE4D28(list, v14);
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
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v30; // x10
  __int64 v31; // x0
  __int64 methodPtr_low; // x11
  UserQuestEntity_o *v33; // [xsp+8h] [xbp-48h] BYREF
  int32_t v34; // [xsp+14h] [xbp-3Ch] BYREF
  int64_t v35; // [xsp+18h] [xbp-38h] BYREF

  v35 = userId;
  v34 = questId;
  if ( (byte_4B67995 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, userId);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v7);
    sub_1BE4ACC(&Method_SingletonTemplate_QuestTree__get_Instance__, v8);
    sub_1BE4ACC(&UserQuestEntity_TypeInfo, v9);
    sub_1BE4ACC(&StringLiteral_1542/*":"*/, v10);
    byte_4B67995 = 1;
  }
  v33 = 0LL;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38291E8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  if ( Instance[73] )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4B61717 )
    {
      sub_1BE4ACC(&NetworkManager_TypeInfo, v12);
      byte_4B61717 = 1;
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
    v16 = System_Int64__ToString((int64_t)&v35, 0LL);
    v17 = System_String__Concat_62698808(v16, (System_String_o *)StringLiteral_1542/*":"*/, 0LL);
    this->fields.userIdString = v17;
    sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.userIdString, (int64_t)v17, v18, v19, v20, v21, v22, v23);
  }
  userIdString = this->fields.userIdString;
  v25 = System_Int32__ToString((int32_t)&v34, 0LL);
  v26 = System_String__Concat_62698808(userIdString, v25, 0LL);
  Instance = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !Instance )
LABEL_29:
    sub_1BE4D28(Instance, v12);
  v27 = *(_QWORD *)Instance;
  v28 = Instance;
  v29 = *(unsigned __int16 *)(*(_QWORD *)Instance + 302LL);
  if ( *(_WORD *)(*(_QWORD *)Instance + 302LL) )
  {
    v30 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v27 + 176) + 8LL);
    while ( *(v30 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
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
    v31 = sub_1C36AAC(Instance, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
  }
  if ( ((*(__int64 (__fastcall **)(_BYTE *, System_String_o *, UserQuestEntity_o **, _QWORD))v31)(
          v28,
          v26,
          &v33,
          *(_QWORD *)(v31 + 8)) & 1) == 0 )
    return 0LL;
  if ( !v33 )
    return 0LL;
  methodPtr_low = LOBYTE(UserQuestEntity_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(v33->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (UserQuestEntity_c *)v33->klass->_2.typeHierarchy[methodPtr_low - 1] == UserQuestEntity_TypeInfo )
    return v33;
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

  if ( (byte_4B6799F & 1) == 0 )
  {
    sub_1BE4ACC(&UserQuestMaster___c_TypeInfo, v1);
    byte_4B6799F = 1;
  }
  v2 = (Il2CppObject *)sub_1BE4D18(UserQuestMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  UserQuestMaster___c_TypeInfo->static_fields->__9 = (struct UserQuestMaster___c_o *)v2;
  sub_1BE4A70(
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
    sub_1BE4D28(this, x);
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
    sub_1BE4D28(this, x);
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
    sub_1BE4D28(this, a);
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
    sub_1BE4D28(this, a);
  return usrEnt->fields.questId == a;
}