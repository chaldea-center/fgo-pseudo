void __fastcall AccountingManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x1
  __int64 v5; // x2
  struct AccountingManager_StaticFields *static_fields; // x8
  PaymentInfo_o *v7; // x19
  const MethodInfo *v8; // x1
  struct AccountingManager_StaticFields *v9; // x0
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4B15B3D & 1) == 0 )
  {
    sub_1BCA7E0(&AccountingManager_TypeInfo, v1, v2);
    sub_1BCA7E0(&PaymentInfo_TypeInfo, v4, v5);
    byte_4B15B3D = 1;
  }
  static_fields = AccountingManager_TypeInfo->static_fields;
  *(_WORD *)&static_fields->isEnableStore = 0;
  static_fields->isRecoverStore = 1;
  static_fields->initializeResult = 0;
  static_fields->initializeStartTime = 0LL;
  v7 = (PaymentInfo_o *)sub_1BCAA2C(PaymentInfo_TypeInfo, v1, v2, v3);
  PaymentInfo___ctor(v7, v8);
  v9 = AccountingManager_TypeInfo->static_fields;
  v9->paymentInfo = v7;
  sub_1BCA784((PartyOrganizationUtility_o *)&v9->paymentInfo, (int64_t)v7, v10, v11, v12, v13, v14, v15);
}


void __fastcall AccountingManager___ctor(AccountingManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B15B3C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AccountingManager___ctor__, method, v2);
    byte_4B15B3C = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_37DEF2C *)Method_SingletonMonoBehaviour_AccountingManager___ctor__);
}


void __fastcall AccountingManager__AddExtraData(
        AccountingManager_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  System_Collections_Generic_Dictionary_string__object__o *Dictionary; // x0
  __int64 v20; // x1
  Il2CppObject *key; // x19
  Il2CppObject *v22; // x21
  Il2CppObject *Instance; // x0
  __int64 v24; // x1
  CrashReporter_o *v25; // x20
  System_String_o *v26; // x0
  __int64 v27; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v28; // [xsp+0h] [xbp-60h] BYREF

  if ( (byte_4B15B3B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__, value, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__, v8, v9);
    sub_1BCA7E0(&JsonManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__, v14, v15);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v16, v17);
    byte_4B15B3B = 1;
  }
  memset(&v28, 0, sizeof(v28));
  if ( !System_String__IsNullOrEmpty(value, 0LL) )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v18);
    Dictionary = JsonManager__getDictionary(value, 0LL);
    if ( !Dictionary )
      sub_1BCAA3C(0LL, v20);
    System_Collections_Generic_Dictionary_object__object___GetEnumerator(
      &v28,
      (System_Collections_Generic_Dictionary_object__object__o *)Dictionary,
      (const MethodInfo_3265690 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
              &v28,
              (const MethodInfo_3364380 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
    {
      key = v28.fields._current.fields.key;
      v22 = v28.fields._current.fields.value;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
      if ( !v22 )
        sub_1BCAA3C(Instance, v24);
      v25 = (CrashReporter_o *)Instance;
      v26 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v22->klass->vtable[3].method)(
                                 v22,
                                 v22->klass->vtable[4].methodPtr);
      if ( !v25 )
        sub_1BCAA3C(v26, v27);
      CrashReporter__AddCustomKey(v25, (System_String_o *)key, v26, 0LL);
    }
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
      &v28,
      (const MethodInfo_33644A0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
  }
}


void __fastcall AccountingManager__AddExtraDataProductID(AccountingManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  AccountingManager_c *v5; // x0
  struct PaymentInfo_o *paymentInfo; // x8
  AccountingManager_o *v7; // x0
  const MethodInfo *v8; // x2

  if ( (byte_4B15B3A & 1) == 0 )
  {
    sub_1BCA7E0(&AccountingManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_25394/*"{{\"ProductId\":\"{0}\"}}"*/, v3, v4);
    byte_4B15B3A = 1;
  }
  v5 = AccountingManager_TypeInfo;
  if ( !AccountingManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo, method);
    v5 = AccountingManager_TypeInfo;
  }
  paymentInfo = v5->static_fields->paymentInfo;
  if ( !paymentInfo )
    sub_1BCAA3C(v5, method);
  v7 = (AccountingManager_o *)System_String__Format(
                                (System_String_o *)StringLiteral_25394/*"{{\"ProductId\":\"{0}\"}}"*/,
                                (Il2CppObject *)paymentInfo->fields._ProductId_k__BackingField,
                                0LL);
  AccountingManager__AddExtraData(v7, (System_String_o *)v7, v8);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AccountingManager__CallbackResult(
        AccountingManager_o *this,
        int32_t result,
        int32_t perMonthAmount,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_callbackFunc; // x0
  struct AccountingManager_ResultCallbackfunc_o *v9; // x21
  struct AccountingManager_ResultCallbackfunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (PartyOrganizationUtility_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1BCA784(p_callbackFunc, 0LL, *(int64_t *)&perMonthAmount, (int32_t)method, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD, _QWORD))v9->fields.m_target)(
      v9->fields.original_method_info,
      (unsigned int)result,
      (unsigned int)perMonthAmount,
      *(_QWORD *)&v9->fields.extra_arg);
  }
  return v9 != 0LL;
}


