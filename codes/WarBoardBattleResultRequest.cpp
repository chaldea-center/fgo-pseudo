void __fastcall WarBoardBattleResultRequest___ctor(WarBoardBattleResultRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardBattleResultRequest__beginRequest(
        WarBoardBattleResultRequest_o *this,
        int32_t stageId,
        BattleResultRequest_Argument_o *arg,
        Il2CppObject *warBoardBattleInfo,
        System_Action_string__o *callback,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  WarBoardData_o *Instance; // x0
  __int64 v42; // x1
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  System_String_o *v49; // x0
  __int64 v50; // x1
  System_Object_array *v51; // x22
  System_String_o *v52; // x0
  System_String_o *v53; // x0
  System_String_o *v54; // x0
  System_String_o *v55; // x0
  uint32_t v56; // w0
  Il2CppObject *v57; // x0
  __int64 v58; // x1
  System_Byte_array *v59; // x21
  __int64 v60; // x1
  System_Byte_array *v61; // x21
  System_String_o *v62; // x0

  if ( (byte_4B17BE0 & 1) == 0 )
  {
    sub_1BCA7E0(&CatAndMouseGame_TypeInfo, *(_QWORD *)&stageId, arg);
    sub_1BCA7E0(&System_Convert_TypeInfo, v11, v12);
    sub_1BCA7E0(&JsonManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Dictionary_string__object___ToArray__, v15, v16);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v17, v18);
    sub_1BCA7E0(&StringLiteral_23725/*"stageId"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_23216/*"routeSelect"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_24617/*"useTreasureDevices"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_24879/*"warBoardBattleInfo"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_23951/*"svtCommonFlagList"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_17294/*"battleStatus"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_24117/*"tdPlayed"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_24845/*"voicePlayedList"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_17285/*"battleId"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_17288/*"battleResult"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_16901/*"aliveUniqueIds"*/, v39, v40);
    byte_4B17BE0 = 1;
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList;
  if ( !Instance )
    goto LABEL_15;
  Instance->fields.localSaveTiming = 4;
  WarBoardData__LocalSave(Instance, 0, 0LL);
  this->fields.subCallBack = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.subCallBack, (int64_t)callback, v43, v44, v45, v46, v47, v48);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23725/*"stageId"*/, stageId, 0LL);
  if ( !arg )
    goto LABEL_15;
  RequestBase__addField_41868688(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_17285/*"battleId"*/,
    arg->fields.battleId,
    0LL);
  v49 = BattleResultRequest_Argument__ConvertVoicePlayedData(arg, 0LL);
  RequestBase__addField_41862348((RequestBase_o *)this, (System_String_o *)StringLiteral_24845/*"voicePlayedList"*/, v49, 0LL);
  Instance = (WarBoardData_o *)arg->fields.firstNpPlayList;
  if ( !Instance )
    goto LABEL_15;
  v51 = System_Collections_Generic_List_object___ToArray(
          (System_Collections_Generic_List_object__o *)Instance,
          (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_Dictionary_string__object___ToArray__);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v50);
  v52 = JsonManager__toJson(&v51->obj, 0, 0, 0LL);
  RequestBase__addField_41862348((RequestBase_o *)this, (System_String_o *)StringLiteral_24117/*"tdPlayed"*/, v52, 0LL);
  Instance = (WarBoardData_o *)arg->fields.playerServantNoblePhantasmUsageData;
  if ( !Instance )
