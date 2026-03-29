void PurchaseLogicExternal___cctor(const MethodInfo *method)
{
  if ( (byte_4D3032C & 1) == 0 )
  {
    sub_1C93AD4(&PurchaseLogicExternal_TypeInfo);
    byte_4D3032C = 1;
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
  NetworkManager_ResultCallbackFunc_o *v4; // x20
  Il2CppObject *Request_object; // x0
  __int64 v6; // x1

  if ( (byte_4D30327 & 1) == 0 )
  {
    sub_1C93AD4(&Method_NetworkManager_getRequest_ExternalPaymentReflectRequest___);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&Method_PurchaseLogicExternal_ExternalPaymentCheckCallBack__);
    sub_1C93AD4(&PurchaseLogicExternal_TypeInfo);
    sub_1C93AD4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4D30327 = 1;
  }
  v3 = PurchaseLogicExternal_TypeInfo;
  if ( !PurchaseLogicExternal_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicExternal_TypeInfo);
    v3 = PurchaseLogicExternal_TypeInfo;
  }
  v3->static_fields->isEnd = 0;
  v4 = (NetworkManager_ResultCallbackFunc_o *)sub_1C93D20(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    Method_PurchaseLogicExternal_ExternalPaymentCheckCallBack__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v4,
                     (const MethodInfo_322FB9C *)Method_NetworkManager_getRequest_ExternalPaymentReflectRequest___);
  if ( !Request_object )
    sub_1C93D2C(0, v6);
  RequestBase__beginRequest((RequestBase_o *)Request_object, 0);
}


