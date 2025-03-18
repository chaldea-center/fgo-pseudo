void __fastcall RecommendAdviceMessageMaster___ctor(RecommendAdviceMessageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C225B1 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_RecommendAdviceMessageMaster__RecommendAdviceMessageEntity__int___ctor__, method);
    byte_4C225B1 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    520,
    (const MethodInfo_3298B24 *)Method_DataMasterBase_RecommendAdviceMessageMaster__RecommendAdviceMessageEntity__int___ctor__);
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
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0

  if ( (byte_4C225AD & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Linq_Enumerable_Select_RecommendAdviceMessageEntity__string___, ids);
    sub_1C3B764(&Method_System_Linq_Enumerable_ToArray_string___, v5);
    sub_1C3B764(&System_Func_RecommendAdviceMessageEntity__string__TypeInfo, v6);
    sub_1C3B764(&Method_RecommendAdviceMessageMaster___c__GetConvertMessageToId_b__3_0__, v7);
    sub_1C3B764(&RecommendAdviceMessageMaster___c_TypeInfo, v8);
    byte_4C225AD = 1;
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
    _9__3_0 = (System_Func_object__object__o *)sub_1C3B9B0(System_Func_RecommendAdviceMessageEntity__string__TypeInfo);
    System_Func_object__object____ctor(
      _9__3_0,
      v13,
      Method_RecommendAdviceMessageMaster___c__GetConvertMessageToId_b__3_0__,
      0LL);
    static_fields = RecommendAdviceMessageMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Func_RecommendAdviceMessageEntity__string__o *)_9__3_0;
    sub_1C3B708((PartyOrganizationUtility_o *)&static_fields->__9__3_0, (int64_t)_9__3_0, v15, v16, v17, v18, v19, v20);
  }
  v21 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               v11,
                                                               (System_Func_TSource__TResult__o *)_9__3_0,
                                                               (const MethodInfo_3022A9C *)Method_System_Linq_Enumerable_Select_RecommendAdviceMessageEntity__string___);
  return (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                  v21,
                                  (const MethodInfo_302ACC8 *)Method_System_Linq_Enumerable_ToArray_string___);
}


RecommendAdviceMessageEntity_array *__fastcall RecommendAdviceMessageMaster__GetEntities(
        RecommendAdviceMessageMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v4; // x0

  if ( (byte_4C225AC & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Linq_Enumerable_OfType_RecommendAdviceMessageEntity___, method);
    sub_1C3B764(&Method_System_Linq_Enumerable_ToArray_RecommendAdviceMessageEntity___, v3);
    byte_4C225AC = 1;
  }
  v4 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                              (System_Collections_IEnumerable_o *)this->fields.list,
                                                              (const MethodInfo_3019DB0 *)Method_System_Linq_Enumerable_OfType_RecommendAdviceMessageEntity___);
  return (RecommendAdviceMessageEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                                 v4,
                                                 (const MethodInfo_302ACC8 *)Method_System_Linq_Enumerable_ToArray_RecommendAdviceMessageEntity___);
}


// attributes: thunk
RecommendAdviceMessageEntity_array *__fastcall RecommendAdviceMessageMaster__GetEntities_41030476(
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

  if ( (byte_4C225AF & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Linq_Enumerable_Select_int__RecommendAdviceMessageEntity___, ids);
    sub_1C3B764(&Method_System_Linq_Enumerable_ToArray_RecommendAdviceMessageEntity___, v5);
    sub_1C3B764(&System_Func_int__RecommendAdviceMessageEntity__TypeInfo, v6);
    sub_1C3B764(&Method_RecommendAdviceMessageMaster__GetTargetEntity_b__6_0__, v7);
    byte_4C225AF = 1;
  }
  v8 = (System_Func_T__TResult__o *)sub_1C3B9B0(System_Func_int__RecommendAdviceMessageEntity__TypeInfo);
  System_Func_int__object____ctor(
    v8,
    (Il2CppObject *)this,
    Method_RecommendAdviceMessageMaster__GetTargetEntity_b__6_0__,
    0LL);
  v9 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                              (System_Collections_Generic_IEnumerable_TSource__o *)ids,
                                                              (System_Func_TSource__TResult__o *)v8,
                                                              (const MethodInfo_30203C8 *)Method_System_Linq_Enumerable_Select_int__RecommendAdviceMessageEntity___);
  return (RecommendAdviceMessageEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                                 v9,
                                                 (const MethodInfo_302ACC8 *)Method_System_Linq_Enumerable_ToArray_RecommendAdviceMessageEntity___);
}


