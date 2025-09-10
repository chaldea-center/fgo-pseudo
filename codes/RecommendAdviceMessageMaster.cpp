void RecommendAdviceMessageMaster___ctor(RecommendAdviceMessageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C27A8A & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_RecommendAdviceMessageMaster__RecommendAdviceMessageEntity__int___ctor__);
    byte_4C27A8A = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    520,
    (const MethodInfo_3385A74 *)Method_DataMasterBase_RecommendAdviceMessageMaster__RecommendAdviceMessageEntity__int___ctor__);
}


System_String_array *RecommendAdviceMessageMaster__GetConvertMessageToId(
        RecommendAdviceMessageMaster_o *this,
        System_Int32_array *ids,
        const MethodInfo *method)
{
  RecommendAdviceMessageEntity_array *TargetEntity; // x0
  RecommendAdviceMessageMaster___c_c *v6; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x19
  System_Func_object__object__o *_9__3_0; // x20
  Il2CppObject *v9; // x21
  struct RecommendAdviceMessageMaster___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x0

  if ( (byte_4C27A86 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_Select_RecommendAdviceMessageEntity__string___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToArray_string___);
    sub_1C2D490(&System_Func_RecommendAdviceMessageEntity__string__TypeInfo);
    sub_1C2D490(&Method_RecommendAdviceMessageMaster___c__GetConvertMessageToId_b__3_0__);
    sub_1C2D490(&RecommendAdviceMessageMaster___c_TypeInfo);
    byte_4C27A86 = 1;
  }
  TargetEntity = RecommendAdviceMessageMaster__GetTargetEntity(this, ids, method);
  v6 = RecommendAdviceMessageMaster___c_TypeInfo;
  v7 = (System_Collections_Generic_IEnumerable_TSource__o *)TargetEntity;
  if ( !RecommendAdviceMessageMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendAdviceMessageMaster___c_TypeInfo);
    v6 = RecommendAdviceMessageMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Func_object__object__o *)v6->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = RecommendAdviceMessageMaster___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v6->static_fields->__9;
    _9__3_0 = (System_Func_object__object__o *)sub_1C2D6DC(System_Func_RecommendAdviceMessageEntity__string__TypeInfo);
    System_Func_object__object____ctor(
      _9__3_0,
      v9,
      Method_RecommendAdviceMessageMaster___c__GetConvertMessageToId_b__3_0__,
      0);
    static_fields = RecommendAdviceMessageMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Func_RecommendAdviceMessageEntity__string__o *)_9__3_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v11, v12);
  }
  v13 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               v7,
                                                               (System_Func_TSource__TResult__o *)_9__3_0,
                                                               (const MethodInfo_310501C *)Method_System_Linq_Enumerable_Select_RecommendAdviceMessageEntity__string___);
  return (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                  v13,
                                  (const MethodInfo_310DFEC *)Method_System_Linq_Enumerable_ToArray_string___);
}


RecommendAdviceMessageEntity_array *RecommendAdviceMessageMaster__GetEntities(
        RecommendAdviceMessageMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *v3; // x0

  if ( (byte_4C27A85 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_OfType_RecommendAdviceMessageEntity___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToArray_RecommendAdviceMessageEntity___);
    byte_4C27A85 = 1;
  }
  v3 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                              (System_Collections_IEnumerable_o *)this->fields.list,
                                                              (const MethodInfo_30FDB2C *)Method_System_Linq_Enumerable_OfType_RecommendAdviceMessageEntity___);
  return (RecommendAdviceMessageEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                                 v3,
                                                 (const MethodInfo_310DFEC *)Method_System_Linq_Enumerable_ToArray_RecommendAdviceMessageEntity___);
}


// attributes: thunk
RecommendAdviceMessageEntity_array *RecommendAdviceMessageMaster__GetEntities_42343892(
        RecommendAdviceMessageMaster_o *this,
        System_Int32_array *ids,
        const MethodInfo *method)
{
  return RecommendAdviceMessageMaster__GetTargetEntity(this, ids, method);
}


