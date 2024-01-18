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
  const MethodInfo *v28; // x2
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_String_o *v35; // x0
  WarBoardUiData_SaveData_array *v36; // x22
  System_String_o *v37; // x0
  System_String_o *v38; // x0
  System_String_o *v39; // x0
  System_String_o *v40; // x0
  uint32_t v41; // w0
  Il2CppObject *v42; // x0
  System_Byte_array *v43; // x21
  System_Byte_array *v44; // x21
  System_String_o *v45; // x0

  if ( (byte_41865CD & 1) == 0 )
  {
    sub_B2C35C(&CatAndMouseGame_TypeInfo, *(_QWORD *)&stageId);
    sub_B2C35C(&System_Convert_TypeInfo, v11);
    sub_B2C35C(&JsonManager_TypeInfo, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_Dictionary_string__object___ToArray__, v13);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v14);
    sub_B2C35C(&StringLiteral_22263/*"stageId"*/, v15);
    sub_B2C35C(&StringLiteral_21857/*"routeSelect"*/, v16);
    sub_B2C35C(&StringLiteral_22986/*"useTreasureDevices"*/, v17);
    sub_B2C35C(&StringLiteral_23214/*"warBoardBattleInfo"*/, v18);
    sub_B2C35C(&StringLiteral_22464/*"svtCommonFlagList"*/, v19);
    sub_B2C35C(&StringLiteral_16657/*"battleStatus"*/, v20);
    sub_B2C35C(&StringLiteral_22623/*"tdPlayed"*/, v21);
    sub_B2C35C(&StringLiteral_23181/*"voicePlayedList"*/, v22);
    sub_B2C35C(&StringLiteral_16649/*"battleId"*/, v23);
    sub_B2C35C(&StringLiteral_16651/*"battleResult"*/, v24);
    sub_B2C35C(&StringLiteral_16305/*"aliveUniqueIds"*/, v25);
    byte_41865CD = 1;
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (WarBoardData_o *)Instance[1].fields.reinforcementsSaveList;
  if ( !Instance )
    goto LABEL_18;
  Instance->fields.localSaveTiming = 4;
  WarBoardData__LocalSave(Instance, 0, v28);
  this->fields.subCallBack = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.subCallBack,
    (System_Int32_array **)callback,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22263/*"stageId"*/, stageId, 0LL);
  if ( !arg )
    goto LABEL_18;
  RequestBase__addField_31051460(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_16649/*"battleId"*/,
    arg->fields.battleId,
    0LL);
  v35 = BattleResultRequest_Argument__ConvertVoicePlayedData(arg, 0LL);
  RequestBase__addField_31051928((RequestBase_o *)this, (System_String_o *)StringLiteral_23181/*"voicePlayedList"*/, v35, 0LL);
  Instance = (WarBoardData_o *)arg->fields.firstNpPlayList;
  if ( !Instance )
    goto LABEL_18;
  v36 = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)Instance,
          (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_Dictionary_string__object___ToArray__);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v37 = JsonManager__toJson(&v36->obj, 0, 0, 0LL);
  RequestBase__addField_31051928((RequestBase_o *)this, (System_String_o *)StringLiteral_22623/*"tdPlayed"*/, v37, 0LL);
  Instance = (WarBoardData_o *)arg->fields.playerServantNoblePhantasmUsageData;
  if ( !Instance )
