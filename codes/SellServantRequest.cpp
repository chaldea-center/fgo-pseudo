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
  SellServantRequest___c_c *v16; // x0
  System_Func_T__TResult__o *_9__2_0; // x22
  Il2CppObject *v18; // x23
  struct SellServantRequest___c_StaticFields *static_fields; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0
  System_Collections_Generic_List_TSource__o *v27; // x0
  SellServantRequest___c_c *v28; // x8
  Il2CppObject *v29; // x21
  System_Func_T__TResult__o *_9__2_1; // x22
  Il2CppObject *v31; // x23
  struct SellServantRequest___c_StaticFields *v32; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x0
  Il2CppObject *v40; // x20
  MiniMessagePack_MiniMessagePacker_o *v41; // x22
  __int64 v42; // x0
  __int64 v43; // x1
  System_Byte_array *v44; // x21
  System_String_o *v45; // x0
  MiniMessagePack_MiniMessagePacker_o *v46; // x21
  System_Byte_array *v47; // x0
  System_String_o *v48; // x0

  if ( (byte_4B68584 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Convert_TypeInfo, servantUserIds);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Select_long__SellServantRequest_UseSvtHash___, v7);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_ToList_SellServantRequest_UseSvtHash___, v8);
    sub_1BE4ACC(&System_Func_long__SellServantRequest_UseSvtHash__TypeInfo, v9);
    sub_1BE4ACC(&MiniMessagePack_MiniMessagePacker_TypeInfo, v10);
    sub_1BE4ACC(&Method_SellServantRequest___c__beginRequest_b__2_0__, v11);
    sub_1BE4ACC(&Method_SellServantRequest___c__beginRequest_b__2_1__, v12);
    sub_1BE4ACC(&SellServantRequest___c_TypeInfo, v13);
    sub_1BE4ACC(&StringLiteral_23426/*"sellData"*/, v14);
    sub_1BE4ACC(&StringLiteral_23425/*"sellCommandCode"*/, v15);
    byte_4B68584 = 1;
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
    _9__2_0 = (System_Func_T__TResult__o *)sub_1BE4D18(System_Func_long__SellServantRequest_UseSvtHash__TypeInfo);
    System_Func_long__object____ctor(_9__2_0, v18, Method_SellServantRequest___c__beginRequest_b__2_0__, 0LL);
    static_fields = SellServantRequest___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Func_long__SellServantRequest_UseSvtHash__o *)_9__2_0;
    sub_1BE4A70((PartyOrganizationUtility_o *)&static_fields->__9__2_0, (int64_t)_9__2_0, v20, v21, v22, v23, v24, v25);
  }
  v26 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)servantUserIds,
                                                               (System_Func_TSource__TResult__o *)_9__2_0,
                                                               (const MethodInfo_2F8938C *)Method_System_Linq_Enumerable_Select_long__SellServantRequest_UseSvtHash___);
  v27 = System_Linq_Enumerable__ToList_object_(
          v26,
          (const MethodInfo_2F96830 *)Method_System_Linq_Enumerable_ToList_SellServantRequest_UseSvtHash___);
  v28 = SellServantRequest___c_TypeInfo;
  v29 = (Il2CppObject *)v27;
  if ( !SellServantRequest___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SellServantRequest___c_TypeInfo);
    v28 = SellServantRequest___c_TypeInfo;
  }
  _9__2_1 = (System_Func_T__TResult__o *)v28->static_fields->__9__2_1;
  if ( !_9__2_1 )
  {
    if ( !v28->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v28);
      v28 = SellServantRequest___c_TypeInfo;
    }
    v31 = (Il2CppObject *)v28->static_fields->__9;
    _9__2_1 = (System_Func_T__TResult__o *)sub_1BE4D18(System_Func_long__SellServantRequest_UseSvtHash__TypeInfo);
    System_Func_long__object____ctor(_9__2_1, v31, Method_SellServantRequest___c__beginRequest_b__2_1__, 0LL);
    v32 = SellServantRequest___c_TypeInfo->static_fields;
    v32->__9__2_1 = (struct System_Func_long__SellServantRequest_UseSvtHash__o *)_9__2_1;
    sub_1BE4A70((PartyOrganizationUtility_o *)&v32->__9__2_1, (int64_t)_9__2_1, v33, v34, v35, v36, v37, v38);
  }
  v39 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)commandCodeUserIds,
                                                               (System_Func_TSource__TResult__o *)_9__2_1,
                                                               (const MethodInfo_2F8938C *)Method_System_Linq_Enumerable_Select_long__SellServantRequest_UseSvtHash___);
  v40 = (Il2CppObject *)System_Linq_Enumerable__ToList_object_(
                          v39,
                          (const MethodInfo_2F96830 *)Method_System_Linq_Enumerable_ToList_SellServantRequest_UseSvtHash___);
  v41 = (MiniMessagePack_MiniMessagePacker_o *)sub_1BE4D18(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v41, 0LL);
  if ( !v41 )
    goto LABEL_20;
  v44 = MiniMessagePack_MiniMessagePacker__PackClass(v41, v29, 0LL);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v45 = System_Convert__ToBase64String(v44, 0LL);
  RequestBase__addField_42104408((RequestBase_o *)this, (System_String_o *)StringLiteral_23426/*"sellData"*/, v45, 0LL);
  v46 = (MiniMessagePack_MiniMessagePacker_o *)sub_1BE4D18(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v46, 0LL);
  if ( !v46 )
