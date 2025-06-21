void __fastcall QuestRestrictionMaster___ctor(QuestRestrictionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B1CC57 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_QuestRestrictionMaster__QuestRestrictionEntity__string___ctor__, method);
    byte_4B1CC57 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    180,
    (const MethodInfo_32CA594 *)Method_DataMasterBase_QuestRestrictionMaster__QuestRestrictionEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
QuestRestrictionEntity_o *__fastcall QuestRestrictionMaster__GetEntity(
        QuestRestrictionMaster_o *this,
        int32_t questId,
        int32_t phase,
        int32_t restrictionId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B1CC55 & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_DataMasterBase_QuestRestrictionMaster__QuestRestrictionEntity__string__GetEntity__,
      *(_QWORD *)&questId);
    byte_4B1CC55 = 1;
  }
  PK = (Il2CppObject *)QuestRestrictionEntity__CreatePK(
                         questId,
                         phase,
                         restrictionId,
                         *(const MethodInfo **)&restrictionId);
  return (QuestRestrictionEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_32CC8B8 *)Method_DataMasterBase_QuestRestrictionMaster__QuestRestrictionEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestRestrictionMaster__GetRestrictionName(
        QuestRestrictionMaster_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  void *Instance; // x0
  __int64 v12; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v13; // x22
  int32_t Count; // w0
  int32_t v15; // w23
  Il2CppObject *Entity; // x25
  int32_t i; // w24
  int v18; // w8
  System_String_o *result; // x0

  if ( (byte_4B1CC5A & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_System_Collections_ObjectModel_Collection_QuestRestrictionEntity__get_Count__,
      *(_QWORD *)&questId);
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_QuestRestrictionEntity__get_Item__, v7);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_RestrictionMaster___, v8);
    sub_1BCAFF8(&Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__, v9);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4B1CC5A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_RestrictionMaster___);
  if ( !this->fields.list )
    goto LABEL_24;
  v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_32635E8 *)Method_System_Collections_ObjectModel_Collection_QuestRestrictionEntity__get_Count__);
  if ( Count < 1 )
    return 0LL;
  v15 = Count;
  Entity = 0LL;
  for ( i = 0; i != v15; ++i )
  {
    Instance = this->fields.list;
    if ( !Instance )
      goto LABEL_24;
    Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 i,
                 (const MethodInfo_3263678 *)Method_System_Collections_ObjectModel_Collection_QuestRestrictionEntity__get_Item__);
    if ( !Instance )
      goto LABEL_24;
    if ( *((_DWORD *)Instance + 4) == questId )
    {
      v18 = *((_DWORD *)Instance + 5);
      if ( v18 != phase )
      {
        if ( !Entity )
        {
          if ( v18 )
          {
            Entity = 0LL;
          }
          else
          {
            if ( !v13 )
              goto LABEL_24;
            Entity = DataMasterBase_object__object__int___GetEntity(
                       v13,
                       *((_DWORD *)Instance + 6),
                       (const MethodInfo_32C7E00 *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__);
          }
        }
        continue;
      }
      if ( v13 )
      {
        result = (System_String_o *)DataMasterBase_object__object__int___GetEntity(
                                      v13,
                                      *((_DWORD *)Instance + 6),
                                      (const MethodInfo_32C7E00 *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__);
        if ( result )
          return (System_String_o *)result[1].klass;
        return result;
      }
LABEL_24:
      sub_1BCB254(Instance, v12);
    }
  }
  if ( Entity )
    return (System_String_o *)Entity[1].monitor;
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestRestrictionMaster__TryGetEntity(
        QuestRestrictionMaster_o *this,
        QuestRestrictionEntity_o **entity,
        int32_t questId,
        int32_t phase,
        int32_t restrictionId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B1CC56 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_QuestRestrictionMaster__QuestRestrictionEntity__string__TryGetEntity__, entity);
    byte_4B1CC56 = 1;
  }
  PK = (Il2CppObject *)QuestRestrictionEntity__CreatePK(questId, phase, restrictionId, *(const MethodInfo **)&phase);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32CC904 *)Method_DataMasterBase_QuestRestrictionMaster__QuestRestrictionEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
