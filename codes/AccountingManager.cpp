void __fastcall AccountingManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  struct AccountingManager_StaticFields *static_fields; // x8
  PaymentInfo_o *v4; // x19
  const MethodInfo *v5; // x1
  struct AccountingManager_StaticFields *v6; // x0
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4AB56A1 & 1) == 0 )
  {
    sub_1BAB41C(&AccountingManager_TypeInfo, v1);
    sub_1BAB41C(&PaymentInfo_TypeInfo, v2);
    byte_4AB56A1 = 1;
  }
  static_fields = AccountingManager_TypeInfo->static_fields;
  *(_WORD *)&static_fields->isEnableStore = 0;
  static_fields->isRecoverStore = 1;
  static_fields->initializeResult = 0;
  static_fields->initializeStartTime = 0LL;
  v4 = (PaymentInfo_o *)sub_1BAB668(PaymentInfo_TypeInfo);
  PaymentInfo___ctor(v4, v5);
  v6 = AccountingManager_TypeInfo->static_fields;
  v6->paymentInfo = v4;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v6->paymentInfo, (int32_t)v4, v7, v8);
}


void __fastcall AccountingManager___ctor(AccountingManager_o *this, const MethodInfo *method)
{
  if ( (byte_4AB56A0 & 1) == 0 )
  {
    sub_1BAB41C(&Method_SingletonMonoBehaviour_AccountingManager___ctor__, method);
    byte_4AB56A0 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_378A644 *)Method_SingletonMonoBehaviour_AccountingManager___ctor__);
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
  Il2CppObject *key; // x19
  Il2CppObject *v14; // x21
  Il2CppObject *Instance; // x0
  __int64 v16; // x1
  CrashReporter_o *v17; // x20
  System_String_o *v18; // x0
  __int64 v19; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v20; // [xsp+0h] [xbp-60h] BYREF

  if ( (byte_4AB569F & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__, value);
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__, v4);
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__, v5);
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__, v6);
    sub_1BAB41C(&JsonManager_TypeInfo, v7);
    sub_1BAB41C(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__, v8);
    sub_1BAB41C(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__, v9);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v10);
    byte_4AB569F = 1;
  }
  memset(&v20, 0, sizeof(v20));
  if ( !System_String__IsNullOrEmpty(value, 0LL) )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    Dictionary = JsonManager__getDictionary(value, 0LL);
    if ( !Dictionary )
      sub_1BAB678(0LL, v12);
    System_Collections_Generic_Dictionary_object__object___GetEnumerator(
      &v20,
      (System_Collections_Generic_Dictionary_object__object__o *)Dictionary,
      (const MethodInfo_321397C *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
              &v20,
              (const MethodInfo_331195C *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
    {
      key = v20.fields._current.fields.key;
      v14 = v20.fields._current.fields.value;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
      if ( !v14 )
        sub_1BAB678(Instance, v16);
      v17 = (CrashReporter_o *)Instance;
      v18 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v14->klass->vtable[3].method)(
                                 v14,
                                 v14->klass->vtable[4].methodPtr);
      if ( !v17 )
        sub_1BAB678(v18, v19);
      CrashReporter__AddCustomKey(v17, (System_String_o *)key, v18, 0LL);
    }
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
      &v20,
      (const MethodInfo_3311A7C *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
  }
}


void __fastcall AccountingManager__AddExtraDataProductID(AccountingManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  AccountingManager_c *v3; // x0
  struct PaymentInfo_o *paymentInfo; // x8
  AccountingManager_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4AB569E & 1) == 0 )
  {
    sub_1BAB41C(&AccountingManager_TypeInfo, method);
    sub_1BAB41C(&StringLiteral_25182/*"{{\"ProductId\":\"{0}\"}}"*/, v2);
    byte_4AB569E = 1;
  }
  v3 = AccountingManager_TypeInfo;
  if ( !AccountingManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
    v3 = AccountingManager_TypeInfo;
  }
  paymentInfo = v3->static_fields->paymentInfo;
  if ( !paymentInfo )
    sub_1BAB678(v3, method);
  v5 = (AccountingManager_o *)System_String__Format(
                                (System_String_o *)StringLiteral_25182/*"{{\"ProductId\":\"{0}\"}}"*/,
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
    sub_1BAB3C0(p_callbackFunc, 0, perMonthAmount, (int32_t)method);
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

  if ( (byte_4AB5695 & 1) == 0 )
  {
    sub_1BAB41C(&AccountingManager_TypeInfo, v1);
    byte_4AB5695 = 1;
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

  if ( (byte_4AB5696 & 1) == 0 )
  {
    sub_1BAB41C(&AccountingManager_TypeInfo, v1);
    byte_4AB5696 = 1;
  }
  v3 = AccountingManager_TypeInfo;
  if ( !AccountingManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
    v3 = AccountingManager_TypeInfo;
  }
  paymentInfo = v3->static_fields->paymentInfo;
  if ( !paymentInfo )
    sub_1BAB678(0LL, v1);
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

  if ( (byte_4AB5694 & 1) == 0 )
  {
    sub_1BAB41C(&AccountingManager_TypeInfo, v1);
    byte_4AB5694 = 1;
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

  if ( (byte_4AB569B & 1) == 0 )
  {
    sub_1BAB41C(&AccountingManager_TypeInfo, method);
    sub_1BAB41C(&ManagerConfig_TypeInfo, v2);
    byte_4AB569B = 1;
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

  if ( (byte_4AB5692 & 1) == 0 )
  {
    sub_1BAB41C(&AccountingManager_TypeInfo, method);
    sub_1BAB41C(&StringLiteral_1120/*"/"*/, v3);
    byte_4AB5692 = 1;
  }
  v4 = AccountingManager_TypeInfo;
  if ( !AccountingManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
  PaymentHistoryPath = AccountingManager__GetPaymentHistoryPath((const MethodInfo *)v4);
  return System_String__Concat_62059388(PaymentHistoryPath, (System_String_o *)StringLiteral_1120/*"/"*/, name, 0LL);
}


System_String_o *__fastcall AccountingManager__GetHistoryFileName_38994668(int64_t time, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  AccountingManager_c *v5; // x0
  System_String_o *PaymentHistoryPath; // x20
  System_String_o *FileName_38065420; // x2

  if ( (byte_4AB5693 & 1) == 0 )
  {
    sub_1BAB41C(&AccountingManager_TypeInfo, method);
    sub_1BAB41C(&DatFileName_TypeInfo, v3);
    sub_1BAB41C(&StringLiteral_1120/*"/"*/, v4);
    byte_4AB5693 = 1;
  }
  v5 = AccountingManager_TypeInfo;
  if ( !AccountingManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
  PaymentHistoryPath = AccountingManager__GetPaymentHistoryPath((const MethodInfo *)v5);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName_38065420 = DatFileName__getFileName_38065420(22, time, 0LL);
  return System_String__Concat_62059388(
           PaymentHistoryPath,
           (System_String_o *)StringLiteral_1120/*"/"*/,
           FileName_38065420,
           0LL);
}


System_String_o *__fastcall AccountingManager__GetOldPaymentFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *temporaryCachePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4AB568F & 1) == 0 )
  {
    sub_1BAB41C(&UnityEngine_Application_TypeInfo, v1);
    sub_1BAB41C(&DatFileName_TypeInfo, v2);
    sub_1BAB41C(&StringLiteral_1120/*"/"*/, v3);
    byte_4AB568F = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  temporaryCachePath = UnityEngine_Application__get_temporaryCachePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(21, 0LL);
  return System_String__Concat_62059388(temporaryCachePath, (System_String_o *)StringLiteral_1120/*"/"*/, FileName, 0LL);
}


System_String_o *__fastcall AccountingManager__GetPaymentFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4AB5690 & 1) == 0 )
  {
    sub_1BAB41C(&AndroidUtil_TypeInfo, v1);
    sub_1BAB41C(&DatFileName_TypeInfo, v2);
    sub_1BAB41C(&StringLiteral_1120/*"/"*/, v3);
    byte_4AB5690 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(21, 0LL);
  return System_String__Concat_62059388(DatFileSavePath, (System_String_o *)StringLiteral_1120/*"/"*/, FileName, 0LL);
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
  System_Collections_Generic_List_object__o *v10; // x19
  const MethodInfo *v11; // x0
  System_String_o *PaymentHistoryPath; // x21
  System_IO_DirectoryInfo_o *v13; // x20
  System_String_o *Files; // x0
  __int64 v15; // x1
  int klass; // w8
  System_String_o *v17; // x20
  unsigned int v18; // w23
  System_String_c **v19; // x22
  System_IO_FileSystemInfo_o **v20; // x22
  System_IO_FileSystemInfo_o *v21; // t1
  System_String_o *v22; // x21
  System_String_o *v23; // x22
  int32_t v24; // w2
  int32_t v25; // w3
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  uint16_t Chars; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4AB5698 & 1) == 0 )
  {
    sub_1BAB41C(&AccountingManager_TypeInfo, method);
    sub_1BAB41C(&char_TypeInfo, v2);
    sub_1BAB41C(&System_IO_DirectoryInfo_TypeInfo, v3);
    sub_1BAB41C(&Method_System_Collections_Generic_List_string__Add__, v4);
    sub_1BAB41C(&Method_System_Collections_Generic_List_string__ToArray__, v5);
    sub_1BAB41C(&Method_System_Collections_Generic_List_string___ctor__, v6);
    sub_1BAB41C(&System_Collections_Generic_List_string__TypeInfo, v7);
    sub_1BAB41C(&StringLiteral_1106/*".meta"*/, v8);
    byte_4AB5698 = 1;
  }
  v9 = AccountingManager_TypeInfo;
  Chars = 0;
  if ( !AccountingManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
  AccountingManager__CreatePaymentHistoryDirectory((const MethodInfo *)v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_354D088 *)Method_System_Collections_Generic_List_string___ctor__);
  PaymentHistoryPath = AccountingManager__GetPaymentHistoryPath(v11);
  v13 = (System_IO_DirectoryInfo_o *)sub_1BAB668(System_IO_DirectoryInfo_TypeInfo);
  System_IO_DirectoryInfo___ctor(v13, PaymentHistoryPath, 0LL);
  if ( !v13 )
    goto LABEL_27;
  Files = (System_String_o *)System_IO_DirectoryInfo__GetFiles(v13, 0LL);
  if ( !Files )
    goto LABEL_27;
  klass = (int)Files[1].klass;
  v17 = Files;
  if ( klass >= 1 )
  {
    v18 = 0;
    while ( 1 )
    {
      if ( v18 >= klass )
        goto LABEL_28;
      v19 = &v17->klass + (int)v18;
      v21 = (System_IO_FileSystemInfo_o *)v19[4];
      v20 = (System_IO_FileSystemInfo_o **)(v19 + 4);
      Files = (System_String_o *)v21;
      if ( !v21 )
        break;
      Files = (System_String_o *)((__int64 (__fastcall *)(System_String_o *, Il2CppMethodPointer))Files->klass->vtable._9_GetTypeCode.method)(
                                   Files,
                                   Files->klass->vtable._10_System_IConvertible_ToBoolean.methodPtr);
      if ( v18 >= LODWORD(v17[1].klass) )
LABEL_28:
        sub_1BAB680(Files, v15);
      v22 = Files;
      Files = (System_String_o *)*v20;
      if ( !*v20 )
        break;
      Files = System_IO_FileSystemInfo__get_Extension((System_IO_FileSystemInfo_o *)Files, 0LL);
      if ( !v22 )
        break;
      v23 = Files;
      Chars = System_String__get_Chars(v22, 0, 0LL);
      if ( !char_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(char_TypeInfo);
      Files = (System_String_o *)System_Char__Equals_62679764((uint16_t)&Chars, 0x2Eu, 0LL);
      if ( ((unsigned __int8)Files & 1) == 0 )
      {
        if ( !v23 )
          break;
        Files = (System_String_o *)System_String__Equals_62056444(v23, (System_String_o *)StringLiteral_1106/*".meta"*/, 0LL);
        if ( ((unsigned __int8)Files & 1) == 0 )
        {
          if ( !v10 )
            break;
          items = v10->fields._items;
          v27 = Method_System_Collections_Generic_List_string__Add__;
          ++v10->fields._version;
          if ( !items )
            break;
          size = v10->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v10,
              (Il2CppObject *)v22,
              *(const MethodInfo_354D8BC **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
          }
          else
          {
            v29 = &items->obj.klass + size;
            v10->fields._size = size + 1;
            v29[4] = (Il2CppClass *)v22;
            sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v29 + 4), (int32_t)v22, v24, v25);
          }
        }
      }
      klass = (int)v17[1].klass;
      if ( (int)++v18 >= klass )
        goto LABEL_25;
    }
