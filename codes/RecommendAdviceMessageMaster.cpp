void __fastcall RecommendAdviceMessageMaster___ctor(RecommendAdviceMessageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FEAD6 & 1) == 0 )
  {
    sub_1B64870(&Method_DataMasterBase_RecommendAdviceMessageMaster__RecommendAdviceMessageEntity__int___ctor__, method);
    byte_49FEAD6 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    513,
    (const MethodInfo_30D6140 *)Method_DataMasterBase_RecommendAdviceMessageMaster__RecommendAdviceMessageEntity__int___ctor__);
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
  RecommendAdviceMessageMaster___c_c *v10; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x19
  System_Func_object__object__o *_9__3_0; // x20
  Il2CppObject *v13; // x21
  struct RecommendAdviceMessageMaster___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0

  if ( (byte_49FEAD2 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Linq_Enumerable_Select_RecommendAdviceMessageEntity__string___, ids);
    sub_1B64870(&Method_System_Linq_Enumerable_ToArray_string___, v5);
    sub_1B64870(&System_Func_RecommendAdviceMessageEntity__string__TypeInfo, v6);
    sub_1B64870(&Method_RecommendAdviceMessageMaster___c__GetConvertMessageToId_b__3_0__, v7);
    sub_1B64870(&RecommendAdviceMessageMaster___c_TypeInfo, v8);
    byte_49FEAD2 = 1;
  }
  TargetEntity = RecommendAdviceMessageMaster__GetTargetEntity(this, ids, method);
  v10 = RecommendAdviceMessageMaster___c_TypeInfo;
  v11 = (System_Collections_Generic_IEnumerable_TSource__o *)TargetEntity;
  if ( !RecommendAdviceMessageMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendAdviceMessageMaster___c_TypeInfo);
    v10 = RecommendAdviceMessageMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Func_object__object__o *)v10->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = RecommendAdviceMessageMaster___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v10->static_fields->__9;
    _9__3_0 = (System_Func_object__object__o *)sub_1B64ABC(System_Func_RecommendAdviceMessageEntity__string__TypeInfo);
    System_Func_object__object____ctor(
      _9__3_0,
      v13,
      Method_RecommendAdviceMessageMaster___c__GetConvertMessageToId_b__3_0__,
      0LL);
    static_fields = RecommendAdviceMessageMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Func_RecommendAdviceMessageEntity__string__o *)_9__3_0;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v15, v16);
  }
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               v11,
                                                               (System_Func_TSource__TResult__o *)_9__3_0,
                                                               (const MethodInfo_2E6B688 *)Method_System_Linq_Enumerable_Select_RecommendAdviceMessageEntity__string___);
  return (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                  v17,
                                  (const MethodInfo_2E736A0 *)Method_System_Linq_Enumerable_ToArray_string___);
}


RecommendAdviceMessageEntity_array *__fastcall RecommendAdviceMessageMaster__GetEntities(
        RecommendAdviceMessageMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v4; // x0

  if ( (byte_49FEAD1 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Linq_Enumerable_OfType_RecommendAdviceMessageEntity___, method);
    sub_1B64870(&Method_System_Linq_Enumerable_ToArray_RecommendAdviceMessageEntity___, v3);
    byte_49FEAD1 = 1;
  }
  v4 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                              (System_Collections_IEnumerable_o *)this->fields.list,
                                                              (const MethodInfo_2E64EFC *)Method_System_Linq_Enumerable_OfType_RecommendAdviceMessageEntity___);
  return (RecommendAdviceMessageEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                                 v4,
                                                 (const MethodInfo_2E736A0 *)Method_System_Linq_Enumerable_ToArray_RecommendAdviceMessageEntity___);
}


