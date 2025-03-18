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

  if ( (byte_4C23981 & 1) == 0 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, purchaseBaseData);
    sub_1C3B764(&StringLiteral_24051/*"userEventAlloutBattle"*/, v13);
    sub_1C3B764(&StringLiteral_23121/*"spriteMaskSet"*/, v14);
    sub_1C3B764(&StringLiteral_23122/*"spriteName"*/, v15);
    sub_1C3B764(&StringLiteral_23813/*"uk"*/, v16);
    byte_4C23981 = 1;
  }
  RequestBase__addField_42621852(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_23121/*"spriteMaskSet"*/,
    purchaseData,
    *(const MethodInfo **)&storeError);
  if ( !System_String__IsNullOrEmpty(purchaseBaseData, 0LL) )
    RequestBase__addField_42621852((RequestBase_o *)this, (System_String_o *)StringLiteral_23122/*"spriteName"*/, purchaseBaseData, v17);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_24051/*"userEventAlloutBattle"*/, storeError, v17);
  if ( !System_String__IsNullOrEmpty(extraToken, 0LL) )
    RequestBase__addField_42621852((RequestBase_o *)this, (System_String_o *)StringLiteral_23813/*"uk"*/, extraToken, v19);
  this->fields.passPurchaseResultCallBack = callback;
  sub_1C3B708(
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

  if ( (byte_4C23980 & 1) == 0 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, method);
    sub_1C3B764(&StringLiteral_23758/*"turnSituationType"*/, v2);
    byte_4C23980 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_63368612(BaseUrl, (System_String_o *)StringLiteral_23758/*"turnSituationType"*/, 0LL);
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

  if ( (byte_4C23982 & 1) == 0 )
  {
    sub_1C3B764(&Method_ActionExtensions_Call_PurchaseByBank_UnityIap_Request_PurchaseResult_____, responseList);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v6);
    sub_1C3B764(&Method_JsonManager_DeserializeArray_PurchaseByBank_UnityIap_Request_PurchaseResult___, v7);
    sub_1C3B764(&JsonManager_TypeInfo, v8);
    sub_1C3B764(&ResponseCommandKind_TypeInfo, v9);
    sub_1C3B764(&StringLiteral_23383/*"svt_costume_icon_"*/, v10);
    sub_1C3B764(&StringLiteral_22507/*"referrerMapId"*/, v11);
    sub_1C3B764(&StringLiteral_23125/*"sq-AL"*/, v12);
    sub_1C3B764(&StringLiteral_1/*""*/, v13);
    byte_4C23982 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v14 = ResponseCommandKind__SearchData(11, responseList, 0LL);
  if ( v14 )
  {
    v15 = v14;
    if ( ResponseData__checkError_42712632(v14, 0LL) )
    {
      success = (System_Collections_Generic_Dictionary_object__object__o *)v15->fields.success;
      if ( success )
      {
        v17 = (System_Collections_Generic_Dictionary_object__object__o *)v15->fields.success;
        v18 = StringLiteral_1/*""*/;
        if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                v17,
                (Il2CppObject *)StringLiteral_23383/*"svt_costume_icon_"*/,
                (const MethodInfo_335595C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
          goto LABEL_11;
        Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                 success,
                 (Il2CppObject *)StringLiteral_23383/*"svt_costume_icon_"*/,
                 (const MethodInfo_33556E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( Item )
        {
          v18 = (void *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                          Item,
                          Item->klass->vtable[4].methodPtr);
LABEL_11:
          if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
                 success,
                 (Il2CppObject *)StringLiteral_23125/*"sq-AL"*/,
                 (const MethodInfo_335595C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
          {
            v21 = System_Collections_Generic_Dictionary_object__object___get_Item(
                    success,
                    (Il2CppObject *)StringLiteral_23125/*"sq-AL"*/,
                    (const MethodInfo_33556E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
            if ( !JsonManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
            v22 = JsonManager__DeserializeArray_object_(
                    v21,
                    (const MethodInfo_3058CE8 *)Method_JsonManager_DeserializeArray_PurchaseByBank_UnityIap_Request_PurchaseResult___);
            ActionExtensions__Call_object_(
              (System_Action_T__o *)this->fields.passPurchaseResultCallBack,
              &v22->obj,
              (const MethodInfo_2F42300 *)Method_ActionExtensions_Call_PurchaseByBank_UnityIap_Request_PurchaseResult_____);
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
        sub_1C3B9C0(Item, v20);
      }
    }
    else
    {
      fail = (System_Collections_Generic_Dictionary_object__object__o *)v15->fields.fail;
      if ( fail )
      {
        v24 = (System_Collections_Generic_Dictionary_object__object__o *)v15->fields.fail;
        v18 = (void *)StringLiteral_22507/*"referrerMapId"*/;
        if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                v24,
                (Il2CppObject *)StringLiteral_23383/*"svt_costume_icon_"*/,
                (const MethodInfo_335595C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
          goto LABEL_19;
        Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                 fail,
                 (Il2CppObject *)StringLiteral_23383/*"svt_costume_icon_"*/,
                 (const MethodInfo_33556E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
    v29 = StringLiteral_22507/*"referrerMapId"*/;
    goto LABEL_23;
  }
}


void __fastcall PurchaseByBank_UnityIap_Request_PurchaseResult___ctor(
        PurchaseByBank_UnityIap_Request_PurchaseResult_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}