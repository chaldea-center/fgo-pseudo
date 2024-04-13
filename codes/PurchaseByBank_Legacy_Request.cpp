void __fastcall PurchaseByBank_Legacy_Request___cctor(const MethodInfo *method)
{
  ;
}


void __fastcall PurchaseByBank_Legacy_Request___ctor(PurchaseByBank_Legacy_Request_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


System_Collections_Generic_List_PurchaseByBank_Legacy_Request_PurchaseResult__o *__fastcall PurchaseByBank_Legacy_Request__CopyPurchaseResults(
        const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  PurchaseByBank_Legacy_Request_c *v19; // x0
  System_Collections_Generic_IEnumerable_TSource__o *purchaseResultArray; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x19

  if ( (byte_42E881B & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Debug_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToList_PurchaseByBank_Legacy_Request_PurchaseResult___, v4, v5, v6);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_PurchaseByBank_Legacy_Request_PurchaseResult___ctor__,
      v7,
      v8,
      v9);
    sub_B5D5C4(&System_Collections_Generic_List_PurchaseByBank_Legacy_Request_PurchaseResult__TypeInfo, v10, v11, v12);
    sub_B5D5C4(&PurchaseByBank_Legacy_Request_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_21873/*"purchaseResultArray is null."*/, v16, v17, v18);
    byte_42E881B = 1;
  }
  v19 = PurchaseByBank_Legacy_Request_TypeInfo;
  if ( (BYTE3(PurchaseByBank_Legacy_Request_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PurchaseByBank_Legacy_Request_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseByBank_Legacy_Request_TypeInfo);
    v19 = PurchaseByBank_Legacy_Request_TypeInfo;
  }
  purchaseResultArray = (System_Collections_Generic_IEnumerable_TSource__o *)v19->static_fields->purchaseResultArray;
  if ( purchaseResultArray )
  {
    if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      purchaseResultArray = (System_Collections_Generic_IEnumerable_TSource__o *)PurchaseByBank_Legacy_Request_TypeInfo->static_fields->purchaseResultArray;
    }
    return (System_Collections_Generic_List_PurchaseByBank_Legacy_Request_PurchaseResult__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                                                purchaseResultArray,
                                                                                                (const MethodInfo_1CBA734 *)Method_System_Linq_Enumerable_ToList_PurchaseByBank_Legacy_Request_PurchaseResult___);
  }
  else
  {
    if ( (BYTE3(UnityEngine_Debug_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    }
    UnityEngine_Debug__LogError((Il2CppObject *)StringLiteral_21873/*"purchaseResultArray is null."*/, 0LL);
    v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_PurchaseByBank_Legacy_Request_PurchaseResult__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v21,
      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_PurchaseByBank_Legacy_Request_PurchaseResult___ctor__);
  }
  return (System_Collections_Generic_List_PurchaseByBank_Legacy_Request_PurchaseResult__o *)v21;
}


int32_t __fastcall PurchaseByBank_Legacy_Request__GetTotalAddedChargeStoneNum(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  PurchaseByBank_Legacy_Request_c *v19; // x0
  System_Collections_Generic_IEnumerable_TSource__o *purchaseResultArray; // x19
  PurchaseByBank_Legacy_Request___c_c *v21; // x0
  struct PurchaseByBank_Legacy_Request___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__7_0; // x20
  Il2CppObject *v24; // x21
  struct PurchaseByBank_Legacy_Request___c_StaticFields *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v32; // x0

  if ( (byte_42E881A & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_PurchaseByBank_Legacy_Request_PurchaseResult__int___, v1, v2, v3);
    sub_B5D5C4(&Method_System_Func_PurchaseByBank_Legacy_Request_PurchaseResult__int___ctor__, v4, v5, v6);
    sub_B5D5C4(&System_Func_PurchaseByBank_Legacy_Request_PurchaseResult__int__TypeInfo, v7, v8, v9);
    sub_B5D5C4(&PurchaseByBank_Legacy_Request_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_PurchaseByBank_Legacy_Request___c__GetTotalAddedChargeStoneNum_b__7_0__, v13, v14, v15);
    sub_B5D5C4(&PurchaseByBank_Legacy_Request___c_TypeInfo, v16, v17, v18);
    byte_42E881A = 1;
  }
  v19 = PurchaseByBank_Legacy_Request_TypeInfo;
  if ( (BYTE3(PurchaseByBank_Legacy_Request_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PurchaseByBank_Legacy_Request_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseByBank_Legacy_Request_TypeInfo);
    v19 = PurchaseByBank_Legacy_Request_TypeInfo;
  }
  purchaseResultArray = (System_Collections_Generic_IEnumerable_TSource__o *)v19->static_fields->purchaseResultArray;
  if ( !purchaseResultArray )
    return 0;
  if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v19);
    purchaseResultArray = (System_Collections_Generic_IEnumerable_TSource__o *)PurchaseByBank_Legacy_Request_TypeInfo->static_fields->purchaseResultArray;
  }
  v21 = PurchaseByBank_Legacy_Request___c_TypeInfo;
  if ( (BYTE3(PurchaseByBank_Legacy_Request___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PurchaseByBank_Legacy_Request___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseByBank_Legacy_Request___c_TypeInfo);
    v21 = PurchaseByBank_Legacy_Request___c_TypeInfo;
  }
  static_fields = v21->static_fields;
  _9__7_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      static_fields = PurchaseByBank_Legacy_Request___c_TypeInfo->static_fields;
    }
    v24 = (Il2CppObject *)static_fields->__9;
    _9__7_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_PurchaseByBank_Legacy_Request_PurchaseResult__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__7_0,
      v24,
      Method_PurchaseByBank_Legacy_Request___c__GetTotalAddedChargeStoneNum_b__7_0__,
      (const MethodInfo_2C2F87C *)Method_System_Func_PurchaseByBank_Legacy_Request_PurchaseResult__int___ctor__);
    v25 = PurchaseByBank_Legacy_Request___c_TypeInfo->static_fields;
    v25->__9__7_0 = (struct System_Func_PurchaseByBank_Legacy_Request_PurchaseResult__int__o *)_9__7_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v25->__9__7_0,
      (System_Int32_array **)_9__7_0,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
  }
  v32 = System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
          purchaseResultArray,
          (System_Func_TSource__TResult__o *)_9__7_0,
          (const MethodInfo_1CB2FF4 *)Method_System_Linq_Enumerable_Select_PurchaseByBank_Legacy_Request_PurchaseResult__int___);
  return System_Linq_Enumerable__Sum((System_Collections_Generic_IEnumerable_int__o *)v32, 0LL);
}


