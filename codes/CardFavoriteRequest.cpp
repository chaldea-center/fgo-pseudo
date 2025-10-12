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
  _BOOL8 _40328320; // x0

  if ( (byte_4C3944D & 1) == 0 )
  {
    sub_1C32C20(&TutorialFlag_TypeInfo);
    sub_1C32C20(&StringLiteral_21229/*"limitCountSupport"*/);
    sub_1C32C20(&StringLiteral_20122/*"iconLimitCount"*/);
    sub_1C32C20(&StringLiteral_23859/*"svtCommonFlag"*/);
    sub_1C32C20(&StringLiteral_20944/*"isPush"*/);
    sub_1C32C20(&StringLiteral_20285/*"imageLimitCount"*/);
    sub_1C32C20(&StringLiteral_24582/*"userSvtId"*/);
    sub_1C32C20(&StringLiteral_22949/*"randomLimitCount"*/);
    sub_1C32C20(&StringLiteral_22732/*"portraitLimitCount"*/);
    sub_1C32C20(&StringLiteral_18643/*"dispLimitCount"*/);
    sub_1C32C20(&StringLiteral_17091/*"battleVoice"*/);
    sub_1C32C20(&StringLiteral_20928/*"isLock"*/);
    sub_1C32C20(&StringLiteral_20906/*"isChoice"*/);
    sub_1C32C20(&StringLiteral_22950/*"randomLimitCountSupport"*/);
    sub_1C32C20(&StringLiteral_18149/*"commandCardLimitCount"*/);
    sub_1C32C20(&StringLiteral_20918/*"isFavorite"*/);
    byte_4C3944D = 1;
  }
  RequestBase__addField_44144740((RequestBase_o *)this, (System_String_o *)StringLiteral_24582/*"userSvtId"*/, targetUsrSVtId, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20285/*"imageLimitCount"*/, imageLimitCount, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18643/*"dispLimitCount"*/, dispLimitCount, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18149/*"commandCardLimitCount"*/, commandCardLimitCount, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20122/*"iconLimitCount"*/, iconLimitCount, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22732/*"portraitLimitCount"*/, portraitLimitCount, 0);
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _40328320 = TutorialFlag__Get_40328320(106, 0);
  if ( !_40328320 )
  {
    RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20918/*"isFavorite"*/, -1, 0);
    if ( this )
      goto LABEL_9;
LABEL_10:
    sub_1C32E7C(_40328320);
  }
  if ( !this )
    goto LABEL_10;
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20918/*"isFavorite"*/, isFavorite, 0);
LABEL_9:
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20928/*"isLock"*/, isLock, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20906/*"isChoice"*/, isChoice, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23859/*"svtCommonFlag"*/, commonFlag, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17091/*"battleVoice"*/, battleVoice, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22949/*"randomLimitCount"*/, randomSettingOwn, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22950/*"randomLimitCountSupport"*/, randomSettingSupport, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21229/*"limitCountSupport"*/, limitCountSupport, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20944/*"isPush"*/, isPush, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


System_String_o *CardFavoriteRequest__getMockData(CardFavoriteRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4C3944C & 1) == 0 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C3944C = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_1/*""*/, 0);
}


System_String_o *CardFavoriteRequest__getURL(CardFavoriteRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4C3944B & 1) == 0 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&StringLiteral_17749/*"card/favorite"*/);
    byte_4C3944B = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_63518544(BaseUrl, (System_String_o *)StringLiteral_17749/*"card/favorite"*/, 0);
}


void CardFavoriteRequest__requestCompleted(
        CardFavoriteRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  __int64 *v6; // x8

  if ( (byte_4C3944E & 1) == 0 )
  {
    sub_1C32C20(&ResponseCommandKind_TypeInfo);
    sub_1C32C20(&StringLiteral_22379/*"ok"*/);
    sub_1C32C20(&StringLiteral_22212/*"ng"*/);
    byte_4C3944E = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(34, responseList, 0);
  if ( v5 && ResponseData__checkError_44140424(v5, 0) )
    v6 = &StringLiteral_22379/*"ok"*/;
  else
    v6 = &StringLiteral_22212/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v6, 0);
}