RecommendAdviceMessageEntity_array *RecommendAdviceMessageMaster__GetTargetEntity(
        RecommendAdviceMessageMaster_o *this,
        System_Int32_array *ids,
        const MethodInfo *method)
{
  System_Func_T__TResult__o *v5; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v6; // x0

  if ( (byte_4C27A88 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_Select_int__RecommendAdviceMessageEntity___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToArray_RecommendAdviceMessageEntity___);
    sub_1C2D490(&System_Func_int__RecommendAdviceMessageEntity__TypeInfo);
    sub_1C2D490(&Method_RecommendAdviceMessageMaster__GetTargetEntity_b__6_0__);
    byte_4C27A88 = 1;
  }
  v5 = (System_Func_T__TResult__o *)sub_1C2D6DC(System_Func_int__RecommendAdviceMessageEntity__TypeInfo);
  System_Func_int__object____ctor(
    v5,
    (Il2CppObject *)this,
    Method_RecommendAdviceMessageMaster__GetTargetEntity_b__6_0__,
    0);
  v6 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                              (System_Collections_Generic_IEnumerable_TSource__o *)ids,
                                                              (System_Func_TSource__TResult__o *)v5,
                                                              (const MethodInfo_3102360 *)Method_System_Linq_Enumerable_Select_int__RecommendAdviceMessageEntity___);
  return (RecommendAdviceMessageEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                                 v6,
                                                 (const MethodInfo_310DFEC *)Method_System_Linq_Enumerable_ToArray_RecommendAdviceMessageEntity___);
}


bool RecommendAdviceMessageMaster__TryGetEntities(
        RecommendAdviceMessageMaster_o *this,
        RecommendAdviceMessageEntity_array **entities,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *v5; // x0
  System_Object_array *v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C27A87 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_OfType_RecommendAdviceMessageEntity___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToArray_RecommendAdviceMessageEntity___);
    byte_4C27A87 = 1;
  }
  v5 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                              (System_Collections_IEnumerable_o *)this->fields.list,
                                                              (const MethodInfo_30FDB2C *)Method_System_Linq_Enumerable_OfType_RecommendAdviceMessageEntity___);
  v6 = System_Linq_Enumerable__ToArray_object_(
         v5,
         (const MethodInfo_310DFEC *)Method_System_Linq_Enumerable_ToArray_RecommendAdviceMessageEntity___);
  *entities = (RecommendAdviceMessageEntity_array *)v6;
  sub_1C2D434((CGThumbnailListItem_o *)entities, (int32_t)v6, v7, v8);
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)*entities, 0);
}


bool RecommendAdviceMessageMaster__TryGetEntities_42344552(
        RecommendAdviceMessageMaster_o *this,
        RecommendAdviceMessageEntity_array **entities,
        System_Int32_array *ids,
        const MethodInfo *method)
{
  RecommendAdviceMessageEntity_array *TargetEntity; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  TargetEntity = RecommendAdviceMessageMaster__GetTargetEntity(this, ids, (const MethodInfo *)ids);
  *entities = TargetEntity;
  sub_1C2D434((CGThumbnailListItem_o *)entities, (int32_t)TargetEntity, v6, v7);
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)*entities, 0);
}


