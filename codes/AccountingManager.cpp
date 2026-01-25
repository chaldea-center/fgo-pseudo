void AccountingManager___cctor(const MethodInfo *method)
{
  struct AccountingManager_StaticFields *static_fields; // x8
  PaymentInfo_o *v2; // x19
  const MethodInfo *v3; // x1
  struct AccountingManager_StaticFields *v4; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  if ( (byte_4CEDF72 & 1) == 0 )
  {
    sub_1C7BAE8(&AccountingManager_TypeInfo);
    sub_1C7BAE8(&PaymentInfo_TypeInfo);
    byte_4CEDF72 = 1;
  }
  static_fields = AccountingManager_TypeInfo->static_fields;
  *(_WORD *)&static_fields->isEnableStore = 0;
  static_fields->isRecoverStore = 1;
  static_fields->initializeResult = 0;
  static_fields->initializeStartTime = 0;
  v2 = (PaymentInfo_o *)sub_1C7BD34(PaymentInfo_TypeInfo);
  PaymentInfo___ctor(v2, v3);
  v4 = AccountingManager_TypeInfo->static_fields;
  v4->paymentInfo = v2;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v4->paymentInfo, (int32_t)v2, v5, v6, v7, v8, v9, v10);
}


void AccountingManager___ctor(AccountingManager_o *this, const MethodInfo *method)
{
  if ( (byte_4CEDF71 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_AccountingManager___ctor__);
    byte_4CEDF71 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_3A8CA90 *)Method_SingletonMonoBehaviour_AccountingManager___ctor__);
}


void AccountingManager__AddExtraData(AccountingManager_o *this, System_String_o *value, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__object__o *Dictionary; // x0
  __int64 v5; // x1
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // kr00_16
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  CrashReporter_o *v9; // x20
  System_String_o *v10; // x0
  __int64 v11; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v12; // [xsp+0h] [xbp-60h] BYREF

  if ( (byte_4CEDF70 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__);
    sub_1C7BAE8(&JsonManager_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__);
    sub_1C7BAE8(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    byte_4CEDF70 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  if ( !System_String__IsNullOrEmpty(value, 0) )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    Dictionary = JsonManager__getDictionary(value, 0);
    if ( !Dictionary )
      sub_1C7BD40(0, v5);
    System_Collections_Generic_Dictionary_object__object___GetEnumerator(
      &v12,
      (System_Collections_Generic_Dictionary_object__object__o *)Dictionary,
      (const MethodInfo_34F28BC *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
              &v12,
              (const MethodInfo_35F10F0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
    {
      current = v12.fields._current;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
      if ( !current.fields.value )
        sub_1C7BD40(Instance, v8);
      v9 = (CrashReporter_o *)Instance;
      v10 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))current.fields.value->klass->vtable[3].methodPtr)(
                                 current.fields.value,
                                 current.fields.value->klass->vtable[3].method);
      if ( !v9 )
        sub_1C7BD40(v10, v11);
      CrashReporter__AddCustomKey(v9, (System_String_o *)current.fields.key, v10, 0);
    }
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
      &v12,
      (const MethodInfo_35F1210 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
  }
}


void AccountingManager__AddExtraDataProductID(AccountingManager_o *this, const MethodInfo *method)
{
  AccountingManager_c *v2; // x0
  struct PaymentInfo_o *paymentInfo; // x8
  AccountingManager_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4CEDF6F & 1) == 0 )
  {
    sub_1C7BAE8(&AccountingManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_25498/*"{{\"ProductId\":\"{0}\"}}"*/);
    byte_4CEDF6F = 1;
  }
  v2 = AccountingManager_TypeInfo;
  if ( !AccountingManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
    v2 = AccountingManager_TypeInfo;
  }
  paymentInfo = v2->static_fields->paymentInfo;
  if ( !paymentInfo )
    sub_1C7BD40(v2, method);
  v4 = (AccountingManager_o *)System_String__Format(
                                (System_String_o *)StringLiteral_25498/*"{{\"ProductId\":\"{0}\"}}"*/,
                                (Il2CppObject *)paymentInfo->fields._ProductId_k__BackingField,
                                0);
  AccountingManager__AddExtraData(v4, (System_String_o *)v4, v5);
}


