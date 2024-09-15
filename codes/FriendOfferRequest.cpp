void __fastcall FriendOfferRequest__beginRequest(
        FriendOfferRequest_o *this,
        int64_t targetUserId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v6; // x1

  if ( (byte_4A2F805 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_23845/*"targetUserId"*/, targetUserId);
    byte_4A2F805 = 1;
  }
  RequestBase__addField_40947456((RequestBase_o *)this, (System_String_o *)StringLiteral_23845/*"targetUserId"*/, targetUserId, v3);
  RequestBase__beginRequest((RequestBase_o *)this, v6);
}


System_String_o *__fastcall FriendOfferRequest__getURL(FriendOfferRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4A2F804 & 1) == 0 )
  {
    sub_1B761C0(&NetworkManager_TypeInfo, method);
    sub_1B761C0(&StringLiteral_19632/*"friend/offer"*/, v2);
    byte_4A2F804 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61535060(BaseUrl, (System_String_o *)StringLiteral_19632/*"friend/offer"*/, 0LL);
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
  const MethodInfo *v19; // x2
  long double v20; // q0
  ResponseData_o *v21; // x20
  Il2CppObject *v22; // x0
  System_String_c *v23; // x1
  System_Collections_Generic_Dictionary_object__object__o *success; // x23
  Il2CppObject *Item; // x0
  System_String_o *v26; // x22
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  Il2CppObject *m_target; // x3
  struct System_Reflection_MethodInfo_o *original_method_info; // x0
  __int64 v30; // x1
  Il2CppObject *v31; // x0
  System_String_o *v32; // x21
  System_String_o *v33; // x23
  Il2CppObject *v34; // x20
  System_String_o *v35; // x0
  Il2CppObject *Instance; // x20
  NotificationDialog_ClickDelegate_o *v37; // x22

  if ( (byte_4A2F806 & 1) == 0 )
  {
    sub_1B761C0(&NotificationDialog_ClickDelegate_TypeInfo, responseList);
    sub_1B761C0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v5);
    sub_1B761C0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v6);
    sub_1B761C0(&Method_FriendOfferRequest_requestErrorDialog__, v7);
    sub_1B761C0(&JsonManager_TypeInfo, v8);
    sub_1B761C0(&ResponseCommandKind_TypeInfo, v9);
    sub_1B761C0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_1B761C0(&string_TypeInfo, v11);
    sub_1B761C0(&StringLiteral_22046/*"ng"*/, v12);
    sub_1B761C0(&StringLiteral_23944/*"title"*/, v13);
    sub_1B761C0(&StringLiteral_21388/*"message"*/, v14);
    sub_1B761C0(&StringLiteral_1/*""*/, v15);
    sub_1B761C0(&StringLiteral_1212/*"0"*/, v16);
    sub_1B761C0(&StringLiteral_23510/*"status"*/, v17);
    byte_4A2F806 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v18 = ResponseCommandKind__SearchData(13, responseList, 0LL);
  if ( !v18
    || (v21 = v18,
        v22 = (Il2CppObject *)ResponseData__checkError(v18, v18->fields.resCode, v19),
        ((unsigned __int8)v22 & 1) == 0) )
  {
LABEL_12:
    CallBack = this->fields.CallBack;
    if ( CallBack )
    {
      m_target = CallBack->fields.m_target;
      original_method_info = CallBack->fields.original_method_info;
      v30 = StringLiteral_22046/*"ng"*/;
LABEL_14:
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, long double))m_target)(
        original_method_info,
        v30,
        *(_QWORD *)&CallBack->fields.extra_arg,
        v20);
      return;
    }
    return;
  }
  success = (System_Collections_Generic_Dictionary_object__object__o *)v21->fields.success;
  if ( !success )
LABEL_35:
    sub_1B7641C(v22, v23);
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)v21->fields.success,
         (Il2CppObject *)StringLiteral_23510/*"status"*/,
         (const MethodInfo_31A5F24 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             success,
             (Il2CppObject *)StringLiteral_23510/*"status"*/,
             (const MethodInfo_31A5CB0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v26 = (System_String_o *)Item;
    if ( Item && (System_String_c *)Item->klass != string_TypeInfo )
    {
      v20 = sub_1B766DC(Item);
      goto LABEL_12;
    }
  }
  else
  {
    v26 = (System_String_o *)StringLiteral_1212/*"0"*/;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          success,
          (Il2CppObject *)StringLiteral_23944/*"title"*/,
          (const MethodInfo_31A5F24 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_20;
  v31 = System_Collections_Generic_Dictionary_object__object___get_Item(
          success,
          (Il2CppObject *)StringLiteral_23944/*"title"*/,
          (const MethodInfo_31A5CB0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v32 = (System_String_o *)v31;
  if ( v31 && (System_String_c *)v31->klass != string_TypeInfo )
  {
    sub_1B766DC(v31);
LABEL_20:
    v32 = (System_String_o *)StringLiteral_1/*""*/;
  }
  v22 = (Il2CppObject *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                          success,
                          (Il2CppObject *)StringLiteral_21388/*"message"*/,
                          (const MethodInfo_31A5F24 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  if ( ((unsigned __int8)v22 & 1) == 0 )
  {
LABEL_25:
    v33 = (System_String_o *)StringLiteral_1/*""*/;
    goto LABEL_26;
  }
  v22 = System_Collections_Generic_Dictionary_object__object___get_Item(
          success,
          (Il2CppObject *)StringLiteral_21388/*"message"*/,
          (const MethodInfo_31A5CB0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v33 = (System_String_o *)v22;
  if ( v22 )
  {
    v23 = string_TypeInfo;
    if ( (System_String_c *)v22->klass != string_TypeInfo )
    {
      sub_1B766DC(v22);
      goto LABEL_25;
    }
  }
LABEL_26:
  if ( !v26 )
    goto LABEL_35;
  if ( !System_String__Equals_61543376(v26, (System_String_o *)StringLiteral_1212/*"0"*/, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v37 = (NotificationDialog_ClickDelegate_o *)sub_1B7640C(NotificationDialog_ClickDelegate_TypeInfo);
    NotificationDialog_ClickDelegate___ctor(
      v37,
      (Il2CppObject *)this,
      Method_FriendOfferRequest_requestErrorDialog__,
      0LL);
    if ( Instance )
    {
      CommonUI__OpenNotificationDialog_30421532(
        (CommonUI_o *)Instance,
        v32,
        v33,
        v37,
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
  v34 = (Il2CppObject *)v21->fields.success;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v35 = JsonManager__toJson(v34, 0, 0, 0LL);
  CallBack = this->fields.CallBack;
  if ( CallBack )
  {
    v30 = (__int64)v35;
    m_target = CallBack->fields.m_target;
    original_method_info = CallBack->fields.original_method_info;
    goto LABEL_14;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendOfferRequest__requestErrorDialog(FriendOfferRequest_o *this, bool flg, const MethodInfo *method)
{
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8

  if ( (byte_4A2F807 & 1) == 0 )
  {
    sub_1B761C0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, flg);
    sub_1B761C0(&StringLiteral_22046/*"ng"*/, v4);
    byte_4A2F807 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B7641C(0LL, v6);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL);
  CallBack = this->fields.CallBack;
  if ( CallBack )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
      CallBack->fields.original_method_info,
      StringLiteral_22046/*"ng"*/,
      *(_QWORD *)&CallBack->fields.extra_arg);
}