LABEL_15:
    sub_1BCAA3C(Instance, v42);
  v53 = PlayerServantNoblePhantasmUsageData__ConvertToJsonString((PlayerServantNoblePhantasmUsageData_o *)Instance, 0LL);
  RequestBase__addField_41862348((RequestBase_o *)this, (System_String_o *)StringLiteral_24617/*"useTreasureDevices"*/, v53, 0LL);
  v54 = JsonManager__toJson((Il2CppObject *)arg->fields.svtCommonFlagDict, 0, 0, 0LL);
  RequestBase__addField_41862348((RequestBase_o *)this, (System_String_o *)StringLiteral_23951/*"svtCommonFlagList"*/, v54, 0LL);
  v55 = JsonManager__toJson(&arg->fields.aliveUniqueIds->obj, 0, 0, 0LL);
  RequestBase__addField_41862348((RequestBase_o *)this, (System_String_o *)StringLiteral_16901/*"aliveUniqueIds"*/, v55, 0LL);
  v56 = BattleResultRequest_Argument__ConvertBattleStatus(arg, 0LL);
  RequestBase__addField_41868688((RequestBase_o *)this, (System_String_o *)StringLiteral_17294/*"battleStatus"*/, v56, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17288/*"battleResult"*/, arg->fields.battleResult, 0LL);
  v57 = (Il2CppObject *)JsonManager__toJson(warBoardBattleInfo, 0, 0, 0LL);
  v59 = RequestBase__PackToMessagePack((RequestBase_o *)this, v57, 0LL);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo, v58);
  v61 = CatAndMouseGame__CatGame5Bytes(v59, 0LL);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v60);
  v62 = System_Convert__ToBase64String(v61, 0LL);
  RequestBase__addField_41862348((RequestBase_o *)this, (System_String_o *)StringLiteral_24879/*"warBoardBattleInfo"*/, v62, 0LL);
  RequestBase__addField_41870840(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_23216/*"routeSelect"*/,
    &arg->fields.routeSelect->obj,
    0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


bool __fastcall WarBoardBattleResultRequest__errorRequest(
        WarBoardBattleResultRequest_o *this,
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


void __fastcall WarBoardBattleResultRequest__errorRetry(WarBoardBattleResultRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B17BDF & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    byte_4B17BDF = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  NetworkManager__RequestStart((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall WarBoardBattleResultRequest__getURL(
        WarBoardBattleResultRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  System_String_o *BaseUrl; // x0

  if ( (byte_4B17BDE & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_24864/*"warBoard/battleResult"*/, v3, v4);
    byte_4B17BDE = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62401220(BaseUrl, (System_String_o *)StringLiteral_24864/*"warBoard/battleResult"*/, 0LL);
}


bool __fastcall WarBoardBattleResultRequest__isAutoRetryRequest(
        WarBoardBattleResultRequest_o *this,
        const MethodInfo *method)
{
  return 1;
}


void __fastcall WarBoardBattleResultRequest__requestCompleted(
        WarBoardBattleResultRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  ResponseData_o *v17; // x0
  const MethodInfo *v18; // x2
  ResponseData_o *v19; // x20
  System_Collections_Generic_Dictionary_object__object__o *success; // x20
  Il2CppObject *Item; // x0
  Il2CppObject *v22; // x0
  __int64 v23; // x1
  System_Action_T__o *subCallBack; // x21
  Il2CppObject *v25; // x0
  System_String_o *v26; // x1

  if ( (byte_4B17BE1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ActionExtensions_Call_string___, responseList, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__, v7, v8);
    sub_1BCA7E0(&JsonManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&ResponseCommandKind_TypeInfo, v11, v12);
    sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_24880/*"warBoardData"*/, v15, v16);
    byte_4B17BE1 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v17 = ResponseCommandKind__SearchData(99, responseList, 0LL);
  if ( v17
    && (v19 = v17, ResponseData__checkError(v17, v17->fields.resCode, v18))
    && (success = (System_Collections_Generic_Dictionary_object__object__o *)v19->fields.success) != 0LL )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             success,
             (Il2CppObject *)StringLiteral_24880/*"warBoardData"*/,
             (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v22 = RequestBase__UnpackToMessagePack((RequestBase_o *)this, Item, 0LL);
    System_Collections_Generic_Dictionary_object__object___set_Item(
      success,
      (Il2CppObject *)StringLiteral_24880/*"warBoardData"*/,
      v22,
      (const MethodInfo_326524C *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    subCallBack = (System_Action_T__o *)this->fields.subCallBack;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v23);
    v25 = (Il2CppObject *)JsonManager__toJson((Il2CppObject *)success, 0, 0, 0LL);
    ActionExtensions__Call_object_(subCallBack, v25, (const MethodInfo_2E65588 *)Method_ActionExtensions_Call_string___);
    v26 = JsonManager__toJson((Il2CppObject *)success, 0, 0, 0LL);
  }
  else
  {
    v26 = (System_String_o *)StringLiteral_22292/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v26, 0LL);
}