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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  if ( (byte_4187A9E & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, purchaseBaseData);
    sub_B2C35C(&StringLiteral_22337/*"storeError"*/, v13);
    sub_B2C35C(&StringLiteral_21580/*"purchaseData"*/, v14);
    sub_B2C35C(&StringLiteral_21581/*"purchaseDataBase64"*/, v15);
    sub_B2C35C(&StringLiteral_22125/*"signatureData"*/, v16);
    byte_4187A9E = 1;
  }
  RequestBase__addField_31051928((RequestBase_o *)this, (System_String_o *)StringLiteral_21580/*"purchaseData"*/, purchaseData, 0LL);
  if ( !System_String__IsNullOrEmpty(purchaseBaseData, 0LL) )
    RequestBase__addField_31051928((RequestBase_o *)this, (System_String_o *)StringLiteral_21581/*"purchaseDataBase64"*/, purchaseBaseData, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22337/*"storeError"*/, storeError, 0LL);
  if ( !System_String__IsNullOrEmpty(extraToken, 0LL) )
    RequestBase__addField_31051928((RequestBase_o *)this, (System_String_o *)StringLiteral_22125/*"signatureData"*/, extraToken, 0LL);
  this->fields.passPurchaseResultCallBack = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.passPurchaseResultCallBack,
    (System_Int32_array **)callback,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
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
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4187A9D & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_22106/*"shop/purchaseByBank"*/, v2);
    byte_4187A9D = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44305532(BaseUrl, (System_String_o *)StringLiteral_22106/*"shop/purchaseByBank"*/, 0LL);
}


void __fastcall PurchaseByBank_UnityIap_Request__requestCompleted(
        PurchaseByBank_UnityIap_Request_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  ResponseData_o *v14; // x0
  ResponseData_o *v15; // x20
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *success; // x21
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v17; // x0
  System_String_o *v18; // x20
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  __int64 v20; // x1
  Il2CppObject *v21; // x21
  BlankEarth_QAARotateEarthResponse_o *v22; // x0
  RequestBase_o *v23; // x0
  System_String_o *v24; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *fail; // x20
  __int64 v26; // x21

  if ( (byte_4187A9F & 1) == 0 )
  {
    sub_B2C35C(&Method_ActionExtensions_Call_PurchaseByBank_UnityIap_Request_PurchaseResult_____, responseList);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v6);
    sub_B2C35C(&Method_JsonManager_DeserializeArray_PurchaseByBank_UnityIap_Request_PurchaseResult___, v7);
    sub_B2C35C(&JsonManager_TypeInfo, v8);
    sub_B2C35C(&ResponseCommandKind_TypeInfo, v9);
    sub_B2C35C(&StringLiteral_21798/*"result"*/, v10);
    sub_B2C35C(&StringLiteral_21068/*"ng"*/, v11);
    sub_B2C35C(&StringLiteral_21584/*"purchaseResults"*/, v12);
    sub_B2C35C(&StringLiteral_1/*""*/, v13);
    byte_4187A9F = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v14 = ResponseCommandKind__SearchData(11, responseList, 0LL);
  if ( !v14 )
    goto LABEL_23;
  v15 = v14;
  if ( !ResponseData__checkError_31019724(v14, 0LL) )
  {
    fail = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v15->fields.fail;
    if ( fail )
    {
      v26 = StringLiteral_21068/*"ng"*/;
      if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
             (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)fail,
             (System_Xml_XmlQualifiedName_o *)StringLiteral_21798/*"result"*/,
             (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      {
        Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                 fail,
                 (System_Type_o *)StringLiteral_21798/*"result"*/,
                 (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !Item )
          goto LABEL_25;
        v26 = ((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                Item,
                Item->klass->vtable[4].methodPtr);
      }
      v23 = (RequestBase_o *)this;
      v24 = (System_String_o *)v26;
      goto LABEL_24;
    }
LABEL_23:
    v23 = (RequestBase_o *)this;
    v24 = (System_String_o *)StringLiteral_21068/*"ng"*/;
    goto LABEL_24;
  }
  success = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v15->fields.success;
  if ( !success )
    goto LABEL_23;
  v17 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v15->fields.success;
  v18 = (System_String_o *)StringLiteral_1/*""*/;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         v17,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_21798/*"result"*/,
         (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
             success,
             (System_Type_o *)StringLiteral_21798/*"result"*/,
             (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( Item )
    {
      v18 = (System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                 Item,
                                 Item->klass->vtable[4].methodPtr);
      goto LABEL_12;
    }
LABEL_25:
    sub_B2C434(Item, v20);
  }
LABEL_12:
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)success,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_21584/*"purchaseResults"*/,
         (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v21 = (Il2CppObject *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                            success,
                            (System_Type_o *)StringLiteral_21584/*"purchaseResults"*/,
                            (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v22 = (BlankEarth_QAARotateEarthResponse_o *)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                                                   v21,
                                                   (const MethodInfo_1AACFE4 *)Method_JsonManager_DeserializeArray_PurchaseByBank_UnityIap_Request_PurchaseResult___);
    ActionExtensions__Call_BlankEarth_QAARotateEarthResponse_(
      (System_Action_T__o *)this->fields.passPurchaseResultCallBack,
      v22,
      (const MethodInfo_2D65B10 *)Method_ActionExtensions_Call_PurchaseByBank_UnityIap_Request_PurchaseResult_____);
  }
  v23 = (RequestBase_o *)this;
  v24 = v18;
LABEL_24:
  RequestBase__completed(v23, v24, 0LL);
}


void __fastcall PurchaseByBank_UnityIap_Request_PurchaseResult___ctor(
        PurchaseByBank_UnityIap_Request_PurchaseResult_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}