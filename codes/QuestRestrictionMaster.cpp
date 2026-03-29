void QuestRestrictionMaster___ctor(QuestRestrictionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D3116F & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_QuestRestrictionMaster__QuestRestrictionEntity__string___ctor__);
    byte_4D3116F = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    180,
    (const MethodInfo_3465C5C *)Method_DataMasterBase_QuestRestrictionMaster__QuestRestrictionEntity__string___ctor__);
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

  if ( (byte_4D3116D & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_QuestRestrictionMaster__QuestRestrictionEntity__string__GetEntity__);
    byte_4D3116D = 1;
  }
  PK = (Il2CppObject *)QuestRestrictionEntity__CreatePK(
                         questId,
                         phase,
                         restrictionId,
                         *(const MethodInfo **)&restrictionId);
  return (QuestRestrictionEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_34681D4 *)Method_DataMasterBase_QuestRestrictionMaster__QuestRestrictionEntity__string__GetEntity__);
}


System_String_o *QuestRestrictionMaster__GetRestrictionName(
        QuestRestrictionMaster_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v8; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x22
  int32_t Count; // w0
  int32_t v11; // w23
  Il2CppObject *Entity; // x25
  int32_t i; // w24
  int v14; // w8
  System_String_o *result; // x0

  if ( (byte_4D31172 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_QuestRestrictionEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_QuestRestrictionEntity__get_Item__);
    sub_1C93AD4(&Method_DataManager_GetMasterData_RestrictionMaster___);
    sub_1C93AD4(&Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D31172 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_RestrictionMaster___);
  if ( !this->fields.list )
    goto LABEL_24;
  v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_33FBDAC *)Method_System_Collections_ObjectModel_Collection_QuestRestrictionEntity__get_Count__);
  if ( Count < 1 )
    return 0;
  v11 = Count;
  Entity = 0;
  for ( i = 0; i != v11; ++i )
  {
    Instance = this->fields.list;
    if ( !Instance )
      goto LABEL_24;
    Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 i,
                 (const MethodInfo_33FBE3C *)Method_System_Collections_ObjectModel_Collection_QuestRestrictionEntity__get_Item__);
    if ( !Instance )
      goto LABEL_24;
    if ( *((_DWORD *)Instance + 4) == questId )
    {
      v14 = *((_DWORD *)Instance + 5);
      if ( v14 != phase )
      {
        if ( !Entity )
        {
          if ( v14 )
          {
            Entity = 0;
          }
          else
          {
            if ( !v9 )
              goto LABEL_24;
            Entity = DataMasterBase_object__object__int___GetEntity(
                       v9,
                       *((_DWORD *)Instance + 6),
                       (const MethodInfo_3463274 *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__);
          }
        }
        continue;
      }
      if ( v9 )
      {
        result = (System_String_o *)DataMasterBase_object__object__int___GetEntity(
                                      v9,
                                      *((_DWORD *)Instance + 6),
                                      (const MethodInfo_3463274 *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__);
        if ( result )
          return (System_String_o *)result[1].klass;
        return result;
      }
LABEL_24:
      sub_1C93D2C(Instance, v8);
    }
  }
  if ( Entity )
    return (System_String_o *)Entity[1].monitor;
  return 0;
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

  if ( (byte_4D3116E & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_QuestRestrictionMaster__QuestRestrictionEntity__string__TryGetEntity__);
    byte_4D3116E = 1;
  }
  PK = (Il2CppObject *)QuestRestrictionEntity__CreatePK(questId, phase, restrictionId, *(const MethodInfo **)&phase);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3468220 *)Method_DataMasterBase_QuestRestrictionMaster__QuestRestrictionEntity__string__TryGetEntity__);
}


