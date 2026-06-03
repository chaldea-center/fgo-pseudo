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
  if ( (byte_4E79108 & 1) == 0 )
  {
    sub_1D0F0B4(&int___TypeInfo);
    sub_1D0F0B4(&StringLiteral_23626/*"routeSelect"*/);
    sub_1D0F0B4(&StringLiteral_23331/*"questPhase"*/);
    sub_1D0F0B4(&StringLiteral_23327/*"questId"*/);
    byte_4E79108 = 1;
  }
  if ( !routeSelect )
    routeSelect = (System_Int32_array *)sub_1D0F15C(int___TypeInfo, 0);
  *((_DWORD *)&this->fields.shouldShowConnect + 1) = questId;
  this->fields.requestQuestId = questPhase;
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23327/*"questId"*/, questId, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23331/*"questPhase"*/, questPhase, 0);
  RequestBase__addField_45601344((RequestBase_o *)this, (System_String_o *)StringLiteral_23626/*"routeSelect"*/, &routeSelect->obj, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


System_String_o *BattleScenarioRequest__getURL(BattleScenarioRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4E79107 & 1) == 0 )
  {
    sub_1D0F0B4(&NetworkManager_TypeInfo);
    sub_1D0F0B4(&StringLiteral_17307/*"battle/scenario"*/);
    byte_4E79107 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_65562772(BaseUrl, (System_String_o *)StringLiteral_17307/*"battle/scenario"*/, 0);
}


void BattleScenarioRequest__requestCompleted(
        BattleScenarioRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  Il2CppObject *v7; // x21
  Il2CppObject *v8; // x0
  System_String_o *v9; // x21
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  Il2CppObject *success; // x20
  Il2CppObject *v13; // x21
  Il2CppObject *v14; // x0
  System_String_o *v15; // x21
  System_String_o *v16; // x0
  Il2CppObject *v17; // x20
  Il2CppObject *v18; // x0
  System_String_o *v19; // x19
  __int64 v20; // x0
  __int64 v21; // x1
  int32_t requestQuestId; // [xsp+8h] [xbp-28h] BYREF
  int v23; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4E79109 & 1) == 0 )
  {
    sub_1D0F0B4(&int_TypeInfo);
    sub_1D0F0B4(&JsonManager_TypeInfo);
    sub_1D0F0B4(&ResponseCommandKind_TypeInfo);
    sub_1D0F0B4(&ServantCommentManager_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    sub_1D0F0B4(&StringLiteral_6085/*"EndRequestBattleScenario: ResponseData is null. : QuestId={0}, Phase={1}"*/);
    sub_1D0F0B4(&StringLiteral_6087/*"EndRequestBattleScenario: successList is null. : QuestId={0}, Phase={1}"*/);
    sub_1D0F0B4(&StringLiteral_6086/*"EndRequestBattleScenario: server returned an error. : QuestId={0}, Phase={1}"*/);
    byte_4E79109 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(52, responseList, 0);
  if ( !v5 )
  {
    v23 = *((_DWORD *)&this->fields.shouldShowConnect + 1);
    v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23);
    requestQuestId = this->fields.requestQuestId;
    v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &requestQuestId);
    v19 = System_String__Format_65604080((System_String_o *)StringLiteral_6085/*"EndRequestBattleScenario: ResponseData is null. : QuestId={0}, Phase={1}"*/, v17, v18, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    if ( Instance )
    {
      CrashReporter__SendReport_31969924((CrashReporter_o *)Instance, v19, 0, 0, 0);
      sub_1D0F30C(v20, v21);
    }
    goto LABEL_18;
  }
  v6 = v5;
  if ( !ResponseData__checkError_45600864(v5, 0) )
  {
    v23 = *((_DWORD *)&this->fields.shouldShowConnect + 1);
    v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23);
    requestQuestId = this->fields.requestQuestId;
    v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &requestQuestId);
    v9 = System_String__Format_65604080((System_String_o *)StringLiteral_6086/*"EndRequestBattleScenario: server returned an error. : QuestId={0}, Phase={1}"*/, v7, v8, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    if ( !Instance )
      goto LABEL_18;
    CrashReporter__SendReport_31969924((CrashReporter_o *)Instance, v9, 0, 0, 0);
  }
  success = (Il2CppObject *)v6->fields.success;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  ServantCommentManager__UpdateChapter(0);
  if ( !success )
  {
    v23 = *((_DWORD *)&this->fields.shouldShowConnect + 1);
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23);
    requestQuestId = this->fields.requestQuestId;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &requestQuestId);
    v15 = System_String__Format_65604080((System_String_o *)StringLiteral_6087/*"EndRequestBattleScenario: successList is null. : QuestId={0}, Phase={1}"*/, v13, v14, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    if ( Instance )
    {
      CrashReporter__SendReport_31969924((CrashReporter_o *)Instance, v15, 0, 0, 0);
      goto LABEL_14;
    }
LABEL_18:
    sub_1D0F30C(Instance, v11);
  }
LABEL_14:
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v16 = JsonManager__toJson(success, 0, 0, 0);
  RequestBase__completed((RequestBase_o *)this, v16, 0);
}