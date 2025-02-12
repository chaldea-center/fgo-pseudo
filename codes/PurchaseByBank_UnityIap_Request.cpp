// local variable allocation has failed, the output may be wrong!
void __fastcall PurchaseByBank_UnityIap_Request__beginRequest(
        PurchaseByBank_UnityIap_Request_o *this,
        System_String_o *purchaseBaseData,
        System_String_o *purchaseData,
        int32_t storeError,
        System_String_o *extraToken,
        System_Action_PurchaseByBank_UnityIap_Request_PurchaseResult____o *callback,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  const MethodInfo *v17; // x3
  int64_t v18; // x2
  const MethodInfo *v19; // x3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  const MethodInfo *v24; // x1

  if ( (byte_4BB6087 & 1) == 0 )
  {
    sub_1C13D24(&NetworkManager_TypeInfo, purchaseBaseData);
    sub_1C13D24(&StringLiteral_23946/*"stay_dog_30"*/, v13);
    sub_1C13D24(&StringLiteral_23025/*"prs"*/, v14);
    sub_1C13D24(&StringLiteral_23026/*"prs-AF"*/, v15);
    sub_1C13D24(&StringLiteral_23709/*"shouldShowRequestPermissionRationale"*/, v16);
    byte_4BB6087 = 1;
  }
  RequestBase__addField_42303556(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_23025/*"prs"*/,
    purchaseData,
    *(const MethodInfo **)&storeError);
  if ( !System_String__IsNullOrEmpty(purchaseBaseData, 0LL) )
    RequestBase__addField_42303556((RequestBase_o *)this, (System_String_o *)StringLiteral_23026/*"prs-AF"*/, purchaseBaseData, v17);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23946/*"stay_dog_30"*/, storeError, v17);
  if ( !System_String__IsNullOrEmpty(extraToken, 0LL) )
    RequestBase__addField_42303556((RequestBase_o *)this, (System_String_o *)StringLiteral_23709/*"shouldShowRequestPermissionRationale"*/, extraToken, v19);
  this->fields.passPurchaseResultCallBack = callback;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.passPurchaseResultCallBack,
    (int64_t)callback,
    v18,
    (int32_t)v19,
    v20,
    v21,
    v22,
    v23);
  RequestBase__addBaseField((RequestBase_o *)this, v24);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__RequestStart((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall PurchaseByBank_UnityIap_Request__getURL(
        PurchaseByBank_UnityIap_Request_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4BB6086 & 1) == 0 )
  {
    sub_1C13D24(&NetworkManager_TypeInfo, method);
    sub_1C13D24(&StringLiteral_23654/*"shake"*/, v2);
    byte_4BB6086 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62967944(BaseUrl, (System_String_o *)StringLiteral_23654/*"shake"*/, 0LL);
}


void __fastcall PurchaseByBank_UnityIap_Request__requestCompleted(
        PurchaseByBank_UnityIap_Request_o *this,
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
  ResponseData_o *v14; // x0
  ResponseData_o *v15; // x20
  System_Collections_Generic_Dictionary_object__object__o *success; // x21
  System_Collections_Generic_Dictionary_object__object__o *v17; // x0
  void *v18; // x20
  Il2CppObject *Item; // x0
  __int64 v20; // x1
  Il2CppObject *v21; // x21
  System_Object_array *v22; // x0
  System_Collections_Generic_Dictionary_object__object__o *fail; // x21
  System_Collections_Generic_Dictionary_object__object__o *v24; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  Il2CppObject *m_target; // x3
  struct System_Reflection_MethodInfo_o *original_method_info; // x0
  __int64 v28; // x2
  __int64 v29; // x1
  struct NetworkManager_ResultCallbackFunc_o *v30; // x8

  if ( (byte_4BB6088 & 1) == 0 )
  {
    sub_1C13D24(&Method_ActionExtensions_Call_PurchaseByBank_UnityIap_Request_PurchaseResult_____, responseList);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v6);
    sub_1C13D24(&Method_JsonManager_DeserializeArray_PurchaseByBank_UnityIap_Request_PurchaseResult___, v7);
    sub_1C13D24(&JsonManager_TypeInfo, v8);
    sub_1C13D24(&ResponseCommandKind_TypeInfo, v9);
    sub_1C13D24(&StringLiteral_23282/*"required"*/, v10);
    sub_1C13D24(&StringLiteral_22421/*"newAttributes"*/, v11);
    sub_1C13D24(&StringLiteral_23029/*"ps3"*/, v12);
    sub_1C13D24(&StringLiteral_1/*""*/, v13);
    byte_4BB6088 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v14 = ResponseCommandKind__SearchData(11, responseList, 0LL);
  if ( v14 )
  {
    v15 = v14;
    if ( ResponseData__checkError_42394144(v14, 0LL) )
    {
      success = (System_Collections_Generic_Dictionary_object__object__o *)v15->fields.success;
      if ( success )
      {
        v17 = (System_Collections_Generic_Dictionary_object__object__o *)v15->fields.success;
        v18 = StringLiteral_1/*""*/;
        if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                v17,
                (Il2CppObject *)StringLiteral_23282/*"required"*/,
                (const MethodInfo_32F2BA4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
          goto LABEL_11;
        Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                 success,
                 (Il2CppObject *)StringLiteral_23282/*"required"*/,
                 (const MethodInfo_32F2930 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( Item )
        {
          v18 = (void *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                          Item,
                          Item->klass->vtable[4].methodPtr);
LABEL_11:
          if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
                 success,
                 (Il2CppObject *)StringLiteral_23029/*"ps3"*/,
                 (const MethodInfo_32F2BA4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
          {
            v21 = System_Collections_Generic_Dictionary_object__object___get_Item(
                    success,
                    (Il2CppObject *)StringLiteral_23029/*"ps3"*/,
                    (const MethodInfo_32F2930 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
            if ( !JsonManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
            v22 = JsonManager__DeserializeArray_object_(
                    v21,
                    (const MethodInfo_2FF6CCC *)Method_JsonManager_DeserializeArray_PurchaseByBank_UnityIap_Request_PurchaseResult___);
            ActionExtensions__Call_object_(
              (System_Action_T__o *)this->fields.passPurchaseResultCallBack,
              &v22->obj,
              (const MethodInfo_2EE1C78 *)Method_ActionExtensions_Call_PurchaseByBank_UnityIap_Request_PurchaseResult_____);
          }
LABEL_19:
          CallBack = this->fields.CallBack;
          if ( CallBack )
          {
            m_target = CallBack->fields.m_target;
            original_method_info = CallBack->fields.original_method_info;
            v28 = *(_QWORD *)&CallBack->fields.extra_arg;
            v29 = (__int64)v18;
LABEL_23:
            ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, __int64))m_target)(
              original_method_info,
              v29,
              v28);
            return;
          }
          return;
        }
LABEL_25:
        sub_1C13F80(Item, v20);
      }
    }
    else
    {
      fail = (System_Collections_Generic_Dictionary_object__object__o *)v15->fields.fail;
      if ( fail )
      {
        v24 = (System_Collections_Generic_Dictionary_object__object__o *)v15->fields.fail;
        v18 = (void *)StringLiteral_22421/*"newAttributes"*/;
        if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                v24,
                (Il2CppObject *)StringLiteral_23282/*"required"*/,
                (const MethodInfo_32F2BA4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
          goto LABEL_19;
        Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                 fail,
                 (Il2CppObject *)StringLiteral_23282/*"required"*/,
                 (const MethodInfo_32F2930 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( Item )
        {
          v18 = (void *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                          Item,
                          Item->klass->vtable[4].methodPtr);
          goto LABEL_19;
        }
        goto LABEL_25;
      }
    }
  }
  v30 = this->fields.CallBack;
  if ( v30 )
  {
    m_target = v30->fields.m_target;
    original_method_info = v30->fields.original_method_info;
    v28 = *(_QWORD *)&v30->fields.extra_arg;
    v29 = StringLiteral_22421/*"newAttributes"*/;
    goto LABEL_23;
  }
}


void __fastcall PurchaseByBank_UnityIap_Request_PurchaseResult___ctor(
        PurchaseByBank_UnityIap_Request_PurchaseResult_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}