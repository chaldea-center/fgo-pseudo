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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  SellServantRequest___c_c *v17; // x0
  struct SellServantRequest___c_StaticFields *static_fields; // x8
  System_Func_long__SellServantRequest_UseSvtHash__o *_9__2_0; // x22
  Il2CppObject *v20; // x23
  struct SellServantRequest___c_StaticFields *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0
  System_Collections_Generic_List_TSource__o *v29; // x0
  __int64 v30; // x1
  __int64 v31; // x2
  SellServantRequest___c_c *v32; // x8
  Il2CppObject *v33; // x21
  struct SellServantRequest___c_StaticFields *v34; // x9
  System_Func_long__SellServantRequest_UseSvtHash__o *_9__2_1; // x22
  Il2CppObject *v36; // x23
  struct SellServantRequest___c_StaticFields *v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x0
  Il2CppObject *v45; // x20
  __int64 v46; // x1
  __int64 v47; // x2
  MiniMessagePack_MiniMessagePacker_o *v48; // x22
  __int64 v49; // x0
  System_Byte_array *v50; // x21
  System_String_o *v51; // x0
  __int64 v52; // x1
  __int64 v53; // x2
  MiniMessagePack_MiniMessagePacker_o *v54; // x21
  System_Byte_array *v55; // x0
  System_String_o *v56; // x0

  if ( (byte_4215823 & 1) == 0 )
  {
    sub_B0D8A4(&System_Convert_TypeInfo, servantUserIds);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_long__SellServantRequest_UseSvtHash___, v7);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToList_SellServantRequest_UseSvtHash___, v8);
    sub_B0D8A4(&Method_System_Func_long__SellServantRequest_UseSvtHash___ctor__, v9);
    sub_B0D8A4(&System_Func_long__SellServantRequest_UseSvtHash__TypeInfo, v10);
    sub_B0D8A4(&MiniMessagePack_MiniMessagePacker_TypeInfo, v11);
    sub_B0D8A4(&Method_SellServantRequest___c__beginRequest_b__2_0__, v12);
    sub_B0D8A4(&Method_SellServantRequest___c__beginRequest_b__2_1__, v13);
    sub_B0D8A4(&SellServantRequest___c_TypeInfo, v14);
    sub_B0D8A4(&StringLiteral_22033/*"sellData"*/, v15);
    sub_B0D8A4(&StringLiteral_22032/*"sellCommandCode"*/, v16);
    byte_4215823 = 1;
  }
  v17 = SellServantRequest___c_TypeInfo;
  if ( (BYTE3(SellServantRequest___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SellServantRequest___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SellServantRequest___c_TypeInfo);
    v17 = SellServantRequest___c_TypeInfo;
  }
  static_fields = v17->static_fields;
  _9__2_0 = static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      static_fields = SellServantRequest___c_TypeInfo->static_fields;
    }
    v20 = (Il2CppObject *)static_fields->__9;
    _9__2_0 = (System_Func_long__SellServantRequest_UseSvtHash__o *)sub_B0D974(
                                                                      System_Func_long__SellServantRequest_UseSvtHash__TypeInfo,
                                                                      servantUserIds,
                                                                      commandCodeUserIds);
    System_Func_long__SellServantRequest_UseSvtHash____ctor(
      _9__2_0,
      v20,
      Method_SellServantRequest___c__beginRequest_b__2_0__,
      (const MethodInfo_2616D24 *)Method_System_Func_long__SellServantRequest_UseSvtHash___ctor__);
    v21 = SellServantRequest___c_TypeInfo->static_fields;
    v21->__9__2_0 = _9__2_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v21->__9__2_0,
      (System_Int32_array **)_9__2_0,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
  }
  v28 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__SellServantRequest_UseSvtHash_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)servantUserIds,
                                                               (System_Func_TSource__TResult__o *)_9__2_0,
                                                               (const MethodInfo_1B512B0 *)Method_System_Linq_Enumerable_Select_long__SellServantRequest_UseSvtHash___);
  v29 = System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
          v28,
          (const MethodInfo_1B59168 *)Method_System_Linq_Enumerable_ToList_SellServantRequest_UseSvtHash___);
  v32 = SellServantRequest___c_TypeInfo;
  v33 = (Il2CppObject *)v29;
  if ( (BYTE3(SellServantRequest___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SellServantRequest___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SellServantRequest___c_TypeInfo);
    v32 = SellServantRequest___c_TypeInfo;
  }
  v34 = v32->static_fields;
  _9__2_1 = v34->__9__2_1;
  if ( !_9__2_1 )
  {
    if ( (BYTE3(v32->vtable._0_Equals.methodPtr) & 4) != 0 && !v32->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v32);
      v34 = SellServantRequest___c_TypeInfo->static_fields;
    }
    v36 = (Il2CppObject *)v34->__9;
    _9__2_1 = (System_Func_long__SellServantRequest_UseSvtHash__o *)sub_B0D974(
                                                                      System_Func_long__SellServantRequest_UseSvtHash__TypeInfo,
                                                                      v30,
                                                                      v31);
    System_Func_long__SellServantRequest_UseSvtHash____ctor(
      _9__2_1,
      v36,
      Method_SellServantRequest___c__beginRequest_b__2_1__,
      (const MethodInfo_2616D24 *)Method_System_Func_long__SellServantRequest_UseSvtHash___ctor__);
    v37 = SellServantRequest___c_TypeInfo->static_fields;
    v37->__9__2_1 = _9__2_1;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v37->__9__2_1,
      (System_Int32_array **)_9__2_1,
      v38,
      v39,
      v40,
      v41,
      v42,
      v43);
  }
  v44 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__SellServantRequest_UseSvtHash_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)commandCodeUserIds,
                                                               (System_Func_TSource__TResult__o *)_9__2_1,
                                                               (const MethodInfo_1B512B0 *)Method_System_Linq_Enumerable_Select_long__SellServantRequest_UseSvtHash___);
  v45 = (Il2CppObject *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                          v44,
                          (const MethodInfo_1B59168 *)Method_System_Linq_Enumerable_ToList_SellServantRequest_UseSvtHash___);
  v48 = (MiniMessagePack_MiniMessagePacker_o *)sub_B0D974(MiniMessagePack_MiniMessagePacker_TypeInfo, v46, v47);
  MiniMessagePack_MiniMessagePacker___ctor(v48, 0LL);
  if ( !v48 )
    goto LABEL_25;
  v50 = MiniMessagePack_MiniMessagePacker__PackClass(v48, v33, 0LL);
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  v51 = System_Convert__ToBase64String(v50, 0LL);
  RequestBase__addField_30435648((RequestBase_o *)this, (System_String_o *)StringLiteral_22033/*"sellData"*/, v51, 0LL);
  v54 = (MiniMessagePack_MiniMessagePacker_o *)sub_B0D974(MiniMessagePack_MiniMessagePacker_TypeInfo, v52, v53);
  MiniMessagePack_MiniMessagePacker___ctor(v54, 0LL);
  if ( !v54 )
