void BattleScenarioRequest___ctor(BattleScenarioRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


void BattleScenarioRequest__beginRequest(
        BattleScenarioRequest_o *this,
        int32_t questId,
        int32_t questPhase,
        System_Int32_array *routeSelect,
        const MethodInfo *method)
{
  System_String_o *v9; // x1

  if ( (byte_5972339 & 1) == 0 )
  {
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&StringLiteral_24362/*"routeSelect"*/);
    sub_2213A60(&StringLiteral_24055/*"questPhase"*/);
    sub_2213A60(&StringLiteral_24051/*"questId"*/);
    byte_5972339 = 1;
  }
  if ( !routeSelect )
    routeSelect = (System_Int32_array *)sub_2213B20(int___TypeInfo, 0);
  v9 = (System_String_o *)StringLiteral_24051/*"questId"*/;
  *((_DWORD *)&this->fields.shouldShowConnect + 1) = questId;
  this->fields.requestQuestId = questPhase;
  RequestBase__addField((RequestBase_o *)this, v9, questId, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_24055/*"questPhase"*/, questPhase, 0);
  RequestBase__addField_51259092((RequestBase_o *)this, (System_String_o *)StringLiteral_24362/*"routeSelect"*/, &routeSelect->obj, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


System_String_o *BattleScenarioRequest__getURL(BattleScenarioRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_5972338 & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&StringLiteral_17786/*"battle/scenario"*/);
    byte_5972338 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_75651716(BaseUrl, (System_String_o *)StringLiteral_17786/*"battle/scenario"*/, 0);
}


void BattleScenarioRequest__requestCompleted(
        BattleScenarioRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  __int64 v7; // x1
  Il2CppObject *v8; // x21
  Il2CppObject *v9; // x0
  System_String_o *v10; // x21
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  Il2CppObject *success; // x20
  __int64 v14; // x1
  Il2CppObject *v15; // x21
  Il2CppObject *v16; // x0
  System_String_o *v17; // x21
  System_String_o *v18; // x0
  Il2CppObject *v19; // x20
  Il2CppObject *v20; // x0
  System_String_o *v21; // x19
  __int64 v22; // x0
  __int64 v23; // x1
  int32_t requestQuestId; // [xsp+8h] [xbp-28h] BYREF
  int v25; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_597233A & 1) == 0 )
  {
    sub_2213A60(&JsonManager_TypeInfo);
    sub_2213A60(&ResponseCommandKind_TypeInfo);
    sub_2213A60(&ServantCommentManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    sub_2213A60(&StringLiteral_6279/*"EndRequestBattleScenario: ResponseData is null. : QuestId={0}, Phase={1}"*/);
    sub_2213A60(&StringLiteral_6281/*"EndRequestBattleScenario: successList is null. : QuestId={0}, Phase={1}"*/);
    sub_2213A60(&StringLiteral_6280/*"EndRequestBattleScenario: server returned an error. : QuestId={0}, Phase={1}"*/);
    byte_597233A = 1;
  }
  if ( !*(&ResponseCommandKind_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v5 = ResponseCommandKind__SearchData(52, responseList, 0);
  if ( !v5 )
  {
    v25 = *((_DWORD *)&this->fields.shouldShowConnect + 1);
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v25);
    requestQuestId = this->fields.requestQuestId;
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &requestQuestId);
    v21 = System_String__Format_75697880((System_String_o *)StringLiteral_6279/*"EndRequestBattleScenario: ResponseData is null. : QuestId={0}, Phase={1}"*/, v19, v20, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    if ( Instance )
    {
      CrashReporter__SendReport_37257636((CrashReporter_o *)Instance, v21, 0, 0, 0);
      sub_2213CDC(v22, v23);
    }
    goto LABEL_18;
  }
  v6 = v5;
  if ( !ResponseData__checkError_51257228(v5, 0) )
  {
    v25 = *((_DWORD *)&this->fields.shouldShowConnect + 1);
    v8 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v25);
    requestQuestId = this->fields.requestQuestId;
    v9 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &requestQuestId);
    v10 = System_String__Format_75697880((System_String_o *)StringLiteral_6280/*"EndRequestBattleScenario: server returned an error. : QuestId={0}, Phase={1}"*/, v8, v9, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    if ( !Instance )
      goto LABEL_18;
    CrashReporter__SendReport_37257636((CrashReporter_o *)Instance, v10, 0, 0, 0);
  }
  success = (Il2CppObject *)v6->fields.success;
  if ( !*(&ServantCommentManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v7);
  ServantCommentManager__UpdateChapter(0);
  if ( !success )
  {
    v25 = *((_DWORD *)&this->fields.shouldShowConnect + 1);
    v15 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v25);
    requestQuestId = this->fields.requestQuestId;
    v16 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &requestQuestId);
    v17 = System_String__Format_75697880((System_String_o *)StringLiteral_6281/*"EndRequestBattleScenario: successList is null. : QuestId={0}, Phase={1}"*/, v15, v16, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    if ( Instance )
    {
      CrashReporter__SendReport_37257636((CrashReporter_o *)Instance, v17, 0, 0, 0);
      goto LABEL_14;
    }
LABEL_18:
    sub_2213CDC(Instance, v12);
  }
LABEL_14:
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v14);
  v18 = JsonManager__toJson(success, 0, 0, 0);
  RequestBase__completed((RequestBase_o *)this, v18, 0);
}