void __fastcall AccountingManager__ClearAll(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  AccountingManager_c *v3; // x0
  System_String_o *PaymentHistoryPath; // x19
  __int64 v5; // x1
  AccountingManager_c *v6; // x0

  if ( (byte_4B15B31 & 1) == 0 )
  {
    sub_1BCA7E0(&AccountingManager_TypeInfo, v1, v2);
    byte_4B15B31 = 1;
  }
  v3 = AccountingManager_TypeInfo;
  if ( !AccountingManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo, v1);
  PaymentHistoryPath = AccountingManager__GetPaymentHistoryPath((const MethodInfo *)v3);
  if ( System_IO_Directory__Exists(PaymentHistoryPath, 0LL) )
    System_IO_Directory__Delete(PaymentHistoryPath, 1, 0LL);
  v6 = AccountingManager_TypeInfo;
  if ( !AccountingManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo, v5);
  AccountingManager__ClearPayment((const MethodInfo *)v6);
}


void __fastcall AccountingManager__ClearPayment(const MethodInfo *method)
{
  __int64 v1; // x1
  const MethodInfo *v2; // x2
  AccountingManager_c *v3; // x0
  PaymentInfo_o *paymentInfo; // x0
  const MethodInfo *v5; // x0
  System_String_o *PaymentFileName; // x19

  if ( (byte_4B15B32 & 1) == 0 )
  {
    sub_1BCA7E0(&AccountingManager_TypeInfo, v1, v2);
    byte_4B15B32 = 1;
  }
  v3 = AccountingManager_TypeInfo;
  if ( !AccountingManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo, v1);
    v3 = AccountingManager_TypeInfo;
  }
  paymentInfo = v3->static_fields->paymentInfo;
  if ( !paymentInfo )
    sub_1BCAA3C(0LL, v1);
  PaymentInfo__Clear(paymentInfo, 0, v2);
  PaymentFileName = AccountingManager__GetPaymentFileName(v5);
  if ( System_IO_File__Exists(PaymentFileName, 0LL) )
    System_IO_File__Delete(PaymentFileName, 0LL);
}


void __fastcall AccountingManager__CreatePaymentHistoryDirectory(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  AccountingManager_c *v3; // x0
  System_String_o *PaymentHistoryPath; // x19

  if ( (byte_4B15B30 & 1) == 0 )
  {
    sub_1BCA7E0(&AccountingManager_TypeInfo, v1, v2);
    byte_4B15B30 = 1;
  }
  v3 = AccountingManager_TypeInfo;
  if ( !AccountingManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo, v1);
  PaymentHistoryPath = AccountingManager__GetPaymentHistoryPath((const MethodInfo *)v3);
  if ( !System_IO_Directory__Exists(PaymentHistoryPath, 0LL) )
    System_IO_Directory__CreateDirectory(PaymentHistoryPath, 0LL);
}


