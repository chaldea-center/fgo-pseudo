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
  _BOOL8 _40699620; // x0
  __int64 v25; // x1

  if ( (byte_4CC8EB5 & 1) == 0 )
  {
    sub_1C713B0(&TutorialFlag_TypeInfo);
    sub_1C713B0(&StringLiteral_21329/*"limitCountSupport"*/);
    sub_1C713B0(&StringLiteral_20201/*"iconLimitCount"*/);
    sub_1C713B0(&StringLiteral_23977/*"svtCommonFlag"*/);
    sub_1C713B0(&StringLiteral_21027/*"isPush"*/);
    sub_1C713B0(&StringLiteral_20366/*"imageLimitCount"*/);
    sub_1C713B0(&StringLiteral_24710/*"userSvtId"*/);
    sub_1C713B0(&StringLiteral_23064/*"randomLimitCount"*/);
    sub_1C713B0(&StringLiteral_22843/*"portraitLimitCount"*/);
    sub_1C713B0(&StringLiteral_18689/*"dispLimitCount"*/);
    sub_1C713B0(&StringLiteral_17113/*"battleVoice"*/);
    sub_1C713B0(&StringLiteral_21010/*"isLock"*/);
    sub_1C713B0(&StringLiteral_20988/*"isChoice"*/);
    sub_1C713B0(&StringLiteral_23065/*"randomLimitCountSupport"*/);
    sub_1C713B0(&StringLiteral_18183/*"commandCardLimitCount"*/);
    sub_1C713B0(&StringLiteral_21000/*"isFavorite"*/);
    byte_4CC8EB5 = 1;
  }
  RequestBase__addField_44514616((RequestBase_o *)this, (System_String_o *)StringLiteral_24710/*"userSvtId"*/, targetUsrSVtId, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20366/*"imageLimitCount"*/, imageLimitCount, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18689/*"dispLimitCount"*/, dispLimitCount, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18183/*"commandCardLimitCount"*/, commandCardLimitCount, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20201/*"iconLimitCount"*/, iconLimitCount, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22843/*"portraitLimitCount"*/, portraitLimitCount, 0);
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _40699620 = TutorialFlag__Get_40699620(106, 0);
  v25 = StringLiteral_21000/*"isFavorite"*/;
  if ( !_40699620 )
  {
    RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21000/*"isFavorite"*/, -1, 0);
    if ( this )
      goto LABEL_9;
LABEL_10:
    sub_1C71608(_40699620, v25);
  }
  if ( !this )
    goto LABEL_10;
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21000/*"isFavorite"*/, isFavorite, 0);
LABEL_9:
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21010/*"isLock"*/, isLock, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20988/*"isChoice"*/, isChoice, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23977/*"svtCommonFlag"*/, commonFlag, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17113/*"battleVoice"*/, battleVoice, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23064/*"randomLimitCount"*/, randomSettingOwn, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23065/*"randomLimitCountSupport"*/, randomSettingSupport, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21329/*"limitCountSupport"*/, limitCountSupport, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21027/*"isPush"*/, isPush, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


System_String_o *CardFavoriteRequest__getMockData(CardFavoriteRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4CC8EB4 & 1) == 0 )
  {
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC8EB4 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_1/*""*/, 0);
}


System_String_o *CardFavoriteRequest__getURL(CardFavoriteRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4CC8EB3 & 1) == 0 )
  {
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&StringLiteral_17778/*"card/favorite"*/);
    byte_4CC8EB3 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_64031724(BaseUrl, (System_String_o *)StringLiteral_17778/*"card/favorite"*/, 0);
}


void CardFavoriteRequest__requestCompleted(
        CardFavoriteRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  __int64 *v6; // x8

  if ( (byte_4CC8EB6 & 1) == 0 )
  {
    sub_1C713B0(&ResponseCommandKind_TypeInfo);
    sub_1C713B0(&StringLiteral_22486/*"ok"*/);
    sub_1C713B0(&StringLiteral_22316/*"ng"*/);
    byte_4CC8EB6 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(34, responseList, 0);
  if ( v5 && ResponseData__checkError_44515240(v5, 0) )
    v6 = &StringLiteral_22486/*"ok"*/;
  else
    v6 = &StringLiteral_22316/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v6, 0);
}