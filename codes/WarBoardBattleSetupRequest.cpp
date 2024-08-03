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
  if ( (byte_49FDD98 & 1) == 0 )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, method);
    byte_49FDD98 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__RequestStart((RequestBase_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x2
  WarBoardBattleSetupRequest___c_c *v26; // x0
  System_String_o *v27; // x26
  System_String_o *v28; // x25
  System_String_o *v29; // x27
  System_Func_T__TResult__o *_9__6_0; // x28
  Il2CppObject *v31; // x29
  struct WarBoardBattleSetupRequest___c_StaticFields *static_fields; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x0
  System_String_array *v36; // x0
  Il2CppObject *v37; // x0
  System_String_o *v38; // x0
  const MethodInfo *v39; // x3
  __int64 v40; // x1
  __int64 v41; // x2
  WarBoardBattleSetupRequest___c_c *v42; // x0
  System_String_o *v43; // x26
  System_Func_T__TResult__o *_9__6_1; // x27
  System_String_o *v45; // x24
  System_String_o *v46; // x25
  Il2CppObject *v47; // x28
  struct WarBoardBattleSetupRequest___c_StaticFields *v48; // x0
  int32_t v49; // w2
  int32_t v50; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v51; // x0
  System_String_array *v52; // x0
  Il2CppObject *v53; // x0
  System_String_o *v54; // x0
  const MethodInfo *v55; // x3
  const MethodInfo *v56; // x3
  const MethodInfo *v57; // x3
  const MethodInfo *v58; // x1

  if ( (byte_49FDD99 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_long__string___, *(_QWORD *)&stageId);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_string___, v12);
    sub_1B640C8(&System_Func_long__string__TypeInfo, v13);
    sub_1B640C8(&Method_WarBoardBattleSetupRequest___c__beginRequest_b__6_0__, v14);
    sub_1B640C8(&Method_WarBoardBattleSetupRequest___c__beginRequest_b__6_1__, v15);
    sub_1B640C8(&WarBoardBattleSetupRequest___c_TypeInfo, v16);
    sub_1B640C8(&StringLiteral_23380/*"stageId"*/, v17);
    sub_1B640C8(&StringLiteral_18475/*"defenseUserSvtIds"*/, v18);
    sub_1B640C8(&StringLiteral_17083/*"befSquareIndex"*/, v19);
    sub_1B640C8(&StringLiteral_16884/*"attackUserSvtIds"*/, v20);
    sub_1B640C8(&StringLiteral_16639/*"aftSquareIndex"*/, v21);
    sub_1B640C8(&StringLiteral_869/*","*/, v22);
    sub_1B640C8(&StringLiteral_15956/*"[{0}]"*/, v23);
    byte_49FDD99 = 1;
  }
  RequestBase__addField(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_23380/*"stageId"*/,
    stageId,
    (const MethodInfo *)defenseUserSvtIds);
  v26 = WarBoardBattleSetupRequest___c_TypeInfo;
  if ( !WarBoardBattleSetupRequest___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardBattleSetupRequest___c_TypeInfo);
    v26 = WarBoardBattleSetupRequest___c_TypeInfo;
  }
  v27 = (System_String_o *)StringLiteral_15956/*"[{0}]"*/;
  v28 = (System_String_o *)StringLiteral_16884/*"attackUserSvtIds"*/;
  v29 = (System_String_o *)StringLiteral_869/*","*/;
  _9__6_0 = (System_Func_T__TResult__o *)v26->static_fields->__9__6_0;
  if ( !_9__6_0 )
  {
    if ( !v26->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v26);
      v26 = WarBoardBattleSetupRequest___c_TypeInfo;
    }
    v31 = (Il2CppObject *)v26->static_fields->__9;
    _9__6_0 = (System_Func_T__TResult__o *)sub_1B64314(System_Func_long__string__TypeInfo, v24, v25);
    System_Func_long__object____ctor(_9__6_0, v31, Method_WarBoardBattleSetupRequest___c__beginRequest_b__6_0__, 0LL);
    static_fields = WarBoardBattleSetupRequest___c_TypeInfo->static_fields;
    static_fields->__9__6_0 = (struct System_Func_long__string__o *)_9__6_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__6_0, (int32_t)_9__6_0, v33, v34);
  }
  v35 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)attackUserSvtIds,
                                                               (System_Func_TSource__TResult__o *)_9__6_0,
                                                               (const MethodInfo_2E67E90 *)Method_System_Linq_Enumerable_Select_long__string___);
  v36 = (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                 v35,
                                 (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_string___);
  v37 = (Il2CppObject *)System_String__Join(v29, v36, 0LL);
  v38 = System_String__Format(v27, v37, 0LL);
  if ( !this )
    goto LABEL_18;
  RequestBase__addField_40850936((RequestBase_o *)this, v28, v38, v39);
  v42 = WarBoardBattleSetupRequest___c_TypeInfo;
  if ( !WarBoardBattleSetupRequest___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardBattleSetupRequest___c_TypeInfo);
    v42 = WarBoardBattleSetupRequest___c_TypeInfo;
  }
  v43 = (System_String_o *)StringLiteral_869/*","*/;
  _9__6_1 = (System_Func_T__TResult__o *)v42->static_fields->__9__6_1;
  v45 = (System_String_o *)StringLiteral_18475/*"defenseUserSvtIds"*/;
  v46 = (System_String_o *)StringLiteral_15956/*"[{0}]"*/;
  if ( !_9__6_1 )
  {
    if ( !v42->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v42);
      v42 = WarBoardBattleSetupRequest___c_TypeInfo;
    }
    v47 = (Il2CppObject *)v42->static_fields->__9;
    _9__6_1 = (System_Func_T__TResult__o *)sub_1B64314(System_Func_long__string__TypeInfo, v40, v41);
    System_Func_long__object____ctor(_9__6_1, v47, Method_WarBoardBattleSetupRequest___c__beginRequest_b__6_1__, 0LL);
    v48 = WarBoardBattleSetupRequest___c_TypeInfo->static_fields;
    v48->__9__6_1 = (struct System_Func_long__string__o *)_9__6_1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v48->__9__6_1, (int32_t)_9__6_1, v49, v50);
  }
  v51 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)defenseUserSvtIds,
                                                               (System_Func_TSource__TResult__o *)_9__6_1,
                                                               (const MethodInfo_2E67E90 *)Method_System_Linq_Enumerable_Select_long__string___);
  v52 = (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                 v51,
                                 (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_string___);
  v53 = (Il2CppObject *)System_String__Join(v43, v52, 0LL);
  v54 = System_String__Format(v46, v53, 0LL);
  RequestBase__addField_40850936((RequestBase_o *)this, v45, v54, v55);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17083/*"befSquareIndex"*/, befSquareIndex, v56);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_16639/*"aftSquareIndex"*/, aftSquareIndex, v57);
  if ( !warBoardData )
LABEL_18:
    sub_1B64324(v38);
  WarBoardData__SetRequest(warBoardData, (RequestBase_o *)this, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, v58);
}


System_String_o *__fastcall WarBoardBattleSetupRequest__getURL(
        WarBoardBattleSetupRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_49FDD97 & 1) == 0 )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, method);
    sub_1B640C8(&StringLiteral_24513/*"warBoard/battleSetup"*/, v2);
    byte_49FDD97 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61375396(BaseUrl, (System_String_o *)StringLiteral_24513/*"warBoard/battleSetup"*/, 0LL);
}


bool __fastcall WarBoardBattleSetupRequest__isBackgroundRequest(
        WarBoardBattleSetupRequest_o *this,
        const MethodInfo *method)
{
  return 1;
}


void __fastcall WarBoardBattleSetupRequest___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FDD9A & 1) == 0 )
  {
    sub_1B640C8(&WarBoardBattleSetupRequest___c_TypeInfo, v1);
    byte_49FDD9A = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(WarBoardBattleSetupRequest___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  WarBoardBattleSetupRequest___c_TypeInfo->static_fields->__9 = (struct WarBoardBattleSetupRequest___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)WarBoardBattleSetupRequest___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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