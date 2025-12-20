void EquipMaster___ctor(EquipMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D2C6E4 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_EquipMaster__EquipEntity__int___ctor__);
    byte_4D2C6E4 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    51,
    (const MethodInfo_345919C *)Method_DataMasterBase_EquipMaster__EquipEntity__int___ctor__);
}


System_String_o *EquipMaster__getEquipName(int32_t equipId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  System_String_o *result; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *monitor; // x19

  if ( (byte_4D2C6E5 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_EquipMaster___);
    sub_1C94098(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2C6E5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_EquipMaster___)) == 0 )
  {
    sub_1C942F0(Instance, v4);
  }
  result = (System_String_o *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                equipId,
                                (const MethodInfo_345B4C0 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
  if ( result )
  {
    monitor = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)result[1].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_49657388(monitor, 0);
  }
  return result;
}