void __fastcall AccountingManager__DeletePayment(AccountingManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  ManagerConfig_c *v5; // x0
  AccountingManager_c *v6; // x0

  if ( (byte_4B15B37 & 1) == 0 )
  {
    sub_1BCA7E0(&AccountingManager_TypeInfo, method, v2);
    sub_1BCA7E0(&ManagerConfig_TypeInfo, v3, v4);
    byte_4B15B37 = 1;
  }
  v5 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, method);
    v5 = ManagerConfig_TypeInfo;
  }
  if ( !v5->static_fields->UseMock )
  {
    v6 = AccountingManager_TypeInfo;
    if ( !AccountingManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo, method);
    AccountingManager__ClearPayment((const MethodInfo *)v6);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  AccountingManager_c *v6; // x0
  System_String_o *PaymentHistoryPath; // x0

  if ( (byte_4B15B2E & 1) == 0 )
  {
    sub_1BCA7E0(&AccountingManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_1120/*"/"*/, v4, v5);
    byte_4B15B2E = 1;
  }
  v6 = AccountingManager_TypeInfo;
  if ( !AccountingManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo, method);
  PaymentHistoryPath = AccountingManager__GetPaymentHistoryPath((const MethodInfo *)v6);
  return System_String__Concat_62412480(PaymentHistoryPath, (System_String_o *)StringLiteral_1120/*"/"*/, name, 0LL);
}


System_String_o *__fastcall AccountingManager__GetHistoryFileName_39326140(int64_t time, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  AccountingManager_c *v8; // x0
  __int64 v9; // x1
  System_String_o *PaymentHistoryPath; // x20
  System_String_o *FileName_38395100; // x2

  if ( (byte_4B15B2F & 1) == 0 )
  {
    sub_1BCA7E0(&AccountingManager_TypeInfo, method, v2);
    sub_1BCA7E0(&DatFileName_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_1120/*"/"*/, v6, v7);
    byte_4B15B2F = 1;
  }
  v8 = AccountingManager_TypeInfo;
  if ( !AccountingManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo, method);
  PaymentHistoryPath = AccountingManager__GetPaymentHistoryPath((const MethodInfo *)v8);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo, v9);
  FileName_38395100 = DatFileName__getFileName_38395100(22, time, 0LL);
  return System_String__Concat_62412480(
           PaymentHistoryPath,
           (System_String_o *)StringLiteral_1120/*"/"*/,
           FileName_38395100,
           0LL);
}


System_String_o *__fastcall AccountingManager__GetOldPaymentFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  System_String_o *temporaryCachePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4B15B2B & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Application_TypeInfo, v1, v2);
    sub_1BCA7E0(&DatFileName_TypeInfo, v3, v4);
    sub_1BCA7E0(&StringLiteral_1120/*"/"*/, v5, v6);
    byte_4B15B2B = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, v1);
  temporaryCachePath = UnityEngine_Application__get_temporaryCachePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo, v7);
  FileName = DatFileName__getFileName(21, 0LL);
  return System_String__Concat_62412480(temporaryCachePath, (System_String_o *)StringLiteral_1120/*"/"*/, FileName, 0LL);
}


System_String_o *__fastcall AccountingManager__GetPaymentFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4B15B2C & 1) == 0 )
  {
    sub_1BCA7E0(&AndroidUtil_TypeInfo, v1, v2);
    sub_1BCA7E0(&DatFileName_TypeInfo, v3, v4);
    sub_1BCA7E0(&StringLiteral_1120/*"/"*/, v5, v6);
    byte_4B15B2C = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo, v1);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo, v7);
  FileName = DatFileName__getFileName(21, 0LL);
  return System_String__Concat_62412480(DatFileSavePath, (System_String_o *)StringLiteral_1120/*"/"*/, FileName, 0LL);
}


