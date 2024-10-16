void __fastcall FriendOfferRequest__beginRequest(
        FriendOfferRequest_o *this,
        int64_t targetUserId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v6; // x1

  if ( (byte_4AB762F & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_23896/*"targetUserId"*/, targetUserId);
    byte_4AB762F = 1;
  }
  RequestBase__addField_41522804((RequestBase_o *)this, (System_String_o *)StringLiteral_23896/*"targetUserId"*/, targetUserId, v3);
  RequestBase__beginRequest((RequestBase_o *)this, v6);
}


System_String_o *__fastcall FriendOfferRequest__getURL(FriendOfferRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4AB762E & 1) == 0 )
  {
    sub_1BAB41C(&NetworkManager_TypeInfo, method);
    sub_1BAB41C(&StringLiteral_19668/*"friend/offer"*/, v2);
    byte_4AB762E = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62048128(BaseUrl, (System_String_o *)StringLiteral_19668/*"friend/offer"*/, 0LL);
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
  long double v19; // q0
  ResponseData_o *v20; // x20
  Il2CppObject *v21; // x0
  System_String_c *v22; // x1
  System_Collections_Generic_Dictionary_object__object__o *success; // x23
  Il2CppObject *Item; // x0
  System_String_o *v25; // x22
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  Il2CppObject *m_target; // x3
  struct System_Reflection_MethodInfo_o *original_method_info; // x0
  __int64 v29; // x1
  Il2CppObject *v30; // x0
  System_String_o *v31; // x21
  System_String_o *v32; // x23
  Il2CppObject *v33; // x20
  System_String_o *v34; // x0
  Il2CppObject *Instance; // x20
  NotificationDialog_ClickDelegate_o *v36; // x22

  if ( (byte_4AB7630 & 1) == 0 )
  {
    sub_1BAB41C(&NotificationDialog_ClickDelegate_TypeInfo, responseList);
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v5);
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v6);
    sub_1BAB41C(&Method_FriendOfferRequest_requestErrorDialog__, v7);
    sub_1BAB41C(&JsonManager_TypeInfo, v8);
    sub_1BAB41C(&ResponseCommandKind_TypeInfo, v9);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_1BAB41C(&string_TypeInfo, v11);
    sub_1BAB41C(&StringLiteral_22090/*"ng"*/, v12);
    sub_1BAB41C(&StringLiteral_23997/*"title"*/, v13);
    sub_1BAB41C(&StringLiteral_21426/*"message"*/, v14);
    sub_1BAB41C(&StringLiteral_1/*""*/, v15);
    sub_1BAB41C(&StringLiteral_1209/*"0"*/, v16);
    sub_1BAB41C(&StringLiteral_23561/*"status"*/, v17);
    byte_4AB7630 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v18 = ResponseCommandKind__SearchData(13, responseList, 0LL);
  if ( !v18
    || (v20 = v18, v21 = (Il2CppObject *)ResponseData__checkError_41605928(v18, 0LL), ((unsigned __int8)v21 & 1) == 0) )
  {
LABEL_12:
    CallBack = this->fields.CallBack;
    if ( CallBack )
    {
      m_target = CallBack->fields.m_target;
      original_method_info = CallBack->fields.original_method_info;
      v29 = StringLiteral_22090/*"ng"*/;
LABEL_14:
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, long double))m_target)(
        original_method_info,
        v29,
        *(_QWORD *)&CallBack->fields.extra_arg,
        v19);
      return;
    }
    return;
  }
  success = (System_Collections_Generic_Dictionary_object__object__o *)v20->fields.success;
  if ( !success )
LABEL_35:
    sub_1BAB678(v21, v22);
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)v20->fields.success,
         (Il2CppObject *)StringLiteral_23561/*"status"*/,
         (const MethodInfo_3213740 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             success,
             (Il2CppObject *)StringLiteral_23561/*"status"*/,
             (const MethodInfo_32134CC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v25 = (System_String_o *)Item;
    if ( Item && (System_String_c *)Item->klass != string_TypeInfo )
    {
      v19 = sub_1BAB938(Item);
      goto LABEL_12;
    }
  }
  else
  {
    v25 = (System_String_o *)StringLiteral_1209/*"0"*/;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          success,
          (Il2CppObject *)StringLiteral_23997/*"title"*/,
          (const MethodInfo_3213740 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_20;
  v30 = System_Collections_Generic_Dictionary_object__object___get_Item(
          success,
          (Il2CppObject *)StringLiteral_23997/*"title"*/,
          (const MethodInfo_32134CC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v31 = (System_String_o *)v30;
  if ( v30 && (System_String_c *)v30->klass != string_TypeInfo )
  {
    sub_1BAB938(v30);
LABEL_20:
    v31 = (System_String_o *)StringLiteral_1/*""*/;
  }
  v21 = (Il2CppObject *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                          success,
                          (Il2CppObject *)StringLiteral_21426/*"message"*/,
                          (const MethodInfo_3213740 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  if ( ((unsigned __int8)v21 & 1) == 0 )
  {
LABEL_25:
    v32 = (System_String_o *)StringLiteral_1/*""*/;
    goto LABEL_26;
  }
  v21 = System_Collections_Generic_Dictionary_object__object___get_Item(
          success,
          (Il2CppObject *)StringLiteral_21426/*"message"*/,
          (const MethodInfo_32134CC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v32 = (System_String_o *)v21;
  if ( v21 )
  {
    v22 = string_TypeInfo;
    if ( (System_String_c *)v21->klass != string_TypeInfo )
    {
      sub_1BAB938(v21);
      goto LABEL_25;
    }
  }
LABEL_26:
  if ( !v25 )
    goto LABEL_35;
  if ( !System_String__Equals_62056444(v25, (System_String_o *)StringLiteral_1209/*"0"*/, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v36 = (NotificationDialog_ClickDelegate_o *)sub_1BAB668(NotificationDialog_ClickDelegate_TypeInfo);
    NotificationDialog_ClickDelegate___ctor(
      v36,
      (Il2CppObject *)this,
      Method_FriendOfferRequest_requestErrorDialog__,
      0LL);
    if ( Instance )
    {
      CommonUI__OpenNotificationDialog_30639228(
        (CommonUI_o *)Instance,
        v31,
        v32,
        v36,
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
  v33 = (Il2CppObject *)v20->fields.success;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v34 = JsonManager__toJson(v33, 0, 0, 0LL);
  CallBack = this->fields.CallBack;
  if ( CallBack )
  {
    v29 = (__int64)v34;
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

  if ( (byte_4AB7631 & 1) == 0 )
  {
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, flg);
    sub_1BAB41C(&StringLiteral_22090/*"ng"*/, v4);
    byte_4AB7631 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BAB678(0LL, v6);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL);
  CallBack = this->fields.CallBack;
  if ( CallBack )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
      CallBack->fields.original_method_info,
      StringLiteral_22090/*"ng"*/,
      *(_QWORD *)&CallBack->fields.extra_arg);
}