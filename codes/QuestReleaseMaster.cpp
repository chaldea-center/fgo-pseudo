void QuestReleaseMaster___ctor(QuestReleaseMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5970FF5 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity____ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___TypeInfo);
    byte_5970FF5 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_int__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v3,
    (const MethodInfo_3F9BAFC *)Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity____ctor__);
  this->fields.cachedQuestReleaseEntityDict = (struct System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___o *)v3;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.cachedQuestReleaseEntityDict,
    (int32_t)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    74,
    (const MethodInfo_3F1339C *)Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string___ctor__);
}


void QuestReleaseMaster__Clear(QuestReleaseMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___o *cachedQuestReleaseEntityDict; // x0

  if ( (byte_5970FF7 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___Clear__);
    byte_5970FF7 = 1;
  }
  DataMasterBase_object__object__object___Clear(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    (const MethodInfo_3F142AC *)Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__Clear__);
  cachedQuestReleaseEntityDict = this->fields.cachedQuestReleaseEntityDict;
  if ( !cachedQuestReleaseEntityDict )
    sub_2213CDC(0, v3);
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)cachedQuestReleaseEntityDict,
    (const MethodInfo_3F9C638 *)Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___Clear__);
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

  if ( (byte_5970FFF & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__);
    byte_5970FFF = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_12:
    sub_2213CDC(list, *(_QWORD *)&questId);
  v8 = 0;
  while ( 1 )
  {
    if ( v8 >= System_Collections_ObjectModel_Collection_object___get_Count(
                 list,
                 (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__) )
      return 0;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_12;
    Item = System_Collections_ObjectModel_Collection_object___get_Item(
             list,
             v8,
             (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__);
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

  if ( (byte_5970FF3 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__GetEntity__);
    byte_5970FF3 = 1;
  }
  PK = (Il2CppObject *)QuestReleaseEntity__CreatePK(questId, type, targetId, value, (const MethodInfo *)value);
  return (QuestReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                   PK,
                                   (const MethodInfo_3F157EC *)Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__GetEntity__);
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
  System_Func_QuestReleaseEntity__bool__c *v12; // x0
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x20
  System_Func_object__bool__o *v14; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0

  if ( (byte_5970FFB & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_QuestReleaseEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_QuestReleaseEntity___);
    sub_2213A60(&System_Func_QuestReleaseEntity__bool__TypeInfo);
    sub_2213A60(&Method_QuestReleaseMaster___c__DisplayClass10_0__GetListByQuestIdTargetIdAndCondType_b__0__);
    sub_2213A60(&QuestReleaseMaster___c__DisplayClass10_0_TypeInfo);
    byte_5970FFB = 1;
  }
  v9 = sub_2213CCC(QuestReleaseMaster___c__DisplayClass10_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    sub_2213CDC(v10, v11);
  *(_DWORD *)(v9 + 16) = questId;
  *(_DWORD *)(v9 + 20) = targetId;
  v12 = System_Func_QuestReleaseEntity__bool__TypeInfo;
  list = this->fields.list;
  *(_DWORD *)(v9 + 24) = condType;
  v14 = (System_Func_object__bool__o *)sub_2213CCC(v12);
  System_Func_object__bool____ctor(
    v14,
    (Il2CppObject *)v9,
    Method_QuestReleaseMaster___c__DisplayClass10_0__GetListByQuestIdTargetIdAndCondType_b__0__,
    0);
  v15 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__bool__o *)v14,
          (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_QuestReleaseEntity___);
  return (System_Collections_Generic_List_QuestReleaseEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                    v15,
                                                                    (const MethodInfo_38A0DF0 *)Method_System_Linq_Enumerable_ToList_QuestReleaseEntity___);
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
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass *v23; // x1
  Il2CppClass **v24; // x0
  struct QuestReleaseMaster___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__13_0; // x19
  Il2CppObject *v27; // x20
  struct QuestReleaseMaster___c_StaticFields *v28; // x0
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  System_Collections_Generic_List_int__o *v35; // x19
  _BOOL8 v36; // x0
  __int64 v37; // x1
  struct System_Int32_array *v38; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  __int64 v42; // [xsp+8h] [xbp-88h]
  System_Collections_Generic_List_Enumerator_object__o *v43; // [xsp+10h] [xbp-80h]
  System_Collections_Generic_List_Enumerator_object__o v44; // [xsp+18h] [xbp-78h] BYREF

  if ( (byte_5970FFE & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__);
    sub_2213A60(&System_Comparison_QuestEntity__TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_2213A60(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestEntity__Sort__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_QuestEntity__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_QuestReleaseMaster___c__GetQuestIdList_b__13_0__);
    sub_2213A60(&QuestReleaseMaster___c_TypeInfo);
    byte_5970FFE = 1;
  }
  memset(&v44, 0, sizeof(v44));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestMaster___);
  v12 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_QuestEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_QuestEntity___ctor__);
  Instance = this->fields.list;
  if ( !Instance )
    goto LABEL_21;
  v13 = 0;
  while ( v13 < System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)Instance,
                  (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__) )
  {
    Instance = this->fields.list;
    if ( !Instance )
      goto LABEL_21;
    Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 v13,
                 (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__);
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
                   (const MethodInfo_3F10B30 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
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
        v23 = (Il2CppClass *)Instance;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v12,
            (Il2CppObject *)Instance,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v24 = &items->obj.klass + size;
          v12->fields._size = size + 1;
          v24[4] = v23;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v24 + 4), (int32_t)v23, v14, v15, v16, v17, v18, v19);
        }
      }
    }
    Instance = this->fields.list;
    ++v13;
    if ( !Instance )
      goto LABEL_21;
  }
  Instance = QuestReleaseMaster___c_TypeInfo;
  if ( !*(&QuestReleaseMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(QuestReleaseMaster___c_TypeInfo, v10);
    Instance = QuestReleaseMaster___c_TypeInfo;
  }
  static_fields = (struct QuestReleaseMaster___c_StaticFields *)*((_QWORD *)Instance + 23);
  _9__13_0 = (System_Comparison_T__o *)static_fields->__9__13_0;
  if ( !_9__13_0 )
  {
    if ( !*((_DWORD *)Instance + 57) )
    {
      j_il2cpp_runtime_class_init_0(Instance, v10);
      static_fields = QuestReleaseMaster___c_TypeInfo->static_fields;
    }
    v27 = (Il2CppObject *)static_fields->__9;
    _9__13_0 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_QuestEntity__TypeInfo);
    System_Comparison_object____ctor(_9__13_0, v27, Method_QuestReleaseMaster___c__GetQuestIdList_b__13_0__, 0);
    v28 = QuestReleaseMaster___c_TypeInfo->static_fields;
    v28->__9__13_0 = (struct System_Comparison_QuestEntity__o *)_9__13_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v28->__9__13_0, (int32_t)_9__13_0, v29, v30, v31, v32, v33, v34);
  }
  if ( !v12 )
    goto LABEL_21;
  System_Collections_Generic_List_object___Sort_71849708(
    v12,
    _9__13_0,
    (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_QuestEntity__Sort__);
  v35 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v35,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v44,
    v12,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__);
  v42 = 0;
  v43 = &v44;
  while ( 1 )
  {
    v36 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v44,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__);
    if ( !v36 )
      break;
    if ( !v44.fields._current )
      sub_2213CDC(v36, v37);
    if ( !v35
      || (v38 = v35->fields._items,
          v37 = *(unsigned int *)((char *)&v44.fields._current->klass + (unsigned __int64)&word_10),
          v39 = Method_System_Collections_Generic_List_int__Add__,
          ++v35->fields._version,
          !v38) )
    {
      sub_2213CDC(v36, v37);
    }
    v40 = v35->fields._size;
    if ( (unsigned int)v40 >= LODWORD(v38->max_length) )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v35,
        v37,
        *(const MethodInfo_4467270 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
    }
    else
    {
      v35->fields._size = v40 + 1;
      v38->m_Items[v40] = v37;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v44,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__);
  if ( !v35 )
