// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardAPITreasureGetRequestTask___ctor(
        WarBoardAPITreasureGetRequestTask_o *this,
        WarBoardTreasureData_o *treasure,
        NetworkManager_ResultCallbackFunc_o *resultCallback,
        bool onStartBeginRequest,
        const MethodInfo *method)
{
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  WarBoardAPIRequestTask___ctor_36369024(
    (WarBoardAPIRequestTask_o *)this,
    resultCallback,
    onStartBeginRequest,
    (const MethodInfo *)onStartBeginRequest);
  this->fields.treasureData = treasure;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.treasureData, (int64_t)treasure, v7, v8, v9, v10, v11, v12);
}


void __fastcall WarBoardAPITreasureGetRequestTask__SetRequest(
        WarBoardAPITreasureGetRequestTask_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  WarBoardTreasureRequest_o *Instance; // x0
  __int64 v9; // x1
  WarBoardData_o *klass; // x20
  struct WarBoardTreasureData_o *treasureData; // x8
  struct RequestBase_o *v12; // x21
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4B1405C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_NetworkManager_getRequest_WarBoardTreasureRequest___, method, v2);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v6, v7);
    byte_4B1405C = 1;
  }
  Instance = (WarBoardTreasureRequest_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  klass = (WarBoardData_o *)Instance[11].klass;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v9);
  Instance = (WarBoardTreasureRequest_o *)NetworkManager__getRequest_object_(
                                            0LL,
                                            (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_WarBoardTreasureRequest___);
  treasureData = this->fields.treasureData;
  if ( !treasureData || (v12 = (struct RequestBase_o *)Instance) == 0LL )
LABEL_9:
    sub_1BCAA3C(Instance, v9);
  WarBoardTreasureRequest__beginRequest(Instance, treasureData->fields._treasureId_k__BackingField, klass, 0LL);
  this->fields.request = v12;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.request, (int64_t)v12, v13, v14, v15, v16, v17, v18);
}