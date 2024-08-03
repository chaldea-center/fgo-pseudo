void __fastcall PurchaseLogicExternal___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_49FBD31 & 1) == 0 )
  {
    sub_1B640C8(&PurchaseLogicExternal_TypeInfo, v1);
    byte_49FBD31 = 1;
  }
  PurchaseLogicExternal_TypeInfo->static_fields->isEnd = 1;
}


void __fastcall PurchaseLogicExternal___ctor(PurchaseLogicExternal_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall PurchaseLogicExternal__ExternalPaymentCheck(PurchaseLogicExternal_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  PurchaseLogicExternal_c *v8; // x0
  NetworkManager_ResultCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x3
  Il2CppObject *Request_object; // x0

  if ( (byte_49FBD2D & 1) == 0 )
  {
    sub_1B640C8(&Method_NetworkManager_getRequest_ExternalPaymentReflectRequest___, method);
    sub_1B640C8(&NetworkManager_TypeInfo, v4);
    sub_1B640C8(&Method_PurchaseLogicExternal_ExternalPaymentCheckCallBack__, v5);
    sub_1B640C8(&PurchaseLogicExternal_TypeInfo, v6);
    sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    byte_49FBD2D = 1;
  }
  v8 = PurchaseLogicExternal_TypeInfo;
  if ( !PurchaseLogicExternal_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicExternal_TypeInfo);
    v8 = PurchaseLogicExternal_TypeInfo;
  }
  v8->static_fields->isEnd = 0;
  v9 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, method, v2);
  NetworkManager_ResultCallbackFunc___ctor(
    v9,
    (Il2CppObject *)this,
    Method_PurchaseLogicExternal_ExternalPaymentCheckCallBack__,
    v10);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v9,
                     (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_ExternalPaymentReflectRequest___);
  if ( !Request_object )
    sub_1B64324(0LL);
  RequestBase__beginRequest((RequestBase_o *)Request_object, 0LL);
}


void __fastcall PurchaseLogicExternal__ExternalPaymentCheckCallBack(
        PurchaseLogicExternal_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  void *Dictionary; // x0
  const MethodInfo *v20; // x3
  System_Collections_Generic_List_object__o *v21; // x19
  __int64 methodPtr_low; // x9
  int v23; // w8
  int32_t v24; // w21
  int32_t v25; // w20
  int32_t v26; // w22
  System_Collections_Generic_Dictionary_object__object__o *v27; // x23
  __int64 v28; // x9
  __int64 v29; // x2
  __int64 v30; // x3
  int32_t v31; // w24
  System_String_o *v32; // x25
  __int64 v33; // x2
  __int64 v34; // x3
  int v35; // w28
  __int64 v36; // x2
  __int64 v37; // x3
  int v38; // w29
  __int64 v39; // x2
  __int64 v40; // x3
  PurchaseLogicExternal_o *v41; // x0
  const MethodInfo *v42; // x3
  PurchaseBehaviour_c *v43; // x0
  PurchaseBehaviour_c *v44; // x0
  const MethodInfo *v45; // x0
  PurchaseLogicExternal_c *v46; // x0
  PurchaseLogicExternal_o *v47; // x0
  int32_t v48; // w1
  System_String_o *v49; // x2
  const MethodInfo *v50; // x3
  long double v51; // q0

  if ( (byte_49FBD2E & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, result);
    sub_1B640C8(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v4);
    sub_1B640C8(&long_TypeInfo, v5);
    sub_1B640C8(&JsonManager_TypeInfo, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_object__get_Count__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_object__get_Item__, v8);
    sub_1B640C8(&System_Collections_Generic_List_object__TypeInfo, v9);
    sub_1B640C8(&PurchaseBehaviour_TypeInfo, v10);
    sub_1B640C8(&PurchaseLogicExternal_TypeInfo, v11);
    sub_1B640C8(&StringLiteral_19551/*"freeStoneNum"*/, v12);
    sub_1B640C8(&StringLiteral_22504/*"price"*/, v13);
    sub_1B640C8(&StringLiteral_22246/*"orderId"*/, v14);
    sub_1B640C8(&StringLiteral_21968/*"ng"*/, v15);
    sub_1B640C8(&StringLiteral_17859/*"chargeStoneNum"*/, v16);
    sub_1B640C8(&StringLiteral_19244/*"externalPaymentResults"*/, v17);
    sub_1B640C8(&StringLiteral_24010/*"type"*/, v18);
    byte_49FBD2E = 1;
  }
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_21968/*"ng"*/, 0LL) )
  {
    v43 = PurchaseBehaviour_TypeInfo;
    if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
      v43 = PurchaseBehaviour_TypeInfo;
    }
    v43->static_fields->isOpenPurchaseDialogEvent = 0;
