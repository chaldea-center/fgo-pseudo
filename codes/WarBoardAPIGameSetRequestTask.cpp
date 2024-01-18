// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardAPIGameSetRequestTask___ctor(
        WarBoardAPIGameSetRequestTask_o *this,
        int32_t result,
        NetworkManager_ResultCallbackFunc_o *resultCallback,
        bool onStartBeginRequest,
        const MethodInfo *method)
{
  WarBoardAPIRequestTask___ctor_22725128(
    (WarBoardAPIRequestTask_o *)this,
    resultCallback,
    onStartBeginRequest,
    (const MethodInfo *)onStartBeginRequest);
  this->fields.gameResult = result;
}


void __fastcall WarBoardAPIGameSetRequestTask__SetRequest(
        WarBoardAPIGameSetRequestTask_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  void *Instance; // x0
  __int64 v6; // x1
  WarBoardData_o *v7; // x20
  WarBoardFinishRequest_o *v8; // x21
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_4186793 & 1) == 0 )
  {
    sub_B2C35C(&Method_NetworkManager_getRequest_WarBoardFinishRequest___, method);
    sub_B2C35C(&NetworkManager_TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v4);
    byte_4186793 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  v7 = (WarBoardData_o *)*((_QWORD *)Instance + 54);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__getRequest_WarBoardWallAttackRequest_(
               0LL,
               (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_WarBoardFinishRequest___);
  if ( !v7 || (v8 = (WarBoardFinishRequest_o *)Instance, Instance = (void *)WarBoardData__get_id(v7, 0LL), !v8) )
LABEL_10:
    sub_B2C434(Instance, v6);
  WarBoardFinishRequest__beginRequest(
    v8,
    (int32_t)Instance,
    this->fields.gameResult,
    v7->fields.winCondId,
    v7->fields.winCondGroup,
    0LL);
  this->fields.request = (struct RequestBase_o *)v8;
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