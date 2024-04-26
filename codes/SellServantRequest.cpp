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
  SellServantRequest___c_c *v7; // x0
  struct SellServantRequest___c_StaticFields *static_fields; // x8
  System_Func_long__SellServantRequest_UseSvtHash__o *_9__2_0; // x22
  Il2CppObject *v10; // x23
  struct SellServantRequest___c_StaticFields *v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  System_Collections_Generic_List_TSource__o *v19; // x0
  SellServantRequest___c_c *v20; // x8
  Il2CppObject *v21; // x21
  struct SellServantRequest___c_StaticFields *v22; // x9
  System_Func_long__SellServantRequest_UseSvtHash__o *_9__2_1; // x22
  Il2CppObject *v24; // x23
  struct SellServantRequest___c_StaticFields *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0
  Il2CppObject *v33; // x20
  MiniMessagePack_MiniMessagePacker_o *v34; // x22
  __int64 v35; // x0
  __int64 v36; // x1
  System_Byte_array *v37; // x21
  System_String_o *v38; // x0
  MiniMessagePack_MiniMessagePacker_o *v39; // x21
  System_Byte_array *v40; // x0
  System_String_o *v41; // x0

  if ( (byte_4352C0C & 1) == 0 )
  {
    sub_B70694(&System_Convert_TypeInfo);
    sub_B70694(&Method_System_Linq_Enumerable_Select_long__SellServantRequest_UseSvtHash___);
    sub_B70694(&Method_System_Linq_Enumerable_ToList_SellServantRequest_UseSvtHash___);
    sub_B70694(&Method_System_Func_long__SellServantRequest_UseSvtHash___ctor__);
    sub_B70694(&System_Func_long__SellServantRequest_UseSvtHash__TypeInfo);
    sub_B70694(&MiniMessagePack_MiniMessagePacker_TypeInfo);
    sub_B70694(&Method_SellServantRequest___c__beginRequest_b__2_0__);
    sub_B70694(&Method_SellServantRequest___c__beginRequest_b__2_1__);
    sub_B70694(&SellServantRequest___c_TypeInfo);
    sub_B70694(&StringLiteral_22327/*"sellData"*/);
    sub_B70694(&StringLiteral_22326/*"sellCommandCode"*/);
    byte_4352C0C = 1;
  }
  v7 = SellServantRequest___c_TypeInfo;
  if ( (BYTE3(SellServantRequest___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SellServantRequest___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SellServantRequest___c_TypeInfo);
    v7 = SellServantRequest___c_TypeInfo;
  }
  static_fields = v7->static_fields;
  _9__2_0 = static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      static_fields = SellServantRequest___c_TypeInfo->static_fields;
    }
    v10 = (Il2CppObject *)static_fields->__9;
    _9__2_0 = (System_Func_long__SellServantRequest_UseSvtHash__o *)sub_B70764(System_Func_long__SellServantRequest_UseSvtHash__TypeInfo);
    System_Func_long__SellServantRequest_UseSvtHash____ctor(
      _9__2_0,
      v10,
      Method_SellServantRequest___c__beginRequest_b__2_0__,
      (const MethodInfo_29AA8E4 *)Method_System_Func_long__SellServantRequest_UseSvtHash___ctor__);
    v11 = SellServantRequest___c_TypeInfo->static_fields;
    v11->__9__2_0 = _9__2_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v11->__9__2_0,
      (System_Int32_array **)_9__2_0,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
  v18 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__SellServantRequest_UseSvtHash_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)servantUserIds,
                                                               (System_Func_TSource__TResult__o *)_9__2_0,
                                                               (const MethodInfo_1CC3454 *)Method_System_Linq_Enumerable_Select_long__SellServantRequest_UseSvtHash___);
  v19 = System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
          v18,
          (const MethodInfo_1CCB668 *)Method_System_Linq_Enumerable_ToList_SellServantRequest_UseSvtHash___);
  v20 = SellServantRequest___c_TypeInfo;
  v21 = (Il2CppObject *)v19;
  if ( (BYTE3(SellServantRequest___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SellServantRequest___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SellServantRequest___c_TypeInfo);
    v20 = SellServantRequest___c_TypeInfo;
  }
  v22 = v20->static_fields;
  _9__2_1 = v22->__9__2_1;
  if ( !_9__2_1 )
  {
    if ( (BYTE3(v20->vtable._0_Equals.methodPtr) & 4) != 0 && !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      v22 = SellServantRequest___c_TypeInfo->static_fields;
    }
    v24 = (Il2CppObject *)v22->__9;
    _9__2_1 = (System_Func_long__SellServantRequest_UseSvtHash__o *)sub_B70764(System_Func_long__SellServantRequest_UseSvtHash__TypeInfo);
    System_Func_long__SellServantRequest_UseSvtHash____ctor(
      _9__2_1,
      v24,
      Method_SellServantRequest___c__beginRequest_b__2_1__,
      (const MethodInfo_29AA8E4 *)Method_System_Func_long__SellServantRequest_UseSvtHash___ctor__);
    v25 = SellServantRequest___c_TypeInfo->static_fields;
    v25->__9__2_1 = _9__2_1;
    sub_B70630(
      (BattleServantConfConponent_o *)&v25->__9__2_1,
      (System_Int32_array **)_9__2_1,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
  }
  v32 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__SellServantRequest_UseSvtHash_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)commandCodeUserIds,
                                                               (System_Func_TSource__TResult__o *)_9__2_1,
                                                               (const MethodInfo_1CC3454 *)Method_System_Linq_Enumerable_Select_long__SellServantRequest_UseSvtHash___);
  v33 = (Il2CppObject *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                          v32,
                          (const MethodInfo_1CCB668 *)Method_System_Linq_Enumerable_ToList_SellServantRequest_UseSvtHash___);
  v34 = (MiniMessagePack_MiniMessagePacker_o *)sub_B70764(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v34, 0LL);
  if ( !v34 )
    goto LABEL_25;
  v37 = MiniMessagePack_MiniMessagePacker__PackClass(v34, v21, 0LL);
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  v38 = System_Convert__ToBase64String(v37, 0LL);
  RequestBase__addField_32336576((RequestBase_o *)this, (System_String_o *)StringLiteral_22327/*"sellData"*/, v38, 0LL);
  v39 = (MiniMessagePack_MiniMessagePacker_o *)sub_B70764(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v39, 0LL);
  if ( !v39 )
