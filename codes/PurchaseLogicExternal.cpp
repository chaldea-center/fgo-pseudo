void PurchaseLogicExternal___cctor(const MethodInfo *method)
{
  if ( (byte_4C428E0 & 1) == 0 )
  {
    sub_1C37058(&PurchaseLogicExternal_TypeInfo);
    byte_4C428E0 = 1;
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

  if ( (byte_4C428DC & 1) == 0 )
  {
    sub_1C37058(&Method_NetworkManager_getRequest_ExternalPaymentReflectRequest___);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&Method_PurchaseLogicExternal_ExternalPaymentCheckCallBack__);
    sub_1C37058(&PurchaseLogicExternal_TypeInfo);
    sub_1C37058(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4C428DC = 1;
  }
  v3 = PurchaseLogicExternal_TypeInfo;
  if ( !PurchaseLogicExternal_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicExternal_TypeInfo);
    v3 = PurchaseLogicExternal_TypeInfo;
  }
  v3->static_fields->isEnd = 0;
  v4 = (NetworkManager_ResultCallbackFunc_o *)sub_1C372A4(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    Method_PurchaseLogicExternal_ExternalPaymentCheckCallBack__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v4,
                     (const MethodInfo_3172CF0 *)Method_NetworkManager_getRequest_ExternalPaymentReflectRequest___);
  if ( !Request_object )
    sub_1C372B4(0);
  RequestBase__beginRequest((RequestBase_o *)Request_object, 0);
}


