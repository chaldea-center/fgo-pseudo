void __fastcall WarBoardBattleSetupRequest___ctor(WarBoardBattleSetupRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


bool __fastcall WarBoardBattleSetupRequest__backgroundErrorRequest(
        WarBoardBattleSetupRequest_o *this,
        System_String_o *errorCode,
        const MethodInfo *method)
{
  int32_t retryCount; // w9
  bool v4; // w8
  int32_t v5; // w9

  retryCount = this->fields.retryCount;
  v4 = retryCount < 3;
  if ( retryCount <= 2 )
    v5 = retryCount + 1;
  else
    v5 = 0;
  this->fields.retryCount = v5;
  return v4;
}


void __fastcall WarBoardBattleSetupRequest__backgroundErrorRetry(
        WarBoardBattleSetupRequest_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BDDFC9 & 1) == 0 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BDDFC9 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__RequestStart((RequestBase_o *)this, 0LL);
}


void __fastcall WarBoardBattleSetupRequest__beginRequest(
        WarBoardBattleSetupRequest_o *this,
        int32_t stageId,
        System_Int64_array *attackUserSvtIds,
        System_Int64_array *defenseUserSvtIds,
        int32_t befSquareIndex,
        int32_t aftSquareIndex,
        WarBoardData_o *warBoardData,
        const MethodInfo *method)
{
  WarBoardBattleSetupRequest___c_c *v12; // x0
  System_String_o *v13; // x26
  System_String_o *v14; // x25
  System_String_o *v15; // x27
  System_Func_T__TResult__o *_9__6_0; // x28
  Il2CppObject *v17; // x29
  struct WarBoardBattleSetupRequest___c_StaticFields *static_fields; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  System_String_array *v26; // x0
  Il2CppObject *v27; // x0
  System_String_o *v28; // x0
  __int64 v29; // x1
  WarBoardBattleSetupRequest___c_c *v30; // x0
  System_String_o *v31; // x26
  System_Func_T__TResult__o *_9__6_1; // x27
  System_String_o *v33; // x24
  System_String_o *v34; // x25
  Il2CppObject *v35; // x28
  struct WarBoardBattleSetupRequest___c_StaticFields *v36; // x0
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x0
  System_String_array *v44; // x0
  Il2CppObject *v45; // x0
  System_String_o *v46; // x0

  if ( (byte_4BDDFCA & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_Select_long__string___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToArray_string___);
    sub_1C21E38(&System_Func_long__string__TypeInfo);
    sub_1C21E38(&Method_WarBoardBattleSetupRequest___c__beginRequest_b__6_0__);
    sub_1C21E38(&Method_WarBoardBattleSetupRequest___c__beginRequest_b__6_1__);
    sub_1C21E38(&WarBoardBattleSetupRequest___c_TypeInfo);
    sub_1C21E38(&StringLiteral_23905/*"stageId"*/);
    sub_1C21E38(&StringLiteral_18861/*"defenseUserSvtIds"*/);
    sub_1C21E38(&StringLiteral_17439/*"befSquareIndex"*/);
    sub_1C21E38(&StringLiteral_17238/*"attackUserSvtIds"*/);
    sub_1C21E38(&StringLiteral_16990/*"aftSquareIndex"*/);
    sub_1C21E38(&StringLiteral_866/*","*/);
    sub_1C21E38(&StringLiteral_16299/*"[{0}]"*/);
    byte_4BDDFCA = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23905/*"stageId"*/, stageId, 0LL);
  v12 = WarBoardBattleSetupRequest___c_TypeInfo;
  if ( !WarBoardBattleSetupRequest___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardBattleSetupRequest___c_TypeInfo);
    v12 = WarBoardBattleSetupRequest___c_TypeInfo;
  }
  v13 = (System_String_o *)StringLiteral_16299/*"[{0}]"*/;
  v14 = (System_String_o *)StringLiteral_17238/*"attackUserSvtIds"*/;
  v15 = (System_String_o *)StringLiteral_866/*","*/;
  _9__6_0 = (System_Func_T__TResult__o *)v12->static_fields->__9__6_0;
  if ( !_9__6_0 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = WarBoardBattleSetupRequest___c_TypeInfo;
    }
    v17 = (Il2CppObject *)v12->static_fields->__9;
    _9__6_0 = (System_Func_T__TResult__o *)sub_1C22084(System_Func_long__string__TypeInfo);
    System_Func_long__object____ctor(_9__6_0, v17, Method_WarBoardBattleSetupRequest___c__beginRequest_b__6_0__, 0LL);
    static_fields = WarBoardBattleSetupRequest___c_TypeInfo->static_fields;
    static_fields->__9__6_0 = (struct System_Func_long__string__o *)_9__6_0;
    sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__6_0, (int64_t)_9__6_0, v19, v20, v21, v22, v23, v24);
  }
  v25 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)attackUserSvtIds,
                                                               (System_Func_TSource__TResult__o *)_9__6_0,
                                                               (const MethodInfo_2FE009C *)Method_System_Linq_Enumerable_Select_long__string___);
  v26 = (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                 v25,
                                 (const MethodInfo_2FE97E4 *)Method_System_Linq_Enumerable_ToArray_string___);
  v27 = (Il2CppObject *)System_String__Join(v15, v26, 0LL);
  v28 = System_String__Format(v13, v27, 0LL);
  if ( !this )
    goto LABEL_18;
  RequestBase__addField_42414744((RequestBase_o *)this, v14, v28, 0LL);
  v30 = WarBoardBattleSetupRequest___c_TypeInfo;
  if ( !WarBoardBattleSetupRequest___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardBattleSetupRequest___c_TypeInfo);
    v30 = WarBoardBattleSetupRequest___c_TypeInfo;
  }
  v31 = (System_String_o *)StringLiteral_866/*","*/;
  _9__6_1 = (System_Func_T__TResult__o *)v30->static_fields->__9__6_1;
  v33 = (System_String_o *)StringLiteral_18861/*"defenseUserSvtIds"*/;
  v34 = (System_String_o *)StringLiteral_16299/*"[{0}]"*/;
  if ( !_9__6_1 )
  {
    if ( !v30->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v30);
      v30 = WarBoardBattleSetupRequest___c_TypeInfo;
    }
    v35 = (Il2CppObject *)v30->static_fields->__9;
    _9__6_1 = (System_Func_T__TResult__o *)sub_1C22084(System_Func_long__string__TypeInfo);
    System_Func_long__object____ctor(_9__6_1, v35, Method_WarBoardBattleSetupRequest___c__beginRequest_b__6_1__, 0LL);
    v36 = WarBoardBattleSetupRequest___c_TypeInfo->static_fields;
    v36->__9__6_1 = (struct System_Func_long__string__o *)_9__6_1;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v36->__9__6_1, (int64_t)_9__6_1, v37, v38, v39, v40, v41, v42);
  }
  v43 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)defenseUserSvtIds,
                                                               (System_Func_TSource__TResult__o *)_9__6_1,
                                                               (const MethodInfo_2FE009C *)Method_System_Linq_Enumerable_Select_long__string___);
  v44 = (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                 v43,
                                 (const MethodInfo_2FE97E4 *)Method_System_Linq_Enumerable_ToArray_string___);
  v45 = (Il2CppObject *)System_String__Join(v31, v44, 0LL);
  v46 = System_String__Format(v34, v45, 0LL);
  RequestBase__addField_42414744((RequestBase_o *)this, v33, v46, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17439/*"befSquareIndex"*/, befSquareIndex, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_16990/*"aftSquareIndex"*/, aftSquareIndex, 0LL);
  if ( !warBoardData )
