void __fastcall AccountingManager___cctor(const MethodInfo *method)
{
  struct AccountingManager_StaticFields *static_fields; // x8
  PaymentInfo_o *v2; // x19
  const MethodInfo *v3; // x1
  struct AccountingManager_StaticFields *v4; // x0
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4A5AABA & 1) == 0 )
  {
    sub_1B885B0(&AccountingManager_TypeInfo);
    sub_1B885B0(&PaymentInfo_TypeInfo);
    byte_4A5AABA = 1;
  }
  static_fields = AccountingManager_TypeInfo->static_fields;
  *(_WORD *)&static_fields->isEnableStore = 0;
  static_fields->isRecoverStore = 1;
  static_fields->initializeResult = 0;
  static_fields->initializeStartTime = 0LL;
  v2 = (PaymentInfo_o *)sub_1B887FC(PaymentInfo_TypeInfo);
  PaymentInfo___ctor(v2, v3);
  v4 = AccountingManager_TypeInfo->static_fields;
  v4->paymentInfo = v2;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->paymentInfo, (int32_t)v2, v5, v6);
}


void __fastcall AccountingManager___ctor(AccountingManager_o *this, const MethodInfo *method)
{
  if ( (byte_4A5AAB9 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_AccountingManager___ctor__);
    byte_4A5AAB9 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_3739B30 *)Method_SingletonMonoBehaviour_AccountingManager___ctor__);
}


void __fastcall AccountingManager__AddExtraData(
        AccountingManager_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__object__o *Dictionary; // x0
  __int64 v5; // x1
  Il2CppObject *key; // x19
  Il2CppObject *v7; // x21
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  CrashReporter_o *v10; // x20
  System_String_o *v11; // x0
  __int64 v12; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v13; // [xsp+0h] [xbp-60h] BYREF

  if ( (byte_4A5AAB8 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__);
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    byte_4A5AAB8 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  if ( !System_String__IsNullOrEmpty(value, 0LL) )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    Dictionary = JsonManager__getDictionary(value, 0LL);
    if ( !Dictionary )
      sub_1B8880C(0LL, v5);
    System_Collections_Generic_Dictionary_object__object___GetEnumerator(
      &v13,
      (System_Collections_Generic_Dictionary_object__object__o *)Dictionary,
      (const MethodInfo_31C75F8 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
              &v13,
              (const MethodInfo_32C3FD0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
    {
      key = v13.fields._current.fields.key;
      v7 = v13.fields._current.fields.value;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
      if ( !v7 )
        sub_1B8880C(Instance, v9);
      v10 = (CrashReporter_o *)Instance;
      v11 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v7->klass->vtable[3].method)(
                                 v7,
                                 v7->klass->vtable[4].methodPtr);
      if ( !v10 )
        sub_1B8880C(v11, v12);
      CrashReporter__AddCustomKey(v10, (System_String_o *)key, v11, 0LL);
    }
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
      &v13,
      (const MethodInfo_32C40F0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
  }
}


void __fastcall AccountingManager__AddExtraDataProductID(AccountingManager_o *this, const MethodInfo *method)
{
  AccountingManager_c *v2; // x0
  struct PaymentInfo_o *paymentInfo; // x8
  AccountingManager_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4A5AAB7 & 1) == 0 )
  {
    sub_1B885B0(&AccountingManager_TypeInfo);
    sub_1B885B0(&StringLiteral_25139/*"{{\"ProductId\":\"{0}\"}}"*/);
    byte_4A5AAB7 = 1;
  }
  v2 = AccountingManager_TypeInfo;
  if ( !AccountingManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
    v2 = AccountingManager_TypeInfo;
  }
  paymentInfo = v2->static_fields->paymentInfo;
  if ( !paymentInfo )
    sub_1B8880C(v2, method);
  v4 = (AccountingManager_o *)System_String__Format(
                                (System_String_o *)StringLiteral_25139/*"{{\"ProductId\":\"{0}\"}}"*/,
                                (Il2CppObject *)paymentInfo->fields._ProductId_k__BackingField,
                                0LL);
  AccountingManager__AddExtraData(v4, (System_String_o *)v4, v5);
}


bool __fastcall AccountingManager__CallbackResult(
        AccountingManager_o *this,
        int32_t result,
        int32_t perMonthAmount,
        const MethodInfo *method)
{
  ServantStatusBattleListViewItem_o *p_callbackFunc; // x0
  struct AccountingManager_ResultCallbackfunc_o *v5; // x21
  struct AccountingManager_ResultCallbackfunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
  v5 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1B88554(p_callbackFunc, 0, perMonthAmount, (int32_t)method);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      (unsigned int)result,
      (unsigned int)perMonthAmount,
      *(_QWORD *)&v5->fields.extra_arg);
  }
  return v5 != 0LL;
}