bool AccountingManager__CallbackResult(
        AccountingManager_o *this,
        int32_t result,
        int32_t perMonthAmount,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_callbackFunc; // x0
  struct AccountingManager_ResultCallbackfunc_o *v9; // x21
  struct AccountingManager_ResultCallbackfunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1C7BA8C(p_callbackFunc, 0, perMonthAmount, (int32_t)method, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, _QWORD, _QWORD, intptr_t))v9->fields.invoke_impl)(
      v9->fields.method_code,
      (unsigned int)result,
      (unsigned int)perMonthAmount,
      v9->fields.method);
  }
  return v9 != 0;
}


void AccountingManager__ClearAll(const MethodInfo *method)
{
  AccountingManager_c *v1; // x0
  System_String_o *PaymentHistoryPath; // x19
  AccountingManager_c *v3; // x0

  if ( (byte_4CEDF66 & 1) == 0 )
  {
    sub_1C7BAE8(&AccountingManager_TypeInfo);
    byte_4CEDF66 = 1;
  }
  v1 = AccountingManager_TypeInfo;
  if ( !AccountingManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
  PaymentHistoryPath = AccountingManager__GetPaymentHistoryPath((const MethodInfo *)v1);
  if ( System_IO_Directory__Exists(PaymentHistoryPath, 0) )
    System_IO_Directory__Delete(PaymentHistoryPath, 1, 0);
  v3 = AccountingManager_TypeInfo;
  if ( !AccountingManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
  AccountingManager__ClearPayment((const MethodInfo *)v3);
}


void AccountingManager__ClearPayment(const MethodInfo *method)
{
  __int64 v1; // x1
  const MethodInfo *v2; // x2
  AccountingManager_c *v3; // x0
  PaymentInfo_o *paymentInfo; // x0
  const MethodInfo *v5; // x0
  System_String_o *PaymentFileName; // x19

  if ( (byte_4CEDF67 & 1) == 0 )
  {
    sub_1C7BAE8(&AccountingManager_TypeInfo);
    byte_4CEDF67 = 1;
  }
  v3 = AccountingManager_TypeInfo;
  if ( !AccountingManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
    v3 = AccountingManager_TypeInfo;
  }
  paymentInfo = v3->static_fields->paymentInfo;
  if ( !paymentInfo )
    sub_1C7BD40(0, v1);
  PaymentInfo__Clear(paymentInfo, 0, v2);
  PaymentFileName = AccountingManager__GetPaymentFileName(v5);
  if ( System_IO_File__Exists(PaymentFileName, 0) )
    System_IO_File__Delete(PaymentFileName, 0);
}


void AccountingManager__CreatePaymentHistoryDirectory(const MethodInfo *method)
{
  AccountingManager_c *v1; // x0
  System_String_o *PaymentHistoryPath; // x19

  if ( (byte_4CEDF65 & 1) == 0 )
  {
    sub_1C7BAE8(&AccountingManager_TypeInfo);
    byte_4CEDF65 = 1;
  }
  v1 = AccountingManager_TypeInfo;
  if ( !AccountingManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
  PaymentHistoryPath = AccountingManager__GetPaymentHistoryPath((const MethodInfo *)v1);
  if ( !System_IO_Directory__Exists(PaymentHistoryPath, 0) )
    System_IO_Directory__CreateDirectory(PaymentHistoryPath, 0);
}


void AccountingManager__DeletePayment(AccountingManager_o *this, const MethodInfo *method)
{
  ManagerConfig_c *v2; // x0
  AccountingManager_c *v3; // x0

  if ( (byte_4CEDF6C & 1) == 0 )
  {
    sub_1C7BAE8(&AccountingManager_TypeInfo);
    sub_1C7BAE8(&ManagerConfig_TypeInfo);
    byte_4CEDF6C = 1;
  }
  v2 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v2 = ManagerConfig_TypeInfo;
  }
  if ( !v2->static_fields->UseMock )
  {
    v3 = AccountingManager_TypeInfo;
    if ( !AccountingManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
    AccountingManager__ClearPayment((const MethodInfo *)v3);
  }
}


// local variable allocation has failed, the output may be wrong!
void AccountingManager__EndBankStatusFailIsLimitOver(
        AccountingManager_o *this,
        int32_t perMonthAmount,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x3

  AccountingManager__DeletePayment(this, *(const MethodInfo **)&perMonthAmount);
  AccountingManager__CallbackResult(this, 8, perMonthAmount, v5);
}


System_String_o *AccountingManager__GetHistoryFileName(System_String_o *name, const MethodInfo *method)
{
  AccountingManager_c *v3; // x0
  System_String_o *PaymentHistoryPath; // x0

  if ( (byte_4CEDF63 & 1) == 0 )
  {
    sub_1C7BAE8(&AccountingManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_1042/*"/"*/);
    byte_4CEDF63 = 1;
  }
  v3 = AccountingManager_TypeInfo;
  if ( !AccountingManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
  PaymentHistoryPath = AccountingManager__GetPaymentHistoryPath((const MethodInfo *)v3);
  return System_String__Concat_64215176(PaymentHistoryPath, (System_String_o *)StringLiteral_1042/*"/"*/, name, 0);
}


System_String_o *AccountingManager__GetHistoryFileName_42002124(int64_t time, const MethodInfo *method)
{
  AccountingManager_c *v3; // x0
  System_String_o *PaymentHistoryPath; // x20
  System_String_o *FileName_40983444; // x2

  if ( (byte_4CEDF64 & 1) == 0 )
  {
    sub_1C7BAE8(&AccountingManager_TypeInfo);
    sub_1C7BAE8(&DatFileName_TypeInfo);
    sub_1C7BAE8(&StringLiteral_1042/*"/"*/);
    byte_4CEDF64 = 1;
  }
  v3 = AccountingManager_TypeInfo;
  if ( !AccountingManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
  PaymentHistoryPath = AccountingManager__GetPaymentHistoryPath((const MethodInfo *)v3);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName_40983444 = DatFileName__getFileName_40983444(22, time, 0);
  return System_String__Concat_64215176(PaymentHistoryPath, (System_String_o *)StringLiteral_1042/*"/"*/, FileName_40983444, 0);
}


System_String_o *AccountingManager__GetOldPaymentFileName(const MethodInfo *method)
{
  System_String_o *temporaryCachePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4CEDF60 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Application_TypeInfo);
    sub_1C7BAE8(&DatFileName_TypeInfo);
    sub_1C7BAE8(&StringLiteral_1042/*"/"*/);
    byte_4CEDF60 = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  temporaryCachePath = UnityEngine_Application__get_temporaryCachePath(0);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(21, 0);
  return System_String__Concat_64215176(temporaryCachePath, (System_String_o *)StringLiteral_1042/*"/"*/, FileName, 0);
}


System_String_o *AccountingManager__GetPaymentFileName(const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4CEDF61 & 1) == 0 )
  {
    sub_1C7BAE8(&AndroidUtil_TypeInfo);
    sub_1C7BAE8(&DatFileName_TypeInfo);
    sub_1C7BAE8(&StringLiteral_1042/*"/"*/);
    byte_4CEDF61 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(21, 0);
  return System_String__Concat_64215176(DatFileSavePath, (System_String_o *)StringLiteral_1042/*"/"*/, FileName, 0);
}


System_String_array *AccountingManager__GetPaymentHistoryList(AccountingManager_o *this, const MethodInfo *method)
{
  AccountingManager_c *v2; // x0
  System_Collections_Generic_List_object__o *v3; // x19
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
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  uint16_t Chars; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4CEDF69 & 1) == 0 )
  {
    sub_1C7BAE8(&AccountingManager_TypeInfo);
    sub_1C7BAE8(&char_TypeInfo);
    sub_1C7BAE8(&System_IO_DirectoryInfo_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C7BAE8(&StringLiteral_1030/*".meta"*/);
    byte_4CEDF69 = 1;
  }
  v2 = AccountingManager_TypeInfo;
  Chars = 0;
  if ( !AccountingManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
  AccountingManager__CreatePaymentHistoryDirectory((const MethodInfo *)v2);
  v3 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_string___ctor__);
  PaymentHistoryPath = AccountingManager__GetPaymentHistoryPath(v4);
  v6 = (System_IO_DirectoryInfo_o *)sub_1C7BD34(System_IO_DirectoryInfo_TypeInfo);
  System_IO_DirectoryInfo___ctor(v6, PaymentHistoryPath, 0);
  if ( !v6 )
    goto LABEL_27;
  Files = (System_String_o *)System_IO_DirectoryInfo__GetFiles(v6, 0);
  if ( !Files )
    goto LABEL_27;
  klass = (int)Files[1].klass;
  v10 = Files;
  if ( klass >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= klass )
        goto LABEL_28;
      v12 = &v10->klass + (int)v11;
      v14 = (System_IO_FileSystemInfo_o *)v12[4];
      v13 = (System_IO_FileSystemInfo_o **)(v12 + 4);
      Files = (System_String_o *)v14;
      if ( !v14 )
        break;
      Files = (System_String_o *)((__int64 (__fastcall *)(System_String_o *, const MethodInfo *))Files->klass->vtable._9_GetTypeCode.methodPtr)(
                                   Files,
                                   Files->klass->vtable._9_GetTypeCode.method);
      if ( v11 >= LODWORD(v10[1].klass) )
LABEL_28:
        sub_1C7BD48(Files);
      v15 = Files;
      Files = (System_String_o *)*v13;
      if ( !*v13 )
        break;
      Files = System_IO_FileSystemInfo__get_Extension((System_IO_FileSystemInfo_o *)Files, 0);
      if ( !v15 )
        break;
      v16 = Files;
      Chars = System_String__get_Chars(v15, 0, 0);
      if ( !char_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(char_TypeInfo);
      Files = (System_String_o *)System_Char__Equals_65239380((uint16_t)&Chars, 0x2Eu, 0);
      if ( ((unsigned __int8)Files & 1) == 0 )
      {
        if ( !v16 )
          break;
        Files = (System_String_o *)System_String__Equals_64212232(v16, (System_String_o *)StringLiteral_1030/*".meta"*/, 0);
        if ( ((unsigned __int8)Files & 1) == 0 )
        {
          if ( !v3 )
            break;
          items = v3->fields._items;
          v24 = Method_System_Collections_Generic_List_string__Add__;
          ++v3->fields._version;
          if ( !items )
            break;
          size = v3->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v3,
              (Il2CppObject *)v15,
              *(const MethodInfo_383EDFC **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
          }
          else
          {
            v26 = &items->obj.klass + size;
            v3->fields._size = size + 1;
            v26[4] = (Il2CppClass *)v15;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v26 + 4), (int32_t)v15, v17, v18, v19, v20, v21, v22);
          }
        }
      }
      klass = (int)v10[1].klass;
      if ( (int)++v11 >= klass )
        goto LABEL_25;
    }
LABEL_27:
    sub_1C7BD40(Files, v8);
  }
