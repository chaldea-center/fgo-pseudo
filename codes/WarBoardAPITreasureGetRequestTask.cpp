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

  WarBoardAPIRequestTask___ctor_21364956(
    (WarBoardAPIRequestTask_o *)this,
    resultCallback,
    onStartBeginRequest,
    (const MethodInfo *)onStartBeginRequest);
  this->fields.treasureData = treasure;
  sub_B77560(
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
  WarBoardTreasureRequest_o *Instance; // x0
  __int64 v4; // x1
  WarBoardData_o *paramString; // x20
  struct WarBoardTreasureData_o *treasureData; // x8
  struct RequestBase_o *v7; // x21
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_4389013 & 1) == 0 )
  {
    sub_B775C4(&Method_NetworkManager_getRequest_WarBoardTreasureRequest___);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4389013 = 1;
  }
  Instance = (WarBoardTreasureRequest_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  paramString = (WarBoardData_o *)Instance[10].fields.paramString;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (WarBoardTreasureRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                            0LL,
                                            (const MethodInfo_1DF8BE8 *)Method_NetworkManager_getRequest_WarBoardTreasureRequest___);
  treasureData = this->fields.treasureData;
  if ( !treasureData || (v7 = (struct RequestBase_o *)Instance) == 0LL )
LABEL_10:
    sub_B7769C(Instance, v4);
  WarBoardTreasureRequest__beginRequest(Instance, treasureData->fields._treasureId_k__BackingField, paramString, 0LL);
  this->fields.request = v7;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.request,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
}