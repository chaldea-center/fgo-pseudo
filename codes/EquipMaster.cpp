void __fastcall EquipMaster___ctor(EquipMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418A1BD & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EquipMaster__EquipEntity__int___ctor__, method);
    byte_418A1BD = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    45,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_EquipMaster__EquipEntity__int___ctor__);
}


System_String_o *__fastcall EquipMaster__getEquipName(int32_t equipId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  System_String_o *result; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *monitor; // x19

  if ( (byte_418A1BE & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EquipMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__, v3);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_418A1BE = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EquipMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v7);
  }
  result = (System_String_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                equipId,
                                (const MethodInfo_24E40D0 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
  if ( result )
  {
    monitor = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)result[1].monitor;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    }
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44796528(monitor, 0LL);
  }
  return result;
}