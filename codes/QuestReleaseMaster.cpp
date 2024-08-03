void __fastcall QuestReleaseMaster___ctor(QuestReleaseMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_int__object__o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_49FC966 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string___ctor__, method);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity____ctor__, v4);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___TypeInfo, v5);
    byte_49FC966 = 1;
  }
  v6 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B64314(
                                                                 System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___TypeInfo,
                                                                 method,
                                                                 v2);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v6,
    (const MethodInfo_3122FB0 *)Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity____ctor__);
  *(_QWORD *)&this->fields.isCached = v6;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.isCached, (int32_t)v6, v7, v8);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    70,
    (const MethodInfo_30D41BC *)Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string___ctor__);
}


void __fastcall QuestReleaseMaster__Clear(QuestReleaseMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v3; // x0

  if ( (byte_49FC968 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___Clear__, method);
    byte_49FC968 = 1;
  }
  DataMasterBase__Clear((DataMasterBase_o *)this, 0LL);
  v3 = *(System_Collections_Generic_Dictionary_int__object__o **)&this->fields.isCached;
  if ( !v3 )
    sub_1B64324(0LL);
  System_Collections_Generic_Dictionary_int__object___Clear(
    v3,
    (const MethodInfo_3123B0C *)Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___Clear__);
  *((_BYTE *)&this->fields.revision + 4) = 0;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestReleaseMaster__EventPointWinActionType(
        QuestReleaseMaster_o *this,
        int32_t questId,
        bool winGroup1,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v10; // w22
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x10
  int klass_high; // w8

  if ( (byte_49FC96F & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&questId);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1B640C8(&QuestReleaseEntity_TypeInfo, v8);
    byte_49FC96F = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_14:
    sub_1B64324(list);
  v10 = 0;
  while ( 1 )
  {
    if ( v10 >= System_Collections_ObjectModel_Collection_object___get_Count(
                  list,
                  (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
      return 0;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_14;
    Item = System_Collections_ObjectModel_Collection_object___get_Item(
             list,
             v10,
             (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      methodPtr_low = LOBYTE(QuestReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (QuestReleaseEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == QuestReleaseEntity_TypeInfo
        && LODWORD(Item[1].klass) == questId )
      {
        klass_high = HIDWORD(Item[1].klass);
        if ( klass_high == 49 )
          return 3;
        if ( klass_high == 48 )
          break;
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v10;
    if ( !list )
      goto LABEL_14;
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

  if ( (byte_49FC964 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__GetEntity__, *(_QWORD *)&questId);
    byte_49FC964 = 1;
  }
  PK = (Il2CppObject *)QuestReleaseEntity__CreatePK(questId, type, targetId, value, (const MethodInfo *)value);
  return (QuestReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                   PK,
                                   (const MethodInfo_30D41FC *)Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall QuestReleaseMaster__GetQuestIdList(
        QuestReleaseMaster_o *this,
        int32_t type,
        int32_t targetId,
        int32_t value,
        const MethodInfo *method)
{
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
  void *Instance; // x0
  Il2CppObject *MasterData_object; // x24
  __int64 v30; // x1
  __int64 v31; // x2
  System_Collections_Generic_List_object__o *v32; // x23
  int32_t v33; // w25
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 methodPtr_low; // x10
  int32_t v37; // w2
  int32_t v38; // w3
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  Il2CppClass *v42; // x1
  Il2CppClass **v43; // x0
  System_Comparison_T__o *v44; // x19
  Il2CppObject *v45; // x20
  struct QuestReleaseMaster___c_StaticFields *static_fields; // x0
  int32_t v47; // w2
  int32_t v48; // w3
  __int64 v49; // x1
  __int64 v50; // x2
  System_Collections_Generic_List_int__o *v51; // x19
  _BOOL8 v52; // x0
  int32_t klass; // w1
  struct System_Int32_array *v54; // x8
  _QWORD *v55; // x9
  __int64 v56; // x10
  System_Collections_Generic_List_Enumerator_object__o v59; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v60; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_49FC96E & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&type);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8);
    sub_1B640C8(&System_Comparison_QuestEntity__TypeInfo, v9);
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestMaster___, v10);
    sub_1B640C8(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__get_Current__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestEntity__Add__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestEntity__Sort__, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v19);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v20);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestEntity___ctor__, v21);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v22);
    sub_1B640C8(&System_Collections_Generic_List_QuestEntity__TypeInfo, v23);
    sub_1B640C8(&QuestReleaseEntity_TypeInfo, v24);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    sub_1B640C8(&Method_QuestReleaseMaster___c__GetQuestIdList_b__12_0__, v26);
    sub_1B640C8(&QuestReleaseMaster___c_TypeInfo, v27);
    byte_49FC96E = 1;
  }
  memset(&v60, 0, sizeof(v60));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestMaster___);
  v32 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_QuestEntity__TypeInfo,
                                                       v30,
                                                       v31);
  System_Collections_Generic_List_object____ctor(
    v32,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_QuestEntity___ctor__);
  Instance = this->fields.list;
  if ( !Instance )
    goto LABEL_23;
  v33 = 0;
  while ( v33 < System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)Instance,
                  (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    Instance = this->fields.list;
    if ( !Instance )
      goto LABEL_23;
    Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 v33,
                 (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Instance )
    {
      methodPtr_low = LOBYTE(QuestReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low
        && *(QuestReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == QuestReleaseEntity_TypeInfo
        && *((_DWORD *)Instance + 5) == type
        && *((_DWORD *)Instance + 6) == targetId
        && ((value & 0x80000000) != 0 || *((_DWORD *)Instance + 8) == value) )
      {
        if ( !MasterData_object )
          goto LABEL_23;
        Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                     *((_DWORD *)Instance + 4),
                     (const MethodInfo_30D3EA4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( Instance )
        {
          if ( !v32 )
            goto LABEL_23;
          items = v32->fields._items;
          v40 = Method_System_Collections_Generic_List_QuestEntity__Add__;
          ++v32->fields._version;
          if ( !items )
            goto LABEL_23;
          size = v32->fields._size;
          v42 = (Il2CppClass *)Instance;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v32,
              (Il2CppObject *)Instance,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
          }
          else
          {
            v43 = &items->obj.klass + size;
            v32->fields._size = size + 1;
            v43[4] = v42;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v43 + 4), (int32_t)v42, v37, v38);
          }
        }
      }
    }
    Instance = this->fields.list;
    ++v33;
    if ( !Instance )
      goto LABEL_23;
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
    v44 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_QuestEntity__TypeInfo, v34, v35);
    System_Comparison_object____ctor(v44, v45, Method_QuestReleaseMaster___c__GetQuestIdList_b__12_0__, 0LL);
    static_fields = QuestReleaseMaster___c_TypeInfo->static_fields;
    static_fields->__9__12_0 = (struct System_Comparison_QuestEntity__o *)v44;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__12_0, (int32_t)v44, v47, v48);
  }
  if ( !v32 )
    goto LABEL_23;
  System_Collections_Generic_List_object___Sort_55243320(
    v32,
    v44,
    (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_QuestEntity__Sort__);
  v51 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v49, v50);
  System_Collections_Generic_List_int____ctor(
    v51,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v59,
    v32,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__);
  v60 = v59;
  while ( 1 )
  {
    v52 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v60,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__);
    if ( !v52 )
      break;
    if ( !v60.fields._current )
      sub_1B64324(v52);
    if ( !v51 )
      sub_1B64324(v52);
    klass = (int32_t)v60.fields._current[1].klass;
    v54 = v51->fields._items;
    v55 = Method_System_Collections_Generic_List_int__Add__;
    ++v51->fields._version;
    if ( !v54 )
      sub_1B64324(v52);
    v56 = v51->fields._size;
    if ( (unsigned int)v56 >= v54->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v51,
        klass,
        *(const MethodInfo_348FEDC **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
    }
    else
    {
      v51->fields._size = v56 + 1;
      v54->m_Items[v56 + 1] = klass;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v60,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__);
  if ( !v51 )
LABEL_23:
    sub_1B64324(Instance);
  return System_Collections_Generic_List_int___ToArray(
           v51,
           (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  __int64 v10; // x1
  void *Master_object; // x0
  CommonReleaseMaster_o *v12; // x22
  int32_t Count; // w0
  int32_t v14; // w23
  int32_t v15; // w24
  __int64 methodPtr_low; // x10
  int v17; // w8

  if ( (byte_49FC96D & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&targetId);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1B640C8(&Method_DataManager_GetMaster_CommonReleaseMaster___, v8);
    sub_1B640C8(&DataManager_TypeInfo, v9);
    sub_1B640C8(&QuestReleaseEntity_TypeInfo, v10);
    byte_49FC96D = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !this->fields.list )
LABEL_20:
    sub_1B64324(Master_object);
  v12 = (CommonReleaseMaster_o *)Master_object;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0;
  v14 = Count;
  v15 = 0;
  while ( 1 )
  {
    Master_object = this->fields.list;
    if ( !Master_object )
      goto LABEL_20;
    Master_object = System_Collections_ObjectModel_Collection_object___get_Item(
                      (System_Collections_ObjectModel_Collection_T__o *)Master_object,
                      v15,
                      (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Master_object )
    {
      methodPtr_low = LOBYTE(QuestReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)Master_object + 304LL) >= (unsigned int)methodPtr_low
        && *(QuestReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)Master_object + 200LL) + 8 * methodPtr_low - 8) == QuestReleaseEntity_TypeInfo
        && *((_DWORD *)Master_object + 4) == targetId )
      {
        v17 = *((_DWORD *)Master_object + 5);
        if ( v17 == condType )
          return 1;
        if ( v17 == 113 )
        {
          if ( !v12 )
            goto LABEL_20;
          if ( CommonReleaseMaster__IsContainCondType(v12, *((_DWORD *)Master_object + 6), condType, 0LL) )
            return 1;
        }
      }
    }
    if ( v14 == ++v15 )
      return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v17; // x1
  __int64 v18; // x21
  QuestGroupMaster_o *Master_object; // x0
  QuestGroupMaster_o *v20; // x22
  int32_t Count; // w0
  __int64 v22; // x1
  __int64 v23; // x2
  int32_t v24; // w23
  int32_t v25; // w24
  Il2CppObject *v26; // x27
  int32_t v27; // w2
  int32_t v28; // w3
  QuestReleaseEntity_c *v29; // x8
  __int64 methodPtr_low; // x9
  Il2CppClass *v31; // x10
  int32_t v32; // w1
  ServantStatusBattleListViewItem_o *v33; // x26
  System_Predicate_int__o *v34; // x28
  const MethodInfo *v35; // x3
  ServantStatusBattleListViewItem_c *klass; // x8
  int v37; // w9
  int name_high; // w10
  ServantStatusBattleListViewItem_c *v39; // x8
  System_Int32_array *QuestIdListByGroupId; // x0
  System_Int32_array *v41; // x27
  System_Predicate_int__o *v42; // x28
  int32_t v43; // w2
  int32_t v44; // w3
  ServantStatusBattleListViewItem_o *v46; // [xsp+0h] [xbp-70h]

  if ( (byte_49FC971 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_Exists_int___, questIdList);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v7);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8);
    sub_1B640C8(&Method_DataManager_GetMaster_QuestGroupMaster___, v9);
    sub_1B640C8(&DataManager_TypeInfo, v10);
    sub_1B640C8(&System_Predicate_int__TypeInfo, v11);
    sub_1B640C8(&QuestReleaseEntity_TypeInfo, v12);
    sub_1B640C8(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v13);
    sub_1B640C8(&Method_QuestReleaseMaster___c__DisplayClass15_0__IsContainUnPlayableQuestByTargetId_b__1__, v14);
    sub_1B640C8(&QuestReleaseMaster___c__DisplayClass15_0_TypeInfo, v15);
    sub_1B640C8(&Method_QuestReleaseMaster___c__DisplayClass15_1__IsContainUnPlayableQuestByTargetId_b__0__, v16);
    sub_1B640C8(&QuestReleaseMaster___c__DisplayClass15_1_TypeInfo, v17);
    byte_49FC971 = 1;
  }
  v18 = sub_1B64314(QuestReleaseMaster___c__DisplayClass15_0_TypeInfo, questIdList, *(_QWORD *)&targetId);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  if ( !v18 )
    goto LABEL_48;
  *(_DWORD *)(v18 + 16) = targetId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestGroupMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !this->fields.list )
