void FollowAssignRequest___ctor(FollowAssignRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


void FollowAssignRequest__beginRequest(FollowAssignRequest_o *this, int64_t targetUserId, const MethodInfo *method)
{
  if ( (byte_4C44AE8 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_19518/*"followId"*/);
    byte_4C44AE8 = 1;
  }
  RequestBase__addField_44246844((RequestBase_o *)this, (System_String_o *)StringLiteral_19518/*"followId"*/, targetUserId, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


System_String_o *FollowAssignRequest__getURL(FollowAssignRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4C44AE7 & 1) == 0 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&StringLiteral_19516/*"follow/assign"*/);
    byte_4C44AE7 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_63561656(BaseUrl, (System_String_o *)StringLiteral_19516/*"follow/assign"*/, 0);
}


void FollowAssignRequest__requestCompleted(
        FollowAssignRequest_o *this,
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

  if ( (byte_4C44AE9 & 1) == 0 )
  {
    sub_1C37058(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C37058(&Method_FollowAssignRequest_requestErrorDialog__);
    sub_1C37058(&JsonManager_TypeInfo);
    sub_1C37058(&ResponseCommandKind_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&string_TypeInfo);
    sub_1C37058(&StringLiteral_22215/*"ng"*/);
    sub_1C37058(&StringLiteral_24098/*"title"*/);
    sub_1C37058(&StringLiteral_21539/*"message"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    sub_1C37058(&StringLiteral_1122/*"0"*/);
    sub_1C37058(&StringLiteral_23685/*"status"*/);
    byte_4C44AE9 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(81, responseList, 0);
  if ( !v5 )
    goto LABEL_12;
  v6 = v5;
  v7 = (Il2CppObject *)ResponseData__checkError_44242528(v5, 0);
  if ( ((unsigned __int8)v7 & 1) == 0 )
    goto LABEL_12;
  success = (System_Collections_Generic_Dictionary_object__object__o *)v6->fields.success;
  if ( !success )
LABEL_32:
    sub_1C372B4(v7);
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)v6->fields.success,
         (Il2CppObject *)StringLiteral_23685/*"status"*/,
         (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             success,
             (Il2CppObject *)StringLiteral_23685/*"status"*/,
             (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v10 = (System_String_o *)Item;
    if ( Item && (System_String_c *)Item->klass != string_TypeInfo )
    {
      sub_1C37574(Item);
LABEL_12:
      v11 = (System_String_o *)StringLiteral_22215/*"ng"*/;
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
          (Il2CppObject *)StringLiteral_24098/*"title"*/,
          (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_19;
  v12 = System_Collections_Generic_Dictionary_object__object___get_Item(
          success,
          (Il2CppObject *)StringLiteral_24098/*"title"*/,
          (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v13 = (System_String_o *)v12;
  if ( v12 && (System_String_c *)v12->klass != string_TypeInfo )
  {
    sub_1C37574(v12);
LABEL_19:
    v13 = (System_String_o *)StringLiteral_1/*""*/;
  }
  v7 = (Il2CppObject *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                         success,
                         (Il2CppObject *)StringLiteral_21539/*"message"*/,
                         (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  if ( ((unsigned __int8)v7 & 1) != 0 )
  {
    v7 = System_Collections_Generic_Dictionary_object__object___get_Item(
           success,
           (Il2CppObject *)StringLiteral_21539/*"message"*/,
           (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v14 = (System_String_o *)v7;
    if ( !v7 || (System_String_c *)v7->klass == string_TypeInfo )
      goto LABEL_25;
    sub_1C37574(v7);
  }
  v14 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_25:
  if ( !v10 )
    goto LABEL_32;
  if ( System_String__Equals_63596960(v10, (System_String_o *)StringLiteral_1122/*"0"*/, 0) )
  {
    v15 = (Il2CppObject *)v6->fields.success;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v11 = JsonManager__toJson(v15, 0, 0, 0);
    goto LABEL_13;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v17 = (NotificationDialog_ClickDelegate_o *)sub_1C372A4(NotificationDialog_ClickDelegate_TypeInfo);
  NotificationDialog_ClickDelegate___ctor(v17, (Il2CppObject *)this, Method_FollowAssignRequest_requestErrorDialog__, 0);
  if ( !Instance )
    goto LABEL_32;
  CommonUI__OpenNotificationDialog_31210584(
    (CommonUI_o *)Instance,
    v13,
    v14,
    v17,
    -1,
    0,
    0,
    0,
    1,
    1,
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


void FollowAssignRequest__requestErrorDialog(FollowAssignRequest_o *this, bool flg, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C44AEA & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&StringLiteral_22215/*"ng"*/);
    byte_4C44AEA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0);
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)StringLiteral_22215/*"ng"*/, 0);
}