RestrictionEntity_array *QuestRestrictionMaster__getRestrictionList(
        QuestRestrictionMaster_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  void *Instance; // x0
  Il2CppClass *v8; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x23
  int32_t Count; // w24
  System_Collections_Generic_List_object__o *v11; // x22
  int32_t v12; // w25
  _DWORD *v13; // x26
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  int v20; // w8
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  QuestRestrictionMaster___c_c *v25; // x0
  System_Func_object__int__o *_9__3_0; // x19
  Il2CppObject *v27; // x20
  struct QuestRestrictionMaster___c_StaticFields *static_fields; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v35; // x0
  QuestRestrictionMaster___c_c *v36; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v37; // x19
  System_Func_object__int__o *_9__3_1; // x20
  Il2CppObject *v39; // x21
  struct QuestRestrictionMaster___c_StaticFields *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v47; // x0

  if ( (byte_4D31170 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_QuestRestrictionEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_QuestRestrictionEntity__get_Item__);
    sub_1C93AD4(&Method_DataManager_GetMasterData_RestrictionMaster___);
    sub_1C93AD4(&Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__);
    sub_1C93AD4(&Method_System_Linq_Enumerable_OrderByDescending_RestrictionEntity__int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ThenBy_RestrictionEntity__int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_RestrictionEntity___);
    sub_1C93AD4(&System_Func_RestrictionEntity__int__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_RestrictionEntity__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_RestrictionEntity___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_RestrictionEntity__TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&Method_QuestRestrictionMaster___c__getRestrictionList_b__3_0__);
    sub_1C93AD4(&Method_QuestRestrictionMaster___c__getRestrictionList_b__3_1__);
    sub_1C93AD4(&QuestRestrictionMaster___c_TypeInfo);
    byte_4D31170 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_RestrictionMaster___);
  if ( !this->fields.list )
    goto LABEL_33;
  v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_33FBDAC *)Method_System_Collections_ObjectModel_Collection_QuestRestrictionEntity__get_Count__);
  v11 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_RestrictionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_RestrictionEntity___ctor__);
  if ( Count >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      Instance = this->fields.list;
      if ( !Instance )
        break;
      Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                   (System_Collections_ObjectModel_Collection_T__o *)Instance,
                   v12,
                   (const MethodInfo_33FBE3C *)Method_System_Collections_ObjectModel_Collection_QuestRestrictionEntity__get_Item__);
      if ( !Instance )
        break;
      v13 = Instance;
      if ( *((_DWORD *)Instance + 4) == questId )
      {
        if ( !v9 )
          break;
        Instance = DataMasterBase_object__object__int___GetEntity(
                     v9,
                     *((_DWORD *)Instance + 6),
                     (const MethodInfo_3463274 *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__);
        if ( Instance )
        {
          v20 = v13[5];
          v8 = (Il2CppClass *)Instance;
          if ( !v20 || v20 == phase )
          {
            if ( !v11 )
              break;
            items = v11->fields._items;
            v22 = Method_System_Collections_Generic_List_RestrictionEntity__Add__;
            ++v11->fields._version;
            if ( !items )
              break;
            size = v11->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v11,
                (Il2CppObject *)Instance,
                *(const MethodInfo_387999C **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
            }
            else
            {
              v24 = &items->obj.klass + size;
              v11->fields._size = size + 1;
              v24[4] = v8;
              sub_1C93A78((GrandQuestFolderBoardItem_o *)(v24 + 4), (int32_t)v8, v14, v15, v16, v17, v18, v19);
            }
          }
        }
      }
      if ( Count == ++v12 )
        goto LABEL_20;
    }
LABEL_33:
    sub_1C93D2C(Instance, v8);
  }
