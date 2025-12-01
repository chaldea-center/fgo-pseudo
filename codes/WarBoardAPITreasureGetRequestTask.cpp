// local variable allocation has failed, the output may be wrong!
void WarBoardAPITreasureGetRequestTask___ctor(
        WarBoardAPITreasureGetRequestTask_o *this,
        WarBoardTreasureData_o *treasure,
        NetworkManager_ResultCallbackFunc_o *resultCallback,
        bool onStartBeginRequest,
        const MethodInfo *method)
{
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  WarBoardAPIRequestTask___ctor_38522232(
    (WarBoardAPIRequestTask_o *)this,
    resultCallback,
    onStartBeginRequest,
    (const MethodInfo *)onStartBeginRequest);
  this->fields.treasureData = treasure;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.treasureData, (int32_t)treasure, v7, v8, v9, v10, v11, v12);
}


void WarBoardAPITreasureGetRequestTask__SetRequest(WarBoardAPITreasureGetRequestTask_o *this, const MethodInfo *method)
{
  WarBoardTreasureRequest_o *Instance; // x0
  __int64 v4; // x1
  WarBoardData_o *klass; // x20
  struct WarBoardTreasureData_o *treasureData; // x8
  struct RequestBase_o *v7; // x21
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4CC502C & 1) == 0 )
  {
    sub_1C713B0(&Method_NetworkManager_getRequest_WarBoardTreasureRequest___);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4CC502C = 1;
  }
  Instance = (WarBoardTreasureRequest_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  klass = (WarBoardData_o *)Instance[11].klass;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (WarBoardTreasureRequest_o *)NetworkManager__getRequest_object_(
                                            0,
                                            (const MethodInfo_31D69E8 *)Method_NetworkManager_getRequest_WarBoardTreasureRequest___);
  treasureData = this->fields.treasureData;
  if ( !treasureData || (v7 = (struct RequestBase_o *)Instance) == 0 )
LABEL_9:
    sub_1C71608(Instance, v4);
  WarBoardTreasureRequest__beginRequest(Instance, treasureData->fields._treasureId_k__BackingField, klass, 0);
  this->fields.request = v7;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.request, (int32_t)v7, v8, v9, v10, v11, v12, v13);
}