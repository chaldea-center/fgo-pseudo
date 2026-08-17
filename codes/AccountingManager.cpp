void AccountingManager___cctor(const MethodInfo *method)
{
  struct AccountingManager_StaticFields *static_fields; // x8
  PaymentInfo_c *v2; // x0
  PaymentInfo_o *v3; // x19
  const MethodInfo *v4; // x1
  struct AccountingManager_StaticFields *v5; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_59700AD & 1) == 0 )
  {
    sub_2213A60(&AccountingManager_TypeInfo);
    sub_2213A60(&PaymentInfo_TypeInfo);
    byte_59700AD = 1;
  }
  static_fields = AccountingManager_TypeInfo->static_fields;
  *(_WORD *)&static_fields->isEnableStore = 0;
  v2 = PaymentInfo_TypeInfo;
  static_fields->isRecoverStore = 1;
  static_fields->initializeResult = 0;
  static_fields->initializeStartTime = 0;
  v3 = (PaymentInfo_o *)sub_2213CCC(v2);
  PaymentInfo___ctor(v3, v4);
  v5 = AccountingManager_TypeInfo->static_fields;
  v5->paymentInfo = v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v5->paymentInfo, (int32_t)v3, v6, v7, v8, v9, v10, v11);
}


void AccountingManager___ctor(AccountingManager_o *this, const MethodInfo *method)
{
  if ( (byte_59700AC & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_AccountingManager___ctor__);
    byte_59700AC = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_47A2F28 *)Method_SingletonMonoBehaviour_AccountingManager___ctor__);
}


void AccountingManager__AddExtraData(AccountingManager_o *this, System_String_o *value, const MethodInfo *method)
{
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_string__object__o *Dictionary; // x0
  __int64 v6; // x1
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // kr00_16
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  CrashReporter_o *v10; // x20
  System_String_o *v11; // x0
  __int64 v12; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v13; // [xsp+10h] [xbp-60h] BYREF

  if ( (byte_59700AB & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__);
    sub_2213A60(&JsonManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    byte_59700AB = 1;
  }
  memset(&v13, 0, sizeof(v13));
  if ( !System_String__IsNullOrEmpty(value, 0) )
  {
    if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v4);
    Dictionary = JsonManager__getDictionary(value, 0);
    if ( !Dictionary )
      sub_2213CDC(0, v6);
    System_Collections_Generic_Dictionary_object__object___GetEnumerator(
      &v13,
      (System_Collections_Generic_Dictionary_object__object__o *)Dictionary,
      (const MethodInfo_3FFE044 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
              &v13,
              (const MethodInfo_41690A0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
    {
      current = v13.fields._current;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
      if ( !current.fields.value )
        sub_2213CDC(Instance, v9);
      v10 = (CrashReporter_o *)Instance;
      v11 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))current.fields.value->klass->vtable[3].methodPtr)(
                                 current.fields.value,
                                 current.fields.value->klass->vtable[3].method);
      if ( !v10 )
        sub_2213CDC(v11, v12);
      CrashReporter__AddCustomKey(v10, (System_String_o *)current.fields.key, v11, 0);
    }
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
      &v13,
      (const MethodInfo_41691C0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
  }
}


void AccountingManager__AddExtraDataProductID(AccountingManager_o *this, const MethodInfo *method)
{
  AccountingManager_c *v2; // x0
  struct PaymentInfo_o *paymentInfo; // x8
  AccountingManager_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_59700AA & 1) == 0 )
  {
    sub_2213A60(&AccountingManager_TypeInfo);
    sub_2213A60(&StringLiteral_26644/*"{{\"ProductId\":\"{0}\"}}"*/);
    byte_59700AA = 1;
  }
  v2 = AccountingManager_TypeInfo;
  if ( !*(&AccountingManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo, method);
    v2 = AccountingManager_TypeInfo;
  }
  paymentInfo = v2->static_fields->paymentInfo;
  if ( !paymentInfo )
    sub_2213CDC(v2, method);
  v4 = (AccountingManager_o *)System_String__Format(
                                (System_String_o *)StringLiteral_26644/*"{{\"ProductId\":\"{0}\"}}"*/,
                                (Il2CppObject *)paymentInfo->fields._ProductId_k__BackingField,
                                0);
  AccountingManager__AddExtraData(v4, (System_String_o *)v4, v5);
}