LABEL_20:
  v25 = QuestRestrictionMaster___c_TypeInfo;
  if ( !QuestRestrictionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRestrictionMaster___c_TypeInfo);
    v25 = QuestRestrictionMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Func_object__int__o *)v25->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v25->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v25);
      v25 = QuestRestrictionMaster___c_TypeInfo;
    }
    v27 = (Il2CppObject *)v25->static_fields->__9;
    _9__3_0 = (System_Func_object__int__o *)sub_1C93D20(System_Func_RestrictionEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__3_0, v27, Method_QuestRestrictionMaster___c__getRestrictionList_b__3_0__, 0);
    static_fields = QuestRestrictionMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Func_RestrictionEntity__int__o *)_9__3_0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v29, v30, v31, v32, v33, v34);
  }
  v35 = System_Linq_Enumerable__OrderByDescending_object__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v11,
          (System_Func_TSource__TKey__o *)_9__3_0,
          (const MethodInfo_31D3DE4 *)Method_System_Linq_Enumerable_OrderByDescending_RestrictionEntity__int___);
  v36 = QuestRestrictionMaster___c_TypeInfo;
  v37 = v35;
  if ( !QuestRestrictionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRestrictionMaster___c_TypeInfo);
    v36 = QuestRestrictionMaster___c_TypeInfo;
  }
  _9__3_1 = (System_Func_object__int__o *)v36->static_fields->__9__3_1;
  if ( !_9__3_1 )
  {
    if ( !v36->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v36);
      v36 = QuestRestrictionMaster___c_TypeInfo;
    }
    v39 = (Il2CppObject *)v36->static_fields->__9;
    _9__3_1 = (System_Func_object__int__o *)sub_1C93D20(System_Func_RestrictionEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__3_1, v39, Method_QuestRestrictionMaster___c__getRestrictionList_b__3_1__, 0);
    v40 = QuestRestrictionMaster___c_TypeInfo->static_fields;
    v40->__9__3_1 = (struct System_Func_RestrictionEntity__int__o *)_9__3_1;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v40->__9__3_1, (int32_t)_9__3_1, v41, v42, v43, v44, v45, v46);
  }
  v47 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                               v37,
                                                               (System_Func_TSource__TKey__o *)_9__3_1,
                                                               (const MethodInfo_31E2E7C *)Method_System_Linq_Enumerable_ThenBy_RestrictionEntity__int___);
  return (RestrictionEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                      v47,
                                      (const MethodInfo_31E3D18 *)Method_System_Linq_Enumerable_ToArray_RestrictionEntity___);
}


