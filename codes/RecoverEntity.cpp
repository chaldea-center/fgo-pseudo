void __fastcall RecoverEntity___ctor(RecoverEntity_o *this, const MethodInfo *method)
{
  if ( (byte_418AD21 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_int___ctor__, method);
    byte_418AD21 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_24E3F7C *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall RecoverEntity__CreatePrimaryKey(RecoverEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


CommandSpellEntity_o *__fastcall RecoverEntity__getRecvCmdSpellData(RecoverEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  DataManager_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_418AD20 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_CommandSpellMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_418AD20 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CommandSpellMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v6);
  }
  return (CommandSpellEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                   (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                   this->fields.targetId,
                                   (const MethodInfo_24E40D0 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
}


ItemEntity_o *__fastcall RecoverEntity__getRecvItemData(RecoverEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  DataManager_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_418AD1F & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ItemMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_418AD1F = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ItemMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v6);
  }
  return (ItemEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                           (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                           this->fields.targetId,
                           (const MethodInfo_24E40D0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
}