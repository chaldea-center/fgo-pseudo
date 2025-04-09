void __fastcall WarBoardSetupRequest___ctor(WarBoardSetupRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardSetupRequest__beginRequest(
        WarBoardSetupRequest_o *this,
        int32_t stageId,
        int32_t questId,
        int32_t questPhase,
        System_Int32_array *squareIndexes,
        System_Int64_array *userSvtIds,
        System_Int64_array *userSvtEquips,
        int64_t userEquipId,
        const MethodInfo *method)
{
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  WarBoardSetupRequest___c_c *v31; // x0
  System_String_o *v32; // x26
  System_String_o *v33; // x25
  System_Func_T__TResult__o *_9__1_0; // x27
  System_String_o *v35; // x24
  Il2CppObject *v36; // x28
  struct WarBoardSetupRequest___c_StaticFields *static_fields; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x0
  System_String_array *v41; // x0
  Il2CppObject *v42; // x0
  System_String_o *v43; // x0
  __int64 v44; // x1
  WarBoardSetupRequest___c_c *v45; // x0
  System_String_o *v46; // x25
  System_String_o *v47; // x24
  System_Func_T__TResult__o *_9__1_1; // x26
  System_String_o *v49; // x23
  Il2CppObject *v50; // x27
  struct WarBoardSetupRequest___c_StaticFields *v51; // x0
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v54; // x0
  System_String_array *v55; // x0
  Il2CppObject *v56; // x0
  System_String_o *v57; // x0
  WarBoardSetupRequest___c_c *v58; // x0
  System_String_o *v59; // x23
  System_String_o *v60; // x24
  System_Func_T__TResult__o *_9__1_2; // x25
  System_String_o *v62; // x22
  Il2CppObject *v63; // x26
  struct WarBoardSetupRequest___c_StaticFields *v64; // x0
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v67; // x0
  System_String_array *v68; // x0
  Il2CppObject *v69; // x0
  System_String_o *v70; // x0
  System_Collections_Generic_IEnumerable_TSource__o *source; // [xsp+8h] [xbp-78h]

  if ( (byte_49BC982 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Linq_Enumerable_Select_int__string___, *(_QWORD *)&stageId);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Select_long__string___, v14);
    sub_1B4CF90(&Method_System_Linq_Enumerable_ToArray_string___, v15);
    sub_1B4CF90(&System_Func_long__string__TypeInfo, v16);
    sub_1B4CF90(&System_Func_int__string__TypeInfo, v17);
    sub_1B4CF90(&Method_WarBoardSetupRequest___c__beginRequest_b__1_0__, v18);
    sub_1B4CF90(&Method_WarBoardSetupRequest___c__beginRequest_b__1_1__, v19);
    sub_1B4CF90(&Method_WarBoardSetupRequest___c__beginRequest_b__1_2__, v20);
    sub_1B4CF90(&WarBoardSetupRequest___c_TypeInfo, v21);
    sub_1B4CF90(&StringLiteral_23204/*"stageId"*/, v22);
    sub_1B4CF90(&StringLiteral_23184/*"squareIndexes"*/, v23);
    sub_1B4CF90(&StringLiteral_24099/*"userEquipId"*/, v24);
    sub_1B4CF90(&StringLiteral_24166/*"userSvtEquips"*/, v25);
    sub_1B4CF90(&StringLiteral_22418/*"questPhase"*/, v26);
    sub_1B4CF90(&StringLiteral_24168/*"userSvtIds"*/, v27);
    sub_1B4CF90(&StringLiteral_22416/*"questId"*/, v28);
    sub_1B4CF90(&StringLiteral_816/*","*/, v29);
    sub_1B4CF90(&StringLiteral_15719/*"[{0}]"*/, v30);
    byte_49BC982 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23204/*"stageId"*/, stageId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22416/*"questId"*/, questId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22418/*"questPhase"*/, questPhase, 0LL);
  v31 = WarBoardSetupRequest___c_TypeInfo;
  if ( !WarBoardSetupRequest___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardSetupRequest___c_TypeInfo);
    v31 = WarBoardSetupRequest___c_TypeInfo;
  }
  v32 = (System_String_o *)StringLiteral_816/*","*/;
  v33 = (System_String_o *)StringLiteral_15719/*"[{0}]"*/;
  _9__1_0 = (System_Func_T__TResult__o *)v31->static_fields->__9__1_0;
  v35 = (System_String_o *)StringLiteral_23184/*"squareIndexes"*/;
  if ( !_9__1_0 )
  {
    if ( !v31->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v31);
      v31 = WarBoardSetupRequest___c_TypeInfo;
    }
    v36 = (Il2CppObject *)v31->static_fields->__9;
    _9__1_0 = (System_Func_T__TResult__o *)sub_1B4D1DC(System_Func_int__string__TypeInfo);
    System_Func_int__object____ctor(_9__1_0, v36, Method_WarBoardSetupRequest___c__beginRequest_b__1_0__, 0LL);
    static_fields = WarBoardSetupRequest___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Func_int__string__o *)_9__1_0;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__1_0, (int32_t)_9__1_0, v38, v39);
  }
  v40 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)squareIndexes,
                                                               (System_Func_TSource__TResult__o *)_9__1_0,
                                                               (const MethodInfo_2F31AE4 *)Method_System_Linq_Enumerable_Select_int__string___);
  v41 = (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                 v40,
                                 (const MethodInfo_2F3C3E4 *)Method_System_Linq_Enumerable_ToArray_string___);
  v42 = (Il2CppObject *)System_String__Join(v32, v41, 0LL);
  v43 = System_String__Format(v33, v42, 0LL);
  if ( !this )
    sub_1B4D1EC(v43, v44);
  RequestBase__addField_41748396((RequestBase_o *)this, v35, v43, 0LL);
  v45 = WarBoardSetupRequest___c_TypeInfo;
  if ( !WarBoardSetupRequest___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardSetupRequest___c_TypeInfo);
    v45 = WarBoardSetupRequest___c_TypeInfo;
  }
  v46 = (System_String_o *)StringLiteral_816/*","*/;
  v47 = (System_String_o *)StringLiteral_15719/*"[{0}]"*/;
  _9__1_1 = (System_Func_T__TResult__o *)v45->static_fields->__9__1_1;
  v49 = (System_String_o *)StringLiteral_24168/*"userSvtIds"*/;
  if ( !_9__1_1 )
  {
    if ( !v45->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v45);
      v45 = WarBoardSetupRequest___c_TypeInfo;
    }
    v50 = (Il2CppObject *)v45->static_fields->__9;
    _9__1_1 = (System_Func_T__TResult__o *)sub_1B4D1DC(System_Func_long__string__TypeInfo);
    System_Func_long__object____ctor(_9__1_1, v50, Method_WarBoardSetupRequest___c__beginRequest_b__1_1__, 0LL);
    v51 = WarBoardSetupRequest___c_TypeInfo->static_fields;
    v51->__9__1_1 = (struct System_Func_long__string__o *)_9__1_1;
    sub_1B4CF34((CGThumbnailListItem_o *)&v51->__9__1_1, (int32_t)_9__1_1, v52, v53);
  }
  v54 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__object_(
                                                               source,
                                                               (System_Func_TSource__TResult__o *)_9__1_1,
                                                               (const MethodInfo_2F32C9C *)Method_System_Linq_Enumerable_Select_long__string___);
  v55 = (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                 v54,
                                 (const MethodInfo_2F3C3E4 *)Method_System_Linq_Enumerable_ToArray_string___);
  v56 = (Il2CppObject *)System_String__Join(v46, v55, 0LL);
  v57 = System_String__Format(v47, v56, 0LL);
  RequestBase__addField_41748396((RequestBase_o *)this, v49, v57, 0LL);
  v58 = WarBoardSetupRequest___c_TypeInfo;
  if ( !WarBoardSetupRequest___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardSetupRequest___c_TypeInfo);
    v58 = WarBoardSetupRequest___c_TypeInfo;
  }
  v59 = (System_String_o *)StringLiteral_15719/*"[{0}]"*/;
  v60 = (System_String_o *)StringLiteral_816/*","*/;
  _9__1_2 = (System_Func_T__TResult__o *)v58->static_fields->__9__1_2;
  v62 = (System_String_o *)StringLiteral_24166/*"userSvtEquips"*/;
  if ( !_9__1_2 )
  {
    if ( !v58->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v58);
      v58 = WarBoardSetupRequest___c_TypeInfo;
    }
    v63 = (Il2CppObject *)v58->static_fields->__9;
    _9__1_2 = (System_Func_T__TResult__o *)sub_1B4D1DC(System_Func_long__string__TypeInfo);
    System_Func_long__object____ctor(_9__1_2, v63, Method_WarBoardSetupRequest___c__beginRequest_b__1_2__, 0LL);
    v64 = WarBoardSetupRequest___c_TypeInfo->static_fields;
    v64->__9__1_2 = (struct System_Func_long__string__o *)_9__1_2;
    sub_1B4CF34((CGThumbnailListItem_o *)&v64->__9__1_2, (int32_t)_9__1_2, v65, v66);
  }
  v67 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)userSvtEquips,
                                                               (System_Func_TSource__TResult__o *)_9__1_2,
                                                               (const MethodInfo_2F32C9C *)Method_System_Linq_Enumerable_Select_long__string___);
  v68 = (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                 v67,
                                 (const MethodInfo_2F3C3E4 *)Method_System_Linq_Enumerable_ToArray_string___);
  v69 = (Il2CppObject *)System_String__Join(v60, v68, 0LL);
  v70 = System_String__Format(v59, v69, 0LL);
  RequestBase__addField_41748396((RequestBase_o *)this, v62, v70, 0LL);
  RequestBase__addField_41754736((RequestBase_o *)this, (System_String_o *)StringLiteral_24099/*"userEquipId"*/, userEquipId, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall WarBoardSetupRequest__getURL(WarBoardSetupRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_49BC981 & 1) == 0 )
  {
    sub_1B4CF90(&NetworkManager_TypeInfo, method);
    sub_1B4CF90(&StringLiteral_24333/*"warBoard/setup"*/, v2);
    byte_49BC981 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61093468(BaseUrl, (System_String_o *)StringLiteral_24333/*"warBoard/setup"*/, 0LL);
}