bool __fastcall RecommendAdviceMessageMaster__TryGetEntities(
        RecommendAdviceMessageMaster_o *this,
        RecommendAdviceMessageEntity_array **entities,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v6; // x0
  System_Object_array *v7; // x0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4C225AE & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Linq_Enumerable_OfType_RecommendAdviceMessageEntity___, entities);
    sub_1C3B764(&Method_System_Linq_Enumerable_ToArray_RecommendAdviceMessageEntity___, v5);
    byte_4C225AE = 1;
  }
  v6 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                              (System_Collections_IEnumerable_o *)this->fields.list,
                                                              (const MethodInfo_3019DB0 *)Method_System_Linq_Enumerable_OfType_RecommendAdviceMessageEntity___);
  v7 = System_Linq_Enumerable__ToArray_object_(
         v6,
         (const MethodInfo_302ACC8 *)Method_System_Linq_Enumerable_ToArray_RecommendAdviceMessageEntity___);
  *entities = (RecommendAdviceMessageEntity_array *)v7;
  sub_1C3B708((PartyOrganizationUtility_o *)entities, (int64_t)v7, v8, v9, v10, v11, v12, v13);
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)*entities, 0LL);
}


bool __fastcall RecommendAdviceMessageMaster__TryGetEntities_41031136(
        RecommendAdviceMessageMaster_o *this,
        RecommendAdviceMessageEntity_array **entities,
        System_Int32_array *ids,
        const MethodInfo *method)
{
  RecommendAdviceMessageEntity_array *TargetEntity; // x0
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  TargetEntity = RecommendAdviceMessageMaster__GetTargetEntity(this, ids, (const MethodInfo *)ids);
  *entities = TargetEntity;
  sub_1C3B708((PartyOrganizationUtility_o *)entities, (int64_t)TargetEntity, v6, v7, v8, v9, v10, v11);
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)*entities, 0LL);
}


