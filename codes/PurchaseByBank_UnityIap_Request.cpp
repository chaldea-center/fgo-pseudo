void __fastcall PurchaseByBank_UnityIap_Request___ctor(
        PurchaseByBank_UnityIap_Request_o *this,
        const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PurchaseByBank_UnityIap_Request__beginRequest(
        PurchaseByBank_UnityIap_Request_o *this,
        System_String_o *purchaseBaseData,
        System_String_o *purchaseData,
        int32_t storeError,
        System_String_o *extraToken,
        System_Action_PurchaseByBank_UnityIap_Request_PurchaseResult____o *callback,
        const MethodInfo *method)
{
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7

  if ( (byte_42E881E & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)purchaseBaseData, (_DWORD)purchaseData, *(_QWORD *)&storeError);
    sub_B5D5C4(&StringLiteral_22640/*"storeError"*/, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_21870/*"purchaseData"*/, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_21871/*"purchaseDataBase64"*/, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_22427/*"signatureData"*/, v22, v23, v24);
    byte_42E881E = 1;
  }
  RequestBase__addField_32362260((RequestBase_o *)this, (System_String_o *)StringLiteral_21870/*"purchaseData"*/, purchaseData, 0LL);
  if ( !System_String__IsNullOrEmpty(purchaseBaseData, 0LL) )
    RequestBase__addField_32362260((RequestBase_o *)this, (System_String_o *)StringLiteral_21871/*"purchaseDataBase64"*/, purchaseBaseData, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22640/*"storeError"*/, storeError, 0LL);
  if ( !System_String__IsNullOrEmpty(extraToken, 0LL) )
    RequestBase__addField_32362260((RequestBase_o *)this, (System_String_o *)StringLiteral_22427/*"signatureData"*/, extraToken, 0LL);
  this->fields.passPurchaseResultCallBack = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.passPurchaseResultCallBack,
    (System_Int32_array **)callback,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
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
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  System_String_o *BaseUrl; // x0

  if ( (byte_42E881D & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_22408/*"shop/purchaseByBank"*/, v4, v5, v6);
    byte_42E881D = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44577788(BaseUrl, (System_String_o *)StringLiteral_22408/*"shop/purchaseByBank"*/, 0LL);
}


void __fastcall PurchaseByBank_UnityIap_Request__requestCompleted(
        PurchaseByBank_UnityIap_Request_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  ResponseData_o *v33; // x0
  ResponseData_o *v34; // x20
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *success; // x21
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v36; // x0
  System_String_o *v37; // x20
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  __int64 v39; // x1
  Il2CppObject *v40; // x21
  BlankEarth_QAARotateEarthResponse_o *v41; // x0
  RequestBase_o *v42; // x0
  System_String_o *v43; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *fail; // x20
  __int64 v45; // x21

  if ( (byte_42E881F & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_ActionExtensions_Call_PurchaseByBank_UnityIap_Request_PurchaseResult_____,
      (_DWORD)responseList,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v9, v10, v11);
    sub_B5D5C4(&Method_JsonManager_DeserializeArray_PurchaseByBank_UnityIap_Request_PurchaseResult___, v12, v13, v14);
    sub_B5D5C4(&JsonManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&ResponseCommandKind_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_22094/*"result"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_21345/*"ng"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_21874/*"purchaseResults"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_1/*""*/, v30, v31, v32);
    byte_42E881F = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v33 = ResponseCommandKind__SearchData(11, responseList, 0LL);
  if ( !v33 )
    goto LABEL_23;
  v34 = v33;
  if ( !ResponseData__checkError_29500464(v33, 0LL) )
  {
    fail = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v34->fields.fail;
    if ( fail )
    {
      v45 = StringLiteral_21345/*"ng"*/;
      if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
             (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)fail,
             (System_Xml_XmlQualifiedName_o *)StringLiteral_22094/*"result"*/,
             (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      {
        Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                 fail,
                 (System_Type_o *)StringLiteral_22094/*"result"*/,
                 (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !Item )
          goto LABEL_25;
        v45 = ((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                Item,
                Item->klass->vtable[4].methodPtr);
      }
      v42 = (RequestBase_o *)this;
      v43 = (System_String_o *)v45;
      goto LABEL_24;
    }
LABEL_23:
    v42 = (RequestBase_o *)this;
    v43 = (System_String_o *)StringLiteral_21345/*"ng"*/;
    goto LABEL_24;
  }
  success = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v34->fields.success;
  if ( !success )
    goto LABEL_23;
  v36 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v34->fields.success;
  v37 = (System_String_o *)StringLiteral_1/*""*/;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         v36,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_22094/*"result"*/,
         (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
             success,
             (System_Type_o *)StringLiteral_22094/*"result"*/,
             (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( Item )
    {
      v37 = (System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                 Item,
                                 Item->klass->vtable[4].methodPtr);
      goto LABEL_12;
    }
LABEL_25:
    sub_B5D69C(Item, v39);
  }
LABEL_12:
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)success,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_21874/*"purchaseResults"*/,
         (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v40 = (Il2CppObject *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                            success,
                            (System_Type_o *)StringLiteral_21874/*"purchaseResults"*/,
                            (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v41 = (BlankEarth_QAARotateEarthResponse_o *)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                                                   v40,
                                                   (const MethodInfo_1E5E1D0 *)Method_JsonManager_DeserializeArray_PurchaseByBank_UnityIap_Request_PurchaseResult___);
    ActionExtensions__Call_BlankEarth_QAARotateEarthResponse_(
      (System_Action_T__o *)this->fields.passPurchaseResultCallBack,
      v41,
      (const MethodInfo_2CECD58 *)Method_ActionExtensions_Call_PurchaseByBank_UnityIap_Request_PurchaseResult_____);
  }
  v42 = (RequestBase_o *)this;
  v43 = v37;
LABEL_24:
  RequestBase__completed(v42, v43, 0LL);
}


void __fastcall PurchaseByBank_UnityIap_Request_PurchaseResult___ctor(
        PurchaseByBank_UnityIap_Request_PurchaseResult_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}