// local variable allocation has failed, the output may be wrong!
bool AccountingManager__CallbackResult(
        AccountingManager_o *this,
        int32_t result,
        int32_t perMonthAmount,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x0
  struct AccountingManager_ResultCallbackfunc_o *v9; // x21
  struct AccountingManager_ResultCallbackfunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_2213A04(p_callbackFunc, 0, *(System_String_o **)&perMonthAmount, (System_String_o *)method, v4, v5, v6, v7);
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
  __int64 v1; // x1
  AccountingManager_c *v2; // x0
  System_String_o *PaymentHistoryPath; // x19
  __int64 v4; // x1
  AccountingManager_c *v5; // x0

  if ( (byte_59700A1 & 1) == 0 )
  {
    sub_2213A60(&AccountingManager_TypeInfo);
    byte_59700A1 = 1;
  }
  v2 = AccountingManager_TypeInfo;
  if ( !*(&AccountingManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo, v1);
  PaymentHistoryPath = AccountingManager__GetPaymentHistoryPath((const MethodInfo *)v2);
  if ( System_IO_Directory__Exists(PaymentHistoryPath, 0) )
    System_IO_Directory__Delete(PaymentHistoryPath, 1, 0);
  v5 = AccountingManager_TypeInfo;
  if ( !*(&AccountingManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo, v4);
  AccountingManager__ClearPayment((const MethodInfo *)v5);
}


void AccountingManager__ClearPayment(const MethodInfo *method)
{
  __int64 v1; // x1
  const MethodInfo *v2; // x2
  AccountingManager_c *v3; // x0
  PaymentInfo_o *paymentInfo; // x0
  const MethodInfo *v5; // x0
  System_String_o *PaymentFileName; // x19

  if ( (byte_59700A2 & 1) == 0 )
  {
    sub_2213A60(&AccountingManager_TypeInfo);
    byte_59700A2 = 1;
  }
  v3 = AccountingManager_TypeInfo;
  if ( !*(&AccountingManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo, v1);
    v3 = AccountingManager_TypeInfo;
  }
  paymentInfo = v3->static_fields->paymentInfo;
  if ( !paymentInfo )
    sub_2213CDC(0, v1);
  PaymentInfo__Clear(paymentInfo, 0, v2);
  PaymentFileName = AccountingManager__GetPaymentFileName(v5);
  if ( System_IO_File__Exists(PaymentFileName, 0) )
    System_IO_File__Delete(PaymentFileName, 0);
}


void AccountingManager__CreatePaymentHistoryDirectory(const MethodInfo *method)
{
  __int64 v1; // x1
  AccountingManager_c *v2; // x0
  System_String_o *PaymentHistoryPath; // x19

  if ( (byte_59700A0 & 1) == 0 )
  {
    sub_2213A60(&AccountingManager_TypeInfo);
    byte_59700A0 = 1;
  }
  v2 = AccountingManager_TypeInfo;
  if ( !*(&AccountingManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo, v1);
  PaymentHistoryPath = AccountingManager__GetPaymentHistoryPath((const MethodInfo *)v2);
  if ( !System_IO_Directory__Exists(PaymentHistoryPath, 0) )
    System_IO_Directory__CreateDirectory(PaymentHistoryPath, 0);
}


void AccountingManager__DeletePayment(AccountingManager_o *this, const MethodInfo *method)
{
  ManagerConfig_c *v2; // x0
  AccountingManager_c *v3; // x0

  if ( (byte_59700A7 & 1) == 0 )
  {
    sub_2213A60(&AccountingManager_TypeInfo);
    sub_2213A60(&ManagerConfig_TypeInfo);
    byte_59700A7 = 1;
  }
  v2 = ManagerConfig_TypeInfo;
  if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, method);
    v2 = ManagerConfig_TypeInfo;
  }
  if ( !v2->static_fields->UseMock )
  {
    v3 = AccountingManager_TypeInfo;
    if ( !*(&AccountingManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo, method);
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

  if ( (byte_597009E & 1) == 0 )
  {
    sub_2213A60(&AccountingManager_TypeInfo);
    sub_2213A60(&StringLiteral_1123/*"/"*/);
    byte_597009E = 1;
  }
  v3 = AccountingManager_TypeInfo;
  if ( !*(&AccountingManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo, method);
  PaymentHistoryPath = AccountingManager__GetPaymentHistoryPath((const MethodInfo *)v3);
  return System_String__Concat_75694928(PaymentHistoryPath, (System_String_o *)StringLiteral_1123/*"/"*/, name, 0);
}


System_String_o *AccountingManager__GetHistoryFileName_48409456(int64_t time, const MethodInfo *method)
{
  AccountingManager_c *v3; // x0
  __int64 v4; // x1
  System_String_o *PaymentHistoryPath; // x20
  System_String_o *FileName_47383004; // x2

  if ( (byte_597009F & 1) == 0 )
  {
    sub_2213A60(&AccountingManager_TypeInfo);
    sub_2213A60(&DatFileName_TypeInfo);
    sub_2213A60(&StringLiteral_1123/*"/"*/);
    byte_597009F = 1;
  }
  v3 = AccountingManager_TypeInfo;
  if ( !*(&AccountingManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo, method);
  PaymentHistoryPath = AccountingManager__GetPaymentHistoryPath((const MethodInfo *)v3);
  if ( !*(&DatFileName_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo, v4);
  FileName_47383004 = DatFileName__getFileName_47383004(22, time, 0);
  return System_String__Concat_75694928(PaymentHistoryPath, (System_String_o *)StringLiteral_1123/*"/"*/, FileName_47383004, 0);
}


System_String_o *AccountingManager__GetOldPaymentFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  System_String_o *temporaryCachePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_597009B & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Application_TypeInfo);
    sub_2213A60(&DatFileName_TypeInfo);
    sub_2213A60(&StringLiteral_1123/*"/"*/);
    byte_597009B = 1;
  }
  if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, v1);
  temporaryCachePath = UnityEngine_Application__get_temporaryCachePath(0);
  if ( !*(&DatFileName_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo, v2);
  FileName = DatFileName__getFileName(21, 0);
  return System_String__Concat_75694928(temporaryCachePath, (System_String_o *)StringLiteral_1123/*"/"*/, FileName, 0);
}


System_String_o *AccountingManager__GetPaymentFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_597009C & 1) == 0 )
  {
    sub_2213A60(&AndroidUtil_TypeInfo);
    sub_2213A60(&DatFileName_TypeInfo);
    sub_2213A60(&StringLiteral_1123/*"/"*/);
    byte_597009C = 1;
  }
  if ( !*(&AndroidUtil_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo, v1);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0);
  if ( !*(&DatFileName_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo, v2);
  FileName = DatFileName__getFileName(21, 0);
  return System_String__Concat_75694928(DatFileSavePath, (System_String_o *)StringLiteral_1123/*"/"*/, FileName, 0);
}


System_String_array *AccountingManager__GetPaymentHistoryList(AccountingManager_o *this, const MethodInfo *method)
{
  AccountingManager_c *v2; // x0
  int v3; // w8
  System_Collections_Generic_List_object__o *v4; // x19
  const MethodInfo *v5; // x0
  System_String_o *PaymentHistoryPath; // x21
  System_IO_DirectoryInfo_o *v7; // x20
  System_String_o *Files; // x0
  __int64 v9; // x1
  int klass; // w8
  System_String_o *v11; // x20
  unsigned int v12; // w26
  System_String_c **v13; // x22
  System_IO_FileSystemInfo_o **v14; // x22
  System_IO_FileSystemInfo_o *v15; // t1
  System_String_o *v16; // x21
  System_String_o *v17; // x22
  __int64 v18; // x1
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0
  uint16_t Chars; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_59700A4 & 1) == 0 )
  {
    sub_2213A60(&AccountingManager_TypeInfo);
    sub_2213A60(&System_IO_DirectoryInfo_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_string___ctor__);
    sub_2213A60(&System_Collections_Generic_List_string__TypeInfo);
    sub_2213A60(&StringLiteral_1111/*".meta"*/);
    byte_59700A4 = 1;
  }
  v2 = AccountingManager_TypeInfo;
  v3 = *(&AccountingManager_TypeInfo->_2.cctor_finished + 1);
  Chars = 0;
  if ( !v3 )
    j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo, method);
  AccountingManager__CreatePaymentHistoryDirectory((const MethodInfo *)v2);
  v4 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_string___ctor__);
  PaymentHistoryPath = AccountingManager__GetPaymentHistoryPath(v5);
  v7 = (System_IO_DirectoryInfo_o *)sub_2213CCC(System_IO_DirectoryInfo_TypeInfo);
  System_IO_DirectoryInfo___ctor(v7, PaymentHistoryPath, 0);
  if ( !v7 )
    goto LABEL_27;
  Files = (System_String_o *)System_IO_DirectoryInfo__GetFiles(v7, 0);
  if ( !Files )
    goto LABEL_27;
  klass = (int)Files[1].klass;
  v11 = Files;
  if ( klass >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= klass )
        goto LABEL_28;
      v13 = &v11->klass + (int)v12;
      v15 = (System_IO_FileSystemInfo_o *)v13[4];
      v14 = (System_IO_FileSystemInfo_o **)(v13 + 4);
      Files = (System_String_o *)v15;
      if ( !v15 )
        break;
      Files = (System_String_o *)((__int64 (__fastcall *)(System_String_o *, const MethodInfo *))Files->klass->vtable._9_GetTypeCode.methodPtr)(
                                   Files,
                                   Files->klass->vtable._9_GetTypeCode.method);
      if ( v12 >= LODWORD(v11[1].klass) )
