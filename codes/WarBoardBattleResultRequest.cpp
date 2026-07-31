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
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x3
  System_String_o *v21; // x0
  const MethodInfo *v22; // x3
  __int64 v23; // x1
  System_Object_array *v24; // x22
  System_String_o *v25; // x0
  const MethodInfo *v26; // x3
  System_String_o *v27; // x0
  const MethodInfo *v28; // x3
  System_String_o *v29; // x0
  const MethodInfo *v30; // x3
  System_String_o *v31; // x0
  const MethodInfo *v32; // x3
  uint32_t v33; // w0
  const MethodInfo *v34; // x3
  const MethodInfo *v35; // x3
  RequestBase_o *v36; // x0
  const MethodInfo *v37; // x2
  __int64 v38; // x1
  System_Byte_array *v39; // x21
  __int64 v40; // x1
  System_Byte_array *v41; // x21
  System_String_o *v42; // x0
  const MethodInfo *v43; // x3
  const MethodInfo *v44; // x3
  const MethodInfo *v45; // x1

  if ( (byte_593A359 & 1) == 0 )
  {
    sub_21FFC50(&CatAndMouseGame_TypeInfo);
    sub_21FFC50(&System_Convert_TypeInfo);
    sub_21FFC50(&JsonManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Dictionary_string__object___ToArray__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_21FFC50(&StringLiteral_24856/*"stageId"*/);
    sub_21FFC50(&StringLiteral_24314/*"routeSelect"*/);
    sub_21FFC50(&StringLiteral_25792/*"useTreasureDevices"*/);
    sub_21FFC50(&StringLiteral_26066/*"warBoardBattleInfo"*/);
    sub_21FFC50(&StringLiteral_25087/*"svtCommonFlagList"*/);
    sub_21FFC50(&StringLiteral_17786/*"battleStatus"*/);
    sub_21FFC50(&StringLiteral_25242/*"tdPlayed"*/);
    sub_21FFC50(&StringLiteral_26032/*"voicePlayedList"*/);
    sub_21FFC50(&StringLiteral_17769/*"battleId"*/);
    sub_21FFC50(&StringLiteral_17776/*"battleResult"*/);
    sub_21FFC50(&StringLiteral_17401/*"aliveUniqueIds"*/);
    byte_593A359 = 1;
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList;
  if ( !Instance )
    goto LABEL_15;
  Instance->fields.localSaveTiming = 4;
  WarBoardData__LocalSave(Instance, 0, 0);
  this->fields.subCallBack = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.subCallBack,
    (int32_t)callback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_24856/*"stageId"*/, stageId, v19);
  if ( !arg )
    goto LABEL_15;
  RequestBase__addField_51200900(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_17769/*"battleId"*/,
    arg->fields.battleId,
    v20);
  v21 = BattleResultRequest_Argument__ConvertVoicePlayedData(arg, 0);
  RequestBase__addField_51187332((RequestBase_o *)this, (System_String_o *)StringLiteral_26032/*"voicePlayedList"*/, v21, v22);
  Instance = (WarBoardData_o *)arg->fields.firstNpPlayList;
  if ( !Instance )
    goto LABEL_15;
  v24 = System_Collections_Generic_List_object___ToArray(
          (System_Collections_Generic_List_object__o *)Instance,
          (const MethodInfo_445164C *)Method_System_Collections_Generic_List_Dictionary_string__object___ToArray__);
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v23);
  v25 = JsonManager__toJson(&v24->obj, 0, 0, 0);
  RequestBase__addField_51187332((RequestBase_o *)this, (System_String_o *)StringLiteral_25242/*"tdPlayed"*/, v25, v26);
  Instance = (WarBoardData_o *)arg->fields.playerServantNoblePhantasmUsageData;
  if ( !Instance )
