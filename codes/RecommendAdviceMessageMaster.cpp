void __fastcall RecommendAdviceMessageMaster___ctor(RecommendAdviceMessageMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B167EF & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_RecommendAdviceMessageMaster__RecommendAdviceMessageEntity__int___ctor__,
      method,
      v2);
    byte_4B167EF = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    513,
    (const MethodInfo_31B2E00 *)Method_DataMasterBase_RecommendAdviceMessageMaster__RecommendAdviceMessageEntity__int___ctor__);
}


System_String_array *__fastcall RecommendAdviceMessageMaster__GetConvertMessageToId(
        RecommendAdviceMessageMaster_o *this,
        System_Int32_array *ids,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  RecommendAdviceMessageEntity_array *TargetEntity; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  RecommendAdviceMessageMaster___c_c *v17; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x19
  System_Func_object__object__o *_9__3_0; // x20
  Il2CppObject *v20; // x21
  struct RecommendAdviceMessageMaster___c_StaticFields *static_fields; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0

  if ( (byte_4B167EB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_RecommendAdviceMessageEntity__string___, ids, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_string___, v5, v6);
    sub_1BCA7E0(&System_Func_RecommendAdviceMessageEntity__string__TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_RecommendAdviceMessageMaster___c__GetConvertMessageToId_b__3_0__, v9, v10);
    sub_1BCA7E0(&RecommendAdviceMessageMaster___c_TypeInfo, v11, v12);
    byte_4B167EB = 1;
  }
  TargetEntity = RecommendAdviceMessageMaster__GetTargetEntity(this, ids, method);
  v17 = RecommendAdviceMessageMaster___c_TypeInfo;
  v18 = (System_Collections_Generic_IEnumerable_TSource__o *)TargetEntity;
  if ( !RecommendAdviceMessageMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendAdviceMessageMaster___c_TypeInfo, v14);
    v17 = RecommendAdviceMessageMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Func_object__object__o *)v17->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17, v14);
      v17 = RecommendAdviceMessageMaster___c_TypeInfo;
    }
    v20 = (Il2CppObject *)v17->static_fields->__9;
    _9__3_0 = (System_Func_object__object__o *)sub_1BCAA2C(
                                                 System_Func_RecommendAdviceMessageEntity__string__TypeInfo,
                                                 v14,
                                                 v15,
                                                 v16);
    System_Func_object__object____ctor(
      _9__3_0,
      v20,
      Method_RecommendAdviceMessageMaster___c__GetConvertMessageToId_b__3_0__,
      0LL);
    static_fields = RecommendAdviceMessageMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Func_RecommendAdviceMessageEntity__string__o *)_9__3_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__3_0, (int64_t)_9__3_0, v22, v23, v24, v25, v26, v27);
  }
  v28 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               v18,
                                                               (System_Func_TSource__TResult__o *)_9__3_0,
                                                               (const MethodInfo_2F43A70 *)Method_System_Linq_Enumerable_Select_RecommendAdviceMessageEntity__string___);
  return (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                  v28,
                                  (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_string___);
}


RecommendAdviceMessageEntity_array *__fastcall RecommendAdviceMessageMaster__GetEntities(
        RecommendAdviceMessageMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v6; // x0

  if ( (byte_4B167EA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_OfType_RecommendAdviceMessageEntity___, method, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_RecommendAdviceMessageEntity___, v4, v5);
    byte_4B167EA = 1;
  }
  v6 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                              (System_Collections_IEnumerable_o *)this->fields.list,
                                                              (const MethodInfo_2F3AEF4 *)Method_System_Linq_Enumerable_OfType_RecommendAdviceMessageEntity___);
  return (RecommendAdviceMessageEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                                 v6,
                                                 (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_RecommendAdviceMessageEntity___);
}


