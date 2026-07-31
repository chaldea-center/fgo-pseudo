void CommandSpellObjectComponent___ctor(CommandSpellObjectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void CommandSpellObjectComponent__onClickUse(CommandSpellObjectComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  CommandSpellWindowComponent_o *target; // x0
  System_Reflection_MethodBase_o *v8; // x0

  if ( (byte_593C182 & 1) == 0 )
  {
    sub_21FFC50(&Method_CommandSpellObjectComponent_onClickUse__);
    byte_593C182 = 1;
  }
  v3 = Method_CommandSpellObjectComponent_onClickUse__;
  if ( this->fields.touchFlg )
  {
    if ( (*((_BYTE *)Method_CommandSpellObjectComponent_onClickUse__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_CommandSpellObjectComponent_onClickUse__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlayCommonSe(v4, 9, 0, 0);
    target = this->fields.target;
    if ( !target )
      sub_21FFECC(0, v5);
    CommandSpellWindowComponent__UseSpell(target, this->fields.Id, v6);
  }
  else
  {
    if ( (*((_BYTE *)Method_CommandSpellObjectComponent_onClickUse__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_CommandSpellObjectComponent_onClickUse__);
    v8 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 2, 0, 0);
  }
}


void CommandSpellObjectComponent__setData(
        CommandSpellObjectComponent_o *this,
        int32_t mode,
        int32_t Id,
        int32_t count,
        const MethodInfo *method)
{
  const MethodInfo_476E8C0 *v9; // x0
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  DataManager_o *v12; // x22
  __int64 v13; // x1
  UILabel_o *label_count; // x23
  System_String_o *v15; // x24
  System_String_o *v16; // x0
  UILabel_o *unitLabel; // x23
  __int64 v18; // x1
  BalanceConfig_c *v19; // x0
  int32_t ClassBoardReleaseQuestId; // w23
  __int64 v21; // x1
  const MethodInfo *v22; // x3
  Il2CppObject *Master_object; // x0
  struct UILabel_o *label_conf; // x23
  System_String_o *mText; // x24
  System_String_o *v26; // x0
  System_String_o *v27; // x0

  if ( (byte_593C180 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&CondType_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_CommandSpellMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&StringLiteral_15431/*"USE_MASTER_SPELL"*/);
    sub_21FFC50(&StringLiteral_3809/*"COMMAND_SPELL_ADD_FUNCTION_TEXT"*/);
    sub_21FFC50(&StringLiteral_8923/*"MASTER_SPELL_UNIT"*/);
    byte_593C180 = 1;
  }
  v9 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  this->fields.Id = Id;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance(v9);
  if ( !Instance )
    goto LABEL_26;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_CommandSpellMaster___);
  if ( !Instance )
    goto LABEL_26;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                Id,
                                (const MethodInfo_3EDD388 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_26;
  v12 = Instance;
  Instance = (DataManager_o *)this->fields.label_name;
  if ( !Instance )
    goto LABEL_26;
  UILabel__set_text((UILabel_o *)Instance, *(System_String_o **)&v12->fields._DispLog, 0);
  Instance = (DataManager_o *)this->fields.label_conf;
  if ( !Instance )
    goto LABEL_26;
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)v12->fields.datalist, 0);
  label_count = this->fields.label_count;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v13);
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_15431/*"USE_MASTER_SPELL"*/, 0);
  v16 = System_Int32__ToString((int)v12 + 20, 0);
  Instance = (DataManager_o *)System_String__Concat_75438412(v15, v16, 0);
  if ( !label_count )
    goto LABEL_26;
  UILabel__set_text(label_count, (System_String_o *)Instance, 0);
  unitLabel = this->fields.unitLabel;
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8923/*"MASTER_SPELL_UNIT"*/, 0);
  if ( !unitLabel )
    goto LABEL_26;
  UILabel__set_text(unitLabel, (System_String_o *)Instance, 0);
  v19 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v18);
    v19 = BalanceConfig_TypeInfo;
  }
  ClassBoardReleaseQuestId = v19->static_fields->ClassBoardReleaseQuestId;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v18);
  if ( CondType__IsQuestClear_47254560(ClassBoardReleaseQuestId, -1, 0, 0) )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v21);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
    if ( Master_object )
    {
      Instance = (DataManager_o *)ClassBoardCommandSpellMaster__IsAddFunctionCommandSpell(
                                    (ClassBoardCommandSpellMaster_o *)Master_object,
                                    v12->fields.m_CachedPtr,
                                    0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        label_conf = this->fields.label_conf;
        if ( label_conf )
        {
          mText = label_conf->fields.mText;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v11);
          v26 = LocalizationManager__Get((System_String_o *)StringLiteral_3809/*"COMMAND_SPELL_ADD_FUNCTION_TEXT"*/, 0);
          v27 = System_String__Concat_75438412(mText, v26, 0);
          UILabel__set_text(label_conf, v27, 0);
          goto LABEL_25;
        }
LABEL_26:
        sub_21FFECC(Instance, v11);
      }
    }
  }
LABEL_25:
  this->fields.Consume = HIDWORD(v12->fields.m_CachedPtr);
  CommandSpellObjectComponent__updateIsUse(this, mode, count, v22);
}


void CommandSpellObjectComponent__setUseButton(CommandSpellObjectComponent_o *this, bool flg, const MethodInfo *method)
{
  this->fields.touchFlg = flg;
}


void CommandSpellObjectComponent__updateIsUse(
        CommandSpellObjectComponent_o *this,
        int32_t mode,
        int32_t count,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  int32_t Consume; // w8
  bool v10; // w21

  if ( (byte_593C181 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_CommandSpellMaster___);
    sub_21FFC50(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_593C181 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_CommandSpellMaster___);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                this->fields.Id,
                                (const MethodInfo_3EDD388 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
  if ( mode == 1 )
  {
    if ( !Instance )
      goto LABEL_15;
    if ( LODWORD(Instance->fields.m_CancellationTokenSource) == 2 )
      count = 0;
  }
  Consume = this->fields.Consume;
  Instance = (DataManager_o *)this->fields.coverSprite;
  if ( Consume <= count )
  {
    if ( Instance )
    {
      v10 = 1;
      goto LABEL_14;
    }
LABEL_15:
    sub_21FFECC(Instance, v8);
  }
  if ( !Instance )
    goto LABEL_15;
  v10 = 0;
LABEL_14:
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, Consume > count, 0);
  this->fields.touchFlg = v10;
}