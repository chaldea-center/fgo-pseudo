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
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  _BOOL8 _28617756; // x0
  __int64 v40; // x1

  if ( (byte_418A0AA & 1) == 0 )
  {
    sub_B2C35C(&TutorialFlag_TypeInfo, targetUsrSVtId);
    sub_B2C35C(&StringLiteral_20223/*"limitCountSupport"*/, v24);
    sub_B2C35C(&StringLiteral_19274/*"iconLimitCount"*/, v25);
    sub_B2C35C(&StringLiteral_22463/*"svtCommonFlag"*/, v26);
    sub_B2C35C(&StringLiteral_19949/*"isPush"*/, v27);
    sub_B2C35C(&StringLiteral_19415/*"imageLimitCount"*/, v28);
    sub_B2C35C(&StringLiteral_23066/*"userSvtId"*/, v29);
    sub_B2C35C(&StringLiteral_21694/*"randomLimitCount"*/, v30);
    sub_B2C35C(&StringLiteral_21507/*"portraitLimitCount"*/, v31);
    sub_B2C35C(&StringLiteral_18029/*"dispLimitCount"*/, v32);
    sub_B2C35C(&StringLiteral_16658/*"battleVoice"*/, v33);
    sub_B2C35C(&StringLiteral_19939/*"isLock"*/, v34);
    sub_B2C35C(&StringLiteral_19925/*"isChoice"*/, v35);
    sub_B2C35C(&StringLiteral_21695/*"randomLimitCountSupport"*/, v36);
    sub_B2C35C(&StringLiteral_17592/*"commandCardLimitCount"*/, v37);
    sub_B2C35C(&StringLiteral_19933/*"isFavorite"*/, v38);
    byte_418A0AA = 1;
  }
  RequestBase__addField_31051460((RequestBase_o *)this, (System_String_o *)StringLiteral_23066/*"userSvtId"*/, targetUsrSVtId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19415/*"imageLimitCount"*/, imageLimitCount, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18029/*"dispLimitCount"*/, dispLimitCount, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17592/*"commandCardLimitCount"*/, commandCardLimitCount, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19274/*"iconLimitCount"*/, iconLimitCount, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21507/*"portraitLimitCount"*/, portraitLimitCount, 0LL);
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _28617756 = TutorialFlag__Get_28617756(106, 0LL);
  v40 = StringLiteral_19933/*"isFavorite"*/;
  if ( !_28617756 )
  {
    RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19933/*"isFavorite"*/, -1, 0LL);
    if ( this )
      goto LABEL_10;
LABEL_11:
    sub_B2C434(_28617756, v40);
  }
  if ( !this )
    goto LABEL_11;
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19933/*"isFavorite"*/, isFavorite, 0LL);
LABEL_10:
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19939/*"isLock"*/, isLock, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19925/*"isChoice"*/, isChoice, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22463/*"svtCommonFlag"*/, commonFlag, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_16658/*"battleVoice"*/, battleVoice, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21694/*"randomLimitCount"*/, randomSettingOwn, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21695/*"randomLimitCountSupport"*/, randomSettingSupport, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20223/*"limitCountSupport"*/, limitCountSupport, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19949/*"isPush"*/, isPush, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall CardFavoriteRequest__getMockData(CardFavoriteRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_418A0A9 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_1/*""*/, v2);
    byte_418A0A9 = 1;
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
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_418A0A8 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_17222/*"card/favorite"*/, v2);
    byte_418A0A8 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44305532(BaseUrl, (System_String_o *)StringLiteral_17222/*"card/favorite"*/, 0LL);
}


void __fastcall CardFavoriteRequest__requestCompleted(
        CardFavoriteRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  __int64 *v8; // x8

  if ( (byte_418A0AB & 1) == 0 )
  {
    sub_B2C35C(&ResponseCommandKind_TypeInfo, responseList);
    sub_B2C35C(&StringLiteral_21218/*"ok"*/, v5);
    sub_B2C35C(&StringLiteral_21068/*"ng"*/, v6);
    byte_418A0AB = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v7 = ResponseCommandKind__SearchData(34, responseList, 0LL);
  if ( v7 && ResponseData__checkError_31019724(v7, 0LL) )
    v8 = &StringLiteral_21218/*"ok"*/;
  else
    v8 = &StringLiteral_21068/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v8, 0LL);
}