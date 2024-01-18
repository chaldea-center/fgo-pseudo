void __fastcall VoiceEntity___ctor(VoiceEntity_o *this, const MethodInfo *method)
{
  if ( (byte_418D2D5 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_418D2D5 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall VoiceEntity__CreatePrimaryKey(VoiceEntity_o *this, const MethodInfo *method)
{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *id; // x19

  if ( (byte_418D2D3 & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, method);
    byte_418D2D3 = 1;
  }
  id = this->fields.id;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  }
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44796528(id, 0LL);
}


bool __fastcall VoiceEntity__HasFlag(VoiceEntity_o *this, int32_t typeFlag, const MethodInfo *method)
{
  return (this->fields.flag & typeFlag) != 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall VoiceEntity__IsCondEnable(VoiceEntity_o *this, int32_t svtId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *id; // x21
  VoiceReleaseMaster_o *v11; // x20
  const MethodInfo *v12; // x3

  if ( (byte_418D2D4 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_VoiceReleaseMaster___, *(_QWORD *)&svtId);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_418D2D4 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_VoiceReleaseMaster___);
  id = this->fields.id;
  v11 = (VoiceReleaseMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  }
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44796528(id, 0LL);
  if ( !v11 )
LABEL_9:
    sub_B2C434(Instance, v8);
  return VoiceReleaseMaster__IsCondEnable(v11, (System_String_o *)Instance, svtId, v12);
}


bool __fastcall VoiceEntity__IsHide(VoiceEntity_o *this, const MethodInfo *method)
{
  return this->fields.closedType == 2;
}