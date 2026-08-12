void SellServantRequest__beginRequest(
        SellServantRequest_o *this,
        System_Int64_array *servantUserIds,
        System_Int64_array *commandCodeUserIds,
        const MethodInfo *method)
{
  SellServantRequest___c_c *v7; // x0
  struct SellServantRequest___c_StaticFields *static_fields; // x8
  System_Func_T__TResult__o *_9__2_0; // x22
  Il2CppObject *v10; // x23
  struct SellServantRequest___c_StaticFields *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  System_Collections_Generic_List_TSource__o *v19; // x0
  __int64 v20; // x1
  SellServantRequest___c_c *v21; // x8
  Il2CppObject *v22; // x21
  struct SellServantRequest___c_StaticFields *v23; // x9
  System_Func_T__TResult__o *_9__2_1; // x22
  Il2CppObject *v25; // x23
  struct SellServantRequest___c_StaticFields *v26; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x0
  Il2CppObject *v34; // x20
  MiniMessagePack_MiniMessagePacker_o *v35; // x22
  __int64 v36; // x0
  __int64 v37; // x1
  __int64 v38; // x1
  System_Byte_array *v39; // x21
  System_String_o *v40; // x0
  const MethodInfo *v41; // x3
  MiniMessagePack_MiniMessagePacker_o *v42; // x21
  System_Byte_array *v43; // x0
  System_String_o *v44; // x0
  const MethodInfo *v45; // x3
  const MethodInfo *v46; // x1

  if ( (byte_59724B5 & 1) == 0 )
  {
    sub_2213A60(&System_Convert_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_long__SellServantRequest_UseSvtHash___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_SellServantRequest_UseSvtHash___);
    sub_2213A60(&System_Func_long__SellServantRequest_UseSvtHash__TypeInfo);
    sub_2213A60(&MiniMessagePack_MiniMessagePacker_TypeInfo);
    sub_2213A60(&Method_SellServantRequest___c__beginRequest_b__2_0__);
    sub_2213A60(&Method_SellServantRequest___c__beginRequest_b__2_1__);
    sub_2213A60(&SellServantRequest___c_TypeInfo);
    sub_2213A60(&StringLiteral_24505/*"sellData"*/);
    sub_2213A60(&StringLiteral_24504/*"sellCommandCode"*/);
    byte_59724B5 = 1;
  }
  v7 = SellServantRequest___c_TypeInfo;
  if ( !*(&SellServantRequest___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SellServantRequest___c_TypeInfo, servantUserIds);
    v7 = SellServantRequest___c_TypeInfo;
  }
  static_fields = v7->static_fields;
  _9__2_0 = (System_Func_T__TResult__o *)static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !*(&v7->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v7, servantUserIds);
      static_fields = SellServantRequest___c_TypeInfo->static_fields;
    }
    v10 = (Il2CppObject *)static_fields->__9;
    _9__2_0 = (System_Func_T__TResult__o *)sub_2213CCC(System_Func_long__SellServantRequest_UseSvtHash__TypeInfo);
    System_Func_long__object____ctor(_9__2_0, v10, Method_SellServantRequest___c__beginRequest_b__2_0__, 0);
    v11 = SellServantRequest___c_TypeInfo->static_fields;
    v11->__9__2_0 = (struct System_Func_long__SellServantRequest_UseSvtHash__o *)_9__2_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v11->__9__2_0, (int32_t)_9__2_0, v12, v13, v14, v15, v16, v17);
  }
  v18 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)servantUserIds,
                                                               (System_Func_TSource__TResult__o *)_9__2_0,
                                                               (const MethodInfo_388F838 *)Method_System_Linq_Enumerable_Select_long__SellServantRequest_UseSvtHash___);
  v19 = System_Linq_Enumerable__ToList_object_(
          v18,
          (const MethodInfo_38A0DF0 *)Method_System_Linq_Enumerable_ToList_SellServantRequest_UseSvtHash___);
  v21 = SellServantRequest___c_TypeInfo;
  v22 = (Il2CppObject *)v19;
  if ( !*(&SellServantRequest___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SellServantRequest___c_TypeInfo, v20);
    v21 = SellServantRequest___c_TypeInfo;
  }
  v23 = v21->static_fields;
  _9__2_1 = (System_Func_T__TResult__o *)v23->__9__2_1;
  if ( !_9__2_1 )
  {
    if ( !*(&v21->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v21, v20);
      v23 = SellServantRequest___c_TypeInfo->static_fields;
    }
    v25 = (Il2CppObject *)v23->__9;
    _9__2_1 = (System_Func_T__TResult__o *)sub_2213CCC(System_Func_long__SellServantRequest_UseSvtHash__TypeInfo);
    System_Func_long__object____ctor(_9__2_1, v25, Method_SellServantRequest___c__beginRequest_b__2_1__, 0);
    v26 = SellServantRequest___c_TypeInfo->static_fields;
    v26->__9__2_1 = (struct System_Func_long__SellServantRequest_UseSvtHash__o *)_9__2_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v26->__9__2_1, (int32_t)_9__2_1, v27, v28, v29, v30, v31, v32);
  }
  v33 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)commandCodeUserIds,
                                                               (System_Func_TSource__TResult__o *)_9__2_1,
                                                               (const MethodInfo_388F838 *)Method_System_Linq_Enumerable_Select_long__SellServantRequest_UseSvtHash___);
  v34 = (Il2CppObject *)System_Linq_Enumerable__ToList_object_(
                          v33,
                          (const MethodInfo_38A0DF0 *)Method_System_Linq_Enumerable_ToList_SellServantRequest_UseSvtHash___);
  v35 = (MiniMessagePack_MiniMessagePacker_o *)sub_2213CCC(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v35, 0);
  if ( !v35 )
    goto LABEL_20;
  v39 = MiniMessagePack_MiniMessagePacker__PackClass(v35, v22, 0);
  if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v38);
  v40 = System_Convert__ToBase64String(v39, 0);
  RequestBase__addField_51259256((RequestBase_o *)this, (System_String_o *)StringLiteral_24505/*"sellData"*/, v40, v41);
  v42 = (MiniMessagePack_MiniMessagePacker_o *)sub_2213CCC(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v42, 0);
  if ( !v42 )
