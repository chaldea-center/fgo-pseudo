void QuestReleaseMaster___ctor(QuestReleaseMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4CB6A1B & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity____ctor__);
    sub_1C6BA08(&System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___TypeInfo);
    byte_4CB6A1B = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C6BC54(System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v3,
    (const MethodInfo_3451B1C *)Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity____ctor__);
  this->fields.cachedQuestReleaseEntityDict = (struct System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___o *)v3;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.cachedQuestReleaseEntityDict, (int32_t)v3, v4, v5);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    74,
    (const MethodInfo_33FB870 *)Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string___ctor__);
}


void QuestReleaseMaster__Clear(QuestReleaseMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___o *cachedQuestReleaseEntityDict; // x0

  if ( (byte_4CB6A1D & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__Clear__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___Clear__);
    byte_4CB6A1D = 1;
  }
  DataMasterBase_object__object__object___Clear(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    (const MethodInfo_33FC54C *)Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__Clear__);
  cachedQuestReleaseEntityDict = this->fields.cachedQuestReleaseEntityDict;
  if ( !cachedQuestReleaseEntityDict )
    sub_1C6BC60(0, v3);
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)cachedQuestReleaseEntityDict,
    (const MethodInfo_3452678 *)Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___Clear__);
  this->fields.isCached = 0;
}


