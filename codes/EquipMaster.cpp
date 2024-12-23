void __fastcall EquipMaster___ctor(EquipMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B66A50 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_EquipMaster__EquipEntity__int___ctor__, method);
    byte_4B66A50 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    51,
    (const MethodInfo_31FD784 *)Method_DataMasterBase_EquipMaster__EquipEntity__int___ctor__);
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

  if ( (byte_4B66A51 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_EquipMaster___, method);
    sub_1BE4ACC(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__, v3);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v4);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B66A51 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_EquipMaster___)) == 0LL )
  {
    sub_1BE4D28(Instance, v7);
  }
  result = (System_String_o *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                equipId,
                                (const MethodInfo_31FD7C4 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
  if ( result )
  {
    monitor = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)result[1].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_47334904(monitor, 0LL);
  }
  return result;
}