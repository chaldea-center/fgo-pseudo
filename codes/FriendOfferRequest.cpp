void FriendOfferRequest___ctor(FriendOfferRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


void FriendOfferRequest__beginRequest(FriendOfferRequest_o *this, int64_t targetUserId, const MethodInfo *method)
{
  if ( (byte_593A26B & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_25231/*"targetUserId"*/);
    byte_593A26B = 1;
  }
  RequestBase__addField_51200900((RequestBase_o *)this, (System_String_o *)StringLiteral_25231/*"targetUserId"*/, targetUserId, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


System_String_o *FriendOfferRequest__getURL(FriendOfferRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_593A26A & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&StringLiteral_20563/*"friend/offer"*/);
    byte_593A26A = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_75438412(BaseUrl, (System_String_o *)StringLiteral_20563/*"friend/offer"*/, 0);
}


void FriendOfferRequest__requestCompleted(
        FriendOfferRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  Il2CppObject *v7; // x0
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_object__object__o *success; // x23
  Il2CppObject *Item; // x0
  __int64 v11; // x2
  System_String_o *v12; // x22
  System_String_o *v13; // x1
  Il2CppObject *v14; // x0
  __int64 v15; // x2
  System_String_o *v16; // x21
  __int64 v17; // x2
  System_String_o *v18; // x23
  __int64 v19; // x1
  Il2CppObject *v20; // x20
  Il2CppObject *Instance; // x20
  NotificationDialog_ClickDelegate_o *v22; // x22

  if ( (byte_593A26C & 1) == 0 )
  {
    sub_21FFC50(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_21FFC50(&Method_FriendOfferRequest_requestErrorDialog__);
    sub_21FFC50(&JsonManager_TypeInfo);
    sub_21FFC50(&ResponseCommandKind_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&StringLiteral_23290/*"ng"*/);
    sub_21FFC50(&StringLiteral_25345/*"title"*/);
    sub_21FFC50(&StringLiteral_22593/*"message"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    sub_21FFC50(&StringLiteral_1198/*"0"*/);
    sub_21FFC50(&StringLiteral_24896/*"status"*/);
    byte_593A26C = 1;
  }
  if ( !*(&ResponseCommandKind_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v5 = ResponseCommandKind__SearchData(13, responseList, 0);
  if ( !v5 )
    goto LABEL_12;
  v6 = v5;
  v7 = (Il2CppObject *)ResponseData__checkError_51190916(v5, 0);
  if ( ((unsigned __int8)v7 & 1) == 0 )
    goto LABEL_12;
  success = (System_Collections_Generic_Dictionary_object__object__o *)v6->fields.success;
  if ( !success )
LABEL_32:
    sub_21FFECC(v7, v8);
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)v6->fields.success,
         (Il2CppObject *)StringLiteral_24896/*"status"*/,
         (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             success,
             (Il2CppObject *)StringLiteral_24896/*"status"*/,
             (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v12 = (System_String_o *)Item;
    if ( Item && Item->klass != (Il2CppClass *)qword_594C0B8 )
    {
      sub_220024C(Item, qword_594C0B8, v11);
LABEL_12:
      v13 = (System_String_o *)StringLiteral_23290/*"ng"*/;
LABEL_13:
      RequestBase__completed((RequestBase_o *)this, v13, 0);
      return;
    }
  }
  else
  {
    v12 = (System_String_o *)StringLiteral_1198/*"0"*/;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          success,
          (Il2CppObject *)StringLiteral_25345/*"title"*/,
          (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_19;
  v14 = System_Collections_Generic_Dictionary_object__object___get_Item(
          success,
          (Il2CppObject *)StringLiteral_25345/*"title"*/,
          (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v16 = (System_String_o *)v14;
  if ( v14 && v14->klass != (Il2CppClass *)qword_594C0B8 )
  {
    sub_220024C(v14, qword_594C0B8, v15);
LABEL_19:
    v16 = (System_String_o *)StringLiteral_1/*""*/;
  }
  v7 = (Il2CppObject *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                         success,
                         (Il2CppObject *)StringLiteral_22593/*"message"*/,
                         (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  if ( ((unsigned __int8)v7 & 1) != 0 )
  {
    v7 = System_Collections_Generic_Dictionary_object__object___get_Item(
           success,
           (Il2CppObject *)StringLiteral_22593/*"message"*/,
           (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v18 = (System_String_o *)v7;
    if ( !v7 )
      goto LABEL_25;
    v8 = qword_594C0B8;
    if ( v7->klass == (Il2CppClass *)qword_594C0B8 )
      goto LABEL_25;
    sub_220024C(v7, qword_594C0B8, v17);
  }
  v18 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_25:
  if ( !v12 )
    goto LABEL_32;
  if ( System_String__Equals_75473208(v12, (System_String_o *)StringLiteral_1198/*"0"*/, 0) )
  {
    v20 = (Il2CppObject *)v6->fields.success;
    if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v19);
    v13 = JsonManager__toJson(v20, 0, 0, 0);
    goto LABEL_13;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v22 = (NotificationDialog_ClickDelegate_o *)sub_21FFEBC(NotificationDialog_ClickDelegate_TypeInfo);
  NotificationDialog_ClickDelegate___ctor(v22, (Il2CppObject *)this, Method_FriendOfferRequest_requestErrorDialog__, 0);
  if ( !Instance )
    goto LABEL_32;
  CommonUI__OpenNotificationDialog_37294692(
    (CommonUI_o *)Instance,
    v16,
    v18,
    v22,
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

  if ( (byte_593A26D & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&StringLiteral_23290/*"ng"*/);
    byte_593A26D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v5);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0);
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)StringLiteral_23290/*"ng"*/, 0);
}