// attributes: thunk
RecommendAdviceMessageEntity_array *__fastcall RecommendAdviceMessageMaster__GetEntities_39250328(
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

  if ( (byte_49FEAD4 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Linq_Enumerable_Select_int__RecommendAdviceMessageEntity___, ids);
    sub_1B64870(&Method_System_Linq_Enumerable_ToArray_RecommendAdviceMessageEntity___, v5);
    sub_1B64870(&System_Func_int__RecommendAdviceMessageEntity__TypeInfo, v6);
    sub_1B64870(&Method_RecommendAdviceMessageMaster__GetTargetEntity_b__6_0__, v7);
    byte_49FEAD4 = 1;
  }
  v8 = (System_Func_T__TResult__o *)sub_1B64ABC(System_Func_int__RecommendAdviceMessageEntity__TypeInfo);
  System_Func_int__object____ctor(
    v8,
    (Il2CppObject *)this,
    Method_RecommendAdviceMessageMaster__GetTargetEntity_b__6_0__,
    0LL);
  v9 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                              (System_Collections_Generic_IEnumerable_TSource__o *)ids,
                                                              (System_Func_TSource__TResult__o *)v8,
                                                              (const MethodInfo_2E692A8 *)Method_System_Linq_Enumerable_Select_int__RecommendAdviceMessageEntity___);
  return (RecommendAdviceMessageEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                                 v9,
                                                 (const MethodInfo_2E736A0 *)Method_System_Linq_Enumerable_ToArray_RecommendAdviceMessageEntity___);
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

  if ( (byte_49FEAD3 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Linq_Enumerable_OfType_RecommendAdviceMessageEntity___, entities);
    sub_1B64870(&Method_System_Linq_Enumerable_ToArray_RecommendAdviceMessageEntity___, v5);
    byte_49FEAD3 = 1;
  }
  v6 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                              (System_Collections_IEnumerable_o *)this->fields.list,
                                                              (const MethodInfo_2E64EFC *)Method_System_Linq_Enumerable_OfType_RecommendAdviceMessageEntity___);
  v7 = System_Linq_Enumerable__ToArray_object_(
         v6,
         (const MethodInfo_2E736A0 *)Method_System_Linq_Enumerable_ToArray_RecommendAdviceMessageEntity___);
  *entities = (RecommendAdviceMessageEntity_array *)v7;
  sub_1B64814((ServantStatusBattleListViewItem_o *)entities, (int32_t)v7, v8, v9);
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)*entities, 0LL);
}


bool __fastcall RecommendAdviceMessageMaster__TryGetEntities_39250988(
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
  sub_1B64814((ServantStatusBattleListViewItem_o *)entities, (int32_t)TargetEntity, v6, v7);
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)*entities, 0LL);
}