LABEL_20:
    sub_1BE4D28(v42, v43);
  v47 = MiniMessagePack_MiniMessagePacker__PackClass(v46, v40, 0LL);
  v48 = System_Convert__ToBase64String(v47, 0LL);
  RequestBase__addField_42104408((RequestBase_o *)this, (System_String_o *)StringLiteral_23425/*"sellCommandCode"*/, v48, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall SellServantRequest__getURL(SellServantRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4B68583 & 1) == 0 )
  {
    sub_1BE4ACC(&NetworkManager_TypeInfo, method);
    sub_1BE4ACC(&StringLiteral_23604/*"shop/sellSvt"*/, v2);
    byte_4B68583 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62698808(BaseUrl, (System_String_o *)StringLiteral_23604/*"shop/sellSvt"*/, 0LL);
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
  System_String_o *v11; // x1

  if ( (byte_4B68585 & 1) == 0 )
  {
    sub_1BE4ACC(&JsonManager_TypeInfo, responseList);
    sub_1BE4ACC(&ResponseCommandKind_TypeInfo, v5);
    sub_1BE4ACC(&StringLiteral_22370/*"ng"*/, v6);
    byte_4B68585 = 1;
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
  }
  else
  {
    v11 = (System_String_o *)StringLiteral_22370/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v11, 0LL);
}


void __fastcall SellServantRequest_UseSvtHash___ctor(SellServantRequest_UseSvtHash_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SellServantRequest___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B68586 & 1) == 0 )
  {
    sub_1BE4ACC(&SellServantRequest___c_TypeInfo, v1);
    byte_4B68586 = 1;
  }
  v2 = (Il2CppObject *)sub_1BE4D18(SellServantRequest___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  SellServantRequest___c_TypeInfo->static_fields->__9 = (struct SellServantRequest___c_o *)v2;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)SellServantRequest___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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

  if ( (byte_4B68587 & 1) == 0 )
  {
    sub_1BE4ACC(&SellServantRequest_UseSvtHash_TypeInfo, i);
    byte_4B68587 = 1;
  }
  v4 = sub_1BE4D18(SellServantRequest_UseSvtHash_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  if ( !v4 )
    sub_1BE4D28(v5, v6);
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

  if ( (byte_4B68588 & 1) == 0 )
  {
    sub_1BE4ACC(&SellServantRequest_UseSvtHash_TypeInfo, i);
    byte_4B68588 = 1;
  }
  v4 = sub_1BE4D18(SellServantRequest_UseSvtHash_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  if ( !v4 )
    sub_1BE4D28(v5, v6);
  *(_QWORD *)(v4 + 16) = i;
  *(_DWORD *)(v4 + 24) = 1;
  return (SellServantRequest_UseSvtHash_o *)v4;
}