void __fastcall AccountingManager___cctor(const MethodInfo *method)
{
  PaymentInfo_o *v1; // x19
  struct AccountingManager_StaticFields *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_42ADF1A & 1) == 0 )
  {
    sub_B52984(&AccountingManager_TypeInfo);
    sub_B52984(&PaymentInfo_TypeInfo);
    byte_42ADF1A = 1;
  }
  AccountingManager_TypeInfo->static_fields->isEnableStore = 0;
  AccountingManager_TypeInfo->static_fields->isMoveStore = 0;
  AccountingManager_TypeInfo->static_fields->isRecoverStore = 1;
  AccountingManager_TypeInfo->static_fields->initializeResult = 0;
  AccountingManager_TypeInfo->static_fields->initializeStartTime = 0LL;
  v1 = (PaymentInfo_o *)sub_B52A54(PaymentInfo_TypeInfo);
  PaymentInfo___ctor(v1, 0LL);
  static_fields = AccountingManager_TypeInfo->static_fields;
  static_fields->paymentInfo = v1;
  sub_B52920(
    (BattleServantConfConponent_o *)&static_fields->paymentInfo,
    (System_Int32_array **)v1,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
}


void __fastcall AccountingManager___ctor(AccountingManager_o *this, const MethodInfo *method)
{
  if ( (byte_42ADF19 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_AccountingManager___ctor__);
    byte_42ADF19 = 1;
  }
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2B7611C *)Method_SingletonMonoBehaviour_AccountingManager___ctor__);
}