LABEL_27:
    sub_1BAB678(Files, v15);
  }
LABEL_25:
  if ( !v10 )
    goto LABEL_27;
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v10,
                                  (const MethodInfo_354F414 *)Method_System_Collections_Generic_List_string__ToArray__);
}


System_String_o *__fastcall AccountingManager__GetPaymentHistoryPath(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FolderName; // x2

  if ( (byte_4AB5691 & 1) == 0 )
  {
    sub_1BAB41C(&AndroidUtil_TypeInfo, v1);
    sub_1BAB41C(&CacheFolderName_TypeInfo, v2);
    sub_1BAB41C(&StringLiteral_1120/*"/"*/, v3);
    byte_4AB5691 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !CacheFolderName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo);
  FolderName = CacheFolderName__getFolderName(2, 0LL);
  return System_String__Concat_62059388(DatFileSavePath, (System_String_o *)StringLiteral_1120/*"/"*/, FolderName, 0LL);
}


void __fastcall AccountingManager__HistoryPayment(
        AccountingManager_o *this,
        System_String_o *state,
        const MethodInfo *method)
{
  __int64 v4; // x1
  ManagerConfig_c *v5; // x0
  AccountingManager_c *v6; // x0
  System_String_o *HistoryFileName_38994668; // x0
  const MethodInfo *v8; // x1
  struct PaymentInfo_o *paymentInfo; // x8
  const MethodInfo *v10; // x3
  PaymentInfo_o *v11; // x8

  if ( (byte_4AB569C & 1) == 0 )
  {
    sub_1BAB41C(&AccountingManager_TypeInfo, state);
    sub_1BAB41C(&ManagerConfig_TypeInfo, v4);
    byte_4AB569C = 1;
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
      || (HistoryFileName_38994668 = AccountingManager__GetHistoryFileName_38994668(
                                       paymentInfo->fields._Time_k__BackingField,
                                       v8),
          (v11 = AccountingManager_TypeInfo->static_fields->paymentInfo) == 0LL) )
    {
      sub_1BAB678(HistoryFileName_38994668, v8);
    }
    PaymentInfo__WriteHistoryFile(v11, HistoryFileName_38994668, state, v10);
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AccountingManager__IsLimitOver(AccountingManager_o *this, int32_t value, const MethodInfo *method)
{
  __int64 v4; // x1
  ManagerConfig_c *v5; // x0
  int32_t Limit; // w0

  if ( (byte_4AB569D & 1) == 0 )
  {
    sub_1BAB41C(&AgeVerificationMenu_TypeInfo, *(_QWORD *)&value);
    sub_1BAB41C(&ManagerConfig_TypeInfo, v4);
    byte_4AB569D = 1;
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
  System_IO_BinaryReader_o *v10; // x19
  __int64 v11; // x0
  __int64 v12; // x1
  System_String_o *v13; // x20
  System_String_o *v14; // x20
  System_IO_BinaryReader_c *klass; // x8
  __int64 v16; // x9
  int32_t *p_offset; // x10
  __int64 v18; // x0

  if ( (byte_4AB5697 & 1) == 0 )
  {
    sub_1BAB41C(&AccountingManager_TypeInfo, method);
    sub_1BAB41C(&System_IO_BinaryReader_TypeInfo, v3);
    sub_1BAB41C(&CatAndMouseGame_TypeInfo, v4);
    sub_1BAB41C(&System_IDisposable_TypeInfo, v5);
    byte_4AB5697 = 1;
  }
  v6 = AccountingManager_TypeInfo;
  if ( !AccountingManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
  AccountingManager__CreatePaymentHistoryDirectory((const MethodInfo *)v6);
  HistoryFileName = AccountingManager__GetHistoryFileName(name, v7);
  v9 = (System_IO_Stream_o *)System_IO_File__OpenRead(HistoryFileName, 0LL);
  v10 = (System_IO_BinaryReader_o *)sub_1BAB668(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v10, v9, 0LL);
  if ( !v10 )
    sub_1BAB678(v11, v12);
  v13 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v10->klass->vtable._22_ReadString.method)(
                             v10,
                             v10->klass->vtable._23_ReadChars.methodPtr);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v14 = CatAndMouseGame__MouseGame1(v13, 0, 0LL);
  klass = v10->klass;
  v16 = *(unsigned __int16 *)(&v10->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v10->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v16;
      p_offset += 4;
      if ( !v16 )
        goto LABEL_12;
    }
    v18 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_12:
    v18 = sub_1BFD3FC(v10, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v18)(v10, *(_QWORD *)(v18 + 8));
  return v14;
}


bool __fastcall AccountingManager__ReadOldPayment(AccountingManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return AccountingManager__ReadPayment_38996748(this, 0, v2);
}


bool __fastcall AccountingManager__ReadPayment(AccountingManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return AccountingManager__ReadPayment_38996748(this, 1, v2);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AccountingManager__ReadPayment_38996748(
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

  if ( (byte_4AB5699 & 1) == 0 )
  {
    sub_1BAB41C(&AccountingManager_TypeInfo, isNewFormat);
    sub_1BAB41C(&ManagerConfig_TypeInfo, v4);
    byte_4AB5699 = 1;
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
    sub_1BAB678(paymentInfo, isNewFormat);
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

  if ( (byte_4AB569A & 1) == 0 )
  {
    sub_1BAB41C(&AccountingManager_TypeInfo, method);
    sub_1BAB41C(&AgeVerificationMenu_TypeInfo, v2);
    sub_1BAB41C(&ManagerConfig_TypeInfo, v3);
    sub_1BAB41C(&NetworkManager_TypeInfo, v4);
    sub_1BAB41C(&StringLiteral_1/*""*/, v5);
    byte_4AB569A = 1;
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
          sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(Time + 48), v14, v12, v13);
          Time = (int64_t)AccountingManager_TypeInfo->static_fields->paymentInfo;
          if ( !Time )
            goto LABEL_31;
          v17 = (int)StringLiteral_1/*""*/;
          *(_QWORD *)(Time + 40) = StringLiteral_1/*""*/;
          sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(Time + 40), v17, v15, v16);
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
          sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(Time + 64), v21, v19, v20);
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
    sub_1BAB678(Time, method);
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
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BAB4DC(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BAB694(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BAB544(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19EF4E0;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19EF488;
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
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v14[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v15; // [xsp+28h] [xbp-38h] BYREF
  int32_t v16; // [xsp+2Ch] [xbp-34h] BYREF

  v15 = perMonthAmount;
  v16 = result;
  if ( (byte_4AB56A2 & 1) == 0 )
  {
    sub_1BAB41C(&int_TypeInfo, *(_QWORD *)&result);
    sub_1BAB41C(&AccountingManager_Result_TypeInfo, v9);
    byte_4AB56A2 = 1;
  }
  v14[2] = 0LL;
  v14[0] = j_il2cpp_value_box_0(AccountingManager_Result_TypeInfo, &v16, *(_QWORD *)&perMonthAmount, callback, object);
  v14[1] = j_il2cpp_value_box_0(int_TypeInfo, &v15, v10, v11, v12);
  return (System_IAsyncResult_o *)sub_1BAB3D0(this, v14, callback, object);
}


void __fastcall AccountingManager_ResultCallbackfunc__EndInvoke(
        AccountingManager_ResultCallbackfunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BAB3D4(result, 0LL, method);
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