System_String_array *__fastcall AccountingManager__GetPaymentHistoryList(
        AccountingManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  AccountingManager_c *v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  System_Collections_Generic_List_object__o *v21; // x19
  const MethodInfo *v22; // x0
  System_String_o *PaymentHistoryPath; // x21
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  System_IO_DirectoryInfo_o *v27; // x20
  System_String_o *Files; // x0
  __int64 v29; // x1
  int klass; // w8
  System_String_o *v31; // x20
  unsigned int v32; // w23
  System_String_c **v33; // x22
  System_IO_FileSystemInfo_o **v34; // x22
  System_IO_FileSystemInfo_o *v35; // t1
  System_String_o *v36; // x21
  System_String_o *v37; // x22
  __int64 v38; // x1
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  struct System_Object_array *items; // x8
  _QWORD *v46; // x9
  __int64 size; // x10
  Il2CppClass **v48; // x0
  uint16_t Chars; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B15B34 & 1) == 0 )
  {
    sub_1BCA7E0(&AccountingManager_TypeInfo, method, v2);
    sub_1BCA7E0(&char_TypeInfo, v3, v4);
    sub_1BCA7E0(&System_IO_DirectoryInfo_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Add__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__ToArray__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string___ctor__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_string__TypeInfo, v13, v14);
    sub_1BCA7E0(&StringLiteral_1106/*".meta"*/, v15, v16);
    byte_4B15B34 = 1;
  }
  v17 = AccountingManager_TypeInfo;
  Chars = 0;
  if ( !AccountingManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo, method);
  AccountingManager__CreatePaymentHistoryDirectory((const MethodInfo *)v17);
  v21 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       v18,
                                                       v19,
                                                       v20);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
  PaymentHistoryPath = AccountingManager__GetPaymentHistoryPath(v22);
  v27 = (System_IO_DirectoryInfo_o *)sub_1BCAA2C(System_IO_DirectoryInfo_TypeInfo, v24, v25, v26);
  System_IO_DirectoryInfo___ctor(v27, PaymentHistoryPath, 0LL);
  if ( !v27 )
    goto LABEL_27;
  Files = (System_String_o *)System_IO_DirectoryInfo__GetFiles(v27, 0LL);
  if ( !Files )
    goto LABEL_27;
  klass = (int)Files[1].klass;
  v31 = Files;
  if ( klass >= 1 )
  {
    v32 = 0;
    while ( 1 )
    {
      if ( v32 >= klass )
        goto LABEL_28;
      v33 = &v31->klass + (int)v32;
      v35 = (System_IO_FileSystemInfo_o *)v33[4];
      v34 = (System_IO_FileSystemInfo_o **)(v33 + 4);
      Files = (System_String_o *)v35;
      if ( !v35 )
        break;
      Files = (System_String_o *)((__int64 (__fastcall *)(System_String_o *, Il2CppMethodPointer))Files->klass->vtable._9_GetTypeCode.method)(
                                   Files,
                                   Files->klass->vtable._10_System_IConvertible_ToBoolean.methodPtr);
      if ( v32 >= LODWORD(v31[1].klass) )
LABEL_28:
        sub_1BCAA44(Files, v29);
      v36 = Files;
      Files = (System_String_o *)*v34;
      if ( !*v34 )
        break;
      Files = System_IO_FileSystemInfo__get_Extension((System_IO_FileSystemInfo_o *)Files, 0LL);
      if ( !v36 )
        break;
      v37 = Files;
      Chars = System_String__get_Chars(v36, 0, 0LL);
      if ( !char_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(char_TypeInfo, v38);
      Files = (System_String_o *)System_Char__Equals_63033184((uint16_t)&Chars, 0x2Eu, 0LL);
      if ( ((unsigned __int8)Files & 1) == 0 )
      {
        if ( !v37 )
          break;
        Files = (System_String_o *)System_String__Equals_62409536(v37, (System_String_o *)StringLiteral_1106/*".meta"*/, 0LL);
        if ( ((unsigned __int8)Files & 1) == 0 )
        {
          if ( !v21 )
            break;
          items = v21->fields._items;
          v46 = Method_System_Collections_Generic_List_string__Add__;
          ++v21->fields._version;
          if ( !items )
            break;
          size = v21->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v21,
              (Il2CppObject *)v36,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
          }
          else
          {
            v48 = &items->obj.klass + size;
            v21->fields._size = size + 1;
            v48[4] = (Il2CppClass *)v36;
            sub_1BCA784((PartyOrganizationUtility_o *)(v48 + 4), (int64_t)v36, v39, v40, v41, v42, v43, v44);
          }
        }
      }
      klass = (int)v31[1].klass;
      if ( (int)++v32 >= klass )
        goto LABEL_25;
    }
LABEL_27:
    sub_1BCAA3C(Files, v29);
  }
LABEL_25:
  if ( !v21 )
    goto LABEL_27;
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v21,
                                  (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_string__ToArray__);
}