RestrictionEntity_array *__fastcall QuestRestrictionMaster__getRestrictionList(
        QuestRestrictionMaster_o *this,
        int32_t questId,
        int32_t phase,
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
  void *Instance; // x0
  Il2CppClass *v22; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v23; // x23
  int32_t Count; // w24
  System_Collections_Generic_List_object__o *v25; // x22
  int32_t v26; // w25
  _DWORD *v27; // x26
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  int v30; // w8
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0
  QuestRestrictionMaster___c_c *v35; // x0
  System_Func_object__int__o *_9__3_0; // x19
  Il2CppObject *v37; // x20
  struct QuestRestrictionMaster___c_StaticFields *static_fields; // x0
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v41; // x0
  QuestRestrictionMaster___c_c *v42; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v43; // x19
  System_Func_object__int__o *_9__3_1; // x20
  Il2CppObject *v45; // x21
  struct QuestRestrictionMaster___c_StaticFields *v46; // x0
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v49; // x0

  if ( (byte_4B1CC58 & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_System_Collections_ObjectModel_Collection_QuestRestrictionEntity__get_Count__,
      *(_QWORD *)&questId);
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_QuestRestrictionEntity__get_Item__, v7);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_RestrictionMaster___, v8);
    sub_1BCAFF8(&Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__, v9);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_OrderByDescending_RestrictionEntity__int___, v10);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_ThenBy_RestrictionEntity__int___, v11);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_ToArray_RestrictionEntity___, v12);
    sub_1BCAFF8(&System_Func_RestrictionEntity__int__TypeInfo, v13);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_RestrictionEntity__Add__, v14);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_RestrictionEntity___ctor__, v15);
    sub_1BCAFF8(&System_Collections_Generic_List_RestrictionEntity__TypeInfo, v16);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_1BCAFF8(&Method_QuestRestrictionMaster___c__getRestrictionList_b__3_0__, v18);
    sub_1BCAFF8(&Method_QuestRestrictionMaster___c__getRestrictionList_b__3_1__, v19);
    sub_1BCAFF8(&QuestRestrictionMaster___c_TypeInfo, v20);
    byte_4B1CC58 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_RestrictionMaster___);
  if ( !this->fields.list )
    goto LABEL_33;
  v23 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_32635E8 *)Method_System_Collections_ObjectModel_Collection_QuestRestrictionEntity__get_Count__);
  v25 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_RestrictionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_RestrictionEntity___ctor__);
  if ( Count >= 1 )
  {
    v26 = 0;
    while ( 1 )
    {
      Instance = this->fields.list;
      if ( !Instance )
        break;
      Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                   (System_Collections_ObjectModel_Collection_T__o *)Instance,
                   v26,
                   (const MethodInfo_3263678 *)Method_System_Collections_ObjectModel_Collection_QuestRestrictionEntity__get_Item__);
      if ( !Instance )
        break;
      v27 = Instance;
      if ( *((_DWORD *)Instance + 4) == questId )
      {
        if ( !v23 )
          break;
        Instance = DataMasterBase_object__object__int___GetEntity(
                     v23,
                     *((_DWORD *)Instance + 6),
                     (const MethodInfo_32C7E00 *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__);
        if ( Instance )
        {
          v30 = v27[5];
          v22 = (Il2CppClass *)Instance;
          if ( !v30 || v30 == phase )
          {
            if ( !v25 )
              break;
            items = v25->fields._items;
            v32 = Method_System_Collections_Generic_List_RestrictionEntity__Add__;
            ++v25->fields._version;
            if ( !items )
              break;
            size = v25->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v25,
                (Il2CppObject *)Instance,
                *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
            }
            else
            {
              v34 = &items->obj.klass + size;
              v25->fields._size = size + 1;
              v34[4] = v22;
              sub_1BCAF9C((CGThumbnailListItem_o *)(v34 + 4), (int32_t)v22, v28, v29);
            }
          }
        }
      }
      if ( Count == ++v26 )
        goto LABEL_20;
    }
LABEL_33:
    sub_1BCB254(Instance, v22);
  }
