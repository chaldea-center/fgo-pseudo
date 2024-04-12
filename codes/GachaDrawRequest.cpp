void __fastcall GachaDrawRequest___ctor(GachaDrawRequest_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1

  if ( (byte_42B3B17 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_9219/*"MockGachaResponse"*/);
    byte_42B3B17 = 1;
  }
  v9 = (System_Int32_array **)StringLiteral_9219/*"MockGachaResponse"*/;
  this->fields.resMsg = (struct System_String_o *)StringLiteral_9219/*"MockGachaResponse"*/;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.resMsg, v9, v2, v3, v4, v5, v6, v7);
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
  if ( (byte_42B3B15 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_21341/*"num"*/);
    sub_B52984(&StringLiteral_19090/*"gachaId"*/);
    sub_B52984(&StringLiteral_22534/*"storyAdjustIds"*/);
    sub_B52984(&StringLiteral_22865/*"ticketItemId"*/);
    sub_B52984(&StringLiteral_22296/*"shopIdIndex"*/);
    sub_B52984(&StringLiteral_19092/*"gachaSubId"*/);
    sub_B52984(&StringLiteral_22135/*"selectBonusList"*/);
    byte_42B3B15 = 1;
  }
  this->fields.gachaId = gachaId;
  this->fields.num = num;
  this->fields.ticketItemId = ticketItemId;
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19090/*"gachaId"*/, gachaId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21341/*"num"*/, num, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22865/*"ticketItemId"*/, ticketItemId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22296/*"shopIdIndex"*/, shopIdIdx, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19092/*"gachaSubId"*/, gachaSubId, 0LL);
  RequestBase__addField_32021028(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_22534/*"storyAdjustIds"*/,
    &storyAdjustIds->obj,
    0LL);
  RequestBase__addField_32020920(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_22135/*"selectBonusList"*/,
    selectBonusListData,
    0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall GachaDrawRequest__getMockData(GachaDrawRequest_o *this, const MethodInfo *method)
{
  System_String_o *resMsg; // x19

  if ( (byte_42B3B13 & 1) == 0 )
  {
    sub_B52984(&NetworkManager_TypeInfo);
    byte_42B3B13 = 1;
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

  if ( (byte_42B3B12 & 1) == 0 )
  {
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&StringLiteral_19088/*"gacha/draw"*/);
    byte_42B3B12 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44568316(BaseUrl, (System_String_o *)StringLiteral_19088/*"gacha/draw"*/, 0LL);
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

  if ( (byte_42B3B16 & 1) == 0 )
  {
    sub_B52984(&JsonManager_TypeInfo);
    sub_B52984(&ResponseCommandKind_TypeInfo);
    sub_B52984(&StringLiteral_21239/*"ng"*/);
    byte_42B3B16 = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v5 = ResponseCommandKind__SearchData(6, responseList, 0LL);
  if ( v5
    && (v6 = v5, ResponseData__checkError_29724768(v5, 0LL))
    && (success = (Il2CppObject *)v6->fields.success) != 0LL )
  {
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v8 = JsonManager__toJson(success, 0, 0, 0LL);
  }
  else
  {
    v8 = (System_String_o *)StringLiteral_21239/*"ng"*/;
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

  if ( (byte_42B3B14 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_9220/*"MockMultiGachaResponse"*/);
    byte_42B3B14 = 1;
  }
  if ( time >= 2 )
  {
    v10 = (System_Int32_array **)StringLiteral_9220/*"MockMultiGachaResponse"*/;
    this->fields.resMsg = (struct System_String_o *)StringLiteral_9220/*"MockMultiGachaResponse"*/;
    sub_B52920(
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