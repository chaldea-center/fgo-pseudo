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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  DataManager_o *v14; // x21

  if ( (byte_42EC10B & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_BuffMaster___, buffId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10, v11);
    byte_42EC10B = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_BuffMaster___);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                buffId,
                                (const MethodInfo_23FAE10 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
  this->fields.buffId = buffId;
  if ( !Instance
    || (v14 = Instance, (Instance = (DataManager_o *)this->fields.buffIcon) == 0LL)
    || (BattleServantBuffIconComponent__setIcon(
          (BattleServantBuffIconComponent_o *)Instance,
          v14->fields.m_CachedPtr,
          0LL),
        (Instance = (DataManager_o *)this->fields.nameLabel) == 0LL)
    || (UILabel__set_text((UILabel_o *)Instance, (System_String_o *)v14->fields.datalist, 0LL),
        (Instance = (DataManager_o *)this->fields.detailLabel) == 0LL) )
  {
LABEL_10:
    sub_B5D69C(Instance, v13);
  }
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)v14->fields.lookup, 0LL);
}