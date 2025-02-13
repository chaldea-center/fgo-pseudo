void __fastcall QuestReleaseMaster___ctor(QuestReleaseMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4BDCAF3 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity____ctor__);
    sub_1C21E38(&System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___TypeInfo);
    byte_4BDCAF3 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C22084(System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v3,
    (const MethodInfo_32B5078 *)Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity____ctor__);
  this->fields.cachedQuestReleaseEntityDict = (struct System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___o *)v3;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.cachedQuestReleaseEntityDict,
    (int64_t)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    74,
    (const MethodInfo_325E55C *)Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string___ctor__);
}


void __fastcall QuestReleaseMaster__Clear(QuestReleaseMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___o *cachedQuestReleaseEntityDict; // x0

  if ( (byte_4BDCAF5 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___Clear__);
    byte_4BDCAF5 = 1;
  }
  DataMasterBase_object__object__object___Clear(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    (const MethodInfo_325F238 *)Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__Clear__);
  cachedQuestReleaseEntityDict = this->fields.cachedQuestReleaseEntityDict;
  if ( !cachedQuestReleaseEntityDict )
    sub_1C22094(0LL, v3);
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)cachedQuestReleaseEntityDict,
    (const MethodInfo_32B5BD4 *)Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___Clear__);
  this->fields.isCached = 0;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestReleaseMaster__EventPointWinActionType(
        QuestReleaseMaster_o *this,
        int32_t questId,
        bool winGroup1,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v8; // w22
  Il2CppObject *Item; // x0
  int klass_high; // w8

  if ( (byte_4BDCAFC & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__);
    byte_4BDCAFC = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_12:
    sub_1C22094(list, *(_QWORD *)&questId);
  v8 = 0;
  while ( 1 )
  {
    if ( v8 >= System_Collections_ObjectModel_Collection_object___get_Count(
                 list,
                 (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__) )
      return 0;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_12;
    Item = System_Collections_ObjectModel_Collection_object___get_Item(
             list,
             v8,
             (const MethodInfo_31F615C *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__);
    if ( Item )
    {
      if ( LODWORD(Item[1].klass) == questId )
      {
        klass_high = HIDWORD(Item[1].klass);
        if ( klass_high == 49 )
          return 3;
        if ( klass_high == 48 )
          break;
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v8;
    if ( !list )
      goto LABEL_12;
  }
  if ( winGroup1 )
    return 1;
  else
    return 2;
}


QuestReleaseEntity_o *__fastcall QuestReleaseMaster__GetEntity(
        QuestReleaseMaster_o *this,
        int32_t questId,
        int32_t type,
        int32_t targetId,
        int64_t value,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4BDCAF1 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__GetEntity__);
    byte_4BDCAF1 = 1;
  }
  PK = (Il2CppObject *)QuestReleaseEntity__CreatePK(questId, type, targetId, value, (const MethodInfo *)value);
  return (QuestReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                   PK,
                                   (const MethodInfo_3260880 *)Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__GetEntity__);
}


System_Int32_array *__fastcall QuestReleaseMaster__GetQuestIdList(
        QuestReleaseMaster_o *this,
        int32_t type,
        int32_t targetId,
        int32_t value,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v10; // x1
  Il2CppObject *MasterData_object; // x24
  System_Collections_Generic_List_object__o *v12; // x23
  int32_t v13; // w25
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  int64_t v23; // x1
  Il2CppClass **v24; // x0
  System_Comparison_T__o *v25; // x19
  Il2CppObject *v26; // x20
  struct QuestReleaseMaster___c_StaticFields *static_fields; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  System_Collections_Generic_List_int__o *v34; // x19
  _BOOL8 v35; // x0
  __int64 v36; // x1
  __int64 klass_low; // x1
  struct System_Int32_array *v38; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v43; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4BDCAFB & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__);
    sub_1C21E38(&System_Comparison_QuestEntity__TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C21E38(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestEntity__Sort__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestEntity___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_List_QuestEntity__TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_QuestReleaseMaster___c__GetQuestIdList_b__12_0__);
    sub_1C21E38(&QuestReleaseMaster___c_TypeInfo);
    byte_4BDCAFB = 1;
  }
  memset(&v43, 0, sizeof(v43));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestMaster___);
  v12 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_QuestEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_QuestEntity___ctor__);
  Instance = this->fields.list;
  if ( !Instance )
    goto LABEL_21;
  v13 = 0;
  while ( v13 < System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)Instance,
                  (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__) )
  {
    Instance = this->fields.list;
    if ( !Instance )
      goto LABEL_21;
    Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 v13,
                 (const MethodInfo_31F615C *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__);
    if ( Instance
      && *((_DWORD *)Instance + 5) == type
      && *((_DWORD *)Instance + 6) == targetId
      && ((value & 0x80000000) != 0 || *((_DWORD *)Instance + 8) == value) )
    {
      if ( !MasterData_object )
        goto LABEL_21;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                   *((_DWORD *)Instance + 4),
                   (const MethodInfo_325BDC8 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
      if ( Instance )
      {
        if ( !v12 )
          goto LABEL_21;
        items = v12->fields._items;
        v21 = Method_System_Collections_Generic_List_QuestEntity__Add__;
        ++v12->fields._version;
        if ( !items )
          goto LABEL_21;
        size = v12->fields._size;
        v23 = (int64_t)Instance;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v12,
            (Il2CppObject *)Instance,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v24 = &items->obj.klass + size;
          v12->fields._size = size + 1;
          v24[4] = (Il2CppClass *)v23;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v24 + 4), v23, v14, v15, v16, v17, v18, v19);
        }
      }
    }
    Instance = this->fields.list;
    ++v13;
    if ( !Instance )
      goto LABEL_21;
  }
  Instance = QuestReleaseMaster___c_TypeInfo;
  if ( !QuestReleaseMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestReleaseMaster___c_TypeInfo);
    Instance = QuestReleaseMaster___c_TypeInfo;
  }
  v25 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 8LL);
  if ( !v25 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = QuestReleaseMaster___c_TypeInfo;
    }
    v26 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v25 = (System_Comparison_T__o *)sub_1C22084(System_Comparison_QuestEntity__TypeInfo);
    System_Comparison_object____ctor(v25, v26, Method_QuestReleaseMaster___c__GetQuestIdList_b__12_0__, 0LL);
    static_fields = QuestReleaseMaster___c_TypeInfo->static_fields;
    static_fields->__9__12_0 = (struct System_Comparison_QuestEntity__o *)v25;
    sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__12_0, (int64_t)v25, v28, v29, v30, v31, v32, v33);
  }
  if ( !v12 )
    goto LABEL_21;
  System_Collections_Generic_List_object___Sort_56953720(
    v12,
    v25,
    (const MethodInfo_3650B78 *)Method_System_Collections_Generic_List_QuestEntity__Sort__);
  v34 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v34,
    (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v42,
    v12,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__);
  v43 = v42;
  while ( 1 )
  {
    v35 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v43,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__);
    if ( !v35 )
      break;
    if ( !v43.fields._current )
      sub_1C22094(v35, v36);
    if ( !v34 )
      sub_1C22094(v35, v36);
    klass_low = LODWORD(v43.fields._current[1].klass);
    v38 = v34->fields._items;
    v39 = Method_System_Collections_Generic_List_int__Add__;
    ++v34->fields._version;
    if ( !v38 )
      sub_1C22094(v35, klass_low);
    v40 = v34->fields._size;
    if ( (unsigned int)v40 >= v38->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v34,
        klass_low,
        *(const MethodInfo_3632090 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
    }
    else
    {
      v34->fields._size = v40 + 1;
      v38->m_Items[v40 + 1] = klass_low;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v43,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__);
  if ( !v34 )
LABEL_21:
    sub_1C22094(Instance, v10);
  return System_Collections_Generic_List_int___ToArray(
           v34,
           (const MethodInfo_3633B48 *)Method_System_Collections_Generic_List_int__ToArray__);
}


