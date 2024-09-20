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
  _BOOL8 _37688364; // x0
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

  if ( (byte_4A5C96C & 1) == 0 )
  {
    sub_1B885B0(&TutorialFlag_TypeInfo);
    sub_1B885B0(&StringLiteral_21104/*"limitCountSupport"*/);
    sub_1B885B0(&StringLiteral_20082/*"iconLimitCount"*/);
    sub_1B885B0(&StringLiteral_23702/*"svtCommonFlag"*/);
    sub_1B885B0(&StringLiteral_20810/*"isPush"*/);
    sub_1B885B0(&StringLiteral_20236/*"imageLimitCount"*/);
    sub_1B885B0(&StringLiteral_24453/*"userSvtId"*/);
    sub_1B885B0(&StringLiteral_22776/*"randomLimitCount"*/);
    sub_1B885B0(&StringLiteral_22569/*"portraitLimitCount"*/);
    sub_1B885B0(&StringLiteral_18640/*"dispLimitCount"*/);
    sub_1B885B0(&StringLiteral_17123/*"battleVoice"*/);
    sub_1B885B0(&StringLiteral_20799/*"isLock"*/);
    sub_1B885B0(&StringLiteral_20783/*"isChoice"*/);
    sub_1B885B0(&StringLiteral_22777/*"randomLimitCountSupport"*/);
    sub_1B885B0(&StringLiteral_18147/*"commandCardLimitCount"*/);
    sub_1B885B0(&StringLiteral_20793/*"isFavorite"*/);
    byte_4A5C96C = 1;
  }
  RequestBase__addField_41133280(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_24453/*"userSvtId"*/,
    targetUsrSVtId,
    *(const MethodInfo **)&dispLimitCount);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20236/*"imageLimitCount"*/, imageLimitCount, v24);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18640/*"dispLimitCount"*/, dispLimitCount, v25);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18147/*"commandCardLimitCount"*/, commandCardLimitCount, v26);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20082/*"iconLimitCount"*/, iconLimitCount, v27);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22569/*"portraitLimitCount"*/, portraitLimitCount, v28);
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _37688364 = TutorialFlag__Get_37688364(106, 0LL);
  v31 = StringLiteral_20793/*"isFavorite"*/;
  if ( !_37688364 )
  {
    RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20793/*"isFavorite"*/, -1, v30);
    if ( this )
      goto LABEL_9;
LABEL_10:
    sub_1B8880C(_37688364, v31);
  }
  if ( !this )
    goto LABEL_10;
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20793/*"isFavorite"*/, isFavorite, v30);
LABEL_9:
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20799/*"isLock"*/, isLock, v32);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20783/*"isChoice"*/, isChoice, v33);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23702/*"svtCommonFlag"*/, commonFlag, v34);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17123/*"battleVoice"*/, battleVoice, v35);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22776/*"randomLimitCount"*/, randomSettingOwn, v36);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22777/*"randomLimitCountSupport"*/, randomSettingSupport, v37);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21104/*"limitCountSupport"*/, limitCountSupport, v38);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20810/*"isPush"*/, isPush, v39);
  RequestBase__beginRequest((RequestBase_o *)this, v40);
}


System_String_o *__fastcall CardFavoriteRequest__getMockData(CardFavoriteRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4A5C96B & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5C96B = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_1/*""*/, 0LL);
}


System_String_o *__fastcall CardFavoriteRequest__getURL(CardFavoriteRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4A5C96A & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_17753/*"card/favorite"*/);
    byte_4A5C96A = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61707032(BaseUrl, (System_String_o *)StringLiteral_17753/*"card/favorite"*/, 0LL);
}


void __fastcall CardFavoriteRequest__requestCompleted(
        CardFavoriteRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  const MethodInfo *v6; // x2
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v8; // x9

  if ( (byte_4A5C96D & 1) == 0 )
  {
    sub_1B885B0(&ResponseCommandKind_TypeInfo);
    sub_1B885B0(&StringLiteral_22225/*"ok"*/);
    sub_1B885B0(&StringLiteral_22055/*"ng"*/);
    byte_4A5C96D = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(34, responseList, 0LL);
  if ( v5 && ResponseData__checkError(v5, v5->fields.resCode, v6) )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v8 = &StringLiteral_22225/*"ok"*/;
  }
  else
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v8 = &StringLiteral_22055/*"ng"*/;
  }
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
    CallBack->fields.original_method_info,
    *v8,
    *(_QWORD *)&CallBack->fields.extra_arg);
}