LABEL_25:
  if ( !v3 )
    goto LABEL_27;
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v3,
                                  (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_string__ToArray__);
}


System_String_o *AccountingManager__GetPaymentHistoryPath(const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x19
  System_String_o *FolderName; // x2

  if ( (byte_4CEDF62 & 1) == 0 )
  {
    sub_1C7BAE8(&AndroidUtil_TypeInfo);
    sub_1C7BAE8(&CacheFolderName_TypeInfo);
    sub_1C7BAE8(&StringLiteral_1042/*"/"*/);
    byte_4CEDF62 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0);
  if ( !CacheFolderName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo);
  FolderName = CacheFolderName__getFolderName(2, 0);
  return System_String__Concat_64215176(DatFileSavePath, (System_String_o *)StringLiteral_1042/*"/"*/, FolderName, 0);
}


void AccountingManager__HistoryPayment(AccountingManager_o *this, System_String_o *state, const MethodInfo *method)
{
  ManagerConfig_c *v4; // x0
  AccountingManager_c *v5; // x0
  System_String_o *HistoryFileName_42002124; // x0
  const MethodInfo *v7; // x1
  struct PaymentInfo_o *paymentInfo; // x8
  const MethodInfo *v9; // x3
  PaymentInfo_o *v10; // x8

  if ( (byte_4CEDF6D & 1) == 0 )
  {
    sub_1C7BAE8(&AccountingManager_TypeInfo);
    sub_1C7BAE8(&ManagerConfig_TypeInfo);
    byte_4CEDF6D = 1;
  }
  v4 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v4 = ManagerConfig_TypeInfo;
  }
  if ( !v4->static_fields->UseMock )
  {
    v5 = AccountingManager_TypeInfo;
    if ( !AccountingManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
    AccountingManager__CreatePaymentHistoryDirectory((const MethodInfo *)v5);
    paymentInfo = AccountingManager_TypeInfo->static_fields->paymentInfo;
    if ( !paymentInfo
      || (HistoryFileName_42002124 = AccountingManager__GetHistoryFileName_42002124(
                                       paymentInfo->fields._Time_k__BackingField,
                                       v7),
          (v10 = AccountingManager_TypeInfo->static_fields->paymentInfo) == 0) )
    {
      sub_1C7BD40(HistoryFileName_42002124, v7);
    }
    PaymentInfo__WriteHistoryFile(v10, HistoryFileName_42002124, state, v9);
  }
}


