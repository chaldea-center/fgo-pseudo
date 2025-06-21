void __fastcall EquipMaster___ctor(EquipMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B1C3A0 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_EquipMaster__EquipEntity__int___ctor__, method);
    byte_4B1C3A0 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    51,
    (const MethodInfo_32C5ADC *)Method_DataMasterBase_EquipMaster__EquipEntity__int___ctor__);
}


System_String_o *__fastcall EquipMaster__getEquipName(int32_t equipId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  System_String_o *result; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *monitor; // x19

  if ( (byte_4B1C3A1 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EquipMaster___, method);
    sub_1BCAFF8(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__, v3);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v4);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B1C3A1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EquipMaster___)) == 0LL )
  {
    sub_1BCB254(Instance, v7);
  }
  result = (System_String_o *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                equipId,
                                (const MethodInfo_32C7E00 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
  if ( result )
  {
    monitor = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)result[1].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_48161020(monitor, 0LL);
  }
  return result;
}