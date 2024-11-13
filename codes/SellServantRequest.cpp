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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  SellServantRequest___c_c *v25; // x0
  System_Func_T__TResult__o *_9__2_0; // x22
  Il2CppObject *v27; // x23
  struct SellServantRequest___c_StaticFields *static_fields; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x0
  System_Collections_Generic_List_TSource__o *v36; // x0
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  SellServantRequest___c_c *v40; // x8
  Il2CppObject *v41; // x21
  System_Func_T__TResult__o *_9__2_1; // x22
  Il2CppObject *v43; // x23
  struct SellServantRequest___c_StaticFields *v44; // x0
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v51; // x0
  Il2CppObject *v52; // x20
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x3
  MiniMessagePack_MiniMessagePacker_o *v56; // x22
  __int64 v57; // x0
  __int64 v58; // x1
  __int64 v59; // x1
  System_Byte_array *v60; // x21
  System_String_o *v61; // x0
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x3
  MiniMessagePack_MiniMessagePacker_o *v65; // x21
  System_Byte_array *v66; // x0
  System_String_o *v67; // x0

  if ( (byte_4B17B65 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Convert_TypeInfo, servantUserIds, commandCodeUserIds);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_long__SellServantRequest_UseSvtHash___, v7, v8);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_SellServantRequest_UseSvtHash___, v9, v10);
    sub_1BCA7E0(&System_Func_long__SellServantRequest_UseSvtHash__TypeInfo, v11, v12);
    sub_1BCA7E0(&MiniMessagePack_MiniMessagePacker_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SellServantRequest___c__beginRequest_b__2_0__, v15, v16);
    sub_1BCA7E0(&Method_SellServantRequest___c__beginRequest_b__2_1__, v17, v18);
    sub_1BCA7E0(&SellServantRequest___c_TypeInfo, v19, v20);
    sub_1BCA7E0(&StringLiteral_23341/*"sellData"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_23340/*"sellCommandCode"*/, v23, v24);
    byte_4B17B65 = 1;
  }
  v25 = SellServantRequest___c_TypeInfo;
  if ( !SellServantRequest___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SellServantRequest___c_TypeInfo, servantUserIds);
    v25 = SellServantRequest___c_TypeInfo;
  }
  _9__2_0 = (System_Func_T__TResult__o *)v25->static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !v25->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v25, servantUserIds);
      v25 = SellServantRequest___c_TypeInfo;
    }
    v27 = (Il2CppObject *)v25->static_fields->__9;
    _9__2_0 = (System_Func_T__TResult__o *)sub_1BCAA2C(
                                             System_Func_long__SellServantRequest_UseSvtHash__TypeInfo,
                                             servantUserIds,
                                             commandCodeUserIds,
                                             method);
    System_Func_long__object____ctor(_9__2_0, v27, Method_SellServantRequest___c__beginRequest_b__2_0__, 0LL);
    static_fields = SellServantRequest___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Func_long__SellServantRequest_UseSvtHash__o *)_9__2_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__2_0, (int64_t)_9__2_0, v29, v30, v31, v32, v33, v34);
  }
  v35 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)servantUserIds,
                                                               (System_Func_TSource__TResult__o *)_9__2_0,
                                                               (const MethodInfo_2F42554 *)Method_System_Linq_Enumerable_Select_long__SellServantRequest_UseSvtHash___);
  v36 = System_Linq_Enumerable__ToList_object_(
          v35,
          (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_SellServantRequest_UseSvtHash___);
  v40 = SellServantRequest___c_TypeInfo;
  v41 = (Il2CppObject *)v36;
  if ( !SellServantRequest___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SellServantRequest___c_TypeInfo, v37);
    v40 = SellServantRequest___c_TypeInfo;
  }
  _9__2_1 = (System_Func_T__TResult__o *)v40->static_fields->__9__2_1;
  if ( !_9__2_1 )
  {
    if ( !v40->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v40, v37);
      v40 = SellServantRequest___c_TypeInfo;
    }
    v43 = (Il2CppObject *)v40->static_fields->__9;
    _9__2_1 = (System_Func_T__TResult__o *)sub_1BCAA2C(
                                             System_Func_long__SellServantRequest_UseSvtHash__TypeInfo,
                                             v37,
                                             v38,
                                             v39);
    System_Func_long__object____ctor(_9__2_1, v43, Method_SellServantRequest___c__beginRequest_b__2_1__, 0LL);
    v44 = SellServantRequest___c_TypeInfo->static_fields;
    v44->__9__2_1 = (struct System_Func_long__SellServantRequest_UseSvtHash__o *)_9__2_1;
    sub_1BCA784((PartyOrganizationUtility_o *)&v44->__9__2_1, (int64_t)_9__2_1, v45, v46, v47, v48, v49, v50);
  }
  v51 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)commandCodeUserIds,
                                                               (System_Func_TSource__TResult__o *)_9__2_1,
                                                               (const MethodInfo_2F42554 *)Method_System_Linq_Enumerable_Select_long__SellServantRequest_UseSvtHash___);
  v52 = (Il2CppObject *)System_Linq_Enumerable__ToList_object_(
                          v51,
                          (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_SellServantRequest_UseSvtHash___);
  v56 = (MiniMessagePack_MiniMessagePacker_o *)sub_1BCAA2C(MiniMessagePack_MiniMessagePacker_TypeInfo, v53, v54, v55);
  MiniMessagePack_MiniMessagePacker___ctor(v56, 0LL);
  if ( !v56 )
    goto LABEL_20;
  v60 = MiniMessagePack_MiniMessagePacker__PackClass(v56, v41, 0LL);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v59);
  v61 = System_Convert__ToBase64String(v60, 0LL);
  RequestBase__addField_41862348((RequestBase_o *)this, (System_String_o *)StringLiteral_23341/*"sellData"*/, v61, 0LL);
  v65 = (MiniMessagePack_MiniMessagePacker_o *)sub_1BCAA2C(MiniMessagePack_MiniMessagePacker_TypeInfo, v62, v63, v64);
  MiniMessagePack_MiniMessagePacker___ctor(v65, 0LL);
  if ( !v65 )
