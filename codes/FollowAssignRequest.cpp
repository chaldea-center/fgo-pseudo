void __fastcall FollowAssignRequest__beginRequest(
        FollowAssignRequest_o *this,
        int64_t targetUserId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v6; // x1

  if ( (byte_49FDC82 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_19418/*"followId"*/, targetUserId);
    byte_49FDC82 = 1;
  }
  RequestBase__addField_40849372((RequestBase_o *)this, (System_String_o *)StringLiteral_19418/*"followId"*/, targetUserId, v3);
  RequestBase__beginRequest((RequestBase_o *)this, v6);
}


System_String_o *__fastcall FollowAssignRequest__getURL(FollowAssignRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_49FDC81 & 1) == 0 )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, method);
    sub_1B640C8(&StringLiteral_19416/*"follow/assign"*/, v2);
    byte_49FDC81 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61375396(BaseUrl, (System_String_o *)StringLiteral_19416/*"follow/assign"*/, 0LL);
}


void __fastcall FollowAssignRequest__requestCompleted(
        FollowAssignRequest_o *this,
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
  __int64 v36; // x1
  __int64 v37; // x2
  NotificationDialog_ClickDelegate_o *v38; // x22

  if ( (byte_49FDC83 & 1) == 0 )
  {
    sub_1B640C8(&NotificationDialog_ClickDelegate_TypeInfo, responseList);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v6);
    sub_1B640C8(&Method_FollowAssignRequest_requestErrorDialog__, v7);
    sub_1B640C8(&JsonManager_TypeInfo, v8);
    sub_1B640C8(&ResponseCommandKind_TypeInfo, v9);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_1B640C8(&string_TypeInfo, v11);
    sub_1B640C8(&StringLiteral_21968/*"ng"*/, v12);
    sub_1B640C8(&StringLiteral_23858/*"title"*/, v13);
    sub_1B640C8(&StringLiteral_21313/*"message"*/, v14);
    sub_1B640C8(&StringLiteral_1/*""*/, v15);
    sub_1B640C8(&StringLiteral_1213/*"0"*/, v16);
    sub_1B640C8(&StringLiteral_23425/*"status"*/, v17);
    byte_49FDC83 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v18 = ResponseCommandKind__SearchData(81, responseList, 0LL);
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
      v29 = StringLiteral_21968/*"ng"*/;
LABEL_14:
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, long double))m_target)(
        original_method_info,
        v29,
        *(_QWORD *)&CallBack->fields.extra_arg,
        v20);
      return;
    }
    return;
  }
  success = (System_Collections_Generic_Dictionary_object__object__o *)v21->fields.success;
  if ( !success )
LABEL_35:
    sub_1B64324(v22);
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)v21->fields.success,
         (Il2CppObject *)StringLiteral_23425/*"status"*/,
         (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             success,
             (Il2CppObject *)StringLiteral_23425/*"status"*/,
             (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v25 = (System_String_o *)Item;
    if ( Item && (System_String_c *)Item->klass != string_TypeInfo )
    {
      v20 = sub_1B645E4(Item);
      goto LABEL_12;
    }
  }
  else
  {
    v25 = (System_String_o *)StringLiteral_1213/*"0"*/;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          success,
          (Il2CppObject *)StringLiteral_23858/*"title"*/,
          (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_20;
  v30 = System_Collections_Generic_Dictionary_object__object___get_Item(
          success,
          (Il2CppObject *)StringLiteral_23858/*"title"*/,
          (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v31 = (System_String_o *)v30;
  if ( v30 && (System_String_c *)v30->klass != string_TypeInfo )
  {
    sub_1B645E4(v30);
LABEL_20:
    v31 = (System_String_o *)StringLiteral_1/*""*/;
  }
  v22 = (Il2CppObject *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                          success,
                          (Il2CppObject *)StringLiteral_21313/*"message"*/,
                          (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  if ( ((unsigned __int8)v22 & 1) == 0 )
  {
LABEL_25:
    v32 = (System_String_o *)StringLiteral_1/*""*/;
    goto LABEL_26;
  }
  v22 = System_Collections_Generic_Dictionary_object__object___get_Item(
          success,
          (Il2CppObject *)StringLiteral_21313/*"message"*/,
          (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v32 = (System_String_o *)v22;
  if ( v22 && (System_String_c *)v22->klass != string_TypeInfo )
  {
    sub_1B645E4(v22);
    goto LABEL_25;
  }
LABEL_26:
  if ( !v25 )
    goto LABEL_35;
  if ( !System_String__Equals_61383712(v25, (System_String_o *)StringLiteral_1213/*"0"*/, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v38 = (NotificationDialog_ClickDelegate_o *)sub_1B64314(NotificationDialog_ClickDelegate_TypeInfo, v36, v37);
    NotificationDialog_ClickDelegate___ctor(
      v38,
      (Il2CppObject *)this,
      Method_FollowAssignRequest_requestErrorDialog__,
      0LL);
    if ( Instance )
    {
      CommonUI__OpenNotificationDialog_30347532(
        (CommonUI_o *)Instance,
        v31,
        v32,
        v38,
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
  v33 = (Il2CppObject *)v21->fields.success;
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
void __fastcall FollowAssignRequest__requestErrorDialog(
        FollowAssignRequest_o *this,
        bool flg,
        const MethodInfo *method)
{
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8

  if ( (byte_49FDC84 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, flg);
    sub_1B640C8(&StringLiteral_21968/*"ng"*/, v4);
    byte_49FDC84 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL);
  CallBack = this->fields.CallBack;
  if ( CallBack )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
      CallBack->fields.original_method_info,
      StringLiteral_21968/*"ng"*/,
      *(_QWORD *)&CallBack->fields.extra_arg);
}