bool __fastcall RecommendAdviceMessageMaster__TryGetEntities_41031196(
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
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x20
  RecommendAdviceMessageMaster___c_c *v16; // x8
  System_Func_object__bool__o *_9__7_0; // x21
  Il2CppObject *v18; // x22
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  struct RecommendAdviceMessageMaster___c_StaticFields *static_fields; // x0
  PartyOrganizationUtility_o *p__9__7_0; // x0
  RecommendAdviceMessageEntity_array *v27; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  RecommendAdviceMessageMaster___c_c *v34; // x8
  Il2CppObject *v35; // x22
  struct RecommendAdviceMessageMaster___c_StaticFields *v36; // x0
  RecommendAdviceMessageMaster___c_c *v37; // x8
  Il2CppObject *v38; // x22
  struct RecommendAdviceMessageMaster___c_StaticFields *v39; // x0
  RecommendAdviceMessageMaster___c_c *v40; // x8
  Il2CppObject *v41; // x22
  struct RecommendAdviceMessageMaster___c_StaticFields *v42; // x0
  RecommendAdviceMessageMaster___c_c *v43; // x8
  Il2CppObject *v44; // x22
  struct RecommendAdviceMessageMaster___c_StaticFields *v45; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v46; // x0

  if ( (byte_4C225B0 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Linq_Enumerable_ToArray_RecommendAdviceMessageEntity___, entities);
    sub_1C3B764(&Method_System_Linq_Enumerable_Where_RecommendAdviceMessageEntity___, v7);
    sub_1C3B764(&System_Func_RecommendAdviceMessageEntity__bool__TypeInfo, v8);
    sub_1C3B764(&Method_RecommendAdviceMessageMaster___c__TryGetEntities_b__7_0__, v9);
    sub_1C3B764(&Method_RecommendAdviceMessageMaster___c__TryGetEntities_b__7_1__, v10);
    sub_1C3B764(&Method_RecommendAdviceMessageMaster___c__TryGetEntities_b__7_2__, v11);
    sub_1C3B764(&Method_RecommendAdviceMessageMaster___c__TryGetEntities_b__7_3__, v12);
    sub_1C3B764(&Method_RecommendAdviceMessageMaster___c__TryGetEntities_b__7_4__, v13);
    sub_1C3B764(&RecommendAdviceMessageMaster___c_TypeInfo, v14);
    byte_4C225B0 = 1;
  }
  switch ( category )
  {
    case 0:
      v15 = (System_Collections_Generic_IEnumerable_TSource__o *)RecommendAdviceMessageMaster__GetEntities(
                                                                   this,
                                                                   (const MethodInfo *)entities);
      v16 = RecommendAdviceMessageMaster___c_TypeInfo;
      if ( !RecommendAdviceMessageMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RecommendAdviceMessageMaster___c_TypeInfo);
        v16 = RecommendAdviceMessageMaster___c_TypeInfo;
      }
      _9__7_0 = (System_Func_object__bool__o *)v16->static_fields->__9__7_0;
      if ( _9__7_0 )
        goto LABEL_36;
      if ( !v16->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v16);
        v16 = RecommendAdviceMessageMaster___c_TypeInfo;
      }
      v18 = (Il2CppObject *)v16->static_fields->__9;
      _9__7_0 = (System_Func_object__bool__o *)sub_1C3B9B0(System_Func_RecommendAdviceMessageEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__7_0,
        v18,
        Method_RecommendAdviceMessageMaster___c__TryGetEntities_b__7_0__,
        0LL);
      static_fields = RecommendAdviceMessageMaster___c_TypeInfo->static_fields;
      static_fields->__9__7_0 = (struct System_Func_RecommendAdviceMessageEntity__bool__o *)_9__7_0;
      p__9__7_0 = (PartyOrganizationUtility_o *)&static_fields->__9__7_0;
      break;
    case 1:
      v15 = (System_Collections_Generic_IEnumerable_TSource__o *)RecommendAdviceMessageMaster__GetEntities(
                                                                   this,
                                                                   (const MethodInfo *)entities);
      v34 = RecommendAdviceMessageMaster___c_TypeInfo;
      if ( !RecommendAdviceMessageMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RecommendAdviceMessageMaster___c_TypeInfo);
        v34 = RecommendAdviceMessageMaster___c_TypeInfo;
      }
      _9__7_0 = (System_Func_object__bool__o *)v34->static_fields->__9__7_1;
      if ( _9__7_0 )
        goto LABEL_36;
      if ( !v34->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v34);
        v34 = RecommendAdviceMessageMaster___c_TypeInfo;
      }
      v35 = (Il2CppObject *)v34->static_fields->__9;
      _9__7_0 = (System_Func_object__bool__o *)sub_1C3B9B0(System_Func_RecommendAdviceMessageEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__7_0,
        v35,
        Method_RecommendAdviceMessageMaster___c__TryGetEntities_b__7_1__,
        0LL);
      v36 = RecommendAdviceMessageMaster___c_TypeInfo->static_fields;
      v36->__9__7_1 = (struct System_Func_RecommendAdviceMessageEntity__bool__o *)_9__7_0;
      p__9__7_0 = (PartyOrganizationUtility_o *)&v36->__9__7_1;
      break;
    case 2:
      v15 = (System_Collections_Generic_IEnumerable_TSource__o *)RecommendAdviceMessageMaster__GetEntities(
                                                                   this,
                                                                   (const MethodInfo *)entities);
      v37 = RecommendAdviceMessageMaster___c_TypeInfo;
      if ( !RecommendAdviceMessageMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RecommendAdviceMessageMaster___c_TypeInfo);
        v37 = RecommendAdviceMessageMaster___c_TypeInfo;
      }
      _9__7_0 = (System_Func_object__bool__o *)v37->static_fields->__9__7_2;
      if ( _9__7_0 )
        goto LABEL_36;
      if ( !v37->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v37);
        v37 = RecommendAdviceMessageMaster___c_TypeInfo;
      }
      v38 = (Il2CppObject *)v37->static_fields->__9;
      _9__7_0 = (System_Func_object__bool__o *)sub_1C3B9B0(System_Func_RecommendAdviceMessageEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__7_0,
        v38,
        Method_RecommendAdviceMessageMaster___c__TryGetEntities_b__7_2__,
        0LL);
      v39 = RecommendAdviceMessageMaster___c_TypeInfo->static_fields;
      v39->__9__7_2 = (struct System_Func_RecommendAdviceMessageEntity__bool__o *)_9__7_0;
      p__9__7_0 = (PartyOrganizationUtility_o *)&v39->__9__7_2;
      break;
    case 3:
      v15 = (System_Collections_Generic_IEnumerable_TSource__o *)RecommendAdviceMessageMaster__GetEntities(
                                                                   this,
                                                                   (const MethodInfo *)entities);
      v40 = RecommendAdviceMessageMaster___c_TypeInfo;
      if ( !RecommendAdviceMessageMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RecommendAdviceMessageMaster___c_TypeInfo);
        v40 = RecommendAdviceMessageMaster___c_TypeInfo;
      }
      _9__7_0 = (System_Func_object__bool__o *)v40->static_fields->__9__7_3;
      if ( _9__7_0 )
        goto LABEL_36;
      if ( !v40->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v40);
        v40 = RecommendAdviceMessageMaster___c_TypeInfo;
      }
      v41 = (Il2CppObject *)v40->static_fields->__9;
      _9__7_0 = (System_Func_object__bool__o *)sub_1C3B9B0(System_Func_RecommendAdviceMessageEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__7_0,
        v41,
        Method_RecommendAdviceMessageMaster___c__TryGetEntities_b__7_3__,
        0LL);
      v42 = RecommendAdviceMessageMaster___c_TypeInfo->static_fields;
      v42->__9__7_3 = (struct System_Func_RecommendAdviceMessageEntity__bool__o *)_9__7_0;
      p__9__7_0 = (PartyOrganizationUtility_o *)&v42->__9__7_3;
      break;
    case 4:
      v15 = (System_Collections_Generic_IEnumerable_TSource__o *)RecommendAdviceMessageMaster__GetEntities(
                                                                   this,
                                                                   (const MethodInfo *)entities);
      v43 = RecommendAdviceMessageMaster___c_TypeInfo;
      if ( !RecommendAdviceMessageMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RecommendAdviceMessageMaster___c_TypeInfo);
        v43 = RecommendAdviceMessageMaster___c_TypeInfo;
      }
      _9__7_0 = (System_Func_object__bool__o *)v43->static_fields->__9__7_4;
      if ( _9__7_0 )
        goto LABEL_36;
      if ( !v43->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v43);
        v43 = RecommendAdviceMessageMaster___c_TypeInfo;
      }
      v44 = (Il2CppObject *)v43->static_fields->__9;
      _9__7_0 = (System_Func_object__bool__o *)sub_1C3B9B0(System_Func_RecommendAdviceMessageEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__7_0,
        v44,
        Method_RecommendAdviceMessageMaster___c__TryGetEntities_b__7_4__,
        0LL);
      v45 = RecommendAdviceMessageMaster___c_TypeInfo->static_fields;
      v45->__9__7_4 = (struct System_Func_RecommendAdviceMessageEntity__bool__o *)_9__7_0;
      p__9__7_0 = (PartyOrganizationUtility_o *)&v45->__9__7_4;
      break;
    default:
      v27 = RecommendAdviceMessageMaster__GetEntities(this, (const MethodInfo *)entities);
      goto LABEL_37;
  }
  sub_1C3B708(p__9__7_0, (int64_t)_9__7_0, v19, v20, v21, v22, v23, v24);
