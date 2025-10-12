void GrandGraphMaster___ctor(GrandGraphMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C37DF2 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_GrandGraphMaster__GrandGraphEntity__int___ctor__);
    byte_4C37DF2 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    549,
    (const MethodInfo_3394514 *)Method_DataMasterBase_GrandGraphMaster__GrandGraphEntity__int___ctor__);
}


GrandGraphEntity_array *GrandGraphMaster__GetEntitiesByParentClassBoardBaseId(
        GrandGraphMaster_o *this,
        int32_t parentClassBoardBaseId,
        const MethodInfo *method)
{
  __int64 v5; // x20
  System_Int32_array *Master_object; // x0
  GrandGraphEntity_array *result; // x0
  GrandGraphEntity_array *v8; // x21
  bool EntityList; // w8
  System_Collections_Generic_List_ClassBoardClassEntity__o *v10; // x21
  GrandGraphMaster___c_c *v11; // x0
  System_Func_object__object__o *_9__0_0; // x22
  Il2CppObject *v13; // x23
  struct GrandGraphMaster___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Collections_Generic_IEnumerable_TResult__o *v17; // x0
  GrandGraphMaster___c_c *v18; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x21
  System_Func_object__int__o *_9__0_1; // x22
  Il2CppObject *v21; // x23
  struct GrandGraphMaster___c_StaticFields *v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0
  GrandGraphMaster___c_c *v27; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x21
  System_Func_int__int__o *_9__0_2; // x22
  Il2CppObject *v30; // x23
  struct GrandGraphMaster___c_StaticFields *v31; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  System_Func_object__bool__o *v38; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x0
  System_Collections_Generic_List_ClassBoardClassEntity__o *entitys; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C37DF1 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_ClassBoardClassMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_OrderBy_int__int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_SelectMany_ClassBoardClassEntity__GrandGraphDetailEntity___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Select_GrandGraphDetailEntity__int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_GrandGraphEntity___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_GrandGraphEntity___);
    sub_1C32C20(&System_Func_GrandGraphEntity__bool__TypeInfo);
    sub_1C32C20(&System_Func_int__int__TypeInfo);
    sub_1C32C20(&System_Func_GrandGraphDetailEntity__int__TypeInfo);
    sub_1C32C20(&System_Func_ClassBoardClassEntity__IEnumerable_GrandGraphDetailEntity___TypeInfo);
    sub_1C32C20(&Method_GrandGraphMaster___c__GetEntitiesByParentClassBoardBaseId_b__0_0__);
    sub_1C32C20(&Method_GrandGraphMaster___c__GetEntitiesByParentClassBoardBaseId_b__0_1__);
    sub_1C32C20(&Method_GrandGraphMaster___c__GetEntitiesByParentClassBoardBaseId_b__0_2__);
    sub_1C32C20(&Method_GrandGraphMaster___c__DisplayClass0_0__GetEntitiesByParentClassBoardBaseId_b__3__);
    sub_1C32C20(&GrandGraphMaster___c__DisplayClass0_0_TypeInfo);
    sub_1C32C20(&GrandGraphMaster___c_TypeInfo);
    byte_4C37DF1 = 1;
  }
  entitys = 0;
  v5 = sub_1C32E6C(GrandGraphMaster___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_object )
    goto LABEL_32;
  result = (GrandGraphEntity_array *)ClassBoardBaseMaster__GetGrandClassBoardBaseEntity(
                                       (ClassBoardBaseMaster_o *)Master_object,
                                       parentClassBoardBaseId,
                                       0);
  if ( !result )
    return result;
  v8 = result;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
  if ( !Master_object )
    goto LABEL_32;
  EntityList = ClassBoardClassMaster__TryGetEntityList(
                 (ClassBoardClassMaster_o *)Master_object,
                 &entitys,
                 (int32_t)v8->bounds,
                 0);
  result = 0;
  if ( !EntityList )
    return result;
  v10 = entitys;
  v11 = GrandGraphMaster___c_TypeInfo;
  if ( !GrandGraphMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GrandGraphMaster___c_TypeInfo);
    v11 = GrandGraphMaster___c_TypeInfo;
  }
  _9__0_0 = (System_Func_object__object__o *)v11->static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = GrandGraphMaster___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v11->static_fields->__9;
    _9__0_0 = (System_Func_object__object__o *)sub_1C32E6C(System_Func_ClassBoardClassEntity__IEnumerable_GrandGraphDetailEntity___TypeInfo);
    System_Func_object__object____ctor(
      _9__0_0,
      v13,
      Method_GrandGraphMaster___c__GetEntitiesByParentClassBoardBaseId_b__0_0__,
      0);
    static_fields = GrandGraphMaster___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = (struct System_Func_ClassBoardClassEntity__IEnumerable_GrandGraphDetailEntity___o *)_9__0_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__0_0, (int32_t)_9__0_0, v15, v16);
  }
  v17 = System_Linq_Enumerable__SelectMany_object__object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v10,
          (System_Func_TSource__IEnumerable_TResult___o *)_9__0_0,
          (const MethodInfo_31168AC *)Method_System_Linq_Enumerable_SelectMany_ClassBoardClassEntity__GrandGraphDetailEntity___);
  v18 = GrandGraphMaster___c_TypeInfo;
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)v17;
  if ( !GrandGraphMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GrandGraphMaster___c_TypeInfo);
    v18 = GrandGraphMaster___c_TypeInfo;
  }
  _9__0_1 = (System_Func_object__int__o *)v18->static_fields->__9__0_1;
  if ( !_9__0_1 )
  {
    if ( !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      v18 = GrandGraphMaster___c_TypeInfo;
    }
    v21 = (Il2CppObject *)v18->static_fields->__9;
    _9__0_1 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_GrandGraphDetailEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__0_1,
      v21,
      Method_GrandGraphMaster___c__GetEntitiesByParentClassBoardBaseId_b__0_1__,
      0);
    v22 = GrandGraphMaster___c_TypeInfo->static_fields;
    v22->__9__0_1 = (struct System_Func_GrandGraphDetailEntity__int__o *)_9__0_1;
    sub_1C32BC4((CGThumbnailListItem_o *)&v22->__9__0_1, (int32_t)_9__0_1, v23, v24);
  }
  v25 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v19,
                                                               (System_Func_TSource__TResult__o *)_9__0_1,
                                                               (const MethodInfo_31131E0 *)Method_System_Linq_Enumerable_Select_GrandGraphDetailEntity__int___);
  v26 = System_Linq_Enumerable__Distinct_int_(
          v25,
          (const MethodInfo_31005DC *)Method_System_Linq_Enumerable_Distinct_int___);
  v27 = GrandGraphMaster___c_TypeInfo;
  v28 = v26;
  if ( !GrandGraphMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GrandGraphMaster___c_TypeInfo);
    v27 = GrandGraphMaster___c_TypeInfo;
  }
  _9__0_2 = v27->static_fields->__9__0_2;
  if ( !_9__0_2 )
  {
    if ( !v27->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v27);
      v27 = GrandGraphMaster___c_TypeInfo;
    }
    v30 = (Il2CppObject *)v27->static_fields->__9;
    _9__0_2 = (System_Func_int__int__o *)sub_1C32E6C(System_Func_int__int__TypeInfo);
    System_Func_int__int____ctor(
      _9__0_2,
      v30,
      Method_GrandGraphMaster___c__GetEntitiesByParentClassBoardBaseId_b__0_2__,
      0);
    v31 = GrandGraphMaster___c_TypeInfo->static_fields;
    v31->__9__0_2 = _9__0_2;
    sub_1C32BC4((CGThumbnailListItem_o *)&v31->__9__0_2, (int32_t)_9__0_2, v32, v33);
  }
  v34 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_int__int_(
                                                               v28,
                                                               (System_Func_TSource__TKey__o *)_9__0_2,
                                                               (const MethodInfo_310C994 *)Method_System_Linq_Enumerable_OrderBy_int__int___);
  Master_object = System_Linq_Enumerable__ToArray_int_(
                    v34,
                    (const MethodInfo_311C8F4 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !v5 )
LABEL_32:
    sub_1C32E7C(Master_object);
  *(_QWORD *)(v5 + 16) = Master_object;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 16), (int32_t)Master_object, v35, v36);
  list = this->fields.list;
  v38 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_GrandGraphEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v38,
    (Il2CppObject *)v5,
    Method_GrandGraphMaster___c__DisplayClass0_0__GetEntitiesByParentClassBoardBaseId_b__3__,
    0);
  v39 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__bool__o *)v38,
          (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_GrandGraphEntity___);
  return (GrandGraphEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                     v39,
                                     (const MethodInfo_311CA8C *)Method_System_Linq_Enumerable_ToArray_GrandGraphEntity___);
}


void GrandGraphMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C37DF3 & 1) == 0 )
  {
    sub_1C32C20(&GrandGraphMaster___c_TypeInfo);
    byte_4C37DF3 = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(GrandGraphMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  GrandGraphMaster___c_TypeInfo->static_fields->__9 = (struct GrandGraphMaster___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)GrandGraphMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
  const MethodInfo *v5; // x2

  if ( (byte_4C37DF4 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_GrandGraphDetailMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    byte_4C37DF4 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_GrandGraphDetailMaster___);
  if ( !v || !Master_object )
    sub_1C32E7C(Master_object);
  return (System_Collections_Generic_IEnumerable_GrandGraphDetailEntity__o *)GrandGraphDetailMaster__GetGrandGraphDetailEntitiesFromGrandClassId(
                                                                               (GrandGraphDetailMaster_o *)Master_object,
                                                                               v->fields.classId,
                                                                               v5);
}


int32_t GrandGraphMaster___c___GetEntitiesByParentClassBoardBaseId_b__0_1(
        GrandGraphMaster___c_o *this,
        GrandGraphDetailEntity_o *v,
        const MethodInfo *method)
{
  if ( !v )
    sub_1C32E7C(this);
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
  if ( (byte_4C37DF5 & 1) == 0 )
  {
    this = (GrandGraphMaster___c__DisplayClass0_0_o *)sub_1C32C20(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4C37DF5 = 1;
  }
  if ( !v )
    sub_1C32E7C(this);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.grandGraphIds,
           v->fields.id,
           (const MethodInfo_30FA3A0 *)Method_System_Linq_Enumerable_Contains_int___);
}