System_String_o *__fastcall AccountingManager__GetPaymentHistoryPath(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FolderName; // x2

  if ( (byte_4B15B2D & 1) == 0 )
  {
    sub_1BCA7E0(&AndroidUtil_TypeInfo, v1, v2);
    sub_1BCA7E0(&CacheFolderName_TypeInfo, v3, v4);
    sub_1BCA7E0(&StringLiteral_1120/*"/"*/, v5, v6);
    byte_4B15B2D = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo, v1);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !CacheFolderName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo, v7);
  FolderName = CacheFolderName__getFolderName(2, 0LL);
  return System_String__Concat_62412480(DatFileSavePath, (System_String_o *)StringLiteral_1120/*"/"*/, FolderName, 0LL);
}


void __fastcall AccountingManager__HistoryPayment(
        AccountingManager_o *this,
        System_String_o *state,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  ManagerConfig_c *v6; // x0
  AccountingManager_c *v7; // x0
  System_String_o *HistoryFileName_39326140; // x0
  const MethodInfo *v9; // x1
  struct PaymentInfo_o *paymentInfo; // x8
  const MethodInfo *v11; // x3
  PaymentInfo_o *v12; // x8

  if ( (byte_4B15B38 & 1) == 0 )
  {
    sub_1BCA7E0(&AccountingManager_TypeInfo, state, method);
    sub_1BCA7E0(&ManagerConfig_TypeInfo, v4, v5);
    byte_4B15B38 = 1;
  }
  v6 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, state);
    v6 = ManagerConfig_TypeInfo;
  }
  if ( !v6->static_fields->UseMock )
  {
    v7 = AccountingManager_TypeInfo;
    if ( !AccountingManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo, state);
    AccountingManager__CreatePaymentHistoryDirectory((const MethodInfo *)v7);
    paymentInfo = AccountingManager_TypeInfo->static_fields->paymentInfo;
    if ( !paymentInfo
      || (HistoryFileName_39326140 = AccountingManager__GetHistoryFileName_39326140(
                                       paymentInfo->fields._Time_k__BackingField,
                                       v9),
          (v12 = AccountingManager_TypeInfo->static_fields->paymentInfo) == 0LL) )
    {
      sub_1BCAA3C(HistoryFileName_39326140, v9);
    }
    PaymentInfo__WriteHistoryFile(v12, HistoryFileName_39326140, state, v11);
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AccountingManager__IsLimitOver(AccountingManager_o *this, int32_t value, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  ManagerConfig_c *v6; // x0
  int32_t Limit; // w0

  if ( (byte_4B15B39 & 1) == 0 )
  {
    sub_1BCA7E0(&AgeVerificationMenu_TypeInfo, *(_QWORD *)&value, method);
    sub_1BCA7E0(&ManagerConfig_TypeInfo, v4, v5);
    byte_4B15B39 = 1;
  }
  v6 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, *(_QWORD *)&value);
    v6 = ManagerConfig_TypeInfo;
  }
  if ( v6->static_fields->UseMock )
    return 1;
  if ( !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo, *(_QWORD *)&value);
  Limit = AgeVerificationMenu__GetLimit(0LL);
  return Limit >= 0 && Limit < value;
}


System_String_o *__fastcall AccountingManager__ReadHistory(System_String_o *name, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  AccountingManager_c *v10; // x0
  const MethodInfo *v11; // x1
  System_String_o *HistoryFileName; // x0
  System_IO_Stream_o *v13; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  System_IO_BinaryReader_o *v17; // x19
  __int64 v18; // x0
  __int64 v19; // x1
  __int64 v20; // x1
  System_String_o *v21; // x20
  System_String_o *v22; // x20
  System_IO_BinaryReader_c *klass; // x8
  __int64 v24; // x9
  int32_t *p_offset; // x10
  __int64 v26; // x0

  if ( (byte_4B15B33 & 1) == 0 )
  {
    sub_1BCA7E0(&AccountingManager_TypeInfo, method, v2);
    sub_1BCA7E0(&System_IO_BinaryReader_TypeInfo, v4, v5);
    sub_1BCA7E0(&CatAndMouseGame_TypeInfo, v6, v7);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v8, v9);
    byte_4B15B33 = 1;
  }
  v10 = AccountingManager_TypeInfo;
  if ( !AccountingManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo, method);
  AccountingManager__CreatePaymentHistoryDirectory((const MethodInfo *)v10);
  HistoryFileName = AccountingManager__GetHistoryFileName(name, v11);
  v13 = (System_IO_Stream_o *)System_IO_File__OpenRead(HistoryFileName, 0LL);
  v17 = (System_IO_BinaryReader_o *)sub_1BCAA2C(System_IO_BinaryReader_TypeInfo, v14, v15, v16);
  System_IO_BinaryReader___ctor(v17, v13, 0LL);
  if ( !v17 )
    sub_1BCAA3C(v18, v19);
  v21 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v17->klass->vtable._22_ReadString.method)(
                             v17,
                             v17->klass->vtable._23_ReadChars.methodPtr);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo, v20);
  v22 = CatAndMouseGame__MouseGame1(v21, 0, 0LL);
  klass = v17->klass;
  v24 = *(unsigned __int16 *)(&v17->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v17->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v24;
      p_offset += 4;
      if ( !v24 )
        goto LABEL_12;
    }
    v26 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_12:
    v26 = sub_1C1C7C0(v17, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v26)(v17, *(_QWORD *)(v26 + 8));
  return v22;
}


