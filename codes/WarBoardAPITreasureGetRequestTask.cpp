// local variable allocation has failed, the output may be wrong!
void WarBoardAPITreasureGetRequestTask___ctor(
        WarBoardAPITreasureGetRequestTask_o *this,
        WarBoardTreasureData_o *treasure,
        NetworkManager_ResultCallbackFunc_o *resultCallback,
        bool onStartBeginRequest,
        const MethodInfo *method)
{
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  WarBoardAPIRequestTask___ctor_45133660(
    (WarBoardAPIRequestTask_o *)this,
    resultCallback,
    onStartBeginRequest,
    (const MethodInfo *)onStartBeginRequest);
  this->fields.treasureData = treasure;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.treasureData,
    (int32_t)treasure,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
}


void WarBoardAPITreasureGetRequestTask__SetRequest(WarBoardAPITreasureGetRequestTask_o *this, const MethodInfo *method)
{
  WarBoardTreasureRequest_o *Instance; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  WarBoardData_o *monitor; // x20
  struct WarBoardTreasureData_o *treasureData; // x8
  struct RequestBase_o *v8; // x21
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_593622C & 1) == 0 )
  {
    sub_21FFC50(&Method_NetworkManager_getRequest_WarBoardTreasureRequest___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_593622C = 1;
  }
  Instance = (WarBoardTreasureRequest_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  monitor = (WarBoardData_o *)Instance[9].monitor;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4, v5);
  Instance = (WarBoardTreasureRequest_o *)NetworkManager__getRequest_object_(
                                            0,
                                            (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_WarBoardTreasureRequest___);
  treasureData = this->fields.treasureData;
  if ( !treasureData || (v8 = (struct RequestBase_o *)Instance) == 0 )
LABEL_9:
    sub_21FFECC(Instance, v4);
  WarBoardTreasureRequest__beginRequest(Instance, treasureData->fields._treasureId_k__BackingField, monitor, 0);
  this->fields.request = v8;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.request, (int32_t)v8, v9, v10, v11, v12, v13, v14);
}