bool __fastcall QuestReleaseMaster__IsContainCondType(
        QuestReleaseMaster_o *this,
        int32_t targetId,
        int32_t condType,
        const MethodInfo *method)
{
  void *Master_object; // x0
  __int64 v8; // x1
  CommonReleaseMaster_o *v9; // x22
  int32_t Count; // w0
  int32_t v11; // w23
  int32_t v12; // w24
  int v13; // w8

  if ( (byte_4BDCAFA & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__);
    sub_1C21E38(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    byte_4BDCAFA = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !this->fields.list )
LABEL_18:
    sub_1C22094(Master_object, v8);
  v9 = (CommonReleaseMaster_o *)Master_object;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__);
  if ( Count < 1 )
    return 0;
  v11 = Count;
  v12 = 0;
  while ( 1 )
  {
    Master_object = this->fields.list;
    if ( !Master_object )
      goto LABEL_18;
    Master_object = System_Collections_ObjectModel_Collection_object___get_Item(
                      (System_Collections_ObjectModel_Collection_T__o *)Master_object,
                      v12,
                      (const MethodInfo_31F615C *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__);
    if ( Master_object && *((_DWORD *)Master_object + 4) == targetId )
    {
      v13 = *((_DWORD *)Master_object + 5);
      if ( v13 == condType )
        return 1;
      if ( v13 == 113 )
      {
        if ( !v9 )
          goto LABEL_18;
        if ( CommonReleaseMaster__IsContainCondType(v9, *((_DWORD *)Master_object + 6), condType, 0LL) )
          return 1;
      }
    }
    if ( v11 == ++v12 )
      return 0;
  }
}


bool __fastcall QuestReleaseMaster__IsContainUnPlayableQuestByTargetId(
        QuestReleaseMaster_o *this,
        System_Int32_array *questIdList,
        int32_t targetId,
        const MethodInfo *method)
{
  __int64 v7; // x21
  int64_t Master_object; // x0
  __int64 v9; // x1
  QuestGroupMaster_o *v10; // x22
  int32_t Count; // w0
  int32_t v12; // w23
  int32_t v13; // w24
  __int64 v14; // x27
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  __int64 v21; // x26
  System_Predicate_int__o *v22; // x28
  const MethodInfo *v23; // x3
  _DWORD *v24; // x8
  int v25; // w9
  int v26; // w10
  _DWORD *v27; // x8
  System_Int32_array *QuestIdListByGroupId; // x0
  System_Int32_array *v29; // x27
  System_Predicate_int__o *klass; // x28
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  PartyOrganizationUtility_o *v38; // [xsp+0h] [xbp-70h]

  if ( (byte_4BDCAFE & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Array_Exists_int___);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__);
    sub_1C21E38(&Method_DataManager_GetMaster_QuestGroupMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&System_Predicate_int__TypeInfo);
    sub_1C21E38(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C21E38(&Method_QuestReleaseMaster___c__DisplayClass15_0__IsContainUnPlayableQuestByTargetId_b__1__);
    sub_1C21E38(&QuestReleaseMaster___c__DisplayClass15_0_TypeInfo);
    sub_1C21E38(&Method_QuestReleaseMaster___c__DisplayClass15_1__IsContainUnPlayableQuestByTargetId_b__0__);
    sub_1C21E38(&QuestReleaseMaster___c__DisplayClass15_1_TypeInfo);
    byte_4BDCAFE = 1;
  }
  v7 = sub_1C22084(QuestReleaseMaster___c__DisplayClass15_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_36;
  *(_DWORD *)(v7 + 16) = targetId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !this->fields.list )
LABEL_36:
    sub_1C22094(Master_object, v9);
  v10 = (QuestGroupMaster_o *)Master_object;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__);
  if ( Count < 1 )
    return 0;
  v12 = Count;
  v13 = 0;
  v38 = (PartyOrganizationUtility_o *)(v7 + 24);
  while ( 1 )
  {
    v14 = sub_1C22084(QuestReleaseMaster___c__DisplayClass15_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v14, 0LL);
    Master_object = (int64_t)this->fields.list;
    if ( !Master_object )
      goto LABEL_36;
    Master_object = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                               (System_Collections_ObjectModel_Collection_T__o *)Master_object,
                               v13,
                               (const MethodInfo_31F615C *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__);
    if ( !v14 )
      goto LABEL_36;
    *(_QWORD *)(v14 + 16) = Master_object;
    v21 = v14 + 16;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v14 + 16), Master_object, v15, v16, v17, v18, v19, v20);
    if ( *(_QWORD *)(v14 + 16) )
    {
      v22 = (System_Predicate_int__o *)sub_1C22084(System_Predicate_int__TypeInfo);
      System_Predicate_int____ctor(
        v22,
        (Il2CppObject *)v14,
        Method_QuestReleaseMaster___c__DisplayClass15_1__IsContainUnPlayableQuestByTargetId_b__0__,
        0LL);
      Master_object = System_Array__Exists_int_(
                        questIdList,
                        (System_Predicate_T__o *)v22,
                        (const MethodInfo_30AA840 *)Method_System_Array_Exists_int___);
      if ( (Master_object & 1) != 0 )
      {
        v24 = *(_DWORD **)v21;
        if ( !*(_QWORD *)v21 )
          goto LABEL_36;
        v25 = *(_DWORD *)(v7 + 16);
        if ( v24[4] != v25 )
        {
          v26 = v24[5];
          if ( v26 == 32 )
          {
            Master_object = (int64_t)v10;
            if ( !v10 )
              goto LABEL_36;
            QuestIdListByGroupId = QuestGroupMaster__GetQuestIdListByGroupId(v10, v24[6], 2, v23);
            if ( !QuestIdListByGroupId )
              goto LABEL_33;
            v29 = QuestIdListByGroupId;
            if ( !*(_QWORD *)&QuestIdListByGroupId->max_length )
              goto LABEL_33;
            klass = (System_Predicate_int__o *)v38->klass;
            if ( !v38->klass )
            {
              klass = (System_Predicate_int__o *)sub_1C22084(System_Predicate_int__TypeInfo);
              System_Predicate_int____ctor(
                klass,
                (Il2CppObject *)v7,
                Method_QuestReleaseMaster___c__DisplayClass15_0__IsContainUnPlayableQuestByTargetId_b__1__,
                0LL);
              *(_QWORD *)(v7 + 24) = klass;
              sub_1C21DDC(v38, (int64_t)klass, v31, v32, v33, v34, v35, v36);
            }
            if ( !System_Array__Exists_int_(
                    v29,
                    (System_Predicate_T__o *)klass,
                    (const MethodInfo_30AA840 *)Method_System_Array_Exists_int___) )
              goto LABEL_33;
            Master_object = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
            v27 = *(_DWORD **)v21;
            if ( !*(_QWORD *)v21 || !Master_object )
              goto LABEL_36;
          }
          else
          {
            if ( v26 != 1 || v24[6] != v25 )
              goto LABEL_33;
            Master_object = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
            v27 = *(_DWORD **)v21;
            if ( !*(_QWORD *)v21 || !Master_object )
              goto LABEL_36;
          }
          if ( clsQuestCheck__CheckQuestPlayableNow((clsQuestCheck_o *)Master_object, v27[4], 0LL) )
            return 1;
          Master_object = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
          if ( !*(_QWORD *)v21 || !Master_object )
            goto LABEL_36;
          if ( clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Master_object, *(_DWORD *)(*(_QWORD *)v21 + 16LL), 0, 0LL) )
            return 1;
        }
      }
    }
