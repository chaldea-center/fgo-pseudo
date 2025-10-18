void QuestReleaseMaster___ctor(QuestReleaseMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C436FD & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity____ctor__);
    sub_1C37058(&System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___TypeInfo);
    byte_4C436FD = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C372A4(System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v3,
    (const MethodInfo_33F9BB0 *)Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity____ctor__);
  this->fields.cachedQuestReleaseEntityDict = (struct System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___o *)v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.cachedQuestReleaseEntityDict, (int32_t)v3, v4, v5);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    74,
    (const MethodInfo_33A3834 *)Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string___ctor__);
}


void QuestReleaseMaster__Clear(QuestReleaseMaster_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___o *cachedQuestReleaseEntityDict; // x0

  if ( (byte_4C436FF & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__Clear__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___Clear__);
    byte_4C436FF = 1;
  }
  DataMasterBase_object__object__object___Clear(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    (const MethodInfo_33A4510 *)Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__Clear__);
  cachedQuestReleaseEntityDict = this->fields.cachedQuestReleaseEntityDict;
  if ( !cachedQuestReleaseEntityDict )
    sub_1C372B4(0);
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)cachedQuestReleaseEntityDict,
    (const MethodInfo_33FA70C *)Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___Clear__);
  this->fields.isCached = 0;
}


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

  if ( (byte_4C43707 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__);
    byte_4C43707 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_12:
    sub_1C372B4(list);
  v8 = 0;
  while ( 1 )
  {
    if ( v8 >= System_Collections_ObjectModel_Collection_object___get_Count(
                 list,
                 (const MethodInfo_333A510 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__) )
      return 0;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_12;
    Item = System_Collections_ObjectModel_Collection_object___get_Item(
             list,
             v8,
             (const MethodInfo_333A5A0 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__);
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

  if ( (byte_4C436FB & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__GetEntity__);
    byte_4C436FB = 1;
  }
  PK = (Il2CppObject *)QuestReleaseEntity__CreatePK(questId, type, targetId, value, (const MethodInfo *)value);
  return (QuestReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                   PK,
                                   (const MethodInfo_33A5B58 *)Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__GetEntity__);
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
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  System_Func_object__bool__o *v12; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x0

  if ( (byte_4C43703 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_ToList_QuestReleaseEntity___);
    sub_1C37058(&Method_System_Linq_Enumerable_Where_QuestReleaseEntity___);
    sub_1C37058(&System_Func_QuestReleaseEntity__bool__TypeInfo);
    sub_1C37058(&Method_QuestReleaseMaster___c__DisplayClass10_0__GetListByQuestIdTargetIdAndCondType_b__0__);
    sub_1C37058(&QuestReleaseMaster___c__DisplayClass10_0_TypeInfo);
    byte_4C43703 = 1;
  }
  v9 = sub_1C372A4(QuestReleaseMaster___c__DisplayClass10_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    sub_1C372B4(v10);
  *(_DWORD *)(v9 + 16) = questId;
  *(_DWORD *)(v9 + 20) = targetId;
  *(_DWORD *)(v9 + 24) = condType;
  list = this->fields.list;
  v12 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_QuestReleaseEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v12,
    (Il2CppObject *)v9,
    Method_QuestReleaseMaster___c__DisplayClass10_0__GetListByQuestIdTargetIdAndCondType_b__0__,
    0);
  v13 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__bool__o *)v12,
          (const MethodInfo_312E410 *)Method_System_Linq_Enumerable_Where_QuestReleaseEntity___);
  return (System_Collections_Generic_List_QuestReleaseEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                    v13,
                                                                    (const MethodInfo_312BF90 *)Method_System_Linq_Enumerable_ToList_QuestReleaseEntity___);
}


System_Int32_array *QuestReleaseMaster__GetQuestIdList(
        QuestReleaseMaster_o *this,
        int32_t type,
        int32_t targetId,
        int32_t value,
        const MethodInfo *method)
{
  void *Instance; // x0
  Il2CppObject *MasterData_object; // x24
  System_Collections_Generic_List_object__o *v11; // x23
  int32_t v12; // w25
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass *v18; // x1
  Il2CppClass **v19; // x0
  System_Comparison_T__o *v20; // x19
  Il2CppObject *v21; // x20
  struct QuestReleaseMaster___c_StaticFields *static_fields; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  System_Collections_Generic_List_int__o *v25; // x19
  _BOOL8 v26; // x0
  int32_t klass; // w1
  struct System_Int32_array *v28; // x8
  _QWORD *v29; // x9
  __int64 v30; // x10
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C43706 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__);
    sub_1C37058(&System_Comparison_QuestEntity__TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C37058(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestEntity__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestEntity__Sort__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestEntity___ctor__);
    sub_1C37058(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C37058(&System_Collections_Generic_List_QuestEntity__TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_QuestReleaseMaster___c__GetQuestIdList_b__13_0__);
    sub_1C37058(&QuestReleaseMaster___c_TypeInfo);
    byte_4C43706 = 1;
  }
  memset(&v33, 0, sizeof(v33));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_QuestMaster___);
  v11 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_QuestEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_QuestEntity___ctor__);
  Instance = this->fields.list;
  if ( !Instance )
    goto LABEL_21;
  v12 = 0;
  while ( v12 < System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)Instance,
                  (const MethodInfo_333A510 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__) )
  {
    Instance = this->fields.list;
    if ( !Instance )
      goto LABEL_21;
    Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 v12,
                 (const MethodInfo_333A5A0 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__);
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
                   (const MethodInfo_33A10A0 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
      if ( Instance )
      {
        if ( !v11 )
          goto LABEL_21;
        items = v11->fields._items;
        v16 = Method_System_Collections_Generic_List_QuestEntity__Add__;
        ++v11->fields._version;
        if ( !items )
          goto LABEL_21;
        size = v11->fields._size;
        v18 = (Il2CppClass *)Instance;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            (Il2CppObject *)Instance,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v19 = &items->obj.klass + size;
          v11->fields._size = size + 1;
          v19[4] = v18;
          sub_1C36FFC((CGThumbnailListItem_o *)(v19 + 4), (int32_t)v18, v13, v14);
        }
      }
    }
    Instance = this->fields.list;
    ++v12;
    if ( !Instance )
      goto LABEL_21;
  }
  Instance = QuestReleaseMaster___c_TypeInfo;
  if ( !QuestReleaseMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestReleaseMaster___c_TypeInfo);
    Instance = QuestReleaseMaster___c_TypeInfo;
  }
  v20 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 8LL);
  if ( !v20 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = QuestReleaseMaster___c_TypeInfo;
    }
    v21 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v20 = (System_Comparison_T__o *)sub_1C372A4(System_Comparison_QuestEntity__TypeInfo);
    System_Comparison_object____ctor(v20, v21, Method_QuestReleaseMaster___c__GetQuestIdList_b__13_0__, 0);
    static_fields = QuestReleaseMaster___c_TypeInfo->static_fields;
    static_fields->__9__13_0 = (struct System_Comparison_QuestEntity__o *)v20;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__13_0, (int32_t)v20, v23, v24);
  }
  if ( !v11 )
    goto LABEL_21;
  System_Collections_Generic_List_object___Sort_58346216(
    v11,
    v20,
    (const MethodInfo_37A4AE8 *)Method_System_Collections_Generic_List_QuestEntity__Sort__);
  v25 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v25,
    (const MethodInfo_37857AC *)Method_System_Collections_Generic_List_int___ctor__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v32,
    v11,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__);
  v33 = v32;
  while ( 1 )
  {
    v26 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v33,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__);
    if ( !v26 )
      break;
    if ( !v33.fields._current )
      sub_1C372B4(v26);
    if ( !v25 )
      sub_1C372B4(v26);
    klass = (int32_t)v33.fields._current[1].klass;
    v28 = v25->fields._items;
    v29 = Method_System_Collections_Generic_List_int__Add__;
    ++v25->fields._version;
    if ( !v28 )
      sub_1C372B4(v26);
    v30 = v25->fields._size;
    if ( (unsigned int)v30 >= LODWORD(v28->max_length) )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v25,
        klass,
        *(const MethodInfo_3786000 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
    }
    else
    {
      v25->fields._size = v30 + 1;
      v28->m_Items[v30] = klass;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v33,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__);
  if ( !v25 )