bool RecommendAdviceMessageMaster__TryGetEntities_42344612(
        RecommendAdviceMessageMaster_o *this,
        RecommendAdviceMessageEntity_array **entities,
        int32_t category,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x20
  RecommendAdviceMessageMaster___c_c *v8; // x8
  System_Func_object__bool__o *_9__7_0; // x21
  Il2CppObject *v10; // x22
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct RecommendAdviceMessageMaster___c_StaticFields *static_fields; // x0
  CGThumbnailListItem_o *p__9__7_0; // x0
  RecommendAdviceMessageEntity_array *v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  RecommendAdviceMessageMaster___c_c *v18; // x8
  Il2CppObject *v19; // x22
  struct RecommendAdviceMessageMaster___c_StaticFields *v20; // x0
  RecommendAdviceMessageMaster___c_c *v21; // x8
  Il2CppObject *v22; // x22
  struct RecommendAdviceMessageMaster___c_StaticFields *v23; // x0
  RecommendAdviceMessageMaster___c_c *v24; // x8
  Il2CppObject *v25; // x22
  struct RecommendAdviceMessageMaster___c_StaticFields *v26; // x0
  RecommendAdviceMessageMaster___c_c *v27; // x8
  Il2CppObject *v28; // x22
  struct RecommendAdviceMessageMaster___c_StaticFields *v29; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0

  if ( (byte_4C27A89 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_ToArray_RecommendAdviceMessageEntity___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Where_RecommendAdviceMessageEntity___);
    sub_1C2D490(&System_Func_RecommendAdviceMessageEntity__bool__TypeInfo);
    sub_1C2D490(&Method_RecommendAdviceMessageMaster___c__TryGetEntities_b__7_0__);
    sub_1C2D490(&Method_RecommendAdviceMessageMaster___c__TryGetEntities_b__7_1__);
    sub_1C2D490(&Method_RecommendAdviceMessageMaster___c__TryGetEntities_b__7_2__);
    sub_1C2D490(&Method_RecommendAdviceMessageMaster___c__TryGetEntities_b__7_3__);
    sub_1C2D490(&Method_RecommendAdviceMessageMaster___c__TryGetEntities_b__7_4__);
    sub_1C2D490(&RecommendAdviceMessageMaster___c_TypeInfo);
    byte_4C27A89 = 1;
  }
  switch ( category )
  {
    case 0:
      v7 = (System_Collections_Generic_IEnumerable_TSource__o *)RecommendAdviceMessageMaster__GetEntities(
                                                                  this,
                                                                  (const MethodInfo *)entities);
      v8 = RecommendAdviceMessageMaster___c_TypeInfo;
      if ( !RecommendAdviceMessageMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RecommendAdviceMessageMaster___c_TypeInfo);
        v8 = RecommendAdviceMessageMaster___c_TypeInfo;
      }
      _9__7_0 = (System_Func_object__bool__o *)v8->static_fields->__9__7_0;
      if ( _9__7_0 )
        goto LABEL_36;
      if ( !v8->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v8);
        v8 = RecommendAdviceMessageMaster___c_TypeInfo;
      }
      v10 = (Il2CppObject *)v8->static_fields->__9;
      _9__7_0 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_RecommendAdviceMessageEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__7_0,
        v10,
        Method_RecommendAdviceMessageMaster___c__TryGetEntities_b__7_0__,
        0);
      static_fields = RecommendAdviceMessageMaster___c_TypeInfo->static_fields;
      static_fields->__9__7_0 = (struct System_Func_RecommendAdviceMessageEntity__bool__o *)_9__7_0;
      p__9__7_0 = (CGThumbnailListItem_o *)&static_fields->__9__7_0;
      break;
    case 1:
      v7 = (System_Collections_Generic_IEnumerable_TSource__o *)RecommendAdviceMessageMaster__GetEntities(
                                                                  this,
                                                                  (const MethodInfo *)entities);
      v18 = RecommendAdviceMessageMaster___c_TypeInfo;
      if ( !RecommendAdviceMessageMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RecommendAdviceMessageMaster___c_TypeInfo);
        v18 = RecommendAdviceMessageMaster___c_TypeInfo;
      }
      _9__7_0 = (System_Func_object__bool__o *)v18->static_fields->__9__7_1;
      if ( _9__7_0 )
        goto LABEL_36;
      if ( !v18->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v18);
        v18 = RecommendAdviceMessageMaster___c_TypeInfo;
      }
      v19 = (Il2CppObject *)v18->static_fields->__9;
      _9__7_0 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_RecommendAdviceMessageEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__7_0,
        v19,
        Method_RecommendAdviceMessageMaster___c__TryGetEntities_b__7_1__,
        0);
      v20 = RecommendAdviceMessageMaster___c_TypeInfo->static_fields;
      v20->__9__7_1 = (struct System_Func_RecommendAdviceMessageEntity__bool__o *)_9__7_0;
      p__9__7_0 = (CGThumbnailListItem_o *)&v20->__9__7_1;
      break;
    case 2:
      v7 = (System_Collections_Generic_IEnumerable_TSource__o *)RecommendAdviceMessageMaster__GetEntities(
                                                                  this,
                                                                  (const MethodInfo *)entities);
      v21 = RecommendAdviceMessageMaster___c_TypeInfo;
      if ( !RecommendAdviceMessageMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RecommendAdviceMessageMaster___c_TypeInfo);
        v21 = RecommendAdviceMessageMaster___c_TypeInfo;
      }
      _9__7_0 = (System_Func_object__bool__o *)v21->static_fields->__9__7_2;
      if ( _9__7_0 )
        goto LABEL_36;
      if ( !v21->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v21);
        v21 = RecommendAdviceMessageMaster___c_TypeInfo;
      }
      v22 = (Il2CppObject *)v21->static_fields->__9;
      _9__7_0 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_RecommendAdviceMessageEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__7_0,
        v22,
        Method_RecommendAdviceMessageMaster___c__TryGetEntities_b__7_2__,
        0);
      v23 = RecommendAdviceMessageMaster___c_TypeInfo->static_fields;
      v23->__9__7_2 = (struct System_Func_RecommendAdviceMessageEntity__bool__o *)_9__7_0;
      p__9__7_0 = (CGThumbnailListItem_o *)&v23->__9__7_2;
      break;
    case 3:
      v7 = (System_Collections_Generic_IEnumerable_TSource__o *)RecommendAdviceMessageMaster__GetEntities(
                                                                  this,
                                                                  (const MethodInfo *)entities);
      v24 = RecommendAdviceMessageMaster___c_TypeInfo;
      if ( !RecommendAdviceMessageMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RecommendAdviceMessageMaster___c_TypeInfo);
        v24 = RecommendAdviceMessageMaster___c_TypeInfo;
      }
      _9__7_0 = (System_Func_object__bool__o *)v24->static_fields->__9__7_3;
      if ( _9__7_0 )
        goto LABEL_36;
      if ( !v24->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v24);
        v24 = RecommendAdviceMessageMaster___c_TypeInfo;
      }
      v25 = (Il2CppObject *)v24->static_fields->__9;
      _9__7_0 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_RecommendAdviceMessageEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__7_0,
        v25,
        Method_RecommendAdviceMessageMaster___c__TryGetEntities_b__7_3__,
        0);
      v26 = RecommendAdviceMessageMaster___c_TypeInfo->static_fields;
      v26->__9__7_3 = (struct System_Func_RecommendAdviceMessageEntity__bool__o *)_9__7_0;
      p__9__7_0 = (CGThumbnailListItem_o *)&v26->__9__7_3;
      break;
    case 4:
      v7 = (System_Collections_Generic_IEnumerable_TSource__o *)RecommendAdviceMessageMaster__GetEntities(
                                                                  this,
                                                                  (const MethodInfo *)entities);
      v27 = RecommendAdviceMessageMaster___c_TypeInfo;
      if ( !RecommendAdviceMessageMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RecommendAdviceMessageMaster___c_TypeInfo);
        v27 = RecommendAdviceMessageMaster___c_TypeInfo;
      }
      _9__7_0 = (System_Func_object__bool__o *)v27->static_fields->__9__7_4;
      if ( _9__7_0 )
        goto LABEL_36;
      if ( !v27->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v27);
        v27 = RecommendAdviceMessageMaster___c_TypeInfo;
      }
      v28 = (Il2CppObject *)v27->static_fields->__9;
      _9__7_0 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_RecommendAdviceMessageEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__7_0,
        v28,
        Method_RecommendAdviceMessageMaster___c__TryGetEntities_b__7_4__,
        0);
      v29 = RecommendAdviceMessageMaster___c_TypeInfo->static_fields;
      v29->__9__7_4 = (struct System_Func_RecommendAdviceMessageEntity__bool__o *)_9__7_0;
      p__9__7_0 = (CGThumbnailListItem_o *)&v29->__9__7_4;
      break;
    default:
      v15 = RecommendAdviceMessageMaster__GetEntities(this, (const MethodInfo *)entities);
      goto LABEL_37;
  }
  sub_1C2D434(p__9__7_0, (int32_t)_9__7_0, v11, v12);
