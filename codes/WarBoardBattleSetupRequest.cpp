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
  if ( (byte_4D3261A & 1) == 0 )
  {
    sub_1C93AD4(&NetworkManager_TypeInfo);
    byte_4D3261A = 1;
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
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  System_String_array *v26; // x0
  Il2CppObject *v27; // x0
  System_String_o *v28; // x0
  __int64 v29; // x1
  const MethodInfo *v30; // x3
  WarBoardBattleSetupRequest___c_c *v31; // x0
  System_String_o *v32; // x26
  System_Func_T__TResult__o *_9__6_1; // x27
  System_String_o *v34; // x24
  System_String_o *v35; // x25
  Il2CppObject *v36; // x28
  struct WarBoardBattleSetupRequest___c_StaticFields *v37; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x0
  System_String_array *v45; // x0
  Il2CppObject *v46; // x0
  System_String_o *v47; // x0
  const MethodInfo *v48; // x3
  const MethodInfo *v49; // x3
  const MethodInfo *v50; // x3
  const MethodInfo *v51; // x1

  if ( (byte_4D3261B & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_Select_long__string___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_string___);
    sub_1C93AD4(&System_Func_long__string__TypeInfo);
    sub_1C93AD4(&Method_WarBoardBattleSetupRequest___c__beginRequest_b__6_0__);
    sub_1C93AD4(&Method_WarBoardBattleSetupRequest___c__beginRequest_b__6_1__);
    sub_1C93AD4(&WarBoardBattleSetupRequest___c_TypeInfo);
    sub_1C93AD4(&StringLiteral_23940/*"stageId"*/);
    sub_1C93AD4(&StringLiteral_18706/*"defenseUserSvtIds"*/);
    sub_1C93AD4(&StringLiteral_17247/*"befSquareIndex"*/);
    sub_1C93AD4(&StringLiteral_17052/*"attackUserSvtIds"*/);
    sub_1C93AD4(&StringLiteral_16832/*"aftSquareIndex"*/);
    sub_1C93AD4(&StringLiteral_809/*","*/);
    sub_1C93AD4(&StringLiteral_16114/*"[{0}]"*/);
    byte_4D3261B = 1;
  }
  RequestBase__addField(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_23940/*"stageId"*/,
    stageId,
    (const MethodInfo *)defenseUserSvtIds);
  v12 = WarBoardBattleSetupRequest___c_TypeInfo;
  if ( !WarBoardBattleSetupRequest___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardBattleSetupRequest___c_TypeInfo);
    v12 = WarBoardBattleSetupRequest___c_TypeInfo;
  }
  v13 = (System_String_o *)StringLiteral_16114/*"[{0}]"*/;
  v14 = (System_String_o *)StringLiteral_17052/*"attackUserSvtIds"*/;
  v15 = (System_String_o *)StringLiteral_809/*","*/;
  _9__6_0 = (System_Func_T__TResult__o *)v12->static_fields->__9__6_0;
  if ( !_9__6_0 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = WarBoardBattleSetupRequest___c_TypeInfo;
    }
    v17 = (Il2CppObject *)v12->static_fields->__9;
    _9__6_0 = (System_Func_T__TResult__o *)sub_1C93D20(System_Func_long__string__TypeInfo);
    System_Func_long__object____ctor(_9__6_0, v17, Method_WarBoardBattleSetupRequest___c__beginRequest_b__6_0__, 0);
    static_fields = WarBoardBattleSetupRequest___c_TypeInfo->static_fields;
    static_fields->__9__6_0 = (struct System_Func_long__string__o *)_9__6_0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->__9__6_0, (int32_t)_9__6_0, v19, v20, v21, v22, v23, v24);
  }
  v25 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)attackUserSvtIds,
                                                               (System_Func_TSource__TResult__o *)_9__6_0,
                                                               (const MethodInfo_31D9624 *)Method_System_Linq_Enumerable_Select_long__string___);
  v26 = (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                 v25,
                                 (const MethodInfo_31E3D18 *)Method_System_Linq_Enumerable_ToArray_string___);
  v27 = (Il2CppObject *)System_String__Join(v15, v26, 0);
  v28 = System_String__Format(v13, v27, 0);
  if ( !this )
    goto LABEL_18;
  RequestBase__addField_44907496((RequestBase_o *)this, v14, v28, v30);
  v31 = WarBoardBattleSetupRequest___c_TypeInfo;
  if ( !WarBoardBattleSetupRequest___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardBattleSetupRequest___c_TypeInfo);
    v31 = WarBoardBattleSetupRequest___c_TypeInfo;
  }
  v32 = (System_String_o *)StringLiteral_809/*","*/;
  _9__6_1 = (System_Func_T__TResult__o *)v31->static_fields->__9__6_1;
  v34 = (System_String_o *)StringLiteral_18706/*"defenseUserSvtIds"*/;
  v35 = (System_String_o *)StringLiteral_16114/*"[{0}]"*/;
  if ( !_9__6_1 )
  {
    if ( !v31->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v31);
      v31 = WarBoardBattleSetupRequest___c_TypeInfo;
    }
    v36 = (Il2CppObject *)v31->static_fields->__9;
    _9__6_1 = (System_Func_T__TResult__o *)sub_1C93D20(System_Func_long__string__TypeInfo);
    System_Func_long__object____ctor(_9__6_1, v36, Method_WarBoardBattleSetupRequest___c__beginRequest_b__6_1__, 0);
    v37 = WarBoardBattleSetupRequest___c_TypeInfo->static_fields;
    v37->__9__6_1 = (struct System_Func_long__string__o *)_9__6_1;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v37->__9__6_1, (int32_t)_9__6_1, v38, v39, v40, v41, v42, v43);
  }
  v44 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)defenseUserSvtIds,
                                                               (System_Func_TSource__TResult__o *)_9__6_1,
                                                               (const MethodInfo_31D9624 *)Method_System_Linq_Enumerable_Select_long__string___);
  v45 = (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                 v44,
                                 (const MethodInfo_31E3D18 *)Method_System_Linq_Enumerable_ToArray_string___);
  v46 = (Il2CppObject *)System_String__Join(v32, v45, 0);
  v47 = System_String__Format(v35, v46, 0);
  RequestBase__addField_44907496((RequestBase_o *)this, v34, v47, v48);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17247/*"befSquareIndex"*/, befSquareIndex, v49);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_16832/*"aftSquareIndex"*/, aftSquareIndex, v50);
  if ( !warBoardData )
LABEL_18:
    sub_1C93D2C(v28, v29);
  WarBoardData__SetRequest(warBoardData, (RequestBase_o *)this, 0);
  RequestBase__beginRequest((RequestBase_o *)this, v51);
}


System_String_o *WarBoardBattleSetupRequest__getURL(WarBoardBattleSetupRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4D32619 & 1) == 0 )
  {
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_25053/*"warBoard/battleSetup"*/);
    byte_4D32619 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_64425724(BaseUrl, (System_String_o *)StringLiteral_25053/*"warBoard/battleSetup"*/, 0);
}


bool WarBoardBattleSetupRequest__isBackgroundRequest(WarBoardBattleSetupRequest_o *this, const MethodInfo *method)
{
  return 1;
}


void WarBoardBattleSetupRequest___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D3261C & 1) == 0 )
  {
    sub_1C93AD4(&WarBoardBattleSetupRequest___c_TypeInfo);
    byte_4D3261C = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(WarBoardBattleSetupRequest___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarBoardBattleSetupRequest___c_TypeInfo->static_fields->__9 = (struct WarBoardBattleSetupRequest___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)WarBoardBattleSetupRequest___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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