LABEL_20:
  v35 = QuestRestrictionMaster___c_TypeInfo;
  if ( !QuestRestrictionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRestrictionMaster___c_TypeInfo);
    v35 = QuestRestrictionMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Func_object__int__o *)v35->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v35->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v35);
      v35 = QuestRestrictionMaster___c_TypeInfo;
    }
    v37 = (Il2CppObject *)v35->static_fields->__9;
    _9__3_0 = (System_Func_object__int__o *)sub_1BCB244(System_Func_RestrictionEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__3_0, v37, Method_QuestRestrictionMaster___c__getRestrictionList_b__3_0__, 0LL);
    static_fields = QuestRestrictionMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Func_RestrictionEntity__int__o *)_9__3_0;
    sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v39, v40);
  }
  v41 = System_Linq_Enumerable__OrderByDescending_object__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v25,
          (System_Func_TSource__TKey__o *)_9__3_0,
          (const MethodInfo_30466C8 *)Method_System_Linq_Enumerable_OrderByDescending_RestrictionEntity__int___);
  v42 = QuestRestrictionMaster___c_TypeInfo;
  v43 = v41;
  if ( !QuestRestrictionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRestrictionMaster___c_TypeInfo);
    v42 = QuestRestrictionMaster___c_TypeInfo;
  }
  _9__3_1 = (System_Func_object__int__o *)v42->static_fields->__9__3_1;
  if ( !_9__3_1 )
  {
    if ( !v42->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v42);
      v42 = QuestRestrictionMaster___c_TypeInfo;
    }
    v45 = (Il2CppObject *)v42->static_fields->__9;
    _9__3_1 = (System_Func_object__int__o *)sub_1BCB244(System_Func_RestrictionEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__3_1, v45, Method_QuestRestrictionMaster___c__getRestrictionList_b__3_1__, 0LL);
    v46 = QuestRestrictionMaster___c_TypeInfo->static_fields;
    v46->__9__3_1 = (struct System_Func_RestrictionEntity__int__o *)_9__3_1;
    sub_1BCAF9C((CGThumbnailListItem_o *)&v46->__9__3_1, (int32_t)_9__3_1, v47, v48);
  }
  v49 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                               v43,
                                                               (System_Func_TSource__TKey__o *)_9__3_1,
                                                               (const MethodInfo_305668C *)Method_System_Linq_Enumerable_ThenBy_RestrictionEntity__int___);
  return (RestrictionEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                      v49,
                                      (const MethodInfo_30572C4 *)Method_System_Linq_Enumerable_ToArray_RestrictionEntity___);
}


