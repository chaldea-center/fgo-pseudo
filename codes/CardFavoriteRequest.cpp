void CardFavoriteRequest___ctor(CardFavoriteRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


void CardFavoriteRequest__beginRequest(
        CardFavoriteRequest_o *this,
        int64_t targetUsrSVtId,
        int32_t imageLimitCount,
        int32_t dispLimitCount,
        int32_t commandCardLimitCount,
        int32_t iconLimitCount,
        int32_t portraitLimitCount,
        bool isFavorite,
        bool isLock,
        bool isChoice,
        int32_t commonFlag,
        int32_t battleVoice,
        int32_t randomSettingOwn,
        int32_t randomSettingSupport,
        int32_t limitCountSupport,
        bool isPush,
        const MethodInfo *method)
{
  _BOOL8 _40206092; // x0
  __int64 v25; // x1

  if ( (byte_4C28D44 & 1) == 0 )
  {
    sub_1C2D490(&TutorialFlag_TypeInfo);
    sub_1C2D490(&StringLiteral_21217/*"limitCountSupport"*/);
    sub_1C2D490(&StringLiteral_20110/*"iconLimitCount"*/);
    sub_1C2D490(&StringLiteral_23841/*"svtCommonFlag"*/);
    sub_1C2D490(&StringLiteral_20932/*"isPush"*/);
    sub_1C2D490(&StringLiteral_20273/*"imageLimitCount"*/);
    sub_1C2D490(&StringLiteral_24564/*"userSvtId"*/);
    sub_1C2D490(&StringLiteral_22932/*"randomLimitCount"*/);
    sub_1C2D490(&StringLiteral_22715/*"portraitLimitCount"*/);
    sub_1C2D490(&StringLiteral_18636/*"dispLimitCount"*/);
    sub_1C2D490(&StringLiteral_17087/*"battleVoice"*/);
    sub_1C2D490(&StringLiteral_20916/*"isLock"*/);
    sub_1C2D490(&StringLiteral_20894/*"isChoice"*/);
    sub_1C2D490(&StringLiteral_22933/*"randomLimitCountSupport"*/);
    sub_1C2D490(&StringLiteral_18145/*"commandCardLimitCount"*/);
    sub_1C2D490(&StringLiteral_20906/*"isFavorite"*/);
    byte_4C28D44 = 1;
  }
  RequestBase__addField_44008608((RequestBase_o *)this, (System_String_o *)StringLiteral_24564/*"userSvtId"*/, targetUsrSVtId, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20273/*"imageLimitCount"*/, imageLimitCount, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18636/*"dispLimitCount"*/, dispLimitCount, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18145/*"commandCardLimitCount"*/, commandCardLimitCount, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20110/*"iconLimitCount"*/, iconLimitCount, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22715/*"portraitLimitCount"*/, portraitLimitCount, 0);
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _40206092 = TutorialFlag__Get_40206092(106, 0);
  v25 = StringLiteral_20906/*"isFavorite"*/;
  if ( !_40206092 )
  {
    RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20906/*"isFavorite"*/, -1, 0);
    if ( this )
      goto LABEL_9;
LABEL_10:
    sub_1C2D6EC(_40206092, v25);
  }
  if ( !this )
    goto LABEL_10;
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20906/*"isFavorite"*/, isFavorite, 0);
LABEL_9:
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20916/*"isLock"*/, isLock, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20894/*"isChoice"*/, isChoice, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23841/*"svtCommonFlag"*/, commonFlag, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17087/*"battleVoice"*/, battleVoice, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22932/*"randomLimitCount"*/, randomSettingOwn, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22933/*"randomLimitCountSupport"*/, randomSettingSupport, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21217/*"limitCountSupport"*/, limitCountSupport, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20932/*"isPush"*/, isPush, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


System_String_o *CardFavoriteRequest__getMockData(CardFavoriteRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4C28D43 & 1) == 0 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C28D43 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_1/*""*/, 0);
}


System_String_o *CardFavoriteRequest__getURL(CardFavoriteRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4C28D42 & 1) == 0 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&StringLiteral_17745/*"card/favorite"*/);
    byte_4C28D42 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_63457864(BaseUrl, (System_String_o *)StringLiteral_17745/*"card/favorite"*/, 0);
}


void CardFavoriteRequest__requestCompleted(
        CardFavoriteRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  __int64 *v6; // x8

  if ( (byte_4C28D45 & 1) == 0 )
  {
    sub_1C2D490(&ResponseCommandKind_TypeInfo);
    sub_1C2D490(&StringLiteral_22362/*"ok"*/);
    sub_1C2D490(&StringLiteral_22195/*"ng"*/);
    byte_4C28D45 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(34, responseList, 0);
  if ( v5 && ResponseData__checkError_44004292(v5, 0) )
    v6 = &StringLiteral_22362/*"ok"*/;
  else
    v6 = &StringLiteral_22195/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v6, 0);
}