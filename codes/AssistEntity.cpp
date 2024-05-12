void __fastcall AssistEntity___ctor(AssistEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438AA4C & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_438AA4C = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall AssistEntity__CreatePK(int32_t id, int32_t priority, const MethodInfo *method)
{
  if ( (byte_438AA49 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_438AA49 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           priority,
           (const MethodInfo_1D171BC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall AssistEntity__CreatePrimaryKey(AssistEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return AssistEntity__CreatePK(this->fields.id, this->fields.priority, v2);
}


System_String_o *__fastcall AssistEntity__GetDetail(AssistEntity_o *this, bool isShort, const MethodInfo *method)
{
  SkillLvMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v6; // x1
  SkillLvEntity_o *Entity; // x0

  if ( (byte_438AA4B & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_SkillDetailMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    byte_438AA4B = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_SkillLvMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_15;
  Entity = SkillLvMaster__GetEntity(Master_WarQuestSelectionMaster, this->fields.skillId, this->fields.skillLv, 0LL);
  if ( Entity && Entity->fields.skillDetailId > 1 )
    return SkillLvEntity__getDetail_26832724(Entity, this->fields.skillLv, isShort, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_SkillDetailMaster___);
  if ( !Master_WarQuestSelectionMaster )
LABEL_15:
    sub_B7769C(Master_WarQuestSelectionMaster, v6);
  return SkillDetailMaster__getDetail(
           (SkillDetailMaster_o *)Master_WarQuestSelectionMaster,
           this->fields.skillId,
           isShort,
           0LL);
}


bool __fastcall AssistEntity__IsOpen(AssistEntity_o *this, const MethodInfo *method)
{
  int64_t Time; // x0
  DataManager_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_438AA4A & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438AA4A = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( Time < this->fields.startedAt || Time > this->fields.endedAt )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_CommonReleaseMaster___)) == 0LL )
  {
    sub_B7769C(Instance, v6);
  }
  return CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Instance, this->fields.commonReleaseId, 0LL, 0, 0LL);
}