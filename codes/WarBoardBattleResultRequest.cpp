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
  __int64 v24; // x1
  __int64 v25; // x1
  WarBoardData_o *Instance; // x0
  __int64 v27; // x1
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  System_String_o *v34; // x0
  System_Object_array *v35; // x22
  System_String_o *v36; // x0
  System_String_o *v37; // x0
  System_String_o *v38; // x0
  System_String_o *v39; // x0
  uint32_t v40; // w0
  Il2CppObject *v41; // x0
  System_Byte_array *v42; // x21
  System_Byte_array *v43; // x21
  System_String_o *v44; // x0

  if ( (byte_4BFF208 & 1) == 0 )
  {
    sub_1C2E12C(&CatAndMouseGame_TypeInfo, *(_QWORD *)&stageId);
    sub_1C2E12C(&System_Convert_TypeInfo, v11);
    sub_1C2E12C(&JsonManager_TypeInfo, v12);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Dictionary_string__object___ToArray__, v13);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v14);
    sub_1C2E12C(&StringLiteral_23927/*"stageId"*/, v15);
    sub_1C2E12C(&StringLiteral_23413/*"routeSelect"*/, v16);
    sub_1C2E12C(&StringLiteral_24825/*"useTreasureDevices"*/, v17);
    sub_1C2E12C(&StringLiteral_25091/*"warBoardBattleInfo"*/, v18);
    sub_1C2E12C(&StringLiteral_24154/*"svtCommonFlagList"*/, v19);
    sub_1C2E12C(&StringLiteral_17425/*"battleStatus"*/, v20);
    sub_1C2E12C(&StringLiteral_24322/*"tdPlayed"*/, v21);
    sub_1C2E12C(&StringLiteral_25056/*"voicePlayedList"*/, v22);
    sub_1C2E12C(&StringLiteral_17414/*"battleId"*/, v23);
    sub_1C2E12C(&StringLiteral_17417/*"battleResult"*/, v24);
    sub_1C2E12C(&StringLiteral_17028/*"aliveUniqueIds"*/, v25);
    byte_4BFF208 = 1;
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList;
  if ( !Instance )
    goto LABEL_15;
  Instance->fields.localSaveTiming = 4;
  WarBoardData__LocalSave(Instance, 0, 0LL);
  this->fields.subCallBack = callback;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.subCallBack, (int64_t)callback, v28, v29, v30, v31, v32, v33);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23927/*"stageId"*/, stageId, 0LL);
  if ( !arg )
    goto LABEL_15;
  RequestBase__addField_42510212(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_17414/*"battleId"*/,
    arg->fields.battleId,
    0LL);
  v34 = BattleResultRequest_Argument__ConvertVoicePlayedData(arg, 0LL);
  RequestBase__addField_42503872((RequestBase_o *)this, (System_String_o *)StringLiteral_25056/*"voicePlayedList"*/, v34, 0LL);
  Instance = (WarBoardData_o *)arg->fields.firstNpPlayList;
  if ( !Instance )
    goto LABEL_15;
  v35 = System_Collections_Generic_List_object___ToArray(
          (System_Collections_Generic_List_object__o *)Instance,
          (const MethodInfo_366D404 *)Method_System_Collections_Generic_List_Dictionary_string__object___ToArray__);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v36 = JsonManager__toJson(&v35->obj, 0, 0, 0LL);
  RequestBase__addField_42503872((RequestBase_o *)this, (System_String_o *)StringLiteral_24322/*"tdPlayed"*/, v36, 0LL);
  Instance = (WarBoardData_o *)arg->fields.playerServantNoblePhantasmUsageData;
  if ( !Instance )
