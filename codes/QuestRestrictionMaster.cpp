void QuestRestrictionMaster___ctor(QuestRestrictionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5971027 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_QuestRestrictionMaster__QuestRestrictionEntity__string___ctor__);
    byte_5971027 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    182,
    (const MethodInfo_3F1339C *)Method_DataMasterBase_QuestRestrictionMaster__QuestRestrictionEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
QuestRestrictionEntity_o *QuestRestrictionMaster__GetEntity(
        QuestRestrictionMaster_o *this,
        int32_t questId,
        int32_t phase,
        int32_t restrictionId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_5971025 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_QuestRestrictionMaster__QuestRestrictionEntity__string__GetEntity__);
    byte_5971025 = 1;
  }
  PK = (Il2CppObject *)QuestRestrictionEntity__CreatePK(
                         questId,
                         phase,
                         restrictionId,
                         *(const MethodInfo **)&restrictionId);
  return (QuestRestrictionEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_3F157EC *)Method_DataMasterBase_QuestRestrictionMaster__QuestRestrictionEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *QuestRestrictionMaster__GetRestrictionName(
        QuestRestrictionMaster_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  int v7; // w8
  Il2CppObject *Master_object; // x22
  CommonReleaseMaster_o *list; // x0
  __int64 v10; // x1
  CommonReleaseMaster_o *v11; // x23
  int32_t Count; // w0
  int32_t v13; // w24
  Il2CppObject *Entity; // x25
  int32_t i; // w26
  const MethodInfo *v16; // x2
  CommonReleaseMaster_o *v17; // x27
  int v18; // w8
  System_String_o *result; // x0
  int32_t outCommonReleaseId; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_597102A & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_QuestRestrictionEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_QuestRestrictionEntity__get_Item__);
    sub_2213A60(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_RestrictionMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__);
    byte_597102A = 1;
  }
  v7 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  outCommonReleaseId = 0;
  if ( !v7 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&questId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_RestrictionMaster___);
  list = (CommonReleaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !this->fields.list )
    goto LABEL_27;
  v11 = list;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_QuestRestrictionEntity__get_Count__);
  if ( Count < 1 )
    return 0;
  v13 = Count;
  Entity = 0;
  for ( i = 0; i != v13; ++i )
  {
    list = (CommonReleaseMaster_o *)this->fields.list;
    if ( !list )
      goto LABEL_27;
    list = (CommonReleaseMaster_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                      (System_Collections_ObjectModel_Collection_T__o *)list,
                                      i,
                                      (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_QuestRestrictionEntity__get_Item__);
    if ( !list )
      goto LABEL_27;
    v17 = list;
    if ( list->fields._MasterKind_k__BackingField == questId )
    {
      list = (CommonReleaseMaster_o *)QuestRestrictionEntity__TryGetCommonReleaseId(
                                        (QuestRestrictionEntity_o *)list,
                                        &outCommonReleaseId,
                                        v16);
      if ( ((unsigned __int8)list & 1) == 0 )
        goto LABEL_14;
      if ( !v11 )
        goto LABEL_27;
      list = (CommonReleaseMaster_o *)CommonReleaseMaster__IsOpen(v11, outCommonReleaseId, 0, 0, 0);
      if ( ((unsigned __int8)list & 1) != 0 )
      {
LABEL_14:
        v18 = *(&v17->fields._MasterKind_k__BackingField + 1);
        if ( v18 != phase )
        {
          if ( !Entity )
          {
            if ( v18 )
            {
              Entity = 0;
            }
            else
            {
              if ( !Master_object )
                goto LABEL_27;
              Entity = DataMasterBase_object__object__int___GetEntity(
                         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                         (int32_t)v17->fields._MasterName_k__BackingField,
                         (const MethodInfo_3F10B30 *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__);
            }
          }
          continue;
        }
        if ( Master_object )
        {
          result = (System_String_o *)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                        (int32_t)v17->fields._MasterName_k__BackingField,
                                        (const MethodInfo_3F10B30 *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__);
          Entity = (Il2CppObject *)result;
          if ( result )
            return (System_String_o *)Entity[1].monitor;
          return result;
        }
LABEL_27:
        sub_2213CDC(list, v10);
      }
    }
  }
  if ( !Entity )
    return 0;
  return (System_String_o *)Entity[1].monitor;
}


// local variable allocation has failed, the output may be wrong!
bool QuestRestrictionMaster__TryGetEntity(
        QuestRestrictionMaster_o *this,
        QuestRestrictionEntity_o **entity,
        int32_t questId,
        int32_t phase,
        int32_t restrictionId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_5971026 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_QuestRestrictionMaster__QuestRestrictionEntity__string__TryGetEntity__);
    byte_5971026 = 1;
  }
  PK = (Il2CppObject *)QuestRestrictionEntity__CreatePK(questId, phase, restrictionId, *(const MethodInfo **)&phase);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3F15838 *)Method_DataMasterBase_QuestRestrictionMaster__QuestRestrictionEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
