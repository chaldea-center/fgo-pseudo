void __fastcall RecommendAdviceMessageMaster___ctor(RecommendAdviceMessageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FC9DD & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_RecommendAdviceMessageMaster__RecommendAdviceMessageEntity__int___ctor__, method);
    byte_49FC9DD = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    513,
    (const MethodInfo_30D3E64 *)Method_DataMasterBase_RecommendAdviceMessageMaster__RecommendAdviceMessageEntity__int___ctor__);
}


System_String_array *__fastcall RecommendAdviceMessageMaster__GetConvertMessageToId(
        RecommendAdviceMessageMaster_o *this,
        System_Int32_array *ids,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  RecommendAdviceMessageEntity_array *TargetEntity; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  RecommendAdviceMessageMaster___c_c *v12; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x19
  System_Func_object__object__o *_9__3_0; // x20
  Il2CppObject *v15; // x21
  struct RecommendAdviceMessageMaster___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0

  if ( (byte_49FC9D9 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_RecommendAdviceMessageEntity__string___, ids);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_string___, v5);
    sub_1B640C8(&System_Func_RecommendAdviceMessageEntity__string__TypeInfo, v6);
    sub_1B640C8(&Method_RecommendAdviceMessageMaster___c__GetConvertMessageToId_b__3_0__, v7);
    sub_1B640C8(&RecommendAdviceMessageMaster___c_TypeInfo, v8);
    byte_49FC9D9 = 1;
  }
  TargetEntity = RecommendAdviceMessageMaster__GetTargetEntity(this, ids, method);
  v12 = RecommendAdviceMessageMaster___c_TypeInfo;
  v13 = (System_Collections_Generic_IEnumerable_TSource__o *)TargetEntity;
  if ( !RecommendAdviceMessageMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendAdviceMessageMaster___c_TypeInfo);
    v12 = RecommendAdviceMessageMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Func_object__object__o *)v12->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = RecommendAdviceMessageMaster___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v12->static_fields->__9;
    _9__3_0 = (System_Func_object__object__o *)sub_1B64314(
                                                 System_Func_RecommendAdviceMessageEntity__string__TypeInfo,
                                                 v10,
                                                 v11);
    System_Func_object__object____ctor(
      _9__3_0,
      v15,
      Method_RecommendAdviceMessageMaster___c__GetConvertMessageToId_b__3_0__,
      0LL);
    static_fields = RecommendAdviceMessageMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Func_RecommendAdviceMessageEntity__string__o *)_9__3_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v17, v18);
  }
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               v13,
                                                               (System_Func_TSource__TResult__o *)_9__3_0,
                                                               (const MethodInfo_2E693AC *)Method_System_Linq_Enumerable_Select_RecommendAdviceMessageEntity__string___);
  return (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                  v19,
                                  (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_string___);
}


RecommendAdviceMessageEntity_array *__fastcall RecommendAdviceMessageMaster__GetEntities(
        RecommendAdviceMessageMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v4; // x0

  if ( (byte_49FC9D8 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_OfType_RecommendAdviceMessageEntity___, method);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_RecommendAdviceMessageEntity___, v3);
    byte_49FC9D8 = 1;
  }
  v4 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                              (System_Collections_IEnumerable_o *)this->fields.list,
                                                              (const MethodInfo_2E62C20 *)Method_System_Linq_Enumerable_OfType_RecommendAdviceMessageEntity___);
  return (RecommendAdviceMessageEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                                 v4,
                                                 (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_RecommendAdviceMessageEntity___);
}


// attributes: thunk
RecommendAdviceMessageEntity_array *__fastcall RecommendAdviceMessageMaster__GetEntities_39245820(
        RecommendAdviceMessageMaster_o *this,
        System_Int32_array *ids,
        const MethodInfo *method)
{
  return RecommendAdviceMessageMaster__GetTargetEntity(this, ids, method);
}