LABEL_15:
    sub_1C2E388(Instance, v27);
  v37 = PlayerServantNoblePhantasmUsageData__ConvertToJsonString((PlayerServantNoblePhantasmUsageData_o *)Instance, 0LL);
  RequestBase__addField_42503872((RequestBase_o *)this, (System_String_o *)StringLiteral_24825/*"useTreasureDevices"*/, v37, 0LL);
  v38 = JsonManager__toJson((Il2CppObject *)arg->fields.svtCommonFlagDict, 0, 0, 0LL);
  RequestBase__addField_42503872((RequestBase_o *)this, (System_String_o *)StringLiteral_24154/*"svtCommonFlagList"*/, v38, 0LL);
  v39 = JsonManager__toJson(&arg->fields.aliveUniqueIds->obj, 0, 0, 0LL);
  RequestBase__addField_42503872((RequestBase_o *)this, (System_String_o *)StringLiteral_17028/*"aliveUniqueIds"*/, v39, 0LL);
  v40 = BattleResultRequest_Argument__ConvertBattleStatus(arg, 0LL);
  RequestBase__addField_42510212((RequestBase_o *)this, (System_String_o *)StringLiteral_17425/*"battleStatus"*/, v40, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17417/*"battleResult"*/, arg->fields.battleResult, 0LL);
  v41 = (Il2CppObject *)JsonManager__toJson(warBoardBattleInfo, 0, 0, 0LL);
  v42 = RequestBase__PackToMessagePack((RequestBase_o *)this, v41, 0LL);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v43 = CatAndMouseGame__CatGame5Bytes(v42, 0LL);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v44 = System_Convert__ToBase64String(v43, 0LL);
  RequestBase__addField_42503872((RequestBase_o *)this, (System_String_o *)StringLiteral_25091/*"warBoardBattleInfo"*/, v44, 0LL);
  RequestBase__addField_42512364(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_23413/*"routeSelect"*/,
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
  if ( (byte_4BFF207 & 1) == 0 )
  {
    sub_1C2E12C(&NetworkManager_TypeInfo, method);
    byte_4BFF207 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__RequestStart((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall WarBoardBattleResultRequest__getURL(
        WarBoardBattleResultRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4BFF206 & 1) == 0 )
  {
    sub_1C2E12C(&NetworkManager_TypeInfo, method);
    sub_1C2E12C(&StringLiteral_25076/*"warBoard/battleResult"*/, v2);
    byte_4BFF206 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_63235584(BaseUrl, (System_String_o *)StringLiteral_25076/*"warBoard/battleResult"*/, 0LL);
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  ResponseData_o *v11; // x0
  const MethodInfo *v12; // x2
  ResponseData_o *v13; // x20
  System_Collections_Generic_Dictionary_object__object__o *success; // x20
  Il2CppObject *Item; // x0
  Il2CppObject *v16; // x0
  System_Action_T__o *subCallBack; // x21
  Il2CppObject *v18; // x0
  System_String_o *v19; // x1

  if ( (byte_4BFF209 & 1) == 0 )
  {
    sub_1C2E12C(&Method_ActionExtensions_Call_string___, responseList);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__, v6);
    sub_1C2E12C(&JsonManager_TypeInfo, v7);
    sub_1C2E12C(&ResponseCommandKind_TypeInfo, v8);
    sub_1C2E12C(&StringLiteral_22468/*"ng"*/, v9);
    sub_1C2E12C(&StringLiteral_25092/*"warBoardData"*/, v10);
    byte_4BFF209 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v11 = ResponseCommandKind__SearchData(99, responseList, 0LL);
  if ( v11
    && (v13 = v11, ResponseData__checkError(v11, v11->fields.resCode, v12))
    && (success = (System_Collections_Generic_Dictionary_object__object__o *)v13->fields.success) != 0LL )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             success,
             (Il2CppObject *)StringLiteral_25092/*"warBoardData"*/,
             (const MethodInfo_3335AF4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v16 = RequestBase__UnpackToMessagePack((RequestBase_o *)this, Item, 0LL);
    System_Collections_Generic_Dictionary_object__object___set_Item(
      success,
      (Il2CppObject *)StringLiteral_25092/*"warBoardData"*/,
      v16,
      (const MethodInfo_3335B60 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    subCallBack = (System_Action_T__o *)this->fields.subCallBack;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v18 = (Il2CppObject *)JsonManager__toJson((Il2CppObject *)success, 0, 0, 0LL);
    ActionExtensions__Call_object_(subCallBack, v18, (const MethodInfo_2F23FA0 *)Method_ActionExtensions_Call_string___);
    v19 = JsonManager__toJson((Il2CppObject *)success, 0, 0, 0LL);
  }
  else
  {
    v19 = (System_String_o *)StringLiteral_22468/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v19, 0LL);
}