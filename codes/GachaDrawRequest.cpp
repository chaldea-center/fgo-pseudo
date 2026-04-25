void GachaDrawRequest___ctor(GachaDrawRequest_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v9; // w1

  if ( (byte_4E06580 & 1) == 0 )
  {
    sub_1CE6700(&StringLiteral_9205/*"MockGachaResponse"*/);
    byte_4E06580 = 1;
  }
  v9 = StringLiteral_9205/*"MockGachaResponse"*/;
  this->fields.resMsg = (struct System_String_o *)StringLiteral_9205/*"MockGachaResponse"*/;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.resMsg, v9, v2, v3, v4, v5, v6, v7);
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
  if ( (byte_4E0657E & 1) == 0 )
  {
    sub_1CE6700(&StringLiteral_22681/*"num"*/);
    sub_1CE6700(&StringLiteral_20010/*"gachaId"*/);
    sub_1CE6700(&StringLiteral_24103/*"storyAdjustIds"*/);
    sub_1CE6700(&StringLiteral_24460/*"ticketItemId"*/);
    sub_1CE6700(&StringLiteral_23812/*"shopIdIndex"*/);
    sub_1CE6700(&StringLiteral_20012/*"gachaSubId"*/);
    sub_1CE6700(&StringLiteral_23628/*"selectBonusList"*/);
    byte_4E0657E = 1;
  }
  this->fields.gachaId = gachaId;
  this->fields.num = num;
  this->fields.ticketItemId = ticketItemId;
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20010/*"gachaId"*/, gachaId, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22681/*"num"*/, num, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_24460/*"ticketItemId"*/, ticketItemId, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23812/*"shopIdIndex"*/, shopIdIdx, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20012/*"gachaSubId"*/, gachaSubId, 0);
  RequestBase__addField_45364676((RequestBase_o *)this, (System_String_o *)StringLiteral_24103/*"storyAdjustIds"*/, &storyAdjustIds->obj, 0);
  RequestBase__addField_45365032((RequestBase_o *)this, (System_String_o *)StringLiteral_23628/*"selectBonusList"*/, selectBonusListData, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


System_String_o *GachaDrawRequest__getMockData(GachaDrawRequest_o *this, const MethodInfo *method)
{
  System_String_o *resMsg; // x19

  if ( (byte_4E0657C & 1) == 0 )
  {
    sub_1CE6700(&NetworkManager_TypeInfo);
    byte_4E0657C = 1;
  }
  resMsg = this->fields.resMsg;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile(resMsg, 0);
}


System_String_o *GachaDrawRequest__getURL(GachaDrawRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4E0657B & 1) == 0 )
  {
    sub_1CE6700(&NetworkManager_TypeInfo);
    sub_1CE6700(&StringLiteral_20008/*"gacha/draw"*/);
    byte_4E0657B = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_65122828(BaseUrl, (System_String_o *)StringLiteral_20008/*"gacha/draw"*/, 0);
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

  if ( (byte_4E0657F & 1) == 0 )
  {
    sub_1CE6700(&JsonManager_TypeInfo);
    sub_1CE6700(&ResponseCommandKind_TypeInfo);
    sub_1CE6700(&StringLiteral_22555/*"ng"*/);
    byte_4E0657F = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(6, responseList, 0);
  if ( v5 && (v6 = v5, ResponseData__checkError_45365352(v5, 0)) && (success = (Il2CppObject *)v6->fields.success) != 0 )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v8 = JsonManager__toJson(success, 0, 0, 0);
  }
  else
  {
    v8 = (System_String_o *)StringLiteral_22555/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v8, 0);
}


void GachaDrawRequest__setResTime(GachaDrawRequest_o *this, int32_t time, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v10; // w1

  if ( (byte_4E0657D & 1) == 0 )
  {
    sub_1CE6700(&StringLiteral_9206/*"MockMultiGachaResponse"*/);
    byte_4E0657D = 1;
  }
  if ( time >= 2 )
  {
    v10 = StringLiteral_9206/*"MockMultiGachaResponse"*/;
    this->fields.resMsg = (struct System_String_o *)StringLiteral_9206/*"MockMultiGachaResponse"*/;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.resMsg, v10, (int32_t)method, v3, v4, v5, v6, v7);
  }
}