RecommendAdviceMessageEntity_array *__fastcall RecommendAdviceMessageMaster__GetTargetEntity(
        RecommendAdviceMessageMaster_o *this,
        System_Int32_array *ids,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Func_T__TResult__o *v8; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x0

  if ( (byte_49FC9DB & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_int__RecommendAdviceMessageEntity___, ids);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_RecommendAdviceMessageEntity___, v5);
    sub_1B640C8(&System_Func_int__RecommendAdviceMessageEntity__TypeInfo, v6);
    sub_1B640C8(&Method_RecommendAdviceMessageMaster__GetTargetEntity_b__6_0__, v7);
    byte_49FC9DB = 1;
  }
  v8 = (System_Func_T__TResult__o *)sub_1B64314(System_Func_int__RecommendAdviceMessageEntity__TypeInfo, ids, method);
  System_Func_int__object____ctor(
    v8,
    (Il2CppObject *)this,
    Method_RecommendAdviceMessageMaster__GetTargetEntity_b__6_0__,
    0LL);
  v9 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                              (System_Collections_Generic_IEnumerable_TSource__o *)ids,
                                                              (System_Func_TSource__TResult__o *)v8,
                                                              (const MethodInfo_2E66FCC *)Method_System_Linq_Enumerable_Select_int__RecommendAdviceMessageEntity___);
  return (RecommendAdviceMessageEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                                 v9,
                                                 (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_RecommendAdviceMessageEntity___);
}


bool __fastcall RecommendAdviceMessageMaster__TryGetEntities(
        RecommendAdviceMessageMaster_o *this,
        RecommendAdviceMessageEntity_array **entities,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v6; // x0
  System_Object_array *v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_49FC9DA & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_OfType_RecommendAdviceMessageEntity___, entities);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_RecommendAdviceMessageEntity___, v5);
    byte_49FC9DA = 1;
  }
  v6 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                              (System_Collections_IEnumerable_o *)this->fields.list,
                                                              (const MethodInfo_2E62C20 *)Method_System_Linq_Enumerable_OfType_RecommendAdviceMessageEntity___);
  v7 = System_Linq_Enumerable__ToArray_object_(
         v6,
         (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_RecommendAdviceMessageEntity___);
  *entities = (RecommendAdviceMessageEntity_array *)v7;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)entities, (int32_t)v7, v8, v9);
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)*entities, 0LL);
}


bool __fastcall RecommendAdviceMessageMaster__TryGetEntities_39246480(
        RecommendAdviceMessageMaster_o *this,
        RecommendAdviceMessageEntity_array **entities,
        System_Int32_array *ids,
        const MethodInfo *method)
{
  RecommendAdviceMessageEntity_array *TargetEntity; // x0
  int32_t v6; // w2
  int32_t v7; // w3

  TargetEntity = RecommendAdviceMessageMaster__GetTargetEntity(this, ids, (const MethodInfo *)ids);
  *entities = TargetEntity;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)entities, (int32_t)TargetEntity, v6, v7);
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)*entities, 0LL);
}


