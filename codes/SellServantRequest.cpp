void __fastcall SellServantRequest___ctor(SellServantRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall SellServantRequest__beginRequest(
        SellServantRequest_o *this,
        System_Int64_array *servantUserIds,
        System_Int64_array *commandCodeUserIds,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  SellServantRequest___c_c *v37; // x0
  struct SellServantRequest___c_StaticFields *static_fields; // x8
  System_Func_long__SellServantRequest_UseSvtHash__o *_9__2_0; // x22
  Il2CppObject *v40; // x23
  struct SellServantRequest___c_StaticFields *v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x0
  System_Collections_Generic_List_TSource__o *v49; // x0
  SellServantRequest___c_c *v50; // x8
  Il2CppObject *v51; // x21
  struct SellServantRequest___c_StaticFields *v52; // x9
  System_Func_long__SellServantRequest_UseSvtHash__o *_9__2_1; // x22
  Il2CppObject *v54; // x23
  struct SellServantRequest___c_StaticFields *v55; // x0
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v62; // x0
  Il2CppObject *v63; // x20
  MiniMessagePack_MiniMessagePacker_o *v64; // x22
  __int64 v65; // x0
  __int64 v66; // x1
  System_Byte_array *v67; // x21
  System_String_o *v68; // x0
  MiniMessagePack_MiniMessagePacker_o *v69; // x21
  System_Byte_array *v70; // x0
  System_String_o *v71; // x0

  if ( (byte_42E984F & 1) == 0 )
  {
    sub_B5D5C4(&System_Convert_TypeInfo, (_DWORD)servantUserIds, (_DWORD)commandCodeUserIds, method);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_long__SellServantRequest_UseSvtHash___, v7, v8, v9);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToList_SellServantRequest_UseSvtHash___, v10, v11, v12);
    sub_B5D5C4(&Method_System_Func_long__SellServantRequest_UseSvtHash___ctor__, v13, v14, v15);
    sub_B5D5C4(&System_Func_long__SellServantRequest_UseSvtHash__TypeInfo, v16, v17, v18);
    sub_B5D5C4(&MiniMessagePack_MiniMessagePacker_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&Method_SellServantRequest___c__beginRequest_b__2_0__, v22, v23, v24);
    sub_B5D5C4(&Method_SellServantRequest___c__beginRequest_b__2_1__, v25, v26, v27);
    sub_B5D5C4(&SellServantRequest___c_TypeInfo, v28, v29, v30);
    sub_B5D5C4(&StringLiteral_22259/*"sellData"*/, v31, v32, v33);
    sub_B5D5C4(&StringLiteral_22258/*"sellCommandCode"*/, v34, v35, v36);
    byte_42E984F = 1;
  }
  v37 = SellServantRequest___c_TypeInfo;
  if ( (BYTE3(SellServantRequest___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SellServantRequest___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SellServantRequest___c_TypeInfo);
    v37 = SellServantRequest___c_TypeInfo;
  }
  static_fields = v37->static_fields;
  _9__2_0 = static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( (BYTE3(v37->vtable._0_Equals.methodPtr) & 4) != 0 && !v37->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v37);
      static_fields = SellServantRequest___c_TypeInfo->static_fields;
    }
    v40 = (Il2CppObject *)static_fields->__9;
    _9__2_0 = (System_Func_long__SellServantRequest_UseSvtHash__o *)sub_B5D694(System_Func_long__SellServantRequest_UseSvtHash__TypeInfo);
    System_Func_long__SellServantRequest_UseSvtHash____ctor(
      _9__2_0,
      v40,
      Method_SellServantRequest___c__beginRequest_b__2_0__,
      (const MethodInfo_2C2D03C *)Method_System_Func_long__SellServantRequest_UseSvtHash___ctor__);
    v41 = SellServantRequest___c_TypeInfo->static_fields;
    v41->__9__2_0 = _9__2_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v41->__9__2_0,
      (System_Int32_array **)_9__2_0,
      v42,
      v43,
      v44,
      v45,
      v46,
      v47);
  }
  v48 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__SellServantRequest_UseSvtHash_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)servantUserIds,
                                                               (System_Func_TSource__TResult__o *)_9__2_0,
                                                               (const MethodInfo_1CB27F0 *)Method_System_Linq_Enumerable_Select_long__SellServantRequest_UseSvtHash___);
  v49 = System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
          v48,
          (const MethodInfo_1CBA734 *)Method_System_Linq_Enumerable_ToList_SellServantRequest_UseSvtHash___);
  v50 = SellServantRequest___c_TypeInfo;
  v51 = (Il2CppObject *)v49;
  if ( (BYTE3(SellServantRequest___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SellServantRequest___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SellServantRequest___c_TypeInfo);
    v50 = SellServantRequest___c_TypeInfo;
  }
  v52 = v50->static_fields;
  _9__2_1 = v52->__9__2_1;
  if ( !_9__2_1 )
  {
    if ( (BYTE3(v50->vtable._0_Equals.methodPtr) & 4) != 0 && !v50->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v50);
      v52 = SellServantRequest___c_TypeInfo->static_fields;
    }
    v54 = (Il2CppObject *)v52->__9;
    _9__2_1 = (System_Func_long__SellServantRequest_UseSvtHash__o *)sub_B5D694(System_Func_long__SellServantRequest_UseSvtHash__TypeInfo);
    System_Func_long__SellServantRequest_UseSvtHash____ctor(
      _9__2_1,
      v54,
      Method_SellServantRequest___c__beginRequest_b__2_1__,
      (const MethodInfo_2C2D03C *)Method_System_Func_long__SellServantRequest_UseSvtHash___ctor__);
    v55 = SellServantRequest___c_TypeInfo->static_fields;
    v55->__9__2_1 = _9__2_1;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v55->__9__2_1,
      (System_Int32_array **)_9__2_1,
      v56,
      v57,
      v58,
      v59,
      v60,
      v61);
  }
  v62 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__SellServantRequest_UseSvtHash_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)commandCodeUserIds,
                                                               (System_Func_TSource__TResult__o *)_9__2_1,
                                                               (const MethodInfo_1CB27F0 *)Method_System_Linq_Enumerable_Select_long__SellServantRequest_UseSvtHash___);
  v63 = (Il2CppObject *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                          v62,
                          (const MethodInfo_1CBA734 *)Method_System_Linq_Enumerable_ToList_SellServantRequest_UseSvtHash___);
  v64 = (MiniMessagePack_MiniMessagePacker_o *)sub_B5D694(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v64, 0LL);
  if ( !v64 )
    goto LABEL_25;
  v67 = MiniMessagePack_MiniMessagePacker__PackClass(v64, v51, 0LL);
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  v68 = System_Convert__ToBase64String(v67, 0LL);
  RequestBase__addField_32362260((RequestBase_o *)this, (System_String_o *)StringLiteral_22259/*"sellData"*/, v68, 0LL);
  v69 = (MiniMessagePack_MiniMessagePacker_o *)sub_B5D694(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v69, 0LL);
  if ( !v69 )
