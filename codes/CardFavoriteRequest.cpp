// local variable allocation has failed, the output may be wrong!
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
  const MethodInfo *v24; // x3
  const MethodInfo *v25; // x3
  const MethodInfo *v26; // x3
  const MethodInfo *v27; // x3
  const MethodInfo *v28; // x3
  _BOOL8 _38930984; // x0
  const MethodInfo *v30; // x3
  __int64 v31; // x1
  const MethodInfo *v32; // x3
  const MethodInfo *v33; // x3
  const MethodInfo *v34; // x3
  const MethodInfo *v35; // x3
  const MethodInfo *v36; // x3
  const MethodInfo *v37; // x3
  const MethodInfo *v38; // x3
  const MethodInfo *v39; // x3
  const MethodInfo *v40; // x1

  if ( (byte_4BDDE0D & 1) == 0 )
  {
    sub_1C21E38(&TutorialFlag_TypeInfo);
    sub_1C21E38(&StringLiteral_21482/*"limitCountSupport"*/);
    sub_1C21E38(&StringLiteral_20431/*"iconLimitCount"*/);
    sub_1C21E38(&StringLiteral_24131/*"svtCommonFlag"*/);
    sub_1C21E38(&StringLiteral_21189/*"isPush"*/);
    sub_1C21E38(&StringLiteral_20592/*"imageLimitCount"*/);
    sub_1C21E38(&StringLiteral_24894/*"userSvtId"*/);
    sub_1C21E38(&StringLiteral_23190/*"randomLimitCount"*/);
    sub_1C21E38(&StringLiteral_22980/*"portraitLimitCount"*/);
    sub_1C21E38(&StringLiteral_18962/*"dispLimitCount"*/);
    sub_1C21E38(&StringLiteral_17411/*"battleVoice"*/);
    sub_1C21E38(&StringLiteral_21176/*"isLock"*/);
    sub_1C21E38(&StringLiteral_21159/*"isChoice"*/);
    sub_1C21E38(&StringLiteral_23191/*"randomLimitCountSupport"*/);
    sub_1C21E38(&StringLiteral_18456/*"commandCardLimitCount"*/);
    sub_1C21E38(&StringLiteral_21169/*"isFavorite"*/);
    byte_4BDDE0D = 1;
  }
  RequestBase__addField_42421084(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_24894/*"userSvtId"*/,
    targetUsrSVtId,
    *(const MethodInfo **)&dispLimitCount);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20592/*"imageLimitCount"*/, imageLimitCount, v24);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18962/*"dispLimitCount"*/, dispLimitCount, v25);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18456/*"commandCardLimitCount"*/, commandCardLimitCount, v26);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20431/*"iconLimitCount"*/, iconLimitCount, v27);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22980/*"portraitLimitCount"*/, portraitLimitCount, v28);
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _38930984 = TutorialFlag__Get_38930984(106, 0LL);
  v31 = StringLiteral_21169/*"isFavorite"*/;
  if ( !_38930984 )
  {
    RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21169/*"isFavorite"*/, -1, v30);
    if ( this )
      goto LABEL_9;
LABEL_10:
    sub_1C22094(_38930984, v31);
  }
  if ( !this )
    goto LABEL_10;
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21169/*"isFavorite"*/, isFavorite, v30);
LABEL_9:
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21176/*"isLock"*/, isLock, v32);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21159/*"isChoice"*/, isChoice, v33);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_24131/*"svtCommonFlag"*/, commonFlag, v34);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17411/*"battleVoice"*/, battleVoice, v35);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23190/*"randomLimitCount"*/, randomSettingOwn, v36);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23191/*"randomLimitCountSupport"*/, randomSettingSupport, v37);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21482/*"limitCountSupport"*/, limitCountSupport, v38);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21189/*"isPush"*/, isPush, v39);
  RequestBase__beginRequest((RequestBase_o *)this, v40);
}


System_String_o *__fastcall CardFavoriteRequest__getMockData(CardFavoriteRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4BDDE0C & 1) == 0 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDDE0C = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_1/*""*/, 0LL);
}


System_String_o *__fastcall CardFavoriteRequest__getURL(CardFavoriteRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4BDDE0B & 1) == 0 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&StringLiteral_18055/*"card/favorite"*/);
    byte_4BDDE0B = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_63115476(BaseUrl, (System_String_o *)StringLiteral_18055/*"card/favorite"*/, 0LL);
}


void __fastcall CardFavoriteRequest__requestCompleted(
        CardFavoriteRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v7; // x9

  if ( (byte_4BDDE0E & 1) == 0 )
  {
    sub_1C21E38(&ResponseCommandKind_TypeInfo);
    sub_1C21E38(&StringLiteral_22632/*"ok"*/);
    sub_1C21E38(&StringLiteral_22456/*"ng"*/);
    byte_4BDDE0E = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(34, responseList, 0LL);
  if ( v5 && ResponseData__checkError_42505456(v5, 0LL) )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v7 = &StringLiteral_22632/*"ok"*/;
  }
  else
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v7 = &StringLiteral_22456/*"ng"*/;
  }
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
    CallBack->fields.original_method_info,
    *v7,
    *(_QWORD *)&CallBack->fields.extra_arg);
}