bool __fastcall RecommendAdviceMessageMaster__TryGetEntities_39246540(
        RecommendAdviceMessageMaster_o *this,
        RecommendAdviceMessageEntity_array **entities,
        int32_t category,
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
  __int64 v17; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x20
  RecommendAdviceMessageMaster___c_c *v19; // x8
  System_Func_object__bool__o *_9__7_0; // x21
  Il2CppObject *v21; // x22
  int32_t v22; // w2
  int32_t v23; // w3
  struct RecommendAdviceMessageMaster___c_StaticFields *static_fields; // x0
  ServantStatusBattleListViewItem_o *p__9__7_0; // x0
  RecommendAdviceMessageEntity_array *v26; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  __int64 v29; // x1
  __int64 v30; // x2
  RecommendAdviceMessageMaster___c_c *v31; // x8
  Il2CppObject *v32; // x22
  struct RecommendAdviceMessageMaster___c_StaticFields *v33; // x0
  __int64 v34; // x1
  __int64 v35; // x2
  RecommendAdviceMessageMaster___c_c *v36; // x8
  Il2CppObject *v37; // x22
  struct RecommendAdviceMessageMaster___c_StaticFields *v38; // x0
  __int64 v39; // x1
  __int64 v40; // x2
  RecommendAdviceMessageMaster___c_c *v41; // x8
  Il2CppObject *v42; // x22
  struct RecommendAdviceMessageMaster___c_StaticFields *v43; // x0
  __int64 v44; // x1
  __int64 v45; // x2
  RecommendAdviceMessageMaster___c_c *v46; // x8
  Il2CppObject *v47; // x22
  struct RecommendAdviceMessageMaster___c_StaticFields *v48; // x0
  __int64 v49; // x1
  __int64 v50; // x2
  RecommendAdviceMessageMaster___c_c *v51; // x8
  Il2CppObject *v52; // x22
  struct RecommendAdviceMessageMaster___c_StaticFields *v53; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v54; // x0

  if ( (byte_49FC9DC & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_RecommendAdviceMessageEntity___, entities);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_RecommendAdviceMessageEntity___, v7);
    sub_1B640C8(&System_Func_RecommendAdviceMessageEntity__bool__TypeInfo, v8);
    sub_1B640C8(&Method_RecommendAdviceMessageMaster___c__TryGetEntities_b__7_0__, v9);
    sub_1B640C8(&Method_RecommendAdviceMessageMaster___c__TryGetEntities_b__7_1__, v10);
    sub_1B640C8(&Method_RecommendAdviceMessageMaster___c__TryGetEntities_b__7_2__, v11);
    sub_1B640C8(&Method_RecommendAdviceMessageMaster___c__TryGetEntities_b__7_3__, v12);
    sub_1B640C8(&Method_RecommendAdviceMessageMaster___c__TryGetEntities_b__7_4__, v13);
    sub_1B640C8(&Method_RecommendAdviceMessageMaster___c__TryGetEntities_b__7_5__, v14);
    sub_1B640C8(&RecommendAdviceMessageMaster___c_TypeInfo, v15);
    byte_49FC9DC = 1;
  }
  switch ( category )
  {
    case 0:
      v18 = (System_Collections_Generic_IEnumerable_TSource__o *)RecommendAdviceMessageMaster__GetEntities(
                                                                   this,
                                                                   (const MethodInfo *)entities);
      v19 = RecommendAdviceMessageMaster___c_TypeInfo;
      if ( !RecommendAdviceMessageMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RecommendAdviceMessageMaster___c_TypeInfo);
        v19 = RecommendAdviceMessageMaster___c_TypeInfo;
      }
      _9__7_0 = (System_Func_object__bool__o *)v19->static_fields->__9__7_0;
      if ( _9__7_0 )
        goto LABEL_42;
      if ( !v19->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v19);
        v19 = RecommendAdviceMessageMaster___c_TypeInfo;
      }
      v21 = (Il2CppObject *)v19->static_fields->__9;
      _9__7_0 = (System_Func_object__bool__o *)sub_1B64314(
                                                 System_Func_RecommendAdviceMessageEntity__bool__TypeInfo,
                                                 v16,
                                                 v17);
      System_Func_object__bool____ctor(
        _9__7_0,
        v21,
        Method_RecommendAdviceMessageMaster___c__TryGetEntities_b__7_0__,
        0LL);
      static_fields = RecommendAdviceMessageMaster___c_TypeInfo->static_fields;
      static_fields->__9__7_0 = (struct System_Func_RecommendAdviceMessageEntity__bool__o *)_9__7_0;
      p__9__7_0 = (ServantStatusBattleListViewItem_o *)&static_fields->__9__7_0;
      break;
    case 1:
      v18 = (System_Collections_Generic_IEnumerable_TSource__o *)RecommendAdviceMessageMaster__GetEntities(
                                                                   this,
                                                                   (const MethodInfo *)entities);
      v31 = RecommendAdviceMessageMaster___c_TypeInfo;
      if ( !RecommendAdviceMessageMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RecommendAdviceMessageMaster___c_TypeInfo);
        v31 = RecommendAdviceMessageMaster___c_TypeInfo;
      }
      _9__7_0 = (System_Func_object__bool__o *)v31->static_fields->__9__7_1;
      if ( _9__7_0 )
        goto LABEL_42;
      if ( !v31->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v31);
        v31 = RecommendAdviceMessageMaster___c_TypeInfo;
      }
      v32 = (Il2CppObject *)v31->static_fields->__9;
      _9__7_0 = (System_Func_object__bool__o *)sub_1B64314(
                                                 System_Func_RecommendAdviceMessageEntity__bool__TypeInfo,
                                                 v29,
                                                 v30);
      System_Func_object__bool____ctor(
        _9__7_0,
        v32,
        Method_RecommendAdviceMessageMaster___c__TryGetEntities_b__7_1__,
        0LL);
      v33 = RecommendAdviceMessageMaster___c_TypeInfo->static_fields;
      v33->__9__7_1 = (struct System_Func_RecommendAdviceMessageEntity__bool__o *)_9__7_0;
      p__9__7_0 = (ServantStatusBattleListViewItem_o *)&v33->__9__7_1;
      break;
    case 2:
      v18 = (System_Collections_Generic_IEnumerable_TSource__o *)RecommendAdviceMessageMaster__GetEntities(
                                                                   this,
                                                                   (const MethodInfo *)entities);
      v36 = RecommendAdviceMessageMaster___c_TypeInfo;
      if ( !RecommendAdviceMessageMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RecommendAdviceMessageMaster___c_TypeInfo);
        v36 = RecommendAdviceMessageMaster___c_TypeInfo;
      }
      _9__7_0 = (System_Func_object__bool__o *)v36->static_fields->__9__7_2;
      if ( _9__7_0 )
        goto LABEL_42;
      if ( !v36->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v36);
        v36 = RecommendAdviceMessageMaster___c_TypeInfo;
      }
      v37 = (Il2CppObject *)v36->static_fields->__9;
      _9__7_0 = (System_Func_object__bool__o *)sub_1B64314(
                                                 System_Func_RecommendAdviceMessageEntity__bool__TypeInfo,
                                                 v34,
                                                 v35);
      System_Func_object__bool____ctor(
        _9__7_0,
        v37,
        Method_RecommendAdviceMessageMaster___c__TryGetEntities_b__7_2__,
        0LL);
      v38 = RecommendAdviceMessageMaster___c_TypeInfo->static_fields;
      v38->__9__7_2 = (struct System_Func_RecommendAdviceMessageEntity__bool__o *)_9__7_0;
      p__9__7_0 = (ServantStatusBattleListViewItem_o *)&v38->__9__7_2;
      break;
    case 3:
      v18 = (System_Collections_Generic_IEnumerable_TSource__o *)RecommendAdviceMessageMaster__GetEntities(
                                                                   this,
                                                                   (const MethodInfo *)entities);
      v41 = RecommendAdviceMessageMaster___c_TypeInfo;
      if ( !RecommendAdviceMessageMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RecommendAdviceMessageMaster___c_TypeInfo);
        v41 = RecommendAdviceMessageMaster___c_TypeInfo;
      }
      _9__7_0 = (System_Func_object__bool__o *)v41->static_fields->__9__7_3;
      if ( _9__7_0 )
        goto LABEL_42;
      if ( !v41->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v41);
        v41 = RecommendAdviceMessageMaster___c_TypeInfo;
      }
      v42 = (Il2CppObject *)v41->static_fields->__9;
      _9__7_0 = (System_Func_object__bool__o *)sub_1B64314(
                                                 System_Func_RecommendAdviceMessageEntity__bool__TypeInfo,
                                                 v39,
                                                 v40);
      System_Func_object__bool____ctor(
        _9__7_0,
        v42,
        Method_RecommendAdviceMessageMaster___c__TryGetEntities_b__7_3__,
        0LL);
      v43 = RecommendAdviceMessageMaster___c_TypeInfo->static_fields;
      v43->__9__7_3 = (struct System_Func_RecommendAdviceMessageEntity__bool__o *)_9__7_0;
      p__9__7_0 = (ServantStatusBattleListViewItem_o *)&v43->__9__7_3;
      break;
    case 4:
      v18 = (System_Collections_Generic_IEnumerable_TSource__o *)RecommendAdviceMessageMaster__GetEntities(
                                                                   this,
                                                                   (const MethodInfo *)entities);
      v46 = RecommendAdviceMessageMaster___c_TypeInfo;
      if ( !RecommendAdviceMessageMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RecommendAdviceMessageMaster___c_TypeInfo);
        v46 = RecommendAdviceMessageMaster___c_TypeInfo;
      }
      _9__7_0 = (System_Func_object__bool__o *)v46->static_fields->__9__7_4;
      if ( _9__7_0 )
        goto LABEL_42;
      if ( !v46->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v46);
        v46 = RecommendAdviceMessageMaster___c_TypeInfo;
      }
      v47 = (Il2CppObject *)v46->static_fields->__9;
      _9__7_0 = (System_Func_object__bool__o *)sub_1B64314(
                                                 System_Func_RecommendAdviceMessageEntity__bool__TypeInfo,
                                                 v44,
                                                 v45);
      System_Func_object__bool____ctor(
        _9__7_0,
        v47,
        Method_RecommendAdviceMessageMaster___c__TryGetEntities_b__7_4__,
        0LL);
      v48 = RecommendAdviceMessageMaster___c_TypeInfo->static_fields;
      v48->__9__7_4 = (struct System_Func_RecommendAdviceMessageEntity__bool__o *)_9__7_0;
      p__9__7_0 = (ServantStatusBattleListViewItem_o *)&v48->__9__7_4;
      break;
    case 5:
      v18 = (System_Collections_Generic_IEnumerable_TSource__o *)RecommendAdviceMessageMaster__GetEntities(
                                                                   this,
                                                                   (const MethodInfo *)entities);
      v51 = RecommendAdviceMessageMaster___c_TypeInfo;
      if ( !RecommendAdviceMessageMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RecommendAdviceMessageMaster___c_TypeInfo);
        v51 = RecommendAdviceMessageMaster___c_TypeInfo;
      }
      _9__7_0 = (System_Func_object__bool__o *)v51->static_fields->__9__7_5;
      if ( _9__7_0 )
        goto LABEL_42;
      if ( !v51->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v51);
        v51 = RecommendAdviceMessageMaster___c_TypeInfo;
      }
      v52 = (Il2CppObject *)v51->static_fields->__9;
      _9__7_0 = (System_Func_object__bool__o *)sub_1B64314(
                                                 System_Func_RecommendAdviceMessageEntity__bool__TypeInfo,
                                                 v49,
                                                 v50);
      System_Func_object__bool____ctor(
        _9__7_0,
        v52,
        Method_RecommendAdviceMessageMaster___c__TryGetEntities_b__7_5__,
        0LL);
      v53 = RecommendAdviceMessageMaster___c_TypeInfo->static_fields;
      v53->__9__7_5 = (struct System_Func_RecommendAdviceMessageEntity__bool__o *)_9__7_0;
      p__9__7_0 = (ServantStatusBattleListViewItem_o *)&v53->__9__7_5;
      break;
    default:
      v26 = RecommendAdviceMessageMaster__GetEntities(this, (const MethodInfo *)entities);
      goto LABEL_43;
  }
  sub_1B6406C(p__9__7_0, (int32_t)_9__7_0, v22, v23);