int32_t __fastcall PurchaseByBank_Legacy_Request__GetTotalAddedFreeStoneNum(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  PurchaseByBank_Legacy_Request_c *v19; // x0
  System_Collections_Generic_IEnumerable_TSource__o *purchaseResultArray; // x19
  PurchaseByBank_Legacy_Request___c_c *v21; // x0
  struct PurchaseByBank_Legacy_Request___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__6_0; // x20
  Il2CppObject *v24; // x21
  struct PurchaseByBank_Legacy_Request___c_StaticFields *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v32; // x0

  if ( (byte_42E8819 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_PurchaseByBank_Legacy_Request_PurchaseResult__int___, v1, v2, v3);
    sub_B5D5C4(&Method_System_Func_PurchaseByBank_Legacy_Request_PurchaseResult__int___ctor__, v4, v5, v6);
    sub_B5D5C4(&System_Func_PurchaseByBank_Legacy_Request_PurchaseResult__int__TypeInfo, v7, v8, v9);
    sub_B5D5C4(&PurchaseByBank_Legacy_Request_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_PurchaseByBank_Legacy_Request___c__GetTotalAddedFreeStoneNum_b__6_0__, v13, v14, v15);
    sub_B5D5C4(&PurchaseByBank_Legacy_Request___c_TypeInfo, v16, v17, v18);
    byte_42E8819 = 1;
  }
  v19 = PurchaseByBank_Legacy_Request_TypeInfo;
  if ( (BYTE3(PurchaseByBank_Legacy_Request_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PurchaseByBank_Legacy_Request_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseByBank_Legacy_Request_TypeInfo);
    v19 = PurchaseByBank_Legacy_Request_TypeInfo;
  }
  purchaseResultArray = (System_Collections_Generic_IEnumerable_TSource__o *)v19->static_fields->purchaseResultArray;
  if ( !purchaseResultArray )
    return 0;
  if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v19);
    purchaseResultArray = (System_Collections_Generic_IEnumerable_TSource__o *)PurchaseByBank_Legacy_Request_TypeInfo->static_fields->purchaseResultArray;
  }
  v21 = PurchaseByBank_Legacy_Request___c_TypeInfo;
  if ( (BYTE3(PurchaseByBank_Legacy_Request___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PurchaseByBank_Legacy_Request___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseByBank_Legacy_Request___c_TypeInfo);
    v21 = PurchaseByBank_Legacy_Request___c_TypeInfo;
  }
  static_fields = v21->static_fields;
  _9__6_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__6_0;
  if ( !_9__6_0 )
  {
    if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      static_fields = PurchaseByBank_Legacy_Request___c_TypeInfo->static_fields;
    }
    v24 = (Il2CppObject *)static_fields->__9;
    _9__6_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_PurchaseByBank_Legacy_Request_PurchaseResult__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__6_0,
      v24,
      Method_PurchaseByBank_Legacy_Request___c__GetTotalAddedFreeStoneNum_b__6_0__,
      (const MethodInfo_2C2F87C *)Method_System_Func_PurchaseByBank_Legacy_Request_PurchaseResult__int___ctor__);
    v25 = PurchaseByBank_Legacy_Request___c_TypeInfo->static_fields;
    v25->__9__6_0 = (struct System_Func_PurchaseByBank_Legacy_Request_PurchaseResult__int__o *)_9__6_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v25->__9__6_0,
      (System_Int32_array **)_9__6_0,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
  }
  v32 = System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
          purchaseResultArray,
          (System_Func_TSource__TResult__o *)_9__6_0,
          (const MethodInfo_1CB2FF4 *)Method_System_Linq_Enumerable_Select_PurchaseByBank_Legacy_Request_PurchaseResult__int___);
  return System_Linq_Enumerable__Sum((System_Collections_Generic_IEnumerable_int__o *)v32, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PurchaseByBank_Legacy_Request__beginRequest(
        PurchaseByBank_Legacy_Request_o *this,
        System_String_o *purchaseBaseData,
        System_String_o *purchaseData,
        int32_t storeError,
        System_String_o *extraToken,
        const MethodInfo *method)
{
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  PurchaseByBank_Legacy_Request_c *v32; // x0
  BattleServantConfConponent_o *static_fields; // x0

  if ( (byte_42E8818 & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)purchaseBaseData, (_DWORD)purchaseData, *(_QWORD *)&storeError);
    sub_B5D5C4(&PurchaseByBank_Legacy_Request_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_22640/*"storeError"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_21870/*"purchaseData"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_21871/*"purchaseDataBase64"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_22427/*"signatureData"*/, v23, v24, v25);
    byte_42E8818 = 1;
  }
  RequestBase__addField_32362260((RequestBase_o *)this, (System_String_o *)StringLiteral_21870/*"purchaseData"*/, purchaseData, 0LL);
  if ( !System_String__IsNullOrEmpty(purchaseBaseData, 0LL) )
    RequestBase__addField_32362260((RequestBase_o *)this, (System_String_o *)StringLiteral_21871/*"purchaseDataBase64"*/, purchaseBaseData, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22640/*"storeError"*/, storeError, 0LL);
  if ( !System_String__IsNullOrEmpty(extraToken, 0LL) )
    RequestBase__addField_32362260((RequestBase_o *)this, (System_String_o *)StringLiteral_22427/*"signatureData"*/, extraToken, 0LL);
  v32 = PurchaseByBank_Legacy_Request_TypeInfo;
  if ( (BYTE3(PurchaseByBank_Legacy_Request_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PurchaseByBank_Legacy_Request_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseByBank_Legacy_Request_TypeInfo);
    v32 = PurchaseByBank_Legacy_Request_TypeInfo;
  }
  static_fields = (BattleServantConfConponent_o *)v32->static_fields;
  static_fields->klass = 0LL;
  sub_B5D560(static_fields, 0LL, v26, v27, v28, v29, v30, v31);
  RequestBase__addBaseField((RequestBase_o *)this, 0LL);
  RequestBase__WriteParameter((RequestBase_o *)this, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  NetworkManager__RequestStart((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall PurchaseByBank_Legacy_Request__getParameterFileName(
        PurchaseByBank_Legacy_Request_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_42E8817 & 1) == 0 )
  {
    sub_B5D5C4(&AndroidUtil_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DatFileName_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&StringLiteral_885/*"/"*/, v7, v8, v9);
    byte_42E8817 = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(1, 0LL);
  return System_String__Concat_44580072(DatFileSavePath, (System_String_o *)StringLiteral_885/*"/"*/, FileName, 0LL);
}


int32_t __fastcall PurchaseByBank_Legacy_Request__getPurchasedBankShopId(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  PurchaseByBank_Legacy_Request_c *v7; // x0
  System_Collections_Generic_IEnumerable_TSource__o *purchaseResultArray; // x8
  PurchaseByBank_UnityIap_Request_PurchaseResult_o *v9; // x0

  if ( (byte_42E8815 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Linq_Enumerable_FirstOrDefault_PurchaseByBank_Legacy_Request_PurchaseResult___,
      v1,
      v2,
      v3);
    sub_B5D5C4(&PurchaseByBank_Legacy_Request_TypeInfo, v4, v5, v6);
    byte_42E8815 = 1;
  }
  v7 = PurchaseByBank_Legacy_Request_TypeInfo;
  if ( (BYTE3(PurchaseByBank_Legacy_Request_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PurchaseByBank_Legacy_Request_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseByBank_Legacy_Request_TypeInfo);
    v7 = PurchaseByBank_Legacy_Request_TypeInfo;
  }
  purchaseResultArray = (System_Collections_Generic_IEnumerable_TSource__o *)v7->static_fields->purchaseResultArray;
  if ( purchaseResultArray )
  {
    if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      purchaseResultArray = (System_Collections_Generic_IEnumerable_TSource__o *)PurchaseByBank_Legacy_Request_TypeInfo->static_fields->purchaseResultArray;
    }
    v9 = System_Linq_Enumerable__FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult_(
           purchaseResultArray,
           (const MethodInfo_1CABD80 *)Method_System_Linq_Enumerable_FirstOrDefault_PurchaseByBank_Legacy_Request_PurchaseResult___);
    if ( v9 )
      LODWORD(v9) = v9->fields.purchasedBankShopId;
  }
  else
  {
    LODWORD(v9) = 0;
  }
  return (int)v9;
}


System_String_o *__fastcall PurchaseByBank_Legacy_Request__getURL(
        PurchaseByBank_Legacy_Request_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  System_String_o *BaseUrl; // x0

  if ( (byte_42E8816 & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_22408/*"shop/purchaseByBank"*/, v4, v5, v6);
    byte_42E8816 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44577788(BaseUrl, (System_String_o *)StringLiteral_22408/*"shop/purchaseByBank"*/, 0LL);
}


void __fastcall PurchaseByBank_Legacy_Request__requestCompleted(
        PurchaseByBank_Legacy_Request_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
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
  ResponseData_o *v33; // x0
  ResponseData_o *v34; // x20
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *success; // x21
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v36; // x0
  System_String_o *v37; // x20
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  __int64 v39; // x1
  Il2CppObject *v40; // x21
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Int32_array **v47; // x21
  PurchaseByBank_Legacy_Request_c *v48; // x8
  BattleServantConfConponent_o *static_fields; // x0
  RequestBase_o *v50; // x0
  System_String_o *v51; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *fail; // x20
  __int64 v53; // x21

  if ( (byte_42E881C & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__,
      (_DWORD)responseList,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v6, v7, v8);
    sub_B5D5C4(&Method_JsonManager_DeserializeArray_PurchaseByBank_Legacy_Request_PurchaseResult___, v9, v10, v11);
    sub_B5D5C4(&JsonManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&PurchaseByBank_Legacy_Request_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&ResponseCommandKind_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_22094/*"result"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_21345/*"ng"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_21874/*"purchaseResults"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_1/*""*/, v30, v31, v32);
    byte_42E881C = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v33 = ResponseCommandKind__SearchData(11, responseList, 0LL);
  if ( !v33 )
    goto LABEL_26;
  v34 = v33;
  if ( !ResponseData__checkError_29500464(v33, 0LL) )
  {
    fail = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v34->fields.fail;
    if ( fail )
    {
      v53 = StringLiteral_21345/*"ng"*/;
      if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
             (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)fail,
             (System_Xml_XmlQualifiedName_o *)StringLiteral_22094/*"result"*/,
             (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      {
        Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                 fail,
                 (System_Type_o *)StringLiteral_22094/*"result"*/,
                 (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !Item )
          goto LABEL_28;
        v53 = ((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                Item,
                Item->klass->vtable[4].methodPtr);
      }
      v50 = (RequestBase_o *)this;
      v51 = (System_String_o *)v53;
      goto LABEL_27;
    }
LABEL_26:
    v50 = (RequestBase_o *)this;
    v51 = (System_String_o *)StringLiteral_21345/*"ng"*/;
    goto LABEL_27;
  }
  success = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v34->fields.success;
  if ( !success )
    goto LABEL_26;
  v36 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v34->fields.success;
  v37 = (System_String_o *)StringLiteral_1/*""*/;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         v36,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_22094/*"result"*/,
         (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
             success,
             (System_Type_o *)StringLiteral_22094/*"result"*/,
             (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( Item )
    {
      v37 = (System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                 Item,
                                 Item->klass->vtable[4].methodPtr);
      goto LABEL_12;
    }
LABEL_28:
    sub_B5D69C(Item, v39);
  }
LABEL_12:
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)success,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_21874/*"purchaseResults"*/,
         (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v40 = (Il2CppObject *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                            success,
                            (System_Type_o *)StringLiteral_21874/*"purchaseResults"*/,
                            (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v47 = (System_Int32_array **)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                                   v40,
                                   (const MethodInfo_1E5E1D0 *)Method_JsonManager_DeserializeArray_PurchaseByBank_Legacy_Request_PurchaseResult___);
    v48 = PurchaseByBank_Legacy_Request_TypeInfo;
    if ( (BYTE3(PurchaseByBank_Legacy_Request_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !PurchaseByBank_Legacy_Request_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaseByBank_Legacy_Request_TypeInfo);
      v48 = PurchaseByBank_Legacy_Request_TypeInfo;
    }
    static_fields = (BattleServantConfConponent_o *)v48->static_fields;
    static_fields->klass = (BattleServantConfConponent_c *)v47;
    sub_B5D560(static_fields, v47, v41, v42, v43, v44, v45, v46);
  }
  v50 = (RequestBase_o *)this;
  v51 = v37;
LABEL_27:
  RequestBase__completed(v50, v51, 0LL);
}


void __fastcall PurchaseByBank_Legacy_Request_PurchaseResult___ctor(
        PurchaseByBank_Legacy_Request_PurchaseResult_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall PurchaseByBank_Legacy_Request___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct PurchaseByBank_Legacy_Request___c_StaticFields *static_fields; // x0

  if ( (byte_42E5ABD & 1) == 0 )
  {
    sub_B5D5C4(&PurchaseByBank_Legacy_Request___c_TypeInfo, v1, v2, v3);
    byte_42E5ABD = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(PurchaseByBank_Legacy_Request___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = PurchaseByBank_Legacy_Request___c_TypeInfo->static_fields;
  static_fields->__9 = (struct PurchaseByBank_Legacy_Request___c_o *)v4;
  sub_B5D560(static_fields);
}


void __fastcall PurchaseByBank_Legacy_Request___c___ctor(
        PurchaseByBank_Legacy_Request___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall PurchaseByBank_Legacy_Request___c___GetTotalAddedChargeStoneNum_b__7_0(
        PurchaseByBank_Legacy_Request___c_o *this,
        PurchaseByBank_Legacy_Request_PurchaseResult_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return x->fields.chargeStoneNum;
}


int32_t __fastcall PurchaseByBank_Legacy_Request___c___GetTotalAddedFreeStoneNum_b__6_0(
        PurchaseByBank_Legacy_Request___c_o *this,
        PurchaseByBank_Legacy_Request_PurchaseResult_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return x->fields.freeStoneNum;
}