// local variable allocation has failed, the output may be wrong!
int32_t QuestReleaseMaster__EventPointWinActionType(
        QuestReleaseMaster_o *this,
        int32_t questId,
        bool winGroup1,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v8; // w22
  Il2CppObject *Item; // x0
  int klass_high; // w8

  if ( (byte_4CB6A25 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__);
    byte_4CB6A25 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_12:
    sub_1C6BC60(list, *(_QWORD *)&questId);
  v8 = 0;
  while ( 1 )
  {
    if ( v8 >= System_Collections_ObjectModel_Collection_object___get_Count(
                 list,
                 (const MethodInfo_3391E64 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__) )
      return 0;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_12;
    Item = System_Collections_ObjectModel_Collection_object___get_Item(
             list,
             v8,
             (const MethodInfo_3391EF4 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__);
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


QuestReleaseEntity_o *QuestReleaseMaster__GetEntity(
        QuestReleaseMaster_o *this,
        int32_t questId,
        int32_t type,
        int32_t targetId,
        int64_t value,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4CB6A19 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__GetEntity__);
    byte_4CB6A19 = 1;
  }
  PK = (Il2CppObject *)QuestReleaseEntity__CreatePK(questId, type, targetId, value, (const MethodInfo *)value);
  return (QuestReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                   PK,
                                   (const MethodInfo_33FDB94 *)Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__GetEntity__);
}


System_Collections_Generic_List_QuestReleaseEntity__o *QuestReleaseMaster__GetListByQuestIdTargetIdAndCondType(
        QuestReleaseMaster_o *this,
        int32_t questId,
        int32_t targetId,
        int32_t condType,
        const MethodInfo *method)
{
  __int64 v9; // x23
  __int64 v10; // x0
  __int64 v11; // x1
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  System_Func_object__bool__o *v13; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0

  if ( (byte_4CB6A21 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToList_QuestReleaseEntity___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Where_QuestReleaseEntity___);
    sub_1C6BA08(&System_Func_QuestReleaseEntity__bool__TypeInfo);
    sub_1C6BA08(&Method_QuestReleaseMaster___c__DisplayClass10_0__GetListByQuestIdTargetIdAndCondType_b__0__);
    sub_1C6BA08(&QuestReleaseMaster___c__DisplayClass10_0_TypeInfo);
    byte_4CB6A21 = 1;
  }
  v9 = sub_1C6BC54(QuestReleaseMaster___c__DisplayClass10_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    sub_1C6BC60(v10, v11);
  *(_DWORD *)(v9 + 16) = questId;
  *(_DWORD *)(v9 + 20) = targetId;
  *(_DWORD *)(v9 + 24) = condType;
  list = this->fields.list;
  v13 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_QuestReleaseEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v13,
    (Il2CppObject *)v9,
    Method_QuestReleaseMaster___c__DisplayClass10_0__GetListByQuestIdTargetIdAndCondType_b__0__,
    0);
  v14 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__bool__o *)v13,
          (const MethodInfo_3182364 *)Method_System_Linq_Enumerable_Where_QuestReleaseEntity___);
  return (System_Collections_Generic_List_QuestReleaseEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                    v14,
                                                                    (const MethodInfo_317FEE4 *)Method_System_Linq_Enumerable_ToList_QuestReleaseEntity___);
}


System_Int32_array *QuestReleaseMaster__GetQuestIdList(
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
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass *v19; // x1
  Il2CppClass **v20; // x0
  System_Comparison_T__o *v21; // x19
  Il2CppObject *v22; // x20
  struct QuestReleaseMaster___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  System_Collections_Generic_List_int__o *v26; // x19
  _BOOL8 v27; // x0
  __int64 v28; // x1
  __int64 klass_low; // x1
  struct System_Int32_array *v30; // x8
  _QWORD *v31; // x9
  __int64 v32; // x10
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4CB6A24 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__);
    sub_1C6BA08(&System_Comparison_QuestEntity__TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C6BA08(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_QuestEntity__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_QuestEntity__Sort__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_QuestEntity___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_List_QuestEntity__TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&Method_QuestReleaseMaster___c__GetQuestIdList_b__13_0__);
    sub_1C6BA08(&QuestReleaseMaster___c_TypeInfo);
    byte_4CB6A24 = 1;
  }
  memset(&v35, 0, sizeof(v35));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_QuestMaster___);
  v12 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_QuestEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_QuestEntity___ctor__);
  Instance = this->fields.list;
  if ( !Instance )
    goto LABEL_21;
  v13 = 0;
  while ( v13 < System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)Instance,
                  (const MethodInfo_3391E64 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__) )
  {
    Instance = this->fields.list;
    if ( !Instance )
      goto LABEL_21;
    Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 v13,
                 (const MethodInfo_3391EF4 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__);
    if ( Instance
      && *((_DWORD *)Instance + 5) == type
      && *((_DWORD *)Instance + 6) == targetId
      && (value < 0 || *((_DWORD *)Instance + 8) == value) )
    {
      if ( !MasterData_object )
        goto LABEL_21;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                   *((_DWORD *)Instance + 4),
                   (const MethodInfo_33F90DC *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
      if ( Instance )
      {
        if ( !v12 )
          goto LABEL_21;
        items = v12->fields._items;
        v17 = Method_System_Collections_Generic_List_QuestEntity__Add__;
        ++v12->fields._version;
        if ( !items )
          goto LABEL_21;
        size = v12->fields._size;
        v19 = (Il2CppClass *)Instance;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v12,
            (Il2CppObject *)Instance,
            *(const MethodInfo_3800974 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
        else
        {
          v20 = &items->obj.klass + size;
          v12->fields._size = size + 1;
          v20[4] = v19;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v20 + 4), (int32_t)v19, v14, v15);
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
  v21 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 8LL);
  if ( !v21 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = QuestReleaseMaster___c_TypeInfo;
    }
    v22 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v21 = (System_Comparison_T__o *)sub_1C6BC54(System_Comparison_QuestEntity__TypeInfo);
    System_Comparison_object____ctor(v21, v22, Method_QuestReleaseMaster___c__GetQuestIdList_b__13_0__, 0);
    static_fields = QuestReleaseMaster___c_TypeInfo->static_fields;
    static_fields->__9__13_0 = (struct System_Comparison_QuestEntity__o *)v21;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__13_0, (int32_t)v21, v24, v25);
  }
  if ( !v12 )
    goto LABEL_21;
  System_Collections_Generic_List_object___Sort_58729528(
    v12,
    v21,
    (const MethodInfo_3802438 *)Method_System_Collections_Generic_List_QuestEntity__Sort__);
  v26 = (System_Collections_Generic_List_int__o *)sub_1C6BC54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v26,
    (const MethodInfo_37E30FC *)Method_System_Collections_Generic_List_int___ctor__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v34,
    v12,
    (const MethodInfo_380146C *)Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__);
  v35 = v34;
  while ( 1 )
  {
    v27 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v35,
            (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__);
    if ( !v27 )
      break;
    if ( !v35.fields._current )
      sub_1C6BC60(v27, v28);
    if ( !v26 )
      sub_1C6BC60(v27, v28);
    klass_low = LODWORD(v35.fields._current[1].klass);
    v30 = v26->fields._items;
    v31 = Method_System_Collections_Generic_List_int__Add__;
    ++v26->fields._version;
    if ( !v30 )
      sub_1C6BC60(v27, klass_low);
    v32 = v26->fields._size;
    if ( (unsigned int)v32 >= LODWORD(v30->max_length) )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v26,
        klass_low,
        *(const MethodInfo_37E3950 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
    }
    else
    {
      v26->fields._size = v32 + 1;
      v30->m_Items[v32] = klass_low;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v35,
    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__);
  if ( !v26 )
LABEL_21:
    sub_1C6BC60(Instance, v10);
  return System_Collections_Generic_List_int___ToArray(
           v26,
           (const MethodInfo_37E5408 *)Method_System_Collections_Generic_List_int__ToArray__);
}


