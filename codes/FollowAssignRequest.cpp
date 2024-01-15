void __fastcall FollowAssignRequest___ctor(FollowAssignRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall FollowAssignRequest__beginRequest(
        FollowAssignRequest_o *this,
        int64_t targetUserId,
        const MethodInfo *method)
{
  if ( (byte_40F8EBA & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_18709/*"followId"*/, targetUserId);
    byte_40F8EBA = 1;
  }
  RequestBase__addField_30956696((RequestBase_o *)this, (System_String_o *)StringLiteral_18709/*"followId"*/, targetUserId, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall FollowAssignRequest__getURL(FollowAssignRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_40F8EB9 & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_18707/*"follow/assign"*/, v2);
    byte_40F8EB9 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_43743732(BaseUrl, (System_String_o *)StringLiteral_18707/*"follow/assign"*/, 0LL);
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
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *success; // x23
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  System_String_o *v22; // x22
  System_String_o *v23; // x1
  UnityEngine_Purchasing_IStoreExtension_o *v24; // x0
  System_String_o *v25; // x21
  UnityEngine_Purchasing_IStoreExtension_o *v26; // x0
  System_String_o *v27; // x23
  Il2CppObject *v28; // x20
  CommonUI_o *Instance; // x20
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  NotificationDialog_ClickDelegate_o *v34; // x22

  if ( (byte_40F8EBB & 1) == 0 )
  {
    sub_B16FFC(&NotificationDialog_ClickDelegate_TypeInfo, responseList);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v6);
    sub_B16FFC(&Method_FollowAssignRequest_requestErrorDialog__, v7);
    sub_B16FFC(&JsonManager_TypeInfo, v8);
    sub_B16FFC(&ResponseCommandKind_TypeInfo, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_B16FFC(&string_TypeInfo, v11);
    sub_B16FFC(&StringLiteral_20980/*"ng"*/, v12);
    sub_B16FFC(&StringLiteral_22610/*"title"*/, v13);
    sub_B16FFC(&StringLiteral_20390/*"message"*/, v14);
    sub_B16FFC(&StringLiteral_1/*""*/, v15);
    sub_B16FFC(&StringLiteral_951/*"0"*/, v16);
    sub_B16FFC(&StringLiteral_22210/*"status"*/, v17);
    byte_40F8EBB = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v18 = ResponseCommandKind__SearchData(80, responseList, 0LL);
  if ( !v18 )
    goto LABEL_13;
  v19 = v18;
  if ( !ResponseData__checkError_30924960(v18, 0LL) )
    goto LABEL_13;
  success = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v19->fields.success;
  if ( !success )
LABEL_34:
    sub_B170D4();
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v19->fields.success,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_22210/*"status"*/,
         (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
             success,
             (System_Type_o *)StringLiteral_22210/*"status"*/,
             (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v22 = (System_String_o *)Item;
    if ( Item && (System_String_c *)Item->klass != string_TypeInfo )
    {
      sub_B173C8(Item);
LABEL_13:
      v23 = (System_String_o *)StringLiteral_20980/*"ng"*/;
LABEL_14:
      RequestBase__completed((RequestBase_o *)this, v23, 0LL);
      return;
    }
  }
  else
  {
    v22 = (System_String_o *)StringLiteral_951/*"0"*/;
  }
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)success,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_22610/*"title"*/,
          (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_20;
  v24 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
          success,
          (System_Type_o *)StringLiteral_22610/*"title"*/,
          (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v25 = (System_String_o *)v24;
  if ( v24 && (System_String_c *)v24->klass != string_TypeInfo )
  {
    sub_B173C8(v24);
LABEL_20:
    v25 = (System_String_o *)StringLiteral_1/*""*/;
  }
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)success,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_20390/*"message"*/,
         (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v26 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
            success,
            (System_Type_o *)StringLiteral_20390/*"message"*/,
            (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v27 = (System_String_o *)v26;
    if ( !v26 || (System_String_c *)v26->klass == string_TypeInfo )
      goto LABEL_26;
    sub_B173C8(v26);
  }
  v27 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_26:
  if ( !v22 )
    goto LABEL_34;
  if ( System_String__Equals_43731072(v22, (System_String_o *)StringLiteral_951/*"0"*/, 0LL) )
  {
    v28 = (Il2CppObject *)v19->fields.success;
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v23 = JsonManager__toJson(v28, 0, 0, 0LL);
    goto LABEL_14;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v34 = (NotificationDialog_ClickDelegate_o *)sub_B170CC(NotificationDialog_ClickDelegate_TypeInfo, v30, v31, v32, v33);
  NotificationDialog_ClickDelegate___ctor(
    v34,
    (Il2CppObject *)this,
    Method_FollowAssignRequest_requestErrorDialog__,
    0LL);
  if ( !Instance )
    goto LABEL_34;
  CommonUI__OpenNotificationDialog_18239760(
    Instance,
    v25,
    v27,
    v34,
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
  CommonUI_o *Instance; // x0

  if ( (byte_40F8EBC & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, flg);
    sub_B16FFC(&StringLiteral_20980/*"ng"*/, v4);
    byte_40F8EBC = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  CommonUI__CloseNotificationDialog(Instance, 0LL);
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)StringLiteral_20980/*"ng"*/, 0LL);
}