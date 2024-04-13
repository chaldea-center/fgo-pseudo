void __fastcall FollowAssignRequest___ctor(FollowAssignRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall FollowAssignRequest__beginRequest(
        FollowAssignRequest_o *this,
        int64_t targetUserId,
        const MethodInfo *method)
{
  __int64 v3; // x3

  if ( (byte_42E69FF & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_19017/*"followId"*/, targetUserId, (_DWORD)method, v3);
    byte_42E69FF = 1;
  }
  RequestBase__addField_32361792((RequestBase_o *)this, (System_String_o *)StringLiteral_19017/*"followId"*/, targetUserId, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall FollowAssignRequest__getURL(FollowAssignRequest_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  System_String_o *BaseUrl; // x0

  if ( (byte_42E69FE & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_19015/*"follow/assign"*/, v4, v5, v6);
    byte_42E69FE = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44577788(BaseUrl, (System_String_o *)StringLiteral_19015/*"follow/assign"*/, 0LL);
}


void __fastcall FollowAssignRequest__requestCompleted(
        FollowAssignRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  ResponseData_o *v45; // x0
  ResponseData_o *v46; // x20
  UnityEngine_Purchasing_IStoreExtension_o *v47; // x0
  System_String_c *v48; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *success; // x23
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  System_String_o *v51; // x22
  System_String_o *v52; // x1
  UnityEngine_Purchasing_IStoreExtension_o *v53; // x0
  System_String_o *v54; // x21
  System_String_o *v55; // x23
  Il2CppObject *v56; // x20
  CommonUI_o *Instance; // x20
  NotificationDialog_ClickDelegate_o *v58; // x22

  if ( (byte_42E6A00 & 1) == 0 )
  {
    sub_B5D5C4(&NotificationDialog_ClickDelegate_TypeInfo, (_DWORD)responseList, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v9, v10, v11);
    sub_B5D5C4(&Method_FollowAssignRequest_requestErrorDialog__, v12, v13, v14);
    sub_B5D5C4(&JsonManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&ResponseCommandKind_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v21, v22, v23);
    sub_B5D5C4(&string_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_21345/*"ng"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_23008/*"title"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_20733/*"message"*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_1/*""*/, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_973/*"0"*/, v39, v40, v41);
    sub_B5D5C4(&StringLiteral_22605/*"status"*/, v42, v43, v44);
    byte_42E6A00 = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v45 = ResponseCommandKind__SearchData(81, responseList, 0LL);
  if ( !v45 )
    goto LABEL_13;
  v46 = v45;
  v47 = (UnityEngine_Purchasing_IStoreExtension_o *)ResponseData__checkError_29500464(v45, 0LL);
  if ( ((unsigned __int8)v47 & 1) == 0 )
    goto LABEL_13;
  success = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v46->fields.success;
  if ( !success )
LABEL_34:
    sub_B5D69C(v47, v48);
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v46->fields.success,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_22605/*"status"*/,
         (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
             success,
             (System_Type_o *)StringLiteral_22605/*"status"*/,
             (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v51 = (System_String_o *)Item;
    if ( Item && (System_String_c *)Item->klass != string_TypeInfo )
    {
      sub_B5D990(Item);
LABEL_13:
      v52 = (System_String_o *)StringLiteral_21345/*"ng"*/;
LABEL_14:
      RequestBase__completed((RequestBase_o *)this, v52, 0LL);
      return;
    }
  }
  else
  {
    v51 = (System_String_o *)StringLiteral_973/*"0"*/;
  }
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)success,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_23008/*"title"*/,
          (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_20;
  v53 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
          success,
          (System_Type_o *)StringLiteral_23008/*"title"*/,
          (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v54 = (System_String_o *)v53;
  if ( v53 && (System_String_c *)v53->klass != string_TypeInfo )
  {
    sub_B5D990(v53);
LABEL_20:
    v54 = (System_String_o *)StringLiteral_1/*""*/;
  }
  v47 = (UnityEngine_Purchasing_IStoreExtension_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                                                      (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)success,
                                                      (System_Xml_XmlQualifiedName_o *)StringLiteral_20733/*"message"*/,
                                                      (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  if ( ((unsigned __int8)v47 & 1) != 0 )
  {
    v47 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
            success,
            (System_Type_o *)StringLiteral_20733/*"message"*/,
            (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v55 = (System_String_o *)v47;
    if ( !v47 )
      goto LABEL_26;
    v48 = string_TypeInfo;
    if ( (System_String_c *)v47->klass == string_TypeInfo )
      goto LABEL_26;
    v47 = (UnityEngine_Purchasing_IStoreExtension_o *)sub_B5D990(v47);
  }
  v55 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_26:
  if ( !v51 )
    goto LABEL_34;
  if ( System_String__Equals_44565128(v51, (System_String_o *)StringLiteral_973/*"0"*/, 0LL) )
  {
    v56 = (Il2CppObject *)v46->fields.success;
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v52 = JsonManager__toJson(v56, 0, 0, 0LL);
    goto LABEL_14;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v58 = (NotificationDialog_ClickDelegate_o *)sub_B5D694(NotificationDialog_ClickDelegate_TypeInfo);
  NotificationDialog_ClickDelegate___ctor(
    v58,
    (Il2CppObject *)this,
    Method_FollowAssignRequest_requestErrorDialog__,
    0LL);
  if ( !Instance )
    goto LABEL_34;
  CommonUI__OpenNotificationDialog_18204284(
    Instance,
    v54,
    v55,
    v58,
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


void __fastcall FollowAssignRequest__requestErrorDialog(
        FollowAssignRequest_o *this,
        bool flg,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v5; // w1
  int v6; // w2
  __int64 v7; // x3
  CommonUI_o *Instance; // x0
  __int64 v9; // x1

  if ( (byte_42E6A01 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, flg, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_21345/*"ng"*/, v5, v6, v7);
    byte_42E6A01 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v9);
  CommonUI__CloseNotificationDialog(Instance, 0LL);
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)StringLiteral_21345/*"ng"*/, 0LL);
}