LABEL_18:
    sub_1C22094(v28, v29);
  WarBoardData__SetRequest(warBoardData, (RequestBase_o *)this, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall WarBoardBattleSetupRequest__getURL(
        WarBoardBattleSetupRequest_o *this,
        const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4BDDFC8 & 1) == 0 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&StringLiteral_25053/*"warBoard/battleSetup"*/);
    byte_4BDDFC8 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_63115476(BaseUrl, (System_String_o *)StringLiteral_25053/*"warBoard/battleSetup"*/, 0LL);
}


bool __fastcall WarBoardBattleSetupRequest__isBackgroundRequest(
        WarBoardBattleSetupRequest_o *this,
        const MethodInfo *method)
{
  return 1;
}


void __fastcall WarBoardBattleSetupRequest___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BDDFCB & 1) == 0 )
  {
    sub_1C21E38(&WarBoardBattleSetupRequest___c_TypeInfo);
    byte_4BDDFCB = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(WarBoardBattleSetupRequest___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  WarBoardBattleSetupRequest___c_TypeInfo->static_fields->__9 = (struct WarBoardBattleSetupRequest___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)WarBoardBattleSetupRequest___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall WarBoardBattleSetupRequest___c___ctor(WarBoardBattleSetupRequest___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall WarBoardBattleSetupRequest___c___beginRequest_b__6_0(
        WarBoardBattleSetupRequest___c_o *this,
        int64_t x,
        const MethodInfo *method)
{
  int64_t v4; // [xsp+8h] [xbp-8h] BYREF

  v4 = x;
  return System_Int64__ToString((int64_t)&v4, 0LL);
}


System_String_o *__fastcall WarBoardBattleSetupRequest___c___beginRequest_b__6_1(
        WarBoardBattleSetupRequest___c_o *this,
        int64_t x,
        const MethodInfo *method)
{
  int64_t v4; // [xsp+8h] [xbp-8h] BYREF

  v4 = x;
  return System_Int64__ToString((int64_t)&v4, 0LL);
}