LABEL_36:
  v30 = System_Linq_Enumerable__Where_object_(
          v7,
          (System_Func_TSource__bool__o *)_9__7_0,
          (const MethodInfo_3115108 *)Method_System_Linq_Enumerable_Where_RecommendAdviceMessageEntity___);
  v15 = (RecommendAdviceMessageEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                                v30,
                                                (const MethodInfo_310DFEC *)Method_System_Linq_Enumerable_ToArray_RecommendAdviceMessageEntity___);
LABEL_37:
  *entities = v15;
  sub_1C2D434((CGThumbnailListItem_o *)entities, (int32_t)v15, v16, v17);
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)*entities, 0);
}


RecommendAdviceMessageEntity_o *RecommendAdviceMessageMaster___GetTargetEntity_b__6_0(
        RecommendAdviceMessageMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  RecommendAdviceMessageEntity_o *v5; // x19
  const MethodInfo *v6; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C27A8B & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_RecommendAdviceMessageMaster__RecommendAdviceMessageEntity__int__TryGetEntity__);
    sub_1C2D490(&RecommendAdviceMessageEntity_TypeInfo);
    byte_4C27A8B = 1;
  }
  entity = 0;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         id,
         (const MethodInfo_3387DE4 *)Method_DataMasterBase_RecommendAdviceMessageMaster__RecommendAdviceMessageEntity__int__TryGetEntity__) )
  {
    return (RecommendAdviceMessageEntity_o *)entity;
  }
  v5 = (RecommendAdviceMessageEntity_o *)sub_1C2D6DC(RecommendAdviceMessageEntity_TypeInfo);
  RecommendAdviceMessageEntity___ctor(v5, v6);
  return v5;
}


void RecommendAdviceMessageMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C27A8C & 1) == 0 )
  {
    sub_1C2D490(&RecommendAdviceMessageMaster___c_TypeInfo);
    byte_4C27A8C = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(RecommendAdviceMessageMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  RecommendAdviceMessageMaster___c_TypeInfo->static_fields->__9 = (struct RecommendAdviceMessageMaster___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)RecommendAdviceMessageMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void RecommendAdviceMessageMaster___c___ctor(RecommendAdviceMessageMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_String_o *RecommendAdviceMessageMaster___c___GetConvertMessageToId_b__3_0(
        RecommendAdviceMessageMaster___c_o *this,
        RecommendAdviceMessageEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C2D6EC(this, 0);
  return entity->fields.message;
}


bool RecommendAdviceMessageMaster___c___TryGetEntities_b__7_0(
        RecommendAdviceMessageMaster___c_o *this,
        RecommendAdviceMessageEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C2D6EC(this, 0);
  return entity->fields.category == 0;
}


bool RecommendAdviceMessageMaster___c___TryGetEntities_b__7_1(
        RecommendAdviceMessageMaster___c_o *this,
        RecommendAdviceMessageEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C2D6EC(this, 0);
  return entity->fields.category == 1;
}


bool RecommendAdviceMessageMaster___c___TryGetEntities_b__7_2(
        RecommendAdviceMessageMaster___c_o *this,
        RecommendAdviceMessageEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C2D6EC(this, 0);
  return entity->fields.category == 2;
}


bool RecommendAdviceMessageMaster___c___TryGetEntities_b__7_3(
        RecommendAdviceMessageMaster___c_o *this,
        RecommendAdviceMessageEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C2D6EC(this, 0);
  return entity->fields.category == 3;
}


bool RecommendAdviceMessageMaster___c___TryGetEntities_b__7_4(
        RecommendAdviceMessageMaster___c_o *this,
        RecommendAdviceMessageEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C2D6EC(this, 0);
  return entity->fields.category == 4;
}