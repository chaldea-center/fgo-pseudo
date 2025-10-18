bool WarBoardBattleSetupRequest__backgroundErrorRequest(
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


void WarBoardBattleSetupRequest__backgroundErrorRetry(WarBoardBattleSetupRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4C44C09 & 1) == 0 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C44C09 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__RequestStart((RequestBase_o *)this, 0);
}


void WarBoardBattleSetupRequest__beginRequest(
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
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0
  System_String_array *v22; // x0
  Il2CppObject *v23; // x0
  System_String_o *v24; // x0
  const MethodInfo *v25; // x3
  WarBoardBattleSetupRequest___c_c *v26; // x0
  System_String_o *v27; // x26
  System_Func_T__TResult__o *_9__6_1; // x27
  System_String_o *v29; // x24
  System_String_o *v30; // x25
  Il2CppObject *v31; // x28
  struct WarBoardBattleSetupRequest___c_StaticFields *v32; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x0
  System_String_array *v36; // x0
  Il2CppObject *v37; // x0
  System_String_o *v38; // x0
  const MethodInfo *v39; // x3
  const MethodInfo *v40; // x3
  const MethodInfo *v41; // x3
  const MethodInfo *v42; // x1

  if ( (byte_4C44C0A & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_Select_long__string___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_string___);
    sub_1C37058(&System_Func_long__string__TypeInfo);
    sub_1C37058(&Method_WarBoardBattleSetupRequest___c__beginRequest_b__6_0__);
    sub_1C37058(&Method_WarBoardBattleSetupRequest___c__beginRequest_b__6_1__);
    sub_1C37058(&WarBoardBattleSetupRequest___c_TypeInfo);
    sub_1C37058(&StringLiteral_23648/*"stageId"*/);
    sub_1C37058(&StringLiteral_18550/*"defenseUserSvtIds"*/);
    sub_1C37058(&StringLiteral_17121/*"befSquareIndex"*/);
    sub_1C37058(&StringLiteral_16930/*"attackUserSvtIds"*/);
    sub_1C37058(&StringLiteral_16712/*"aftSquareIndex"*/);
    sub_1C37058(&StringLiteral_811/*","*/);
    sub_1C37058(&StringLiteral_16016/*"[{0}]"*/);
    byte_4C44C0A = 1;
  }
  RequestBase__addField(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_23648/*"stageId"*/,
    stageId,
    (const MethodInfo *)defenseUserSvtIds);
  v12 = WarBoardBattleSetupRequest___c_TypeInfo;
  if ( !WarBoardBattleSetupRequest___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardBattleSetupRequest___c_TypeInfo);
    v12 = WarBoardBattleSetupRequest___c_TypeInfo;
  }
  v13 = (System_String_o *)StringLiteral_16016/*"[{0}]"*/;
  v14 = (System_String_o *)StringLiteral_16930/*"attackUserSvtIds"*/;
  v15 = (System_String_o *)StringLiteral_811/*","*/;
  _9__6_0 = (System_Func_T__TResult__o *)v12->static_fields->__9__6_0;
  if ( !_9__6_0 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = WarBoardBattleSetupRequest___c_TypeInfo;
    }
    v17 = (Il2CppObject *)v12->static_fields->__9;
    _9__6_0 = (System_Func_T__TResult__o *)sub_1C372A4(System_Func_long__string__TypeInfo);
    System_Func_long__object____ctor(_9__6_0, v17, Method_WarBoardBattleSetupRequest___c__beginRequest_b__6_0__, 0);
    static_fields = WarBoardBattleSetupRequest___c_TypeInfo->static_fields;
    static_fields->__9__6_0 = (struct System_Func_long__string__o *)_9__6_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__6_0, (int32_t)_9__6_0, v19, v20);
  }
  v21 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)attackUserSvtIds,
                                                               (System_Func_TSource__TResult__o *)_9__6_0,
                                                               (const MethodInfo_311CE08 *)Method_System_Linq_Enumerable_Select_long__string___);
  v22 = (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                 v21,
                                 (const MethodInfo_31272F4 *)Method_System_Linq_Enumerable_ToArray_string___);
  v23 = (Il2CppObject *)System_String__Join(v15, v22, 0);
  v24 = System_String__Format(v13, v23, 0);
  if ( !this )
    goto LABEL_18;
  RequestBase__addField_44247300((RequestBase_o *)this, v14, v24, v25);
  v26 = WarBoardBattleSetupRequest___c_TypeInfo;
  if ( !WarBoardBattleSetupRequest___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardBattleSetupRequest___c_TypeInfo);
    v26 = WarBoardBattleSetupRequest___c_TypeInfo;
  }
  v27 = (System_String_o *)StringLiteral_811/*","*/;
  _9__6_1 = (System_Func_T__TResult__o *)v26->static_fields->__9__6_1;
  v29 = (System_String_o *)StringLiteral_18550/*"defenseUserSvtIds"*/;
  v30 = (System_String_o *)StringLiteral_16016/*"[{0}]"*/;
  if ( !_9__6_1 )
  {
    if ( !v26->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v26);
      v26 = WarBoardBattleSetupRequest___c_TypeInfo;
    }
    v31 = (Il2CppObject *)v26->static_fields->__9;
    _9__6_1 = (System_Func_T__TResult__o *)sub_1C372A4(System_Func_long__string__TypeInfo);
    System_Func_long__object____ctor(_9__6_1, v31, Method_WarBoardBattleSetupRequest___c__beginRequest_b__6_1__, 0);
    v32 = WarBoardBattleSetupRequest___c_TypeInfo->static_fields;
    v32->__9__6_1 = (struct System_Func_long__string__o *)_9__6_1;
    sub_1C36FFC((CGThumbnailListItem_o *)&v32->__9__6_1, (int32_t)_9__6_1, v33, v34);
  }
  v35 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)defenseUserSvtIds,
                                                               (System_Func_TSource__TResult__o *)_9__6_1,
                                                               (const MethodInfo_311CE08 *)Method_System_Linq_Enumerable_Select_long__string___);
  v36 = (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                 v35,
                                 (const MethodInfo_31272F4 *)Method_System_Linq_Enumerable_ToArray_string___);
  v37 = (Il2CppObject *)System_String__Join(v27, v36, 0);
  v38 = System_String__Format(v30, v37, 0);
  RequestBase__addField_44247300((RequestBase_o *)this, v29, v38, v39);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17121/*"befSquareIndex"*/, befSquareIndex, v40);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_16712/*"aftSquareIndex"*/, aftSquareIndex, v41);
  if ( !warBoardData )
