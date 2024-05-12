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
  const MethodInfo *v13; // x2
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_String_o *v20; // x0
  WarBoardUiData_SaveData_array *v21; // x22
  System_String_o *v22; // x0
  System_String_o *v23; // x0
  System_String_o *v24; // x0
  System_String_o *v25; // x0
  uint32_t v26; // w0
  Il2CppObject *v27; // x0
  System_Byte_array *v28; // x21
  System_Byte_array *v29; // x21
  System_String_o *v30; // x0

  if ( (byte_43899C7 & 1) == 0 )
  {
    sub_B775C4(&CatAndMouseGame_TypeInfo);
    sub_B775C4(&System_Convert_TypeInfo);
    sub_B775C4(&JsonManager_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_Dictionary_string__object___ToArray__);
    sub_B775C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B775C4(&StringLiteral_22736/*"stageId"*/);
    sub_B775C4(&StringLiteral_22324/*"routeSelect"*/);
    sub_B775C4(&StringLiteral_23464/*"useTreasureDevices"*/);
    sub_B775C4(&StringLiteral_23697/*"warBoardBattleInfo"*/);
    sub_B775C4(&StringLiteral_22940/*"svtCommonFlagList"*/);
    sub_B775C4(&StringLiteral_16988/*"battleStatus"*/);
    sub_B775C4(&StringLiteral_23100/*"tdPlayed"*/);
    sub_B775C4(&StringLiteral_23664/*"voicePlayedList"*/);
    sub_B775C4(&StringLiteral_16979/*"battleId"*/);
    sub_B775C4(&StringLiteral_16982/*"battleResult"*/);
    sub_B775C4(&StringLiteral_16625/*"aliveUniqueIds"*/);
    byte_43899C7 = 1;
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (WarBoardData_o *)Instance[1].fields.reinforcementsSaveList;
  if ( !Instance )
    goto LABEL_18;
  Instance->fields.localSaveTiming = 4;
  WarBoardData__LocalSave(Instance, 0, v13);
  this->fields.subCallBack = callback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.subCallBack,
    (System_Int32_array **)callback,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22736/*"stageId"*/, stageId, 0LL);
  if ( !arg )
    goto LABEL_18;
  RequestBase__addField_32564924(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_16979/*"battleId"*/,
    arg->fields.battleId,
    0LL);
  v20 = BattleResultRequest_Argument__ConvertVoicePlayedData(arg, 0LL);
  RequestBase__addField_32565392((RequestBase_o *)this, (System_String_o *)StringLiteral_23664/*"voicePlayedList"*/, v20, 0LL);
  Instance = (WarBoardData_o *)arg->fields.firstNpPlayList;
  if ( !Instance )
    goto LABEL_18;
  v21 = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)Instance,
          (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_Dictionary_string__object___ToArray__);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v22 = JsonManager__toJson(&v21->obj, 0, 0, 0LL);
  RequestBase__addField_32565392((RequestBase_o *)this, (System_String_o *)StringLiteral_23100/*"tdPlayed"*/, v22, 0LL);
  Instance = (WarBoardData_o *)arg->fields.playerServantNoblePhantasmUsageData;
  if ( !Instance )
LABEL_18:
    sub_B7769C(Instance, v12);
  v23 = PlayerServantNoblePhantasmUsageData__ConvertToJsonString((PlayerServantNoblePhantasmUsageData_o *)Instance, 0LL);
  RequestBase__addField_32565392((RequestBase_o *)this, (System_String_o *)StringLiteral_23464/*"useTreasureDevices"*/, v23, 0LL);
  v24 = JsonManager__toJson((Il2CppObject *)arg->fields.svtCommonFlagDict, 0, 0, 0LL);
  RequestBase__addField_32565392((RequestBase_o *)this, (System_String_o *)StringLiteral_22940/*"svtCommonFlagList"*/, v24, 0LL);
  v25 = JsonManager__toJson(&arg->fields.aliveUniqueIds->obj, 0, 0, 0LL);
  RequestBase__addField_32565392((RequestBase_o *)this, (System_String_o *)StringLiteral_16625/*"aliveUniqueIds"*/, v25, 0LL);
  v26 = BattleResultRequest_Argument__ConvertBattleStatus(arg, 0LL);
  RequestBase__addField_32564924((RequestBase_o *)this, (System_String_o *)StringLiteral_16988/*"battleStatus"*/, v26, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_16982/*"battleResult"*/, arg->fields.battleResult, 0LL);
  v27 = (Il2CppObject *)JsonManager__toJson(warBoardBattleInfo, 0, 0, 0LL);
  v28 = RequestBase__PackToMessagePack((RequestBase_o *)this, v27, 0LL);
  if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  }
  v29 = CatAndMouseGame__CatGame5Bytes(v28, 0LL);
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  v30 = System_Convert__ToBase64String(v29, 0LL);
  RequestBase__addField_32565392((RequestBase_o *)this, (System_String_o *)StringLiteral_23697/*"warBoardBattleInfo"*/, v30, 0LL);
  RequestBase__addField_32565500(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_22324/*"routeSelect"*/,
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
  if ( (byte_43899C6 & 1) == 0 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    byte_43899C6 = 1;
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
  System_String_o *BaseUrl; // x0

  if ( (byte_43899C5 & 1) == 0 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&StringLiteral_23682/*"warBoard/battleResult"*/);
    byte_43899C5 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44901936(BaseUrl, (System_String_o *)StringLiteral_23682/*"warBoard/battleResult"*/, 0LL);
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
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *success; // x20
  Il2CppObject *Item; // x0
  Il2CppObject *v9; // x0
  System_Action_T__o *subCallBack; // x21
  System_String_o *v11; // x0
  System_String_o *v12; // x1

  if ( (byte_43899C8 & 1) == 0 )
  {
    sub_B775C4(&Method_ActionExtensions_Call_string___);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    sub_B775C4(&JsonManager_TypeInfo);
    sub_B775C4(&ResponseCommandKind_TypeInfo);
    sub_B775C4(&StringLiteral_21504/*"ng"*/);
    sub_B775C4(&StringLiteral_23698/*"warBoardData"*/);
    byte_43899C8 = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v5 = ResponseCommandKind__SearchData(99, responseList, 0LL);
  if ( v5
    && (v6 = v5, ResponseData__checkError_30128096(v5, 0LL))
    && (success = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v6->fields.success) != 0LL )
  {
    Item = (Il2CppObject *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                             success,
                             (System_Type_o *)StringLiteral_23698/*"warBoardData"*/,
                             (const MethodInfo_2F7D534 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v9 = RequestBase__UnpackToMessagePack((RequestBase_o *)this, Item, 0LL);
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
      (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)success,
      (System_Xml_XmlQualifiedName_o *)StringLiteral_23698/*"warBoardData"*/,
      (System_Xml_Schema_XmlSchemaObject_o *)v9,
      (const MethodInfo_2F7D5D0 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    subCallBack = (System_Action_T__o *)this->fields.subCallBack;
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v11 = JsonManager__toJson((Il2CppObject *)success, 0, 0, 0LL);
    ActionExtensions__Call_BlankEarth_QAARotateEarthResponse_(
      subCallBack,
      (BlankEarth_QAARotateEarthResponse_o *)v11,
      (const MethodInfo_2C3C35C *)Method_ActionExtensions_Call_string___);
    v12 = JsonManager__toJson((Il2CppObject *)success, 0, 0, 0LL);
  }
  else
  {
    v12 = (System_String_o *)StringLiteral_21504/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v12, 0LL);
}