void __fastcall AccountingManager__ClearAll(const MethodInfo *method)
{
  AccountingManager_c *v1; // x0
  System_String_o *PaymentHistoryPath; // x19
  AccountingManager_c *v3; // x0

  if ( (byte_4A5AAAE & 1) == 0 )
  {
    sub_1B885B0(&AccountingManager_TypeInfo);
    byte_4A5AAAE = 1;
  }
  v1 = AccountingManager_TypeInfo;
  if ( !AccountingManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
  PaymentHistoryPath = AccountingManager__GetPaymentHistoryPath((const MethodInfo *)v1);
  if ( System_IO_Directory__Exists(PaymentHistoryPath, 0LL) )
    System_IO_Directory__Delete(PaymentHistoryPath, 1, 0LL);
  v3 = AccountingManager_TypeInfo;
  if ( !AccountingManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
  AccountingManager__ClearPayment((const MethodInfo *)v3);
}


void __fastcall AccountingManager__ClearPayment(const MethodInfo *method)
{
  __int64 v1; // x1
  const MethodInfo *v2; // x2
  AccountingManager_c *v3; // x0
  PaymentInfo_o *paymentInfo; // x0
  const MethodInfo *v5; // x0
  System_String_o *PaymentFileName; // x19

  if ( (byte_4A5AAAF & 1) == 0 )
  {
    sub_1B885B0(&AccountingManager_TypeInfo);
    byte_4A5AAAF = 1;
  }
  v3 = AccountingManager_TypeInfo;
  if ( !AccountingManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
    v3 = AccountingManager_TypeInfo;
  }
  paymentInfo = v3->static_fields->paymentInfo;
  if ( !paymentInfo )
    sub_1B8880C(0LL, v1);
  PaymentInfo__Clear(paymentInfo, 0, v2);
  PaymentFileName = AccountingManager__GetPaymentFileName(v5);
  if ( System_IO_File__Exists(PaymentFileName, 0LL) )
    System_IO_File__Delete(PaymentFileName, 0LL);
}


void __fastcall AccountingManager__CreatePaymentHistoryDirectory(const MethodInfo *method)
{
  AccountingManager_c *v1; // x0
  System_String_o *PaymentHistoryPath; // x19

  if ( (byte_4A5AAAD & 1) == 0 )
  {
    sub_1B885B0(&AccountingManager_TypeInfo);
    byte_4A5AAAD = 1;
  }
  v1 = AccountingManager_TypeInfo;
  if ( !AccountingManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
  PaymentHistoryPath = AccountingManager__GetPaymentHistoryPath((const MethodInfo *)v1);
  if ( !System_IO_Directory__Exists(PaymentHistoryPath, 0LL) )
    System_IO_Directory__CreateDirectory(PaymentHistoryPath, 0LL);
}


void __fastcall AccountingManager__DeletePayment(AccountingManager_o *this, const MethodInfo *method)
{
  ManagerConfig_c *v2; // x0
  AccountingManager_c *v3; // x0

  if ( (byte_4A5AAB4 & 1) == 0 )
  {
    sub_1B885B0(&AccountingManager_TypeInfo);
    sub_1B885B0(&ManagerConfig_TypeInfo);
    byte_4A5AAB4 = 1;
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

  if ( (byte_4A5AAAB & 1) == 0 )
  {
    sub_1B885B0(&AccountingManager_TypeInfo);
    sub_1B885B0(&StringLiteral_1123/*"/"*/);
    byte_4A5AAAB = 1;
  }
  v3 = AccountingManager_TypeInfo;
  if ( !AccountingManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
  PaymentHistoryPath = AccountingManager__GetPaymentHistoryPath((const MethodInfo *)v3);
  return System_String__Concat_61718292(PaymentHistoryPath, (System_String_o *)StringLiteral_1123/*"/"*/, name, 0LL);
}


System_String_o *__fastcall AccountingManager__GetHistoryFileName_38610472(int64_t time, const MethodInfo *method)
{
  AccountingManager_c *v3; // x0
  System_String_o *PaymentHistoryPath; // x20
  System_String_o *FileName_37681452; // x2

  if ( (byte_4A5AAAC & 1) == 0 )
  {
    sub_1B885B0(&AccountingManager_TypeInfo);
    sub_1B885B0(&DatFileName_TypeInfo);
    sub_1B885B0(&StringLiteral_1123/*"/"*/);
    byte_4A5AAAC = 1;
  }
  v3 = AccountingManager_TypeInfo;
  if ( !AccountingManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
  PaymentHistoryPath = AccountingManager__GetPaymentHistoryPath((const MethodInfo *)v3);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName_37681452 = DatFileName__getFileName_37681452(22, time, 0LL);
  return System_String__Concat_61718292(
           PaymentHistoryPath,
           (System_String_o *)StringLiteral_1123/*"/"*/,
           FileName_37681452,
           0LL);
}


System_String_o *__fastcall AccountingManager__GetOldPaymentFileName(const MethodInfo *method)
{
  System_String_o *temporaryCachePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4A5AAA8 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Application_TypeInfo);
    sub_1B885B0(&DatFileName_TypeInfo);
    sub_1B885B0(&StringLiteral_1123/*"/"*/);
    byte_4A5AAA8 = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  temporaryCachePath = UnityEngine_Application__get_temporaryCachePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(21, 0LL);
  return System_String__Concat_61718292(temporaryCachePath, (System_String_o *)StringLiteral_1123/*"/"*/, FileName, 0LL);
}


System_String_o *__fastcall AccountingManager__GetPaymentFileName(const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4A5AAA9 & 1) == 0 )
  {
    sub_1B885B0(&AndroidUtil_TypeInfo);
    sub_1B885B0(&DatFileName_TypeInfo);
    sub_1B885B0(&StringLiteral_1123/*"/"*/);
    byte_4A5AAA9 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(21, 0LL);
  return System_String__Concat_61718292(DatFileSavePath, (System_String_o *)StringLiteral_1123/*"/"*/, FileName, 0LL);
}


System_String_array *__fastcall AccountingManager__GetPaymentHistoryList(
        AccountingManager_o *this,
        const MethodInfo *method)
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
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  uint16_t Chars; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4A5AAB1 & 1) == 0 )
  {
    sub_1B885B0(&AccountingManager_TypeInfo);
    sub_1B885B0(&char_TypeInfo);
    sub_1B885B0(&System_IO_DirectoryInfo_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_string__TypeInfo);
    sub_1B885B0(&StringLiteral_1109/*".meta"*/);
    byte_4A5AAB1 = 1;
  }
  v2 = AccountingManager_TypeInfo;
  Chars = 0;
  if ( !AccountingManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
  AccountingManager__CreatePaymentHistoryDirectory((const MethodInfo *)v2);
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_string___ctor__);
  PaymentHistoryPath = AccountingManager__GetPaymentHistoryPath(v4);
  v6 = (System_IO_DirectoryInfo_o *)sub_1B887FC(System_IO_DirectoryInfo_TypeInfo);
  System_IO_DirectoryInfo___ctor(v6, PaymentHistoryPath, 0LL);
  if ( !v6 )
    goto LABEL_27;
  Files = (System_String_o *)System_IO_DirectoryInfo__GetFiles(v6, 0LL);
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
      Files = (System_String_o *)((__int64 (__fastcall *)(System_String_o *, Il2CppMethodPointer))Files->klass->vtable._9_GetTypeCode.method)(
                                   Files,
                                   Files->klass->vtable._10_System_IConvertible_ToBoolean.methodPtr);
      if ( v11 >= LODWORD(v10[1].klass) )
LABEL_28:
        sub_1B88814(Files, v8);
      v15 = Files;
      Files = (System_String_o *)*v13;
      if ( !*v13 )
        break;
      Files = System_IO_FileSystemInfo__get_Extension((System_IO_FileSystemInfo_o *)Files, 0LL);
      if ( !v15 )
        break;
      v16 = Files;
      Chars = System_String__get_Chars(v15, 0, 0LL);
      if ( !char_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(char_TypeInfo);
      Files = (System_String_o *)System_Char__Equals_62338668((uint16_t)&Chars, 0x2Eu, 0LL);
      if ( ((unsigned __int8)Files & 1) == 0 )
      {
        if ( !v16 )
          break;
        Files = (System_String_o *)System_String__Equals_61715348(v16, (System_String_o *)StringLiteral_1109/*".meta"*/, 0LL);
        if ( ((unsigned __int8)Files & 1) == 0 )
        {
          if ( !v3 )
            break;
          items = v3->fields._items;
          v20 = Method_System_Collections_Generic_List_string__Add__;
          ++v3->fields._version;
          if ( !items )
            break;
          size = v3->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v3,
              (Il2CppObject *)v15,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
          }
          else
          {
            v22 = &items->obj.klass + size;
            v3->fields._size = size + 1;
            v22[4] = (Il2CppClass *)v15;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v22 + 4), (int32_t)v15, v17, v18);
          }
        }
      }
      klass = (int)v10[1].klass;
      if ( (int)++v11 >= klass )
        goto LABEL_25;
    }
