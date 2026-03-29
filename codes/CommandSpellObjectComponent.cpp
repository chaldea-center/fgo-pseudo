void CommandSpellObjectComponent___ctor(CommandSpellObjectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void CommandSpellObjectComponent__onClickUse(CommandSpellObjectComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  _BOOL4 touchFlg; // w20
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  CommandSpellWindowComponent_o *target; // x0

  if ( (byte_4D34289 & 1) == 0 )
  {
    sub_1C93AD4(&Method_CommandSpellObjectComponent_onClickUse__);
    byte_4D34289 = 1;
  }
  v3 = Method_CommandSpellObjectComponent_onClickUse__;
  touchFlg = this->fields.touchFlg;
  if ( (*((_BYTE *)Method_CommandSpellObjectComponent_onClickUse__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C93AEC(Method_CommandSpellObjectComponent_onClickUse__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
  if ( touchFlg )
  {
    OverwriteAssetSoundName__PlayCommonSe(v5, 9, 0, 0);
    target = this->fields.target;
    if ( !target )
      sub_1C93D2C(0, v6);
    CommandSpellWindowComponent__UseSpell(target, this->fields.Id, v7);
  }
  else
  {
    OverwriteAssetSoundName__PlaySystemSe(v5, 2, 0, 0);
  }
}


void CommandSpellObjectComponent__setData(
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
  int32_t *v13; // x22
  System_String_o *v14; // x25
  System_String_o *v15; // x0
  UILabel_o *unitLabel; // x24
  BalanceConfig_c *v17; // x0
  int32_t ClassBoardReleaseQuestId; // w24
  const MethodInfo *v19; // x3
  Il2CppObject *Master_object; // x0
  struct UILabel_o *label_conf; // x23
  System_String_o *mText; // x24
  System_String_o *v23; // x0
  System_String_o *v24; // x0

  if ( (byte_4D34287 & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&CondType_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_CommandSpellMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&StringLiteral_14966/*"USE_MASTER_SPELL"*/);
    sub_1C93AD4(&StringLiteral_3693/*"COMMAND_SPELL_ADD_FUNCTION_TEXT"*/);
    sub_1C93AD4(&StringLiteral_8622/*"MASTER_SPELL_UNIT"*/);
    byte_4D34287 = 1;
  }
  this->fields.Id = Id;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_CommandSpellMaster___);
  if ( !Instance )
    goto LABEL_26;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                Id,
                                (const MethodInfo_3463274 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_26;
  v11 = Instance;
  Instance = (DataManager_o *)this->fields.label_name;
  if ( !Instance )
    goto LABEL_26;
  UILabel__set_text((UILabel_o *)Instance, *(System_String_o **)&v11->fields._DispLog, 0);
  Instance = (DataManager_o *)this->fields.label_conf;
  if ( !Instance )
    goto LABEL_26;
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)v11->fields.datalist, 0);
  label_count = this->fields.label_count;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v13 = (int32_t *)&v11->fields.m_CachedPtr + 1;
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_14966/*"USE_MASTER_SPELL"*/, 0);
  v15 = System_Int32__ToString((int)v11 + 20, 0);
  Instance = (DataManager_o *)System_String__Concat_64425724(v14, v15, 0);
  if ( !label_count )
    goto LABEL_26;
  UILabel__set_text(label_count, (System_String_o *)Instance, 0);
  unitLabel = this->fields.unitLabel;
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8622/*"MASTER_SPELL_UNIT"*/, 0);
  if ( !unitLabel )
    goto LABEL_26;
  UILabel__set_text(unitLabel, (System_String_o *)Instance, 0);
  v17 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v17 = BalanceConfig_TypeInfo;
  }
  ClassBoardReleaseQuestId = v17->static_fields->ClassBoardReleaseQuestId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( CondType__IsQuestClear_41038904(ClassBoardReleaseQuestId, -1, 0, 0) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
    if ( Master_object )
    {
      Instance = (DataManager_o *)ClassBoardCommandSpellMaster__IsAddFunctionCommandSpell(
                                    (ClassBoardCommandSpellMaster_o *)Master_object,
                                    v11->fields.m_CachedPtr,
                                    0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        label_conf = this->fields.label_conf;
        if ( label_conf )
        {
          mText = label_conf->fields.mText;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v23 = LocalizationManager__Get((System_String_o *)StringLiteral_3693/*"COMMAND_SPELL_ADD_FUNCTION_TEXT"*/, 0);
          v24 = System_String__Concat_64425724(mText, v23, 0);
          UILabel__set_text(label_conf, v24, 0);
          goto LABEL_25;
        }
LABEL_26:
        sub_1C93D2C(Instance, v10);
      }
    }
  }
LABEL_25:
  this->fields.Consume = *v13;
  CommandSpellObjectComponent__updateIsUse(this, mode, count, v19);
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
  bool v10; // w1
  bool v11; // w20

  if ( (byte_4D34288 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_CommandSpellMaster___);
    sub_1C93AD4(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D34288 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_CommandSpellMaster___);
  if ( !Instance )
    goto LABEL_11;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                this->fields.Id,
                                (const MethodInfo_3463274 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
  if ( mode == 1 )
  {
    if ( !Instance )
      goto LABEL_11;
    if ( LODWORD(Instance->fields.m_CancellationTokenSource) == 2 )
      count = 0;
  }
  Instance = (DataManager_o *)this->fields.coverSprite;
  if ( !Instance )
LABEL_11:
    sub_1C93D2C(Instance, v8);
  Consume = this->fields.Consume;
  v10 = Consume > count;
  v11 = Consume <= count;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, v10, 0);
  this->fields.touchFlg = v11;
}