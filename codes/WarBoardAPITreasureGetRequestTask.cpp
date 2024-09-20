void __fastcall WarBoardAPITreasureGetRequestTask___ctor(
        WarBoardAPITreasureGetRequestTask_o *this,
        WarBoardTreasureData_o *treasure,
        NetworkManager_ResultCallbackFunc_o *resultCallback,
        bool onStartBeginRequest,
        const MethodInfo *method)
{
  int32_t v7; // w2
  int32_t v8; // w3

  WarBoardAPIRequestTask___ctor_35674108((WarBoardAPIRequestTask_o *)this, resultCallback, onStartBeginRequest, 0LL);
  this->fields.treasureData = treasure;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.treasureData, (int32_t)treasure, v7, v8);
}


void __fastcall WarBoardAPITreasureGetRequestTask__SetRequest(
        WarBoardAPITreasureGetRequestTask_o *this,
        const MethodInfo *method)
{
  WarBoardTreasureRequest_o *Instance; // x0
  __int64 v4; // x1
  WarBoardData_o *klass; // x20
  struct WarBoardTreasureData_o *treasureData; // x8
  struct RequestBase_o *v7; // x21
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A590D1 & 1) == 0 )
  {
    sub_1B885B0(&Method_NetworkManager_getRequest_WarBoardTreasureRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4A590D1 = 1;
  }
  WarBoardAPIRequestTask__SetRequest((WarBoardAPIRequestTask_o *)this, 0LL);
  Instance = (WarBoardTreasureRequest_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  klass = (WarBoardData_o *)Instance[11].klass;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (WarBoardTreasureRequest_o *)NetworkManager__getRequest_object_(
                                            0LL,
                                            (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_WarBoardTreasureRequest___);
  treasureData = this->fields.treasureData;
  if ( !treasureData || (v7 = (struct RequestBase_o *)Instance) == 0LL )
LABEL_9:
    sub_1B8880C(Instance, v4);
  WarBoardTreasureRequest__beginRequest(Instance, treasureData->fields._treasureId_k__BackingField, klass, 0LL);
  this->fields.request = v7;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.request, (int32_t)v7, v8, v9);
}