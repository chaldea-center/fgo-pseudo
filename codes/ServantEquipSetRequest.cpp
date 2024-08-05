void __fastcall ServantEquipSetRequest__beginRequest(
        ServantEquipSetRequest_o *this,
        SvtEquipInfo_o *svtEquip,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_String_o *v8; // x0
  System_String_o *v9; // x0
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x1

  if ( (byte_49FFE27 & 1) == 0 )
  {
    sub_1B64870(&JsonManager_TypeInfo, svtEquip);
    sub_1B64870(&StringLiteral_18976/*"equipInfo"*/, v5);
    sub_1B64870(&StringLiteral_15746/*"["*/, v6);
    sub_1B64870(&StringLiteral_16002/*"]"*/, v7);
    byte_49FFE27 = 1;
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v8 = JsonManager__toJson((Il2CppObject *)svtEquip, 0, 0, 0LL);
  v9 = System_String__Concat_61394836(
         (System_String_o *)StringLiteral_15746/*"["*/,
         v8,
         (System_String_o *)StringLiteral_16002/*"]"*/,
         0LL);
  RequestBase__addField_40856068((RequestBase_o *)this, (System_String_o *)StringLiteral_18976/*"equipInfo"*/, v9, v10);
  RequestBase__beginRequest((RequestBase_o *)this, v11);
}


void __fastcall ServantEquipSetRequest__beginRequest_40892760(
        ServantEquipSetRequest_o *this,
        SvtEquipInfo_array *svtEquipList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_String_o *v6; // x0
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x1

  if ( (byte_49FFE28 & 1) == 0 )
  {
    sub_1B64870(&JsonManager_TypeInfo, svtEquipList);
    sub_1B64870(&StringLiteral_18976/*"equipInfo"*/, v5);
    byte_49FFE28 = 1;
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v6 = JsonManager__toJson(&svtEquipList->obj, 0, 0, 0LL);
  RequestBase__addField_40856068((RequestBase_o *)this, (System_String_o *)StringLiteral_18976/*"equipInfo"*/, v6, v7);
  RequestBase__beginRequest((RequestBase_o *)this, v8);
}


System_String_o *__fastcall ServantEquipSetRequest__getURL(ServantEquipSetRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_49FFE26 & 1) == 0 )
  {
    sub_1B64870(&NetworkManager_TypeInfo, method);
    sub_1B64870(&StringLiteral_23613/*"svtEquip/set"*/, v2);
    byte_49FFE26 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61383576(BaseUrl, (System_String_o *)StringLiteral_23613/*"svtEquip/set"*/, 0LL);
}


void __fastcall ServantEquipSetRequest__requestCompleted(
        ServantEquipSetRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  const MethodInfo *v8; // x2
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v10; // x9

  if ( (byte_49FFE29 & 1) == 0 )
  {
    sub_1B64870(&ResponseCommandKind_TypeInfo, responseList);
    sub_1B64870(&StringLiteral_22140/*"ok"*/, v5);
    sub_1B64870(&StringLiteral_21971/*"ng"*/, v6);
    byte_49FFE29 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(40, responseList, 0LL);
  if ( v7 && ResponseData__checkError(v7, v7->fields.resCode, v8) )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v10 = &StringLiteral_22140/*"ok"*/;
  }
  else
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v10 = &StringLiteral_21971/*"ng"*/;
  }
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
    CallBack->fields.original_method_info,
    *v10,
    *(_QWORD *)&CallBack->fields.extra_arg);
}