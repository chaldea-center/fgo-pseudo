void __fastcall CommandSpellObjectComponent___ctor(CommandSpellObjectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall CommandSpellObjectComponent__onClickUse(CommandSpellObjectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  const MethodInfo *v4; // x2
  CommandSpellWindowComponent_o *target; // x0

  if ( (byte_421089E & 1) == 0 )
  {
    sub_B0D8A4(&SeManager_TypeInfo, method);
    sub_B0D8A4(&SoundManager_TypeInfo, v3);
    byte_421089E = 1;
  }
  if ( this->fields.touchFlg )
  {
    if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    SeManager__PlayCommonSe(9, 0LL);
    target = this->fields.target;
    if ( !target )
      sub_B0D97C(0LL);
    CommandSpellWindowComponent__UseSpell(target, this->fields.Id, v4);
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
  DataManager_o *Instance; // x0
  DataManager_o *v20; // x23
  UILabel_o *label_count; // x24
  int32_t *p_DispLog; // x22
  System_String_o *v23; // x25
  System_String_o *v24; // x0
  UILabel_o *unitLabel; // x24
  BalanceConfig_c *v26; // x0
  int32_t ClassBoardReleaseQuestId; // w24
  const MethodInfo *v28; // x3
  ClassBoardCommandSpellMaster_o *Master_WarQuestSelectionMaster; // x0
  struct UILabel_o *label_conf; // x23
  System_String_o *mText; // x24
  System_String_o *v32; // x0
  System_String_o *v33; // x0

  if ( (byte_421089C & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, *(_QWORD *)&mode);
    sub_B0D8A4(&CondType_TypeInfo, v9);
    sub_B0D8A4(&Method_DataManager_GetMasterData_CommandSpellMaster___, v10);
    sub_B0D8A4(&Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___, v11);
    sub_B0D8A4(&DataManager_TypeInfo, v12);
    sub_B0D8A4(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__, v13);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v14);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_B0D8A4(&StringLiteral_14806/*"USE_MASTER_SPELL"*/, v16);
    sub_B0D8A4(&StringLiteral_3264/*"COMMAND_SPELL_ADD_FUNCTION_TEXT"*/, v17);
    sub_B0D8A4(&StringLiteral_8674/*"MASTER_SPELL_UNIT"*/, v18);
    byte_421089C = 1;
  }
  this->fields.Id = Id;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_CommandSpellMaster___);
  if ( !Instance )
    goto LABEL_31;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                Id,
                                (const MethodInfo_2669BD4 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_31;
  v20 = Instance;
  Instance = (DataManager_o *)this->fields.label_name;
  if ( !Instance )
    goto LABEL_31;
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)v20->fields.lookup, 0LL);
  Instance = (DataManager_o *)this->fields.label_conf;
  if ( !Instance )
    goto LABEL_31;
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)v20->fields.masterDataBytes, 0LL);
  label_count = this->fields.label_count;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  p_DispLog = (int32_t *)&v20->fields._DispLog;
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_14806/*"USE_MASTER_SPELL"*/, 0LL);
  v24 = System_Int32__ToString((int)v20 + 20, 0LL);
  Instance = (DataManager_o *)System_String__Concat_43849904(v23, v24, 0LL);
  if ( !label_count )
    goto LABEL_31;
  UILabel__set_text(label_count, (System_String_o *)Instance, 0LL);
  unitLabel = this->fields.unitLabel;
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8674/*"MASTER_SPELL_UNIT"*/, 0LL);
  if ( !unitLabel )
    goto LABEL_31;
  UILabel__set_text(unitLabel, (System_String_o *)Instance, 0LL);
  v26 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v26 = BalanceConfig_TypeInfo;
  }
  ClassBoardReleaseQuestId = v26->static_fields->ClassBoardReleaseQuestId;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( CondType__IsQuestClear_25410236(ClassBoardReleaseQuestId, -1, 0, 0LL) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (ClassBoardCommandSpellMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
    if ( Master_WarQuestSelectionMaster )
    {
      Instance = (DataManager_o *)ClassBoardCommandSpellMaster__IsAddFunctionCommandSpell(
                                    Master_WarQuestSelectionMaster,
                                    v20->fields.m_CachedPtr,
                                    0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        label_conf = this->fields.label_conf;
        if ( label_conf )
        {
          mText = label_conf->fields.mText;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v32 = LocalizationManager__Get((System_String_o *)StringLiteral_3264/*"COMMAND_SPELL_ADD_FUNCTION_TEXT"*/, 0LL);
          v33 = System_String__Concat_43849904(mText, v32, 0LL);
          UILabel__set_text(label_conf, v33, 0LL);
          goto LABEL_30;
        }
LABEL_31:
        sub_B0D97C(Instance);
      }
    }
  }
LABEL_30:
  this->fields.Consume = *p_DispLog;
  CommandSpellObjectComponent__updateIsUse(this, mode, count, v28);
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
  DataManager_o *Instance; // x0
  bool v10; // w8

  if ( (byte_421089D & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_CommandSpellMaster___, *(_QWORD *)&mode);
    sub_B0D8A4(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_421089D = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_CommandSpellMaster___);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                this->fields.Id,
                                (const MethodInfo_2669BD4 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
  if ( mode == 1 )
  {
    if ( !Instance )
      goto LABEL_14;
    if ( LODWORD(Instance->fields.datalist) == 2 )
      count = 0;
  }
  Instance = (DataManager_o *)this->fields.coverSprite;
  if ( !Instance )
LABEL_14:
    sub_B0D97C(Instance);
  if ( this->fields.Consume <= count )
  {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 0, 0LL);
    v10 = 1;
  }
  else
  {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 1, 0LL);
    v10 = 0;
  }
  this->fields.touchFlg = v10;
}