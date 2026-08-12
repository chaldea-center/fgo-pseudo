void EquipMaster___ctor(EquipMaster_o *this, const MethodInfo *method)
{
  if ( (byte_59706B1 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_EquipMaster__EquipEntity__int___ctor__);
    byte_59706B1 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    51,
    (const MethodInfo_3F0E6E0 *)Method_DataMasterBase_EquipMaster__EquipEntity__int___ctor__);
}


System_String_o *EquipMaster__getEquipName(int32_t equipId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  System_String_o *result; // x0
  __int64 v6; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *monitor; // x19

  if ( (byte_59706B2 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EquipMaster___);
    sub_2213A60(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59706B2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EquipMaster___)) == 0 )
  {
    sub_2213CDC(Instance, v4);
  }
  result = (System_String_o *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                equipId,
                                (const MethodInfo_3F10B30 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
  if ( result )
  {
    monitor = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)result[1].monitor;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v6);
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_56033020(monitor, 0);
  }
  return result;
}