// attributes: thunk
RecommendAdviceMessageEntity_array *__fastcall RecommendAdviceMessageMaster__GetEntities_40298252(
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
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  System_Func_T__TResult__o *v12; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x0

  if ( (byte_4B167ED & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_int__RecommendAdviceMessageEntity___, ids, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_RecommendAdviceMessageEntity___, v6, v7);
    sub_1BCA7E0(&System_Func_int__RecommendAdviceMessageEntity__TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_RecommendAdviceMessageMaster__GetTargetEntity_b__6_0__, v10, v11);
    byte_4B167ED = 1;
  }
  v12 = (System_Func_T__TResult__o *)sub_1BCAA2C(
                                       System_Func_int__RecommendAdviceMessageEntity__TypeInfo,
                                       ids,
                                       method,
                                       v3);
  System_Func_int__object____ctor(
    v12,
    (Il2CppObject *)this,
    Method_RecommendAdviceMessageMaster__GetTargetEntity_b__6_0__,
    0LL);
  v13 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)ids,
                                                               (System_Func_TSource__TResult__o *)v12,
                                                               (const MethodInfo_2F3F30C *)Method_System_Linq_Enumerable_Select_int__RecommendAdviceMessageEntity___);
  return (RecommendAdviceMessageEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                                 v13,
                                                 (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_RecommendAdviceMessageEntity___);
}


bool __fastcall RecommendAdviceMessageMaster__TryGetEntities(
        RecommendAdviceMessageMaster_o *this,
        RecommendAdviceMessageEntity_array **entities,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x0
  System_Object_array *v8; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4B167EC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_OfType_RecommendAdviceMessageEntity___, entities, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_RecommendAdviceMessageEntity___, v5, v6);
    byte_4B167EC = 1;
  }
  v7 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                              (System_Collections_IEnumerable_o *)this->fields.list,
                                                              (const MethodInfo_2F3AEF4 *)Method_System_Linq_Enumerable_OfType_RecommendAdviceMessageEntity___);
  v8 = System_Linq_Enumerable__ToArray_object_(
         v7,
         (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_RecommendAdviceMessageEntity___);
  *entities = (RecommendAdviceMessageEntity_array *)v8;
  sub_1BCA784((PartyOrganizationUtility_o *)entities, (int64_t)v8, v9, v10, v11, v12, v13, v14);
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)*entities, 0LL);
}