RestrictionEntity_array *QuestRestrictionMaster__getRestrictionList(
        QuestRestrictionMaster_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  int v7; // w8
  Il2CppObject *Master_object; // x23
  CommonReleaseMaster_o *list; // x0
  CommonReleaseMaster_o *v10; // x1
  CommonReleaseMaster_o *v11; // x24
  int32_t Count; // w25
  System_Collections_Generic_List_object__o *v13; // x22
  int32_t v14; // w26
  const MethodInfo *v15; // x2
  CommonReleaseMaster_o *v16; // x27
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  int v23; // w8
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0
  QuestRestrictionMaster___c_c *v28; // x0
  struct QuestRestrictionMaster___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__3_0; // x19
  Il2CppObject *v31; // x20
  struct QuestRestrictionMaster___c_StaticFields *v32; // x0
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  System_Linq_IOrderedEnumerable_TSource__o *v39; // x0
  __int64 v40; // x1
  QuestRestrictionMaster___c_c *v41; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v42; // x19
  struct QuestRestrictionMaster___c_StaticFields *v43; // x9
  System_Func_object__int__o *_9__3_1; // x20
  Il2CppObject *v45; // x21
  struct QuestRestrictionMaster___c_StaticFields *v46; // x0
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v53; // x0
  int32_t outCommonReleaseId; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_5971028 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_QuestRestrictionEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_QuestRestrictionEntity__get_Item__);
    sub_2213A60(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_RestrictionMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__);
    sub_2213A60(&Method_System_Linq_Enumerable_OrderByDescending_RestrictionEntity__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ThenBy_RestrictionEntity__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_RestrictionEntity___);
    sub_2213A60(&System_Func_RestrictionEntity__int__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_RestrictionEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_RestrictionEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_RestrictionEntity__TypeInfo);
    sub_2213A60(&Method_QuestRestrictionMaster___c__getRestrictionList_b__3_0__);
    sub_2213A60(&Method_QuestRestrictionMaster___c__getRestrictionList_b__3_1__);
    sub_2213A60(&QuestRestrictionMaster___c_TypeInfo);
    byte_5971028 = 1;
  }
  v7 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  outCommonReleaseId = 0;
  if ( !v7 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&questId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_RestrictionMaster___);
  list = (CommonReleaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !this->fields.list )
    goto LABEL_37;
  v11 = list;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_QuestRestrictionEntity__get_Count__);
  v13 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_RestrictionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_RestrictionEntity___ctor__);
  if ( Count >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      list = (CommonReleaseMaster_o *)this->fields.list;
      if ( !list )
        break;
      list = (CommonReleaseMaster_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                        (System_Collections_ObjectModel_Collection_T__o *)list,
                                        v14,
                                        (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_QuestRestrictionEntity__get_Item__);
      if ( !list )
        break;
      v16 = list;
      if ( list->fields._MasterKind_k__BackingField == questId )
      {
        list = (CommonReleaseMaster_o *)QuestRestrictionEntity__TryGetCommonReleaseId(
                                          (QuestRestrictionEntity_o *)list,
                                          &outCommonReleaseId,
                                          v15);
        if ( ((unsigned __int8)list & 1) == 0 )
          goto LABEL_14;
        if ( !v11 )
          break;
        list = (CommonReleaseMaster_o *)CommonReleaseMaster__IsOpen(v11, outCommonReleaseId, 0, 0, 0);
        if ( ((unsigned __int8)list & 1) != 0 )
        {
LABEL_14:
          if ( !Master_object )
            break;
          list = (CommonReleaseMaster_o *)DataMasterBase_object__object__int___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                            (int32_t)v16->fields._MasterName_k__BackingField,
                                            (const MethodInfo_3F10B30 *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__);
          if ( list )
          {
            v23 = *(&v16->fields._MasterKind_k__BackingField + 1);
            v10 = list;
            if ( !v23 || v23 == phase )
            {
              if ( !v13 )
                break;
              items = v13->fields._items;
              v25 = Method_System_Collections_Generic_List_RestrictionEntity__Add__;
              ++v13->fields._version;
              if ( !items )
                break;
              size = v13->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v13,
                  (Il2CppObject *)list,
                  *(const MethodInfo_4483C64 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
              }
              else
              {
                v27 = &items->obj.klass + size;
                v13->fields._size = size + 1;
                v27[4] = (Il2CppClass *)v10;
                sub_2213A04((MissionNaviTransitionBoardItem_o *)(v27 + 4), (int32_t)v10, v17, v18, v19, v20, v21, v22);
              }
            }
          }
        }
      }
      if ( Count == ++v14 )
        goto LABEL_24;
    }
LABEL_37:
    sub_2213CDC(list, v10);
  }
