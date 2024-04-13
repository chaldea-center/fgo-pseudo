void __fastcall CommandSpellObjectComponent___ctor(CommandSpellObjectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall CommandSpellObjectComponent__onClickUse(CommandSpellObjectComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  CommandSpellWindowComponent_o *target; // x0

  if ( (byte_42E4CC2 & 1) == 0 )
  {
    sub_B5D5C4(&SeManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    byte_42E4CC2 = 1;
  }
  if ( this->fields.touchFlg )
  {
    if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    SeManager__PlayCommonSe(9, 0LL);
    target = this->fields.target;
    if ( !target )
      sub_B5D69C(0LL, v8);
    CommandSpellWindowComponent__UseSpell(target, this->fields.Id, v9);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  DataManager_o *Instance; // x0
  __int64 v40; // x1
  DataManager_o *v41; // x23
  UILabel_o *label_count; // x24
  int32_t *p_DispLog; // x22
  System_String_o *v44; // x25
  System_String_o *v45; // x0
  UILabel_o *unitLabel; // x24
  BalanceConfig_c *v47; // x0
  int32_t ClassBoardReleaseQuestId; // w24
  const MethodInfo *v49; // x3
  ClassBoardCommandSpellMaster_o *Master_WarQuestSelectionMaster; // x0
  struct UILabel_o *label_conf; // x23
  System_String_o *mText; // x24
  System_String_o *v53; // x0
  System_String_o *v54; // x0

  if ( (byte_42E4CC0 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, mode, Id, *(_QWORD *)&count);
    sub_B5D5C4(&CondType_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMasterData_CommandSpellMaster___, v12, v13, v14);
    sub_B5D5C4(&Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___, v15, v16, v17);
    sub_B5D5C4(&DataManager_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__, v21, v22, v23);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_14918/*"USE_MASTER_SPELL"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_3317/*"COMMAND_SPELL_ADD_FUNCTION_TEXT"*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_8742/*"MASTER_SPELL_UNIT"*/, v36, v37, v38);
    byte_42E4CC0 = 1;
  }
  this->fields.Id = Id;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CommandSpellMaster___);
  if ( !Instance )
    goto LABEL_31;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                Id,
                                (const MethodInfo_23FAE10 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_31;
  v41 = Instance;
  Instance = (DataManager_o *)this->fields.label_name;
  if ( !Instance )
    goto LABEL_31;
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)v41->fields.lookup, 0LL);
  Instance = (DataManager_o *)this->fields.label_conf;
  if ( !Instance )
    goto LABEL_31;
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)v41->fields.masterDataBytes, 0LL);
  label_count = this->fields.label_count;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  p_DispLog = (int32_t *)&v41->fields._DispLog;
  v44 = LocalizationManager__Get((System_String_o *)StringLiteral_14918/*"USE_MASTER_SPELL"*/, 0LL);
  v45 = System_Int32__ToString((int)v41 + 20, 0LL);
  Instance = (DataManager_o *)System_String__Concat_44577788(v44, v45, 0LL);
  if ( !label_count )
    goto LABEL_31;
  UILabel__set_text(label_count, (System_String_o *)Instance, 0LL);
  unitLabel = this->fields.unitLabel;
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8742/*"MASTER_SPELL_UNIT"*/, 0LL);
  if ( !unitLabel )
    goto LABEL_31;
  UILabel__set_text(unitLabel, (System_String_o *)Instance, 0LL);
  v47 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v47 = BalanceConfig_TypeInfo;
  }
  ClassBoardReleaseQuestId = v47->static_fields->ClassBoardReleaseQuestId;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( CondType__IsQuestClear_25877652(ClassBoardReleaseQuestId, -1, 0, 0LL) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (ClassBoardCommandSpellMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
    if ( Master_WarQuestSelectionMaster )
    {
      Instance = (DataManager_o *)ClassBoardCommandSpellMaster__IsAddFunctionCommandSpell(
                                    Master_WarQuestSelectionMaster,
                                    v41->fields.m_CachedPtr,
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
          v53 = LocalizationManager__Get((System_String_o *)StringLiteral_3317/*"COMMAND_SPELL_ADD_FUNCTION_TEXT"*/, 0LL);
          v54 = System_String__Concat_44577788(mText, v53, 0LL);
          UILabel__set_text(label_conf, v54, 0LL);
          goto LABEL_30;
        }
LABEL_31:
        sub_B5D69C(Instance, v40);
      }
    }
  }
LABEL_30:
  this->fields.Consume = *p_DispLog;
  CommandSpellObjectComponent__updateIsUse(this, mode, count, v49);
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
  int32_t v4; // w20
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  bool v15; // w8

  v4 = count;
  if ( (byte_42E4CC1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_CommandSpellMaster___, mode, count, method);
    sub_B5D5C4(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__, v7, v8, v9);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10, v11, v12);
    byte_42E4CC1 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CommandSpellMaster___);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                this->fields.Id,
                                (const MethodInfo_23FAE10 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
  if ( mode == 1 )
  {
    if ( !Instance )
      goto LABEL_14;
    if ( LODWORD(Instance->fields.datalist) == 2 )
      v4 = 0;
  }
  Instance = (DataManager_o *)this->fields.coverSprite;
  if ( !Instance )
LABEL_14:
    sub_B5D69C(Instance, v14);
  if ( this->fields.Consume <= v4 )
  {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 0, 0LL);
    v15 = 1;
  }
  else
  {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 1, 0LL);
    v15 = 0;
  }
  this->fields.touchFlg = v15;
}