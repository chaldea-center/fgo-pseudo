void GrandGraphMaster___ctor(GrandGraphMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D30E26 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_GrandGraphMaster__GrandGraphEntity__int___ctor__);
    byte_4D30E26 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    549,
    (const MethodInfo_3460CFC *)Method_DataMasterBase_GrandGraphMaster__GrandGraphEntity__int___ctor__);
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
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v22; // x0
  GrandGraphMaster___c_c *v23; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x21
  System_Func_object__int__o *_9__0_1; // x22
  Il2CppObject *v26; // x23
  struct GrandGraphMaster___c_StaticFields *v27; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x0
  GrandGraphMaster___c_c *v36; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x21
  System_Func_int__int__o *_9__0_2; // x22
  Il2CppObject *v39; // x23
  struct GrandGraphMaster___c_StaticFields *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v47; // x0
  int32_t v48; // w2
  int32_t v49; // w3
  System_String_o *v50; // x4
  int32_t v51; // w5
  int64_t v52; // x6
  System_String_o *v53; // x7
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  System_Func_object__bool__o *v55; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v56; // x0
  System_Collections_Generic_List_ClassBoardClassEntity__o *entitys; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D30E25 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_ClassBoardClassMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_OrderBy_int__int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_SelectMany_ClassBoardClassEntity__GrandGraphDetailEntity___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Select_GrandGraphDetailEntity__int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_GrandGraphEntity___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Where_GrandGraphEntity___);
    sub_1C93AD4(&System_Func_GrandGraphEntity__bool__TypeInfo);
    sub_1C93AD4(&System_Func_int__int__TypeInfo);
    sub_1C93AD4(&System_Func_GrandGraphDetailEntity__int__TypeInfo);
    sub_1C93AD4(&System_Func_ClassBoardClassEntity__IEnumerable_GrandGraphDetailEntity___TypeInfo);
    sub_1C93AD4(&Method_GrandGraphMaster___c__GetEntitiesByParentClassBoardBaseId_b__0_0__);
    sub_1C93AD4(&Method_GrandGraphMaster___c__GetEntitiesByParentClassBoardBaseId_b__0_1__);
    sub_1C93AD4(&Method_GrandGraphMaster___c__GetEntitiesByParentClassBoardBaseId_b__0_2__);
    sub_1C93AD4(&Method_GrandGraphMaster___c__DisplayClass0_0__GetEntitiesByParentClassBoardBaseId_b__3__);
    sub_1C93AD4(&GrandGraphMaster___c__DisplayClass0_0_TypeInfo);
    sub_1C93AD4(&GrandGraphMaster___c_TypeInfo);
    byte_4D30E25 = 1;
  }
  entitys = 0;
  v5 = sub_1C93D20(GrandGraphMaster___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
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
  Master_object = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
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
    _9__0_0 = (System_Func_object__object__o *)sub_1C93D20(System_Func_ClassBoardClassEntity__IEnumerable_GrandGraphDetailEntity___TypeInfo);
    System_Func_object__object____ctor(
      _9__0_0,
      v14,
      Method_GrandGraphMaster___c__GetEntitiesByParentClassBoardBaseId_b__0_0__,
      0);
    static_fields = GrandGraphMaster___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = (struct System_Func_ClassBoardClassEntity__IEnumerable_GrandGraphDetailEntity___o *)_9__0_0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->__9__0_0, (int32_t)_9__0_0, v16, v17, v18, v19, v20, v21);
  }
  v22 = System_Linq_Enumerable__SelectMany_object__object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v11,
          (System_Func_TSource__IEnumerable_TResult___o *)_9__0_0,
          (const MethodInfo_31DD3D0 *)Method_System_Linq_Enumerable_SelectMany_ClassBoardClassEntity__GrandGraphDetailEntity___);
  v23 = GrandGraphMaster___c_TypeInfo;
  v24 = (System_Collections_Generic_IEnumerable_TSource__o *)v22;
  if ( !GrandGraphMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GrandGraphMaster___c_TypeInfo);
    v23 = GrandGraphMaster___c_TypeInfo;
  }
  _9__0_1 = (System_Func_object__int__o *)v23->static_fields->__9__0_1;
  if ( !_9__0_1 )
  {
    if ( !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      v23 = GrandGraphMaster___c_TypeInfo;
    }
    v26 = (Il2CppObject *)v23->static_fields->__9;
    _9__0_1 = (System_Func_object__int__o *)sub_1C93D20(System_Func_GrandGraphDetailEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__0_1,
      v26,
      Method_GrandGraphMaster___c__GetEntitiesByParentClassBoardBaseId_b__0_1__,
      0);
    v27 = GrandGraphMaster___c_TypeInfo->static_fields;
    v27->__9__0_1 = (struct System_Func_GrandGraphDetailEntity__int__o *)_9__0_1;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v27->__9__0_1, (int32_t)_9__0_1, v28, v29, v30, v31, v32, v33);
  }
  v34 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v24,
                                                               (System_Func_TSource__TResult__o *)_9__0_1,
                                                               (const MethodInfo_31DA264 *)Method_System_Linq_Enumerable_Select_GrandGraphDetailEntity__int___);
  v35 = System_Linq_Enumerable__Distinct_int_(
          v34,
          (const MethodInfo_31C72A8 *)Method_System_Linq_Enumerable_Distinct_int___);
  v36 = GrandGraphMaster___c_TypeInfo;
  v37 = v35;
  if ( !GrandGraphMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GrandGraphMaster___c_TypeInfo);
    v36 = GrandGraphMaster___c_TypeInfo;
  }
  _9__0_2 = v36->static_fields->__9__0_2;
  if ( !_9__0_2 )
  {
    if ( !v36->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v36);
      v36 = GrandGraphMaster___c_TypeInfo;
    }
    v39 = (Il2CppObject *)v36->static_fields->__9;
    _9__0_2 = (System_Func_int__int__o *)sub_1C93D20(System_Func_int__int__TypeInfo);
    System_Func_int__int____ctor(
      _9__0_2,
      v39,
      Method_GrandGraphMaster___c__GetEntitiesByParentClassBoardBaseId_b__0_2__,
      0);
    v40 = GrandGraphMaster___c_TypeInfo->static_fields;
    v40->__9__0_2 = _9__0_2;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v40->__9__0_2, (int32_t)_9__0_2, v41, v42, v43, v44, v45, v46);
  }
  v47 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_int__int_(
                                                               v37,
                                                               (System_Func_TSource__TKey__o *)_9__0_2,
                                                               (const MethodInfo_31D3720 *)Method_System_Linq_Enumerable_OrderBy_int__int___);
  Master_object = System_Linq_Enumerable__ToArray_int_(
                    v47,
                    (const MethodInfo_31E3B80 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !v5 )
LABEL_32:
    sub_1C93D2C(Master_object, v7);
  *(_QWORD *)(v5 + 16) = Master_object;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)Master_object, v48, v49, v50, v51, v52, v53);
  list = this->fields.list;
  v55 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_GrandGraphEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v55,
    (Il2CppObject *)v5,
    Method_GrandGraphMaster___c__DisplayClass0_0__GetEntitiesByParentClassBoardBaseId_b__3__,
    0);
  v56 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__bool__o *)v55,
          (const MethodInfo_31EB2BC *)Method_System_Linq_Enumerable_Where_GrandGraphEntity___);
  return (GrandGraphEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                     v56,
                                     (const MethodInfo_31E3D18 *)Method_System_Linq_Enumerable_ToArray_GrandGraphEntity___);
}


void GrandGraphMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D30E27 & 1) == 0 )
  {
    sub_1C93AD4(&GrandGraphMaster___c_TypeInfo);
    byte_4D30E27 = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(GrandGraphMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  GrandGraphMaster___c_TypeInfo->static_fields->__9 = (struct GrandGraphMaster___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)GrandGraphMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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

  if ( (byte_4D30E28 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_GrandGraphDetailMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    byte_4D30E28 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_GrandGraphDetailMaster___);
  if ( !v || !Master_object )
    sub_1C93D2C(Master_object, v5);
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
    sub_1C93D2C(this, 0);
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
  if ( (byte_4D30E29 & 1) == 0 )
  {
    this = (GrandGraphMaster___c__DisplayClass0_0_o *)sub_1C93AD4(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4D30E29 = 1;
  }
  if ( !v )
    sub_1C93D2C(this, v);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.grandGraphIds,
           v->fields.id,
           (const MethodInfo_31C106C *)Method_System_Linq_Enumerable_Contains_int___);
}