bool AccountingManager__IsLimitOver(AccountingManager_o *this, int32_t value, const MethodInfo *method)
{
  ManagerConfig_c *v4; // x0
  int32_t Limit; // w0

  if ( (byte_4CEDF6E & 1) == 0 )
  {
    sub_1C7BAE8(&AgeVerificationMenu_TypeInfo);
    sub_1C7BAE8(&ManagerConfig_TypeInfo);
    byte_4CEDF6E = 1;
  }
  v4 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v4 = ManagerConfig_TypeInfo;
  }
  if ( v4->static_fields->UseMock )
    return 1;
  if ( !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
  Limit = AgeVerificationMenu__GetLimit(0);
  return Limit >= 0 && Limit < value;
}


System_String_o *AccountingManager__ReadHistory(System_String_o *name, const MethodInfo *method)
{
  AccountingManager_c *v3; // x0
  const MethodInfo *v4; // x1
  System_String_o *HistoryFileName; // x0
  System_IO_Stream_o *v6; // x20
  System_IO_BinaryReader_o *v7; // x19
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_o *v10; // x20
  System_String_o *v11; // x20
  System_IO_BinaryReader_c *klass; // x8
  __int64 v13; // x9
  int32_t *p_offset; // x10
  __int64 v15; // x0

  if ( (byte_4CEDF68 & 1) == 0 )
  {
    sub_1C7BAE8(&AccountingManager_TypeInfo);
    sub_1C7BAE8(&System_IO_BinaryReader_TypeInfo);
    sub_1C7BAE8(&CatAndMouseGame_TypeInfo);
    sub_1C7BAE8(&System_IDisposable_TypeInfo);
    byte_4CEDF68 = 1;
  }
  v3 = AccountingManager_TypeInfo;
  if ( !AccountingManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
  AccountingManager__CreatePaymentHistoryDirectory((const MethodInfo *)v3);
  HistoryFileName = AccountingManager__GetHistoryFileName(name, v4);
  v6 = (System_IO_Stream_o *)System_IO_File__OpenRead(HistoryFileName, 0);
  v7 = (System_IO_BinaryReader_o *)sub_1C7BD34(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v7, v6, 0);
  if ( !v7 )
    sub_1C7BD40(v8, v9);
  v10 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v7->klass->vtable._22_ReadString.methodPtr)(
                             v7,
                             v7->klass->vtable._22_ReadString.method);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v11 = CatAndMouseGame__MouseGame1(v10, 0, 0);
  klass = v7->klass;
  v13 = *(unsigned __int16 *)&v7->klass->_2.rank;
  if ( *(_WORD *)&v7->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v13;
      p_offset += 4;
      if ( !v13 )
        goto LABEL_12;
    }
    v15 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_12:
    v15 = sub_1C51E70(v7, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v15)(v7, *(_QWORD *)(v15 + 8));
  return v11;
}


