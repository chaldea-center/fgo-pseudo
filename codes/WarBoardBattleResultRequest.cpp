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
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x0
  System_Object_array *v31; // x22
  System_String_o *v32; // x0
  System_String_o *v33; // x0
  System_String_o *v34; // x0
  System_String_o *v35; // x0
  uint32_t v36; // w0
  Il2CppObject *v37; // x0
  System_Byte_array *v38; // x21
  System_Byte_array *v39; // x21
  System_String_o *v40; // x0

  if ( (byte_4AB7715 & 1) == 0 )
  {
    sub_1BAB41C(&CatAndMouseGame_TypeInfo, *(_QWORD *)&stageId);
    sub_1BAB41C(&System_Convert_TypeInfo, v11);
    sub_1BAB41C(&JsonManager_TypeInfo, v12);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Dictionary_string__object___ToArray__, v13);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v14);
    sub_1BAB41C(&StringLiteral_23516/*"stageId"*/, v15);
    sub_1BAB41C(&StringLiteral_23009/*"routeSelect"*/, v16);
    sub_1BAB41C(&StringLiteral_24405/*"useTreasureDevices"*/, v17);
    sub_1BAB41C(&StringLiteral_24667/*"warBoardBattleInfo"*/, v18);
    sub_1BAB41C(&StringLiteral_23742/*"svtCommonFlagList"*/, v19);
    sub_1BAB41C(&StringLiteral_17155/*"battleStatus"*/, v20);
    sub_1BAB41C(&StringLiteral_23907/*"tdPlayed"*/, v21);
    sub_1BAB41C(&StringLiteral_24633/*"voicePlayedList"*/, v22);
    sub_1BAB41C(&StringLiteral_17146/*"battleId"*/, v23);
    sub_1BAB41C(&StringLiteral_17149/*"battleResult"*/, v24);
    sub_1BAB41C(&StringLiteral_16763/*"aliveUniqueIds"*/, v25);
    byte_4AB7715 = 1;
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList;
  if ( !Instance )
    goto LABEL_15;
  Instance->fields.localSaveTiming = 4;
  WarBoardData__LocalSave(Instance, 0, 0LL);
  this->fields.subCallBack = callback;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.subCallBack, (int32_t)callback, v28, v29);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23516/*"stageId"*/, stageId, 0LL);
  if ( !arg )
    goto LABEL_15;
  RequestBase__addField_41522804(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_17146/*"battleId"*/,
    arg->fields.battleId,
    0LL);
  v30 = BattleResultRequest_Argument__ConvertVoicePlayedData(arg, 0LL);
  RequestBase__addField_41516464((RequestBase_o *)this, (System_String_o *)StringLiteral_24633/*"voicePlayedList"*/, v30, 0LL);
  Instance = (WarBoardData_o *)arg->fields.firstNpPlayList;
  if ( !Instance )
    goto LABEL_15;
  v31 = System_Collections_Generic_List_object___ToArray(
          (System_Collections_Generic_List_object__o *)Instance,
          (const MethodInfo_354F414 *)Method_System_Collections_Generic_List_Dictionary_string__object___ToArray__);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v32 = JsonManager__toJson(&v31->obj, 0, 0, 0LL);
  RequestBase__addField_41516464((RequestBase_o *)this, (System_String_o *)StringLiteral_23907/*"tdPlayed"*/, v32, 0LL);
  Instance = (WarBoardData_o *)arg->fields.playerServantNoblePhantasmUsageData;
  if ( !Instance )
LABEL_15:
    sub_1BAB678(Instance, v27);
  v33 = PlayerServantNoblePhantasmUsageData__ConvertToJsonString((PlayerServantNoblePhantasmUsageData_o *)Instance, 0LL);
  RequestBase__addField_41516464((RequestBase_o *)this, (System_String_o *)StringLiteral_24405/*"useTreasureDevices"*/, v33, 0LL);
  v34 = JsonManager__toJson((Il2CppObject *)arg->fields.svtCommonFlagDict, 0, 0, 0LL);
  RequestBase__addField_41516464((RequestBase_o *)this, (System_String_o *)StringLiteral_23742/*"svtCommonFlagList"*/, v34, 0LL);
  v35 = JsonManager__toJson(&arg->fields.aliveUniqueIds->obj, 0, 0, 0LL);
  RequestBase__addField_41516464((RequestBase_o *)this, (System_String_o *)StringLiteral_16763/*"aliveUniqueIds"*/, v35, 0LL);
  v36 = BattleResultRequest_Argument__ConvertBattleStatus(arg, 0LL);
  RequestBase__addField_41522804((RequestBase_o *)this, (System_String_o *)StringLiteral_17155/*"battleStatus"*/, v36, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17149/*"battleResult"*/, arg->fields.battleResult, 0LL);
  v37 = (Il2CppObject *)JsonManager__toJson(warBoardBattleInfo, 0, 0, 0LL);
  v38 = RequestBase__PackToMessagePack((RequestBase_o *)this, v37, 0LL);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v39 = CatAndMouseGame__CatGame5Bytes(v38, 0LL);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v40 = System_Convert__ToBase64String(v39, 0LL);
  RequestBase__addField_41516464((RequestBase_o *)this, (System_String_o *)StringLiteral_24667/*"warBoardBattleInfo"*/, v40, 0LL);
  RequestBase__addField_41524956(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_23009/*"routeSelect"*/,
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
  if ( (byte_4AB7714 & 1) == 0 )
  {
    sub_1BAB41C(&NetworkManager_TypeInfo, method);
    byte_4AB7714 = 1;
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

  if ( (byte_4AB7713 & 1) == 0 )
  {
    sub_1BAB41C(&NetworkManager_TypeInfo, method);
    sub_1BAB41C(&StringLiteral_24652/*"warBoard/battleResult"*/, v2);
    byte_4AB7713 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62048128(BaseUrl, (System_String_o *)StringLiteral_24652/*"warBoard/battleResult"*/, 0LL);
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

  if ( (byte_4AB7716 & 1) == 0 )
  {
    sub_1BAB41C(&Method_ActionExtensions_Call_string___, responseList);
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v5);
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__, v6);
    sub_1BAB41C(&JsonManager_TypeInfo, v7);
    sub_1BAB41C(&ResponseCommandKind_TypeInfo, v8);
    sub_1BAB41C(&StringLiteral_22090/*"ng"*/, v9);
    sub_1BAB41C(&StringLiteral_24668/*"warBoardData"*/, v10);
    byte_4AB7716 = 1;
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
             (Il2CppObject *)StringLiteral_24668/*"warBoardData"*/,
             (const MethodInfo_32134CC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v16 = RequestBase__UnpackToMessagePack((RequestBase_o *)this, Item, 0LL);
    System_Collections_Generic_Dictionary_object__object___set_Item(
      success,
      (Il2CppObject *)StringLiteral_24668/*"warBoardData"*/,
      v16,
      (const MethodInfo_3213538 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    subCallBack = (System_Action_T__o *)this->fields.subCallBack;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v18 = (Il2CppObject *)JsonManager__toJson((Il2CppObject *)success, 0, 0, 0LL);
    ActionExtensions__Call_object_(subCallBack, v18, (const MethodInfo_2E184C8 *)Method_ActionExtensions_Call_string___);
    v19 = JsonManager__toJson((Il2CppObject *)success, 0, 0, 0LL);
  }
  else
  {
    v19 = (System_String_o *)StringLiteral_22090/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v19, 0LL);
}