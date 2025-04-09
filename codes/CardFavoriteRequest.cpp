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
  _BOOL8 _38224448; // x0
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

  if ( (byte_49BC7AA & 1) == 0 )
  {
    sub_1B4CF90(&TutorialFlag_TypeInfo, targetUsrSVtId);
    sub_1B4CF90(&StringLiteral_20812/*"limitCountSupport"*/, v24);
    sub_1B4CF90(&StringLiteral_19774/*"iconLimitCount"*/, v25);
    sub_1B4CF90(&StringLiteral_23419/*"svtCommonFlag"*/, v26);
    sub_1B4CF90(&StringLiteral_20525/*"isPush"*/, v27);
    sub_1B4CF90(&StringLiteral_19933/*"imageLimitCount"*/, v28);
    sub_1B4CF90(&StringLiteral_24167/*"userSvtId"*/, v29);
    sub_1B4CF90(&StringLiteral_22504/*"randomLimitCount"*/, v30);
    sub_1B4CF90(&StringLiteral_22289/*"portraitLimitCount"*/, v31);
    sub_1B4CF90(&StringLiteral_18335/*"dispLimitCount"*/, v32);
    sub_1B4CF90(&StringLiteral_16807/*"battleVoice"*/, v33);
    sub_1B4CF90(&StringLiteral_20511/*"isLock"*/, v34);
    sub_1B4CF90(&StringLiteral_20493/*"isChoice"*/, v35);
    sub_1B4CF90(&StringLiteral_22505/*"randomLimitCountSupport"*/, v36);
    sub_1B4CF90(&StringLiteral_17843/*"commandCardLimitCount"*/, v37);
    sub_1B4CF90(&StringLiteral_20504/*"isFavorite"*/, v38);
    byte_49BC7AA = 1;
  }
  RequestBase__addField_41754736(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_24167/*"userSvtId"*/,
    targetUsrSVtId,
    *(const MethodInfo **)&dispLimitCount);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19933/*"imageLimitCount"*/, imageLimitCount, v39);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18335/*"dispLimitCount"*/, dispLimitCount, v40);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17843/*"commandCardLimitCount"*/, commandCardLimitCount, v41);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19774/*"iconLimitCount"*/, iconLimitCount, v42);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22289/*"portraitLimitCount"*/, portraitLimitCount, v43);
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _38224448 = TutorialFlag__Get_38224448(106, 0LL);
  v46 = StringLiteral_20504/*"isFavorite"*/;
  if ( !_38224448 )
  {
    RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20504/*"isFavorite"*/, -1, v45);
    if ( this )
      goto LABEL_9;
LABEL_10:
    sub_1B4D1EC(_38224448, v46);
  }
  if ( !this )
    goto LABEL_10;
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20504/*"isFavorite"*/, isFavorite, v45);
LABEL_9:
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20511/*"isLock"*/, isLock, v47);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20493/*"isChoice"*/, isChoice, v48);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23419/*"svtCommonFlag"*/, commonFlag, v49);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_16807/*"battleVoice"*/, battleVoice, v50);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22504/*"randomLimitCount"*/, randomSettingOwn, v51);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22505/*"randomLimitCountSupport"*/, randomSettingSupport, v52);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20812/*"limitCountSupport"*/, limitCountSupport, v53);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20525/*"isPush"*/, isPush, v54);
  RequestBase__beginRequest((RequestBase_o *)this, v55);
}


System_String_o *__fastcall CardFavoriteRequest__getMockData(CardFavoriteRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_49BC7A9 & 1) == 0 )
  {
    sub_1B4CF90(&NetworkManager_TypeInfo, method);
    sub_1B4CF90(&StringLiteral_1/*""*/, v2);
    byte_49BC7A9 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_1/*""*/, 0LL);
}


System_String_o *__fastcall CardFavoriteRequest__getURL(CardFavoriteRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_49BC7A8 & 1) == 0 )
  {
    sub_1B4CF90(&NetworkManager_TypeInfo, method);
    sub_1B4CF90(&StringLiteral_17448/*"card/favorite"*/, v2);
    byte_49BC7A8 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61093468(BaseUrl, (System_String_o *)StringLiteral_17448/*"card/favorite"*/, 0LL);
}


void __fastcall CardFavoriteRequest__requestCompleted(
        CardFavoriteRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v9; // x9

  if ( (byte_49BC7AB & 1) == 0 )
  {
    sub_1B4CF90(&ResponseCommandKind_TypeInfo, responseList);
    sub_1B4CF90(&StringLiteral_21947/*"ok"*/, v5);
    sub_1B4CF90(&StringLiteral_21779/*"ng"*/, v6);
    byte_49BC7AB = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(34, responseList, 0LL);
  if ( v7 && ResponseData__checkError_41839176(v7, 0LL) )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v9 = &StringLiteral_21947/*"ok"*/;
  }
  else
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v9 = &StringLiteral_21779/*"ng"*/;
  }
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
    CallBack->fields.original_method_info,
    *v9,
    *(_QWORD *)&CallBack->fields.extra_arg);
}