void __fastcall AccountingManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  PaymentInfo_o *v4; // x19
  struct AccountingManager_StaticFields *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42128B9 & 1) == 0 )
  {
    sub_B0D8A4(&AccountingManager_TypeInfo, v1);
    sub_B0D8A4(&PaymentInfo_TypeInfo, v3);
    byte_42128B9 = 1;
  }
  AccountingManager_TypeInfo->static_fields->isEnableStore = 0;
  AccountingManager_TypeInfo->static_fields->isMoveStore = 0;
  AccountingManager_TypeInfo->static_fields->isRecoverStore = 1;
  AccountingManager_TypeInfo->static_fields->initializeResult = 0;
  AccountingManager_TypeInfo->static_fields->initializeStartTime = 0LL;
  v4 = (PaymentInfo_o *)sub_B0D974(PaymentInfo_TypeInfo, v1, v2);
  PaymentInfo___ctor(v4, 0LL);
  static_fields = AccountingManager_TypeInfo->static_fields;
  static_fields->paymentInfo = v4;
  sub_B0D840(
    (BattleServantConfConponent_o *)&static_fields->paymentInfo,
    (System_Int32_array **)v4,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}


void __fastcall AccountingManager___ctor(AccountingManager_o *this, const MethodInfo *method)
{
  if ( (byte_42128B8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AccountingManager___ctor__, method);
    byte_42128B8 = 1;
  }
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2A713D0 *)Method_SingletonMonoBehaviour_AccountingManager___ctor__);
}


void __fastcall AccountingManager__AddExtraData(
        AccountingManager_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_Dictionary_string__object__o *Dictionary; // x0
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // kr00_16
  WebViewManager_o *Instance; // x0
  CrashReporter_o *v14; // x20
  System_String_o *v15; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v16; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42128B7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__, value);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__, v6);
    sub_B0D8A4(&JsonManager_TypeInfo, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__, v9);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v10);
    byte_42128B7 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  if ( !System_String__IsNullOrEmpty(value, 0LL) )
  {
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    Dictionary = JsonManager__getDictionary(value, 0LL);
    if ( !Dictionary )
      sub_B0D97C(0LL);
    System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
      &v16,
      (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)Dictionary,
      (const MethodInfo_2E4B244 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    while ( System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
              (System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o *)&v16,
              (const MethodInfo_26C9288 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
    {
      current = v16.fields.current;
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
      if ( !current.fields.value )
        sub_B0D97C(Instance);
      v14 = (CrashReporter_o *)Instance;
      v15 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))current.fields.value->klass->vtable[3].method)(
                                 current.fields.value,
                                 current.fields.value->klass->vtable[4].methodPtr);
      if ( !v14 )
        sub_B0D97C(v15);
      CrashReporter__AddCustomKey(v14, (System_String_o *)current.fields.key, v15, 0LL);
    }
    System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
      (System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o *)&v16,
      (const MethodInfo_26C93F0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
  }
}


