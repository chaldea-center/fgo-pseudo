void QuestRestrictionMaster___ctor(QuestRestrictionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C27A30 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_QuestRestrictionMaster__QuestRestrictionEntity__string___ctor__);
    byte_4C27A30 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    180,
    (const MethodInfo_338A52C *)Method_DataMasterBase_QuestRestrictionMaster__QuestRestrictionEntity__string___ctor__);
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

  if ( (byte_4C27A2E & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_QuestRestrictionMaster__QuestRestrictionEntity__string__GetEntity__);
    byte_4C27A2E = 1;
  }
  PK = (Il2CppObject *)QuestRestrictionEntity__CreatePK(
                         questId,
                         phase,
                         restrictionId,
                         *(const MethodInfo **)&restrictionId);
  return (QuestRestrictionEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_338C850 *)Method_DataMasterBase_QuestRestrictionMaster__QuestRestrictionEntity__string__GetEntity__);
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

  if ( (byte_4C27A33 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_QuestRestrictionEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_QuestRestrictionEntity__get_Item__);
    sub_1C2D490(&Method_DataManager_GetMasterData_RestrictionMaster___);
    sub_1C2D490(&Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C27A33 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_RestrictionMaster___);
  if ( !this->fields.list )
    goto LABEL_24;
  v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_QuestRestrictionEntity__get_Count__);
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
                 (const MethodInfo_3321298 *)Method_System_Collections_ObjectModel_Collection_QuestRestrictionEntity__get_Item__);
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
                       (const MethodInfo_3387D98 *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__);
          }
        }
        continue;
      }
      if ( v9 )
      {
        result = (System_String_o *)DataMasterBase_object__object__int___GetEntity(
                                      v9,
                                      *((_DWORD *)Instance + 6),
                                      (const MethodInfo_3387D98 *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__);
        if ( result )
          return (System_String_o *)result[1].klass;
        return result;
      }
LABEL_24:
      sub_1C2D6EC(Instance, v8);
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

  if ( (byte_4C27A2F & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_QuestRestrictionMaster__QuestRestrictionEntity__string__TryGetEntity__);
    byte_4C27A2F = 1;
  }
  PK = (Il2CppObject *)QuestRestrictionEntity__CreatePK(questId, phase, restrictionId, *(const MethodInfo **)&phase);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_338C89C *)Method_DataMasterBase_QuestRestrictionMaster__QuestRestrictionEntity__string__TryGetEntity__);
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
  const MethodInfo *v15; // x3
  int v16; // w8
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  QuestRestrictionMaster___c_c *v21; // x0
  System_Func_object__int__o *_9__3_0; // x19
  Il2CppObject *v23; // x20
  struct QuestRestrictionMaster___c_StaticFields *static_fields; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v27; // x0
  QuestRestrictionMaster___c_c *v28; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v29; // x19
  System_Func_object__int__o *_9__3_1; // x20
  Il2CppObject *v31; // x21
  struct QuestRestrictionMaster___c_StaticFields *v32; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x0

  if ( (byte_4C27A31 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_QuestRestrictionEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_QuestRestrictionEntity__get_Item__);
    sub_1C2D490(&Method_DataManager_GetMasterData_RestrictionMaster___);
    sub_1C2D490(&Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__);
    sub_1C2D490(&Method_System_Linq_Enumerable_OrderByDescending_RestrictionEntity__int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ThenBy_RestrictionEntity__int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToArray_RestrictionEntity___);
    sub_1C2D490(&System_Func_RestrictionEntity__int__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_RestrictionEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_RestrictionEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_RestrictionEntity__TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_QuestRestrictionMaster___c__getRestrictionList_b__3_0__);
    sub_1C2D490(&Method_QuestRestrictionMaster___c__getRestrictionList_b__3_1__);
    sub_1C2D490(&QuestRestrictionMaster___c_TypeInfo);
    byte_4C27A31 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_RestrictionMaster___);
  if ( !this->fields.list )
    goto LABEL_33;
  v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_QuestRestrictionEntity__get_Count__);
  v11 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_RestrictionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_RestrictionEntity___ctor__);
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
                   (const MethodInfo_3321298 *)Method_System_Collections_ObjectModel_Collection_QuestRestrictionEntity__get_Item__);
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
                     (const MethodInfo_3387D98 *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__);
        if ( Instance )
        {
          v16 = v13[5];
          v8 = (Il2CppClass *)Instance;
          if ( !v16 || v16 == phase )
          {
            if ( !v11 )
              break;
            items = v11->fields._items;
            v18 = Method_System_Collections_Generic_List_RestrictionEntity__Add__;
            ++v11->fields._version;
            if ( !items )
              break;
            size = v11->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v11,
                (Il2CppObject *)Instance,
                *(const MethodInfo_3789B84 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
            }
            else
            {
              v20 = &items->obj.klass + size;
              v11->fields._size = size + 1;
              v20[4] = v8;
              sub_1C2D434((CGThumbnailListItem_o *)(v20 + 4), (int32_t)v8, v14, v15);
            }
          }
        }
      }
      if ( Count == ++v12 )
        goto LABEL_20;
    }
