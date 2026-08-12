// local variable allocation has failed, the output may be wrong!
void WarBoardAPIContinueRequestTask___ctor(
        WarBoardAPIContinueRequestTask_o *this,
        int32_t consume,
        NetworkManager_ResultCallbackFunc_o *resultCallback,
        bool onStartBeginRequest,
        const MethodInfo *method)
{
  WarBoardAPIRequestTask___ctor_45157924(
    (WarBoardAPIRequestTask_o *)this,
    resultCallback,
    onStartBeginRequest,
    (const MethodInfo *)onStartBeginRequest);
  this->fields.consumeType = consume;
}


void WarBoardAPIContinueRequestTask__SetRequest(WarBoardAPIContinueRequestTask_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  WarBoardData_o *monitor; // x20
  WarBoardContinueRequest_o *v7; // x21
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  int32_t id; // w0

  if ( (byte_596E388 & 1) == 0 )
  {
    sub_2213A60(&Method_NetworkManager_getRequest_WarBoardContinueRequest___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_596E388 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  monitor = (WarBoardData_o *)Instance[27].monitor;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4, v5);
  Instance = NetworkManager__getRequest_object_(
               0,
               (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_WarBoardContinueRequest___);
  if ( !Instance )
    goto LABEL_11;
  v7 = (WarBoardContinueRequest_o *)Instance;
  Instance = (Il2CppObject *)RequestBase__beginRetryRequest((RequestBase_o *)Instance, 0, 0);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    if ( monitor )
    {
      id = WarBoardData__get_id(monitor, 0);
      WarBoardContinueRequest__beginRequest(v7, id, this->fields.consumeType, monitor, 0);
      goto LABEL_10;
    }
LABEL_11:
    sub_2213CDC(Instance, v4);
  }
LABEL_10:
  this->fields.request = (struct RequestBase_o *)v7;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.request, (int32_t)v7, v8, v9, v10, v11, v12, v13);
}