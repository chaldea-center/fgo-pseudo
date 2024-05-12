void __fastcall EquipMaster___ctor(EquipMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438E7D1 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_EquipMaster__EquipEntity__int___ctor__);
    byte_438E7D1 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    46,
    (const MethodInfo_21FB7F8 *)Method_DataMasterBase_EquipMaster__EquipEntity__int___ctor__);
}


System_String_o *__fastcall EquipMaster__getEquipName(int32_t equipId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  System_String_o *result; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *monitor; // x19

  if ( (byte_438E7D2 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_EquipMaster___);
    sub_B775C4(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438E7D2 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EquipMaster___)) == 0LL )
  {
    sub_B7769C(Instance, v4);
  }
  result = (System_String_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                equipId,
                                (const MethodInfo_21FB894 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
  if ( result )
  {
    monitor = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)result[1].monitor;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    }
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_45464420(monitor, 0LL);
  }
  return result;
}