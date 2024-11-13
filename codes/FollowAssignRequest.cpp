void __fastcall FollowAssignRequest__beginRequest(
        FollowAssignRequest_o *this,
        int64_t targetUserId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v6; // x1

  if ( (byte_4B17ACB & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_19698/*"followId"*/, targetUserId, method);
    byte_4B17ACB = 1;
  }
  RequestBase__addField_41868688((RequestBase_o *)this, (System_String_o *)StringLiteral_19698/*"followId"*/, targetUserId, v3);
  RequestBase__beginRequest((RequestBase_o *)this, v6);
}


System_String_o *__fastcall FollowAssignRequest__getURL(FollowAssignRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  System_String_o *BaseUrl; // x0

  if ( (byte_4B17ACA & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_19696/*"follow/assign"*/, v3, v4);
    byte_4B17ACA = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62401220(BaseUrl, (System_String_o *)StringLiteral_19696/*"follow/assign"*/, 0LL);
}


void __fastcall FollowAssignRequest__requestCompleted(
        FollowAssignRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  ResponseData_o *v31; // x0
  long double v32; // q0
  ResponseData_o *v33; // x20
  Il2CppObject *v34; // x0
  System_String_c *v35; // x1
  System_Collections_Generic_Dictionary_object__object__o *success; // x23
  Il2CppObject *Item; // x0
  System_String_o *v38; // x22
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  Il2CppObject *m_target; // x3
  struct System_Reflection_MethodInfo_o *original_method_info; // x0
  __int64 v42; // x1
  Il2CppObject *v43; // x0
  System_String_o *v44; // x21
  System_String_o *v45; // x23
  __int64 v46; // x1
  Il2CppObject *v47; // x20
  System_String_o *v48; // x0
  Il2CppObject *Instance; // x20
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  NotificationDialog_ClickDelegate_o *v53; // x22

  if ( (byte_4B17ACC & 1) == 0 )
  {
    sub_1BCA7E0(&NotificationDialog_ClickDelegate_TypeInfo, responseList, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7, v8);
    sub_1BCA7E0(&Method_FollowAssignRequest_requestErrorDialog__, v9, v10);
    sub_1BCA7E0(&JsonManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&ResponseCommandKind_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15, v16);
    sub_1BCA7E0(&string_TypeInfo, v17, v18);
    sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_24207/*"title"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_21627/*"message"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_1209/*"0"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_23770/*"status"*/, v29, v30);
    byte_4B17ACC = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v31 = ResponseCommandKind__SearchData(81, responseList, 0LL);
  if ( !v31
    || (v33 = v31, v34 = (Il2CppObject *)ResponseData__checkError_41952396(v31, 0LL), ((unsigned __int8)v34 & 1) == 0) )
  {
LABEL_12:
    CallBack = this->fields.CallBack;
    if ( CallBack )
    {
      m_target = CallBack->fields.m_target;
      original_method_info = CallBack->fields.original_method_info;
      v42 = StringLiteral_22292/*"ng"*/;
LABEL_14:
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, long double))m_target)(
        original_method_info,
        v42,
        *(_QWORD *)&CallBack->fields.extra_arg,
        v32);
      return;
    }
    return;
  }
  success = (System_Collections_Generic_Dictionary_object__object__o *)v33->fields.success;
  if ( !success )
LABEL_35:
    sub_1BCAA3C(v34, v35);
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)v33->fields.success,
         (Il2CppObject *)StringLiteral_23770/*"status"*/,
         (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             success,
             (Il2CppObject *)StringLiteral_23770/*"status"*/,
             (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v38 = (System_String_o *)Item;
    if ( Item && (System_String_c *)Item->klass != string_TypeInfo )
    {
      v32 = sub_1BCACFC(Item);
      goto LABEL_12;
    }
  }
  else
  {
    v38 = (System_String_o *)StringLiteral_1209/*"0"*/;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          success,
          (Il2CppObject *)StringLiteral_24207/*"title"*/,
          (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_20;
  v43 = System_Collections_Generic_Dictionary_object__object___get_Item(
          success,
          (Il2CppObject *)StringLiteral_24207/*"title"*/,
          (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v44 = (System_String_o *)v43;
  if ( v43 && (System_String_c *)v43->klass != string_TypeInfo )
  {
    sub_1BCACFC(v43);
LABEL_20:
    v44 = (System_String_o *)StringLiteral_1/*""*/;
  }
  v34 = (Il2CppObject *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                          success,
                          (Il2CppObject *)StringLiteral_21627/*"message"*/,
                          (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  if ( ((unsigned __int8)v34 & 1) == 0 )
  {
LABEL_25:
    v45 = (System_String_o *)StringLiteral_1/*""*/;
    goto LABEL_26;
  }
  v34 = System_Collections_Generic_Dictionary_object__object___get_Item(
          success,
          (Il2CppObject *)StringLiteral_21627/*"message"*/,
          (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v45 = (System_String_o *)v34;
  if ( v34 )
  {
    v35 = string_TypeInfo;
    if ( (System_String_c *)v34->klass != string_TypeInfo )
    {
      sub_1BCACFC(v34);
      goto LABEL_25;
    }
  }
LABEL_26:
  if ( !v38 )
    goto LABEL_35;
  if ( !System_String__Equals_62409536(v38, (System_String_o *)StringLiteral_1209/*"0"*/, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v53 = (NotificationDialog_ClickDelegate_o *)sub_1BCAA2C(NotificationDialog_ClickDelegate_TypeInfo, v50, v51, v52);
    NotificationDialog_ClickDelegate___ctor(
      v53,
      (Il2CppObject *)this,
      Method_FollowAssignRequest_requestErrorDialog__,
      0LL);
    if ( Instance )
    {
      CommonUI__OpenNotificationDialog_30768824(
        (CommonUI_o *)Instance,
        v44,
        v45,
        v53,
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
      return;
    }
    goto LABEL_35;
  }
  v47 = (Il2CppObject *)v33->fields.success;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v46);
  v48 = JsonManager__toJson(v47, 0, 0, 0LL);
  CallBack = this->fields.CallBack;
  if ( CallBack )
  {
    v42 = (__int64)v48;
    m_target = CallBack->fields.m_target;
    original_method_info = CallBack->fields.original_method_info;
    goto LABEL_14;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowAssignRequest__requestErrorDialog(
        FollowAssignRequest_o *this,
        bool flg,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8

  if ( (byte_4B17ACD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, flg, method);
    sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, v4, v5);
    byte_4B17ACD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v7);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL);
  CallBack = this->fields.CallBack;
  if ( CallBack )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
      CallBack->fields.original_method_info,
      StringLiteral_22292/*"ng"*/,
      *(_QWORD *)&CallBack->fields.extra_arg);
}