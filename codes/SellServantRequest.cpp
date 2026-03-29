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
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  System_Collections_Generic_List_TSource__o *v18; // x0
  SellServantRequest___c_c *v19; // x8
  Il2CppObject *v20; // x21
  System_Func_T__TResult__o *_9__2_1; // x22
  Il2CppObject *v22; // x23
  struct SellServantRequest___c_StaticFields *v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0
  Il2CppObject *v31; // x20
  MiniMessagePack_MiniMessagePacker_o *v32; // x22
  __int64 v33; // x0
  __int64 v34; // x1
  System_Byte_array *v35; // x21
  System_String_o *v36; // x0
  const MethodInfo *v37; // x3
  MiniMessagePack_MiniMessagePacker_o *v38; // x21
  System_Byte_array *v39; // x0
  System_String_o *v40; // x0
  const MethodInfo *v41; // x3
  const MethodInfo *v42; // x1

  if ( (byte_4D32594 & 1) == 0 )
  {
    sub_1C93AD4(&System_Convert_TypeInfo);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Select_long__SellServantRequest_UseSvtHash___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToList_SellServantRequest_UseSvtHash___);
    sub_1C93AD4(&System_Func_long__SellServantRequest_UseSvtHash__TypeInfo);
    sub_1C93AD4(&MiniMessagePack_MiniMessagePacker_TypeInfo);
    sub_1C93AD4(&Method_SellServantRequest___c__beginRequest_b__2_0__);
    sub_1C93AD4(&Method_SellServantRequest___c__beginRequest_b__2_1__);
    sub_1C93AD4(&SellServantRequest___c_TypeInfo);
    sub_1C93AD4(&StringLiteral_23565/*"sellData"*/);
    sub_1C93AD4(&StringLiteral_23564/*"sellCommandCode"*/);
    byte_4D32594 = 1;
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
    _9__2_0 = (System_Func_T__TResult__o *)sub_1C93D20(System_Func_long__SellServantRequest_UseSvtHash__TypeInfo);
    System_Func_long__object____ctor(_9__2_0, v9, Method_SellServantRequest___c__beginRequest_b__2_0__, 0);
    static_fields = SellServantRequest___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Func_long__SellServantRequest_UseSvtHash__o *)_9__2_0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->__9__2_0, (int32_t)_9__2_0, v11, v12, v13, v14, v15, v16);
  }
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)servantUserIds,
                                                               (System_Func_TSource__TResult__o *)_9__2_0,
                                                               (const MethodInfo_31D9624 *)Method_System_Linq_Enumerable_Select_long__SellServantRequest_UseSvtHash___);
  v18 = System_Linq_Enumerable__ToList_object_(
          v17,
          (const MethodInfo_31E8E3C *)Method_System_Linq_Enumerable_ToList_SellServantRequest_UseSvtHash___);
  v19 = SellServantRequest___c_TypeInfo;
  v20 = (Il2CppObject *)v18;
  if ( !SellServantRequest___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SellServantRequest___c_TypeInfo);
    v19 = SellServantRequest___c_TypeInfo;
  }
  _9__2_1 = (System_Func_T__TResult__o *)v19->static_fields->__9__2_1;
  if ( !_9__2_1 )
  {
    if ( !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      v19 = SellServantRequest___c_TypeInfo;
    }
    v22 = (Il2CppObject *)v19->static_fields->__9;
    _9__2_1 = (System_Func_T__TResult__o *)sub_1C93D20(System_Func_long__SellServantRequest_UseSvtHash__TypeInfo);
    System_Func_long__object____ctor(_9__2_1, v22, Method_SellServantRequest___c__beginRequest_b__2_1__, 0);
    v23 = SellServantRequest___c_TypeInfo->static_fields;
    v23->__9__2_1 = (struct System_Func_long__SellServantRequest_UseSvtHash__o *)_9__2_1;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v23->__9__2_1, (int32_t)_9__2_1, v24, v25, v26, v27, v28, v29);
  }
  v30 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)commandCodeUserIds,
                                                               (System_Func_TSource__TResult__o *)_9__2_1,
                                                               (const MethodInfo_31D9624 *)Method_System_Linq_Enumerable_Select_long__SellServantRequest_UseSvtHash___);
  v31 = (Il2CppObject *)System_Linq_Enumerable__ToList_object_(
                          v30,
                          (const MethodInfo_31E8E3C *)Method_System_Linq_Enumerable_ToList_SellServantRequest_UseSvtHash___);
  v32 = (MiniMessagePack_MiniMessagePacker_o *)sub_1C93D20(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v32, 0);
  if ( !v32 )
    goto LABEL_20;
  v35 = MiniMessagePack_MiniMessagePacker__PackClass(v32, v20, 0);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v36 = System_Convert__ToBase64String(v35, 0);
  RequestBase__addField_44907496((RequestBase_o *)this, (System_String_o *)StringLiteral_23565/*"sellData"*/, v36, v37);
  v38 = (MiniMessagePack_MiniMessagePacker_o *)sub_1C93D20(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v38, 0);
  if ( !v38 )
LABEL_20:
    sub_1C93D2C(v33, v34);
  v39 = MiniMessagePack_MiniMessagePacker__PackClass(v38, v31, 0);
  v40 = System_Convert__ToBase64String(v39, 0);
  RequestBase__addField_44907496((RequestBase_o *)this, (System_String_o *)StringLiteral_23564/*"sellCommandCode"*/, v40, v41);
  RequestBase__beginRequest((RequestBase_o *)this, v42);
}


System_String_o *SellServantRequest__getURL(SellServantRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4D32593 & 1) == 0 )
  {
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_23729/*"shop/sellSvt"*/);
    byte_4D32593 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_64425724(BaseUrl, (System_String_o *)StringLiteral_23729/*"shop/sellSvt"*/, 0);
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

  if ( (byte_4D32595 & 1) == 0 )
  {
    sub_1C93AD4(&JsonManager_TypeInfo);
    sub_1C93AD4(&ResponseCommandKind_TypeInfo);
    sub_1C93AD4(&StringLiteral_22483/*"ng"*/);
    byte_4D32595 = 1;
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
        StringLiteral_22483/*"ng"*/,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D32596 & 1) == 0 )
  {
    sub_1C93AD4(&SellServantRequest___c_TypeInfo);
    byte_4D32596 = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(SellServantRequest___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SellServantRequest___c_TypeInfo->static_fields->__9 = (struct SellServantRequest___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)SellServantRequest___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  __int64 v6; // x1

  if ( (byte_4D32597 & 1) == 0 )
  {
    sub_1C93AD4(&SellServantRequest_UseSvtHash_TypeInfo);
    byte_4D32597 = 1;
  }
  v4 = sub_1C93D20(SellServantRequest_UseSvtHash_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    sub_1C93D2C(v5, v6);
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
  __int64 v6; // x1

  if ( (byte_4D32598 & 1) == 0 )
  {
    sub_1C93AD4(&SellServantRequest_UseSvtHash_TypeInfo);
    byte_4D32598 = 1;
  }
  v4 = sub_1C93D20(SellServantRequest_UseSvtHash_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    sub_1C93D2C(v5, v6);
  *(_QWORD *)(v4 + 16) = i;
  *(_DWORD *)(v4 + 24) = 1;
  return (SellServantRequest_UseSvtHash_o *)v4;
}