void __fastcall AccountingManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  struct AccountingManager_StaticFields *static_fields; // x8
  PaymentInfo_o *v5; // x19
  const MethodInfo *v6; // x1
  struct AccountingManager_StaticFields *v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_49FBCD2 & 1) == 0 )
  {
    sub_1B640C8(&AccountingManager_TypeInfo, v1);
    sub_1B640C8(&PaymentInfo_TypeInfo, v3);
    byte_49FBCD2 = 1;
  }
  static_fields = AccountingManager_TypeInfo->static_fields;
  *(_WORD *)&static_fields->isEnableStore = 0;
  static_fields->isRecoverStore = 1;
  static_fields->initializeResult = 0;
  static_fields->initializeStartTime = 0LL;
  v5 = (PaymentInfo_o *)sub_1B64314(PaymentInfo_TypeInfo, v1, v2);
  PaymentInfo___ctor(v5, v6);
  v7 = AccountingManager_TypeInfo->static_fields;
  v7->paymentInfo = v5;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v7->paymentInfo, (int32_t)v5, v8, v9);
}


void __fastcall AccountingManager___ctor(AccountingManager_o *this, const MethodInfo *method)
{
  if ( (byte_49FBCD1 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_AccountingManager___ctor__, method);
    byte_49FBCD1 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_36EC454 *)Method_SingletonMonoBehaviour_AccountingManager___ctor__);
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
  Il2CppObject *key; // x19
  Il2CppObject *v13; // x21
  Il2CppObject *Instance; // x0
  CrashReporter_o *v15; // x20
  System_String_o *v16; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v17; // [xsp+0h] [xbp-60h] BYREF

  if ( (byte_49FBCD0 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__, value);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__, v6);
    sub_1B640C8(&JsonManager_TypeInfo, v7);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__, v9);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v10);
    byte_49FBCD0 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  if ( !System_String__IsNullOrEmpty(value, 0LL) )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    Dictionary = JsonManager__getDictionary(value, 0LL);
    if ( !Dictionary )
      sub_1B64324(0LL);
    System_Collections_Generic_Dictionary_object__object___GetEnumerator(
      &v17,
      (System_Collections_Generic_Dictionary_object__object__o *)Dictionary,
      (const MethodInfo_3179828 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
              &v17,
              (const MethodInfo_3275FB0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
    {
      key = v17.fields._current.fields.key;
      v13 = v17.fields._current.fields.value;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
      if ( !v13 )
        sub_1B64324(Instance);
      v15 = (CrashReporter_o *)Instance;
      v16 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v13->klass->vtable[3].method)(
                                 v13,
                                 v13->klass->vtable[4].methodPtr);
      if ( !v15 )
        sub_1B64324(v16);
      CrashReporter__AddCustomKey(v15, (System_String_o *)key, v16, 0LL);
    }
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
      &v17,
      (const MethodInfo_32760D0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
  }
}


void __fastcall AccountingManager__AddExtraDataProductID(AccountingManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  AccountingManager_c *v3; // x0
  struct PaymentInfo_o *paymentInfo; // x8
  AccountingManager_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_49FBCCF & 1) == 0 )
  {
    sub_1B640C8(&AccountingManager_TypeInfo, method);
    sub_1B640C8(&StringLiteral_25037/*"{{\"ProductId\":\"{0}\"}}"*/, v2);
    byte_49FBCCF = 1;
  }
  v3 = AccountingManager_TypeInfo;
  if ( !AccountingManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
    v3 = AccountingManager_TypeInfo;
  }
  paymentInfo = v3->static_fields->paymentInfo;
  if ( !paymentInfo )
    sub_1B64324(v3);
  v5 = (AccountingManager_o *)System_String__Format(
                                (System_String_o *)StringLiteral_25037/*"{{\"ProductId\":\"{0}\"}}"*/,
                                (Il2CppObject *)paymentInfo->fields._ProductId_k__BackingField,
                                0LL);
  AccountingManager__AddExtraData(v5, (System_String_o *)v5, v6);
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
    sub_1B6406C(p_callbackFunc, 0, perMonthAmount, (int32_t)method);
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
  __int64 v1; // x1
  AccountingManager_c *v2; // x0
  System_String_o *PaymentHistoryPath; // x19
  AccountingManager_c *v4; // x0

  if ( (byte_49FBCC6 & 1) == 0 )
  {
    sub_1B640C8(&AccountingManager_TypeInfo, v1);
    byte_49FBCC6 = 1;
  }
  v2 = AccountingManager_TypeInfo;
  if ( !AccountingManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
  PaymentHistoryPath = AccountingManager__GetPaymentHistoryPath((const MethodInfo *)v2);
  if ( System_IO_Directory__Exists(PaymentHistoryPath, 0LL) )
    System_IO_Directory__Delete(PaymentHistoryPath, 1, 0LL);
  v4 = AccountingManager_TypeInfo;
  if ( !AccountingManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
  AccountingManager__ClearPayment((const MethodInfo *)v4);
}


void __fastcall AccountingManager__ClearPayment(const MethodInfo *method)
{
  __int64 v1; // x1
  const MethodInfo *v2; // x2
  AccountingManager_c *v3; // x0
  PaymentInfo_o *paymentInfo; // x0
  const MethodInfo *v5; // x0
  System_String_o *PaymentFileName; // x19

  if ( (byte_49FBCC7 & 1) == 0 )
  {
    sub_1B640C8(&AccountingManager_TypeInfo, v1);
    byte_49FBCC7 = 1;
  }
  v3 = AccountingManager_TypeInfo;
  if ( !AccountingManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
    v3 = AccountingManager_TypeInfo;
  }
  paymentInfo = v3->static_fields->paymentInfo;
  if ( !paymentInfo )
    sub_1B64324(0LL);
  PaymentInfo__Clear(paymentInfo, 0, v2);
  PaymentFileName = AccountingManager__GetPaymentFileName(v5);
  if ( System_IO_File__Exists(PaymentFileName, 0LL) )
    System_IO_File__Delete(PaymentFileName, 0LL);
}


void __fastcall AccountingManager__CreatePaymentHistoryDirectory(const MethodInfo *method)
{
  __int64 v1; // x1
  AccountingManager_c *v2; // x0
  System_String_o *PaymentHistoryPath; // x19

  if ( (byte_49FBCC5 & 1) == 0 )
  {
    sub_1B640C8(&AccountingManager_TypeInfo, v1);
    byte_49FBCC5 = 1;
  }
  v2 = AccountingManager_TypeInfo;
  if ( !AccountingManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
  PaymentHistoryPath = AccountingManager__GetPaymentHistoryPath((const MethodInfo *)v2);
  if ( !System_IO_Directory__Exists(PaymentHistoryPath, 0LL) )
    System_IO_Directory__CreateDirectory(PaymentHistoryPath, 0LL);
}


void __fastcall AccountingManager__DeletePayment(AccountingManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  ManagerConfig_c *v3; // x0
  AccountingManager_c *v4; // x0

  if ( (byte_49FBCCC & 1) == 0 )
  {
    sub_1B640C8(&AccountingManager_TypeInfo, method);
    sub_1B640C8(&ManagerConfig_TypeInfo, v2);
    byte_49FBCCC = 1;
  }
  v3 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v3 = ManagerConfig_TypeInfo;
  }
  if ( !v3->static_fields->UseMock )
  {
    v4 = AccountingManager_TypeInfo;
    if ( !AccountingManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
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

  if ( (byte_49FBCC3 & 1) == 0 )
  {
    sub_1B640C8(&AccountingManager_TypeInfo, method);
    sub_1B640C8(&StringLiteral_1124/*"/"*/, v3);
    byte_49FBCC3 = 1;
  }
  v4 = AccountingManager_TypeInfo;
  if ( !AccountingManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
  PaymentHistoryPath = AccountingManager__GetPaymentHistoryPath((const MethodInfo *)v4);
  return System_String__Concat_61386656(PaymentHistoryPath, (System_String_o *)StringLiteral_1124/*"/"*/, name, 0LL);
}


System_String_o *__fastcall AccountingManager__GetHistoryFileName_38221424(int64_t time, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  AccountingManager_c *v5; // x0
  System_String_o *PaymentHistoryPath; // x20
  System_String_o *FileName_37369944; // x2

  if ( (byte_49FBCC4 & 1) == 0 )
  {
    sub_1B640C8(&AccountingManager_TypeInfo, method);
    sub_1B640C8(&DatFileName_TypeInfo, v3);
    sub_1B640C8(&StringLiteral_1124/*"/"*/, v4);
    byte_49FBCC4 = 1;
  }
  v5 = AccountingManager_TypeInfo;
  if ( !AccountingManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
  PaymentHistoryPath = AccountingManager__GetPaymentHistoryPath((const MethodInfo *)v5);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName_37369944 = DatFileName__getFileName_37369944(22, time, 0LL);
  return System_String__Concat_61386656(
           PaymentHistoryPath,
           (System_String_o *)StringLiteral_1124/*"/"*/,
           FileName_37369944,
           0LL);
}


System_String_o *__fastcall AccountingManager__GetOldPaymentFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *temporaryCachePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_49FBCC0 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Application_TypeInfo, v1);
    sub_1B640C8(&DatFileName_TypeInfo, v2);
    sub_1B640C8(&StringLiteral_1124/*"/"*/, v3);
    byte_49FBCC0 = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  temporaryCachePath = UnityEngine_Application__get_temporaryCachePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(21, 0LL);
  return System_String__Concat_61386656(temporaryCachePath, (System_String_o *)StringLiteral_1124/*"/"*/, FileName, 0LL);
}


System_String_o *__fastcall AccountingManager__GetPaymentFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_49FBCC1 & 1) == 0 )
  {
    sub_1B640C8(&AndroidUtil_TypeInfo, v1);
    sub_1B640C8(&DatFileName_TypeInfo, v2);
    sub_1B640C8(&StringLiteral_1124/*"/"*/, v3);
    byte_49FBCC1 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(21, 0LL);
  return System_String__Concat_61386656(DatFileSavePath, (System_String_o *)StringLiteral_1124/*"/"*/, FileName, 0LL);
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
  __int64 v8; // x1
  AccountingManager_c *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_List_object__o *v12; // x19
  const MethodInfo *v13; // x0
  System_String_o *PaymentHistoryPath; // x21
  __int64 v15; // x1
  __int64 v16; // x2
  System_IO_DirectoryInfo_o *v17; // x20
  System_String_o *Files; // x0
  __int64 v19; // x1
  int klass; // w8
  System_String_o *v21; // x20
  unsigned int v22; // w23
  System_String_c **v23; // x22
  System_IO_FileSystemInfo_o **v24; // x22
  System_IO_FileSystemInfo_o *v25; // t1
  System_String_o *v26; // x21
  System_String_o *v27; // x22
  int32_t v28; // w2
  int32_t v29; // w3
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  uint16_t Chars; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_49FBCC9 & 1) == 0 )
  {
    sub_1B640C8(&AccountingManager_TypeInfo, method);
    sub_1B640C8(&char_TypeInfo, v2);
    sub_1B640C8(&System_IO_DirectoryInfo_TypeInfo, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Add__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__ToArray__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_string___ctor__, v6);
    sub_1B640C8(&System_Collections_Generic_List_string__TypeInfo, v7);
    sub_1B640C8(&StringLiteral_1110/*".meta"*/, v8);
    byte_49FBCC9 = 1;
  }
  v9 = AccountingManager_TypeInfo;
  Chars = 0;
  if ( !AccountingManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
  AccountingManager__CreatePaymentHistoryDirectory((const MethodInfo *)v9);
  v12 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       v10,
                                                       v11);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_string___ctor__);
  PaymentHistoryPath = AccountingManager__GetPaymentHistoryPath(v13);
  v17 = (System_IO_DirectoryInfo_o *)sub_1B64314(System_IO_DirectoryInfo_TypeInfo, v15, v16);
  System_IO_DirectoryInfo___ctor(v17, PaymentHistoryPath, 0LL);
  if ( !v17 )
    goto LABEL_27;
  Files = (System_String_o *)System_IO_DirectoryInfo__GetFiles(v17, 0LL);
  if ( !Files )
    goto LABEL_27;
  klass = (int)Files[1].klass;
  v21 = Files;
  if ( klass >= 1 )
  {
    v22 = 0;
    while ( 1 )
    {
      if ( v22 >= klass )
        goto LABEL_28;
      v23 = &v21->klass + (int)v22;
      v25 = (System_IO_FileSystemInfo_o *)v23[4];
      v24 = (System_IO_FileSystemInfo_o **)(v23 + 4);
      Files = (System_String_o *)v25;
      if ( !v25 )
        break;
      Files = (System_String_o *)((__int64 (__fastcall *)(System_String_o *, Il2CppMethodPointer))Files->klass->vtable._9_GetTypeCode.method)(
                                   Files,
                                   Files->klass->vtable._10_System_IConvertible_ToBoolean.methodPtr);
      if ( v22 >= LODWORD(v21[1].klass) )
LABEL_28:
        sub_1B6432C(Files, v19);
      v26 = Files;
      Files = (System_String_o *)*v24;
      if ( !*v24 )
        break;
      Files = System_IO_FileSystemInfo__get_Extension((System_IO_FileSystemInfo_o *)Files, 0LL);
      if ( !v26 )
        break;
      v27 = Files;
      Chars = System_String__get_Chars(v26, 0, 0LL);
      if ( !char_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(char_TypeInfo);
      Files = (System_String_o *)System_Char__Equals_62007024((uint16_t)&Chars, 0x2Eu, 0LL);
      if ( ((unsigned __int8)Files & 1) == 0 )
      {
        if ( !v27 )
          break;
        Files = (System_String_o *)System_String__Equals_61383712(v27, (System_String_o *)StringLiteral_1110/*".meta"*/, 0LL);
        if ( ((unsigned __int8)Files & 1) == 0 )
        {
          if ( !v12 )
            break;
          items = v12->fields._items;
          v31 = Method_System_Collections_Generic_List_string__Add__;
          ++v12->fields._version;
          if ( !items )
            break;
          size = v12->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v12,
              (Il2CppObject *)v26,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
          }
          else
          {
            v33 = &items->obj.klass + size;
            v12->fields._size = size + 1;
            v33[4] = (Il2CppClass *)v26;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v33 + 4), (int32_t)v26, v28, v29);
          }
        }
      }
      klass = (int)v21[1].klass;
      if ( (int)++v22 >= klass )
        goto LABEL_25;
    }
