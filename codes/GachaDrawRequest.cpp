void GachaDrawRequest___ctor(GachaDrawRequest_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v9; // w1
  const MethodInfo *v10; // x1

  if ( (byte_4CC8F98 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_9138/*"MockGachaResponse"*/);
    byte_4CC8F98 = 1;
  }
  v9 = StringLiteral_9138/*"MockGachaResponse"*/;
  this->fields.resMsg = (struct System_String_o *)StringLiteral_9138/*"MockGachaResponse"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.resMsg, v9, v2, v3, v4, v5, v6, v7);
  RequestBase___ctor((RequestBase_o *)this, v10);
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

  if ( (byte_4CC8F96 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_22439/*"num"*/);
    sub_1C713B0(&StringLiteral_19808/*"gachaId"*/);
    sub_1C713B0(&StringLiteral_23841/*"storyAdjustIds"*/);
    sub_1C713B0(&StringLiteral_24187/*"ticketItemId"*/);
    sub_1C713B0(&StringLiteral_23555/*"shopIdIndex"*/);
    sub_1C713B0(&StringLiteral_19810/*"gachaSubId"*/);
    sub_1C713B0(&StringLiteral_23373/*"selectBonusList"*/);
    byte_4CC8F96 = 1;
  }
  this->fields.gachaId = gachaId;
  this->fields.num = num;
  this->fields.ticketItemId = ticketItemId;
  RequestBase__addField(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_19808/*"gachaId"*/,
    gachaId,
    *(const MethodInfo **)&warId);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22439/*"num"*/, num, v17);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_24187/*"ticketItemId"*/, ticketItemId, v18);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23555/*"shopIdIndex"*/, shopIdIdx, v19);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19810/*"gachaSubId"*/, gachaSubId, v20);
  RequestBase__addField_44516316(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_23841/*"storyAdjustIds"*/,
    &storyAdjustIds->obj,
    v21);
  RequestBase__addField_44518324(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_23373/*"selectBonusList"*/,
    selectBonusListData,
    v22);
  RequestBase__beginRequest((RequestBase_o *)this, v23);
}


System_String_o *GachaDrawRequest__getMockData(GachaDrawRequest_o *this, const MethodInfo *method)
{
  System_String_o *resMsg; // x19

  if ( (byte_4CC8F94 & 1) == 0 )
  {
    sub_1C713B0(&NetworkManager_TypeInfo);
    byte_4CC8F94 = 1;
  }
  resMsg = this->fields.resMsg;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile(resMsg, 0);
}


System_String_o *GachaDrawRequest__getURL(GachaDrawRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4CC8F93 & 1) == 0 )
  {
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&StringLiteral_19806/*"gacha/draw"*/);
    byte_4CC8F93 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_64031724(BaseUrl, (System_String_o *)StringLiteral_19806/*"gacha/draw"*/, 0);
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

  if ( (byte_4CC8F97 & 1) == 0 )
  {
    sub_1C713B0(&JsonManager_TypeInfo);
    sub_1C713B0(&ResponseCommandKind_TypeInfo);
    sub_1C713B0(&StringLiteral_22316/*"ng"*/);
    byte_4CC8F97 = 1;
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
        StringLiteral_22316/*"ng"*/,
        v11->fields.method);
  }
}


void GachaDrawRequest__setResTime(GachaDrawRequest_o *this, int32_t time, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v10; // w1

  if ( (byte_4CC8F95 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_9139/*"MockMultiGachaResponse"*/);
    byte_4CC8F95 = 1;
  }
  if ( time >= 2 )
  {
    v10 = StringLiteral_9139/*"MockMultiGachaResponse"*/;
    this->fields.resMsg = (struct System_String_o *)StringLiteral_9139/*"MockMultiGachaResponse"*/;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.resMsg, v10, (int32_t)method, v3, v4, v5, v6, v7);
  }
}