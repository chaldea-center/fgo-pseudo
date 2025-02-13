void __fastcall FriendOfferRequest__beginRequest(
        FriendOfferRequest_o *this,
        int64_t targetUserId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v6; // x1

  if ( (byte_4BDDEDD & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_24288/*"targetUserId"*/);
    byte_4BDDEDD = 1;
  }
  RequestBase__addField_42421084((RequestBase_o *)this, (System_String_o *)StringLiteral_24288/*"targetUserId"*/, targetUserId, v3);
  RequestBase__beginRequest((RequestBase_o *)this, v6);
}


System_String_o *__fastcall FriendOfferRequest__getURL(FriendOfferRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4BDDEDC & 1) == 0 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&StringLiteral_19972/*"friend/offer"*/);
    byte_4BDDEDC = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_63115476(BaseUrl, (System_String_o *)StringLiteral_19972/*"friend/offer"*/, 0LL);
}


void __fastcall FriendOfferRequest__requestCompleted(
        FriendOfferRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  long double v6; // q0
  ResponseData_o *v7; // x20
  Il2CppObject *v8; // x0
  System_String_c *v9; // x1
  System_Collections_Generic_Dictionary_object__object__o *success; // x23
  Il2CppObject *Item; // x0
  System_String_o *v12; // x22
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  Il2CppObject *m_target; // x3
  struct System_Reflection_MethodInfo_o *original_method_info; // x0
  __int64 v16; // x1
  Il2CppObject *v17; // x0
  System_String_o *v18; // x21
  System_String_o *v19; // x23
  Il2CppObject *v20; // x20
  System_String_o *v21; // x0
  Il2CppObject *Instance; // x20
  NotificationDialog_ClickDelegate_o *v23; // x22

  if ( (byte_4BDDEDE & 1) == 0 )
  {
    sub_1C21E38(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C21E38(&Method_FriendOfferRequest_requestErrorDialog__);
    sub_1C21E38(&JsonManager_TypeInfo);
    sub_1C21E38(&ResponseCommandKind_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&string_TypeInfo);
    sub_1C21E38(&StringLiteral_22456/*"ng"*/);
    sub_1C21E38(&StringLiteral_24389/*"title"*/);
    sub_1C21E38(&StringLiteral_21780/*"message"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    sub_1C21E38(&StringLiteral_1212/*"0"*/);
    sub_1C21E38(&StringLiteral_23950/*"status"*/);
    byte_4BDDEDE = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(13, responseList, 0LL);
  if ( !v5 || (v7 = v5, v8 = (Il2CppObject *)ResponseData__checkError_42505456(v5, 0LL), ((unsigned __int8)v8 & 1) == 0) )
  {
LABEL_12:
    CallBack = this->fields.CallBack;
    if ( CallBack )
    {
      m_target = CallBack->fields.m_target;
      original_method_info = CallBack->fields.original_method_info;
      v16 = StringLiteral_22456/*"ng"*/;
LABEL_14:
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, long double))m_target)(
        original_method_info,
        v16,
        *(_QWORD *)&CallBack->fields.extra_arg,
        v6);
      return;
    }
    return;
  }
  success = (System_Collections_Generic_Dictionary_object__object__o *)v7->fields.success;
  if ( !success )
LABEL_35:
    sub_1C22094(v8, v9);
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)v7->fields.success,
         (Il2CppObject *)StringLiteral_23950/*"status"*/,
         (const MethodInfo_3316874 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             success,
             (Il2CppObject *)StringLiteral_23950/*"status"*/,
             (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v12 = (System_String_o *)Item;
    if ( Item && (System_String_c *)Item->klass != string_TypeInfo )
    {
      v6 = sub_1C22354(Item);
      goto LABEL_12;
    }
  }
  else
  {
    v12 = (System_String_o *)StringLiteral_1212/*"0"*/;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          success,
          (Il2CppObject *)StringLiteral_24389/*"title"*/,
          (const MethodInfo_3316874 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_20;
  v17 = System_Collections_Generic_Dictionary_object__object___get_Item(
          success,
          (Il2CppObject *)StringLiteral_24389/*"title"*/,
          (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v18 = (System_String_o *)v17;
  if ( v17 && (System_String_c *)v17->klass != string_TypeInfo )
  {
    sub_1C22354(v17);
LABEL_20:
    v18 = (System_String_o *)StringLiteral_1/*""*/;
  }
  v8 = (Il2CppObject *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                         success,
                         (Il2CppObject *)StringLiteral_21780/*"message"*/,
                         (const MethodInfo_3316874 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  if ( ((unsigned __int8)v8 & 1) == 0 )
  {
LABEL_25:
    v19 = (System_String_o *)StringLiteral_1/*""*/;
    goto LABEL_26;
  }
  v8 = System_Collections_Generic_Dictionary_object__object___get_Item(
         success,
         (Il2CppObject *)StringLiteral_21780/*"message"*/,
         (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v19 = (System_String_o *)v8;
  if ( v8 )
  {
    v9 = string_TypeInfo;
    if ( (System_String_c *)v8->klass != string_TypeInfo )
    {
      sub_1C22354(v8);
      goto LABEL_25;
    }
  }
LABEL_26:
  if ( !v12 )
    goto LABEL_35;
  if ( !System_String__Equals_63123792(v12, (System_String_o *)StringLiteral_1212/*"0"*/, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v23 = (NotificationDialog_ClickDelegate_o *)sub_1C22084(NotificationDialog_ClickDelegate_TypeInfo);
    NotificationDialog_ClickDelegate___ctor(
      v23,
      (Il2CppObject *)this,
      Method_FriendOfferRequest_requestErrorDialog__,
      0LL);
    if ( Instance )
    {
      CommonUI__OpenNotificationDialog_31130684(
        (CommonUI_o *)Instance,
        v18,
        v19,
        v23,
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
      return;
    }
    goto LABEL_35;
  }
  v20 = (Il2CppObject *)v7->fields.success;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v21 = JsonManager__toJson(v20, 0, 0, 0LL);
  CallBack = this->fields.CallBack;
  if ( CallBack )
  {
    v16 = (__int64)v21;
    m_target = CallBack->fields.m_target;
    original_method_info = CallBack->fields.original_method_info;
    goto LABEL_14;
  }
}


void __fastcall FriendOfferRequest__requestErrorDialog(FriendOfferRequest_o *this, bool flg, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8

  if ( (byte_4BDDEDF & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&StringLiteral_22456/*"ng"*/);
    byte_4BDDEDF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v5);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL);
  CallBack = this->fields.CallBack;
  if ( CallBack )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
      CallBack->fields.original_method_info,
      StringLiteral_22456/*"ng"*/,
      *(_QWORD *)&CallBack->fields.extra_arg);
}