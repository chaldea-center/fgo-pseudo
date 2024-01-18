void __fastcall BattleBuffConfWindowComponent___ctor(BattleBuffConfWindowComponent_o *this, const MethodInfo *method)
{
  this->fields.buffId = -1;
  BattleWindowComponent___ctor((BattleWindowComponent_o *)this, 0LL);
}


void __fastcall BattleBuffConfWindowComponent__Close(
        BattleBuffConfWindowComponent_o *this,
        BattleWindowComponent_EndCall_o *call,
        const MethodInfo *method)
{
  this->fields.buffId = -1;
  BattleWindowComponent__Close((BattleWindowComponent_o *)this, call, 0LL);
}


void __fastcall BattleBuffConfWindowComponent__Open(
        BattleBuffConfWindowComponent_o *this,
        BattleWindowComponent_EndCall_o *call,
        const MethodInfo *method)
{
  BattleWindowComponent__Open((BattleWindowComponent_o *)this, call, 0LL);
}


bool __fastcall BattleBuffConfWindowComponent__checkBuffId(
        BattleBuffConfWindowComponent_o *this,
        int32_t buffId,
        const MethodInfo *method)
{
  return this->fields.buffId == buffId;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleBuffConfWindowComponent__setData(
        BattleBuffConfWindowComponent_o *this,
        int32_t buffId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  DataManager_o *v9; // x21

  if ( (byte_418AC69 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_BuffMaster___, *(_QWORD *)&buffId);
    sub_B2C35C(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_418AC69 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_BuffMaster___);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                buffId,
                                (const MethodInfo_24E40D0 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
  this->fields.buffId = buffId;
  if ( !Instance
    || (v9 = Instance, (Instance = (DataManager_o *)this->fields.buffIcon) == 0LL)
    || (BattleServantBuffIconComponent__setIcon(
          (BattleServantBuffIconComponent_o *)Instance,
          v9->fields.m_CachedPtr,
          0LL),
        (Instance = (DataManager_o *)this->fields.nameLabel) == 0LL)
    || (UILabel__set_text((UILabel_o *)Instance, (System_String_o *)v9->fields.datalist, 0LL),
        (Instance = (DataManager_o *)this->fields.detailLabel) == 0LL) )
  {
LABEL_10:
    sub_B2C434(Instance, v8);
  }
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)v9->fields.lookup, 0LL);
}