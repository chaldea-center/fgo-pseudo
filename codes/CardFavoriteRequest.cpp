void __fastcall CardFavoriteRequest___ctor(CardFavoriteRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


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
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  int v63; // w1
  int v64; // w2
  __int64 v65; // x3
  int v66; // w1
  int v67; // w2
  __int64 v68; // x3
  _BOOL8 _29295864; // x0
  __int64 v70; // x1

  if ( (byte_42EB661 & 1) == 0 )
  {
    sub_B5D5C4(&TutorialFlag_TypeInfo, targetUsrSVtId, imageLimitCount, *(_QWORD *)&dispLimitCount);
    sub_B5D5C4(&StringLiteral_20479/*"limitCountSupport"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_19518/*"iconLimitCount"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_22767/*"svtCommonFlag"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_20202/*"isPush"*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_19660/*"imageLimitCount"*/, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_23373/*"userSvtId"*/, v39, v40, v41);
    sub_B5D5C4(&StringLiteral_21987/*"randomLimitCount"*/, v42, v43, v44);
    sub_B5D5C4(&StringLiteral_21796/*"portraitLimitCount"*/, v45, v46, v47);
    sub_B5D5C4(&StringLiteral_18256/*"dispLimitCount"*/, v48, v49, v50);
    sub_B5D5C4(&StringLiteral_16863/*"battleVoice"*/, v51, v52, v53);
    sub_B5D5C4(&StringLiteral_20192/*"isLock"*/, v54, v55, v56);
    sub_B5D5C4(&StringLiteral_20177/*"isChoice"*/, v57, v58, v59);
    sub_B5D5C4(&StringLiteral_21988/*"randomLimitCountSupport"*/, v60, v61, v62);
    sub_B5D5C4(&StringLiteral_17811/*"commandCardLimitCount"*/, v63, v64, v65);
    sub_B5D5C4(&StringLiteral_20186/*"isFavorite"*/, v66, v67, v68);
    byte_42EB661 = 1;
  }
  RequestBase__addField_32361792((RequestBase_o *)this, (System_String_o *)StringLiteral_23373/*"userSvtId"*/, targetUsrSVtId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19660/*"imageLimitCount"*/, imageLimitCount, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18256/*"dispLimitCount"*/, dispLimitCount, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17811/*"commandCardLimitCount"*/, commandCardLimitCount, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19518/*"iconLimitCount"*/, iconLimitCount, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21796/*"portraitLimitCount"*/, portraitLimitCount, 0LL);
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _29295864 = TutorialFlag__Get_29295864(106, 0LL);
  v70 = StringLiteral_20186/*"isFavorite"*/;
  if ( !_29295864 )
  {
    RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20186/*"isFavorite"*/, -1, 0LL);
    if ( this )
      goto LABEL_10;
LABEL_11:
    sub_B5D69C(_29295864, v70);
  }
  if ( !this )
    goto LABEL_11;
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20186/*"isFavorite"*/, isFavorite, 0LL);
LABEL_10:
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20192/*"isLock"*/, isLock, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20177/*"isChoice"*/, isChoice, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22767/*"svtCommonFlag"*/, commonFlag, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_16863/*"battleVoice"*/, battleVoice, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21987/*"randomLimitCount"*/, randomSettingOwn, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21988/*"randomLimitCountSupport"*/, randomSettingSupport, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20479/*"limitCountSupport"*/, limitCountSupport, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20202/*"isPush"*/, isPush, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall CardFavoriteRequest__getMockData(CardFavoriteRequest_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3

  if ( (byte_42EB660 & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_1/*""*/, v4, v5, v6);
    byte_42EB660 = 1;
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
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  System_String_o *BaseUrl; // x0

  if ( (byte_42EB65F & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_17435/*"card/favorite"*/, v4, v5, v6);
    byte_42EB65F = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44577788(BaseUrl, (System_String_o *)StringLiteral_17435/*"card/favorite"*/, 0LL);
}


void __fastcall CardFavoriteRequest__requestCompleted(
        CardFavoriteRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  ResponseData_o *v12; // x0
  __int64 *v13; // x8

  if ( (byte_42EB662 & 1) == 0 )
  {
    sub_B5D5C4(&ResponseCommandKind_TypeInfo, (_DWORD)responseList, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_21497/*"ok"*/, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_21345/*"ng"*/, v9, v10, v11);
    byte_42EB662 = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v12 = ResponseCommandKind__SearchData(34, responseList, 0LL);
  if ( v12 && ResponseData__checkError_29500464(v12, 0LL) )
    v13 = &StringLiteral_21497/*"ok"*/;
  else
    v13 = &StringLiteral_21345/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v13, 0LL);
}