void PurchaseLogicExternal__ExternalPaymentCheckCallBack(
        PurchaseLogicExternal_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  void *Dictionary; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x3
  System_Collections_Generic_List_object__o *v7; // x19
  __int64 naturalAligment; // x9
  int v9; // w8
  int32_t v10; // w21
  int32_t v11; // w20
  int32_t v12; // w22
  System_Collections_Generic_Dictionary_object__object__o *v13; // x23
  __int64 v14; // x9
  __int64 v15; // x2
  __int64 v16; // x3
  int32_t v17; // w24
  System_String_o *v18; // x25
  __int64 v19; // x2
  __int64 v20; // x3
  int v21; // w29
  __int64 v22; // x2
  __int64 v23; // x3
  int v24; // w26
  __int64 v25; // x2
  __int64 v26; // x3
  PurchaseLogicExternal_o *v27; // x0
  double klass_low; // d8
  const MethodInfo *v29; // x3
  PurchaseLogicExternal_o *v30; // x0
  const MethodInfo *v31; // x3
  PurchaseBehaviour_c *v32; // x0
  const MethodInfo *v33; // x0
  PurchaseLogicExternal_c *v34; // x0
  PurchaseLogicExternal_o *v35; // x0
  int32_t v36; // w1
  System_String_o *v37; // x2
  const MethodInfo *v38; // x3
  long double v39; // q0

  if ( (byte_4D30328 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C93AD4(&long_TypeInfo);
    sub_1C93AD4(&JsonManager_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_object__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_object__get_Item__);
    sub_1C93AD4(&System_Collections_Generic_List_object__TypeInfo);
    sub_1C93AD4(&PurchaseBehaviour_TypeInfo);
    sub_1C93AD4(&PurchaseLogicExternal_TypeInfo);
    sub_1C93AD4(&StringLiteral_19877/*"freeStoneNum"*/);
    sub_1C93AD4(&StringLiteral_23051/*"price"*/);
    sub_1C93AD4(&StringLiteral_22762/*"orderId"*/);
    sub_1C93AD4(&StringLiteral_22483/*"ng"*/);
    sub_1C93AD4(&StringLiteral_18079/*"chargeStoneNum"*/);
    sub_1C93AD4(&StringLiteral_19537/*"externalPaymentResults"*/);
    sub_1C93AD4(&StringLiteral_24554/*"type"*/);
    byte_4D30328 = 1;
  }
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_22483/*"ng"*/, 0) )
    goto LABEL_27;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  Dictionary = JsonManager__getDictionary(result, 0);
  if ( !Dictionary
    || (Dictionary = System_Collections_Generic_Dictionary_object__object___get_Item(
                       (System_Collections_Generic_Dictionary_object__object__o *)Dictionary,
                       (Il2CppObject *)StringLiteral_19537/*"externalPaymentResults"*/,
                       (const MethodInfo_352EB28 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
LABEL_35:
    sub_1C93D2C(Dictionary, v5);
  }
  v7 = (System_Collections_Generic_List_object__o *)Dictionary;
  naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
  if ( *(unsigned __int8 *)(*(_QWORD *)Dictionary + 304LL) < (unsigned int)naturalAligment
    || *(System_Collections_Generic_List_object__c **)(*(_QWORD *)(*(_QWORD *)Dictionary + 200LL)
                                                     + 8 * naturalAligment
                                                     - 8) != System_Collections_Generic_List_object__TypeInfo )
  {
    goto LABEL_38;
  }
  v9 = *((_DWORD *)Dictionary + 6);
  if ( v9 )
  {
    if ( v9 >= 1 )
    {
      v10 = 0;
      v11 = 0;
      v12 = 0;
      while ( 1 )
      {
        Dictionary = System_Collections_Generic_List_object___get_Item(
                       v7,
                       v12,
                       (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_object__get_Item__);
        if ( !Dictionary )
          goto LABEL_35;
        v13 = (System_Collections_Generic_Dictionary_object__object__o *)Dictionary;
        v14 = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
        if ( *(unsigned __int8 *)(*(_QWORD *)Dictionary + 304LL) < (unsigned int)v14
          || *(System_Collections_Generic_Dictionary_string__object__c **)(*(_QWORD *)(*(_QWORD *)Dictionary + 200LL)
                                                                         + 8 * v14
                                                                         - 8) != System_Collections_Generic_Dictionary_string__object__TypeInfo )
        {
          goto LABEL_37;
        }
        Dictionary = System_Collections_Generic_Dictionary_object__object___get_Item(
                       (System_Collections_Generic_Dictionary_object__object__o *)Dictionary,
                       (Il2CppObject *)StringLiteral_24554/*"type"*/,
                       (const MethodInfo_352EB28 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !Dictionary )
          goto LABEL_35;
        if ( *(Il2CppClass **)(*(_QWORD *)Dictionary + 64LL) != long_TypeInfo->_1.element_class )
          break;
        v17 = *(_DWORD *)j_il2cpp_object_unbox_0(Dictionary, long_TypeInfo, v15, v16);
        Dictionary = System_Collections_Generic_Dictionary_object__object___get_Item(
                       v13,
                       (Il2CppObject *)StringLiteral_22762/*"orderId"*/,
                       (const MethodInfo_352EB28 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !Dictionary )
          goto LABEL_35;
        v18 = (System_String_o *)(*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)Dictionary + 360LL))(
                                   Dictionary,
                                   *(_QWORD *)(*(_QWORD *)Dictionary + 368LL));
        Dictionary = System_Collections_Generic_Dictionary_object__object___get_Item(
                       v13,
                       (Il2CppObject *)StringLiteral_18079/*"chargeStoneNum"*/,
                       (const MethodInfo_352EB28 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !Dictionary )
          goto LABEL_35;
        if ( *(Il2CppClass **)(*(_QWORD *)Dictionary + 64LL) != long_TypeInfo->_1.element_class )
          break;
        v21 = *(_DWORD *)j_il2cpp_object_unbox_0(Dictionary, long_TypeInfo, v19, v20);
        Dictionary = System_Collections_Generic_Dictionary_object__object___get_Item(
                       v13,
                       (Il2CppObject *)StringLiteral_19877/*"freeStoneNum"*/,
                       (const MethodInfo_352EB28 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !Dictionary )
          goto LABEL_35;
        if ( *(Il2CppClass **)(*(_QWORD *)Dictionary + 64LL) != long_TypeInfo->_1.element_class )
          break;
        v24 = *(_DWORD *)j_il2cpp_object_unbox_0(Dictionary, long_TypeInfo, v22, v23);
        Dictionary = System_Collections_Generic_Dictionary_object__object___get_Item(
                       v13,
                       (Il2CppObject *)StringLiteral_23051/*"price"*/,
                       (const MethodInfo_352EB28 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !Dictionary )
          goto LABEL_35;
        if ( *(Il2CppClass **)(*(_QWORD *)Dictionary + 64LL) != long_TypeInfo->_1.element_class )
          break;
        v27 = (PurchaseLogicExternal_o *)j_il2cpp_object_unbox_0(Dictionary, long_TypeInfo, v25, v26);
        v10 += v21;
        klass_low = (double)SLODWORD(v27->klass);
        v11 += v24;
        PurchaseLogicExternal__SendPurchaseAction(v27, v17, klass_low, v18, v29);
        PurchaseLogicExternal__SendPurchaseActionGoogleAnalytics(v30, v17, klass_low, v18, v31);
        if ( ++v12 >= v7->fields._size )
          goto LABEL_31;
      }
      sub_1C940C8(Dictionary);
LABEL_37:
      sub_1C940C8(v13);
LABEL_38:
      v39 = sub_1C940C8(v7);
      PurchaseLogicExternal__SendPurchaseAction(v35, v36, *(double *)&v39, v37, v38);
      return;
    }
    v11 = 0;
    v10 = 0;
LABEL_31:
    PurchaseLogicExternal__ShowExternalPaymentDialog((PurchaseLogicExternal_o *)Dictionary, v10, v11, v6);
    StoneCountRefreshComponent__RefreshAllStoneCount(v33);
  }
  else
  {
LABEL_27:
    v32 = PurchaseBehaviour_TypeInfo;
    if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
      v32 = PurchaseBehaviour_TypeInfo;
    }
    v32->static_fields->isOpenPurchaseDialogEvent = 0;
  }
  v34 = PurchaseLogicExternal_TypeInfo;
  if ( !PurchaseLogicExternal_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicExternal_TypeInfo);
    v34 = PurchaseLogicExternal_TypeInfo;
  }
  v34->static_fields->isEnd = 1;
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

  if ( (byte_4D3032A & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    sub_1C93AD4(&StringLiteral_8209/*"JPY"*/);
    byte_4D3032A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
  if ( !Instance )
    sub_1C93D2C(0, v9);
  AdManager__TrackPurchaseExternal(
    (AdManager_o *)Instance,
    actionId,
    price,
    (System_String_o *)StringLiteral_8209/*"JPY"*/,
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
  Firebase_Analytics_Parameter_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  Firebase_Analytics_Parameter_o *v18; // x21
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  Firebase_Analytics_Parameter_o *v25; // x21
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  __int64 v32; // x0

  if ( (byte_4D3032B & 1) == 0 )
  {
    sub_1C93AD4(&Firebase_Analytics_FirebaseAnalytics_TypeInfo);
    sub_1C93AD4(&Firebase_Analytics_Parameter___TypeInfo);
    sub_1C93AD4(&Firebase_Analytics_Parameter_TypeInfo);
    sub_1C93AD4(&StringLiteral_24481/*"transaction_id"*/);
    sub_1C93AD4(&StringLiteral_23051/*"price"*/);
    sub_1C93AD4(&StringLiteral_19539/*"external_purchase"*/);
    sub_1C93AD4(&StringLiteral_19538/*"external_payment_type"*/);
    byte_4D3032B = 1;
  }
  v8 = (Firebase_Analytics_Parameter_array *)sub_1C93B7C(Firebase_Analytics_Parameter___TypeInfo, 3);
  v9 = (Firebase_Analytics_Parameter_o *)sub_1C93D20(Firebase_Analytics_Parameter_TypeInfo);
  Firebase_Analytics_Parameter___ctor_50904776(v9, (System_String_o *)StringLiteral_19538/*"external_payment_type"*/, actionId, 0);
  if ( !v8 )
    sub_1C93D2C(v10, v11);
  if ( v9 )
  {
    v10 = sub_1C93C10(v9, v8->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_17;
  }
  if ( !LODWORD(v8->max_length) )
    goto LABEL_16;
  v8->m_Items[0] = v9;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)v8->m_Items, (int32_t)v9, v12, v13, v14, v15, v16, v17);
  v18 = (Firebase_Analytics_Parameter_o *)sub_1C93D20(Firebase_Analytics_Parameter_TypeInfo);
  Firebase_Analytics_Parameter___ctor_50904924(v18, (System_String_o *)StringLiteral_23051/*"price"*/, price, 0);
  if ( v18 )
  {
    v10 = sub_1C93C10(v18, v8->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_17;
  }
  if ( LODWORD(v8->max_length) <= 1 )
    goto LABEL_16;
  v8->m_Items[1] = v18;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v8->m_Items[1], (int32_t)v18, v19, v20, v21, v22, v23, v24);
  v25 = (Firebase_Analytics_Parameter_o *)sub_1C93D20(Firebase_Analytics_Parameter_TypeInfo);
  Firebase_Analytics_Parameter___ctor(v25, (System_String_o *)StringLiteral_24481/*"transaction_id"*/, transactionId, 0);
  if ( v25 )
  {
    v10 = sub_1C93C10(v25, v8->obj.klass->_1.element_class);
    if ( !v10 )
    {
LABEL_17:
      v32 = sub_1C93D50(v10);
      sub_1C93BFC(v32, 0);
    }
  }
  if ( LODWORD(v8->max_length) <= 2 )
LABEL_16:
    sub_1C93D34(v10);
  v8->m_Items[2] = v25;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v8->m_Items[2], (int32_t)v25, v26, v27, v28, v29, v30, v31);
  if ( !Firebase_Analytics_FirebaseAnalytics_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Firebase_Analytics_FirebaseAnalytics_TypeInfo);
  Firebase_Analytics_FirebaseAnalytics__LogEvent((System_String_o *)StringLiteral_19539/*"external_purchase"*/, v8, 0);
}


void PurchaseLogicExternal__ShowExternalPaymentDialog(
        PurchaseLogicExternal_o *this,
        int32_t chargeStoneNum,
        int32_t freeStoneNum,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4D30329 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D30329 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C93D2C(0, v7);
  CommonUI__OpenStonePurchaseReciveMenu((CommonUI_o *)Instance, 3, 0, freeStoneNum, chargeStoneNum, 0, 0, 0);
}