bool __fastcall RecommendAdviceMessageMaster__TryGetEntities_39251048(
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
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x20
  RecommendAdviceMessageMaster___c_c *v17; // x8
  System_Func_object__bool__o *_9__7_0; // x21
  Il2CppObject *v19; // x22
  int32_t v20; // w2
  int32_t v21; // w3
  struct RecommendAdviceMessageMaster___c_StaticFields *static_fields; // x0
  ServantStatusBattleListViewItem_o *p__9__7_0; // x0
  RecommendAdviceMessageEntity_array *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  RecommendAdviceMessageMaster___c_c *v27; // x8
  Il2CppObject *v28; // x22
  struct RecommendAdviceMessageMaster___c_StaticFields *v29; // x0
  RecommendAdviceMessageMaster___c_c *v30; // x8
  Il2CppObject *v31; // x22
  struct RecommendAdviceMessageMaster___c_StaticFields *v32; // x0
  RecommendAdviceMessageMaster___c_c *v33; // x8
  Il2CppObject *v34; // x22
  struct RecommendAdviceMessageMaster___c_StaticFields *v35; // x0
  RecommendAdviceMessageMaster___c_c *v36; // x8
  Il2CppObject *v37; // x22
  struct RecommendAdviceMessageMaster___c_StaticFields *v38; // x0
  RecommendAdviceMessageMaster___c_c *v39; // x8
  Il2CppObject *v40; // x22
  struct RecommendAdviceMessageMaster___c_StaticFields *v41; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x0

  if ( (byte_49FEAD5 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Linq_Enumerable_ToArray_RecommendAdviceMessageEntity___, entities);
    sub_1B64870(&Method_System_Linq_Enumerable_Where_RecommendAdviceMessageEntity___, v7);
    sub_1B64870(&System_Func_RecommendAdviceMessageEntity__bool__TypeInfo, v8);
    sub_1B64870(&Method_RecommendAdviceMessageMaster___c__TryGetEntities_b__7_0__, v9);
    sub_1B64870(&Method_RecommendAdviceMessageMaster___c__TryGetEntities_b__7_1__, v10);
    sub_1B64870(&Method_RecommendAdviceMessageMaster___c__TryGetEntities_b__7_2__, v11);
    sub_1B64870(&Method_RecommendAdviceMessageMaster___c__TryGetEntities_b__7_3__, v12);
    sub_1B64870(&Method_RecommendAdviceMessageMaster___c__TryGetEntities_b__7_4__, v13);
    sub_1B64870(&Method_RecommendAdviceMessageMaster___c__TryGetEntities_b__7_5__, v14);
    sub_1B64870(&RecommendAdviceMessageMaster___c_TypeInfo, v15);
    byte_49FEAD5 = 1;
  }
  switch ( category )
  {
    case 0:
      v16 = (System_Collections_Generic_IEnumerable_TSource__o *)RecommendAdviceMessageMaster__GetEntities(
                                                                   this,
                                                                   (const MethodInfo *)entities);
      v17 = RecommendAdviceMessageMaster___c_TypeInfo;
      if ( !RecommendAdviceMessageMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RecommendAdviceMessageMaster___c_TypeInfo);
        v17 = RecommendAdviceMessageMaster___c_TypeInfo;
      }
      _9__7_0 = (System_Func_object__bool__o *)v17->static_fields->__9__7_0;
      if ( _9__7_0 )
        goto LABEL_42;
      if ( !v17->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v17);
        v17 = RecommendAdviceMessageMaster___c_TypeInfo;
      }
      v19 = (Il2CppObject *)v17->static_fields->__9;
      _9__7_0 = (System_Func_object__bool__o *)sub_1B64ABC(System_Func_RecommendAdviceMessageEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__7_0,
        v19,
        Method_RecommendAdviceMessageMaster___c__TryGetEntities_b__7_0__,
        0LL);
      static_fields = RecommendAdviceMessageMaster___c_TypeInfo->static_fields;
      static_fields->__9__7_0 = (struct System_Func_RecommendAdviceMessageEntity__bool__o *)_9__7_0;
      p__9__7_0 = (ServantStatusBattleListViewItem_o *)&static_fields->__9__7_0;
      break;
    case 1:
      v16 = (System_Collections_Generic_IEnumerable_TSource__o *)RecommendAdviceMessageMaster__GetEntities(
                                                                   this,
                                                                   (const MethodInfo *)entities);
      v27 = RecommendAdviceMessageMaster___c_TypeInfo;
      if ( !RecommendAdviceMessageMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RecommendAdviceMessageMaster___c_TypeInfo);
        v27 = RecommendAdviceMessageMaster___c_TypeInfo;
      }
      _9__7_0 = (System_Func_object__bool__o *)v27->static_fields->__9__7_1;
      if ( _9__7_0 )
        goto LABEL_42;
      if ( !v27->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v27);
        v27 = RecommendAdviceMessageMaster___c_TypeInfo;
      }
      v28 = (Il2CppObject *)v27->static_fields->__9;
      _9__7_0 = (System_Func_object__bool__o *)sub_1B64ABC(System_Func_RecommendAdviceMessageEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__7_0,
        v28,
        Method_RecommendAdviceMessageMaster___c__TryGetEntities_b__7_1__,
        0LL);
      v29 = RecommendAdviceMessageMaster___c_TypeInfo->static_fields;
      v29->__9__7_1 = (struct System_Func_RecommendAdviceMessageEntity__bool__o *)_9__7_0;
      p__9__7_0 = (ServantStatusBattleListViewItem_o *)&v29->__9__7_1;
      break;
    case 2:
      v16 = (System_Collections_Generic_IEnumerable_TSource__o *)RecommendAdviceMessageMaster__GetEntities(
                                                                   this,
                                                                   (const MethodInfo *)entities);
      v30 = RecommendAdviceMessageMaster___c_TypeInfo;
      if ( !RecommendAdviceMessageMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RecommendAdviceMessageMaster___c_TypeInfo);
        v30 = RecommendAdviceMessageMaster___c_TypeInfo;
      }
      _9__7_0 = (System_Func_object__bool__o *)v30->static_fields->__9__7_2;
      if ( _9__7_0 )
        goto LABEL_42;
      if ( !v30->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v30);
        v30 = RecommendAdviceMessageMaster___c_TypeInfo;
      }
      v31 = (Il2CppObject *)v30->static_fields->__9;
      _9__7_0 = (System_Func_object__bool__o *)sub_1B64ABC(System_Func_RecommendAdviceMessageEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__7_0,
        v31,
        Method_RecommendAdviceMessageMaster___c__TryGetEntities_b__7_2__,
        0LL);
      v32 = RecommendAdviceMessageMaster___c_TypeInfo->static_fields;
      v32->__9__7_2 = (struct System_Func_RecommendAdviceMessageEntity__bool__o *)_9__7_0;
      p__9__7_0 = (ServantStatusBattleListViewItem_o *)&v32->__9__7_2;
      break;
    case 3:
      v16 = (System_Collections_Generic_IEnumerable_TSource__o *)RecommendAdviceMessageMaster__GetEntities(
                                                                   this,
                                                                   (const MethodInfo *)entities);
      v33 = RecommendAdviceMessageMaster___c_TypeInfo;
      if ( !RecommendAdviceMessageMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RecommendAdviceMessageMaster___c_TypeInfo);
        v33 = RecommendAdviceMessageMaster___c_TypeInfo;
      }
      _9__7_0 = (System_Func_object__bool__o *)v33->static_fields->__9__7_3;
      if ( _9__7_0 )
        goto LABEL_42;
      if ( !v33->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v33);
        v33 = RecommendAdviceMessageMaster___c_TypeInfo;
      }
      v34 = (Il2CppObject *)v33->static_fields->__9;
      _9__7_0 = (System_Func_object__bool__o *)sub_1B64ABC(System_Func_RecommendAdviceMessageEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__7_0,
        v34,
        Method_RecommendAdviceMessageMaster___c__TryGetEntities_b__7_3__,
        0LL);
      v35 = RecommendAdviceMessageMaster___c_TypeInfo->static_fields;
      v35->__9__7_3 = (struct System_Func_RecommendAdviceMessageEntity__bool__o *)_9__7_0;
      p__9__7_0 = (ServantStatusBattleListViewItem_o *)&v35->__9__7_3;
      break;
    case 4:
      v16 = (System_Collections_Generic_IEnumerable_TSource__o *)RecommendAdviceMessageMaster__GetEntities(
                                                                   this,
                                                                   (const MethodInfo *)entities);
      v36 = RecommendAdviceMessageMaster___c_TypeInfo;
      if ( !RecommendAdviceMessageMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RecommendAdviceMessageMaster___c_TypeInfo);
        v36 = RecommendAdviceMessageMaster___c_TypeInfo;
      }
      _9__7_0 = (System_Func_object__bool__o *)v36->static_fields->__9__7_4;
      if ( _9__7_0 )
        goto LABEL_42;
      if ( !v36->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v36);
        v36 = RecommendAdviceMessageMaster___c_TypeInfo;
      }
      v37 = (Il2CppObject *)v36->static_fields->__9;
      _9__7_0 = (System_Func_object__bool__o *)sub_1B64ABC(System_Func_RecommendAdviceMessageEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__7_0,
        v37,
        Method_RecommendAdviceMessageMaster___c__TryGetEntities_b__7_4__,
        0LL);
      v38 = RecommendAdviceMessageMaster___c_TypeInfo->static_fields;
      v38->__9__7_4 = (struct System_Func_RecommendAdviceMessageEntity__bool__o *)_9__7_0;
      p__9__7_0 = (ServantStatusBattleListViewItem_o *)&v38->__9__7_4;
      break;
    case 5:
      v16 = (System_Collections_Generic_IEnumerable_TSource__o *)RecommendAdviceMessageMaster__GetEntities(
                                                                   this,
                                                                   (const MethodInfo *)entities);
      v39 = RecommendAdviceMessageMaster___c_TypeInfo;
      if ( !RecommendAdviceMessageMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RecommendAdviceMessageMaster___c_TypeInfo);
        v39 = RecommendAdviceMessageMaster___c_TypeInfo;
      }
      _9__7_0 = (System_Func_object__bool__o *)v39->static_fields->__9__7_5;
      if ( _9__7_0 )
        goto LABEL_42;
      if ( !v39->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v39);
        v39 = RecommendAdviceMessageMaster___c_TypeInfo;
      }
      v40 = (Il2CppObject *)v39->static_fields->__9;
      _9__7_0 = (System_Func_object__bool__o *)sub_1B64ABC(System_Func_RecommendAdviceMessageEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__7_0,
        v40,
        Method_RecommendAdviceMessageMaster___c__TryGetEntities_b__7_5__,
        0LL);
      v41 = RecommendAdviceMessageMaster___c_TypeInfo->static_fields;
      v41->__9__7_5 = (struct System_Func_RecommendAdviceMessageEntity__bool__o *)_9__7_0;
      p__9__7_0 = (ServantStatusBattleListViewItem_o *)&v41->__9__7_5;
      break;
    default:
      v24 = RecommendAdviceMessageMaster__GetEntities(this, (const MethodInfo *)entities);
      goto LABEL_43;
  }
  sub_1B64814(p__9__7_0, (int32_t)_9__7_0, v20, v21);
