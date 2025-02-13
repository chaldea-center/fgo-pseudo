void __fastcall WarBoardSetupRequest___ctor(WarBoardSetupRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall WarBoardSetupRequest__beginRequest(
        WarBoardSetupRequest_o *this,
        int32_t stageId,
        int32_t questId,
        int32_t questPhase,
        System_Int32_array *squareIndexes,
        System_Int64_array *userSvtIds,
        System_Int64_array *userSvtEquips,
        int64_t userEquipId,
        const MethodInfo *method)
{
  WarBoardSetupRequest___c_c *v14; // x0
  System_String_o *v15; // x26
  System_String_o *v16; // x25
  System_Func_T__TResult__o *_9__1_0; // x27
  System_String_o *v18; // x24
  Il2CppObject *v19; // x28
  struct WarBoardSetupRequest___c_StaticFields *static_fields; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0
  System_String_array *v28; // x0
  Il2CppObject *v29; // x0
  System_String_o *v30; // x0
  __int64 v31; // x1
  WarBoardSetupRequest___c_c *v32; // x0
  System_String_o *v33; // x25
  System_String_o *v34; // x24
  System_Func_T__TResult__o *_9__1_1; // x26
  System_String_o *v36; // x23
  Il2CppObject *v37; // x27
  struct WarBoardSetupRequest___c_StaticFields *v38; // x0
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x0
  System_String_array *v46; // x0
  Il2CppObject *v47; // x0
  System_String_o *v48; // x0
  WarBoardSetupRequest___c_c *v49; // x0
  System_String_o *v50; // x23
  System_String_o *v51; // x24
  System_Func_T__TResult__o *_9__1_2; // x25
  System_String_o *v53; // x22
  Il2CppObject *v54; // x26
  struct WarBoardSetupRequest___c_StaticFields *v55; // x0
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v62; // x0
  System_String_array *v63; // x0
  Il2CppObject *v64; // x0
  System_String_o *v65; // x0
  System_Collections_Generic_IEnumerable_TSource__o *source; // [xsp+8h] [xbp-78h]

  if ( (byte_4BDDFE5 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_Select_int__string___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Select_long__string___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToArray_string___);
    sub_1C21E38(&System_Func_long__string__TypeInfo);
    sub_1C21E38(&System_Func_int__string__TypeInfo);
    sub_1C21E38(&Method_WarBoardSetupRequest___c__beginRequest_b__1_0__);
    sub_1C21E38(&Method_WarBoardSetupRequest___c__beginRequest_b__1_1__);
    sub_1C21E38(&Method_WarBoardSetupRequest___c__beginRequest_b__1_2__);
    sub_1C21E38(&WarBoardSetupRequest___c_TypeInfo);
    sub_1C21E38(&StringLiteral_23905/*"stageId"*/);
    sub_1C21E38(&StringLiteral_23885/*"squareIndexes"*/);
    sub_1C21E38(&StringLiteral_24826/*"userEquipId"*/);
    sub_1C21E38(&StringLiteral_24893/*"userSvtEquips"*/);
    sub_1C21E38(&StringLiteral_23103/*"questPhase"*/);
    sub_1C21E38(&StringLiteral_24895/*"userSvtIds"*/);
    sub_1C21E38(&StringLiteral_23101/*"questId"*/);
    sub_1C21E38(&StringLiteral_866/*","*/);
    sub_1C21E38(&StringLiteral_16299/*"[{0}]"*/);
    byte_4BDDFE5 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23905/*"stageId"*/, stageId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23101/*"questId"*/, questId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23103/*"questPhase"*/, questPhase, 0LL);
  v14 = WarBoardSetupRequest___c_TypeInfo;
  if ( !WarBoardSetupRequest___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardSetupRequest___c_TypeInfo);
    v14 = WarBoardSetupRequest___c_TypeInfo;
  }
  v15 = (System_String_o *)StringLiteral_866/*","*/;
  v16 = (System_String_o *)StringLiteral_16299/*"[{0}]"*/;
  _9__1_0 = (System_Func_T__TResult__o *)v14->static_fields->__9__1_0;
  v18 = (System_String_o *)StringLiteral_23885/*"squareIndexes"*/;
  if ( !_9__1_0 )
  {
    if ( !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      v14 = WarBoardSetupRequest___c_TypeInfo;
    }
    v19 = (Il2CppObject *)v14->static_fields->__9;
    _9__1_0 = (System_Func_T__TResult__o *)sub_1C22084(System_Func_int__string__TypeInfo);
    System_Func_int__object____ctor(_9__1_0, v19, Method_WarBoardSetupRequest___c__beginRequest_b__1_0__, 0LL);
    static_fields = WarBoardSetupRequest___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Func_int__string__o *)_9__1_0;
    sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__1_0, (int64_t)_9__1_0, v21, v22, v23, v24, v25, v26);
  }
  v27 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)squareIndexes,
                                                               (System_Func_TSource__TResult__o *)_9__1_0,
                                                               (const MethodInfo_2FDEEE4 *)Method_System_Linq_Enumerable_Select_int__string___);
  v28 = (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                 v27,
                                 (const MethodInfo_2FE97E4 *)Method_System_Linq_Enumerable_ToArray_string___);
  v29 = (Il2CppObject *)System_String__Join(v15, v28, 0LL);
  v30 = System_String__Format(v16, v29, 0LL);
  if ( !this )
    sub_1C22094(v30, v31);
  RequestBase__addField_42414744((RequestBase_o *)this, v18, v30, 0LL);
  v32 = WarBoardSetupRequest___c_TypeInfo;
  if ( !WarBoardSetupRequest___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardSetupRequest___c_TypeInfo);
    v32 = WarBoardSetupRequest___c_TypeInfo;
  }
  v33 = (System_String_o *)StringLiteral_866/*","*/;
  v34 = (System_String_o *)StringLiteral_16299/*"[{0}]"*/;
  _9__1_1 = (System_Func_T__TResult__o *)v32->static_fields->__9__1_1;
  v36 = (System_String_o *)StringLiteral_24895/*"userSvtIds"*/;
  if ( !_9__1_1 )
  {
    if ( !v32->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v32);
      v32 = WarBoardSetupRequest___c_TypeInfo;
    }
    v37 = (Il2CppObject *)v32->static_fields->__9;
    _9__1_1 = (System_Func_T__TResult__o *)sub_1C22084(System_Func_long__string__TypeInfo);
    System_Func_long__object____ctor(_9__1_1, v37, Method_WarBoardSetupRequest___c__beginRequest_b__1_1__, 0LL);
    v38 = WarBoardSetupRequest___c_TypeInfo->static_fields;
    v38->__9__1_1 = (struct System_Func_long__string__o *)_9__1_1;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v38->__9__1_1, (int64_t)_9__1_1, v39, v40, v41, v42, v43, v44);
  }
  v45 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__object_(
                                                               source,
                                                               (System_Func_TSource__TResult__o *)_9__1_1,
                                                               (const MethodInfo_2FE009C *)Method_System_Linq_Enumerable_Select_long__string___);
  v46 = (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                 v45,
                                 (const MethodInfo_2FE97E4 *)Method_System_Linq_Enumerable_ToArray_string___);
  v47 = (Il2CppObject *)System_String__Join(v33, v46, 0LL);
  v48 = System_String__Format(v34, v47, 0LL);
  RequestBase__addField_42414744((RequestBase_o *)this, v36, v48, 0LL);
  v49 = WarBoardSetupRequest___c_TypeInfo;
  if ( !WarBoardSetupRequest___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardSetupRequest___c_TypeInfo);
    v49 = WarBoardSetupRequest___c_TypeInfo;
  }
  v50 = (System_String_o *)StringLiteral_16299/*"[{0}]"*/;
  v51 = (System_String_o *)StringLiteral_866/*","*/;
  _9__1_2 = (System_Func_T__TResult__o *)v49->static_fields->__9__1_2;
  v53 = (System_String_o *)StringLiteral_24893/*"userSvtEquips"*/;
  if ( !_9__1_2 )
  {
    if ( !v49->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v49);
      v49 = WarBoardSetupRequest___c_TypeInfo;
    }
    v54 = (Il2CppObject *)v49->static_fields->__9;
    _9__1_2 = (System_Func_T__TResult__o *)sub_1C22084(System_Func_long__string__TypeInfo);
    System_Func_long__object____ctor(_9__1_2, v54, Method_WarBoardSetupRequest___c__beginRequest_b__1_2__, 0LL);
    v55 = WarBoardSetupRequest___c_TypeInfo->static_fields;
    v55->__9__1_2 = (struct System_Func_long__string__o *)_9__1_2;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v55->__9__1_2, (int64_t)_9__1_2, v56, v57, v58, v59, v60, v61);
  }
  v62 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)userSvtEquips,
                                                               (System_Func_TSource__TResult__o *)_9__1_2,
                                                               (const MethodInfo_2FE009C *)Method_System_Linq_Enumerable_Select_long__string___);
  v63 = (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                 v62,
                                 (const MethodInfo_2FE97E4 *)Method_System_Linq_Enumerable_ToArray_string___);
  v64 = (Il2CppObject *)System_String__Join(v51, v63, 0LL);
  v65 = System_String__Format(v50, v64, 0LL);
  RequestBase__addField_42414744((RequestBase_o *)this, v53, v65, 0LL);
  RequestBase__addField_42421084((RequestBase_o *)this, (System_String_o *)StringLiteral_24826/*"userEquipId"*/, userEquipId, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall WarBoardSetupRequest__getURL(WarBoardSetupRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4BDDFE4 & 1) == 0 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&StringLiteral_25061/*"warBoard/setup"*/);
    byte_4BDDFE4 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_63115476(BaseUrl, (System_String_o *)StringLiteral_25061/*"warBoard/setup"*/, 0LL);
}