LABEL_25:
    sub_B5D69C(v65, v66);
  v70 = MiniMessagePack_MiniMessagePacker__PackClass(v69, v63, 0LL);
  v71 = System_Convert__ToBase64String(v70, 0LL);
  RequestBase__addField_32362260((RequestBase_o *)this, (System_String_o *)StringLiteral_22258/*"sellCommandCode"*/, v71, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall SellServantRequest__getURL(SellServantRequest_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  System_String_o *BaseUrl; // x0

  if ( (byte_42E984E & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_22410/*"shop/sellSvt"*/, v4, v5, v6);
    byte_42E984E = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44577788(BaseUrl, (System_String_o *)StringLiteral_22410/*"shop/sellSvt"*/, 0LL);
}


void __fastcall SellServantRequest__requestCompleted(
        SellServantRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  ResponseData_o *v12; // x0
  ResponseData_o *v13; // x20
  Il2CppObject *success; // x20
  System_String_o *v15; // x1

  if ( (byte_42E9850 & 1) == 0 )
  {
    sub_B5D5C4(&JsonManager_TypeInfo, (_DWORD)responseList, (_DWORD)method, v3);
    sub_B5D5C4(&ResponseCommandKind_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_21345/*"ng"*/, v9, v10, v11);
    byte_42E9850 = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v12 = ResponseCommandKind__SearchData(12, responseList, 0LL);
  if ( v12
    && (v13 = v12, ResponseData__checkError_29500464(v12, 0LL))
    && (success = (Il2CppObject *)v13->fields.success) != 0LL )
  {
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v15 = JsonManager__toJson(success, 0, 0, 0LL);
  }
  else
  {
    v15 = (System_String_o *)StringLiteral_21345/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v15, 0LL);
}


void __fastcall SellServantRequest_UseSvtHash___ctor(SellServantRequest_UseSvtHash_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SellServantRequest___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct SellServantRequest___c_StaticFields *static_fields; // x0

  if ( (byte_42E5D2D & 1) == 0 )
  {
    sub_B5D5C4(&SellServantRequest___c_TypeInfo, v1, v2, v3);
    byte_42E5D2D = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(SellServantRequest___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = SellServantRequest___c_TypeInfo->static_fields;
  static_fields->__9 = (struct SellServantRequest___c_o *)v4;
  sub_B5D560(static_fields);
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
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_42E5D2E & 1) == 0 )
  {
    sub_B5D5C4(&SellServantRequest_UseSvtHash_TypeInfo, i, (_DWORD)method, v3);
    byte_42E5D2E = 1;
  }
  v5 = sub_B5D694(SellServantRequest_UseSvtHash_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    sub_B5D69C(v6, v7);
  *(_QWORD *)(v5 + 16) = i;
  *(_DWORD *)(v5 + 24) = 1;
  return (SellServantRequest_UseSvtHash_o *)v5;
}


SellServantRequest_UseSvtHash_o *__fastcall SellServantRequest___c___beginRequest_b__2_1(
        SellServantRequest___c_o *this,
        int64_t i,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_42E5D2F & 1) == 0 )
  {
    sub_B5D5C4(&SellServantRequest_UseSvtHash_TypeInfo, i, (_DWORD)method, v3);
    byte_42E5D2F = 1;
  }
  v5 = sub_B5D694(SellServantRequest_UseSvtHash_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    sub_B5D69C(v6, v7);
  *(_QWORD *)(v5 + 16) = i;
  *(_DWORD *)(v5 + 24) = 1;
  return (SellServantRequest_UseSvtHash_o *)v5;
}