LABEL_27:
    sub_1B8880C(Files, v8);
  }
LABEL_25:
  if ( !v3 )
    goto LABEL_27;
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v3,
                                  (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_string__ToArray__);
}


System_String_o *__fastcall AccountingManager__GetPaymentHistoryPath(const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x19
  System_String_o *FolderName; // x2

  if ( (byte_4A5AAAA & 1) == 0 )
  {
    sub_1B885B0(&AndroidUtil_TypeInfo);
    sub_1B885B0(&CacheFolderName_TypeInfo);
    sub_1B885B0(&StringLiteral_1123/*"/"*/);
    byte_4A5AAAA = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !CacheFolderName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo);
  FolderName = CacheFolderName__getFolderName(2, 0LL);
  return System_String__Concat_61718292(DatFileSavePath, (System_String_o *)StringLiteral_1123/*"/"*/, FolderName, 0LL);
}


void __fastcall AccountingManager__HistoryPayment(
        AccountingManager_o *this,
        System_String_o *state,
        const MethodInfo *method)
{
  ManagerConfig_c *v4; // x0
  AccountingManager_c *v5; // x0
  System_String_o *HistoryFileName_38610472; // x0
  const MethodInfo *v7; // x1
  struct PaymentInfo_o *paymentInfo; // x8
  const MethodInfo *v9; // x3
  PaymentInfo_o *v10; // x8

  if ( (byte_4A5AAB5 & 1) == 0 )
  {
    sub_1B885B0(&AccountingManager_TypeInfo);
    sub_1B885B0(&ManagerConfig_TypeInfo);
    byte_4A5AAB5 = 1;
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
      || (HistoryFileName_38610472 = AccountingManager__GetHistoryFileName_38610472(
                                       paymentInfo->fields._Time_k__BackingField,
                                       v7),
          (v10 = AccountingManager_TypeInfo->static_fields->paymentInfo) == 0LL) )
    {
      sub_1B8880C(HistoryFileName_38610472, v7);
    }
    PaymentInfo__WriteHistoryFile(v10, HistoryFileName_38610472, state, v9);
  }
}