void __fastcall WarBoardSetupRequest__requestCompleted(
        WarBoardSetupRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  ResponseData_o *v10; // x0
  const MethodInfo *v11; // x2
  ResponseData_o *v12; // x20
  System_Collections_Generic_Dictionary_object__object__o *success; // x20
  Il2CppObject *Item; // x0
  Il2CppObject *v15; // x0
  System_String_o *v16; // x1

  if ( (byte_49BC983 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, responseList);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__, v5);
    sub_1B4CF90(&JsonManager_TypeInfo, v6);
    sub_1B4CF90(&ResponseCommandKind_TypeInfo, v7);
    sub_1B4CF90(&StringLiteral_21779/*"ng"*/, v8);
    sub_1B4CF90(&StringLiteral_24339/*"warBoardData"*/, v9);
    byte_49BC983 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v10 = ResponseCommandKind__SearchData(91, responseList, 0LL);
  if ( v10
    && (v12 = v10, ResponseData__checkError(v10, v10->fields.resCode, v11))
    && (success = (System_Collections_Generic_Dictionary_object__object__o *)v12->fields.success) != 0LL )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             success,
             (Il2CppObject *)StringLiteral_24339/*"warBoardData"*/,
             (const MethodInfo_3257A98 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v15 = RequestBase__UnpackToMessagePack((RequestBase_o *)this, Item, 0LL);
    System_Collections_Generic_Dictionary_object__object___set_Item(
      success,
      (Il2CppObject *)StringLiteral_24339/*"warBoardData"*/,
      v15,
      (const MethodInfo_3257B04 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v16 = JsonManager__toJson((Il2CppObject *)success, 0, 0, 0LL);
  }
  else
  {
    v16 = (System_String_o *)StringLiteral_21779/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v16, 0LL);
}


void __fastcall WarBoardSetupRequest___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_49BC984 & 1) == 0 )
  {
    sub_1B4CF90(&WarBoardSetupRequest___c_TypeInfo, v1);
    byte_49BC984 = 1;
  }
  v2 = (Il2CppObject *)sub_1B4D1DC(WarBoardSetupRequest___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  WarBoardSetupRequest___c_TypeInfo->static_fields->__9 = (struct WarBoardSetupRequest___c_o *)v2;
  sub_1B4CF34((CGThumbnailListItem_o *)WarBoardSetupRequest___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall WarBoardSetupRequest___c___ctor(WarBoardSetupRequest___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall WarBoardSetupRequest___c___beginRequest_b__1_0(
        WarBoardSetupRequest___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  int32_t v4; // [xsp+Ch] [xbp-4h] BYREF

  v4 = x;
  return System_Int32__ToString((int32_t)&v4, 0LL);
}


System_String_o *__fastcall WarBoardSetupRequest___c___beginRequest_b__1_1(
        WarBoardSetupRequest___c_o *this,
        int64_t x,
        const MethodInfo *method)
{
  int64_t v4; // [xsp+8h] [xbp-8h] BYREF

  v4 = x;
  return System_Int64__ToString((int64_t)&v4, 0LL);
}


System_String_o *__fastcall WarBoardSetupRequest___c___beginRequest_b__1_2(
        WarBoardSetupRequest___c_o *this,
        int64_t x,
        const MethodInfo *method)
{
  int64_t v4; // [xsp+8h] [xbp-8h] BYREF

  v4 = x;
  return System_Int64__ToString((int64_t)&v4, 0LL);
}