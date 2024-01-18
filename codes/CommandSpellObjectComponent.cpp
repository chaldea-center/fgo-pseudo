void __fastcall CommandSpellObjectComponent___ctor(CommandSpellObjectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall CommandSpellObjectComponent__onClickUse(CommandSpellObjectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  CommandSpellWindowComponent_o *target; // x0

  if ( (byte_4188145 & 1) == 0 )
  {
    sub_B2C35C(&SeManager_TypeInfo, method);
    sub_B2C35C(&SoundManager_TypeInfo, v3);
    byte_4188145 = 1;
  }
  if ( this->fields.touchFlg )
  {
    if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    SeManager__PlayCommonSe(9, 0LL);
    target = this->fields.target;
    if ( !target )
      sub_B2C434(0LL, v4);
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
  DataManager_o *Instance; // x0
  __int64 v20; // x1
  DataManager_o *v21; // x23
  UILabel_o *label_count; // x24
  int32_t *p_DispLog; // x22
  System_String_o *v24; // x25
  System_String_o *v25; // x0
  UILabel_o *unitLabel; // x24
  BalanceConfig_c *v27; // x0
  int32_t ClassBoardReleaseQuestId; // w24
  const MethodInfo *v29; // x3
  ClassBoardCommandSpellMaster_o *Master_WarQuestSelectionMaster; // x0
  struct UILabel_o *label_conf; // x23
  System_String_o *mText; // x24
  System_String_o *v33; // x0
  System_String_o *v34; // x0

  if ( (byte_4188143 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, *(_QWORD *)&mode);
    sub_B2C35C(&CondType_TypeInfo, v9);
    sub_B2C35C(&Method_DataManager_GetMasterData_CommandSpellMaster___, v10);
    sub_B2C35C(&Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___, v11);
    sub_B2C35C(&DataManager_TypeInfo, v12);
    sub_B2C35C(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__, v13);
    sub_B2C35C(&LocalizationManager_TypeInfo, v14);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_B2C35C(&StringLiteral_14760/*"USE_MASTER_SPELL"*/, v16);
    sub_B2C35C(&StringLiteral_3252/*"COMMAND_SPELL_ADD_FUNCTION_TEXT"*/, v17);
    sub_B2C35C(&StringLiteral_8652/*"MASTER_SPELL_UNIT"*/, v18);
    byte_4188143 = 1;
  }
  this->fields.Id = Id;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CommandSpellMaster___);
  if ( !Instance )
    goto LABEL_31;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                Id,
                                (const MethodInfo_24E40D0 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_31;
  v21 = Instance;
  Instance = (DataManager_o *)this->fields.label_name;
  if ( !Instance )
    goto LABEL_31;
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)v21->fields.lookup, 0LL);
  Instance = (DataManager_o *)this->fields.label_conf;
  if ( !Instance )
    goto LABEL_31;
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)v21->fields.masterDataBytes, 0LL);
  label_count = this->fields.label_count;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  p_DispLog = (int32_t *)&v21->fields._DispLog;
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_14760/*"USE_MASTER_SPELL"*/, 0LL);
  v25 = System_Int32__ToString((int)v21 + 20, 0LL);
  Instance = (DataManager_o *)System_String__Concat_44305532(v24, v25, 0LL);
  if ( !label_count )
    goto LABEL_31;
  UILabel__set_text(label_count, (System_String_o *)Instance, 0LL);
  unitLabel = this->fields.unitLabel;
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8652/*"MASTER_SPELL_UNIT"*/, 0LL);
  if ( !unitLabel )
    goto LABEL_31;
  UILabel__set_text(unitLabel, (System_String_o *)Instance, 0LL);
  v27 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v27 = BalanceConfig_TypeInfo;
  }
  ClassBoardReleaseQuestId = v27->static_fields->ClassBoardReleaseQuestId;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( CondType__IsQuestClear_25746984(ClassBoardReleaseQuestId, -1, 0, 0LL) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (ClassBoardCommandSpellMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
    if ( Master_WarQuestSelectionMaster )
    {
      Instance = (DataManager_o *)ClassBoardCommandSpellMaster__IsAddFunctionCommandSpell(
                                    Master_WarQuestSelectionMaster,
                                    v21->fields.m_CachedPtr,
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
          v33 = LocalizationManager__Get((System_String_o *)StringLiteral_3252/*"COMMAND_SPELL_ADD_FUNCTION_TEXT"*/, 0LL);
          v34 = System_String__Concat_44305532(mText, v33, 0LL);
          UILabel__set_text(label_conf, v34, 0LL);
          goto LABEL_30;
        }
LABEL_31:
        sub_B2C434(Instance, v20);
      }
    }
  }
LABEL_30:
  this->fields.Consume = *p_DispLog;
  CommandSpellObjectComponent__updateIsUse(this, mode, count, v29);
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
  __int64 v10; // x1
  bool v11; // w8

  if ( (byte_4188144 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_CommandSpellMaster___, *(_QWORD *)&mode);
    sub_B2C35C(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4188144 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CommandSpellMaster___);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                this->fields.Id,
                                (const MethodInfo_24E40D0 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
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
    sub_B2C434(Instance, v10);
  if ( this->fields.Consume <= count )
  {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 0, 0LL);
    v11 = 1;
  }
  else
  {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 1, 0LL);
    v11 = 0;
  }
  this->fields.touchFlg = v11;
}