LABEL_28:
        sub_2213CE4(Files);
      v16 = Files;
      Files = (System_String_o *)*v14;
      if ( !*v14 )
        break;
      Files = System_IO_FileSystemInfo__get_Extension((System_IO_FileSystemInfo_o *)Files, 0);
      if ( !v16 )
        break;
      v17 = Files;
      Chars = System_String__get_Chars(v16, 0, 0);
      if ( !*(_DWORD *)(qword_5984388 + 228) )
        j_il2cpp_runtime_class_init_0(qword_5984388, v18);
      Files = (System_String_o *)System_Char__Equals_76665424((uint16_t)&Chars, 0x2Eu, 0);
      if ( ((unsigned __int8)Files & 1) == 0 )
      {
        if ( !v17 )
          break;
        Files = (System_String_o *)System_String__Equals_75686512(v17, (System_String_o *)StringLiteral_1111/*".meta"*/, 0);
        if ( ((unsigned __int8)Files & 1) == 0 )
        {
          if ( !v4 )
            break;
          items = v4->fields._items;
          v26 = Method_System_Collections_Generic_List_string__Add__;
          ++v4->fields._version;
          if ( !items )
            break;
          size = v4->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v4,
              (Il2CppObject *)v16,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
          }
          else
          {
            v28 = &items->obj.klass + size;
            v4->fields._size = size + 1;
            v28[4] = (Il2CppClass *)v16;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v28 + 4), (int32_t)v16, v19, v20, v21, v22, v23, v24);
          }
        }
      }
      klass = (int)v11[1].klass;
      if ( (int)++v12 >= klass )
        goto LABEL_25;
    }