LABEL_21:
    sub_1C372B4(Instance);
  return System_Collections_Generic_List_int___ToArray(
           v25,
           (const MethodInfo_3787AB8 *)Method_System_Collections_Generic_List_int__ToArray__);
}


bool QuestReleaseMaster__IsContainCondType(
        QuestReleaseMaster_o *this,
        int32_t targetId,
        int32_t condType,
        const MethodInfo *method)
{
  void *Master_object; // x0
  CommonReleaseMaster_o *v8; // x22
  int32_t Count; // w0
  int32_t v10; // w23
  int32_t v11; // w24
  int v12; // w8

  if ( (byte_4C43705 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__);
    sub_1C37058(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    byte_4C43705 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !this->fields.list )
LABEL_18:
    sub_1C372B4(Master_object);
  v8 = (CommonReleaseMaster_o *)Master_object;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_333A510 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__);
  if ( Count < 1 )
    return 0;
  v10 = Count;
  v11 = 0;
  while ( 1 )
  {
    Master_object = this->fields.list;
    if ( !Master_object )
      goto LABEL_18;
    Master_object = System_Collections_ObjectModel_Collection_object___get_Item(
                      (System_Collections_ObjectModel_Collection_T__o *)Master_object,
                      v11,
                      (const MethodInfo_333A5A0 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__);
    if ( Master_object && *((_DWORD *)Master_object + 4) == targetId )
    {
      v12 = *((_DWORD *)Master_object + 5);
      if ( v12 == condType )
        return 1;
      if ( v12 == 113 )
      {
        if ( !v8 )
          goto LABEL_18;
        if ( CommonReleaseMaster__IsContainCondType(v8, *((_DWORD *)Master_object + 6), condType, 0) )
          return 1;
      }
    }
    if ( v10 == ++v11 )
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
  QuestGroupMaster_o *v9; // x22
  int32_t Count; // w0
  int32_t v11; // w23
  int32_t v12; // w24
  __int64 v13; // x27
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  __int64 v16; // x26
  System_Predicate_int__o *v17; // x28
  const MethodInfo *v18; // x3
  _DWORD *v19; // x8
  int v20; // w9
  int v21; // w10
  _DWORD *v22; // x8
  System_Int32_array *QuestIdListByGroupId; // x0
  System_Int32_array *v24; // x27
  System_Predicate_int__o *klass; // x28
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  CGThumbnailListItem_o *v29; // [xsp+0h] [xbp-70h]

  if ( (byte_4C43709 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Array_Exists_int___);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__);
    sub_1C37058(&Method_DataManager_GetMaster_QuestGroupMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&System_Predicate_int__TypeInfo);
    sub_1C37058(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C37058(&Method_QuestReleaseMaster___c__DisplayClass16_0__IsContainUnPlayableQuestByTargetId_b__1__);
    sub_1C37058(&QuestReleaseMaster___c__DisplayClass16_0_TypeInfo);
    sub_1C37058(&Method_QuestReleaseMaster___c__DisplayClass16_1__IsContainUnPlayableQuestByTargetId_b__0__);
    sub_1C37058(&QuestReleaseMaster___c__DisplayClass16_1_TypeInfo);
    byte_4C43709 = 1;
  }
  v7 = sub_1C372A4(QuestReleaseMaster___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_36;
  *(_DWORD *)(v7 + 16) = targetId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestGroupMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !this->fields.list )
LABEL_36:
    sub_1C372B4(Master_object);
  v9 = Master_object;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_333A510 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__);
  if ( Count < 1 )
    return 0;
  v11 = Count;
  v12 = 0;
  v29 = (CGThumbnailListItem_o *)(v7 + 24);
  while ( 1 )
  {
    v13 = sub_1C372A4(QuestReleaseMaster___c__DisplayClass16_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v13, 0);
    Master_object = (QuestGroupMaster_o *)this->fields.list;
    if ( !Master_object )
      goto LABEL_36;
    Master_object = (QuestGroupMaster_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                            (System_Collections_ObjectModel_Collection_T__o *)Master_object,
                                            v12,
                                            (const MethodInfo_333A5A0 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__);
    if ( !v13 )
      goto LABEL_36;
    *(_QWORD *)(v13 + 16) = Master_object;
    v16 = v13 + 16;
    sub_1C36FFC((CGThumbnailListItem_o *)(v13 + 16), (int32_t)Master_object, v14, v15);
    if ( *(_QWORD *)(v13 + 16) )
    {
      v17 = (System_Predicate_int__o *)sub_1C372A4(System_Predicate_int__TypeInfo);
      System_Predicate_int____ctor(
        v17,
        (Il2CppObject *)v13,
        Method_QuestReleaseMaster___c__DisplayClass16_1__IsContainUnPlayableQuestByTargetId_b__0__,
        0);
      Master_object = (QuestGroupMaster_o *)System_Array__Exists_int_(
                                              questIdList,
                                              (System_Predicate_T__o *)v17,
                                              (const MethodInfo_31EC4D0 *)Method_System_Array_Exists_int___);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        v19 = *(_DWORD **)v16;
        if ( !*(_QWORD *)v16 )
          goto LABEL_36;
        v20 = *(_DWORD *)(v7 + 16);
        if ( v19[4] != v20 )
        {
          v21 = v19[5];
          if ( v21 == 32 )
          {
            Master_object = v9;
            if ( !v9 )
              goto LABEL_36;
            QuestIdListByGroupId = QuestGroupMaster__GetQuestIdListByGroupId(v9, v19[6], 2, v18);
            if ( !QuestIdListByGroupId )
              goto LABEL_33;
            v24 = QuestIdListByGroupId;
            if ( !QuestIdListByGroupId->max_length )
              goto LABEL_33;
            klass = (System_Predicate_int__o *)v29->klass;
            if ( !v29->klass )
            {
              klass = (System_Predicate_int__o *)sub_1C372A4(System_Predicate_int__TypeInfo);
              System_Predicate_int____ctor(
                klass,
                (Il2CppObject *)v7,
                Method_QuestReleaseMaster___c__DisplayClass16_0__IsContainUnPlayableQuestByTargetId_b__1__,
                0);
              *(_QWORD *)(v7 + 24) = klass;
              sub_1C36FFC(v29, (int32_t)klass, v26, v27);
            }
            if ( !System_Array__Exists_int_(
                    v24,
                    (System_Predicate_T__o *)klass,
                    (const MethodInfo_31EC4D0 *)Method_System_Array_Exists_int___) )
              goto LABEL_33;
            Master_object = (QuestGroupMaster_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
            v22 = *(_DWORD **)v16;
            if ( !*(_QWORD *)v16 || !Master_object )
              goto LABEL_36;
          }
          else
          {
            if ( v21 != 1 || v19[6] != v20 )
              goto LABEL_33;
            Master_object = (QuestGroupMaster_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
            v22 = *(_DWORD **)v16;
            if ( !*(_QWORD *)v16 || !Master_object )
              goto LABEL_36;
          }
          if ( clsQuestCheck__CheckQuestPlayableNow((clsQuestCheck_o *)Master_object, v22[4], 0, 0) )
            return 1;
          Master_object = (QuestGroupMaster_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
          if ( !*(_QWORD *)v16 || !Master_object )
            goto LABEL_36;
          if ( clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Master_object, *(_DWORD *)(*(_QWORD *)v16 + 16LL), 0, 0) )
            return 1;
        }
      }
    }
LABEL_33:
    if ( v11 == ++v12 )
      return 0;
  }
}


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

  if ( (byte_4C43708 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__);
    sub_1C37058(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    byte_4C43708 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_13:
    sub_1C372B4(list);
  v6 = 0;
  while ( 1 )
  {
    Count = System_Collections_ObjectModel_Collection_object___get_Count(
              list,
              (const MethodInfo_333A510 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__);
    if ( v6 >= Count )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_13;
    Item = System_Collections_ObjectModel_Collection_object___get_Item(
             list,
             v6,
             (const MethodInfo_333A5A0 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__);
    if ( Item )
    {
      v9 = Item;
      if ( (HIDWORD(Item[1].klass) & 0xFFFFFFFE) == 0x30 && LODWORD(Item[1].monitor) == targetId )
      {
        list = (System_Collections_ObjectModel_Collection_T__o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
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

  if ( (byte_4C436FC & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__TryGetEntity__);
    byte_4C436FC = 1;
  }
  PK = (Il2CppObject *)QuestReleaseEntity__CreatePK(questId, type, targetId, value, *(const MethodInfo **)&targetId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_33A5BA4 *)Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__TryGetEntity__);
}


QuestReleaseEntity_array *QuestReleaseMaster__getListByQuestID(
        QuestReleaseMaster_o *this,
        int32_t qid,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v7; // w22
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Collections_ObjectModel_Collection_T__o *v10; // x1
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x0

  if ( (byte_4C436FE & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
    sub_1C37058(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
    byte_4C436FE = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  v7 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_333A510 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__);
    if ( v7 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_18;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v7,
                                                               (const MethodInfo_333A5A0 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__);
    if ( list )
    {
      v10 = list;
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
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
        }
        else
        {
          v14 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v14[4] = (Il2CppClass *)v10;
          sub_1C36FFC((CGThumbnailListItem_o *)(v14 + 4), (int32_t)v10, v8, v9);
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v7;
    if ( !list )
      goto LABEL_18;
  }
  if ( !v5 )
LABEL_18:
    sub_1C372B4(list);
  return (QuestReleaseEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v5,
                                       (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__);
}


void QuestReleaseMaster__getListByQuestID_42531400(
        QuestReleaseMaster_o *this,
        int32_t questId,
        System_Collections_Generic_List_QuestReleaseEntity__o **resultList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x22
  QuestReleaseOverwriteMaster_o *Master_object; // x0
  const MethodInfo *v9; // x4
  System_Collections_Generic_List_QuestReleaseEntity__o *v10; // x8
  int32_t v11; // w2
  int v12; // w9
  const MethodInfo *v13; // x1
  System_Collections_Generic_List_object__o *v14; // x20
  Il2CppObject *v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  Il2CppObject *v18; // x1
  struct System_Object_array *v19; // x8
  _QWORD *v20; // x9
  __int64 v21; // x10
  Il2CppClass **v22; // x0
  int v23; // w22
  int32_t v24; // w23
  QuestReleaseOverwriteMaster_o *v25; // x24
  int32_t MasterKind_k__BackingField; // w25
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  System_Collections_Generic_List_object__o *v29; // x26
  Il2CppClass *klass; // x8
  _QWORD *v31; // x9
  __int64 MasterName_k__BackingField_low; // x10
  void **v33; // x8
  System_Collections_Generic_List_QuestReleaseEntity__o *v34; // x8
  int32_t size; // w2
  int v36; // w9
  int monitor; // w22
  int32_t v38; // w20
  System_Collections_Generic_List_object__o *v39; // x21
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  struct System_Object_array *items; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  QuestReleaseOverwriteMaster_o *v45; // x1
  Il2CppClass **v46; // x0
  System_Collections_Generic_List_Enumerator_object__o v47; // [xsp+8h] [xbp-A8h] BYREF
  Il2CppObject *v48; // [xsp+20h] [xbp-90h] BYREF
  Il2CppObject *value; // [xsp+28h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v50; // [xsp+30h] [xbp-80h] BYREF
  System_Collections_Generic_List_QuestReleaseOverwriteEntity__o *entityList; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_4C43700 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__);
    sub_1C37058(&Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___TryGetValue__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___set_Item__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestReleaseEntity__Clear__);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__);
    sub_1C37058(&System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo);
    sub_1C37058(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
    byte_4C43700 = 1;
  }
  memset(&v50, 0, sizeof(v50));
  v48 = 0;
  value = 0;
  v7 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__);
  entityList = (System_Collections_Generic_List_QuestReleaseOverwriteEntity__o *)v7;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestReleaseOverwriteMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
  if ( !Master_object )
    goto LABEL_51;
  Master_object = (QuestReleaseOverwriteMaster_o *)QuestReleaseOverwriteMaster__TryGetEntityListByQuestIdAndTime(
                                                     Master_object,
                                                     &entityList,
                                                     questId,
                                                     0,
                                                     v9);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
  {
    if ( !this->fields.isCached )
    {
      Master_object = (QuestReleaseOverwriteMaster_o *)this->fields.list;
      if ( !Master_object )
        goto LABEL_51;
      Master_object = (QuestReleaseOverwriteMaster_o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                         (System_Collections_ObjectModel_Collection_T__o *)Master_object,
                                                         (const MethodInfo_333A510 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__);
      if ( (int)Master_object >= 1 )
      {
        v23 = (int)Master_object;
        v24 = 0;
        do
        {
          Master_object = (QuestReleaseOverwriteMaster_o *)this->fields.list;
          if ( !Master_object )
            goto LABEL_51;
          Master_object = (QuestReleaseOverwriteMaster_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                             (System_Collections_ObjectModel_Collection_T__o *)Master_object,
                                                             v24,
                                                             (const MethodInfo_333A5A0 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__);
          if ( Master_object )
          {
            v25 = Master_object;
            Master_object = (QuestReleaseOverwriteMaster_o *)this->fields.cachedQuestReleaseEntityDict;
            if ( !Master_object )
              goto LABEL_51;
            MasterKind_k__BackingField = v25->fields._MasterKind_k__BackingField;
            if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
                    (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
                    MasterKind_k__BackingField,
                    &value,
                    (const MethodInfo_33FBD10 *)Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___TryGetValue__) )
            {
              v29 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
              System_Collections_Generic_List_object____ctor(
                v29,
                (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
              value = (Il2CppObject *)v29;
              Master_object = (QuestReleaseOverwriteMaster_o *)this->fields.cachedQuestReleaseEntityDict;
              if ( !Master_object )
                goto LABEL_51;
              System_Collections_Generic_Dictionary_int__object___set_Item(
                (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
                MasterKind_k__BackingField,
                (Il2CppObject *)v29,
                (const MethodInfo_33FA570 *)Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___set_Item__);
            }
            Master_object = (QuestReleaseOverwriteMaster_o *)value;
            if ( !value )
              goto LABEL_51;
            klass = value[1].klass;
            v31 = Method_System_Collections_Generic_List_QuestReleaseEntity__Add__;
            ++HIDWORD(value[1].monitor);
            if ( !klass )
              goto LABEL_51;
            MasterName_k__BackingField_low = SLODWORD(Master_object->fields._MasterName_k__BackingField);
            if ( (unsigned int)MasterName_k__BackingField_low >= LODWORD(klass->_1.namespaze) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)Master_object,
                (Il2CppObject *)v25,
                *(const MethodInfo_37A3024 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
            }
            else
            {
              v33 = &klass->_1.image + MasterName_k__BackingField_low;
              LODWORD(Master_object->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
              v33[4] = v25;
              sub_1C36FFC((CGThumbnailListItem_o *)(v33 + 4), (int32_t)v25, v27, v28);
            }
          }
        }
        while ( v23 != ++v24 );
      }
      this->fields.isCached = 1;
    }
    v34 = *resultList;
    if ( *resultList )
    {
      size = v34->fields._size;
      v36 = v34->fields._version + 1;
      v34->fields._size = 0;
      v34->fields._version = v36;
      if ( size >= 1 )
        System_Array__Clear((System_Array_o *)v34->fields._items, 0, size, 0);
      Master_object = (QuestReleaseOverwriteMaster_o *)this->fields.cachedQuestReleaseEntityDict;
      if ( Master_object )
      {
        if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
                (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
                questId,
                &v48,
                (const MethodInfo_33FBD10 *)Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___TryGetValue__) )
          return;
        Master_object = (QuestReleaseOverwriteMaster_o *)v48;
        if ( v48 )
        {
          monitor = (int)v48[1].monitor;
          if ( monitor < 1 )
            return;
          v38 = 0;
          do
          {
            v39 = (System_Collections_Generic_List_object__o *)*resultList;
            Master_object = (QuestReleaseOverwriteMaster_o *)System_Collections_Generic_List_object___get_Item(
                                                               (System_Collections_Generic_List_object__o *)Master_object,
                                                               v38,
                                                               (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__);
            if ( !v39 )
              break;
            items = v39->fields._items;
            v43 = Method_System_Collections_Generic_List_QuestReleaseEntity__Add__;
            ++v39->fields._version;
            if ( !items )
              break;
            v44 = v39->fields._size;
            v45 = Master_object;
            if ( (unsigned int)v44 >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v39,
                (Il2CppObject *)Master_object,
                *(const MethodInfo_37A3024 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
            }
            else
            {
              v46 = &items->obj.klass + v44;
              v39->fields._size = v44 + 1;
              v46[4] = (Il2CppClass *)v45;
              sub_1C36FFC((CGThumbnailListItem_o *)(v46 + 4), (int32_t)v45, v40, v41);
            }
            if ( monitor == ++v38 )
              return;
            Master_object = (QuestReleaseOverwriteMaster_o *)v48;
          }
          while ( v48 );
        }
      }
    }
LABEL_51:
    sub_1C372B4(Master_object);
  }
  v10 = *resultList;
  if ( !*resultList )
    goto LABEL_51;
  v11 = v10->fields._size;
  v12 = v10->fields._version + 1;
  v10->fields._size = 0;
  v10->fields._version = v12;
  if ( v11 >= 1 )
    System_Array__Clear((System_Array_o *)v10->fields._items, 0, v11, 0);
  if ( !v7 )
    goto LABEL_51;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v47,
    v7,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__);
  v50 = v47;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v50,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__) )
  {
    if ( !v50.fields._current )
      sub_1C372B4(0);
    v14 = (System_Collections_Generic_List_object__o *)*resultList;
    v15 = (Il2CppObject *)QuestReleaseOverwriteEntity__ConvertToQuestReleaseEntity(
                            (QuestReleaseOverwriteEntity_o *)v50.fields._current,
                            v13);
    v18 = v15;
    if ( !v14 )
      sub_1C372B4(v15);
    v19 = v14->fields._items;
    v20 = Method_System_Collections_Generic_List_QuestReleaseEntity__Add__;
    ++v14->fields._version;
    if ( !v19 )
      sub_1C372B4(v15);
    v21 = v14->fields._size;
    if ( (unsigned int)v21 >= LODWORD(v19->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v14,
        v15,
        *(const MethodInfo_37A3024 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
    }
    else
    {
      v22 = &v19->obj.klass + v21;
      v14->fields._size = v21 + 1;
      v22[4] = (Il2CppClass *)v18;
      sub_1C36FFC((CGThumbnailListItem_o *)(v22 + 4), (int32_t)v18, v16, v17);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v50,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__Dispose__);
}


System_Collections_Generic_List_QuestReleaseEntity__o *QuestReleaseMaster__getListByTargetAndCondType(
        QuestReleaseMaster_o *this,
        int32_t targetId,
        int32_t condType,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x22
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v10; // w23
  int32_t v11; // w24
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Collections_ObjectModel_Collection_T__o *v14; // x1
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  if ( (byte_4C43704 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
    sub_1C37058(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
    byte_4C43704 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_333A510 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__);
  if ( Count >= 1 )
  {
    v10 = Count;
    v11 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v11,
                                                                 (const MethodInfo_333A5A0 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__);
      if ( list )
      {
        v14 = list;
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
              *(const MethodInfo_37A3024 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
          }
          else
          {
            v18 = &items->obj.klass + size;
            v7->fields._size = size + 1;
            v18[4] = (Il2CppClass *)v14;
            sub_1C36FFC((CGThumbnailListItem_o *)(v18 + 4), (int32_t)v14, v12, v13);
          }
        }
      }
      if ( v10 == ++v11 )
        return (System_Collections_Generic_List_QuestReleaseEntity__o *)v7;
    }
LABEL_17:
    sub_1C372B4(list);
  }
  return (System_Collections_Generic_List_QuestReleaseEntity__o *)v7;
}


QuestReleaseEntity_array *QuestReleaseMaster__getListByType(
        QuestReleaseMaster_o *this,
        int32_t type,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v7; // w22
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Collections_ObjectModel_Collection_T__o *v10; // x1
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x0

  if ( (byte_4C43701 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
    sub_1C37058(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
    byte_4C43701 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  v7 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_333A510 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__);
    if ( v7 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_18;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v7,
                                                               (const MethodInfo_333A5A0 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__);
    if ( list )
    {
      v10 = list;
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
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
        }
        else
        {
          v14 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v14[4] = (Il2CppClass *)v10;
          sub_1C36FFC((CGThumbnailListItem_o *)(v14 + 4), (int32_t)v10, v8, v9);
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v7;
    if ( !list )
      goto LABEL_18;
  }
  if ( !v5 )
LABEL_18:
    sub_1C372B4(list);
  return (QuestReleaseEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v5,
                                       (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__);
}


System_Int32_array *QuestReleaseMaster__getQuestIdsByTargetAndOpenCondType(
        QuestReleaseMaster_o *this,
        int32_t targetId,
        int32_t openCondType,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v7; // x22
  void *list; // x0
  int32_t v9; // w23
  int32_t v10; // w1
  struct System_Int32_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10

  if ( (byte_4C43702 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C37058(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C43702 = 1;
  }
  v7 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_37857AC *)Method_System_Collections_Generic_List_int___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_19;
  v9 = 0;
  while ( 1 )
  {
    list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                     (System_Collections_ObjectModel_Collection_T__o *)list,
                     (const MethodInfo_333A510 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__);
    if ( v9 >= (int)list )
      break;
    list = this->fields.list;
    if ( !list )
      goto LABEL_19;
    list = System_Collections_ObjectModel_Collection_object___get_Item(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             v9,
             (const MethodInfo_333A5A0 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__);
    if ( list && *((_DWORD *)list + 6) == targetId && *((_DWORD *)list + 5) == openCondType )
    {
      if ( !v7 )
        goto LABEL_19;
      v10 = *((_DWORD *)list + 4);
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
          v10,
          *(const MethodInfo_3786000 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
      }
      else
      {
        v7->fields._size = size + 1;
        items->m_Items[size] = v10;
      }
    }
    list = this->fields.list;
    ++v9;
    if ( !list )
      goto LABEL_19;
  }
  if ( !v7 )
LABEL_19:
    sub_1C372B4(list);
  return System_Collections_Generic_List_int___ToArray(
           v7,
           (const MethodInfo_3787AB8 *)Method_System_Collections_Generic_List_int__ToArray__);
}


void QuestReleaseMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C4370A & 1) == 0 )
  {
    sub_1C37058(&QuestReleaseMaster___c_TypeInfo);
    byte_4C4370A = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(QuestReleaseMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  QuestReleaseMaster___c_TypeInfo->static_fields->__9 = (struct QuestReleaseMaster___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)QuestReleaseMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
  const MethodInfo *v5; // x1

  if ( !b || (this = (QuestReleaseMaster___c_o *)QuestEntity__getPriority(b, (const MethodInfo *)a), !a) )
    sub_1C372B4(this);
  return (_DWORD)this - QuestEntity__getPriority(a, v5);
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
    sub_1C372B4(this);
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
    sub_1C372B4(this);
  return data->fields.questId == x;
}