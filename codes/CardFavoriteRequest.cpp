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
  _BOOL8 _39449392; // x0
  __int64 v40; // x1

  if ( (byte_4B46478 & 1) == 0 )
  {
    sub_1BDB878(&TutorialFlag_TypeInfo, targetUsrSVtId);
    sub_1BDB878(&StringLiteral_21245/*"limitCountSupport"*/, v24);
    sub_1BDB878(&StringLiteral_20143/*"iconLimitCount"*/, v25);
    sub_1BDB878(&StringLiteral_23894/*"svtCommonFlag"*/, v26);
    sub_1BDB878(&StringLiteral_20956/*"isPush"*/, v27);
    sub_1BDB878(&StringLiteral_20304/*"imageLimitCount"*/, v28);
    sub_1BDB878(&StringLiteral_24647/*"userSvtId"*/, v29);
    sub_1BDB878(&StringLiteral_22974/*"randomLimitCount"*/, v30);
    sub_1BDB878(&StringLiteral_22754/*"portraitLimitCount"*/, v31);
    sub_1BDB878(&StringLiteral_18655/*"dispLimitCount"*/, v32);
    sub_1BDB878(&StringLiteral_17107/*"battleVoice"*/, v33);
    sub_1BDB878(&StringLiteral_20940/*"isLock"*/, v34);
    sub_1BDB878(&StringLiteral_20919/*"isChoice"*/, v35);
    sub_1BDB878(&StringLiteral_22975/*"randomLimitCountSupport"*/, v36);
    sub_1BDB878(&StringLiteral_18158/*"commandCardLimitCount"*/, v37);
    sub_1BDB878(&StringLiteral_20930/*"isFavorite"*/, v38);
    byte_4B46478 = 1;
  }
  RequestBase__addField_43153704((RequestBase_o *)this, (System_String_o *)StringLiteral_24647/*"userSvtId"*/, targetUsrSVtId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20304/*"imageLimitCount"*/, imageLimitCount, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18655/*"dispLimitCount"*/, dispLimitCount, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18158/*"commandCardLimitCount"*/, commandCardLimitCount, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20143/*"iconLimitCount"*/, iconLimitCount, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22754/*"portraitLimitCount"*/, portraitLimitCount, 0LL);
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _39449392 = TutorialFlag__Get_39449392(106, 0LL);
  v40 = StringLiteral_20930/*"isFavorite"*/;
  if ( !_39449392 )
  {
    RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20930/*"isFavorite"*/, -1, 0LL);
    if ( this )
      goto LABEL_9;
LABEL_10:
    sub_1BDBAD4(_39449392, v40);
  }
  if ( !this )
    goto LABEL_10;
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20930/*"isFavorite"*/, isFavorite, 0LL);
LABEL_9:
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20940/*"isLock"*/, isLock, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20919/*"isChoice"*/, isChoice, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23894/*"svtCommonFlag"*/, commonFlag, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17107/*"battleVoice"*/, battleVoice, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22974/*"randomLimitCount"*/, randomSettingOwn, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22975/*"randomLimitCountSupport"*/, randomSettingSupport, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21245/*"limitCountSupport"*/, limitCountSupport, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20956/*"isPush"*/, isPush, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall CardFavoriteRequest__getMockData(CardFavoriteRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_4B46477 & 1) == 0 )
  {
    sub_1BDB878(&NetworkManager_TypeInfo, method);
    sub_1BDB878(&StringLiteral_1/*""*/, v2);
    byte_4B46477 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_1/*""*/, 0LL);
}


System_String_o *__fastcall CardFavoriteRequest__getURL(CardFavoriteRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4B46476 & 1) == 0 )
  {
    sub_1BDB878(&NetworkManager_TypeInfo, method);
    sub_1BDB878(&StringLiteral_17761/*"card/favorite"*/, v2);
    byte_4B46476 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62572260(BaseUrl, (System_String_o *)StringLiteral_17761/*"card/favorite"*/, 0LL);
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

  if ( (byte_4B46479 & 1) == 0 )
  {
    sub_1BDB878(&ResponseCommandKind_TypeInfo, responseList);
    sub_1BDB878(&StringLiteral_22401/*"ok"*/, v5);
    sub_1BDB878(&StringLiteral_22233/*"ng"*/, v6);
    byte_4B46479 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(34, responseList, 0LL);
  if ( v7 && ResponseData__checkError_43151432(v7, 0LL) )
    v8 = &StringLiteral_22401/*"ok"*/;
  else
    v8 = &StringLiteral_22233/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v8, 0LL);
}