bool __fastcall AccountingManager__ReadOldPayment(AccountingManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return AccountingManager__ReadPayment_39328220(this, 0, v2);
}


bool __fastcall AccountingManager__ReadPayment(AccountingManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return AccountingManager__ReadPayment_39328220(this, 1, v2);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AccountingManager__ReadPayment_39328220(
        AccountingManager_o *this,
        bool isNewFormat,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  ManagerConfig_c *v6; // x0
  AccountingManager_c *v7; // x0
  System_String_o *OldPaymentFileName; // x0
  const MethodInfo *v9; // x3
  System_String_o *v10; // x20
  AccountingManager_c *v11; // x0
  PaymentInfo_o *paymentInfo; // x0
  AccountingManager_c *v14; // x0

  if ( (byte_4B15B35 & 1) == 0 )
  {
    sub_1BCA7E0(&AccountingManager_TypeInfo, isNewFormat, method);
    sub_1BCA7E0(&ManagerConfig_TypeInfo, v4, v5);
    byte_4B15B35 = 1;
  }
  v6 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, isNewFormat);
    v6 = ManagerConfig_TypeInfo;
  }
  if ( v6->static_fields->UseMock )
    goto LABEL_16;
  v7 = AccountingManager_TypeInfo;
  if ( !AccountingManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo, isNewFormat);
    if ( isNewFormat )
      goto LABEL_8;
LABEL_10:
    OldPaymentFileName = AccountingManager__GetOldPaymentFileName((const MethodInfo *)v7);
    goto LABEL_11;
  }
  if ( !isNewFormat )
    goto LABEL_10;
LABEL_8:
  OldPaymentFileName = AccountingManager__GetPaymentFileName((const MethodInfo *)v7);
LABEL_11:
  v10 = OldPaymentFileName;
  v11 = AccountingManager_TypeInfo;
  if ( !AccountingManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo, isNewFormat);
    v11 = AccountingManager_TypeInfo;
  }
  paymentInfo = v11->static_fields->paymentInfo;
  if ( !paymentInfo )
LABEL_20:
    sub_1BCAA3C(paymentInfo, isNewFormat);
  if ( PaymentInfo__ReadFile(paymentInfo, v10, isNewFormat, v9) )
    return 1;
LABEL_16:
  v14 = AccountingManager_TypeInfo;
  if ( !AccountingManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo, isNewFormat);
    v14 = AccountingManager_TypeInfo;
  }
  paymentInfo = v14->static_fields->paymentInfo;
  if ( !paymentInfo )
    goto LABEL_20;
  PaymentInfo__Clear(paymentInfo, 1, method);
  return 0;
}


