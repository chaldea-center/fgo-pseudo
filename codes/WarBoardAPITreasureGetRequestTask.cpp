// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardAPITreasureGetRequestTask___ctor(
        WarBoardAPITreasureGetRequestTask_o *this,
        WarBoardTreasureData_o *treasure,
        NetworkManager_ResultCallbackFunc_o *resultCallback,
        bool onStartBeginRequest,
        const MethodInfo *method)
{
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  WarBoardAPIRequestTask___ctor_36447052(
    (WarBoardAPIRequestTask_o *)this,
    resultCallback,
    onStartBeginRequest,
    (const MethodInfo *)onStartBeginRequest);
  this->fields.treasureData = treasure;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.treasureData, (int32_t)treasure, v7, v8);
}


void __fastcall WarBoardAPITreasureGetRequestTask__SetRequest(
        WarBoardAPITreasureGetRequestTask_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WarBoardTreasureRequest_o *Instance; // x0
  __int64 v6; // x1
  WarBoardData_o *klass; // x20
  struct WarBoardTreasureData_o *treasureData; // x8
  struct RequestBase_o *v9; // x21
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4A4C17E & 1) == 0 )
  {
    sub_1B863B8(&Method_NetworkManager_getRequest_WarBoardTreasureRequest___, method);
    sub_1B863B8(&NetworkManager_TypeInfo, v3);
    sub_1B863B8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v4);
    byte_4A4C17E = 1;
  }
  Instance = (WarBoardTreasureRequest_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  klass = (WarBoardData_o *)Instance[11].klass;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (WarBoardTreasureRequest_o *)NetworkManager__getRequest_object_(
                                            0LL,
                                            (const MethodInfo_2FF4AF4 *)Method_NetworkManager_getRequest_WarBoardTreasureRequest___);
  treasureData = this->fields.treasureData;
  if ( !treasureData || (v9 = (struct RequestBase_o *)Instance) == 0LL )
LABEL_9:
    sub_1B86614(Instance, v6);
  WarBoardTreasureRequest__beginRequest(Instance, treasureData->fields._treasureId_k__BackingField, klass, 0LL);
  this->fields.request = v9;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.request, (int32_t)v9, v10, v11);
}