LABEL_42:
  v54 = System_Linq_Enumerable__Where_object_(
          v18,
          (System_Func_TSource__bool__o *)_9__7_0,
          (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_RecommendAdviceMessageEntity___);
  v26 = (RecommendAdviceMessageEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                                v54,
                                                (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_RecommendAdviceMessageEntity___);
LABEL_43:
  *entities = v26;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)entities, (int32_t)v26, v27, v28);
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)*entities, 0LL);
}


// local variable allocation has failed, the output may be wrong!
RecommendAdviceMessageEntity_o *__fastcall RecommendAdviceMessageMaster___GetTargetEntity_b__6_0(
        RecommendAdviceMessageMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x2
  RecommendAdviceMessageEntity_o *v8; // x19
  const MethodInfo *v9; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FC9DE & 1) == 0 )
  {
    sub_1B640C8(
      &Method_DataMasterBase_RecommendAdviceMessageMaster__RecommendAdviceMessageEntity__int__TryGetEntity__,
      *(_QWORD *)&id);
    sub_1B640C8(&RecommendAdviceMessageEntity_TypeInfo, v5);
    byte_49FC9DE = 1;
  }
  entity = 0LL;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         id,
         (const MethodInfo_30D3EF8 *)Method_DataMasterBase_RecommendAdviceMessageMaster__RecommendAdviceMessageEntity__int__TryGetEntity__) )
  {
    return (RecommendAdviceMessageEntity_o *)entity;
  }
  v8 = (RecommendAdviceMessageEntity_o *)sub_1B64314(RecommendAdviceMessageEntity_TypeInfo, v6, v7);
  RecommendAdviceMessageEntity___ctor(v8, v9);
  return v8;
}


