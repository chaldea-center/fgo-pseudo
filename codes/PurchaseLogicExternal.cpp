void __fastcall PurchaseLogicExternal___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B15B9D & 1) == 0 )
  {
    sub_1BCA7E0(&PurchaseLogicExternal_TypeInfo, v1, v2);
    byte_4B15B9D = 1;
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
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  PurchaseLogicExternal_c *v13; // x0
  NetworkManager_ResultCallbackFunc_o *v14; // x20
  __int64 v15; // x1
  Il2CppObject *Request_object; // x0
  __int64 v17; // x1

  if ( (byte_4B15B99 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_NetworkManager_getRequest_ExternalPaymentReflectRequest___, method, v2);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_PurchaseLogicExternal_ExternalPaymentCheckCallBack__, v7, v8);
    sub_1BCA7E0(&PurchaseLogicExternal_TypeInfo, v9, v10);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v11, v12);
    byte_4B15B99 = 1;
  }
  v13 = PurchaseLogicExternal_TypeInfo;
  if ( !PurchaseLogicExternal_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicExternal_TypeInfo, method);
    v13 = PurchaseLogicExternal_TypeInfo;
  }
  v13->static_fields->isEnd = 0;
  v14 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, method, v2, v3);
  NetworkManager_ResultCallbackFunc___ctor(
    v14,
    (Il2CppObject *)this,
    Method_PurchaseLogicExternal_ExternalPaymentCheckCallBack__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v15);
  Request_object = NetworkManager__getRequest_object_(
                     v14,
                     (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_ExternalPaymentReflectRequest___);
  if ( !Request_object )
    sub_1BCAA3C(0LL, v17);
  RequestBase__beginRequest((RequestBase_o *)Request_object, 0LL);
}


