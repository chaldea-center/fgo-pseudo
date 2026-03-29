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
  _BOOL8 _41140656; // x0
  __int64 v25; // x1

  if ( (byte_4D32452 & 1) == 0 )
  {
    sub_1C93AD4(&TutorialFlag_TypeInfo);
    sub_1C93AD4(&StringLiteral_21494/*"limitCountSupport"*/);
    sub_1C93AD4(&StringLiteral_20348/*"iconLimitCount"*/);
    sub_1C93AD4(&StringLiteral_24161/*"svtCommonFlag"*/);
    sub_1C93AD4(&StringLiteral_21193/*"isPush"*/);
    sub_1C93AD4(&StringLiteral_20516/*"imageLimitCount"*/);
    sub_1C93AD4(&StringLiteral_24902/*"userSvtId"*/);
    sub_1C93AD4(&StringLiteral_23238/*"randomLimitCount"*/);
    sub_1C93AD4(&StringLiteral_23016/*"portraitLimitCount"*/);
    sub_1C93AD4(&StringLiteral_18808/*"dispLimitCount"*/);
    sub_1C93AD4(&StringLiteral_17219/*"battleVoice"*/);
    sub_1C93AD4(&StringLiteral_21171/*"isLock"*/);
    sub_1C93AD4(&StringLiteral_21144/*"isChoice"*/);
    sub_1C93AD4(&StringLiteral_23239/*"randomLimitCountSupport"*/);
    sub_1C93AD4(&StringLiteral_18299/*"commandCardLimitCount"*/);
    sub_1C93AD4(&StringLiteral_21160/*"isFavorite"*/);
    byte_4D32452 = 1;
  }
  RequestBase__addField_44911784((RequestBase_o *)this, (System_String_o *)StringLiteral_24902/*"userSvtId"*/, targetUsrSVtId, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20516/*"imageLimitCount"*/, imageLimitCount, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18808/*"dispLimitCount"*/, dispLimitCount, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18299/*"commandCardLimitCount"*/, commandCardLimitCount, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20348/*"iconLimitCount"*/, iconLimitCount, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23016/*"portraitLimitCount"*/, portraitLimitCount, 0);
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _41140656 = TutorialFlag__Get_41140656(106, 0);
  v25 = StringLiteral_21160/*"isFavorite"*/;
  if ( !_41140656 )
  {
    RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21160/*"isFavorite"*/, -1, 0);
    if ( this )
      goto LABEL_9;
LABEL_10:
    sub_1C93D2C(_41140656, v25);
  }
  if ( !this )
    goto LABEL_10;
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21160/*"isFavorite"*/, isFavorite, 0);
LABEL_9:
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21171/*"isLock"*/, isLock, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21144/*"isChoice"*/, isChoice, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_24161/*"svtCommonFlag"*/, commonFlag, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17219/*"battleVoice"*/, battleVoice, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23238/*"randomLimitCount"*/, randomSettingOwn, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23239/*"randomLimitCountSupport"*/, randomSettingSupport, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21494/*"limitCountSupport"*/, limitCountSupport, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21193/*"isPush"*/, isPush, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


System_String_o *CardFavoriteRequest__getMockData(CardFavoriteRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4D32451 & 1) == 0 )
  {
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D32451 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_1/*""*/, 0);
}


System_String_o *CardFavoriteRequest__getURL(CardFavoriteRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4D32450 & 1) == 0 )
  {
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_17894/*"card/favorite"*/);
    byte_4D32450 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_64425724(BaseUrl, (System_String_o *)StringLiteral_17894/*"card/favorite"*/, 0);
}


void CardFavoriteRequest__requestCompleted(
        CardFavoriteRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  __int64 *v6; // x8

  if ( (byte_4D32453 & 1) == 0 )
  {
    sub_1C93AD4(&ResponseCommandKind_TypeInfo);
    sub_1C93AD4(&StringLiteral_22655/*"ok"*/);
    sub_1C93AD4(&StringLiteral_22483/*"ng"*/);
    byte_4D32453 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(34, responseList, 0);
  if ( v5 && ResponseData__checkError_44908744(v5, 0) )
    v6 = &StringLiteral_22655/*"ok"*/;
  else
    v6 = &StringLiteral_22483/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v6, 0);
}