void PurchaseLogicExternal__ExternalPaymentCheckCallBack(
        PurchaseLogicExternal_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  void *Dictionary; // x0
  const MethodInfo *v5; // x3
  System_Collections_Generic_List_object__o *v6; // x19
  __int64 naturalAligment; // x9
  int v8; // w8
  int32_t v9; // w21
  int32_t v10; // w20
  int32_t v11; // w22
  System_Collections_Generic_Dictionary_object__object__o *v12; // x23
  __int64 v13; // x9
  __int64 v14; // x2
  __int64 v15; // x3
  int32_t v16; // w24
  System_String_o *v17; // x25
  __int64 v18; // x2
  __int64 v19; // x3
  int v20; // w29
  __int64 v21; // x2
  __int64 v22; // x3
  int v23; // w26
  __int64 v24; // x2
  __int64 v25; // x3
  PurchaseLogicExternal_o *v26; // x0
  const MethodInfo *v27; // x3
  PurchaseBehaviour_c *v28; // x0
  const MethodInfo *v29; // x0
  PurchaseLogicExternal_c *v30; // x0
  PurchaseLogicExternal_o *v31; // x0
  int32_t v32; // w1
  System_String_o *v33; // x2
  const MethodInfo *v34; // x3
  long double v35; // q0

  if ( (byte_4C428DD & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C37058(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C37058(&long_TypeInfo);
    sub_1C37058(&JsonManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_object__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_object__get_Item__);
    sub_1C37058(&System_Collections_Generic_List_object__TypeInfo);
    sub_1C37058(&PurchaseBehaviour_TypeInfo);
    sub_1C37058(&PurchaseLogicExternal_TypeInfo);
    sub_1C37058(&StringLiteral_19667/*"freeStoneNum"*/);
    sub_1C37058(&StringLiteral_22770/*"price"*/);
    sub_1C37058(&StringLiteral_22490/*"orderId"*/);
    sub_1C37058(&StringLiteral_22215/*"ng"*/);
    sub_1C37058(&StringLiteral_17938/*"chargeStoneNum"*/);
    sub_1C37058(&StringLiteral_19342/*"externalPaymentResults"*/);
    sub_1C37058(&StringLiteral_24245/*"type"*/);
    byte_4C428DD = 1;
  }
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_22215/*"ng"*/, 0) )
    goto LABEL_27;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  Dictionary = JsonManager__getDictionary(result, 0);
  if ( !Dictionary
    || (Dictionary = System_Collections_Generic_Dictionary_object__object___get_Item(
                       (System_Collections_Generic_Dictionary_object__object__o *)Dictionary,
                       (Il2CppObject *)StringLiteral_19342/*"externalPaymentResults"*/,
                       (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
LABEL_35:
    sub_1C372B4(Dictionary);
  }
  v6 = (System_Collections_Generic_List_object__o *)Dictionary;
  naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
  if ( *(unsigned __int8 *)(*(_QWORD *)Dictionary + 304LL) < (unsigned int)naturalAligment
    || *(System_Collections_Generic_List_object__c **)(*(_QWORD *)(*(_QWORD *)Dictionary + 200LL)
                                                     + 8 * naturalAligment
                                                     - 8) != System_Collections_Generic_List_object__TypeInfo )
  {
    goto LABEL_38;
  }
  v8 = *((_DWORD *)Dictionary + 6);
  if ( v8 )
  {
    if ( v8 >= 1 )
    {
      v9 = 0;
      v10 = 0;
      v11 = 0;
      while ( 1 )
      {
        Dictionary = System_Collections_Generic_List_object___get_Item(
                       v6,
                       v11,
                       (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_object__get_Item__);
        if ( !Dictionary )
          goto LABEL_35;
        v12 = (System_Collections_Generic_Dictionary_object__object__o *)Dictionary;
        v13 = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
        if ( *(unsigned __int8 *)(*(_QWORD *)Dictionary + 304LL) < (unsigned int)v13
          || *(System_Collections_Generic_Dictionary_string__object__c **)(*(_QWORD *)(*(_QWORD *)Dictionary + 200LL)
                                                                         + 8 * v13
                                                                         - 8) != System_Collections_Generic_Dictionary_string__object__TypeInfo )
        {
          goto LABEL_37;
        }
        Dictionary = System_Collections_Generic_Dictionary_object__object___get_Item(
                       (System_Collections_Generic_Dictionary_object__object__o *)Dictionary,
                       (Il2CppObject *)StringLiteral_24245/*"type"*/,
                       (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !Dictionary )
          goto LABEL_35;
        if ( *(Il2CppClass **)(*(_QWORD *)Dictionary + 64LL) != long_TypeInfo->_1.element_class )
          break;
        v16 = *(_DWORD *)j_il2cpp_object_unbox_0(Dictionary, long_TypeInfo, v14, v15);
        Dictionary = System_Collections_Generic_Dictionary_object__object___get_Item(
                       v12,
                       (Il2CppObject *)StringLiteral_22490/*"orderId"*/,
                       (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !Dictionary )
          goto LABEL_35;
        v17 = (System_String_o *)(*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)Dictionary + 360LL))(
                                   Dictionary,
                                   *(_QWORD *)(*(_QWORD *)Dictionary + 368LL));
        Dictionary = System_Collections_Generic_Dictionary_object__object___get_Item(
                       v12,
                       (Il2CppObject *)StringLiteral_17938/*"chargeStoneNum"*/,
                       (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !Dictionary )
          goto LABEL_35;
        if ( *(Il2CppClass **)(*(_QWORD *)Dictionary + 64LL) != long_TypeInfo->_1.element_class )
          break;
        v20 = *(_DWORD *)j_il2cpp_object_unbox_0(Dictionary, long_TypeInfo, v18, v19);
        Dictionary = System_Collections_Generic_Dictionary_object__object___get_Item(
                       v12,
                       (Il2CppObject *)StringLiteral_19667/*"freeStoneNum"*/,
                       (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !Dictionary )
          goto LABEL_35;
        if ( *(Il2CppClass **)(*(_QWORD *)Dictionary + 64LL) != long_TypeInfo->_1.element_class )
          break;
        v23 = *(_DWORD *)j_il2cpp_object_unbox_0(Dictionary, long_TypeInfo, v21, v22);
        Dictionary = System_Collections_Generic_Dictionary_object__object___get_Item(
                       v12,
                       (Il2CppObject *)StringLiteral_22770/*"price"*/,
                       (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !Dictionary )
          goto LABEL_35;
        if ( *(Il2CppClass **)(*(_QWORD *)Dictionary + 64LL) != long_TypeInfo->_1.element_class )
          break;
        v26 = (PurchaseLogicExternal_o *)j_il2cpp_object_unbox_0(Dictionary, long_TypeInfo, v24, v25);
        v9 += v20;
        v10 += v23;
        PurchaseLogicExternal__SendPurchaseAction(v26, v16, (double)SLODWORD(v26->klass), v17, v27);
        if ( ++v11 >= v6->fields._size )
          goto LABEL_31;
      }
      sub_1C37574(Dictionary);
LABEL_37:
      sub_1C37574(v12);
LABEL_38:
      v35 = sub_1C37574(v6);
      PurchaseLogicExternal__SendPurchaseAction(v31, v32, *(double *)&v35, v33, v34);
      return;
    }
    v10 = 0;
    v9 = 0;
LABEL_31:
    PurchaseLogicExternal__ShowExternalPaymentDialog((PurchaseLogicExternal_o *)Dictionary, v9, v10, v5);
    StoneCountRefreshComponent__RefreshAllStoneCount(v29);
  }
  else
  {
LABEL_27:
    v28 = PurchaseBehaviour_TypeInfo;
    if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
      v28 = PurchaseBehaviour_TypeInfo;
    }
    v28->static_fields->isOpenPurchaseDialogEvent = 0;
  }
  v30 = PurchaseLogicExternal_TypeInfo;
  if ( !PurchaseLogicExternal_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicExternal_TypeInfo);
    v30 = PurchaseLogicExternal_TypeInfo;
  }
  v30->static_fields->isEnd = 1;
}


void PurchaseLogicExternal__SendPurchaseAction(
        PurchaseLogicExternal_o *this,
        int32_t actionId,
        double price,
        System_String_o *transactionId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C428DF & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    sub_1C37058(&StringLiteral_8161/*"JPY"*/);
    byte_4C428DF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  AdManager__TrackPurchaseExternal(
    (AdManager_o *)Instance,
    actionId,
    price,
    (System_String_o *)StringLiteral_8161/*"JPY"*/,
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

  if ( (byte_4C428DE & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C428DE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  CommonUI__OpenStonePurchaseReciveMenu((CommonUI_o *)Instance, 3, 0, freeStoneNum, chargeStoneNum, 0, 0, 0);
}