LABEL_25:
    sub_B7076C(v35, v36);
  v40 = MiniMessagePack_MiniMessagePacker__PackClass(v39, v33, 0LL);
  v41 = System_Convert__ToBase64String(v40, 0LL);
  RequestBase__addField_32336576((RequestBase_o *)this, (System_String_o *)StringLiteral_22326/*"sellCommandCode"*/, v41, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall SellServantRequest__getURL(SellServantRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4352C0B & 1) == 0 )
  {
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&StringLiteral_22480/*"shop/sellSvt"*/);
    byte_4352C0B = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44758168(BaseUrl, (System_String_o *)StringLiteral_22480/*"shop/sellSvt"*/, 0LL);
}


void __fastcall SellServantRequest__requestCompleted(
        SellServantRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  Il2CppObject *success; // x20
  System_String_o *v8; // x1

  if ( (byte_4352C0D & 1) == 0 )
  {
    sub_B70694(&JsonManager_TypeInfo);
    sub_B70694(&ResponseCommandKind_TypeInfo);
    sub_B70694(&StringLiteral_21408/*"ng"*/);
    byte_4352C0D = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v5 = ResponseCommandKind__SearchData(12, responseList, 0LL);
  if ( v5
    && (v6 = v5, ResponseData__checkError_29653500(v5, 0LL))
    && (success = (Il2CppObject *)v6->fields.success) != 0LL )
  {
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v8 = JsonManager__toJson(success, 0, 0, 0LL);
  }
  else
  {
    v8 = (System_String_o *)StringLiteral_21408/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v8, 0LL);
}


void __fastcall SellServantRequest_UseSvtHash___ctor(SellServantRequest_UseSvtHash_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SellServantRequest___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct SellServantRequest___c_StaticFields *static_fields; // x0

  if ( (byte_434F20C & 1) == 0 )
  {
    sub_B70694(&SellServantRequest___c_TypeInfo);
    byte_434F20C = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(SellServantRequest___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = SellServantRequest___c_TypeInfo->static_fields;
  static_fields->__9 = (struct SellServantRequest___c_o *)v1;
  sub_B70630(static_fields);
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

  if ( (byte_434F20D & 1) == 0 )
  {
    sub_B70694(&SellServantRequest_UseSvtHash_TypeInfo);
    byte_434F20D = 1;
  }
  v4 = sub_B70764(SellServantRequest_UseSvtHash_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  if ( !v4 )
    sub_B7076C(v5, v6);
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

  if ( (byte_434F20E & 1) == 0 )
  {
    sub_B70694(&SellServantRequest_UseSvtHash_TypeInfo);
    byte_434F20E = 1;
  }
  v4 = sub_B70764(SellServantRequest_UseSvtHash_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  if ( !v4 )
    sub_B7076C(v5, v6);
  *(_QWORD *)(v4 + 16) = i;
  *(_DWORD *)(v4 + 24) = 1;
  return (SellServantRequest_UseSvtHash_o *)v4;
}