void __fastcall EquipMaster___ctor(EquipMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B262B & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EquipMaster__EquipEntity__int___ctor__);
    byte_42B262B = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    46,
    (const MethodInfo_23E223C *)Method_DataMasterBase_EquipMaster__EquipEntity__int___ctor__);
}


System_String_o *__fastcall EquipMaster__getEquipName(int32_t equipId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  System_String_o *result; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *monitor; // x19

  if ( (byte_42B262C & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_EquipMaster___);
    sub_B52984(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B262C = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EquipMaster___)) == 0LL )
  {
    sub_B52A5C(Instance, v4);
  }
  result = (System_String_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                equipId,
                                (const MethodInfo_23E22D8 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
  if ( result )
  {
    monitor = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)result[1].monitor;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    }
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44824884(monitor, 0LL);
  }
  return result;
}