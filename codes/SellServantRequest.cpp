void __fastcall SellServantRequest__beginRequest(
        SellServantRequest_o *this,
        System_Int64_array *servantUserIds,
        System_Int64_array *commandCodeUserIds,
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
  SellServantRequest___c_c *v16; // x0
  System_Func_T__TResult__o *_9__2_0; // x22
  Il2CppObject *v18; // x23
  struct SellServantRequest___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  System_Collections_Generic_List_TSource__o *v23; // x0
  SellServantRequest___c_c *v24; // x8
  Il2CppObject *v25; // x21
  System_Func_T__TResult__o *_9__2_1; // x22
  Il2CppObject *v27; // x23
  struct SellServantRequest___c_StaticFields *v28; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0
  Il2CppObject *v32; // x20
  MiniMessagePack_MiniMessagePacker_o *v33; // x22
  __int64 v34; // x0
  __int64 v35; // x1
  System_Byte_array *v36; // x21
  System_String_o *v37; // x0
  const MethodInfo *v38; // x3
  MiniMessagePack_MiniMessagePacker_o *v39; // x21
  System_Byte_array *v40; // x0
  System_String_o *v41; // x0
  const MethodInfo *v42; // x3
  const MethodInfo *v43; // x1

  if ( (byte_48E3F93 & 1) == 0 )
  {
    sub_1B00CCC(&System_Convert_TypeInfo, servantUserIds);
    sub_1B00CCC(&Method_System_Linq_Enumerable_Select_long__SellServantRequest_UseSvtHash___, v7);
    sub_1B00CCC(&Method_System_Linq_Enumerable_ToList_SellServantRequest_UseSvtHash___, v8);
    sub_1B00CCC(&System_Func_long__SellServantRequest_UseSvtHash__TypeInfo, v9);
    sub_1B00CCC(&MiniMessagePack_MiniMessagePacker_TypeInfo, v10);
    sub_1B00CCC(&Method_SellServantRequest___c__beginRequest_b__2_0__, v11);
    sub_1B00CCC(&Method_SellServantRequest___c__beginRequest_b__2_1__, v12);
    sub_1B00CCC(&SellServantRequest___c_TypeInfo, v13);
    sub_1B00CCC(&StringLiteral_22778/*"sellData"*/, v14);
    sub_1B00CCC(&StringLiteral_22777/*"sellCommandCode"*/, v15);
    byte_48E3F93 = 1;
  }
  v16 = SellServantRequest___c_TypeInfo;
  if ( !SellServantRequest___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SellServantRequest___c_TypeInfo);
    v16 = SellServantRequest___c_TypeInfo;
  }
  _9__2_0 = (System_Func_T__TResult__o *)v16->static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v16 = SellServantRequest___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v16->static_fields->__9;
    _9__2_0 = (System_Func_T__TResult__o *)sub_1B00F18(System_Func_long__SellServantRequest_UseSvtHash__TypeInfo);
    System_Func_long__object____ctor(_9__2_0, v18, Method_SellServantRequest___c__beginRequest_b__2_0__, 0LL);
    static_fields = SellServantRequest___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Func_long__SellServantRequest_UseSvtHash__o *)_9__2_0;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->__9__2_0, (int32_t)_9__2_0, v20, v21);
  }
  v22 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)servantUserIds,
                                                               (System_Func_TSource__TResult__o *)_9__2_0,
                                                               (const MethodInfo_2D8EADC *)Method_System_Linq_Enumerable_Select_long__SellServantRequest_UseSvtHash___);
  v23 = System_Linq_Enumerable__ToList_object_(
          v22,
          (const MethodInfo_2D9AFD4 *)Method_System_Linq_Enumerable_ToList_SellServantRequest_UseSvtHash___);
  v24 = SellServantRequest___c_TypeInfo;
  v25 = (Il2CppObject *)v23;
  if ( !SellServantRequest___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SellServantRequest___c_TypeInfo);
    v24 = SellServantRequest___c_TypeInfo;
  }
  _9__2_1 = (System_Func_T__TResult__o *)v24->static_fields->__9__2_1;
  if ( !_9__2_1 )
  {
    if ( !v24->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v24);
      v24 = SellServantRequest___c_TypeInfo;
    }
    v27 = (Il2CppObject *)v24->static_fields->__9;
    _9__2_1 = (System_Func_T__TResult__o *)sub_1B00F18(System_Func_long__SellServantRequest_UseSvtHash__TypeInfo);
    System_Func_long__object____ctor(_9__2_1, v27, Method_SellServantRequest___c__beginRequest_b__2_1__, 0LL);
    v28 = SellServantRequest___c_TypeInfo->static_fields;
    v28->__9__2_1 = (struct System_Func_long__SellServantRequest_UseSvtHash__o *)_9__2_1;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&v28->__9__2_1, (int32_t)_9__2_1, v29, v30);
  }
  v31 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)commandCodeUserIds,
                                                               (System_Func_TSource__TResult__o *)_9__2_1,
                                                               (const MethodInfo_2D8EADC *)Method_System_Linq_Enumerable_Select_long__SellServantRequest_UseSvtHash___);
  v32 = (Il2CppObject *)System_Linq_Enumerable__ToList_object_(
                          v31,
                          (const MethodInfo_2D9AFD4 *)Method_System_Linq_Enumerable_ToList_SellServantRequest_UseSvtHash___);
  v33 = (MiniMessagePack_MiniMessagePacker_o *)sub_1B00F18(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v33, 0LL);
  if ( !v33 )
    goto LABEL_20;
  v36 = MiniMessagePack_MiniMessagePacker__PackClass(v33, v25, 0LL);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v37 = System_Convert__ToBase64String(v36, 0LL);
  RequestBase__addField_39752868((RequestBase_o *)this, (System_String_o *)StringLiteral_22778/*"sellData"*/, v37, v38);
  v39 = (MiniMessagePack_MiniMessagePacker_o *)sub_1B00F18(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v39, 0LL);
  if ( !v39 )