LABEL_15:
    sub_21FFECC(Instance, v12);
  v27 = PlayerServantNoblePhantasmUsageData__ConvertToJsonString((PlayerServantNoblePhantasmUsageData_o *)Instance, 0);
  RequestBase__addField_51187332((RequestBase_o *)this, (System_String_o *)StringLiteral_25792/*"useTreasureDevices"*/, v27, v28);
  v29 = JsonManager__toJson((Il2CppObject *)arg->fields.svtCommonFlagDict, 0, 0, 0);
  RequestBase__addField_51187332((RequestBase_o *)this, (System_String_o *)StringLiteral_25087/*"svtCommonFlagList"*/, v29, v30);
  v31 = JsonManager__toJson(&arg->fields.aliveUniqueIds->obj, 0, 0, 0);
  RequestBase__addField_51187332((RequestBase_o *)this, (System_String_o *)StringLiteral_17401/*"aliveUniqueIds"*/, v31, v32);
  v33 = BattleResultRequest_Argument__ConvertBattleStatus(arg, 0);
  RequestBase__addField_51200900((RequestBase_o *)this, (System_String_o *)StringLiteral_17786/*"battleStatus"*/, v33, v34);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17776/*"battleResult"*/, arg->fields.battleResult, v35);
  v36 = (RequestBase_o *)JsonManager__toJson(warBoardBattleInfo, 0, 0, 0);
  v39 = RequestBase__PackToMessagePack(v36, (Il2CppObject *)v36, v37);
  if ( !*(&CatAndMouseGame_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo, v38);
  v41 = CatAndMouseGame__CatGame5Bytes(v39, 0);
  if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v40);
  v42 = System_Convert__ToBase64String(v41, 0);
  RequestBase__addField_51187332((RequestBase_o *)this, (System_String_o *)StringLiteral_26066/*"warBoardBattleInfo"*/, v42, v43);
  RequestBase__addField_51191900(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_24314/*"routeSelect"*/,
    &arg->fields.routeSelect->obj,
    v44);
  RequestBase__beginRequest((RequestBase_o *)this, v45);
}


bool WarBoardBattleResultRequest__errorRequest(
        WarBoardBattleResultRequest_o *this,
        System_String_o *errorCode,
        const MethodInfo *method)
{
  int32_t retryCount; // w9
  bool result; // w0
  int32_t v6; // w9

  retryCount = this->fields.retryCount;
  result = retryCount < 3;
  if ( retryCount < 3 )
    v6 = retryCount + 1;
  else
    v6 = 0;
  this->fields.retryCount = v6;
  return result;
}


void WarBoardBattleResultRequest__errorRetry(WarBoardBattleResultRequest_o *this, const MethodInfo *method)
{
  if ( (byte_593A358 & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_593A358 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  NetworkManager__RequestStart((RequestBase_o *)this, 0);
}


System_String_o *WarBoardBattleResultRequest__getURL(WarBoardBattleResultRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_593A357 & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&StringLiteral_26051/*"warBoard/battleResult"*/);
    byte_593A357 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_75438412(BaseUrl, (System_String_o *)StringLiteral_26051/*"warBoard/battleResult"*/, 0);
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
  __int64 v12; // x1
  System_Action_T__o *subCallBack; // x21
  Il2CppObject *v14; // x0
  System_String_o *v15; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 v17; // x1

  if ( (byte_593A35A & 1) == 0 )
  {
    sub_21FFC50(&Method_ActionExtensions_Call_string___);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    sub_21FFC50(&JsonManager_TypeInfo);
    sub_21FFC50(&ResponseCommandKind_TypeInfo);
    sub_21FFC50(&StringLiteral_23290/*"ng"*/);
    sub_21FFC50(&StringLiteral_26067/*"warBoardData"*/);
    byte_593A35A = 1;
  }
  if ( !*(&ResponseCommandKind_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v5 = ResponseCommandKind__SearchData(99, responseList, 0);
  if ( !v5
    || (v7 = v5, !ResponseData__checkError(v5, v5->fields.resCode, v6))
    || (success = (System_Collections_Generic_Dictionary_object__object__o *)v7->fields.success) == 0 )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v17 = StringLiteral_23290/*"ng"*/;
    goto LABEL_14;
  }
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           success,
           (Il2CppObject *)StringLiteral_26067/*"warBoardData"*/,
           (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v11 = RequestBase__UnpackToMessagePack((RequestBase_o *)Item, Item, v10);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    success,
    (Il2CppObject *)StringLiteral_26067/*"warBoardData"*/,
    v11,
    (const MethodInfo_3FCA454 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  subCallBack = (System_Action_T__o *)this->fields.subCallBack;
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v12);
  v14 = (Il2CppObject *)JsonManager__toJson((Il2CppObject *)success, 0, 0, 0);
  ActionExtensions__Call_object_(subCallBack, v14, (const MethodInfo_36CDF5C *)Method_ActionExtensions_Call_string___);
  v15 = JsonManager__toJson((Il2CppObject *)success, 0, 0, 0);
  CallBack = this->fields.CallBack;
  if ( CallBack )
  {
    v17 = (__int64)v15;
LABEL_14:
    ((void (__fastcall *)(intptr_t, __int64, intptr_t))CallBack->fields.invoke_impl)(
      CallBack->fields.method_code,
      v17,
      CallBack->fields.method);
  }
}