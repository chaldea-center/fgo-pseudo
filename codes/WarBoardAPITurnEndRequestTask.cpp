void __fastcall WarBoardAPITurnEndRequestTask___ctor(
        WarBoardAPITurnEndRequestTask_o *this,
        NetworkManager_ResultCallbackFunc_o *resultCallback,
        bool onStartBeginRequest,
        const MethodInfo *method)
{
  WarBoardAPIRequestTask___ctor_21188152((WarBoardAPIRequestTask_o *)this, resultCallback, onStartBeginRequest, method);
}


void __fastcall WarBoardAPITurnEndRequestTask__SetRequest(
        WarBoardAPITurnEndRequestTask_o *this,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v4; // x1
  WarBoardData_o *v5; // x20
  WarBoardTurnEndRequest_o *v6; // x21
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_434FA1A & 1) == 0 )
  {
    sub_B70694(&Method_NetworkManager_getRequest_WarBoardTurnEndRequest___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_434FA1A = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  v5 = (WarBoardData_o *)*((_QWORD *)Instance + 54);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__getRequest_WarBoardWallAttackRequest_(
               0LL,
               (const MethodInfo_1D57A4C *)Method_NetworkManager_getRequest_WarBoardTurnEndRequest___);
  if ( !v5 || (v6 = (WarBoardTurnEndRequest_o *)Instance, Instance = (void *)WarBoardData__get_id(v5, 0LL), !v6) )
LABEL_10:
    sub_B7076C(Instance, v4);
  WarBoardTurnEndRequest__beginRequest(v6, (int32_t)Instance, v5, 0LL);
  this->fields.request = (struct RequestBase_o *)v6;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.request,
    (System_Int32_array **)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
}