void __fastcall WarBoardSetupRequest__requestCompleted(
        WarBoardSetupRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  const MethodInfo *v6; // x2
  ResponseData_o *v7; // x20
  System_Collections_Generic_Dictionary_object__object__o *success; // x20
  Il2CppObject *Item; // x0
  Il2CppObject *v10; // x0
  System_String_o *v11; // x1

  if ( (byte_4BDDFE6 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    sub_1C21E38(&JsonManager_TypeInfo);
    sub_1C21E38(&ResponseCommandKind_TypeInfo);
    sub_1C21E38(&StringLiteral_22456/*"ng"*/);
    sub_1C21E38(&StringLiteral_25067/*"warBoardData"*/);
    byte_4BDDFE6 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(91, responseList, 0LL);
  if ( v5
    && (v7 = v5, ResponseData__checkError(v5, v5->fields.resCode, v6))
    && (success = (System_Collections_Generic_Dictionary_object__object__o *)v7->fields.success) != 0LL )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             success,
             (Il2CppObject *)StringLiteral_25067/*"warBoardData"*/,
             (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v10 = RequestBase__UnpackToMessagePack((RequestBase_o *)this, Item, 0LL);
    System_Collections_Generic_Dictionary_object__object___set_Item(
      success,
      (Il2CppObject *)StringLiteral_25067/*"warBoardData"*/,
      v10,
      (const MethodInfo_331666C *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v11 = JsonManager__toJson((Il2CppObject *)success, 0, 0, 0LL);
  }
  else
  {
    v11 = (System_String_o *)StringLiteral_22456/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v11, 0LL);
}


void __fastcall WarBoardSetupRequest___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BDDFE7 & 1) == 0 )
  {
    sub_1C21E38(&WarBoardSetupRequest___c_TypeInfo);
    byte_4BDDFE7 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(WarBoardSetupRequest___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  WarBoardSetupRequest___c_TypeInfo->static_fields->__9 = (struct WarBoardSetupRequest___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)WarBoardSetupRequest___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall WarBoardSetupRequest___c___ctor(WarBoardSetupRequest___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall WarBoardSetupRequest___c___beginRequest_b__1_0(
        WarBoardSetupRequest___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  int32_t v4; // [xsp+Ch] [xbp-4h] BYREF

  v4 = x;
  return System_Int32__ToString((int32_t)&v4, 0LL);
}


System_String_o *__fastcall WarBoardSetupRequest___c___beginRequest_b__1_1(
        WarBoardSetupRequest___c_o *this,
        int64_t x,
        const MethodInfo *method)
{
  int64_t v4; // [xsp+8h] [xbp-8h] BYREF

  v4 = x;
  return System_Int64__ToString((int64_t)&v4, 0LL);
}


System_String_o *__fastcall WarBoardSetupRequest___c___beginRequest_b__1_2(
        WarBoardSetupRequest___c_o *this,
        int64_t x,
        const MethodInfo *method)
{
  int64_t v4; // [xsp+8h] [xbp-8h] BYREF

  v4 = x;
  return System_Int64__ToString((int64_t)&v4, 0LL);
}