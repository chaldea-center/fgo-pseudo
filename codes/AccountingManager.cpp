void __fastcall AccountingManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  PaymentInfo_o *v3; // x19
  struct AccountingManager_StaticFields *static_fields; // x0

  if ( (byte_41859C8 & 1) == 0 )
  {
    sub_B2C35C(&AccountingManager_TypeInfo, v1);
    sub_B2C35C(&PaymentInfo_TypeInfo, v2);
    byte_41859C8 = 1;
  }
  AccountingManager_TypeInfo->static_fields->isEnableStore = 0;
  AccountingManager_TypeInfo->static_fields->isMoveStore = 0;
  AccountingManager_TypeInfo->static_fields->isRecoverStore = 1;
  AccountingManager_TypeInfo->static_fields->initializeResult = 0;
  AccountingManager_TypeInfo->static_fields->initializeStartTime = 0LL;
  v3 = (PaymentInfo_o *)sub_B2C42C(PaymentInfo_TypeInfo);
  PaymentInfo___ctor(v3, 0LL);
  static_fields = AccountingManager_TypeInfo->static_fields;
  static_fields->paymentInfo = v3;
  sub_B2C2F8(&static_fields->paymentInfo, v3);
}


void __fastcall AccountingManager___ctor(AccountingManager_o *this, const MethodInfo *method)
{
  if ( (byte_41859C7 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_AccountingManager___ctor__, method);
    byte_41859C7 = 1;
  }
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_28419D4 *)Method_SingletonMonoBehaviour_AccountingManager___ctor__);
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
  __int64 v12; // x1
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // kr00_16
  WebViewManager_o *Instance; // x0
  __int64 v15; // x1
  CrashReporter_o *v16; // x20
  System_String_o *v17; // x0
  __int64 v18; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v19; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_41859C6 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__, value);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__, v6);
    sub_B2C35C(&JsonManager_TypeInfo, v7);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v10);
    byte_41859C6 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  if ( !System_String__IsNullOrEmpty(value, 0LL) )
  {
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    Dictionary = JsonManager__getDictionary(value, 0LL);
    if ( !Dictionary )
      sub_B2C434(0LL, v12);
    System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
      &v19,
      (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)Dictionary,
      (const MethodInfo_2DB229C *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    while ( System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
              (System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o *)&v19,
              (const MethodInfo_278B9EC *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
    {
      current = v19.fields.current;
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
      if ( !current.fields.value )
        sub_B2C434(Instance, v15);
      v16 = (CrashReporter_o *)Instance;
      v17 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))current.fields.value->klass->vtable[3].method)(
                                 current.fields.value,
                                 current.fields.value->klass->vtable[4].methodPtr);
      if ( !v16 )
        sub_B2C434(v17, v18);
      CrashReporter__AddCustomKey(v16, (System_String_o *)current.fields.key, v17, 0LL);
    }
    System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
      (System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o *)&v19,
      (const MethodInfo_278BB54 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
  }
}


void __fastcall AccountingManager__AddExtraDataProductID(AccountingManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  AccountingManager_c *v3; // x0
  struct PaymentInfo_o *paymentInfo; // x8
  System_String_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_41859C5 & 1) == 0 )
  {
    sub_B2C35C(&AccountingManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_23681/*"{{\"ProductId\":\"{0}\"}}"*/, v2);
    byte_41859C5 = 1;
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
    sub_B2C434(v3, method);
  v5 = System_String__Format(
         (System_String_o *)StringLiteral_23681/*"{{\"ProductId\":\"{0}\"}}"*/,
         (Il2CppObject *)paymentInfo->fields._ProductId_k__BackingField,
         0LL);
  AccountingManager__AddExtraData((AccountingManager_o *)v5, v5, v6);
}


bool __fastcall AccountingManager__CallbackResult(
        AccountingManager_o *this,
        int32_t result,
        int32_t perMonthAmount,
        const MethodInfo *method)
{
  struct AccountingManager_ResultCallbackfunc_o **p_callbackFunc; // x0
  AccountingManager_ResultCallbackfunc_o *v5; // x21
  struct AccountingManager_ResultCallbackfunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v5 = callbackFunc;
  if ( !callbackFunc )
    return 0;
  *p_callbackFunc = 0LL;
  sub_B2C2F8(p_callbackFunc, 0LL);
  AccountingManager_ResultCallbackfunc__Invoke(v5, result, perMonthAmount, 0LL);
  return 1;
}


