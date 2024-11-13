void __fastcall CommandSpellObjectComponent___ctor(CommandSpellObjectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall CommandSpellObjectComponent__onClickUse(CommandSpellObjectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  _BOOL4 touchFlg; // w20
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  CommandSpellWindowComponent_o *target; // x0

  if ( (byte_4B1944F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CommandSpellObjectComponent_onClickUse__, method, v2);
    byte_4B1944F = 1;
  }
  v4 = Method_CommandSpellObjectComponent_onClickUse__;
  touchFlg = this->fields.touchFlg;
  if ( (*((_BYTE *)Method_CommandSpellObjectComponent_onClickUse__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BCA7F8(Method_CommandSpellObjectComponent_onClickUse__);
  v6 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
  if ( touchFlg )
  {
    OverwriteAssetSoundName__PlayCommonSe(v6, 9, 0LL);
    target = this->fields.target;
    if ( !target )
      sub_1BCAA3C(0LL, v7);
    CommandSpellWindowComponent__UseSpell(target, this->fields.Id, v8);
  }
  else
  {
    OverwriteAssetSoundName__PlaySystemSe(v6, 2, 0LL);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  DataManager_o *Instance; // x0
  __int64 v30; // x1
  DataManager_o *v31; // x23
  __int64 v32; // x1
  UILabel_o *label_count; // x24
  int32_t *v34; // x22
  System_String_o *v35; // x25
  System_String_o *v36; // x0
  UILabel_o *unitLabel; // x24
  __int64 v38; // x1
  BalanceConfig_c *v39; // x0
  int32_t ClassBoardReleaseQuestId; // w24
  __int64 v41; // x1
  const MethodInfo *v42; // x3
  Il2CppObject *Master_object; // x0
  struct UILabel_o *label_conf; // x23
  System_String_o *mText; // x24
  System_String_o *v46; // x0
  System_String_o *v47; // x0

  if ( (byte_4B1944D & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, *(_QWORD *)&mode, *(_QWORD *)&Id);
    sub_1BCA7E0(&CondType_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CommandSpellMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___, v13, v14);
    sub_1BCA7E0(&DataManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__, v17, v18);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21, v22);
    sub_1BCA7E0(&StringLiteral_15015/*"USE_MASTER_SPELL"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_3776/*"COMMAND_SPELL_ADD_FUNCTION_TEXT"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_8671/*"MASTER_SPELL_UNIT"*/, v27, v28);
    byte_4B1944D = 1;
  }
  this->fields.Id = Id;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CommandSpellMaster___);
  if ( !Instance )
    goto LABEL_26;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                Id,
                                (const MethodInfo_31B2E40 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_26;
  v31 = Instance;
  Instance = (DataManager_o *)this->fields.label_name;
  if ( !Instance )
    goto LABEL_26;
  UILabel__set_text((UILabel_o *)Instance, *(System_String_o **)&v31->fields._DispLog, 0LL);
  Instance = (DataManager_o *)this->fields.label_conf;
  if ( !Instance )
    goto LABEL_26;
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)v31->fields.datalist, 0LL);
  label_count = this->fields.label_count;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v32);
  v34 = (int32_t *)(&v31->fields.UnityEngine_Behaviour_Fields + 1);
  v35 = LocalizationManager__Get((System_String_o *)StringLiteral_15015/*"USE_MASTER_SPELL"*/, 0LL);
  v36 = System_Int32__ToString((int)v31 + 20, 0LL);
  Instance = (DataManager_o *)System_String__Concat_62401220(v35, v36, 0LL);
  if ( !label_count )
    goto LABEL_26;
  UILabel__set_text(label_count, (System_String_o *)Instance, 0LL);
  unitLabel = this->fields.unitLabel;
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8671/*"MASTER_SPELL_UNIT"*/, 0LL);
  if ( !unitLabel )
    goto LABEL_26;
  UILabel__set_text(unitLabel, (System_String_o *)Instance, 0LL);
  v39 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v38);
    v39 = BalanceConfig_TypeInfo;
  }
  ClassBoardReleaseQuestId = v39->static_fields->ClassBoardReleaseQuestId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v38);
  if ( CondType__IsQuestClear_38310172(ClassBoardReleaseQuestId, -1, 0, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v41);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
    if ( Master_object )
    {
      Instance = (DataManager_o *)ClassBoardCommandSpellMaster__IsAddFunctionCommandSpell(
                                    (ClassBoardCommandSpellMaster_o *)Master_object,
                                    v31->fields.m_CachedPtr,
                                    0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        label_conf = this->fields.label_conf;
        if ( label_conf )
        {
          mText = label_conf->fields.mText;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v30);
          v46 = LocalizationManager__Get((System_String_o *)StringLiteral_3776/*"COMMAND_SPELL_ADD_FUNCTION_TEXT"*/, 0LL);
          v47 = System_String__Concat_62401220(mText, v46, 0LL);
          UILabel__set_text(label_conf, v47, 0LL);
          goto LABEL_25;
        }
LABEL_26:
        sub_1BCAA3C(Instance, v30);
      }
    }
  }
LABEL_25:
  this->fields.Consume = *v34;
  CommandSpellObjectComponent__updateIsUse(this, mode, count, v42);
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
  int32_t v4; // w20
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  int32_t Consume; // w8
  bool v14; // w1
  bool v15; // w20

  v4 = count;
  if ( (byte_4B1944E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CommandSpellMaster___, *(_QWORD *)&mode, *(_QWORD *)&count);
    sub_1BCA7E0(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    byte_4B1944E = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CommandSpellMaster___);
  if ( !Instance )
    goto LABEL_11;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                this->fields.Id,
                                (const MethodInfo_31B2E40 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
  if ( mode == 1 )
  {
    if ( !Instance )
      goto LABEL_11;
    if ( LODWORD(Instance->fields.m_CancellationTokenSource) == 2 )
      v4 = 0;
  }
  Instance = (DataManager_o *)this->fields.coverSprite;
  if ( !Instance )
LABEL_11:
    sub_1BCAA3C(Instance, v12);
  Consume = this->fields.Consume;
  v14 = Consume > v4;
  v15 = Consume <= v4;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, v14, 0LL);
  this->fields.touchFlg = v15;
}