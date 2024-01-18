// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardAPIContinueRequestTask___ctor(
        WarBoardAPIContinueRequestTask_o *this,
        int32_t consume,
        NetworkManager_ResultCallbackFunc_o *resultCallback,
        bool onStartBeginRequest,
        const MethodInfo *method)
{
  WarBoardAPIRequestTask___ctor_22725128(
    (WarBoardAPIRequestTask_o *)this,
    resultCallback,
    onStartBeginRequest,
    (const MethodInfo *)onStartBeginRequest);
  this->fields.consumeType = consume;
}


void __fastcall WarBoardAPIContinueRequestTask__SetRequest(
        WarBoardAPIContinueRequestTask_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WarBoardContinueRequest_o *Instance; // x0
  __int64 v6; // x1
  WarBoardData_o *paramString; // x20
  WarBoardContinueRequest_o *v8; // x21
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  int32_t id; // w0

  if ( (byte_4186792 & 1) == 0 )
  {
    sub_B2C35C(&Method_NetworkManager_getRequest_WarBoardContinueRequest___, method);
    sub_B2C35C(&NetworkManager_TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v4);
    byte_4186792 = 1;
  }
  Instance = (WarBoardContinueRequest_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  paramString = (WarBoardData_o *)Instance[10].fields.paramString;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (WarBoardContinueRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                            0LL,
                                            (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_WarBoardContinueRequest___);
  if ( !Instance )
    goto LABEL_12;
  v8 = Instance;
  Instance = (WarBoardContinueRequest_o *)RequestBase__beginRetryRequest((RequestBase_o *)Instance, 0, 0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    if ( paramString )
    {
      id = WarBoardData__get_id(paramString, 0LL);
      WarBoardContinueRequest__beginRequest(v8, id, this->fields.consumeType, paramString, 0LL);
      goto LABEL_11;
    }
LABEL_12:
    sub_B2C434(Instance, v6);
  }
LABEL_11:
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