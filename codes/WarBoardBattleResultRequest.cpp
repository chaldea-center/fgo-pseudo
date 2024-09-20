void __fastcall WarBoardBattleResultRequest___ctor(WarBoardBattleResultRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall WarBoardBattleResultRequest__beginRequest(
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
  System_String_o *v15; // x0
  System_Object_array *v16; // x22
  System_String_o *v17; // x0
  System_String_o *v18; // x0
  System_String_o *v19; // x0
  System_String_o *v20; // x0
  uint32_t v21; // w0
  Il2CppObject *v22; // x0
  System_Byte_array *v23; // x21
  System_Byte_array *v24; // x21
  System_String_o *v25; // x0

  if ( (byte_4A5CB1B & 1) == 0 )
  {
    sub_1B885B0(&CatAndMouseGame_TypeInfo);
    sub_1B885B0(&System_Convert_TypeInfo);
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Dictionary_string__object___ToArray__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1B885B0(&StringLiteral_23477/*"stageId"*/);
    sub_1B885B0(&StringLiteral_22969/*"routeSelect"*/);
    sub_1B885B0(&StringLiteral_24364/*"useTreasureDevices"*/);
    sub_1B885B0(&StringLiteral_24625/*"warBoardBattleInfo"*/);
    sub_1B885B0(&StringLiteral_23703/*"svtCommonFlagList"*/);
    sub_1B885B0(&StringLiteral_17122/*"battleStatus"*/);
    sub_1B885B0(&StringLiteral_23868/*"tdPlayed"*/);
    sub_1B885B0(&StringLiteral_24591/*"voicePlayedList"*/);
    sub_1B885B0(&StringLiteral_17113/*"battleId"*/);
    sub_1B885B0(&StringLiteral_17116/*"battleResult"*/);
    sub_1B885B0(&StringLiteral_16732/*"aliveUniqueIds"*/);
    byte_4A5CB1B = 1;
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList;
  if ( !Instance )
    goto LABEL_15;
  Instance->fields.localSaveTiming = 4;
  WarBoardData__LocalSave(Instance, 0, 0LL);
  this->fields.subCallBack = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.subCallBack, (int32_t)callback, v13, v14);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23477/*"stageId"*/, stageId, 0LL);
  if ( !arg )
    goto LABEL_15;
  RequestBase__addField_41133280(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_17113/*"battleId"*/,
    arg->fields.battleId,
    0LL);
  v15 = BattleResultRequest_Argument__ConvertVoicePlayedData(arg, 0LL);
  RequestBase__addField_41126952((RequestBase_o *)this, (System_String_o *)StringLiteral_24591/*"voicePlayedList"*/, v15, 0LL);
  Instance = (WarBoardData_o *)arg->fields.firstNpPlayList;
  if ( !Instance )
    goto LABEL_15;
  v16 = System_Collections_Generic_List_object___ToArray(
          (System_Collections_Generic_List_object__o *)Instance,
          (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_Dictionary_string__object___ToArray__);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v17 = JsonManager__toJson(&v16->obj, 0, 0, 0LL);
  RequestBase__addField_41126952((RequestBase_o *)this, (System_String_o *)StringLiteral_23868/*"tdPlayed"*/, v17, 0LL);
  Instance = (WarBoardData_o *)arg->fields.playerServantNoblePhantasmUsageData;
  if ( !Instance )
LABEL_15:
    sub_1B8880C(Instance, v12);
  v18 = PlayerServantNoblePhantasmUsageData__ConvertToJsonString((PlayerServantNoblePhantasmUsageData_o *)Instance, 0LL);
  RequestBase__addField_41126952((RequestBase_o *)this, (System_String_o *)StringLiteral_24364/*"useTreasureDevices"*/, v18, 0LL);
  v19 = JsonManager__toJson((Il2CppObject *)arg->fields.svtCommonFlagDict, 0, 0, 0LL);
  RequestBase__addField_41126952((RequestBase_o *)this, (System_String_o *)StringLiteral_23703/*"svtCommonFlagList"*/, v19, 0LL);
  v20 = JsonManager__toJson(&arg->fields.aliveUniqueIds->obj, 0, 0, 0LL);
  RequestBase__addField_41126952((RequestBase_o *)this, (System_String_o *)StringLiteral_16732/*"aliveUniqueIds"*/, v20, 0LL);
  v21 = BattleResultRequest_Argument__ConvertBattleStatus(arg, 0LL);
  RequestBase__addField_41133280((RequestBase_o *)this, (System_String_o *)StringLiteral_17122/*"battleStatus"*/, v21, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17116/*"battleResult"*/, arg->fields.battleResult, 0LL);
  v22 = (Il2CppObject *)JsonManager__toJson(warBoardBattleInfo, 0, 0, 0LL);
  v23 = RequestBase__PackToMessagePack((RequestBase_o *)this, v22, 0LL);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v24 = CatAndMouseGame__CatGame5Bytes(v23, 0LL);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v25 = System_Convert__ToBase64String(v24, 0LL);
  RequestBase__addField_41126952((RequestBase_o *)this, (System_String_o *)StringLiteral_24625/*"warBoardBattleInfo"*/, v25, 0LL);
  RequestBase__addField_41136012(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_22969/*"routeSelect"*/,
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
  if ( (byte_4A5CB1A & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5CB1A = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__RequestStart((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall WarBoardBattleResultRequest__getURL(
        WarBoardBattleResultRequest_o *this,
        const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4A5CB19 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_24610/*"warBoard/battleResult"*/);
    byte_4A5CB19 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61707032(BaseUrl, (System_String_o *)StringLiteral_24610/*"warBoard/battleResult"*/, 0LL);
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
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  System_Collections_Generic_Dictionary_object__object__o *success; // x20
  Il2CppObject *Item; // x0
  Il2CppObject *v9; // x0
  System_Action_T__o *subCallBack; // x21
  Il2CppObject *v11; // x0
  System_String_o *v12; // x1

  if ( (byte_4A5CB1C & 1) == 0 )
  {
    sub_1B885B0(&Method_ActionExtensions_Call_string___);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&ResponseCommandKind_TypeInfo);
    sub_1B885B0(&StringLiteral_22055/*"ng"*/);
    sub_1B885B0(&StringLiteral_24626/*"warBoardData"*/);
    byte_4A5CB1C = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(99, responseList, 0LL);
  if ( v5
    && (v6 = v5, ResponseData__checkError_41126424(v5, 0LL))
    && (success = (System_Collections_Generic_Dictionary_object__object__o *)v6->fields.success) != 0LL )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             success,
             (Il2CppObject *)StringLiteral_24626/*"warBoardData"*/,
             (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v9 = RequestBase__UnpackToMessagePack((RequestBase_o *)this, Item, 0LL);
    System_Collections_Generic_Dictionary_object__object___set_Item(
      success,
      (Il2CppObject *)StringLiteral_24626/*"warBoardData"*/,
      v9,
      (const MethodInfo_31C71B4 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    subCallBack = (System_Action_T__o *)this->fields.subCallBack;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v11 = (Il2CppObject *)JsonManager__toJson((Il2CppObject *)success, 0, 0, 0LL);
    ActionExtensions__Call_object_(subCallBack, v11, (const MethodInfo_2DD5858 *)Method_ActionExtensions_Call_string___);
    v12 = JsonManager__toJson((Il2CppObject *)success, 0, 0, 0LL);
  }
  else
  {
    v12 = (System_String_o *)StringLiteral_22055/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v12, 0LL);
}