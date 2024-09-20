void __fastcall ServantEquipSetRequest__beginRequest(
        ServantEquipSetRequest_o *this,
        SvtEquipInfo_o *svtEquip,
        const MethodInfo *method)
{
  System_String_o *v5; // x0
  System_String_o *v6; // x0
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x1

  if ( (byte_4A5CAB4 & 1) == 0 )
  {
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&StringLiteral_19047/*"equipInfo"*/);
    sub_1B885B0(&StringLiteral_15812/*"["*/);
    sub_1B885B0(&StringLiteral_16069/*"]"*/);
    byte_4A5CAB4 = 1;
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v5 = JsonManager__toJson((Il2CppObject *)svtEquip, 0, 0, 0LL);
  v6 = System_String__Concat_61718292(
         (System_String_o *)StringLiteral_15812/*"["*/,
         v5,
         (System_String_o *)StringLiteral_16069/*"]"*/,
         0LL);
  RequestBase__addField_41126952((RequestBase_o *)this, (System_String_o *)StringLiteral_19047/*"equipInfo"*/, v6, v7);
  RequestBase__beginRequest((RequestBase_o *)this, v8);
}


void __fastcall ServantEquipSetRequest__beginRequest_41221788(
        ServantEquipSetRequest_o *this,
        SvtEquipInfo_array *svtEquipList,
        const MethodInfo *method)
{
  System_String_o *v5; // x0
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x1

  if ( (byte_4A5CAB5 & 1) == 0 )
  {
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&StringLiteral_19047/*"equipInfo"*/);
    byte_4A5CAB5 = 1;
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v5 = JsonManager__toJson(&svtEquipList->obj, 0, 0, 0LL);
  RequestBase__addField_41126952((RequestBase_o *)this, (System_String_o *)StringLiteral_19047/*"equipInfo"*/, v5, v6);
  RequestBase__beginRequest((RequestBase_o *)this, v7);
}


System_String_o *__fastcall ServantEquipSetRequest__getURL(ServantEquipSetRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4A5CAB3 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_23706/*"svtEquip/set"*/);
    byte_4A5CAB3 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61707032(BaseUrl, (System_String_o *)StringLiteral_23706/*"svtEquip/set"*/, 0LL);
}


void __fastcall ServantEquipSetRequest__requestCompleted(
        ServantEquipSetRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  const MethodInfo *v6; // x2
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v8; // x9

  if ( (byte_4A5CAB6 & 1) == 0 )
  {
    sub_1B885B0(&ResponseCommandKind_TypeInfo);
    sub_1B885B0(&StringLiteral_22225/*"ok"*/);
    sub_1B885B0(&StringLiteral_22055/*"ng"*/);
    byte_4A5CAB6 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(40, responseList, 0LL);
  if ( v5 && ResponseData__checkError(v5, v5->fields.resCode, v6) )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v8 = &StringLiteral_22225/*"ok"*/;
  }
  else
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v8 = &StringLiteral_22055/*"ng"*/;
  }
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
    CallBack->fields.original_method_info,
    *v8,
    *(_QWORD *)&CallBack->fields.extra_arg);
}