LABEL_24:
  v28 = QuestRestrictionMaster___c_TypeInfo;
  if ( !*(&QuestRestrictionMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(QuestRestrictionMaster___c_TypeInfo, v10);
    v28 = QuestRestrictionMaster___c_TypeInfo;
  }
  static_fields = v28->static_fields;
  _9__3_0 = (System_Func_object__int__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !*(&v28->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v28, v10);
      static_fields = QuestRestrictionMaster___c_TypeInfo->static_fields;
    }
    v31 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Func_object__int__o *)sub_2213CCC(System_Func_RestrictionEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__3_0, v31, Method_QuestRestrictionMaster___c__getRestrictionList_b__3_0__, 0);
    v32 = QuestRestrictionMaster___c_TypeInfo->static_fields;
    v32->__9__3_0 = (struct System_Func_RestrictionEntity__int__o *)_9__3_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v32->__9__3_0, (int32_t)_9__3_0, v33, v34, v35, v36, v37, v38);
  }
  v39 = System_Linq_Enumerable__OrderByDescending_object__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v13,
          (System_Func_TSource__TKey__o *)_9__3_0,
          (const MethodInfo_38891C4 *)Method_System_Linq_Enumerable_OrderByDescending_RestrictionEntity__int___);
  v41 = QuestRestrictionMaster___c_TypeInfo;
  v42 = v39;
  if ( !*(&QuestRestrictionMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(QuestRestrictionMaster___c_TypeInfo, v40);
    v41 = QuestRestrictionMaster___c_TypeInfo;
  }
  v43 = v41->static_fields;
  _9__3_1 = (System_Func_object__int__o *)v43->__9__3_1;
  if ( !_9__3_1 )
  {
    if ( !*(&v41->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v41, v40);
      v43 = QuestRestrictionMaster___c_TypeInfo->static_fields;
    }
    v45 = (Il2CppObject *)v43->__9;
    _9__3_1 = (System_Func_object__int__o *)sub_2213CCC(System_Func_RestrictionEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__3_1, v45, Method_QuestRestrictionMaster___c__getRestrictionList_b__3_1__, 0);
    v46 = QuestRestrictionMaster___c_TypeInfo->static_fields;
    v46->__9__3_1 = (struct System_Func_RestrictionEntity__int__o *)_9__3_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v46->__9__3_1, (int32_t)_9__3_1, v47, v48, v49, v50, v51, v52);
  }
  v53 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                               v42,
                                                               (System_Func_TSource__TKey__o *)_9__3_1,
                                                               (const MethodInfo_389AAF8 *)Method_System_Linq_Enumerable_ThenBy_RestrictionEntity__int___);
  return (RestrictionEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                      v53,
                                      (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_RestrictionEntity___);
}


