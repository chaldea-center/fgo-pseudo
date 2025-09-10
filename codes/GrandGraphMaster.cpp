void GrandGraphMaster___ctor(GrandGraphMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C27611 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_GrandGraphMaster__GrandGraphEntity__int___ctor__);
    byte_4C27611 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    549,
    (const MethodInfo_3385A74 *)Method_DataMasterBase_GrandGraphMaster__GrandGraphEntity__int___ctor__);
}


GrandGraphEntity_array *GrandGraphMaster__GetEntitiesByParentClassBoardBaseId(
        GrandGraphMaster_o *this,
        int32_t parentClassBoardBaseId,
        const MethodInfo *method)
{
  __int64 v5; // x20
  System_Int32_array *Master_object; // x0
  __int64 v7; // x1
  GrandGraphEntity_array *result; // x0
  GrandGraphEntity_array *v9; // x21
  bool EntityList; // w8
  System_Collections_Generic_List_ClassBoardClassEntity__o *v11; // x21
  GrandGraphMaster___c_c *v12; // x0
  System_Func_object__object__o *_9__0_0; // x22
  Il2CppObject *v14; // x23
  struct GrandGraphMaster___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Collections_Generic_IEnumerable_TResult__o *v18; // x0
  GrandGraphMaster___c_c *v19; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x21
  System_Func_object__int__o *_9__0_1; // x22
  Il2CppObject *v22; // x23
  struct GrandGraphMaster___c_StaticFields *v23; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0
  GrandGraphMaster___c_c *v28; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x21
  System_Func_int__int__o *_9__0_2; // x22
  Il2CppObject *v31; // x23
  struct GrandGraphMaster___c_StaticFields *v32; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  System_Func_object__bool__o *v39; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x0
  System_Collections_Generic_List_ClassBoardClassEntity__o *entitys; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C27610 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ClassBoardClassMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_OrderBy_int__int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_SelectMany_ClassBoardClassEntity__GrandGraphDetailEntity___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Select_GrandGraphDetailEntity__int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToArray_GrandGraphEntity___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Where_GrandGraphEntity___);
    sub_1C2D490(&System_Func_GrandGraphEntity__bool__TypeInfo);
    sub_1C2D490(&System_Func_int__int__TypeInfo);
    sub_1C2D490(&System_Func_GrandGraphDetailEntity__int__TypeInfo);
    sub_1C2D490(&System_Func_ClassBoardClassEntity__IEnumerable_GrandGraphDetailEntity___TypeInfo);
    sub_1C2D490(&Method_GrandGraphMaster___c__GetEntitiesByParentClassBoardBaseId_b__0_0__);
    sub_1C2D490(&Method_GrandGraphMaster___c__GetEntitiesByParentClassBoardBaseId_b__0_1__);
    sub_1C2D490(&Method_GrandGraphMaster___c__GetEntitiesByParentClassBoardBaseId_b__0_2__);
    sub_1C2D490(&Method_GrandGraphMaster___c__DisplayClass0_0__GetEntitiesByParentClassBoardBaseId_b__3__);
    sub_1C2D490(&GrandGraphMaster___c__DisplayClass0_0_TypeInfo);
    sub_1C2D490(&GrandGraphMaster___c_TypeInfo);
    byte_4C27610 = 1;
  }
  entitys = 0;
  v5 = sub_1C2D6DC(GrandGraphMaster___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_object )
    goto LABEL_32;
  result = (GrandGraphEntity_array *)ClassBoardBaseMaster__GetGrandClassBoardBaseEntity(
                                       (ClassBoardBaseMaster_o *)Master_object,
                                       parentClassBoardBaseId,
                                       0);
  if ( !result )
    return result;
  v9 = result;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
  if ( !Master_object )
    goto LABEL_32;
  EntityList = ClassBoardClassMaster__TryGetEntityList(
                 (ClassBoardClassMaster_o *)Master_object,
                 &entitys,
                 (int32_t)v9->bounds,
                 0);
  result = 0;
  if ( !EntityList )
    return result;
  v11 = entitys;
  v12 = GrandGraphMaster___c_TypeInfo;
  if ( !GrandGraphMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GrandGraphMaster___c_TypeInfo);
    v12 = GrandGraphMaster___c_TypeInfo;
  }
  _9__0_0 = (System_Func_object__object__o *)v12->static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = GrandGraphMaster___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v12->static_fields->__9;
    _9__0_0 = (System_Func_object__object__o *)sub_1C2D6DC(System_Func_ClassBoardClassEntity__IEnumerable_GrandGraphDetailEntity___TypeInfo);
    System_Func_object__object____ctor(
      _9__0_0,
      v14,
      Method_GrandGraphMaster___c__GetEntitiesByParentClassBoardBaseId_b__0_0__,
      0);
    static_fields = GrandGraphMaster___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = (struct System_Func_ClassBoardClassEntity__IEnumerable_GrandGraphDetailEntity___o *)_9__0_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__0_0, (int32_t)_9__0_0, v16, v17);
  }
  v18 = System_Linq_Enumerable__SelectMany_object__object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v11,
          (System_Func_TSource__IEnumerable_TResult___o *)_9__0_0,
          (const MethodInfo_3107E0C *)Method_System_Linq_Enumerable_SelectMany_ClassBoardClassEntity__GrandGraphDetailEntity___);
  v19 = GrandGraphMaster___c_TypeInfo;
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)v18;
  if ( !GrandGraphMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GrandGraphMaster___c_TypeInfo);
    v19 = GrandGraphMaster___c_TypeInfo;
  }
  _9__0_1 = (System_Func_object__int__o *)v19->static_fields->__9__0_1;
  if ( !_9__0_1 )
  {
    if ( !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      v19 = GrandGraphMaster___c_TypeInfo;
    }
    v22 = (Il2CppObject *)v19->static_fields->__9;
    _9__0_1 = (System_Func_object__int__o *)sub_1C2D6DC(System_Func_GrandGraphDetailEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__0_1,
      v22,
      Method_GrandGraphMaster___c__GetEntitiesByParentClassBoardBaseId_b__0_1__,
      0);
    v23 = GrandGraphMaster___c_TypeInfo->static_fields;
    v23->__9__0_1 = (struct System_Func_GrandGraphDetailEntity__int__o *)_9__0_1;
    sub_1C2D434((CGThumbnailListItem_o *)&v23->__9__0_1, (int32_t)_9__0_1, v24, v25);
  }
  v26 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v20,
                                                               (System_Func_TSource__TResult__o *)_9__0_1,
                                                               (const MethodInfo_3104740 *)Method_System_Linq_Enumerable_Select_GrandGraphDetailEntity__int___);
  v27 = System_Linq_Enumerable__Distinct_int_(
          v26,
          (const MethodInfo_30F1B3C *)Method_System_Linq_Enumerable_Distinct_int___);
  v28 = GrandGraphMaster___c_TypeInfo;
  v29 = v27;
  if ( !GrandGraphMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GrandGraphMaster___c_TypeInfo);
    v28 = GrandGraphMaster___c_TypeInfo;
  }
  _9__0_2 = v28->static_fields->__9__0_2;
  if ( !_9__0_2 )
  {
    if ( !v28->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v28);
      v28 = GrandGraphMaster___c_TypeInfo;
    }
    v31 = (Il2CppObject *)v28->static_fields->__9;
    _9__0_2 = (System_Func_int__int__o *)sub_1C2D6DC(System_Func_int__int__TypeInfo);
    System_Func_int__int____ctor(
      _9__0_2,
      v31,
      Method_GrandGraphMaster___c__GetEntitiesByParentClassBoardBaseId_b__0_2__,
      0);
    v32 = GrandGraphMaster___c_TypeInfo->static_fields;
    v32->__9__0_2 = _9__0_2;
    sub_1C2D434((CGThumbnailListItem_o *)&v32->__9__0_2, (int32_t)_9__0_2, v33, v34);
  }
  v35 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_int__int_(
                                                               v29,
                                                               (System_Func_TSource__TKey__o *)_9__0_2,
                                                               (const MethodInfo_30FDEF4 *)Method_System_Linq_Enumerable_OrderBy_int__int___);
  Master_object = System_Linq_Enumerable__ToArray_int_(
                    v35,
                    (const MethodInfo_310DE54 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !v5 )
LABEL_32:
    sub_1C2D6EC(Master_object, v7);
  *(_QWORD *)(v5 + 16) = Master_object;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), (int32_t)Master_object, v36, v37);
  list = this->fields.list;
  v39 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_GrandGraphEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v39,
    (Il2CppObject *)v5,
    Method_GrandGraphMaster___c__DisplayClass0_0__GetEntitiesByParentClassBoardBaseId_b__3__,
    0);
  v40 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__bool__o *)v39,
          (const MethodInfo_3115108 *)Method_System_Linq_Enumerable_Where_GrandGraphEntity___);
  return (GrandGraphEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                     v40,
                                     (const MethodInfo_310DFEC *)Method_System_Linq_Enumerable_ToArray_GrandGraphEntity___);
}


void GrandGraphMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C27612 & 1) == 0 )
  {
    sub_1C2D490(&GrandGraphMaster___c_TypeInfo);
    byte_4C27612 = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(GrandGraphMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  GrandGraphMaster___c_TypeInfo->static_fields->__9 = (struct GrandGraphMaster___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)GrandGraphMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void GrandGraphMaster___c___ctor(GrandGraphMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_Collections_Generic_IEnumerable_GrandGraphDetailEntity__o *GrandGraphMaster___c___GetEntitiesByParentClassBoardBaseId_b__0_0(
        GrandGraphMaster___c_o *this,
        ClassBoardClassEntity_o *v,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4C27613 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_GrandGraphDetailMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    byte_4C27613 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_GrandGraphDetailMaster___);
  if ( !v || !Master_object )
    sub_1C2D6EC(Master_object, v5);
  return (System_Collections_Generic_IEnumerable_GrandGraphDetailEntity__o *)GrandGraphDetailMaster__GetGrandGraphDetailEntitiesFromGrandClassId(
                                                                               (GrandGraphDetailMaster_o *)Master_object,
                                                                               v->fields.classId,
                                                                               v6);
}


int32_t GrandGraphMaster___c___GetEntitiesByParentClassBoardBaseId_b__0_1(
        GrandGraphMaster___c_o *this,
        GrandGraphDetailEntity_o *v,
        const MethodInfo *method)
{
  if ( !v )
    sub_1C2D6EC(this, 0);
  return v->fields.grandGraphId;
}


int32_t GrandGraphMaster___c___GetEntitiesByParentClassBoardBaseId_b__0_2(
        GrandGraphMaster___c_o *this,
        int32_t v,
        const MethodInfo *method)
{
  return v;
}


void GrandGraphMaster___c__DisplayClass0_0___ctor(
        GrandGraphMaster___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool GrandGraphMaster___c__DisplayClass0_0___GetEntitiesByParentClassBoardBaseId_b__3(
        GrandGraphMaster___c__DisplayClass0_0_o *this,
        GrandGraphEntity_o *v,
        const MethodInfo *method)
{
  GrandGraphMaster___c__DisplayClass0_0_o *v4; // x20

  v4 = this;
  if ( (byte_4C27614 & 1) == 0 )
  {
    this = (GrandGraphMaster___c__DisplayClass0_0_o *)sub_1C2D490(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4C27614 = 1;
  }
  if ( !v )
    sub_1C2D6EC(this, v);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.grandGraphIds,
           v->fields.id,
           (const MethodInfo_30EB900 *)Method_System_Linq_Enumerable_Contains_int___);
}