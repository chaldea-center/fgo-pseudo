void __fastcall FriendOfferRequest___ctor(FriendOfferRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall FriendOfferRequest__beginRequest(
        FriendOfferRequest_o *this,
        int64_t targetUserId,
        const MethodInfo *method)
{
  if ( (byte_42B31E0 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_22804/*"targetUserId"*/);
    byte_42B31E0 = 1;
  }
  RequestBase__addField_32020452((RequestBase_o *)this, (System_String_o *)StringLiteral_22804/*"targetUserId"*/, targetUserId, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall FriendOfferRequest__getURL(FriendOfferRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_42B31DF & 1) == 0 )
  {
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&StringLiteral_19038/*"friend/offer"*/);
    byte_42B31DF = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44568316(BaseUrl, (System_String_o *)StringLiteral_19038/*"friend/offer"*/, 0LL);
}


void __fastcall FriendOfferRequest__requestCompleted(
        FriendOfferRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  UnityEngine_Purchasing_IStoreExtension_o *v7; // x0
  System_String_c *v8; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *success; // x23
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  System_String_o *v11; // x22
  System_String_o *v12; // x1
  UnityEngine_Purchasing_IStoreExtension_o *v13; // x0
  System_String_o *v14; // x21
  System_String_o *v15; // x23
  Il2CppObject *v16; // x20
  CommonUI_o *Instance; // x20
  NotificationDialog_ClickDelegate_o *v18; // x22

  if ( (byte_42B31E1 & 1) == 0 )
  {
    sub_B52984(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B52984(&Method_FriendOfferRequest_requestErrorDialog__);
    sub_B52984(&JsonManager_TypeInfo);
    sub_B52984(&ResponseCommandKind_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&string_TypeInfo);
    sub_B52984(&StringLiteral_21239/*"ng"*/);
    sub_B52984(&StringLiteral_22893/*"title"*/);
    sub_B52984(&StringLiteral_20628/*"message"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    sub_B52984(&StringLiteral_969/*"0"*/);
    sub_B52984(&StringLiteral_22490/*"status"*/);
    byte_42B31E1 = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v5 = ResponseCommandKind__SearchData(13, responseList, 0LL);
  if ( !v5 )
    goto LABEL_13;
  v6 = v5;
  v7 = (UnityEngine_Purchasing_IStoreExtension_o *)ResponseData__checkError_29724768(v5, 0LL);
  if ( ((unsigned __int8)v7 & 1) == 0 )
    goto LABEL_13;
  success = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v6->fields.success;
  if ( !success )
LABEL_34:
    sub_B52A5C(v7, v8);
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v6->fields.success,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_22490/*"status"*/,
         (const MethodInfo_2F1BA74 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
             success,
             (System_Type_o *)StringLiteral_22490/*"status"*/,
             (const MethodInfo_2F1B73C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v11 = (System_String_o *)Item;
    if ( Item && (System_String_c *)Item->klass != string_TypeInfo )
    {
      sub_B52D50(Item);
LABEL_13:
      v12 = (System_String_o *)StringLiteral_21239/*"ng"*/;
LABEL_14:
      RequestBase__completed((RequestBase_o *)this, v12, 0LL);
      return;
    }
  }
  else
  {
    v11 = (System_String_o *)StringLiteral_969/*"0"*/;
  }
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)success,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_22893/*"title"*/,
          (const MethodInfo_2F1BA74 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_20;
  v13 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
          success,
          (System_Type_o *)StringLiteral_22893/*"title"*/,
          (const MethodInfo_2F1B73C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v14 = (System_String_o *)v13;
  if ( v13 && (System_String_c *)v13->klass != string_TypeInfo )
  {
    sub_B52D50(v13);
LABEL_20:
    v14 = (System_String_o *)StringLiteral_1/*""*/;
  }
  v7 = (UnityEngine_Purchasing_IStoreExtension_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                                                     (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)success,
                                                     (System_Xml_XmlQualifiedName_o *)StringLiteral_20628/*"message"*/,
                                                     (const MethodInfo_2F1BA74 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  if ( ((unsigned __int8)v7 & 1) != 0 )
  {
    v7 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
           success,
           (System_Type_o *)StringLiteral_20628/*"message"*/,
           (const MethodInfo_2F1B73C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v15 = (System_String_o *)v7;
    if ( !v7 )
      goto LABEL_26;
    v8 = string_TypeInfo;
    if ( (System_String_c *)v7->klass == string_TypeInfo )
      goto LABEL_26;
    sub_B52D50(v7);
  }
  v15 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_26:
  if ( !v11 )
    goto LABEL_34;
  if ( System_String__Equals_44555656(v11, (System_String_o *)StringLiteral_969/*"0"*/, 0LL) )
  {
    v16 = (Il2CppObject *)v6->fields.success;
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v12 = JsonManager__toJson(v16, 0, 0, 0LL);
    goto LABEL_14;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v18 = (NotificationDialog_ClickDelegate_o *)sub_B52A54(NotificationDialog_ClickDelegate_TypeInfo);
  NotificationDialog_ClickDelegate___ctor(
    v18,
    (Il2CppObject *)this,
    Method_FriendOfferRequest_requestErrorDialog__,
    0LL);
  if ( !Instance )
    goto LABEL_34;
  CommonUI__OpenNotificationDialog_18160348(
    Instance,
    v14,
    v15,
    v18,
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


void __fastcall FriendOfferRequest__requestErrorDialog(FriendOfferRequest_o *this, bool flg, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_42B31E2 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&StringLiteral_21239/*"ng"*/);
    byte_42B31E2 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v5);
  CommonUI__CloseNotificationDialog(Instance, 0LL);
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)StringLiteral_21239/*"ng"*/, 0LL);
}