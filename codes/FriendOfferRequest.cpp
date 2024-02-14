void __fastcall FriendOfferRequest___ctor(FriendOfferRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall FriendOfferRequest__beginRequest(
        FriendOfferRequest_o *this,
        int64_t targetUserId,
        const MethodInfo *method)
{
  if ( (byte_4217642 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_22690/*"targetUserId"*/, targetUserId);
    byte_4217642 = 1;
  }
  RequestBase__addField_30435180((RequestBase_o *)this, (System_String_o *)StringLiteral_22690/*"targetUserId"*/, targetUserId, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall FriendOfferRequest__getURL(FriendOfferRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4217641 & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_18955/*"friend/offer"*/, v2);
    byte_4217641 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_43849904(BaseUrl, (System_String_o *)StringLiteral_18955/*"friend/offer"*/, 0LL);
}


void __fastcall FriendOfferRequest__requestCompleted(
        FriendOfferRequest_o *this,
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
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  ResponseData_o *v18; // x0
  ResponseData_o *v19; // x20
  UnityEngine_Purchasing_IStoreExtension_o *v20; // x0
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *success; // x23
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  System_String_o *v23; // x22
  System_String_o *v24; // x1
  UnityEngine_Purchasing_IStoreExtension_o *v25; // x0
  System_String_o *v26; // x21
  System_String_o *v27; // x23
  Il2CppObject *v28; // x20
  CommonUI_o *Instance; // x20
  __int64 v30; // x1
  __int64 v31; // x2
  NotificationDialog_ClickDelegate_o *v32; // x22

  if ( (byte_4217643 & 1) == 0 )
  {
    sub_B0D8A4(&NotificationDialog_ClickDelegate_TypeInfo, responseList);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v6);
    sub_B0D8A4(&Method_FriendOfferRequest_requestErrorDialog__, v7);
    sub_B0D8A4(&JsonManager_TypeInfo, v8);
    sub_B0D8A4(&ResponseCommandKind_TypeInfo, v9);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_B0D8A4(&string_TypeInfo, v11);
    sub_B0D8A4(&StringLiteral_21137/*"ng"*/, v12);
    sub_B0D8A4(&StringLiteral_22779/*"title"*/, v13);
    sub_B0D8A4(&StringLiteral_20536/*"message"*/, v14);
    sub_B0D8A4(&StringLiteral_1/*""*/, v15);
    sub_B0D8A4(&StringLiteral_960/*"0"*/, v16);
    sub_B0D8A4(&StringLiteral_22378/*"status"*/, v17);
    byte_4217643 = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v18 = ResponseCommandKind__SearchData(13, responseList, 0LL);
  if ( !v18 )
    goto LABEL_13;
  v19 = v18;
  v20 = (UnityEngine_Purchasing_IStoreExtension_o *)ResponseData__checkError_30403444(v18, 0LL);
  if ( ((unsigned __int8)v20 & 1) == 0 )
    goto LABEL_13;
  success = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v19->fields.success;
  if ( !success )
LABEL_34:
    sub_B0D97C(v20);
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v19->fields.success,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_22378/*"status"*/,
         (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
             success,
             (System_Type_o *)StringLiteral_22378/*"status"*/,
             (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v23 = (System_String_o *)Item;
    if ( Item && (System_String_c *)Item->klass != string_TypeInfo )
    {
      sub_B0DC70(Item);
LABEL_13:
      v24 = (System_String_o *)StringLiteral_21137/*"ng"*/;
LABEL_14:
      RequestBase__completed((RequestBase_o *)this, v24, 0LL);
      return;
    }
  }
  else
  {
    v23 = (System_String_o *)StringLiteral_960/*"0"*/;
  }
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)success,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_22779/*"title"*/,
          (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_20;
  v25 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
          success,
          (System_Type_o *)StringLiteral_22779/*"title"*/,
          (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v26 = (System_String_o *)v25;
  if ( v25 && (System_String_c *)v25->klass != string_TypeInfo )
  {
    sub_B0DC70(v25);
LABEL_20:
    v26 = (System_String_o *)StringLiteral_1/*""*/;
  }
  v20 = (UnityEngine_Purchasing_IStoreExtension_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                                                      (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)success,
                                                      (System_Xml_XmlQualifiedName_o *)StringLiteral_20536/*"message"*/,
                                                      (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  if ( ((unsigned __int8)v20 & 1) != 0 )
  {
    v20 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
            success,
            (System_Type_o *)StringLiteral_20536/*"message"*/,
            (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v27 = (System_String_o *)v20;
    if ( !v20 || (System_String_c *)v20->klass == string_TypeInfo )
      goto LABEL_26;
    sub_B0DC70(v20);
  }
  v27 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_26:
  if ( !v23 )
    goto LABEL_34;
  if ( System_String__Equals_43837244(v23, (System_String_o *)StringLiteral_960/*"0"*/, 0LL) )
  {
    v28 = (Il2CppObject *)v19->fields.success;
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v24 = JsonManager__toJson(v28, 0, 0, 0LL);
    goto LABEL_14;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v32 = (NotificationDialog_ClickDelegate_o *)sub_B0D974(NotificationDialog_ClickDelegate_TypeInfo, v30, v31);
  NotificationDialog_ClickDelegate___ctor(
    v32,
    (Il2CppObject *)this,
    Method_FriendOfferRequest_requestErrorDialog__,
    0LL);
  if ( !Instance )
    goto LABEL_34;
  CommonUI__OpenNotificationDialog_17019096(
    Instance,
    v26,
    v27,
    v32,
    -1,
    0,
    0,
    0,
    1,
    0,
    0LL,
    0LL,
    0,
    0,
    0LL,
    1,
    0LL,
    0LL,
    0LL,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendOfferRequest__requestErrorDialog(FriendOfferRequest_o *this, bool flg, const MethodInfo *method)
{
  __int64 v4; // x1
  CommonUI_o *Instance; // x0

  if ( (byte_4217644 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, flg);
    sub_B0D8A4(&StringLiteral_21137/*"ng"*/, v4);
    byte_4217644 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  CommonUI__CloseNotificationDialog(Instance, 0LL);
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)StringLiteral_21137/*"ng"*/, 0LL);
}