LABEL_27:
    sub_2213CDC(Files, v9);
  }
LABEL_25:
  if ( !v4 )
    goto LABEL_27;
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v4,
                                  (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_string__ToArray__);
}


System_String_o *AccountingManager__GetPaymentHistoryPath(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FolderName; // x2

  if ( (byte_597009D & 1) == 0 )
  {
    sub_2213A60(&AndroidUtil_TypeInfo);
    sub_2213A60(&CacheFolderName_TypeInfo);
    sub_2213A60(&StringLiteral_1123/*"/"*/);
    byte_597009D = 1;
  }
  if ( !*(&AndroidUtil_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo, v1);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0);
  if ( !*(&CacheFolderName_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo, v2);
  FolderName = CacheFolderName__getFolderName(2, 0);
  return System_String__Concat_75694928(DatFileSavePath, (System_String_o *)StringLiteral_1123/*"/"*/, FolderName, 0);
}


void AccountingManager__HistoryPayment(AccountingManager_o *this, System_String_o *state, const MethodInfo *method)
{
  ManagerConfig_c *v4; // x0
  AccountingManager_c *v5; // x0
  System_String_o *HistoryFileName_48409456; // x0
  const MethodInfo *v7; // x1
  struct PaymentInfo_o *paymentInfo; // x8
  const MethodInfo *v9; // x3
  PaymentInfo_o *v10; // x8

  if ( (byte_59700A8 & 1) == 0 )
  {
    sub_2213A60(&AccountingManager_TypeInfo);
    sub_2213A60(&ManagerConfig_TypeInfo);
    byte_59700A8 = 1;
  }
  v4 = ManagerConfig_TypeInfo;
  if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, state);
    v4 = ManagerConfig_TypeInfo;
  }
  if ( !v4->static_fields->UseMock )
  {
    v5 = AccountingManager_TypeInfo;
    if ( !*(&AccountingManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo, state);
    AccountingManager__CreatePaymentHistoryDirectory((const MethodInfo *)v5);
    paymentInfo = AccountingManager_TypeInfo->static_fields->paymentInfo;
    if ( !paymentInfo
      || (HistoryFileName_48409456 = AccountingManager__GetHistoryFileName_48409456(
                                       paymentInfo->fields._Time_k__BackingField,
                                       v7),
          (v10 = AccountingManager_TypeInfo->static_fields->paymentInfo) == 0) )
    {
      sub_2213CDC(HistoryFileName_48409456, v7);
    }
    PaymentInfo__WriteHistoryFile(v10, HistoryFileName_48409456, state, v9);
  }
}