void __fastcall AccountingManager__AddExtraDataProductID(AccountingManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  AccountingManager_c *v3; // x0
  struct PaymentInfo_o *paymentInfo; // x8
  System_String_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_42128B6 & 1) == 0 )
  {
    sub_B0D8A4(&AccountingManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_23759/*"{{\"ProductId\":\"{0}\"}}"*/, v2);
    byte_42128B6 = 1;
  }
  v3 = AccountingManager_TypeInfo;
  if ( (BYTE3(AccountingManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AccountingManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
    v3 = AccountingManager_TypeInfo;
  }
  paymentInfo = v3->static_fields->paymentInfo;
  if ( !paymentInfo )
    sub_B0D97C(v3);
  v5 = System_String__Format(
         (System_String_o *)StringLiteral_23759/*"{{\"ProductId\":\"{0}\"}}"*/,
         (Il2CppObject *)paymentInfo->fields._ProductId_k__BackingField,
         0LL);
  AccountingManager__AddExtraData((AccountingManager_o *)v5, v5, v6);
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
  sub_B0D840(
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
  __int64 v1; // x1
  AccountingManager_c *v2; // x0
  System_String_o *PaymentHistoryPath; // x19
  AccountingManager_c *v4; // x0

  if ( (byte_42128AD & 1) == 0 )
  {
    sub_B0D8A4(&AccountingManager_TypeInfo, v1);
    byte_42128AD = 1;
  }
  v2 = AccountingManager_TypeInfo;
  if ( (BYTE3(AccountingManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AccountingManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
  }
  PaymentHistoryPath = AccountingManager__GetPaymentHistoryPath((const MethodInfo *)v2);
  if ( System_IO_Directory__Exists(PaymentHistoryPath, 0LL) )
    System_IO_Directory__Delete_43785104(PaymentHistoryPath, 1, 0LL);
  v4 = AccountingManager_TypeInfo;
  if ( (BYTE3(AccountingManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AccountingManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
  }
  AccountingManager__ClearPayment((const MethodInfo *)v4);
}


void __fastcall AccountingManager__ClearPayment(const MethodInfo *method)
{
  __int64 v1; // x1
  AccountingManager_c *v2; // x0
  PaymentInfo_o *paymentInfo; // x0
  const MethodInfo *v4; // x0
  System_String_o *PaymentFileName; // x19

  if ( (byte_42128AE & 1) == 0 )
  {
    sub_B0D8A4(&AccountingManager_TypeInfo, v1);
    byte_42128AE = 1;
  }
  v2 = AccountingManager_TypeInfo;
  if ( (BYTE3(AccountingManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AccountingManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
    v2 = AccountingManager_TypeInfo;
  }
  paymentInfo = v2->static_fields->paymentInfo;
  if ( !paymentInfo )
    sub_B0D97C(0LL);
  PaymentInfo__Clear(paymentInfo, 0, 0LL);
  PaymentFileName = AccountingManager__GetPaymentFileName(v4);
  if ( System_IO_File__Exists(PaymentFileName, 0LL) )
    System_IO_File__Delete(PaymentFileName, 0LL);
}


void __fastcall AccountingManager__CreatePaymentHistoryDirectory(const MethodInfo *method)
{
  __int64 v1; // x1
  AccountingManager_c *v2; // x0
  System_String_o *PaymentHistoryPath; // x19

  if ( (byte_42128AC & 1) == 0 )
  {
    sub_B0D8A4(&AccountingManager_TypeInfo, v1);
    byte_42128AC = 1;
  }
  v2 = AccountingManager_TypeInfo;
  if ( (BYTE3(AccountingManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AccountingManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
  }
  PaymentHistoryPath = AccountingManager__GetPaymentHistoryPath((const MethodInfo *)v2);
  if ( !System_IO_Directory__Exists(PaymentHistoryPath, 0LL) )
    System_IO_Directory__CreateDirectory(PaymentHistoryPath, 0LL);
}


void __fastcall AccountingManager__DeletePayment(AccountingManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  ManagerConfig_c *v3; // x0
  AccountingManager_c *v4; // x0

  if ( (byte_42128B3 & 1) == 0 )
  {
    sub_B0D8A4(&AccountingManager_TypeInfo, method);
    sub_B0D8A4(&ManagerConfig_TypeInfo, v2);
    byte_42128B3 = 1;
  }
  v3 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v3 = ManagerConfig_TypeInfo;
  }
  if ( !v3->static_fields->UseMock )
  {
    v4 = AccountingManager_TypeInfo;
    if ( (BYTE3(AccountingManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AccountingManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
    }
    AccountingManager__ClearPayment((const MethodInfo *)v4);
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
  __int64 v3; // x1
  AccountingManager_c *v4; // x0
  System_String_o *PaymentHistoryPath; // x0

  if ( (byte_42128AA & 1) == 0 )
  {
    sub_B0D8A4(&AccountingManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_879/*"/"*/, v3);
    byte_42128AA = 1;
  }
  v4 = AccountingManager_TypeInfo;
  if ( (BYTE3(AccountingManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AccountingManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
  }
  PaymentHistoryPath = AccountingManager__GetPaymentHistoryPath((const MethodInfo *)v4);
  return System_String__Concat_43852188(PaymentHistoryPath, (System_String_o *)StringLiteral_879/*"/"*/, name, 0LL);
}


System_String_o *__fastcall AccountingManager__GetHistoryFileName_20840416(int64_t time, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  AccountingManager_c *v5; // x0
  System_String_o *PaymentHistoryPath; // x20
  System_String_o *FileName_27229940; // x2

  if ( (byte_42128AB & 1) == 0 )
  {
    sub_B0D8A4(&AccountingManager_TypeInfo, method);
    sub_B0D8A4(&DatFileName_TypeInfo, v3);
    sub_B0D8A4(&StringLiteral_879/*"/"*/, v4);
    byte_42128AB = 1;
  }
  v5 = AccountingManager_TypeInfo;
  if ( (BYTE3(AccountingManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AccountingManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
  }
  PaymentHistoryPath = AccountingManager__GetPaymentHistoryPath((const MethodInfo *)v5);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName_27229940 = DatFileName__getFileName_27229940(22, time, 0LL);
  return System_String__Concat_43852188(
           PaymentHistoryPath,
           (System_String_o *)StringLiteral_879/*"/"*/,
           FileName_27229940,
           0LL);
}


System_String_o *__fastcall AccountingManager__GetOldPaymentFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  System_String_o *temporaryCachePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_42128A7 & 1) == 0 )
  {
    sub_B0D8A4(&DatFileName_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_879/*"/"*/, v2);
    byte_42128A7 = 1;
  }
  temporaryCachePath = UnityEngine_Application__get_temporaryCachePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(21, 0LL);
  return System_String__Concat_43852188(temporaryCachePath, (System_String_o *)StringLiteral_879/*"/"*/, FileName, 0LL);
}


System_String_o *__fastcall AccountingManager__GetPaymentFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_42128A8 & 1) == 0 )
  {
    sub_B0D8A4(&AndroidUtil_TypeInfo, v1);
    sub_B0D8A4(&DatFileName_TypeInfo, v2);
    sub_B0D8A4(&StringLiteral_879/*"/"*/, v3);
    byte_42128A8 = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(21, 0LL);
  return System_String__Concat_43852188(DatFileSavePath, (System_String_o *)StringLiteral_879/*"/"*/, FileName, 0LL);
}


System_String_array *__fastcall AccountingManager__GetPaymentHistoryList(
        AccountingManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  AccountingManager_c *v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x19
  const MethodInfo *v12; // x0
  System_String_o *PaymentHistoryPath; // x21
  __int64 v14; // x1
  __int64 v15; // x2
  System_IO_DirectoryInfo_o *v16; // x20
  System_String_o *Files; // x0
  int klass; // w8
  System_String_o *v19; // x20
  unsigned int v20; // w23
  System_String_c **v21; // x22
  System_IO_FileSystemInfo_o **v22; // x22
  System_IO_FileSystemInfo_o *v23; // t1
  System_String_o *v24; // x21
  System_String_o *v25; // x22
  __int64 v27; // x0
  uint16_t Chars; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42128B0 & 1) == 0 )
  {
    sub_B0D8A4(&AccountingManager_TypeInfo, method);
    sub_B0D8A4(&System_IO_DirectoryInfo_TypeInfo, v2);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Add__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__ToArray__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string___ctor__, v5);
    sub_B0D8A4(&System_Collections_Generic_List_string__TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_865/*".meta"*/, v7);
    byte_42128B0 = 1;
  }
  Chars = 0;
  v8 = AccountingManager_TypeInfo;
  if ( (BYTE3(AccountingManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AccountingManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
  }
  AccountingManager__CreatePaymentHistoryDirectory((const MethodInfo *)v8);
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_string__TypeInfo,
                                                                                                  v9,
                                                                                                  v10);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_string___ctor__);
  PaymentHistoryPath = AccountingManager__GetPaymentHistoryPath(v12);
  v16 = (System_IO_DirectoryInfo_o *)sub_B0D974(System_IO_DirectoryInfo_TypeInfo, v14, v15);
  System_IO_DirectoryInfo___ctor(v16, PaymentHistoryPath, 0LL);
  if ( !v16 )
    goto LABEL_23;
  Files = (System_String_o *)System_IO_DirectoryInfo__GetFiles(v16, 0LL);
  if ( !Files )
    goto LABEL_23;
  klass = (int)Files[1].klass;
  v19 = Files;
  if ( klass >= 1 )
  {
    v20 = 0;
    while ( 1 )
    {
      if ( v20 >= klass )
        goto LABEL_24;
      v21 = &v19->klass + (int)v20;
      v23 = (System_IO_FileSystemInfo_o *)v21[4];
      v22 = (System_IO_FileSystemInfo_o **)(v21 + 4);
      Files = (System_String_o *)v23;
      if ( !v23 )
        break;
      Files = (System_String_o *)((__int64 (__fastcall *)(System_String_o *, Il2CppMethodPointer))Files->klass->vtable._8_System_IConvertible_ToChar.method)(
                                   Files,
                                   Files->klass->vtable._9_System_IConvertible_ToSByte.methodPtr);
      if ( v20 >= LODWORD(v19[1].klass) )
      {
LABEL_24:
        v27 = sub_B0D9A8(Files);
        sub_B0D948(v27, 0LL);
      }
      v24 = Files;
      Files = (System_String_o *)*v22;
      if ( !*v22 )
        break;
      Files = System_IO_FileSystemInfo__get_Extension((System_IO_FileSystemInfo_o *)Files, 0LL);
      if ( !v24 )
        break;
      v25 = Files;
      Chars = System_String__get_Chars(v24, 0, 0LL);
      Files = (System_String_o *)System_Char__Equals_36055928((uint16_t)&Chars, 0x2Eu, 0LL);
      if ( ((unsigned __int8)Files & 1) == 0 )
      {
        if ( !v25 )
          break;
        Files = (System_String_o *)System_String__Equals_43837244(v25, (System_String_o *)StringLiteral_865/*".meta"*/, 0LL);
        if ( ((unsigned __int8)Files & 1) == 0 )
        {
          if ( !v11 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v11,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v24,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
        }
      }
      klass = (int)v19[1].klass;
      if ( (int)++v20 >= klass )
        goto LABEL_21;
    }
LABEL_23:
    sub_B0D97C(Files);
  }
LABEL_21:
  if ( !v11 )
    goto LABEL_23;
  return (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v11,
                                  (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_string__ToArray__);
}


System_String_o *__fastcall AccountingManager__GetPaymentHistoryPath(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FolderName; // x2

  if ( (byte_42128A9 & 1) == 0 )
  {
    sub_B0D8A4(&AndroidUtil_TypeInfo, v1);
    sub_B0D8A4(&CacheFolderName_TypeInfo, v2);
    sub_B0D8A4(&StringLiteral_879/*"/"*/, v3);
    byte_42128A9 = 1;
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
  return System_String__Concat_43852188(DatFileSavePath, (System_String_o *)StringLiteral_879/*"/"*/, FolderName, 0LL);
}


void __fastcall AccountingManager__HistoryPayment(
        AccountingManager_o *this,
        System_String_o *state,
        const MethodInfo *method)
{
  __int64 v4; // x1
  ManagerConfig_c *v5; // x0
  AccountingManager_c *v6; // x0
  System_String_o *HistoryFileName_20840416; // x0
  const MethodInfo *v8; // x1
  struct PaymentInfo_o *paymentInfo; // x8

  if ( (byte_42128B4 & 1) == 0 )
  {
    sub_B0D8A4(&AccountingManager_TypeInfo, state);
    sub_B0D8A4(&ManagerConfig_TypeInfo, v4);
    byte_42128B4 = 1;
  }
  v5 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v5 = ManagerConfig_TypeInfo;
  }
  if ( !v5->static_fields->UseMock )
  {
    v6 = AccountingManager_TypeInfo;
    if ( (BYTE3(AccountingManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AccountingManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
    }
    AccountingManager__CreatePaymentHistoryDirectory((const MethodInfo *)v6);
    paymentInfo = AccountingManager_TypeInfo->static_fields->paymentInfo;
    if ( !paymentInfo
      || (HistoryFileName_20840416 = AccountingManager__GetHistoryFileName_20840416(
                                       paymentInfo->fields._Time_k__BackingField,
                                       v8),
          !AccountingManager_TypeInfo->static_fields->paymentInfo) )
    {
      sub_B0D97C(HistoryFileName_20840416);
    }
    PaymentInfo__WriteHistoryFile(
      AccountingManager_TypeInfo->static_fields->paymentInfo,
      HistoryFileName_20840416,
      state,
      0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AccountingManager__IsLimitOver(AccountingManager_o *this, int32_t value, const MethodInfo *method)
{
  __int64 v4; // x1
  ManagerConfig_c *v5; // x0
  AgeVerificationMenu_c *v7; // x0
  int32_t Limit; // w0

  if ( (byte_42128B5 & 1) == 0 )
  {
    sub_B0D8A4(&AgeVerificationMenu_TypeInfo, *(_QWORD *)&value);
    sub_B0D8A4(&ManagerConfig_TypeInfo, v4);
    byte_42128B5 = 1;
  }
  v5 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v5 = ManagerConfig_TypeInfo;
  }
  if ( v5->static_fields->UseMock )
    return 1;
  v7 = AgeVerificationMenu_TypeInfo;
  if ( (BYTE3(AgeVerificationMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
  }
  Limit = AgeVerificationMenu__GetLimit((const MethodInfo *)v7);
  return Limit >= 0 && Limit < value;
}


System_String_o *__fastcall AccountingManager__ReadHistory(System_String_o *name, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  AccountingManager_c *v6; // x0
  const MethodInfo *v7; // x1
  System_String_o *HistoryFileName; // x0
  System_IO_Stream_o *v9; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  System_IO_BinaryReader_o *v12; // x19
  __int64 v13; // x0
  System_String_o *v14; // x20
  System_String_o *v15; // x20
  System_IO_BinaryReader_c *klass; // x8
  unsigned __int64 v17; // x10
  int32_t *p_offset; // x11
  __int64 v19; // x0

  if ( (byte_42128AF & 1) == 0 )
  {
    sub_B0D8A4(&AccountingManager_TypeInfo, method);
    sub_B0D8A4(&System_IO_BinaryReader_TypeInfo, v3);
    sub_B0D8A4(&CatAndMouseGame_TypeInfo, v4);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v5);
    byte_42128AF = 1;
  }
  v6 = AccountingManager_TypeInfo;
  if ( (BYTE3(AccountingManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AccountingManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
  }
  AccountingManager__CreatePaymentHistoryDirectory((const MethodInfo *)v6);
  HistoryFileName = AccountingManager__GetHistoryFileName(name, v7);
  v9 = (System_IO_Stream_o *)System_IO_File__OpenRead(HistoryFileName, 0LL);
  v12 = (System_IO_BinaryReader_o *)sub_B0D974(System_IO_BinaryReader_TypeInfo, v10, v11);
  System_IO_BinaryReader___ctor(v12, v9, 0LL);
  if ( !v12 )
    sub_B0D97C(v13);
  v14 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v12->klass->vtable._22_ReadString.method)(
                             v12,
                             v12->klass->vtable._23_ReadChars.methodPtr);
  if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  }
  v15 = CatAndMouseGame__MouseGame1(v14, 0, 0LL);
  klass = v12->klass;
  if ( *(_WORD *)&v12->klass->_2.bitflags1 )
  {
    v17 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v17;
      p_offset += 4;
      if ( v17 >= *(unsigned __int16 *)&v12->klass->_2.bitflags1 )
        goto LABEL_14;
    }
    v19 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_14:
    v19 = sub_AA67A0(v12, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v19)(v12, *(_QWORD *)(v19 + 8));
  return v15;
}


bool __fastcall AccountingManager__ReadOldPayment(AccountingManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return AccountingManager__ReadPayment_20842264(this, 0, v2);
}


bool __fastcall AccountingManager__ReadPayment(AccountingManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return AccountingManager__ReadPayment_20842264(this, 1, v2);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AccountingManager__ReadPayment_20842264(
        AccountingManager_o *this,
        bool isNewFormat,
        const MethodInfo *method)
{
  __int64 v4; // x1
  ManagerConfig_c *v5; // x0
  AccountingManager_c *v6; // x0
  System_String_o *PaymentFileName; // x0
  System_String_o *v8; // x20
  AccountingManager_c *v9; // x0
  PaymentInfo_o *paymentInfo; // x0
  AccountingManager_c *v12; // x0

  if ( (byte_42128B1 & 1) == 0 )
  {
    sub_B0D8A4(&AccountingManager_TypeInfo, isNewFormat);
    sub_B0D8A4(&ManagerConfig_TypeInfo, v4);
    byte_42128B1 = 1;
  }
  v5 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v5 = ManagerConfig_TypeInfo;
  }
  if ( !v5->static_fields->UseMock )
  {
    v6 = AccountingManager_TypeInfo;
    if ( isNewFormat )
    {
      if ( (WORD1(AccountingManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !AccountingManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
      }
      PaymentFileName = AccountingManager__GetPaymentFileName((const MethodInfo *)v6);
    }
    else
    {
      if ( (WORD1(AccountingManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !AccountingManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
      }
      PaymentFileName = AccountingManager__GetOldPaymentFileName((const MethodInfo *)v6);
    }
    v8 = PaymentFileName;
    v9 = AccountingManager_TypeInfo;
    if ( (BYTE3(AccountingManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AccountingManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
      v9 = AccountingManager_TypeInfo;
    }
    paymentInfo = v9->static_fields->paymentInfo;
    if ( !paymentInfo )
LABEL_27:
      sub_B0D97C(paymentInfo);
    if ( PaymentInfo__ReadFile(paymentInfo, v8, isNewFormat, 0LL) )
      return 1;
  }
  v12 = AccountingManager_TypeInfo;
  if ( (BYTE3(AccountingManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AccountingManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
    v12 = AccountingManager_TypeInfo;
  }
  paymentInfo = v12->static_fields->paymentInfo;
  if ( !paymentInfo )
    goto LABEL_27;
  PaymentInfo__Clear(paymentInfo, 1, 0LL);
  return 0;
}


void __fastcall AccountingManager__WritePayment(AccountingManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  ManagerConfig_c *v6; // x0
  int64_t IsNullOrEmpty; // x0
  __int64 v8; // x8
  AccountingManager_c *v9; // x8
  struct PaymentInfo_o *paymentInfo; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Int32_array **v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Int32_array **v24; // x1
  AgeVerificationMenu_c *v25; // x0
  struct PaymentInfo_o *v26; // x21
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Int32_array **v33; // x1
  PaymentInfo_o *v34; // x8

  if ( (byte_42128B2 & 1) == 0 )
  {
    sub_B0D8A4(&AccountingManager_TypeInfo, method);
    sub_B0D8A4(&AgeVerificationMenu_TypeInfo, v2);
    sub_B0D8A4(&ManagerConfig_TypeInfo, v3);
    sub_B0D8A4(&NetworkManager_TypeInfo, v4);
    sub_B0D8A4(&StringLiteral_1/*""*/, v5);
    byte_42128B2 = 1;
  }
  v6 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v6 = ManagerConfig_TypeInfo;
  }
  if ( !v6->static_fields->UseMock )
  {
    IsNullOrEmpty = (int64_t)AccountingManager_TypeInfo;
    if ( (BYTE3(AccountingManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AccountingManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
      IsNullOrEmpty = (int64_t)AccountingManager_TypeInfo;
    }
    v8 = *(_QWORD *)(*(_QWORD *)(IsNullOrEmpty + 184) + 16LL);
    if ( v8 )
    {
      IsNullOrEmpty = System_String__IsNullOrEmpty(*(System_String_o **)(v8 + 16), 0LL);
      v9 = AccountingManager_TypeInfo;
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
        v9 = AccountingManager_TypeInfo;
      }
      paymentInfo = v9->static_fields->paymentInfo;
      if ( paymentInfo )
      {
        if ( !paymentInfo->fields._Time_k__BackingField )
        {
          if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v9);
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
          v17 = (System_Int32_array **)StringLiteral_1/*""*/;
          *(_QWORD *)(IsNullOrEmpty + 48) = StringLiteral_1/*""*/;
          sub_B0D840((BattleServantConfConponent_o *)(IsNullOrEmpty + 48), v17, v11, v12, v13, v14, v15, v16);
          IsNullOrEmpty = (int64_t)AccountingManager_TypeInfo->static_fields->paymentInfo;
          if ( !IsNullOrEmpty )
            goto LABEL_41;
          v24 = (System_Int32_array **)StringLiteral_1/*""*/;
          *(_QWORD *)(IsNullOrEmpty + 40) = StringLiteral_1/*""*/;
          sub_B0D840((BattleServantConfConponent_o *)(IsNullOrEmpty + 40), v24, v18, v19, v20, v21, v22, v23);
          v25 = AgeVerificationMenu_TypeInfo;
          v26 = AccountingManager_TypeInfo->static_fields->paymentInfo;
          if ( (BYTE3(AgeVerificationMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
          }
          IsNullOrEmpty = AgeVerificationMenu__GetCumulativeAmount((const MethodInfo *)v25);
          if ( !v26 )
            goto LABEL_41;
          v26->fields._CumulativeAmount_k__BackingField = IsNullOrEmpty;
          IsNullOrEmpty = (int64_t)AccountingManager_TypeInfo->static_fields->paymentInfo;
          if ( !IsNullOrEmpty )
            goto LABEL_41;
          v33 = (System_Int32_array **)StringLiteral_1/*""*/;
          *(_QWORD *)(IsNullOrEmpty + 64) = StringLiteral_1/*""*/;
          sub_B0D840((BattleServantConfConponent_o *)(IsNullOrEmpty + 64), v33, v27, v28, v29, v30, v31, v32);
          v9 = AccountingManager_TypeInfo;
        }
        if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v9);
        IsNullOrEmpty = (int64_t)AccountingManager__GetPaymentFileName((const MethodInfo *)IsNullOrEmpty);
        v34 = AccountingManager_TypeInfo->static_fields->paymentInfo;
        if ( v34 )
        {
          PaymentInfo__WriteFile(v34, (System_String_o *)IsNullOrEmpty, 0LL);
          return;
        }
      }
    }
LABEL_41:
    sub_B0D97C(IsNullOrEmpty);
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
  sub_B0D840(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall AccountingManager_ResultCallbackfunc__BeginInvoke(
        AccountingManager_ResultCallbackfunc_o *this,
        int32_t result,
        int32_t perMonthAmount,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v11[3]; // [xsp+0h] [xbp-40h] BYREF
  int32_t v12; // [xsp+18h] [xbp-28h] BYREF
  int32_t v13; // [xsp+1Ch] [xbp-24h] BYREF

  v12 = perMonthAmount;
  v13 = result;
  if ( (byte_421394C & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, *(_QWORD *)&result);
    sub_B0D8A4(&AccountingManager_Result_TypeInfo, v9);
    byte_421394C = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(AccountingManager_Result_TypeInfo, &v13);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_B0D848(this, v11, callback, object);
}


void __fastcall AccountingManager_ResultCallbackfunc__EndInvoke(
        AccountingManager_ResultCallbackfunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B0D84C(result, 0LL, method);
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
  __int64 v12; // x8
  unsigned int v13; // w23
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, _QWORD, _QWORD, _QWORD); // x0
  AccountingManager_ResultCallbackfunc_o *v20; // x8
  __int64 *v21; // x22
  __int64 v22; // x23
  void (__fastcall *v23)(unsigned int *, _QWORD, __int64); // x24
  char v24; // w24
  char v25; // w0
  unsigned int v26; // w24
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  unsigned int v32; // [xsp+Ch] [xbp-54h] BYREF
  AccountingManager_ResultCallbackfunc_o *v33; // [xsp+18h] [xbp-48h] BYREF

  v33 = this;
  v32 = result;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v33;
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
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(unsigned int *, _QWORD, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B0D960(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&result, *(_QWORD *)&perMonthAmount, method);
      if ( (sub_B0D8D4(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 2 )
        goto LABEL_36;
      v23((unsigned int *)v32, (unsigned int)perMonthAmount, v22);
LABEL_38:
      if ( ++v9 == v7 )
        return;
    }
    if ( !v21 )
    {
      v23(&v32 - 4, (unsigned int)perMonthAmount, v22);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B0D8CC(v22);
      v25 = sub_B0DCD0(v22);
      if ( (v24 & 1) != 0 )
      {
        v26 = v32;
        if ( (v25 & 1) != 0 )
        {
          v27 = *v21;
          v28 = *(_QWORD *)(v22 + 24);
          v29 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_AA67A0(v21, v28, v29);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B0D954(v17, v22);
        (*v19)(v21, v26, (unsigned int)perMonthAmount, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v12 = *v21;
          v13 = v32;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v12 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AA67A0(v21, class_0, v10);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))v16)(
            v21,
            v13,
            (unsigned int)perMonthAmount,
            *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            v32,
            (unsigned int)perMonthAmount,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, __int64))v23)(v21, v32, (unsigned int)perMonthAmount, v22);
    goto LABEL_38;
  }
}