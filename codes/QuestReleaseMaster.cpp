void __fastcall QuestReleaseMaster___ctor(QuestReleaseMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_int__object__o *v5; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4A4EB75 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string___ctor__, method);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity____ctor__, v3);
    sub_1B863B8(&System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___TypeInfo, v4);
    byte_4A4EB75 = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B86604(System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v5,
    (const MethodInfo_326CD90 *)Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity____ctor__);
  this->fields.cachedQuestReleaseEntityDict = (struct System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___o *)v5;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.cachedQuestReleaseEntityDict, (int32_t)v5, v6, v7);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    74,
    (const MethodInfo_3216A14 *)Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string___ctor__);
}


void __fastcall QuestReleaseMaster__Clear(QuestReleaseMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___o *cachedQuestReleaseEntityDict; // x0

  if ( (byte_4A4EB77 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__Clear__, method);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___Clear__, v3);
    byte_4A4EB77 = 1;
  }
  DataMasterBase_object__object__object___Clear(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    (const MethodInfo_32176F0 *)Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__Clear__);
  cachedQuestReleaseEntityDict = this->fields.cachedQuestReleaseEntityDict;
  if ( !cachedQuestReleaseEntityDict )
    sub_1B86614(0LL, v4);
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)cachedQuestReleaseEntityDict,
    (const MethodInfo_326D8EC *)Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___Clear__);
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

  if ( (byte_4A4EB7F & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__, *(_QWORD *)&questId);
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__, v7);
    byte_4A4EB7F = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_12:
    sub_1B86614(list, *(_QWORD *)&questId);
  v9 = 0;
  while ( 1 )
  {
    if ( v9 >= System_Collections_ObjectModel_Collection_object___get_Count(
                 list,
                 (const MethodInfo_31B0908 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__) )
      return 0;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_12;
    Item = System_Collections_ObjectModel_Collection_object___get_Item(
             list,
             v9,
             (const MethodInfo_31B0998 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__);
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

  if ( (byte_4A4EB73 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__GetEntity__, *(_QWORD *)&questId);
    byte_4A4EB73 = 1;
  }
  PK = (Il2CppObject *)QuestReleaseEntity__CreatePK(questId, type, targetId, value, (const MethodInfo *)value);
  return (QuestReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                   PK,
                                   (const MethodInfo_3218D38 *)Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_QuestReleaseEntity__o *__fastcall QuestReleaseMaster__GetListByQuestIdTargetIdAndCondType(
        QuestReleaseMaster_o *this,
        int32_t questId,
        int32_t targetId,
        int32_t condType,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x23
  __int64 v14; // x0
  __int64 v15; // x1
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  System_Func_object__bool__o *v17; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0

  if ( (byte_4A4EB7B & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Linq_Enumerable_ToList_QuestReleaseEntity___, *(_QWORD *)&questId);
    sub_1B863B8(&Method_System_Linq_Enumerable_Where_QuestReleaseEntity___, v9);
    sub_1B863B8(&System_Func_QuestReleaseEntity__bool__TypeInfo, v10);
    sub_1B863B8(&Method_QuestReleaseMaster___c__DisplayClass10_0__GetListByQuestIdTargetIdAndCondType_b__0__, v11);
    sub_1B863B8(&QuestReleaseMaster___c__DisplayClass10_0_TypeInfo, v12);
    byte_4A4EB7B = 1;
  }
  v13 = sub_1B86604(QuestReleaseMaster___c__DisplayClass10_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    sub_1B86614(v14, v15);
  *(_DWORD *)(v13 + 16) = questId;
  *(_DWORD *)(v13 + 20) = targetId;
  *(_DWORD *)(v13 + 24) = condType;
  list = this->fields.list;
  v17 = (System_Func_object__bool__o *)sub_1B86604(System_Func_QuestReleaseEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v17,
    (Il2CppObject *)v13,
    Method_QuestReleaseMaster___c__DisplayClass10_0__GetListByQuestIdTargetIdAndCondType_b__0__,
    0LL);
  v18 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__bool__o *)v17,
          (const MethodInfo_2FAFD10 *)Method_System_Linq_Enumerable_Where_QuestReleaseEntity___);
  return (System_Collections_Generic_List_QuestReleaseEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                    v18,
                                                                    (const MethodInfo_2FADBE0 *)Method_System_Linq_Enumerable_ToList_QuestReleaseEntity___);
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
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass *v38; // x1
  Il2CppClass **v39; // x0
  System_Comparison_T__o *v40; // x19
  Il2CppObject *v41; // x20
  struct QuestReleaseMaster___c_StaticFields *static_fields; // x0
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  System_Collections_Generic_List_int__o *v45; // x19
  _BOOL8 v46; // x0
  __int64 v47; // x1
  __int64 klass_low; // x1
  struct System_Int32_array *v49; // x8
  _QWORD *v50; // x9
  __int64 v51; // x10
  System_Collections_Generic_List_Enumerator_object__o v53; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v54; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4A4EB7E & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__, *(_QWORD *)&type);
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__, v9);
    sub_1B863B8(&System_Comparison_QuestEntity__TypeInfo, v10);
    sub_1B863B8(&Method_DataManager_GetMasterData_QuestMaster___, v11);
    sub_1B863B8(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v12);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__, v13);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__, v14);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__get_Current__, v15);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__Add__, v16);
    sub_1B863B8(&Method_System_Collections_Generic_List_QuestEntity__Add__, v17);
    sub_1B863B8(&Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__, v18);
    sub_1B863B8(&Method_System_Collections_Generic_List_QuestEntity__Sort__, v19);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__ToArray__, v20);
    sub_1B863B8(&Method_System_Collections_Generic_List_int___ctor__, v21);
    sub_1B863B8(&Method_System_Collections_Generic_List_QuestEntity___ctor__, v22);
    sub_1B863B8(&System_Collections_Generic_List_int__TypeInfo, v23);
    sub_1B863B8(&System_Collections_Generic_List_QuestEntity__TypeInfo, v24);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    sub_1B863B8(&Method_QuestReleaseMaster___c__GetQuestIdList_b__13_0__, v26);
    sub_1B863B8(&QuestReleaseMaster___c_TypeInfo, v27);
    byte_4A4EB7E = 1;
  }
  memset(&v54, 0, sizeof(v54));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_QuestMaster___);
  v31 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_QuestEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_QuestEntity___ctor__);
  Instance = this->fields.list;
  if ( !Instance )
    goto LABEL_21;
  v32 = 0;
  while ( v32 < System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)Instance,
                  (const MethodInfo_31B0908 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__) )
  {
    Instance = this->fields.list;
    if ( !Instance )
      goto LABEL_21;
    Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 v32,
                 (const MethodInfo_31B0998 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__);
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
                   (const MethodInfo_3214280 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
      if ( Instance )
      {
        if ( !v31 )
          goto LABEL_21;
        items = v31->fields._items;
        v36 = Method_System_Collections_Generic_List_QuestEntity__Add__;
        ++v31->fields._version;
        if ( !items )
          goto LABEL_21;
        size = v31->fields._size;
        v38 = (Il2CppClass *)Instance;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v31,
            (Il2CppObject *)Instance,
            *(const MethodInfo_35FC958 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
        }
        else
        {
          v39 = &items->obj.klass + size;
          v31->fields._size = size + 1;
          v39[4] = v38;
          sub_1B8635C((CGThumbnailListItem_o *)(v39 + 4), (int32_t)v38, v33, v34);
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
  v40 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 8LL);
  if ( !v40 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = QuestReleaseMaster___c_TypeInfo;
    }
    v41 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v40 = (System_Comparison_T__o *)sub_1B86604(System_Comparison_QuestEntity__TypeInfo);
    System_Comparison_object____ctor(v40, v41, Method_QuestReleaseMaster___c__GetQuestIdList_b__13_0__, 0LL);
    static_fields = QuestReleaseMaster___c_TypeInfo->static_fields;
    static_fields->__9__13_0 = (struct System_Comparison_QuestEntity__o *)v40;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__13_0, (int32_t)v40, v43, v44);
  }
  if ( !v31 )
    goto LABEL_21;
  System_Collections_Generic_List_object___Sort_56615964(
    v31,
    v40,
    (const MethodInfo_35FE41C *)Method_System_Collections_Generic_List_QuestEntity__Sort__);
  v45 = (System_Collections_Generic_List_int__o *)sub_1B86604(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v45,
    (const MethodInfo_35DF0E0 *)Method_System_Collections_Generic_List_int___ctor__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v53,
    v31,
    (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__);
  v54 = v53;
  while ( 1 )
  {
    v46 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v54,
            (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__);
    if ( !v46 )
      break;
    if ( !v54.fields._current )
      sub_1B86614(v46, v47);
    if ( !v45 )
      sub_1B86614(v46, v47);
    klass_low = LODWORD(v54.fields._current[1].klass);
    v49 = v45->fields._items;
    v50 = Method_System_Collections_Generic_List_int__Add__;
    ++v45->fields._version;
    if ( !v49 )
      sub_1B86614(v46, klass_low);
    v51 = v45->fields._size;
    if ( (unsigned int)v51 >= v49->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v45,
        klass_low,
        *(const MethodInfo_35DF934 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
    }
    else
    {
      v45->fields._size = v51 + 1;
      v49->m_Items[v51 + 1] = klass_low;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v54,
    (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__);
  if ( !v45 )
LABEL_21:
    sub_1B86614(Instance, v29);
  return System_Collections_Generic_List_int___ToArray(
           v45,
           (const MethodInfo_35E13EC *)Method_System_Collections_Generic_List_int__ToArray__);
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

  if ( (byte_4A4EB7D & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__, *(_QWORD *)&targetId);
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__, v7);
    sub_1B863B8(&Method_DataManager_GetMaster_CommonReleaseMaster___, v8);
    sub_1B863B8(&DataManager_TypeInfo, v9);
    byte_4A4EB7D = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !this->fields.list )
LABEL_18:
    sub_1B86614(Master_object, v11);
  v12 = (CommonReleaseMaster_o *)Master_object;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_31B0908 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__);
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
                      (const MethodInfo_31B0998 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__);
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
  QuestGroupMaster_o *Master_object; // x0
  __int64 v19; // x1
  QuestGroupMaster_o *v20; // x22
  int32_t Count; // w0
  int32_t v22; // w23
  int32_t v23; // w24
  __int64 v24; // x27
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  __int64 v27; // x26
  System_Predicate_int__o *v28; // x28
  _DWORD *v29; // x8
  int v30; // w9
  int v31; // w10
  _DWORD *v32; // x8
  System_Int32_array *QuestIdListByGroupId; // x0
  System_Int32_array *v34; // x27
  System_Predicate_int__o *klass; // x28
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  CGThumbnailListItem_o *v39; // [xsp+0h] [xbp-70h]

  if ( (byte_4A4EB81 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Array_Exists_int___, questIdList);
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__, v7);
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__, v8);
    sub_1B863B8(&Method_DataManager_GetMaster_QuestGroupMaster___, v9);
    sub_1B863B8(&DataManager_TypeInfo, v10);
    sub_1B863B8(&System_Predicate_int__TypeInfo, v11);
    sub_1B863B8(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v12);
    sub_1B863B8(&Method_QuestReleaseMaster___c__DisplayClass16_0__IsContainUnPlayableQuestByTargetId_b__1__, v13);
    sub_1B863B8(&QuestReleaseMaster___c__DisplayClass16_0_TypeInfo, v14);
    sub_1B863B8(&Method_QuestReleaseMaster___c__DisplayClass16_1__IsContainUnPlayableQuestByTargetId_b__0__, v15);
    sub_1B863B8(&QuestReleaseMaster___c__DisplayClass16_1_TypeInfo, v16);
    byte_4A4EB81 = 1;
  }
  v17 = sub_1B86604(QuestReleaseMaster___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    goto LABEL_36;
  *(_DWORD *)(v17 + 16) = targetId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestGroupMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !this->fields.list )
LABEL_36:
    sub_1B86614(Master_object, v19);
  v20 = Master_object;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_31B0908 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__);
  if ( Count < 1 )
    return 0;
  v22 = Count;
  v23 = 0;
  v39 = (CGThumbnailListItem_o *)(v17 + 24);
  while ( 1 )
  {
    v24 = sub_1B86604(QuestReleaseMaster___c__DisplayClass16_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v24, 0LL);
    Master_object = (QuestGroupMaster_o *)this->fields.list;
    if ( !Master_object )
      goto LABEL_36;
    Master_object = (QuestGroupMaster_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                            (System_Collections_ObjectModel_Collection_T__o *)Master_object,
                                            v23,
                                            (const MethodInfo_31B0998 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__);
    if ( !v24 )
      goto LABEL_36;
    *(_QWORD *)(v24 + 16) = Master_object;
    v27 = v24 + 16;
    sub_1B8635C((CGThumbnailListItem_o *)(v24 + 16), (int32_t)Master_object, v25, v26);
    if ( *(_QWORD *)(v24 + 16) )
    {
      v28 = (System_Predicate_int__o *)sub_1B86604(System_Predicate_int__TypeInfo);
      System_Predicate_int____ctor(
        v28,
        (Il2CppObject *)v24,
        Method_QuestReleaseMaster___c__DisplayClass16_1__IsContainUnPlayableQuestByTargetId_b__0__,
        0LL);
      Master_object = (QuestGroupMaster_o *)System_Array__Exists_int_(
                                              questIdList,
                                              (System_Predicate_T__o *)v28,
                                              (const MethodInfo_30672A4 *)Method_System_Array_Exists_int___);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        v29 = *(_DWORD **)v27;
        if ( !*(_QWORD *)v27 )
          goto LABEL_36;
        v30 = *(_DWORD *)(v17 + 16);
        if ( v29[4] != v30 )
        {
          v31 = v29[5];
          if ( v31 == 32 )
          {
            Master_object = v20;
            if ( !v20 )
              goto LABEL_36;
            QuestIdListByGroupId = QuestGroupMaster__GetQuestIdListByGroupId(v20, v29[6], 2, 0LL);
            if ( !QuestIdListByGroupId )
              goto LABEL_33;
            v34 = QuestIdListByGroupId;
            if ( !*(_QWORD *)&QuestIdListByGroupId->max_length )
              goto LABEL_33;
            klass = (System_Predicate_int__o *)v39->klass;
            if ( !v39->klass )
            {
              klass = (System_Predicate_int__o *)sub_1B86604(System_Predicate_int__TypeInfo);
              System_Predicate_int____ctor(
                klass,
                (Il2CppObject *)v17,
                Method_QuestReleaseMaster___c__DisplayClass16_0__IsContainUnPlayableQuestByTargetId_b__1__,
                0LL);
              *(_QWORD *)(v17 + 24) = klass;
              sub_1B8635C(v39, (int32_t)klass, v36, v37);
            }
            if ( !System_Array__Exists_int_(
                    v34,
                    (System_Predicate_T__o *)klass,
                    (const MethodInfo_30672A4 *)Method_System_Array_Exists_int___) )
              goto LABEL_33;
            Master_object = (QuestGroupMaster_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3839AA0 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
            v32 = *(_DWORD **)v27;
            if ( !*(_QWORD *)v27 || !Master_object )
              goto LABEL_36;
          }
          else
          {
            if ( v31 != 1 || v29[6] != v30 )
              goto LABEL_33;
            Master_object = (QuestGroupMaster_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3839AA0 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
            v32 = *(_DWORD **)v27;
            if ( !*(_QWORD *)v27 || !Master_object )
              goto LABEL_36;
          }
          if ( clsQuestCheck__CheckQuestPlayableNow((clsQuestCheck_o *)Master_object, v32[4], 0LL) )
            return 1;
          Master_object = (QuestGroupMaster_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3839AA0 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
          if ( !*(_QWORD *)v27 || !Master_object )
            goto LABEL_36;
          if ( clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Master_object, *(_DWORD *)(*(_QWORD *)v27 + 16LL), 0, 0LL) )
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

  if ( (byte_4A4EB80 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__, *(_QWORD *)&targetId);
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__, v5);
    sub_1B863B8(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v6);
    byte_4A4EB80 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_13:
    sub_1B86614(list, *(_QWORD *)&targetId);
  v8 = 0;
  while ( 1 )
  {
    Count = System_Collections_ObjectModel_Collection_object___get_Count(
              list,
              (const MethodInfo_31B0908 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__);
    if ( v8 >= Count )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_13;
    Item = System_Collections_ObjectModel_Collection_object___get_Item(
             list,
             v8,
             (const MethodInfo_31B0998 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__);
    if ( Item )
    {
      v11 = Item;
      if ( (HIDWORD(Item[1].klass) & 0xFFFFFFFE) == 48 && LODWORD(Item[1].monitor) == targetId )
      {
        list = (System_Collections_ObjectModel_Collection_T__o *)SingletonTemplate_object___get_Instance((const MethodInfo_3839AA0 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
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

  if ( (byte_4A4EB74 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__TryGetEntity__, entity);
    byte_4A4EB74 = 1;
  }
  PK = (Il2CppObject *)QuestReleaseEntity__CreatePK(questId, type, targetId, value, *(const MethodInfo **)&targetId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3218D84 *)Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__TryGetEntity__);
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
  System_Collections_ObjectModel_Collection_T__o *v11; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v13; // w22
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0

  if ( (byte_4A4EB76 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__, *(_QWORD *)&qid);
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__, v8);
    sub_1B863B8(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo, v9);
    byte_4A4EB76 = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  v13 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_31B0908 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__);
    if ( v13 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_18;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v13,
                                                               (const MethodInfo_31B0998 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__);
    if ( list )
    {
      v11 = list;
      if ( LODWORD(list->fields.items) == qid )
      {
        if ( !v10 )
          goto LABEL_18;
        items = v10->fields._items;
        v17 = Method_System_Collections_Generic_List_QuestReleaseEntity__Add__;
        ++v10->fields._version;
        if ( !items )
          goto LABEL_18;
        size = v10->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v10,
            (Il2CppObject *)list,
            *(const MethodInfo_35FC958 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
        else
        {
          v19 = &items->obj.klass + size;
          v10->fields._size = size + 1;
          v19[4] = (Il2CppClass *)v11;
          sub_1B8635C((CGThumbnailListItem_o *)(v19 + 4), (int32_t)v11, v14, v15);
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v13;
    if ( !list )
      goto LABEL_18;
  }
  if ( !v10 )
LABEL_18:
    sub_1B86614(list, v11);
  return (QuestReleaseEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v10,
                                       (const MethodInfo_35FE4B0 *)Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestReleaseMaster__getListByQuestID_40621168(
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
  QuestReleaseOverwriteMaster_o *Master_object; // x0
  __int64 v26; // x1
  const MethodInfo *v27; // x4
  System_Collections_Generic_List_QuestReleaseEntity__o *v28; // x8
  int32_t v29; // w2
  int v30; // w9
  const MethodInfo *v31; // x1
  System_Collections_Generic_List_object__o *v32; // x20
  Il2CppObject *v33; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  Il2CppObject *v36; // x1
  struct System_Object_array *v37; // x8
  _QWORD *v38; // x9
  __int64 v39; // x10
  Il2CppClass **v40; // x0
  int v41; // w22
  int32_t v42; // w23
  QuestReleaseOverwriteMaster_o *v43; // x24
  int32_t MasterKind_k__BackingField; // w25
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  System_Collections_Generic_List_object__o *v47; // x26
  Il2CppClass *klass; // x8
  _QWORD *v49; // x9
  __int64 MasterName_k__BackingField_low; // x10
  void **v51; // x8
  System_Collections_Generic_List_QuestReleaseEntity__o *v52; // x8
  int32_t size; // w2
  int v54; // w9
  int monitor; // w22
  int32_t v56; // w20
  System_Collections_Generic_List_object__o *v57; // x21
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  struct System_Object_array *items; // x8
  _QWORD *v61; // x9
  __int64 v62; // x10
  QuestReleaseOverwriteMaster_o *v63; // x1
  Il2CppClass **v64; // x0
  System_Collections_Generic_List_Enumerator_object__o v65; // [xsp+8h] [xbp-A8h] BYREF
  Il2CppObject *v66; // [xsp+20h] [xbp-90h] BYREF
  Il2CppObject *value; // [xsp+28h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v68; // [xsp+30h] [xbp-80h] BYREF
  System_Collections_Generic_List_QuestReleaseOverwriteEntity__o *entityList; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_4A4EB78 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__, *(_QWORD *)&questId);
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__, v7);
    sub_1B863B8(&Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___, v8);
    sub_1B863B8(&DataManager_TypeInfo, v9);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___TryGetValue__, v10);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___set_Item__, v11);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__Dispose__, v12);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__, v13);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__get_Current__, v14);
    sub_1B863B8(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__, v15);
    sub_1B863B8(&Method_System_Collections_Generic_List_QuestReleaseEntity__Clear__, v16);
    sub_1B863B8(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__, v17);
    sub_1B863B8(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__, v18);
    sub_1B863B8(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__, v19);
    sub_1B863B8(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Count__, v20);
    sub_1B863B8(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__, v21);
    sub_1B863B8(&System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo, v22);
    sub_1B863B8(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo, v23);
    byte_4A4EB78 = 1;
  }
  memset(&v68, 0, sizeof(v68));
  v66 = 0LL;
  value = 0LL;
  v24 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__);
  entityList = (System_Collections_Generic_List_QuestReleaseOverwriteEntity__o *)v24;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestReleaseOverwriteMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
  if ( !Master_object )
    goto LABEL_51;
  Master_object = (QuestReleaseOverwriteMaster_o *)QuestReleaseOverwriteMaster__TryGetEntityListByQuestIdAndTime(
                                                     Master_object,
                                                     &entityList,
                                                     questId,
                                                     0LL,
                                                     v27);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
  {
    if ( !this->fields.isCached )
    {
      Master_object = (QuestReleaseOverwriteMaster_o *)this->fields.list;
      if ( !Master_object )
        goto LABEL_51;
      Master_object = (QuestReleaseOverwriteMaster_o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                         (System_Collections_ObjectModel_Collection_T__o *)Master_object,
                                                         (const MethodInfo_31B0908 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__);
      if ( (int)Master_object >= 1 )
      {
        v41 = (int)Master_object;
        v42 = 0;
        do
        {
          Master_object = (QuestReleaseOverwriteMaster_o *)this->fields.list;
          if ( !Master_object )
            goto LABEL_51;
          Master_object = (QuestReleaseOverwriteMaster_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                             (System_Collections_ObjectModel_Collection_T__o *)Master_object,
                                                             v42,
                                                             (const MethodInfo_31B0998 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__);
          if ( Master_object )
          {
            v43 = Master_object;
            Master_object = (QuestReleaseOverwriteMaster_o *)this->fields.cachedQuestReleaseEntityDict;
            if ( !Master_object )
              goto LABEL_51;
            MasterKind_k__BackingField = v43->fields._MasterKind_k__BackingField;
            if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
                    (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
                    MasterKind_k__BackingField,
                    &value,
                    (const MethodInfo_326EEF0 *)Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___TryGetValue__) )
            {
              v47 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
              System_Collections_Generic_List_object____ctor(
                v47,
                (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
              value = (Il2CppObject *)v47;
              Master_object = (QuestReleaseOverwriteMaster_o *)this->fields.cachedQuestReleaseEntityDict;
              if ( !Master_object )
                goto LABEL_51;
              System_Collections_Generic_Dictionary_int__object___set_Item(
                (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
                MasterKind_k__BackingField,
                (Il2CppObject *)v47,
                (const MethodInfo_326D750 *)Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___set_Item__);
            }
            Master_object = (QuestReleaseOverwriteMaster_o *)value;
            if ( !value )
              goto LABEL_51;
            klass = value[1].klass;
            v49 = Method_System_Collections_Generic_List_QuestReleaseEntity__Add__;
            ++HIDWORD(value[1].monitor);
            if ( !klass )
              goto LABEL_51;
            MasterName_k__BackingField_low = SLODWORD(Master_object->fields._MasterName_k__BackingField);
            if ( (unsigned int)MasterName_k__BackingField_low >= LODWORD(klass->_1.namespaze) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)Master_object,
                (Il2CppObject *)v43,
                *(const MethodInfo_35FC958 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
            }
            else
            {
              v51 = &klass->_1.image + MasterName_k__BackingField_low;
              LODWORD(Master_object->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
              v51[4] = v43;
              sub_1B8635C((CGThumbnailListItem_o *)(v51 + 4), (int32_t)v43, v45, v46);
            }
          }
        }
        while ( v41 != ++v42 );
      }
      this->fields.isCached = 1;
    }
    v52 = *resultList;
    if ( *resultList )
    {
      size = v52->fields._size;
      v54 = v52->fields._version + 1;
      v52->fields._size = 0;
      v52->fields._version = v54;
      if ( size >= 1 )
        System_Array__Clear((System_Array_o *)v52->fields._items, 0, size, 0LL);
      Master_object = (QuestReleaseOverwriteMaster_o *)this->fields.cachedQuestReleaseEntityDict;
      if ( Master_object )
      {
        if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
                (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
                questId,
                &v66,
                (const MethodInfo_326EEF0 *)Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___TryGetValue__) )
          return;
        Master_object = (QuestReleaseOverwriteMaster_o *)v66;
        if ( v66 )
        {
          monitor = (int)v66[1].monitor;
          if ( monitor < 1 )
            return;
          v56 = 0;
          do
          {
            v57 = (System_Collections_Generic_List_object__o *)*resultList;
            Master_object = (QuestReleaseOverwriteMaster_o *)System_Collections_Generic_List_object___get_Item(
                                                               (System_Collections_Generic_List_object__o *)Master_object,
                                                               v56,
                                                               (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__);
            if ( !v57 )
              break;
            items = v57->fields._items;
            v61 = Method_System_Collections_Generic_List_QuestReleaseEntity__Add__;
            ++v57->fields._version;
            if ( !items )
              break;
            v62 = v57->fields._size;
            v63 = Master_object;
            if ( (unsigned int)v62 >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v57,
                (Il2CppObject *)Master_object,
                *(const MethodInfo_35FC958 **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
            }
            else
            {
              v64 = &items->obj.klass + v62;
              v57->fields._size = v62 + 1;
              v64[4] = (Il2CppClass *)v63;
              sub_1B8635C((CGThumbnailListItem_o *)(v64 + 4), (int32_t)v63, v58, v59);
            }
            if ( monitor == ++v56 )
              return;
            Master_object = (QuestReleaseOverwriteMaster_o *)v66;
          }
          while ( v66 );
        }
      }
    }
LABEL_51:
    sub_1B86614(Master_object, v26);
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
    (System_Collections_Generic_List_Enumerator_T__o *)&v65,
    v24,
    (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__);
  v68 = v65;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v68,
            (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__) )
  {
    if ( !v68.fields._current )
      sub_1B86614(0LL, v31);
    v32 = (System_Collections_Generic_List_object__o *)*resultList;
    v33 = (Il2CppObject *)QuestReleaseOverwriteEntity__ConvertToQuestReleaseEntity(
                            (QuestReleaseOverwriteEntity_o *)v68.fields._current,
                            v31);
    v36 = v33;
    if ( !v32 )
      sub_1B86614(v33, v33);
    v37 = v32->fields._items;
    v38 = Method_System_Collections_Generic_List_QuestReleaseEntity__Add__;
    ++v32->fields._version;
    if ( !v37 )
      sub_1B86614(v33, v33);
    v39 = v32->fields._size;
    if ( (unsigned int)v39 >= v37->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v32,
        v33,
        *(const MethodInfo_35FC958 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
    }
    else
    {
      v40 = &v37->obj.klass + v39;
      v32->fields._size = v39 + 1;
      v40[4] = (Il2CppClass *)v36;
      sub_1B8635C((CGThumbnailListItem_o *)(v40 + 4), (int32_t)v36, v34, v35);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v68,
    (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__Dispose__);
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
  System_Collections_ObjectModel_Collection_T__o *v12; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v15; // w23
  int32_t v16; // w24
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0

  if ( (byte_4A4EB7C & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__, *(_QWORD *)&targetId);
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__, v8);
    sub_1B863B8(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__, v9);
    sub_1B863B8(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo, v10);
    byte_4A4EB7C = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_31B0908 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__);
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
                                                                 (const MethodInfo_31B0998 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__);
      if ( list )
      {
        v12 = list;
        if ( LODWORD(list[1].klass) == targetId && HIDWORD(list->fields.items) == condType )
        {
          if ( !v11 )
            break;
          items = v11->fields._items;
          v20 = Method_System_Collections_Generic_List_QuestReleaseEntity__Add__;
          ++v11->fields._version;
          if ( !items )
            break;
          size = v11->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v11,
              (Il2CppObject *)list,
              *(const MethodInfo_35FC958 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
          }
          else
          {
            v22 = &items->obj.klass + size;
            v11->fields._size = size + 1;
            v22[4] = (Il2CppClass *)v12;
            sub_1B8635C((CGThumbnailListItem_o *)(v22 + 4), (int32_t)v12, v17, v18);
          }
        }
      }
      if ( v15 == ++v16 )
        return (System_Collections_Generic_List_QuestReleaseEntity__o *)v11;
    }
LABEL_17:
    sub_1B86614(list, v12);
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
  System_Collections_ObjectModel_Collection_T__o *v11; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v13; // w22
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0

  if ( (byte_4A4EB79 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__, *(_QWORD *)&type);
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__, v8);
    sub_1B863B8(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo, v9);
    byte_4A4EB79 = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  v13 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_31B0908 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__);
    if ( v13 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_18;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v13,
                                                               (const MethodInfo_31B0998 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__);
    if ( list )
    {
      v11 = list;
      if ( HIDWORD(list->fields.items) == type )
      {
        if ( !v10 )
          goto LABEL_18;
        items = v10->fields._items;
        v17 = Method_System_Collections_Generic_List_QuestReleaseEntity__Add__;
        ++v10->fields._version;
        if ( !items )
          goto LABEL_18;
        size = v10->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v10,
            (Il2CppObject *)list,
            *(const MethodInfo_35FC958 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
        else
        {
          v19 = &items->obj.klass + size;
          v10->fields._size = size + 1;
          v19[4] = (Il2CppClass *)v11;
          sub_1B8635C((CGThumbnailListItem_o *)(v19 + 4), (int32_t)v11, v14, v15);
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v13;
    if ( !list )
      goto LABEL_18;
  }
  if ( !v10 )
LABEL_18:
    sub_1B86614(list, v11);
  return (QuestReleaseEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v10,
                                       (const MethodInfo_35FE4B0 *)Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__);
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

  if ( (byte_4A4EB7A & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__, *(_QWORD *)&targetId);
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__ToArray__, v9);
    sub_1B863B8(&Method_System_Collections_Generic_List_int___ctor__, v10);
    sub_1B863B8(&System_Collections_Generic_List_int__TypeInfo, v11);
    byte_4A4EB7A = 1;
  }
  v12 = (System_Collections_Generic_List_int__o *)sub_1B86604(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v12,
    (const MethodInfo_35DF0E0 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  v15 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_31B0908 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__);
    if ( v15 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_19;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v15,
                                                               (const MethodInfo_31B0998 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__);
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
          *(const MethodInfo_35DF934 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
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
    sub_1B86614(list, items_low);
  return System_Collections_Generic_List_int___ToArray(
           v12,
           (const MethodInfo_35E13EC *)Method_System_Collections_Generic_List_int__ToArray__);
}


void __fastcall QuestReleaseMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4A4EB82 & 1) == 0 )
  {
    sub_1B863B8(&QuestReleaseMaster___c_TypeInfo, v1);
    byte_4A4EB82 = 1;
  }
  v2 = (Il2CppObject *)sub_1B86604(QuestReleaseMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  QuestReleaseMaster___c_TypeInfo->static_fields->__9 = (struct QuestReleaseMaster___c_o *)v2;
  sub_1B8635C((CGThumbnailListItem_o *)QuestReleaseMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall QuestReleaseMaster___c___ctor(QuestReleaseMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall QuestReleaseMaster___c___GetQuestIdList_b__13_0(
        QuestReleaseMaster___c_o *this,
        QuestEntity_o *a,
        QuestEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || (this = (QuestReleaseMaster___c_o *)QuestEntity__getPriority(b, 0LL), !a) )
    sub_1B86614(this, a);
  return (_DWORD)this - QuestEntity__getPriority(a, 0LL);
}


void __fastcall QuestReleaseMaster___c__DisplayClass10_0___ctor(
        QuestReleaseMaster___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestReleaseMaster___c__DisplayClass10_0___GetListByQuestIdTargetIdAndCondType_b__0(
        QuestReleaseMaster___c__DisplayClass10_0_o *this,
        QuestReleaseEntity_o *d,
        const MethodInfo *method)
{
  if ( !d )
    sub_1B86614(this, 0LL);
  return d->fields.questId == this->fields.questId
      && d->fields.targetId == this->fields.targetId
      && d->fields.type == this->fields.condType;
}


void __fastcall QuestReleaseMaster___c__DisplayClass16_0___ctor(
        QuestReleaseMaster___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestReleaseMaster___c__DisplayClass16_0___IsContainUnPlayableQuestByTargetId_b__1(
        QuestReleaseMaster___c__DisplayClass16_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return this->fields.targetId == x;
}


void __fastcall QuestReleaseMaster___c__DisplayClass16_1___ctor(
        QuestReleaseMaster___c__DisplayClass16_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestReleaseMaster___c__DisplayClass16_1___IsContainUnPlayableQuestByTargetId_b__0(
        QuestReleaseMaster___c__DisplayClass16_1_o *this,
        int32_t x,
        const MethodInfo *method)
{
  struct QuestReleaseEntity_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_1B86614(this, x);
  return data->fields.questId == x;
}