void BattleBuffConfWindowComponent___ctor(BattleBuffConfWindowComponent_o *this, const MethodInfo *method)
{
  this->fields.buffId = -1;
  BattleWindowComponent___ctor((BattleWindowComponent_o *)this, 0);
}


void BattleBuffConfWindowComponent__Close(
        BattleBuffConfWindowComponent_o *this,
        BattleWindowComponent_EndCall_o *call,
        const MethodInfo *method)
{
  this->fields.buffId = -1;
  BattleWindowComponent__Close((BattleWindowComponent_o *)this, call, 0);
}


void BattleBuffConfWindowComponent__Open(
        BattleBuffConfWindowComponent_o *this,
        BattleWindowComponent_EndCall_o *call,
        const MethodInfo *method)
{
  BattleWindowComponent__Open((BattleWindowComponent_o *)this, call, 0);
}


bool BattleBuffConfWindowComponent__checkBuffId(
        BattleBuffConfWindowComponent_o *this,
        int32_t buffId,
        const MethodInfo *method)
{
  return this->fields.buffId == buffId;
}


void BattleBuffConfWindowComponent__setData(
        BattleBuffConfWindowComponent_o *this,
        int32_t buffId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  DataManager_o *v6; // x21

  if ( (byte_4C463D1 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_BuffMaster___);
    sub_1C37058(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C463D1 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_BuffMaster___);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                buffId,
                                (const MethodInfo_33A10A0 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
  this->fields.buffId = buffId;
  if ( !Instance
    || (v6 = Instance, (Instance = (DataManager_o *)this->fields.buffIcon) == 0)
    || (BattleServantBuffIconComponent__setIcon((BattleServantBuffIconComponent_o *)Instance, v6->fields.m_CachedPtr, 0),
        (Instance = (DataManager_o *)this->fields.nameLabel) == 0)
    || (UILabel__set_text((UILabel_o *)Instance, (System_String_o *)v6->fields.m_CancellationTokenSource, 0),
        (Instance = (DataManager_o *)this->fields.detailLabel) == 0) )
  {
LABEL_10:
    sub_1C372B4(Instance);
  }
  UILabel__set_text((UILabel_o *)Instance, *(System_String_o **)&v6->fields._DispLog, 0);
}