LABEL_42:
  v42 = System_Linq_Enumerable__Where_object_(
          v16,
          (System_Func_TSource__bool__o *)_9__7_0,
          (const MethodInfo_2E79378 *)Method_System_Linq_Enumerable_Where_RecommendAdviceMessageEntity___);
  v24 = (RecommendAdviceMessageEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                                v42,
                                                (const MethodInfo_2E736A0 *)Method_System_Linq_Enumerable_ToArray_RecommendAdviceMessageEntity___);
LABEL_43:
  *entities = v24;
  sub_1B64814((ServantStatusBattleListViewItem_o *)entities, (int32_t)v24, v25, v26);
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)*entities, 0LL);
}


// local variable allocation has failed, the output may be wrong!
RecommendAdviceMessageEntity_o *__fastcall RecommendAdviceMessageMaster___GetTargetEntity_b__6_0(
        RecommendAdviceMessageMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v5; // x1
  RecommendAdviceMessageEntity_o *v6; // x19
  const MethodInfo *v7; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FEAD7 & 1) == 0 )
  {
    sub_1B64870(
      &Method_DataMasterBase_RecommendAdviceMessageMaster__RecommendAdviceMessageEntity__int__TryGetEntity__,
      *(_QWORD *)&id);
    sub_1B64870(&RecommendAdviceMessageEntity_TypeInfo, v5);
    byte_49FEAD7 = 1;
  }
  entity = 0LL;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         id,
         (const MethodInfo_30D61D4 *)Method_DataMasterBase_RecommendAdviceMessageMaster__RecommendAdviceMessageEntity__int__TryGetEntity__) )
  {
    return (RecommendAdviceMessageEntity_o *)entity;
  }
  v6 = (RecommendAdviceMessageEntity_o *)sub_1B64ABC(RecommendAdviceMessageEntity_TypeInfo);
  RecommendAdviceMessageEntity___ctor(v6, v7);
  return v6;
}


