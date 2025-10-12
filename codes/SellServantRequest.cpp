void SellServantRequest__beginRequest(
        SellServantRequest_o *this,
        System_Int64_array *servantUserIds,
        System_Int64_array *commandCodeUserIds,
        const MethodInfo *method)
{
  SellServantRequest___c_c *v7; // x0
  System_Func_T__TResult__o *_9__2_0; // x22
  Il2CppObject *v9; // x23
  struct SellServantRequest___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x0
  System_Collections_Generic_List_TSource__o *v14; // x0
  SellServantRequest___c_c *v15; // x8
  Il2CppObject *v16; // x21
  System_Func_T__TResult__o *_9__2_1; // x22
  Il2CppObject *v18; // x23
  struct SellServantRequest___c_StaticFields *v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  Il2CppObject *v23; // x20
  MiniMessagePack_MiniMessagePacker_o *v24; // x22
  __int64 v25; // x0
  System_Byte_array *v26; // x21
  System_String_o *v27; // x0
  const MethodInfo *v28; // x3
  MiniMessagePack_MiniMessagePacker_o *v29; // x21
  System_Byte_array *v30; // x0
  System_String_o *v31; // x0
  const MethodInfo *v32; // x3
  const MethodInfo *v33; // x1

  if ( (byte_4C39589 & 1) == 0 )
  {
    sub_1C32C20(&System_Convert_TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_Select_long__SellServantRequest_UseSvtHash___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToList_SellServantRequest_UseSvtHash___);
    sub_1C32C20(&System_Func_long__SellServantRequest_UseSvtHash__TypeInfo);
    sub_1C32C20(&MiniMessagePack_MiniMessagePacker_TypeInfo);
    sub_1C32C20(&Method_SellServantRequest___c__beginRequest_b__2_0__);
    sub_1C32C20(&Method_SellServantRequest___c__beginRequest_b__2_1__);
    sub_1C32C20(&SellServantRequest___c_TypeInfo);
    sub_1C32C20(&StringLiteral_23262/*"sellData"*/);
    sub_1C32C20(&StringLiteral_23261/*"sellCommandCode"*/);
    byte_4C39589 = 1;
  }
  v7 = SellServantRequest___c_TypeInfo;
  if ( !SellServantRequest___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SellServantRequest___c_TypeInfo);
    v7 = SellServantRequest___c_TypeInfo;
  }
  _9__2_0 = (System_Func_T__TResult__o *)v7->static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = SellServantRequest___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v7->static_fields->__9;
    _9__2_0 = (System_Func_T__TResult__o *)sub_1C32E6C(System_Func_long__SellServantRequest_UseSvtHash__TypeInfo);
    System_Func_long__object____ctor(_9__2_0, v9, Method_SellServantRequest___c__beginRequest_b__2_0__, 0);
    static_fields = SellServantRequest___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Func_long__SellServantRequest_UseSvtHash__o *)_9__2_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__2_0, (int32_t)_9__2_0, v11, v12);
  }
  v13 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)servantUserIds,
                                                               (System_Func_TSource__TResult__o *)_9__2_0,
                                                               (const MethodInfo_31125A0 *)Method_System_Linq_Enumerable_Select_long__SellServantRequest_UseSvtHash___);
  v14 = System_Linq_Enumerable__ToList_object_(
          v13,
          (const MethodInfo_3121728 *)Method_System_Linq_Enumerable_ToList_SellServantRequest_UseSvtHash___);
  v15 = SellServantRequest___c_TypeInfo;
  v16 = (Il2CppObject *)v14;
  if ( !SellServantRequest___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SellServantRequest___c_TypeInfo);
    v15 = SellServantRequest___c_TypeInfo;
  }
  _9__2_1 = (System_Func_T__TResult__o *)v15->static_fields->__9__2_1;
  if ( !_9__2_1 )
  {
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      v15 = SellServantRequest___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v15->static_fields->__9;
    _9__2_1 = (System_Func_T__TResult__o *)sub_1C32E6C(System_Func_long__SellServantRequest_UseSvtHash__TypeInfo);
    System_Func_long__object____ctor(_9__2_1, v18, Method_SellServantRequest___c__beginRequest_b__2_1__, 0);
    v19 = SellServantRequest___c_TypeInfo->static_fields;
    v19->__9__2_1 = (struct System_Func_long__SellServantRequest_UseSvtHash__o *)_9__2_1;
    sub_1C32BC4((CGThumbnailListItem_o *)&v19->__9__2_1, (int32_t)_9__2_1, v20, v21);
  }
  v22 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)commandCodeUserIds,
                                                               (System_Func_TSource__TResult__o *)_9__2_1,
                                                               (const MethodInfo_31125A0 *)Method_System_Linq_Enumerable_Select_long__SellServantRequest_UseSvtHash___);
  v23 = (Il2CppObject *)System_Linq_Enumerable__ToList_object_(
                          v22,
                          (const MethodInfo_3121728 *)Method_System_Linq_Enumerable_ToList_SellServantRequest_UseSvtHash___);
  v24 = (MiniMessagePack_MiniMessagePacker_o *)sub_1C32E6C(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v24, 0);
  if ( !v24 )
    goto LABEL_20;
  v26 = MiniMessagePack_MiniMessagePacker__PackClass(v24, v16, 0);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v27 = System_Convert__ToBase64String(v26, 0);
  RequestBase__addField_44145196((RequestBase_o *)this, (System_String_o *)StringLiteral_23262/*"sellData"*/, v27, v28);
  v29 = (MiniMessagePack_MiniMessagePacker_o *)sub_1C32E6C(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v29, 0);
  if ( !v29 )