void __fastcall AccountingManager__ClearAll(const MethodInfo *method)
{
  __int64 v1; // x1
  AccountingManager_c *v2; // x0
  System_String_o *PaymentHistoryPath; // x19
  AccountingManager_c *v4; // x0

  if ( (byte_41859BC & 1) == 0 )
  {
    sub_B2C35C(&AccountingManager_TypeInfo, v1);
    byte_41859BC = 1;
  }
  v2 = AccountingManager_TypeInfo;
  if ( (BYTE3(AccountingManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AccountingManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
  }
  PaymentHistoryPath = AccountingManager__GetPaymentHistoryPath((const MethodInfo *)v2);
  if ( System_IO_Directory__Exists(PaymentHistoryPath, 0LL) )
    System_IO_Directory__Delete_44244828(PaymentHistoryPath, 1, 0LL);
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

  if ( (byte_41859BD & 1) == 0 )
  {
    sub_B2C35C(&AccountingManager_TypeInfo, v1);
    byte_41859BD = 1;
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
    sub_B2C434(0LL, v1);
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

  if ( (byte_41859BB & 1) == 0 )
  {
    sub_B2C35C(&AccountingManager_TypeInfo, v1);
    byte_41859BB = 1;
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

  if ( (byte_41859C2 & 1) == 0 )
  {
    sub_B2C35C(&AccountingManager_TypeInfo, method);
    sub_B2C35C(&ManagerConfig_TypeInfo, v2);
    byte_41859C2 = 1;
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

  if ( (byte_41859B9 & 1) == 0 )
  {
    sub_B2C35C(&AccountingManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_872/*"/"*/, v3);
    byte_41859B9 = 1;
  }
  v4 = AccountingManager_TypeInfo;
  if ( (BYTE3(AccountingManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AccountingManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
  }
  PaymentHistoryPath = AccountingManager__GetPaymentHistoryPath((const MethodInfo *)v4);
  return System_String__Concat_44307816(PaymentHistoryPath, (System_String_o *)StringLiteral_872/*"/"*/, name, 0LL);
}


System_String_o *__fastcall AccountingManager__GetHistoryFileName_21111684(int64_t time, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  AccountingManager_c *v5; // x0
  System_String_o *PaymentHistoryPath; // x20
  System_String_o *FileName_27462036; // x2

  if ( (byte_41859BA & 1) == 0 )
  {
    sub_B2C35C(&AccountingManager_TypeInfo, method);
    sub_B2C35C(&DatFileName_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_872/*"/"*/, v4);
    byte_41859BA = 1;
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
  FileName_27462036 = DatFileName__getFileName_27462036(22, time, 0LL);
  return System_String__Concat_44307816(
           PaymentHistoryPath,
           (System_String_o *)StringLiteral_872/*"/"*/,
           FileName_27462036,
           0LL);
}


System_String_o *__fastcall AccountingManager__GetOldPaymentFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  System_String_o *temporaryCachePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_41859B6 & 1) == 0 )
  {
    sub_B2C35C(&DatFileName_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_872/*"/"*/, v2);
    byte_41859B6 = 1;
  }
  temporaryCachePath = UnityEngine_Application__get_temporaryCachePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(21, 0LL);
  return System_String__Concat_44307816(temporaryCachePath, (System_String_o *)StringLiteral_872/*"/"*/, FileName, 0LL);
}


System_String_o *__fastcall AccountingManager__GetPaymentFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_41859B7 & 1) == 0 )
  {
    sub_B2C35C(&AndroidUtil_TypeInfo, v1);
    sub_B2C35C(&DatFileName_TypeInfo, v2);
    sub_B2C35C(&StringLiteral_872/*"/"*/, v3);
    byte_41859B7 = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(21, 0LL);
  return System_String__Concat_44307816(DatFileSavePath, (System_String_o *)StringLiteral_872/*"/"*/, FileName, 0LL);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x19
  const MethodInfo *v10; // x0
  System_String_o *PaymentHistoryPath; // x21
  System_IO_DirectoryInfo_o *v12; // x20
  System_String_o *Files; // x0
  __int64 v14; // x1
  int klass; // w8
  System_String_o *v16; // x20
  unsigned int v17; // w23
  System_String_c **v18; // x22
  System_IO_FileSystemInfo_o **v19; // x22
  System_IO_FileSystemInfo_o *v20; // t1
  System_String_o *v21; // x21
  System_String_o *v22; // x22
  __int64 v24; // x0
  uint16_t Chars; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_41859BF & 1) == 0 )
  {
    sub_B2C35C(&AccountingManager_TypeInfo, method);
    sub_B2C35C(&System_IO_DirectoryInfo_TypeInfo, v2);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Add__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__ToArray__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_string___ctor___67320968, v5);
    sub_B2C35C(&System_Collections_Generic_List_string__TypeInfo, v6);
    sub_B2C35C(&StringLiteral_858/*".meta"*/, v7);
    byte_41859BF = 1;
  }
  Chars = 0;
  v8 = AccountingManager_TypeInfo;
  if ( (BYTE3(AccountingManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AccountingManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
  }
  AccountingManager__CreatePaymentHistoryDirectory((const MethodInfo *)v8);
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_string___ctor___67320968);
  PaymentHistoryPath = AccountingManager__GetPaymentHistoryPath(v10);
  v12 = (System_IO_DirectoryInfo_o *)sub_B2C42C(System_IO_DirectoryInfo_TypeInfo);
  System_IO_DirectoryInfo___ctor(v12, PaymentHistoryPath, 0LL);
  if ( !v12 )
    goto LABEL_23;
  Files = (System_String_o *)System_IO_DirectoryInfo__GetFiles(v12, 0LL);
  if ( !Files )
    goto LABEL_23;
  klass = (int)Files[1].klass;
  v16 = Files;
  if ( klass >= 1 )
  {
    v17 = 0;
    while ( 1 )
    {
      if ( v17 >= klass )
        goto LABEL_24;
      v18 = &v16->klass + (int)v17;
      v20 = (System_IO_FileSystemInfo_o *)v18[4];
      v19 = (System_IO_FileSystemInfo_o **)(v18 + 4);
      Files = (System_String_o *)v20;
      if ( !v20 )
        break;
      Files = (System_String_o *)((__int64 (__fastcall *)(System_String_o *, Il2CppMethodPointer))Files->klass->vtable._8_System_IConvertible_ToChar.method)(
                                   Files,
                                   Files->klass->vtable._9_System_IConvertible_ToSByte.methodPtr);
      if ( v17 >= LODWORD(v16[1].klass) )
      {
LABEL_24:
        v24 = sub_B2C460(Files);
        sub_B2C400(v24, 0LL);
      }
      v21 = Files;
      Files = (System_String_o *)*v19;
      if ( !*v19 )
        break;
      Files = System_IO_FileSystemInfo__get_Extension((System_IO_FileSystemInfo_o *)Files, 0LL);
      if ( !v21 )
        break;
      v22 = Files;
      Chars = System_String__get_Chars(v21, 0, 0LL);
      Files = (System_String_o *)System_Char__Equals_36400492((uint16_t)&Chars, 0x2Eu, 0LL);
      if ( ((unsigned __int8)Files & 1) == 0 )
      {
        if ( !v22 )
          break;
        Files = (System_String_o *)System_String__Equals_44292872(v22, (System_String_o *)StringLiteral_858/*".meta"*/, 0LL);
        if ( ((unsigned __int8)Files & 1) == 0 )
        {
          if ( !v9 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v9,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v21,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
        }
      }
      klass = (int)v16[1].klass;
      if ( (int)++v17 >= klass )
        goto LABEL_21;
    }
LABEL_23:
    sub_B2C434(Files, v14);
  }
LABEL_21:
  if ( !v9 )
    goto LABEL_23;
  return (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v9,
                                  (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_string__ToArray__);
}


System_String_o *__fastcall AccountingManager__GetPaymentHistoryPath(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FolderName; // x2

  if ( (byte_41859B8 & 1) == 0 )
  {
    sub_B2C35C(&AndroidUtil_TypeInfo, v1);
    sub_B2C35C(&CacheFolderName_TypeInfo, v2);
    sub_B2C35C(&StringLiteral_872/*"/"*/, v3);
    byte_41859B8 = 1;
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
  return System_String__Concat_44307816(DatFileSavePath, (System_String_o *)StringLiteral_872/*"/"*/, FolderName, 0LL);
}


void __fastcall AccountingManager__HistoryPayment(
        AccountingManager_o *this,
        System_String_o *state,
        const MethodInfo *method)
{
  __int64 v4; // x1
  ManagerConfig_c *v5; // x0
  AccountingManager_c *v6; // x0
  System_String_o *HistoryFileName_21111684; // x0
  const MethodInfo *v8; // x1
  struct PaymentInfo_o *paymentInfo; // x8

  if ( (byte_41859C3 & 1) == 0 )
  {
    sub_B2C35C(&AccountingManager_TypeInfo, state);
    sub_B2C35C(&ManagerConfig_TypeInfo, v4);
    byte_41859C3 = 1;
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
      || (HistoryFileName_21111684 = AccountingManager__GetHistoryFileName_21111684(
                                       paymentInfo->fields._Time_k__BackingField,
                                       v8),
          !AccountingManager_TypeInfo->static_fields->paymentInfo) )
    {
      sub_B2C434(HistoryFileName_21111684, v8);
    }
    PaymentInfo__WriteHistoryFile(
      AccountingManager_TypeInfo->static_fields->paymentInfo,
      HistoryFileName_21111684,
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

  if ( (byte_41859C4 & 1) == 0 )
  {
    sub_B2C35C(&AgeVerificationMenu_TypeInfo, *(_QWORD *)&value);
    sub_B2C35C(&ManagerConfig_TypeInfo, v4);
    byte_41859C4 = 1;
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
  System_IO_BinaryReader_o *v10; // x19
  __int64 v11; // x0
  __int64 v12; // x1
  System_String_o *v13; // x20
  __int64 v14; // x3
  System_String_o *v15; // x20
  System_IO_BinaryReader_c *klass; // x8
  unsigned __int64 v17; // x10
  int32_t *p_offset; // x11
  __int64 v19; // x0

  if ( (byte_41859BE & 1) == 0 )
  {
    sub_B2C35C(&AccountingManager_TypeInfo, method);
    sub_B2C35C(&System_IO_BinaryReader_TypeInfo, v3);
    sub_B2C35C(&CatAndMouseGame_TypeInfo, v4);
    sub_B2C35C(&System_IDisposable_TypeInfo, v5);
    byte_41859BE = 1;
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
  v10 = (System_IO_BinaryReader_o *)sub_B2C42C(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v10, v9, 0LL);
  if ( !v10 )
    sub_B2C434(v11, v12);
  v13 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v10->klass->vtable._22_ReadString.method)(
                             v10,
                             v10->klass->vtable._23_ReadChars.methodPtr);
  if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  }
  v15 = CatAndMouseGame__MouseGame1(v13, 0, 0LL);
  klass = v10->klass;
  if ( *(_WORD *)&v10->klass->_2.bitflags1 )
  {
    v17 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v17;
      p_offset += 4;
      if ( v17 >= *(unsigned __int16 *)&v10->klass->_2.bitflags1 )
        goto LABEL_14;
    }
    v19 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_14:
    v19 = sub_AC5258(v10, System_IDisposable_TypeInfo, 0LL, v14);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v19)(v10, *(_QWORD *)(v19 + 8));
  return v15;
}


bool __fastcall AccountingManager__ReadOldPayment(AccountingManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return AccountingManager__ReadPayment_21113532(this, 0, v2);
}


bool __fastcall AccountingManager__ReadPayment(AccountingManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return AccountingManager__ReadPayment_21113532(this, 1, v2);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AccountingManager__ReadPayment_21113532(
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

  if ( (byte_41859C0 & 1) == 0 )
  {
    sub_B2C35C(&AccountingManager_TypeInfo, isNewFormat);
    sub_B2C35C(&ManagerConfig_TypeInfo, v4);
    byte_41859C0 = 1;
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
      sub_B2C434(paymentInfo, isNewFormat);
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
  void *v11; // x1
  void *v12; // x1
  AgeVerificationMenu_c *v13; // x0
  struct PaymentInfo_o *v14; // x21
  void *v15; // x1
  PaymentInfo_o *v16; // x8

  if ( (byte_41859C1 & 1) == 0 )
  {
    sub_B2C35C(&AccountingManager_TypeInfo, method);
    sub_B2C35C(&AgeVerificationMenu_TypeInfo, v2);
    sub_B2C35C(&ManagerConfig_TypeInfo, v3);
    sub_B2C35C(&NetworkManager_TypeInfo, v4);
    sub_B2C35C(&StringLiteral_1/*""*/, v5);
    byte_41859C1 = 1;
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
          v11 = StringLiteral_1/*""*/;
          *(_QWORD *)(IsNullOrEmpty + 48) = StringLiteral_1/*""*/;
          sub_B2C2F8(IsNullOrEmpty + 48, v11);
          IsNullOrEmpty = (int64_t)AccountingManager_TypeInfo->static_fields->paymentInfo;
          if ( !IsNullOrEmpty )
            goto LABEL_41;
          v12 = StringLiteral_1/*""*/;
          *(_QWORD *)(IsNullOrEmpty + 40) = StringLiteral_1/*""*/;
          sub_B2C2F8(IsNullOrEmpty + 40, v12);
          v13 = AgeVerificationMenu_TypeInfo;
          v14 = AccountingManager_TypeInfo->static_fields->paymentInfo;
          if ( (BYTE3(AgeVerificationMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
          }
          IsNullOrEmpty = AgeVerificationMenu__GetCumulativeAmount((const MethodInfo *)v13);
          if ( !v14 )
            goto LABEL_41;
          v14->fields._CumulativeAmount_k__BackingField = IsNullOrEmpty;
          IsNullOrEmpty = (int64_t)AccountingManager_TypeInfo->static_fields->paymentInfo;
          if ( !IsNullOrEmpty )
            goto LABEL_41;
          v15 = StringLiteral_1/*""*/;
          *(_QWORD *)(IsNullOrEmpty + 64) = StringLiteral_1/*""*/;
          sub_B2C2F8(IsNullOrEmpty + 64, v15);
          v9 = AccountingManager_TypeInfo;
        }
        if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v9);
        IsNullOrEmpty = (int64_t)AccountingManager__GetPaymentFileName((const MethodInfo *)IsNullOrEmpty);
        v16 = AccountingManager_TypeInfo->static_fields->paymentInfo;
        if ( v16 )
        {
          PaymentInfo__WriteFile(v16, (System_String_o *)IsNullOrEmpty, 0LL);
          return;
        }
      }
    }
LABEL_41:
    sub_B2C434(IsNullOrEmpty, method);
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
  sub_B2C2F8(
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
  if ( (byte_4186B96 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, *(_QWORD *)&result);
    sub_B2C35C(&AccountingManager_Result_TypeInfo, v9);
    byte_4186B96 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(AccountingManager_Result_TypeInfo, &v13);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_B2C300(this, v11, callback, object);
}


void __fastcall AccountingManager_ResultCallbackfunc__EndInvoke(
        AccountingManager_ResultCallbackfunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
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
        sub_B2C418(*(_QWORD *)&v21->fields.extra_arg, *(_QWORD *)&result, *(_QWORD *)&perMonthAmount, method);
      if ( (sub_B2C38C(v23) & 1) == 0 )
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
      v25 = sub_B2C384(v23);
      v26 = sub_B2C788(v23);
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
            v19 = sub_AC5258(v22, v30, v31, v27);
          }
          v18 = *(_QWORD *)(v19 + 8);
        }
        else
        {
          v18 = *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320);
        }
        v20 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B2C40C(v18, v23);
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
            v17 = sub_AC5258(v22, class_0, v10, v12);
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