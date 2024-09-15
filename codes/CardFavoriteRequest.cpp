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
  const MethodInfo *v39; // x3
  const MethodInfo *v40; // x3
  const MethodInfo *v41; // x3
  const MethodInfo *v42; // x3
  const MethodInfo *v43; // x3
  _BOOL8 _37510088; // x0
  const MethodInfo *v45; // x3
  __int64 v46; // x1
  const MethodInfo *v47; // x3
  const MethodInfo *v48; // x3
  const MethodInfo *v49; // x3
  const MethodInfo *v50; // x3
  const MethodInfo *v51; // x3
  const MethodInfo *v52; // x3
  const MethodInfo *v53; // x3
  const MethodInfo *v54; // x3
  const MethodInfo *v55; // x1

  if ( (byte_4A2F738 & 1) == 0 )
  {
    sub_1B761C0(&TutorialFlag_TypeInfo, targetUsrSVtId);
    sub_1B761C0(&StringLiteral_21097/*"limitCountSupport"*/, v24);
    sub_1B761C0(&StringLiteral_20076/*"iconLimitCount"*/, v25);
    sub_1B761C0(&StringLiteral_23690/*"svtCommonFlag"*/, v26);
    sub_1B761C0(&StringLiteral_20803/*"isPush"*/, v27);
    sub_1B761C0(&StringLiteral_20229/*"imageLimitCount"*/, v28);
    sub_1B761C0(&StringLiteral_24440/*"userSvtId"*/, v29);
    sub_1B761C0(&StringLiteral_22766/*"randomLimitCount"*/, v30);
    sub_1B761C0(&StringLiteral_22559/*"portraitLimitCount"*/, v31);
    sub_1B761C0(&StringLiteral_18633/*"dispLimitCount"*/, v32);
    sub_1B761C0(&StringLiteral_17117/*"battleVoice"*/, v33);
    sub_1B761C0(&StringLiteral_20792/*"isLock"*/, v34);
    sub_1B761C0(&StringLiteral_20776/*"isChoice"*/, v35);
    sub_1B761C0(&StringLiteral_22767/*"randomLimitCountSupport"*/, v36);
    sub_1B761C0(&StringLiteral_18141/*"commandCardLimitCount"*/, v37);
    sub_1B761C0(&StringLiteral_20786/*"isFavorite"*/, v38);
    byte_4A2F738 = 1;
  }
  RequestBase__addField_40947456(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_24440/*"userSvtId"*/,
    targetUsrSVtId,
    *(const MethodInfo **)&dispLimitCount);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20229/*"imageLimitCount"*/, imageLimitCount, v39);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18633/*"dispLimitCount"*/, dispLimitCount, v40);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18141/*"commandCardLimitCount"*/, commandCardLimitCount, v41);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20076/*"iconLimitCount"*/, iconLimitCount, v42);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22559/*"portraitLimitCount"*/, portraitLimitCount, v43);
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _37510088 = TutorialFlag__Get_37510088(106, 0LL);
  v46 = StringLiteral_20786/*"isFavorite"*/;
  if ( !_37510088 )
  {
    RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20786/*"isFavorite"*/, -1, v45);
    if ( this )
      goto LABEL_9;
LABEL_10:
    sub_1B7641C(_37510088, v46);
  }
  if ( !this )
    goto LABEL_10;
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20786/*"isFavorite"*/, isFavorite, v45);
LABEL_9:
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20792/*"isLock"*/, isLock, v47);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20776/*"isChoice"*/, isChoice, v48);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23690/*"svtCommonFlag"*/, commonFlag, v49);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17117/*"battleVoice"*/, battleVoice, v50);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22766/*"randomLimitCount"*/, randomSettingOwn, v51);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22767/*"randomLimitCountSupport"*/, randomSettingSupport, v52);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21097/*"limitCountSupport"*/, limitCountSupport, v53);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20803/*"isPush"*/, isPush, v54);
  RequestBase__beginRequest((RequestBase_o *)this, v55);
}


System_String_o *__fastcall CardFavoriteRequest__getMockData(CardFavoriteRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_4A2F737 & 1) == 0 )
  {
    sub_1B761C0(&NetworkManager_TypeInfo, method);
    sub_1B761C0(&StringLiteral_1/*""*/, v2);
    byte_4A2F737 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_1/*""*/, 0LL);
}


System_String_o *__fastcall CardFavoriteRequest__getURL(CardFavoriteRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4A2F736 & 1) == 0 )
  {
    sub_1B761C0(&NetworkManager_TypeInfo, method);
    sub_1B761C0(&StringLiteral_17747/*"card/favorite"*/, v2);
    byte_4A2F736 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61535060(BaseUrl, (System_String_o *)StringLiteral_17747/*"card/favorite"*/, 0LL);
}


void __fastcall CardFavoriteRequest__requestCompleted(
        CardFavoriteRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  const MethodInfo *v8; // x2
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v10; // x9

  if ( (byte_4A2F739 & 1) == 0 )
  {
    sub_1B761C0(&ResponseCommandKind_TypeInfo, responseList);
    sub_1B761C0(&StringLiteral_22216/*"ok"*/, v5);
    sub_1B761C0(&StringLiteral_22046/*"ng"*/, v6);
    byte_4A2F739 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(34, responseList, 0LL);
  if ( v7 && ResponseData__checkError(v7, v7->fields.resCode, v8) )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v10 = &StringLiteral_22216/*"ok"*/;
  }
  else
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v10 = &StringLiteral_22046/*"ng"*/;
  }
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
    CallBack->fields.original_method_info,
    *v10,
    *(_QWORD *)&CallBack->fields.extra_arg);
}