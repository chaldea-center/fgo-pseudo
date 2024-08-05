void __fastcall WarBoardReinforcementsRequest__beginRequest(
        WarBoardReinforcementsRequest_o *this,
        WarBoardData_o *warBoardData,
        int32_t stageReinforcementId,
        System_Int32_array *reinforcementsIds,
        System_Int32_array *squareIds,
        const MethodInfo *method)
{
  RequestBase_o *v10; // x20
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  int32_t id; // w0
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x1

  v10 = (RequestBase_o *)this;
  if ( (byte_49FFEA9 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_23384/*"stageId"*/, warBoardData);
    sub_1B64870(&StringLiteral_23385/*"stageReinforcementId"*/, v11);
    sub_1B64870(&StringLiteral_22752/*"reinforcementsIdx"*/, v12);
    this = (WarBoardReinforcementsRequest_o *)sub_1B64870(&StringLiteral_23357/*"squareIds"*/, v13);
    byte_49FFEA9 = 1;
  }
  if ( !warBoardData )
    sub_1B64ACC(this, warBoardData);
  id = WarBoardData__get_id(warBoardData, 0LL);
  RequestBase__addField(v10, (System_String_o *)StringLiteral_23384/*"stageId"*/, id, v15);
  WarBoardData__SetRequest(warBoardData, v10, 0LL);
  RequestBase__addField(v10, (System_String_o *)StringLiteral_23385/*"stageReinforcementId"*/, stageReinforcementId, v16);
  RequestBase__addField_40853908(v10, (System_String_o *)StringLiteral_22752/*"reinforcementsIdx"*/, &reinforcementsIds->obj, v17);
  RequestBase__addField_40853908(v10, (System_String_o *)StringLiteral_23357/*"squareIds"*/, &squareIds->obj, v18);
  RequestBase__beginRequest(v10, v19);
}


System_String_o *__fastcall WarBoardReinforcementsRequest__getURL(
        WarBoardReinforcementsRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_49FFEA8 & 1) == 0 )
  {
    sub_1B64870(&NetworkManager_TypeInfo, method);
    sub_1B64870(&StringLiteral_24523/*"warBoard/reinforcements"*/, v2);
    byte_49FFEA8 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61383576(BaseUrl, (System_String_o *)StringLiteral_24523/*"warBoard/reinforcements"*/, 0LL);
}


void __fastcall WarBoardReinforcementsRequest__requestCompleted(
        WarBoardReinforcementsRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  ResponseData_o *v10; // x0
  const MethodInfo *v11; // x2
  ResponseData_o *v12; // x20
  System_Collections_Generic_Dictionary_object__object__o *success; // x20
  Il2CppObject *Item; // x0
  const MethodInfo *v15; // x2
  Il2CppObject *v16; // x0
  System_String_o *v17; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  struct NetworkManager_ResultCallbackFunc_o *v19; // x8

  if ( (byte_49FFEAA & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, responseList);
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__, v5);
    sub_1B64870(&JsonManager_TypeInfo, v6);
    sub_1B64870(&ResponseCommandKind_TypeInfo, v7);
    sub_1B64870(&StringLiteral_21971/*"ng"*/, v8);
    sub_1B64870(&StringLiteral_24531/*"warBoardData"*/, v9);
    byte_49FFEAA = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v10 = ResponseCommandKind__SearchData(103, responseList, 0LL);
  if ( v10
    && (v12 = v10, ResponseData__checkError(v10, v10->fields.resCode, v11))
    && (success = (System_Collections_Generic_Dictionary_object__object__o *)v12->fields.success) != 0LL )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             success,
             (Il2CppObject *)StringLiteral_24531/*"warBoardData"*/,
             (const MethodInfo_317B654 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v16 = RequestBase__UnpackToMessagePack((RequestBase_o *)Item, Item, v15);
    System_Collections_Generic_Dictionary_object__object___set_Item(
      success,
      (Il2CppObject *)StringLiteral_24531/*"warBoardData"*/,
      v16,
      (const MethodInfo_317B6C0 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v17 = JsonManager__toJson((Il2CppObject *)success, 0, 0, 0LL);
    CallBack = this->fields.CallBack;
    if ( CallBack )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))CallBack->fields.m_target)(
        CallBack->fields.original_method_info,
        v17,
        *(_QWORD *)&CallBack->fields.extra_arg);
  }
  else
  {
    v19 = this->fields.CallBack;
    if ( v19 )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v19->fields.m_target)(
        v19->fields.original_method_info,
        StringLiteral_21971/*"ng"*/,
        *(_QWORD *)&v19->fields.extra_arg);
  }
}