// local variable allocation has failed, the output may be wrong!
bool AccountingManager__IsLimitOver(AccountingManager_o *this, int32_t value, const MethodInfo *method)
{
  ManagerConfig_c *v4; // x0
  int32_t Limit; // w0

  if ( (byte_59700A9 & 1) == 0 )
  {
    sub_2213A60(&AgeVerificationMenu_TypeInfo);
    sub_2213A60(&ManagerConfig_TypeInfo);
    byte_59700A9 = 1;
  }
  v4 = ManagerConfig_TypeInfo;
  if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, *(_QWORD *)&value);
    v4 = ManagerConfig_TypeInfo;
  }
  if ( v4->static_fields->UseMock )
    return 1;
  if ( !*(&AgeVerificationMenu_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo, *(_QWORD *)&value);
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
  __int64 v10; // x1
  System_String_o *v11; // x19
  System_String_o *v12; // x19
  System_IO_BinaryReader_c *klass; // x8
  __int64 v14; // x9
  int *p_offset; // x10
  __int64 v16; // x0
  System_IO_BinaryReader_o *v18; // [xsp+28h] [xbp-28h]

  if ( (byte_59700A3 & 1) == 0 )
  {
    sub_2213A60(&AccountingManager_TypeInfo);
    sub_2213A60(&System_IO_BinaryReader_TypeInfo);
    sub_2213A60(&CatAndMouseGame_TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    byte_59700A3 = 1;
  }
  v3 = AccountingManager_TypeInfo;
  if ( !*(&AccountingManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo, method);
  AccountingManager__CreatePaymentHistoryDirectory((const MethodInfo *)v3);
  HistoryFileName = AccountingManager__GetHistoryFileName(name, v4);
  v6 = (System_IO_Stream_o *)System_IO_File__OpenRead(HistoryFileName, 0);
  v7 = (System_IO_BinaryReader_o *)sub_2213CCC(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v7, v6, 0);
  v18 = v7;
  if ( !v7 )
    sub_2213CDC(v8, v9);
  v11 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v7->klass->vtable._22_ReadString.methodPtr)(
                             v7,
                             v7->klass->vtable._22_ReadString.method);
  if ( !*(&CatAndMouseGame_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo, v10);
  v12 = CatAndMouseGame__MouseGame1(v11, 0, 0);
  if ( v18 )
  {
    klass = v18->klass;
    v14 = *(unsigned __int16 *)&v18->klass->_2.rank;
    if ( *(_WORD *)&v18->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v14;
        p_offset += 4;
        if ( !v14 )
          goto LABEL_13;
      }
      v16 = (__int64)&klass->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_13:
      v16 = sub_224BC3C(v18, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v16)(v18, *(_QWORD *)(v16 + 8));
  }
  return v12;
}


bool AccountingManager__ReadOldPayment(AccountingManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return AccountingManager__ReadPayment_48411472(this, 0, v2);
}


bool AccountingManager__ReadPayment(AccountingManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return AccountingManager__ReadPayment_48411472(this, 1, v2);
}


// local variable allocation has failed, the output may be wrong!
bool AccountingManager__ReadPayment_48411472(AccountingManager_o *this, bool isNewFormat, const MethodInfo *method)
{
  ManagerConfig_c *v4; // x0
  AccountingManager_c *v5; // x0
  int v6; // w8
  System_String_o *PaymentFileName; // x0
  const MethodInfo *v8; // x3
  System_String_o *v9; // x20
  AccountingManager_c *v10; // x0
  PaymentInfo_o *paymentInfo; // x0
  AccountingManager_c *v13; // x0

  if ( (byte_59700A5 & 1) == 0 )
  {
    sub_2213A60(&AccountingManager_TypeInfo);
    sub_2213A60(&ManagerConfig_TypeInfo);
    byte_59700A5 = 1;
  }
  v4 = ManagerConfig_TypeInfo;
  if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, isNewFormat);
    v4 = ManagerConfig_TypeInfo;
  }
  if ( !v4->static_fields->UseMock )
  {
    v5 = AccountingManager_TypeInfo;
    v6 = *(&AccountingManager_TypeInfo->_2.cctor_finished + 1);
    if ( isNewFormat )
    {
      if ( !v6 )
        j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo, isNewFormat);
      PaymentFileName = AccountingManager__GetPaymentFileName((const MethodInfo *)v5);
    }
    else
    {
      if ( !v6 )
        j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo, isNewFormat);
      PaymentFileName = AccountingManager__GetOldPaymentFileName((const MethodInfo *)v5);
    }
    v9 = PaymentFileName;
    v10 = AccountingManager_TypeInfo;
    if ( !*(&AccountingManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo, isNewFormat);
      v10 = AccountingManager_TypeInfo;
    }
    paymentInfo = v10->static_fields->paymentInfo;
    if ( !paymentInfo )
