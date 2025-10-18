void GachaDrawRequest___ctor(GachaDrawRequest_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w1

  if ( (byte_4C44B27 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_9137/*"MockGachaResponse"*/);
    byte_4C44B27 = 1;
  }
  v5 = StringLiteral_9137/*"MockGachaResponse"*/;
  this->fields.resMsg = (struct System_String_o *)StringLiteral_9137/*"MockGachaResponse"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.resMsg, v5, v2, v3);
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
  if ( (byte_4C44B25 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_22338/*"num"*/);
    sub_1C37058(&StringLiteral_19734/*"gachaId"*/);
    sub_1C37058(&StringLiteral_23727/*"storyAdjustIds"*/);
    sub_1C37058(&StringLiteral_24069/*"ticketItemId"*/);
    sub_1C37058(&StringLiteral_23446/*"shopIdIndex"*/);
    sub_1C37058(&StringLiteral_19736/*"gachaSubId"*/);
    sub_1C37058(&StringLiteral_23252/*"selectBonusList"*/);
    byte_4C44B25 = 1;
  }
  this->fields.gachaId = gachaId;
  this->fields.num = num;
  this->fields.ticketItemId = ticketItemId;
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19734/*"gachaId"*/, gachaId, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22338/*"num"*/, num, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_24069/*"ticketItemId"*/, ticketItemId, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23446/*"shopIdIndex"*/, shopIdIdx, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19736/*"gachaSubId"*/, gachaSubId, 0);
  RequestBase__addField_44247404((RequestBase_o *)this, (System_String_o *)StringLiteral_23727/*"storyAdjustIds"*/, &storyAdjustIds->obj, 0);
  RequestBase__addField_44247300((RequestBase_o *)this, (System_String_o *)StringLiteral_23252/*"selectBonusList"*/, selectBonusListData, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


System_String_o *GachaDrawRequest__getMockData(GachaDrawRequest_o *this, const MethodInfo *method)
{
  System_String_o *resMsg; // x19

  if ( (byte_4C44B23 & 1) == 0 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C44B23 = 1;
  }
  resMsg = this->fields.resMsg;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile(resMsg, 0);
}


System_String_o *GachaDrawRequest__getURL(GachaDrawRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4C44B22 & 1) == 0 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&StringLiteral_19732/*"gacha/draw"*/);
    byte_4C44B22 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_63561656(BaseUrl, (System_String_o *)StringLiteral_19732/*"gacha/draw"*/, 0);
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

  if ( (byte_4C44B26 & 1) == 0 )
  {
    sub_1C37058(&JsonManager_TypeInfo);
    sub_1C37058(&ResponseCommandKind_TypeInfo);
    sub_1C37058(&StringLiteral_22215/*"ng"*/);
    byte_4C44B26 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(6, responseList, 0);
  if ( v5 && (v6 = v5, ResponseData__checkError_44242528(v5, 0)) && (success = (Il2CppObject *)v6->fields.success) != 0 )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v8 = JsonManager__toJson(success, 0, 0, 0);
  }
  else
  {
    v8 = (System_String_o *)StringLiteral_22215/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v8, 0);
}


void GachaDrawRequest__setResTime(GachaDrawRequest_o *this, int32_t time, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t v6; // w1

  if ( (byte_4C44B24 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_9138/*"MockMultiGachaResponse"*/);
    byte_4C44B24 = 1;
  }
  if ( time >= 2 )
  {
    v6 = StringLiteral_9138/*"MockMultiGachaResponse"*/;
    this->fields.resMsg = (struct System_String_o *)StringLiteral_9138/*"MockMultiGachaResponse"*/;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.resMsg, v6, (int32_t)method, v3);
  }
}