RestrictionEntity_array *QuestRestrictionMaster__getRestrictionList_49574032(
        QuestRestrictionMaster_o *this,
        QuestRestrictionEntity_array **questRestrictionEntityList,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  int v7; // w8
  Il2CppObject *Master_object; // x25
  CommonReleaseMaster_o *list; // x0
  CommonReleaseMaster_o *v10; // x1
  CommonReleaseMaster_o *v11; // x26
  int32_t Count; // w27
  System_Collections_Generic_List_object__o *v13; // x20
  System_Collections_Generic_List_object__o *v14; // x24
  int32_t v15; // w28
  const MethodInfo *v16; // x2
  Il2CppObject *v17; // x29
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  int klass_high; // w8
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  struct System_Object_array *v35; // x8
  _QWORD *v36; // x9
  __int64 v37; // x10
  Il2CppClass **v38; // x0
  QuestRestrictionMaster___c_c *v39; // x0
  struct QuestRestrictionMaster___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__4_0; // x21
  Il2CppObject *v42; // x22
  struct QuestRestrictionMaster___c_StaticFields *v43; // x0
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  System_Linq_IOrderedEnumerable_TSource__o *v50; // x0
  __int64 v51; // x1
  QuestRestrictionMaster___c_c *v52; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v53; // x21
  struct QuestRestrictionMaster___c_StaticFields *v54; // x9
  System_Func_object__int__o *_9__4_1; // x22
  Il2CppObject *v56; // x23
  struct QuestRestrictionMaster___c_StaticFields *v57; // x0
  System_String_o *v58; // x2
  System_String_o *v59; // x3
  int32_t v60; // w4
  int32_t v61; // w5
  bool v62; // w6
  bool v63; // w7
  System_Linq_IOrderedEnumerable_TSource__o *v64; // x0
  __int64 v65; // x1
  QuestRestrictionMaster___c_c *v66; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v67; // x21
  struct QuestRestrictionMaster___c_StaticFields *v68; // x9
  System_Func_object__int__o *_9__4_2; // x22
  Il2CppObject *v70; // x23
  struct QuestRestrictionMaster___c_StaticFields *v71; // x0
  System_String_o *v72; // x2
  System_String_o *v73; // x3
  int32_t v74; // w4
  int32_t v75; // w5
  bool v76; // w6
  bool v77; // w7
  System_Linq_IOrderedEnumerable_TSource__o *v78; // x0
  __int64 v79; // x1
  QuestRestrictionMaster___c_c *v80; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v81; // x20
  struct QuestRestrictionMaster___c_StaticFields *v82; // x9
  System_Func_object__int__o *_9__4_3; // x22
  Il2CppObject *v84; // x23
  struct QuestRestrictionMaster___c_StaticFields *v85; // x0
  System_String_o *v86; // x2
  System_String_o *v87; // x3
  int32_t v88; // w4
  int32_t v89; // w5
  bool v90; // w6
  bool v91; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v92; // x20
  System_Object_array *v93; // x0
  System_String_o *v94; // x2
  System_String_o *v95; // x3
  int32_t v96; // w4
  int32_t v97; // w5
  bool v98; // w6
  bool v99; // w7
  int32_t outCommonReleaseId; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_5971029 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_QuestRestrictionEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_QuestRestrictionEntity__get_Item__);
    sub_2213A60(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_RestrictionMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__);
    sub_2213A60(&Method_System_Linq_Enumerable_OrderByDescending_QuestRestrictionEntity__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_OrderByDescending_RestrictionEntity__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ThenBy_QuestRestrictionEntity__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ThenBy_RestrictionEntity__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_QuestRestrictionEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_RestrictionEntity___);
    sub_2213A60(&System_Func_QuestRestrictionEntity__int__TypeInfo);
    sub_2213A60(&System_Func_RestrictionEntity__int__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestRestrictionEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_RestrictionEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_RestrictionEntity___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestRestrictionEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_QuestRestrictionEntity__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_RestrictionEntity__TypeInfo);
    sub_2213A60(&Method_QuestRestrictionMaster___c__getRestrictionList_b__4_0__);
    sub_2213A60(&Method_QuestRestrictionMaster___c__getRestrictionList_b__4_1__);
    sub_2213A60(&Method_QuestRestrictionMaster___c__getRestrictionList_b__4_2__);
    sub_2213A60(&Method_QuestRestrictionMaster___c__getRestrictionList_b__4_3__);
    sub_2213A60(&QuestRestrictionMaster___c_TypeInfo);
    byte_5971029 = 1;
  }
  v7 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  outCommonReleaseId = 0;
  if ( !v7 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, questRestrictionEntityList);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_RestrictionMaster___);
  list = (CommonReleaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !this->fields.list )
    goto LABEL_54;
  v11 = list;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_QuestRestrictionEntity__get_Count__);
  v13 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_RestrictionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_RestrictionEntity___ctor__);
  v14 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_QuestRestrictionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_QuestRestrictionEntity___ctor__);
  if ( Count >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      list = (CommonReleaseMaster_o *)this->fields.list;
      if ( !list )
        break;
      list = (CommonReleaseMaster_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                        (System_Collections_ObjectModel_Collection_T__o *)list,
                                        v15,
                                        (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_QuestRestrictionEntity__get_Item__);
      if ( !list )
        break;
      v17 = (Il2CppObject *)list;
      if ( list->fields._MasterKind_k__BackingField == questId )
      {
        list = (CommonReleaseMaster_o *)QuestRestrictionEntity__TryGetCommonReleaseId(
                                          (QuestRestrictionEntity_o *)list,
                                          &outCommonReleaseId,
                                          v16);
        if ( ((unsigned __int8)list & 1) == 0 )
          goto LABEL_14;
        if ( !v11 )
          break;
        list = (CommonReleaseMaster_o *)CommonReleaseMaster__IsOpen(v11, outCommonReleaseId, 0, 0, 0);
        if ( ((unsigned __int8)list & 1) != 0 )
        {
LABEL_14:
          if ( !Master_object )
            break;
          list = (CommonReleaseMaster_o *)DataMasterBase_object__object__int___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                            (int32_t)v17[1].monitor,
                                            (const MethodInfo_3F10B30 *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__);
          if ( list )
          {
            klass_high = HIDWORD(v17[1].klass);
            v10 = list;
            if ( !klass_high || klass_high == phase )
            {
              if ( !v13 )
                break;
              items = v13->fields._items;
              v26 = Method_System_Collections_Generic_List_RestrictionEntity__Add__;
              ++v13->fields._version;
              if ( !items )
                break;
              size = v13->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v13,
                  (Il2CppObject *)list,
                  *(const MethodInfo_4483C64 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
              }
              else
              {
                v28 = &items->obj.klass + size;
                v13->fields._size = size + 1;
                v28[4] = (Il2CppClass *)v10;
                sub_2213A04((MissionNaviTransitionBoardItem_o *)(v28 + 4), (int32_t)v10, v18, v19, v20, v21, v22, v23);
              }
              if ( !v14 )
                break;
              v35 = v14->fields._items;
              v36 = Method_System_Collections_Generic_List_QuestRestrictionEntity__Add__;
              ++v14->fields._version;
              if ( !v35 )
                break;
              v37 = v14->fields._size;
              if ( (unsigned int)v37 >= LODWORD(v35->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v14,
                  v17,
                  *(const MethodInfo_4483C64 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
              }
              else
              {
                v38 = &v35->obj.klass + v37;
                v14->fields._size = v37 + 1;
                v38[4] = (Il2CppClass *)v17;
                sub_2213A04((MissionNaviTransitionBoardItem_o *)(v38 + 4), (int32_t)v17, v29, v30, v31, v32, v33, v34);
              }
            }
          }
        }
      }
      if ( Count == ++v15 )
        goto LABEL_29;
    }
LABEL_54:
    sub_2213CDC(list, v10);
  }
LABEL_29:
  v39 = QuestRestrictionMaster___c_TypeInfo;
  if ( !*(&QuestRestrictionMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(QuestRestrictionMaster___c_TypeInfo, v10);
    v39 = QuestRestrictionMaster___c_TypeInfo;
  }
  static_fields = v39->static_fields;
  _9__4_0 = (System_Func_object__int__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !*(&v39->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v39, v10);
      static_fields = QuestRestrictionMaster___c_TypeInfo->static_fields;
    }
    v42 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Func_object__int__o *)sub_2213CCC(System_Func_QuestRestrictionEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__4_0, v42, Method_QuestRestrictionMaster___c__getRestrictionList_b__4_0__, 0);
    v43 = QuestRestrictionMaster___c_TypeInfo->static_fields;
    v43->__9__4_0 = (struct System_Func_QuestRestrictionEntity__int__o *)_9__4_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v43->__9__4_0, (int32_t)_9__4_0, v44, v45, v46, v47, v48, v49);
  }
  v50 = System_Linq_Enumerable__OrderByDescending_object__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v14,
          (System_Func_TSource__TKey__o *)_9__4_0,
          (const MethodInfo_38891C4 *)Method_System_Linq_Enumerable_OrderByDescending_QuestRestrictionEntity__int___);
  v52 = QuestRestrictionMaster___c_TypeInfo;
  v53 = v50;
  if ( !*(&QuestRestrictionMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(QuestRestrictionMaster___c_TypeInfo, v51);
    v52 = QuestRestrictionMaster___c_TypeInfo;
  }
  v54 = v52->static_fields;
  _9__4_1 = (System_Func_object__int__o *)v54->__9__4_1;
  if ( !_9__4_1 )
  {
    if ( !*(&v52->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v52, v51);
      v54 = QuestRestrictionMaster___c_TypeInfo->static_fields;
    }
    v56 = (Il2CppObject *)v54->__9;
    _9__4_1 = (System_Func_object__int__o *)sub_2213CCC(System_Func_QuestRestrictionEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__4_1, v56, Method_QuestRestrictionMaster___c__getRestrictionList_b__4_1__, 0);
    v57 = QuestRestrictionMaster___c_TypeInfo->static_fields;
    v57->__9__4_1 = (struct System_Func_QuestRestrictionEntity__int__o *)_9__4_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v57->__9__4_1, (int32_t)_9__4_1, v58, v59, v60, v61, v62, v63);
  }
  v64 = System_Linq_Enumerable__ThenBy_object__int_(
          v53,
          (System_Func_TSource__TKey__o *)_9__4_1,
          (const MethodInfo_389AAF8 *)Method_System_Linq_Enumerable_ThenBy_QuestRestrictionEntity__int___);
  v66 = QuestRestrictionMaster___c_TypeInfo;
  v67 = (System_Collections_Generic_IEnumerable_TSource__o *)v64;
  if ( !*(&QuestRestrictionMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(QuestRestrictionMaster___c_TypeInfo, v65);
    v66 = QuestRestrictionMaster___c_TypeInfo;
  }
  v68 = v66->static_fields;
  _9__4_2 = (System_Func_object__int__o *)v68->__9__4_2;
  if ( !_9__4_2 )
  {
    if ( !*(&v66->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v66, v65);
      v68 = QuestRestrictionMaster___c_TypeInfo->static_fields;
    }
    v70 = (Il2CppObject *)v68->__9;
    _9__4_2 = (System_Func_object__int__o *)sub_2213CCC(System_Func_RestrictionEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__4_2, v70, Method_QuestRestrictionMaster___c__getRestrictionList_b__4_2__, 0);
    v71 = QuestRestrictionMaster___c_TypeInfo->static_fields;
    v71->__9__4_2 = (struct System_Func_RestrictionEntity__int__o *)_9__4_2;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v71->__9__4_2, (int32_t)_9__4_2, v72, v73, v74, v75, v76, v77);
  }
  v78 = System_Linq_Enumerable__OrderByDescending_object__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v13,
          (System_Func_TSource__TKey__o *)_9__4_2,
          (const MethodInfo_38891C4 *)Method_System_Linq_Enumerable_OrderByDescending_RestrictionEntity__int___);
  v80 = QuestRestrictionMaster___c_TypeInfo;
  v81 = v78;
  if ( !*(&QuestRestrictionMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(QuestRestrictionMaster___c_TypeInfo, v79);
    v80 = QuestRestrictionMaster___c_TypeInfo;
  }
  v82 = v80->static_fields;
  _9__4_3 = (System_Func_object__int__o *)v82->__9__4_3;
  if ( !_9__4_3 )
  {
    if ( !*(&v80->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v80, v79);
      v82 = QuestRestrictionMaster___c_TypeInfo->static_fields;
    }
    v84 = (Il2CppObject *)v82->__9;
    _9__4_3 = (System_Func_object__int__o *)sub_2213CCC(System_Func_RestrictionEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__4_3, v84, Method_QuestRestrictionMaster___c__getRestrictionList_b__4_3__, 0);
    v85 = QuestRestrictionMaster___c_TypeInfo->static_fields;
    v85->__9__4_3 = (struct System_Func_RestrictionEntity__int__o *)_9__4_3;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v85->__9__4_3, (int32_t)_9__4_3, v86, v87, v88, v89, v90, v91);
  }
  v92 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                               v81,
                                                               (System_Func_TSource__TKey__o *)_9__4_3,
                                                               (const MethodInfo_389AAF8 *)Method_System_Linq_Enumerable_ThenBy_RestrictionEntity__int___);
  v93 = System_Linq_Enumerable__ToArray_object_(
          v67,
          (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_QuestRestrictionEntity___);
  *questRestrictionEntityList = (QuestRestrictionEntity_array *)v93;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)questRestrictionEntityList,
    (int32_t)v93,
    v94,
    v95,
    v96,
    v97,
    v98,
    v99);
  return (RestrictionEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                      v92,
                                      (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_RestrictionEntity___);
}


void QuestRestrictionMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_597102B & 1) == 0 )
  {
    sub_2213A60(&QuestRestrictionMaster___c_TypeInfo);
    byte_597102B = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(QuestRestrictionMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  QuestRestrictionMaster___c_TypeInfo->static_fields->__9 = (struct QuestRestrictionMaster___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)QuestRestrictionMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void QuestRestrictionMaster___c___ctor(QuestRestrictionMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t QuestRestrictionMaster___c___getRestrictionList_b__3_0(
        QuestRestrictionMaster___c_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.priority;
}


int32_t QuestRestrictionMaster___c___getRestrictionList_b__3_1(
        QuestRestrictionMaster___c_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.id;
}


int32_t QuestRestrictionMaster___c___getRestrictionList_b__4_0(
        QuestRestrictionMaster___c_o *this,
        QuestRestrictionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.priority;
}


int32_t QuestRestrictionMaster___c___getRestrictionList_b__4_1(
        QuestRestrictionMaster___c_o *this,
        QuestRestrictionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.restrictionId;
}


int32_t QuestRestrictionMaster___c___getRestrictionList_b__4_2(
        QuestRestrictionMaster___c_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.priority;
}


int32_t QuestRestrictionMaster___c___getRestrictionList_b__4_3(
        QuestRestrictionMaster___c_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.id;
}