bool QuestReleaseMaster__IsContainCondType(
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

  if ( (byte_4CB6A23 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__);
    sub_1C6BA08(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    byte_4CB6A23 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !this->fields.list )
LABEL_18:
    sub_1C6BC60(Master_object, v8);
  v9 = (CommonReleaseMaster_o *)Master_object;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3391E64 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__);
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
                      (const MethodInfo_3391EF4 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__);
    if ( Master_object && *((_DWORD *)Master_object + 4) == targetId )
    {
      v13 = *((_DWORD *)Master_object + 5);
      if ( v13 == condType )
        return 1;
      if ( v13 == 113 )
      {
        if ( !v9 )
          goto LABEL_18;
        if ( CommonReleaseMaster__IsContainCondType(v9, *((_DWORD *)Master_object + 6), condType, 0) )
          return 1;
      }
    }
    if ( v11 == ++v12 )
      return 0;
  }
}


bool QuestReleaseMaster__IsContainUnPlayableQuestByTargetId(
        QuestReleaseMaster_o *this,
        System_Int32_array *questIdList,
        int32_t targetId,
        const MethodInfo *method)
{
  __int64 v7; // x21
  QuestGroupMaster_o *Master_object; // x0
  __int64 v9; // x1
  QuestGroupMaster_o *v10; // x22
  int32_t Count; // w0
  int32_t v12; // w23
  int32_t v13; // w24
  __int64 v14; // x27
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  __int64 v17; // x26
  System_Predicate_int__o *v18; // x28
  const MethodInfo *v19; // x3
  _DWORD *v20; // x8
  int v21; // w9
  int v22; // w10
  _DWORD *v23; // x8
  System_Int32_array *QuestIdListByGroupId; // x0
  System_Int32_array *v25; // x27
  System_Predicate_int__o *klass; // x28
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  CGThumbnailListItem_o *v30; // [xsp+0h] [xbp-70h]

  if ( (byte_4CB6A27 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Array_Exists_int___);
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__);
    sub_1C6BA08(&Method_DataManager_GetMaster_QuestGroupMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&System_Predicate_int__TypeInfo);
    sub_1C6BA08(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C6BA08(&Method_QuestReleaseMaster___c__DisplayClass16_0__IsContainUnPlayableQuestByTargetId_b__1__);
    sub_1C6BA08(&QuestReleaseMaster___c__DisplayClass16_0_TypeInfo);
    sub_1C6BA08(&Method_QuestReleaseMaster___c__DisplayClass16_1__IsContainUnPlayableQuestByTargetId_b__0__);
    sub_1C6BA08(&QuestReleaseMaster___c__DisplayClass16_1_TypeInfo);
    byte_4CB6A27 = 1;
  }
  v7 = sub_1C6BC54(QuestReleaseMaster___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_36;
  *(_DWORD *)(v7 + 16) = targetId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestGroupMaster_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !this->fields.list )
LABEL_36:
    sub_1C6BC60(Master_object, v9);
  v10 = Master_object;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3391E64 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__);
  if ( Count < 1 )
    return 0;
  v12 = Count;
  v13 = 0;
  v30 = (CGThumbnailListItem_o *)(v7 + 24);
  while ( 1 )
  {
    v14 = sub_1C6BC54(QuestReleaseMaster___c__DisplayClass16_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v14, 0);
    Master_object = (QuestGroupMaster_o *)this->fields.list;
    if ( !Master_object )
      goto LABEL_36;
    Master_object = (QuestGroupMaster_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                            (System_Collections_ObjectModel_Collection_T__o *)Master_object,
                                            v13,
                                            (const MethodInfo_3391EF4 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__);
    if ( !v14 )
      goto LABEL_36;
    *(_QWORD *)(v14 + 16) = Master_object;
    v17 = v14 + 16;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v14 + 16), (int32_t)Master_object, v15, v16);
    if ( *(_QWORD *)(v14 + 16) )
    {
      v18 = (System_Predicate_int__o *)sub_1C6BC54(System_Predicate_int__TypeInfo);
      System_Predicate_int____ctor(
        v18,
        (Il2CppObject *)v14,
        Method_QuestReleaseMaster___c__DisplayClass16_1__IsContainUnPlayableQuestByTargetId_b__0__,
        0);
      Master_object = (QuestGroupMaster_o *)System_Array__Exists_int_(
                                              questIdList,
                                              (System_Predicate_T__o *)v18,
                                              (const MethodInfo_3240974 *)Method_System_Array_Exists_int___);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        v20 = *(_DWORD **)v17;
        if ( !*(_QWORD *)v17 )
          goto LABEL_36;
        v21 = *(_DWORD *)(v7 + 16);
        if ( v20[4] != v21 )
        {
          v22 = v20[5];
          if ( v22 == 32 )
          {
            Master_object = v10;
            if ( !v10 )
              goto LABEL_36;
            QuestIdListByGroupId = QuestGroupMaster__GetQuestIdListByGroupId(v10, v20[6], 2, v19);
            if ( !QuestIdListByGroupId )
              goto LABEL_33;
            v25 = QuestIdListByGroupId;
            if ( !QuestIdListByGroupId->max_length )
              goto LABEL_33;
            klass = (System_Predicate_int__o *)v30->klass;
            if ( !v30->klass )
            {
              klass = (System_Predicate_int__o *)sub_1C6BC54(System_Predicate_int__TypeInfo);
              System_Predicate_int____ctor(
                klass,
                (Il2CppObject *)v7,
                Method_QuestReleaseMaster___c__DisplayClass16_0__IsContainUnPlayableQuestByTargetId_b__1__,
                0);
              *(_QWORD *)(v7 + 24) = klass;
              sub_1C6B9AC(v30, (int32_t)klass, v27, v28);
            }
            if ( !System_Array__Exists_int_(
                    v25,
                    (System_Predicate_T__o *)klass,
                    (const MethodInfo_3240974 *)Method_System_Array_Exists_int___) )
              goto LABEL_33;
            Master_object = (QuestGroupMaster_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A4F8A4 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
            v23 = *(_DWORD **)v17;
            if ( !*(_QWORD *)v17 || !Master_object )
              goto LABEL_36;
          }
          else
          {
            if ( v22 != 1 || v20[6] != v21 )
              goto LABEL_33;
            Master_object = (QuestGroupMaster_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A4F8A4 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
            v23 = *(_DWORD **)v17;
            if ( !*(_QWORD *)v17 || !Master_object )
              goto LABEL_36;
          }
          if ( clsQuestCheck__CheckQuestPlayableNow((clsQuestCheck_o *)Master_object, v23[4], 0, 0) )
            return 1;
          Master_object = (QuestGroupMaster_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A4F8A4 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
          if ( !*(_QWORD *)v17 || !Master_object )
            goto LABEL_36;
          if ( clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Master_object, *(_DWORD *)(*(_QWORD *)v17 + 16LL), 0, 0) )
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
bool QuestReleaseMaster__IsQuestOfResultBattleCleared(
        QuestReleaseMaster_o *this,
        int32_t targetId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v6; // w21
  int32_t Count; // w22
  Il2CppObject *Item; // x0
  Il2CppObject *v9; // x23

  if ( (byte_4CB6A26 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__);
    sub_1C6BA08(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    byte_4CB6A26 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_13:
    sub_1C6BC60(list, *(_QWORD *)&targetId);
  v6 = 0;
  while ( 1 )
  {
    Count = System_Collections_ObjectModel_Collection_object___get_Count(
              list,
              (const MethodInfo_3391E64 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__);
    if ( v6 >= Count )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_13;
    Item = System_Collections_ObjectModel_Collection_object___get_Item(
             list,
             v6,
             (const MethodInfo_3391EF4 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__);
    if ( Item )
    {
      v9 = Item;
      if ( (HIDWORD(Item[1].klass) & 0xFFFFFFFE) == 0x30 && LODWORD(Item[1].monitor) == targetId )
      {
        list = (System_Collections_ObjectModel_Collection_T__o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A4F8A4 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
        if ( !list )
          goto LABEL_13;
        if ( clsQuestCheck__IsQuestClear((clsQuestCheck_o *)list, (int32_t)v9[1].klass, 0, 0) )
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
bool QuestReleaseMaster__TryGetEntity(
        QuestReleaseMaster_o *this,
        QuestReleaseEntity_o **entity,
        int32_t questId,
        int32_t type,
        int32_t targetId,
        int64_t value,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4CB6A1A & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__TryGetEntity__);
    byte_4CB6A1A = 1;
  }
  PK = (Il2CppObject *)QuestReleaseEntity__CreatePK(questId, type, targetId, value, *(const MethodInfo **)&targetId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_33FDBE0 *)Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__TryGetEntity__);
}


QuestReleaseEntity_array *QuestReleaseMaster__getListByQuestID(
        QuestReleaseMaster_o *this,
        int32_t qid,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  System_Collections_ObjectModel_Collection_T__o *v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v8; // w22
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x0

  if ( (byte_4CB6A1C & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
    byte_4CB6A1C = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  v8 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_3391E64 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__);
    if ( v8 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_18;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v8,
                                                               (const MethodInfo_3391EF4 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__);
    if ( list )
    {
      v6 = list;
      if ( LODWORD(list->fields.items) == qid )
      {
        if ( !v5 )
          goto LABEL_18;
        items = v5->fields._items;
        v12 = Method_System_Collections_Generic_List_QuestReleaseEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          goto LABEL_18;
        size = v5->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            (Il2CppObject *)list,
            *(const MethodInfo_3800974 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
        }
        else
        {
          v14 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v14[4] = (Il2CppClass *)v6;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v14 + 4), (int32_t)v6, v9, v10);
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v8;
    if ( !list )
      goto LABEL_18;
  }
  if ( !v5 )
LABEL_18:
    sub_1C6BC60(list, v6);
  return (QuestReleaseEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v5,
                                       (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__);
}


void QuestReleaseMaster__getListByQuestID_42770672(
        QuestReleaseMaster_o *this,
        int32_t questId,
        System_Collections_Generic_List_QuestReleaseEntity__o **resultList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x22
  QuestReleaseOverwriteMaster_o *Master_object; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x4
  System_Collections_Generic_List_QuestReleaseEntity__o *v11; // x8
  int32_t v12; // w2
  int v13; // w9
  const MethodInfo *v14; // x1
  System_Collections_Generic_List_object__o *v15; // x20
  Il2CppObject *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  Il2CppObject *v19; // x1
  struct System_Object_array *v20; // x8
  _QWORD *v21; // x9
  __int64 v22; // x10
  Il2CppClass **v23; // x0
  int v24; // w22
  int32_t v25; // w23
  QuestReleaseOverwriteMaster_o *v26; // x24
  int32_t MasterKind_k__BackingField; // w25
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  System_Collections_Generic_List_object__o *v30; // x26
  Il2CppClass *klass; // x8
  _QWORD *v32; // x9
  __int64 MasterName_k__BackingField_low; // x10
  void **v34; // x8
  System_Collections_Generic_List_QuestReleaseEntity__o *v35; // x8
  int32_t size; // w2
  int v37; // w9
  int monitor; // w22
  int32_t v39; // w20
  System_Collections_Generic_List_object__o *v40; // x21
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  struct System_Object_array *items; // x8
  _QWORD *v44; // x9
  __int64 v45; // x10
  QuestReleaseOverwriteMaster_o *v46; // x1
  Il2CppClass **v47; // x0
  System_Collections_Generic_List_Enumerator_object__o v48; // [xsp+8h] [xbp-A8h] BYREF
  Il2CppObject *v49; // [xsp+20h] [xbp-90h] BYREF
  Il2CppObject *value; // [xsp+28h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v51; // [xsp+30h] [xbp-80h] BYREF
  System_Collections_Generic_List_QuestReleaseOverwriteEntity__o *entityList; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_4CB6A1E & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__);
    sub_1C6BA08(&Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___TryGetValue__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___set_Item__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_QuestReleaseEntity__Clear__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__);
    sub_1C6BA08(&System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
    byte_4CB6A1E = 1;
  }
  memset(&v51, 0, sizeof(v51));
  v49 = 0;
  value = 0;
  v7 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__);
  entityList = (System_Collections_Generic_List_QuestReleaseOverwriteEntity__o *)v7;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestReleaseOverwriteMaster_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
  if ( !Master_object )
    goto LABEL_51;
  Master_object = (QuestReleaseOverwriteMaster_o *)QuestReleaseOverwriteMaster__TryGetEntityListByQuestIdAndTime(
                                                     Master_object,
                                                     &entityList,
                                                     questId,
                                                     0,
                                                     v10);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
  {
    if ( !this->fields.isCached )
    {
      Master_object = (QuestReleaseOverwriteMaster_o *)this->fields.list;
      if ( !Master_object )
        goto LABEL_51;
      Master_object = (QuestReleaseOverwriteMaster_o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                         (System_Collections_ObjectModel_Collection_T__o *)Master_object,
                                                         (const MethodInfo_3391E64 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__);
      if ( (int)Master_object >= 1 )
      {
        v24 = (int)Master_object;
        v25 = 0;
        do
        {
          Master_object = (QuestReleaseOverwriteMaster_o *)this->fields.list;
          if ( !Master_object )
            goto LABEL_51;
          Master_object = (QuestReleaseOverwriteMaster_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                             (System_Collections_ObjectModel_Collection_T__o *)Master_object,
                                                             v25,
                                                             (const MethodInfo_3391EF4 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__);
          if ( Master_object )
          {
            v26 = Master_object;
            Master_object = (QuestReleaseOverwriteMaster_o *)this->fields.cachedQuestReleaseEntityDict;
            if ( !Master_object )
              goto LABEL_51;
            MasterKind_k__BackingField = v26->fields._MasterKind_k__BackingField;
            if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
                    (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
                    MasterKind_k__BackingField,
                    &value,
                    (const MethodInfo_3453C7C *)Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___TryGetValue__) )
            {
              v30 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
              System_Collections_Generic_List_object____ctor(
                v30,
                (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
              value = (Il2CppObject *)v30;
              Master_object = (QuestReleaseOverwriteMaster_o *)this->fields.cachedQuestReleaseEntityDict;
              if ( !Master_object )
                goto LABEL_51;
              System_Collections_Generic_Dictionary_int__object___set_Item(
                (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
                MasterKind_k__BackingField,
                (Il2CppObject *)v30,
                (const MethodInfo_34524DC *)Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___set_Item__);
            }
            Master_object = (QuestReleaseOverwriteMaster_o *)value;
            if ( !value )
              goto LABEL_51;
            klass = value[1].klass;
            v32 = Method_System_Collections_Generic_List_QuestReleaseEntity__Add__;
            ++HIDWORD(value[1].monitor);
            if ( !klass )
              goto LABEL_51;
            MasterName_k__BackingField_low = SLODWORD(Master_object->fields._MasterName_k__BackingField);
            if ( (unsigned int)MasterName_k__BackingField_low >= LODWORD(klass->_1.namespaze) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)Master_object,
                (Il2CppObject *)v26,
                *(const MethodInfo_3800974 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
            }
            else
            {
              v34 = &klass->_1.image + MasterName_k__BackingField_low;
              LODWORD(Master_object->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
              v34[4] = v26;
              sub_1C6B9AC((CGThumbnailListItem_o *)(v34 + 4), (int32_t)v26, v28, v29);
            }
          }
        }
        while ( v24 != ++v25 );
      }
      this->fields.isCached = 1;
    }
    v35 = *resultList;
    if ( *resultList )
    {
      size = v35->fields._size;
      v37 = v35->fields._version + 1;
      v35->fields._size = 0;
      v35->fields._version = v37;
      if ( size >= 1 )
        System_Array__Clear((System_Array_o *)v35->fields._items, 0, size, 0);
      Master_object = (QuestReleaseOverwriteMaster_o *)this->fields.cachedQuestReleaseEntityDict;
      if ( Master_object )
      {
        if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
                (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
                questId,
                &v49,
                (const MethodInfo_3453C7C *)Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___TryGetValue__) )
          return;
        Master_object = (QuestReleaseOverwriteMaster_o *)v49;
        if ( v49 )
        {
          monitor = (int)v49[1].monitor;
          if ( monitor < 1 )
            return;
          v39 = 0;
          do
          {
            v40 = (System_Collections_Generic_List_object__o *)*resultList;
            Master_object = (QuestReleaseOverwriteMaster_o *)System_Collections_Generic_List_object___get_Item(
                                                               (System_Collections_Generic_List_object__o *)Master_object,
                                                               v39,
                                                               (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__);
            if ( !v40 )
              break;
            items = v40->fields._items;
            v44 = Method_System_Collections_Generic_List_QuestReleaseEntity__Add__;
            ++v40->fields._version;
            if ( !items )
              break;
            v45 = v40->fields._size;
            v46 = Master_object;
            if ( (unsigned int)v45 >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v40,
                (Il2CppObject *)Master_object,
                *(const MethodInfo_3800974 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
            }
            else
            {
              v47 = &items->obj.klass + v45;
              v40->fields._size = v45 + 1;
              v47[4] = (Il2CppClass *)v46;
              sub_1C6B9AC((CGThumbnailListItem_o *)(v47 + 4), (int32_t)v46, v41, v42);
            }
            if ( monitor == ++v39 )
              return;
            Master_object = (QuestReleaseOverwriteMaster_o *)v49;
          }
          while ( v49 );
        }
      }
    }
LABEL_51:
    sub_1C6BC60(Master_object, v9);
  }
  v11 = *resultList;
  if ( !*resultList )
    goto LABEL_51;
  v12 = v11->fields._size;
  v13 = v11->fields._version + 1;
  v11->fields._size = 0;
  v11->fields._version = v13;
  if ( v12 >= 1 )
    System_Array__Clear((System_Array_o *)v11->fields._items, 0, v12, 0);
  if ( !v7 )
    goto LABEL_51;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v48,
    v7,
    (const MethodInfo_380146C *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__);
  v51 = v48;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v51,
            (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__) )
  {
    if ( !v51.fields._current )
      sub_1C6BC60(0, v14);
    v15 = (System_Collections_Generic_List_object__o *)*resultList;
    v16 = (Il2CppObject *)QuestReleaseOverwriteEntity__ConvertToQuestReleaseEntity(
                            (QuestReleaseOverwriteEntity_o *)v51.fields._current,
                            v14);
    v19 = v16;
    if ( !v15 )
      sub_1C6BC60(v16, v16);
    v20 = v15->fields._items;
    v21 = Method_System_Collections_Generic_List_QuestReleaseEntity__Add__;
    ++v15->fields._version;
    if ( !v20 )
      sub_1C6BC60(v16, v16);
    v22 = v15->fields._size;
    if ( (unsigned int)v22 >= LODWORD(v20->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v15,
        v16,
        *(const MethodInfo_3800974 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
    }
    else
    {
      v23 = &v20->obj.klass + v22;
      v15->fields._size = v22 + 1;
      v23[4] = (Il2CppClass *)v19;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v23 + 4), (int32_t)v19, v17, v18);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v51,
    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__Dispose__);
}


System_Collections_Generic_List_QuestReleaseEntity__o *QuestReleaseMaster__getListByTargetAndCondType(
        QuestReleaseMaster_o *this,
        int32_t targetId,
        int32_t condType,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x22
  System_Collections_ObjectModel_Collection_T__o *v8; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v11; // w23
  int32_t v12; // w24
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  if ( (byte_4CB6A22 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
    byte_4CB6A22 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3391E64 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__);
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
                                                                 (const MethodInfo_3391EF4 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__);
      if ( list )
      {
        v8 = list;
        if ( LODWORD(list[1].klass) == targetId && HIDWORD(list->fields.items) == condType )
        {
          if ( !v7 )
            break;
          items = v7->fields._items;
          v16 = Method_System_Collections_Generic_List_QuestReleaseEntity__Add__;
          ++v7->fields._version;
          if ( !items )
            break;
          size = v7->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v7,
              (Il2CppObject *)list,
              *(const MethodInfo_3800974 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
          }
          else
          {
            v18 = &items->obj.klass + size;
            v7->fields._size = size + 1;
            v18[4] = (Il2CppClass *)v8;
            sub_1C6B9AC((CGThumbnailListItem_o *)(v18 + 4), (int32_t)v8, v13, v14);
          }
        }
      }
      if ( v11 == ++v12 )
        return (System_Collections_Generic_List_QuestReleaseEntity__o *)v7;
    }
LABEL_17:
    sub_1C6BC60(list, v8);
  }
  return (System_Collections_Generic_List_QuestReleaseEntity__o *)v7;
}


QuestReleaseEntity_array *QuestReleaseMaster__getListByType(
        QuestReleaseMaster_o *this,
        int32_t type,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  System_Collections_ObjectModel_Collection_T__o *v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v8; // w22
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x0

  if ( (byte_4CB6A1F & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
    byte_4CB6A1F = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  v8 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_3391E64 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__);
    if ( v8 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_18;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v8,
                                                               (const MethodInfo_3391EF4 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__);
    if ( list )
    {
      v6 = list;
      if ( HIDWORD(list->fields.items) == type )
      {
        if ( !v5 )
          goto LABEL_18;
        items = v5->fields._items;
        v12 = Method_System_Collections_Generic_List_QuestReleaseEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          goto LABEL_18;
        size = v5->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            (Il2CppObject *)list,
            *(const MethodInfo_3800974 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
        }
        else
        {
          v14 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v14[4] = (Il2CppClass *)v6;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v14 + 4), (int32_t)v6, v9, v10);
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v8;
    if ( !list )
      goto LABEL_18;
  }
  if ( !v5 )
LABEL_18:
    sub_1C6BC60(list, v6);
  return (QuestReleaseEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v5,
                                       (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__);
}


System_Int32_array *QuestReleaseMaster__getQuestIdsByTargetAndOpenCondType(
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

  if ( (byte_4CB6A20 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_int__TypeInfo);
    byte_4CB6A20 = 1;
  }
  v7 = (System_Collections_Generic_List_int__o *)sub_1C6BC54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_37E30FC *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  v10 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_3391E64 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__);
    if ( v10 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_19;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v10,
                                                               (const MethodInfo_3391EF4 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__);
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
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v7,
          items_low,
          *(const MethodInfo_37E3950 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
      }
      else
      {
        v7->fields._size = size + 1;
        items->m_Items[size] = items_low;
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v10;
    if ( !list )
      goto LABEL_19;
  }
  if ( !v7 )
LABEL_19:
    sub_1C6BC60(list, items_low);
  return System_Collections_Generic_List_int___ToArray(
           v7,
           (const MethodInfo_37E5408 *)Method_System_Collections_Generic_List_int__ToArray__);
}


void QuestReleaseMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4CB6A28 & 1) == 0 )
  {
    sub_1C6BA08(&QuestReleaseMaster___c_TypeInfo);
    byte_4CB6A28 = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(QuestReleaseMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  QuestReleaseMaster___c_TypeInfo->static_fields->__9 = (struct QuestReleaseMaster___c_o *)v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)QuestReleaseMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void QuestReleaseMaster___c___ctor(QuestReleaseMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t QuestReleaseMaster___c___GetQuestIdList_b__13_0(
        QuestReleaseMaster___c_o *this,
        QuestEntity_o *a,
        QuestEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || (this = (QuestReleaseMaster___c_o *)QuestEntity__getPriority(b, (const MethodInfo *)a), !a) )
    sub_1C6BC60(this, a);
  return (_DWORD)this - QuestEntity__getPriority(a, (const MethodInfo *)a);
}


void QuestReleaseMaster___c__DisplayClass10_0___ctor(
        QuestReleaseMaster___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestReleaseMaster___c__DisplayClass10_0___GetListByQuestIdTargetIdAndCondType_b__0(
        QuestReleaseMaster___c__DisplayClass10_0_o *this,
        QuestReleaseEntity_o *d,
        const MethodInfo *method)
{
  if ( !d )
    sub_1C6BC60(this, 0);
  return d->fields.questId == this->fields.questId
      && d->fields.targetId == this->fields.targetId
      && d->fields.type == this->fields.condType;
}


void QuestReleaseMaster___c__DisplayClass16_0___ctor(
        QuestReleaseMaster___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestReleaseMaster___c__DisplayClass16_0___IsContainUnPlayableQuestByTargetId_b__1(
        QuestReleaseMaster___c__DisplayClass16_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return this->fields.targetId == x;
}


void QuestReleaseMaster___c__DisplayClass16_1___ctor(
        QuestReleaseMaster___c__DisplayClass16_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestReleaseMaster___c__DisplayClass16_1___IsContainUnPlayableQuestByTargetId_b__0(
        QuestReleaseMaster___c__DisplayClass16_1_o *this,
        int32_t x,
        const MethodInfo *method)
{
  struct QuestReleaseEntity_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_1C6BC60(this, x);
  return data->fields.questId == x;
}