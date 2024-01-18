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
  if ( (byte_41865D5 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    byte_41865D5 = 1;
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
  WarBoardBattleSetupRequest___c_c *v28; // x0
  struct WarBoardBattleSetupRequest___c_StaticFields *static_fields; // x8
  System_Func_long__SellServantRequest_UseSvtHash__o *_9__6_0; // x28
  System_String_o *v31; // x27
  System_String_o *v32; // x26
  System_String_o *v33; // x25
  WarBoardData_o *v34; // x22
  Il2CppObject *v35; // x21
  struct WarBoardBattleSetupRequest___c_StaticFields *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x0
  System_String_array *v44; // x0
  Il2CppObject *v45; // x0
  System_String_o *v46; // x0
  __int64 v47; // x1
  WarBoardBattleSetupRequest___c_c *v48; // x0
  struct WarBoardBattleSetupRequest___c_StaticFields *v49; // x8
  System_String_o *v50; // x25
  System_Func_long__SellServantRequest_UseSvtHash__o *_9__6_1; // x27
  System_String_o *v52; // x26
  System_String_o *v53; // x24
  WarBoardData_o *v54; // x19
  Il2CppObject *v55; // x21
  struct WarBoardBattleSetupRequest___c_StaticFields *v56; // x0
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v63; // x0
  System_String_array *v64; // x0
  Il2CppObject *v65; // x0
  System_String_o *v66; // x0
  const MethodInfo *v67; // x2
  System_Collections_Generic_IEnumerable_TSource__o *source; // [xsp+0h] [xbp-60h]
  int32_t data; // [xsp+Ch] [xbp-54h]

  if ( (byte_41865D6 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Select_long__string___, *(_QWORD *)&stageId);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_string___, v15);
    sub_B2C35C(&Method_System_Func_long__string___ctor__, v16);
    sub_B2C35C(&System_Func_long__string__TypeInfo, v17);
    sub_B2C35C(&Method_WarBoardBattleSetupRequest___c__beginRequest_b__6_0__, v18);
    sub_B2C35C(&Method_WarBoardBattleSetupRequest___c__beginRequest_b__6_1__, v19);
    sub_B2C35C(&WarBoardBattleSetupRequest___c_TypeInfo, v20);
    sub_B2C35C(&StringLiteral_22263/*"stageId"*/, v21);
    sub_B2C35C(&StringLiteral_17946/*"defenseUserSvtIds"*/, v22);
    sub_B2C35C(&StringLiteral_16683/*"befSquareIndex"*/, v23);
    sub_B2C35C(&StringLiteral_16511/*"attackUserSvtIds"*/, v24);
    sub_B2C35C(&StringLiteral_16286/*"aftSquareIndex"*/, v25);
    sub_B2C35C(&StringLiteral_699/*","*/, v26);
    sub_B2C35C(&StringLiteral_15827/*"[{0}]"*/, v27);
    byte_41865D6 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22263/*"stageId"*/, stageId, 0LL);
  source = (System_Collections_Generic_IEnumerable_TSource__o *)defenseUserSvtIds;
  v28 = WarBoardBattleSetupRequest___c_TypeInfo;
  if ( (BYTE3(WarBoardBattleSetupRequest___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardBattleSetupRequest___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardBattleSetupRequest___c_TypeInfo);
    v28 = WarBoardBattleSetupRequest___c_TypeInfo;
  }
  static_fields = v28->static_fields;
  _9__6_0 = (System_Func_long__SellServantRequest_UseSvtHash__o *)static_fields->__9__6_0;
  v31 = (System_String_o *)StringLiteral_699/*","*/;
  v32 = (System_String_o *)StringLiteral_15827/*"[{0}]"*/;
  data = aftSquareIndex;
  v33 = (System_String_o *)StringLiteral_16511/*"attackUserSvtIds"*/;
  if ( !_9__6_0 )
  {
    if ( (BYTE3(v28->vtable._0_Equals.methodPtr) & 4) != 0 )
    {
      v34 = warBoardData;
      if ( !v28->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v28);
        static_fields = WarBoardBattleSetupRequest___c_TypeInfo->static_fields;
      }
    }
    else
    {
      v34 = warBoardData;
    }
    v35 = (Il2CppObject *)static_fields->__9;
    _9__6_0 = (System_Func_long__SellServantRequest_UseSvtHash__o *)sub_B2C42C(System_Func_long__string__TypeInfo);
    System_Func_long__SellServantRequest_UseSvtHash____ctor(
      _9__6_0,
      v35,
      Method_WarBoardBattleSetupRequest___c__beginRequest_b__6_0__,
      (const MethodInfo_270FF70 *)Method_System_Func_long__string___ctor__);
    v36 = WarBoardBattleSetupRequest___c_TypeInfo->static_fields;
    v36->__9__6_0 = (struct System_Func_long__string__o *)_9__6_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v36->__9__6_0,
      (System_Int32_array **)_9__6_0,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42);
    warBoardData = v34;
  }
  v43 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__SellServantRequest_UseSvtHash_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)attackUserSvtIds,
                                                               (System_Func_TSource__TResult__o *)_9__6_0,
                                                               (const MethodInfo_1A95FE4 *)Method_System_Linq_Enumerable_Select_long__string___);
  v44 = (System_String_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                 v43,
                                 (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_string___);
  v45 = (Il2CppObject *)System_String__Join(v31, v44, 0LL);
  v46 = System_String__Format(v32, v45, 0LL);
  if ( !this )
    goto LABEL_24;
  RequestBase__addField_31051928((RequestBase_o *)this, v33, v46, 0LL);
  v48 = WarBoardBattleSetupRequest___c_TypeInfo;
  if ( (BYTE3(WarBoardBattleSetupRequest___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardBattleSetupRequest___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardBattleSetupRequest___c_TypeInfo);
    v48 = WarBoardBattleSetupRequest___c_TypeInfo;
  }
  v49 = v48->static_fields;
  v50 = (System_String_o *)StringLiteral_15827/*"[{0}]"*/;
  _9__6_1 = (System_Func_long__SellServantRequest_UseSvtHash__o *)v49->__9__6_1;
  v52 = (System_String_o *)StringLiteral_699/*","*/;
  v53 = (System_String_o *)StringLiteral_17946/*"defenseUserSvtIds"*/;
  if ( !_9__6_1 )
  {
    if ( (BYTE3(v48->vtable._0_Equals.methodPtr) & 4) != 0 )
    {
      v54 = warBoardData;
      if ( !v48->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v48);
        v49 = WarBoardBattleSetupRequest___c_TypeInfo->static_fields;
      }
    }
    else
    {
      v54 = warBoardData;
    }
    v55 = (Il2CppObject *)v49->__9;
    _9__6_1 = (System_Func_long__SellServantRequest_UseSvtHash__o *)sub_B2C42C(System_Func_long__string__TypeInfo);
    System_Func_long__SellServantRequest_UseSvtHash____ctor(
      _9__6_1,
      v55,
      Method_WarBoardBattleSetupRequest___c__beginRequest_b__6_1__,
      (const MethodInfo_270FF70 *)Method_System_Func_long__string___ctor__);
    v56 = WarBoardBattleSetupRequest___c_TypeInfo->static_fields;
    v56->__9__6_1 = (struct System_Func_long__string__o *)_9__6_1;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v56->__9__6_1,
      (System_Int32_array **)_9__6_1,
      v57,
      v58,
      v59,
      v60,
      v61,
      v62);
    warBoardData = v54;
  }
  v63 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__SellServantRequest_UseSvtHash_(
                                                               source,
                                                               (System_Func_TSource__TResult__o *)_9__6_1,
                                                               (const MethodInfo_1A95FE4 *)Method_System_Linq_Enumerable_Select_long__string___);
  v64 = (System_String_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                 v63,
                                 (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_string___);
  v65 = (Il2CppObject *)System_String__Join(v52, v64, 0LL);
  v66 = System_String__Format(v50, v65, 0LL);
  RequestBase__addField_31051928((RequestBase_o *)this, v53, v66, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_16683/*"befSquareIndex"*/, befSquareIndex, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_16286/*"aftSquareIndex"*/, data, 0LL);
  if ( !warBoardData )
LABEL_24:
    sub_B2C434(v46, v47);
  WarBoardData__SetRequest(warBoardData, (RequestBase_o *)this, v67);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall WarBoardBattleSetupRequest__getURL(
        WarBoardBattleSetupRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_41865D4 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_23201/*"warBoard/battleSetup"*/, v2);
    byte_41865D4 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44305532(BaseUrl, (System_String_o *)StringLiteral_23201/*"warBoard/battleSetup"*/, 0LL);
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
  struct WarBoardBattleSetupRequest___c_StaticFields *static_fields; // x0

  if ( (byte_4185723 & 1) == 0 )
  {
    sub_B2C35C(&WarBoardBattleSetupRequest___c_TypeInfo, v1);
    byte_4185723 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(WarBoardBattleSetupRequest___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = WarBoardBattleSetupRequest___c_TypeInfo->static_fields;
  static_fields->__9 = (struct WarBoardBattleSetupRequest___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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