void GachaDrawRequest___ctor(GachaDrawRequest_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w1
  const MethodInfo *v6; // x1

  if ( (byte_4CB7E6F & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_9134/*"MockGachaResponse"*/);
    byte_4CB7E6F = 1;
  }
  v5 = StringLiteral_9134/*"MockGachaResponse"*/;
  this->fields.resMsg = (struct System_String_o *)StringLiteral_9134/*"MockGachaResponse"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.resMsg, v5, v2, v3);
  RequestBase___ctor((RequestBase_o *)this, v6);
}


// local variable allocation has failed, the output may be wrong!
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
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x1

  if ( (byte_4CB7E6D & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_22424/*"num"*/);
    sub_1C6BA08(&StringLiteral_19797/*"gachaId"*/);
    sub_1C6BA08(&StringLiteral_23821/*"storyAdjustIds"*/);
    sub_1C6BA08(&StringLiteral_24167/*"ticketItemId"*/);
    sub_1C6BA08(&StringLiteral_23535/*"shopIdIndex"*/);
    sub_1C6BA08(&StringLiteral_19799/*"gachaSubId"*/);
    sub_1C6BA08(&StringLiteral_23353/*"selectBonusList"*/);
    byte_4CB7E6D = 1;
  }
  this->fields.gachaId = gachaId;
  this->fields.num = num;
  this->fields.ticketItemId = ticketItemId;
  RequestBase__addField(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_19797/*"gachaId"*/,
    gachaId,
    *(const MethodInfo **)&warId);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22424/*"num"*/, num, v17);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_24167/*"ticketItemId"*/, ticketItemId, v18);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23535/*"shopIdIndex"*/, shopIdIdx, v19);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19799/*"gachaSubId"*/, gachaSubId, v20);
  RequestBase__addField_44469988(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_23821/*"storyAdjustIds"*/,
    &storyAdjustIds->obj,
    v21);
  RequestBase__addField_44471996(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_23353/*"selectBonusList"*/,
    selectBonusListData,
    v22);
  RequestBase__beginRequest((RequestBase_o *)this, v23);
}


System_String_o *GachaDrawRequest__getMockData(GachaDrawRequest_o *this, const MethodInfo *method)
{
  System_String_o *resMsg; // x19

  if ( (byte_4CB7E6B & 1) == 0 )
  {
    sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB7E6B = 1;
  }
  resMsg = this->fields.resMsg;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile(resMsg, 0);
}


System_String_o *GachaDrawRequest__getURL(GachaDrawRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4CB7E6A & 1) == 0 )
  {
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_19795/*"gacha/draw"*/);
    byte_4CB7E6A = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_63966792(BaseUrl, (System_String_o *)StringLiteral_19795/*"gacha/draw"*/, 0);
}


void GachaDrawRequest__requestCompleted(
        GachaDrawRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  const MethodInfo *v6; // x2
  ResponseData_o *v7; // x20
  Il2CppObject *success; // x20
  System_String_o *v9; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  struct NetworkManager_ResultCallbackFunc_o *v11; // x8

  if ( (byte_4CB7E6E & 1) == 0 )
  {
    sub_1C6BA08(&JsonManager_TypeInfo);
    sub_1C6BA08(&ResponseCommandKind_TypeInfo);
    sub_1C6BA08(&StringLiteral_22301/*"ng"*/);
    byte_4CB7E6E = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(6, responseList, 0);
  if ( v5
    && (v7 = v5, ResponseData__checkError(v5, v5->fields.resCode, v6))
    && (success = (Il2CppObject *)v7->fields.success) != 0 )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v9 = JsonManager__toJson(success, 0, 0, 0);
    CallBack = this->fields.CallBack;
    if ( CallBack )
      ((void (__fastcall *)(intptr_t, System_String_o *, intptr_t))CallBack->fields.invoke_impl)(
        CallBack->fields.method_code,
        v9,
        CallBack->fields.method);
  }
  else
  {
    v11 = this->fields.CallBack;
    if ( v11 )
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))v11->fields.invoke_impl)(
        v11->fields.method_code,
        StringLiteral_22301/*"ng"*/,
        v11->fields.method);
  }
}


void GachaDrawRequest__setResTime(GachaDrawRequest_o *this, int32_t time, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t v6; // w1

  if ( (byte_4CB7E6C & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_9135/*"MockMultiGachaResponse"*/);
    byte_4CB7E6C = 1;
  }
  if ( time >= 2 )
  {
    v6 = StringLiteral_9135/*"MockMultiGachaResponse"*/;
    this->fields.resMsg = (struct System_String_o *)StringLiteral_9135/*"MockMultiGachaResponse"*/;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.resMsg, v6, (int32_t)method, v3);
  }
}