LABEL_33:
    sub_1C2D6EC(Instance, v8);
  }
LABEL_20:
  v21 = QuestRestrictionMaster___c_TypeInfo;
  if ( !QuestRestrictionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRestrictionMaster___c_TypeInfo);
    v21 = QuestRestrictionMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Func_object__int__o *)v21->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      v21 = QuestRestrictionMaster___c_TypeInfo;
    }
    v23 = (Il2CppObject *)v21->static_fields->__9;
    _9__3_0 = (System_Func_object__int__o *)sub_1C2D6DC(System_Func_RestrictionEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__3_0, v23, Method_QuestRestrictionMaster___c__getRestrictionList_b__3_0__, 0);
    static_fields = QuestRestrictionMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Func_RestrictionEntity__int__o *)_9__3_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v25, v26);
  }
  v27 = System_Linq_Enumerable__OrderByDescending_object__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v11,
          (System_Func_TSource__TKey__o *)_9__3_0,
          (const MethodInfo_30FE624 *)Method_System_Linq_Enumerable_OrderByDescending_RestrictionEntity__int___);
  v28 = QuestRestrictionMaster___c_TypeInfo;
  v29 = v27;
  if ( !QuestRestrictionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRestrictionMaster___c_TypeInfo);
    v28 = QuestRestrictionMaster___c_TypeInfo;
  }
  _9__3_1 = (System_Func_object__int__o *)v28->static_fields->__9__3_1;
  if ( !_9__3_1 )
  {
    if ( !v28->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v28);
      v28 = QuestRestrictionMaster___c_TypeInfo;
    }
    v31 = (Il2CppObject *)v28->static_fields->__9;
    _9__3_1 = (System_Func_object__int__o *)sub_1C2D6DC(System_Func_RestrictionEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__3_1, v31, Method_QuestRestrictionMaster___c__getRestrictionList_b__3_1__, 0);
    v32 = QuestRestrictionMaster___c_TypeInfo->static_fields;
    v32->__9__3_1 = (struct System_Func_RestrictionEntity__int__o *)_9__3_1;
    sub_1C2D434((CGThumbnailListItem_o *)&v32->__9__3_1, (int32_t)_9__3_1, v33, v34);
  }
  v35 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                               v29,
                                                               (System_Func_TSource__TKey__o *)_9__3_1,
                                                               (const MethodInfo_310D150 *)Method_System_Linq_Enumerable_ThenBy_RestrictionEntity__int___);
  return (RestrictionEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                      v35,
                                      (const MethodInfo_310DFEC *)Method_System_Linq_Enumerable_ToArray_RestrictionEntity___);
}


