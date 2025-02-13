void __fastcall GachaDrawRequest___ctor(GachaDrawRequest_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int64_t v9; // x1
  const MethodInfo *v10; // x1

  if ( (byte_4BDDEED & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_9297/*"MockGachaResponse"*/);
    byte_4BDDEED = 1;
  }
  v9 = StringLiteral_9297/*"MockGachaResponse"*/;
  this->fields.resMsg = (struct System_String_o *)StringLiteral_9297/*"MockGachaResponse"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.resMsg, v9, v2, v3, v4, v5, v6, v7);
  RequestBase___ctor((RequestBase_o *)this, v10);
}


// local variable allocation has failed, the output may be wrong!
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
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x1

  if ( (byte_4BDDEEB & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_22585/*"num"*/);
    sub_1C21E38(&StringLiteral_20037/*"gachaId"*/);
    sub_1C21E38(&StringLiteral_23994/*"storyAdjustIds"*/);
    sub_1C21E38(&StringLiteral_24358/*"ticketItemId"*/);
    sub_1C21E38(&StringLiteral_23699/*"shopIdIndex"*/);
    sub_1C21E38(&StringLiteral_20039/*"gachaSubId"*/);
    sub_1C21E38(&StringLiteral_23505/*"selectBonusList"*/);
    byte_4BDDEEB = 1;
  }
  this->fields.gachaId = gachaId;
  this->fields.num = num;
  this->fields.ticketItemId = ticketItemId;
  RequestBase__addField(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_20037/*"gachaId"*/,
    gachaId,
    *(const MethodInfo **)&warId);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22585/*"num"*/, num, v17);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_24358/*"ticketItemId"*/, ticketItemId, v18);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23699/*"shopIdIndex"*/, shopIdIdx, v19);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20039/*"gachaSubId"*/, gachaSubId, v20);
  RequestBase__addField_42423236(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_23994/*"storyAdjustIds"*/,
    &storyAdjustIds->obj,
    v21);
  RequestBase__addField_42414744(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_23505/*"selectBonusList"*/,
    selectBonusListData,
    v22);
  RequestBase__beginRequest((RequestBase_o *)this, v23);
}


System_String_o *__fastcall GachaDrawRequest__getMockData(GachaDrawRequest_o *this, const MethodInfo *method)
{
  System_String_o *resMsg; // x19

  if ( (byte_4BDDEE9 & 1) == 0 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BDDEE9 = 1;
  }
  resMsg = this->fields.resMsg;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile(resMsg, 0LL);
}


System_String_o *__fastcall GachaDrawRequest__getURL(GachaDrawRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4BDDEE8 & 1) == 0 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&StringLiteral_20035/*"gacha/draw"*/);
    byte_4BDDEE8 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_63115476(BaseUrl, (System_String_o *)StringLiteral_20035/*"gacha/draw"*/, 0LL);
}


void __fastcall GachaDrawRequest__requestCompleted(
        GachaDrawRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  Il2CppObject *success; // x20
  System_String_o *v8; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  struct NetworkManager_ResultCallbackFunc_o *v10; // x8

  if ( (byte_4BDDEEC & 1) == 0 )
  {
    sub_1C21E38(&JsonManager_TypeInfo);
    sub_1C21E38(&ResponseCommandKind_TypeInfo);
    sub_1C21E38(&StringLiteral_22456/*"ng"*/);
    byte_4BDDEEC = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(6, responseList, 0LL);
  if ( v5
    && (v6 = v5, ResponseData__checkError_42505456(v5, 0LL))
    && (success = (Il2CppObject *)v6->fields.success) != 0LL )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v8 = JsonManager__toJson(success, 0, 0, 0LL);
    CallBack = this->fields.CallBack;
    if ( CallBack )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))CallBack->fields.m_target)(
        CallBack->fields.original_method_info,
        v8,
        *(_QWORD *)&CallBack->fields.extra_arg);
  }
  else
  {
    v10 = this->fields.CallBack;
    if ( v10 )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v10->fields.m_target)(
        v10->fields.original_method_info,
        StringLiteral_22456/*"ng"*/,
        *(_QWORD *)&v10->fields.extra_arg);
  }
}


void __fastcall GachaDrawRequest__setResTime(GachaDrawRequest_o *this, int32_t time, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int64_t v10; // x1

  if ( (byte_4BDDEEA & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_9298/*"MockMultiGachaResponse"*/);
    byte_4BDDEEA = 1;
  }
  if ( time >= 2 )
  {
    v10 = StringLiteral_9298/*"MockMultiGachaResponse"*/;
    this->fields.resMsg = (struct System_String_o *)StringLiteral_9298/*"MockMultiGachaResponse"*/;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.resMsg, v10, (int64_t)method, v3, v4, v5, v6, v7);
  }
}