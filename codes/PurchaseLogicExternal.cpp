void PurchaseLogicExternal___cctor(const MethodInfo *method)
{
  if ( (byte_4C26C18 & 1) == 0 )
  {
    sub_1C2D490(&PurchaseLogicExternal_TypeInfo);
    byte_4C26C18 = 1;
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

  if ( (byte_4C26C14 & 1) == 0 )
  {
    sub_1C2D490(&Method_NetworkManager_getRequest_ExternalPaymentReflectRequest___);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&Method_PurchaseLogicExternal_ExternalPaymentCheckCallBack__);
    sub_1C2D490(&PurchaseLogicExternal_TypeInfo);
    sub_1C2D490(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4C26C14 = 1;
  }
  v3 = PurchaseLogicExternal_TypeInfo;
  if ( !PurchaseLogicExternal_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicExternal_TypeInfo);
    v3 = PurchaseLogicExternal_TypeInfo;
  }
  v3->static_fields->isEnd = 0;
  v4 = (NetworkManager_ResultCallbackFunc_o *)sub_1C2D6DC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    Method_PurchaseLogicExternal_ExternalPaymentCheckCallBack__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v4,
                     (const MethodInfo_31599E8 *)Method_NetworkManager_getRequest_ExternalPaymentReflectRequest___);
  if ( !Request_object )
    sub_1C2D6EC(0, v6);
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
  const MethodInfo *v28; // x3
  PurchaseBehaviour_c *v29; // x0
  const MethodInfo *v30; // x0
  PurchaseLogicExternal_c *v31; // x0
  PurchaseLogicExternal_o *v32; // x0
  int32_t v33; // w1
  System_String_o *v34; // x2
  const MethodInfo *v35; // x3
  long double v36; // q0

  if ( (byte_4C26C15 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C2D490(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C2D490(&long_TypeInfo);
    sub_1C2D490(&JsonManager_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_object__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_object__get_Item__);
    sub_1C2D490(&System_Collections_Generic_List_object__TypeInfo);
    sub_1C2D490(&PurchaseBehaviour_TypeInfo);
    sub_1C2D490(&PurchaseLogicExternal_TypeInfo);
    sub_1C2D490(&StringLiteral_19652/*"freeStoneNum"*/);
    sub_1C2D490(&StringLiteral_22749/*"price"*/);
    sub_1C2D490(&StringLiteral_22470/*"orderId"*/);
    sub_1C2D490(&StringLiteral_22195/*"ng"*/);
    sub_1C2D490(&StringLiteral_17932/*"chargeStoneNum"*/);
    sub_1C2D490(&StringLiteral_19328/*"externalPaymentResults"*/);
    sub_1C2D490(&StringLiteral_24223/*"type"*/);
    byte_4C26C15 = 1;
  }
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_22195/*"ng"*/, 0) )
    goto LABEL_27;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  Dictionary = JsonManager__getDictionary(result, 0);
  if ( !Dictionary
    || (Dictionary = System_Collections_Generic_Dictionary_object__object___get_Item(
                       (System_Collections_Generic_Dictionary_object__object__o *)Dictionary,
                       (Il2CppObject *)StringLiteral_19328/*"externalPaymentResults"*/,
                       (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
LABEL_35:
    sub_1C2D6EC(Dictionary, v5);
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
                       (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_object__get_Item__);
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
                       (Il2CppObject *)StringLiteral_24223/*"type"*/,
                       (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !Dictionary )
          goto LABEL_35;
        if ( *(Il2CppClass **)(*(_QWORD *)Dictionary + 64LL) != long_TypeInfo->_1.element_class )
          break;
        v17 = *(_DWORD *)j_il2cpp_object_unbox_0(Dictionary, long_TypeInfo, v15, v16);
        Dictionary = System_Collections_Generic_Dictionary_object__object___get_Item(
                       v13,
                       (Il2CppObject *)StringLiteral_22470/*"orderId"*/,
                       (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !Dictionary )
          goto LABEL_35;
        v18 = (System_String_o *)(*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)Dictionary + 360LL))(
                                   Dictionary,
                                   *(_QWORD *)(*(_QWORD *)Dictionary + 368LL));
        Dictionary = System_Collections_Generic_Dictionary_object__object___get_Item(
                       v13,
                       (Il2CppObject *)StringLiteral_17932/*"chargeStoneNum"*/,
                       (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !Dictionary )
          goto LABEL_35;
        if ( *(Il2CppClass **)(*(_QWORD *)Dictionary + 64LL) != long_TypeInfo->_1.element_class )
          break;
        v21 = *(_DWORD *)j_il2cpp_object_unbox_0(Dictionary, long_TypeInfo, v19, v20);
        Dictionary = System_Collections_Generic_Dictionary_object__object___get_Item(
                       v13,
                       (Il2CppObject *)StringLiteral_19652/*"freeStoneNum"*/,
                       (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !Dictionary )
          goto LABEL_35;
        if ( *(Il2CppClass **)(*(_QWORD *)Dictionary + 64LL) != long_TypeInfo->_1.element_class )
          break;
        v24 = *(_DWORD *)j_il2cpp_object_unbox_0(Dictionary, long_TypeInfo, v22, v23);
        Dictionary = System_Collections_Generic_Dictionary_object__object___get_Item(
                       v13,
                       (Il2CppObject *)StringLiteral_22749/*"price"*/,
                       (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !Dictionary )
          goto LABEL_35;
        if ( *(Il2CppClass **)(*(_QWORD *)Dictionary + 64LL) != long_TypeInfo->_1.element_class )
          break;
        v27 = (PurchaseLogicExternal_o *)j_il2cpp_object_unbox_0(Dictionary, long_TypeInfo, v25, v26);
        v10 += v21;
        v11 += v24;
        PurchaseLogicExternal__SendPurchaseAction(v27, v17, (double)SLODWORD(v27->klass), v18, v28);
        if ( ++v12 >= v7->fields._size )
          goto LABEL_31;
      }
      sub_1C2D9AC(Dictionary);
LABEL_37:
      sub_1C2D9AC(v13);
LABEL_38:
      v36 = sub_1C2D9AC(v7);
      PurchaseLogicExternal__SendPurchaseAction(v32, v33, *(double *)&v36, v34, v35);
      return;
    }
    v11 = 0;
    v10 = 0;
LABEL_31:
    PurchaseLogicExternal__ShowExternalPaymentDialog((PurchaseLogicExternal_o *)Dictionary, v10, v11, v6);
    StoneCountRefreshComponent__RefreshAllStoneCount(v30);
  }
  else
  {
LABEL_27:
    v29 = PurchaseBehaviour_TypeInfo;
    if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
      v29 = PurchaseBehaviour_TypeInfo;
    }
    v29->static_fields->isOpenPurchaseDialogEvent = 0;
  }
  v31 = PurchaseLogicExternal_TypeInfo;
  if ( !PurchaseLogicExternal_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicExternal_TypeInfo);
    v31 = PurchaseLogicExternal_TypeInfo;
  }
  v31->static_fields->isEnd = 1;
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

  if ( (byte_4C26C17 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    sub_1C2D490(&StringLiteral_8154/*"JPY"*/);
    byte_4C26C17 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v9);
  AdManager__TrackPurchaseExternal(
    (AdManager_o *)Instance,
    actionId,
    price,
    (System_String_o *)StringLiteral_8154/*"JPY"*/,
    transactionId,
    0);
}


void PurchaseLogicExternal__ShowExternalPaymentDialog(
        PurchaseLogicExternal_o *this,
        int32_t chargeStoneNum,
        int32_t freeStoneNum,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4C26C16 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C26C16 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v7);
  CommonUI__OpenStonePurchaseReciveMenu((CommonUI_o *)Instance, 3, 0, freeStoneNum, chargeStoneNum, 0, 0, 0);
}