RestrictionEntity_array *QuestRestrictionMaster__getRestrictionList_43263616(
        QuestRestrictionMaster_o *this,
        QuestRestrictionEntity_array **questRestrictionEntityList,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  void *Instance; // x0
  Il2CppClass *v10; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v11; // x25
  int32_t Count; // w26
  System_Collections_Generic_List_object__o *v13; // x20
  System_Collections_Generic_List_object__o *v14; // x24
  int32_t v15; // w27
  Il2CppObject *v16; // x28
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  int klass_high; // w8
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  struct System_Object_array *v34; // x8
  _QWORD *v35; // x9
  __int64 v36; // x10
  Il2CppClass **v37; // x0
  QuestRestrictionMaster___c_c *v38; // x0
  System_Func_object__int__o *_9__4_0; // x21
  Il2CppObject *v40; // x22
  struct QuestRestrictionMaster___c_StaticFields *static_fields; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v48; // x0
  QuestRestrictionMaster___c_c *v49; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v50; // x21
  System_Func_object__int__o *_9__4_1; // x22
  Il2CppObject *v52; // x23
  struct QuestRestrictionMaster___c_StaticFields *v53; // x0
  int32_t v54; // w2
  int32_t v55; // w3
  System_String_o *v56; // x4
  int32_t v57; // w5
  int64_t v58; // x6
  System_String_o *v59; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v60; // x0
  QuestRestrictionMaster___c_c *v61; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v62; // x21
  System_Func_object__int__o *_9__4_2; // x22
  Il2CppObject *v64; // x23
  struct QuestRestrictionMaster___c_StaticFields *v65; // x0
  int32_t v66; // w2
  int32_t v67; // w3
  System_String_o *v68; // x4
  int32_t v69; // w5
  int64_t v70; // x6
  System_String_o *v71; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v72; // x0
  QuestRestrictionMaster___c_c *v73; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v74; // x20
  System_Func_object__int__o *_9__4_3; // x22
  Il2CppObject *v76; // x23
  struct QuestRestrictionMaster___c_StaticFields *v77; // x0
  int32_t v78; // w2
  int32_t v79; // w3
  System_String_o *v80; // x4
  int32_t v81; // w5
  int64_t v82; // x6
  System_String_o *v83; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v84; // x20
  System_Object_array *v85; // x0
  int32_t v86; // w2
  int32_t v87; // w3
  System_String_o *v88; // x4
  int32_t v89; // w5
  int64_t v90; // x6
  System_String_o *v91; // x7
  GrandQuestFolderBoardItem_o *v93; // [xsp+8h] [xbp-68h]

  if ( (byte_4D31171 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_QuestRestrictionEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_QuestRestrictionEntity__get_Item__);
    sub_1C93AD4(&Method_DataManager_GetMasterData_RestrictionMaster___);
    sub_1C93AD4(&Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__);
    sub_1C93AD4(&Method_System_Linq_Enumerable_OrderByDescending_QuestRestrictionEntity__int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_OrderByDescending_RestrictionEntity__int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ThenBy_QuestRestrictionEntity__int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ThenBy_RestrictionEntity__int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_QuestRestrictionEntity___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_RestrictionEntity___);
    sub_1C93AD4(&System_Func_QuestRestrictionEntity__int__TypeInfo);
    sub_1C93AD4(&System_Func_RestrictionEntity__int__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_QuestRestrictionEntity__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_RestrictionEntity__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_RestrictionEntity___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_QuestRestrictionEntity___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_QuestRestrictionEntity__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_List_RestrictionEntity__TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&Method_QuestRestrictionMaster___c__getRestrictionList_b__4_0__);
    sub_1C93AD4(&Method_QuestRestrictionMaster___c__getRestrictionList_b__4_1__);
    sub_1C93AD4(&Method_QuestRestrictionMaster___c__getRestrictionList_b__4_2__);
    sub_1C93AD4(&Method_QuestRestrictionMaster___c__getRestrictionList_b__4_3__);
    sub_1C93AD4(&QuestRestrictionMaster___c_TypeInfo);
    byte_4D31171 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  v93 = (GrandQuestFolderBoardItem_o *)questRestrictionEntityList;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_RestrictionMaster___);
  if ( !this->fields.list )
    goto LABEL_50;
  v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_33FBDAC *)Method_System_Collections_ObjectModel_Collection_QuestRestrictionEntity__get_Count__);
  v13 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_RestrictionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_RestrictionEntity___ctor__);
  v14 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_QuestRestrictionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_QuestRestrictionEntity___ctor__);
  if ( Count >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      Instance = this->fields.list;
      if ( !Instance )
        break;
      Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                   (System_Collections_ObjectModel_Collection_T__o *)Instance,
                   v15,
                   (const MethodInfo_33FBE3C *)Method_System_Collections_ObjectModel_Collection_QuestRestrictionEntity__get_Item__);
      if ( !Instance )
        break;
      v16 = (Il2CppObject *)Instance;
      if ( *((_DWORD *)Instance + 4) == questId )
      {
        if ( !v11 )
          break;
        Instance = DataMasterBase_object__object__int___GetEntity(
                     v11,
                     *((_DWORD *)Instance + 6),
                     (const MethodInfo_3463274 *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__);
        if ( Instance )
        {
          klass_high = HIDWORD(v16[1].klass);
          v10 = (Il2CppClass *)Instance;
          if ( !klass_high || klass_high == phase )
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
                (Il2CppObject *)Instance,
                *(const MethodInfo_387999C **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
            }
            else
            {
              v27 = &items->obj.klass + size;
              v13->fields._size = size + 1;
              v27[4] = v10;
              sub_1C93A78((GrandQuestFolderBoardItem_o *)(v27 + 4), (int32_t)v10, v17, v18, v19, v20, v21, v22);
            }
            if ( !v14 )
              break;
            v34 = v14->fields._items;
            v35 = Method_System_Collections_Generic_List_QuestRestrictionEntity__Add__;
            ++v14->fields._version;
            if ( !v34 )
              break;
            v36 = v14->fields._size;
            if ( (unsigned int)v36 >= LODWORD(v34->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v14,
                v16,
                *(const MethodInfo_387999C **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
            }
            else
            {
              v37 = &v34->obj.klass + v36;
              v14->fields._size = v36 + 1;
              v37[4] = (Il2CppClass *)v16;
              sub_1C93A78((GrandQuestFolderBoardItem_o *)(v37 + 4), (int32_t)v16, v28, v29, v30, v31, v32, v33);
            }
          }
        }
      }
      if ( Count == ++v15 )
        goto LABEL_25;
    }
LABEL_50:
    sub_1C93D2C(Instance, v10);
  }
