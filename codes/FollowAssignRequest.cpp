void __fastcall FollowAssignRequest___ctor(FollowAssignRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall FollowAssignRequest__beginRequest(
        FollowAssignRequest_o *this,
        int64_t targetUserId,
        const MethodInfo *method)
{
  if ( (byte_438974D & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_19157/*"followId"*/);
    byte_438974D = 1;
  }
  RequestBase__addField_32564924((RequestBase_o *)this, (System_String_o *)StringLiteral_19157/*"followId"*/, targetUserId, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall FollowAssignRequest__getURL(FollowAssignRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_438974C & 1) == 0 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&StringLiteral_19155/*"follow/assign"*/);
    byte_438974C = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44901936(BaseUrl, (System_String_o *)StringLiteral_19155/*"follow/assign"*/, 0LL);
}


void __fastcall FollowAssignRequest__requestCompleted(
        FollowAssignRequest_o *this,
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

  if ( (byte_438974E & 1) == 0 )
  {
    sub_B775C4(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B775C4(&Method_FollowAssignRequest_requestErrorDialog__);
    sub_B775C4(&JsonManager_TypeInfo);
    sub_B775C4(&ResponseCommandKind_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&string_TypeInfo);
    sub_B775C4(&StringLiteral_21504/*"ng"*/);
    sub_B775C4(&StringLiteral_23180/*"title"*/);
    sub_B775C4(&StringLiteral_20889/*"message"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    sub_B775C4(&StringLiteral_980/*"0"*/);
    sub_B775C4(&StringLiteral_22776/*"status"*/);
    byte_438974E = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v5 = ResponseCommandKind__SearchData(81, responseList, 0LL);
  if ( !v5 )
    goto LABEL_13;
  v6 = v5;
  v7 = (UnityEngine_Purchasing_IStoreExtension_o *)ResponseData__checkError_30128096(v5, 0LL);
  if ( ((unsigned __int8)v7 & 1) == 0 )
    goto LABEL_13;
  success = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v6->fields.success;
  if ( !success )
LABEL_34:
    sub_B7769C(v7, v8);
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v6->fields.success,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_22776/*"status"*/,
         (const MethodInfo_2F7D86C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
             success,
             (System_Type_o *)StringLiteral_22776/*"status"*/,
             (const MethodInfo_2F7D534 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v11 = (System_String_o *)Item;
    if ( Item && (System_String_c *)Item->klass != string_TypeInfo )
    {
      sub_B77990(Item);
LABEL_13:
      v12 = (System_String_o *)StringLiteral_21504/*"ng"*/;
LABEL_14:
      RequestBase__completed((RequestBase_o *)this, v12, 0LL);
      return;
    }
  }
  else
  {
    v11 = (System_String_o *)StringLiteral_980/*"0"*/;
  }
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)success,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_23180/*"title"*/,
          (const MethodInfo_2F7D86C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_20;
  v13 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
          success,
          (System_Type_o *)StringLiteral_23180/*"title"*/,
          (const MethodInfo_2F7D534 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v14 = (System_String_o *)v13;
  if ( v13 && (System_String_c *)v13->klass != string_TypeInfo )
  {
    sub_B77990(v13);
LABEL_20:
    v14 = (System_String_o *)StringLiteral_1/*""*/;
  }
  v7 = (UnityEngine_Purchasing_IStoreExtension_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                                                     (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)success,
                                                     (System_Xml_XmlQualifiedName_o *)StringLiteral_20889/*"message"*/,
                                                     (const MethodInfo_2F7D86C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  if ( ((unsigned __int8)v7 & 1) != 0 )
  {
    v7 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
           success,
           (System_Type_o *)StringLiteral_20889/*"message"*/,
           (const MethodInfo_2F7D534 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v15 = (System_String_o *)v7;
    if ( !v7 )
      goto LABEL_26;
    v8 = string_TypeInfo;
    if ( (System_String_c *)v7->klass == string_TypeInfo )
      goto LABEL_26;
    v7 = (UnityEngine_Purchasing_IStoreExtension_o *)sub_B77990(v7);
  }
  v15 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_26:
  if ( !v11 )
    goto LABEL_34;
  if ( System_String__Equals_44889276(v11, (System_String_o *)StringLiteral_980/*"0"*/, 0LL) )
  {
    v16 = (Il2CppObject *)v6->fields.success;
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v12 = JsonManager__toJson(v16, 0, 0, 0LL);
    goto LABEL_14;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v18 = (NotificationDialog_ClickDelegate_o *)sub_B77694(NotificationDialog_ClickDelegate_TypeInfo);
  NotificationDialog_ClickDelegate___ctor(
    v18,
    (Il2CppObject *)this,
    Method_FollowAssignRequest_requestErrorDialog__,
    0LL);
  if ( !Instance )
    goto LABEL_34;
  CommonUI__OpenNotificationDialog_18058264(
    Instance,
    v14,
    v15,
    v18,
    -1,
    0,
    0,
    0,
    1,
    1,
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


void __fastcall FollowAssignRequest__requestErrorDialog(
        FollowAssignRequest_o *this,
        bool flg,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_438974F & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&StringLiteral_21504/*"ng"*/);
    byte_438974F = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B7769C(0LL, v5);
  CommonUI__CloseNotificationDialog(Instance, 0LL);
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)StringLiteral_21504/*"ng"*/, 0LL);
}