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
  if ( (byte_4213387 & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, method);
    byte_4213387 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
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
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x2
  WarBoardBattleSetupRequest___c_c *v30; // x0
  struct WarBoardBattleSetupRequest___c_StaticFields *static_fields; // x8
  System_Func_long__SellServantRequest_UseSvtHash__o *_9__6_0; // x28
  System_String_o *v33; // x27
  System_String_o *v34; // x26
  System_String_o *v35; // x25
  WarBoardData_o *v36; // x22
  Il2CppObject *v37; // x21
  struct WarBoardBattleSetupRequest___c_StaticFields *v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x0
  System_String_array *v46; // x0
  Il2CppObject *v47; // x0
  System_String_o *v48; // x0
  __int64 v49; // x1
  __int64 v50; // x2
  WarBoardBattleSetupRequest___c_c *v51; // x0
  struct WarBoardBattleSetupRequest___c_StaticFields *v52; // x8
  System_String_o *v53; // x25
  System_Func_long__SellServantRequest_UseSvtHash__o *_9__6_1; // x27
  System_String_o *v55; // x26
  System_String_o *v56; // x24
  WarBoardData_o *v57; // x19
  Il2CppObject *v58; // x21
  struct WarBoardBattleSetupRequest___c_StaticFields *v59; // x0
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v66; // x0
  System_String_array *v67; // x0
  Il2CppObject *v68; // x0
  System_String_o *v69; // x0
  const MethodInfo *v70; // x2
  System_Collections_Generic_IEnumerable_TSource__o *source; // [xsp+0h] [xbp-60h]
  int32_t data; // [xsp+Ch] [xbp-54h]

  if ( (byte_4213388 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_long__string___, *(_QWORD *)&stageId);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_string___, v15);
    sub_B0D8A4(&Method_System_Func_long__string___ctor__, v16);
    sub_B0D8A4(&System_Func_long__string__TypeInfo, v17);
    sub_B0D8A4(&Method_WarBoardBattleSetupRequest___c__beginRequest_b__6_0__, v18);
    sub_B0D8A4(&Method_WarBoardBattleSetupRequest___c__beginRequest_b__6_1__, v19);
    sub_B0D8A4(&WarBoardBattleSetupRequest___c_TypeInfo, v20);
    sub_B0D8A4(&StringLiteral_22338/*"stageId"*/, v21);
    sub_B0D8A4(&StringLiteral_18002/*"defenseUserSvtIds"*/, v22);
    sub_B0D8A4(&StringLiteral_16732/*"befSquareIndex"*/, v23);
    sub_B0D8A4(&StringLiteral_16560/*"attackUserSvtIds"*/, v24);
    sub_B0D8A4(&StringLiteral_16335/*"aftSquareIndex"*/, v25);
    sub_B0D8A4(&StringLiteral_705/*","*/, v26);
    sub_B0D8A4(&StringLiteral_15874/*"[{0}]"*/, v27);
    byte_4213388 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22338/*"stageId"*/, stageId, 0LL);
  source = (System_Collections_Generic_IEnumerable_TSource__o *)defenseUserSvtIds;
  v30 = WarBoardBattleSetupRequest___c_TypeInfo;
  if ( (BYTE3(WarBoardBattleSetupRequest___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardBattleSetupRequest___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardBattleSetupRequest___c_TypeInfo);
    v30 = WarBoardBattleSetupRequest___c_TypeInfo;
  }
  static_fields = v30->static_fields;
  _9__6_0 = (System_Func_long__SellServantRequest_UseSvtHash__o *)static_fields->__9__6_0;
  v33 = (System_String_o *)StringLiteral_705/*","*/;
  v34 = (System_String_o *)StringLiteral_15874/*"[{0}]"*/;
  data = aftSquareIndex;
  v35 = (System_String_o *)StringLiteral_16560/*"attackUserSvtIds"*/;
  if ( !_9__6_0 )
  {
    if ( (BYTE3(v30->vtable._0_Equals.methodPtr) & 4) != 0 )
    {
      v36 = warBoardData;
      if ( !v30->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v30);
        static_fields = WarBoardBattleSetupRequest___c_TypeInfo->static_fields;
      }
    }
    else
    {
      v36 = warBoardData;
    }
    v37 = (Il2CppObject *)static_fields->__9;
    _9__6_0 = (System_Func_long__SellServantRequest_UseSvtHash__o *)sub_B0D974(
                                                                      System_Func_long__string__TypeInfo,
                                                                      v28,
                                                                      v29);
    System_Func_long__SellServantRequest_UseSvtHash____ctor(
      _9__6_0,
      v37,
      Method_WarBoardBattleSetupRequest___c__beginRequest_b__6_0__,
      (const MethodInfo_2616D24 *)Method_System_Func_long__string___ctor__);
    v38 = WarBoardBattleSetupRequest___c_TypeInfo->static_fields;
    v38->__9__6_0 = (struct System_Func_long__string__o *)_9__6_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v38->__9__6_0,
      (System_Int32_array **)_9__6_0,
      v39,
      v40,
      v41,
      v42,
      v43,
      v44);
    warBoardData = v36;
  }
  v45 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__SellServantRequest_UseSvtHash_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)attackUserSvtIds,
                                                               (System_Func_TSource__TResult__o *)_9__6_0,
                                                               (const MethodInfo_1B512B0 *)Method_System_Linq_Enumerable_Select_long__string___);
  v46 = (System_String_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                 v45,
                                 (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_string___);
  v47 = (Il2CppObject *)System_String__Join(v33, v46, 0LL);
  v48 = System_String__Format(v34, v47, 0LL);
  if ( !this )
    goto LABEL_24;
  RequestBase__addField_30435648((RequestBase_o *)this, v35, v48, 0LL);
  v51 = WarBoardBattleSetupRequest___c_TypeInfo;
  if ( (BYTE3(WarBoardBattleSetupRequest___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardBattleSetupRequest___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardBattleSetupRequest___c_TypeInfo);
    v51 = WarBoardBattleSetupRequest___c_TypeInfo;
  }
  v52 = v51->static_fields;
  v53 = (System_String_o *)StringLiteral_15874/*"[{0}]"*/;
  _9__6_1 = (System_Func_long__SellServantRequest_UseSvtHash__o *)v52->__9__6_1;
  v55 = (System_String_o *)StringLiteral_705/*","*/;
  v56 = (System_String_o *)StringLiteral_18002/*"defenseUserSvtIds"*/;
  if ( !_9__6_1 )
  {
    if ( (BYTE3(v51->vtable._0_Equals.methodPtr) & 4) != 0 )
    {
      v57 = warBoardData;
      if ( !v51->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v51);
        v52 = WarBoardBattleSetupRequest___c_TypeInfo->static_fields;
      }
    }
    else
    {
      v57 = warBoardData;
    }
    v58 = (Il2CppObject *)v52->__9;
    _9__6_1 = (System_Func_long__SellServantRequest_UseSvtHash__o *)sub_B0D974(
                                                                      System_Func_long__string__TypeInfo,
                                                                      v49,
                                                                      v50);
    System_Func_long__SellServantRequest_UseSvtHash____ctor(
      _9__6_1,
      v58,
      Method_WarBoardBattleSetupRequest___c__beginRequest_b__6_1__,
      (const MethodInfo_2616D24 *)Method_System_Func_long__string___ctor__);
    v59 = WarBoardBattleSetupRequest___c_TypeInfo->static_fields;
    v59->__9__6_1 = (struct System_Func_long__string__o *)_9__6_1;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v59->__9__6_1,
      (System_Int32_array **)_9__6_1,
      v60,
      v61,
      v62,
      v63,
      v64,
      v65);
    warBoardData = v57;
  }
  v66 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__SellServantRequest_UseSvtHash_(
                                                               source,
                                                               (System_Func_TSource__TResult__o *)_9__6_1,
                                                               (const MethodInfo_1B512B0 *)Method_System_Linq_Enumerable_Select_long__string___);
  v67 = (System_String_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                 v66,
                                 (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_string___);
  v68 = (Il2CppObject *)System_String__Join(v55, v67, 0LL);
  v69 = System_String__Format(v53, v68, 0LL);
  RequestBase__addField_30435648((RequestBase_o *)this, v56, v69, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_16732/*"befSquareIndex"*/, befSquareIndex, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_16335/*"aftSquareIndex"*/, data, 0LL);
  if ( !warBoardData )
LABEL_24:
    sub_B0D97C(v48);
  WarBoardData__SetRequest(warBoardData, (RequestBase_o *)this, v70);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall WarBoardBattleSetupRequest__getURL(
        WarBoardBattleSetupRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4213386 & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_23279/*"warBoard/battleSetup"*/, v2);
    byte_4213386 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_43849904(BaseUrl, (System_String_o *)StringLiteral_23279/*"warBoard/battleSetup"*/, 0LL);
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
  struct WarBoardBattleSetupRequest___c_StaticFields *static_fields; // x0

  if ( (byte_421269A & 1) == 0 )
  {
    sub_B0D8A4(&WarBoardBattleSetupRequest___c_TypeInfo, v1);
    byte_421269A = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(WarBoardBattleSetupRequest___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = WarBoardBattleSetupRequest___c_TypeInfo->static_fields;
  static_fields->__9 = (struct WarBoardBattleSetupRequest___c_o *)v3;
  sub_B0D840(static_fields, v3);
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