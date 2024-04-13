void __fastcall AccountingManager___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  PaymentInfo_o *v7; // x19
  struct AccountingManager_StaticFields *static_fields; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42E67A6 & 1) == 0 )
  {
    sub_B5D5C4(&AccountingManager_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&PaymentInfo_TypeInfo, v4, v5, v6);
    byte_42E67A6 = 1;
  }
  AccountingManager_TypeInfo->static_fields->isEnableStore = 0;
  AccountingManager_TypeInfo->static_fields->isMoveStore = 0;
  AccountingManager_TypeInfo->static_fields->isRecoverStore = 1;
  AccountingManager_TypeInfo->static_fields->initializeResult = 0;
  AccountingManager_TypeInfo->static_fields->initializeStartTime = 0LL;
  v7 = (PaymentInfo_o *)sub_B5D694(PaymentInfo_TypeInfo);
  PaymentInfo___ctor(v7, 0LL);
  static_fields = AccountingManager_TypeInfo->static_fields;
  static_fields->paymentInfo = v7;
  sub_B5D560(
    (BattleServantConfConponent_o *)&static_fields->paymentInfo,
    (System_Int32_array **)v7,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
}


void __fastcall AccountingManager___ctor(AccountingManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E67A5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AccountingManager___ctor__, (_DWORD)method, v2, v3);
    byte_42E67A5 = 1;
  }
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2A301CC *)Method_SingletonMonoBehaviour_AccountingManager___ctor__);
}


void __fastcall AccountingManager__AddExtraData(
        AccountingManager_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
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
  System_Collections_Generic_Dictionary_string__object__o *Dictionary; // x0
  __int64 v27; // x1
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // kr00_16
  WebViewManager_o *Instance; // x0
  __int64 v30; // x1
  CrashReporter_o *v31; // x20
  System_String_o *v32; // x0
  __int64 v33; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v34; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42E67A4 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__,
      (_DWORD)value,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__, v11, v12, v13);
    sub_B5D5C4(&JsonManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__, v20, v21, v22);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v23, v24, v25);
    byte_42E67A4 = 1;
  }
  memset(&v34, 0, sizeof(v34));
  if ( !System_String__IsNullOrEmpty(value, 0LL) )
  {
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    Dictionary = JsonManager__getDictionary(value, 0LL);
    if ( !Dictionary )
      sub_B5D69C(0LL, v27);
    System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
      &v34,
      (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)Dictionary,
      (const MethodInfo_2F27198 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    while ( System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
              (System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o *)&v34,
              (const MethodInfo_2767D00 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
    {
      current = v34.fields.current;
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
      if ( !current.fields.value )
        sub_B5D69C(Instance, v30);
      v31 = (CrashReporter_o *)Instance;
      v32 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))current.fields.value->klass->vtable[3].method)(
                                 current.fields.value,
                                 current.fields.value->klass->vtable[4].methodPtr);
      if ( !v31 )
        sub_B5D69C(v32, v33);
      CrashReporter__AddCustomKey(v31, (System_String_o *)current.fields.key, v32, 0LL);
    }
    System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
      (System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o *)&v34,
      (const MethodInfo_2767E68 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
  }
}


