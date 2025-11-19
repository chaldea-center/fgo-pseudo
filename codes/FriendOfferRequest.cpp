void FriendOfferRequest__beginRequest(FriendOfferRequest_o *this, int64_t targetUserId, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v6; // x1

  if ( (byte_4CB7E5F & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_24098/*"targetUserId"*/);
    byte_4CB7E5F = 1;
  }
  RequestBase__addField_44468288((RequestBase_o *)this, (System_String_o *)StringLiteral_24098/*"targetUserId"*/, targetUserId, v3);
  RequestBase__beginRequest((RequestBase_o *)this, v6);
}


System_String_o *FriendOfferRequest__getURL(FriendOfferRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4CB7E5E & 1) == 0 )
  {
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_19737/*"friend/offer"*/);
    byte_4CB7E5E = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_63966792(BaseUrl, (System_String_o *)StringLiteral_19737/*"friend/offer"*/, 0);
}


void FriendOfferRequest__requestCompleted(
        FriendOfferRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  const MethodInfo *v6; // x2
  long double v7; // q0
  ResponseData_o *v8; // x20
  Il2CppObject *v9; // x0
  System_String_c *v10; // x1
  System_Collections_Generic_Dictionary_object__object__o *success; // x23
  Il2CppObject *Item; // x0
  System_String_o *v13; // x22
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  void (__fastcall *invoke_impl)(intptr_t, __int64, intptr_t, long double); // x3
  intptr_t method_code; // x0
  __int64 v17; // x1
  Il2CppObject *v18; // x0
  System_String_o *v19; // x21
  System_String_o *v20; // x23
  Il2CppObject *v21; // x20
  System_String_o *v22; // x0
  Il2CppObject *Instance; // x20
  NotificationDialog_ClickDelegate_o *v24; // x22

  if ( (byte_4CB7E60 & 1) == 0 )
  {
    sub_1C6BA08(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C6BA08(&Method_FriendOfferRequest_requestErrorDialog__);
    sub_1C6BA08(&JsonManager_TypeInfo);
    sub_1C6BA08(&ResponseCommandKind_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&string_TypeInfo);
    sub_1C6BA08(&StringLiteral_22301/*"ng"*/);
    sub_1C6BA08(&StringLiteral_24196/*"title"*/);
    sub_1C6BA08(&StringLiteral_21625/*"message"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    sub_1C6BA08(&StringLiteral_1115/*"0"*/);
    sub_1C6BA08(&StringLiteral_23779/*"status"*/);
    byte_4CB7E60 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(13, responseList, 0);
  if ( !v5
    || (v8 = v5,
        v9 = (Il2CppObject *)ResponseData__checkError(v5, v5->fields.resCode, v6),
        ((unsigned __int8)v9 & 1) == 0) )
  {
LABEL_12:
    CallBack = this->fields.CallBack;
    if ( CallBack )
    {
      invoke_impl = (void (__fastcall *)(intptr_t, __int64, intptr_t, long double))CallBack->fields.invoke_impl;
      method_code = CallBack->fields.method_code;
      v17 = StringLiteral_22301/*"ng"*/;
LABEL_14:
      invoke_impl(method_code, v17, CallBack->fields.method, v7);
      return;
    }
    return;
  }
  success = (System_Collections_Generic_Dictionary_object__object__o *)v8->fields.success;
  if ( !success )
LABEL_35:
    sub_1C6BC60(v9, v10);
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)v8->fields.success,
         (Il2CppObject *)StringLiteral_23779/*"status"*/,
         (const MethodInfo_34BBB30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             success,
             (Il2CppObject *)StringLiteral_23779/*"status"*/,
             (const MethodInfo_34BB8BC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v13 = (System_String_o *)Item;
    if ( Item && (System_String_c *)Item->klass != string_TypeInfo )
    {
      v7 = sub_1C6BFFC(Item);
      goto LABEL_12;
    }
  }
  else
  {
    v13 = (System_String_o *)StringLiteral_1115/*"0"*/;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          success,
          (Il2CppObject *)StringLiteral_24196/*"title"*/,
          (const MethodInfo_34BBB30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_20;
  v18 = System_Collections_Generic_Dictionary_object__object___get_Item(
          success,
          (Il2CppObject *)StringLiteral_24196/*"title"*/,
          (const MethodInfo_34BB8BC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v19 = (System_String_o *)v18;
  if ( v18 && (System_String_c *)v18->klass != string_TypeInfo )
  {
    sub_1C6BFFC(v18);
LABEL_20:
    v19 = (System_String_o *)StringLiteral_1/*""*/;
  }
  v9 = (Il2CppObject *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                         success,
                         (Il2CppObject *)StringLiteral_21625/*"message"*/,
                         (const MethodInfo_34BBB30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  if ( ((unsigned __int8)v9 & 1) == 0 )
  {
LABEL_25:
    v20 = (System_String_o *)StringLiteral_1/*""*/;
    goto LABEL_26;
  }
  v9 = System_Collections_Generic_Dictionary_object__object___get_Item(
         success,
         (Il2CppObject *)StringLiteral_21625/*"message"*/,
         (const MethodInfo_34BB8BC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v20 = (System_String_o *)v9;
  if ( v9 )
  {
    v10 = string_TypeInfo;
    if ( (System_String_c *)v9->klass != string_TypeInfo )
    {
      sub_1C6BFFC(v9);
      goto LABEL_25;
    }
  }
LABEL_26:
  if ( !v13 )
    goto LABEL_35;
  if ( !System_String__Equals_64002112(v13, (System_String_o *)StringLiteral_1115/*"0"*/, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v24 = (NotificationDialog_ClickDelegate_o *)sub_1C6BC54(NotificationDialog_ClickDelegate_TypeInfo);
    NotificationDialog_ClickDelegate___ctor(
      v24,
      (Il2CppObject *)this,
      Method_FriendOfferRequest_requestErrorDialog__,
      0);
    if ( Instance )
    {
      CommonUI__OpenNotificationDialog_31419992(
        (CommonUI_o *)Instance,
        v19,
        v20,
        v24,
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
      return;
    }
    goto LABEL_35;
  }
  v21 = (Il2CppObject *)v8->fields.success;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v22 = JsonManager__toJson(v21, 0, 0, 0);
  CallBack = this->fields.CallBack;
  if ( CallBack )
  {
    v17 = (__int64)v22;
    invoke_impl = (void (__fastcall *)(intptr_t, __int64, intptr_t, long double))CallBack->fields.invoke_impl;
    method_code = CallBack->fields.method_code;
    goto LABEL_14;
  }
}


void FriendOfferRequest__requestErrorDialog(FriendOfferRequest_o *this, bool flg, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8

  if ( (byte_4CB7E61 & 1) == 0 )
  {
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&StringLiteral_22301/*"ng"*/);
    byte_4CB7E61 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C6BC60(0, v5);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0);
  CallBack = this->fields.CallBack;
  if ( CallBack )
    ((void (__fastcall *)(intptr_t, __int64, intptr_t))CallBack->fields.invoke_impl)(
      CallBack->fields.method_code,
      StringLiteral_22301/*"ng"*/,
      CallBack->fields.method);
}