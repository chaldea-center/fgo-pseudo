void __fastcall PurchaseLogicExternal___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B443EB & 1) == 0 )
  {
    sub_1BDB878(&PurchaseLogicExternal_TypeInfo, v1);
    byte_4B443EB = 1;
  }
  PurchaseLogicExternal_TypeInfo->static_fields->isEnd = 1;
}


void __fastcall PurchaseLogicExternal___ctor(PurchaseLogicExternal_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall PurchaseLogicExternal__ExternalPaymentCheck(PurchaseLogicExternal_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  PurchaseLogicExternal_c *v7; // x0
  NetworkManager_ResultCallbackFunc_o *v8; // x20
  const MethodInfo *v9; // x3
  Il2CppObject *Request_object; // x0
  __int64 v11; // x1

  if ( (byte_4B443E7 & 1) == 0 )
  {
    sub_1BDB878(&Method_NetworkManager_getRequest_ExternalPaymentReflectRequest___, method);
    sub_1BDB878(&NetworkManager_TypeInfo, v3);
    sub_1BDB878(&Method_PurchaseLogicExternal_ExternalPaymentCheckCallBack__, v4);
    sub_1BDB878(&PurchaseLogicExternal_TypeInfo, v5);
    sub_1BDB878(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    byte_4B443E7 = 1;
  }
  v7 = PurchaseLogicExternal_TypeInfo;
  if ( !PurchaseLogicExternal_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicExternal_TypeInfo);
    v7 = PurchaseLogicExternal_TypeInfo;
  }
  v7->static_fields->isEnd = 0;
  v8 = (NetworkManager_ResultCallbackFunc_o *)sub_1BDBAC4(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    Method_PurchaseLogicExternal_ExternalPaymentCheckCallBack__,
    v9);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v8,
                     (const MethodInfo_30BC7D4 *)Method_NetworkManager_getRequest_ExternalPaymentReflectRequest___);
  if ( !Request_object )
    sub_1BDBAD4(0LL, v11);
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
  __int64 v20; // x1
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_object__o *v22; // x19
  __int64 methodPtr_low; // x9
  int v24; // w8
  int32_t v25; // w21
  int32_t v26; // w20
  int32_t v27; // w22
  System_Collections_Generic_Dictionary_object__object__o *v28; // x23
  __int64 v29; // x9
  __int64 v30; // x2
  __int64 v31; // x3
  int32_t v32; // w24
  System_String_o *v33; // x25
  __int64 v34; // x2
  __int64 v35; // x3
  int v36; // w29
  __int64 v37; // x2
  __int64 v38; // x3
  int v39; // w26
  __int64 v40; // x2
  __int64 v41; // x3
  PurchaseLogicExternal_o *v42; // x0
  const MethodInfo *v43; // x3
  PurchaseBehaviour_c *v44; // x0
  const MethodInfo *v45; // x0
  PurchaseLogicExternal_c *v46; // x0
  PurchaseLogicExternal_o *v47; // x0
  int32_t v48; // w1
  System_String_o *v49; // x2
  const MethodInfo *v50; // x3
  long double v51; // q0

  if ( (byte_4B443E8 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, result);
    sub_1BDB878(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v4);
    sub_1BDB878(&long_TypeInfo, v5);
    sub_1BDB878(&JsonManager_TypeInfo, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_object__get_Count__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_object__get_Item__, v8);
    sub_1BDB878(&System_Collections_Generic_List_object__TypeInfo, v9);
    sub_1BDB878(&PurchaseBehaviour_TypeInfo, v10);
    sub_1BDB878(&PurchaseLogicExternal_TypeInfo, v11);
    sub_1BDB878(&StringLiteral_19680/*"freeStoneNum"*/, v12);
    sub_1BDB878(&StringLiteral_22788/*"price"*/, v13);
    sub_1BDB878(&StringLiteral_22510/*"orderId"*/, v14);
    sub_1BDB878(&StringLiteral_22233/*"ng"*/, v15);
    sub_1BDB878(&StringLiteral_17943/*"chargeStoneNum"*/, v16);
    sub_1BDB878(&StringLiteral_19346/*"externalPaymentResults"*/, v17);
    sub_1BDB878(&StringLiteral_24298/*"type"*/, v18);
    byte_4B443E8 = 1;
  }
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_22233/*"ng"*/, 0LL) )
    goto LABEL_27;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  Dictionary = JsonManager__getDictionary(result, 0LL);
  if ( !Dictionary
    || (Dictionary = System_Collections_Generic_Dictionary_object__object___get_Item(
                       (System_Collections_Generic_Dictionary_object__object__o *)Dictionary,
                       (Il2CppObject *)StringLiteral_19346/*"externalPaymentResults"*/,
                       (const MethodInfo_33A01B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
LABEL_35:
    sub_1BDBAD4(Dictionary, v20);
  }
  v22 = (System_Collections_Generic_List_object__o *)Dictionary;
  methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
  if ( *(unsigned __int8 *)(*(_QWORD *)Dictionary + 304LL) < (unsigned int)methodPtr_low
    || *(System_Collections_Generic_List_object__c **)(*(_QWORD *)(*(_QWORD *)Dictionary + 200LL) + 8 * methodPtr_low - 8) != System_Collections_Generic_List_object__TypeInfo )
  {
    goto LABEL_38;
  }
  v24 = *((_DWORD *)Dictionary + 6);
  if ( v24 )
  {
    if ( v24 >= 1 )
    {
      v25 = 0;
      v26 = 0;
      v27 = 0;
      while ( 1 )
      {
        Dictionary = System_Collections_Generic_List_object___get_Item(
                       v22,
                       v27,
                       (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_object__get_Item__);
        if ( !Dictionary )
          goto LABEL_35;
        v28 = (System_Collections_Generic_Dictionary_object__object__o *)Dictionary;
        v29 = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Dictionary + 304LL) < (unsigned int)v29
          || *(System_Collections_Generic_Dictionary_string__object__c **)(*(_QWORD *)(*(_QWORD *)Dictionary + 200LL)
                                                                         + 8 * v29
                                                                         - 8) != System_Collections_Generic_Dictionary_string__object__TypeInfo )
        {
          goto LABEL_37;
        }
        Dictionary = System_Collections_Generic_Dictionary_object__object___get_Item(
                       (System_Collections_Generic_Dictionary_object__object__o *)Dictionary,
                       (Il2CppObject *)StringLiteral_24298/*"type"*/,
                       (const MethodInfo_33A01B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !Dictionary )
          goto LABEL_35;
        if ( *(Il2CppClass **)(*(_QWORD *)Dictionary + 64LL) != long_TypeInfo->_1.element_class )
          break;
        v32 = *(_DWORD *)j_il2cpp_object_unbox_0(Dictionary, long_TypeInfo, v30, v31);
        Dictionary = System_Collections_Generic_Dictionary_object__object___get_Item(
                       v28,
                       (Il2CppObject *)StringLiteral_22510/*"orderId"*/,
                       (const MethodInfo_33A01B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !Dictionary )
          goto LABEL_35;
        v33 = (System_String_o *)(*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)Dictionary + 360LL))(
                                   Dictionary,
                                   *(_QWORD *)(*(_QWORD *)Dictionary + 368LL));
        Dictionary = System_Collections_Generic_Dictionary_object__object___get_Item(
                       v28,
                       (Il2CppObject *)StringLiteral_17943/*"chargeStoneNum"*/,
                       (const MethodInfo_33A01B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !Dictionary )
          goto LABEL_35;
        if ( *(Il2CppClass **)(*(_QWORD *)Dictionary + 64LL) != long_TypeInfo->_1.element_class )
          break;
        v36 = *(_DWORD *)j_il2cpp_object_unbox_0(Dictionary, long_TypeInfo, v34, v35);
        Dictionary = System_Collections_Generic_Dictionary_object__object___get_Item(
                       v28,
                       (Il2CppObject *)StringLiteral_19680/*"freeStoneNum"*/,
                       (const MethodInfo_33A01B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !Dictionary )
          goto LABEL_35;
        if ( *(Il2CppClass **)(*(_QWORD *)Dictionary + 64LL) != long_TypeInfo->_1.element_class )
          break;
        v39 = *(_DWORD *)j_il2cpp_object_unbox_0(Dictionary, long_TypeInfo, v37, v38);
        Dictionary = System_Collections_Generic_Dictionary_object__object___get_Item(
                       v28,
                       (Il2CppObject *)StringLiteral_22788/*"price"*/,
                       (const MethodInfo_33A01B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !Dictionary )
          goto LABEL_35;
        if ( *(Il2CppClass **)(*(_QWORD *)Dictionary + 64LL) != long_TypeInfo->_1.element_class )
          break;
        v42 = (PurchaseLogicExternal_o *)j_il2cpp_object_unbox_0(Dictionary, long_TypeInfo, v40, v41);
        v25 += v36;
        v26 += v39;
        PurchaseLogicExternal__SendPurchaseAction(v42, v32, (double)SLODWORD(v42->klass), v33, v43);
        if ( ++v27 >= v22->fields._size )
          goto LABEL_31;
      }
      sub_1BDBD94(Dictionary);
LABEL_37:
      sub_1BDBD94(v28);
LABEL_38:
      v51 = sub_1BDBD94(v22);
      PurchaseLogicExternal__SendPurchaseAction(v47, v48, *(double *)&v51, v49, v50);
      return;
    }
    v26 = 0;
    v25 = 0;
LABEL_31:
    PurchaseLogicExternal__ShowExternalPaymentDialog((PurchaseLogicExternal_o *)Dictionary, v25, v26, v21);
    StoneCountRefreshComponent__RefreshAllStoneCount(v45);
  }
  else
  {
LABEL_27:
    v44 = PurchaseBehaviour_TypeInfo;
    if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
      v44 = PurchaseBehaviour_TypeInfo;
    }
    v44->static_fields->isOpenPurchaseDialogEvent = 0;
  }
  v46 = PurchaseLogicExternal_TypeInfo;
  if ( !PurchaseLogicExternal_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicExternal_TypeInfo);
    v46 = PurchaseLogicExternal_TypeInfo;
  }
  v46->static_fields->isEnd = 1;
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
  __int64 v10; // x1

  if ( (byte_4B443EA & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, *(_QWORD *)&actionId);
    sub_1BDB878(&StringLiteral_8152/*"JPY"*/, v8);
    byte_4B443EA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
  if ( !Instance )
    sub_1BDBAD4(0LL, v10);
  AdManager__TrackPurchaseExternal(
    (AdManager_o *)Instance,
    actionId,
    price,
    (System_String_o *)StringLiteral_8152/*"JPY"*/,
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
  __int64 v7; // x1

  if ( (byte_4B443E9 & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, *(_QWORD *)&chargeStoneNum);
    byte_4B443E9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BDBAD4(0LL, v7);
  CommonUI__OpenStonePurchaseReciveMenu((CommonUI_o *)Instance, 3, 0, freeStoneNum, chargeStoneNum, 0, 0, 0LL);
}