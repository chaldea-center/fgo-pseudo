void __fastcall PurchaseLogicExternal___cctor(const MethodInfo *method)
{
  if ( (byte_4A5AB19 & 1) == 0 )
  {
    sub_1B885B0(&PurchaseLogicExternal_TypeInfo);
    byte_4A5AB19 = 1;
  }
  PurchaseLogicExternal_TypeInfo->static_fields->isEnd = 1;
}


void __fastcall PurchaseLogicExternal___ctor(PurchaseLogicExternal_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall PurchaseLogicExternal__ExternalPaymentCheck(PurchaseLogicExternal_o *this, const MethodInfo *method)
{
  PurchaseLogicExternal_c *v3; // x0
  NetworkManager_ResultCallbackFunc_o *v4; // x20
  Il2CppObject *Request_object; // x0
  __int64 v6; // x1

  if ( (byte_4A5AB15 & 1) == 0 )
  {
    sub_1B885B0(&Method_NetworkManager_getRequest_ExternalPaymentReflectRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_PurchaseLogicExternal_ExternalPaymentCheckCallBack__);
    sub_1B885B0(&PurchaseLogicExternal_TypeInfo);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4A5AB15 = 1;
  }
  v3 = PurchaseLogicExternal_TypeInfo;
  if ( !PurchaseLogicExternal_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicExternal_TypeInfo);
    v3 = PurchaseLogicExternal_TypeInfo;
  }
  v3->static_fields->isEnd = 0;
  v4 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    Method_PurchaseLogicExternal_ExternalPaymentCheckCallBack__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v4,
                     (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_ExternalPaymentReflectRequest___);
  if ( !Request_object )
    sub_1B8880C(0LL, v6);
  RequestBase__beginRequest((RequestBase_o *)Request_object, 0LL);
}


void __fastcall PurchaseLogicExternal__ExternalPaymentCheckCallBack(
        PurchaseLogicExternal_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  void *Dictionary; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x3
  System_Collections_Generic_List_object__o *v7; // x19
  __int64 methodPtr_low; // x9
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
  int v21; // w28
  __int64 v22; // x2
  __int64 v23; // x3
  int v24; // w29
  __int64 v25; // x2
  __int64 v26; // x3
  PurchaseLogicExternal_o *v27; // x0
  const MethodInfo *v28; // x3
  PurchaseBehaviour_c *v29; // x0
  PurchaseBehaviour_c *v30; // x0
  const MethodInfo *v31; // x0
  PurchaseLogicExternal_c *v32; // x0
  PurchaseLogicExternal_o *v33; // x0
  int32_t v34; // w1
  System_String_o *v35; // x2
  const MethodInfo *v36; // x3
  long double v37; // q0

  if ( (byte_4A5AB16 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1B885B0(&long_TypeInfo);
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_object__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_object__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_object__TypeInfo);
    sub_1B885B0(&PurchaseBehaviour_TypeInfo);
    sub_1B885B0(&PurchaseLogicExternal_TypeInfo);
    sub_1B885B0(&StringLiteral_19630/*"freeStoneNum"*/);
    sub_1B885B0(&StringLiteral_22596/*"price"*/);
    sub_1B885B0(&StringLiteral_22334/*"orderId"*/);
    sub_1B885B0(&StringLiteral_22055/*"ng"*/);
    sub_1B885B0(&StringLiteral_17929/*"chargeStoneNum"*/);
    sub_1B885B0(&StringLiteral_19321/*"externalPaymentResults"*/);
    sub_1B885B0(&StringLiteral_24109/*"type"*/);
    byte_4A5AB16 = 1;
  }
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_22055/*"ng"*/, 0LL) )
  {
    v29 = PurchaseBehaviour_TypeInfo;
    if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
      v29 = PurchaseBehaviour_TypeInfo;
    }
    v29->static_fields->isOpenPurchaseDialogEvent = 0;
