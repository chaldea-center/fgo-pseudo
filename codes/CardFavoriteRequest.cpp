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
  _BOOL8 _29515752; // x0
  __int64 v25; // x1

  if ( (byte_438E3FE & 1) == 0 )
  {
    sub_B775C4(&TutorialFlag_TypeInfo);
    sub_B775C4(&StringLiteral_20634/*"limitCountSupport"*/);
    sub_B775C4(&StringLiteral_19666/*"iconLimitCount"*/);
    sub_B775C4(&StringLiteral_22939/*"svtCommonFlag"*/);
    sub_B775C4(&StringLiteral_20356/*"isPush"*/);
    sub_B775C4(&StringLiteral_19809/*"imageLimitCount"*/);
    sub_B775C4(&StringLiteral_23547/*"userSvtId"*/);
    sub_B775C4(&StringLiteral_22153/*"randomLimitCount"*/);
    sub_B775C4(&StringLiteral_21961/*"portraitLimitCount"*/);
    sub_B775C4(&StringLiteral_18391/*"dispLimitCount"*/);
    sub_B775C4(&StringLiteral_16989/*"battleVoice"*/);
    sub_B775C4(&StringLiteral_20346/*"isLock"*/);
    sub_B775C4(&StringLiteral_20331/*"isChoice"*/);
    sub_B775C4(&StringLiteral_22154/*"randomLimitCountSupport"*/);
    sub_B775C4(&StringLiteral_17946/*"commandCardLimitCount"*/);
    sub_B775C4(&StringLiteral_20340/*"isFavorite"*/);
    byte_438E3FE = 1;
  }
  RequestBase__addField_32564924((RequestBase_o *)this, (System_String_o *)StringLiteral_23547/*"userSvtId"*/, targetUsrSVtId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19809/*"imageLimitCount"*/, imageLimitCount, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18391/*"dispLimitCount"*/, dispLimitCount, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17946/*"commandCardLimitCount"*/, commandCardLimitCount, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19666/*"iconLimitCount"*/, iconLimitCount, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21961/*"portraitLimitCount"*/, portraitLimitCount, 0LL);
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _29515752 = TutorialFlag__Get_29515752(106, 0LL);
  v25 = StringLiteral_20340/*"isFavorite"*/;
  if ( !_29515752 )
  {
    RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20340/*"isFavorite"*/, -1, 0LL);
    if ( this )
      goto LABEL_10;
LABEL_11:
    sub_B7769C(_29515752, v25);
  }
  if ( !this )
    goto LABEL_11;
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20340/*"isFavorite"*/, isFavorite, 0LL);
LABEL_10:
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20346/*"isLock"*/, isLock, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20331/*"isChoice"*/, isChoice, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22939/*"svtCommonFlag"*/, commonFlag, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_16989/*"battleVoice"*/, battleVoice, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22153/*"randomLimitCount"*/, randomSettingOwn, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22154/*"randomLimitCountSupport"*/, randomSettingSupport, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20634/*"limitCountSupport"*/, limitCountSupport, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20356/*"isPush"*/, isPush, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall CardFavoriteRequest__getMockData(CardFavoriteRequest_o *this, const MethodInfo *method)
{
  if ( (byte_438E3FD & 1) == 0 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438E3FD = 1;
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

  if ( (byte_438E3FC & 1) == 0 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&StringLiteral_17565/*"card/favorite"*/);
    byte_438E3FC = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44901936(BaseUrl, (System_String_o *)StringLiteral_17565/*"card/favorite"*/, 0LL);
}


void __fastcall CardFavoriteRequest__requestCompleted(
        CardFavoriteRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  __int64 *v6; // x8

  if ( (byte_438E3FF & 1) == 0 )
  {
    sub_B775C4(&ResponseCommandKind_TypeInfo);
    sub_B775C4(&StringLiteral_21657/*"ok"*/);
    sub_B775C4(&StringLiteral_21504/*"ng"*/);
    byte_438E3FF = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v5 = ResponseCommandKind__SearchData(34, responseList, 0LL);
  if ( v5 && ResponseData__checkError_30128096(v5, 0LL) )
    v6 = &StringLiteral_21657/*"ok"*/;
  else
    v6 = &StringLiteral_21504/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v6, 0LL);
}