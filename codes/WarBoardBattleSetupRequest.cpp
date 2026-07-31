bool WarBoardBattleSetupRequest__backgroundErrorRequest(
        WarBoardBattleSetupRequest_o *this,
        System_String_o *errorCode,
        const MethodInfo *method)
{
  int v3; // w9
  bool result; // w0
  int v6; // w9

  v3 = *((_DWORD *)&this->fields.shouldShowConnect + 1);
  result = v3 < 3;
  if ( v3 < 3 )
    v6 = v3 + 1;
  else
    v6 = 0;
  *((_DWORD *)&this->fields.shouldShowConnect + 1) = v6;
  return result;
}


void WarBoardBattleSetupRequest__backgroundErrorRetry(WarBoardBattleSetupRequest_o *this, const MethodInfo *method)
{
  if ( (byte_593A35E & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_593A35E = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
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
  __int64 v12; // x1
  WarBoardBattleSetupRequest___c_c *v13; // x0
  struct WarBoardBattleSetupRequest___c_StaticFields *static_fields; // x8
  System_String_o *v15; // x27
  System_String_o *v16; // x26
  System_String_o *v17; // x25
  System_Func_T__TResult__o *_9__6_0; // x28
  Il2CppObject *v19; // x29
  struct WarBoardBattleSetupRequest___c_StaticFields *v20; // x0
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0
  System_String_array *v28; // x0
  Il2CppObject *v29; // x0
  System_String_o *v30; // x0
  __int64 v31; // x1
  const MethodInfo *v32; // x3
  __int64 v33; // x1
  WarBoardBattleSetupRequest___c_c *v34; // x0
  struct WarBoardBattleSetupRequest___c_StaticFields *v35; // x8
  System_String_o *v36; // x26
  System_Func_T__TResult__o *_9__6_1; // x27
  System_String_o *v38; // x25
  System_String_o *v39; // x24
  Il2CppObject *v40; // x28
  struct WarBoardBattleSetupRequest___c_StaticFields *v41; // x0
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x0
  System_String_array *v49; // x0
  Il2CppObject *v50; // x0
  System_String_o *v51; // x0
  const MethodInfo *v52; // x3
  const MethodInfo *v53; // x3
  const MethodInfo *v54; // x3
  const MethodInfo *v55; // x1

  if ( (byte_593A35F & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Select_long__string___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_string___);
    sub_21FFC50(&System_Func_long__string__TypeInfo);
    sub_21FFC50(&Method_WarBoardBattleSetupRequest___c__beginRequest_b__6_0__);
    sub_21FFC50(&Method_WarBoardBattleSetupRequest___c__beginRequest_b__6_1__);
    sub_21FFC50(&WarBoardBattleSetupRequest___c_TypeInfo);
    sub_21FFC50(&StringLiteral_24856/*"stageId"*/);
    sub_21FFC50(&StringLiteral_19344/*"defenseUserSvtIds"*/);
    sub_21FFC50(&StringLiteral_17817/*"befSquareIndex"*/);
    sub_21FFC50(&StringLiteral_17609/*"attackUserSvtIds"*/);
    sub_21FFC50(&StringLiteral_17372/*"aftSquareIndex"*/);
    sub_21FFC50(&StringLiteral_869/*","*/);
    sub_21FFC50(&StringLiteral_16616/*"[{0}]"*/);
    byte_593A35F = 1;
  }
  RequestBase__addField(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_24856/*"stageId"*/,
    stageId,
    (const MethodInfo *)defenseUserSvtIds);
  v13 = WarBoardBattleSetupRequest___c_TypeInfo;
  if ( !*(&WarBoardBattleSetupRequest___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarBoardBattleSetupRequest___c_TypeInfo, v12);
    v13 = WarBoardBattleSetupRequest___c_TypeInfo;
  }
  static_fields = v13->static_fields;
  v15 = (System_String_o *)StringLiteral_869/*","*/;
  v16 = (System_String_o *)StringLiteral_16616/*"[{0}]"*/;
  v17 = (System_String_o *)StringLiteral_17609/*"attackUserSvtIds"*/;
  _9__6_0 = (System_Func_T__TResult__o *)static_fields->__9__6_0;
  if ( !_9__6_0 )
  {
    if ( !*(&v13->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v13, v12);
      static_fields = WarBoardBattleSetupRequest___c_TypeInfo->static_fields;
    }
    v19 = (Il2CppObject *)static_fields->__9;
    _9__6_0 = (System_Func_T__TResult__o *)sub_21FFEBC(System_Func_long__string__TypeInfo);
    System_Func_long__object____ctor(_9__6_0, v19, Method_WarBoardBattleSetupRequest___c__beginRequest_b__6_0__, 0);
    v20 = WarBoardBattleSetupRequest___c_TypeInfo->static_fields;
    v20->__9__6_0 = (struct System_Func_long__string__o *)_9__6_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v20->__9__6_0, (int32_t)_9__6_0, v21, v22, v23, v24, v25, v26);
  }
  v27 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)attackUserSvtIds,
                                                               (System_Func_TSource__TResult__o *)_9__6_0,
                                                               (const MethodInfo_385C370 *)Method_System_Linq_Enumerable_Select_long__string___);
  v28 = (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                 v27,
                                 (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_string___);
  v29 = (Il2CppObject *)System_String__Join(v15, v28, 0);
  v30 = System_String__Format(v16, v29, 0);
  if ( !this )
    goto LABEL_18;
  RequestBase__addField_51187332((RequestBase_o *)this, v17, v30, v32);
  v34 = WarBoardBattleSetupRequest___c_TypeInfo;
  if ( !*(&WarBoardBattleSetupRequest___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarBoardBattleSetupRequest___c_TypeInfo, v33);
    v34 = WarBoardBattleSetupRequest___c_TypeInfo;
  }
  v35 = v34->static_fields;
  v36 = (System_String_o *)StringLiteral_869/*","*/;
  _9__6_1 = (System_Func_T__TResult__o *)v35->__9__6_1;
  v38 = (System_String_o *)StringLiteral_16616/*"[{0}]"*/;
  v39 = (System_String_o *)StringLiteral_19344/*"defenseUserSvtIds"*/;
  if ( !_9__6_1 )
  {
    if ( !*(&v34->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v34, v33);
      v35 = WarBoardBattleSetupRequest___c_TypeInfo->static_fields;
    }
    v40 = (Il2CppObject *)v35->__9;
    _9__6_1 = (System_Func_T__TResult__o *)sub_21FFEBC(System_Func_long__string__TypeInfo);
    System_Func_long__object____ctor(_9__6_1, v40, Method_WarBoardBattleSetupRequest___c__beginRequest_b__6_1__, 0);
    v41 = WarBoardBattleSetupRequest___c_TypeInfo->static_fields;
    v41->__9__6_1 = (struct System_Func_long__string__o *)_9__6_1;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v41->__9__6_1, (int32_t)_9__6_1, v42, v43, v44, v45, v46, v47);
  }
  v48 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)defenseUserSvtIds,
                                                               (System_Func_TSource__TResult__o *)_9__6_1,
                                                               (const MethodInfo_385C370 *)Method_System_Linq_Enumerable_Select_long__string___);
  v49 = (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                 v48,
                                 (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_string___);
  v50 = (Il2CppObject *)System_String__Join(v36, v49, 0);
  v51 = System_String__Format(v38, v50, 0);
  RequestBase__addField_51187332((RequestBase_o *)this, v39, v51, v52);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17817/*"befSquareIndex"*/, befSquareIndex, v53);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17372/*"aftSquareIndex"*/, aftSquareIndex, v54);
  if ( !warBoardData )
LABEL_18:
    sub_21FFECC(v30, v31);
  WarBoardData__SetRequest(warBoardData, (RequestBase_o *)this, 0);
  RequestBase__beginRequest((RequestBase_o *)this, v55);
}


System_String_o *WarBoardBattleSetupRequest__getURL(WarBoardBattleSetupRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_593A35D & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&StringLiteral_26053/*"warBoard/battleSetup"*/);
    byte_593A35D = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_75438412(BaseUrl, (System_String_o *)StringLiteral_26053/*"warBoard/battleSetup"*/, 0);
}


bool WarBoardBattleSetupRequest__isBackgroundRequest(WarBoardBattleSetupRequest_o *this, const MethodInfo *method)
{
  return 1;
}


void WarBoardBattleSetupRequest___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_593A360 & 1) == 0 )
  {
    sub_21FFC50(&WarBoardBattleSetupRequest___c_TypeInfo);
    byte_593A360 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(WarBoardBattleSetupRequest___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarBoardBattleSetupRequest___c_TypeInfo->static_fields->__9 = (struct WarBoardBattleSetupRequest___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)WarBoardBattleSetupRequest___c_TypeInfo->static_fields,
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