bool AccountingManager__ReadOldPayment(AccountingManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return AccountingManager__ReadPayment_42004204(this, 0, v2);
}


bool AccountingManager__ReadPayment(AccountingManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return AccountingManager__ReadPayment_42004204(this, 1, v2);
}


// local variable allocation has failed, the output may be wrong!
bool AccountingManager__ReadPayment_42004204(AccountingManager_o *this, bool isNewFormat, const MethodInfo *method)
{
  ManagerConfig_c *v4; // x0
  AccountingManager_c *v5; // x0
  System_String_o *OldPaymentFileName; // x0
  const MethodInfo *v7; // x3
  System_String_o *v8; // x20
  AccountingManager_c *v9; // x0
  PaymentInfo_o *paymentInfo; // x0
  AccountingManager_c *v12; // x0

  if ( (byte_4CEDF6A & 1) == 0 )
  {
    sub_1C7BAE8(&AccountingManager_TypeInfo);
    sub_1C7BAE8(&ManagerConfig_TypeInfo);
    byte_4CEDF6A = 1;
  }
  v4 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v4 = ManagerConfig_TypeInfo;
  }
  if ( v4->static_fields->UseMock )
    goto LABEL_16;
  v5 = AccountingManager_TypeInfo;
  if ( !AccountingManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
    if ( isNewFormat )
      goto LABEL_8;
LABEL_10:
    OldPaymentFileName = AccountingManager__GetOldPaymentFileName((const MethodInfo *)v5);
    goto LABEL_11;
  }
  if ( !isNewFormat )
    goto LABEL_10;
