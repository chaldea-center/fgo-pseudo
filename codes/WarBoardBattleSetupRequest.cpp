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
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E76D7 & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E76D7 = 1;
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
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  WarBoardBattleSetupRequest___c_c *v54; // x0
  struct WarBoardBattleSetupRequest___c_StaticFields *static_fields; // x8
  System_Func_long__SellServantRequest_UseSvtHash__o *_9__6_0; // x28
  System_String_o *v57; // x27
  System_String_o *v58; // x26
  System_String_o *v59; // x25
  WarBoardData_o *v60; // x22
  Il2CppObject *v61; // x21
  struct WarBoardBattleSetupRequest___c_StaticFields *v62; // x0
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v69; // x0
  System_String_array *v70; // x0
  Il2CppObject *v71; // x0
  System_String_o *v72; // x0
  __int64 v73; // x1
  WarBoardBattleSetupRequest___c_c *v74; // x0
  struct WarBoardBattleSetupRequest___c_StaticFields *v75; // x8
  System_String_o *v76; // x25
  System_Func_long__SellServantRequest_UseSvtHash__o *_9__6_1; // x27
  System_String_o *v78; // x26
  System_String_o *v79; // x24
  WarBoardData_o *v80; // x19
  Il2CppObject *v81; // x21
  struct WarBoardBattleSetupRequest___c_StaticFields *v82; // x0
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v89; // x0
  System_String_array *v90; // x0
  Il2CppObject *v91; // x0
  System_String_o *v92; // x0
  const MethodInfo *v93; // x2
  System_Collections_Generic_IEnumerable_TSource__o *source; // [xsp+0h] [xbp-60h]
  int32_t data; // [xsp+Ch] [xbp-54h]

  if ( (byte_42E76D8 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Linq_Enumerable_Select_long__string___,
      stageId,
      (_DWORD)attackUserSvtIds,
      defenseUserSvtIds);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_string___, v15, v16, v17);
    sub_B5D5C4(&Method_System_Func_long__string___ctor__, v18, v19, v20);
    sub_B5D5C4(&System_Func_long__string__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_WarBoardBattleSetupRequest___c__beginRequest_b__6_0__, v24, v25, v26);
    sub_B5D5C4(&Method_WarBoardBattleSetupRequest___c__beginRequest_b__6_1__, v27, v28, v29);
    sub_B5D5C4(&WarBoardBattleSetupRequest___c_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_22565/*"stageId"*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_18170/*"defenseUserSvtIds"*/, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_16889/*"befSquareIndex"*/, v39, v40, v41);
    sub_B5D5C4(&StringLiteral_16710/*"attackUserSvtIds"*/, v42, v43, v44);
    sub_B5D5C4(&StringLiteral_16484/*"aftSquareIndex"*/, v45, v46, v47);
    sub_B5D5C4(&StringLiteral_707/*","*/, v48, v49, v50);
    sub_B5D5C4(&StringLiteral_16018/*"[{0}]"*/, v51, v52, v53);
    byte_42E76D8 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22565/*"stageId"*/, stageId, 0LL);
  source = (System_Collections_Generic_IEnumerable_TSource__o *)defenseUserSvtIds;
  v54 = WarBoardBattleSetupRequest___c_TypeInfo;
  if ( (BYTE3(WarBoardBattleSetupRequest___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardBattleSetupRequest___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardBattleSetupRequest___c_TypeInfo);
    v54 = WarBoardBattleSetupRequest___c_TypeInfo;
  }
  static_fields = v54->static_fields;
  _9__6_0 = (System_Func_long__SellServantRequest_UseSvtHash__o *)static_fields->__9__6_0;
  v57 = (System_String_o *)StringLiteral_707/*","*/;
  v58 = (System_String_o *)StringLiteral_16018/*"[{0}]"*/;
  data = aftSquareIndex;
  v59 = (System_String_o *)StringLiteral_16710/*"attackUserSvtIds"*/;
  if ( !_9__6_0 )
  {
    if ( (BYTE3(v54->vtable._0_Equals.methodPtr) & 4) != 0 )
    {
      v60 = warBoardData;
      if ( !v54->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v54);
        static_fields = WarBoardBattleSetupRequest___c_TypeInfo->static_fields;
      }
    }
    else
    {
      v60 = warBoardData;
    }
    v61 = (Il2CppObject *)static_fields->__9;
    _9__6_0 = (System_Func_long__SellServantRequest_UseSvtHash__o *)sub_B5D694(System_Func_long__string__TypeInfo);
    System_Func_long__SellServantRequest_UseSvtHash____ctor(
      _9__6_0,
      v61,
      Method_WarBoardBattleSetupRequest___c__beginRequest_b__6_0__,
      (const MethodInfo_2C2D03C *)Method_System_Func_long__string___ctor__);
    v62 = WarBoardBattleSetupRequest___c_TypeInfo->static_fields;
    v62->__9__6_0 = (struct System_Func_long__string__o *)_9__6_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v62->__9__6_0,
      (System_Int32_array **)_9__6_0,
      v63,
      v64,
      v65,
      v66,
      v67,
      v68);
    warBoardData = v60;
  }
  v69 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__SellServantRequest_UseSvtHash_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)attackUserSvtIds,
                                                               (System_Func_TSource__TResult__o *)_9__6_0,
                                                               (const MethodInfo_1CB27F0 *)Method_System_Linq_Enumerable_Select_long__string___);
  v70 = (System_String_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                 v69,
                                 (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_string___);
  v71 = (Il2CppObject *)System_String__Join(v57, v70, 0LL);
  v72 = System_String__Format(v58, v71, 0LL);
  if ( !this )
    goto LABEL_24;
  RequestBase__addField_32362260((RequestBase_o *)this, v59, v72, 0LL);
  v74 = WarBoardBattleSetupRequest___c_TypeInfo;
  if ( (BYTE3(WarBoardBattleSetupRequest___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardBattleSetupRequest___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardBattleSetupRequest___c_TypeInfo);
    v74 = WarBoardBattleSetupRequest___c_TypeInfo;
  }
  v75 = v74->static_fields;
  v76 = (System_String_o *)StringLiteral_16018/*"[{0}]"*/;
  _9__6_1 = (System_Func_long__SellServantRequest_UseSvtHash__o *)v75->__9__6_1;
  v78 = (System_String_o *)StringLiteral_707/*","*/;
  v79 = (System_String_o *)StringLiteral_18170/*"defenseUserSvtIds"*/;
  if ( !_9__6_1 )
  {
    if ( (BYTE3(v74->vtable._0_Equals.methodPtr) & 4) != 0 )
    {
      v80 = warBoardData;
      if ( !v74->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v74);
        v75 = WarBoardBattleSetupRequest___c_TypeInfo->static_fields;
      }
    }
    else
    {
      v80 = warBoardData;
    }
    v81 = (Il2CppObject *)v75->__9;
    _9__6_1 = (System_Func_long__SellServantRequest_UseSvtHash__o *)sub_B5D694(System_Func_long__string__TypeInfo);
    System_Func_long__SellServantRequest_UseSvtHash____ctor(
      _9__6_1,
      v81,
      Method_WarBoardBattleSetupRequest___c__beginRequest_b__6_1__,
      (const MethodInfo_2C2D03C *)Method_System_Func_long__string___ctor__);
    v82 = WarBoardBattleSetupRequest___c_TypeInfo->static_fields;
    v82->__9__6_1 = (struct System_Func_long__string__o *)_9__6_1;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v82->__9__6_1,
      (System_Int32_array **)_9__6_1,
      v83,
      v84,
      v85,
      v86,
      v87,
      v88);
    warBoardData = v80;
  }
  v89 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__SellServantRequest_UseSvtHash_(
                                                               source,
                                                               (System_Func_TSource__TResult__o *)_9__6_1,
                                                               (const MethodInfo_1CB27F0 *)Method_System_Linq_Enumerable_Select_long__string___);
  v90 = (System_String_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                 v89,
                                 (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_string___);
  v91 = (Il2CppObject *)System_String__Join(v78, v90, 0LL);
  v92 = System_String__Format(v76, v91, 0LL);
  RequestBase__addField_32362260((RequestBase_o *)this, v79, v92, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_16889/*"befSquareIndex"*/, befSquareIndex, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_16484/*"aftSquareIndex"*/, data, 0LL);
  if ( !warBoardData )
LABEL_24:
    sub_B5D69C(v72, v73);
  WarBoardData__SetRequest(warBoardData, (RequestBase_o *)this, v93);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall WarBoardBattleSetupRequest__getURL(
        WarBoardBattleSetupRequest_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  System_String_o *BaseUrl; // x0

  if ( (byte_42E76D6 & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_23510/*"warBoard/battleSetup"*/, v4, v5, v6);
    byte_42E76D6 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44577788(BaseUrl, (System_String_o *)StringLiteral_23510/*"warBoard/battleSetup"*/, 0LL);
}


bool __fastcall WarBoardBattleSetupRequest__isBackgroundRequest(
        WarBoardBattleSetupRequest_o *this,
        const MethodInfo *method)
{
  return 1;
}


void __fastcall WarBoardBattleSetupRequest___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E7076 & 1) == 0 )
  {
    sub_B5D5C4(&WarBoardBattleSetupRequest___c_TypeInfo, v1, v2, v3);
    byte_42E7076 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(WarBoardBattleSetupRequest___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarBoardBattleSetupRequest___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
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