bool __fastcall RecommendAdviceMessageMaster__TryGetEntities_40298912(
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
  sub_1BCA784((PartyOrganizationUtility_o *)entities, (int64_t)TargetEntity, v6, v7, v8, v9, v10, v11);
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)*entities, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall RecommendAdviceMessageMaster__TryGetEntities_40298972(
        RecommendAdviceMessageMaster_o *this,
        RecommendAdviceMessageEntity_array **entities,
        int32_t category,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x20
  RecommendAdviceMessageMaster___c_c *v27; // x8
  System_Func_object__bool__o *_9__7_0; // x21
  Il2CppObject *v29; // x22
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  struct RecommendAdviceMessageMaster___c_StaticFields *static_fields; // x0
  PartyOrganizationUtility_o *p__9__7_0; // x0
  RecommendAdviceMessageEntity_array *v38; // x0
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  RecommendAdviceMessageMaster___c_c *v48; // x8
  Il2CppObject *v49; // x22
  struct RecommendAdviceMessageMaster___c_StaticFields *v50; // x0
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x3
  RecommendAdviceMessageMaster___c_c *v54; // x8
  Il2CppObject *v55; // x22
  struct RecommendAdviceMessageMaster___c_StaticFields *v56; // x0
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x3
  RecommendAdviceMessageMaster___c_c *v60; // x8
  Il2CppObject *v61; // x22
  struct RecommendAdviceMessageMaster___c_StaticFields *v62; // x0
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x3
  RecommendAdviceMessageMaster___c_c *v66; // x8
  Il2CppObject *v67; // x22
  struct RecommendAdviceMessageMaster___c_StaticFields *v68; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v69; // x0

  if ( (byte_4B167EE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_RecommendAdviceMessageEntity___, entities, *(_QWORD *)&category);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_RecommendAdviceMessageEntity___, v7, v8);
    sub_1BCA7E0(&System_Func_RecommendAdviceMessageEntity__bool__TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_RecommendAdviceMessageMaster___c__TryGetEntities_b__7_0__, v11, v12);
    sub_1BCA7E0(&Method_RecommendAdviceMessageMaster___c__TryGetEntities_b__7_1__, v13, v14);
    sub_1BCA7E0(&Method_RecommendAdviceMessageMaster___c__TryGetEntities_b__7_2__, v15, v16);
    sub_1BCA7E0(&Method_RecommendAdviceMessageMaster___c__TryGetEntities_b__7_3__, v17, v18);
    sub_1BCA7E0(&Method_RecommendAdviceMessageMaster___c__TryGetEntities_b__7_4__, v19, v20);
    sub_1BCA7E0(&RecommendAdviceMessageMaster___c_TypeInfo, v21, v22);
    byte_4B167EE = 1;
  }
  switch ( category )
  {
    case 0:
      v26 = (System_Collections_Generic_IEnumerable_TSource__o *)RecommendAdviceMessageMaster__GetEntities(
                                                                   this,
                                                                   (const MethodInfo *)entities);
      v27 = RecommendAdviceMessageMaster___c_TypeInfo;
      if ( !RecommendAdviceMessageMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RecommendAdviceMessageMaster___c_TypeInfo, v23);
        v27 = RecommendAdviceMessageMaster___c_TypeInfo;
      }
      _9__7_0 = (System_Func_object__bool__o *)v27->static_fields->__9__7_0;
      if ( _9__7_0 )
        goto LABEL_36;
      if ( !v27->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v27, v23);
        v27 = RecommendAdviceMessageMaster___c_TypeInfo;
      }
      v29 = (Il2CppObject *)v27->static_fields->__9;
      _9__7_0 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                 System_Func_RecommendAdviceMessageEntity__bool__TypeInfo,
                                                 v23,
                                                 v24,
                                                 v25);
      System_Func_object__bool____ctor(
        _9__7_0,
        v29,
        Method_RecommendAdviceMessageMaster___c__TryGetEntities_b__7_0__,
        0LL);
      static_fields = RecommendAdviceMessageMaster___c_TypeInfo->static_fields;
      static_fields->__9__7_0 = (struct System_Func_RecommendAdviceMessageEntity__bool__o *)_9__7_0;
      p__9__7_0 = (PartyOrganizationUtility_o *)&static_fields->__9__7_0;
      break;
    case 1:
      v26 = (System_Collections_Generic_IEnumerable_TSource__o *)RecommendAdviceMessageMaster__GetEntities(
                                                                   this,
                                                                   (const MethodInfo *)entities);
      v48 = RecommendAdviceMessageMaster___c_TypeInfo;
      if ( !RecommendAdviceMessageMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RecommendAdviceMessageMaster___c_TypeInfo, v45);
        v48 = RecommendAdviceMessageMaster___c_TypeInfo;
      }
      _9__7_0 = (System_Func_object__bool__o *)v48->static_fields->__9__7_1;
      if ( _9__7_0 )
        goto LABEL_36;
      if ( !v48->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v48, v45);
        v48 = RecommendAdviceMessageMaster___c_TypeInfo;
      }
      v49 = (Il2CppObject *)v48->static_fields->__9;
      _9__7_0 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                 System_Func_RecommendAdviceMessageEntity__bool__TypeInfo,
                                                 v45,
                                                 v46,
                                                 v47);
      System_Func_object__bool____ctor(
        _9__7_0,
        v49,
        Method_RecommendAdviceMessageMaster___c__TryGetEntities_b__7_1__,
        0LL);
      v50 = RecommendAdviceMessageMaster___c_TypeInfo->static_fields;
      v50->__9__7_1 = (struct System_Func_RecommendAdviceMessageEntity__bool__o *)_9__7_0;
      p__9__7_0 = (PartyOrganizationUtility_o *)&v50->__9__7_1;
      break;
    case 2:
      v26 = (System_Collections_Generic_IEnumerable_TSource__o *)RecommendAdviceMessageMaster__GetEntities(
                                                                   this,
                                                                   (const MethodInfo *)entities);
      v54 = RecommendAdviceMessageMaster___c_TypeInfo;
      if ( !RecommendAdviceMessageMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RecommendAdviceMessageMaster___c_TypeInfo, v51);
        v54 = RecommendAdviceMessageMaster___c_TypeInfo;
      }
      _9__7_0 = (System_Func_object__bool__o *)v54->static_fields->__9__7_2;
      if ( _9__7_0 )
        goto LABEL_36;
      if ( !v54->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v54, v51);
        v54 = RecommendAdviceMessageMaster___c_TypeInfo;
      }
      v55 = (Il2CppObject *)v54->static_fields->__9;
      _9__7_0 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                 System_Func_RecommendAdviceMessageEntity__bool__TypeInfo,
                                                 v51,
                                                 v52,
                                                 v53);
      System_Func_object__bool____ctor(
        _9__7_0,
        v55,
        Method_RecommendAdviceMessageMaster___c__TryGetEntities_b__7_2__,
        0LL);
      v56 = RecommendAdviceMessageMaster___c_TypeInfo->static_fields;
      v56->__9__7_2 = (struct System_Func_RecommendAdviceMessageEntity__bool__o *)_9__7_0;
      p__9__7_0 = (PartyOrganizationUtility_o *)&v56->__9__7_2;
      break;
    case 3:
      v26 = (System_Collections_Generic_IEnumerable_TSource__o *)RecommendAdviceMessageMaster__GetEntities(
                                                                   this,
                                                                   (const MethodInfo *)entities);
      v60 = RecommendAdviceMessageMaster___c_TypeInfo;
      if ( !RecommendAdviceMessageMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RecommendAdviceMessageMaster___c_TypeInfo, v57);
        v60 = RecommendAdviceMessageMaster___c_TypeInfo;
      }
      _9__7_0 = (System_Func_object__bool__o *)v60->static_fields->__9__7_3;
      if ( _9__7_0 )
        goto LABEL_36;
      if ( !v60->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v60, v57);
        v60 = RecommendAdviceMessageMaster___c_TypeInfo;
      }
      v61 = (Il2CppObject *)v60->static_fields->__9;
      _9__7_0 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                 System_Func_RecommendAdviceMessageEntity__bool__TypeInfo,
                                                 v57,
                                                 v58,
                                                 v59);
      System_Func_object__bool____ctor(
        _9__7_0,
        v61,
        Method_RecommendAdviceMessageMaster___c__TryGetEntities_b__7_3__,
        0LL);
      v62 = RecommendAdviceMessageMaster___c_TypeInfo->static_fields;
      v62->__9__7_3 = (struct System_Func_RecommendAdviceMessageEntity__bool__o *)_9__7_0;
      p__9__7_0 = (PartyOrganizationUtility_o *)&v62->__9__7_3;
      break;
    case 4:
      v26 = (System_Collections_Generic_IEnumerable_TSource__o *)RecommendAdviceMessageMaster__GetEntities(
                                                                   this,
                                                                   (const MethodInfo *)entities);
      v66 = RecommendAdviceMessageMaster___c_TypeInfo;
      if ( !RecommendAdviceMessageMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RecommendAdviceMessageMaster___c_TypeInfo, v63);
        v66 = RecommendAdviceMessageMaster___c_TypeInfo;
      }
      _9__7_0 = (System_Func_object__bool__o *)v66->static_fields->__9__7_4;
      if ( _9__7_0 )
        goto LABEL_36;
      if ( !v66->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v66, v63);
        v66 = RecommendAdviceMessageMaster___c_TypeInfo;
      }
      v67 = (Il2CppObject *)v66->static_fields->__9;
      _9__7_0 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                 System_Func_RecommendAdviceMessageEntity__bool__TypeInfo,
                                                 v63,
                                                 v64,
                                                 v65);
      System_Func_object__bool____ctor(
        _9__7_0,
        v67,
        Method_RecommendAdviceMessageMaster___c__TryGetEntities_b__7_4__,
        0LL);
      v68 = RecommendAdviceMessageMaster___c_TypeInfo->static_fields;
      v68->__9__7_4 = (struct System_Func_RecommendAdviceMessageEntity__bool__o *)_9__7_0;
      p__9__7_0 = (PartyOrganizationUtility_o *)&v68->__9__7_4;
      break;
    default:
      v38 = RecommendAdviceMessageMaster__GetEntities(this, (const MethodInfo *)entities);
      goto LABEL_37;
  }
  sub_1BCA784(p__9__7_0, (int64_t)_9__7_0, v30, v31, v32, v33, v34, v35);