LABEL_36:
  v46 = System_Linq_Enumerable__Where_object_(
          v15,
          (System_Func_TSource__bool__o *)_9__7_0,
          (const MethodInfo_3030BDC *)Method_System_Linq_Enumerable_Where_RecommendAdviceMessageEntity___);
  v27 = (RecommendAdviceMessageEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                                v46,
                                                (const MethodInfo_302ACC8 *)Method_System_Linq_Enumerable_ToArray_RecommendAdviceMessageEntity___);
LABEL_37:
  *entities = v27;
  sub_1C3B708((PartyOrganizationUtility_o *)entities, (int64_t)v27, v28, v29, v30, v31, v32, v33);
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

  if ( (byte_4C225B2 & 1) == 0 )
  {
    sub_1C3B764(
      &Method_DataMasterBase_RecommendAdviceMessageMaster__RecommendAdviceMessageEntity__int__TryGetEntity__,
      *(_QWORD *)&id);
    sub_1C3B764(&RecommendAdviceMessageEntity_TypeInfo, v5);
    byte_4C225B2 = 1;
  }
  entity = 0LL;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         id,
         (const MethodInfo_329AE94 *)Method_DataMasterBase_RecommendAdviceMessageMaster__RecommendAdviceMessageEntity__int__TryGetEntity__) )
  {
    return (RecommendAdviceMessageEntity_o *)entity;
  }
  v6 = (RecommendAdviceMessageEntity_o *)sub_1C3B9B0(RecommendAdviceMessageEntity_TypeInfo);
  RecommendAdviceMessageEntity___ctor(v6, v7);
  return v6;
}


