void __fastcall CommandCodeEntity___ctor(CommandCodeEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4AB5B46 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataEntityBase_int___ctor__, method);
    byte_4AB5B46 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3163B90 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall CommandCodeEntity__CreatePrimaryKey(CommandCodeEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // 0:x0.16

  if ( (byte_4AB5B43 & 1) == 0 )
  {
    sub_1BAB41C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4AB5B43 = 1;
  }
  v4 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v6.fields.currentCryptoKey = v4;
  *(_QWORD *)&v6.fields.fakeValue = v3;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(v6, 0LL);
}


System_String_o *__fastcall CommandCodeEntity__GetName(CommandCodeEntity_o *this, const MethodInfo *method)
{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *name; // x19

  if ( (byte_4AB5B44 & 1) == 0 )
  {
    sub_1BAB41C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, method);
    byte_4AB5B44 = 1;
  }
  name = this->fields.name;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_46731696(name, 0LL);
}


void __fastcall CommandCodeEntity__GetSkillInfo(
        CommandCodeEntity_o *this,
        System_Int32_array **idList,
        System_String_array **titleList,
        System_String_array **explanationList,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v15; // x23
  __int64 v16; // x24
  CommandCodeSkillMaster_o *v17; // x22
  int32_t v18; // w23
  const MethodInfo *v19; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_4AB5B45 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMasterData_CommandCodeSkillMaster___, idList);
    sub_1BAB41C(&NetworkManager_TypeInfo, v9);
    sub_1BAB41C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4AB5B45 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_CommandCodeSkillMaster___);
  v16 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v15 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v17 = (CommandCodeSkillMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v20.fields.currentCryptoKey = v16;
  *(_QWORD *)&v20.fields.fakeValue = v15;
  v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(v20, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !v17 )
LABEL_10:
    sub_1BAB678(Instance, v13);
  CommandCodeSkillMaster__getSkillInfo(v17, idList, titleList, explanationList, v18, (int64_t)Instance, -1, v19);
}