void __fastcall AccountingManager__WritePayment(AccountingManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  ManagerConfig_c *v11; // x0
  int64_t Time; // x0
  __int64 v13; // x8
  _BOOL8 IsNullOrEmpty; // x0
  bool v15; // w19
  struct PaymentInfo_o *paymentInfo; // x19
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  void *v23; // x1
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  void *v30; // x1
  __int64 v31; // x1
  struct PaymentInfo_o *v32; // x21
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  void *v39; // x1
  const MethodInfo *v40; // x2
  PaymentInfo_o *v41; // x8

  if ( (byte_4B15B36 & 1) == 0 )
  {
    sub_1BCA7E0(&AccountingManager_TypeInfo, method, v2);
    sub_1BCA7E0(&AgeVerificationMenu_TypeInfo, v3, v4);
    sub_1BCA7E0(&ManagerConfig_TypeInfo, v5, v6);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v9, v10);
    byte_4B15B36 = 1;
  }
  v11 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, method);
    v11 = ManagerConfig_TypeInfo;
  }
  if ( !v11->static_fields->UseMock )
  {
    Time = (int64_t)AccountingManager_TypeInfo;
    if ( !AccountingManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo, method);
      Time = (int64_t)AccountingManager_TypeInfo;
    }
    v13 = *(_QWORD *)(*(_QWORD *)(Time + 184) + 16LL);
    if ( v13 )
    {
      IsNullOrEmpty = System_String__IsNullOrEmpty(*(System_String_o **)(v13 + 16), 0LL);
      v15 = IsNullOrEmpty;
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
        j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo, method);
        if ( v15 )
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
            j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo, method);
            paymentInfo = AccountingManager_TypeInfo->static_fields->paymentInfo;
          }
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
          Time = NetworkManager__getTime(0LL);
          if ( !paymentInfo )
            goto LABEL_31;
          paymentInfo->fields._Time_k__BackingField = Time;
          Time = (int64_t)AccountingManager_TypeInfo->static_fields->paymentInfo;
          if ( !Time )
            goto LABEL_31;
          v23 = StringLiteral_1/*""*/;
          *(_QWORD *)(Time + 48) = StringLiteral_1/*""*/;
          sub_1BCA784((PartyOrganizationUtility_o *)(Time + 48), (int64_t)v23, v17, v18, v19, v20, v21, v22);
          Time = (int64_t)AccountingManager_TypeInfo->static_fields->paymentInfo;
          if ( !Time )
            goto LABEL_31;
          v30 = StringLiteral_1/*""*/;
          *(_QWORD *)(Time + 40) = StringLiteral_1/*""*/;
          sub_1BCA784((PartyOrganizationUtility_o *)(Time + 40), (int64_t)v30, v24, v25, v26, v27, v28, v29);
          v32 = AccountingManager_TypeInfo->static_fields->paymentInfo;
          if ( !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo, v31);
          Time = AgeVerificationMenu__GetCumulativeAmount(0LL);
          if ( !v32 )
            goto LABEL_31;
          v32->fields._CumulativeAmount_k__BackingField = Time;
          Time = (int64_t)AccountingManager_TypeInfo->static_fields->paymentInfo;
          if ( !Time )
            goto LABEL_31;
          v39 = StringLiteral_1/*""*/;
          *(_QWORD *)(Time + 64) = StringLiteral_1/*""*/;
          sub_1BCA784((PartyOrganizationUtility_o *)(Time + 64), (int64_t)v39, v33, v34, v35, v36, v37, v38);
          Time = (int64_t)AccountingManager_TypeInfo;
        }
        if ( !*(_DWORD *)(Time + 224) )
          j_il2cpp_runtime_class_init_0(Time, method);
        Time = (int64_t)AccountingManager__GetPaymentFileName((const MethodInfo *)Time);
        v41 = AccountingManager_TypeInfo->static_fields->paymentInfo;
        if ( v41 )
        {
          PaymentInfo__WriteFile(v41, (System_String_o *)Time, v40);
          return;
        }
      }
    }
LABEL_31:
    sub_1BCAA3C(Time, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AccountingManager_ResultCallbackfunc___ctor(
        AccountingManager_ResultCallbackfunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 2 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A0D4A8;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0D450;
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
  __int64 v12[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v13; // [xsp+28h] [xbp-38h] BYREF
  int32_t v14; // [xsp+2Ch] [xbp-34h] BYREF

  v13 = perMonthAmount;
  v14 = result;
  if ( (byte_4B15B3E & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&result, *(_QWORD *)&perMonthAmount);
    sub_1BCA7E0(&AccountingManager_Result_TypeInfo, v9, v10);
    byte_4B15B3E = 1;
  }
  v12[2] = 0LL;
  v12[0] = j_il2cpp_value_box_0(AccountingManager_Result_TypeInfo, &v14);
  v12[1] = j_il2cpp_value_box_0(int_TypeInfo, &v13);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v12, callback, object);
}


void __fastcall AccountingManager_ResultCallbackfunc__EndInvoke(
        AccountingManager_ResultCallbackfunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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