LABEL_20:
    sub_1C32E7C(v25);
  v30 = MiniMessagePack_MiniMessagePacker__PackClass(v29, v23, 0);
  v31 = System_Convert__ToBase64String(v30, 0);
  RequestBase__addField_44145196((RequestBase_o *)this, (System_String_o *)StringLiteral_23261/*"sellCommandCode"*/, v31, v32);
  RequestBase__beginRequest((RequestBase_o *)this, v33);
}


System_String_o *SellServantRequest__getURL(SellServantRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4C39588 & 1) == 0 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&StringLiteral_23440/*"shop/sellSvt"*/);
    byte_4C39588 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_63518544(BaseUrl, (System_String_o *)StringLiteral_23440/*"shop/sellSvt"*/, 0);
}


void SellServantRequest__requestCompleted(
        SellServantRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  const MethodInfo *v6; // x2
  ResponseData_o *v7; // x20
  Il2CppObject *success; // x20
  System_String_o *v9; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  struct NetworkManager_ResultCallbackFunc_o *v11; // x8

  if ( (byte_4C3958A & 1) == 0 )
  {
    sub_1C32C20(&JsonManager_TypeInfo);
    sub_1C32C20(&ResponseCommandKind_TypeInfo);
    sub_1C32C20(&StringLiteral_22212/*"ng"*/);
    byte_4C3958A = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(12, responseList, 0);
  if ( v5
    && (v7 = v5, ResponseData__checkError(v5, v5->fields.resCode, v6))
    && (success = (Il2CppObject *)v7->fields.success) != 0 )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v9 = JsonManager__toJson(success, 0, 0, 0);
    CallBack = this->fields.CallBack;
    if ( CallBack )
      ((void (__fastcall *)(intptr_t, System_String_o *, intptr_t))CallBack->fields.invoke_impl)(
        CallBack->fields.method_code,
        v9,
        CallBack->fields.method);
  }
  else
  {
    v11 = this->fields.CallBack;
    if ( v11 )
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))v11->fields.invoke_impl)(
        v11->fields.method_code,
        StringLiteral_22212/*"ng"*/,
        v11->fields.method);
  }
}


void SellServantRequest_UseSvtHash___ctor(SellServantRequest_UseSvtHash_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SellServantRequest___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C3958B & 1) == 0 )
  {
    sub_1C32C20(&SellServantRequest___c_TypeInfo);
    byte_4C3958B = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(SellServantRequest___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SellServantRequest___c_TypeInfo->static_fields->__9 = (struct SellServantRequest___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)SellServantRequest___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void SellServantRequest___c___ctor(SellServantRequest___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


SellServantRequest_UseSvtHash_o *SellServantRequest___c___beginRequest_b__2_0(
        SellServantRequest___c_o *this,
        int64_t i,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0

  if ( (byte_4C3958C & 1) == 0 )
  {
    sub_1C32C20(&SellServantRequest_UseSvtHash_TypeInfo);
    byte_4C3958C = 1;
  }
  v4 = sub_1C32E6C(SellServantRequest_UseSvtHash_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    sub_1C32E7C(v5);
  *(_QWORD *)(v4 + 16) = i;
  *(_DWORD *)(v4 + 24) = 1;
  return (SellServantRequest_UseSvtHash_o *)v4;
}


SellServantRequest_UseSvtHash_o *SellServantRequest___c___beginRequest_b__2_1(
        SellServantRequest___c_o *this,
        int64_t i,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0

  if ( (byte_4C3958D & 1) == 0 )
  {
    sub_1C32C20(&SellServantRequest_UseSvtHash_TypeInfo);
    byte_4C3958D = 1;
  }
  v4 = sub_1C32E6C(SellServantRequest_UseSvtHash_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    sub_1C32E7C(v5);
  *(_QWORD *)(v4 + 16) = i;
  *(_DWORD *)(v4 + 24) = 1;
  return (SellServantRequest_UseSvtHash_o *)v4;
}