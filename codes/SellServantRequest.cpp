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
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  SellServantRequest___c_c *v18; // x0
  struct SellServantRequest___c_StaticFields *static_fields; // x8
  System_Func_long__SellServantRequest_UseSvtHash__o *_9__2_0; // x22
  Il2CppObject *v21; // x23
  struct SellServantRequest___c_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  System_Collections_Generic_List_TSource__o *v30; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  SellServantRequest___c_c *v35; // x8
  Il2CppObject *v36; // x21
  struct SellServantRequest___c_StaticFields *v37; // x9
  System_Func_long__SellServantRequest_UseSvtHash__o *_9__2_1; // x22
  Il2CppObject *v39; // x23
  struct SellServantRequest___c_StaticFields *v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v47; // x0
  Il2CppObject *v48; // x20
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  __int64 v52; // x4
  MiniMessagePack_MiniMessagePacker_o *v53; // x22
  System_Byte_array *v54; // x21
  System_String_o *v55; // x0
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x3
  __int64 v59; // x4
  MiniMessagePack_MiniMessagePacker_o *v60; // x21
  System_Byte_array *v61; // x0
  System_String_o *v62; // x0

  if ( (byte_40F93C2 & 1) == 0 )
  {
    sub_B16FFC(&System_Convert_TypeInfo, servantUserIds);
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_long__SellServantRequest_UseSvtHash___, v8);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToList_SellServantRequest_UseSvtHash___, v9);
    sub_B16FFC(&Method_System_Func_long__SellServantRequest_UseSvtHash___ctor__, v10);
    sub_B16FFC(&System_Func_long__SellServantRequest_UseSvtHash__TypeInfo, v11);
    sub_B16FFC(&MiniMessagePack_MiniMessagePacker_TypeInfo, v12);
    sub_B16FFC(&Method_SellServantRequest___c__beginRequest_b__2_0__, v13);
    sub_B16FFC(&Method_SellServantRequest___c__beginRequest_b__2_1__, v14);
    sub_B16FFC(&SellServantRequest___c_TypeInfo, v15);
    sub_B16FFC(&StringLiteral_21868, v16);
    sub_B16FFC(&StringLiteral_21867, v17);
    byte_40F93C2 = 1;
  }
  v18 = SellServantRequest___c_TypeInfo;
  if ( (BYTE3(SellServantRequest___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SellServantRequest___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SellServantRequest___c_TypeInfo);
    v18 = SellServantRequest___c_TypeInfo;
  }
  static_fields = v18->static_fields;
  _9__2_0 = static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      static_fields = SellServantRequest___c_TypeInfo->static_fields;
    }
    v21 = (Il2CppObject *)static_fields->__9;
    _9__2_0 = (System_Func_long__SellServantRequest_UseSvtHash__o *)sub_B170CC(
                                                                      System_Func_long__SellServantRequest_UseSvtHash__TypeInfo,
                                                                      servantUserIds,
                                                                      commandCodeUserIds,
                                                                      method,
                                                                      v4);
    System_Func_long__SellServantRequest_UseSvtHash____ctor(
      _9__2_0,
      v21,
      Method_SellServantRequest___c__beginRequest_b__2_0__,
      (const MethodInfo_2B68EAC *)Method_System_Func_long__SellServantRequest_UseSvtHash___ctor__);
    v22 = SellServantRequest___c_TypeInfo->static_fields;
    v22->__9__2_0 = _9__2_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v22->__9__2_0,
      (System_Int32_array **)_9__2_0,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  v29 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__SellServantRequest_UseSvtHash_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)servantUserIds,
                                                               (System_Func_TSource__TResult__o *)_9__2_0,
                                                               (const MethodInfo_19BFDC0 *)Method_System_Linq_Enumerable_Select_long__SellServantRequest_UseSvtHash___);
  v30 = System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
          v29,
          (const MethodInfo_19C7AA0 *)Method_System_Linq_Enumerable_ToList_SellServantRequest_UseSvtHash___);
  v35 = SellServantRequest___c_TypeInfo;
  v36 = (Il2CppObject *)v30;
  if ( (BYTE3(SellServantRequest___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SellServantRequest___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SellServantRequest___c_TypeInfo);
    v35 = SellServantRequest___c_TypeInfo;
  }
  v37 = v35->static_fields;
  _9__2_1 = v37->__9__2_1;
  if ( !_9__2_1 )
  {
    if ( (BYTE3(v35->vtable._0_Equals.methodPtr) & 4) != 0 && !v35->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v35);
      v37 = SellServantRequest___c_TypeInfo->static_fields;
    }
    v39 = (Il2CppObject *)v37->__9;
    _9__2_1 = (System_Func_long__SellServantRequest_UseSvtHash__o *)sub_B170CC(
                                                                      System_Func_long__SellServantRequest_UseSvtHash__TypeInfo,
                                                                      v31,
                                                                      v32,
                                                                      v33,
                                                                      v34);
    System_Func_long__SellServantRequest_UseSvtHash____ctor(
      _9__2_1,
      v39,
      Method_SellServantRequest___c__beginRequest_b__2_1__,
      (const MethodInfo_2B68EAC *)Method_System_Func_long__SellServantRequest_UseSvtHash___ctor__);
    v40 = SellServantRequest___c_TypeInfo->static_fields;
    v40->__9__2_1 = _9__2_1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v40->__9__2_1,
      (System_Int32_array **)_9__2_1,
      v41,
      v42,
      v43,
      v44,
      v45,
      v46);
  }
  v47 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__SellServantRequest_UseSvtHash_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)commandCodeUserIds,
                                                               (System_Func_TSource__TResult__o *)_9__2_1,
                                                               (const MethodInfo_19BFDC0 *)Method_System_Linq_Enumerable_Select_long__SellServantRequest_UseSvtHash___);
  v48 = (Il2CppObject *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                          v47,
                          (const MethodInfo_19C7AA0 *)Method_System_Linq_Enumerable_ToList_SellServantRequest_UseSvtHash___);
  v53 = (MiniMessagePack_MiniMessagePacker_o *)sub_B170CC(
                                                 MiniMessagePack_MiniMessagePacker_TypeInfo,
                                                 v49,
                                                 v50,
                                                 v51,
                                                 v52);
  MiniMessagePack_MiniMessagePacker___ctor(v53, 0LL);
  if ( !v53 )
    goto LABEL_25;
  v54 = MiniMessagePack_MiniMessagePacker__PackClass(v53, v36, 0LL);
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  v55 = System_Convert__ToBase64String(v54, 0LL);
  RequestBase__addField_30957164((RequestBase_o *)this, (System_String_o *)StringLiteral_21868, v55, 0LL);
  v60 = (MiniMessagePack_MiniMessagePacker_o *)sub_B170CC(
                                                 MiniMessagePack_MiniMessagePacker_TypeInfo,
                                                 v56,
                                                 v57,
                                                 v58,
                                                 v59);
  MiniMessagePack_MiniMessagePacker___ctor(v60, 0LL);
  if ( !v60 )
