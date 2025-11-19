// local variable allocation has failed, the output may be wrong!
void WarBoardSetupRequest__beginRequest(
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
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x3
  WarBoardSetupRequest___c_c *v16; // x0
  System_String_o *v17; // x26
  System_String_o *v18; // x25
  System_Func_T__TResult__o *_9__1_0; // x27
  System_String_o *v20; // x24
  Il2CppObject *v21; // x28
  struct WarBoardSetupRequest___c_StaticFields *static_fields; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  System_String_array *v26; // x0
  Il2CppObject *v27; // x0
  System_String_o *v28; // x0
  __int64 v29; // x1
  const MethodInfo *v30; // x3
  WarBoardSetupRequest___c_c *v31; // x0
  System_String_o *v32; // x25
  System_String_o *v33; // x24
  System_Func_T__TResult__o *_9__1_1; // x26
  System_String_o *v35; // x23
  Il2CppObject *v36; // x27
  struct WarBoardSetupRequest___c_StaticFields *v37; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x0
  System_String_array *v41; // x0
  Il2CppObject *v42; // x0
  System_String_o *v43; // x0
  const MethodInfo *v44; // x3
  WarBoardSetupRequest___c_c *v45; // x0
  System_String_o *v46; // x23
  System_String_o *v47; // x24
  System_Func_T__TResult__o *_9__1_2; // x25
  System_String_o *v49; // x22
  Il2CppObject *v50; // x26
  struct WarBoardSetupRequest___c_StaticFields *v51; // x0
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v54; // x0
  System_String_array *v55; // x0
  Il2CppObject *v56; // x0
  System_String_o *v57; // x0
  const MethodInfo *v58; // x3
  const MethodInfo *v59; // x3
  const MethodInfo *v60; // x1
  System_Collections_Generic_IEnumerable_TSource__o *source; // [xsp+8h] [xbp-78h]

  if ( (byte_4CB7F6D & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Linq_Enumerable_Select_int__string___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Select_long__string___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToArray_string___);
    sub_1C6BA08(&System_Func_long__string__TypeInfo);
    sub_1C6BA08(&System_Func_int__string__TypeInfo);
    sub_1C6BA08(&Method_WarBoardSetupRequest___c__beginRequest_b__1_0__);
    sub_1C6BA08(&Method_WarBoardSetupRequest___c__beginRequest_b__1_1__);
    sub_1C6BA08(&Method_WarBoardSetupRequest___c__beginRequest_b__1_2__);
    sub_1C6BA08(&WarBoardSetupRequest___c_TypeInfo);
    sub_1C6BA08(&StringLiteral_23742/*"stageId"*/);
    sub_1C6BA08(&StringLiteral_23723/*"squareIndexes"*/);
    sub_1C6BA08(&StringLiteral_24619/*"userEquipId"*/);
    sub_1C6BA08(&StringLiteral_24687/*"userSvtEquips"*/);
    sub_1C6BA08(&StringLiteral_22958/*"questPhase"*/);
    sub_1C6BA08(&StringLiteral_24691/*"userSvtIds"*/);
    sub_1C6BA08(&StringLiteral_22954/*"questId"*/);
    sub_1C6BA08(&StringLiteral_808/*","*/);
    sub_1C6BA08(&StringLiteral_16009/*"[{0}]"*/);
    byte_4CB7F6D = 1;
  }
  RequestBase__addField(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_23742/*"stageId"*/,
    stageId,
    *(const MethodInfo **)&questPhase);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22954/*"questId"*/, questId, v14);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22958/*"questPhase"*/, questPhase, v15);
  v16 = WarBoardSetupRequest___c_TypeInfo;
  if ( !WarBoardSetupRequest___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardSetupRequest___c_TypeInfo);
    v16 = WarBoardSetupRequest___c_TypeInfo;
  }
  v17 = (System_String_o *)StringLiteral_808/*","*/;
  v18 = (System_String_o *)StringLiteral_16009/*"[{0}]"*/;
  _9__1_0 = (System_Func_T__TResult__o *)v16->static_fields->__9__1_0;
  v20 = (System_String_o *)StringLiteral_23723/*"squareIndexes"*/;
  if ( !_9__1_0 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v16 = WarBoardSetupRequest___c_TypeInfo;
    }
    v21 = (Il2CppObject *)v16->static_fields->__9;
    _9__1_0 = (System_Func_T__TResult__o *)sub_1C6BC54(System_Func_int__string__TypeInfo);
    System_Func_int__object____ctor(_9__1_0, v21, Method_WarBoardSetupRequest___c__beginRequest_b__1_0__, 0);
    static_fields = WarBoardSetupRequest___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Func_int__string__o *)_9__1_0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__1_0, (int32_t)_9__1_0, v23, v24);
  }
  v25 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)squareIndexes,
                                                               (System_Func_TSource__TResult__o *)_9__1_0,
                                                               (const MethodInfo_316EE54 *)Method_System_Linq_Enumerable_Select_int__string___);
  v26 = (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                 v25,
                                 (const MethodInfo_317B248 *)Method_System_Linq_Enumerable_ToArray_string___);
  v27 = (Il2CppObject *)System_String__Join(v17, v26, 0);
  v28 = System_String__Format(v18, v27, 0);
  if ( !this )
    sub_1C6BC60(v28, v29);
  RequestBase__addField_44471996((RequestBase_o *)this, v20, v28, v30);
  v31 = WarBoardSetupRequest___c_TypeInfo;
  if ( !WarBoardSetupRequest___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardSetupRequest___c_TypeInfo);
    v31 = WarBoardSetupRequest___c_TypeInfo;
  }
  v32 = (System_String_o *)StringLiteral_808/*","*/;
  v33 = (System_String_o *)StringLiteral_16009/*"[{0}]"*/;
  _9__1_1 = (System_Func_T__TResult__o *)v31->static_fields->__9__1_1;
  v35 = (System_String_o *)StringLiteral_24691/*"userSvtIds"*/;
  if ( !_9__1_1 )
  {
    if ( !v31->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v31);
      v31 = WarBoardSetupRequest___c_TypeInfo;
    }
    v36 = (Il2CppObject *)v31->static_fields->__9;
    _9__1_1 = (System_Func_T__TResult__o *)sub_1C6BC54(System_Func_long__string__TypeInfo);
    System_Func_long__object____ctor(_9__1_1, v36, Method_WarBoardSetupRequest___c__beginRequest_b__1_1__, 0);
    v37 = WarBoardSetupRequest___c_TypeInfo->static_fields;
    v37->__9__1_1 = (struct System_Func_long__string__o *)_9__1_1;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v37->__9__1_1, (int32_t)_9__1_1, v38, v39);
  }
  v40 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__object_(
                                                               source,
                                                               (System_Func_TSource__TResult__o *)_9__1_1,
                                                               (const MethodInfo_31705F4 *)Method_System_Linq_Enumerable_Select_long__string___);
  v41 = (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                 v40,
                                 (const MethodInfo_317B248 *)Method_System_Linq_Enumerable_ToArray_string___);
  v42 = (Il2CppObject *)System_String__Join(v32, v41, 0);
  v43 = System_String__Format(v33, v42, 0);
  RequestBase__addField_44471996((RequestBase_o *)this, v35, v43, v44);
  v45 = WarBoardSetupRequest___c_TypeInfo;
  if ( !WarBoardSetupRequest___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardSetupRequest___c_TypeInfo);
    v45 = WarBoardSetupRequest___c_TypeInfo;
  }
  v46 = (System_String_o *)StringLiteral_16009/*"[{0}]"*/;
  v47 = (System_String_o *)StringLiteral_808/*","*/;
  _9__1_2 = (System_Func_T__TResult__o *)v45->static_fields->__9__1_2;
  v49 = (System_String_o *)StringLiteral_24687/*"userSvtEquips"*/;
  if ( !_9__1_2 )
  {
    if ( !v45->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v45);
      v45 = WarBoardSetupRequest___c_TypeInfo;
    }
    v50 = (Il2CppObject *)v45->static_fields->__9;
    _9__1_2 = (System_Func_T__TResult__o *)sub_1C6BC54(System_Func_long__string__TypeInfo);
    System_Func_long__object____ctor(_9__1_2, v50, Method_WarBoardSetupRequest___c__beginRequest_b__1_2__, 0);
    v51 = WarBoardSetupRequest___c_TypeInfo->static_fields;
    v51->__9__1_2 = (struct System_Func_long__string__o *)_9__1_2;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v51->__9__1_2, (int32_t)_9__1_2, v52, v53);
  }
  v54 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)userSvtEquips,
                                                               (System_Func_TSource__TResult__o *)_9__1_2,
                                                               (const MethodInfo_31705F4 *)Method_System_Linq_Enumerable_Select_long__string___);
  v55 = (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                 v54,
                                 (const MethodInfo_317B248 *)Method_System_Linq_Enumerable_ToArray_string___);
  v56 = (Il2CppObject *)System_String__Join(v47, v55, 0);
  v57 = System_String__Format(v46, v56, 0);
  RequestBase__addField_44471996((RequestBase_o *)this, v49, v57, v58);
  RequestBase__addField_44468288((RequestBase_o *)this, (System_String_o *)StringLiteral_24619/*"userEquipId"*/, userEquipId, v59);
  RequestBase__beginRequest((RequestBase_o *)this, v60);
}


