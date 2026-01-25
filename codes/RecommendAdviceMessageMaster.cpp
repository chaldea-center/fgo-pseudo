void RecommendAdviceMessageMaster___ctor(RecommendAdviceMessageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CEEE51 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_RecommendAdviceMessageMaster__RecommendAdviceMessageEntity__int___ctor__);
    byte_4CEEE51 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    520,
    (const MethodInfo_342BFD8 *)Method_DataMasterBase_RecommendAdviceMessageMaster__RecommendAdviceMessageEntity__int___ctor__);
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
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0

  if ( (byte_4CEEE4F & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Select_RecommendAdviceMessageEntity__string___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_ToArray_string___);
    sub_1C7BAE8(&System_Func_RecommendAdviceMessageEntity__string__TypeInfo);
    sub_1C7BAE8(&Method_RecommendAdviceMessageMaster___c__GetConvertMessageToId_b__3_0__);
    sub_1C7BAE8(&RecommendAdviceMessageMaster___c_TypeInfo);
    byte_4CEEE4F = 1;
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
    _9__3_0 = (System_Func_object__object__o *)sub_1C7BD34(System_Func_RecommendAdviceMessageEntity__string__TypeInfo);
    System_Func_object__object____ctor(
      _9__3_0,
      v9,
      Method_RecommendAdviceMessageMaster___c__GetConvertMessageToId_b__3_0__,
      0);
    static_fields = RecommendAdviceMessageMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Func_RecommendAdviceMessageEntity__string__o *)_9__3_0;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v11, v12, v13, v14, v15, v16);
  }
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               v7,
                                                               (System_Func_TSource__TResult__o *)_9__3_0,
                                                               (const MethodInfo_31A5F40 *)Method_System_Linq_Enumerable_Select_RecommendAdviceMessageEntity__string___);
  return (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                  v17,
                                  (const MethodInfo_31AF1E4 *)Method_System_Linq_Enumerable_ToArray_string___);
}


RecommendAdviceMessageEntity_array *RecommendAdviceMessageMaster__GetEntities(
        RecommendAdviceMessageMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *v3; // x0

  if ( (byte_4CEEE4E & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Linq_Enumerable_OfType_RecommendAdviceMessageEntity___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_ToArray_RecommendAdviceMessageEntity___);
    byte_4CEEE4E = 1;
  }
  v3 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                              (System_Collections_IEnumerable_o *)this->fields.list,
                                                              (const MethodInfo_319E9E0 *)Method_System_Linq_Enumerable_OfType_RecommendAdviceMessageEntity___);
  return (RecommendAdviceMessageEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                                 v3,
                                                 (const MethodInfo_31AF1E4 *)Method_System_Linq_Enumerable_ToArray_RecommendAdviceMessageEntity___);
}


// attributes: thunk
RecommendAdviceMessageEntity_array *RecommendAdviceMessageMaster__GetEntities_43139176(
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

  if ( (byte_4CEEE50 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Select_int__RecommendAdviceMessageEntity___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_ToArray_RecommendAdviceMessageEntity___);
    sub_1C7BAE8(&System_Func_int__RecommendAdviceMessageEntity__TypeInfo);
    sub_1C7BAE8(&Method_RecommendAdviceMessageMaster__GetTargetEntity_b__4_0__);
    byte_4CEEE50 = 1;
  }
  v5 = (System_Func_T__TResult__o *)sub_1C7BD34(System_Func_int__RecommendAdviceMessageEntity__TypeInfo);
  System_Func_int__object____ctor(
    v5,
    (Il2CppObject *)this,
    Method_RecommendAdviceMessageMaster__GetTargetEntity_b__4_0__,
    0);
  v6 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                              (System_Collections_Generic_IEnumerable_TSource__o *)ids,
                                                              (System_Func_TSource__TResult__o *)v5,
                                                              (const MethodInfo_31A3214 *)Method_System_Linq_Enumerable_Select_int__RecommendAdviceMessageEntity___);
  return (RecommendAdviceMessageEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                                 v6,
                                                 (const MethodInfo_31AF1E4 *)Method_System_Linq_Enumerable_ToArray_RecommendAdviceMessageEntity___);
}


RecommendAdviceMessageEntity_o *RecommendAdviceMessageMaster___GetTargetEntity_b__4_0(
        RecommendAdviceMessageMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  RecommendAdviceMessageEntity_o *v5; // x19
  const MethodInfo *v6; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CEEE52 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_RecommendAdviceMessageMaster__RecommendAdviceMessageEntity__int__TryGetEntity__);
    sub_1C7BAE8(&RecommendAdviceMessageEntity_TypeInfo);
    byte_4CEEE52 = 1;
  }
  entity = 0;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         id,
         (const MethodInfo_342E348 *)Method_DataMasterBase_RecommendAdviceMessageMaster__RecommendAdviceMessageEntity__int__TryGetEntity__) )
  {
    return (RecommendAdviceMessageEntity_o *)entity;
  }
  v5 = (RecommendAdviceMessageEntity_o *)sub_1C7BD34(RecommendAdviceMessageEntity_TypeInfo);
  RecommendAdviceMessageEntity___ctor(v5, v6);
  return v5;
}


void RecommendAdviceMessageMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CEEE53 & 1) == 0 )
  {
    sub_1C7BAE8(&RecommendAdviceMessageMaster___c_TypeInfo);
    byte_4CEEE53 = 1;
  }
  v1 = (Il2CppObject *)sub_1C7BD34(RecommendAdviceMessageMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  RecommendAdviceMessageMaster___c_TypeInfo->static_fields->__9 = (struct RecommendAdviceMessageMaster___c_o *)v1;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)RecommendAdviceMessageMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_1C7BD40(this, 0);
  return entity->fields.message;
}