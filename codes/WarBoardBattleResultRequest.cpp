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
  const MethodInfo *v29; // x3
  const MethodInfo *v30; // x3
  const MethodInfo *v31; // x3
  System_String_o *v32; // x0
  const MethodInfo *v33; // x3
  System_Object_array *v34; // x22
  System_String_o *v35; // x0
  const MethodInfo *v36; // x3
  System_String_o *v37; // x0
  const MethodInfo *v38; // x3
  System_String_o *v39; // x0
  const MethodInfo *v40; // x3
  System_String_o *v41; // x0
  const MethodInfo *v42; // x3
  uint32_t v43; // w0
  const MethodInfo *v44; // x3
  const MethodInfo *v45; // x3
  RequestBase_o *v46; // x0
  const MethodInfo *v47; // x2
  System_Byte_array *v48; // x21
  System_Byte_array *v49; // x21
  System_String_o *v50; // x0
  const MethodInfo *v51; // x3
  const MethodInfo *v52; // x3
  const MethodInfo *v53; // x1

  if ( (byte_4A50000 & 1) == 0 )
  {
    sub_1B863B8(&CatAndMouseGame_TypeInfo, *(_QWORD *)&stageId);
    sub_1B863B8(&System_Convert_TypeInfo, v11);
    sub_1B863B8(&JsonManager_TypeInfo, v12);
    sub_1B863B8(&Method_System_Collections_Generic_List_Dictionary_string__object___ToArray__, v13);
    sub_1B863B8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v14);
    sub_1B863B8(&StringLiteral_23328/*"stageId"*/, v15);
    sub_1B863B8(&StringLiteral_22823/*"routeSelect"*/, v16);
    sub_1B863B8(&StringLiteral_24199/*"useTreasureDevices"*/, v17);
    sub_1B863B8(&StringLiteral_24463/*"warBoardBattleInfo"*/, v18);
    sub_1B863B8(&StringLiteral_23544/*"svtCommonFlagList"*/, v19);
    sub_1B863B8(&StringLiteral_16881/*"battleStatus"*/, v20);
    sub_1B863B8(&StringLiteral_23709/*"tdPlayed"*/, v21);
    sub_1B863B8(&StringLiteral_24428/*"voicePlayedList"*/, v22);
    sub_1B863B8(&StringLiteral_16868/*"battleId"*/, v23);
    sub_1B863B8(&StringLiteral_16873/*"battleResult"*/, v24);
    sub_1B863B8(&StringLiteral_16498/*"aliveUniqueIds"*/, v25);
    byte_4A50000 = 1;
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList;
  if ( !Instance )
    goto LABEL_15;
  Instance->fields.localSaveTiming = 4;
  WarBoardData__LocalSave(Instance, 0, 0LL);
  this->fields.subCallBack = callback;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.subCallBack, (int32_t)callback, v28, v29);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23328/*"stageId"*/, stageId, v30);
  if ( !arg )
    goto LABEL_15;
  RequestBase__addField_42287768(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_16868/*"battleId"*/,
    arg->fields.battleId,
    v31);
  v32 = BattleResultRequest_Argument__ConvertVoicePlayedData(arg, 0LL);
  RequestBase__addField_42282000((RequestBase_o *)this, (System_String_o *)StringLiteral_24428/*"voicePlayedList"*/, v32, v33);
  Instance = (WarBoardData_o *)arg->fields.firstNpPlayList;
  if ( !Instance )
    goto LABEL_15;
  v34 = System_Collections_Generic_List_object___ToArray(
          (System_Collections_Generic_List_object__o *)Instance,
          (const MethodInfo_35FE4B0 *)Method_System_Collections_Generic_List_Dictionary_string__object___ToArray__);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v35 = JsonManager__toJson(&v34->obj, 0, 0, 0LL);
  RequestBase__addField_42282000((RequestBase_o *)this, (System_String_o *)StringLiteral_23709/*"tdPlayed"*/, v35, v36);
  Instance = (WarBoardData_o *)arg->fields.playerServantNoblePhantasmUsageData;
  if ( !Instance )
