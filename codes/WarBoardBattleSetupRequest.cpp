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
  if ( (byte_4B1E0F4 & 1) == 0 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, method);
    byte_4B1E0F4 = 1;
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
  WarBoardBattleSetupRequest___c_c *v24; // x0
  System_String_o *v25; // x26
  System_String_o *v26; // x25
  System_String_o *v27; // x27
  System_Func_T__TResult__o *_9__6_0; // x28
  Il2CppObject *v29; // x29
  struct WarBoardBattleSetupRequest___c_StaticFields *static_fields; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x0
  System_String_array *v34; // x0
  Il2CppObject *v35; // x0
  System_String_o *v36; // x0
  __int64 v37; // x1
  const MethodInfo *v38; // x3
  WarBoardBattleSetupRequest___c_c *v39; // x0
  System_String_o *v40; // x26
  System_Func_T__TResult__o *_9__6_1; // x27
  System_String_o *v42; // x24
  System_String_o *v43; // x25
  Il2CppObject *v44; // x28
  struct WarBoardBattleSetupRequest___c_StaticFields *v45; // x0
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x0
  System_String_array *v49; // x0
  Il2CppObject *v50; // x0
  System_String_o *v51; // x0
  const MethodInfo *v52; // x3
  const MethodInfo *v53; // x3
  const MethodInfo *v54; // x3
  const MethodInfo *v55; // x1

  if ( (byte_4B1E0F5 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Select_long__string___, *(_QWORD *)&stageId);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_ToArray_string___, v12);
    sub_1BCAFF8(&System_Func_long__string__TypeInfo, v13);
    sub_1BCAFF8(&Method_WarBoardBattleSetupRequest___c__beginRequest_b__6_0__, v14);
    sub_1BCAFF8(&Method_WarBoardBattleSetupRequest___c__beginRequest_b__6_1__, v15);
    sub_1BCAFF8(&WarBoardBattleSetupRequest___c_TypeInfo, v16);
    sub_1BCAFF8(&StringLiteral_23437/*"stageId"*/, v17);
    sub_1BCAFF8(&StringLiteral_18393/*"defenseUserSvtIds"*/, v18);
    sub_1BCAFF8(&StringLiteral_16981/*"befSquareIndex"*/, v19);
    sub_1BCAFF8(&StringLiteral_16792/*"attackUserSvtIds"*/, v20);
    sub_1BCAFF8(&StringLiteral_16575/*"aftSquareIndex"*/, v21);
    sub_1BCAFF8(&StringLiteral_806/*","*/, v22);
    sub_1BCAFF8(&StringLiteral_15881/*"[{0}]"*/, v23);
    byte_4B1E0F5 = 1;
  }
  RequestBase__addField(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_23437/*"stageId"*/,
    stageId,
    (const MethodInfo *)defenseUserSvtIds);
  v24 = WarBoardBattleSetupRequest___c_TypeInfo;
  if ( !WarBoardBattleSetupRequest___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardBattleSetupRequest___c_TypeInfo);
    v24 = WarBoardBattleSetupRequest___c_TypeInfo;
  }
  v25 = (System_String_o *)StringLiteral_15881/*"[{0}]"*/;
  v26 = (System_String_o *)StringLiteral_16792/*"attackUserSvtIds"*/;
  v27 = (System_String_o *)StringLiteral_806/*","*/;
  _9__6_0 = (System_Func_T__TResult__o *)v24->static_fields->__9__6_0;
  if ( !_9__6_0 )
  {
    if ( !v24->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v24);
      v24 = WarBoardBattleSetupRequest___c_TypeInfo;
    }
    v29 = (Il2CppObject *)v24->static_fields->__9;
    _9__6_0 = (System_Func_T__TResult__o *)sub_1BCB244(System_Func_long__string__TypeInfo);
    System_Func_long__object____ctor(_9__6_0, v29, Method_WarBoardBattleSetupRequest___c__beginRequest_b__6_0__, 0LL);
    static_fields = WarBoardBattleSetupRequest___c_TypeInfo->static_fields;
    static_fields->__9__6_0 = (struct System_Func_long__string__o *)_9__6_0;
    sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__6_0, (int32_t)_9__6_0, v31, v32);
  }
  v33 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)attackUserSvtIds,
                                                               (System_Func_TSource__TResult__o *)_9__6_0,
                                                               (const MethodInfo_304DAB0 *)Method_System_Linq_Enumerable_Select_long__string___);
  v34 = (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                 v33,
                                 (const MethodInfo_30572C4 *)Method_System_Linq_Enumerable_ToArray_string___);
  v35 = (Il2CppObject *)System_String__Join(v27, v34, 0LL);
  v36 = System_String__Format(v25, v35, 0LL);
  if ( !this )
    goto LABEL_18;
  RequestBase__addField_43348616((RequestBase_o *)this, v26, v36, v38);
  v39 = WarBoardBattleSetupRequest___c_TypeInfo;
  if ( !WarBoardBattleSetupRequest___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardBattleSetupRequest___c_TypeInfo);
    v39 = WarBoardBattleSetupRequest___c_TypeInfo;
  }
  v40 = (System_String_o *)StringLiteral_806/*","*/;
  _9__6_1 = (System_Func_T__TResult__o *)v39->static_fields->__9__6_1;
  v42 = (System_String_o *)StringLiteral_18393/*"defenseUserSvtIds"*/;
  v43 = (System_String_o *)StringLiteral_15881/*"[{0}]"*/;
  if ( !_9__6_1 )
  {
    if ( !v39->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v39);
      v39 = WarBoardBattleSetupRequest___c_TypeInfo;
    }
    v44 = (Il2CppObject *)v39->static_fields->__9;
    _9__6_1 = (System_Func_T__TResult__o *)sub_1BCB244(System_Func_long__string__TypeInfo);
    System_Func_long__object____ctor(_9__6_1, v44, Method_WarBoardBattleSetupRequest___c__beginRequest_b__6_1__, 0LL);
    v45 = WarBoardBattleSetupRequest___c_TypeInfo->static_fields;
    v45->__9__6_1 = (struct System_Func_long__string__o *)_9__6_1;
    sub_1BCAF9C((CGThumbnailListItem_o *)&v45->__9__6_1, (int32_t)_9__6_1, v46, v47);
  }
  v48 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)defenseUserSvtIds,
                                                               (System_Func_TSource__TResult__o *)_9__6_1,
                                                               (const MethodInfo_304DAB0 *)Method_System_Linq_Enumerable_Select_long__string___);
  v49 = (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                 v48,
                                 (const MethodInfo_30572C4 *)Method_System_Linq_Enumerable_ToArray_string___);
  v50 = (Il2CppObject *)System_String__Join(v40, v49, 0LL);
  v51 = System_String__Format(v43, v50, 0LL);
  RequestBase__addField_43348616((RequestBase_o *)this, v42, v51, v52);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_16981/*"befSquareIndex"*/, befSquareIndex, v53);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_16575/*"aftSquareIndex"*/, aftSquareIndex, v54);
  if ( !warBoardData )
LABEL_18:
    sub_1BCB254(v36, v37);
  WarBoardData__SetRequest(warBoardData, (RequestBase_o *)this, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, v55);
}


System_String_o *__fastcall WarBoardBattleSetupRequest__getURL(
        WarBoardBattleSetupRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4B1E0F3 & 1) == 0 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, method);
    sub_1BCAFF8(&StringLiteral_24514/*"warBoard/battleSetup"*/, v2);
    byte_4B1E0F3 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62450424(BaseUrl, (System_String_o *)StringLiteral_24514/*"warBoard/battleSetup"*/, 0LL);
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
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B1E0F6 & 1) == 0 )
  {
    sub_1BCAFF8(&WarBoardBattleSetupRequest___c_TypeInfo, v1);
    byte_4B1E0F6 = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(WarBoardBattleSetupRequest___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  WarBoardBattleSetupRequest___c_TypeInfo->static_fields->__9 = (struct WarBoardBattleSetupRequest___c_o *)v2;
  sub_1BCAF9C((CGThumbnailListItem_o *)WarBoardBattleSetupRequest___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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