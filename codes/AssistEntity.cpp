void __fastcall AssistEntity___ctor(AssistEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5AD9A & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5AD9A = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall AssistEntity__CreatePK(int32_t id, int32_t priority, const MethodInfo *method)
{
  if ( (byte_4A5AD97 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4A5AD97 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           priority,
           (const MethodInfo_2E7DB2C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall AssistEntity__CreatePrimaryKey(AssistEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return AssistEntity__CreatePK(this->fields.id, this->fields.priority, v2);
}


System_String_o *__fastcall AssistEntity__GetDetail(AssistEntity_o *this, bool isShort, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  SkillLvEntity_o *Entity; // x0

  if ( (byte_4A5AD99 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_SkillDetailMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    byte_4A5AD99 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_SkillLvMaster___);
  if ( !Master_object )
    goto LABEL_13;
  Entity = SkillLvMaster__GetEntity((SkillLvMaster_o *)Master_object, this->fields.skillId, this->fields.skillLv, 0LL);
  if ( Entity && Entity->fields.skillDetailId > 1 )
    return SkillLvEntity__getDetail_39937016(Entity, this->fields.skillLv, isShort, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_SkillDetailMaster___);
  if ( !Master_object )
LABEL_13:
    sub_1B8880C(Master_object, v6);
  return SkillDetailMaster__getDetail((SkillDetailMaster_o *)Master_object, this->fields.skillId, isShort, 0LL);
}


bool __fastcall AssistEntity__IsOpen(AssistEntity_o *this, const MethodInfo *method)
{
  int64_t Time; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x4

  if ( (byte_4A5AD98 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5AD98 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( Time < this->fields.startedAt || Time > this->fields.endedAt )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_CommonReleaseMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v6);
  }
  return CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Instance, this->fields.commonReleaseId, 0LL, 0, v7);
}