void __fastcall AccountingManager__AddExtraDataProductID(AccountingManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  AccountingManager_c *v7; // x0
  struct PaymentInfo_o *paymentInfo; // x8
  System_String_o *v9; // x0
  const MethodInfo *v10; // x2

  if ( (byte_42E67A3 & 1) == 0 )
  {
    sub_B5D5C4(&AccountingManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_23993/*"{{\"ProductId\":\"{0}\"}}"*/, v4, v5, v6);
    byte_42E67A3 = 1;
  }
  v7 = AccountingManager_TypeInfo;
  if ( (BYTE3(AccountingManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AccountingManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
    v7 = AccountingManager_TypeInfo;
  }
  paymentInfo = v7->static_fields->paymentInfo;
  if ( !paymentInfo )
    sub_B5D69C(v7, method);
  v9 = System_String__Format(
         (System_String_o *)StringLiteral_23993/*"{{\"ProductId\":\"{0}\"}}"*/,
         (Il2CppObject *)paymentInfo->fields._ProductId_k__BackingField,
         0LL);
  AccountingManager__AddExtraData((AccountingManager_o *)v9, v9, v10);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AccountingManager__CallbackResult(
        AccountingManager_o *this,
        int32_t result,
        int32_t perMonthAmount,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_callbackFunc; // x0
  AccountingManager_ResultCallbackfunc_o *v9; // x21
  struct AccountingManager_ResultCallbackfunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( !callbackFunc )
    return 0;
  p_callbackFunc->klass = 0LL;
  sub_B5D560(
    p_callbackFunc,
    0LL,
    *(System_String_array ***)&perMonthAmount,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  AccountingManager_ResultCallbackfunc__Invoke(v9, result, perMonthAmount, 0LL);
  return 1;
}


void __fastcall AccountingManager__ClearAll(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  AccountingManager_c *v4; // x0
  System_String_o *PaymentHistoryPath; // x19
  AccountingManager_c *v6; // x0

  if ( (byte_42E679A & 1) == 0 )
  {
    sub_B5D5C4(&AccountingManager_TypeInfo, v1, v2, v3);
    byte_42E679A = 1;
  }
  v4 = AccountingManager_TypeInfo;
  if ( (BYTE3(AccountingManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AccountingManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
  }
  PaymentHistoryPath = AccountingManager__GetPaymentHistoryPath((const MethodInfo *)v4);
  if ( System_IO_Directory__Exists(PaymentHistoryPath, 0LL) )
    System_IO_Directory__Delete_44512988(PaymentHistoryPath, 1, 0LL);
  v6 = AccountingManager_TypeInfo;
  if ( (BYTE3(AccountingManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AccountingManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
  }
  AccountingManager__ClearPayment((const MethodInfo *)v6);
}


void __fastcall AccountingManager__ClearPayment(const MethodInfo *method)
{
  __int64 v1; // x1
  int v2; // w2
  __int64 v3; // x3
  AccountingManager_c *v4; // x0
  PaymentInfo_o *paymentInfo; // x0
  const MethodInfo *v6; // x0
  System_String_o *PaymentFileName; // x19

  if ( (byte_42E679B & 1) == 0 )
  {
    sub_B5D5C4(&AccountingManager_TypeInfo, v1, v2, v3);
    byte_42E679B = 1;
  }
  v4 = AccountingManager_TypeInfo;
  if ( (BYTE3(AccountingManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AccountingManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
    v4 = AccountingManager_TypeInfo;
  }
  paymentInfo = v4->static_fields->paymentInfo;
  if ( !paymentInfo )
    sub_B5D69C(0LL, v1);
  PaymentInfo__Clear(paymentInfo, 0, 0LL);
  PaymentFileName = AccountingManager__GetPaymentFileName(v6);
  if ( System_IO_File__Exists(PaymentFileName, 0LL) )
    System_IO_File__Delete(PaymentFileName, 0LL);
}


void __fastcall AccountingManager__CreatePaymentHistoryDirectory(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  AccountingManager_c *v4; // x0
  System_String_o *PaymentHistoryPath; // x19

  if ( (byte_42E6799 & 1) == 0 )
  {
    sub_B5D5C4(&AccountingManager_TypeInfo, v1, v2, v3);
    byte_42E6799 = 1;
  }
  v4 = AccountingManager_TypeInfo;
  if ( (BYTE3(AccountingManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AccountingManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
  }
  PaymentHistoryPath = AccountingManager__GetPaymentHistoryPath((const MethodInfo *)v4);
  if ( !System_IO_Directory__Exists(PaymentHistoryPath, 0LL) )
    System_IO_Directory__CreateDirectory(PaymentHistoryPath, 0LL);
}


void __fastcall AccountingManager__DeletePayment(AccountingManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  ManagerConfig_c *v7; // x0
  AccountingManager_c *v8; // x0

  if ( (byte_42E67A0 & 1) == 0 )
  {
    sub_B5D5C4(&AccountingManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&ManagerConfig_TypeInfo, v4, v5, v6);
    byte_42E67A0 = 1;
  }
  v7 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v7 = ManagerConfig_TypeInfo;
  }
  if ( !v7->static_fields->UseMock )
  {
    v8 = AccountingManager_TypeInfo;
    if ( (BYTE3(AccountingManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AccountingManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
    }
    AccountingManager__ClearPayment((const MethodInfo *)v8);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AccountingManager__EndBankStatusFailIsLimitOver(
        AccountingManager_o *this,
        int32_t perMonthAmount,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x3

  AccountingManager__DeletePayment(this, *(const MethodInfo **)&perMonthAmount);
  AccountingManager__CallbackResult(this, 8, perMonthAmount, v5);
}


System_String_o *__fastcall AccountingManager__GetHistoryFileName(System_String_o *name, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  AccountingManager_c *v8; // x0
  System_String_o *PaymentHistoryPath; // x0

  if ( (byte_42E6797 & 1) == 0 )
  {
    sub_B5D5C4(&AccountingManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_885/*"/"*/, v5, v6, v7);
    byte_42E6797 = 1;
  }
  v8 = AccountingManager_TypeInfo;
  if ( (BYTE3(AccountingManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AccountingManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
  }
  PaymentHistoryPath = AccountingManager__GetPaymentHistoryPath((const MethodInfo *)v8);
  return System_String__Concat_44580072(PaymentHistoryPath, (System_String_o *)StringLiteral_885/*"/"*/, name, 0LL);
}


System_String_o *__fastcall AccountingManager__GetHistoryFileName_21244204(int64_t time, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  AccountingManager_c *v11; // x0
  System_String_o *PaymentHistoryPath; // x20
  System_String_o *FileName_28254308; // x2

  if ( (byte_42E6798 & 1) == 0 )
  {
    sub_B5D5C4(&AccountingManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DatFileName_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_885/*"/"*/, v8, v9, v10);
    byte_42E6798 = 1;
  }
  v11 = AccountingManager_TypeInfo;
  if ( (BYTE3(AccountingManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AccountingManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
  }
  PaymentHistoryPath = AccountingManager__GetPaymentHistoryPath((const MethodInfo *)v11);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName_28254308 = DatFileName__getFileName_28254308(22, time, 0LL);
  return System_String__Concat_44580072(
           PaymentHistoryPath,
           (System_String_o *)StringLiteral_885/*"/"*/,
           FileName_28254308,
           0LL);
}


System_String_o *__fastcall AccountingManager__GetOldPaymentFileName(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  System_String_o *temporaryCachePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_42E6794 & 1) == 0 )
  {
    sub_B5D5C4(&DatFileName_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&StringLiteral_885/*"/"*/, v4, v5, v6);
    byte_42E6794 = 1;
  }
  temporaryCachePath = UnityEngine_Application__get_temporaryCachePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(21, 0LL);
  return System_String__Concat_44580072(temporaryCachePath, (System_String_o *)StringLiteral_885/*"/"*/, FileName, 0LL);
}


System_String_o *__fastcall AccountingManager__GetPaymentFileName(const MethodInfo *method)
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
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_42E6795 & 1) == 0 )
  {
    sub_B5D5C4(&AndroidUtil_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&DatFileName_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&StringLiteral_885/*"/"*/, v7, v8, v9);
    byte_42E6795 = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(21, 0LL);
  return System_String__Concat_44580072(DatFileSavePath, (System_String_o *)StringLiteral_885/*"/"*/, FileName, 0LL);
}


System_String_array *__fastcall AccountingManager__GetPaymentHistoryList(
        AccountingManager_o *this,
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  AccountingManager_c *v22; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v23; // x19
  const MethodInfo *v24; // x0
  System_String_o *PaymentHistoryPath; // x21
  System_IO_DirectoryInfo_o *v26; // x20
  System_String_o *Files; // x0
  __int64 v28; // x1
  int klass; // w8
  System_String_o *v30; // x20
  unsigned int v31; // w23
  System_String_c **v32; // x22
  System_IO_FileSystemInfo_o **v33; // x22
  System_IO_FileSystemInfo_o *v34; // t1
  System_String_o *v35; // x21
  System_String_o *v36; // x22
  __int64 v38; // x0
  uint16_t Chars; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42E679D & 1) == 0 )
  {
    sub_B5D5C4(&AccountingManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_IO_DirectoryInfo_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Add__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__ToArray__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string___ctor__, v13, v14, v15);
    sub_B5D5C4(&System_Collections_Generic_List_string__TypeInfo, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_871/*".meta"*/, v19, v20, v21);
    byte_42E679D = 1;
  }
  Chars = 0;
  v22 = AccountingManager_TypeInfo;
  if ( (BYTE3(AccountingManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AccountingManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
  }
  AccountingManager__CreatePaymentHistoryDirectory((const MethodInfo *)v22);
  v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v23,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_string___ctor__);
  PaymentHistoryPath = AccountingManager__GetPaymentHistoryPath(v24);
  v26 = (System_IO_DirectoryInfo_o *)sub_B5D694(System_IO_DirectoryInfo_TypeInfo);
  System_IO_DirectoryInfo___ctor(v26, PaymentHistoryPath, 0LL);
  if ( !v26 )
    goto LABEL_23;
  Files = (System_String_o *)System_IO_DirectoryInfo__GetFiles(v26, 0LL);
  if ( !Files )
    goto LABEL_23;
  klass = (int)Files[1].klass;
  v30 = Files;
  if ( klass >= 1 )
  {
    v31 = 0;
    while ( 1 )
    {
      if ( v31 >= klass )
        goto LABEL_24;
      v32 = &v30->klass + (int)v31;
      v34 = (System_IO_FileSystemInfo_o *)v32[4];
      v33 = (System_IO_FileSystemInfo_o **)(v32 + 4);
      Files = (System_String_o *)v34;
      if ( !v34 )
        break;
      Files = (System_String_o *)((__int64 (__fastcall *)(System_String_o *, Il2CppMethodPointer))Files->klass->vtable._8_System_IConvertible_ToChar.method)(
                                   Files,
                                   Files->klass->vtable._9_System_IConvertible_ToSByte.methodPtr);
      if ( v31 >= LODWORD(v30[1].klass) )
      {
LABEL_24:
        v38 = sub_B5D6C8(Files);
        sub_B5D668(v38, 0LL);
      }
      v35 = Files;
      Files = (System_String_o *)*v33;
      if ( !*v33 )
        break;
      Files = System_IO_FileSystemInfo__get_Extension((System_IO_FileSystemInfo_o *)Files, 0LL);
      if ( !v35 )
        break;
      v36 = Files;
      Chars = System_String__get_Chars(v35, 0, 0LL);
      Files = (System_String_o *)System_Char__Equals_36712468((uint16_t)&Chars, 0x2Eu, 0LL);
      if ( ((unsigned __int8)Files & 1) == 0 )
      {
        if ( !v36 )
          break;
        Files = (System_String_o *)System_String__Equals_44565128(v36, (System_String_o *)StringLiteral_871/*".meta"*/, 0LL);
        if ( ((unsigned __int8)Files & 1) == 0 )
        {
          if ( !v23 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v23,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v35,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
        }
      }
      klass = (int)v30[1].klass;
      if ( (int)++v31 >= klass )
        goto LABEL_21;
    }
LABEL_23:
    sub_B5D69C(Files, v28);
  }
LABEL_21:
  if ( !v23 )
    goto LABEL_23;
  return (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v23,
                                  (const MethodInfo_305910C *)Method_System_Collections_Generic_List_string__ToArray__);
}


System_String_o *__fastcall AccountingManager__GetPaymentHistoryPath(const MethodInfo *method)
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
  System_String_o *DatFileSavePath; // x19
  System_String_o *FolderName; // x2

  if ( (byte_42E6796 & 1) == 0 )
  {
    sub_B5D5C4(&AndroidUtil_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&CacheFolderName_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&StringLiteral_885/*"/"*/, v7, v8, v9);
    byte_42E6796 = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(CacheFolderName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CacheFolderName_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo);
  }
  FolderName = CacheFolderName__getFolderName(2, 0LL);
  return System_String__Concat_44580072(DatFileSavePath, (System_String_o *)StringLiteral_885/*"/"*/, FolderName, 0LL);
}


void __fastcall AccountingManager__HistoryPayment(
        AccountingManager_o *this,
        System_String_o *state,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  ManagerConfig_c *v8; // x0
  AccountingManager_c *v9; // x0
  System_String_o *HistoryFileName_21244204; // x0
  const MethodInfo *v11; // x1
  struct PaymentInfo_o *paymentInfo; // x8

  if ( (byte_42E67A1 & 1) == 0 )
  {
    sub_B5D5C4(&AccountingManager_TypeInfo, (_DWORD)state, (_DWORD)method, v3);
    sub_B5D5C4(&ManagerConfig_TypeInfo, v5, v6, v7);
    byte_42E67A1 = 1;
  }
  v8 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v8 = ManagerConfig_TypeInfo;
  }
  if ( !v8->static_fields->UseMock )
  {
    v9 = AccountingManager_TypeInfo;
    if ( (BYTE3(AccountingManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AccountingManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
    }
    AccountingManager__CreatePaymentHistoryDirectory((const MethodInfo *)v9);
    paymentInfo = AccountingManager_TypeInfo->static_fields->paymentInfo;
    if ( !paymentInfo
      || (HistoryFileName_21244204 = AccountingManager__GetHistoryFileName_21244204(
                                       paymentInfo->fields._Time_k__BackingField,
                                       v11),
          !AccountingManager_TypeInfo->static_fields->paymentInfo) )
    {
      sub_B5D69C(HistoryFileName_21244204, v11);
    }
    PaymentInfo__WriteHistoryFile(
      AccountingManager_TypeInfo->static_fields->paymentInfo,
      HistoryFileName_21244204,
      state,
      0LL);
  }
}


bool __fastcall AccountingManager__IsLimitOver(AccountingManager_o *this, int32_t value, const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  ManagerConfig_c *v8; // x0
  AgeVerificationMenu_c *v10; // x0
  int32_t Limit; // w0

  if ( (byte_42E67A2 & 1) == 0 )
  {
    sub_B5D5C4(&AgeVerificationMenu_TypeInfo, value, (_DWORD)method, v3);
    sub_B5D5C4(&ManagerConfig_TypeInfo, v5, v6, v7);
    byte_42E67A2 = 1;
  }
  v8 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v8 = ManagerConfig_TypeInfo;
  }
  if ( v8->static_fields->UseMock )
    return 1;
  v10 = AgeVerificationMenu_TypeInfo;
  if ( (BYTE3(AgeVerificationMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
  }
  Limit = AgeVerificationMenu__GetLimit((const MethodInfo *)v10);
  return Limit >= 0 && Limit < value;
}


System_String_o *__fastcall AccountingManager__ReadHistory(System_String_o *name, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  AccountingManager_c *v14; // x0
  const MethodInfo *v15; // x1
  System_String_o *HistoryFileName; // x0
  System_IO_Stream_o *v17; // x20
  System_IO_BinaryReader_o *v18; // x19
  __int64 v19; // x0
  __int64 v20; // x1
  System_String_o *v21; // x20
  __int64 v22; // x3
  System_String_o *v23; // x20
  System_IO_BinaryReader_c *klass; // x8
  unsigned __int64 v25; // x10
  int32_t *p_offset; // x11
  __int64 v27; // x0

  if ( (byte_42E679C & 1) == 0 )
  {
    sub_B5D5C4(&AccountingManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_IO_BinaryReader_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&CatAndMouseGame_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v11, v12, v13);
    byte_42E679C = 1;
  }
  v14 = AccountingManager_TypeInfo;
  if ( (BYTE3(AccountingManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AccountingManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
  }
  AccountingManager__CreatePaymentHistoryDirectory((const MethodInfo *)v14);
  HistoryFileName = AccountingManager__GetHistoryFileName(name, v15);
  v17 = (System_IO_Stream_o *)System_IO_File__OpenRead(HistoryFileName, 0LL);
  v18 = (System_IO_BinaryReader_o *)sub_B5D694(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v18, v17, 0LL);
  if ( !v18 )
    sub_B5D69C(v19, v20);
  v21 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v18->klass->vtable._22_ReadString.method)(
                             v18,
                             v18->klass->vtable._23_ReadChars.methodPtr);
  if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  }
  v23 = CatAndMouseGame__MouseGame1(v21, 0, 0LL);
  klass = v18->klass;
  if ( *(_WORD *)&v18->klass->_2.bitflags1 )
  {
    v25 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v25;
      p_offset += 4;
      if ( v25 >= *(unsigned __int16 *)&v18->klass->_2.bitflags1 )
        goto LABEL_14;
    }
    v27 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_14:
    v27 = sub_AF54C0(v18, System_IDisposable_TypeInfo, 0LL, v22);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v27)(v18, *(_QWORD *)(v27 + 8));
  return v23;
}


bool __fastcall AccountingManager__ReadOldPayment(AccountingManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return AccountingManager__ReadPayment_21246052(this, 0, v2);
}


bool __fastcall AccountingManager__ReadPayment(AccountingManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return AccountingManager__ReadPayment_21246052(this, 1, v2);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AccountingManager__ReadPayment_21246052(
        AccountingManager_o *this,
        bool isNewFormat,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  ManagerConfig_c *v8; // x0
  AccountingManager_c *v9; // x0
  System_String_o *PaymentFileName; // x0
  System_String_o *v11; // x20
  AccountingManager_c *v12; // x0
  PaymentInfo_o *paymentInfo; // x0
  AccountingManager_c *v15; // x0

  if ( (byte_42E679E & 1) == 0 )
  {
    sub_B5D5C4(&AccountingManager_TypeInfo, isNewFormat, (_DWORD)method, v3);
    sub_B5D5C4(&ManagerConfig_TypeInfo, v5, v6, v7);
    byte_42E679E = 1;
  }
  v8 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v8 = ManagerConfig_TypeInfo;
  }
  if ( !v8->static_fields->UseMock )
  {
    v9 = AccountingManager_TypeInfo;
    if ( isNewFormat )
    {
      if ( (WORD1(AccountingManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !AccountingManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
      }
      PaymentFileName = AccountingManager__GetPaymentFileName((const MethodInfo *)v9);
    }
    else
    {
      if ( (WORD1(AccountingManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !AccountingManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
      }
      PaymentFileName = AccountingManager__GetOldPaymentFileName((const MethodInfo *)v9);
    }
    v11 = PaymentFileName;
    v12 = AccountingManager_TypeInfo;
    if ( (BYTE3(AccountingManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AccountingManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
      v12 = AccountingManager_TypeInfo;
    }
    paymentInfo = v12->static_fields->paymentInfo;
    if ( !paymentInfo )
LABEL_27:
      sub_B5D69C(paymentInfo, isNewFormat);
    if ( PaymentInfo__ReadFile(paymentInfo, v11, isNewFormat, 0LL) )
      return 1;
  }
  v15 = AccountingManager_TypeInfo;
  if ( (BYTE3(AccountingManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AccountingManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
    v15 = AccountingManager_TypeInfo;
  }
  paymentInfo = v15->static_fields->paymentInfo;
  if ( !paymentInfo )
    goto LABEL_27;
  PaymentInfo__Clear(paymentInfo, 1, 0LL);
  return 0;
}


void __fastcall AccountingManager__WritePayment(AccountingManager_o *this, const MethodInfo *method)
{
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
  ManagerConfig_c *v16; // x0
  int64_t IsNullOrEmpty; // x0
  __int64 v18; // x8
  AccountingManager_c *v19; // x8
  struct PaymentInfo_o *paymentInfo; // x20
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Int32_array **v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Int32_array **v34; // x1
  AgeVerificationMenu_c *v35; // x0
  struct PaymentInfo_o *v36; // x21
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Int32_array **v43; // x1
  PaymentInfo_o *v44; // x8

  if ( (byte_42E679F & 1) == 0 )
  {
    sub_B5D5C4(&AccountingManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AgeVerificationMenu_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&ManagerConfig_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&NetworkManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_1/*""*/, v13, v14, v15);
    byte_42E679F = 1;
  }
  v16 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v16 = ManagerConfig_TypeInfo;
  }
  if ( !v16->static_fields->UseMock )
  {
    IsNullOrEmpty = (int64_t)AccountingManager_TypeInfo;
    if ( (BYTE3(AccountingManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AccountingManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
      IsNullOrEmpty = (int64_t)AccountingManager_TypeInfo;
    }
    v18 = *(_QWORD *)(*(_QWORD *)(IsNullOrEmpty + 184) + 16LL);
    if ( v18 )
    {
      IsNullOrEmpty = System_String__IsNullOrEmpty(*(System_String_o **)(v18 + 16), 0LL);
      v19 = AccountingManager_TypeInfo;
      if ( (IsNullOrEmpty & 1) != 0 )
      {
        if ( (WORD1(AccountingManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !AccountingManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
        }
        AccountingManager__ClearPayment((const MethodInfo *)IsNullOrEmpty);
        return;
      }
      if ( (WORD1(AccountingManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !AccountingManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
        v19 = AccountingManager_TypeInfo;
      }
      paymentInfo = v19->static_fields->paymentInfo;
      if ( paymentInfo )
      {
        if ( !paymentInfo->fields._Time_k__BackingField )
        {
          if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v19);
            paymentInfo = AccountingManager_TypeInfo->static_fields->paymentInfo;
          }
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          IsNullOrEmpty = NetworkManager__getTime(0LL);
          if ( !paymentInfo )
            goto LABEL_41;
          paymentInfo->fields._Time_k__BackingField = IsNullOrEmpty;
          IsNullOrEmpty = (int64_t)AccountingManager_TypeInfo->static_fields->paymentInfo;
          if ( !IsNullOrEmpty )
            goto LABEL_41;
          v27 = (System_Int32_array **)StringLiteral_1/*""*/;
          *(_QWORD *)(IsNullOrEmpty + 48) = StringLiteral_1/*""*/;
          sub_B5D560((BattleServantConfConponent_o *)(IsNullOrEmpty + 48), v27, v21, v22, v23, v24, v25, v26);
          IsNullOrEmpty = (int64_t)AccountingManager_TypeInfo->static_fields->paymentInfo;
          if ( !IsNullOrEmpty )
            goto LABEL_41;
          v34 = (System_Int32_array **)StringLiteral_1/*""*/;
          *(_QWORD *)(IsNullOrEmpty + 40) = StringLiteral_1/*""*/;
          sub_B5D560((BattleServantConfConponent_o *)(IsNullOrEmpty + 40), v34, v28, v29, v30, v31, v32, v33);
          v35 = AgeVerificationMenu_TypeInfo;
          v36 = AccountingManager_TypeInfo->static_fields->paymentInfo;
          if ( (BYTE3(AgeVerificationMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
          }
          IsNullOrEmpty = AgeVerificationMenu__GetCumulativeAmount((const MethodInfo *)v35);
          if ( !v36 )
            goto LABEL_41;
          v36->fields._CumulativeAmount_k__BackingField = IsNullOrEmpty;
          IsNullOrEmpty = (int64_t)AccountingManager_TypeInfo->static_fields->paymentInfo;
          if ( !IsNullOrEmpty )
            goto LABEL_41;
          v43 = (System_Int32_array **)StringLiteral_1/*""*/;
          *(_QWORD *)(IsNullOrEmpty + 64) = StringLiteral_1/*""*/;
          sub_B5D560((BattleServantConfConponent_o *)(IsNullOrEmpty + 64), v43, v37, v38, v39, v40, v41, v42);
          v19 = AccountingManager_TypeInfo;
        }
        if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v19);
        IsNullOrEmpty = (int64_t)AccountingManager__GetPaymentFileName((const MethodInfo *)IsNullOrEmpty);
        v44 = AccountingManager_TypeInfo->static_fields->paymentInfo;
        if ( v44 )
        {
          PaymentInfo__WriteFile(v44, (System_String_o *)IsNullOrEmpty, 0LL);
          return;
        }
      }
    }
LABEL_41:
    sub_B5D69C(IsNullOrEmpty, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AccountingManager_ResultCallbackfunc___ctor(
        AccountingManager_ResultCallbackfunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B5D560(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


System_IAsyncResult_o *__fastcall AccountingManager_ResultCallbackfunc__BeginInvoke(
        AccountingManager_ResultCallbackfunc_o *this,
        int32_t result,
        int32_t perMonthAmount,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  __int64 v13[3]; // [xsp+0h] [xbp-40h] BYREF
  int32_t v14; // [xsp+18h] [xbp-28h] BYREF
  int32_t v15; // [xsp+1Ch] [xbp-24h] BYREF

  v14 = perMonthAmount;
  v15 = result;
  if ( (byte_42E7502 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, result, perMonthAmount, callback);
    sub_B5D5C4(&AccountingManager_Result_TypeInfo, v9, v10, v11);
    byte_42E7502 = 1;
  }
  v13[2] = 0LL;
  v13[0] = j_il2cpp_value_box_0(AccountingManager_Result_TypeInfo, &v15);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14);
  return (System_IAsyncResult_o *)sub_B5D568(this, v13, callback, object);
}


void __fastcall AccountingManager_ResultCallbackfunc__EndInvoke(
        AccountingManager_ResultCallbackfunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AccountingManager_ResultCallbackfunc__Invoke(
        AccountingManager_ResultCallbackfunc_o *this,
        int32_t result,
        int32_t perMonthAmount,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v7; // x25
  AccountingManager_ResultCallbackfunc_o **v8; // x26
  __int64 v9; // x27
  unsigned int v10; // w24
  __int64 class_0; // x0
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned int v14; // w23
  unsigned __int64 v15; // x10
  _DWORD *v16; // x11
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x0
  void (__fastcall **v20)(__int64 *, _QWORD, _QWORD, _QWORD); // x0
  AccountingManager_ResultCallbackfunc_o *v21; // x8
  __int64 *v22; // x22
  __int64 v23; // x23
  void (__fastcall *v24)(unsigned int *, _QWORD, __int64); // x24
  char v25; // w24
  char v26; // w0
  __int64 v27; // x3
  unsigned int v28; // w24
  __int64 v29; // x8
  __int64 v30; // x1
  __int64 v31; // x2
  unsigned __int64 v32; // x10
  _DWORD *v33; // x11
  unsigned int v34; // [xsp+Ch] [xbp-54h] BYREF
  AccountingManager_ResultCallbackfunc_o *v35; // [xsp+18h] [xbp-48h] BYREF

  v35 = this;
  v34 = result;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v35;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (AccountingManager_ResultCallbackfunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v21 = v8[v9];
      v22 = *(__int64 **)&v21->fields.method;
      v23 = *(_QWORD *)&v21->fields.extra_arg;
      v24 = *(void (__fastcall **)(unsigned int *, _QWORD, __int64))&v21->fields.method_ptr;
      if ( *(__int16 *)(v23 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v21->fields.extra_arg, *(_QWORD *)&result, *(_QWORD *)&perMonthAmount);
      if ( (sub_B5D5F4(v23) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v23 + 74) != 2 )
        goto LABEL_36;
      v24((unsigned int *)v34, (unsigned int)perMonthAmount, v23);
LABEL_38:
      if ( ++v9 == v7 )
        return;
    }
    if ( !v22 )
    {
      v24(&v34 - 4, (unsigned int)perMonthAmount, v23);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v23 + 72) != -1 && (*(_BYTE *)(*v22 + 277) & 1) == 0 && this->fields.m_target )
    {
      v25 = sub_B5D5EC(v23);
      v26 = sub_B5D9F0(v23);
      if ( (v25 & 1) != 0 )
      {
        v28 = v34;
        if ( (v26 & 1) != 0 )
        {
          v29 = *v22;
          v30 = *(_QWORD *)(v23 + 24);
          v31 = *(unsigned __int16 *)(v23 + 72);
          if ( *(_WORD *)(*v22 + 298) )
          {
            v32 = 0LL;
            v33 = (_DWORD *)(*(_QWORD *)(v29 + 176) + 8LL);
            while ( *((_QWORD *)v33 - 1) != v30 )
            {
              ++v32;
              v33 += 4;
              if ( v32 >= *(unsigned __int16 *)(*v22 + 298) )
                goto LABEL_35;
            }
            v19 = v29 + 16LL * (*v33 + (int)v31) + 312;
          }
          else
          {
LABEL_35:
            v19 = sub_AF54C0(v22, v30, v31, v27);
          }
          v18 = *(_QWORD *)(v19 + 8);
        }
        else
        {
          v18 = *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320);
        }
        v20 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B5D674(v18, v23);
        (*v20)(v22, v28, (unsigned int)perMonthAmount, v20);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v23 + 72);
        if ( (v26 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v23);
          v13 = *v22;
          v14 = v34;
          if ( *(_WORD *)(*v22 + 298) )
          {
            v15 = 0LL;
            v16 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v16 - 1) != class_0 )
            {
              ++v15;
              v16 += 4;
              if ( v15 >= *(unsigned __int16 *)(*v22 + 298) )
                goto LABEL_11;
            }
            v17 = v13 + 16LL * (int)(*v16 + v10) + 312;
          }
          else
          {
LABEL_11:
            v17 = sub_AF54C0(v22, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))v17)(
            v22,
            v14,
            (unsigned int)perMonthAmount,
            *(_QWORD *)(v17 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 312))(
            v22,
            v34,
            (unsigned int)perMonthAmount,
            *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, __int64))v24)(v22, v34, (unsigned int)perMonthAmount, v23);
    goto LABEL_38;
  }
}