LABEL_18:
    sub_1C372B4(v24);
  WarBoardData__SetRequest(warBoardData, (RequestBase_o *)this, 0);
  RequestBase__beginRequest((RequestBase_o *)this, v42);
}


System_String_o *WarBoardBattleSetupRequest__getURL(WarBoardBattleSetupRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4C44C08 & 1) == 0 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&StringLiteral_24731/*"warBoard/battleSetup"*/);
    byte_4C44C08 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_63561656(BaseUrl, (System_String_o *)StringLiteral_24731/*"warBoard/battleSetup"*/, 0);
}


bool WarBoardBattleSetupRequest__isBackgroundRequest(WarBoardBattleSetupRequest_o *this, const MethodInfo *method)
{
  return 1;
}


void WarBoardBattleSetupRequest___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C44C0B & 1) == 0 )
  {
    sub_1C37058(&WarBoardBattleSetupRequest___c_TypeInfo);
    byte_4C44C0B = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(WarBoardBattleSetupRequest___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarBoardBattleSetupRequest___c_TypeInfo->static_fields->__9 = (struct WarBoardBattleSetupRequest___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)WarBoardBattleSetupRequest___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void WarBoardBattleSetupRequest___c___ctor(WarBoardBattleSetupRequest___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_String_o *WarBoardBattleSetupRequest___c___beginRequest_b__6_0(
        WarBoardBattleSetupRequest___c_o *this,
        int64_t x,
        const MethodInfo *method)
{
  int64_t v4; // [xsp+8h] [xbp-8h] BYREF

  v4 = x;
  return System_Int64__ToString((int64_t)&v4, 0);
}


System_String_o *WarBoardBattleSetupRequest___c___beginRequest_b__6_1(
        WarBoardBattleSetupRequest___c_o *this,
        int64_t x,
        const MethodInfo *method)
{
  int64_t v4; // [xsp+8h] [xbp-8h] BYREF

  v4 = x;
  return System_Int64__ToString((int64_t)&v4, 0);
}