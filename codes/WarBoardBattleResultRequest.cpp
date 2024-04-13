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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  WarBoardData_o *Instance; // x0
  __int64 v57; // x1
  const MethodInfo *v58; // x2
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_String_o *v65; // x0
  WarBoardUiData_SaveData_array *v66; // x22
  System_String_o *v67; // x0
  System_String_o *v68; // x0
  System_String_o *v69; // x0
  System_String_o *v70; // x0
  uint32_t v71; // w0
  Il2CppObject *v72; // x0
  System_Byte_array *v73; // x21
  System_Byte_array *v74; // x21
  System_String_o *v75; // x0

  if ( (byte_42E76CF & 1) == 0 )
  {
    sub_B5D5C4(&CatAndMouseGame_TypeInfo, stageId, (_DWORD)arg, warBoardBattleInfo);
    sub_B5D5C4(&System_Convert_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&JsonManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Dictionary_string__object___ToArray__, v17, v18, v19);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_22565/*"stageId"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_22155/*"routeSelect"*/, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_23291/*"useTreasureDevices"*/, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_23523/*"warBoardBattleInfo"*/, v32, v33, v34);
    sub_B5D5C4(&StringLiteral_22768/*"svtCommonFlagList"*/, v35, v36, v37);
    sub_B5D5C4(&StringLiteral_16862/*"battleStatus"*/, v38, v39, v40);
    sub_B5D5C4(&StringLiteral_22928/*"tdPlayed"*/, v41, v42, v43);
    sub_B5D5C4(&StringLiteral_23490/*"voicePlayedList"*/, v44, v45, v46);
    sub_B5D5C4(&StringLiteral_16853/*"battleId"*/, v47, v48, v49);
    sub_B5D5C4(&StringLiteral_16856/*"battleResult"*/, v50, v51, v52);
    sub_B5D5C4(&StringLiteral_16503/*"aliveUniqueIds"*/, v53, v54, v55);
    byte_42E76CF = 1;
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (WarBoardData_o *)Instance[1].fields.reinforcementsSaveList;
  if ( !Instance )
    goto LABEL_18;
  Instance->fields.localSaveTiming = 4;
  WarBoardData__LocalSave(Instance, 0, v58);
  this->fields.subCallBack = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.subCallBack,
    (System_Int32_array **)callback,
    v59,
    v60,
    v61,
    v62,
    v63,
    v64);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22565/*"stageId"*/, stageId, 0LL);
  if ( !arg )
    goto LABEL_18;
  RequestBase__addField_32361792(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_16853/*"battleId"*/,
    arg->fields.battleId,
    0LL);
  v65 = BattleResultRequest_Argument__ConvertVoicePlayedData(arg, 0LL);
  RequestBase__addField_32362260((RequestBase_o *)this, (System_String_o *)StringLiteral_23490/*"voicePlayedList"*/, v65, 0LL);
  Instance = (WarBoardData_o *)arg->fields.firstNpPlayList;
  if ( !Instance )
    goto LABEL_18;
  v66 = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)Instance,
          (const MethodInfo_305910C *)Method_System_Collections_Generic_List_Dictionary_string__object___ToArray__);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v67 = JsonManager__toJson(&v66->obj, 0, 0, 0LL);
  RequestBase__addField_32362260((RequestBase_o *)this, (System_String_o *)StringLiteral_22928/*"tdPlayed"*/, v67, 0LL);
  Instance = (WarBoardData_o *)arg->fields.playerServantNoblePhantasmUsageData;
  if ( !Instance )