LABEL_33:
    if ( v12 == ++v13 )
      return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestReleaseMaster__IsQuestOfResultBattleCleared(
        QuestReleaseMaster_o *this,
        int32_t targetId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v6; // w21
  int32_t Count; // w22
  Il2CppObject *Item; // x0
  Il2CppObject *v9; // x23

  if ( (byte_4BDCAFD & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__);
    sub_1C21E38(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    byte_4BDCAFD = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_13:
    sub_1C22094(list, *(_QWORD *)&targetId);
  v6 = 0;
  while ( 1 )
  {
    Count = System_Collections_ObjectModel_Collection_object___get_Count(
              list,
              (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__);
    if ( v6 >= Count )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_13;
    Item = System_Collections_ObjectModel_Collection_object___get_Item(
             list,
             v6,
             (const MethodInfo_31F615C *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__);
    if ( Item )
    {
      v9 = Item;
      if ( (HIDWORD(Item[1].klass) & 0xFFFFFFFE) == 48 && LODWORD(Item[1].monitor) == targetId )
      {
        list = (System_Collections_ObjectModel_Collection_T__o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
        if ( !list )
          goto LABEL_13;
        if ( clsQuestCheck__IsQuestClear((clsQuestCheck_o *)list, (int32_t)v9[1].klass, 0, 0LL) )
          break;
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v6;
    if ( !list )
      goto LABEL_13;
  }
  return v6 < Count;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestReleaseMaster__TryGetEntity(
        QuestReleaseMaster_o *this,
        QuestReleaseEntity_o **entity,
        int32_t questId,
        int32_t type,
        int32_t targetId,
        int64_t value,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4BDCAF2 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__TryGetEntity__);
    byte_4BDCAF2 = 1;
  }
  PK = (Il2CppObject *)QuestReleaseEntity__CreatePK(questId, type, targetId, value, *(const MethodInfo **)&targetId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32608CC *)Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__TryGetEntity__);
}


QuestReleaseEntity_array *__fastcall QuestReleaseMaster__getListByQuestID(
        QuestReleaseMaster_o *this,
        int32_t qid,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  int64_t v6; // x1
  int64_t list; // x0
  int32_t v8; // w22
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  if ( (byte_4BDCAF4 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
    byte_4BDCAF4 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_18;
  v8 = 0;
  while ( 1 )
  {
    list = System_Collections_ObjectModel_Collection_object___get_Count(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__);
    if ( v8 >= (int)list )
      break;
    list = (int64_t)this->fields.list;
    if ( !list )
      goto LABEL_18;
    list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                      (System_Collections_ObjectModel_Collection_T__o *)list,
                      v8,
                      (const MethodInfo_31F615C *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__);
    if ( list )
    {
      v6 = list;
      if ( *(_DWORD *)(list + 16) == qid )
      {
        if ( !v5 )
          goto LABEL_18;
        items = v5->fields._items;
        v16 = Method_System_Collections_Generic_List_QuestReleaseEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          goto LABEL_18;
        size = v5->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            (Il2CppObject *)list,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v18 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v18[4] = (Il2CppClass *)v6;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v18 + 4), v6, v9, v10, v11, v12, v13, v14);
        }
      }
    }
    list = (int64_t)this->fields.list;
    ++v8;
    if ( !list )
      goto LABEL_18;
  }
  if ( !v5 )
LABEL_18:
    sub_1C22094(list, v6);
  return (QuestReleaseEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v5,
                                       (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__);
}


void __fastcall QuestReleaseMaster__getListByQuestID_40793780(
        QuestReleaseMaster_o *this,
        int32_t questId,
        System_Collections_Generic_List_QuestReleaseEntity__o **resultList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x22
  int64_t Master_object; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x4
  System_Collections_Generic_List_QuestReleaseEntity__o *v11; // x8
  int32_t v12; // w2
  int v13; // w9
  const MethodInfo *v14; // x1
  System_Collections_Generic_List_object__o *v15; // x20
  Il2CppObject *v16; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int64_t v23; // x1
  struct System_Object_array *v24; // x8
  _QWORD *v25; // x9
  __int64 v26; // x10
  Il2CppClass **v27; // x0
  int v28; // w22
  int32_t v29; // w23
  int64_t v30; // x24
  int32_t v31; // w25
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  System_Collections_Generic_List_object__o *v38; // x26
  Il2CppClass *klass; // x8
  _QWORD *v40; // x9
  __int64 v41; // x10
  void **v42; // x8
  System_Collections_Generic_List_QuestReleaseEntity__o *v43; // x8
  int32_t size; // w2
  int v45; // w9
  int monitor; // w22
  int32_t v47; // w20
  System_Collections_Generic_List_object__o *v48; // x21
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  struct System_Object_array *items; // x8
  _QWORD *v56; // x9
  __int64 v57; // x10
  int64_t v58; // x1
  Il2CppClass **v59; // x0
  System_Collections_Generic_List_Enumerator_object__o v60; // [xsp+8h] [xbp-A8h] BYREF
  Il2CppObject *v61; // [xsp+20h] [xbp-90h] BYREF
  Il2CppObject *value; // [xsp+28h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v63; // [xsp+30h] [xbp-80h] BYREF
  System_Collections_Generic_List_QuestReleaseOverwriteEntity__o *entityList; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_4BDCAF6 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__);
    sub_1C21E38(&Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___TryGetValue__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___set_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestReleaseEntity__Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__);
    sub_1C21E38(&System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
    byte_4BDCAF6 = 1;
  }
  memset(&v63, 0, sizeof(v63));
  v61 = 0LL;
  value = 0LL;
  v7 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__);
  entityList = (System_Collections_Generic_List_QuestReleaseOverwriteEntity__o *)v7;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
  if ( !Master_object )
    goto LABEL_51;
  Master_object = QuestReleaseOverwriteMaster__TryGetEntityListByQuestIdAndTime(
                    (QuestReleaseOverwriteMaster_o *)Master_object,
                    &entityList,
                    questId,
                    0LL,
                    v10);
  if ( (Master_object & 1) == 0 )
  {
    if ( !this->fields.isCached )
    {
      Master_object = (int64_t)this->fields.list;
      if ( !Master_object )
        goto LABEL_51;
      Master_object = System_Collections_ObjectModel_Collection_object___get_Count(
                        (System_Collections_ObjectModel_Collection_T__o *)Master_object,
                        (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__);
      if ( (int)Master_object >= 1 )
      {
        v28 = Master_object;
        v29 = 0;
        do
        {
          Master_object = (int64_t)this->fields.list;
          if ( !Master_object )
            goto LABEL_51;
          Master_object = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                                     (System_Collections_ObjectModel_Collection_T__o *)Master_object,
                                     v29,
                                     (const MethodInfo_31F615C *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__);
          if ( Master_object )
          {
            v30 = Master_object;
            Master_object = (int64_t)this->fields.cachedQuestReleaseEntityDict;
            if ( !Master_object )
              goto LABEL_51;
            v31 = *(_DWORD *)(v30 + 16);
            if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
                    (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
                    v31,
                    &value,
                    (const MethodInfo_32B71D8 *)Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___TryGetValue__) )
            {
              v38 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
              System_Collections_Generic_List_object____ctor(
                v38,
                (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
              value = (Il2CppObject *)v38;
              Master_object = (int64_t)this->fields.cachedQuestReleaseEntityDict;
              if ( !Master_object )
                goto LABEL_51;
              System_Collections_Generic_Dictionary_int__object___set_Item(
                (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
                v31,
                (Il2CppObject *)v38,
                (const MethodInfo_32B5A38 *)Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___set_Item__);
            }
            Master_object = (int64_t)value;
            if ( !value )
              goto LABEL_51;
            klass = value[1].klass;
            v40 = Method_System_Collections_Generic_List_QuestReleaseEntity__Add__;
            ++HIDWORD(value[1].monitor);
            if ( !klass )
              goto LABEL_51;
            v41 = *(int *)(Master_object + 24);
            if ( (unsigned int)v41 >= LODWORD(klass->_1.namespaze) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)Master_object,
                (Il2CppObject *)v30,
                *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
            }
            else
            {
              v42 = &klass->_1.image + v41;
              *(_DWORD *)(Master_object + 24) = v41 + 1;
              v42[4] = (void *)v30;
              sub_1C21DDC((PartyOrganizationUtility_o *)(v42 + 4), v30, v32, v33, v34, v35, v36, v37);
            }
          }
        }
        while ( v28 != ++v29 );
      }
      this->fields.isCached = 1;
    }
    v43 = *resultList;
    if ( *resultList )
    {
      size = v43->fields._size;
      v45 = v43->fields._version + 1;
      v43->fields._size = 0;
      v43->fields._version = v45;
      if ( size >= 1 )
        System_Array__Clear((System_Array_o *)v43->fields._items, 0, size, 0LL);
      Master_object = (int64_t)this->fields.cachedQuestReleaseEntityDict;
      if ( Master_object )
      {
        if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
                (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
                questId,
                &v61,
                (const MethodInfo_32B71D8 *)Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___TryGetValue__) )
          return;
        Master_object = (int64_t)v61;
        if ( v61 )
        {
          monitor = (int)v61[1].monitor;
          if ( monitor < 1 )
            return;
          v47 = 0;
          do
          {
            v48 = (System_Collections_Generic_List_object__o *)*resultList;
            Master_object = (int64_t)System_Collections_Generic_List_object___get_Item(
                                       (System_Collections_Generic_List_object__o *)Master_object,
                                       v47,
                                       (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__);
            if ( !v48 )
              break;
            items = v48->fields._items;
            v56 = Method_System_Collections_Generic_List_QuestReleaseEntity__Add__;
            ++v48->fields._version;
            if ( !items )
              break;
            v57 = v48->fields._size;
            v58 = Master_object;
            if ( (unsigned int)v57 >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v48,
                (Il2CppObject *)Master_object,
                *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
            }
            else
            {
              v59 = &items->obj.klass + v57;
              v48->fields._size = v57 + 1;
              v59[4] = (Il2CppClass *)v58;
              sub_1C21DDC((PartyOrganizationUtility_o *)(v59 + 4), v58, v49, v50, v51, v52, v53, v54);
            }
            if ( monitor == ++v47 )
              return;
            Master_object = (int64_t)v61;
          }
          while ( v61 );
        }
      }
    }
LABEL_51:
    sub_1C22094(Master_object, v9);
  }
  v11 = *resultList;
  if ( !*resultList )
    goto LABEL_51;
  v12 = v11->fields._size;
  v13 = v11->fields._version + 1;
  v11->fields._size = 0;
  v11->fields._version = v13;
  if ( v12 >= 1 )
    System_Array__Clear((System_Array_o *)v11->fields._items, 0, v12, 0LL);
  if ( !v7 )
    goto LABEL_51;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v60,
    v7,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__);
  v63 = v60;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v63,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__) )
  {
    if ( !v63.fields._current )
      sub_1C22094(0LL, v14);
    v15 = (System_Collections_Generic_List_object__o *)*resultList;
    v16 = (Il2CppObject *)QuestReleaseOverwriteEntity__ConvertToQuestReleaseEntity(
                            (QuestReleaseOverwriteEntity_o *)v63.fields._current,
                            v14);
    v23 = (int64_t)v16;
    if ( !v15 )
      sub_1C22094(v16, v16);
    v24 = v15->fields._items;
    v25 = Method_System_Collections_Generic_List_QuestReleaseEntity__Add__;
    ++v15->fields._version;
    if ( !v24 )
      sub_1C22094(v16, v16);
    v26 = v15->fields._size;
    if ( (unsigned int)v26 >= v24->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v15,
        v16,
        *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
    }
    else
    {
      v27 = &v24->obj.klass + v26;
      v15->fields._size = v26 + 1;
      v27[4] = (Il2CppClass *)v23;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v27 + 4), v23, v17, v18, v19, v20, v21, v22);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v63,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__Dispose__);
}


System_Collections_Generic_List_QuestReleaseEntity__o *__fastcall QuestReleaseMaster__getListByTargetAndCondType(
        QuestReleaseMaster_o *this,
        int32_t targetId,
        int32_t condType,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x22
  int64_t v8; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v11; // w23
  int32_t v12; // w24
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0

  if ( (byte_4BDCAF9 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
    byte_4BDCAF9 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v12,
                                                                 (const MethodInfo_31F615C *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__);
      if ( list )
      {
        v8 = (int64_t)list;
        if ( LODWORD(list[1].klass) == targetId && HIDWORD(list->fields.items) == condType )
        {
          if ( !v7 )
            break;
          items = v7->fields._items;
          v20 = Method_System_Collections_Generic_List_QuestReleaseEntity__Add__;
          ++v7->fields._version;
          if ( !items )
            break;
          size = v7->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v7,
              (Il2CppObject *)list,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
          }
          else
          {
            v22 = &items->obj.klass + size;
            v7->fields._size = size + 1;
            v22[4] = (Il2CppClass *)v8;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v22 + 4), v8, v13, v14, v15, v16, v17, v18);
          }
        }
      }
      if ( v11 == ++v12 )
        return (System_Collections_Generic_List_QuestReleaseEntity__o *)v7;
    }
