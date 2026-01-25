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
  _BOOL8 _40989036; // x0
  __int64 v25; // x1

  if ( (byte_4CF00C5 & 1) == 0 )
  {
    sub_1C7BAE8(&TutorialFlag_TypeInfo);
    sub_1C7BAE8(&StringLiteral_21429/*"limitCountSupport"*/);
    sub_1C7BAE8(&StringLiteral_20289/*"iconLimitCount"*/);
    sub_1C7BAE8(&StringLiteral_24094/*"svtCommonFlag"*/);
    sub_1C7BAE8(&StringLiteral_21128/*"isPush"*/);
    sub_1C7BAE8(&StringLiteral_20456/*"imageLimitCount"*/);
    sub_1C7BAE8(&StringLiteral_24833/*"userSvtId"*/);
    sub_1C7BAE8(&StringLiteral_23173/*"randomLimitCount"*/);
    sub_1C7BAE8(&StringLiteral_22951/*"portraitLimitCount"*/);
    sub_1C7BAE8(&StringLiteral_18758/*"dispLimitCount"*/);
    sub_1C7BAE8(&StringLiteral_17176/*"battleVoice"*/);
    sub_1C7BAE8(&StringLiteral_21108/*"isLock"*/);
    sub_1C7BAE8(&StringLiteral_21082/*"isChoice"*/);
    sub_1C7BAE8(&StringLiteral_23174/*"randomLimitCountSupport"*/);
    sub_1C7BAE8(&StringLiteral_18249/*"commandCardLimitCount"*/);
    sub_1C7BAE8(&StringLiteral_21097/*"isFavorite"*/);
    byte_4CF00C5 = 1;
  }
  RequestBase__addField_44745468((RequestBase_o *)this, (System_String_o *)StringLiteral_24833/*"userSvtId"*/, targetUsrSVtId, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20456/*"imageLimitCount"*/, imageLimitCount, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18758/*"dispLimitCount"*/, dispLimitCount, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18249/*"commandCardLimitCount"*/, commandCardLimitCount, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20289/*"iconLimitCount"*/, iconLimitCount, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22951/*"portraitLimitCount"*/, portraitLimitCount, 0);
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _40989036 = TutorialFlag__Get_40989036(106, 0);
  v25 = StringLiteral_21097/*"isFavorite"*/;
  if ( !_40989036 )
  {
    RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21097/*"isFavorite"*/, -1, 0);
    if ( this )
      goto LABEL_9;
LABEL_10:
    sub_1C7BD40(_40989036, v25);
  }
  if ( !this )
    goto LABEL_10;
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21097/*"isFavorite"*/, isFavorite, 0);
LABEL_9:
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21108/*"isLock"*/, isLock, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21082/*"isChoice"*/, isChoice, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_24094/*"svtCommonFlag"*/, commonFlag, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17176/*"battleVoice"*/, battleVoice, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23173/*"randomLimitCount"*/, randomSettingOwn, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23174/*"randomLimitCountSupport"*/, randomSettingSupport, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21429/*"limitCountSupport"*/, limitCountSupport, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21128/*"isPush"*/, isPush, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


System_String_o *CardFavoriteRequest__getMockData(CardFavoriteRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4CF00C4 & 1) == 0 )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CF00C4 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_1/*""*/, 0);
}


System_String_o *CardFavoriteRequest__getURL(CardFavoriteRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4CF00C3 & 1) == 0 )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_17846/*"card/favorite"*/);
    byte_4CF00C3 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_64176912(BaseUrl, (System_String_o *)StringLiteral_17846/*"card/favorite"*/, 0);
}


void CardFavoriteRequest__requestCompleted(
        CardFavoriteRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  __int64 *v6; // x8

  if ( (byte_4CF00C6 & 1) == 0 )
  {
    sub_1C7BAE8(&ResponseCommandKind_TypeInfo);
    sub_1C7BAE8(&StringLiteral_22590/*"ok"*/);
    sub_1C7BAE8(&StringLiteral_22419/*"ng"*/);
    byte_4CF00C6 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(34, responseList, 0);
  if ( v5 && ResponseData__checkError_44743216(v5, 0) )
    v6 = &StringLiteral_22590/*"ok"*/;
  else
    v6 = &StringLiteral_22419/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v6, 0);
}