LABEL_36:
  v69 = System_Linq_Enumerable__Where_object_(
          v26,
          (System_Func_TSource__bool__o *)_9__7_0,
          (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_RecommendAdviceMessageEntity___);
  v38 = (RecommendAdviceMessageEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                                v69,
                                                (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_RecommendAdviceMessageEntity___);
LABEL_37:
  *entities = v38;
  sub_1BCA784((PartyOrganizationUtility_o *)entities, (int64_t)v38, v39, v40, v41, v42, v43, v44);
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)*entities, 0LL);
}


// local variable allocation has failed, the output may be wrong!
RecommendAdviceMessageEntity_o *__fastcall RecommendAdviceMessageMaster___GetTargetEntity_b__6_0(
        RecommendAdviceMessageMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  RecommendAdviceMessageEntity_o *v10; // x19
  const MethodInfo *v11; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B167F0 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_RecommendAdviceMessageMaster__RecommendAdviceMessageEntity__int__TryGetEntity__,
      *(_QWORD *)&id,
      method);
    sub_1BCA7E0(&RecommendAdviceMessageEntity_TypeInfo, v5, v6);
    byte_4B167F0 = 1;
  }
  entity = 0LL;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         id,
         (const MethodInfo_31B2E94 *)Method_DataMasterBase_RecommendAdviceMessageMaster__RecommendAdviceMessageEntity__int__TryGetEntity__) )
  {
    return (RecommendAdviceMessageEntity_o *)entity;
  }
  v10 = (RecommendAdviceMessageEntity_o *)sub_1BCAA2C(RecommendAdviceMessageEntity_TypeInfo, v7, v8, v9);
  RecommendAdviceMessageEntity___ctor(v10, v11);
  return v10;
}


