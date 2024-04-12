void __fastcall PurchaseByBank_UnityIap_Request___ctor(
        PurchaseByBank_UnityIap_Request_o *this,
        const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall PurchaseByBank_UnityIap_Request__beginRequest(
        PurchaseByBank_UnityIap_Request_o *this,
        System_String_o *purchaseBaseData,
        System_String_o *purchaseData,
        int32_t storeError,
        System_String_o *extraToken,
        System_Action_PurchaseByBank_UnityIap_Request_PurchaseResult____o *callback,
        const MethodInfo *method)
{
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_42AFBD9 & 1) == 0 )
  {
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&StringLiteral_22525/*"storeError"*/);
    sub_B52984(&StringLiteral_21757/*"purchaseData"*/);
    sub_B52984(&StringLiteral_21758/*"purchaseDataBase64"*/);
    sub_B52984(&StringLiteral_22312/*"signatureData"*/);
    byte_42AFBD9 = 1;
  }
  RequestBase__addField_32020920((RequestBase_o *)this, (System_String_o *)StringLiteral_21757/*"purchaseData"*/, purchaseData, 0LL);
  if ( !System_String__IsNullOrEmpty(purchaseBaseData, 0LL) )
    RequestBase__addField_32020920((RequestBase_o *)this, (System_String_o *)StringLiteral_21758/*"purchaseDataBase64"*/, purchaseBaseData, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22525/*"storeError"*/, storeError, 0LL);
  if ( !System_String__IsNullOrEmpty(extraToken, 0LL) )
    RequestBase__addField_32020920((RequestBase_o *)this, (System_String_o *)StringLiteral_22312/*"signatureData"*/, extraToken, 0LL);
  this->fields.passPurchaseResultCallBack = callback;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.passPurchaseResultCallBack,
    (System_Int32_array **)callback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  RequestBase__addBaseField((RequestBase_o *)this, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  NetworkManager__RequestStart((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall PurchaseByBank_UnityIap_Request__getURL(
        PurchaseByBank_UnityIap_Request_o *this,
        const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_42AFBD8 & 1) == 0 )
  {
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&StringLiteral_22293/*"shop/purchaseByBank"*/);
    byte_42AFBD8 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44568316(BaseUrl, (System_String_o *)StringLiteral_22293/*"shop/purchaseByBank"*/, 0LL);
}


void __fastcall PurchaseByBank_UnityIap_Request__requestCompleted(
        PurchaseByBank_UnityIap_Request_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *success; // x21
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v8; // x0
  System_String_o *v9; // x20
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  __int64 v11; // x1
  Il2CppObject *v12; // x21
  BlankEarth_QAARotateEarthResponse_o *v13; // x0
  RequestBase_o *v14; // x0
  System_String_o *v15; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *fail; // x20
  __int64 v17; // x21

  if ( (byte_42AFBDA & 1) == 0 )
  {
    sub_B52984(&Method_ActionExtensions_Call_PurchaseByBank_UnityIap_Request_PurchaseResult_____);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B52984(&Method_JsonManager_DeserializeArray_PurchaseByBank_UnityIap_Request_PurchaseResult___);
    sub_B52984(&JsonManager_TypeInfo);
    sub_B52984(&ResponseCommandKind_TypeInfo);
    sub_B52984(&StringLiteral_21980/*"result"*/);
    sub_B52984(&StringLiteral_21239/*"ng"*/);
    sub_B52984(&StringLiteral_21761/*"purchaseResults"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42AFBDA = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v5 = ResponseCommandKind__SearchData(11, responseList, 0LL);
  if ( !v5 )
    goto LABEL_23;
  v6 = v5;
  if ( !ResponseData__checkError_29724768(v5, 0LL) )
  {
    fail = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v6->fields.fail;
    if ( fail )
    {
      v17 = StringLiteral_21239/*"ng"*/;
      if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
             (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)fail,
             (System_Xml_XmlQualifiedName_o *)StringLiteral_21980/*"result"*/,
             (const MethodInfo_2F1BA74 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      {
        Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                 fail,
                 (System_Type_o *)StringLiteral_21980/*"result"*/,
                 (const MethodInfo_2F1B73C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !Item )
          goto LABEL_25;
        v17 = ((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                Item,
                Item->klass->vtable[4].methodPtr);
      }
      v14 = (RequestBase_o *)this;
      v15 = (System_String_o *)v17;
      goto LABEL_24;
    }
LABEL_23:
    v14 = (RequestBase_o *)this;
    v15 = (System_String_o *)StringLiteral_21239/*"ng"*/;
    goto LABEL_24;
  }
  success = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v6->fields.success;
  if ( !success )
    goto LABEL_23;
  v8 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v6->fields.success;
  v9 = (System_String_o *)StringLiteral_1/*""*/;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         v8,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_21980/*"result"*/,
         (const MethodInfo_2F1BA74 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
             success,
             (System_Type_o *)StringLiteral_21980/*"result"*/,
             (const MethodInfo_2F1B73C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( Item )
    {
      v9 = (System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                Item,
                                Item->klass->vtable[4].methodPtr);
      goto LABEL_12;
    }
LABEL_25:
    sub_B52A5C(Item, v11);
  }
LABEL_12:
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)success,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_21761/*"purchaseResults"*/,
         (const MethodInfo_2F1BA74 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v12 = (Il2CppObject *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                            success,
                            (System_Type_o *)StringLiteral_21761/*"purchaseResults"*/,
                            (const MethodInfo_2F1B73C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v13 = (BlankEarth_QAARotateEarthResponse_o *)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                                                   v12,
                                                   (const MethodInfo_1F690B0 *)Method_JsonManager_DeserializeArray_PurchaseByBank_UnityIap_Request_PurchaseResult___);
    ActionExtensions__Call_BlankEarth_QAARotateEarthResponse_(
      (System_Action_T__o *)this->fields.passPurchaseResultCallBack,
      v13,
      (const MethodInfo_2D61674 *)Method_ActionExtensions_Call_PurchaseByBank_UnityIap_Request_PurchaseResult_____);
  }
  v14 = (RequestBase_o *)this;
  v15 = v9;
LABEL_24:
  RequestBase__completed(v14, v15, 0LL);
}


void __fastcall PurchaseByBank_UnityIap_Request_PurchaseResult___ctor(
        PurchaseByBank_UnityIap_Request_PurchaseResult_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}