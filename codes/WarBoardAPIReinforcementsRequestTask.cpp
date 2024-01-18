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

  WarBoardAPIRequestTask___ctor_22725128(
    (WarBoardAPIRequestTask_o *)this,
    resultCallback,
    onStartBeginRequest,
    (const MethodInfo *)squareIds);
  this->fields.reinforcementsId = stageReinforcementId;
  this->fields.reinforcementsIndexes = reinforcementsIdx;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.reinforcementsIndexes,
    (System_Int32_array **)reinforcementsIdx,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields.squareIndexes = squareIds;
  sub_B2C2F8(
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
  __int64 v3; // x1
  __int64 v4; // x1
  WarBoardReinforcementsRequest_o *Instance; // x0
  __int64 v6; // x1
  WarBoardData_o *paramString; // x20
  struct RequestBase_o *v8; // x21
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_4186795 & 1) == 0 )
  {
    sub_B2C35C(&Method_NetworkManager_getRequest_WarBoardReinforcementsRequest___, method);
    sub_B2C35C(&NetworkManager_TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v4);
    byte_4186795 = 1;
  }
  Instance = (WarBoardReinforcementsRequest_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
                                                  (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_WarBoardReinforcementsRequest___);
  if ( !Instance )
LABEL_9:
    sub_B2C434(Instance, v6);
  v8 = (struct RequestBase_o *)Instance;
  WarBoardReinforcementsRequest__beginRequest(
    Instance,
    paramString,
    this->fields.reinforcementsId,
    this->fields.reinforcementsIndexes,
    this->fields.squareIndexes,
    0LL);
  this->fields.request = v8;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.request,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
}