LABEL_25:
    sub_B0D97C(v49);
  v55 = MiniMessagePack_MiniMessagePacker__PackClass(v54, v45, 0LL);
  v56 = System_Convert__ToBase64String(v55, 0LL);
  RequestBase__addField_30435648((RequestBase_o *)this, (System_String_o *)StringLiteral_22032/*"sellCommandCode"*/, v56, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall SellServantRequest__getURL(SellServantRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4215822 & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_22183/*"shop/sellSvt"*/, v2);
    byte_4215822 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_43849904(BaseUrl, (System_String_o *)StringLiteral_22183/*"shop/sellSvt"*/, 0LL);
}


void __fastcall SellServantRequest__requestCompleted(
        SellServantRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  ResponseData_o *v8; // x20
  Il2CppObject *success; // x20
  System_String_o *v10; // x1

  if ( (byte_4215824 & 1) == 0 )
  {
    sub_B0D8A4(&JsonManager_TypeInfo, responseList);
    sub_B0D8A4(&ResponseCommandKind_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_21137/*"ng"*/, v6);
    byte_4215824 = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v7 = ResponseCommandKind__SearchData(12, responseList, 0LL);
  if ( v7
    && (v8 = v7, ResponseData__checkError_30403444(v7, 0LL))
    && (success = (Il2CppObject *)v8->fields.success) != 0LL )
  {
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v10 = JsonManager__toJson(success, 0, 0, 0LL);
  }
  else
  {
    v10 = (System_String_o *)StringLiteral_21137/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v10, 0LL);
}


void __fastcall SellServantRequest_UseSvtHash___ctor(SellServantRequest_UseSvtHash_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SellServantRequest___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct SellServantRequest___c_StaticFields *static_fields; // x0

  if ( (byte_4212204 & 1) == 0 )
  {
    sub_B0D8A4(&SellServantRequest___c_TypeInfo, v1);
    byte_4212204 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(SellServantRequest___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = SellServantRequest___c_TypeInfo->static_fields;
  static_fields->__9 = (struct SellServantRequest___c_o *)v3;
  sub_B0D840(static_fields, v3);
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

  if ( (byte_4212205 & 1) == 0 )
  {
    sub_B0D8A4(&SellServantRequest_UseSvtHash_TypeInfo, i);
    byte_4212205 = 1;
  }
  v4 = sub_B0D974(SellServantRequest_UseSvtHash_TypeInfo, i, method);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  if ( !v4 )
    sub_B0D97C(v5);
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

  if ( (byte_4212206 & 1) == 0 )
  {
    sub_B0D8A4(&SellServantRequest_UseSvtHash_TypeInfo, i);
    byte_4212206 = 1;
  }
  v4 = sub_B0D974(SellServantRequest_UseSvtHash_TypeInfo, i, method);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  if ( !v4 )
    sub_B0D97C(v5);
  *(_QWORD *)(v4 + 16) = i;
  *(_DWORD *)(v4 + 24) = 1;
  return (SellServantRequest_UseSvtHash_o *)v4;
}