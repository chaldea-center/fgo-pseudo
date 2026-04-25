void WarBoardBattleResultRequest__beginRequest(
        WarBoardBattleResultRequest_o *this,
        int32_t stageId,
        BattleResultRequest_Argument_o *arg,
        Il2CppObject *warBoardBattleInfo,
        System_Action_string__o *callback,
        const MethodInfo *method)
{
  WarBoardData_o *Instance; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x3
  System_String_o *v21; // x0
  const MethodInfo *v22; // x3
  System_Object_array *v23; // x22
  System_String_o *v24; // x0
  const MethodInfo *v25; // x3
  System_String_o *v26; // x0
  const MethodInfo *v27; // x3
  System_String_o *v28; // x0
  const MethodInfo *v29; // x3
  System_String_o *v30; // x0
  const MethodInfo *v31; // x3
  uint32_t v32; // w0
  const MethodInfo *v33; // x3
  const MethodInfo *v34; // x3
  RequestBase_o *v35; // x0
  const MethodInfo *v36; // x2
  System_Byte_array *v37; // x21
  System_Byte_array *v38; // x21
  System_String_o *v39; // x0
  const MethodInfo *v40; // x3
  const MethodInfo *v41; // x3
  const MethodInfo *v42; // x1

  if ( (byte_4E0665E & 1) == 0 )
  {
    sub_1CE6700(&CatAndMouseGame_TypeInfo);
    sub_1CE6700(&System_Convert_TypeInfo);
    sub_1CE6700(&JsonManager_TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_List_Dictionary_string__object___ToArray__);
    sub_1CE6700(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1CE6700(&StringLiteral_24023/*"stageId"*/);
    sub_1CE6700(&StringLiteral_23524/*"routeSelect"*/);
    sub_1CE6700(&StringLiteral_24893/*"useTreasureDevices"*/);
    sub_1CE6700(&StringLiteral_25154/*"warBoardBattleInfo"*/);
    sub_1CE6700(&StringLiteral_24245/*"svtCommonFlagList"*/);
    sub_1CE6700(&StringLiteral_17271/*"battleStatus"*/);
    sub_1CE6700(&StringLiteral_24398/*"tdPlayed"*/);
    sub_1CE6700(&StringLiteral_25120/*"voicePlayedList"*/);
    sub_1CE6700(&StringLiteral_17256/*"battleId"*/);
    sub_1CE6700(&StringLiteral_17261/*"battleResult"*/);
    sub_1CE6700(&StringLiteral_16909/*"aliveUniqueIds"*/);
    byte_4E0665E = 1;
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList;
  if ( !Instance )
    goto LABEL_15;
  Instance->fields.localSaveTiming = 4;
  WarBoardData__LocalSave(Instance, 0, 0);
  this->fields.subCallBack = callback;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.subCallBack, (int32_t)callback, v13, v14, v15, v16, v17, v18);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_24023/*"stageId"*/, stageId, v19);
  if ( !arg )
    goto LABEL_15;
  RequestBase__addField_45375920(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_17256/*"battleId"*/,
    arg->fields.battleId,
    v20);
  v21 = BattleResultRequest_Argument__ConvertVoicePlayedData(arg, 0);
  RequestBase__addField_45365032((RequestBase_o *)this, (System_String_o *)StringLiteral_25120/*"voicePlayedList"*/, v21, v22);
  Instance = (WarBoardData_o *)arg->fields.firstNpPlayList;
  if ( !Instance )
    goto LABEL_15;
  v23 = System_Collections_Generic_List_object___ToArray(
          (System_Collections_Generic_List_object__o *)Instance,
          (const MethodInfo_3907AC0 *)Method_System_Collections_Generic_List_Dictionary_string__object___ToArray__);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v24 = JsonManager__toJson(&v23->obj, 0, 0, 0);
  RequestBase__addField_45365032((RequestBase_o *)this, (System_String_o *)StringLiteral_24398/*"tdPlayed"*/, v24, v25);
  Instance = (WarBoardData_o *)arg->fields.playerServantNoblePhantasmUsageData;
  if ( !Instance )
LABEL_15:
    sub_1CE6958(Instance, v12);
  v26 = PlayerServantNoblePhantasmUsageData__ConvertToJsonString((PlayerServantNoblePhantasmUsageData_o *)Instance, 0);
  RequestBase__addField_45365032((RequestBase_o *)this, (System_String_o *)StringLiteral_24893/*"useTreasureDevices"*/, v26, v27);
  v28 = JsonManager__toJson((Il2CppObject *)arg->fields.svtCommonFlagDict, 0, 0, 0);
  RequestBase__addField_45365032((RequestBase_o *)this, (System_String_o *)StringLiteral_24245/*"svtCommonFlagList"*/, v28, v29);
  v30 = JsonManager__toJson(&arg->fields.aliveUniqueIds->obj, 0, 0, 0);
  RequestBase__addField_45365032((RequestBase_o *)this, (System_String_o *)StringLiteral_16909/*"aliveUniqueIds"*/, v30, v31);
  v32 = BattleResultRequest_Argument__ConvertBattleStatus(arg, 0);
  RequestBase__addField_45375920((RequestBase_o *)this, (System_String_o *)StringLiteral_17271/*"battleStatus"*/, v32, v33);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17261/*"battleResult"*/, arg->fields.battleResult, v34);
  v35 = (RequestBase_o *)JsonManager__toJson(warBoardBattleInfo, 0, 0, 0);
  v37 = RequestBase__PackToMessagePack(v35, (Il2CppObject *)v35, v36);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v38 = CatAndMouseGame__CatGame5Bytes(v37, 0);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v39 = System_Convert__ToBase64String(v38, 0);
  RequestBase__addField_45365032((RequestBase_o *)this, (System_String_o *)StringLiteral_25154/*"warBoardBattleInfo"*/, v39, v40);
  RequestBase__addField_45364676(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_23524/*"routeSelect"*/,
    &arg->fields.routeSelect->obj,
    v41);
  RequestBase__beginRequest((RequestBase_o *)this, v42);
}


