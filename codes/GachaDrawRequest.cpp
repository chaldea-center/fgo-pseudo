void GachaDrawRequest___ctor(GachaDrawRequest_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t v9; // w1

  if ( (byte_593A27B & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_9503/*"MockGachaResponse"*/);
    byte_593A27B = 1;
  }
  v9 = StringLiteral_9503/*"MockGachaResponse"*/;
  this->fields.resMsg = (struct System_String_o *)StringLiteral_9503/*"MockGachaResponse"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.resMsg, v9, v2, v3, v4, v5, v6, v7);
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
  System_String_o *v17; // x1

  if ( (byte_593A279 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23421/*"num"*/);
    sub_21FFC50(&StringLiteral_20623/*"gachaId"*/);
    sub_21FFC50(&StringLiteral_24939/*"storyAdjustIds"*/);
    sub_21FFC50(&StringLiteral_25315/*"ticketItemId"*/);
    sub_21FFC50(&StringLiteral_24626/*"shopIdIndex"*/);
    sub_21FFC50(&StringLiteral_20625/*"gachaSubId"*/);
    sub_21FFC50(&StringLiteral_24432/*"selectBonusList"*/);
    byte_593A279 = 1;
  }
  v17 = (System_String_o *)StringLiteral_20623/*"gachaId"*/;
  this->fields.gachaId = gachaId;
  this->fields.num = num;
  this->fields.ticketItemId = ticketItemId;
  RequestBase__addField((RequestBase_o *)this, v17, gachaId, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23421/*"num"*/, num, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_25315/*"ticketItemId"*/, ticketItemId, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_24626/*"shopIdIndex"*/, shopIdIdx, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20625/*"gachaSubId"*/, gachaSubId, 0);
  RequestBase__addField_51191900((RequestBase_o *)this, (System_String_o *)StringLiteral_24939/*"storyAdjustIds"*/, &storyAdjustIds->obj, 0);
  RequestBase__addField_51187332((RequestBase_o *)this, (System_String_o *)StringLiteral_24432/*"selectBonusList"*/, selectBonusListData, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


System_String_o *GachaDrawRequest__getMockData(GachaDrawRequest_o *this, const MethodInfo *method)
{
  System_String_o *resMsg; // x19

  if ( (byte_593A277 & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_593A277 = 1;
  }
  resMsg = this->fields.resMsg;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  return NetworkManager__getMockFile(resMsg, 0);
}


System_String_o *GachaDrawRequest__getURL(GachaDrawRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_593A276 & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&StringLiteral_20621/*"gacha/draw"*/);
    byte_593A276 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_75438412(BaseUrl, (System_String_o *)StringLiteral_20621/*"gacha/draw"*/, 0);
}


void GachaDrawRequest__requestCompleted(
        GachaDrawRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  __int64 v7; // x1
  Il2CppObject *success; // x20
  System_String_o *v9; // x1

  if ( (byte_593A27A & 1) == 0 )
  {
    sub_21FFC50(&JsonManager_TypeInfo);
    sub_21FFC50(&ResponseCommandKind_TypeInfo);
    sub_21FFC50(&StringLiteral_23290/*"ng"*/);
    byte_593A27A = 1;
  }
  if ( !*(&ResponseCommandKind_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v5 = ResponseCommandKind__SearchData(6, responseList, 0);
  if ( v5 && (v6 = v5, ResponseData__checkError_51190916(v5, 0)) && (success = (Il2CppObject *)v6->fields.success) != 0 )
  {
    if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v7);
    v9 = JsonManager__toJson(success, 0, 0, 0);
  }
  else
  {
    v9 = (System_String_o *)StringLiteral_23290/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v9, 0);
}


void GachaDrawRequest__setResTime(GachaDrawRequest_o *this, int32_t time, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t v10; // w1

  if ( (byte_593A278 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_9504/*"MockMultiGachaResponse"*/);
    byte_593A278 = 1;
  }
  if ( time >= 2 )
  {
    v10 = StringLiteral_9504/*"MockMultiGachaResponse"*/;
    this->fields.resMsg = (struct System_String_o *)StringLiteral_9504/*"MockMultiGachaResponse"*/;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.resMsg,
      v10,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
  }
}