void __fastcall RecommendAdviceMessageMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_49FEAD8 & 1) == 0 )
  {
    sub_1B64870(&RecommendAdviceMessageMaster___c_TypeInfo, v1);
    byte_49FEAD8 = 1;
  }
  v2 = (Il2CppObject *)sub_1B64ABC(RecommendAdviceMessageMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  RecommendAdviceMessageMaster___c_TypeInfo->static_fields->__9 = (struct RecommendAdviceMessageMaster___c_o *)v2;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)RecommendAdviceMessageMaster___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
    sub_1B64ACC(this, 0LL);
  return entity->fields.message;
}


bool __fastcall RecommendAdviceMessageMaster___c___TryGetEntities_b__7_0(
        RecommendAdviceMessageMaster___c_o *this,
        RecommendAdviceMessageEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1B64ACC(this, 0LL);
  return entity->fields.category == 0;
}


bool __fastcall RecommendAdviceMessageMaster___c___TryGetEntities_b__7_1(
        RecommendAdviceMessageMaster___c_o *this,
        RecommendAdviceMessageEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1B64ACC(this, 0LL);
  return entity->fields.category == 1;
}


bool __fastcall RecommendAdviceMessageMaster___c___TryGetEntities_b__7_2(
        RecommendAdviceMessageMaster___c_o *this,
        RecommendAdviceMessageEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1B64ACC(this, 0LL);
  return entity->fields.category == 2;
}


bool __fastcall RecommendAdviceMessageMaster___c___TryGetEntities_b__7_3(
        RecommendAdviceMessageMaster___c_o *this,
        RecommendAdviceMessageEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1B64ACC(this, 0LL);
  return entity->fields.category == 3;
}


bool __fastcall RecommendAdviceMessageMaster___c___TryGetEntities_b__7_4(
        RecommendAdviceMessageMaster___c_o *this,
        RecommendAdviceMessageEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1B64ACC(this, 0LL);
  return entity->fields.category == 4;
}


bool __fastcall RecommendAdviceMessageMaster___c___TryGetEntities_b__7_5(
        RecommendAdviceMessageMaster___c_o *this,
        RecommendAdviceMessageEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1B64ACC(this, 0LL);
  return entity->fields.category == 5;
}