void __fastcall AccountingManager__AddExtraData(
        AccountingManager_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__object__o *Dictionary; // x0
  __int64 v5; // x1
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // kr00_16
  WebViewManager_o *Instance; // x0
  __int64 v8; // x1
  CrashReporter_o *v9; // x20
  System_String_o *v10; // x0
  __int64 v11; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v12; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42ADF18 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__);
    sub_B52984(&JsonManager_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__);
    sub_B52984(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__);
    sub_B52984(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    byte_42ADF18 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  if ( !System_String__IsNullOrEmpty(value, 0LL) )
  {
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    Dictionary = JsonManager__getDictionary(value, 0LL);
    if ( !Dictionary )
      sub_B52A5C(0LL, v5);
    System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
      &v12,
      (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)Dictionary,
      (const MethodInfo_2F1BDDC *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    while ( System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
              (System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o *)&v12,
              (const MethodInfo_274E62C *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
    {
      current = v12.fields.current;
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
      if ( !current.fields.value )
        sub_B52A5C(Instance, v8);
      v9 = (CrashReporter_o *)Instance;
      v10 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))current.fields.value->klass->vtable[3].method)(
                                 current.fields.value,
                                 current.fields.value->klass->vtable[4].methodPtr);
      if ( !v9 )
        sub_B52A5C(v10, v11);
      CrashReporter__AddCustomKey(v9, (System_String_o *)current.fields.key, v10, 0LL);
    }
    System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
      (System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o *)&v12,
      (const MethodInfo_274E794 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
  }
}


void __fastcall AccountingManager__AddExtraDataProductID(AccountingManager_o *this, const MethodInfo *method)
{
  AccountingManager_c *v2; // x0
  struct PaymentInfo_o *paymentInfo; // x8
  System_String_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_42ADF17 & 1) == 0 )
  {
    sub_B52984(&AccountingManager_TypeInfo);
    sub_B52984(&StringLiteral_23875/*"{{\"ProductId\":\"{0}\"}}"*/);
    byte_42ADF17 = 1;
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
    sub_B52A5C(v2, method);
  v4 = System_String__Format(
         (System_String_o *)StringLiteral_23875/*"{{\"ProductId\":\"{0}\"}}"*/,
         (Il2CppObject *)paymentInfo->fields._ProductId_k__BackingField,
         0LL);
  AccountingManager__AddExtraData((AccountingManager_o *)v4, v4, v5);
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
  sub_B52920(
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
  AccountingManager_c *v1; // x0
  System_String_o *PaymentHistoryPath; // x19
  AccountingManager_c *v3; // x0

  if ( (byte_42ADF0E & 1) == 0 )
  {
    sub_B52984(&AccountingManager_TypeInfo);
    byte_42ADF0E = 1;
  }
  v1 = AccountingManager_TypeInfo;
  if ( (BYTE3(AccountingManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AccountingManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
  }
  PaymentHistoryPath = AccountingManager__GetPaymentHistoryPath((const MethodInfo *)v1);
  if ( System_IO_Directory__Exists(PaymentHistoryPath, 0LL) )
    System_IO_Directory__Delete_44503516(PaymentHistoryPath, 1, 0LL);
  v3 = AccountingManager_TypeInfo;
  if ( (BYTE3(AccountingManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AccountingManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
  }
  AccountingManager__ClearPayment((const MethodInfo *)v3);
}


void __fastcall AccountingManager__ClearPayment(const MethodInfo *method)
{
  __int64 v1; // x1
  AccountingManager_c *v2; // x0
  PaymentInfo_o *paymentInfo; // x0
  const MethodInfo *v4; // x0
  System_String_o *PaymentFileName; // x19

  if ( (byte_42ADF0F & 1) == 0 )
  {
    sub_B52984(&AccountingManager_TypeInfo);
    byte_42ADF0F = 1;
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
    sub_B52A5C(0LL, v1);
  PaymentInfo__Clear(paymentInfo, 0, 0LL);
  PaymentFileName = AccountingManager__GetPaymentFileName(v4);
  if ( System_IO_File__Exists(PaymentFileName, 0LL) )
    System_IO_File__Delete(PaymentFileName, 0LL);
}


void __fastcall AccountingManager__CreatePaymentHistoryDirectory(const MethodInfo *method)
{
  AccountingManager_c *v1; // x0
  System_String_o *PaymentHistoryPath; // x19

  if ( (byte_42ADF0D & 1) == 0 )
  {
    sub_B52984(&AccountingManager_TypeInfo);
    byte_42ADF0D = 1;
  }
  v1 = AccountingManager_TypeInfo;
  if ( (BYTE3(AccountingManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AccountingManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
  }
  PaymentHistoryPath = AccountingManager__GetPaymentHistoryPath((const MethodInfo *)v1);
  if ( !System_IO_Directory__Exists(PaymentHistoryPath, 0LL) )
    System_IO_Directory__CreateDirectory(PaymentHistoryPath, 0LL);
}


void __fastcall AccountingManager__DeletePayment(AccountingManager_o *this, const MethodInfo *method)
{
  ManagerConfig_c *v2; // x0
  AccountingManager_c *v3; // x0

  if ( (byte_42ADF14 & 1) == 0 )
  {
    sub_B52984(&AccountingManager_TypeInfo);
    sub_B52984(&ManagerConfig_TypeInfo);
    byte_42ADF14 = 1;
  }
  v2 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v2 = ManagerConfig_TypeInfo;
  }
  if ( !v2->static_fields->UseMock )
  {
    v3 = AccountingManager_TypeInfo;
    if ( (BYTE3(AccountingManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AccountingManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
    }
    AccountingManager__ClearPayment((const MethodInfo *)v3);
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
  AccountingManager_c *v3; // x0
  System_String_o *PaymentHistoryPath; // x0

  if ( (byte_42ADF0B & 1) == 0 )
  {
    sub_B52984(&AccountingManager_TypeInfo);
    sub_B52984(&StringLiteral_886/*"/"*/);
    byte_42ADF0B = 1;
  }
  v3 = AccountingManager_TypeInfo;
  if ( (BYTE3(AccountingManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AccountingManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
  }
  PaymentHistoryPath = AccountingManager__GetPaymentHistoryPath((const MethodInfo *)v3);
  return System_String__Concat_44570600(PaymentHistoryPath, (System_String_o *)StringLiteral_886/*"/"*/, name, 0LL);
}


System_String_o *__fastcall AccountingManager__GetHistoryFileName_21201956(int64_t time, const MethodInfo *method)
{
  AccountingManager_c *v3; // x0
  System_String_o *PaymentHistoryPath; // x20
  System_String_o *FileName_28055972; // x2

  if ( (byte_42ADF0C & 1) == 0 )
  {
    sub_B52984(&AccountingManager_TypeInfo);
    sub_B52984(&DatFileName_TypeInfo);
    sub_B52984(&StringLiteral_886/*"/"*/);
    byte_42ADF0C = 1;
  }
  v3 = AccountingManager_TypeInfo;
  if ( (BYTE3(AccountingManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AccountingManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
  }
  PaymentHistoryPath = AccountingManager__GetPaymentHistoryPath((const MethodInfo *)v3);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName_28055972 = DatFileName__getFileName_28055972(22, time, 0LL);
  return System_String__Concat_44570600(
           PaymentHistoryPath,
           (System_String_o *)StringLiteral_886/*"/"*/,
           FileName_28055972,
           0LL);
}


System_String_o *__fastcall AccountingManager__GetOldPaymentFileName(const MethodInfo *method)
{
  System_String_o *temporaryCachePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_42ADF08 & 1) == 0 )
  {
    sub_B52984(&DatFileName_TypeInfo);
    sub_B52984(&StringLiteral_886/*"/"*/);
    byte_42ADF08 = 1;
  }
  temporaryCachePath = UnityEngine_Application__get_temporaryCachePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(21, 0LL);
  return System_String__Concat_44570600(temporaryCachePath, (System_String_o *)StringLiteral_886/*"/"*/, FileName, 0LL);
}


System_String_o *__fastcall AccountingManager__GetPaymentFileName(const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_42ADF09 & 1) == 0 )
  {
    sub_B52984(&AndroidUtil_TypeInfo);
    sub_B52984(&DatFileName_TypeInfo);
    sub_B52984(&StringLiteral_886/*"/"*/);
    byte_42ADF09 = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(21, 0LL);
  return System_String__Concat_44570600(DatFileSavePath, (System_String_o *)StringLiteral_886/*"/"*/, FileName, 0LL);
}


System_String_array *__fastcall AccountingManager__GetPaymentHistoryList(
        AccountingManager_o *this,
        const MethodInfo *method)
{
  AccountingManager_c *v2; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x19
  const MethodInfo *v4; // x0
  System_String_o *PaymentHistoryPath; // x21
  System_IO_DirectoryInfo_o *v6; // x20
  System_String_o *Files; // x0
  __int64 v8; // x1
  int klass; // w8
  System_String_o *v10; // x20
  unsigned int v11; // w23
  System_String_c **v12; // x22
  System_IO_FileSystemInfo_o **v13; // x22
  System_IO_FileSystemInfo_o *v14; // t1
  System_String_o *v15; // x21
  System_String_o *v16; // x22
  __int64 v18; // x0
  uint16_t Chars; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42ADF11 & 1) == 0 )
  {
    sub_B52984(&AccountingManager_TypeInfo);
    sub_B52984(&System_IO_DirectoryInfo_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_string__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_string___ctor__);
    sub_B52984(&System_Collections_Generic_List_string__TypeInfo);
    sub_B52984(&StringLiteral_872/*".meta"*/);
    byte_42ADF11 = 1;
  }
  Chars = 0;
  v2 = AccountingManager_TypeInfo;
  if ( (BYTE3(AccountingManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AccountingManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
  }
  AccountingManager__CreatePaymentHistoryDirectory((const MethodInfo *)v2);
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_string___ctor__);
  PaymentHistoryPath = AccountingManager__GetPaymentHistoryPath(v4);
  v6 = (System_IO_DirectoryInfo_o *)sub_B52A54(System_IO_DirectoryInfo_TypeInfo);
  System_IO_DirectoryInfo___ctor(v6, PaymentHistoryPath, 0LL);
  if ( !v6 )
    goto LABEL_23;
  Files = (System_String_o *)System_IO_DirectoryInfo__GetFiles(v6, 0LL);
  if ( !Files )
    goto LABEL_23;
  klass = (int)Files[1].klass;
  v10 = Files;
  if ( klass >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= klass )
        goto LABEL_24;
      v12 = &v10->klass + (int)v11;
      v14 = (System_IO_FileSystemInfo_o *)v12[4];
      v13 = (System_IO_FileSystemInfo_o **)(v12 + 4);
      Files = (System_String_o *)v14;
      if ( !v14 )
        break;
      Files = (System_String_o *)((__int64 (__fastcall *)(System_String_o *, Il2CppMethodPointer))Files->klass->vtable._8_System_IConvertible_ToChar.method)(
                                   Files,
                                   Files->klass->vtable._9_System_IConvertible_ToSByte.methodPtr);
      if ( v11 >= LODWORD(v10[1].klass) )
      {
LABEL_24:
        v18 = sub_B52A88(Files);
        sub_B52A28(v18, 0LL);
      }
      v15 = Files;
      Files = (System_String_o *)*v13;
      if ( !*v13 )
        break;
      Files = System_IO_FileSystemInfo__get_Extension((System_IO_FileSystemInfo_o *)Files, 0LL);
      if ( !v15 )
        break;
      v16 = Files;
      Chars = System_String__get_Chars(v15, 0, 0LL);
      Files = (System_String_o *)System_Char__Equals_36847816((uint16_t)&Chars, 0x2Eu, 0LL);
      if ( ((unsigned __int8)Files & 1) == 0 )
      {
        if ( !v16 )
          break;
        Files = (System_String_o *)System_String__Equals_44555656(v16, (System_String_o *)StringLiteral_872/*".meta"*/, 0LL);
        if ( ((unsigned __int8)Files & 1) == 0 )
        {
          if ( !v3 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v3,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v15,
            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_string__Add__);
        }
      }
      klass = (int)v10[1].klass;
      if ( (int)++v11 >= klass )
        goto LABEL_21;
    }
LABEL_23:
    sub_B52A5C(Files, v8);
  }
LABEL_21:
  if ( !v3 )
    goto LABEL_23;
  return (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v3,
                                  (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_string__ToArray__);
}


System_String_o *__fastcall AccountingManager__GetPaymentHistoryPath(const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x19
  System_String_o *FolderName; // x2

  if ( (byte_42ADF0A & 1) == 0 )
  {
    sub_B52984(&AndroidUtil_TypeInfo);
    sub_B52984(&CacheFolderName_TypeInfo);
    sub_B52984(&StringLiteral_886/*"/"*/);
    byte_42ADF0A = 1;
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
  return System_String__Concat_44570600(DatFileSavePath, (System_String_o *)StringLiteral_886/*"/"*/, FolderName, 0LL);
}


void __fastcall AccountingManager__HistoryPayment(
        AccountingManager_o *this,
        System_String_o *state,
        const MethodInfo *method)
{
  ManagerConfig_c *v4; // x0
  AccountingManager_c *v5; // x0
  System_String_o *HistoryFileName_21201956; // x0
  const MethodInfo *v7; // x1
  struct PaymentInfo_o *paymentInfo; // x8

  if ( (byte_42ADF15 & 1) == 0 )
  {
    sub_B52984(&AccountingManager_TypeInfo);
    sub_B52984(&ManagerConfig_TypeInfo);
    byte_42ADF15 = 1;
  }
  v4 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v4 = ManagerConfig_TypeInfo;
  }
  if ( !v4->static_fields->UseMock )
  {
    v5 = AccountingManager_TypeInfo;
    if ( (BYTE3(AccountingManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AccountingManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
    }
    AccountingManager__CreatePaymentHistoryDirectory((const MethodInfo *)v5);
    paymentInfo = AccountingManager_TypeInfo->static_fields->paymentInfo;
    if ( !paymentInfo
      || (HistoryFileName_21201956 = AccountingManager__GetHistoryFileName_21201956(
                                       paymentInfo->fields._Time_k__BackingField,
                                       v7),
          !AccountingManager_TypeInfo->static_fields->paymentInfo) )
    {
      sub_B52A5C(HistoryFileName_21201956, v7);
    }
    PaymentInfo__WriteHistoryFile(
      AccountingManager_TypeInfo->static_fields->paymentInfo,
      HistoryFileName_21201956,
      state,
      0LL);
  }
}


bool __fastcall AccountingManager__IsLimitOver(AccountingManager_o *this, int32_t value, const MethodInfo *method)
{
  ManagerConfig_c *v4; // x0
  AgeVerificationMenu_c *v6; // x0
  int32_t Limit; // w0

  if ( (byte_42ADF16 & 1) == 0 )
  {
    sub_B52984(&AgeVerificationMenu_TypeInfo);
    sub_B52984(&ManagerConfig_TypeInfo);
    byte_42ADF16 = 1;
  }
  v4 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v4 = ManagerConfig_TypeInfo;
  }
  if ( v4->static_fields->UseMock )
    return 1;
  v6 = AgeVerificationMenu_TypeInfo;
  if ( (BYTE3(AgeVerificationMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
  }
  Limit = AgeVerificationMenu__GetLimit((const MethodInfo *)v6);
  return Limit >= 0 && Limit < value;
}


System_String_o *__fastcall AccountingManager__ReadHistory(System_String_o *name, const MethodInfo *method)
{
  AccountingManager_c *v3; // x0
  const MethodInfo *v4; // x1
  System_String_o *HistoryFileName; // x0
  System_IO_Stream_o *v6; // x20
  System_IO_BinaryReader_o *v7; // x19
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_o *v10; // x20
  __int64 v11; // x3
  System_String_o *v12; // x20
  System_IO_BinaryReader_c *klass; // x8
  unsigned __int64 v14; // x10
  int32_t *p_offset; // x11
  __int64 v16; // x0

  if ( (byte_42ADF10 & 1) == 0 )
  {
    sub_B52984(&AccountingManager_TypeInfo);
    sub_B52984(&System_IO_BinaryReader_TypeInfo);
    sub_B52984(&CatAndMouseGame_TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    byte_42ADF10 = 1;
  }
  v3 = AccountingManager_TypeInfo;
  if ( (BYTE3(AccountingManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AccountingManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
  }
  AccountingManager__CreatePaymentHistoryDirectory((const MethodInfo *)v3);
  HistoryFileName = AccountingManager__GetHistoryFileName(name, v4);
  v6 = (System_IO_Stream_o *)System_IO_File__OpenRead(HistoryFileName, 0LL);
  v7 = (System_IO_BinaryReader_o *)sub_B52A54(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v7, v6, 0LL);
  if ( !v7 )
    sub_B52A5C(v8, v9);
  v10 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v7->klass->vtable._22_ReadString.method)(
                             v7,
                             v7->klass->vtable._23_ReadChars.methodPtr);
  if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  }
  v12 = CatAndMouseGame__MouseGame1(v10, 0, 0LL);
  klass = v7->klass;
  if ( *(_WORD *)&v7->klass->_2.bitflags1 )
  {
    v14 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v14;
      p_offset += 4;
      if ( v14 >= *(unsigned __int16 *)&v7->klass->_2.bitflags1 )
        goto LABEL_14;
    }
    v16 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_14:
    v16 = sub_AEB880(v7, System_IDisposable_TypeInfo, 0LL, v11);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v16)(v7, *(_QWORD *)(v16 + 8));
  return v12;
}


bool __fastcall AccountingManager__ReadOldPayment(AccountingManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return AccountingManager__ReadPayment_21203804(this, 0, v2);
}


bool __fastcall AccountingManager__ReadPayment(AccountingManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return AccountingManager__ReadPayment_21203804(this, 1, v2);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AccountingManager__ReadPayment_21203804(
        AccountingManager_o *this,
        bool isNewFormat,
        const MethodInfo *method)
{
  ManagerConfig_c *v4; // x0
  AccountingManager_c *v5; // x0
  System_String_o *PaymentFileName; // x0
  System_String_o *v7; // x20
  AccountingManager_c *v8; // x0
  PaymentInfo_o *paymentInfo; // x0
  AccountingManager_c *v11; // x0

  if ( (byte_42ADF12 & 1) == 0 )
  {
    sub_B52984(&AccountingManager_TypeInfo);
    sub_B52984(&ManagerConfig_TypeInfo);
    byte_42ADF12 = 1;
  }
  v4 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v4 = ManagerConfig_TypeInfo;
  }
  if ( !v4->static_fields->UseMock )
  {
    v5 = AccountingManager_TypeInfo;
    if ( isNewFormat )
    {
      if ( (WORD1(AccountingManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !AccountingManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
      }
      PaymentFileName = AccountingManager__GetPaymentFileName((const MethodInfo *)v5);
    }
    else
    {
      if ( (WORD1(AccountingManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !AccountingManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
      }
      PaymentFileName = AccountingManager__GetOldPaymentFileName((const MethodInfo *)v5);
    }
    v7 = PaymentFileName;
    v8 = AccountingManager_TypeInfo;
    if ( (BYTE3(AccountingManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AccountingManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
      v8 = AccountingManager_TypeInfo;
    }
    paymentInfo = v8->static_fields->paymentInfo;
    if ( !paymentInfo )
LABEL_27:
      sub_B52A5C(paymentInfo, isNewFormat);
    if ( PaymentInfo__ReadFile(paymentInfo, v7, isNewFormat, 0LL) )
      return 1;
  }
  v11 = AccountingManager_TypeInfo;
  if ( (BYTE3(AccountingManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AccountingManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
    v11 = AccountingManager_TypeInfo;
  }
  paymentInfo = v11->static_fields->paymentInfo;
  if ( !paymentInfo )
    goto LABEL_27;
  PaymentInfo__Clear(paymentInfo, 1, 0LL);
  return 0;
}


void __fastcall AccountingManager__WritePayment(AccountingManager_o *this, const MethodInfo *method)
{
  ManagerConfig_c *v2; // x0
  int64_t IsNullOrEmpty; // x0
  __int64 v4; // x8
  AccountingManager_c *v5; // x8
  struct PaymentInfo_o *paymentInfo; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_Int32_array **v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Int32_array **v20; // x1
  AgeVerificationMenu_c *v21; // x0
  struct PaymentInfo_o *v22; // x21
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Int32_array **v29; // x1
  PaymentInfo_o *v30; // x8

  if ( (byte_42ADF13 & 1) == 0 )
  {
    sub_B52984(&AccountingManager_TypeInfo);
    sub_B52984(&AgeVerificationMenu_TypeInfo);
    sub_B52984(&ManagerConfig_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42ADF13 = 1;
  }
  v2 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v2 = ManagerConfig_TypeInfo;
  }
  if ( !v2->static_fields->UseMock )
  {
    IsNullOrEmpty = (int64_t)AccountingManager_TypeInfo;
    if ( (BYTE3(AccountingManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AccountingManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
      IsNullOrEmpty = (int64_t)AccountingManager_TypeInfo;
    }
    v4 = *(_QWORD *)(*(_QWORD *)(IsNullOrEmpty + 184) + 16LL);
    if ( v4 )
    {
      IsNullOrEmpty = System_String__IsNullOrEmpty(*(System_String_o **)(v4 + 16), 0LL);
      v5 = AccountingManager_TypeInfo;
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
        v5 = AccountingManager_TypeInfo;
      }
      paymentInfo = v5->static_fields->paymentInfo;
      if ( paymentInfo )
      {
        if ( !paymentInfo->fields._Time_k__BackingField )
        {
          if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v5);
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
          v13 = (System_Int32_array **)StringLiteral_1/*""*/;
          *(_QWORD *)(IsNullOrEmpty + 48) = StringLiteral_1/*""*/;
          sub_B52920((BattleServantConfConponent_o *)(IsNullOrEmpty + 48), v13, v7, v8, v9, v10, v11, v12);
          IsNullOrEmpty = (int64_t)AccountingManager_TypeInfo->static_fields->paymentInfo;
          if ( !IsNullOrEmpty )
            goto LABEL_41;
          v20 = (System_Int32_array **)StringLiteral_1/*""*/;
          *(_QWORD *)(IsNullOrEmpty + 40) = StringLiteral_1/*""*/;
          sub_B52920((BattleServantConfConponent_o *)(IsNullOrEmpty + 40), v20, v14, v15, v16, v17, v18, v19);
          v21 = AgeVerificationMenu_TypeInfo;
          v22 = AccountingManager_TypeInfo->static_fields->paymentInfo;
          if ( (BYTE3(AgeVerificationMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
          }
          IsNullOrEmpty = AgeVerificationMenu__GetCumulativeAmount((const MethodInfo *)v21);
          if ( !v22 )
            goto LABEL_41;
          v22->fields._CumulativeAmount_k__BackingField = IsNullOrEmpty;
          IsNullOrEmpty = (int64_t)AccountingManager_TypeInfo->static_fields->paymentInfo;
          if ( !IsNullOrEmpty )
            goto LABEL_41;
          v29 = (System_Int32_array **)StringLiteral_1/*""*/;
          *(_QWORD *)(IsNullOrEmpty + 64) = StringLiteral_1/*""*/;
          sub_B52920((BattleServantConfConponent_o *)(IsNullOrEmpty + 64), v29, v23, v24, v25, v26, v27, v28);
          v5 = AccountingManager_TypeInfo;
        }
        if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v5);
        IsNullOrEmpty = (int64_t)AccountingManager__GetPaymentFileName((const MethodInfo *)IsNullOrEmpty);
        v30 = AccountingManager_TypeInfo->static_fields->paymentInfo;
        if ( v30 )
        {
          PaymentInfo__WriteFile(v30, (System_String_o *)IsNullOrEmpty, 0LL);
          return;
        }
      }
    }
LABEL_41:
    sub_B52A5C(IsNullOrEmpty, method);
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
  sub_B52920(
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
  __int64 v10[3]; // [xsp+0h] [xbp-40h] BYREF
  int32_t v11; // [xsp+18h] [xbp-28h] BYREF
  int32_t v12; // [xsp+1Ch] [xbp-24h] BYREF

  v11 = perMonthAmount;
  v12 = result;
  if ( (byte_42AEBEA & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&AccountingManager_Result_TypeInfo);
    byte_42AEBEA = 1;
  }
  v10[2] = 0LL;
  v10[0] = j_il2cpp_value_box_0(AccountingManager_Result_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(int_TypeInfo, &v11);
  return (System_IAsyncResult_o *)sub_B52928(this, v10, callback, object);
}


void __fastcall AccountingManager_ResultCallbackfunc__EndInvoke(
        AccountingManager_ResultCallbackfunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5292C(result, 0LL, method);
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
        sub_B52A40(*(_QWORD *)&v21->fields.extra_arg, *(_QWORD *)&result, *(_QWORD *)&perMonthAmount, method);
      if ( (sub_B529B4(v23) & 1) == 0 )
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
      v25 = sub_B529AC(v23);
      v26 = sub_B52DB0(v23);
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
            v19 = sub_AEB880(v22, v30, v31, v27);
          }
          v18 = *(_QWORD *)(v19 + 8);
        }
        else
        {
          v18 = *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320);
        }
        v20 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B52A34(v18, v23);
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
            v17 = sub_AEB880(v22, class_0, v10, v12);
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