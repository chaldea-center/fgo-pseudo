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
  if ( (byte_4B38BB4 & 1) == 0 )
  {
    sub_1BD3458(&NetworkManager_TypeInfo, method);
    byte_4B38BB4 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  WarBoardBattleSetupRequest___c_c *v24; // x0
  System_String_o *v25; // x26
  System_String_o *v26; // x25
  System_String_o *v27; // x27
  System_Func_T__TResult__o *_9__6_0; // x28
  Il2CppObject *v29; // x29
  struct WarBoardBattleSetupRequest___c_StaticFields *static_fields; // x0
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x0
  System_String_array *v38; // x0
  Il2CppObject *v39; // x0
  System_String_o *v40; // x0
  __int64 v41; // x1
  WarBoardBattleSetupRequest___c_c *v42; // x0
  System_String_o *v43; // x26
  System_Func_T__TResult__o *_9__6_1; // x27
  System_String_o *v45; // x24
  System_String_o *v46; // x25
  Il2CppObject *v47; // x28
  struct WarBoardBattleSetupRequest___c_StaticFields *v48; // x0
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v55; // x0
  System_String_array *v56; // x0
  Il2CppObject *v57; // x0
  System_String_o *v58; // x0

  if ( (byte_4B38BB5 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Linq_Enumerable_Select_long__string___, *(_QWORD *)&stageId);
    sub_1BD3458(&Method_System_Linq_Enumerable_ToArray_string___, v12);
    sub_1BD3458(&System_Func_long__string__TypeInfo, v13);
    sub_1BD3458(&Method_WarBoardBattleSetupRequest___c__beginRequest_b__6_0__, v14);
    sub_1BD3458(&Method_WarBoardBattleSetupRequest___c__beginRequest_b__6_1__, v15);
    sub_1BD3458(&WarBoardBattleSetupRequest___c_TypeInfo, v16);
    sub_1BD3458(&StringLiteral_23760/*"stageId"*/, v17);
    sub_1BD3458(&StringLiteral_18763/*"defenseUserSvtIds"*/, v18);
    sub_1BD3458(&StringLiteral_17346/*"befSquareIndex"*/, v19);
    sub_1BD3458(&StringLiteral_17145/*"attackUserSvtIds"*/, v20);
    sub_1BD3458(&StringLiteral_16898/*"aftSquareIndex"*/, v21);
    sub_1BD3458(&StringLiteral_863/*","*/, v22);
    sub_1BD3458(&StringLiteral_16210/*"[{0}]"*/, v23);
    byte_4B38BB5 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23760/*"stageId"*/, stageId, 0LL);
  v24 = WarBoardBattleSetupRequest___c_TypeInfo;
  if ( !WarBoardBattleSetupRequest___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardBattleSetupRequest___c_TypeInfo);
    v24 = WarBoardBattleSetupRequest___c_TypeInfo;
  }
  v25 = (System_String_o *)StringLiteral_16210/*"[{0}]"*/;
  v26 = (System_String_o *)StringLiteral_17145/*"attackUserSvtIds"*/;
  v27 = (System_String_o *)StringLiteral_863/*","*/;
  _9__6_0 = (System_Func_T__TResult__o *)v24->static_fields->__9__6_0;
  if ( !_9__6_0 )
  {
    if ( !v24->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v24);
      v24 = WarBoardBattleSetupRequest___c_TypeInfo;
    }
    v29 = (Il2CppObject *)v24->static_fields->__9;
    _9__6_0 = (System_Func_T__TResult__o *)sub_1BD36A4(System_Func_long__string__TypeInfo);
    System_Func_long__object____ctor(_9__6_0, v29, Method_WarBoardBattleSetupRequest___c__beginRequest_b__6_0__, 0LL);
    static_fields = WarBoardBattleSetupRequest___c_TypeInfo->static_fields;
    static_fields->__9__6_0 = (struct System_Func_long__string__o *)_9__6_0;
    sub_1BD33FC((PartyOrganizationUtility_o *)&static_fields->__9__6_0, (int64_t)_9__6_0, v31, v32, v33, v34, v35, v36);
  }
  v37 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)attackUserSvtIds,
                                                               (System_Func_TSource__TResult__o *)_9__6_0,
                                                               (const MethodInfo_2F61900 *)Method_System_Linq_Enumerable_Select_long__string___);
  v38 = (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                 v37,
                                 (const MethodInfo_2F6ADB4 *)Method_System_Linq_Enumerable_ToArray_string___);
  v39 = (Il2CppObject *)System_String__Join(v27, v38, 0LL);
  v40 = System_String__Format(v25, v39, 0LL);
  if ( !this )
    goto LABEL_18;
  RequestBase__addField_41965080((RequestBase_o *)this, v26, v40, 0LL);
  v42 = WarBoardBattleSetupRequest___c_TypeInfo;
  if ( !WarBoardBattleSetupRequest___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardBattleSetupRequest___c_TypeInfo);
    v42 = WarBoardBattleSetupRequest___c_TypeInfo;
  }
  v43 = (System_String_o *)StringLiteral_863/*","*/;
  _9__6_1 = (System_Func_T__TResult__o *)v42->static_fields->__9__6_1;
  v45 = (System_String_o *)StringLiteral_18763/*"defenseUserSvtIds"*/;
  v46 = (System_String_o *)StringLiteral_16210/*"[{0}]"*/;
  if ( !_9__6_1 )
  {
    if ( !v42->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v42);
      v42 = WarBoardBattleSetupRequest___c_TypeInfo;
    }
    v47 = (Il2CppObject *)v42->static_fields->__9;
    _9__6_1 = (System_Func_T__TResult__o *)sub_1BD36A4(System_Func_long__string__TypeInfo);
    System_Func_long__object____ctor(_9__6_1, v47, Method_WarBoardBattleSetupRequest___c__beginRequest_b__6_1__, 0LL);
    v48 = WarBoardBattleSetupRequest___c_TypeInfo->static_fields;
    v48->__9__6_1 = (struct System_Func_long__string__o *)_9__6_1;
    sub_1BD33FC((PartyOrganizationUtility_o *)&v48->__9__6_1, (int64_t)_9__6_1, v49, v50, v51, v52, v53, v54);
  }
  v55 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)defenseUserSvtIds,
                                                               (System_Func_TSource__TResult__o *)_9__6_1,
                                                               (const MethodInfo_2F61900 *)Method_System_Linq_Enumerable_Select_long__string___);
  v56 = (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                 v55,
                                 (const MethodInfo_2F6ADB4 *)Method_System_Linq_Enumerable_ToArray_string___);
  v57 = (Il2CppObject *)System_String__Join(v43, v56, 0LL);
  v58 = System_String__Format(v46, v57, 0LL);
  RequestBase__addField_41965080((RequestBase_o *)this, v45, v58, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17346/*"befSquareIndex"*/, befSquareIndex, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_16898/*"aftSquareIndex"*/, aftSquareIndex, 0LL);
  if ( !warBoardData )
LABEL_18:
    sub_1BD36B4(v40, v41);
  WarBoardData__SetRequest(warBoardData, (RequestBase_o *)this, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall WarBoardBattleSetupRequest__getURL(
        WarBoardBattleSetupRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4B38BB3 & 1) == 0 )
  {
    sub_1BD3458(&NetworkManager_TypeInfo, method);
    sub_1BD3458(&StringLiteral_24901/*"warBoard/battleSetup"*/, v2);
    byte_4B38BB3 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62525248(BaseUrl, (System_String_o *)StringLiteral_24901/*"warBoard/battleSetup"*/, 0LL);
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
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B38BB6 & 1) == 0 )
  {
    sub_1BD3458(&WarBoardBattleSetupRequest___c_TypeInfo, v1);
    byte_4B38BB6 = 1;
  }
  v2 = (Il2CppObject *)sub_1BD36A4(WarBoardBattleSetupRequest___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  WarBoardBattleSetupRequest___c_TypeInfo->static_fields->__9 = (struct WarBoardBattleSetupRequest___c_o *)v2;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)WarBoardBattleSetupRequest___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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