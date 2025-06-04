void __fastcall CommandSpellObjectComponent___ctor(CommandSpellObjectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall CommandSpellObjectComponent__onClickUse(CommandSpellObjectComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  _BOOL4 touchFlg; // w20
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  CommandSpellWindowComponent_o *target; // x0

  if ( (byte_4B055E2 & 1) == 0 )
  {
    sub_1BC3008(&Method_CommandSpellObjectComponent_onClickUse__, method);
    byte_4B055E2 = 1;
  }
  v3 = Method_CommandSpellObjectComponent_onClickUse__;
  touchFlg = this->fields.touchFlg;
  if ( (*((_BYTE *)Method_CommandSpellObjectComponent_onClickUse__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1BC3020(Method_CommandSpellObjectComponent_onClickUse__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v3, v3[4]);
  if ( touchFlg )
  {
    OverwriteAssetSoundName__PlayCommonSe(v5, 9, 0, 0LL);
    target = this->fields.target;
    if ( !target )
      sub_1BC3264(0LL, v6);
    CommandSpellWindowComponent__UseSpell(target, this->fields.Id, v7);
  }
  else
  {
    OverwriteAssetSoundName__PlaySystemSe(v5, 2, 0, 0LL);
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
  int32_t *v23; // x22
  System_String_o *v24; // x25
  System_String_o *v25; // x0
  UILabel_o *unitLabel; // x24
  BalanceConfig_c *v27; // x0
  int32_t ClassBoardReleaseQuestId; // w24
  const MethodInfo *v29; // x3
  Il2CppObject *Master_object; // x0
  struct UILabel_o *label_conf; // x23
  System_String_o *mText; // x24
  System_String_o *v33; // x0
  System_String_o *v34; // x0

  if ( (byte_4B055E0 & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, *(_QWORD *)&mode);
    sub_1BC3008(&CondType_TypeInfo, v9);
    sub_1BC3008(&Method_DataManager_GetMasterData_CommandSpellMaster___, v10);
    sub_1BC3008(&Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___, v11);
    sub_1BC3008(&DataManager_TypeInfo, v12);
    sub_1BC3008(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__, v13);
    sub_1BC3008(&LocalizationManager_TypeInfo, v14);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1BC3008(&StringLiteral_14732/*"USE_MASTER_SPELL"*/, v16);
    sub_1BC3008(&StringLiteral_3635/*"COMMAND_SPELL_ADD_FUNCTION_TEXT"*/, v17);
    sub_1BC3008(&StringLiteral_8492/*"MASTER_SPELL_UNIT"*/, v18);
    byte_4B055E0 = 1;
  }
  this->fields.Id = Id;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_CommandSpellMaster___);
  if ( !Instance )
    goto LABEL_26;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                Id,
                                (const MethodInfo_32AF070 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_26;
  v21 = Instance;
  Instance = (DataManager_o *)this->fields.label_name;
  if ( !Instance )
    goto LABEL_26;
  UILabel__set_text((UILabel_o *)Instance, *(System_String_o **)&v21->fields._DispLog, 0LL);
  Instance = (DataManager_o *)this->fields.label_conf;
  if ( !Instance )
    goto LABEL_26;
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)v21->fields.datalist, 0LL);
  label_count = this->fields.label_count;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v23 = (int32_t *)(&v21->fields.UnityEngine_Behaviour_Fields + 1);
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_14732/*"USE_MASTER_SPELL"*/, 0LL);
  v25 = System_Int32__ToString((int)v21 + 20, 0LL);
  Instance = (DataManager_o *)System_String__Concat_62348648(v24, v25, 0LL);
  if ( !label_count )
    goto LABEL_26;
  UILabel__set_text(label_count, (System_String_o *)Instance, 0LL);
  unitLabel = this->fields.unitLabel;
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8492/*"MASTER_SPELL_UNIT"*/, 0LL);
  if ( !unitLabel )
    goto LABEL_26;
  UILabel__set_text(unitLabel, (System_String_o *)Instance, 0LL);
  v27 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v27 = BalanceConfig_TypeInfo;
  }
  ClassBoardReleaseQuestId = v27->static_fields->ClassBoardReleaseQuestId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( CondType__IsQuestClear_39366056(ClassBoardReleaseQuestId, -1, 0, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
    if ( Master_object )
    {
      Instance = (DataManager_o *)ClassBoardCommandSpellMaster__IsAddFunctionCommandSpell(
                                    (ClassBoardCommandSpellMaster_o *)Master_object,
                                    v21->fields.m_CachedPtr,
                                    0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        label_conf = this->fields.label_conf;
        if ( label_conf )
        {
          mText = label_conf->fields.mText;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v33 = LocalizationManager__Get((System_String_o *)StringLiteral_3635/*"COMMAND_SPELL_ADD_FUNCTION_TEXT"*/, 0LL);
          v34 = System_String__Concat_62348648(mText, v33, 0LL);
          UILabel__set_text(label_conf, v34, 0LL);
          goto LABEL_25;
        }
LABEL_26:
        sub_1BC3264(Instance, v20);
      }
    }
  }
LABEL_25:
  this->fields.Consume = *v23;
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
  int32_t Consume; // w8
  bool v12; // w1
  bool v13; // w20

  if ( (byte_4B055E1 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_CommandSpellMaster___, *(_QWORD *)&mode);
    sub_1BC3008(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__, v7);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4B055E1 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_CommandSpellMaster___);
  if ( !Instance )
    goto LABEL_11;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                this->fields.Id,
                                (const MethodInfo_32AF070 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
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
    sub_1BC3264(Instance, v10);
  Consume = this->fields.Consume;
  v12 = Consume > count;
  v13 = Consume <= count;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, v12, 0LL);
  this->fields.touchFlg = v13;
}