void __fastcall GachaDrawRequest___ctor(GachaDrawRequest_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1

  if ( (byte_438F154 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_9330/*"MockGachaResponse"*/);
    byte_438F154 = 1;
  }
  v9 = (System_Int32_array **)StringLiteral_9330/*"MockGachaResponse"*/;
  this->fields.resMsg = (struct System_String_o *)StringLiteral_9330/*"MockGachaResponse"*/;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.resMsg, v9, v2, v3, v4, v5, v6, v7);
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall GachaDrawRequest__beginRequest(
        GachaDrawRequest_o *this,
        int32_t gachaId,
        int32_t num,
        int32_t warId,
        int32_t ticketItemId,
        int32_t shopIdIdx,
        int32_t gachaSubId,
        System_Int32_array *storyAdjustIds,
        System_String_o *selectBonusListData,
        const MethodInfo *method)
{
  if ( (byte_438F152 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_21609/*"num"*/);
    sub_B775C4(&StringLiteral_19331/*"gachaId"*/);
    sub_B775C4(&StringLiteral_22820/*"storyAdjustIds"*/);
    sub_B775C4(&StringLiteral_23152/*"ticketItemId"*/);
    sub_B775C4(&StringLiteral_22582/*"shopIdIndex"*/);
    sub_B775C4(&StringLiteral_19333/*"gachaSubId"*/);
    sub_B775C4(&StringLiteral_22418/*"selectBonusList"*/);
    byte_438F152 = 1;
  }
  this->fields.gachaId = gachaId;
  this->fields.num = num;
  this->fields.ticketItemId = ticketItemId;
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19331/*"gachaId"*/, gachaId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21609/*"num"*/, num, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23152/*"ticketItemId"*/, ticketItemId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22582/*"shopIdIndex"*/, shopIdIdx, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19333/*"gachaSubId"*/, gachaSubId, 0LL);
  RequestBase__addField_32565500(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_22820/*"storyAdjustIds"*/,
    &storyAdjustIds->obj,
    0LL);
  RequestBase__addField_32565392(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_22418/*"selectBonusList"*/,
    selectBonusListData,
    0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall GachaDrawRequest__getMockData(GachaDrawRequest_o *this, const MethodInfo *method)
{
  System_String_o *resMsg; // x19

  if ( (byte_438F150 & 1) == 0 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    byte_438F150 = 1;
  }
  resMsg = this->fields.resMsg;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  return NetworkManager__getMockFile(resMsg, 0LL);
}


System_String_o *__fastcall GachaDrawRequest__getURL(GachaDrawRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_438F14F & 1) == 0 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&StringLiteral_19329/*"gacha/draw"*/);
    byte_438F14F = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44901936(BaseUrl, (System_String_o *)StringLiteral_19329/*"gacha/draw"*/, 0LL);
}


void __fastcall GachaDrawRequest__requestCompleted(
        GachaDrawRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  Il2CppObject *success; // x20
  System_String_o *v8; // x1

  if ( (byte_438F153 & 1) == 0 )
  {
    sub_B775C4(&JsonManager_TypeInfo);
    sub_B775C4(&ResponseCommandKind_TypeInfo);
    sub_B775C4(&StringLiteral_21504/*"ng"*/);
    byte_438F153 = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v5 = ResponseCommandKind__SearchData(6, responseList, 0LL);
  if ( v5
    && (v6 = v5, ResponseData__checkError_30128096(v5, 0LL))
    && (success = (Il2CppObject *)v6->fields.success) != 0LL )
  {
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v8 = JsonManager__toJson(success, 0, 0, 0LL);
  }
  else
  {
    v8 = (System_String_o *)StringLiteral_21504/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v8, 0LL);
}


void __fastcall GachaDrawRequest__setResTime(GachaDrawRequest_o *this, int32_t time, const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v10; // x1

  if ( (byte_438F151 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_9331/*"MockMultiGachaResponse"*/);
    byte_438F151 = 1;
  }
  if ( time >= 2 )
  {
    v10 = (System_Int32_array **)StringLiteral_9331/*"MockMultiGachaResponse"*/;
    this->fields.resMsg = (struct System_String_o *)StringLiteral_9331/*"MockMultiGachaResponse"*/;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.resMsg,
      v10,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
  }
}