bool __fastcall AccountingManager__IsLimitOver(AccountingManager_o *this, int32_t value, const MethodInfo *method)
{
  ManagerConfig_c *v4; // x0
  int32_t Limit; // w0

  if ( (byte_4A5AAB6 & 1) == 0 )
  {
    sub_1B885B0(&AgeVerificationMenu_TypeInfo);
    sub_1B885B0(&ManagerConfig_TypeInfo);
    byte_4A5AAB6 = 1;
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
  Limit = AgeVerificationMenu__GetLimit(0LL);
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
  System_String_o *v11; // x20
  System_IO_BinaryReader_c *klass; // x8
  __int64 v13; // x9
  int32_t *p_offset; // x10
  __int64 v15; // x0

  if ( (byte_4A5AAB0 & 1) == 0 )
  {
    sub_1B885B0(&AccountingManager_TypeInfo);
    sub_1B885B0(&System_IO_BinaryReader_TypeInfo);
    sub_1B885B0(&CatAndMouseGame_TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    byte_4A5AAB0 = 1;
  }
  v3 = AccountingManager_TypeInfo;
  if ( !AccountingManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
  AccountingManager__CreatePaymentHistoryDirectory((const MethodInfo *)v3);
  HistoryFileName = AccountingManager__GetHistoryFileName(name, v4);
  v6 = (System_IO_Stream_o *)System_IO_File__OpenRead(HistoryFileName, 0LL);
  v7 = (System_IO_BinaryReader_o *)sub_1B887FC(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v7, v6, 0LL);
  if ( !v7 )
    sub_1B8880C(v8, v9);
  v10 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v7->klass->vtable._22_ReadString.method)(
                             v7,
                             v7->klass->vtable._23_ReadChars.methodPtr);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v11 = CatAndMouseGame__MouseGame1(v10, 0, 0LL);
  klass = v7->klass;
  v13 = *(unsigned __int16 *)(&v7->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v7->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v13;
      p_offset += 4;
      if ( !v13 )
        goto LABEL_12;
    }
    v15 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_12:
    v15 = sub_1BDA590(v7, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v15)(v7, *(_QWORD *)(v15 + 8));
  return v11;
}


bool __fastcall AccountingManager__ReadOldPayment(AccountingManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return AccountingManager__ReadPayment_38612552(this, 0, v2);
}


bool __fastcall AccountingManager__ReadPayment(AccountingManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return AccountingManager__ReadPayment_38612552(this, 1, v2);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AccountingManager__ReadPayment_38612552(
        AccountingManager_o *this,
        bool isNewFormat,
        const MethodInfo *method)
{
  ManagerConfig_c *v4; // x0
  AccountingManager_c *v5; // x0
  System_String_o *OldPaymentFileName; // x0
  const MethodInfo *v7; // x3
  System_String_o *v8; // x20
  AccountingManager_c *v9; // x0
  PaymentInfo_o *paymentInfo; // x0
  AccountingManager_c *v12; // x0

  if ( (byte_4A5AAB2 & 1) == 0 )
  {
    sub_1B885B0(&AccountingManager_TypeInfo);
    sub_1B885B0(&ManagerConfig_TypeInfo);
    byte_4A5AAB2 = 1;
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
    sub_1B8880C(paymentInfo, isNewFormat);
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


void __fastcall AccountingManager__WritePayment(AccountingManager_o *this, const MethodInfo *method)
{
  ManagerConfig_c *v2; // x0
  int64_t Time; // x0
  __int64 v4; // x8
  _BOOL8 IsNullOrEmpty; // x0
  bool v6; // w19
  struct PaymentInfo_o *paymentInfo; // x19
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w1
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w1
  struct PaymentInfo_o *v14; // x21
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w1
  const MethodInfo *v18; // x2
  PaymentInfo_o *v19; // x8

  if ( (byte_4A5AAB3 & 1) == 0 )
  {
    sub_1B885B0(&AccountingManager_TypeInfo);
    sub_1B885B0(&AgeVerificationMenu_TypeInfo);
    sub_1B885B0(&ManagerConfig_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5AAB3 = 1;
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
      IsNullOrEmpty = System_String__IsNullOrEmpty(*(System_String_o **)(v4 + 16), 0LL);
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
          Time = NetworkManager__getTime(0LL);
          if ( !paymentInfo )
            goto LABEL_31;
          paymentInfo->fields._Time_k__BackingField = Time;
          Time = (int64_t)AccountingManager_TypeInfo->static_fields->paymentInfo;
          if ( !Time )
            goto LABEL_31;
          v10 = (int)StringLiteral_1/*""*/;
          *(_QWORD *)(Time + 48) = StringLiteral_1/*""*/;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(Time + 48), v10, v8, v9);
          Time = (int64_t)AccountingManager_TypeInfo->static_fields->paymentInfo;
          if ( !Time )
            goto LABEL_31;
          v13 = (int)StringLiteral_1/*""*/;
          *(_QWORD *)(Time + 40) = StringLiteral_1/*""*/;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(Time + 40), v13, v11, v12);
          v14 = AccountingManager_TypeInfo->static_fields->paymentInfo;
          if ( !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
          Time = AgeVerificationMenu__GetCumulativeAmount(0LL);
          if ( !v14 )
            goto LABEL_31;
          v14->fields._CumulativeAmount_k__BackingField = Time;
          Time = (int64_t)AccountingManager_TypeInfo->static_fields->paymentInfo;
          if ( !Time )
            goto LABEL_31;
          v17 = (int)StringLiteral_1/*""*/;
          *(_QWORD *)(Time + 64) = StringLiteral_1/*""*/;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(Time + 64), v17, v15, v16);
          Time = (int64_t)AccountingManager_TypeInfo;
        }
        if ( !*(_DWORD *)(Time + 224) )
          j_il2cpp_runtime_class_init_0(Time);
        Time = (int64_t)AccountingManager__GetPaymentFileName((const MethodInfo *)Time);
        v19 = AccountingManager_TypeInfo->static_fields->paymentInfo;
        if ( v19 )
        {
          PaymentInfo__WriteFile(v19, (System_String_o *)Time, v18);
          return;
        }
      }
    }
LABEL_31:
    sub_1B8880C(Time, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AccountingManager_ResultCallbackfunc___ctor(
        AccountingManager_ResultCallbackfunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 2 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19CEF40;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19CEEE8;
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  __int64 v13[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v14; // [xsp+28h] [xbp-38h] BYREF
  int32_t v15; // [xsp+2Ch] [xbp-34h] BYREF

  v14 = perMonthAmount;
  v15 = result;
  if ( (byte_4A5AABB & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&AccountingManager_Result_TypeInfo);
    byte_4A5AABB = 1;
  }
  v13[2] = 0LL;
  v13[0] = j_il2cpp_value_box_0(AccountingManager_Result_TypeInfo, &v15, *(_QWORD *)&perMonthAmount, callback, object);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14, v9, v10, v11);
  return (System_IAsyncResult_o *)sub_1B88564(this, v13, callback, object);
}


void __fastcall AccountingManager_ResultCallbackfunc__EndInvoke(
        AccountingManager_ResultCallbackfunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
}


void __fastcall AccountingManager_ResultCallbackfunc__Invoke(
        AccountingManager_ResultCallbackfunc_o *this,
        int32_t result,
        int32_t perMonthAmount,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    perMonthAmount,
    *(_QWORD *)&this->fields.extra_arg);
}