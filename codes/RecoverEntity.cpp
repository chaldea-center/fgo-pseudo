void __fastcall RecoverEntity___ctor(RecoverEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BC80E2 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataEntityBase_int___ctor__, method);
    byte_4BC80E2 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3246194 *)Method_DataEntityBase_int___ctor__);
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

  if ( (byte_4BC80E1 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_CommandSpellMaster___, method);
    sub_1C1ABD4(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__, v3);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4BC80E1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_CommandSpellMaster___)) == 0LL )
  {
    sub_1C1AE30(Instance, v6);
  }
  return (CommandSpellEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                   this->fields.targetId,
                                   (const MethodInfo_3248678 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
}


ItemEntity_o *__fastcall RecoverEntity__getRecvItemData(RecoverEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4BC80E0 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ItemMaster___, method);
    sub_1C1ABD4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v3);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4BC80E0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ItemMaster___)) == 0LL )
  {
    sub_1C1AE30(Instance, v6);
  }
  return (ItemEntity_o *)DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                           this->fields.targetId,
                           (const MethodInfo_3248678 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
}