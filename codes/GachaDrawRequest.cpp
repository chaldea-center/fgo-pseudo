void __fastcall GachaDrawRequest___ctor(GachaDrawRequest_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w1
  const MethodInfo *v6; // x1

  if ( (byte_4B1E013 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_9066/*"MockGachaResponse"*/, method);
    byte_4B1E013 = 1;
  }
  v5 = StringLiteral_9066/*"MockGachaResponse"*/;
  this->fields.resMsg = (struct System_String_o *)StringLiteral_9066/*"MockGachaResponse"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.resMsg, v5, v2, v3);
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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x3
  const MethodInfo *v25; // x3
  const MethodInfo *v26; // x3
  const MethodInfo *v27; // x3
  const MethodInfo *v28; // x3
  const MethodInfo *v29; // x1

  if ( (byte_4B1E011 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_22137/*"num"*/, *(_QWORD *)&gachaId);
    sub_1BCAFF8(&StringLiteral_19560/*"gachaId"*/, v17);
    sub_1BCAFF8(&StringLiteral_23515/*"storyAdjustIds"*/, v18);
    sub_1BCAFF8(&StringLiteral_23853/*"ticketItemId"*/, v19);
    sub_1BCAFF8(&StringLiteral_23236/*"shopIdIndex"*/, v20);
    sub_1BCAFF8(&StringLiteral_19562/*"gachaSubId"*/, v21);
    sub_1BCAFF8(&StringLiteral_23042/*"selectBonusList"*/, v22);
    byte_4B1E011 = 1;
  }
  this->fields.gachaId = gachaId;
  this->fields.num = num;
  this->fields.ticketItemId = ticketItemId;
  RequestBase__addField(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_19560/*"gachaId"*/,
    gachaId,
    *(const MethodInfo **)&warId);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22137/*"num"*/, num, v23);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23853/*"ticketItemId"*/, ticketItemId, v24);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23236/*"shopIdIndex"*/, shopIdIdx, v25);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19562/*"gachaSubId"*/, gachaSubId, v26);
  RequestBase__addField_43356652(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_23515/*"storyAdjustIds"*/,
    &storyAdjustIds->obj,
    v27);
  RequestBase__addField_43348616(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_23042/*"selectBonusList"*/,
    selectBonusListData,
    v28);
  RequestBase__beginRequest((RequestBase_o *)this, v29);
}


System_String_o *__fastcall GachaDrawRequest__getMockData(GachaDrawRequest_o *this, const MethodInfo *method)
{
  System_String_o *resMsg; // x19

  if ( (byte_4B1E00F & 1) == 0 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, method);
    byte_4B1E00F = 1;
  }
  resMsg = this->fields.resMsg;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile(resMsg, 0LL);
}


System_String_o *__fastcall GachaDrawRequest__getURL(GachaDrawRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4B1E00E & 1) == 0 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, method);
    sub_1BCAFF8(&StringLiteral_19558/*"gacha/draw"*/, v2);
    byte_4B1E00E = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62450424(BaseUrl, (System_String_o *)StringLiteral_19558/*"gacha/draw"*/, 0LL);
}


void __fastcall GachaDrawRequest__requestCompleted(
        GachaDrawRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  const MethodInfo *v8; // x2
  ResponseData_o *v9; // x20
  Il2CppObject *success; // x20
  System_String_o *v11; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  struct NetworkManager_ResultCallbackFunc_o *v13; // x8

  if ( (byte_4B1E012 & 1) == 0 )
  {
    sub_1BCAFF8(&JsonManager_TypeInfo, responseList);
    sub_1BCAFF8(&ResponseCommandKind_TypeInfo, v5);
    sub_1BCAFF8(&StringLiteral_22015/*"ng"*/, v6);
    byte_4B1E012 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(6, responseList, 0LL);
  if ( v7
    && (v9 = v7, ResponseData__checkError(v7, v7->fields.resCode, v8))
    && (success = (Il2CppObject *)v9->fields.success) != 0LL )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v11 = JsonManager__toJson(success, 0, 0, 0LL);
    CallBack = this->fields.CallBack;
    if ( CallBack )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))CallBack->fields.m_target)(
        CallBack->fields.original_method_info,
        v11,
        *(_QWORD *)&CallBack->fields.extra_arg);
  }
  else
  {
    v13 = this->fields.CallBack;
    if ( v13 )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v13->fields.m_target)(
        v13->fields.original_method_info,
        StringLiteral_22015/*"ng"*/,
        *(_QWORD *)&v13->fields.extra_arg);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GachaDrawRequest__setResTime(GachaDrawRequest_o *this, int32_t time, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t v6; // w1

  if ( (byte_4B1E010 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_9067/*"MockMultiGachaResponse"*/, *(_QWORD *)&time);
    byte_4B1E010 = 1;
  }
  if ( time >= 2 )
  {
    v6 = StringLiteral_9067/*"MockMultiGachaResponse"*/;
    this->fields.resMsg = (struct System_String_o *)StringLiteral_9067/*"MockMultiGachaResponse"*/;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.resMsg, v6, (int32_t)method, v3);
  }
}