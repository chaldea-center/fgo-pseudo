void PurchaseLogicExternal___cctor(const MethodInfo *method)
{
  if ( (byte_5937F9B & 1) == 0 )
  {
    sub_21FFC50(&PurchaseLogicExternal_TypeInfo);
    byte_5937F9B = 1;
  }
  PurchaseLogicExternal_TypeInfo->static_fields->isEnd = 1;
}


void PurchaseLogicExternal___ctor(PurchaseLogicExternal_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void PurchaseLogicExternal__ExternalPaymentCheck(PurchaseLogicExternal_o *this, const MethodInfo *method)
{
  PurchaseLogicExternal_c *v3; // x0
  struct PurchaseLogicExternal_StaticFields *static_fields; // x8
  NetworkManager_ResultCallbackFunc_c *v5; // x0
  NetworkManager_ResultCallbackFunc_o *v6; // x20
  __int64 v7; // x1
  Il2CppObject *Request_object; // x0
  __int64 v9; // x1

  if ( (byte_5937F96 & 1) == 0 )
  {
    sub_21FFC50(&Method_NetworkManager_getRequest_ExternalPaymentReflectRequest___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_PurchaseLogicExternal_ExternalPaymentCheckCallBack__);
    sub_21FFC50(&PurchaseLogicExternal_TypeInfo);
    sub_21FFC50(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_5937F96 = 1;
  }
  v3 = PurchaseLogicExternal_TypeInfo;
  if ( !*(&PurchaseLogicExternal_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicExternal_TypeInfo, method);
    v3 = PurchaseLogicExternal_TypeInfo;
  }
  static_fields = v3->static_fields;
  v5 = NetworkManager_ResultCallbackFunc_TypeInfo;
  static_fields->isEnd = 0;
  v6 = (NetworkManager_ResultCallbackFunc_o *)sub_21FFEBC(v5);
  NetworkManager_ResultCallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    Method_PurchaseLogicExternal_ExternalPaymentCheckCallBack__,
    0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7);
  Request_object = NetworkManager__getRequest_object_(
                     v6,
                     (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_ExternalPaymentReflectRequest___);
  if ( !Request_object )
    sub_21FFECC(0, v9);
  RequestBase__beginRequest((RequestBase_o *)Request_object, 0);
}


void PurchaseLogicExternal__ExternalPaymentCheckCallBack(
        PurchaseLogicExternal_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__c *v4; // x1
  void *Dictionary; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  const MethodInfo *v8; // x3
  System_Collections_Generic_List_object__o *v9; // x19
  __int64 naturalAligment; // x9
  int v11; // w8
  int32_t v12; // w21
  int32_t v13; // w20
  int32_t v14; // w22
  __int64 v15; // x2
  __int64 v16; // x3
  System_Collections_Generic_Dictionary_object__object__o *v17; // x23
  System_Collections_Generic_Dictionary_string__object__c *v18; // x1
  __int64 v19; // x9
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x1
  int32_t v23; // w24
  System_String_o *v24; // x25
  int v25; // w29
  int v26; // w26
  PurchaseLogicExternal_o *v27; // x0
  double klass_low; // d8
  const MethodInfo *v29; // x3
  PurchaseLogicExternal_o *v30; // x0
  const MethodInfo *v31; // x3
  PurchaseBehaviour_c *v32; // x0
  PurchaseBehaviour_c *v33; // x8
  PurchaseLogicExternal_c *v34; // x0
  int v35; // w9
  const MethodInfo *v36; // x0
  PurchaseLogicExternal_o *v37; // x0
  int32_t v38; // w1
  System_String_o *v39; // x2
  const MethodInfo *v40; // x3
  long double v41; // q0

  if ( (byte_5937F97 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_21FFC50(&JsonManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_object__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_object__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_object__TypeInfo);
    sub_21FFC50(&PurchaseBehaviour_TypeInfo);
    sub_21FFC50(&PurchaseLogicExternal_TypeInfo);
    sub_21FFC50(&StringLiteral_20555/*"freeStoneNum"*/);
    sub_21FFC50(&StringLiteral_23904/*"price"*/);
    sub_21FFC50(&StringLiteral_23578/*"orderId"*/);
    sub_21FFC50(&StringLiteral_23290/*"ng"*/);
    sub_21FFC50(&StringLiteral_18691/*"chargeStoneNum"*/);
    sub_21FFC50(&StringLiteral_20195/*"externalPaymentResults"*/);
    sub_21FFC50(&StringLiteral_25511/*"type"*/);
    byte_5937F97 = 1;
  }
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_23290/*"ng"*/, 0) )
  {
    v32 = PurchaseBehaviour_TypeInfo;
    if ( !*(&PurchaseBehaviour_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo, v4);
      v32 = PurchaseBehaviour_TypeInfo;
    }
    v32->static_fields->isOpenPurchaseDialogEvent = 0;
    goto LABEL_36;
  }
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v4);
  Dictionary = JsonManager__getDictionary(result, 0);
  if ( !Dictionary
    || (Dictionary = System_Collections_Generic_Dictionary_object__object___get_Item(
                       (System_Collections_Generic_Dictionary_object__object__o *)Dictionary,
                       (Il2CppObject *)StringLiteral_20195/*"externalPaymentResults"*/,
                       (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
LABEL_39:
    sub_21FFECC(Dictionary, v6);
  }
  v9 = (System_Collections_Generic_List_object__o *)Dictionary;
  v4 = System_Collections_Generic_List_object__TypeInfo;
  naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
  if ( *(unsigned __int8 *)(*(_QWORD *)Dictionary + 304LL) < (unsigned int)naturalAligment
    || *(System_Collections_Generic_List_object__c **)(*(_QWORD *)(*(_QWORD *)Dictionary + 200LL)
                                                     + 8 * naturalAligment
                                                     - 8) != System_Collections_Generic_List_object__TypeInfo )
  {
    goto LABEL_42;
  }
  v11 = *((_DWORD *)Dictionary + 6);
  if ( !v11 )
  {
    v33 = PurchaseBehaviour_TypeInfo;
    if ( !*(&PurchaseBehaviour_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo, System_Collections_Generic_List_object__TypeInfo);
      v33 = PurchaseBehaviour_TypeInfo;
    }
    v34 = PurchaseLogicExternal_TypeInfo;
    v35 = *(&PurchaseLogicExternal_TypeInfo->_2.cctor_finished + 1);
    v33->static_fields->isOpenPurchaseDialogEvent = 0;
    if ( v35 )
      goto LABEL_38;
    goto LABEL_37;
  }
  if ( v11 < 1 )
  {
    v13 = 0;
    v12 = 0;
LABEL_35:
    PurchaseLogicExternal__ShowExternalPaymentDialog((PurchaseLogicExternal_o *)Dictionary, v12, v13, v8);
    StoneCountRefreshComponent__RefreshAllStoneCount(v36);
LABEL_36:
    v34 = PurchaseLogicExternal_TypeInfo;
    if ( *(&PurchaseLogicExternal_TypeInfo->_2.cctor_finished + 1) )
    {
LABEL_38:
      v34->static_fields->isEnd = 1;
      return;
    }
LABEL_37:
    j_il2cpp_runtime_class_init_0(v34, v4);
    v34 = PurchaseLogicExternal_TypeInfo;
    goto LABEL_38;
  }
  v12 = 0;
  v13 = 0;
  v14 = 0;
  while ( 1 )
  {
    Dictionary = System_Collections_Generic_List_object___get_Item(
                   v9,
                   v14,
                   (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_object__get_Item__);
    if ( !Dictionary )
      goto LABEL_39;
    v17 = (System_Collections_Generic_Dictionary_object__object__o *)Dictionary;
    v18 = System_Collections_Generic_Dictionary_string__object__TypeInfo;
    v19 = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
    if ( *(unsigned __int8 *)(*(_QWORD *)Dictionary + 304LL) < (unsigned int)v19
      || *(System_Collections_Generic_Dictionary_string__object__c **)(*(_QWORD *)(*(_QWORD *)Dictionary + 200LL)
                                                                     + 8 * v19
                                                                     - 8) != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
      goto LABEL_41;
    }
    Dictionary = System_Collections_Generic_Dictionary_object__object___get_Item(
                   (System_Collections_Generic_Dictionary_object__object__o *)Dictionary,
                   (Il2CppObject *)StringLiteral_25511/*"type"*/,
                   (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Dictionary )
      goto LABEL_39;
    v22 = qword_594C090;
    if ( *(_QWORD *)(*(_QWORD *)Dictionary + 64LL) != *(_QWORD *)(qword_594C090 + 64) )
      break;
    v23 = *(_DWORD *)j_il2cpp_object_unbox_0(Dictionary, qword_594C090, v20, v21);
    Dictionary = System_Collections_Generic_Dictionary_object__object___get_Item(
                   v17,
                   (Il2CppObject *)StringLiteral_23578/*"orderId"*/,
                   (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Dictionary )
      goto LABEL_39;
    v24 = (System_String_o *)(*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)Dictionary + 360LL))(
                               Dictionary,
                               *(_QWORD *)(*(_QWORD *)Dictionary + 368LL));
    Dictionary = System_Collections_Generic_Dictionary_object__object___get_Item(
                   v17,
                   (Il2CppObject *)StringLiteral_18691/*"chargeStoneNum"*/,
                   (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Dictionary )
      goto LABEL_39;
    v22 = qword_594C090;
    if ( *(_QWORD *)(*(_QWORD *)Dictionary + 64LL) != *(_QWORD *)(qword_594C090 + 64) )
      break;
    v25 = *(_DWORD *)j_il2cpp_object_unbox_0(Dictionary, qword_594C090, v20, v21);
    Dictionary = System_Collections_Generic_Dictionary_object__object___get_Item(
                   v17,
                   (Il2CppObject *)StringLiteral_20555/*"freeStoneNum"*/,
                   (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Dictionary )
      goto LABEL_39;
    v22 = qword_594C090;
    if ( *(_QWORD *)(*(_QWORD *)Dictionary + 64LL) != *(_QWORD *)(qword_594C090 + 64) )
      break;
    v26 = *(_DWORD *)j_il2cpp_object_unbox_0(Dictionary, qword_594C090, v20, v21);
    Dictionary = System_Collections_Generic_Dictionary_object__object___get_Item(
                   v17,
                   (Il2CppObject *)StringLiteral_23904/*"price"*/,
                   (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Dictionary )
      goto LABEL_39;
    v22 = qword_594C090;
    if ( *(_QWORD *)(*(_QWORD *)Dictionary + 64LL) != *(_QWORD *)(qword_594C090 + 64) )
      break;
    v27 = (PurchaseLogicExternal_o *)j_il2cpp_object_unbox_0(Dictionary, qword_594C090, v20, v21);
    v12 += v25;
    v13 += v26;
    klass_low = (double)SLODWORD(v27->klass);
    PurchaseLogicExternal__SendPurchaseAction(v27, v23, klass_low, v24, v29);
    PurchaseLogicExternal__SendPurchaseActionGoogleAnalytics(v30, v23, klass_low, v24, v31);
    if ( ++v14 >= v9->fields._size )
      goto LABEL_35;
  }
  sub_220024C(Dictionary, v22, v20, v21);
LABEL_41:
  sub_220024C(v17, v18, v15, v16);
LABEL_42:
  v41 = sub_220024C(v9, v4, v7, v8);
  PurchaseLogicExternal__SendPurchaseAction(v37, v38, *(double *)&v41, v39, v40);
}


void PurchaseLogicExternal__SendPurchaseAction(
        PurchaseLogicExternal_o *this,
        int32_t actionId,
        double price,
        System_String_o *transactionId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v9; // x1

  if ( (byte_5937F99 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    sub_21FFC50(&StringLiteral_8496/*"JPY"*/);
    byte_5937F99 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v9);
  AdManager__TrackPurchaseExternal(
    (AdManager_o *)Instance,
    actionId,
    price,
    (System_String_o *)StringLiteral_8496/*"JPY"*/,
    transactionId,
    0);
}


void PurchaseLogicExternal__SendPurchaseActionGoogleAnalytics(
        PurchaseLogicExternal_o *this,
        int32_t actionId,
        double price,
        System_String_o *transactionId,
        const MethodInfo *method)
{
  Firebase_Analytics_Parameter_array *v8; // x20
  Firebase_Analytics_Parameter_o *v9; // x0
  int64_t v10; // x2
  Firebase_Analytics_Parameter_o *v11; // x21
  __int64 v12; // x0
  __int64 v13; // x1
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  __int64 v20; // x1
  Firebase_Analytics_Parameter_o *v21; // x21
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  Firebase_Analytics_Parameter_o *v28; // x21
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  __int64 v35; // x1
  __int64 v36; // x0

  if ( (byte_5937F9A & 1) == 0 )
  {
    sub_21FFC50(&Firebase_Analytics_FirebaseAnalytics_TypeInfo);
    sub_21FFC50(&Firebase_Analytics_Parameter___TypeInfo);
    sub_21FFC50(&Firebase_Analytics_Parameter_TypeInfo);
    sub_21FFC50(&StringLiteral_25428/*"transaction_id"*/);
    sub_21FFC50(&StringLiteral_23904/*"price"*/);
    sub_21FFC50(&StringLiteral_20197/*"external_purchase"*/);
    sub_21FFC50(&StringLiteral_20196/*"external_payment_type"*/);
    byte_5937F9A = 1;
  }
  v8 = (Firebase_Analytics_Parameter_array *)sub_21FFD10(Firebase_Analytics_Parameter___TypeInfo, 3);
  v9 = (Firebase_Analytics_Parameter_o *)sub_21FFEBC(Firebase_Analytics_Parameter_TypeInfo);
  v10 = actionId;
  v11 = v9;
  Firebase_Analytics_Parameter___ctor_57038176(v9, (System_String_o *)StringLiteral_20196/*"external_payment_type"*/, v10, 0);
  if ( !v8 )
    sub_21FFECC(v12, v13);
  if ( v11 )
  {
    v12 = sub_21FFDA4(v11, v8->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_17;
  }
  if ( !LODWORD(v8->max_length) )
    goto LABEL_16;
  v8->m_Items[0] = v11;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v8->m_Items, (int32_t)v11, v14, v15, v16, v17, v18, v19);
  v21 = (Firebase_Analytics_Parameter_o *)sub_21FFEBC(Firebase_Analytics_Parameter_TypeInfo);
  Firebase_Analytics_Parameter___ctor_57038280(v21, (System_String_o *)StringLiteral_23904/*"price"*/, price, 0);
  if ( v21 )
  {
    v12 = sub_21FFDA4(v21, v8->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_17;
  }
  if ( (v8->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_16;
  v8->m_Items[1] = v21;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v8->m_Items[1], (int32_t)v21, v22, v23, v24, v25, v26, v27);
  v28 = (Firebase_Analytics_Parameter_o *)sub_21FFEBC(Firebase_Analytics_Parameter_TypeInfo);
  Firebase_Analytics_Parameter___ctor(v28, (System_String_o *)StringLiteral_25428/*"transaction_id"*/, transactionId, 0);
  if ( v28 )
  {
    v12 = sub_21FFDA4(v28, v8->obj.klass->_1.element_class);
    if ( !v12 )
    {
LABEL_17:
      v36 = sub_21FFEF0(v12, v20);
      sub_21FFD90(v36, 0);
    }
  }
  if ( LODWORD(v8->max_length) <= 2 )
LABEL_16:
    sub_21FFED4(v12);
  v8->m_Items[2] = v28;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v8->m_Items[2], (int32_t)v28, v29, v30, v31, v32, v33, v34);
  if ( !*(&Firebase_Analytics_FirebaseAnalytics_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Firebase_Analytics_FirebaseAnalytics_TypeInfo, v35);
  Firebase_Analytics_FirebaseAnalytics__LogEvent((System_String_o *)StringLiteral_20197/*"external_purchase"*/, v8, 0);
}


void PurchaseLogicExternal__ShowExternalPaymentDialog(
        PurchaseLogicExternal_o *this,
        int32_t chargeStoneNum,
        int32_t freeStoneNum,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_5937F98 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5937F98 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v7);
  CommonUI__OpenStonePurchaseReciveMenu((CommonUI_o *)Instance, 3, 0, freeStoneNum, chargeStoneNum, 0, 0, 0);
}