LABEL_27:
    sub_1B64324(Files);
  }
LABEL_25:
  if ( !v12 )
    goto LABEL_27;
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v12,
                                  (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_string__ToArray__);
}


System_String_o *__fastcall AccountingManager__GetPaymentHistoryPath(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FolderName; // x2

  if ( (byte_49FBCC2 & 1) == 0 )
  {
    sub_1B640C8(&AndroidUtil_TypeInfo, v1);
    sub_1B640C8(&CacheFolderName_TypeInfo, v2);
    sub_1B640C8(&StringLiteral_1124/*"/"*/, v3);
    byte_49FBCC2 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !CacheFolderName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo);
  FolderName = CacheFolderName__getFolderName(2, 0LL);
  return System_String__Concat_61386656(DatFileSavePath, (System_String_o *)StringLiteral_1124/*"/"*/, FolderName, 0LL);
}


void __fastcall AccountingManager__HistoryPayment(
        AccountingManager_o *this,
        System_String_o *state,
        const MethodInfo *method)
{
  __int64 v4; // x1
  ManagerConfig_c *v5; // x0
  AccountingManager_c *v6; // x0
  System_String_o *HistoryFileName_38221424; // x0
  const MethodInfo *v8; // x1
  struct PaymentInfo_o *paymentInfo; // x8
  const MethodInfo *v10; // x3
  PaymentInfo_o *v11; // x8

  if ( (byte_49FBCCD & 1) == 0 )
  {
    sub_1B640C8(&AccountingManager_TypeInfo, state);
    sub_1B640C8(&ManagerConfig_TypeInfo, v4);
    byte_49FBCCD = 1;
  }
  v5 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v5 = ManagerConfig_TypeInfo;
  }
  if ( !v5->static_fields->UseMock )
  {
    v6 = AccountingManager_TypeInfo;
    if ( !AccountingManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
    AccountingManager__CreatePaymentHistoryDirectory((const MethodInfo *)v6);
    paymentInfo = AccountingManager_TypeInfo->static_fields->paymentInfo;
    if ( !paymentInfo
      || (HistoryFileName_38221424 = AccountingManager__GetHistoryFileName_38221424(
                                       paymentInfo->fields._Time_k__BackingField,
                                       v8),
          (v11 = AccountingManager_TypeInfo->static_fields->paymentInfo) == 0LL) )
    {
      sub_1B64324(HistoryFileName_38221424);
    }
    PaymentInfo__WriteHistoryFile(v11, HistoryFileName_38221424, state, v10);
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AccountingManager__IsLimitOver(AccountingManager_o *this, int32_t value, const MethodInfo *method)
{
  __int64 v4; // x1
  ManagerConfig_c *v5; // x0
  int32_t Limit; // w0

  if ( (byte_49FBCCE & 1) == 0 )
  {
    sub_1B640C8(&AgeVerificationMenu_TypeInfo, *(_QWORD *)&value);
    sub_1B640C8(&ManagerConfig_TypeInfo, v4);
    byte_49FBCCE = 1;
  }
  v5 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v5 = ManagerConfig_TypeInfo;
  }
  if ( v5->static_fields->UseMock )
    return 1;
  if ( !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
  Limit = AgeVerificationMenu__GetLimit(0LL);
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
  __int64 v17; // x9
  int32_t *p_offset; // x10
  __int64 v19; // x0

  if ( (byte_49FBCC8 & 1) == 0 )
  {
    sub_1B640C8(&AccountingManager_TypeInfo, method);
    sub_1B640C8(&System_IO_BinaryReader_TypeInfo, v3);
    sub_1B640C8(&CatAndMouseGame_TypeInfo, v4);
    sub_1B640C8(&System_IDisposable_TypeInfo, v5);
    byte_49FBCC8 = 1;
  }
  v6 = AccountingManager_TypeInfo;
  if ( !AccountingManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
  AccountingManager__CreatePaymentHistoryDirectory((const MethodInfo *)v6);
  HistoryFileName = AccountingManager__GetHistoryFileName(name, v7);
  v9 = (System_IO_Stream_o *)System_IO_File__OpenRead(HistoryFileName, 0LL);
  v12 = (System_IO_BinaryReader_o *)sub_1B64314(System_IO_BinaryReader_TypeInfo, v10, v11);
  System_IO_BinaryReader___ctor(v12, v9, 0LL);
  if ( !v12 )
    sub_1B64324(v13);
  v14 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v12->klass->vtable._22_ReadString.method)(
                             v12,
                             v12->klass->vtable._23_ReadChars.methodPtr);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v15 = CatAndMouseGame__MouseGame1(v14, 0, 0LL);
  klass = v12->klass;
  v17 = *(unsigned __int16 *)(&v12->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v12->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v17;
      p_offset += 4;
      if ( !v17 )
        goto LABEL_12;
    }
    v19 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_12:
    v19 = sub_1BB60A8(v12, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v19)(v12, *(_QWORD *)(v19 + 8));
  return v15;
}


bool __fastcall AccountingManager__ReadOldPayment(AccountingManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return AccountingManager__ReadPayment_38223504(this, 0, v2);
}


bool __fastcall AccountingManager__ReadPayment(AccountingManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return AccountingManager__ReadPayment_38223504(this, 1, v2);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AccountingManager__ReadPayment_38223504(
        AccountingManager_o *this,
        bool isNewFormat,
        const MethodInfo *method)
{
  __int64 v4; // x1
  ManagerConfig_c *v5; // x0
  AccountingManager_c *v6; // x0
  System_String_o *OldPaymentFileName; // x0
  const MethodInfo *v8; // x3
  System_String_o *v9; // x20
  AccountingManager_c *v10; // x0
  PaymentInfo_o *paymentInfo; // x0
  AccountingManager_c *v13; // x0

  if ( (byte_49FBCCA & 1) == 0 )
  {
    sub_1B640C8(&AccountingManager_TypeInfo, isNewFormat);
    sub_1B640C8(&ManagerConfig_TypeInfo, v4);
    byte_49FBCCA = 1;
  }
  v5 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v5 = ManagerConfig_TypeInfo;
  }
  if ( v5->static_fields->UseMock )
    goto LABEL_16;
  v6 = AccountingManager_TypeInfo;
  if ( !AccountingManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
    if ( isNewFormat )
      goto LABEL_8;
LABEL_10:
    OldPaymentFileName = AccountingManager__GetOldPaymentFileName((const MethodInfo *)v6);
    goto LABEL_11;
  }
  if ( !isNewFormat )
    goto LABEL_10;
LABEL_8:
  OldPaymentFileName = AccountingManager__GetPaymentFileName((const MethodInfo *)v6);
LABEL_11:
  v9 = OldPaymentFileName;
  v10 = AccountingManager_TypeInfo;
  if ( !AccountingManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
    v10 = AccountingManager_TypeInfo;
  }
  paymentInfo = v10->static_fields->paymentInfo;
  if ( !paymentInfo )
LABEL_20:
    sub_1B64324(paymentInfo);
  if ( PaymentInfo__ReadFile(paymentInfo, v9, isNewFormat, v8) )
    return 1;
LABEL_16:
  v13 = AccountingManager_TypeInfo;
  if ( !AccountingManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
    v13 = AccountingManager_TypeInfo;
  }
  paymentInfo = v13->static_fields->paymentInfo;
  if ( !paymentInfo )
    goto LABEL_20;
  PaymentInfo__Clear(paymentInfo, 1, method);
  return 0;
}


void __fastcall AccountingManager__WritePayment(AccountingManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  ManagerConfig_c *v6; // x0
  int64_t Time; // x0
  __int64 v8; // x8
  _BOOL8 IsNullOrEmpty; // x0
  bool v10; // w19
  struct PaymentInfo_o *paymentInfo; // x19
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w1
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w1
  struct PaymentInfo_o *v18; // x21
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w1
  const MethodInfo *v22; // x2
  PaymentInfo_o *v23; // x8

  if ( (byte_49FBCCB & 1) == 0 )
  {
    sub_1B640C8(&AccountingManager_TypeInfo, method);
    sub_1B640C8(&AgeVerificationMenu_TypeInfo, v2);
    sub_1B640C8(&ManagerConfig_TypeInfo, v3);
    sub_1B640C8(&NetworkManager_TypeInfo, v4);
    sub_1B640C8(&StringLiteral_1/*""*/, v5);
    byte_49FBCCB = 1;
  }
  v6 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v6 = ManagerConfig_TypeInfo;
  }
  if ( !v6->static_fields->UseMock )
  {
    Time = (int64_t)AccountingManager_TypeInfo;
    if ( !AccountingManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
      Time = (int64_t)AccountingManager_TypeInfo;
    }
    v8 = *(_QWORD *)(*(_QWORD *)(Time + 184) + 16LL);
    if ( v8 )
    {
      IsNullOrEmpty = System_String__IsNullOrEmpty(*(System_String_o **)(v8 + 16), 0LL);
      v10 = IsNullOrEmpty;
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
        if ( v10 )
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
          v14 = (int)StringLiteral_1/*""*/;
          *(_QWORD *)(Time + 48) = StringLiteral_1/*""*/;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(Time + 48), v14, v12, v13);
          Time = (int64_t)AccountingManager_TypeInfo->static_fields->paymentInfo;
          if ( !Time )
            goto LABEL_31;
          v17 = (int)StringLiteral_1/*""*/;
          *(_QWORD *)(Time + 40) = StringLiteral_1/*""*/;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(Time + 40), v17, v15, v16);
          v18 = AccountingManager_TypeInfo->static_fields->paymentInfo;
          if ( !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
          Time = AgeVerificationMenu__GetCumulativeAmount(0LL);
          if ( !v18 )
            goto LABEL_31;
          v18->fields._CumulativeAmount_k__BackingField = Time;
          Time = (int64_t)AccountingManager_TypeInfo->static_fields->paymentInfo;
          if ( !Time )
            goto LABEL_31;
          v21 = (int)StringLiteral_1/*""*/;
          *(_QWORD *)(Time + 64) = StringLiteral_1/*""*/;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(Time + 64), v21, v19, v20);
          Time = (int64_t)AccountingManager_TypeInfo;
        }
        if ( !*(_DWORD *)(Time + 224) )
          j_il2cpp_runtime_class_init_0(Time);
        Time = (int64_t)AccountingManager__GetPaymentFileName((const MethodInfo *)Time);
        v23 = AccountingManager_TypeInfo->static_fields->paymentInfo;
        if ( v23 )
        {
          PaymentInfo__WriteFile(v23, (System_String_o *)Time, v22);
          return;
        }
      }
    }
LABEL_31:
    sub_1B64324(Time);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64188(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64340(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B641F0(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19AC470;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19AC418;
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
  __int64 v11[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v12; // [xsp+28h] [xbp-38h] BYREF
  int32_t v13; // [xsp+2Ch] [xbp-34h] BYREF

  v12 = perMonthAmount;
  v13 = result;
  if ( (byte_49FBCD3 & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, *(_QWORD *)&result);
    sub_1B640C8(&AccountingManager_Result_TypeInfo, v9);
    byte_49FBCD3 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(AccountingManager_Result_TypeInfo, &v13);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_1B6407C(this, v11, callback, object);
}


void __fastcall AccountingManager_ResultCallbackfunc__EndInvoke(
        AccountingManager_ResultCallbackfunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
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