RestrictionEntity_array *__fastcall QuestRestrictionMaster__getRestrictionList_41694104(
        QuestRestrictionMaster_o *this,
        QuestRestrictionEntity_array **questRestrictionEntityList,
        int32_t questId,
        int32_t phase,
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
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  void *Instance; // x0
  Il2CppClass *v33; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v34; // x25
  int32_t Count; // w26
  System_Collections_Generic_List_object__o *v36; // x20
  System_Collections_Generic_List_object__o *v37; // x24
  int32_t v38; // w27
  Il2CppObject *v39; // x28
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  int klass_high; // w8
  struct System_Object_array *items; // x8
  _QWORD *v44; // x9
  __int64 size; // x10
  Il2CppClass **v46; // x0
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  struct System_Object_array *v49; // x8
  _QWORD *v50; // x9
  __int64 v51; // x10
  Il2CppClass **v52; // x0
  QuestRestrictionMaster___c_c *v53; // x0
  System_Func_object__int__o *_9__4_0; // x21
  Il2CppObject *v55; // x22
  struct QuestRestrictionMaster___c_StaticFields *static_fields; // x0
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v59; // x0
  QuestRestrictionMaster___c_c *v60; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v61; // x21
  System_Func_object__int__o *_9__4_1; // x22
  Il2CppObject *v63; // x23
  struct QuestRestrictionMaster___c_StaticFields *v64; // x0
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v67; // x0
  QuestRestrictionMaster___c_c *v68; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v69; // x21
  System_Func_object__int__o *_9__4_2; // x22
  Il2CppObject *v71; // x23
  struct QuestRestrictionMaster___c_StaticFields *v72; // x0
  int32_t v73; // w2
  const MethodInfo *v74; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v75; // x0
  QuestRestrictionMaster___c_c *v76; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v77; // x20
  System_Func_object__int__o *_9__4_3; // x22
  Il2CppObject *v79; // x23
  struct QuestRestrictionMaster___c_StaticFields *v80; // x0
  int32_t v81; // w2
  const MethodInfo *v82; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v83; // x20
  System_Object_array *v84; // x0
  int32_t v85; // w2
  const MethodInfo *v86; // x3
  CGThumbnailListItem_o *v88; // [xsp+8h] [xbp-68h]

  if ( (byte_4B1CC59 & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_System_Collections_ObjectModel_Collection_QuestRestrictionEntity__get_Count__,
      questRestrictionEntityList);
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_QuestRestrictionEntity__get_Item__, v9);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_RestrictionMaster___, v10);
    sub_1BCAFF8(&Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__, v11);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_OrderByDescending_QuestRestrictionEntity__int___, v12);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_OrderByDescending_RestrictionEntity__int___, v13);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_ThenBy_QuestRestrictionEntity__int___, v14);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_ThenBy_RestrictionEntity__int___, v15);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_ToArray_QuestRestrictionEntity___, v16);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_ToArray_RestrictionEntity___, v17);
    sub_1BCAFF8(&System_Func_QuestRestrictionEntity__int__TypeInfo, v18);
    sub_1BCAFF8(&System_Func_RestrictionEntity__int__TypeInfo, v19);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_QuestRestrictionEntity__Add__, v20);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_RestrictionEntity__Add__, v21);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_RestrictionEntity___ctor__, v22);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_QuestRestrictionEntity___ctor__, v23);
    sub_1BCAFF8(&System_Collections_Generic_List_QuestRestrictionEntity__TypeInfo, v24);
    sub_1BCAFF8(&System_Collections_Generic_List_RestrictionEntity__TypeInfo, v25);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26);
    sub_1BCAFF8(&Method_QuestRestrictionMaster___c__getRestrictionList_b__4_0__, v27);
    sub_1BCAFF8(&Method_QuestRestrictionMaster___c__getRestrictionList_b__4_1__, v28);
    sub_1BCAFF8(&Method_QuestRestrictionMaster___c__getRestrictionList_b__4_2__, v29);
    sub_1BCAFF8(&Method_QuestRestrictionMaster___c__getRestrictionList_b__4_3__, v30);
    sub_1BCAFF8(&QuestRestrictionMaster___c_TypeInfo, v31);
    byte_4B1CC59 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  v88 = (CGThumbnailListItem_o *)questRestrictionEntityList;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_RestrictionMaster___);
  if ( !this->fields.list )
    goto LABEL_50;
  v34 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_32635E8 *)Method_System_Collections_ObjectModel_Collection_QuestRestrictionEntity__get_Count__);
  v36 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_RestrictionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v36,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_RestrictionEntity___ctor__);
  v37 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_QuestRestrictionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v37,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_QuestRestrictionEntity___ctor__);
  if ( Count >= 1 )
  {
    v38 = 0;
    while ( 1 )
    {
      Instance = this->fields.list;
      if ( !Instance )
        break;
      Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                   (System_Collections_ObjectModel_Collection_T__o *)Instance,
                   v38,
                   (const MethodInfo_3263678 *)Method_System_Collections_ObjectModel_Collection_QuestRestrictionEntity__get_Item__);
      if ( !Instance )
        break;
      v39 = (Il2CppObject *)Instance;
      if ( *((_DWORD *)Instance + 4) == questId )
      {
        if ( !v34 )
          break;
        Instance = DataMasterBase_object__object__int___GetEntity(
                     v34,
                     *((_DWORD *)Instance + 6),
                     (const MethodInfo_32C7E00 *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__);
        if ( Instance )
        {
          klass_high = HIDWORD(v39[1].klass);
          v33 = (Il2CppClass *)Instance;
          if ( !klass_high || klass_high == phase )
          {
            if ( !v36 )
              break;
            items = v36->fields._items;
            v44 = Method_System_Collections_Generic_List_RestrictionEntity__Add__;
            ++v36->fields._version;
            if ( !items )
              break;
            size = v36->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v36,
                (Il2CppObject *)Instance,
                *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
            }
            else
            {
              v46 = &items->obj.klass + size;
              v36->fields._size = size + 1;
              v46[4] = v33;
              sub_1BCAF9C((CGThumbnailListItem_o *)(v46 + 4), (int32_t)v33, v40, v41);
            }
            if ( !v37 )
              break;
            v49 = v37->fields._items;
            v50 = Method_System_Collections_Generic_List_QuestRestrictionEntity__Add__;
            ++v37->fields._version;
            if ( !v49 )
              break;
            v51 = v37->fields._size;
            if ( (unsigned int)v51 >= v49->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v37,
                v39,
                *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
            }
            else
            {
              v52 = &v49->obj.klass + v51;
              v37->fields._size = v51 + 1;
              v52[4] = (Il2CppClass *)v39;
              sub_1BCAF9C((CGThumbnailListItem_o *)(v52 + 4), (int32_t)v39, v47, v48);
            }
          }
        }
      }
      if ( Count == ++v38 )
        goto LABEL_25;
    }
