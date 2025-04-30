void __fastcall FollowAssignRequest___ctor(FollowAssignRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall FollowAssignRequest__beginRequest(
        FollowAssignRequest_o *this,
        int64_t targetUserId,
        const MethodInfo *method)
{
  if ( (byte_4A4FEEA & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_19281/*"followId"*/, targetUserId);
    byte_4A4FEEA = 1;
  }
  RequestBase__addField_42287768((RequestBase_o *)this, (System_String_o *)StringLiteral_19281/*"followId"*/, targetUserId, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall FollowAssignRequest__getURL(FollowAssignRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4A4FEE9 & 1) == 0 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, method);
    sub_1B863B8(&StringLiteral_19279/*"follow/assign"*/, v2);
    byte_4A4FEE9 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61645176(BaseUrl, (System_String_o *)StringLiteral_19279/*"follow/assign"*/, 0LL);
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
  ResponseData_o *v19; // x20
  Il2CppObject *v20; // x0
  System_String_c *v21; // x1
  System_Collections_Generic_Dictionary_object__object__o *success; // x23
  Il2CppObject *Item; // x0
  System_String_o *v24; // x22
  System_String_o *v25; // x1
  Il2CppObject *v26; // x0
  System_String_o *v27; // x21
  System_String_o *v28; // x23
  Il2CppObject *v29; // x20
  Il2CppObject *Instance; // x20
  NotificationDialog_ClickDelegate_o *v31; // x22

  if ( (byte_4A4FEEB & 1) == 0 )
  {
    sub_1B863B8(&NotificationDialog_ClickDelegate_TypeInfo, responseList);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v6);
    sub_1B863B8(&Method_FollowAssignRequest_requestErrorDialog__, v7);
    sub_1B863B8(&JsonManager_TypeInfo, v8);
    sub_1B863B8(&ResponseCommandKind_TypeInfo, v9);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_1B863B8(&string_TypeInfo, v11);
    sub_1B863B8(&StringLiteral_21893/*"ng"*/, v12);
    sub_1B863B8(&StringLiteral_23797/*"title"*/, v13);
    sub_1B863B8(&StringLiteral_21218/*"message"*/, v14);
    sub_1B863B8(&StringLiteral_1/*""*/, v15);
    sub_1B863B8(&StringLiteral_1139/*"0"*/, v16);
    sub_1B863B8(&StringLiteral_23364/*"status"*/, v17);
    byte_4A4FEEB = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v18 = ResponseCommandKind__SearchData(81, responseList, 0LL);
  if ( !v18 )
    goto LABEL_12;
  v19 = v18;
  v20 = (Il2CppObject *)ResponseData__checkError_42282948(v18, 0LL);
  if ( ((unsigned __int8)v20 & 1) == 0 )
    goto LABEL_12;
  success = (System_Collections_Generic_Dictionary_object__object__o *)v19->fields.success;
  if ( !success )
LABEL_32:
    sub_1B86614(v20, v21);
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)v19->fields.success,
         (Il2CppObject *)StringLiteral_23364/*"status"*/,
         (const MethodInfo_32CE8D4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             success,
             (Il2CppObject *)StringLiteral_23364/*"status"*/,
             (const MethodInfo_32CE660 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v24 = (System_String_o *)Item;
    if ( Item && (System_String_c *)Item->klass != string_TypeInfo )
    {
      sub_1B868D4(Item);
LABEL_12:
      v25 = (System_String_o *)StringLiteral_21893/*"ng"*/;
LABEL_13:
      RequestBase__completed((RequestBase_o *)this, v25, 0LL);
      return;
    }
  }
  else
  {
    v24 = (System_String_o *)StringLiteral_1139/*"0"*/;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          success,
          (Il2CppObject *)StringLiteral_23797/*"title"*/,
          (const MethodInfo_32CE8D4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_19;
  v26 = System_Collections_Generic_Dictionary_object__object___get_Item(
          success,
          (Il2CppObject *)StringLiteral_23797/*"title"*/,
          (const MethodInfo_32CE660 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v27 = (System_String_o *)v26;
  if ( v26 && (System_String_c *)v26->klass != string_TypeInfo )
  {
    sub_1B868D4(v26);
LABEL_19:
    v27 = (System_String_o *)StringLiteral_1/*""*/;
  }
  v20 = (Il2CppObject *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                          success,
                          (Il2CppObject *)StringLiteral_21218/*"message"*/,
                          (const MethodInfo_32CE8D4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  if ( ((unsigned __int8)v20 & 1) != 0 )
  {
    v20 = System_Collections_Generic_Dictionary_object__object___get_Item(
            success,
            (Il2CppObject *)StringLiteral_21218/*"message"*/,
            (const MethodInfo_32CE660 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v28 = (System_String_o *)v20;
    if ( !v20 )
      goto LABEL_25;
    v21 = string_TypeInfo;
    if ( (System_String_c *)v20->klass == string_TypeInfo )
      goto LABEL_25;
    sub_1B868D4(v20);
  }
  v28 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_25:
  if ( !v24 )
    goto LABEL_32;
  if ( System_String__Equals_61680480(v24, (System_String_o *)StringLiteral_1139/*"0"*/, 0LL) )
  {
    v29 = (Il2CppObject *)v19->fields.success;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v25 = JsonManager__toJson(v29, 0, 0, 0LL);
    goto LABEL_13;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v31 = (NotificationDialog_ClickDelegate_o *)sub_1B86604(NotificationDialog_ClickDelegate_TypeInfo);
  NotificationDialog_ClickDelegate___ctor(
    v31,
    (Il2CppObject *)this,
    Method_FollowAssignRequest_requestErrorDialog__,
    0LL);
  if ( !Instance )
    goto LABEL_32;
  CommonUI__OpenNotificationDialog_30485588(
    (CommonUI_o *)Instance,
    v27,
    v28,
    v31,
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


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowAssignRequest__requestErrorDialog(
        FollowAssignRequest_o *this,
        bool flg,
        const MethodInfo *method)
{
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4A4FEEC & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, flg);
    sub_1B863B8(&StringLiteral_21893/*"ng"*/, v4);
    byte_4A4FEEC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B86614(0LL, v6);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL);
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)StringLiteral_21893/*"ng"*/, 0LL);
}