void __fastcall RecommendAdviceMessageMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FC9DF & 1) == 0 )
  {
    sub_1B640C8(&RecommendAdviceMessageMaster___c_TypeInfo, v1);
    byte_49FC9DF = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(RecommendAdviceMessageMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  RecommendAdviceMessageMaster___c_TypeInfo->static_fields->__9 = (struct RecommendAdviceMessageMaster___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)RecommendAdviceMessageMaster___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
}


void __fastcall RecommendAdviceMessageMaster___c___ctor(
        RecommendAdviceMessageMaster___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall RecommendAdviceMessageMaster___c___GetConvertMessageToId_b__3_0(
        RecommendAdviceMessageMaster___c_o *this,
        RecommendAdviceMessageEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1B64324(this);
  return entity->fields.message;
}


bool __fastcall RecommendAdviceMessageMaster___c___TryGetEntities_b__7_0(
        RecommendAdviceMessageMaster___c_o *this,
        RecommendAdviceMessageEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1B64324(this);
  return entity->fields.category == 0;
}


bool __fastcall RecommendAdviceMessageMaster___c___TryGetEntities_b__7_1(
        RecommendAdviceMessageMaster___c_o *this,
        RecommendAdviceMessageEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1B64324(this);
  return entity->fields.category == 1;
}


bool __fastcall RecommendAdviceMessageMaster___c___TryGetEntities_b__7_2(
        RecommendAdviceMessageMaster___c_o *this,
        RecommendAdviceMessageEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1B64324(this);
  return entity->fields.category == 2;
}


bool __fastcall RecommendAdviceMessageMaster___c___TryGetEntities_b__7_3(
        RecommendAdviceMessageMaster___c_o *this,
        RecommendAdviceMessageEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1B64324(this);
  return entity->fields.category == 3;
}


bool __fastcall RecommendAdviceMessageMaster___c___TryGetEntities_b__7_4(
        RecommendAdviceMessageMaster___c_o *this,
        RecommendAdviceMessageEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1B64324(this);
  return entity->fields.category == 4;
}


bool __fastcall RecommendAdviceMessageMaster___c___TryGetEntities_b__7_5(
        RecommendAdviceMessageMaster___c_o *this,
        RecommendAdviceMessageEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1B64324(this);
  return entity->fields.category == 5;
}