bool WarBoardBattleResultRequest__errorRequest(
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


void WarBoardBattleResultRequest__errorRetry(WarBoardBattleResultRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4E0665D & 1) == 0 )
  {
    sub_1CE6700(&NetworkManager_TypeInfo);
    byte_4E0665D = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__RequestStart((RequestBase_o *)this, 0);
}


System_String_o *WarBoardBattleResultRequest__getURL(WarBoardBattleResultRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4E0665C & 1) == 0 )
  {
    sub_1CE6700(&NetworkManager_TypeInfo);
    sub_1CE6700(&StringLiteral_25139/*"warBoard/battleResult"*/);
    byte_4E0665C = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_65122828(BaseUrl, (System_String_o *)StringLiteral_25139/*"warBoard/battleResult"*/, 0);
}


bool WarBoardBattleResultRequest__isAutoRetryRequest(WarBoardBattleResultRequest_o *this, const MethodInfo *method)
{
  return 1;
}


void WarBoardBattleResultRequest__requestCompleted(
        WarBoardBattleResultRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  const MethodInfo *v6; // x2
  ResponseData_o *v7; // x20
  System_Collections_Generic_Dictionary_object__object__o *success; // x20
  Il2CppObject *Item; // x0
  const MethodInfo *v10; // x2
  Il2CppObject *v11; // x0
  System_Action_T__o *subCallBack; // x21
  Il2CppObject *v13; // x0
  System_String_o *v14; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  struct NetworkManager_ResultCallbackFunc_o *v16; // x8

  if ( (byte_4E0665F & 1) == 0 )
  {
    sub_1CE6700(&Method_ActionExtensions_Call_string___);
    sub_1CE6700(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1CE6700(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    sub_1CE6700(&JsonManager_TypeInfo);
    sub_1CE6700(&ResponseCommandKind_TypeInfo);
    sub_1CE6700(&StringLiteral_22555/*"ng"*/);
    sub_1CE6700(&StringLiteral_25155/*"warBoardData"*/);
    byte_4E0665F = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(99, responseList, 0);
  if ( v5
    && (v7 = v5, ResponseData__checkError(v5, v5->fields.resCode, v6))
    && (success = (System_Collections_Generic_Dictionary_object__object__o *)v7->fields.success) != 0 )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             success,
             (Il2CppObject *)StringLiteral_25155/*"warBoardData"*/,
             (const MethodInfo_35B4910 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v11 = RequestBase__UnpackToMessagePack((RequestBase_o *)Item, Item, v10);
    System_Collections_Generic_Dictionary_object__object___set_Item(
      success,
      (Il2CppObject *)StringLiteral_25155/*"warBoardData"*/,
      v11,
      (const MethodInfo_35B497C *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    subCallBack = (System_Action_T__o *)this->fields.subCallBack;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v13 = (Il2CppObject *)JsonManager__toJson((Il2CppObject *)success, 0, 0, 0);
    ActionExtensions__Call_object_(subCallBack, v13, (const MethodInfo_3149A44 *)Method_ActionExtensions_Call_string___);
    v14 = JsonManager__toJson((Il2CppObject *)success, 0, 0, 0);
    CallBack = this->fields.CallBack;
    if ( CallBack )
      ((void (__fastcall *)(intptr_t, System_String_o *, intptr_t))CallBack->fields.invoke_impl)(
        CallBack->fields.method_code,
        v14,
        CallBack->fields.method);
  }
  else
  {
    v16 = this->fields.CallBack;
    if ( v16 )
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))v16->fields.invoke_impl)(
        v16->fields.method_code,
        StringLiteral_22555/*"ng"*/,
        v16->fields.method);
  }
}