LABEL_8:
  OldPaymentFileName = AccountingManager__GetPaymentFileName((const MethodInfo *)v5);
LABEL_11:
  v8 = OldPaymentFileName;
  v9 = AccountingManager_TypeInfo;
  if ( !AccountingManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
    v9 = AccountingManager_TypeInfo;
  }
  paymentInfo = v9->static_fields->paymentInfo;
  if ( !paymentInfo )
LABEL_20:
    sub_1C7BD40(paymentInfo, isNewFormat);
  if ( PaymentInfo__ReadFile(paymentInfo, v8, isNewFormat, v7) )
    return 1;
LABEL_16:
  v12 = AccountingManager_TypeInfo;
  if ( !AccountingManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
    v12 = AccountingManager_TypeInfo;
  }
  paymentInfo = v12->static_fields->paymentInfo;
  if ( !paymentInfo )
    goto LABEL_20;
  PaymentInfo__Clear(paymentInfo, 1, method);
  return 0;
}


void AccountingManager__WritePayment(AccountingManager_o *this, const MethodInfo *method)
{
  ManagerConfig_c *v2; // x0
  int64_t Time; // x0
  __int64 v4; // x8
  _BOOL8 IsNullOrEmpty; // x0
  bool v6; // w19
  struct PaymentInfo_o *paymentInfo; // x19
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w1
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  int32_t v21; // w1
  struct PaymentInfo_o *v22; // x21
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  int32_t v29; // w1
  const MethodInfo *v30; // x2
  PaymentInfo_o *v31; // x8

  if ( (byte_4CEDF6B & 1) == 0 )
  {
    sub_1C7BAE8(&AccountingManager_TypeInfo);
    sub_1C7BAE8(&AgeVerificationMenu_TypeInfo);
    sub_1C7BAE8(&ManagerConfig_TypeInfo);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEDF6B = 1;
  }
  v2 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v2 = ManagerConfig_TypeInfo;
  }
  if ( !v2->static_fields->UseMock )
  {
    Time = (int64_t)AccountingManager_TypeInfo;
    if ( !AccountingManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
      Time = (int64_t)AccountingManager_TypeInfo;
    }
    v4 = *(_QWORD *)(*(_QWORD *)(Time + 184) + 16LL);
    if ( v4 )
    {
      IsNullOrEmpty = System_String__IsNullOrEmpty(*(System_String_o **)(v4 + 16), 0);
      v6 = IsNullOrEmpty;
      if ( AccountingManager_TypeInfo->_2.cctor_finished )
      {
        if ( IsNullOrEmpty )
        {
LABEL_11:
          AccountingManager__ClearPayment((const MethodInfo *)IsNullOrEmpty);
          return;
        }
      }
      else
      {
        j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
        if ( v6 )
          goto LABEL_11;
      }
      Time = (int64_t)AccountingManager_TypeInfo;
      paymentInfo = AccountingManager_TypeInfo->static_fields->paymentInfo;
      if ( paymentInfo )
      {
        if ( !paymentInfo->fields._Time_k__BackingField )
        {
          if ( !AccountingManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
            paymentInfo = AccountingManager_TypeInfo->static_fields->paymentInfo;
          }
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          Time = NetworkManager__getTime(0);
          if ( !paymentInfo )
            goto LABEL_31;
          paymentInfo->fields._Time_k__BackingField = Time;
          Time = (int64_t)AccountingManager_TypeInfo->static_fields->paymentInfo;
          if ( !Time )
            goto LABEL_31;
          v14 = StringLiteral_1/*""*/;
          *(_QWORD *)(Time + 48) = StringLiteral_1/*""*/;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(Time + 48), v14, v8, v9, v10, v11, v12, v13);
          Time = (int64_t)AccountingManager_TypeInfo->static_fields->paymentInfo;
          if ( !Time )
            goto LABEL_31;
          v21 = StringLiteral_1/*""*/;
          *(_QWORD *)(Time + 40) = StringLiteral_1/*""*/;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(Time + 40), v21, v15, v16, v17, v18, v19, v20);
          v22 = AccountingManager_TypeInfo->static_fields->paymentInfo;
          if ( !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
          Time = AgeVerificationMenu__GetCumulativeAmount(0);
          if ( !v22 )
            goto LABEL_31;
          v22->fields._CumulativeAmount_k__BackingField = Time;
          Time = (int64_t)AccountingManager_TypeInfo->static_fields->paymentInfo;
          if ( !Time )
            goto LABEL_31;
          v29 = StringLiteral_1/*""*/;
          *(_QWORD *)(Time + 64) = StringLiteral_1/*""*/;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(Time + 64), v29, v23, v24, v25, v26, v27, v28);
          Time = (int64_t)AccountingManager_TypeInfo;
        }
        if ( !*(_DWORD *)(Time + 224) )
          j_il2cpp_runtime_class_init_0(Time);
        Time = (int64_t)AccountingManager__GetPaymentFileName((const MethodInfo *)Time);
        v31 = AccountingManager_TypeInfo->static_fields->paymentInfo;
        if ( v31 )
        {
          PaymentInfo__WriteFile(v31, (System_String_o *)Time, v30);
          return;
        }
      }
    }
