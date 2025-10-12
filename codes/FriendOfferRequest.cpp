void FriendOfferRequest___ctor(FriendOfferRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


void FriendOfferRequest__beginRequest(FriendOfferRequest_o *this, int64_t targetUserId, const MethodInfo *method)
{
  if ( (byte_4C3951D & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_23998/*"targetUserId"*/);
    byte_4C3951D = 1;
  }
  RequestBase__addField_44144740((RequestBase_o *)this, (System_String_o *)StringLiteral_23998/*"targetUserId"*/, targetUserId, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


System_String_o *FriendOfferRequest__getURL(FriendOfferRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4C3951C & 1) == 0 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&StringLiteral_19671/*"friend/offer"*/);
    byte_4C3951C = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_63518544(BaseUrl, (System_String_o *)StringLiteral_19671/*"friend/offer"*/, 0);
}


void FriendOfferRequest__requestCompleted(
        FriendOfferRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  Il2CppObject *v7; // x0
  System_Collections_Generic_Dictionary_object__object__o *success; // x23
  Il2CppObject *Item; // x0
  System_String_o *v10; // x22
  System_String_o *v11; // x1
  Il2CppObject *v12; // x0
  System_String_o *v13; // x21
  System_String_o *v14; // x23
  Il2CppObject *v15; // x20
  Il2CppObject *Instance; // x20
  NotificationDialog_ClickDelegate_o *v17; // x22

  if ( (byte_4C3951E & 1) == 0 )
  {
    sub_1C32C20(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C32C20(&Method_FriendOfferRequest_requestErrorDialog__);
    sub_1C32C20(&JsonManager_TypeInfo);
    sub_1C32C20(&ResponseCommandKind_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&string_TypeInfo);
    sub_1C32C20(&StringLiteral_22212/*"ng"*/);
    sub_1C32C20(&StringLiteral_24094/*"title"*/);
    sub_1C32C20(&StringLiteral_21536/*"message"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    sub_1C32C20(&StringLiteral_1122/*"0"*/);
    sub_1C32C20(&StringLiteral_23681/*"status"*/);
    byte_4C3951E = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(13, responseList, 0);
  if ( !v5 )
    goto LABEL_12;
  v6 = v5;
  v7 = (Il2CppObject *)ResponseData__checkError_44140424(v5, 0);
  if ( ((unsigned __int8)v7 & 1) == 0 )
    goto LABEL_12;
  success = (System_Collections_Generic_Dictionary_object__object__o *)v6->fields.success;
  if ( !success )
LABEL_32:
    sub_1C32E7C(v7);
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)v6->fields.success,
         (Il2CppObject *)StringLiteral_23681/*"status"*/,
         (const MethodInfo_3458FBC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             success,
             (Il2CppObject *)StringLiteral_23681/*"status"*/,
             (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v10 = (System_String_o *)Item;
    if ( Item && (System_String_c *)Item->klass != string_TypeInfo )
    {
      sub_1C3313C(Item);
LABEL_12:
      v11 = (System_String_o *)StringLiteral_22212/*"ng"*/;
LABEL_13:
      RequestBase__completed((RequestBase_o *)this, v11, 0);
      return;
    }
  }
  else
  {
    v10 = (System_String_o *)StringLiteral_1122/*"0"*/;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          success,
          (Il2CppObject *)StringLiteral_24094/*"title"*/,
          (const MethodInfo_3458FBC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_19;
  v12 = System_Collections_Generic_Dictionary_object__object___get_Item(
          success,
          (Il2CppObject *)StringLiteral_24094/*"title"*/,
          (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v13 = (System_String_o *)v12;
  if ( v12 && (System_String_c *)v12->klass != string_TypeInfo )
  {
    sub_1C3313C(v12);
LABEL_19:
    v13 = (System_String_o *)StringLiteral_1/*""*/;
  }
  v7 = (Il2CppObject *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                         success,
                         (Il2CppObject *)StringLiteral_21536/*"message"*/,
                         (const MethodInfo_3458FBC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  if ( ((unsigned __int8)v7 & 1) != 0 )
  {
    v7 = System_Collections_Generic_Dictionary_object__object___get_Item(
           success,
           (Il2CppObject *)StringLiteral_21536/*"message"*/,
           (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v14 = (System_String_o *)v7;
    if ( !v7 || (System_String_c *)v7->klass == string_TypeInfo )
      goto LABEL_25;
    sub_1C3313C(v7);
  }
  v14 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_25:
  if ( !v10 )
    goto LABEL_32;
  if ( System_String__Equals_63553848(v10, (System_String_o *)StringLiteral_1122/*"0"*/, 0) )
  {
    v15 = (Il2CppObject *)v6->fields.success;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v11 = JsonManager__toJson(v15, 0, 0, 0);
    goto LABEL_13;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v17 = (NotificationDialog_ClickDelegate_o *)sub_1C32E6C(NotificationDialog_ClickDelegate_TypeInfo);
  NotificationDialog_ClickDelegate___ctor(v17, (Il2CppObject *)this, Method_FriendOfferRequest_requestErrorDialog__, 0);
  if ( !Instance )
    goto LABEL_32;
  CommonUI__OpenNotificationDialog_31193120(
    (CommonUI_o *)Instance,
    v13,
    v14,
    v17,
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

  if ( (byte_4C3951F & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&StringLiteral_22212/*"ng"*/);
    byte_4C3951F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C32E7C(0);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0);
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)StringLiteral_22212/*"ng"*/, 0);
}