LABEL_35:
    v32 = PurchaseLogicExternal_TypeInfo;
    if ( !PurchaseLogicExternal_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaseLogicExternal_TypeInfo);
      v32 = PurchaseLogicExternal_TypeInfo;
    }
    v32->static_fields->isEnd = 1;
    return;
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  Dictionary = JsonManager__getDictionary(result, 0LL);
  if ( !Dictionary
    || (Dictionary = System_Collections_Generic_Dictionary_object__object___get_Item(
                       (System_Collections_Generic_Dictionary_object__object__o *)Dictionary,
                       (Il2CppObject *)StringLiteral_19321/*"externalPaymentResults"*/,
                       (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
LABEL_38:
    sub_1B8880C(Dictionary, v5);
  }
  v7 = (System_Collections_Generic_List_object__o *)Dictionary;
  methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
  if ( *(unsigned __int8 *)(*(_QWORD *)Dictionary + 304LL) < (unsigned int)methodPtr_low
    || *(System_Collections_Generic_List_object__c **)(*(_QWORD *)(*(_QWORD *)Dictionary + 200LL) + 8 * methodPtr_low - 8) != System_Collections_Generic_List_object__TypeInfo )
  {
    goto LABEL_41;
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
                       (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_object__get_Item__);
        if ( !Dictionary )
          goto LABEL_38;
        v13 = (System_Collections_Generic_Dictionary_object__object__o *)Dictionary;
        v14 = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Dictionary + 304LL) < (unsigned int)v14
          || *(System_Collections_Generic_Dictionary_string__object__c **)(*(_QWORD *)(*(_QWORD *)Dictionary + 200LL)
                                                                         + 8 * v14
                                                                         - 8) != System_Collections_Generic_Dictionary_string__object__TypeInfo )
        {
          goto LABEL_40;
        }
        Dictionary = System_Collections_Generic_Dictionary_object__object___get_Item(
                       (System_Collections_Generic_Dictionary_object__object__o *)Dictionary,
                       (Il2CppObject *)StringLiteral_24109/*"type"*/,
                       (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !Dictionary )
          goto LABEL_38;
        if ( *(Il2CppClass **)(*(_QWORD *)Dictionary + 64LL) != long_TypeInfo->_1.element_class )
          break;
        v17 = *(_DWORD *)j_il2cpp_object_unbox_0(Dictionary, long_TypeInfo, v15, v16);
        Dictionary = System_Collections_Generic_Dictionary_object__object___get_Item(
                       v13,
                       (Il2CppObject *)StringLiteral_22334/*"orderId"*/,
                       (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !Dictionary )
          goto LABEL_38;
        v18 = (System_String_o *)(*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)Dictionary + 360LL))(
                                   Dictionary,
                                   *(_QWORD *)(*(_QWORD *)Dictionary + 368LL));
        Dictionary = System_Collections_Generic_Dictionary_object__object___get_Item(
                       v13,
                       (Il2CppObject *)StringLiteral_17929/*"chargeStoneNum"*/,
                       (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !Dictionary )
          goto LABEL_38;
        if ( *(Il2CppClass **)(*(_QWORD *)Dictionary + 64LL) != long_TypeInfo->_1.element_class )
          break;
        v21 = *(_DWORD *)j_il2cpp_object_unbox_0(Dictionary, long_TypeInfo, v19, v20);
        Dictionary = System_Collections_Generic_Dictionary_object__object___get_Item(
                       v13,
                       (Il2CppObject *)StringLiteral_19630/*"freeStoneNum"*/,
                       (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !Dictionary )
          goto LABEL_38;
        if ( *(Il2CppClass **)(*(_QWORD *)Dictionary + 64LL) != long_TypeInfo->_1.element_class )
          break;
        v24 = *(_DWORD *)j_il2cpp_object_unbox_0(Dictionary, long_TypeInfo, v22, v23);
        Dictionary = System_Collections_Generic_Dictionary_object__object___get_Item(
                       v13,
                       (Il2CppObject *)StringLiteral_22596/*"price"*/,
                       (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !Dictionary )
          goto LABEL_38;
        if ( *(Il2CppClass **)(*(_QWORD *)Dictionary + 64LL) != long_TypeInfo->_1.element_class )
          break;
        v27 = (PurchaseLogicExternal_o *)j_il2cpp_object_unbox_0(Dictionary, long_TypeInfo, v25, v26);
        v10 += v21;
        v11 += v24;
        PurchaseLogicExternal__SendPurchaseAction(v27, v17, (double)SLODWORD(v27->klass), v18, v28);
        if ( ++v12 >= v7->fields._size )
          goto LABEL_34;
      }
      sub_1B88ACC(Dictionary);
LABEL_40:
      sub_1B88ACC(v13);
LABEL_41:
      v37 = sub_1B88ACC(v7);
      PurchaseLogicExternal__SendPurchaseAction(v33, v34, *(double *)&v37, v35, v36);
      return;
    }
    v11 = 0;
    v10 = 0;
LABEL_34:
    PurchaseLogicExternal__ShowExternalPaymentDialog((PurchaseLogicExternal_o *)Dictionary, v10, v11, v6);
    StoneCountRefreshComponent__RefreshAllStoneCount(v31);
    goto LABEL_35;
  }
  v30 = PurchaseBehaviour_TypeInfo;
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
    v30 = PurchaseBehaviour_TypeInfo;
  }
  v30->static_fields->isOpenPurchaseDialogEvent = 0;
}


void __fastcall PurchaseLogicExternal__SendPurchaseAction(
        PurchaseLogicExternal_o *this,
        int32_t actionId,
        double price,
        System_String_o *transactionId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v9; // x1

  if ( (byte_4A5AB18 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    sub_1B885B0(&StringLiteral_8135/*"JPY"*/);
    byte_4A5AB18 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v9);
  AdManager__TrackPurchaseExternal(
    (AdManager_o *)Instance,
    actionId,
    price,
    (System_String_o *)StringLiteral_8135/*"JPY"*/,
    transactionId,
    0LL);
}


void __fastcall PurchaseLogicExternal__ShowExternalPaymentDialog(
        PurchaseLogicExternal_o *this,
        int32_t chargeStoneNum,
        int32_t freeStoneNum,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4A5AB17 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5AB17 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v7);
  CommonUI__OpenStonePurchaseReciveMenu((CommonUI_o *)Instance, 3, 0, freeStoneNum, chargeStoneNum, 0, 0, 0LL);
}