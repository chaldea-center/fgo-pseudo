// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCombineRequest__beginRequest(
        ServantCombineRequest_o *this,
        int64_t baseUsrSvtId,
        System_String_o *materialSvtIds,
        int32_t useQp,
        int32_t getExp,
        const MethodInfo *method)
{
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x1

  if ( (byte_4A5CAAB & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_17084/*"baseUserSvtId"*/);
    sub_1B885B0(&StringLiteral_19741/*"getExp"*/);
    sub_1B885B0(&StringLiteral_24361/*"useQp"*/);
    sub_1B885B0(&StringLiteral_21335/*"materialUserSvtIds"*/);
    byte_4A5CAAB = 1;
  }
  RequestBase__addField_41133280(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_17084/*"baseUserSvtId"*/,
    baseUsrSvtId,
    *(const MethodInfo **)&useQp);
  RequestBase__addField_41126952((RequestBase_o *)this, (System_String_o *)StringLiteral_21335/*"materialUserSvtIds"*/, materialSvtIds, v11);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_24361/*"useQp"*/, useQp, v12);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19741/*"getExp"*/, getExp, v13);
  RequestBase__beginRequest((RequestBase_o *)this, v14);
}


System_String_o *__fastcall ServantCombineRequest__getMockData(ServantCombineRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4A5CAAA & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_9108/*"MockSvtCombineResponse"*/);
    byte_4A5CAAA = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9108/*"MockSvtCombineResponse"*/, 0LL);
}


System_String_o *__fastcall ServantCombineRequest__getURL(ServantCombineRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4A5CAA9 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_17744/*"card/combine"*/);
    byte_4A5CAA9 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61707032(BaseUrl, (System_String_o *)StringLiteral_17744/*"card/combine"*/, 0LL);
}


void __fastcall ServantCombineRequest__requestCompleted(
        ServantCombineRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  const MethodInfo *v6; // x2
  ResponseData_o *v7; // x20
  System_Collections_Generic_Dictionary_object__object__o *success; // x0
  Il2CppObject *Item; // x0
  __int64 v10; // x1
  __int64 v11; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 v13; // x1
  Il2CppObject *m_target; // x3
  struct System_Reflection_MethodInfo_o *original_method_info; // x0

  if ( (byte_4A5CAAC & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1B885B0(&ResponseCommandKind_TypeInfo);
    sub_1B885B0(&StringLiteral_23663/*"successResult"*/);
    sub_1B885B0(&StringLiteral_22055/*"ng"*/);
    byte_4A5CAAC = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(25, responseList, 0LL);
  if ( v5
    && (v7 = v5, ResponseData__checkError(v5, v5->fields.resCode, v6))
    && (success = (System_Collections_Generic_Dictionary_object__object__o *)v7->fields.success) != 0LL )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             success,
             (Il2CppObject *)StringLiteral_23663/*"successResult"*/,
             (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      sub_1B8880C(0LL, v10);
    v11 = ((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
            Item,
            Item->klass->vtable[4].methodPtr);
    CallBack = this->fields.CallBack;
    if ( CallBack )
    {
      v13 = v11;
      m_target = CallBack->fields.m_target;
      original_method_info = CallBack->fields.original_method_info;
LABEL_13:
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))m_target)(
        original_method_info,
        v13,
        *(_QWORD *)&CallBack->fields.extra_arg);
    }
  }
  else
  {
    CallBack = this->fields.CallBack;
    if ( CallBack )
    {
      m_target = CallBack->fields.m_target;
      original_method_info = CallBack->fields.original_method_info;
      v13 = StringLiteral_22055/*"ng"*/;
      goto LABEL_13;
    }
  }
}