LABEL_20:
    sub_2213CDC(v36, v37);
  v43 = MiniMessagePack_MiniMessagePacker__PackClass(v42, v34, 0);
  v44 = System_Convert__ToBase64String(v43, 0);
  RequestBase__addField_51259256((RequestBase_o *)this, (System_String_o *)StringLiteral_24504/*"sellCommandCode"*/, v44, v45);
  RequestBase__beginRequest((RequestBase_o *)this, v46);
}


System_String_o *SellServantRequest__getURL(SellServantRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_59724B4 & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&StringLiteral_24672/*"shop/sellSvt"*/);
    byte_59724B4 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_75651716(BaseUrl, (System_String_o *)StringLiteral_24672/*"shop/sellSvt"*/, 0);
}


void SellServantRequest__requestCompleted(
        SellServantRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  const MethodInfo *v6; // x2
  ResponseData_o *v7; // x20
  __int64 v8; // x1
  Il2CppObject *success; // x20
  System_String_o *v10; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 v12; // x1

  if ( (byte_59724B6 & 1) == 0 )
  {
    sub_2213A60(&JsonManager_TypeInfo);
    sub_2213A60(&ResponseCommandKind_TypeInfo);
    sub_2213A60(&StringLiteral_23336/*"ng"*/);
    byte_59724B6 = 1;
  }
  if ( !*(&ResponseCommandKind_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v5 = ResponseCommandKind__SearchData(12, responseList, 0);
  if ( !v5
    || (v7 = v5, !ResponseData__checkError(v5, v5->fields.resCode, v6))
    || (success = (Il2CppObject *)v7->fields.success) == 0 )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v12 = StringLiteral_23336/*"ng"*/;
    goto LABEL_14;
  }
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v8);
  v10 = JsonManager__toJson(success, 0, 0, 0);
  CallBack = this->fields.CallBack;
  if ( CallBack )
  {
    v12 = (__int64)v10;
LABEL_14:
    ((void (__fastcall *)(intptr_t, __int64, intptr_t))CallBack->fields.invoke_impl)(
      CallBack->fields.method_code,
      v12,
      CallBack->fields.method);
  }
}


void SellServantRequest_UseSvtHash___ctor(SellServantRequest_UseSvtHash_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SellServantRequest___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_59724B7 & 1) == 0 )
  {
    sub_2213A60(&SellServantRequest___c_TypeInfo);
    byte_59724B7 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(SellServantRequest___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SellServantRequest___c_TypeInfo->static_fields->__9 = (struct SellServantRequest___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)SellServantRequest___c_TypeInfo->static_fields,
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

  if ( (byte_59724B8 & 1) == 0 )
  {
    sub_2213A60(&SellServantRequest_UseSvtHash_TypeInfo);
    byte_59724B8 = 1;
  }
  v4 = sub_2213CCC(SellServantRequest_UseSvtHash_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    sub_2213CDC(v5, v6);
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

  if ( (byte_59724B9 & 1) == 0 )
  {
    sub_2213A60(&SellServantRequest_UseSvtHash_TypeInfo);
    byte_59724B9 = 1;
  }
  v4 = sub_2213CCC(SellServantRequest_UseSvtHash_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    sub_2213CDC(v5, v6);
  *(_QWORD *)(v4 + 16) = i;
  *(_DWORD *)(v4 + 24) = 1;
  return (SellServantRequest_UseSvtHash_o *)v4;
}