void __fastcall RecommendAdviceMessageMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4C225B3 & 1) == 0 )
  {
    sub_1C3B764(&RecommendAdviceMessageMaster___c_TypeInfo, v1);
    byte_4C225B3 = 1;
  }
  v2 = (Il2CppObject *)sub_1C3B9B0(RecommendAdviceMessageMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  RecommendAdviceMessageMaster___c_TypeInfo->static_fields->__9 = (struct RecommendAdviceMessageMaster___c_o *)v2;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)RecommendAdviceMessageMaster___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C3B9C0(this, 0LL);
  return entity->fields.message;
}


bool __fastcall RecommendAdviceMessageMaster___c___TryGetEntities_b__7_0(
        RecommendAdviceMessageMaster___c_o *this,
        RecommendAdviceMessageEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C3B9C0(this, 0LL);
  return entity->fields.category == 0;
}


bool __fastcall RecommendAdviceMessageMaster___c___TryGetEntities_b__7_1(
        RecommendAdviceMessageMaster___c_o *this,
        RecommendAdviceMessageEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C3B9C0(this, 0LL);
  return entity->fields.category == 1;
}


bool __fastcall RecommendAdviceMessageMaster___c___TryGetEntities_b__7_2(
        RecommendAdviceMessageMaster___c_o *this,
        RecommendAdviceMessageEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C3B9C0(this, 0LL);
  return entity->fields.category == 2;
}


bool __fastcall RecommendAdviceMessageMaster___c___TryGetEntities_b__7_3(
        RecommendAdviceMessageMaster___c_o *this,
        RecommendAdviceMessageEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C3B9C0(this, 0LL);
  return entity->fields.category == 3;
}


bool __fastcall RecommendAdviceMessageMaster___c___TryGetEntities_b__7_4(
        RecommendAdviceMessageMaster___c_o *this,
        RecommendAdviceMessageEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C3B9C0(this, 0LL);
  return entity->fields.category == 4;
}