LABEL_20:
    sub_1B00F28(v34, v35);
  v40 = MiniMessagePack_MiniMessagePacker__PackClass(v39, v32, 0LL);
  v41 = System_Convert__ToBase64String(v40, 0LL);
  RequestBase__addField_39752868((RequestBase_o *)this, (System_String_o *)StringLiteral_22777/*"sellCommandCode"*/, v41, v42);
  RequestBase__beginRequest((RequestBase_o *)this, v43);
}


System_String_o *__fastcall SellServantRequest__getURL(SellServantRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_48E3F92 & 1) == 0 )
  {
    sub_1B00CCC(&NetworkManager_TypeInfo, method);
    sub_1B00CCC(&StringLiteral_22946/*"shop/sellSvt"*/, v2);
    byte_48E3F92 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_60325748(BaseUrl, (System_String_o *)StringLiteral_22946/*"shop/sellSvt"*/, 0LL);
}


void __fastcall SellServantRequest__requestCompleted(
        SellServantRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  const MethodInfo *v8; // x2
  ResponseData_o *v9; // x20
  Il2CppObject *success; // x20
  System_String_o *v11; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  struct NetworkManager_ResultCallbackFunc_o *v13; // x8

  if ( (byte_48E3F94 & 1) == 0 )
  {
    sub_1B00CCC(&JsonManager_TypeInfo, responseList);
    sub_1B00CCC(&ResponseCommandKind_TypeInfo, v5);
    sub_1B00CCC(&StringLiteral_21754/*"ng"*/, v6);
    byte_48E3F94 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(12, responseList, 0LL);
  if ( v7
    && (v9 = v7, ResponseData__checkError(v7, v7->fields.resCode, v8))
    && (success = (Il2CppObject *)v9->fields.success) != 0LL )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v11 = JsonManager__toJson(success, 0, 0, 0LL);
    CallBack = this->fields.CallBack;
    if ( CallBack )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))CallBack->fields.m_target)(
        CallBack->fields.original_method_info,
        v11,
        *(_QWORD *)&CallBack->fields.extra_arg);
  }
  else
  {
    v13 = this->fields.CallBack;
    if ( v13 )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v13->fields.m_target)(
        v13->fields.original_method_info,
        StringLiteral_21754/*"ng"*/,
        *(_QWORD *)&v13->fields.extra_arg);
  }
}


void __fastcall SellServantRequest_UseSvtHash___ctor(SellServantRequest_UseSvtHash_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SellServantRequest___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_48E3F95 & 1) == 0 )
  {
    sub_1B00CCC(&SellServantRequest___c_TypeInfo, v1);
    byte_48E3F95 = 1;
  }
  v2 = (Il2CppObject *)sub_1B00F18(SellServantRequest___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  SellServantRequest___c_TypeInfo->static_fields->__9 = (struct SellServantRequest___c_o *)v2;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)SellServantRequest___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall SellServantRequest___c___ctor(SellServantRequest___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


SellServantRequest_UseSvtHash_o *__fastcall SellServantRequest___c___beginRequest_b__2_0(
        SellServantRequest___c_o *this,
        int64_t i,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_48E3F96 & 1) == 0 )
  {
    sub_1B00CCC(&SellServantRequest_UseSvtHash_TypeInfo, i);
    byte_48E3F96 = 1;
  }
  v4 = sub_1B00F18(SellServantRequest_UseSvtHash_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  if ( !v4 )
    sub_1B00F28(v5, v6);
  *(_QWORD *)(v4 + 16) = i;
  *(_DWORD *)(v4 + 24) = 1;
  return (SellServantRequest_UseSvtHash_o *)v4;
}


SellServantRequest_UseSvtHash_o *__fastcall SellServantRequest___c___beginRequest_b__2_1(
        SellServantRequest___c_o *this,
        int64_t i,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_48E3F97 & 1) == 0 )
  {
    sub_1B00CCC(&SellServantRequest_UseSvtHash_TypeInfo, i);
    byte_48E3F97 = 1;
  }
  v4 = sub_1B00F18(SellServantRequest_UseSvtHash_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  if ( !v4 )
    sub_1B00F28(v5, v6);
  *(_QWORD *)(v4 + 16) = i;
  *(_DWORD *)(v4 + 24) = 1;
  return (SellServantRequest_UseSvtHash_o *)v4;
}