void GrandGraphMaster___ctor(GrandGraphMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5970CB7 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_GrandGraphMaster__GrandGraphEntity__int___ctor__);
    byte_5970CB7 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    551,
    (const MethodInfo_3F0E6E0 *)Method_DataMasterBase_GrandGraphMaster__GrandGraphEntity__int___ctor__);
}


GrandGraphEntity_array *GrandGraphMaster__GetEntitiesByParentClassBoardBaseId(
        GrandGraphMaster_o *this,
        int32_t parentClassBoardBaseId,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x1
  System_Int32_array *Master_object; // x0
  __int64 v8; // x1
  GrandGraphEntity_array *result; // x0
  __int64 v10; // x1
  GrandGraphEntity_array *v11; // x21
  __int64 v12; // x1
  bool EntityList; // w8
  System_Collections_Generic_List_ClassBoardClassEntity__o *v14; // x21
  GrandGraphMaster___c_c *v15; // x0
  struct GrandGraphMaster___c_StaticFields *static_fields; // x8
  System_Func_object__object__o *_9__0_0; // x22
  Il2CppObject *v18; // x23
  struct GrandGraphMaster___c_StaticFields *v19; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  System_Collections_Generic_IEnumerable_TResult__o *v26; // x0
  __int64 v27; // x1
  GrandGraphMaster___c_c *v28; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x21
  struct GrandGraphMaster___c_StaticFields *v30; // x9
  System_Func_object__int__o *_9__0_1; // x22
  Il2CppObject *v32; // x23
  struct GrandGraphMaster___c_StaticFields *v33; // x0
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v41; // x0
  __int64 v42; // x1
  GrandGraphMaster___c_c *v43; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x21
  struct GrandGraphMaster___c_StaticFields *v45; // x9
  System_Func_int__int__o *_9__0_2; // x22
  Il2CppObject *v47; // x23
  struct GrandGraphMaster___c_StaticFields *v48; // x0
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v55; // x0
  System_String_o *v56; // x2
  System_String_o *v57; // x3
  int32_t v58; // w4
  int32_t v59; // w5
  bool v60; // w6
  bool v61; // w7
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  System_Func_object__bool__o *v63; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v64; // x0
  System_Collections_Generic_List_ClassBoardClassEntity__o *entitys; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_5970CB6 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ClassBoardClassMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_OrderBy_int__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_SelectMany_ClassBoardClassEntity__GrandGraphDetailEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_GrandGraphDetailEntity__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_GrandGraphEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_GrandGraphEntity___);
    sub_2213A60(&System_Func_GrandGraphEntity__bool__TypeInfo);
    sub_2213A60(&System_Func_int__int__TypeInfo);
    sub_2213A60(&System_Func_GrandGraphDetailEntity__int__TypeInfo);
    sub_2213A60(&System_Func_ClassBoardClassEntity__IEnumerable_GrandGraphDetailEntity___TypeInfo);
    sub_2213A60(&Method_GrandGraphMaster___c__GetEntitiesByParentClassBoardBaseId_b__0_0__);
    sub_2213A60(&Method_GrandGraphMaster___c__GetEntitiesByParentClassBoardBaseId_b__0_1__);
    sub_2213A60(&Method_GrandGraphMaster___c__GetEntitiesByParentClassBoardBaseId_b__0_2__);
    sub_2213A60(&Method_GrandGraphMaster___c__DisplayClass0_0__GetEntitiesByParentClassBoardBaseId_b__3__);
    sub_2213A60(&GrandGraphMaster___c__DisplayClass0_0_TypeInfo);
    sub_2213A60(&GrandGraphMaster___c_TypeInfo);
    byte_5970CB6 = 1;
  }
  entitys = 0;
  v5 = sub_2213CCC(GrandGraphMaster___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v6);
  Master_object = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_object )
    goto LABEL_32;
  result = (GrandGraphEntity_array *)ClassBoardBaseMaster__GetGrandClassBoardBaseEntity(
                                       (ClassBoardBaseMaster_o *)Master_object,
                                       parentClassBoardBaseId,
                                       0);
  if ( !result )
    return result;
  v11 = result;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v10);
  Master_object = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
  if ( !Master_object )
    goto LABEL_32;
  EntityList = ClassBoardClassMaster__TryGetEntityList(
                 (ClassBoardClassMaster_o *)Master_object,
                 &entitys,
                 (int32_t)v11->bounds,
                 0);
  result = 0;
  if ( !EntityList )
    return result;
  v14 = entitys;
  v15 = GrandGraphMaster___c_TypeInfo;
  if ( !*(&GrandGraphMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(GrandGraphMaster___c_TypeInfo, v12);
    v15 = GrandGraphMaster___c_TypeInfo;
  }
  static_fields = v15->static_fields;
  _9__0_0 = (System_Func_object__object__o *)static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !*(&v15->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v15, v12);
      static_fields = GrandGraphMaster___c_TypeInfo->static_fields;
    }
    v18 = (Il2CppObject *)static_fields->__9;
    _9__0_0 = (System_Func_object__object__o *)sub_2213CCC(System_Func_ClassBoardClassEntity__IEnumerable_GrandGraphDetailEntity___TypeInfo);
    System_Func_object__object____ctor(
      _9__0_0,
      v18,
      Method_GrandGraphMaster___c__GetEntitiesByParentClassBoardBaseId_b__0_0__,
      0);
    v19 = GrandGraphMaster___c_TypeInfo->static_fields;
    v19->__9__0_0 = (struct System_Func_ClassBoardClassEntity__IEnumerable_GrandGraphDetailEntity___o *)_9__0_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v19->__9__0_0, (int32_t)_9__0_0, v20, v21, v22, v23, v24, v25);
  }
  v26 = System_Linq_Enumerable__SelectMany_object__object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v14,
          (System_Func_TSource__IEnumerable_TResult___o *)_9__0_0,
          (const MethodInfo_3893CAC *)Method_System_Linq_Enumerable_SelectMany_ClassBoardClassEntity__GrandGraphDetailEntity___);
  v28 = GrandGraphMaster___c_TypeInfo;
  v29 = (System_Collections_Generic_IEnumerable_TSource__o *)v26;
  if ( !*(&GrandGraphMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(GrandGraphMaster___c_TypeInfo, v27);
    v28 = GrandGraphMaster___c_TypeInfo;
  }
  v30 = v28->static_fields;
  _9__0_1 = (System_Func_object__int__o *)v30->__9__0_1;
  if ( !_9__0_1 )
  {
    if ( !*(&v28->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v28, v27);
      v30 = GrandGraphMaster___c_TypeInfo->static_fields;
    }
    v32 = (Il2CppObject *)v30->__9;
    _9__0_1 = (System_Func_object__int__o *)sub_2213CCC(System_Func_GrandGraphDetailEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__0_1,
      v32,
      Method_GrandGraphMaster___c__GetEntitiesByParentClassBoardBaseId_b__0_1__,
      0);
    v33 = GrandGraphMaster___c_TypeInfo->static_fields;
    v33->__9__0_1 = (struct System_Func_GrandGraphDetailEntity__int__o *)_9__0_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v33->__9__0_1, (int32_t)_9__0_1, v34, v35, v36, v37, v38, v39);
  }
  v40 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v29,
                                                               (System_Func_TSource__TResult__o *)_9__0_1,
                                                               (const MethodInfo_389085C *)Method_System_Linq_Enumerable_Select_GrandGraphDetailEntity__int___);
  v41 = System_Linq_Enumerable__Distinct_int_(
          v40,
          (const MethodInfo_387C5EC *)Method_System_Linq_Enumerable_Distinct_int___);
  v43 = GrandGraphMaster___c_TypeInfo;
  v44 = v41;
  if ( !*(&GrandGraphMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(GrandGraphMaster___c_TypeInfo, v42);
    v43 = GrandGraphMaster___c_TypeInfo;
  }
  v45 = v43->static_fields;
  _9__0_2 = v45->__9__0_2;
  if ( !_9__0_2 )
  {
    if ( !*(&v43->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v43, v42);
      v45 = GrandGraphMaster___c_TypeInfo->static_fields;
    }
    v47 = (Il2CppObject *)v45->__9;
    _9__0_2 = (System_Func_int__int__o *)sub_2213CCC(System_Func_int__int__TypeInfo);
    System_Func_int__int____ctor(
      _9__0_2,
      v47,
      Method_GrandGraphMaster___c__GetEntitiesByParentClassBoardBaseId_b__0_2__,
      0);
    v48 = GrandGraphMaster___c_TypeInfo->static_fields;
    v48->__9__0_2 = _9__0_2;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v48->__9__0_2, (int32_t)_9__0_2, v49, v50, v51, v52, v53, v54);
  }
  v55 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_int__int_(
                                                               v44,
                                                               (System_Func_TSource__TKey__o *)_9__0_2,
                                                               (const MethodInfo_3888900 *)Method_System_Linq_Enumerable_OrderBy_int__int___);
  Master_object = System_Linq_Enumerable__ToArray_int_(
                    v55,
                    (const MethodInfo_389B994 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !v5 )
LABEL_32:
    sub_2213CDC(Master_object, v8);
  *(_QWORD *)(v5 + 16) = Master_object;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)Master_object, v56, v57, v58, v59, v60, v61);
  list = this->fields.list;
  v63 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_GrandGraphEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v63,
    (Il2CppObject *)v5,
    Method_GrandGraphMaster___c__DisplayClass0_0__GetEntitiesByParentClassBoardBaseId_b__3__,
    0);
  v64 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__bool__o *)v63,
          (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_GrandGraphEntity___);
  return (GrandGraphEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                     v64,
                                     (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_GrandGraphEntity___);
}


void GrandGraphMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5970CB8 & 1) == 0 )
  {
    sub_2213A60(&GrandGraphMaster___c_TypeInfo);
    byte_5970CB8 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(GrandGraphMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  GrandGraphMaster___c_TypeInfo->static_fields->__9 = (struct GrandGraphMaster___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)GrandGraphMaster___c_TypeInfo->static_fields,
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

  if ( (byte_5970CB9 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_GrandGraphDetailMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    byte_5970CB9 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_GrandGraphDetailMaster___);
  if ( !v || !Master_object )
    sub_2213CDC(Master_object, v5);
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
    sub_2213CDC(this, 0);
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
  if ( (byte_5970CBA & 1) == 0 )
  {
    this = (GrandGraphMaster___c__DisplayClass0_0_o *)sub_2213A60(&Method_System_Linq_Enumerable_Contains_int___);
    byte_5970CBA = 1;
  }
  if ( !v )
    sub_2213CDC(this, v);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.grandGraphIds,
           v->fields.id,
           (const MethodInfo_3876640 *)Method_System_Linq_Enumerable_Contains_int___);
}