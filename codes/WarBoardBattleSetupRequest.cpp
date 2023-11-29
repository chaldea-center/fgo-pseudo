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
  if ( (byte_40F8924 & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, method);
    byte_40F8924 = 1;
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
  __int64 v30; // x3
  __int64 v31; // x4
  WarBoardBattleSetupRequest___c_c *v32; // x0
  struct WarBoardBattleSetupRequest___c_StaticFields *static_fields; // x8
  System_Func_long__SellServantRequest_UseSvtHash__o *_9__6_0; // x28
  System_String_o *v35; // x27
  System_String_o *v36; // x26
  System_String_o *v37; // x25
  WarBoardData_o *v38; // x22
  Il2CppObject *v39; // x21
  struct WarBoardBattleSetupRequest___c_StaticFields *v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v47; // x0
  System_String_array *v48; // x0
  Il2CppObject *v49; // x0
  System_String_o *v50; // x0
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x3
  __int64 v54; // x4
  WarBoardBattleSetupRequest___c_c *v55; // x0
  struct WarBoardBattleSetupRequest___c_StaticFields *v56; // x8
  System_String_o *v57; // x25
  System_Func_long__SellServantRequest_UseSvtHash__o *_9__6_1; // x27
  System_String_o *v59; // x26
  System_String_o *v60; // x24
  WarBoardData_o *v61; // x19
  Il2CppObject *v62; // x21
  struct WarBoardBattleSetupRequest___c_StaticFields *v63; // x0
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v70; // x0
  System_String_array *v71; // x0
  Il2CppObject *v72; // x0
  System_String_o *v73; // x0
  const MethodInfo *v74; // x2
  System_Collections_Generic_IEnumerable_TSource__o *source; // [xsp+0h] [xbp-60h]
  int32_t data; // [xsp+Ch] [xbp-54h]

  if ( (byte_40F8925 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_long__string___, *(_QWORD *)&stageId);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_string___, v15);
    sub_B16FFC(&Method_System_Func_long__string___ctor__, v16);
    sub_B16FFC(&System_Func_long__string__TypeInfo, v17);
    sub_B16FFC(&Method_WarBoardBattleSetupRequest___c__beginRequest_b__6_0__, v18);
    sub_B16FFC(&Method_WarBoardBattleSetupRequest___c__beginRequest_b__6_1__, v19);
    sub_B16FFC(&WarBoardBattleSetupRequest___c_TypeInfo, v20);
    sub_B16FFC(&StringLiteral_22171, v21);
    sub_B16FFC(&StringLiteral_17878, v22);
    sub_B16FFC(&StringLiteral_16619, v23);
    sub_B16FFC(&StringLiteral_16447, v24);
    sub_B16FFC(&StringLiteral_16221, v25);
    sub_B16FFC(&StringLiteral_698, v26);
    sub_B16FFC(&StringLiteral_15764, v27);
    byte_40F8925 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22171, stageId, 0LL);
  source = (System_Collections_Generic_IEnumerable_TSource__o *)defenseUserSvtIds;
  v32 = WarBoardBattleSetupRequest___c_TypeInfo;
  if ( (BYTE3(WarBoardBattleSetupRequest___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardBattleSetupRequest___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardBattleSetupRequest___c_TypeInfo);
    v32 = WarBoardBattleSetupRequest___c_TypeInfo;
  }
  static_fields = v32->static_fields;
  _9__6_0 = (System_Func_long__SellServantRequest_UseSvtHash__o *)static_fields->__9__6_0;
  v35 = (System_String_o *)StringLiteral_698;
  v36 = (System_String_o *)StringLiteral_15764;
  data = aftSquareIndex;
  v37 = (System_String_o *)StringLiteral_16447;
  if ( !_9__6_0 )
  {
    if ( (BYTE3(v32->vtable._0_Equals.methodPtr) & 4) != 0 )
    {
      v38 = warBoardData;
      if ( !v32->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v32);
        static_fields = WarBoardBattleSetupRequest___c_TypeInfo->static_fields;
      }
    }
    else
    {
      v38 = warBoardData;
    }
    v39 = (Il2CppObject *)static_fields->__9;
    _9__6_0 = (System_Func_long__SellServantRequest_UseSvtHash__o *)sub_B170CC(
                                                                      System_Func_long__string__TypeInfo,
                                                                      v28,
                                                                      v29,
                                                                      v30,
                                                                      v31);
    System_Func_long__SellServantRequest_UseSvtHash____ctor(
      _9__6_0,
      v39,
      Method_WarBoardBattleSetupRequest___c__beginRequest_b__6_0__,
      (const MethodInfo_2B68EAC *)Method_System_Func_long__string___ctor__);
    v40 = WarBoardBattleSetupRequest___c_TypeInfo->static_fields;
    v40->__9__6_0 = (struct System_Func_long__string__o *)_9__6_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v40->__9__6_0,
      (System_Int32_array **)_9__6_0,
      v41,
      v42,
      v43,
      v44,
      v45,
      v46);
    warBoardData = v38;
  }
  v47 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__SellServantRequest_UseSvtHash_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)attackUserSvtIds,
                                                               (System_Func_TSource__TResult__o *)_9__6_0,
                                                               (const MethodInfo_19BFDC0 *)Method_System_Linq_Enumerable_Select_long__string___);
  v48 = (System_String_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                 v47,
                                 (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_string___);
  v49 = (Il2CppObject *)System_String__Join(v35, v48, 0LL);
  v50 = System_String__Format(v36, v49, 0LL);
  if ( !this )
    goto LABEL_24;
  RequestBase__addField_30957164((RequestBase_o *)this, v37, v50, 0LL);
  v55 = WarBoardBattleSetupRequest___c_TypeInfo;
  if ( (BYTE3(WarBoardBattleSetupRequest___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardBattleSetupRequest___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardBattleSetupRequest___c_TypeInfo);
    v55 = WarBoardBattleSetupRequest___c_TypeInfo;
  }
  v56 = v55->static_fields;
  v57 = (System_String_o *)StringLiteral_15764;
  _9__6_1 = (System_Func_long__SellServantRequest_UseSvtHash__o *)v56->__9__6_1;
  v59 = (System_String_o *)StringLiteral_698;
  v60 = (System_String_o *)StringLiteral_17878;
  if ( !_9__6_1 )
  {
    if ( (BYTE3(v55->vtable._0_Equals.methodPtr) & 4) != 0 )
    {
      v61 = warBoardData;
      if ( !v55->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v55);
        v56 = WarBoardBattleSetupRequest___c_TypeInfo->static_fields;
      }
    }
    else
    {
      v61 = warBoardData;
    }
    v62 = (Il2CppObject *)v56->__9;
    _9__6_1 = (System_Func_long__SellServantRequest_UseSvtHash__o *)sub_B170CC(
                                                                      System_Func_long__string__TypeInfo,
                                                                      v51,
                                                                      v52,
                                                                      v53,
                                                                      v54);
    System_Func_long__SellServantRequest_UseSvtHash____ctor(
      _9__6_1,
      v62,
      Method_WarBoardBattleSetupRequest___c__beginRequest_b__6_1__,
      (const MethodInfo_2B68EAC *)Method_System_Func_long__string___ctor__);
    v63 = WarBoardBattleSetupRequest___c_TypeInfo->static_fields;
    v63->__9__6_1 = (struct System_Func_long__string__o *)_9__6_1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v63->__9__6_1,
      (System_Int32_array **)_9__6_1,
      v64,
      v65,
      v66,
      v67,
      v68,
      v69);
    warBoardData = v61;
  }
  v70 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__SellServantRequest_UseSvtHash_(
                                                               source,
                                                               (System_Func_TSource__TResult__o *)_9__6_1,
                                                               (const MethodInfo_19BFDC0 *)Method_System_Linq_Enumerable_Select_long__string___);
  v71 = (System_String_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                 v70,
                                 (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_string___);
  v72 = (Il2CppObject *)System_String__Join(v59, v71, 0LL);
  v73 = System_String__Format(v57, v72, 0LL);
  RequestBase__addField_30957164((RequestBase_o *)this, v60, v73, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_16619, befSquareIndex, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_16221, data, 0LL);
  if ( !warBoardData )
LABEL_24:
    sub_B170D4();
  WarBoardData__SetRequest(warBoardData, (RequestBase_o *)this, v74);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall WarBoardBattleSetupRequest__getURL(
        WarBoardBattleSetupRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_40F8923 & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_23107, v2);
    byte_40F8923 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_43743732(BaseUrl, (System_String_o *)StringLiteral_23107, 0LL);
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
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F7AC5 & 1) == 0 )
  {
    sub_B16FFC(&WarBoardBattleSetupRequest___c_TypeInfo, v1);
    byte_40F7AC5 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(WarBoardBattleSetupRequest___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarBoardBattleSetupRequest___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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