LABEL_17:
    sub_1C22094(list, v8);
  }
  return (System_Collections_Generic_List_QuestReleaseEntity__o *)v7;
}


QuestReleaseEntity_array *__fastcall QuestReleaseMaster__getListByType(
        QuestReleaseMaster_o *this,
        int32_t type,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  int64_t v6; // x1
  int64_t list; // x0
  int32_t v8; // w22
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  if ( (byte_4BDCAF7 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
    byte_4BDCAF7 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_18;
  v8 = 0;
  while ( 1 )
  {
    list = System_Collections_ObjectModel_Collection_object___get_Count(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__);
    if ( v8 >= (int)list )
      break;
    list = (int64_t)this->fields.list;
    if ( !list )
      goto LABEL_18;
    list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                      (System_Collections_ObjectModel_Collection_T__o *)list,
                      v8,
                      (const MethodInfo_31F615C *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__);
    if ( list )
    {
      v6 = list;
      if ( *(_DWORD *)(list + 20) == type )
      {
        if ( !v5 )
          goto LABEL_18;
        items = v5->fields._items;
        v16 = Method_System_Collections_Generic_List_QuestReleaseEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          goto LABEL_18;
        size = v5->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            (Il2CppObject *)list,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v18 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v18[4] = (Il2CppClass *)v6;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v18 + 4), v6, v9, v10, v11, v12, v13, v14);
        }
      }
    }
    list = (int64_t)this->fields.list;
    ++v8;
    if ( !list )
      goto LABEL_18;
  }
  if ( !v5 )
