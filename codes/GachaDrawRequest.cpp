void __fastcall GachaDrawRequest___ctor(GachaDrawRequest_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1

  if ( (byte_42EC607 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_9257/*"MockGachaResponse"*/, (_DWORD)method, (_DWORD)v2, v3);
    byte_42EC607 = 1;
  }
  v9 = (System_Int32_array **)StringLiteral_9257/*"MockGachaResponse"*/;
  this->fields.resMsg = (struct System_String_o *)StringLiteral_9257/*"MockGachaResponse"*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.resMsg, v9, v2, v3, v4, v5, v6, v7);
  RequestBase___ctor((RequestBase_o *)this, 0LL);
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
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3

  if ( (byte_42EC605 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_21449/*"num"*/, gachaId, num, *(_QWORD *)&warId);
    sub_B5D5C4(&StringLiteral_19187/*"gachaId"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_22649/*"storyAdjustIds"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_22980/*"ticketItemId"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_22411/*"shopIdIndex"*/, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_19189/*"gachaSubId"*/, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_22249/*"selectBonusList"*/, v32, v33, v34);
    byte_42EC605 = 1;
  }
  this->fields.gachaId = gachaId;
  this->fields.num = num;
  this->fields.ticketItemId = ticketItemId;
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19187/*"gachaId"*/, gachaId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21449/*"num"*/, num, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22980/*"ticketItemId"*/, ticketItemId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22411/*"shopIdIndex"*/, shopIdIdx, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19189/*"gachaSubId"*/, gachaSubId, 0LL);
  RequestBase__addField_32362368(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_22649/*"storyAdjustIds"*/,
    &storyAdjustIds->obj,
    0LL);
  RequestBase__addField_32362260(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_22249/*"selectBonusList"*/,
    selectBonusListData,
    0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall GachaDrawRequest__getMockData(GachaDrawRequest_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_String_o *resMsg; // x19

  if ( (byte_42EC603 & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC603 = 1;
  }
  resMsg = this->fields.resMsg;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  return NetworkManager__getMockFile(resMsg, 0LL);
}


System_String_o *__fastcall GachaDrawRequest__getURL(GachaDrawRequest_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  System_String_o *BaseUrl; // x0

  if ( (byte_42EC602 & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_19185/*"gacha/draw"*/, v4, v5, v6);
    byte_42EC602 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44577788(BaseUrl, (System_String_o *)StringLiteral_19185/*"gacha/draw"*/, 0LL);
}


void __fastcall GachaDrawRequest__requestCompleted(
        GachaDrawRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  ResponseData_o *v12; // x0
  ResponseData_o *v13; // x20
  Il2CppObject *success; // x20
  System_String_o *v15; // x1

  if ( (byte_42EC606 & 1) == 0 )
  {
    sub_B5D5C4(&JsonManager_TypeInfo, (_DWORD)responseList, (_DWORD)method, v3);
    sub_B5D5C4(&ResponseCommandKind_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_21345/*"ng"*/, v9, v10, v11);
    byte_42EC606 = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v12 = ResponseCommandKind__SearchData(6, responseList, 0LL);
  if ( v12
    && (v13 = v12, ResponseData__checkError_29500464(v12, 0LL))
    && (success = (Il2CppObject *)v13->fields.success) != 0LL )
  {
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v15 = JsonManager__toJson(success, 0, 0, 0LL);
  }
  else
  {
    v15 = (System_String_o *)StringLiteral_21345/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v15, 0LL);
}


void __fastcall GachaDrawRequest__setResTime(GachaDrawRequest_o *this, int32_t time, const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v10; // x1

  if ( (byte_42EC604 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_9258/*"MockMultiGachaResponse"*/, time, (_DWORD)method, v3);
    byte_42EC604 = 1;
  }
  if ( time >= 2 )
  {
    v10 = (System_Int32_array **)StringLiteral_9258/*"MockMultiGachaResponse"*/;
    this->fields.resMsg = (struct System_String_o *)StringLiteral_9258/*"MockMultiGachaResponse"*/;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.resMsg,
      v10,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
  }
}