LABEL_22:
      sub_2213CDC(paymentInfo, isNewFormat);
    if ( PaymentInfo__ReadFile(paymentInfo, v9, isNewFormat, v8) )
      return 1;
  }
  v13 = AccountingManager_TypeInfo;
  if ( !*(&AccountingManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo, isNewFormat);
    v13 = AccountingManager_TypeInfo;
  }
  paymentInfo = v13->static_fields->paymentInfo;
  if ( !paymentInfo )
    goto LABEL_22;
  PaymentInfo__Clear(paymentInfo, 1, method);
  return 0;
}


void AccountingManager__WritePayment(AccountingManager_o *this, const MethodInfo *method)
{
  ManagerConfig_c *v2; // x0
  int64_t Time; // x0
  __int64 v4; // x8
  bool IsNullOrEmpty; // w8
  int v6; // w9
  struct PaymentInfo_o *paymentInfo; // x20
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  AccountingManager_c *v14; // x9
  int32_t v15; // w1
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  int32_t v22; // w1
  __int64 v23; // x1
  struct PaymentInfo_o *v24; // x21
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  AccountingManager_c *v31; // x9
  int32_t v32; // w1
  const MethodInfo *v33; // x2
  PaymentInfo_o *v34; // x8

  if ( (byte_59700A6 & 1) == 0 )
  {
    sub_2213A60(&AccountingManager_TypeInfo);
    sub_2213A60(&AgeVerificationMenu_TypeInfo);
    sub_2213A60(&ManagerConfig_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_59700A6 = 1;
  }
  v2 = ManagerConfig_TypeInfo;
  if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, method);
    v2 = ManagerConfig_TypeInfo;
  }
  if ( !v2->static_fields->UseMock )
  {
    Time = (int64_t)AccountingManager_TypeInfo;
    if ( !*(&AccountingManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo, method);
      Time = (int64_t)AccountingManager_TypeInfo;
    }
    v4 = *(_QWORD *)(*(_QWORD *)(Time + 184) + 16LL);
    if ( v4 )
    {
      IsNullOrEmpty = System_String__IsNullOrEmpty(*(System_String_o **)(v4 + 16), 0);
      Time = (int64_t)AccountingManager_TypeInfo;
      v6 = *(&AccountingManager_TypeInfo->_2.cctor_finished + 1);
      if ( IsNullOrEmpty )
      {
        if ( !v6 )
          j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo, method);
        AccountingManager__ClearPayment((const MethodInfo *)Time);
        return;
      }
      if ( !v6 )
      {
        j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo, method);
        Time = (int64_t)AccountingManager_TypeInfo;
      }
      paymentInfo = *(struct PaymentInfo_o **)(*(_QWORD *)(Time + 184) + 16LL);
      if ( paymentInfo )
      {
        if ( !paymentInfo->fields._Time_k__BackingField )
        {
          if ( !*(_DWORD *)(Time + 228) )
          {
            j_il2cpp_runtime_class_init_0(Time, method);
            paymentInfo = AccountingManager_TypeInfo->static_fields->paymentInfo;
          }
          if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
          Time = NetworkManager__getTime(0);
          if ( !paymentInfo )
            goto LABEL_33;
          v14 = AccountingManager_TypeInfo;
          paymentInfo->fields._Time_k__BackingField = Time;
          Time = (int64_t)v14->static_fields->paymentInfo;
          if ( !Time )
            goto LABEL_33;
          v15 = (int)StringLiteral_1/*""*/;
          *(_QWORD *)(Time + 48) = StringLiteral_1/*""*/;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(Time + 48), v15, v8, v9, v10, v11, v12, v13);
          Time = (int64_t)AccountingManager_TypeInfo->static_fields->paymentInfo;
          if ( !Time )
            goto LABEL_33;
          v22 = (int)StringLiteral_1/*""*/;
          *(_QWORD *)(Time + 40) = StringLiteral_1/*""*/;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(Time + 40), v22, v16, v17, v18, v19, v20, v21);
          v24 = AccountingManager_TypeInfo->static_fields->paymentInfo;
          if ( !*(&AgeVerificationMenu_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo, v23);
          Time = AgeVerificationMenu__GetCumulativeAmount(0);
          if ( !v24 )
            goto LABEL_33;
          v31 = AccountingManager_TypeInfo;
          v24->fields._CumulativeAmount_k__BackingField = Time;
          Time = (int64_t)v31->static_fields->paymentInfo;
          if ( !Time )
            goto LABEL_33;
          v32 = (int)StringLiteral_1/*""*/;
          *(_QWORD *)(Time + 64) = StringLiteral_1/*""*/;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(Time + 64), v32, v25, v26, v27, v28, v29, v30);
          Time = (int64_t)AccountingManager_TypeInfo;
        }
        if ( !*(_DWORD *)(Time + 228) )
          j_il2cpp_runtime_class_init_0(Time, method);
        Time = (int64_t)AccountingManager__GetPaymentFileName((const MethodInfo *)Time);
        v34 = AccountingManager_TypeInfo->static_fields->paymentInfo;
        if ( v34 )
        {
          PaymentInfo__WriteFile(v34, (System_String_o *)Time, v33);
          return;
        }
      }
    }
LABEL_33:
    sub_2213CDC(Time, method);
  }
}


void AccountingManager_ResultCallbackfunc___ctor(
        AccountingManager_ResultCallbackfunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_200D944;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_200D8EC;
}


System_IAsyncResult_o *AccountingManager_ResultCallbackfunc__BeginInvoke(
        AccountingManager_ResultCallbackfunc_o *this,
        int32_t result,
        int32_t perMonthAmount,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v10[3]; // [xsp+0h] [xbp-50h] BYREF
  int32_t v11; // [xsp+18h] [xbp-38h] BYREF
  int32_t v12; // [xsp+1Ch] [xbp-34h] BYREF

  v12 = result;
  v11 = perMonthAmount;
  if ( (byte_59700AE & 1) == 0 )
  {
    sub_2213A60(&AccountingManager_Result_TypeInfo);
    byte_59700AE = 1;
  }
  v10[2] = 0;
  v10[0] = j_il2cpp_value_box_0(AccountingManager_Result_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(qword_5984348, &v11);
  return (System_IAsyncResult_o *)sub_2213A14(this, v10, callback, object);
}


void AccountingManager_ResultCallbackfunc__EndInvoke(
        AccountingManager_ResultCallbackfunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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