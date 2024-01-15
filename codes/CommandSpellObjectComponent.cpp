void __fastcall CommandSpellObjectComponent___ctor(CommandSpellObjectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall CommandSpellObjectComponent__onClickUse(CommandSpellObjectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  CommandSpellWindowComponent_o *target; // x0

  if ( (byte_40FA5FB & 1) == 0 )
  {
    sub_B16FFC(&SeManager_TypeInfo, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    byte_40FA5FB = 1;
  }
  if ( this->fields.touchFlg )
  {
    if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    SeManager__PlayCommonSe(9, 0LL);
    target = this->fields.target;
    if ( !target )
      sub_B170D4();
    CommandSpellWindowComponent__UseSpell(target, this->fields.Id, 0LL);
  }
  else
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(2, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandSpellObjectComponent__setData(
        CommandSpellObjectComponent_o *this,
        int32_t mode,
        int32_t Id,
        int32_t count,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x0
  WarEntity_o *v22; // x23
  UILabel_o *label_name; // x0
  UILabel_o *label_conf; // x0
  UILabel_o *label_count; // x24
  int32_t *v26; // x22
  System_String_o *v27; // x25
  System_String_o *v28; // x0
  System_String_o *v29; // x0
  UILabel_o *unitLabel; // x24
  System_String_o *v31; // x0
  BalanceConfig_c *v32; // x0
  int32_t ClassBoardReleaseQuestId; // w24
  const MethodInfo *v34; // x3
  ClassBoardCommandSpellMaster_o *Master_WarQuestSelectionMaster; // x0
  struct UILabel_o *v36; // x23
  System_String_o *mText; // x24
  System_String_o *v38; // x0
  System_String_o *v39; // x0

  if ( (byte_40FA5F9 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, *(_QWORD *)&mode);
    sub_B16FFC(&CondType_TypeInfo, v9);
    sub_B16FFC(&Method_DataManager_GetMasterData_CommandSpellMaster___, v10);
    sub_B16FFC(&Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___, v11);
    sub_B16FFC(&DataManager_TypeInfo, v12);
    sub_B16FFC(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__, v13);
    sub_B16FFC(&LocalizationManager_TypeInfo, v14);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_B16FFC(&StringLiteral_14700/*"USE_MASTER_SPELL"*/, v16);
    sub_B16FFC(&StringLiteral_3243/*"COMMAND_SPELL_ADD_FUNCTION_TEXT"*/, v17);
    sub_B16FFC(&StringLiteral_8623/*"MASTER_SPELL_UNIT"*/, v18);
    byte_40FA5F9 = 1;
  }
  this->fields.Id = Id;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CommandSpellMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_31;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             MasterData_WarQuestSelectionMaster,
             Id,
             (const MethodInfo_266F388 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
  if ( !Entity )
    goto LABEL_31;
  v22 = Entity;
  label_name = this->fields.label_name;
  if ( !label_name )
    goto LABEL_31;
  UILabel__set_text(label_name, v22->fields.name, 0LL);
  label_conf = this->fields.label_conf;
  if ( !label_conf )
    goto LABEL_31;
  UILabel__set_text(label_conf, v22->fields.longName, 0LL);
  label_count = this->fields.label_count;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v26 = &v22->fields.id + 1;
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_14700/*"USE_MASTER_SPELL"*/, 0LL);
  v28 = System_Int32__ToString((int)v22 + 20, 0LL);
  v29 = System_String__Concat_43743732(v27, v28, 0LL);
  if ( !label_count )
    goto LABEL_31;
  UILabel__set_text(label_count, v29, 0LL);
  unitLabel = this->fields.unitLabel;
  v31 = LocalizationManager__Get((System_String_o *)StringLiteral_8623/*"MASTER_SPELL_UNIT"*/, 0LL);
  if ( !unitLabel )
    goto LABEL_31;
  UILabel__set_text(unitLabel, v31, 0LL);
  v32 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v32 = BalanceConfig_TypeInfo;
  }
  ClassBoardReleaseQuestId = v32->static_fields->ClassBoardReleaseQuestId;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( CondType__IsQuestClear_25438860(ClassBoardReleaseQuestId, -1, 0, 0LL) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (ClassBoardCommandSpellMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
    if ( Master_WarQuestSelectionMaster )
    {
      if ( ClassBoardCommandSpellMaster__IsAddFunctionCommandSpell(Master_WarQuestSelectionMaster, v22->fields.id, 0LL) )
      {
        v36 = this->fields.label_conf;
        if ( v36 )
        {
          mText = v36->fields.mText;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v38 = LocalizationManager__Get((System_String_o *)StringLiteral_3243/*"COMMAND_SPELL_ADD_FUNCTION_TEXT"*/, 0LL);
          v39 = System_String__Concat_43743732(mText, v38, 0LL);
          UILabel__set_text(v36, v39, 0LL);
          goto LABEL_30;
        }
LABEL_31:
        sub_B170D4();
      }
    }
  }
LABEL_30:
  this->fields.Consume = *v26;
  CommandSpellObjectComponent__updateIsUse(this, mode, count, v34);
}


void __fastcall CommandSpellObjectComponent__setUseButton(
        CommandSpellObjectComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  this->fields.touchFlg = flg;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandSpellObjectComponent__updateIsUse(
        CommandSpellObjectComponent_o *this,
        int32_t mode,
        int32_t count,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x0
  UnityEngine_Behaviour_o *coverSprite; // x0
  bool v13; // w8

  if ( (byte_40FA5FA & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_CommandSpellMaster___, *(_QWORD *)&mode);
    sub_B16FFC(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_40FA5FA = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CommandSpellMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_14;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             MasterData_WarQuestSelectionMaster,
             this->fields.Id,
             (const MethodInfo_266F388 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
  if ( mode == 1 )
  {
    if ( !Entity )
      goto LABEL_14;
    if ( LODWORD(Entity->fields.age) == 2 )
      count = 0;
  }
  coverSprite = (UnityEngine_Behaviour_o *)this->fields.coverSprite;
  if ( !coverSprite )
LABEL_14:
    sub_B170D4();
  if ( this->fields.Consume <= count )
  {
    UnityEngine_Behaviour__set_enabled(coverSprite, 0, 0LL);
    v13 = 1;
  }
  else
  {
    UnityEngine_Behaviour__set_enabled(coverSprite, 1, 0LL);
    v13 = 0;
  }
  this->fields.touchFlg = v13;
}