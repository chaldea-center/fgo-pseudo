// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCombineRequest__beginRequest(
        ServantCombineRequest_o *this,
        int64_t baseUsrSvtId,
        System_String_o *materialSvtIds,
        int32_t useQp,
        int32_t getExp,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x1

  if ( (byte_4A0A58F & 1) == 0 )
  {
    sub_1B686D4(&StringLiteral_17019/*"baseUserSvtId"*/, baseUsrSvtId);
    sub_1B686D4(&StringLiteral_19672/*"getExp"*/, v11);
    sub_1B686D4(&StringLiteral_24278/*"useQp"*/, v12);
    sub_1B686D4(&StringLiteral_21264/*"materialUserSvtIds"*/, v13);
    byte_4A0A58F = 1;
  }
  RequestBase__addField_40919284(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_17019/*"baseUserSvtId"*/,
    baseUsrSvtId,
    *(const MethodInfo **)&useQp);
  RequestBase__addField_40920848((RequestBase_o *)this, (System_String_o *)StringLiteral_21264/*"materialUserSvtIds"*/, materialSvtIds, v14);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_24278/*"useQp"*/, useQp, v15);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19672/*"getExp"*/, getExp, v16);
  RequestBase__beginRequest((RequestBase_o *)this, v17);
}


System_String_o *__fastcall ServantCombineRequest__getMockData(ServantCombineRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_4A0A58E & 1) == 0 )
  {
    sub_1B686D4(&NetworkManager_TypeInfo, method);
    sub_1B686D4(&StringLiteral_9071/*"MockSvtCombineResponse"*/, v2);
    byte_4A0A58E = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9071/*"MockSvtCombineResponse"*/, 0LL);
}


System_String_o *__fastcall ServantCombineRequest__getURL(ServantCombineRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4A0A58D & 1) == 0 )
  {
    sub_1B686D4(&NetworkManager_TypeInfo, method);
    sub_1B686D4(&StringLiteral_17679/*"card/combine"*/, v2);
    byte_4A0A58D = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61419468(BaseUrl, (System_String_o *)StringLiteral_17679/*"card/combine"*/, 0LL);
}


void __fastcall ServantCombineRequest__requestCompleted(
        ServantCombineRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  ResponseData_o *v8; // x0
  const MethodInfo *v9; // x2
  ResponseData_o *v10; // x20
  System_Collections_Generic_Dictionary_object__object__o *success; // x0
  Il2CppObject *Item; // x0
  __int64 v13; // x1
  __int64 v14; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 v16; // x1
  Il2CppObject *m_target; // x3
  struct System_Reflection_MethodInfo_o *original_method_info; // x0

  if ( (byte_4A0A590 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, responseList);
    sub_1B686D4(&ResponseCommandKind_TypeInfo, v5);
    sub_1B686D4(&StringLiteral_23582/*"successResult"*/, v6);
    sub_1B686D4(&StringLiteral_21981/*"ng"*/, v7);
    byte_4A0A590 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v8 = ResponseCommandKind__SearchData(25, responseList, 0LL);
  if ( v8
    && (v10 = v8, ResponseData__checkError(v8, v8->fields.resCode, v9))
    && (success = (System_Collections_Generic_Dictionary_object__object__o *)v10->fields.success) != 0LL )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             success,
             (Il2CppObject *)StringLiteral_23582/*"successResult"*/,
             (const MethodInfo_3189AE8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      sub_1B68930(0LL, v13);
    v14 = ((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
            Item,
            Item->klass->vtable[4].methodPtr);
    CallBack = this->fields.CallBack;
    if ( CallBack )
    {
      v16 = v14;
      m_target = CallBack->fields.m_target;
      original_method_info = CallBack->fields.original_method_info;
LABEL_13:
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))m_target)(
        original_method_info,
        v16,
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
      v16 = StringLiteral_21981/*"ng"*/;
      goto LABEL_13;
    }
  }
}