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


void __fastcall BattleBuffConfWindowComponent__setData(
        BattleBuffConfWindowComponent_o *this,
        int32_t buffId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  DataManager_o *v7; // x21

  if ( (byte_438EB46 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_BuffMaster___);
    sub_B775C4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438EB46 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_BuffMaster___);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                buffId,
                                (const MethodInfo_21FB894 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
  this->fields.buffId = buffId;
  if ( !Instance
    || (v7 = Instance, (Instance = (DataManager_o *)this->fields.buffIcon) == 0LL)
    || (BattleServantBuffIconComponent__setIcon(
          (BattleServantBuffIconComponent_o *)Instance,
          v7->fields.m_CachedPtr,
          0LL),
        (Instance = (DataManager_o *)this->fields.nameLabel) == 0LL)
    || (UILabel__set_text((UILabel_o *)Instance, (System_String_o *)v7->fields.datalist, 0LL),
        (Instance = (DataManager_o *)this->fields.detailLabel) == 0LL) )
  {
LABEL_10:
    sub_B7769C(Instance, v6);
  }
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)v7->fields.lookup, 0LL);
}