LABEL_25:
  v38 = QuestRestrictionMaster___c_TypeInfo;
  if ( !QuestRestrictionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRestrictionMaster___c_TypeInfo);
    v38 = QuestRestrictionMaster___c_TypeInfo;
  }
  _9__4_0 = (System_Func_object__int__o *)v38->static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !v38->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v38);
      v38 = QuestRestrictionMaster___c_TypeInfo;
    }
    v40 = (Il2CppObject *)v38->static_fields->__9;
    _9__4_0 = (System_Func_object__int__o *)sub_1C93D20(System_Func_QuestRestrictionEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__4_0, v40, Method_QuestRestrictionMaster___c__getRestrictionList_b__4_0__, 0);
    static_fields = QuestRestrictionMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Func_QuestRestrictionEntity__int__o *)_9__4_0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->__9__4_0, (int32_t)_9__4_0, v42, v43, v44, v45, v46, v47);
  }
  v48 = System_Linq_Enumerable__OrderByDescending_object__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v14,
          (System_Func_TSource__TKey__o *)_9__4_0,
          (const MethodInfo_31D3DE4 *)Method_System_Linq_Enumerable_OrderByDescending_QuestRestrictionEntity__int___);
  v49 = QuestRestrictionMaster___c_TypeInfo;
  v50 = v48;
  if ( !QuestRestrictionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRestrictionMaster___c_TypeInfo);
    v49 = QuestRestrictionMaster___c_TypeInfo;
  }
  _9__4_1 = (System_Func_object__int__o *)v49->static_fields->__9__4_1;
  if ( !_9__4_1 )
  {
    if ( !v49->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v49);
      v49 = QuestRestrictionMaster___c_TypeInfo;
    }
    v52 = (Il2CppObject *)v49->static_fields->__9;
    _9__4_1 = (System_Func_object__int__o *)sub_1C93D20(System_Func_QuestRestrictionEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__4_1, v52, Method_QuestRestrictionMaster___c__getRestrictionList_b__4_1__, 0);
    v53 = QuestRestrictionMaster___c_TypeInfo->static_fields;
    v53->__9__4_1 = (struct System_Func_QuestRestrictionEntity__int__o *)_9__4_1;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v53->__9__4_1, (int32_t)_9__4_1, v54, v55, v56, v57, v58, v59);
  }
  v60 = System_Linq_Enumerable__ThenBy_object__int_(
          v50,
          (System_Func_TSource__TKey__o *)_9__4_1,
          (const MethodInfo_31E2E7C *)Method_System_Linq_Enumerable_ThenBy_QuestRestrictionEntity__int___);
  v61 = QuestRestrictionMaster___c_TypeInfo;
  v62 = (System_Collections_Generic_IEnumerable_TSource__o *)v60;
  if ( !QuestRestrictionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRestrictionMaster___c_TypeInfo);
    v61 = QuestRestrictionMaster___c_TypeInfo;
  }
  _9__4_2 = (System_Func_object__int__o *)v61->static_fields->__9__4_2;
  if ( !_9__4_2 )
  {
    if ( !v61->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v61);
      v61 = QuestRestrictionMaster___c_TypeInfo;
    }
    v64 = (Il2CppObject *)v61->static_fields->__9;
    _9__4_2 = (System_Func_object__int__o *)sub_1C93D20(System_Func_RestrictionEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__4_2, v64, Method_QuestRestrictionMaster___c__getRestrictionList_b__4_2__, 0);
    v65 = QuestRestrictionMaster___c_TypeInfo->static_fields;
    v65->__9__4_2 = (struct System_Func_RestrictionEntity__int__o *)_9__4_2;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v65->__9__4_2, (int32_t)_9__4_2, v66, v67, v68, v69, v70, v71);
  }
  v72 = System_Linq_Enumerable__OrderByDescending_object__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v13,
          (System_Func_TSource__TKey__o *)_9__4_2,
          (const MethodInfo_31D3DE4 *)Method_System_Linq_Enumerable_OrderByDescending_RestrictionEntity__int___);
  v73 = QuestRestrictionMaster___c_TypeInfo;
  v74 = v72;
  if ( !QuestRestrictionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRestrictionMaster___c_TypeInfo);
    v73 = QuestRestrictionMaster___c_TypeInfo;
  }
  _9__4_3 = (System_Func_object__int__o *)v73->static_fields->__9__4_3;
  if ( !_9__4_3 )
  {
    if ( !v73->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v73);
      v73 = QuestRestrictionMaster___c_TypeInfo;
    }
    v76 = (Il2CppObject *)v73->static_fields->__9;
    _9__4_3 = (System_Func_object__int__o *)sub_1C93D20(System_Func_RestrictionEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__4_3, v76, Method_QuestRestrictionMaster___c__getRestrictionList_b__4_3__, 0);
    v77 = QuestRestrictionMaster___c_TypeInfo->static_fields;
    v77->__9__4_3 = (struct System_Func_RestrictionEntity__int__o *)_9__4_3;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v77->__9__4_3, (int32_t)_9__4_3, v78, v79, v80, v81, v82, v83);
  }
  v84 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                               v74,
                                                               (System_Func_TSource__TKey__o *)_9__4_3,
                                                               (const MethodInfo_31E2E7C *)Method_System_Linq_Enumerable_ThenBy_RestrictionEntity__int___);
  v85 = System_Linq_Enumerable__ToArray_object_(
          v62,
          (const MethodInfo_31E3D18 *)Method_System_Linq_Enumerable_ToArray_QuestRestrictionEntity___);
  v93->klass = (GrandQuestFolderBoardItem_c *)v85;
  sub_1C93A78(v93, (int32_t)v85, v86, v87, v88, v89, v90, v91);
  return (RestrictionEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                      v84,
                                      (const MethodInfo_31E3D18 *)Method_System_Linq_Enumerable_ToArray_RestrictionEntity___);
}


void QuestRestrictionMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D31173 & 1) == 0 )
  {
    sub_1C93AD4(&QuestRestrictionMaster___c_TypeInfo);
    byte_4D31173 = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(QuestRestrictionMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  QuestRestrictionMaster___c_TypeInfo->static_fields->__9 = (struct QuestRestrictionMaster___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)QuestRestrictionMaster___c_TypeInfo->static_fields,
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
    sub_1C93D2C(this, 0);
  return x->fields.priority;
}


int32_t QuestRestrictionMaster___c___getRestrictionList_b__3_1(
        QuestRestrictionMaster___c_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return x->fields.id;
}


int32_t QuestRestrictionMaster___c___getRestrictionList_b__4_0(
        QuestRestrictionMaster___c_o *this,
        QuestRestrictionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return x->fields.priority;
}


int32_t QuestRestrictionMaster___c___getRestrictionList_b__4_1(
        QuestRestrictionMaster___c_o *this,
        QuestRestrictionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return x->fields.restrictionId;
}


int32_t QuestRestrictionMaster___c___getRestrictionList_b__4_2(
        QuestRestrictionMaster___c_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return x->fields.priority;
}


int32_t QuestRestrictionMaster___c___getRestrictionList_b__4_3(
        QuestRestrictionMaster___c_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return x->fields.id;
}