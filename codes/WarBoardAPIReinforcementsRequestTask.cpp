void __fastcall WarBoardAPIReinforcementsRequestTask___ctor(
        WarBoardAPIReinforcementsRequestTask_o *this,
        int32_t stageReinforcementId,
        System_Int32_array *reinforcementsIdx,
        System_Int32_array *squareIds,
        NetworkManager_ResultCallbackFunc_o *resultCallback,
        bool onStartBeginRequest,
        const MethodInfo *method)
{
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  WarBoardAPIRequestTask___ctor_21403204(
    (WarBoardAPIRequestTask_o *)this,
    resultCallback,
    onStartBeginRequest,
    (const MethodInfo *)squareIds);
  this->fields.reinforcementsId = stageReinforcementId;
  this->fields.reinforcementsIndexes = reinforcementsIdx;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.reinforcementsIndexes,
    (System_Int32_array **)reinforcementsIdx,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields.squareIndexes = squareIds;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.squareIndexes,
    (System_Int32_array **)squareIds,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
}


void __fastcall WarBoardAPIReinforcementsRequestTask__SetRequest(
        WarBoardAPIReinforcementsRequestTask_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  WarBoardReinforcementsRequest_o *Instance; // x0
  __int64 v12; // x1
  WarBoardData_o *paramString; // x20
  struct RequestBase_o *v14; // x21
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_42E690B & 1) == 0 )
  {
    sub_B5D5C4(&Method_NetworkManager_getRequest_WarBoardReinforcementsRequest___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v8, v9, v10);
    byte_42E690B = 1;
  }
  Instance = (WarBoardReinforcementsRequest_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  paramString = (WarBoardData_o *)Instance[10].fields.paramString;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (WarBoardReinforcementsRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                  0LL,
                                                  (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_WarBoardReinforcementsRequest___);
  if ( !Instance )
LABEL_9:
    sub_B5D69C(Instance, v12);
  v14 = (struct RequestBase_o *)Instance;
  WarBoardReinforcementsRequest__beginRequest(
    Instance,
    paramString,
    this->fields.reinforcementsId,
    this->fields.reinforcementsIndexes,
    this->fields.squareIndexes,
    0LL);
  this->fields.request = v14;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.request,
    (System_Int32_array **)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
}