LABEL_50:
    sub_1BCB254(Instance, v33);
  }
LABEL_25:
  v53 = QuestRestrictionMaster___c_TypeInfo;
  if ( !QuestRestrictionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRestrictionMaster___c_TypeInfo);
    v53 = QuestRestrictionMaster___c_TypeInfo;
  }
  _9__4_0 = (System_Func_object__int__o *)v53->static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !v53->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v53);
      v53 = QuestRestrictionMaster___c_TypeInfo;
    }
    v55 = (Il2CppObject *)v53->static_fields->__9;
    _9__4_0 = (System_Func_object__int__o *)sub_1BCB244(System_Func_QuestRestrictionEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__4_0, v55, Method_QuestRestrictionMaster___c__getRestrictionList_b__4_0__, 0LL);
    static_fields = QuestRestrictionMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Func_QuestRestrictionEntity__int__o *)_9__4_0;
    sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__4_0, (int32_t)_9__4_0, v57, v58);
  }
  v59 = System_Linq_Enumerable__OrderByDescending_object__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v37,
          (System_Func_TSource__TKey__o *)_9__4_0,
          (const MethodInfo_30466C8 *)Method_System_Linq_Enumerable_OrderByDescending_QuestRestrictionEntity__int___);
  v60 = QuestRestrictionMaster___c_TypeInfo;
  v61 = v59;
  if ( !QuestRestrictionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRestrictionMaster___c_TypeInfo);
    v60 = QuestRestrictionMaster___c_TypeInfo;
  }
  _9__4_1 = (System_Func_object__int__o *)v60->static_fields->__9__4_1;
  if ( !_9__4_1 )
  {
    if ( !v60->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v60);
      v60 = QuestRestrictionMaster___c_TypeInfo;
    }
    v63 = (Il2CppObject *)v60->static_fields->__9;
    _9__4_1 = (System_Func_object__int__o *)sub_1BCB244(System_Func_QuestRestrictionEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__4_1, v63, Method_QuestRestrictionMaster___c__getRestrictionList_b__4_1__, 0LL);
    v64 = QuestRestrictionMaster___c_TypeInfo->static_fields;
    v64->__9__4_1 = (struct System_Func_QuestRestrictionEntity__int__o *)_9__4_1;
    sub_1BCAF9C((CGThumbnailListItem_o *)&v64->__9__4_1, (int32_t)_9__4_1, v65, v66);
  }
  v67 = System_Linq_Enumerable__ThenBy_object__int_(
          v61,
          (System_Func_TSource__TKey__o *)_9__4_1,
          (const MethodInfo_305668C *)Method_System_Linq_Enumerable_ThenBy_QuestRestrictionEntity__int___);
  v68 = QuestRestrictionMaster___c_TypeInfo;
  v69 = (System_Collections_Generic_IEnumerable_TSource__o *)v67;
  if ( !QuestRestrictionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRestrictionMaster___c_TypeInfo);
    v68 = QuestRestrictionMaster___c_TypeInfo;
  }
  _9__4_2 = (System_Func_object__int__o *)v68->static_fields->__9__4_2;
  if ( !_9__4_2 )
  {
    if ( !v68->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v68);
      v68 = QuestRestrictionMaster___c_TypeInfo;
    }
    v71 = (Il2CppObject *)v68->static_fields->__9;
    _9__4_2 = (System_Func_object__int__o *)sub_1BCB244(System_Func_RestrictionEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__4_2, v71, Method_QuestRestrictionMaster___c__getRestrictionList_b__4_2__, 0LL);
    v72 = QuestRestrictionMaster___c_TypeInfo->static_fields;
    v72->__9__4_2 = (struct System_Func_RestrictionEntity__int__o *)_9__4_2;
    sub_1BCAF9C((CGThumbnailListItem_o *)&v72->__9__4_2, (int32_t)_9__4_2, v73, v74);
  }
  v75 = System_Linq_Enumerable__OrderByDescending_object__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v36,
          (System_Func_TSource__TKey__o *)_9__4_2,
          (const MethodInfo_30466C8 *)Method_System_Linq_Enumerable_OrderByDescending_RestrictionEntity__int___);
  v76 = QuestRestrictionMaster___c_TypeInfo;
  v77 = v75;
  if ( !QuestRestrictionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRestrictionMaster___c_TypeInfo);
    v76 = QuestRestrictionMaster___c_TypeInfo;
  }
  _9__4_3 = (System_Func_object__int__o *)v76->static_fields->__9__4_3;
  if ( !_9__4_3 )
  {
    if ( !v76->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v76);
      v76 = QuestRestrictionMaster___c_TypeInfo;
    }
    v79 = (Il2CppObject *)v76->static_fields->__9;
    _9__4_3 = (System_Func_object__int__o *)sub_1BCB244(System_Func_RestrictionEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__4_3, v79, Method_QuestRestrictionMaster___c__getRestrictionList_b__4_3__, 0LL);
    v80 = QuestRestrictionMaster___c_TypeInfo->static_fields;
    v80->__9__4_3 = (struct System_Func_RestrictionEntity__int__o *)_9__4_3;
    sub_1BCAF9C((CGThumbnailListItem_o *)&v80->__9__4_3, (int32_t)_9__4_3, v81, v82);
  }
  v83 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                               v77,
                                                               (System_Func_TSource__TKey__o *)_9__4_3,
                                                               (const MethodInfo_305668C *)Method_System_Linq_Enumerable_ThenBy_RestrictionEntity__int___);
  v84 = System_Linq_Enumerable__ToArray_object_(
          v69,
          (const MethodInfo_30572C4 *)Method_System_Linq_Enumerable_ToArray_QuestRestrictionEntity___);
  v88->klass = (CGThumbnailListItem_c *)v84;
  sub_1BCAF9C(v88, (int32_t)v84, v85, v86);
  return (RestrictionEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                      v83,
                                      (const MethodInfo_30572C4 *)Method_System_Linq_Enumerable_ToArray_RestrictionEntity___);
}