void __fastcall RecommendAdviceMessageMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B167F1 & 1) == 0 )
  {
    sub_1BCA7E0(&RecommendAdviceMessageMaster___c_TypeInfo, v1, v2);
    byte_4B167F1 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(RecommendAdviceMessageMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  RecommendAdviceMessageMaster___c_TypeInfo->static_fields->__9 = (struct RecommendAdviceMessageMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)RecommendAdviceMessageMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, 0LL);
  return entity->fields.message;
}


bool __fastcall RecommendAdviceMessageMaster___c___TryGetEntities_b__7_0(
        RecommendAdviceMessageMaster___c_o *this,
        RecommendAdviceMessageEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1BCAA3C(this, 0LL);
  return entity->fields.category == 0;
}


bool __fastcall RecommendAdviceMessageMaster___c___TryGetEntities_b__7_1(
        RecommendAdviceMessageMaster___c_o *this,
        RecommendAdviceMessageEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1BCAA3C(this, 0LL);
  return entity->fields.category == 1;
}


bool __fastcall RecommendAdviceMessageMaster___c___TryGetEntities_b__7_2(
        RecommendAdviceMessageMaster___c_o *this,
        RecommendAdviceMessageEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1BCAA3C(this, 0LL);
  return entity->fields.category == 2;
}


bool __fastcall RecommendAdviceMessageMaster___c___TryGetEntities_b__7_3(
        RecommendAdviceMessageMaster___c_o *this,
        RecommendAdviceMessageEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1BCAA3C(this, 0LL);
  return entity->fields.category == 3;
}


bool __fastcall RecommendAdviceMessageMaster___c___TryGetEntities_b__7_4(
        RecommendAdviceMessageMaster___c_o *this,
        RecommendAdviceMessageEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1BCAA3C(this, 0LL);
  return entity->fields.category == 4;
}