LABEL_20:
    sub_1BCAA3C(v57, v58);
  v66 = MiniMessagePack_MiniMessagePacker__PackClass(v65, v52, 0LL);
  v67 = System_Convert__ToBase64String(v66, 0LL);
  RequestBase__addField_41862348((RequestBase_o *)this, (System_String_o *)StringLiteral_23340/*"sellCommandCode"*/, v67, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall SellServantRequest__getURL(SellServantRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  System_String_o *BaseUrl; // x0

  if ( (byte_4B17B64 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_23518/*"shop/sellSvt"*/, v3, v4);
    byte_4B17B64 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62401220(BaseUrl, (System_String_o *)StringLiteral_23518/*"shop/sellSvt"*/, 0LL);
}


void __fastcall SellServantRequest__requestCompleted(
        SellServantRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  ResponseData_o *v9; // x0
  const MethodInfo *v10; // x2
  ResponseData_o *v11; // x20
  __int64 v12; // x1
  Il2CppObject *success; // x20
  System_String_o *v14; // x1

  if ( (byte_4B17B66 & 1) == 0 )
  {
    sub_1BCA7E0(&JsonManager_TypeInfo, responseList, method);
    sub_1BCA7E0(&ResponseCommandKind_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, v7, v8);
    byte_4B17B66 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v9 = ResponseCommandKind__SearchData(12, responseList, 0LL);
  if ( v9
    && (v11 = v9, ResponseData__checkError(v9, v9->fields.resCode, v10))
    && (success = (Il2CppObject *)v11->fields.success) != 0LL )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v12);
    v14 = JsonManager__toJson(success, 0, 0, 0LL);
  }
  else
  {
    v14 = (System_String_o *)StringLiteral_22292/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v14, 0LL);
}


void __fastcall SellServantRequest_UseSvtHash___ctor(SellServantRequest_UseSvtHash_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SellServantRequest___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B17B67 & 1) == 0 )
  {
    sub_1BCA7E0(&SellServantRequest___c_TypeInfo, v1, v2);
    byte_4B17B67 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(SellServantRequest___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  SellServantRequest___c_TypeInfo->static_fields->__9 = (struct SellServantRequest___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)SellServantRequest___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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

  if ( (byte_4B17B68 & 1) == 0 )
  {
    sub_1BCA7E0(&SellServantRequest_UseSvtHash_TypeInfo, i, method);
    byte_4B17B68 = 1;
  }
  v5 = sub_1BCAA2C(SellServantRequest_UseSvtHash_TypeInfo, i, method, v3);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    sub_1BCAA3C(v6, v7);
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

  if ( (byte_4B17B69 & 1) == 0 )
  {
    sub_1BCA7E0(&SellServantRequest_UseSvtHash_TypeInfo, i, method);
    byte_4B17B69 = 1;
  }
  v5 = sub_1BCAA2C(SellServantRequest_UseSvtHash_TypeInfo, i, method, v3);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    sub_1BCAA3C(v6, v7);
  *(_QWORD *)(v5 + 16) = i;
  *(_DWORD *)(v5 + 24) = 1;
  return (SellServantRequest_UseSvtHash_o *)v5;
}