LABEL_25:
    sub_B170D4();
  v61 = MiniMessagePack_MiniMessagePacker__PackClass(v60, v48, 0LL);
  v62 = System_Convert__ToBase64String(v61, 0LL);
  RequestBase__addField_30957164((RequestBase_o *)this, (System_String_o *)StringLiteral_21867, v62, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall SellServantRequest__getURL(SellServantRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_40F93C1 & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_22016, v2);
    byte_40F93C1 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_43743732(BaseUrl, (System_String_o *)StringLiteral_22016, 0LL);
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

  if ( (byte_40F93C3 & 1) == 0 )
  {
    sub_B16FFC(&JsonManager_TypeInfo, responseList);
    sub_B16FFC(&ResponseCommandKind_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_20980, v6);
    byte_40F93C3 = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v7 = ResponseCommandKind__SearchData(12, responseList, 0LL);
  if ( v7
    && (v8 = v7, ResponseData__checkError_30924960(v7, 0LL))
    && (success = (Il2CppObject *)v8->fields.success) != 0LL )
  {
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v10 = JsonManager__toJson(success, 0, 0, 0LL);
  }
  else
  {
    v10 = (System_String_o *)StringLiteral_20980;
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
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F7601 & 1) == 0 )
  {
    sub_B16FFC(&SellServantRequest___c_TypeInfo, v1);
    byte_40F7601 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(SellServantRequest___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)SellServantRequest___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
  __int64 v4; // x4
  __int64 v6; // x20

  if ( (byte_40F7602 & 1) == 0 )
  {
    sub_B16FFC(&SellServantRequest_UseSvtHash_TypeInfo, i);
    byte_40F7602 = 1;
  }
  v6 = sub_B170CC(SellServantRequest_UseSvtHash_TypeInfo, i, method, v3, v4);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  if ( !v6 )
    sub_B170D4();
  *(_QWORD *)(v6 + 16) = i;
  *(_DWORD *)(v6 + 24) = 1;
  return (SellServantRequest_UseSvtHash_o *)v6;
}


SellServantRequest_UseSvtHash_o *__fastcall SellServantRequest___c___beginRequest_b__2_1(
        SellServantRequest___c_o *this,
        int64_t i,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x20

  if ( (byte_40F7603 & 1) == 0 )
  {
    sub_B16FFC(&SellServantRequest_UseSvtHash_TypeInfo, i);
    byte_40F7603 = 1;
  }
  v6 = sub_B170CC(SellServantRequest_UseSvtHash_TypeInfo, i, method, v3, v4);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  if ( !v6 )
    sub_B170D4();
  *(_QWORD *)(v6 + 16) = i;
  *(_DWORD *)(v6 + 24) = 1;
  return (SellServantRequest_UseSvtHash_o *)v6;
}