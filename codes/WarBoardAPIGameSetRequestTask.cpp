// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardAPIGameSetRequestTask___ctor(
        WarBoardAPIGameSetRequestTask_o *this,
        int32_t result,
        NetworkManager_ResultCallbackFunc_o *resultCallback,
        bool onStartBeginRequest,
        const MethodInfo *method)
{
  WarBoardAPIRequestTask___ctor_21403204(
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  void *Instance; // x0
  __int64 v12; // x1
  WarBoardData_o *v13; // x20
  WarBoardFinishRequest_o *v14; // x21
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_42E6909 & 1) == 0 )
  {
    sub_B5D5C4(&Method_NetworkManager_getRequest_WarBoardFinishRequest___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v8, v9, v10);
    byte_42E6909 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  v13 = (WarBoardData_o *)*((_QWORD *)Instance + 54);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__getRequest_WarBoardWallAttackRequest_(
               0LL,
               (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_WarBoardFinishRequest___);
  if ( !v13 || (v14 = (WarBoardFinishRequest_o *)Instance, Instance = (void *)WarBoardData__get_id(v13, 0LL), !v14) )
LABEL_10:
    sub_B5D69C(Instance, v12);
  WarBoardFinishRequest__beginRequest(
    v14,
    (int32_t)Instance,
    this->fields.gameResult,
    v13->fields.winCondId,
    v13->fields.winCondGroup,
    0LL);
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