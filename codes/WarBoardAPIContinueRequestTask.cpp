// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardAPIContinueRequestTask___ctor(
        WarBoardAPIContinueRequestTask_o *this,
        int32_t consume,
        NetworkManager_ResultCallbackFunc_o *resultCallback,
        bool onStartBeginRequest,
        const MethodInfo *method)
{
  WarBoardAPIRequestTask___ctor_21403204(
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  WarBoardContinueRequest_o *Instance; // x0
  __int64 v12; // x1
  WarBoardData_o *paramString; // x20
  WarBoardContinueRequest_o *v14; // x21
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  int32_t id; // w0

  if ( (byte_42E6908 & 1) == 0 )
  {
    sub_B5D5C4(&Method_NetworkManager_getRequest_WarBoardContinueRequest___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v8, v9, v10);
    byte_42E6908 = 1;
  }
  Instance = (WarBoardContinueRequest_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
                                            (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_WarBoardContinueRequest___);
  if ( !Instance )
    goto LABEL_12;
  v14 = Instance;
  Instance = (WarBoardContinueRequest_o *)RequestBase__beginRetryRequest((RequestBase_o *)Instance, 0, 0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    if ( paramString )
    {
      id = WarBoardData__get_id(paramString, 0LL);
      WarBoardContinueRequest__beginRequest(v14, id, this->fields.consumeType, paramString, 0LL);
      goto LABEL_11;
    }
LABEL_12:
    sub_B5D69C(Instance, v12);
  }
LABEL_11:
  this->fields.request = (struct RequestBase_o *)v14;
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