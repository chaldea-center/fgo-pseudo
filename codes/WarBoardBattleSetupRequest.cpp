void __fastcall WarBoardBattleSetupRequest___ctor(WarBoardBattleSetupRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


bool __fastcall WarBoardBattleSetupRequest__backgroundErrorRequest(
        WarBoardBattleSetupRequest_o *this,
        System_String_o *errorCode,
        const MethodInfo *method)
{
  int32_t retryCount; // w9
  bool v4; // w8
  int32_t v5; // w9

  retryCount = this->fields.retryCount;
  v4 = retryCount < 3;
  if ( retryCount <= 2 )
    v5 = retryCount + 1;
  else
    v5 = 0;
  this->fields.retryCount = v5;
  return v4;
}


void __fastcall WarBoardBattleSetupRequest__backgroundErrorRetry(
        WarBoardBattleSetupRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B17BE5 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    byte_4B17BE5 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  NetworkManager__RequestStart((RequestBase_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardBattleSetupRequest__beginRequest(
        WarBoardBattleSetupRequest_o *this,
        int32_t stageId,
        System_Int64_array *attackUserSvtIds,
        System_Int64_array *defenseUserSvtIds,
        int32_t befSquareIndex,
        int32_t aftSquareIndex,
        WarBoardData_o *warBoardData,
        const MethodInfo *method)
{
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
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
  __int64 v38; // x3
  WarBoardBattleSetupRequest___c_c *v39; // x0
  System_String_o *v40; // x26
  System_String_o *v41; // x25
  System_String_o *v42; // x27
  System_Func_T__TResult__o *_9__6_0; // x28
  Il2CppObject *v44; // x29
  struct WarBoardBattleSetupRequest___c_StaticFields *static_fields; // x0
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v52; // x0
  System_String_array *v53; // x0
  Il2CppObject *v54; // x0
  System_String_o *v55; // x0
  __int64 v56; // x1
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x3
  WarBoardBattleSetupRequest___c_c *v60; // x0
  System_String_o *v61; // x26
  System_Func_T__TResult__o *_9__6_1; // x27
  System_String_o *v63; // x24
  System_String_o *v64; // x25
  Il2CppObject *v65; // x28
  struct WarBoardBattleSetupRequest___c_StaticFields *v66; // x0
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v73; // x0
  System_String_array *v74; // x0
  Il2CppObject *v75; // x0
  System_String_o *v76; // x0

  if ( (byte_4B17BE6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_long__string___, *(_QWORD *)&stageId, attackUserSvtIds);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_string___, v12, v13);
    sub_1BCA7E0(&System_Func_long__string__TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_WarBoardBattleSetupRequest___c__beginRequest_b__6_0__, v16, v17);
    sub_1BCA7E0(&Method_WarBoardBattleSetupRequest___c__beginRequest_b__6_1__, v18, v19);
    sub_1BCA7E0(&WarBoardBattleSetupRequest___c_TypeInfo, v20, v21);
    sub_1BCA7E0(&StringLiteral_23725/*"stageId"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_18735/*"defenseUserSvtIds"*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_17323/*"befSquareIndex"*/, v26, v27);
    sub_1BCA7E0(&StringLiteral_17124/*"attackUserSvtIds"*/, v28, v29);
    sub_1BCA7E0(&StringLiteral_16877/*"aftSquareIndex"*/, v30, v31);
    sub_1BCA7E0(&StringLiteral_863/*","*/, v32, v33);
    sub_1BCA7E0(&StringLiteral_16191/*"[{0}]"*/, v34, v35);
    byte_4B17BE6 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23725/*"stageId"*/, stageId, 0LL);
  v39 = WarBoardBattleSetupRequest___c_TypeInfo;
  if ( !WarBoardBattleSetupRequest___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardBattleSetupRequest___c_TypeInfo, v36);
    v39 = WarBoardBattleSetupRequest___c_TypeInfo;
  }
  v40 = (System_String_o *)StringLiteral_16191/*"[{0}]"*/;
  v41 = (System_String_o *)StringLiteral_17124/*"attackUserSvtIds"*/;
  v42 = (System_String_o *)StringLiteral_863/*","*/;
  _9__6_0 = (System_Func_T__TResult__o *)v39->static_fields->__9__6_0;
  if ( !_9__6_0 )
  {
    if ( !v39->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v39, v36);
      v39 = WarBoardBattleSetupRequest___c_TypeInfo;
    }
    v44 = (Il2CppObject *)v39->static_fields->__9;
    _9__6_0 = (System_Func_T__TResult__o *)sub_1BCAA2C(System_Func_long__string__TypeInfo, v36, v37, v38);
    System_Func_long__object____ctor(_9__6_0, v44, Method_WarBoardBattleSetupRequest___c__beginRequest_b__6_0__, 0LL);
    static_fields = WarBoardBattleSetupRequest___c_TypeInfo->static_fields;
    static_fields->__9__6_0 = (struct System_Func_long__string__o *)_9__6_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__6_0, (int64_t)_9__6_0, v46, v47, v48, v49, v50, v51);
  }
  v52 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)attackUserSvtIds,
                                                               (System_Func_TSource__TResult__o *)_9__6_0,
                                                               (const MethodInfo_2F42554 *)Method_System_Linq_Enumerable_Select_long__string___);
  v53 = (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                 v52,
                                 (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_string___);
  v54 = (Il2CppObject *)System_String__Join(v42, v53, 0LL);
  v55 = System_String__Format(v40, v54, 0LL);
  if ( !this )
    goto LABEL_18;
  RequestBase__addField_41862348((RequestBase_o *)this, v41, v55, 0LL);
  v60 = WarBoardBattleSetupRequest___c_TypeInfo;
  if ( !WarBoardBattleSetupRequest___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardBattleSetupRequest___c_TypeInfo, v57);
    v60 = WarBoardBattleSetupRequest___c_TypeInfo;
  }
  v61 = (System_String_o *)StringLiteral_863/*","*/;
  _9__6_1 = (System_Func_T__TResult__o *)v60->static_fields->__9__6_1;
  v63 = (System_String_o *)StringLiteral_18735/*"defenseUserSvtIds"*/;
  v64 = (System_String_o *)StringLiteral_16191/*"[{0}]"*/;
  if ( !_9__6_1 )
  {
    if ( !v60->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v60, v57);
      v60 = WarBoardBattleSetupRequest___c_TypeInfo;
    }
    v65 = (Il2CppObject *)v60->static_fields->__9;
    _9__6_1 = (System_Func_T__TResult__o *)sub_1BCAA2C(System_Func_long__string__TypeInfo, v57, v58, v59);
    System_Func_long__object____ctor(_9__6_1, v65, Method_WarBoardBattleSetupRequest___c__beginRequest_b__6_1__, 0LL);
    v66 = WarBoardBattleSetupRequest___c_TypeInfo->static_fields;
    v66->__9__6_1 = (struct System_Func_long__string__o *)_9__6_1;
    sub_1BCA784((PartyOrganizationUtility_o *)&v66->__9__6_1, (int64_t)_9__6_1, v67, v68, v69, v70, v71, v72);
  }
  v73 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)defenseUserSvtIds,
                                                               (System_Func_TSource__TResult__o *)_9__6_1,
                                                               (const MethodInfo_2F42554 *)Method_System_Linq_Enumerable_Select_long__string___);
  v74 = (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                 v73,
                                 (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_string___);
  v75 = (Il2CppObject *)System_String__Join(v61, v74, 0LL);
  v76 = System_String__Format(v64, v75, 0LL);
  RequestBase__addField_41862348((RequestBase_o *)this, v63, v76, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17323/*"befSquareIndex"*/, befSquareIndex, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_16877/*"aftSquareIndex"*/, aftSquareIndex, 0LL);
  if ( !warBoardData )
LABEL_18:
    sub_1BCAA3C(v55, v56);
  WarBoardData__SetRequest(warBoardData, (RequestBase_o *)this, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall WarBoardBattleSetupRequest__getURL(
        WarBoardBattleSetupRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  System_String_o *BaseUrl; // x0

  if ( (byte_4B17BE4 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_24866/*"warBoard/battleSetup"*/, v3, v4);
    byte_4B17BE4 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62401220(BaseUrl, (System_String_o *)StringLiteral_24866/*"warBoard/battleSetup"*/, 0LL);
}


bool __fastcall WarBoardBattleSetupRequest__isBackgroundRequest(
        WarBoardBattleSetupRequest_o *this,
        const MethodInfo *method)
{
  return 1;
}


void __fastcall WarBoardBattleSetupRequest___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B17BE7 & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardBattleSetupRequest___c_TypeInfo, v1, v2);
    byte_4B17BE7 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(WarBoardBattleSetupRequest___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  WarBoardBattleSetupRequest___c_TypeInfo->static_fields->__9 = (struct WarBoardBattleSetupRequest___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)WarBoardBattleSetupRequest___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall WarBoardBattleSetupRequest___c___ctor(WarBoardBattleSetupRequest___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall WarBoardBattleSetupRequest___c___beginRequest_b__6_0(
        WarBoardBattleSetupRequest___c_o *this,
        int64_t x,
        const MethodInfo *method)
{
  int64_t v4; // [xsp+8h] [xbp-8h] BYREF

  v4 = x;
  return System_Int64__ToString((int64_t)&v4, 0LL);
}


System_String_o *__fastcall WarBoardBattleSetupRequest___c___beginRequest_b__6_1(
        WarBoardBattleSetupRequest___c_o *this,
        int64_t x,
        const MethodInfo *method)
{
  int64_t v4; // [xsp+8h] [xbp-8h] BYREF

  v4 = x;
  return System_Int64__ToString((int64_t)&v4, 0LL);
}