void __fastcall QuestReleaseMaster___ctor(QuestReleaseMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_int__object__o *v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4BC8057 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string___ctor__, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity____ctor__, v3);
    sub_1C1ABD4(&System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___TypeInfo, v4);
    byte_4BC8057 = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C1AE20(System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v5,
    (const MethodInfo_32A1928 *)Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity____ctor__);
  this->fields.cachedQuestReleaseEntityDict = (struct System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___o *)v5;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.cachedQuestReleaseEntityDict,
    (int64_t)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    74,
    (const MethodInfo_324AE0C *)Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string___ctor__);
}


void __fastcall QuestReleaseMaster__Clear(QuestReleaseMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___o *cachedQuestReleaseEntityDict; // x0

  if ( (byte_4BC8059 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__Clear__, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___Clear__, v3);
    byte_4BC8059 = 1;
  }
  DataMasterBase_object__object__object___Clear(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    (const MethodInfo_324BAE8 *)Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__Clear__);
  cachedQuestReleaseEntityDict = this->fields.cachedQuestReleaseEntityDict;
  if ( !cachedQuestReleaseEntityDict )
    sub_1C1AE30(0LL, v4);
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)cachedQuestReleaseEntityDict,
    (const MethodInfo_32A2484 *)Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___Clear__);
  this->fields.isCached = 0;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestReleaseMaster__EventPointWinActionType(
        QuestReleaseMaster_o *this,
        int32_t questId,
        bool winGroup1,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v9; // w22
  Il2CppObject *Item; // x0
  int klass_high; // w8

  if ( (byte_4BC8060 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__, *(_QWORD *)&questId);
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__, v7);
    byte_4BC8060 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_12:
    sub_1C1AE30(list, *(_QWORD *)&questId);
  v9 = 0;
  while ( 1 )
  {
    if ( v9 >= System_Collections_ObjectModel_Collection_object___get_Count(
                 list,
                 (const MethodInfo_31E297C *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__) )
      return 0;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_12;
    Item = System_Collections_ObjectModel_Collection_object___get_Item(
             list,
             v9,
             (const MethodInfo_31E2A0C *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__);
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
    ++v9;
    if ( !list )
      goto LABEL_12;
  }
  if ( winGroup1 )
    return 1;
  else
    return 2;
}


// local variable allocation has failed, the output may be wrong!
QuestReleaseEntity_o *__fastcall QuestReleaseMaster__GetEntity(
        QuestReleaseMaster_o *this,
        int32_t questId,
        int32_t type,
        int32_t targetId,
        int64_t value,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4BC8055 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__GetEntity__, *(_QWORD *)&questId);
    byte_4BC8055 = 1;
  }
  PK = (Il2CppObject *)QuestReleaseEntity__CreatePK(questId, type, targetId, value, (const MethodInfo *)value);
  return (QuestReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                   PK,
                                   (const MethodInfo_324D130 *)Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall QuestReleaseMaster__GetQuestIdList(
        QuestReleaseMaster_o *this,
        int32_t type,
        int32_t targetId,
        int32_t value,
        const MethodInfo *method)
{
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
  void *Instance; // x0
  __int64 v29; // x1
  Il2CppObject *MasterData_object; // x24
  System_Collections_Generic_List_object__o *v31; // x23
  int32_t v32; // w25
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  int64_t v42; // x1
  Il2CppClass **v43; // x0
  System_Comparison_T__o *v44; // x19
  Il2CppObject *v45; // x20
  struct QuestReleaseMaster___c_StaticFields *static_fields; // x0
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  System_Collections_Generic_List_int__o *v53; // x19
  _BOOL8 v54; // x0
  __int64 v55; // x1
  __int64 klass_low; // x1
  struct System_Int32_array *v57; // x8
  _QWORD *v58; // x9
  __int64 v59; // x10
  System_Collections_Generic_List_Enumerator_object__o v61; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v62; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4BC805F & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__, *(_QWORD *)&type);
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__, v9);
    sub_1C1ABD4(&System_Comparison_QuestEntity__TypeInfo, v10);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_QuestMaster___, v11);
    sub_1C1ABD4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v12);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__, v13);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__, v14);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__get_Current__, v15);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int__Add__, v16);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_QuestEntity__Add__, v17);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__, v18);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_QuestEntity__Sort__, v19);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int__ToArray__, v20);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int___ctor__, v21);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_QuestEntity___ctor__, v22);
    sub_1C1ABD4(&System_Collections_Generic_List_int__TypeInfo, v23);
    sub_1C1ABD4(&System_Collections_Generic_List_QuestEntity__TypeInfo, v24);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    sub_1C1ABD4(&Method_QuestReleaseMaster___c__GetQuestIdList_b__12_0__, v26);
    sub_1C1ABD4(&QuestReleaseMaster___c_TypeInfo, v27);
    byte_4BC805F = 1;
  }
  memset(&v62, 0, sizeof(v62));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_QuestMaster___);
  v31 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_QuestEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_QuestEntity___ctor__);
  Instance = this->fields.list;
  if ( !Instance )
    goto LABEL_21;
  v32 = 0;
  while ( v32 < System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)Instance,
                  (const MethodInfo_31E297C *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__) )
  {
    Instance = this->fields.list;
    if ( !Instance )
      goto LABEL_21;
    Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 v32,
                 (const MethodInfo_31E2A0C *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__);
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
                   (const MethodInfo_3248678 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
      if ( Instance )
      {
        if ( !v31 )
          goto LABEL_21;
        items = v31->fields._items;
        v40 = Method_System_Collections_Generic_List_QuestEntity__Add__;
        ++v31->fields._version;
        if ( !items )
          goto LABEL_21;
        size = v31->fields._size;
        v42 = (int64_t)Instance;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v31,
            (Il2CppObject *)Instance,
            *(const MethodInfo_363C890 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
        }
        else
        {
          v43 = &items->obj.klass + size;
          v31->fields._size = size + 1;
          v43[4] = (Il2CppClass *)v42;
          sub_1C1AB78((PartyOrganizationUtility_o *)(v43 + 4), v42, v33, v34, v35, v36, v37, v38);
        }
      }
    }
    Instance = this->fields.list;
    ++v32;
    if ( !Instance )
      goto LABEL_21;
  }
  Instance = QuestReleaseMaster___c_TypeInfo;
  if ( !QuestReleaseMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestReleaseMaster___c_TypeInfo);
    Instance = QuestReleaseMaster___c_TypeInfo;
  }
  v44 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 8LL);
  if ( !v44 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = QuestReleaseMaster___c_TypeInfo;
    }
    v45 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v44 = (System_Comparison_T__o *)sub_1C1AE20(System_Comparison_QuestEntity__TypeInfo);
    System_Comparison_object____ctor(v44, v45, Method_QuestReleaseMaster___c__GetQuestIdList_b__12_0__, 0LL);
    static_fields = QuestReleaseMaster___c_TypeInfo->static_fields;
    static_fields->__9__12_0 = (struct System_Comparison_QuestEntity__o *)v44;
    sub_1C1AB78((PartyOrganizationUtility_o *)&static_fields->__9__12_0, (int64_t)v44, v47, v48, v49, v50, v51, v52);
  }
  if ( !v31 )
    goto LABEL_21;
  System_Collections_Generic_List_object___Sort_56877908(
    v31,
    v44,
    (const MethodInfo_363E354 *)Method_System_Collections_Generic_List_QuestEntity__Sort__);
  v53 = (System_Collections_Generic_List_int__o *)sub_1C1AE20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v53,
    (const MethodInfo_361F018 *)Method_System_Collections_Generic_List_int___ctor__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v61,
    v31,
    (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__);
  v62 = v61;
  while ( 1 )
  {
    v54 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v62,
            (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__);
    if ( !v54 )
      break;
    if ( !v62.fields._current )
      sub_1C1AE30(v54, v55);
    if ( !v53 )
      sub_1C1AE30(v54, v55);
    klass_low = LODWORD(v62.fields._current[1].klass);
    v57 = v53->fields._items;
    v58 = Method_System_Collections_Generic_List_int__Add__;
    ++v53->fields._version;
    if ( !v57 )
      sub_1C1AE30(v54, klass_low);
    v59 = v53->fields._size;
    if ( (unsigned int)v59 >= v57->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v53,
        klass_low,
        *(const MethodInfo_361F86C **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
    }
    else
    {
      v53->fields._size = v59 + 1;
      v57->m_Items[v59 + 1] = klass_low;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v62,
    (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__);
  if ( !v53 )
LABEL_21:
    sub_1C1AE30(Instance, v29);
  return System_Collections_Generic_List_int___ToArray(
           v53,
           (const MethodInfo_3621324 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestReleaseMaster__IsContainCondType(
        QuestReleaseMaster_o *this,
        int32_t targetId,
        int32_t condType,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  void *Master_object; // x0
  __int64 v11; // x1
  CommonReleaseMaster_o *v12; // x22
  int32_t Count; // w0
  int32_t v14; // w23
  int32_t v15; // w24
  int v16; // w8

  if ( (byte_4BC805E & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__, *(_QWORD *)&targetId);
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__, v7);
    sub_1C1ABD4(&Method_DataManager_GetMaster_CommonReleaseMaster___, v8);
    sub_1C1ABD4(&DataManager_TypeInfo, v9);
    byte_4BC805E = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !this->fields.list )
LABEL_18:
    sub_1C1AE30(Master_object, v11);
  v12 = (CommonReleaseMaster_o *)Master_object;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_31E297C *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__);
  if ( Count < 1 )
    return 0;
  v14 = Count;
  v15 = 0;
  while ( 1 )
  {
    Master_object = this->fields.list;
    if ( !Master_object )
      goto LABEL_18;
    Master_object = System_Collections_ObjectModel_Collection_object___get_Item(
                      (System_Collections_ObjectModel_Collection_T__o *)Master_object,
                      v15,
                      (const MethodInfo_31E2A0C *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__);
    if ( Master_object && *((_DWORD *)Master_object + 4) == targetId )
    {
      v16 = *((_DWORD *)Master_object + 5);
      if ( v16 == condType )
        return 1;
      if ( v16 == 113 )
      {
        if ( !v12 )
          goto LABEL_18;
        if ( CommonReleaseMaster__IsContainCondType(v12, *((_DWORD *)Master_object + 6), condType, 0LL) )
          return 1;
      }
    }
    if ( v14 == ++v15 )
      return 0;
  }
}


bool __fastcall QuestReleaseMaster__IsContainUnPlayableQuestByTargetId(
        QuestReleaseMaster_o *this,
        System_Int32_array *questIdList,
        int32_t targetId,
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
  __int64 v17; // x21
  int64_t Master_object; // x0
  __int64 v19; // x1
  QuestGroupMaster_o *v20; // x22
  int32_t Count; // w0
  int32_t v22; // w23
  int32_t v23; // w24
  __int64 v24; // x27
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  __int64 v31; // x26
  System_Predicate_int__o *v32; // x28
  const MethodInfo *v33; // x3
  _DWORD *v34; // x8
  int v35; // w9
  int v36; // w10
  _DWORD *v37; // x8
  System_Int32_array *QuestIdListByGroupId; // x0
  System_Int32_array *v39; // x27
  System_Predicate_int__o *klass; // x28
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  PartyOrganizationUtility_o *v48; // [xsp+0h] [xbp-70h]

  if ( (byte_4BC8062 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Array_Exists_int___, questIdList);
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__, v7);
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__, v8);
    sub_1C1ABD4(&Method_DataManager_GetMaster_QuestGroupMaster___, v9);
    sub_1C1ABD4(&DataManager_TypeInfo, v10);
    sub_1C1ABD4(&System_Predicate_int__TypeInfo, v11);
    sub_1C1ABD4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v12);
    sub_1C1ABD4(&Method_QuestReleaseMaster___c__DisplayClass15_0__IsContainUnPlayableQuestByTargetId_b__1__, v13);
    sub_1C1ABD4(&QuestReleaseMaster___c__DisplayClass15_0_TypeInfo, v14);
    sub_1C1ABD4(&Method_QuestReleaseMaster___c__DisplayClass15_1__IsContainUnPlayableQuestByTargetId_b__0__, v15);
    sub_1C1ABD4(&QuestReleaseMaster___c__DisplayClass15_1_TypeInfo, v16);
    byte_4BC8062 = 1;
  }
  v17 = sub_1C1AE20(QuestReleaseMaster___c__DisplayClass15_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    goto LABEL_36;
  *(_DWORD *)(v17 + 16) = targetId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !this->fields.list )
LABEL_36:
    sub_1C1AE30(Master_object, v19);
  v20 = (QuestGroupMaster_o *)Master_object;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_31E297C *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__);
  if ( Count < 1 )
    return 0;
  v22 = Count;
  v23 = 0;
  v48 = (PartyOrganizationUtility_o *)(v17 + 24);
  while ( 1 )
  {
    v24 = sub_1C1AE20(QuestReleaseMaster___c__DisplayClass15_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v24, 0LL);
    Master_object = (int64_t)this->fields.list;
    if ( !Master_object )
      goto LABEL_36;
    Master_object = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                               (System_Collections_ObjectModel_Collection_T__o *)Master_object,
                               v23,
                               (const MethodInfo_31E2A0C *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__);
    if ( !v24 )
      goto LABEL_36;
    *(_QWORD *)(v24 + 16) = Master_object;
    v31 = v24 + 16;
    sub_1C1AB78((PartyOrganizationUtility_o *)(v24 + 16), Master_object, v25, v26, v27, v28, v29, v30);
    if ( *(_QWORD *)(v24 + 16) )
    {
      v32 = (System_Predicate_int__o *)sub_1C1AE20(System_Predicate_int__TypeInfo);
      System_Predicate_int____ctor(
        v32,
        (Il2CppObject *)v24,
        Method_QuestReleaseMaster___c__DisplayClass15_1__IsContainUnPlayableQuestByTargetId_b__0__,
        0LL);
      Master_object = System_Array__Exists_int_(
                        questIdList,
                        (System_Predicate_T__o *)v32,
                        (const MethodInfo_3099ECC *)Method_System_Array_Exists_int___);
      if ( (Master_object & 1) != 0 )
      {
        v34 = *(_DWORD **)v31;
        if ( !*(_QWORD *)v31 )
          goto LABEL_36;
        v35 = *(_DWORD *)(v17 + 16);
        if ( v34[4] != v35 )
        {
          v36 = v34[5];
          if ( v36 == 32 )
          {
            Master_object = (int64_t)v20;
            if ( !v20 )
              goto LABEL_36;
            QuestIdListByGroupId = QuestGroupMaster__GetQuestIdListByGroupId(v20, v34[6], 2, v33);
            if ( !QuestIdListByGroupId )
              goto LABEL_33;
            v39 = QuestIdListByGroupId;
            if ( !*(_QWORD *)&QuestIdListByGroupId->max_length )
              goto LABEL_33;
            klass = (System_Predicate_int__o *)v48->klass;
            if ( !v48->klass )
            {
              klass = (System_Predicate_int__o *)sub_1C1AE20(System_Predicate_int__TypeInfo);
              System_Predicate_int____ctor(
                klass,
                (Il2CppObject *)v17,
                Method_QuestReleaseMaster___c__DisplayClass15_0__IsContainUnPlayableQuestByTargetId_b__1__,
                0LL);
              *(_QWORD *)(v17 + 24) = klass;
              sub_1C1AB78(v48, (int64_t)klass, v41, v42, v43, v44, v45, v46);
            }
            if ( !System_Array__Exists_int_(
                    v39,
                    (System_Predicate_T__o *)klass,
                    (const MethodInfo_3099ECC *)Method_System_Array_Exists_int___) )
              goto LABEL_33;
            Master_object = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_387ACC8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
            v37 = *(_DWORD **)v31;
            if ( !*(_QWORD *)v31 || !Master_object )
              goto LABEL_36;
          }
          else
          {
            if ( v36 != 1 || v34[6] != v35 )
              goto LABEL_33;
            Master_object = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_387ACC8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
            v37 = *(_DWORD **)v31;
            if ( !*(_QWORD *)v31 || !Master_object )
              goto LABEL_36;
          }
          if ( clsQuestCheck__CheckQuestPlayableNow((clsQuestCheck_o *)Master_object, v37[4], 0LL) )
            return 1;
          Master_object = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_387ACC8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
          if ( !*(_QWORD *)v31 || !Master_object )
            goto LABEL_36;
          if ( clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Master_object, *(_DWORD *)(*(_QWORD *)v31 + 16LL), 0, 0LL) )
            return 1;
        }
      }
    }
LABEL_33:
    if ( v22 == ++v23 )
      return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestReleaseMaster__IsQuestOfResultBattleCleared(
        QuestReleaseMaster_o *this,
        int32_t targetId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v8; // w21
  int32_t Count; // w22
  Il2CppObject *Item; // x0
  Il2CppObject *v11; // x23

  if ( (byte_4BC8061 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__, *(_QWORD *)&targetId);
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__, v5);
    sub_1C1ABD4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v6);
    byte_4BC8061 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_13:
    sub_1C1AE30(list, *(_QWORD *)&targetId);
  v8 = 0;
  while ( 1 )
  {
    Count = System_Collections_ObjectModel_Collection_object___get_Count(
              list,
              (const MethodInfo_31E297C *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__);
    if ( v8 >= Count )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_13;
    Item = System_Collections_ObjectModel_Collection_object___get_Item(
             list,
             v8,
             (const MethodInfo_31E2A0C *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__);
    if ( Item )
    {
      v11 = Item;
      if ( (HIDWORD(Item[1].klass) & 0xFFFFFFFE) == 48 && LODWORD(Item[1].monitor) == targetId )
      {
        list = (System_Collections_ObjectModel_Collection_T__o *)SingletonTemplate_object___get_Instance((const MethodInfo_387ACC8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
        if ( !list )
          goto LABEL_13;
        if ( clsQuestCheck__IsQuestClear((clsQuestCheck_o *)list, (int32_t)v11[1].klass, 0, 0LL) )
          break;
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v8;
    if ( !list )
      goto LABEL_13;
  }
  return v8 < Count;
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

  if ( (byte_4BC8056 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__TryGetEntity__, entity);
    byte_4BC8056 = 1;
  }
  PK = (Il2CppObject *)QuestReleaseEntity__CreatePK(questId, type, targetId, value, *(const MethodInfo **)&targetId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_324D17C *)Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
QuestReleaseEntity_array *__fastcall QuestReleaseMaster__getListByQuestID(
        QuestReleaseMaster_o *this,
        int32_t qid,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *v10; // x21
  int64_t v11; // x1
  int64_t list; // x0
  int32_t v13; // w22
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0

  if ( (byte_4BC8058 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__, *(_QWORD *)&qid);
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__, v8);
    sub_1C1ABD4(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo, v9);
    byte_4BC8058 = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_18;
  v13 = 0;
  while ( 1 )
  {
    list = System_Collections_ObjectModel_Collection_object___get_Count(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             (const MethodInfo_31E297C *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__);
    if ( v13 >= (int)list )
      break;
    list = (int64_t)this->fields.list;
    if ( !list )
      goto LABEL_18;
    list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                      (System_Collections_ObjectModel_Collection_T__o *)list,
                      v13,
                      (const MethodInfo_31E2A0C *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__);
    if ( list )
    {
      v11 = list;
      if ( *(_DWORD *)(list + 16) == qid )
      {
        if ( !v10 )
          goto LABEL_18;
        items = v10->fields._items;
        v21 = Method_System_Collections_Generic_List_QuestReleaseEntity__Add__;
        ++v10->fields._version;
        if ( !items )
          goto LABEL_18;
        size = v10->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v10,
            (Il2CppObject *)list,
            *(const MethodInfo_363C890 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v23 = &items->obj.klass + size;
          v10->fields._size = size + 1;
          v23[4] = (Il2CppClass *)v11;
          sub_1C1AB78((PartyOrganizationUtility_o *)(v23 + 4), v11, v14, v15, v16, v17, v18, v19);
        }
      }
    }
    list = (int64_t)this->fields.list;
    ++v13;
    if ( !list )
      goto LABEL_18;
  }
  if ( !v10 )
LABEL_18:
    sub_1C1AE30(list, v11);
  return (QuestReleaseEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v10,
                                       (const MethodInfo_363E3E8 *)Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestReleaseMaster__getListByQuestID_40745256(
        QuestReleaseMaster_o *this,
        int32_t questId,
        System_Collections_Generic_List_QuestReleaseEntity__o **resultList,
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
  System_Collections_Generic_List_object__o *v24; // x22
  int64_t Master_object; // x0
  __int64 v26; // x1
  const MethodInfo *v27; // x4
  System_Collections_Generic_List_QuestReleaseEntity__o *v28; // x8
  int32_t v29; // w2
  int v30; // w9
  const MethodInfo *v31; // x1
  System_Collections_Generic_List_object__o *v32; // x20
  Il2CppObject *v33; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  int64_t v40; // x1
  struct System_Object_array *v41; // x8
  _QWORD *v42; // x9
  __int64 v43; // x10
  Il2CppClass **v44; // x0
  int v45; // w22
  int32_t v46; // w23
  int64_t v47; // x24
  int32_t v48; // w25
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  System_Collections_Generic_List_object__o *v55; // x26
  Il2CppClass *klass; // x8
  _QWORD *v57; // x9
  __int64 v58; // x10
  void **v59; // x8
  System_Collections_Generic_List_QuestReleaseEntity__o *v60; // x8
  int32_t size; // w2
  int v62; // w9
  int monitor; // w22
  int32_t v64; // w20
  System_Collections_Generic_List_object__o *v65; // x21
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  struct System_Object_array *items; // x8
  _QWORD *v73; // x9
  __int64 v74; // x10
  int64_t v75; // x1
  Il2CppClass **v76; // x0
  System_Collections_Generic_List_Enumerator_object__o v77; // [xsp+8h] [xbp-A8h] BYREF
  Il2CppObject *v78; // [xsp+20h] [xbp-90h] BYREF
  Il2CppObject *value; // [xsp+28h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v80; // [xsp+30h] [xbp-80h] BYREF
  System_Collections_Generic_List_QuestReleaseOverwriteEntity__o *entityList; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_4BC805A & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__, *(_QWORD *)&questId);
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__, v7);
    sub_1C1ABD4(&Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___, v8);
    sub_1C1ABD4(&DataManager_TypeInfo, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___TryGetValue__, v10);
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___set_Item__, v11);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__Dispose__, v12);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__, v13);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__get_Current__, v14);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__, v15);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_QuestReleaseEntity__Clear__, v16);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__, v17);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__, v18);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__, v19);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Count__, v20);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__, v21);
    sub_1C1ABD4(&System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo, v22);
    sub_1C1ABD4(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo, v23);
    byte_4BC805A = 1;
  }
  memset(&v80, 0, sizeof(v80));
  v78 = 0LL;
  value = 0LL;
  v24 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__);
  entityList = (System_Collections_Generic_List_QuestReleaseOverwriteEntity__o *)v24;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
  if ( !Master_object )
    goto LABEL_51;
  Master_object = QuestReleaseOverwriteMaster__TryGetEntityListByQuestIdAndTime(
                    (QuestReleaseOverwriteMaster_o *)Master_object,
                    &entityList,
                    questId,
                    0LL,
                    v27);
  if ( (Master_object & 1) == 0 )
  {
    if ( !this->fields.isCached )
    {
      Master_object = (int64_t)this->fields.list;
      if ( !Master_object )
        goto LABEL_51;
      Master_object = System_Collections_ObjectModel_Collection_object___get_Count(
                        (System_Collections_ObjectModel_Collection_T__o *)Master_object,
                        (const MethodInfo_31E297C *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__);
      if ( (int)Master_object >= 1 )
      {
        v45 = Master_object;
        v46 = 0;
        do
        {
          Master_object = (int64_t)this->fields.list;
          if ( !Master_object )
            goto LABEL_51;
          Master_object = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                                     (System_Collections_ObjectModel_Collection_T__o *)Master_object,
                                     v46,
                                     (const MethodInfo_31E2A0C *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__);
          if ( Master_object )
          {
            v47 = Master_object;
            Master_object = (int64_t)this->fields.cachedQuestReleaseEntityDict;
            if ( !Master_object )
              goto LABEL_51;
            v48 = *(_DWORD *)(v47 + 16);
            if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
                    (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
                    v48,
                    &value,
                    (const MethodInfo_32A3A88 *)Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___TryGetValue__) )
            {
              v55 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
              System_Collections_Generic_List_object____ctor(
                v55,
                (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
              value = (Il2CppObject *)v55;
              Master_object = (int64_t)this->fields.cachedQuestReleaseEntityDict;
              if ( !Master_object )
                goto LABEL_51;
              System_Collections_Generic_Dictionary_int__object___set_Item(
                (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
                v48,
                (Il2CppObject *)v55,
                (const MethodInfo_32A22E8 *)Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___set_Item__);
            }
            Master_object = (int64_t)value;
            if ( !value )
              goto LABEL_51;
            klass = value[1].klass;
            v57 = Method_System_Collections_Generic_List_QuestReleaseEntity__Add__;
            ++HIDWORD(value[1].monitor);
            if ( !klass )
              goto LABEL_51;
            v58 = *(int *)(Master_object + 24);
            if ( (unsigned int)v58 >= LODWORD(klass->_1.namespaze) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)Master_object,
                (Il2CppObject *)v47,
                *(const MethodInfo_363C890 **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
            }
            else
            {
              v59 = &klass->_1.image + v58;
              *(_DWORD *)(Master_object + 24) = v58 + 1;
              v59[4] = (void *)v47;
              sub_1C1AB78((PartyOrganizationUtility_o *)(v59 + 4), v47, v49, v50, v51, v52, v53, v54);
            }
          }
        }
        while ( v45 != ++v46 );
      }
      this->fields.isCached = 1;
    }
    v60 = *resultList;
    if ( *resultList )
    {
      size = v60->fields._size;
      v62 = v60->fields._version + 1;
      v60->fields._size = 0;
      v60->fields._version = v62;
      if ( size >= 1 )
        System_Array__Clear((System_Array_o *)v60->fields._items, 0, size, 0LL);
      Master_object = (int64_t)this->fields.cachedQuestReleaseEntityDict;
      if ( Master_object )
      {
        if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
                (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
                questId,
                &v78,
                (const MethodInfo_32A3A88 *)Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___TryGetValue__) )
          return;
        Master_object = (int64_t)v78;
        if ( v78 )
        {
          monitor = (int)v78[1].monitor;
          if ( monitor < 1 )
            return;
          v64 = 0;
          do
          {
            v65 = (System_Collections_Generic_List_object__o *)*resultList;
            Master_object = (int64_t)System_Collections_Generic_List_object___get_Item(
                                       (System_Collections_Generic_List_object__o *)Master_object,
                                       v64,
                                       (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__);
            if ( !v65 )
              break;
            items = v65->fields._items;
            v73 = Method_System_Collections_Generic_List_QuestReleaseEntity__Add__;
            ++v65->fields._version;
            if ( !items )
              break;
            v74 = v65->fields._size;
            v75 = Master_object;
            if ( (unsigned int)v74 >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v65,
                (Il2CppObject *)Master_object,
                *(const MethodInfo_363C890 **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
            }
            else
            {
              v76 = &items->obj.klass + v74;
              v65->fields._size = v74 + 1;
              v76[4] = (Il2CppClass *)v75;
              sub_1C1AB78((PartyOrganizationUtility_o *)(v76 + 4), v75, v66, v67, v68, v69, v70, v71);
            }
            if ( monitor == ++v64 )
              return;
            Master_object = (int64_t)v78;
          }
          while ( v78 );
        }
      }
    }
LABEL_51:
    sub_1C1AE30(Master_object, v26);
  }
  v28 = *resultList;
  if ( !*resultList )
    goto LABEL_51;
  v29 = v28->fields._size;
  v30 = v28->fields._version + 1;
  v28->fields._size = 0;
  v28->fields._version = v30;
  if ( v29 >= 1 )
    System_Array__Clear((System_Array_o *)v28->fields._items, 0, v29, 0LL);
  if ( !v24 )
    goto LABEL_51;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v77,
    v24,
    (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__);
  v80 = v77;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v80,
            (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__) )
  {
    if ( !v80.fields._current )
      sub_1C1AE30(0LL, v31);
    v32 = (System_Collections_Generic_List_object__o *)*resultList;
    v33 = (Il2CppObject *)QuestReleaseOverwriteEntity__ConvertToQuestReleaseEntity(
                            (QuestReleaseOverwriteEntity_o *)v80.fields._current,
                            v31);
    v40 = (int64_t)v33;
    if ( !v32 )
      sub_1C1AE30(v33, v33);
    v41 = v32->fields._items;
    v42 = Method_System_Collections_Generic_List_QuestReleaseEntity__Add__;
    ++v32->fields._version;
    if ( !v41 )
      sub_1C1AE30(v33, v33);
    v43 = v32->fields._size;
    if ( (unsigned int)v43 >= v41->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v32,
        v33,
        *(const MethodInfo_363C890 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
    }
    else
    {
      v44 = &v41->obj.klass + v43;
      v32->fields._size = v43 + 1;
      v44[4] = (Il2CppClass *)v40;
      sub_1C1AB78((PartyOrganizationUtility_o *)(v44 + 4), v40, v34, v35, v36, v37, v38, v39);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v80,
    (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_QuestReleaseEntity__o *__fastcall QuestReleaseMaster__getListByTargetAndCondType(
        QuestReleaseMaster_o *this,
        int32_t targetId,
        int32_t condType,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x22
  int64_t v12; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v15; // w23
  int32_t v16; // w24
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0

  if ( (byte_4BC805D & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__, *(_QWORD *)&targetId);
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__, v9);
    sub_1C1ABD4(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo, v10);
    byte_4BC805D = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_31E297C *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__);
  if ( Count >= 1 )
  {
    v15 = Count;
    v16 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v16,
                                                                 (const MethodInfo_31E2A0C *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__);
      if ( list )
      {
        v12 = (int64_t)list;
        if ( LODWORD(list[1].klass) == targetId && HIDWORD(list->fields.items) == condType )
        {
          if ( !v11 )
            break;
          items = v11->fields._items;
          v24 = Method_System_Collections_Generic_List_QuestReleaseEntity__Add__;
          ++v11->fields._version;
          if ( !items )
            break;
          size = v11->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v11,
              (Il2CppObject *)list,
              *(const MethodInfo_363C890 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
          }
          else
          {
            v26 = &items->obj.klass + size;
            v11->fields._size = size + 1;
            v26[4] = (Il2CppClass *)v12;
            sub_1C1AB78((PartyOrganizationUtility_o *)(v26 + 4), v12, v17, v18, v19, v20, v21, v22);
          }
        }
      }
      if ( v15 == ++v16 )
        return (System_Collections_Generic_List_QuestReleaseEntity__o *)v11;
    }
LABEL_17:
    sub_1C1AE30(list, v12);
  }
  return (System_Collections_Generic_List_QuestReleaseEntity__o *)v11;
}


// local variable allocation has failed, the output may be wrong!
QuestReleaseEntity_array *__fastcall QuestReleaseMaster__getListByType(
        QuestReleaseMaster_o *this,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *v10; // x21
  int64_t v11; // x1
  int64_t list; // x0
  int32_t v13; // w22
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0

  if ( (byte_4BC805B & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__, *(_QWORD *)&type);
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__, v8);
    sub_1C1ABD4(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo, v9);
    byte_4BC805B = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_18;
  v13 = 0;
  while ( 1 )
  {
    list = System_Collections_ObjectModel_Collection_object___get_Count(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             (const MethodInfo_31E297C *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__);
    if ( v13 >= (int)list )
      break;
    list = (int64_t)this->fields.list;
    if ( !list )
      goto LABEL_18;
    list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                      (System_Collections_ObjectModel_Collection_T__o *)list,
                      v13,
                      (const MethodInfo_31E2A0C *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__);
    if ( list )
    {
      v11 = list;
      if ( *(_DWORD *)(list + 20) == type )
      {
        if ( !v10 )
          goto LABEL_18;
        items = v10->fields._items;
        v21 = Method_System_Collections_Generic_List_QuestReleaseEntity__Add__;
        ++v10->fields._version;
        if ( !items )
          goto LABEL_18;
        size = v10->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v10,
            (Il2CppObject *)list,
            *(const MethodInfo_363C890 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v23 = &items->obj.klass + size;
          v10->fields._size = size + 1;
          v23[4] = (Il2CppClass *)v11;
          sub_1C1AB78((PartyOrganizationUtility_o *)(v23 + 4), v11, v14, v15, v16, v17, v18, v19);
        }
      }
    }
    list = (int64_t)this->fields.list;
    ++v13;
    if ( !list )
      goto LABEL_18;
  }
  if ( !v10 )
LABEL_18:
    sub_1C1AE30(list, v11);
  return (QuestReleaseEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v10,
                                       (const MethodInfo_363E3E8 *)Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall QuestReleaseMaster__getQuestIdsByTargetAndOpenCondType(
        QuestReleaseMaster_o *this,
        int32_t targetId,
        int32_t openCondType,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_int__o *v12; // x22
  __int64 items_low; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v15; // w23
  struct System_Int32_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10

  if ( (byte_4BC805C & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__, *(_QWORD *)&targetId);
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int__ToArray__, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int___ctor__, v10);
    sub_1C1ABD4(&System_Collections_Generic_List_int__TypeInfo, v11);
    byte_4BC805C = 1;
  }
  v12 = (System_Collections_Generic_List_int__o *)sub_1C1AE20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v12,
    (const MethodInfo_361F018 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  v15 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_31E297C *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__);
    if ( v15 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_19;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v15,
                                                               (const MethodInfo_31E2A0C *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__);
    if ( list && LODWORD(list[1].klass) == targetId && HIDWORD(list->fields.items) == openCondType )
    {
      if ( !v12 )
        goto LABEL_19;
      items_low = LODWORD(list->fields.items);
      items = v12->fields._items;
      v17 = Method_System_Collections_Generic_List_int__Add__;
      ++v12->fields._version;
      if ( !items )
        goto LABEL_19;
      size = v12->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v12,
          items_low,
          *(const MethodInfo_361F86C **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
      }
      else
      {
        v12->fields._size = size + 1;
        items->m_Items[size + 1] = items_low;
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v15;
    if ( !list )
      goto LABEL_19;
  }
  if ( !v12 )
LABEL_19:
    sub_1C1AE30(list, items_low);
  return System_Collections_Generic_List_int___ToArray(
           v12,
           (const MethodInfo_3621324 *)Method_System_Collections_Generic_List_int__ToArray__);
}


void __fastcall QuestReleaseMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BC8063 & 1) == 0 )
  {
    sub_1C1ABD4(&QuestReleaseMaster___c_TypeInfo, v1);
    byte_4BC8063 = 1;
  }
  v2 = (Il2CppObject *)sub_1C1AE20(QuestReleaseMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  QuestReleaseMaster___c_TypeInfo->static_fields->__9 = (struct QuestReleaseMaster___c_o *)v2;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)QuestReleaseMaster___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C1AE30(this, a);
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
    sub_1C1AE30(this, x);
  return data->fields.questId == x;
}