LABEL_31:
    sub_1C7BD40(Time, method);
  }
}


void AccountingManager_ResultCallbackfunc___ctor(
        AccountingManager_ResultCallbackfunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C7BBA8(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C7BD5C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C7BC10(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 2 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1AB1F10;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AB1EB8;
}


System_IAsyncResult_o *AccountingManager_ResultCallbackfunc__BeginInvoke(
        AccountingManager_ResultCallbackfunc_o *this,
        int32_t result,
        int32_t perMonthAmount,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v10[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v11; // [xsp+28h] [xbp-38h] BYREF
  int32_t v12; // [xsp+2Ch] [xbp-34h] BYREF

  v11 = perMonthAmount;
  v12 = result;
  if ( (byte_4CEDF73 & 1) == 0 )
  {
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&AccountingManager_Result_TypeInfo);
    byte_4CEDF73 = 1;
  }
  v10[2] = 0;
  v10[0] = j_il2cpp_value_box_0(AccountingManager_Result_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(int_TypeInfo, &v11);
  return (System_IAsyncResult_o *)sub_1C7BA9C(this, v10, callback, object);
}


void AccountingManager_ResultCallbackfunc__EndInvoke(
        AccountingManager_ResultCallbackfunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C7BAA0(result, 0, method);
}


void AccountingManager_ResultCallbackfunc__Invoke(
        AccountingManager_ResultCallbackfunc_o *this,
        int32_t result,
        int32_t perMonthAmount,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    perMonthAmount,
    this->fields.method);
}