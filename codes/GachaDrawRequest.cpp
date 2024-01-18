void __fastcall GachaDrawRequest___ctor(GachaDrawRequest_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1

  if ( (byte_418AFE3 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_9163/*"MockGachaResponse"*/, method);
    byte_418AFE3 = 1;
  }
  v9 = (System_Int32_array **)StringLiteral_9163/*"MockGachaResponse"*/;
  this->fields.resMsg = (struct System_String_o *)StringLiteral_9163/*"MockGachaResponse"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.resMsg, v9, v2, v3, v4, v5, v6, v7);
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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1

  if ( (byte_418AFE1 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_21171/*"num"*/, *(_QWORD *)&gachaId);
    sub_B2C35C(&StringLiteral_18948/*"gachaId"*/, v17);
    sub_B2C35C(&StringLiteral_22346/*"storyAdjustIds"*/, v18);
    sub_B2C35C(&StringLiteral_22675/*"ticketItemId"*/, v19);
    sub_B2C35C(&StringLiteral_22109/*"shopIdIndex"*/, v20);
    sub_B2C35C(&StringLiteral_18950/*"gachaSubId"*/, v21);
    sub_B2C35C(&StringLiteral_21950/*"selectBonusList"*/, v22);
    byte_418AFE1 = 1;
  }
  this->fields.gachaId = gachaId;
  this->fields.num = num;
  this->fields.ticketItemId = ticketItemId;
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18948/*"gachaId"*/, gachaId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21171/*"num"*/, num, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22675/*"ticketItemId"*/, ticketItemId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22109/*"shopIdIndex"*/, shopIdIdx, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18950/*"gachaSubId"*/, gachaSubId, 0LL);
  RequestBase__addField_31052036(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_22346/*"storyAdjustIds"*/,
    &storyAdjustIds->obj,
    0LL);
  RequestBase__addField_31051928(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_21950/*"selectBonusList"*/,
    selectBonusListData,
    0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall GachaDrawRequest__getMockData(GachaDrawRequest_o *this, const MethodInfo *method)
{
  System_String_o *resMsg; // x19

  if ( (byte_418AFDF & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    byte_418AFDF = 1;
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
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_418AFDE & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_18946/*"gacha/draw"*/, v2);
    byte_418AFDE = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44305532(BaseUrl, (System_String_o *)StringLiteral_18946/*"gacha/draw"*/, 0LL);
}


void __fastcall GachaDrawRequest__requestCompleted(
        GachaDrawRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  ResponseData_o *v8; // x20
  Il2CppObject *success; // x20
  System_String_o *v10; // x1

  if ( (byte_418AFE2 & 1) == 0 )
  {
    sub_B2C35C(&JsonManager_TypeInfo, responseList);
    sub_B2C35C(&ResponseCommandKind_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_21068/*"ng"*/, v6);
    byte_418AFE2 = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v7 = ResponseCommandKind__SearchData(6, responseList, 0LL);
  if ( v7
    && (v8 = v7, ResponseData__checkError_31019724(v7, 0LL))
    && (success = (Il2CppObject *)v8->fields.success) != 0LL )
  {
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v10 = JsonManager__toJson(success, 0, 0, 0LL);
  }
  else
  {
    v10 = (System_String_o *)StringLiteral_21068/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v10, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GachaDrawRequest__setResTime(GachaDrawRequest_o *this, int32_t time, const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v10; // x1

  if ( (byte_418AFE0 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_9164/*"MockMultiGachaResponse"*/, *(_QWORD *)&time);
    byte_418AFE0 = 1;
  }
  if ( time >= 2 )
  {
    v10 = (System_Int32_array **)StringLiteral_9164/*"MockMultiGachaResponse"*/;
    this->fields.resMsg = (struct System_String_o *)StringLiteral_9164/*"MockMultiGachaResponse"*/;
    sub_B2C2F8(
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