void __fastcall RecoverEntity___ctor(RecoverEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FF101 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataEntityBase_int___ctor__, method);
    byte_49FF101 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_30D6598 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall RecoverEntity__CreatePrimaryKey(RecoverEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


CommandSpellEntity_o *__fastcall RecoverEntity__getRecvCmdSpellData(RecoverEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_49FF100 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_CommandSpellMaster___, method);
    sub_1B64A00(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__, v3);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_49FF100 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_CommandSpellMaster___)) == 0LL )
  {
    sub_1B64C5C(Instance, v6);
  }
  return (CommandSpellEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                   this->fields.targetId,
                                   (const MethodInfo_30D6798 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
}


ItemEntity_o *__fastcall RecoverEntity__getRecvItemData(RecoverEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_49FF0FF & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_ItemMaster___, method);
    sub_1B64A00(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v3);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_49FF0FF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_ItemMaster___)) == 0LL )
  {
    sub_1B64C5C(Instance, v6);
  }
  return (ItemEntity_o *)DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                           this->fields.targetId,
                           (const MethodInfo_30D6798 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
}