LABEL_21:
    sub_2213CDC(Instance, v10);
  return System_Collections_Generic_List_int___ToArray(
           v35,
           (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
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
  bool v13; // w26
  int v14; // w8

  if ( (byte_5970FFD & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__);
    sub_2213A60(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    byte_5970FFD = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&targetId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !this->fields.list )
    goto LABEL_19;
  v9 = (CommonReleaseMaster_o *)Master_object;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0;
    v13 = 1;
    while ( 1 )
    {
      Master_object = this->fields.list;
      if ( !Master_object )
        break;
      Master_object = System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)Master_object,
                        v12,
                        (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__);
      if ( !Master_object || *((_DWORD *)Master_object + 4) != targetId )
        goto LABEL_22;
      v14 = *((_DWORD *)Master_object + 5);
      if ( v14 == condType )
        return v13;
      if ( v14 != 113 )
        goto LABEL_22;
      if ( !v9 )
        break;
      if ( !CommonReleaseMaster__IsContainCondType(v9, *((_DWORD *)Master_object + 6), condType, 0) )
      {
LABEL_22:
        v13 = ++v12 < v11;
        if ( v11 != v12 )
          continue;
      }
      return v13;
    }
LABEL_19:
    sub_2213CDC(Master_object, v8);
  }
  return 0;
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
  DataManager_c *v10; // x0
  int v11; // w8
  QuestGroupMaster_o *v12; // x22
  int32_t Count; // w0
  int32_t v14; // w23
  int32_t v15; // w24
  bool v16; // w22
  __int64 v17; // x26
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  __int64 v24; // x25
  System_Predicate_int__o *v25; // x27
  _DWORD *v26; // x8
  int v27; // w9
  int v28; // w10
  _DWORD *v29; // x8
  System_Int32_array *QuestIdListByGroupId; // x0
  System_Int32_array *v31; // x26
  System_Predicate_int__o *v32; // x27
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  QuestGroupMaster_o *v40; // [xsp+8h] [xbp-68h]

  if ( (byte_5971001 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Exists_int___);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__);
    sub_2213A60(&Method_DataManager_GetMaster_QuestGroupMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&System_Predicate_int__TypeInfo);
    sub_2213A60(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_2213A60(&Method_QuestReleaseMaster___c__DisplayClass16_0__IsContainUnPlayableQuestByTargetId_b__1__);
    sub_2213A60(&QuestReleaseMaster___c__DisplayClass16_0_TypeInfo);
    sub_2213A60(&Method_QuestReleaseMaster___c__DisplayClass16_1__IsContainUnPlayableQuestByTargetId_b__0__);
    sub_2213A60(&QuestReleaseMaster___c__DisplayClass16_1_TypeInfo);
    byte_5971001 = 1;
  }
  v7 = sub_2213CCC(QuestReleaseMaster___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_37;
  v10 = DataManager_TypeInfo;
  v11 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  *(_DWORD *)(v7 + 16) = targetId;
  if ( !v11 )
    j_il2cpp_runtime_class_init_0(v10, v9);
  Master_object = (QuestGroupMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !this->fields.list )
LABEL_37:
    sub_2213CDC(Master_object, v9);
  v12 = Master_object;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__);
  if ( Count >= 1 )
  {
    v40 = v12;
    v14 = Count;
    v15 = 0;
    v16 = 1;
    while ( 1 )
    {
      v17 = sub_2213CCC(QuestReleaseMaster___c__DisplayClass16_1_TypeInfo);
      System_Object___ctor((Il2CppObject *)v17, 0);
      Master_object = (QuestGroupMaster_o *)this->fields.list;
      if ( !Master_object )
        goto LABEL_37;
      Master_object = (QuestGroupMaster_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                              (System_Collections_ObjectModel_Collection_T__o *)Master_object,
                                              v15,
                                              (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__);
      if ( !v17 )
        goto LABEL_37;
      *(_QWORD *)(v17 + 16) = Master_object;
      v24 = v17 + 16;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v17 + 16), (int32_t)Master_object, v18, v19, v20, v21, v22, v23);
      if ( *(_QWORD *)(v17 + 16) )
      {
        v25 = (System_Predicate_int__o *)sub_2213CCC(System_Predicate_int__TypeInfo);
        System_Predicate_int____ctor(
          v25,
          (Il2CppObject *)v17,
          Method_QuestReleaseMaster___c__DisplayClass16_1__IsContainUnPlayableQuestByTargetId_b__0__,
          0);
        Master_object = (QuestGroupMaster_o *)System_Array__Exists_int_(
                                                questIdList,
                                                (System_Predicate_T__o *)v25,
                                                (const MethodInfo_39A886C *)Method_System_Array_Exists_int___);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
        {
          v26 = *(_DWORD **)v24;
          if ( !*(_QWORD *)v24 )
            goto LABEL_37;
          v27 = *(_DWORD *)(v7 + 16);
          if ( v26[4] != v27 )
          {
            v28 = v26[5];
            if ( v28 == 32 )
            {
              Master_object = v40;
              if ( !v40 )
                goto LABEL_37;
              QuestIdListByGroupId = QuestGroupMaster__GetQuestIdListByGroupId(v40, v26[6], 2, 0);
              if ( !QuestIdListByGroupId )
                goto LABEL_33;
              v31 = QuestIdListByGroupId;
              if ( !QuestIdListByGroupId->max_length )
                goto LABEL_33;
              v32 = *(System_Predicate_int__o **)(v7 + 24);
              if ( !v32 )
              {
                v32 = (System_Predicate_int__o *)sub_2213CCC(System_Predicate_int__TypeInfo);
                System_Predicate_int____ctor(
                  v32,
                  (Il2CppObject *)v7,
                  Method_QuestReleaseMaster___c__DisplayClass16_0__IsContainUnPlayableQuestByTargetId_b__1__,
                  0);
                *(_QWORD *)(v7 + 24) = v32;
                sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)v32, v33, v34, v35, v36, v37, v38);
              }
              if ( !System_Array__Exists_int_(
                      v31,
                      (System_Predicate_T__o *)v32,
                      (const MethodInfo_39A886C *)Method_System_Array_Exists_int___) )
                goto LABEL_33;
              Master_object = (QuestGroupMaster_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
              v29 = *(_DWORD **)v24;
              if ( !*(_QWORD *)v24 || !Master_object )
                goto LABEL_37;
            }
            else
            {
              if ( v28 != 1 || v26[6] != v27 )
                goto LABEL_33;
              Master_object = (QuestGroupMaster_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
              v29 = *(_DWORD **)v24;
              if ( !*(_QWORD *)v24 || !Master_object )
                goto LABEL_37;
            }
            if ( clsQuestCheck__CheckQuestPlayableNow((clsQuestCheck_o *)Master_object, v29[4], 0, 0) )
              return v16;
            Master_object = (QuestGroupMaster_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
            if ( !*(_QWORD *)v24 || !Master_object )
              goto LABEL_37;
            if ( clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Master_object, *(_DWORD *)(*(_QWORD *)v24 + 16LL), 0, 0) )
              return v16;
          }
        }
      }
LABEL_33:
      v16 = ++v15 < v14;
      if ( v14 == v15 )
        return v16;
    }
  }
  return 0;
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

  if ( (byte_5971000 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__);
    sub_2213A60(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    byte_5971000 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_13:
    sub_2213CDC(list, *(_QWORD *)&targetId);
  v6 = 0;
  while ( 1 )
  {
    Count = System_Collections_ObjectModel_Collection_object___get_Count(
              list,
              (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__);
    if ( v6 >= Count )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_13;
    Item = System_Collections_ObjectModel_Collection_object___get_Item(
             list,
             v6,
             (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__);
    if ( Item )
    {
      v9 = Item;
      if ( (HIDWORD(Item[1].klass) & 0xFFFFFFFE) == 0x30 && LODWORD(Item[1].monitor) == targetId )
      {
        list = (System_Collections_ObjectModel_Collection_T__o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
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

  if ( (byte_5970FF4 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__TryGetEntity__);
    byte_5970FF4 = 1;
  }
  PK = (Il2CppObject *)QuestReleaseEntity__CreatePK(questId, type, targetId, value, *(const MethodInfo **)&targetId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3F15838 *)Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__TryGetEntity__);
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
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  if ( (byte_5970FF6 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
    byte_5970FF6 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  v8 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__);
    if ( v8 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_15;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v8,
                                                               (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__);
    if ( list )
    {
      v6 = list;
      if ( LODWORD(list->fields.items) == qid )
      {
        if ( !v5 )
          goto LABEL_15;
        items = v5->fields._items;
        v16 = Method_System_Collections_Generic_List_QuestReleaseEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          goto LABEL_15;
        size = v5->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            (Il2CppObject *)list,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v18 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v18[4] = (Il2CppClass *)v6;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v18 + 4), (int32_t)v6, v9, v10, v11, v12, v13, v14);
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v8;
    if ( !list )
      goto LABEL_15;
  }
  if ( !v5 )
LABEL_15:
    sub_2213CDC(list, v6);
  return (QuestReleaseEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v5,
                                       (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__);
}


void QuestReleaseMaster__getListByQuestID_49559816(
        QuestReleaseMaster_o *this,
        int32_t questId,
        System_Collections_Generic_List_QuestReleaseEntity__o **resultList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x22
  __int64 v8; // x1
  QuestReleaseOverwriteMaster_o *Master_object; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x4
  System_Collections_Generic_List_QuestReleaseEntity__o *v12; // x8
  int32_t v13; // w2
  int v14; // w9
  const MethodInfo *v15; // x1
  System_Collections_Generic_List_object__o *v16; // x20
  Il2CppObject *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  Il2CppObject *v24; // x1
  struct System_Object_array *v25; // x8
  _QWORD *v26; // x9
  __int64 v27; // x10
  Il2CppClass **v28; // x0
  int v29; // w22
  int32_t v30; // w23
  QuestReleaseOverwriteMaster_o *v31; // x24
  int32_t MasterKind_k__BackingField; // w25
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  System_Collections_Generic_List_object__o *v39; // x26
  Il2CppClass *klass; // x8
  _QWORD *v41; // x9
  __int64 MasterName_k__BackingField_low; // x10
  void **v43; // x8
  System_Collections_Generic_List_QuestReleaseEntity__o *v44; // x8
  int32_t size; // w2
  int v46; // w9
  int monitor; // w22
  int32_t v48; // w20
  System_Collections_Generic_List_object__o *v49; // x21
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  struct System_Object_array *items; // x8
  _QWORD *v57; // x9
  __int64 v58; // x10
  QuestReleaseOverwriteMaster_o *v59; // x1
  Il2CppClass **v60; // x0
  Il2CppObject *v61; // [xsp+10h] [xbp-90h] BYREF
  Il2CppObject *value; // [xsp+18h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v63; // [xsp+20h] [xbp-80h] BYREF
  System_Collections_Generic_List_QuestReleaseOverwriteEntity__o *entityList; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_5970FF8 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__);
    sub_2213A60(&Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___TryGetValue__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___set_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestReleaseEntity__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
    byte_5970FF8 = 1;
  }
  memset(&v63, 0, sizeof(v63));
  v61 = 0;
  value = 0;
  v7 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__);
  entityList = (System_Collections_Generic_List_QuestReleaseOverwriteEntity__o *)v7;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v8);
  Master_object = (QuestReleaseOverwriteMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
  if ( !Master_object )
    goto LABEL_55;
  Master_object = (QuestReleaseOverwriteMaster_o *)QuestReleaseOverwriteMaster__TryGetEntityListByQuestIdAndTime(
                                                     Master_object,
                                                     &entityList,
                                                     questId,
                                                     0,
                                                     v11);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
  {
    if ( !this->fields.isCached )
    {
      Master_object = (QuestReleaseOverwriteMaster_o *)this->fields.list;
      if ( !Master_object )
        goto LABEL_55;
      Master_object = (QuestReleaseOverwriteMaster_o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                         (System_Collections_ObjectModel_Collection_T__o *)Master_object,
                                                         (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__);
      if ( (int)Master_object >= 1 )
      {
        v29 = (int)Master_object;
        v30 = 0;
        do
        {
          Master_object = (QuestReleaseOverwriteMaster_o *)this->fields.list;
          if ( !Master_object )
            goto LABEL_55;
          Master_object = (QuestReleaseOverwriteMaster_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                             (System_Collections_ObjectModel_Collection_T__o *)Master_object,
                                                             v30,
                                                             (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__);
          if ( Master_object )
          {
            v31 = Master_object;
            Master_object = (QuestReleaseOverwriteMaster_o *)this->fields.cachedQuestReleaseEntityDict;
            if ( !Master_object )
              goto LABEL_55;
            MasterKind_k__BackingField = v31->fields._MasterKind_k__BackingField;
            if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
                    (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
                    MasterKind_k__BackingField,
                    &value,
                    (const MethodInfo_3F9DF8C *)Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___TryGetValue__) )
            {
              v39 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
              System_Collections_Generic_List_object____ctor(
                v39,
                (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
              Master_object = (QuestReleaseOverwriteMaster_o *)this->fields.cachedQuestReleaseEntityDict;
              value = (Il2CppObject *)v39;
              if ( !Master_object )
                goto LABEL_55;
              System_Collections_Generic_Dictionary_int__object___set_Item(
                (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
                MasterKind_k__BackingField,
                (Il2CppObject *)v39,
                (const MethodInfo_3F9C49C *)Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___set_Item__);
            }
            Master_object = (QuestReleaseOverwriteMaster_o *)value;
            if ( !value )
              goto LABEL_55;
            klass = value[1].klass;
            v41 = Method_System_Collections_Generic_List_QuestReleaseEntity__Add__;
            ++HIDWORD(value[1].monitor);
            if ( !klass )
              goto LABEL_55;
            MasterName_k__BackingField_low = SLODWORD(Master_object->fields._MasterName_k__BackingField);
            if ( (unsigned int)MasterName_k__BackingField_low >= LODWORD(klass->_1.namespaze) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)Master_object,
                (Il2CppObject *)v31,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
            }
            else
            {
              v43 = &klass->_1.image + MasterName_k__BackingField_low;
              LODWORD(Master_object->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
              v43[4] = v31;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v43 + 4), (int32_t)v31, v33, v34, v35, v36, v37, v38);
            }
          }
        }
        while ( v29 != ++v30 );
      }
      this->fields.isCached = 1;
    }
    v44 = *resultList;
    if ( *resultList )
    {
      size = v44->fields._size;
      v46 = v44->fields._version + 1;
      v44->fields._size = 0;
      v44->fields._version = v46;
      if ( size >= 1 )
        System_Array__Clear((System_Array_o *)v44->fields._items, 0, size, 0);
      Master_object = (QuestReleaseOverwriteMaster_o *)this->fields.cachedQuestReleaseEntityDict;
      if ( Master_object )
      {
        Master_object = (QuestReleaseOverwriteMaster_o *)System_Collections_Generic_Dictionary_int__object___TryGetValue(
                                                           (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
                                                           questId,
                                                           &v61,
                                                           (const MethodInfo_3F9DF8C *)Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___TryGetValue__);
        if ( ((unsigned __int8)Master_object & 1) == 0 )
          return;
        if ( v61 )
        {
          monitor = (int)v61[1].monitor;
          if ( monitor < 1 )
            return;
          v48 = 0;
          while ( 1 )
          {
            Master_object = (QuestReleaseOverwriteMaster_o *)v61;
            if ( !v61 )
              break;
            v49 = (System_Collections_Generic_List_object__o *)*resultList;
            Master_object = (QuestReleaseOverwriteMaster_o *)System_Collections_Generic_List_object___get_Item(
                                                               (System_Collections_Generic_List_object__o *)v61,
                                                               v48,
                                                               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__);
            if ( !v49 )
              break;
            items = v49->fields._items;
            v57 = Method_System_Collections_Generic_List_QuestReleaseEntity__Add__;
            ++v49->fields._version;
            if ( !items )
              break;
            v58 = v49->fields._size;
            v59 = Master_object;
            if ( (unsigned int)v58 >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v49,
                (Il2CppObject *)Master_object,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
            }
            else
            {
              v60 = &items->obj.klass + v58;
              v49->fields._size = v58 + 1;
              v60[4] = (Il2CppClass *)v59;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v60 + 4), (int32_t)v59, v50, v51, v52, v53, v54, v55);
            }
            if ( monitor == ++v48 )
              return;
          }
        }
      }
    }
LABEL_55:
    sub_2213CDC(Master_object, v10);
  }
  v12 = *resultList;
  if ( !*resultList )
    goto LABEL_55;
  v13 = v12->fields._size;
  v14 = v12->fields._version + 1;
  v12->fields._size = 0;
  v12->fields._version = v14;
  if ( v13 >= 1 )
    System_Array__Clear((System_Array_o *)v12->fields._items, 0, v13, 0);
  if ( !v7 )
    goto LABEL_55;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v63,
    v7,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v63,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__) )
  {
    if ( !v63.fields._current )
      sub_2213CDC(0, v15);
    v16 = (System_Collections_Generic_List_object__o *)*resultList;
    v17 = (Il2CppObject *)QuestReleaseOverwriteEntity__ConvertToQuestReleaseEntity(
                            (QuestReleaseOverwriteEntity_o *)v63.fields._current,
                            v15);
    v24 = v17;
    if ( !v16
      || (v25 = v16->fields._items,
          v26 = Method_System_Collections_Generic_List_QuestReleaseEntity__Add__,
          ++v16->fields._version,
          !v25) )
    {
      sub_2213CDC(v17, v17);
    }
    v27 = v16->fields._size;
    if ( (unsigned int)v27 >= LODWORD(v25->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v16,
        v17,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
    }
    else
    {
      v28 = &v25->obj.klass + v27;
      v16->fields._size = v27 + 1;
      v28[4] = (Il2CppClass *)v24;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v28 + 4), (int32_t)v24, v18, v19, v20, v21, v22, v23);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v63,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__Dispose__);
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
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0

  if ( (byte_5970FFC & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
    byte_5970FFC = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__);
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
                                                                 (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__);
      if ( list )
      {
        v8 = list;
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
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v7,
              (Il2CppObject *)list,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
          }
          else
          {
            v22 = &items->obj.klass + size;
            v7->fields._size = size + 1;
            v22[4] = (Il2CppClass *)v8;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v22 + 4), (int32_t)v8, v13, v14, v15, v16, v17, v18);
          }
        }
      }
      if ( v11 == ++v12 )
        return (System_Collections_Generic_List_QuestReleaseEntity__o *)v7;
    }
LABEL_17:
    sub_2213CDC(list, v8);
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
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  if ( (byte_5970FF9 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
    byte_5970FF9 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  v8 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__);
    if ( v8 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_15;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v8,
                                                               (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__);
    if ( list )
    {
      v6 = list;
      if ( HIDWORD(list->fields.items) == type )
      {
        if ( !v5 )
          goto LABEL_15;
        items = v5->fields._items;
        v16 = Method_System_Collections_Generic_List_QuestReleaseEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          goto LABEL_15;
        size = v5->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            (Il2CppObject *)list,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v18 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v18[4] = (Il2CppClass *)v6;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v18 + 4), (int32_t)v6, v9, v10, v11, v12, v13, v14);
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v8;
    if ( !list )
      goto LABEL_15;
  }
  if ( !v5 )
LABEL_15:
    sub_2213CDC(list, v6);
  return (QuestReleaseEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v5,
                                       (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__);
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

  if ( (byte_5970FFA & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    byte_5970FFA = 1;
  }
  v7 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  v10 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__);
    if ( v10 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_16;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v10,
                                                               (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Item__);
    if ( list && LODWORD(list[1].klass) == targetId && HIDWORD(list->fields.items) == openCondType )
    {
      if ( !v7 )
        goto LABEL_16;
      items = v7->fields._items;
      items_low = LODWORD(list->fields.items);
      v12 = Method_System_Collections_Generic_List_int__Add__;
      ++v7->fields._version;
      if ( !items )
        goto LABEL_16;
      size = v7->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v7,
          items_low,
          *(const MethodInfo_4467270 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
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
      goto LABEL_16;
  }
  if ( !v7 )
LABEL_16:
    sub_2213CDC(list, items_low);
  return System_Collections_Generic_List_int___ToArray(
           v7,
           (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
}


void QuestReleaseMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5971002 & 1) == 0 )
  {
    sub_2213A60(&QuestReleaseMaster___c_TypeInfo);
    byte_5971002 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(QuestReleaseMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  QuestReleaseMaster___c_TypeInfo->static_fields->__9 = (struct QuestReleaseMaster___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)QuestReleaseMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  if ( !b || (this = (QuestReleaseMaster___c_o *)QuestEntity__getPriority(b, 0), !a) )
    sub_2213CDC(this, a);
  return (_DWORD)this - QuestEntity__getPriority(a, 0);
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
    sub_2213CDC(this, 0);
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


// local variable allocation has failed, the output may be wrong!
bool QuestReleaseMaster___c__DisplayClass16_1___IsContainUnPlayableQuestByTargetId_b__0(
        QuestReleaseMaster___c__DisplayClass16_1_o *this,
        int32_t x,
        const MethodInfo *method)
{
  struct QuestReleaseEntity_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_2213CDC(this, *(_QWORD *)&x);
  return data->fields.questId == x;
}