LABEL_48:
    sub_1B64324(Master_object);
  v20 = Master_object;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0;
  v24 = Count;
  v25 = 0;
  v46 = (ServantStatusBattleListViewItem_o *)(v18 + 24);
  while ( 1 )
  {
    v26 = (Il2CppObject *)sub_1B64314(QuestReleaseMaster___c__DisplayClass15_1_TypeInfo, v22, v23);
    System_Object___ctor(v26, 0LL);
    Master_object = (QuestGroupMaster_o *)this->fields.list;
    if ( !Master_object )
      goto LABEL_48;
    Master_object = (QuestGroupMaster_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                            (System_Collections_ObjectModel_Collection_T__o *)Master_object,
                                            v25,
                                            (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !v26 )
      goto LABEL_48;
    if ( Master_object )
    {
      v29 = QuestReleaseEntity_TypeInfo;
      methodPtr_low = LOBYTE(QuestReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Master_object->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
        v31 = (QuestReleaseEntity_c *)Master_object->klass->_2.typeHierarchy[methodPtr_low - 1] == QuestReleaseEntity_TypeInfo
            ? (Il2CppClass *)Master_object
            : 0LL;
      else
        v31 = 0LL;
      v26[1].klass = v31;
      v33 = (ServantStatusBattleListViewItem_o *)&v26[1];
      if ( LOBYTE(Master_object->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
        v32 = (QuestReleaseEntity_c *)Master_object->klass->_2.typeHierarchy[methodPtr_low - 1] == v29
            ? (int)Master_object
            : 0;
      else
        v32 = 0;
    }
    else
    {
      v32 = 0;
      v26[1].klass = 0LL;
      v33 = (ServantStatusBattleListViewItem_o *)&v26[1];
    }
    sub_1B6406C(v33, v32, v27, v28);
    if ( v33->klass )
    {
      v34 = (System_Predicate_int__o *)sub_1B64314(System_Predicate_int__TypeInfo, v22, v23);
      System_Predicate_int____ctor(
        v34,
        v26,
        Method_QuestReleaseMaster___c__DisplayClass15_1__IsContainUnPlayableQuestByTargetId_b__0__,
        0LL);
      Master_object = (QuestGroupMaster_o *)System_Array__Exists_int_(
                                              questIdList,
                                              (System_Predicate_T__o *)v34,
                                              (const MethodInfo_2F2F9DC *)Method_System_Array_Exists_int___);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        klass = v33->klass;
        if ( !v33->klass )
          goto LABEL_48;
        v37 = *(_DWORD *)(v18 + 16);
        if ( LODWORD(klass->_1.name) != v37 )
        {
          name_high = HIDWORD(klass->_1.name);
          if ( name_high == 32 )
          {
            Master_object = v20;
            if ( !v20 )
              goto LABEL_48;
            QuestIdListByGroupId = QuestGroupMaster__GetQuestIdListByGroupId(v20, (int32_t)klass->_1.namespaze, 2, v35);
            if ( !QuestIdListByGroupId )
              goto LABEL_45;
            v41 = QuestIdListByGroupId;
            if ( !*(_QWORD *)&QuestIdListByGroupId->max_length )
              goto LABEL_45;
            v42 = (System_Predicate_int__o *)v46->klass;
            if ( !v46->klass )
            {
              v42 = (System_Predicate_int__o *)sub_1B64314(System_Predicate_int__TypeInfo, v22, v23);
              System_Predicate_int____ctor(
                v42,
                (Il2CppObject *)v18,
                Method_QuestReleaseMaster___c__DisplayClass15_0__IsContainUnPlayableQuestByTargetId_b__1__,
                0LL);
              *(_QWORD *)(v18 + 24) = v42;
              sub_1B6406C(v46, (int32_t)v42, v43, v44);
            }
            if ( !System_Array__Exists_int_(
                    v41,
                    (System_Predicate_T__o *)v42,
                    (const MethodInfo_2F2F9DC *)Method_System_Array_Exists_int___) )
              goto LABEL_45;
            Master_object = (QuestGroupMaster_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
            v39 = v33->klass;
            if ( !v33->klass || !Master_object )
              goto LABEL_48;
          }
          else
          {
            if ( name_high != 1 || LODWORD(klass->_1.namespaze) != v37 )
              goto LABEL_45;
            Master_object = (QuestGroupMaster_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
            v39 = v33->klass;
            if ( !v33->klass || !Master_object )
              goto LABEL_48;
          }
          if ( clsQuestCheck__CheckQuestPlayableNow((clsQuestCheck_o *)Master_object, (int32_t)v39->_1.name, 0LL) )
            return 1;
          Master_object = (QuestGroupMaster_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
          if ( !v33->klass || !Master_object )
            goto LABEL_48;
          if ( clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Master_object, (int32_t)v33->klass->_1.name, 0, 0LL) )
            return 1;
        }
      }
    }
LABEL_45:
    if ( v24 == ++v25 )
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
  __int64 v7; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v9; // w21
  int32_t Count; // w22
  Il2CppObject *Item; // x0
  Il2CppObject *v12; // x23
  __int64 methodPtr_low; // x10

  if ( (byte_49FC970 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&targetId);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B640C8(&QuestReleaseEntity_TypeInfo, v6);
    sub_1B640C8(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v7);
    byte_49FC970 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_15:
    sub_1B64324(list);
  v9 = 0;
  while ( 1 )
  {
    Count = System_Collections_ObjectModel_Collection_object___get_Count(
              list,
              (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v9 >= Count )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_15;
    Item = System_Collections_ObjectModel_Collection_object___get_Item(
             list,
             v9,
             (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v12 = Item;
      methodPtr_low = LOBYTE(QuestReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (QuestReleaseEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == QuestReleaseEntity_TypeInfo
        && (HIDWORD(Item[1].klass) & 0xFFFFFFFE) == 48
        && LODWORD(Item[1].monitor) == targetId )
      {
        list = (System_Collections_ObjectModel_Collection_T__o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
        if ( !list )
          goto LABEL_15;
        if ( clsQuestCheck__IsQuestClear((clsQuestCheck_o *)list, (int32_t)v12[1].klass, 0, 0LL) )
          break;
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v9;
    if ( !list )
      goto LABEL_15;
  }
  return v9 < Count;
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

  if ( (byte_49FC965 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__TryGetEntity__, entity);
    byte_49FC965 = 1;
  }
  PK = (Il2CppObject *)QuestReleaseEntity__CreatePK(questId, type, targetId, value, *(const MethodInfo **)&targetId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D424C *)Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__TryGetEntity__);
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
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x21
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v13; // w22
  int32_t v14; // w2
  int32_t v15; // w3
  System_Collections_ObjectModel_Collection_T__o *v16; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  if ( (byte_49FC967 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&qid);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__, v8);
    sub_1B640C8(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo, v9);
    sub_1B640C8(&QuestReleaseEntity_TypeInfo, v10);
    byte_49FC967 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_QuestReleaseEntity__TypeInfo,
                                                       *(_QWORD *)&qid,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  v13 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v13 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_20;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v13,
                                                               (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v16 = list;
      methodPtr_low = LOBYTE(QuestReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (QuestReleaseEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == QuestReleaseEntity_TypeInfo
        && LODWORD(list->fields.items) == qid )
      {
        if ( !v11 )
          goto LABEL_20;
        items = v11->fields._items;
        v19 = Method_System_Collections_Generic_List_QuestReleaseEntity__Add__;
        ++v11->fields._version;
        if ( !items )
          goto LABEL_20;
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            (Il2CppObject *)list,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v21 = &items->obj.klass + size;
          v11->fields._size = size + 1;
          v21[4] = (Il2CppClass *)v16;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)v16, v14, v15);
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v13;
    if ( !list )
      goto LABEL_20;
  }
  if ( !v11 )
LABEL_20:
    sub_1B64324(list);
  return (QuestReleaseEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v11,
                                       (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestReleaseMaster__getListByQuestID_39200912(
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
  __int64 v24; // x1
  System_Collections_Generic_List_object__o *v25; // x22
  QuestReleaseOverwriteMaster_o *Master_object; // x0
  const MethodInfo *v27; // x4
  System_Collections_Generic_List_QuestReleaseEntity__o *v28; // x8
  int32_t v29; // w2
  int v30; // w9
  const MethodInfo *v31; // x1
  System_Collections_Generic_List_object__o *v32; // x20
  Il2CppObject *v33; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  Il2CppObject *v36; // x1
  struct System_Object_array *v37; // x8
  _QWORD *v38; // x9
  __int64 v39; // x10
  Il2CppClass **v40; // x0
  const MethodInfo_3125110 **v41; // x26
  int v42; // w22
  int32_t v43; // w23
  QuestReleaseOverwriteMaster_o *v44; // x24
  __int64 methodPtr_low; // x10
  int32_t MasterKind_k__BackingField; // w25
  __int64 v47; // x1
  __int64 v48; // x2
  int32_t v49; // w3
  const MethodInfo_3125110 **v50; // x29
  System_Collections_Generic_List_object__o *v51; // x26
  Il2CppClass *klass; // x8
  _QWORD *v53; // x9
  __int64 MasterName_k__BackingField_low; // x10
  void **v55; // x8
  System_Collections_Generic_List_QuestReleaseEntity__o *v56; // x8
  int32_t size; // w2
  int v58; // w9
  int monitor; // w22
  int32_t v60; // w20
  System_Collections_Generic_List_object__o *v61; // x21
  int32_t v62; // w2
  int32_t v63; // w3
  struct System_Object_array *items; // x8
  _QWORD *v65; // x9
  __int64 v66; // x10
  QuestReleaseOverwriteMaster_o *v67; // x1
  Il2CppClass **v68; // x0
  System_Collections_Generic_List_Enumerator_object__o v69; // [xsp+8h] [xbp-A8h] BYREF
  Il2CppObject *v70; // [xsp+20h] [xbp-90h] BYREF
  Il2CppObject *value; // [xsp+28h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v72; // [xsp+30h] [xbp-80h] BYREF
  System_Collections_Generic_List_QuestReleaseOverwriteEntity__o *entityList; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_49FC969 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&questId);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1B640C8(&Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___, v8);
    sub_1B640C8(&DataManager_TypeInfo, v9);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___TryGetValue__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___set_Item__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__Dispose__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__get_Current__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestReleaseEntity__Clear__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__, v19);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Count__, v20);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__, v21);
    sub_1B640C8(&System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo, v22);
    sub_1B640C8(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo, v23);
    sub_1B640C8(&QuestReleaseEntity_TypeInfo, v24);
    byte_49FC969 = 1;
  }
  memset(&v72, 0, sizeof(v72));
  v70 = 0LL;
  value = 0LL;
  v25 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo,
                                                       *(_QWORD *)&questId,
                                                       resultList);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__);
  entityList = (System_Collections_Generic_List_QuestReleaseOverwriteEntity__o *)v25;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestReleaseOverwriteMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
  if ( !Master_object )
    goto LABEL_53;
  Master_object = (QuestReleaseOverwriteMaster_o *)QuestReleaseOverwriteMaster__TryGetEntityListByQuestIdAndTime(
                                                     Master_object,
                                                     &entityList,
                                                     questId,
                                                     0LL,
                                                     v27);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
  {
    if ( !*((_BYTE *)&this->fields.revision + 4) )
    {
      Master_object = (QuestReleaseOverwriteMaster_o *)this->fields.list;
      if ( !Master_object )
        goto LABEL_53;
      Master_object = (QuestReleaseOverwriteMaster_o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                         (System_Collections_ObjectModel_Collection_T__o *)Master_object,
                                                         (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
      if ( (int)Master_object >= 1 )
      {
        v41 = (const MethodInfo_3125110 **)&Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___TryGetValue__;
        v42 = (int)Master_object;
        v43 = 0;
        do
        {
          Master_object = (QuestReleaseOverwriteMaster_o *)this->fields.list;
          if ( !Master_object )
            goto LABEL_53;
          Master_object = (QuestReleaseOverwriteMaster_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                             (System_Collections_ObjectModel_Collection_T__o *)Master_object,
                                                             v43,
                                                             (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
          if ( Master_object )
          {
            v44 = Master_object;
            methodPtr_low = LOBYTE(QuestReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
            if ( LOBYTE(Master_object->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
              && (QuestReleaseEntity_c *)Master_object->klass->_2.typeHierarchy[methodPtr_low - 1] == QuestReleaseEntity_TypeInfo )
            {
              Master_object = *(QuestReleaseOverwriteMaster_o **)&this->fields.isCached;
              if ( !Master_object )
                goto LABEL_53;
              MasterKind_k__BackingField = v44->fields._MasterKind_k__BackingField;
              if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
                      (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
                      MasterKind_k__BackingField,
                      &value,
                      *v41) )
              {
                v50 = v41;
                v51 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                                     System_Collections_Generic_List_QuestReleaseEntity__TypeInfo,
                                                                     v47,
                                                                     v48);
                System_Collections_Generic_List_object____ctor(
                  v51,
                  (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
                value = (Il2CppObject *)v51;
                Master_object = *(QuestReleaseOverwriteMaster_o **)&this->fields.isCached;
                if ( !Master_object )
                  goto LABEL_53;
                System_Collections_Generic_Dictionary_int__object___set_Item(
                  (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
                  MasterKind_k__BackingField,
                  (Il2CppObject *)v51,
                  (const MethodInfo_3123970 *)Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___set_Item__);
                v41 = v50;
              }
              Master_object = (QuestReleaseOverwriteMaster_o *)value;
              if ( !value )
                goto LABEL_53;
              klass = value[1].klass;
              v53 = Method_System_Collections_Generic_List_QuestReleaseEntity__Add__;
              ++HIDWORD(value[1].monitor);
              if ( !klass )
                goto LABEL_53;
              MasterName_k__BackingField_low = SLODWORD(Master_object->fields._MasterName_k__BackingField);
              if ( (unsigned int)MasterName_k__BackingField_low >= LODWORD(klass->_1.namespaze) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)Master_object,
                  (Il2CppObject *)v44,
                  *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
              }
              else
              {
                v55 = &klass->_1.image + MasterName_k__BackingField_low;
                LODWORD(Master_object->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
                v55[4] = v44;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)(v55 + 4), (int32_t)v44, v48, v49);
              }
            }
          }
        }
        while ( v42 != ++v43 );
      }
      *((_BYTE *)&this->fields.revision + 4) = 1;
    }
    v56 = *resultList;
    if ( *resultList )
    {
      size = v56->fields._size;
      v58 = v56->fields._version + 1;
      v56->fields._size = 0;
      v56->fields._version = v58;
      if ( size >= 1 )
        System_Array__Clear((System_Array_o *)v56->fields._items, 0, size, 0LL);
      Master_object = *(QuestReleaseOverwriteMaster_o **)&this->fields.isCached;
      if ( Master_object )
      {
        if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
                (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
                questId,
                &v70,
                (const MethodInfo_3125110 *)Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___TryGetValue__) )
          return;
        Master_object = (QuestReleaseOverwriteMaster_o *)v70;
        if ( v70 )
        {
          monitor = (int)v70[1].monitor;
          if ( monitor < 1 )
            return;
          v60 = 0;
          do
          {
            v61 = (System_Collections_Generic_List_object__o *)*resultList;
            Master_object = (QuestReleaseOverwriteMaster_o *)System_Collections_Generic_List_object___get_Item(
                                                               (System_Collections_Generic_List_object__o *)Master_object,
                                                               v60,
                                                               (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__);
            if ( !v61 )
              break;
            items = v61->fields._items;
            v65 = Method_System_Collections_Generic_List_QuestReleaseEntity__Add__;
            ++v61->fields._version;
            if ( !items )
              break;
            v66 = v61->fields._size;
            v67 = Master_object;
            if ( (unsigned int)v66 >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v61,
                (Il2CppObject *)Master_object,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
            }
            else
            {
              v68 = &items->obj.klass + v66;
              v61->fields._size = v66 + 1;
              v68[4] = (Il2CppClass *)v67;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v68 + 4), (int32_t)v67, v62, v63);
            }
            if ( monitor == ++v60 )
              return;
            Master_object = (QuestReleaseOverwriteMaster_o *)v70;
          }
          while ( v70 );
        }
      }
    }
LABEL_53:
    sub_1B64324(Master_object);
  }
  v28 = *resultList;
  if ( !*resultList )
    goto LABEL_53;
  v29 = v28->fields._size;
  v30 = v28->fields._version + 1;
  v28->fields._size = 0;
  v28->fields._version = v30;
  if ( v29 >= 1 )
    System_Array__Clear((System_Array_o *)v28->fields._items, 0, v29, 0LL);
  if ( !v25 )
    goto LABEL_53;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v69,
    v25,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__);
  v72 = v69;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v72,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__) )
  {
    if ( !v72.fields._current )
      sub_1B64324(0LL);
    v32 = (System_Collections_Generic_List_object__o *)*resultList;
    v33 = (Il2CppObject *)QuestReleaseOverwriteEntity__ConvertToQuestReleaseEntity(
                            (QuestReleaseOverwriteEntity_o *)v72.fields._current,
                            v31);
    v36 = v33;
    if ( !v32 )
      sub_1B64324(v33);
    v37 = v32->fields._items;
    v38 = Method_System_Collections_Generic_List_QuestReleaseEntity__Add__;
    ++v32->fields._version;
    if ( !v37 )
      sub_1B64324(v33);
    v39 = v32->fields._size;
    if ( (unsigned int)v39 >= v37->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v32,
        v33,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
    }
    else
    {
      v40 = &v37->obj.klass + v39;
      v32->fields._size = v39 + 1;
      v40[4] = (Il2CppClass *)v36;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v40 + 4), (int32_t)v36, v34, v35);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v72,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__Dispose__);
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
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x22
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v15; // w23
  int32_t v16; // w24
  int32_t v17; // w2
  int32_t v18; // w3
  System_Collections_ObjectModel_Collection_T__o *v19; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0

  if ( (byte_49FC96C & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&targetId);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__, v9);
    sub_1B640C8(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo, v10);
    sub_1B640C8(&QuestReleaseEntity_TypeInfo, v11);
    byte_49FC96C = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_QuestReleaseEntity__TypeInfo,
                                                       *(_QWORD *)&targetId,
                                                       *(_QWORD *)&condType);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                                                                 (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v19 = list;
        methodPtr_low = LOBYTE(QuestReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (QuestReleaseEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == QuestReleaseEntity_TypeInfo
          && LODWORD(list[1].klass) == targetId
          && HIDWORD(list->fields.items) == condType )
        {
          if ( !v12 )
            break;
          items = v12->fields._items;
          v22 = Method_System_Collections_Generic_List_QuestReleaseEntity__Add__;
          ++v12->fields._version;
          if ( !items )
            break;
          size = v12->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v12,
              (Il2CppObject *)list,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
          }
          else
          {
            v24 = &items->obj.klass + size;
            v12->fields._size = size + 1;
            v24[4] = (Il2CppClass *)v19;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v24 + 4), (int32_t)v19, v17, v18);
          }
        }
      }
      if ( v15 == ++v16 )
        return (System_Collections_Generic_List_QuestReleaseEntity__o *)v12;
    }
LABEL_19:
    sub_1B64324(list);
  }
  return (System_Collections_Generic_List_QuestReleaseEntity__o *)v12;
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
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x21
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v13; // w22
  int32_t v14; // w2
  int32_t v15; // w3
  System_Collections_ObjectModel_Collection_T__o *v16; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  if ( (byte_49FC96A & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&type);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__, v8);
    sub_1B640C8(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo, v9);
    sub_1B640C8(&QuestReleaseEntity_TypeInfo, v10);
    byte_49FC96A = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_QuestReleaseEntity__TypeInfo,
                                                       *(_QWORD *)&type,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  v13 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v13 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_20;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v13,
                                                               (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v16 = list;
      methodPtr_low = LOBYTE(QuestReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (QuestReleaseEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == QuestReleaseEntity_TypeInfo
        && HIDWORD(list->fields.items) == type )
      {
        if ( !v11 )
          goto LABEL_20;
        items = v11->fields._items;
        v19 = Method_System_Collections_Generic_List_QuestReleaseEntity__Add__;
        ++v11->fields._version;
        if ( !items )
          goto LABEL_20;
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            (Il2CppObject *)list,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v21 = &items->obj.klass + size;
          v11->fields._size = size + 1;
          v21[4] = (Il2CppClass *)v16;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)v16, v14, v15);
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v13;
    if ( !list )
      goto LABEL_20;
  }
  if ( !v11 )
LABEL_20:
    sub_1B64324(list);
  return (QuestReleaseEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v11,
                                       (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__);
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
  __int64 v12; // x1
  System_Collections_Generic_List_int__o *v13; // x22
  void *list; // x0
  int32_t v15; // w23
  __int64 methodPtr_low; // x10
  int32_t v17; // w1
  struct System_Int32_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10

  if ( (byte_49FC96B & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&targetId);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v10);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v11);
    sub_1B640C8(&QuestReleaseEntity_TypeInfo, v12);
    byte_49FC96B = 1;
  }
  v13 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    *(_QWORD *)&targetId,
                                                    *(_QWORD *)&openCondType);
  System_Collections_Generic_List_int____ctor(
    v13,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_21;
  v15 = 0;
  while ( 1 )
  {
    list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                     (System_Collections_ObjectModel_Collection_T__o *)list,
                     (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v15 >= (int)list )
      break;
    list = this->fields.list;
    if ( !list )
      goto LABEL_21;
    list = System_Collections_ObjectModel_Collection_object___get_Item(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             v15,
             (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      methodPtr_low = LOBYTE(QuestReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
        && *(QuestReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == QuestReleaseEntity_TypeInfo
        && *((_DWORD *)list + 6) == targetId
        && *((_DWORD *)list + 5) == openCondType )
      {
        if ( !v13 )
          goto LABEL_21;
        v17 = *((_DWORD *)list + 4);
        items = v13->fields._items;
        v19 = Method_System_Collections_Generic_List_int__Add__;
        ++v13->fields._version;
        if ( !items )
          goto LABEL_21;
        size = v13->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v13,
            v17,
            *(const MethodInfo_348FEDC **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v13->fields._size = size + 1;
          items->m_Items[size + 1] = v17;
        }
      }
    }
    list = this->fields.list;
    ++v15;
    if ( !list )
      goto LABEL_21;
  }
  if ( !v13 )
LABEL_21:
    sub_1B64324(list);
  return System_Collections_Generic_List_int___ToArray(
           v13,
           (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
}


void __fastcall QuestReleaseMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FC972 & 1) == 0 )
  {
    sub_1B640C8(&QuestReleaseMaster___c_TypeInfo, v1);
    byte_49FC972 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(QuestReleaseMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  QuestReleaseMaster___c_TypeInfo->static_fields->__9 = (struct QuestReleaseMaster___c_o *)v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)QuestReleaseMaster___c_TypeInfo->static_fields, (int32_t)v3, v4, v5);
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
  const MethodInfo *v5; // x1

  if ( !b || (this = (QuestReleaseMaster___c_o *)QuestEntity__getPriority(b, (const MethodInfo *)a), !a) )
    sub_1B64324(this);
  return (_DWORD)this - QuestEntity__getPriority(a, v5);
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
    sub_1B64324(this);
  return data->fields.questId == x;
}