void GachaDrawRequest___ctor(GachaDrawRequest_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w1

  if ( (byte_4C3952D & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_9136/*"MockGachaResponse"*/);
    byte_4C3952D = 1;
  }
  v5 = StringLiteral_9136/*"MockGachaResponse"*/;
  this->fields.resMsg = (struct System_String_o *)StringLiteral_9136/*"MockGachaResponse"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.resMsg, v5, v2, v3);
  RequestBase___ctor((RequestBase_o *)this, 0);
}


void GachaDrawRequest__beginRequest(
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
  if ( (byte_4C3952B & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_22335/*"num"*/);
    sub_1C32C20(&StringLiteral_19731/*"gachaId"*/);
    sub_1C32C20(&StringLiteral_23723/*"storyAdjustIds"*/);
    sub_1C32C20(&StringLiteral_24065/*"ticketItemId"*/);
    sub_1C32C20(&StringLiteral_23442/*"shopIdIndex"*/);
    sub_1C32C20(&StringLiteral_19733/*"gachaSubId"*/);
    sub_1C32C20(&StringLiteral_23248/*"selectBonusList"*/);
    byte_4C3952B = 1;
  }
  this->fields.gachaId = gachaId;
  this->fields.num = num;
  this->fields.ticketItemId = ticketItemId;
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19731/*"gachaId"*/, gachaId, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22335/*"num"*/, num, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_24065/*"ticketItemId"*/, ticketItemId, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23442/*"shopIdIndex"*/, shopIdIdx, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19733/*"gachaSubId"*/, gachaSubId, 0);
  RequestBase__addField_44145300((RequestBase_o *)this, (System_String_o *)StringLiteral_23723/*"storyAdjustIds"*/, &storyAdjustIds->obj, 0);
  RequestBase__addField_44145196((RequestBase_o *)this, (System_String_o *)StringLiteral_23248/*"selectBonusList"*/, selectBonusListData, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


System_String_o *GachaDrawRequest__getMockData(GachaDrawRequest_o *this, const MethodInfo *method)
{
  System_String_o *resMsg; // x19

  if ( (byte_4C39529 & 1) == 0 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C39529 = 1;
  }
  resMsg = this->fields.resMsg;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile(resMsg, 0);
}


System_String_o *GachaDrawRequest__getURL(GachaDrawRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4C39528 & 1) == 0 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&StringLiteral_19729/*"gacha/draw"*/);
    byte_4C39528 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_63518544(BaseUrl, (System_String_o *)StringLiteral_19729/*"gacha/draw"*/, 0);
}


void GachaDrawRequest__requestCompleted(
        GachaDrawRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  Il2CppObject *success; // x20
  System_String_o *v8; // x1

  if ( (byte_4C3952C & 1) == 0 )
  {
    sub_1C32C20(&JsonManager_TypeInfo);
    sub_1C32C20(&ResponseCommandKind_TypeInfo);
    sub_1C32C20(&StringLiteral_22212/*"ng"*/);
    byte_4C3952C = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(6, responseList, 0);
  if ( v5 && (v6 = v5, ResponseData__checkError_44140424(v5, 0)) && (success = (Il2CppObject *)v6->fields.success) != 0 )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v8 = JsonManager__toJson(success, 0, 0, 0);
  }
  else
  {
    v8 = (System_String_o *)StringLiteral_22212/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v8, 0);
}


void GachaDrawRequest__setResTime(GachaDrawRequest_o *this, int32_t time, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t v6; // w1

  if ( (byte_4C3952A & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_9137/*"MockMultiGachaResponse"*/);
    byte_4C3952A = 1;
  }
  if ( time >= 2 )
  {
    v6 = StringLiteral_9137/*"MockMultiGachaResponse"*/;
    this->fields.resMsg = (struct System_String_o *)StringLiteral_9137/*"MockMultiGachaResponse"*/;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.resMsg, v6, (int32_t)method, v3);
  }
}