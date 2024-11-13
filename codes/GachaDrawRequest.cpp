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

  if ( (byte_4B17B0A & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_9236/*"MockGachaResponse"*/, method, v2);
    byte_4B17B0A = 1;
  }
  v9 = StringLiteral_9236/*"MockGachaResponse"*/;
  this->fields.resMsg = (struct System_String_o *)StringLiteral_9236/*"MockGachaResponse"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.resMsg, v9, v2, v3, v4, v5, v6, v7);
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
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  const MethodInfo *v29; // x3
  const MethodInfo *v30; // x3
  const MethodInfo *v31; // x3
  const MethodInfo *v32; // x3
  const MethodInfo *v33; // x3
  const MethodInfo *v34; // x3
  const MethodInfo *v35; // x1

  if ( (byte_4B17B08 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_22418/*"num"*/, *(_QWORD *)&gachaId, *(_QWORD *)&num);
    sub_1BCA7E0(&StringLiteral_19896/*"gachaId"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_23814/*"storyAdjustIds"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_24176/*"ticketItemId"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_23520/*"shopIdIndex"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_19898/*"gachaSubId"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_23327/*"selectBonusList"*/, v27, v28);
    byte_4B17B08 = 1;
  }
  this->fields.gachaId = gachaId;
  this->fields.num = num;
  this->fields.ticketItemId = ticketItemId;
  RequestBase__addField(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_19896/*"gachaId"*/,
    gachaId,
    *(const MethodInfo **)&warId);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22418/*"num"*/, num, v29);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_24176/*"ticketItemId"*/, ticketItemId, v30);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23520/*"shopIdIndex"*/, shopIdIdx, v31);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19898/*"gachaSubId"*/, gachaSubId, v32);
  RequestBase__addField_41870840(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_23814/*"storyAdjustIds"*/,
    &storyAdjustIds->obj,
    v33);
  RequestBase__addField_41862348(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_23327/*"selectBonusList"*/,
    selectBonusListData,
    v34);
  RequestBase__beginRequest((RequestBase_o *)this, v35);
}


System_String_o *__fastcall GachaDrawRequest__getMockData(GachaDrawRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  System_String_o *resMsg; // x19

  if ( (byte_4B17B06 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    byte_4B17B06 = 1;
  }
  resMsg = this->fields.resMsg;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  return NetworkManager__getMockFile(resMsg, 0LL);
}


System_String_o *__fastcall GachaDrawRequest__getURL(GachaDrawRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  System_String_o *BaseUrl; // x0

  if ( (byte_4B17B05 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_19894/*"gacha/draw"*/, v3, v4);
    byte_4B17B05 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62401220(BaseUrl, (System_String_o *)StringLiteral_19894/*"gacha/draw"*/, 0LL);
}


void __fastcall GachaDrawRequest__requestCompleted(
        GachaDrawRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  ResponseData_o *v9; // x0
  ResponseData_o *v10; // x20
  __int64 v11; // x1
  Il2CppObject *success; // x20
  System_String_o *v13; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  struct NetworkManager_ResultCallbackFunc_o *v15; // x8

  if ( (byte_4B17B09 & 1) == 0 )
  {
    sub_1BCA7E0(&JsonManager_TypeInfo, responseList, method);
    sub_1BCA7E0(&ResponseCommandKind_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, v7, v8);
    byte_4B17B09 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v9 = ResponseCommandKind__SearchData(6, responseList, 0LL);
  if ( v9
    && (v10 = v9, ResponseData__checkError_41952396(v9, 0LL))
    && (success = (Il2CppObject *)v10->fields.success) != 0LL )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v11);
    v13 = JsonManager__toJson(success, 0, 0, 0LL);
    CallBack = this->fields.CallBack;
    if ( CallBack )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))CallBack->fields.m_target)(
        CallBack->fields.original_method_info,
        v13,
        *(_QWORD *)&CallBack->fields.extra_arg);
  }
  else
  {
    v15 = this->fields.CallBack;
    if ( v15 )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v15->fields.m_target)(
        v15->fields.original_method_info,
        StringLiteral_22292/*"ng"*/,
        *(_QWORD *)&v15->fields.extra_arg);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GachaDrawRequest__setResTime(GachaDrawRequest_o *this, int32_t time, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int64_t v10; // x1

  if ( (byte_4B17B07 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_9237/*"MockMultiGachaResponse"*/, *(_QWORD *)&time, method);
    byte_4B17B07 = 1;
  }
  if ( time >= 2 )
  {
    v10 = StringLiteral_9237/*"MockMultiGachaResponse"*/;
    this->fields.resMsg = (struct System_String_o *)StringLiteral_9237/*"MockMultiGachaResponse"*/;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.resMsg, v10, (int64_t)method, v3, v4, v5, v6, v7);
  }
}