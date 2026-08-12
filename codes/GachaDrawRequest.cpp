void GachaDrawRequest___ctor(GachaDrawRequest_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t v9; // w1
  const MethodInfo *v10; // x1

  if ( (byte_5972459 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_9516/*"MockGachaResponse"*/);
    byte_5972459 = 1;
  }
  v9 = StringLiteral_9516/*"MockGachaResponse"*/;
  this->fields.resMsg = (struct System_String_o *)StringLiteral_9516/*"MockGachaResponse"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.resMsg, v9, v2, v3, v4, v5, v6, v7);
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
  System_String_o *v17; // x1
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x1

  if ( (byte_5972457 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_23468/*"num"*/);
    sub_2213A60(&StringLiteral_20664/*"gachaId"*/);
    sub_2213A60(&StringLiteral_24987/*"storyAdjustIds"*/);
    sub_2213A60(&StringLiteral_25363/*"ticketItemId"*/);
    sub_2213A60(&StringLiteral_24674/*"shopIdIndex"*/);
    sub_2213A60(&StringLiteral_20666/*"gachaSubId"*/);
    sub_2213A60(&StringLiteral_24480/*"selectBonusList"*/);
    byte_5972457 = 1;
  }
  v17 = (System_String_o *)StringLiteral_20664/*"gachaId"*/;
  this->fields.gachaId = gachaId;
  this->fields.num = num;
  this->fields.ticketItemId = ticketItemId;
  RequestBase__addField((RequestBase_o *)this, v17, gachaId, *(const MethodInfo **)&warId);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23468/*"num"*/, num, v18);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_25363/*"ticketItemId"*/, ticketItemId, v19);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_24674/*"shopIdIndex"*/, shopIdIdx, v20);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20666/*"gachaSubId"*/, gachaSubId, v21);
  RequestBase__addField_51259092(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_24987/*"storyAdjustIds"*/,
    &storyAdjustIds->obj,
    v22);
  RequestBase__addField_51259256(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_24480/*"selectBonusList"*/,
    selectBonusListData,
    v23);
  RequestBase__beginRequest((RequestBase_o *)this, v24);
}


System_String_o *GachaDrawRequest__getMockData(GachaDrawRequest_o *this, const MethodInfo *method)
{
  System_String_o *resMsg; // x19

  if ( (byte_5972455 & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5972455 = 1;
  }
  resMsg = this->fields.resMsg;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  return NetworkManager__getMockFile(resMsg, 0);
}


System_String_o *GachaDrawRequest__getURL(GachaDrawRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_5972454 & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&StringLiteral_20662/*"gacha/draw"*/);
    byte_5972454 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_75651716(BaseUrl, (System_String_o *)StringLiteral_20662/*"gacha/draw"*/, 0);
}


void GachaDrawRequest__requestCompleted(
        GachaDrawRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  const MethodInfo *v6; // x2
  ResponseData_o *v7; // x20
  __int64 v8; // x1
  Il2CppObject *success; // x20
  System_String_o *v10; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 v12; // x1

  if ( (byte_5972458 & 1) == 0 )
  {
    sub_2213A60(&JsonManager_TypeInfo);
    sub_2213A60(&ResponseCommandKind_TypeInfo);
    sub_2213A60(&StringLiteral_23336/*"ng"*/);
    byte_5972458 = 1;
  }
  if ( !*(&ResponseCommandKind_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v5 = ResponseCommandKind__SearchData(6, responseList, 0);
  if ( !v5
    || (v7 = v5, !ResponseData__checkError(v5, v5->fields.resCode, v6))
    || (success = (Il2CppObject *)v7->fields.success) == 0 )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v12 = StringLiteral_23336/*"ng"*/;
    goto LABEL_14;
  }
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v8);
  v10 = JsonManager__toJson(success, 0, 0, 0);
  CallBack = this->fields.CallBack;
  if ( CallBack )
  {
    v12 = (__int64)v10;
LABEL_14:
    ((void (__fastcall *)(intptr_t, __int64, intptr_t))CallBack->fields.invoke_impl)(
      CallBack->fields.method_code,
      v12,
      CallBack->fields.method);
  }
}


void GachaDrawRequest__setResTime(GachaDrawRequest_o *this, int32_t time, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t v10; // w1

  if ( (byte_5972456 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_9517/*"MockMultiGachaResponse"*/);
    byte_5972456 = 1;
  }
  if ( time >= 2 )
  {
    v10 = StringLiteral_9517/*"MockMultiGachaResponse"*/;
    this->fields.resMsg = (struct System_String_o *)StringLiteral_9517/*"MockMultiGachaResponse"*/;
    sub_2213A04(
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