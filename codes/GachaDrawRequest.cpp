void __fastcall GachaDrawRequest___ctor(GachaDrawRequest_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t v5; // w1
  const MethodInfo *v6; // x1

  if ( (byte_4A5CA49 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_9106/*"MockGachaResponse"*/);
    byte_4A5CA49 = 1;
  }
  v5 = StringLiteral_9106/*"MockGachaResponse"*/;
  this->fields.resMsg = (struct System_String_o *)StringLiteral_9106/*"MockGachaResponse"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.resMsg, v5, v2, v3);
  RequestBase___ctor((RequestBase_o *)this, v6);
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

  if ( (byte_4A5CA47 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_22178/*"num"*/);
    sub_1B885B0(&StringLiteral_19694/*"gachaId"*/);
    sub_1B885B0(&StringLiteral_23566/*"storyAdjustIds"*/);
    sub_1B885B0(&StringLiteral_23927/*"ticketItemId"*/);
    sub_1B885B0(&StringLiteral_23272/*"shopIdIndex"*/);
    sub_1B885B0(&StringLiteral_19696/*"gachaSubId"*/);
    sub_1B885B0(&StringLiteral_23082/*"selectBonusList"*/);
    byte_4A5CA47 = 1;
  }
  this->fields.gachaId = gachaId;
  this->fields.num = num;
  this->fields.ticketItemId = ticketItemId;
  RequestBase__addField(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_19694/*"gachaId"*/,
    gachaId,
    *(const MethodInfo **)&warId);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22178/*"num"*/, num, v17);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23927/*"ticketItemId"*/, ticketItemId, v18);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23272/*"shopIdIndex"*/, shopIdIdx, v19);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19696/*"gachaSubId"*/, gachaSubId, v20);
  RequestBase__addField_41136012(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_23566/*"storyAdjustIds"*/,
    &storyAdjustIds->obj,
    v21);
  RequestBase__addField_41126952(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_23082/*"selectBonusList"*/,
    selectBonusListData,
    v22);
  RequestBase__beginRequest((RequestBase_o *)this, v23);
}


System_String_o *__fastcall GachaDrawRequest__getMockData(GachaDrawRequest_o *this, const MethodInfo *method)
{
  System_String_o *resMsg; // x19

  if ( (byte_4A5CA45 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5CA45 = 1;
  }
  resMsg = this->fields.resMsg;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile(resMsg, 0LL);
}


System_String_o *__fastcall GachaDrawRequest__getURL(GachaDrawRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4A5CA44 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_19692/*"gacha/draw"*/);
    byte_4A5CA44 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61707032(BaseUrl, (System_String_o *)StringLiteral_19692/*"gacha/draw"*/, 0LL);
}


void __fastcall GachaDrawRequest__requestCompleted(
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

  if ( (byte_4A5CA48 & 1) == 0 )
  {
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&ResponseCommandKind_TypeInfo);
    sub_1B885B0(&StringLiteral_22055/*"ng"*/);
    byte_4A5CA48 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(6, responseList, 0LL);
  if ( v5
    && (v7 = v5, ResponseData__checkError(v5, v5->fields.resCode, v6))
    && (success = (Il2CppObject *)v7->fields.success) != 0LL )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v9 = JsonManager__toJson(success, 0, 0, 0LL);
    CallBack = this->fields.CallBack;
    if ( CallBack )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))CallBack->fields.m_target)(
        CallBack->fields.original_method_info,
        v9,
        *(_QWORD *)&CallBack->fields.extra_arg);
  }
  else
  {
    v11 = this->fields.CallBack;
    if ( v11 )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v11->fields.m_target)(
        v11->fields.original_method_info,
        StringLiteral_22055/*"ng"*/,
        *(_QWORD *)&v11->fields.extra_arg);
  }
}


void __fastcall GachaDrawRequest__setResTime(GachaDrawRequest_o *this, int32_t time, const MethodInfo *method)
{
  int32_t v3; // w3
  int32_t v6; // w1

  if ( (byte_4A5CA46 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_9107/*"MockMultiGachaResponse"*/);
    byte_4A5CA46 = 1;
  }
  if ( time >= 2 )
  {
    v6 = StringLiteral_9107/*"MockMultiGachaResponse"*/;
    this->fields.resMsg = (struct System_String_o *)StringLiteral_9107/*"MockMultiGachaResponse"*/;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.resMsg, v6, (int32_t)method, v3);
  }
}