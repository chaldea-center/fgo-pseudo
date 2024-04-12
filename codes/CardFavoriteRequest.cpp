void __fastcall CardFavoriteRequest___ctor(CardFavoriteRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall CardFavoriteRequest__beginRequest(
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
  _BOOL8 _29217932; // x0
  __int64 v25; // x1

  if ( (byte_42B169A & 1) == 0 )
  {
    sub_B52984(&TutorialFlag_TypeInfo);
    sub_B52984(&StringLiteral_20376/*"limitCountSupport"*/);
    sub_B52984(&StringLiteral_19420/*"iconLimitCount"*/);
    sub_B52984(&StringLiteral_22652/*"svtCommonFlag"*/);
    sub_B52984(&StringLiteral_20099/*"isPush"*/);
    sub_B52984(&StringLiteral_19562/*"imageLimitCount"*/);
    sub_B52984(&StringLiteral_23257/*"userSvtId"*/);
    sub_B52984(&StringLiteral_21874/*"randomLimitCount"*/);
    sub_B52984(&StringLiteral_21683/*"portraitLimitCount"*/);
    sub_B52984(&StringLiteral_18162/*"dispLimitCount"*/);
    sub_B52984(&StringLiteral_16773/*"battleVoice"*/);
    sub_B52984(&StringLiteral_20089/*"isLock"*/);
    sub_B52984(&StringLiteral_20074/*"isChoice"*/);
    sub_B52984(&StringLiteral_21875/*"randomLimitCountSupport"*/);
    sub_B52984(&StringLiteral_17717/*"commandCardLimitCount"*/);
    sub_B52984(&StringLiteral_20083/*"isFavorite"*/);
    byte_42B169A = 1;
  }
  RequestBase__addField_32020452((RequestBase_o *)this, (System_String_o *)StringLiteral_23257/*"userSvtId"*/, targetUsrSVtId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19562/*"imageLimitCount"*/, imageLimitCount, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18162/*"dispLimitCount"*/, dispLimitCount, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17717/*"commandCardLimitCount"*/, commandCardLimitCount, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19420/*"iconLimitCount"*/, iconLimitCount, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21683/*"portraitLimitCount"*/, portraitLimitCount, 0LL);
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _29217932 = TutorialFlag__Get_29217932(106, 0LL);
  v25 = StringLiteral_20083/*"isFavorite"*/;
  if ( !_29217932 )
  {
    RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20083/*"isFavorite"*/, -1, 0LL);
    if ( this )
      goto LABEL_10;
LABEL_11:
    sub_B52A5C(_29217932, v25);
  }
  if ( !this )
    goto LABEL_11;
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20083/*"isFavorite"*/, isFavorite, 0LL);
LABEL_10:
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20089/*"isLock"*/, isLock, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20074/*"isChoice"*/, isChoice, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22652/*"svtCommonFlag"*/, commonFlag, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_16773/*"battleVoice"*/, battleVoice, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21874/*"randomLimitCount"*/, randomSettingOwn, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21875/*"randomLimitCountSupport"*/, randomSettingSupport, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20376/*"limitCountSupport"*/, limitCountSupport, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20099/*"isPush"*/, isPush, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall CardFavoriteRequest__getMockData(CardFavoriteRequest_o *this, const MethodInfo *method)
{
  if ( (byte_42B1699 & 1) == 0 )
  {
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B1699 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_1/*""*/, 0LL);
}


System_String_o *__fastcall CardFavoriteRequest__getURL(CardFavoriteRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_42B1698 & 1) == 0 )
  {
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&StringLiteral_17341/*"card/favorite"*/);
    byte_42B1698 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44568316(BaseUrl, (System_String_o *)StringLiteral_17341/*"card/favorite"*/, 0LL);
}


void __fastcall CardFavoriteRequest__requestCompleted(
        CardFavoriteRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  __int64 *v6; // x8

  if ( (byte_42B169B & 1) == 0 )
  {
    sub_B52984(&ResponseCommandKind_TypeInfo);
    sub_B52984(&StringLiteral_21388/*"ok"*/);
    sub_B52984(&StringLiteral_21239/*"ng"*/);
    byte_42B169B = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v5 = ResponseCommandKind__SearchData(34, responseList, 0LL);
  if ( v5 && ResponseData__checkError_29724768(v5, 0LL) )
    v6 = &StringLiteral_21388/*"ok"*/;
  else
    v6 = &StringLiteral_21239/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v6, 0LL);
}