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
  System_Func_T__TResult__o *_9__2_0; // x22
  Il2CppObject *v9; // x23
  struct SellServantRequest___c_StaticFields *static_fields; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  System_Collections_Generic_List_TSource__o *v18; // x0
  SellServantRequest___c_c *v19; // x8
  Il2CppObject *v20; // x21
  System_Func_T__TResult__o *_9__2_1; // x22
  Il2CppObject *v22; // x23
  struct SellServantRequest___c_StaticFields *v23; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0
  Il2CppObject *v31; // x20
  MiniMessagePack_MiniMessagePacker_o *v32; // x22
  __int64 v33; // x0
  __int64 v34; // x1
  System_Byte_array *v35; // x21
  System_String_o *v36; // x0
  MiniMessagePack_MiniMessagePacker_o *v37; // x21
  System_Byte_array *v38; // x0
  System_String_o *v39; // x0

  if ( (byte_4BDDF49 & 1) == 0 )
  {
    sub_1C21E38(&System_Convert_TypeInfo);
    sub_1C21E38(&Method_System_Linq_Enumerable_Select_long__SellServantRequest_UseSvtHash___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToList_SellServantRequest_UseSvtHash___);
    sub_1C21E38(&System_Func_long__SellServantRequest_UseSvtHash__TypeInfo);
    sub_1C21E38(&MiniMessagePack_MiniMessagePacker_TypeInfo);
    sub_1C21E38(&Method_SellServantRequest___c__beginRequest_b__2_0__);
    sub_1C21E38(&Method_SellServantRequest___c__beginRequest_b__2_1__);
    sub_1C21E38(&SellServantRequest___c_TypeInfo);
    sub_1C21E38(&StringLiteral_23519/*"sellData"*/);
    sub_1C21E38(&StringLiteral_23518/*"sellCommandCode"*/);
    byte_4BDDF49 = 1;
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
    _9__2_0 = (System_Func_T__TResult__o *)sub_1C22084(System_Func_long__SellServantRequest_UseSvtHash__TypeInfo);
    System_Func_long__object____ctor(_9__2_0, v9, Method_SellServantRequest___c__beginRequest_b__2_0__, 0LL);
    static_fields = SellServantRequest___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Func_long__SellServantRequest_UseSvtHash__o *)_9__2_0;
    sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__2_0, (int64_t)_9__2_0, v11, v12, v13, v14, v15, v16);
  }
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)servantUserIds,
                                                               (System_Func_TSource__TResult__o *)_9__2_0,
                                                               (const MethodInfo_2FE009C *)Method_System_Linq_Enumerable_Select_long__SellServantRequest_UseSvtHash___);
  v18 = System_Linq_Enumerable__ToList_object_(
          v17,
          (const MethodInfo_2FED5C8 *)Method_System_Linq_Enumerable_ToList_SellServantRequest_UseSvtHash___);
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
    _9__2_1 = (System_Func_T__TResult__o *)sub_1C22084(System_Func_long__SellServantRequest_UseSvtHash__TypeInfo);
    System_Func_long__object____ctor(_9__2_1, v22, Method_SellServantRequest___c__beginRequest_b__2_1__, 0LL);
    v23 = SellServantRequest___c_TypeInfo->static_fields;
    v23->__9__2_1 = (struct System_Func_long__SellServantRequest_UseSvtHash__o *)_9__2_1;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v23->__9__2_1, (int64_t)_9__2_1, v24, v25, v26, v27, v28, v29);
  }
  v30 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)commandCodeUserIds,
                                                               (System_Func_TSource__TResult__o *)_9__2_1,
                                                               (const MethodInfo_2FE009C *)Method_System_Linq_Enumerable_Select_long__SellServantRequest_UseSvtHash___);
  v31 = (Il2CppObject *)System_Linq_Enumerable__ToList_object_(
                          v30,
                          (const MethodInfo_2FED5C8 *)Method_System_Linq_Enumerable_ToList_SellServantRequest_UseSvtHash___);
  v32 = (MiniMessagePack_MiniMessagePacker_o *)sub_1C22084(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v32, 0LL);
  if ( !v32 )
    goto LABEL_20;
  v35 = MiniMessagePack_MiniMessagePacker__PackClass(v32, v20, 0LL);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v36 = System_Convert__ToBase64String(v35, 0LL);
  RequestBase__addField_42414744((RequestBase_o *)this, (System_String_o *)StringLiteral_23519/*"sellData"*/, v36, 0LL);
  v37 = (MiniMessagePack_MiniMessagePacker_o *)sub_1C22084(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v37, 0LL);
  if ( !v37 )
LABEL_20:
    sub_1C22094(v33, v34);
  v38 = MiniMessagePack_MiniMessagePacker__PackClass(v37, v31, 0LL);
  v39 = System_Convert__ToBase64String(v38, 0LL);
  RequestBase__addField_42414744((RequestBase_o *)this, (System_String_o *)StringLiteral_23518/*"sellCommandCode"*/, v39, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall SellServantRequest__getURL(SellServantRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4BDDF48 & 1) == 0 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&StringLiteral_23697/*"shop/sellSvt"*/);
    byte_4BDDF48 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_63115476(BaseUrl, (System_String_o *)StringLiteral_23697/*"shop/sellSvt"*/, 0LL);
}


void __fastcall SellServantRequest__requestCompleted(
        SellServantRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  const MethodInfo *v6; // x2
  ResponseData_o *v7; // x20
  Il2CppObject *success; // x20
  System_String_o *v9; // x1

  if ( (byte_4BDDF4A & 1) == 0 )
  {
    sub_1C21E38(&JsonManager_TypeInfo);
    sub_1C21E38(&ResponseCommandKind_TypeInfo);
    sub_1C21E38(&StringLiteral_22456/*"ng"*/);
    byte_4BDDF4A = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(12, responseList, 0LL);
  if ( v5
    && (v7 = v5, ResponseData__checkError(v5, v5->fields.resCode, v6))
    && (success = (Il2CppObject *)v7->fields.success) != 0LL )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v9 = JsonManager__toJson(success, 0, 0, 0LL);
  }
  else
  {
    v9 = (System_String_o *)StringLiteral_22456/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v9, 0LL);
}


void __fastcall SellServantRequest_UseSvtHash___ctor(SellServantRequest_UseSvtHash_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SellServantRequest___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BDDF4B & 1) == 0 )
  {
    sub_1C21E38(&SellServantRequest___c_TypeInfo);
    byte_4BDDF4B = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(SellServantRequest___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  SellServantRequest___c_TypeInfo->static_fields->__9 = (struct SellServantRequest___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)SellServantRequest___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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

  if ( (byte_4BDDF4C & 1) == 0 )
  {
    sub_1C21E38(&SellServantRequest_UseSvtHash_TypeInfo);
    byte_4BDDF4C = 1;
  }
  v4 = sub_1C22084(SellServantRequest_UseSvtHash_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  if ( !v4 )
    sub_1C22094(v5, v6);
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

  if ( (byte_4BDDF4D & 1) == 0 )
  {
    sub_1C21E38(&SellServantRequest_UseSvtHash_TypeInfo);
    byte_4BDDF4D = 1;
  }
  v4 = sub_1C22084(SellServantRequest_UseSvtHash_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  if ( !v4 )
    sub_1C22094(v5, v6);
  *(_QWORD *)(v4 + 16) = i;
  *(_DWORD *)(v4 + 24) = 1;
  return (SellServantRequest_UseSvtHash_o *)v4;
}