void __fastcall PurchaseLogicExternal__ExternalPaymentCheckCallBack(
        PurchaseLogicExternal_o *this,
        System_String_o *result,
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
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  System_Collections_Generic_List_object__c *v34; // x1
  void *Dictionary; // x0
  __int64 v36; // x1
  const MethodInfo *v37; // x3
  System_Collections_Generic_List_object__o *v38; // x19
  __int64 methodPtr_low; // x9
  int v40; // w8
  int32_t v41; // w21
  int32_t v42; // w20
  int32_t v43; // w22
  System_Collections_Generic_Dictionary_object__object__o *v44; // x23
  __int64 v45; // x9
  __int64 v46; // x2
  __int64 v47; // x3
  int32_t v48; // w24
  System_String_o *v49; // x25
  __int64 v50; // x2
  __int64 v51; // x3
  int v52; // w29
  __int64 v53; // x2
  __int64 v54; // x3
  int v55; // w26
  __int64 v56; // x2
  __int64 v57; // x3
  PurchaseLogicExternal_o *v58; // x0
  const MethodInfo *v59; // x3
  PurchaseBehaviour_c *v60; // x0
  const MethodInfo *v61; // x0
  PurchaseLogicExternal_c *v62; // x0
  PurchaseLogicExternal_o *v63; // x0
  int32_t v64; // w1
  System_String_o *v65; // x2
  const MethodInfo *v66; // x3
  long double v67; // q0

  if ( (byte_4B15B9A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, result, method);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v4, v5);
    sub_1BCA7E0(&long_TypeInfo, v6, v7);
    sub_1BCA7E0(&JsonManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_object__get_Count__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_object__get_Item__, v12, v13);
    sub_1BCA7E0(&System_Collections_Generic_List_object__TypeInfo, v14, v15);
    sub_1BCA7E0(&PurchaseBehaviour_TypeInfo, v16, v17);
    sub_1BCA7E0(&PurchaseLogicExternal_TypeInfo, v18, v19);
    sub_1BCA7E0(&StringLiteral_19832/*"freeStoneNum"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_22838/*"price"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_22574/*"orderId"*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, v26, v27);
    sub_1BCA7E0(&StringLiteral_18112/*"chargeStoneNum"*/, v28, v29);
    sub_1BCA7E0(&StringLiteral_19523/*"externalPaymentResults"*/, v30, v31);
    sub_1BCA7E0(&StringLiteral_24361/*"type"*/, v32, v33);
    byte_4B15B9A = 1;
  }
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_22292/*"ng"*/, 0LL) )
    goto LABEL_27;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v34);
  Dictionary = JsonManager__getDictionary(result, 0LL);
  if ( !Dictionary
    || (Dictionary = System_Collections_Generic_Dictionary_object__object___get_Item(
                       (System_Collections_Generic_Dictionary_object__object__o *)Dictionary,
                       (Il2CppObject *)StringLiteral_19523/*"externalPaymentResults"*/,
                       (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
LABEL_35:
    sub_1BCAA3C(Dictionary, v36);
  }
  v38 = (System_Collections_Generic_List_object__o *)Dictionary;
  v34 = System_Collections_Generic_List_object__TypeInfo;
  methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
  if ( *(unsigned __int8 *)(*(_QWORD *)Dictionary + 304LL) < (unsigned int)methodPtr_low
    || *(System_Collections_Generic_List_object__c **)(*(_QWORD *)(*(_QWORD *)Dictionary + 200LL) + 8 * methodPtr_low - 8) != System_Collections_Generic_List_object__TypeInfo )
  {
    goto LABEL_38;
  }
  v40 = *((_DWORD *)Dictionary + 6);
  if ( v40 )
  {
    if ( v40 >= 1 )
    {
      v41 = 0;
      v42 = 0;
      v43 = 0;
      while ( 1 )
      {
        Dictionary = System_Collections_Generic_List_object___get_Item(
                       v38,
                       v43,
                       (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_object__get_Item__);
        if ( !Dictionary )
          goto LABEL_35;
        v44 = (System_Collections_Generic_Dictionary_object__object__o *)Dictionary;
        v45 = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Dictionary + 304LL) < (unsigned int)v45
          || *(System_Collections_Generic_Dictionary_string__object__c **)(*(_QWORD *)(*(_QWORD *)Dictionary + 200LL)
                                                                         + 8 * v45
                                                                         - 8) != System_Collections_Generic_Dictionary_string__object__TypeInfo )
        {
          goto LABEL_37;
        }
        Dictionary = System_Collections_Generic_Dictionary_object__object___get_Item(
                       (System_Collections_Generic_Dictionary_object__object__o *)Dictionary,
                       (Il2CppObject *)StringLiteral_24361/*"type"*/,
                       (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !Dictionary )
          goto LABEL_35;
        if ( *(Il2CppClass **)(*(_QWORD *)Dictionary + 64LL) != long_TypeInfo->_1.element_class )
          break;
        v48 = *(_DWORD *)j_il2cpp_object_unbox_0(Dictionary, long_TypeInfo, v46, v47);
        Dictionary = System_Collections_Generic_Dictionary_object__object___get_Item(
                       v44,
                       (Il2CppObject *)StringLiteral_22574/*"orderId"*/,
                       (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !Dictionary )
          goto LABEL_35;
        v49 = (System_String_o *)(*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)Dictionary + 360LL))(
                                   Dictionary,
                                   *(_QWORD *)(*(_QWORD *)Dictionary + 368LL));
        Dictionary = System_Collections_Generic_Dictionary_object__object___get_Item(
                       v44,
                       (Il2CppObject *)StringLiteral_18112/*"chargeStoneNum"*/,
                       (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !Dictionary )
          goto LABEL_35;
        if ( *(Il2CppClass **)(*(_QWORD *)Dictionary + 64LL) != long_TypeInfo->_1.element_class )
          break;
        v52 = *(_DWORD *)j_il2cpp_object_unbox_0(Dictionary, long_TypeInfo, v50, v51);
        Dictionary = System_Collections_Generic_Dictionary_object__object___get_Item(
                       v44,
                       (Il2CppObject *)StringLiteral_19832/*"freeStoneNum"*/,
                       (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !Dictionary )
          goto LABEL_35;
        if ( *(Il2CppClass **)(*(_QWORD *)Dictionary + 64LL) != long_TypeInfo->_1.element_class )
          break;
        v55 = *(_DWORD *)j_il2cpp_object_unbox_0(Dictionary, long_TypeInfo, v53, v54);
        Dictionary = System_Collections_Generic_Dictionary_object__object___get_Item(
                       v44,
                       (Il2CppObject *)StringLiteral_22838/*"price"*/,
                       (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !Dictionary )
          goto LABEL_35;
        if ( *(Il2CppClass **)(*(_QWORD *)Dictionary + 64LL) != long_TypeInfo->_1.element_class )
          break;
        v58 = (PurchaseLogicExternal_o *)j_il2cpp_object_unbox_0(Dictionary, long_TypeInfo, v56, v57);
        v41 += v52;
        v42 += v55;
        PurchaseLogicExternal__SendPurchaseAction(v58, v48, (double)SLODWORD(v58->klass), v49, v59);
        if ( ++v43 >= v38->fields._size )
          goto LABEL_31;
      }
      sub_1BCACFC(Dictionary);
LABEL_37:
      sub_1BCACFC(v44);
LABEL_38:
      v67 = sub_1BCACFC(v38);
      PurchaseLogicExternal__SendPurchaseAction(v63, v64, *(double *)&v67, v65, v66);
      return;
    }
    v42 = 0;
    v41 = 0;
LABEL_31:
    PurchaseLogicExternal__ShowExternalPaymentDialog((PurchaseLogicExternal_o *)Dictionary, v41, v42, v37);
    StoneCountRefreshComponent__RefreshAllStoneCount(v61);
  }
  else
  {
LABEL_27:
    v60 = PurchaseBehaviour_TypeInfo;
    if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo, v34);
      v60 = PurchaseBehaviour_TypeInfo;
    }
    v60->static_fields->isOpenPurchaseDialogEvent = 0;
  }
  v62 = PurchaseLogicExternal_TypeInfo;
  if ( !PurchaseLogicExternal_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicExternal_TypeInfo, v34);
    v62 = PurchaseLogicExternal_TypeInfo;
  }
  v62->static_fields->isEnd = 1;
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
  __int64 v9; // x2
  Il2CppObject *Instance; // x0
  __int64 v11; // x1

  if ( (byte_4B15B9C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, *(_QWORD *)&actionId, transactionId);
    sub_1BCA7E0(&StringLiteral_8261/*"JPY"*/, v8, v9);
    byte_4B15B9C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v11);
  AdManager__TrackPurchaseExternal(
    (AdManager_o *)Instance,
    actionId,
    price,
    (System_String_o *)StringLiteral_8261/*"JPY"*/,
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

  if ( (byte_4B15B9B & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
      *(_QWORD *)&chargeStoneNum,
      *(_QWORD *)&freeStoneNum);
    byte_4B15B9B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v7);
  CommonUI__OpenStonePurchaseReciveMenu((CommonUI_o *)Instance, 3, 0, freeStoneNum, chargeStoneNum, 0, 0, 0LL);
}