void __fastcall QuestRestrictionMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B1CC5B & 1) == 0 )
  {
    sub_1BCAFF8(&QuestRestrictionMaster___c_TypeInfo, v1);
    byte_4B1CC5B = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(QuestRestrictionMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  QuestRestrictionMaster___c_TypeInfo->static_fields->__9 = (struct QuestRestrictionMaster___c_o *)v2;
  sub_1BCAF9C((CGThumbnailListItem_o *)QuestRestrictionMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall QuestRestrictionMaster___c___ctor(QuestRestrictionMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall QuestRestrictionMaster___c___getRestrictionList_b__3_0(
        QuestRestrictionMaster___c_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCB254(this, 0LL);
  return x->fields.priority;
}


int32_t __fastcall QuestRestrictionMaster___c___getRestrictionList_b__3_1(
        QuestRestrictionMaster___c_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCB254(this, 0LL);
  return x->fields.id;
}


int32_t __fastcall QuestRestrictionMaster___c___getRestrictionList_b__4_0(
        QuestRestrictionMaster___c_o *this,
        QuestRestrictionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCB254(this, 0LL);
  return x->fields.priority;
}


int32_t __fastcall QuestRestrictionMaster___c___getRestrictionList_b__4_1(
        QuestRestrictionMaster___c_o *this,
        QuestRestrictionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCB254(this, 0LL);
  return x->fields.restrictionId;
}


int32_t __fastcall QuestRestrictionMaster___c___getRestrictionList_b__4_2(
        QuestRestrictionMaster___c_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCB254(this, 0LL);
  return x->fields.priority;
}


int32_t __fastcall QuestRestrictionMaster___c___getRestrictionList_b__4_3(
        QuestRestrictionMaster___c_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCB254(this, 0LL);
  return x->fields.id;
}