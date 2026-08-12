void FollowAssignRequest___ctor(FollowAssignRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


void FollowAssignRequest__beginRequest(FollowAssignRequest_o *this, int64_t targetUserId, const MethodInfo *method)
{
  if ( (byte_5972417 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_20437/*"followId"*/);
    byte_5972417 = 1;
  }
  RequestBase__addField_51256716((RequestBase_o *)this, (System_String_o *)StringLiteral_20437/*"followId"*/, targetUserId, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


System_String_o *FollowAssignRequest__getURL(FollowAssignRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_5972416 & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&StringLiteral_20435/*"follow/assign"*/);
    byte_5972416 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_75651716(BaseUrl, (System_String_o *)StringLiteral_20435/*"follow/assign"*/, 0);
}


void FollowAssignRequest__requestCompleted(
        FollowAssignRequest_o *this,
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

  if ( (byte_5972418 & 1) == 0 )
  {
    sub_2213A60(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_2213A60(&Method_FollowAssignRequest_requestErrorDialog__);
    sub_2213A60(&JsonManager_TypeInfo);
    sub_2213A60(&ResponseCommandKind_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&StringLiteral_23336/*"ng"*/);
    sub_2213A60(&StringLiteral_25393/*"title"*/);
    sub_2213A60(&StringLiteral_22639/*"message"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_1198/*"0"*/);
    sub_2213A60(&StringLiteral_24944/*"status"*/);
    byte_5972418 = 1;
  }
  if ( !*(&ResponseCommandKind_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v5 = ResponseCommandKind__SearchData(81, responseList, 0);
  if ( !v5 )
    goto LABEL_12;
  v6 = v5;
  v7 = (Il2CppObject *)ResponseData__checkError_51257228(v5, 0);
  if ( ((unsigned __int8)v7 & 1) == 0 )
    goto LABEL_12;
  success = (System_Collections_Generic_Dictionary_object__object__o *)v6->fields.success;
  if ( !success )
LABEL_32:
    sub_2213CDC(v7, v8);
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)v6->fields.success,
         (Il2CppObject *)StringLiteral_24944/*"status"*/,
         (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             success,
             (Il2CppObject *)StringLiteral_24944/*"status"*/,
             (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v12 = (System_String_o *)Item;
    if ( Item && Item->klass != (Il2CppClass *)qword_5984390 )
    {
      sub_221405C(Item, qword_5984390, v11);
LABEL_12:
      v13 = (System_String_o *)StringLiteral_23336/*"ng"*/;
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
          (Il2CppObject *)StringLiteral_25393/*"title"*/,
          (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_19;
  v14 = System_Collections_Generic_Dictionary_object__object___get_Item(
          success,
          (Il2CppObject *)StringLiteral_25393/*"title"*/,
          (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v16 = (System_String_o *)v14;
  if ( v14 && v14->klass != (Il2CppClass *)qword_5984390 )
  {
    sub_221405C(v14, qword_5984390, v15);
LABEL_19:
    v16 = (System_String_o *)StringLiteral_1/*""*/;
  }
  v7 = (Il2CppObject *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                         success,
                         (Il2CppObject *)StringLiteral_22639/*"message"*/,
                         (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  if ( ((unsigned __int8)v7 & 1) != 0 )
  {
    v7 = System_Collections_Generic_Dictionary_object__object___get_Item(
           success,
           (Il2CppObject *)StringLiteral_22639/*"message"*/,
           (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v18 = (System_String_o *)v7;
    if ( !v7 )
      goto LABEL_25;
    v8 = qword_5984390;
    if ( v7->klass == (Il2CppClass *)qword_5984390 )
      goto LABEL_25;
    sub_221405C(v7, qword_5984390, v17);
  }
  v18 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_25:
  if ( !v12 )
    goto LABEL_32;
  if ( System_String__Equals_75686512(v12, (System_String_o *)StringLiteral_1198/*"0"*/, 0) )
  {
    v20 = (Il2CppObject *)v6->fields.success;
    if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v19);
    v13 = JsonManager__toJson(v20, 0, 0, 0);
    goto LABEL_13;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v22 = (NotificationDialog_ClickDelegate_o *)sub_2213CCC(NotificationDialog_ClickDelegate_TypeInfo);
  NotificationDialog_ClickDelegate___ctor(v22, (Il2CppObject *)this, Method_FollowAssignRequest_requestErrorDialog__, 0);
  if ( !Instance )
    goto LABEL_32;
  CommonUI__OpenNotificationDialog_37376108(
    (CommonUI_o *)Instance,
    v16,
    v18,
    v22,
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

  if ( (byte_5972419 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&StringLiteral_23336/*"ng"*/);
    byte_5972419 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v5);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0);
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)StringLiteral_23336/*"ng"*/, 0);
}