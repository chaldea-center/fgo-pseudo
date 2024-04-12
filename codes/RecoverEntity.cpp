void __fastcall RecoverEntity___ctor(RecoverEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B3A12 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_int___ctor__);
    byte_42B3A12 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_23E2184 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall RecoverEntity__CreatePrimaryKey(RecoverEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


CommandSpellEntity_o *__fastcall RecoverEntity__getRecvCmdSpellData(RecoverEntity_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_42B3A11 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_CommandSpellMaster___);
    sub_B52984(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B3A11 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_CommandSpellMaster___)) == 0LL )
  {
    sub_B52A5C(Instance, v4);
  }
  return (CommandSpellEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                   (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                   this->fields.targetId,
                                   (const MethodInfo_23E22D8 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
}


ItemEntity_o *__fastcall RecoverEntity__getRecvItemData(RecoverEntity_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_42B3A10 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B52984(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B3A10 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ItemMaster___)) == 0LL )
  {
    sub_B52A5C(Instance, v4);
  }
  return (ItemEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                           (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                           this->fields.targetId,
                           (const MethodInfo_23E22D8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
}