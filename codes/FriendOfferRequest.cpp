void FriendOfferRequest___ctor(FriendOfferRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


void FriendOfferRequest__beginRequest(FriendOfferRequest_o *this, int64_t targetUserId, const MethodInfo *method)
{
  if ( (byte_4C588E2 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_24022/*"targetUserId"*/);
    byte_4C588E2 = 1;
  }
  RequestBase__addField_44302376((RequestBase_o *)this, (System_String_o *)StringLiteral_24022/*"targetUserId"*/, targetUserId, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


System_String_o *FriendOfferRequest__getURL(FriendOfferRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4C588E1 & 1) == 0 )
  {
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&StringLiteral_19692/*"friend/offer"*/);
    byte_4C588E1 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_63636468(BaseUrl, (System_String_o *)StringLiteral_19692/*"friend/offer"*/, 0);
}


void FriendOfferRequest__requestCompleted(
        FriendOfferRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  Il2CppObject *v7; // x0
  System_String_c *v8; // x1
  System_Collections_Generic_Dictionary_object__object__o *success; // x23
  Il2CppObject *Item; // x0
  System_String_o *v11; // x22
  System_String_o *v12; // x1
  Il2CppObject *v13; // x0
  System_String_o *v14; // x21
  System_String_o *v15; // x23
  Il2CppObject *v16; // x20
  Il2CppObject *Instance; // x20
  NotificationDialog_ClickDelegate_o *v18; // x22

  if ( (byte_4C588E3 & 1) == 0 )
  {
    sub_1C3E564(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C3E564(&Method_FriendOfferRequest_requestErrorDialog__);
    sub_1C3E564(&JsonManager_TypeInfo);
    sub_1C3E564(&ResponseCommandKind_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C3E564(&string_TypeInfo);
    sub_1C3E564(&StringLiteral_22233/*"ng"*/);
    sub_1C3E564(&StringLiteral_24118/*"title"*/);
    sub_1C3E564(&StringLiteral_21557/*"message"*/);
    sub_1C3E564(&StringLiteral_1/*""*/);
    sub_1C3E564(&StringLiteral_1122/*"0"*/);
    sub_1C3E564(&StringLiteral_23705/*"status"*/);
    byte_4C588E3 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(13, responseList, 0);
  if ( !v5 )
    goto LABEL_12;
  v6 = v5;
  v7 = (Il2CppObject *)ResponseData__checkError_44298060(v5, 0);
  if ( ((unsigned __int8)v7 & 1) == 0 )
    goto LABEL_12;
  success = (System_Collections_Generic_Dictionary_object__object__o *)v6->fields.success;
  if ( !success )
LABEL_32:
    sub_1C3E7C0(v7, v8);
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)v6->fields.success,
         (Il2CppObject *)StringLiteral_23705/*"status"*/,
         (const MethodInfo_34759D4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             success,
             (Il2CppObject *)StringLiteral_23705/*"status"*/,
             (const MethodInfo_3475760 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v11 = (System_String_o *)Item;
    if ( Item && (System_String_c *)Item->klass != string_TypeInfo )
    {
      sub_1C3EA80(Item);
LABEL_12:
      v12 = (System_String_o *)StringLiteral_22233/*"ng"*/;
LABEL_13:
      RequestBase__completed((RequestBase_o *)this, v12, 0);
      return;
    }
  }
  else
  {
    v11 = (System_String_o *)StringLiteral_1122/*"0"*/;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          success,
          (Il2CppObject *)StringLiteral_24118/*"title"*/,
          (const MethodInfo_34759D4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_19;
  v13 = System_Collections_Generic_Dictionary_object__object___get_Item(
          success,
          (Il2CppObject *)StringLiteral_24118/*"title"*/,
          (const MethodInfo_3475760 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v14 = (System_String_o *)v13;
  if ( v13 && (System_String_c *)v13->klass != string_TypeInfo )
  {
    sub_1C3EA80(v13);
LABEL_19:
    v14 = (System_String_o *)StringLiteral_1/*""*/;
  }
  v7 = (Il2CppObject *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                         success,
                         (Il2CppObject *)StringLiteral_21557/*"message"*/,
                         (const MethodInfo_34759D4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  if ( ((unsigned __int8)v7 & 1) != 0 )
  {
    v7 = System_Collections_Generic_Dictionary_object__object___get_Item(
           success,
           (Il2CppObject *)StringLiteral_21557/*"message"*/,
           (const MethodInfo_3475760 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v15 = (System_String_o *)v7;
    if ( !v7 )
      goto LABEL_25;
    v8 = string_TypeInfo;
    if ( (System_String_c *)v7->klass == string_TypeInfo )
      goto LABEL_25;
    sub_1C3EA80(v7);
  }
  v15 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_25:
  if ( !v11 )
    goto LABEL_32;
  if ( System_String__Equals_63671772(v11, (System_String_o *)StringLiteral_1122/*"0"*/, 0) )
  {
    v16 = (Il2CppObject *)v6->fields.success;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v12 = JsonManager__toJson(v16, 0, 0, 0);
    goto LABEL_13;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v18 = (NotificationDialog_ClickDelegate_o *)sub_1C3E7B0(NotificationDialog_ClickDelegate_TypeInfo);
  NotificationDialog_ClickDelegate___ctor(v18, (Il2CppObject *)this, Method_FriendOfferRequest_requestErrorDialog__, 0);
  if ( !Instance )
    goto LABEL_32;
  CommonUI__OpenNotificationDialog_31240556(
    (CommonUI_o *)Instance,
    v14,
    v15,
    v18,
    -1,
    0,
    0,
    0,
    1,
    0,
    0,
    0,
    0,
    0,
    0,
    1,
    0,
    0,
    0,
    0);
}


void FriendOfferRequest__requestErrorDialog(FriendOfferRequest_o *this, bool flg, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4C588E4 & 1) == 0 )
  {
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C3E564(&StringLiteral_22233/*"ng"*/);
    byte_4C588E4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C3E7C0(0, v5);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0);
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)StringLiteral_22233/*"ng"*/, 0);
}