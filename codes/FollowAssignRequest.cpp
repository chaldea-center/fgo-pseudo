void FollowAssignRequest___ctor(FollowAssignRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


void FollowAssignRequest__beginRequest(FollowAssignRequest_o *this, int64_t targetUserId, const MethodInfo *method)
{
  if ( (byte_4C28DE5 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_19503/*"followId"*/);
    byte_4C28DE5 = 1;
  }
  RequestBase__addField_44008608((RequestBase_o *)this, (System_String_o *)StringLiteral_19503/*"followId"*/, targetUserId, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


System_String_o *FollowAssignRequest__getURL(FollowAssignRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4C28DE4 & 1) == 0 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&StringLiteral_19501/*"follow/assign"*/);
    byte_4C28DE4 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_63457864(BaseUrl, (System_String_o *)StringLiteral_19501/*"follow/assign"*/, 0);
}


void FollowAssignRequest__requestCompleted(
        FollowAssignRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  Il2CppObject *v7; // x0
  System_String_c *v8; // x1
  System_Collections_Generic_Dictionary_object__object__o *success; // x23
  Il2CppObject *Item; // x0
  System_String_o *v11; // x22
  System_String_o *v12; // x1
  Il2CppObject *v13; // x0
  System_String_o *v14; // x21
  System_String_o *v15; // x23
  Il2CppObject *v16; // x20
  Il2CppObject *Instance; // x20
  NotificationDialog_ClickDelegate_o *v18; // x22

  if ( (byte_4C28DE6 & 1) == 0 )
  {
    sub_1C2D490(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C2D490(&Method_FollowAssignRequest_requestErrorDialog__);
    sub_1C2D490(&JsonManager_TypeInfo);
    sub_1C2D490(&ResponseCommandKind_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&string_TypeInfo);
    sub_1C2D490(&StringLiteral_22195/*"ng"*/);
    sub_1C2D490(&StringLiteral_24076/*"title"*/);
    sub_1C2D490(&StringLiteral_21523/*"message"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    sub_1C2D490(&StringLiteral_1122/*"0"*/);
    sub_1C2D490(&StringLiteral_23663/*"status"*/);
    byte_4C28DE6 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(81, responseList, 0);
  if ( !v5 )
    goto LABEL_12;
  v6 = v5;
  v7 = (Il2CppObject *)ResponseData__checkError_44004292(v5, 0);
  if ( ((unsigned __int8)v7 & 1) == 0 )
    goto LABEL_12;
  success = (System_Collections_Generic_Dictionary_object__object__o *)v6->fields.success;
  if ( !success )
LABEL_32:
    sub_1C2D6EC(v7, v8);
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)v6->fields.success,
         (Il2CppObject *)StringLiteral_23663/*"status"*/,
         (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             success,
             (Il2CppObject *)StringLiteral_23663/*"status"*/,
             (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v11 = (System_String_o *)Item;
    if ( Item && (System_String_c *)Item->klass != string_TypeInfo )
    {
      sub_1C2D9AC(Item);
LABEL_12:
      v12 = (System_String_o *)StringLiteral_22195/*"ng"*/;
LABEL_13:
      RequestBase__completed((RequestBase_o *)this, v12, 0);
      return;
    }
  }
  else
  {
    v11 = (System_String_o *)StringLiteral_1122/*"0"*/;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          success,
          (Il2CppObject *)StringLiteral_24076/*"title"*/,
          (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_19;
  v13 = System_Collections_Generic_Dictionary_object__object___get_Item(
          success,
          (Il2CppObject *)StringLiteral_24076/*"title"*/,
          (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v14 = (System_String_o *)v13;
  if ( v13 && (System_String_c *)v13->klass != string_TypeInfo )
  {
    sub_1C2D9AC(v13);
LABEL_19:
    v14 = (System_String_o *)StringLiteral_1/*""*/;
  }
  v7 = (Il2CppObject *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                         success,
                         (Il2CppObject *)StringLiteral_21523/*"message"*/,
                         (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  if ( ((unsigned __int8)v7 & 1) != 0 )
  {
    v7 = System_Collections_Generic_Dictionary_object__object___get_Item(
           success,
           (Il2CppObject *)StringLiteral_21523/*"message"*/,
           (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v15 = (System_String_o *)v7;
    if ( !v7 )
      goto LABEL_25;
    v8 = string_TypeInfo;
    if ( (System_String_c *)v7->klass == string_TypeInfo )
      goto LABEL_25;
    sub_1C2D9AC(v7);
  }
  v15 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_25:
  if ( !v11 )
    goto LABEL_32;
  if ( System_String__Equals_63493168(v11, (System_String_o *)StringLiteral_1122/*"0"*/, 0) )
  {
    v16 = (Il2CppObject *)v6->fields.success;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v12 = JsonManager__toJson(v16, 0, 0, 0);
    goto LABEL_13;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v18 = (NotificationDialog_ClickDelegate_o *)sub_1C2D6DC(NotificationDialog_ClickDelegate_TypeInfo);
  NotificationDialog_ClickDelegate___ctor(v18, (Il2CppObject *)this, Method_FollowAssignRequest_requestErrorDialog__, 0);
  if ( !Instance )
    goto LABEL_32;
  CommonUI__OpenNotificationDialog_31170012(
    (CommonUI_o *)Instance,
    v14,
    v15,
    v18,
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
  __int64 v5; // x1

  if ( (byte_4C28DE7 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&StringLiteral_22195/*"ng"*/);
    byte_4C28DE7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v5);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0);
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)StringLiteral_22195/*"ng"*/, 0);
}