RestrictionEntity_array *QuestRestrictionMaster__getRestrictionList_42310352(
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
  const MethodInfo *v18; // x3
  int klass_high; // w8
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  struct System_Object_array *v26; // x8
  _QWORD *v27; // x9
  __int64 v28; // x10
  Il2CppClass **v29; // x0
  QuestRestrictionMaster___c_c *v30; // x0
  System_Func_object__int__o *_9__4_0; // x21
  Il2CppObject *v32; // x22
  struct QuestRestrictionMaster___c_StaticFields *static_fields; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v36; // x0
  QuestRestrictionMaster___c_c *v37; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v38; // x21
  System_Func_object__int__o *_9__4_1; // x22
  Il2CppObject *v40; // x23
  struct QuestRestrictionMaster___c_StaticFields *v41; // x0
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v44; // x0
  QuestRestrictionMaster___c_c *v45; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v46; // x21
  System_Func_object__int__o *_9__4_2; // x22
  Il2CppObject *v48; // x23
  struct QuestRestrictionMaster___c_StaticFields *v49; // x0
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v52; // x0
  QuestRestrictionMaster___c_c *v53; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v54; // x20
  System_Func_object__int__o *_9__4_3; // x22
  Il2CppObject *v56; // x23
  struct QuestRestrictionMaster___c_StaticFields *v57; // x0
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v60; // x20
  System_Object_array *v61; // x0
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  CGThumbnailListItem_o *v65; // [xsp+8h] [xbp-68h]

  if ( (byte_4C27A32 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_QuestRestrictionEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_QuestRestrictionEntity__get_Item__);
    sub_1C2D490(&Method_DataManager_GetMasterData_RestrictionMaster___);
    sub_1C2D490(&Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__);
    sub_1C2D490(&Method_System_Linq_Enumerable_OrderByDescending_QuestRestrictionEntity__int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_OrderByDescending_RestrictionEntity__int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ThenBy_QuestRestrictionEntity__int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ThenBy_RestrictionEntity__int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToArray_QuestRestrictionEntity___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToArray_RestrictionEntity___);
    sub_1C2D490(&System_Func_QuestRestrictionEntity__int__TypeInfo);
    sub_1C2D490(&System_Func_RestrictionEntity__int__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_QuestRestrictionEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_RestrictionEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_RestrictionEntity___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_QuestRestrictionEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_QuestRestrictionEntity__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_RestrictionEntity__TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_QuestRestrictionMaster___c__getRestrictionList_b__4_0__);
    sub_1C2D490(&Method_QuestRestrictionMaster___c__getRestrictionList_b__4_1__);
    sub_1C2D490(&Method_QuestRestrictionMaster___c__getRestrictionList_b__4_2__);
    sub_1C2D490(&Method_QuestRestrictionMaster___c__getRestrictionList_b__4_3__);
    sub_1C2D490(&QuestRestrictionMaster___c_TypeInfo);
    byte_4C27A32 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  v65 = (CGThumbnailListItem_o *)questRestrictionEntityList;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_RestrictionMaster___);
  if ( !this->fields.list )
    goto LABEL_50;
  v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_QuestRestrictionEntity__get_Count__);
  v13 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_RestrictionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_RestrictionEntity___ctor__);
  v14 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_QuestRestrictionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_QuestRestrictionEntity___ctor__);
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
                   (const MethodInfo_3321298 *)Method_System_Collections_ObjectModel_Collection_QuestRestrictionEntity__get_Item__);
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
                     (const MethodInfo_3387D98 *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__);
        if ( Instance )
        {
          klass_high = HIDWORD(v16[1].klass);
          v10 = (Il2CppClass *)Instance;
          if ( !klass_high || klass_high == phase )
          {
            if ( !v13 )
              break;
            items = v13->fields._items;
            v21 = Method_System_Collections_Generic_List_RestrictionEntity__Add__;
            ++v13->fields._version;
            if ( !items )
              break;
            size = v13->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v13,
                (Il2CppObject *)Instance,
                *(const MethodInfo_3789B84 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
            }
            else
            {
              v23 = &items->obj.klass + size;
              v13->fields._size = size + 1;
              v23[4] = v10;
              sub_1C2D434((CGThumbnailListItem_o *)(v23 + 4), (int32_t)v10, v17, v18);
            }
            if ( !v14 )
              break;
            v26 = v14->fields._items;
            v27 = Method_System_Collections_Generic_List_QuestRestrictionEntity__Add__;
            ++v14->fields._version;
            if ( !v26 )
              break;
            v28 = v14->fields._size;
            if ( (unsigned int)v28 >= LODWORD(v26->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v14,
                v16,
                *(const MethodInfo_3789B84 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
            }
            else
            {
              v29 = &v26->obj.klass + v28;
              v14->fields._size = v28 + 1;
              v29[4] = (Il2CppClass *)v16;
              sub_1C2D434((CGThumbnailListItem_o *)(v29 + 4), (int32_t)v16, v24, v25);
            }
          }
        }
      }
      if ( Count == ++v15 )
        goto LABEL_25;
    }
