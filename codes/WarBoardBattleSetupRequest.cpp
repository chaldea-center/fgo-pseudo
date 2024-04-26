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
  if ( (byte_43503A6 & 1) == 0 )
  {
    sub_B70694(&NetworkManager_TypeInfo);
    byte_43503A6 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
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
  WarBoardBattleSetupRequest___c_c *v15; // x0
  struct WarBoardBattleSetupRequest___c_StaticFields *static_fields; // x8
  System_Func_long__SellServantRequest_UseSvtHash__o *_9__6_0; // x28
  System_String_o *v18; // x27
  System_String_o *v19; // x26
  System_String_o *v20; // x25
  WarBoardData_o *v21; // x22
  Il2CppObject *v22; // x21
  struct WarBoardBattleSetupRequest___c_StaticFields *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0
  System_String_array *v31; // x0
  Il2CppObject *v32; // x0
  System_String_o *v33; // x0
  __int64 v34; // x1
  WarBoardBattleSetupRequest___c_c *v35; // x0
  struct WarBoardBattleSetupRequest___c_StaticFields *v36; // x8
  System_String_o *v37; // x25
  System_Func_long__SellServantRequest_UseSvtHash__o *_9__6_1; // x27
  System_String_o *v39; // x26
  System_String_o *v40; // x24
  WarBoardData_o *v41; // x19
  Il2CppObject *v42; // x21
  struct WarBoardBattleSetupRequest___c_StaticFields *v43; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v50; // x0
  System_String_array *v51; // x0
  Il2CppObject *v52; // x0
  System_String_o *v53; // x0
  const MethodInfo *v54; // x2
  System_Collections_Generic_IEnumerable_TSource__o *source; // [xsp+0h] [xbp-60h]
  int32_t data; // [xsp+Ch] [xbp-54h]

  if ( (byte_43503A7 & 1) == 0 )
  {
    sub_B70694(&Method_System_Linq_Enumerable_Select_long__string___);
    sub_B70694(&Method_System_Linq_Enumerable_ToArray_string___);
    sub_B70694(&Method_System_Func_long__string___ctor__);
    sub_B70694(&System_Func_long__string__TypeInfo);
    sub_B70694(&Method_WarBoardBattleSetupRequest___c__beginRequest_b__6_0__);
    sub_B70694(&Method_WarBoardBattleSetupRequest___c__beginRequest_b__6_1__);
    sub_B70694(&WarBoardBattleSetupRequest___c_TypeInfo);
    sub_B70694(&StringLiteral_22635/*"stageId"*/);
    sub_B70694(&StringLiteral_18217/*"defenseUserSvtIds"*/);
    sub_B70694(&StringLiteral_16933/*"befSquareIndex"*/);
    sub_B70694(&StringLiteral_16754/*"attackUserSvtIds"*/);
    sub_B70694(&StringLiteral_16528/*"aftSquareIndex"*/);
    sub_B70694(&StringLiteral_712/*","*/);
    sub_B70694(&StringLiteral_16049/*"[{0}]"*/);
    byte_43503A7 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22635/*"stageId"*/, stageId, 0LL);
  source = (System_Collections_Generic_IEnumerable_TSource__o *)defenseUserSvtIds;
  v15 = WarBoardBattleSetupRequest___c_TypeInfo;
  if ( (BYTE3(WarBoardBattleSetupRequest___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardBattleSetupRequest___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardBattleSetupRequest___c_TypeInfo);
    v15 = WarBoardBattleSetupRequest___c_TypeInfo;
  }
  static_fields = v15->static_fields;
  _9__6_0 = (System_Func_long__SellServantRequest_UseSvtHash__o *)static_fields->__9__6_0;
  v18 = (System_String_o *)StringLiteral_712/*","*/;
  v19 = (System_String_o *)StringLiteral_16049/*"[{0}]"*/;
  data = aftSquareIndex;
  v20 = (System_String_o *)StringLiteral_16754/*"attackUserSvtIds"*/;
  if ( !_9__6_0 )
  {
    if ( (BYTE3(v15->vtable._0_Equals.methodPtr) & 4) != 0 )
    {
      v21 = warBoardData;
      if ( !v15->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v15);
        static_fields = WarBoardBattleSetupRequest___c_TypeInfo->static_fields;
      }
    }
    else
    {
      v21 = warBoardData;
    }
    v22 = (Il2CppObject *)static_fields->__9;
    _9__6_0 = (System_Func_long__SellServantRequest_UseSvtHash__o *)sub_B70764(System_Func_long__string__TypeInfo);
    System_Func_long__SellServantRequest_UseSvtHash____ctor(
      _9__6_0,
      v22,
      Method_WarBoardBattleSetupRequest___c__beginRequest_b__6_0__,
      (const MethodInfo_29AA8E4 *)Method_System_Func_long__string___ctor__);
    v23 = WarBoardBattleSetupRequest___c_TypeInfo->static_fields;
    v23->__9__6_0 = (struct System_Func_long__string__o *)_9__6_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v23->__9__6_0,
      (System_Int32_array **)_9__6_0,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
    warBoardData = v21;
  }
  v30 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__SellServantRequest_UseSvtHash_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)attackUserSvtIds,
                                                               (System_Func_TSource__TResult__o *)_9__6_0,
                                                               (const MethodInfo_1CC3454 *)Method_System_Linq_Enumerable_Select_long__string___);
  v31 = (System_String_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                 v30,
                                 (const MethodInfo_1CC8794 *)Method_System_Linq_Enumerable_ToArray_string___);
  v32 = (Il2CppObject *)System_String__Join(v18, v31, 0LL);
  v33 = System_String__Format(v19, v32, 0LL);
  if ( !this )
    goto LABEL_24;
  RequestBase__addField_32336576((RequestBase_o *)this, v20, v33, 0LL);
  v35 = WarBoardBattleSetupRequest___c_TypeInfo;
  if ( (BYTE3(WarBoardBattleSetupRequest___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardBattleSetupRequest___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardBattleSetupRequest___c_TypeInfo);
    v35 = WarBoardBattleSetupRequest___c_TypeInfo;
  }
  v36 = v35->static_fields;
  v37 = (System_String_o *)StringLiteral_16049/*"[{0}]"*/;
  _9__6_1 = (System_Func_long__SellServantRequest_UseSvtHash__o *)v36->__9__6_1;
  v39 = (System_String_o *)StringLiteral_712/*","*/;
  v40 = (System_String_o *)StringLiteral_18217/*"defenseUserSvtIds"*/;
  if ( !_9__6_1 )
  {
    if ( (BYTE3(v35->vtable._0_Equals.methodPtr) & 4) != 0 )
    {
      v41 = warBoardData;
      if ( !v35->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v35);
        v36 = WarBoardBattleSetupRequest___c_TypeInfo->static_fields;
      }
    }
    else
    {
      v41 = warBoardData;
    }
    v42 = (Il2CppObject *)v36->__9;
    _9__6_1 = (System_Func_long__SellServantRequest_UseSvtHash__o *)sub_B70764(System_Func_long__string__TypeInfo);
    System_Func_long__SellServantRequest_UseSvtHash____ctor(
      _9__6_1,
      v42,
      Method_WarBoardBattleSetupRequest___c__beginRequest_b__6_1__,
      (const MethodInfo_29AA8E4 *)Method_System_Func_long__string___ctor__);
    v43 = WarBoardBattleSetupRequest___c_TypeInfo->static_fields;
    v43->__9__6_1 = (struct System_Func_long__string__o *)_9__6_1;
    sub_B70630(
      (BattleServantConfConponent_o *)&v43->__9__6_1,
      (System_Int32_array **)_9__6_1,
      v44,
      v45,
      v46,
      v47,
      v48,
      v49);
    warBoardData = v41;
  }
  v50 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__SellServantRequest_UseSvtHash_(
                                                               source,
                                                               (System_Func_TSource__TResult__o *)_9__6_1,
                                                               (const MethodInfo_1CC3454 *)Method_System_Linq_Enumerable_Select_long__string___);
  v51 = (System_String_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                 v50,
                                 (const MethodInfo_1CC8794 *)Method_System_Linq_Enumerable_ToArray_string___);
  v52 = (Il2CppObject *)System_String__Join(v39, v51, 0LL);
  v53 = System_String__Format(v37, v52, 0LL);
  RequestBase__addField_32336576((RequestBase_o *)this, v40, v53, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_16933/*"befSquareIndex"*/, befSquareIndex, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_16528/*"aftSquareIndex"*/, data, 0LL);
  if ( !warBoardData )
LABEL_24:
    sub_B7076C(v33, v34);
  WarBoardData__SetRequest(warBoardData, (RequestBase_o *)this, v54);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall WarBoardBattleSetupRequest__getURL(
        WarBoardBattleSetupRequest_o *this,
        const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_43503A5 & 1) == 0 )
  {
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&StringLiteral_23582/*"warBoard/battleSetup"*/);
    byte_43503A5 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44758168(BaseUrl, (System_String_o *)StringLiteral_23582/*"warBoard/battleSetup"*/, 0LL);
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
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_434F93E & 1) == 0 )
  {
    sub_B70694(&WarBoardBattleSetupRequest___c_TypeInfo);
    byte_434F93E = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(WarBoardBattleSetupRequest___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarBoardBattleSetupRequest___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B70630(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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