LABEL_18:
    sub_1C22094(list, v6);
  return (QuestReleaseEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v5,
                                       (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__);
}


System_Int32_array *__fastcall QuestReleaseMaster__getQuestIdsByTargetAndOpenCondType(
        QuestReleaseMaster_o *this,
        int32_t targetId,
        int32_t openCondType,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v7; // x22
  __int64 items_low; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v10; // w23
  struct System_Int32_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10

  if ( (byte_4BDCAF8 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    byte_4BDCAF8 = 1;
  }
  v7 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  v10 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__);
    if ( v10 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_19;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v10,
                                                               (const MethodInfo_31F615C *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__);
    if ( list && LODWORD(list[1].klass) == targetId && HIDWORD(list->fields.items) == openCondType )
    {
      if ( !v7 )
        goto LABEL_19;
      items_low = LODWORD(list->fields.items);
      items = v7->fields._items;
      v12 = Method_System_Collections_Generic_List_int__Add__;
      ++v7->fields._version;
      if ( !items )
        goto LABEL_19;
      size = v7->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v7,
          items_low,
          *(const MethodInfo_3632090 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
      }
      else
      {
        v7->fields._size = size + 1;
        items->m_Items[size + 1] = items_low;
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v10;
    if ( !list )
      goto LABEL_19;
  }
  if ( !v7 )
LABEL_19:
    sub_1C22094(list, items_low);
  return System_Collections_Generic_List_int___ToArray(
           v7,
           (const MethodInfo_3633B48 *)Method_System_Collections_Generic_List_int__ToArray__);
}


void __fastcall QuestReleaseMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BDCAFF & 1) == 0 )
  {
    sub_1C21E38(&QuestReleaseMaster___c_TypeInfo);
    byte_4BDCAFF = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(QuestReleaseMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  QuestReleaseMaster___c_TypeInfo->static_fields->__9 = (struct QuestReleaseMaster___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)QuestReleaseMaster___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall QuestReleaseMaster___c___ctor(QuestReleaseMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall QuestReleaseMaster___c___GetQuestIdList_b__12_0(
        QuestReleaseMaster___c_o *this,
        QuestEntity_o *a,
        QuestEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || (this = (QuestReleaseMaster___c_o *)QuestEntity__getPriority(b, (const MethodInfo *)a), !a) )
    sub_1C22094(this, a);
  return (_DWORD)this - QuestEntity__getPriority(a, (const MethodInfo *)a);
}


void __fastcall QuestReleaseMaster___c__DisplayClass15_0___ctor(
        QuestReleaseMaster___c__DisplayClass15_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestReleaseMaster___c__DisplayClass15_0___IsContainUnPlayableQuestByTargetId_b__1(
        QuestReleaseMaster___c__DisplayClass15_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return this->fields.targetId == x;
}


void __fastcall QuestReleaseMaster___c__DisplayClass15_1___ctor(
        QuestReleaseMaster___c__DisplayClass15_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestReleaseMaster___c__DisplayClass15_1___IsContainUnPlayableQuestByTargetId_b__0(
        QuestReleaseMaster___c__DisplayClass15_1_o *this,
        int32_t x,
        const MethodInfo *method)
{
  struct QuestReleaseEntity_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_1C22094(this, x);
  return data->fields.questId == x;
}