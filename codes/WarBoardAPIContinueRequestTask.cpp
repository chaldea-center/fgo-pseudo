// local variable allocation has failed, the output may be wrong!
void WarBoardAPIContinueRequestTask___ctor(
        WarBoardAPIContinueRequestTask_o *this,
        int32_t consume,
        NetworkManager_ResultCallbackFunc_o *resultCallback,
        bool onStartBeginRequest,
        const MethodInfo *method)
{
  WarBoardAPIRequestTask___ctor_38909196(
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
  WarBoardData_o *monitor; // x20
  WarBoardContinueRequest_o *v6; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  int32_t id; // w0

  if ( (byte_4D2A3DC & 1) == 0 )
  {
    sub_1C94098(&Method_NetworkManager_getRequest_WarBoardContinueRequest___);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4D2A3DC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  monitor = (WarBoardData_o *)Instance[27].monitor;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getRequest_object_(
               0,
               (const MethodInfo_32282A8 *)Method_NetworkManager_getRequest_WarBoardContinueRequest___);
  if ( !Instance )
    goto LABEL_11;
  v6 = (WarBoardContinueRequest_o *)Instance;
  Instance = (Il2CppObject *)RequestBase__beginRetryRequest((RequestBase_o *)Instance, 0, 0);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    if ( monitor )
    {
      id = WarBoardData__get_id(monitor, 0);
      WarBoardContinueRequest__beginRequest(v6, id, this->fields.consumeType, monitor, 0);
      goto LABEL_10;
    }
LABEL_11:
    sub_1C942F0(Instance, v4);
  }
LABEL_10:
  this->fields.request = (struct RequestBase_o *)v6;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.request, (int32_t)v6, v7, v8, v9, v10, v11, v12);
}