void RecoverEntity___ctor(RecoverEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C27A95 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_int___ctor__);
    byte_4C27A95 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_33858B4 *)Method_DataEntityBase_int___ctor__);
}


int32_t RecoverEntity__CreatePrimaryKey(RecoverEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


CommandSpellEntity_o *RecoverEntity__getRecvCmdSpellData(RecoverEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4C27A94 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_CommandSpellMaster___);
    sub_1C2D490(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C27A94 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_CommandSpellMaster___)) == 0 )
  {
    sub_1C2D6EC(Instance, v4);
  }
  return (CommandSpellEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                   this->fields.targetId,
                                   (const MethodInfo_3387D98 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
}


ItemEntity_o *RecoverEntity__getRecvItemData(RecoverEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4C27A93 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C2D490(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C27A93 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ItemMaster___)) == 0 )
  {
    sub_1C2D6EC(Instance, v4);
  }
  return (ItemEntity_o *)DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                           this->fields.targetId,
                           (const MethodInfo_3387D98 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
}