LABEL_15:
    sub_1B86614(Instance, v27);
  v37 = PlayerServantNoblePhantasmUsageData__ConvertToJsonString((PlayerServantNoblePhantasmUsageData_o *)Instance, 0LL);
  RequestBase__addField_42282000((RequestBase_o *)this, (System_String_o *)StringLiteral_24199/*"useTreasureDevices"*/, v37, v38);
  v39 = JsonManager__toJson((Il2CppObject *)arg->fields.svtCommonFlagDict, 0, 0, 0LL);
  RequestBase__addField_42282000((RequestBase_o *)this, (System_String_o *)StringLiteral_23544/*"svtCommonFlagList"*/, v39, v40);
  v41 = JsonManager__toJson(&arg->fields.aliveUniqueIds->obj, 0, 0, 0LL);
  RequestBase__addField_42282000((RequestBase_o *)this, (System_String_o *)StringLiteral_16498/*"aliveUniqueIds"*/, v41, v42);
  v43 = BattleResultRequest_Argument__ConvertBattleStatus(arg, 0LL);
  RequestBase__addField_42287768((RequestBase_o *)this, (System_String_o *)StringLiteral_16881/*"battleStatus"*/, v43, v44);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_16873/*"battleResult"*/, arg->fields.battleResult, v45);
  v46 = (RequestBase_o *)JsonManager__toJson(warBoardBattleInfo, 0, 0, 0LL);
  v48 = RequestBase__PackToMessagePack(v46, (Il2CppObject *)v46, v47);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v49 = CatAndMouseGame__CatGame5Bytes(v48, 0LL);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v50 = System_Convert__ToBase64String(v49, 0LL);
  RequestBase__addField_42282000((RequestBase_o *)this, (System_String_o *)StringLiteral_24463/*"warBoardBattleInfo"*/, v50, v51);
  RequestBase__addField_42288224(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_22823/*"routeSelect"*/,
    &arg->fields.routeSelect->obj,
    v52);
  RequestBase__beginRequest((RequestBase_o *)this, v53);
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
  if ( (byte_4A4FFFF & 1) == 0 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, method);
    byte_4A4FFFF = 1;
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

  if ( (byte_4A4FFFE & 1) == 0 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, method);
    sub_1B863B8(&StringLiteral_24448/*"warBoard/battleResult"*/, v2);
    byte_4A4FFFE = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61645176(BaseUrl, (System_String_o *)StringLiteral_24448/*"warBoard/battleResult"*/, 0LL);
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
  const MethodInfo *v16; // x2
  Il2CppObject *v17; // x0
  System_Action_T__o *subCallBack; // x21
  Il2CppObject *v19; // x0
  System_String_o *v20; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  struct NetworkManager_ResultCallbackFunc_o *v22; // x8

  if ( (byte_4A50001 & 1) == 0 )
  {
    sub_1B863B8(&Method_ActionExtensions_Call_string___, responseList);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__, v6);
    sub_1B863B8(&JsonManager_TypeInfo, v7);
    sub_1B863B8(&ResponseCommandKind_TypeInfo, v8);
    sub_1B863B8(&StringLiteral_21893/*"ng"*/, v9);
    sub_1B863B8(&StringLiteral_24464/*"warBoardData"*/, v10);
    byte_4A50001 = 1;
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
             (Il2CppObject *)StringLiteral_24464/*"warBoardData"*/,
             (const MethodInfo_32CE660 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v17 = RequestBase__UnpackToMessagePack((RequestBase_o *)Item, Item, v16);
    System_Collections_Generic_Dictionary_object__object___set_Item(
      success,
      (Il2CppObject *)StringLiteral_24464/*"warBoardData"*/,
      v17,
      (const MethodInfo_32CE6CC *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    subCallBack = (System_Action_T__o *)this->fields.subCallBack;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v19 = (Il2CppObject *)JsonManager__toJson((Il2CppObject *)success, 0, 0, 0LL);
    ActionExtensions__Call_object_(subCallBack, v19, (const MethodInfo_2EBFBE4 *)Method_ActionExtensions_Call_string___);
    v20 = JsonManager__toJson((Il2CppObject *)success, 0, 0, 0LL);
    CallBack = this->fields.CallBack;
    if ( CallBack )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))CallBack->fields.m_target)(
        CallBack->fields.original_method_info,
        v20,
        *(_QWORD *)&CallBack->fields.extra_arg);
  }
  else
  {
    v22 = this->fields.CallBack;
    if ( v22 )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v22->fields.m_target)(
        v22->fields.original_method_info,
        StringLiteral_21893/*"ng"*/,
        *(_QWORD *)&v22->fields.extra_arg);
  }
}