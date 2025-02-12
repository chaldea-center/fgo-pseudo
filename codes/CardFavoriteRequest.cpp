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
  _BOOL8 _38831432; // x0
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

  if ( (byte_4BB5F81 & 1) == 0 )
  {
    sub_1C13D24(&TutorialFlag_TypeInfo, targetUsrSVtId);
    sub_1C13D24(&StringLiteral_21450/*"lightgreen"*/, v24);
    sub_1C13D24(&StringLiteral_20402/*"iTween: Unsupported space supplied! Default will be used."*/, v25);
    sub_1C13D24(&StringLiteral_24091/*"summon_up_04"*/, v26);
    sub_1C13D24(&StringLiteral_21157/*"isLocal"*/, v27);
    sub_1C13D24(&StringLiteral_20563/*"ifindex"*/, v28);
    sub_1C13D24(&StringLiteral_24851/*"userPresentHistory"*/, v29);
    sub_1C13D24(&StringLiteral_23151/*"raidDispSpotId"*/, v30);
    sub_1C13D24(&StringLiteral_22942/*"playEffectDrop"*/, v31);
    sub_1C13D24(&StringLiteral_18933/*"digits"*/, v32);
    sub_1C13D24(&StringLiteral_17384/*"battleFinishMovie"*/, v33);
    sub_1C13D24(&StringLiteral_21144/*"isEnabled"*/, v34);
    sub_1C13D24(&StringLiteral_21127/*"iris-ansi"*/, v35);
    sub_1C13D24(&StringLiteral_23152/*"raidResult"*/, v36);
    sub_1C13D24(&StringLiteral_18428/*"combine_14"*/, v37);
    sub_1C13D24(&StringLiteral_21137/*"isAddition"*/, v38);
    byte_4BB5F81 = 1;
  }
  RequestBase__addField_42309896(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_24851/*"userPresentHistory"*/,
    targetUsrSVtId,
    *(const MethodInfo **)&dispLimitCount);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20563/*"ifindex"*/, imageLimitCount, v39);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18933/*"digits"*/, dispLimitCount, v40);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18428/*"combine_14"*/, commandCardLimitCount, v41);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20402/*"iTween: Unsupported space supplied! Default will be used."*/, iconLimitCount, v42);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22942/*"playEffectDrop"*/, portraitLimitCount, v43);
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _38831432 = TutorialFlag__Get_38831432(106, 0LL);
  v46 = StringLiteral_21137/*"isAddition"*/;
  if ( !_38831432 )
  {
    RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21137/*"isAddition"*/, -1, v45);
    if ( this )
      goto LABEL_9;
LABEL_10:
    sub_1C13F80(_38831432, v46);
  }
  if ( !this )
    goto LABEL_10;
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21137/*"isAddition"*/, isFavorite, v45);
LABEL_9:
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21144/*"isEnabled"*/, isLock, v47);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21127/*"iris-ansi"*/, isChoice, v48);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_24091/*"summon_up_04"*/, commonFlag, v49);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17384/*"battleFinishMovie"*/, battleVoice, v50);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23151/*"raidDispSpotId"*/, randomSettingOwn, v51);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23152/*"raidResult"*/, randomSettingSupport, v52);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21450/*"lightgreen"*/, limitCountSupport, v53);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21157/*"isLocal"*/, isPush, v54);
  RequestBase__beginRequest((RequestBase_o *)this, v55);
}


System_String_o *__fastcall CardFavoriteRequest__getMockData(CardFavoriteRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_4BB5F80 & 1) == 0 )
  {
    sub_1C13D24(&NetworkManager_TypeInfo, method);
    sub_1C13D24(&StringLiteral_1/*""*/, v2);
    byte_4BB5F80 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_1/*""*/, 0LL);
}


System_String_o *__fastcall CardFavoriteRequest__getURL(CardFavoriteRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4BB5F7F & 1) == 0 )
  {
    sub_1C13D24(&NetworkManager_TypeInfo, method);
    sub_1C13D24(&StringLiteral_18028/*"capture"*/, v2);
    byte_4BB5F7F = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62967944(BaseUrl, (System_String_o *)StringLiteral_18028/*"capture"*/, 0LL);
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

  if ( (byte_4BB5F82 & 1) == 0 )
  {
    sub_1C13D24(&ResponseCommandKind_TypeInfo, responseList);
    sub_1C13D24(&StringLiteral_22595/*"offline"*/, v5);
    sub_1C13D24(&StringLiteral_22421/*"newAttributes"*/, v6);
    byte_4BB5F82 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(34, responseList, 0LL);
  if ( v7 && ResponseData__checkError_42394144(v7, 0LL) )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v9 = &StringLiteral_22595/*"offline"*/;
  }
  else
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v9 = &StringLiteral_22421/*"newAttributes"*/;
  }
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
    CallBack->fields.original_method_info,
    *v9,
    *(_QWORD *)&CallBack->fields.extra_arg);
}