System_String_o *WarBoardSetupRequest__getURL(WarBoardSetupRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4CB7F6C & 1) == 0 )
  {
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_24849/*"warBoard/setup"*/);
    byte_4CB7F6C = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_63966792(BaseUrl, (System_String_o *)StringLiteral_24849/*"warBoard/setup"*/, 0);
}


void WarBoardSetupRequest__requestCompleted(
        WarBoardSetupRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  const MethodInfo *v6; // x2
  ResponseData_o *v7; // x20
  System_Collections_Generic_Dictionary_object__object__o *success; // x20
  Il2CppObject *Item; // x0
  const MethodInfo *v10; // x2
  Il2CppObject *v11; // x0
  System_String_o *v12; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  struct NetworkManager_ResultCallbackFunc_o *v14; // x8

  if ( (byte_4CB7F6E & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    sub_1C6BA08(&JsonManager_TypeInfo);
    sub_1C6BA08(&ResponseCommandKind_TypeInfo);
    sub_1C6BA08(&StringLiteral_22301/*"ng"*/);
    sub_1C6BA08(&StringLiteral_24855/*"warBoardData"*/);
    byte_4CB7F6E = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(91, responseList, 0);
  if ( v5
    && (v7 = v5, ResponseData__checkError(v5, v5->fields.resCode, v6))
    && (success = (System_Collections_Generic_Dictionary_object__object__o *)v7->fields.success) != 0 )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             success,
             (Il2CppObject *)StringLiteral_24855/*"warBoardData"*/,
             (const MethodInfo_34BB8BC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v11 = RequestBase__UnpackToMessagePack((RequestBase_o *)Item, Item, v10);
    System_Collections_Generic_Dictionary_object__object___set_Item(
      success,
      (Il2CppObject *)StringLiteral_24855/*"warBoardData"*/,
      v11,
      (const MethodInfo_34BB928 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v12 = JsonManager__toJson((Il2CppObject *)success, 0, 0, 0);
    CallBack = this->fields.CallBack;
    if ( CallBack )
      ((void (__fastcall *)(intptr_t, System_String_o *, intptr_t))CallBack->fields.invoke_impl)(
        CallBack->fields.method_code,
        v12,
        CallBack->fields.method);
  }
  else
  {
    v14 = this->fields.CallBack;
    if ( v14 )
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))v14->fields.invoke_impl)(
        v14->fields.method_code,
        StringLiteral_22301/*"ng"*/,
        v14->fields.method);
  }
}


void WarBoardSetupRequest___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4CB7F6F & 1) == 0 )
  {
    sub_1C6BA08(&WarBoardSetupRequest___c_TypeInfo);
    byte_4CB7F6F = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(WarBoardSetupRequest___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarBoardSetupRequest___c_TypeInfo->static_fields->__9 = (struct WarBoardSetupRequest___c_o *)v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)WarBoardSetupRequest___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void WarBoardSetupRequest___c___ctor(WarBoardSetupRequest___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_String_o *WarBoardSetupRequest___c___beginRequest_b__1_0(
        WarBoardSetupRequest___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  int32_t v4; // [xsp+Ch] [xbp-4h] BYREF

  v4 = x;
  return System_Int32__ToString((int32_t)&v4, 0);
}


System_String_o *WarBoardSetupRequest___c___beginRequest_b__1_1(
        WarBoardSetupRequest___c_o *this,
        int64_t x,
        const MethodInfo *method)
{
  int64_t v4; // [xsp+8h] [xbp-8h] BYREF

  v4 = x;
  return System_Int64__ToString((int64_t)&v4, 0);
}


System_String_o *WarBoardSetupRequest___c___beginRequest_b__1_2(
        WarBoardSetupRequest___c_o *this,
        int64_t x,
        const MethodInfo *method)
{
  int64_t v4; // [xsp+8h] [xbp-8h] BYREF

  v4 = x;
  return System_Int64__ToString((int64_t)&v4, 0);
}