LABEL_35:
    v46 = PurchaseLogicExternal_TypeInfo;
    if ( !PurchaseLogicExternal_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaseLogicExternal_TypeInfo);
      v46 = PurchaseLogicExternal_TypeInfo;
    }
    v46->static_fields->isEnd = 1;
    return;
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  Dictionary = JsonManager__getDictionary(result, 0LL);
  if ( !Dictionary
    || (Dictionary = System_Collections_Generic_Dictionary_object__object___get_Item(
                       (System_Collections_Generic_Dictionary_object__object__o *)Dictionary,
                       (Il2CppObject *)StringLiteral_19244/*"externalPaymentResults"*/,
                       (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
LABEL_38:
    sub_1B64324(Dictionary);
  }
  v21 = (System_Collections_Generic_List_object__o *)Dictionary;
  methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
  if ( *(unsigned __int8 *)(*(_QWORD *)Dictionary + 304LL) < (unsigned int)methodPtr_low
    || *(System_Collections_Generic_List_object__c **)(*(_QWORD *)(*(_QWORD *)Dictionary + 200LL) + 8 * methodPtr_low - 8) != System_Collections_Generic_List_object__TypeInfo )
  {
    goto LABEL_41;
  }
  v23 = *((_DWORD *)Dictionary + 6);
  if ( v23 )
  {
    if ( v23 >= 1 )
    {
      v24 = 0;
      v25 = 0;
      v26 = 0;
      while ( 1 )
      {
        Dictionary = System_Collections_Generic_List_object___get_Item(
                       v21,
                       v26,
                       (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_object__get_Item__);
        if ( !Dictionary )
          goto LABEL_38;
        v27 = (System_Collections_Generic_Dictionary_object__object__o *)Dictionary;
        v28 = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Dictionary + 304LL) < (unsigned int)v28
          || *(System_Collections_Generic_Dictionary_string__object__c **)(*(_QWORD *)(*(_QWORD *)Dictionary + 200LL)
                                                                         + 8 * v28
                                                                         - 8) != System_Collections_Generic_Dictionary_string__object__TypeInfo )
        {
          goto LABEL_40;
        }
        Dictionary = System_Collections_Generic_Dictionary_object__object___get_Item(
                       (System_Collections_Generic_Dictionary_object__object__o *)Dictionary,
                       (Il2CppObject *)StringLiteral_24010/*"type"*/,
                       (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !Dictionary )
          goto LABEL_38;
        if ( *(Il2CppClass **)(*(_QWORD *)Dictionary + 64LL) != long_TypeInfo->_1.element_class )
          break;
        v31 = *(_DWORD *)j_il2cpp_object_unbox_0(Dictionary, long_TypeInfo, v29, v30);
        Dictionary = System_Collections_Generic_Dictionary_object__object___get_Item(
                       v27,
                       (Il2CppObject *)StringLiteral_22246/*"orderId"*/,
                       (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !Dictionary )
          goto LABEL_38;
        v32 = (System_String_o *)(*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)Dictionary + 360LL))(
                                   Dictionary,
                                   *(_QWORD *)(*(_QWORD *)Dictionary + 368LL));
        Dictionary = System_Collections_Generic_Dictionary_object__object___get_Item(
                       v27,
                       (Il2CppObject *)StringLiteral_17859/*"chargeStoneNum"*/,
                       (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !Dictionary )
          goto LABEL_38;
        if ( *(Il2CppClass **)(*(_QWORD *)Dictionary + 64LL) != long_TypeInfo->_1.element_class )
          break;
        v35 = *(_DWORD *)j_il2cpp_object_unbox_0(Dictionary, long_TypeInfo, v33, v34);
        Dictionary = System_Collections_Generic_Dictionary_object__object___get_Item(
                       v27,
                       (Il2CppObject *)StringLiteral_19551/*"freeStoneNum"*/,
                       (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !Dictionary )
          goto LABEL_38;
        if ( *(Il2CppClass **)(*(_QWORD *)Dictionary + 64LL) != long_TypeInfo->_1.element_class )
          break;
        v38 = *(_DWORD *)j_il2cpp_object_unbox_0(Dictionary, long_TypeInfo, v36, v37);
        Dictionary = System_Collections_Generic_Dictionary_object__object___get_Item(
                       v27,
                       (Il2CppObject *)StringLiteral_22504/*"price"*/,
                       (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !Dictionary )
          goto LABEL_38;
        if ( *(Il2CppClass **)(*(_QWORD *)Dictionary + 64LL) != long_TypeInfo->_1.element_class )
          break;
        v41 = (PurchaseLogicExternal_o *)j_il2cpp_object_unbox_0(Dictionary, long_TypeInfo, v39, v40);
        v24 += v35;
        v25 += v38;
        PurchaseLogicExternal__SendPurchaseAction(v41, v31, (double)SLODWORD(v41->klass), v32, v42);
        if ( ++v26 >= v21->fields._size )
          goto LABEL_34;
      }
      sub_1B645E4(Dictionary);
LABEL_40:
      sub_1B645E4(v27);
LABEL_41:
      v51 = sub_1B645E4(v21);
      PurchaseLogicExternal__SendPurchaseAction(v47, v48, *(double *)&v51, v49, v50);
      return;
    }
    v25 = 0;
    v24 = 0;
LABEL_34:
    PurchaseLogicExternal__ShowExternalPaymentDialog((PurchaseLogicExternal_o *)Dictionary, v24, v25, v20);
    StoneCountRefreshComponent__RefreshAllStoneCount(v45);
    goto LABEL_35;
  }
  v44 = PurchaseBehaviour_TypeInfo;
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
    v44 = PurchaseBehaviour_TypeInfo;
  }
  v44->static_fields->isOpenPurchaseDialogEvent = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PurchaseLogicExternal__SendPurchaseAction(
        PurchaseLogicExternal_o *this,
        int32_t actionId,
        double price,
        System_String_o *transactionId,
        const MethodInfo *method)
{
  __int64 v8; // x1
  Il2CppObject *Instance; // x0

  if ( (byte_49FBD30 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, *(_QWORD *)&actionId);
    sub_1B640C8(&StringLiteral_8097/*"JPY"*/, v8);
    byte_49FBD30 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  AdManager__TrackPurchaseExternal(
    (AdManager_o *)Instance,
    actionId,
    price,
    (System_String_o *)StringLiteral_8097/*"JPY"*/,
    transactionId,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PurchaseLogicExternal__ShowExternalPaymentDialog(
        PurchaseLogicExternal_o *this,
        int32_t chargeStoneNum,
        int32_t freeStoneNum,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_49FBD2F & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, *(_QWORD *)&chargeStoneNum);
    byte_49FBD2F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  CommonUI__OpenStonePurchaseReciveMenu((CommonUI_o *)Instance, 3, 0, freeStoneNum, chargeStoneNum, 0, 0, 0LL);
}