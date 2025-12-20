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
  _BOOL8 _41176064; // x0
  __int64 v25; // x1

  if ( (byte_4D2E356 & 1) == 0 )
  {
    sub_1C94098(&TutorialFlag_TypeInfo);
    sub_1C94098(&StringLiteral_21433/*"limitCountSupport"*/);
    sub_1C94098(&StringLiteral_20294/*"iconLimitCount"*/);
    sub_1C94098(&StringLiteral_24096/*"svtCommonFlag"*/);
    sub_1C94098(&StringLiteral_21131/*"isPush"*/);
    sub_1C94098(&StringLiteral_20461/*"imageLimitCount"*/);
    sub_1C94098(&StringLiteral_24832/*"userSvtId"*/);
    sub_1C94098(&StringLiteral_23178/*"randomLimitCount"*/);
    sub_1C94098(&StringLiteral_22956/*"portraitLimitCount"*/);
    sub_1C94098(&StringLiteral_18757/*"dispLimitCount"*/);
    sub_1C94098(&StringLiteral_17174/*"battleVoice"*/);
    sub_1C94098(&StringLiteral_21113/*"isLock"*/);
    sub_1C94098(&StringLiteral_21088/*"isChoice"*/);
    sub_1C94098(&StringLiteral_23179/*"randomLimitCountSupport"*/);
    sub_1C94098(&StringLiteral_18249/*"commandCardLimitCount"*/);
    sub_1C94098(&StringLiteral_21102/*"isFavorite"*/);
    byte_4D2E356 = 1;
  }
  RequestBase__addField_45013228((RequestBase_o *)this, (System_String_o *)StringLiteral_24832/*"userSvtId"*/, targetUsrSVtId, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20461/*"imageLimitCount"*/, imageLimitCount, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18757/*"dispLimitCount"*/, dispLimitCount, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18249/*"commandCardLimitCount"*/, commandCardLimitCount, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20294/*"iconLimitCount"*/, iconLimitCount, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22956/*"portraitLimitCount"*/, portraitLimitCount, 0);
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _41176064 = TutorialFlag__Get_41176064(106, 0);
  v25 = StringLiteral_21102/*"isFavorite"*/;
  if ( !_41176064 )
  {
    RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21102/*"isFavorite"*/, -1, 0);
    if ( this )
      goto LABEL_9;
LABEL_10:
    sub_1C942F0(_41176064, v25);
  }
  if ( !this )
    goto LABEL_10;
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21102/*"isFavorite"*/, isFavorite, 0);
LABEL_9:
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21113/*"isLock"*/, isLock, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21088/*"isChoice"*/, isChoice, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_24096/*"svtCommonFlag"*/, commonFlag, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17174/*"battleVoice"*/, battleVoice, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23178/*"randomLimitCount"*/, randomSettingOwn, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23179/*"randomLimitCountSupport"*/, randomSettingSupport, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21433/*"limitCountSupport"*/, limitCountSupport, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21131/*"isPush"*/, isPush, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


System_String_o *CardFavoriteRequest__getMockData(CardFavoriteRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4D2E355 & 1) == 0 )
  {
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2E355 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_1/*""*/, 0);
}


System_String_o *CardFavoriteRequest__getURL(CardFavoriteRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4D2E354 & 1) == 0 )
  {
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&StringLiteral_17844/*"card/favorite"*/);
    byte_4D2E354 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_64417744(BaseUrl, (System_String_o *)StringLiteral_17844/*"card/favorite"*/, 0);
}


void CardFavoriteRequest__requestCompleted(
        CardFavoriteRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  __int64 *v6; // x8

  if ( (byte_4D2E357 & 1) == 0 )
  {
    sub_1C94098(&ResponseCommandKind_TypeInfo);
    sub_1C94098(&StringLiteral_22594/*"ok"*/);
    sub_1C94098(&StringLiteral_22424/*"ng"*/);
    byte_4D2E357 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(34, responseList, 0);
  if ( v5 && ResponseData__checkError_45012660(v5, 0) )
    v6 = &StringLiteral_22594/*"ok"*/;
  else
    v6 = &StringLiteral_22424/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v6, 0);
}