LABEL_18:
    sub_B2C434(Instance, v27);
  v38 = PlayerServantNoblePhantasmUsageData__ConvertToJsonString((PlayerServantNoblePhantasmUsageData_o *)Instance, 0LL);
  RequestBase__addField_31051928((RequestBase_o *)this, (System_String_o *)StringLiteral_22986/*"useTreasureDevices"*/, v38, 0LL);
  v39 = JsonManager__toJson((Il2CppObject *)arg->fields.svtCommonFlagDict, 0, 0, 0LL);
  RequestBase__addField_31051928((RequestBase_o *)this, (System_String_o *)StringLiteral_22464/*"svtCommonFlagList"*/, v39, 0LL);
  v40 = JsonManager__toJson(&arg->fields.aliveUniqueIds->obj, 0, 0, 0LL);
  RequestBase__addField_31051928((RequestBase_o *)this, (System_String_o *)StringLiteral_16305/*"aliveUniqueIds"*/, v40, 0LL);
  v41 = BattleResultRequest_Argument__ConvertBattleStatus(arg, 0LL);
  RequestBase__addField_31051460((RequestBase_o *)this, (System_String_o *)StringLiteral_16657/*"battleStatus"*/, v41, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_16651/*"battleResult"*/, arg->fields.battleResult, 0LL);
  v42 = (Il2CppObject *)JsonManager__toJson(warBoardBattleInfo, 0, 0, 0LL);
  v43 = RequestBase__PackToMessagePack((RequestBase_o *)this, v42, 0LL);
  if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  }
  v44 = CatAndMouseGame__CatGame5Bytes(v43, 0LL);
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  v45 = System_Convert__ToBase64String(v44, 0LL);
  RequestBase__addField_31051928((RequestBase_o *)this, (System_String_o *)StringLiteral_23214/*"warBoardBattleInfo"*/, v45, 0LL);
  RequestBase__addField_31052036(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_21857/*"routeSelect"*/,
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
  if ( (byte_41865CC & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    byte_41865CC = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  NetworkManager__RequestStart((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall WarBoardBattleResultRequest__getURL(
        WarBoardBattleResultRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_41865CB & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_23199/*"warBoard/battleResult"*/, v2);
    byte_41865CB = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44305532(BaseUrl, (System_String_o *)StringLiteral_23199/*"warBoard/battleResult"*/, 0LL);
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
  ResponseData_o *v12; // x20
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *success; // x20
  Il2CppObject *Item; // x0
  Il2CppObject *v15; // x0
  System_Action_T__o *subCallBack; // x21
  System_String_o *v17; // x0
  System_String_o *v18; // x1

  if ( (byte_41865CE & 1) == 0 )
  {
    sub_B2C35C(&Method_ActionExtensions_Call_string___, responseList);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__, v6);
    sub_B2C35C(&JsonManager_TypeInfo, v7);
    sub_B2C35C(&ResponseCommandKind_TypeInfo, v8);
    sub_B2C35C(&StringLiteral_21068/*"ng"*/, v9);
    sub_B2C35C(&StringLiteral_23215/*"warBoardData"*/, v10);
    byte_41865CE = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v11 = ResponseCommandKind__SearchData(98, responseList, 0LL);
  if ( v11
    && (v12 = v11, ResponseData__checkError_31019724(v11, 0LL))
    && (success = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v12->fields.success) != 0LL )
  {
    Item = (Il2CppObject *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                             success,
                             (System_Type_o *)StringLiteral_23215/*"warBoardData"*/,
                             (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v15 = RequestBase__UnpackToMessagePack((RequestBase_o *)this, Item, 0LL);
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
      (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)success,
      (System_Xml_XmlQualifiedName_o *)StringLiteral_23215/*"warBoardData"*/,
      (System_Xml_Schema_XmlSchemaObject_o *)v15,
      (const MethodInfo_2DB1C98 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    subCallBack = (System_Action_T__o *)this->fields.subCallBack;
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v17 = JsonManager__toJson((Il2CppObject *)success, 0, 0, 0LL);
    ActionExtensions__Call_BlankEarth_QAARotateEarthResponse_(
      subCallBack,
      (BlankEarth_QAARotateEarthResponse_o *)v17,
      (const MethodInfo_2D65B10 *)Method_ActionExtensions_Call_string___);
    v18 = JsonManager__toJson((Il2CppObject *)success, 0, 0, 0LL);
  }
  else
  {
    v18 = (System_String_o *)StringLiteral_21068/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v18, 0LL);
}