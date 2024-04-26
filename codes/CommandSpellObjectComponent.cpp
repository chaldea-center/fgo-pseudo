void __fastcall CommandSpellObjectComponent___ctor(CommandSpellObjectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall CommandSpellObjectComponent__onClickUse(CommandSpellObjectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  const MethodInfo *v4; // x2
  CommandSpellWindowComponent_o *target; // x0

  if ( (byte_434DF23 & 1) == 0 )
  {
    sub_B70694(&SeManager_TypeInfo);
    sub_B70694(&SoundManager_TypeInfo);
    byte_434DF23 = 1;
  }
  if ( this->fields.touchFlg )
  {
    if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    SeManager__PlayCommonSe(9, 0LL);
    target = this->fields.target;
    if ( !target )
      sub_B7076C(0LL, v3);
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


void __fastcall CommandSpellObjectComponent__setData(
        CommandSpellObjectComponent_o *this,
        int32_t mode,
        int32_t Id,
        int32_t count,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  DataManager_o *v11; // x23
  UILabel_o *label_count; // x24
  int32_t *p_DispLog; // x22
  System_String_o *v14; // x25
  System_String_o *v15; // x0
  UILabel_o *unitLabel; // x24
  BalanceConfig_c *v17; // x0
  int32_t ClassBoardReleaseQuestId; // w24
  const MethodInfo *v19; // x3
  ClassBoardCommandSpellMaster_o *Master_WarQuestSelectionMaster; // x0
  struct UILabel_o *label_conf; // x23
  System_String_o *mText; // x24
  System_String_o *v23; // x0
  System_String_o *v24; // x0

  if ( (byte_434DF21 & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&CondType_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_CommandSpellMaster___);
    sub_B70694(&Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&StringLiteral_14946/*"USE_MASTER_SPELL"*/);
    sub_B70694(&StringLiteral_3326/*"COMMAND_SPELL_ADD_FUNCTION_TEXT"*/);
    sub_B70694(&StringLiteral_8757/*"MASTER_SPELL_UNIT"*/);
    byte_434DF21 = 1;
  }
  this->fields.Id = Id;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_CommandSpellMaster___);
  if ( !Instance )
    goto LABEL_31;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                Id,
                                (const MethodInfo_21C0440 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_31;
  v11 = Instance;
  Instance = (DataManager_o *)this->fields.label_name;
  if ( !Instance )
    goto LABEL_31;
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)v11->fields.lookup, 0LL);
  Instance = (DataManager_o *)this->fields.label_conf;
  if ( !Instance )
    goto LABEL_31;
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)v11->fields.masterDataBytes, 0LL);
  label_count = this->fields.label_count;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  p_DispLog = (int32_t *)&v11->fields._DispLog;
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_14946/*"USE_MASTER_SPELL"*/, 0LL);
  v15 = System_Int32__ToString((int)v11 + 20, 0LL);
  Instance = (DataManager_o *)System_String__Concat_44758168(v14, v15, 0LL);
  if ( !label_count )
    goto LABEL_31;
  UILabel__set_text(label_count, (System_String_o *)Instance, 0LL);
  unitLabel = this->fields.unitLabel;
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8757/*"MASTER_SPELL_UNIT"*/, 0LL);
  if ( !unitLabel )
    goto LABEL_31;
  UILabel__set_text(unitLabel, (System_String_o *)Instance, 0LL);
  v17 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v17 = BalanceConfig_TypeInfo;
  }
  ClassBoardReleaseQuestId = v17->static_fields->ClassBoardReleaseQuestId;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( CondType__IsQuestClear_24296868(ClassBoardReleaseQuestId, -1, 0, 0LL) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (ClassBoardCommandSpellMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
    if ( Master_WarQuestSelectionMaster )
    {
      Instance = (DataManager_o *)ClassBoardCommandSpellMaster__IsAddFunctionCommandSpell(
                                    Master_WarQuestSelectionMaster,
                                    v11->fields.m_CachedPtr,
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
          v23 = LocalizationManager__Get((System_String_o *)StringLiteral_3326/*"COMMAND_SPELL_ADD_FUNCTION_TEXT"*/, 0LL);
          v24 = System_String__Concat_44758168(mText, v23, 0LL);
          UILabel__set_text(label_conf, v24, 0LL);
          goto LABEL_30;
        }
LABEL_31:
        sub_B7076C(Instance, v10);
      }
    }
  }
LABEL_30:
  this->fields.Consume = *p_DispLog;
  CommandSpellObjectComponent__updateIsUse(this, mode, count, v19);
}


void __fastcall CommandSpellObjectComponent__setUseButton(
        CommandSpellObjectComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  this->fields.touchFlg = flg;
}


void __fastcall CommandSpellObjectComponent__updateIsUse(
        CommandSpellObjectComponent_o *this,
        int32_t mode,
        int32_t count,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  bool v9; // w8

  if ( (byte_434DF22 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_CommandSpellMaster___);
    sub_B70694(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_434DF22 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_CommandSpellMaster___);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                this->fields.Id,
                                (const MethodInfo_21C0440 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
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
    sub_B7076C(Instance, v8);
  if ( this->fields.Consume <= count )
  {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 0, 0LL);
    v9 = 1;
  }
  else
  {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 1, 0LL);
    v9 = 0;
  }
  this->fields.touchFlg = v9;
}