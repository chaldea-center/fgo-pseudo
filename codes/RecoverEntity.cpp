void RecoverEntity___ctor(RecoverEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938ECF & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_int___ctor__);
    byte_5938ECF = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3EDAD70 *)Method_DataEntityBase_int___ctor__);
}


int32_t RecoverEntity__CreatePrimaryKey(RecoverEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


ItemEntity_o *RecoverEntity__getRecvItemData(RecoverEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_5938ECE & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_21FFC50(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5938ECE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ItemMaster___)) == 0 )
  {
    sub_21FFECC(Instance, v4);
  }
  return (ItemEntity_o *)DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                           this->fields.targetId,
                           (const MethodInfo_3EDD388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
}