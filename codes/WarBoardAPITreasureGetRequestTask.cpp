// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardAPITreasureGetRequestTask___ctor(
        WarBoardAPITreasureGetRequestTask_o *this,
        WarBoardTreasureData_o *treasure,
        NetworkManager_ResultCallbackFunc_o *resultCallback,
        bool onStartBeginRequest,
        const MethodInfo *method)
{
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  WarBoardAPIRequestTask___ctor_22956192(
    (WarBoardAPIRequestTask_o *)this,
    resultCallback,
    onStartBeginRequest,
    (const MethodInfo *)onStartBeginRequest);
  this->fields.treasureData = treasure;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.treasureData,
    (System_Int32_array **)treasure,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
}


void __fastcall WarBoardAPITreasureGetRequestTask__SetRequest(
        WarBoardAPITreasureGetRequestTask_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  WarBoardData_o *monitor; // x20
  WarBoardTreasureRequest_o *Request_WarBoardWallAttackRequest; // x0
  struct WarBoardTreasureData_o *treasureData; // x8
  struct RequestBase_o *v9; // x21
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_40F8C0A & 1) == 0 )
  {
    sub_B16FFC(&Method_NetworkManager_getRequest_WarBoardTreasureRequest___, method);
    sub_B16FFC(&NetworkManager_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v4);
    byte_40F8C0A = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  monitor = (WarBoardData_o *)Instance[4].monitor;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (WarBoardTreasureRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                     0LL,
                                                                     (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_WarBoardTreasureRequest___);
  treasureData = this->fields.treasureData;
  if ( !treasureData || (v9 = (struct RequestBase_o *)Request_WarBoardWallAttackRequest) == 0LL )
LABEL_10:
    sub_B170D4();
  WarBoardTreasureRequest__beginRequest(
    Request_WarBoardWallAttackRequest,
    treasureData->fields._treasureId_k__BackingField,
    monitor,
    0LL);
  this->fields.request = v9;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.request,
    (System_Int32_array **)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
}