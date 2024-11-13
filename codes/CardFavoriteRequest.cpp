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
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x1
  __int64 v53; // x2
  const MethodInfo *v54; // x3
  const MethodInfo *v55; // x3
  const MethodInfo *v56; // x3
  const MethodInfo *v57; // x3
  const MethodInfo *v58; // x3
  __int64 v59; // x1
  _BOOL8 _38402052; // x0
  const MethodInfo *v61; // x3
  __int64 v62; // x1
  const MethodInfo *v63; // x3
  const MethodInfo *v64; // x3
  const MethodInfo *v65; // x3
  const MethodInfo *v66; // x3
  const MethodInfo *v67; // x3
  const MethodInfo *v68; // x3
  const MethodInfo *v69; // x3
  const MethodInfo *v70; // x3
  const MethodInfo *v71; // x1

  if ( (byte_4B17A2A & 1) == 0 )
  {
    sub_1BCA7E0(&TutorialFlag_TypeInfo, targetUsrSVtId, *(_QWORD *)&imageLimitCount);
    sub_1BCA7E0(&StringLiteral_21330/*"limitCountSupport"*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_20290/*"iconLimitCount"*/, v26, v27);
    sub_1BCA7E0(&StringLiteral_23950/*"svtCommonFlag"*/, v28, v29);
    sub_1BCA7E0(&StringLiteral_21038/*"isPush"*/, v30, v31);
    sub_1BCA7E0(&StringLiteral_20450/*"imageLimitCount"*/, v32, v33);
    sub_1BCA7E0(&StringLiteral_24707/*"userSvtId"*/, v34, v35);
    sub_1BCA7E0(&StringLiteral_23020/*"randomLimitCount"*/, v36, v37);
    sub_1BCA7E0(&StringLiteral_22811/*"portraitLimitCount"*/, v38, v39);
    sub_1BCA7E0(&StringLiteral_18834/*"dispLimitCount"*/, v40, v41);
    sub_1BCA7E0(&StringLiteral_17295/*"battleVoice"*/, v42, v43);
    sub_1BCA7E0(&StringLiteral_21025/*"isLock"*/, v44, v45);
    sub_1BCA7E0(&StringLiteral_21009/*"isChoice"*/, v46, v47);
    sub_1BCA7E0(&StringLiteral_23021/*"randomLimitCountSupport"*/, v48, v49);
    sub_1BCA7E0(&StringLiteral_18331/*"commandCardLimitCount"*/, v50, v51);
    sub_1BCA7E0(&StringLiteral_21019/*"isFavorite"*/, v52, v53);
    byte_4B17A2A = 1;
  }
  RequestBase__addField_41868688(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_24707/*"userSvtId"*/,
    targetUsrSVtId,
    *(const MethodInfo **)&dispLimitCount);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20450/*"imageLimitCount"*/, imageLimitCount, v54);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18834/*"dispLimitCount"*/, dispLimitCount, v55);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18331/*"commandCardLimitCount"*/, commandCardLimitCount, v56);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20290/*"iconLimitCount"*/, iconLimitCount, v57);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22811/*"portraitLimitCount"*/, portraitLimitCount, v58);
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v59);
  _38402052 = TutorialFlag__Get_38402052(106, 0LL);
  v62 = StringLiteral_21019/*"isFavorite"*/;
  if ( !_38402052 )
  {
    RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21019/*"isFavorite"*/, -1, v61);
    if ( this )
      goto LABEL_9;
LABEL_10:
    sub_1BCAA3C(_38402052, v62);
  }
  if ( !this )
    goto LABEL_10;
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21019/*"isFavorite"*/, isFavorite, v61);
LABEL_9:
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21025/*"isLock"*/, isLock, v63);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21009/*"isChoice"*/, isChoice, v64);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23950/*"svtCommonFlag"*/, commonFlag, v65);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17295/*"battleVoice"*/, battleVoice, v66);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23020/*"randomLimitCount"*/, randomSettingOwn, v67);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23021/*"randomLimitCountSupport"*/, randomSettingSupport, v68);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21330/*"limitCountSupport"*/, limitCountSupport, v69);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21038/*"isPush"*/, isPush, v70);
  RequestBase__beginRequest((RequestBase_o *)this, v71);
}


System_String_o *__fastcall CardFavoriteRequest__getMockData(CardFavoriteRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2

  if ( (byte_4B17A29 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v3, v4);
    byte_4B17A29 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_1/*""*/, 0LL);
}


System_String_o *__fastcall CardFavoriteRequest__getURL(CardFavoriteRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  System_String_o *BaseUrl; // x0

  if ( (byte_4B17A28 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_17935/*"card/favorite"*/, v3, v4);
    byte_4B17A28 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62401220(BaseUrl, (System_String_o *)StringLiteral_17935/*"card/favorite"*/, 0LL);
}


void __fastcall CardFavoriteRequest__requestCompleted(
        CardFavoriteRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  ResponseData_o *v9; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v11; // x9

  if ( (byte_4B17A2B & 1) == 0 )
  {
    sub_1BCA7E0(&ResponseCommandKind_TypeInfo, responseList, method);
    sub_1BCA7E0(&StringLiteral_22465/*"ok"*/, v5, v6);
    sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, v7, v8);
    byte_4B17A2B = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v9 = ResponseCommandKind__SearchData(34, responseList, 0LL);
  if ( v9 && ResponseData__checkError_41952396(v9, 0LL) )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v11 = &StringLiteral_22465/*"ok"*/;
  }
  else
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v11 = &StringLiteral_22292/*"ng"*/;
  }
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
    CallBack->fields.original_method_info,
    *v11,
    *(_QWORD *)&CallBack->fields.extra_arg);
}