LABEL_50:
    sub_1C2D6EC(Instance, v10);
  }
LABEL_25:
  v30 = QuestRestrictionMaster___c_TypeInfo;
  if ( !QuestRestrictionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRestrictionMaster___c_TypeInfo);
    v30 = QuestRestrictionMaster___c_TypeInfo;
  }
  _9__4_0 = (System_Func_object__int__o *)v30->static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !v30->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v30);
      v30 = QuestRestrictionMaster___c_TypeInfo;
    }
    v32 = (Il2CppObject *)v30->static_fields->__9;
    _9__4_0 = (System_Func_object__int__o *)sub_1C2D6DC(System_Func_QuestRestrictionEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__4_0, v32, Method_QuestRestrictionMaster___c__getRestrictionList_b__4_0__, 0);
    static_fields = QuestRestrictionMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Func_QuestRestrictionEntity__int__o *)_9__4_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__4_0, (int32_t)_9__4_0, v34, v35);
  }
  v36 = System_Linq_Enumerable__OrderByDescending_object__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v14,
          (System_Func_TSource__TKey__o *)_9__4_0,
          (const MethodInfo_30FE624 *)Method_System_Linq_Enumerable_OrderByDescending_QuestRestrictionEntity__int___);
  v37 = QuestRestrictionMaster___c_TypeInfo;
  v38 = v36;
  if ( !QuestRestrictionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRestrictionMaster___c_TypeInfo);
    v37 = QuestRestrictionMaster___c_TypeInfo;
  }
  _9__4_1 = (System_Func_object__int__o *)v37->static_fields->__9__4_1;
  if ( !_9__4_1 )
  {
    if ( !v37->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v37);
      v37 = QuestRestrictionMaster___c_TypeInfo;
    }
    v40 = (Il2CppObject *)v37->static_fields->__9;
    _9__4_1 = (System_Func_object__int__o *)sub_1C2D6DC(System_Func_QuestRestrictionEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__4_1, v40, Method_QuestRestrictionMaster___c__getRestrictionList_b__4_1__, 0);
    v41 = QuestRestrictionMaster___c_TypeInfo->static_fields;
    v41->__9__4_1 = (struct System_Func_QuestRestrictionEntity__int__o *)_9__4_1;
    sub_1C2D434((CGThumbnailListItem_o *)&v41->__9__4_1, (int32_t)_9__4_1, v42, v43);
  }
  v44 = System_Linq_Enumerable__ThenBy_object__int_(
          v38,
          (System_Func_TSource__TKey__o *)_9__4_1,
          (const MethodInfo_310D150 *)Method_System_Linq_Enumerable_ThenBy_QuestRestrictionEntity__int___);
  v45 = QuestRestrictionMaster___c_TypeInfo;
  v46 = (System_Collections_Generic_IEnumerable_TSource__o *)v44;
  if ( !QuestRestrictionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRestrictionMaster___c_TypeInfo);
    v45 = QuestRestrictionMaster___c_TypeInfo;
  }
  _9__4_2 = (System_Func_object__int__o *)v45->static_fields->__9__4_2;
  if ( !_9__4_2 )
  {
    if ( !v45->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v45);
      v45 = QuestRestrictionMaster___c_TypeInfo;
    }
    v48 = (Il2CppObject *)v45->static_fields->__9;
    _9__4_2 = (System_Func_object__int__o *)sub_1C2D6DC(System_Func_RestrictionEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__4_2, v48, Method_QuestRestrictionMaster___c__getRestrictionList_b__4_2__, 0);
    v49 = QuestRestrictionMaster___c_TypeInfo->static_fields;
    v49->__9__4_2 = (struct System_Func_RestrictionEntity__int__o *)_9__4_2;
    sub_1C2D434((CGThumbnailListItem_o *)&v49->__9__4_2, (int32_t)_9__4_2, v50, v51);
  }
  v52 = System_Linq_Enumerable__OrderByDescending_object__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v13,
          (System_Func_TSource__TKey__o *)_9__4_2,
          (const MethodInfo_30FE624 *)Method_System_Linq_Enumerable_OrderByDescending_RestrictionEntity__int___);
  v53 = QuestRestrictionMaster___c_TypeInfo;
  v54 = v52;
  if ( !QuestRestrictionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRestrictionMaster___c_TypeInfo);
    v53 = QuestRestrictionMaster___c_TypeInfo;
  }
  _9__4_3 = (System_Func_object__int__o *)v53->static_fields->__9__4_3;
  if ( !_9__4_3 )
  {
    if ( !v53->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v53);
      v53 = QuestRestrictionMaster___c_TypeInfo;
    }
    v56 = (Il2CppObject *)v53->static_fields->__9;
    _9__4_3 = (System_Func_object__int__o *)sub_1C2D6DC(System_Func_RestrictionEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__4_3, v56, Method_QuestRestrictionMaster___c__getRestrictionList_b__4_3__, 0);
    v57 = QuestRestrictionMaster___c_TypeInfo->static_fields;
    v57->__9__4_3 = (struct System_Func_RestrictionEntity__int__o *)_9__4_3;
    sub_1C2D434((CGThumbnailListItem_o *)&v57->__9__4_3, (int32_t)_9__4_3, v58, v59);
  }
  v60 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                               v54,
                                                               (System_Func_TSource__TKey__o *)_9__4_3,
                                                               (const MethodInfo_310D150 *)Method_System_Linq_Enumerable_ThenBy_RestrictionEntity__int___);
  v61 = System_Linq_Enumerable__ToArray_object_(
          v46,
          (const MethodInfo_310DFEC *)Method_System_Linq_Enumerable_ToArray_QuestRestrictionEntity___);
  v65->klass = (CGThumbnailListItem_c *)v61;
  sub_1C2D434(v65, (int32_t)v61, v62, v63);
  return (RestrictionEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                      v60,
                                      (const MethodInfo_310DFEC *)Method_System_Linq_Enumerable_ToArray_RestrictionEntity___);
}


void QuestRestrictionMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C27A34 & 1) == 0 )
  {
    sub_1C2D490(&QuestRestrictionMaster___c_TypeInfo);
    byte_4C27A34 = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(QuestRestrictionMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  QuestRestrictionMaster___c_TypeInfo->static_fields->__9 = (struct QuestRestrictionMaster___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)QuestRestrictionMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C2D6EC(this, 0);
  return x->fields.priority;
}


int32_t QuestRestrictionMaster___c___getRestrictionList_b__3_1(
        QuestRestrictionMaster___c_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2D6EC(this, 0);
  return x->fields.id;
}


int32_t QuestRestrictionMaster___c___getRestrictionList_b__4_0(
        QuestRestrictionMaster___c_o *this,
        QuestRestrictionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2D6EC(this, 0);
  return x->fields.priority;
}


int32_t QuestRestrictionMaster___c___getRestrictionList_b__4_1(
        QuestRestrictionMaster___c_o *this,
        QuestRestrictionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2D6EC(this, 0);
  return x->fields.restrictionId;
}


int32_t QuestRestrictionMaster___c___getRestrictionList_b__4_2(
        QuestRestrictionMaster___c_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2D6EC(this, 0);
  return x->fields.priority;
}


int32_t QuestRestrictionMaster___c___getRestrictionList_b__4_3(
        QuestRestrictionMaster___c_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2D6EC(this, 0);
  return x->fields.id;
}