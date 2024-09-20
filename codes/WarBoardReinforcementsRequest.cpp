void __fastcall WarBoardReinforcementsRequest___ctor(WarBoardReinforcementsRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall WarBoardReinforcementsRequest__beginRequest(
        WarBoardReinforcementsRequest_o *this,
        WarBoardData_o *warBoardData,
        int32_t stageReinforcementId,
        System_Int32_array *reinforcementsIds,
        System_Int32_array *squareIds,
        const MethodInfo *method)
{
  RequestBase_o *v10; // x20
  int32_t id; // w0

  v10 = (RequestBase_o *)this;
  if ( (byte_4A5CB36 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_23477/*"stageId"*/);
    sub_1B885B0(&StringLiteral_23478/*"stageReinforcementId"*/);
    sub_1B885B0(&StringLiteral_22843/*"reinforcementsIdx"*/);
    this = (WarBoardReinforcementsRequest_o *)sub_1B885B0(&StringLiteral_23451/*"squareIds"*/);
    byte_4A5CB36 = 1;
  }
  if ( !warBoardData )
    sub_1B8880C(this, warBoardData);
  id = WarBoardData__get_id(warBoardData, 0LL);
  RequestBase__addField(v10, (System_String_o *)StringLiteral_23477/*"stageId"*/, id, 0LL);
  WarBoardData__SetRequest(warBoardData, v10, 0LL);
  RequestBase__addField(v10, (System_String_o *)StringLiteral_23478/*"stageReinforcementId"*/, stageReinforcementId, 0LL);
  RequestBase__addField_41136012(v10, (System_String_o *)StringLiteral_22843/*"reinforcementsIdx"*/, &reinforcementsIds->obj, 0LL);
  RequestBase__addField_41136012(v10, (System_String_o *)StringLiteral_23451/*"squareIds"*/, &squareIds->obj, 0LL);
  RequestBase__beginRequest(v10, 0LL);
}


System_String_o *__fastcall WarBoardReinforcementsRequest__getURL(
        WarBoardReinforcementsRequest_o *this,
        const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4A5CB35 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_24618/*"warBoard/reinforcements"*/);
    byte_4A5CB35 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61707032(BaseUrl, (System_String_o *)StringLiteral_24618/*"warBoard/reinforcements"*/, 0LL);
}


void __fastcall WarBoardReinforcementsRequest__requestCompleted(
        WarBoardReinforcementsRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  System_Collections_Generic_Dictionary_object__object__o *success; // x20
  Il2CppObject *Item; // x0
  Il2CppObject *v9; // x0
  System_String_o *v10; // x1

  if ( (byte_4A5CB37 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&ResponseCommandKind_TypeInfo);
    sub_1B885B0(&StringLiteral_22055/*"ng"*/);
    sub_1B885B0(&StringLiteral_24626/*"warBoardData"*/);
    byte_4A5CB37 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(103, responseList, 0LL);
  if ( v5
    && (v6 = v5, ResponseData__checkError_41126424(v5, 0LL))
    && (success = (System_Collections_Generic_Dictionary_object__object__o *)v6->fields.success) != 0LL )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             success,
             (Il2CppObject *)StringLiteral_24626/*"warBoardData"*/,
             (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v9 = RequestBase__UnpackToMessagePack((RequestBase_o *)this, Item, 0LL);
    System_Collections_Generic_Dictionary_object__object___set_Item(
      success,
      (Il2CppObject *)StringLiteral_24626/*"warBoardData"*/,
      v9,
      (const MethodInfo_31C71B4 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v10 = JsonManager__toJson((Il2CppObject *)success, 0, 0, 0LL);
  }
  else
  {
    v10 = (System_String_o *)StringLiteral_22055/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v10, 0LL);
}