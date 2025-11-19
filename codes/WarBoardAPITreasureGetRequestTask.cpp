// local variable allocation has failed, the output may be wrong!
void WarBoardAPITreasureGetRequestTask___ctor(
        WarBoardAPITreasureGetRequestTask_o *this,
        WarBoardTreasureData_o *treasure,
        NetworkManager_ResultCallbackFunc_o *resultCallback,
        bool onStartBeginRequest,
        const MethodInfo *method)
{
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  WarBoardAPIRequestTask___ctor_38483148(
    (WarBoardAPIRequestTask_o *)this,
    resultCallback,
    onStartBeginRequest,
    (const MethodInfo *)onStartBeginRequest);
  this->fields.treasureData = treasure;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.treasureData, (int32_t)treasure, v7, v8);
}


void WarBoardAPITreasureGetRequestTask__SetRequest(WarBoardAPITreasureGetRequestTask_o *this, const MethodInfo *method)
{
  WarBoardTreasureRequest_o *Instance; // x0
  __int64 v4; // x1
  WarBoardData_o *klass; // x20
  struct WarBoardTreasureData_o *treasureData; // x8
  struct RequestBase_o *v7; // x21
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4CB3F14 & 1) == 0 )
  {
    sub_1C6BA08(&Method_NetworkManager_getRequest_WarBoardTreasureRequest___);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4CB3F14 = 1;
  }
  Instance = (WarBoardTreasureRequest_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  klass = (WarBoardData_o *)Instance[11].klass;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (WarBoardTreasureRequest_o *)NetworkManager__getRequest_object_(
                                            0,
                                            (const MethodInfo_31C6C44 *)Method_NetworkManager_getRequest_WarBoardTreasureRequest___);
  treasureData = this->fields.treasureData;
  if ( !treasureData || (v7 = (struct RequestBase_o *)Instance) == 0 )
LABEL_9:
    sub_1C6BC60(Instance, v4);
  WarBoardTreasureRequest__beginRequest(Instance, treasureData->fields._treasureId_k__BackingField, klass, 0);
  this->fields.request = v7;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.request, (int32_t)v7, v8, v9);
}