LABEL_18:
    sub_B5D69C(Instance, v57);
  v68 = PlayerServantNoblePhantasmUsageData__ConvertToJsonString((PlayerServantNoblePhantasmUsageData_o *)Instance, 0LL);
  RequestBase__addField_32362260((RequestBase_o *)this, (System_String_o *)StringLiteral_23291/*"useTreasureDevices"*/, v68, 0LL);
  v69 = JsonManager__toJson((Il2CppObject *)arg->fields.svtCommonFlagDict, 0, 0, 0LL);
  RequestBase__addField_32362260((RequestBase_o *)this, (System_String_o *)StringLiteral_22768/*"svtCommonFlagList"*/, v69, 0LL);
  v70 = JsonManager__toJson(&arg->fields.aliveUniqueIds->obj, 0, 0, 0LL);
  RequestBase__addField_32362260((RequestBase_o *)this, (System_String_o *)StringLiteral_16503/*"aliveUniqueIds"*/, v70, 0LL);
  v71 = BattleResultRequest_Argument__ConvertBattleStatus(arg, 0LL);
  RequestBase__addField_32361792((RequestBase_o *)this, (System_String_o *)StringLiteral_16862/*"battleStatus"*/, v71, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_16856/*"battleResult"*/, arg->fields.battleResult, 0LL);
  v72 = (Il2CppObject *)JsonManager__toJson(warBoardBattleInfo, 0, 0, 0LL);
  v73 = RequestBase__PackToMessagePack((RequestBase_o *)this, v72, 0LL);
  if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  }
  v74 = CatAndMouseGame__CatGame5Bytes(v73, 0LL);
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  v75 = System_Convert__ToBase64String(v74, 0LL);
  RequestBase__addField_32362260((RequestBase_o *)this, (System_String_o *)StringLiteral_23523/*"warBoardBattleInfo"*/, v75, 0LL);
  RequestBase__addField_32362368(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_22155/*"routeSelect"*/,
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
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E76CE & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E76CE = 1;
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
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  System_String_o *BaseUrl; // x0

  if ( (byte_42E76CD & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_23508/*"warBoard/battleResult"*/, v4, v5, v6);
    byte_42E76CD = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44577788(BaseUrl, (System_String_o *)StringLiteral_23508/*"warBoard/battleResult"*/, 0LL);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  ResponseData_o *v24; // x0
  ResponseData_o *v25; // x20
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *success; // x20
  Il2CppObject *Item; // x0
  Il2CppObject *v28; // x0
  System_Action_T__o *subCallBack; // x21
  System_String_o *v30; // x0
  System_String_o *v31; // x1

  if ( (byte_42E76D0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_ActionExtensions_Call_string___, (_DWORD)responseList, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__, v9, v10, v11);
    sub_B5D5C4(&JsonManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&ResponseCommandKind_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_21345/*"ng"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_23524/*"warBoardData"*/, v21, v22, v23);
    byte_42E76D0 = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v24 = ResponseCommandKind__SearchData(99, responseList, 0LL);
  if ( v24
    && (v25 = v24, ResponseData__checkError_29500464(v24, 0LL))
    && (success = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v25->fields.success) != 0LL )
  {
    Item = (Il2CppObject *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                             success,
                             (System_Type_o *)StringLiteral_23524/*"warBoardData"*/,
                             (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v28 = RequestBase__UnpackToMessagePack((RequestBase_o *)this, Item, 0LL);
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
      (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)success,
      (System_Xml_XmlQualifiedName_o *)StringLiteral_23524/*"warBoardData"*/,
      (System_Xml_Schema_XmlSchemaObject_o *)v28,
      (const MethodInfo_2F26B94 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    subCallBack = (System_Action_T__o *)this->fields.subCallBack;
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v30 = JsonManager__toJson((Il2CppObject *)success, 0, 0, 0LL);
    ActionExtensions__Call_BlankEarth_QAARotateEarthResponse_(
      subCallBack,
      (BlankEarth_QAARotateEarthResponse_o *)v30,
      (const MethodInfo_2CECD58 *)Method_ActionExtensions_Call_string___);
    v31 = JsonManager__toJson((Il2CppObject *)success, 0, 0, 0LL);
  }
  else
  {
    v31 = (System_String_o *)StringLiteral_21345/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v31, 0LL);
}