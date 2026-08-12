void BattleRetireWindowComponent___ctor(BattleRetireWindowComponent_o *this, const MethodInfo *method)
{
  this->fields.messageLabelPosInInterruptionQuest.fields.z = 0.0;
  *(_QWORD *)&this->fields.messageLabelPosInInterruptionQuest.fields.x = 0x41E6666600000000LL;
  BattleWindowComponent___ctor((BattleWindowComponent_o *)this, 0);
}


void BattleRetireWindowComponent__CallbackConfirmDialog(
        BattleRetireWindowComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_5974170 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5974170 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseConfirmDialog(Instance, 0), (Instance = (CommonUI_o *)this->fields._data_k__BackingField) == 0) )
  {
    sub_2213CDC(Instance, v5);
  }
  BattleData__UpdateContinueItemInfo((BattleData_o *)Instance, 0);
  BattleRetireWindowComponent__Open(this, 0, v6);
  this->fields.isShowDeadLineDialog = 1;
}


void BattleRetireWindowComponent__Open(
        BattleRetireWindowComponent_o *this,
        BattleWindowComponent_EndCall_o *call,
        const MethodInfo *method)
{
  __int64 continueItemRoot; // x0
  const MethodInfo_47A29F8 *v6; // x0
  struct BattleData_o *data_k__BackingField; // x8
  struct BattleEntity_o *battle_ent; // x8
  QuestEntity_o *v9; // x21
  UILabel_o *v10; // x21
  __int64 *v11; // x8
  struct BattleData_o *v12; // x8
  const MethodInfo *v13; // x1
  UILabel_o *continueCount; // x21
  UISprite_o *continueItemCountSpr; // x21
  __int64 v16; // x1
  int32_t ContinueItemImageId; // w22
  __int64 v18; // x1
  UILabel_o *checkGiveUpLabel; // x21
  int64_t ContinueItemNum; // [xsp+8h] [xbp-28h] BYREF
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5974171 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_2213A60(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_2961/*"BATTLE_RETIRE_CHECKSTR"*/);
    sub_2213A60(&StringLiteral_2962/*"BATTLE_RETIRE_CONSUME_COST_CHECKSTR"*/);
    sub_2213A60(&StringLiteral_1198/*"0"*/);
    byte_5974171 = 1;
  }
  continueItemRoot = (__int64)this->fields.continueItemRoot;
  ContinueItemNum = 0;
  if ( !continueItemRoot )
    goto LABEL_62;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)continueItemRoot, 0, 0);
  continueItemRoot = (__int64)this->fields.continueCount;
  if ( !continueItemRoot )
    goto LABEL_62;
  UILabel__set_text((UILabel_o *)continueItemRoot, (System_String_o *)StringLiteral_1198/*"0"*/, 0);
  continueItemRoot = (__int64)this->fields.giveUpTitleSpr;
  if ( !continueItemRoot )
    goto LABEL_62;
  continueItemRoot = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)continueItemRoot, 0);
  if ( !continueItemRoot )
    goto LABEL_62;
  v21.fields.x = 0.0;
  v21.fields.z = 0.0;
  v21.fields.y = 77.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)continueItemRoot, v21, 0);
  continueItemRoot = (__int64)this->fields.okBtn;
  if ( !continueItemRoot )
    goto LABEL_62;
  continueItemRoot = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)continueItemRoot, 0);
  if ( !continueItemRoot )
    goto LABEL_62;
  v22.fields.z = 0.0;
  v22.fields.x = 193.0;
  v22.fields.y = -72.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)continueItemRoot, v22, 0);
  continueItemRoot = (__int64)this->fields.cancelBtn;
  if ( !continueItemRoot )
    goto LABEL_62;
  continueItemRoot = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)continueItemRoot, 0);
  if ( !continueItemRoot )
    goto LABEL_62;
  v23.fields.z = 0.0;
  v23.fields.x = -193.0;
  v23.fields.y = -72.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)continueItemRoot, v23, 0);
  continueItemRoot = (__int64)this->fields.giveUpBg;
  if ( !continueItemRoot )
    goto LABEL_62;
  UIWidget__set_height((UIWidget_o *)continueItemRoot, 239, 0);
  continueItemRoot = (__int64)this->fields.continueItemDeadLineLabel;
  if ( !continueItemRoot )
    goto LABEL_62;
  continueItemRoot = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)continueItemRoot, 0);
  if ( !continueItemRoot )
    goto LABEL_62;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)continueItemRoot, 0, 0);
  continueItemRoot = (__int64)this->fields.checkGiveUpLabel;
  if ( !continueItemRoot )
    goto LABEL_62;
  continueItemRoot = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)continueItemRoot, 0);
  if ( !continueItemRoot )
    goto LABEL_62;
  v24.fields.x = 0.0;
  v24.fields.z = 0.0;
  v24.fields.y = 6.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)continueItemRoot, v24, 0);
  v6 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  this->fields.EnableContinueItem = 0;
  continueItemRoot = (__int64)SingletonMonoBehaviour_object___get_Instance(v6);
  if ( !continueItemRoot )
    goto LABEL_62;
  continueItemRoot = (__int64)DataManager__GetMasterData_object_(
                                (DataManager_o *)continueItemRoot,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestMaster___);
  data_k__BackingField = this->fields._data_k__BackingField;
  if ( !data_k__BackingField )
    goto LABEL_62;
  battle_ent = data_k__BackingField->fields.battle_ent;
  if ( !battle_ent )
    goto LABEL_62;
  if ( !continueItemRoot )
    goto LABEL_62;
  continueItemRoot = (__int64)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)continueItemRoot,
                                battle_ent->fields.questId,
                                (const MethodInfo_3F10B30 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( !this->fields._data_k__BackingField )
    goto LABEL_62;
  v9 = (QuestEntity_o *)continueItemRoot;
  continueItemRoot = BattleData__EnableContinueItem(this->fields._data_k__BackingField, 0);
  if ( (continueItemRoot & 1) != 0 )
  {
    continueItemRoot = (__int64)this->fields._data_k__BackingField;
    if ( !continueItemRoot )
      goto LABEL_62;
    continueItemRoot = BattleData__GetContinueItemNum((BattleData_o *)continueItemRoot, 0);
    if ( continueItemRoot >= 1 )
    {
      continueItemRoot = (__int64)this->fields._data_k__BackingField;
      if ( !continueItemRoot )
        goto LABEL_62;
      continueItemRoot = BattleData__isNgContinue((BattleData_o *)continueItemRoot, 0);
      if ( (continueItemRoot & 1) == 0 )
      {
        continueItemRoot = (__int64)this->fields.continueItemRoot;
        if ( continueItemRoot )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)continueItemRoot, 1, 0);
          continueItemRoot = (__int64)this->fields._data_k__BackingField;
          if ( continueItemRoot )
          {
            continueCount = this->fields.continueCount;
            ContinueItemNum = BattleData__GetContinueItemNum((BattleData_o *)continueItemRoot, 0);
            continueItemRoot = (__int64)System_Int64__ToString((int64_t)&ContinueItemNum, 0);
            if ( continueCount )
            {
              UILabel__set_text(continueCount, (System_String_o *)continueItemRoot, 0);
              continueItemRoot = (__int64)this->fields._data_k__BackingField;
              if ( continueItemRoot )
              {
                continueItemCountSpr = this->fields.continueItemCountSpr;
                ContinueItemImageId = BattleData__GetContinueItemImageId((BattleData_o *)continueItemRoot, 0);
                if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v16);
                AtlasManager__SetItem(continueItemCountSpr, ContinueItemImageId, 0);
                continueItemRoot = (__int64)this->fields.giveUpTitleSpr;
                if ( continueItemRoot )
                {
                  continueItemRoot = (__int64)UnityEngine_Component__get_transform(
                                                (UnityEngine_Component_o *)continueItemRoot,
                                                0);
                  if ( continueItemRoot )
                  {
                    v25.fields.x = 0.0;
                    v25.fields.z = 0.0;
                    v25.fields.y = 97.0;
                    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)continueItemRoot, v25, 0);
                    continueItemRoot = (__int64)this->fields.okBtn;
                    if ( continueItemRoot )
                    {
                      continueItemRoot = (__int64)UnityEngine_GameObject__get_transform(
                                                    (UnityEngine_GameObject_o *)continueItemRoot,
                                                    0);
                      if ( continueItemRoot )
                      {
                        v26.fields.z = 0.0;
                        v26.fields.x = 193.0;
                        v26.fields.y = -92.0;
                        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)continueItemRoot, v26, 0);
                        continueItemRoot = (__int64)this->fields.cancelBtn;
                        if ( continueItemRoot )
                        {
                          continueItemRoot = (__int64)UnityEngine_GameObject__get_transform(
                                                        (UnityEngine_GameObject_o *)continueItemRoot,
                                                        0);
                          if ( continueItemRoot )
                          {
                            v27.fields.z = 0.0;
                            v27.fields.x = -193.0;
                            v27.fields.y = -92.0;
                            UnityEngine_Transform__set_localPosition(
                              (UnityEngine_Transform_o *)continueItemRoot,
                              v27,
                              0);
                            continueItemRoot = (__int64)this->fields.giveUpBg;
                            if ( continueItemRoot )
                            {
                              UIWidget__set_height((UIWidget_o *)continueItemRoot, 279, 0);
                              continueItemRoot = (__int64)this->fields.checkGiveUpLabel;
                              if ( continueItemRoot )
                              {
                                continueItemRoot = (__int64)UnityEngine_Component__get_transform(
                                                              (UnityEngine_Component_o *)continueItemRoot,
                                                              0);
                                if ( continueItemRoot )
                                {
                                  v28.fields.x = 0.0;
                                  v28.fields.z = 0.0;
                                  v28.fields.y = 26.0;
                                  UnityEngine_Transform__set_localPosition(
                                    (UnityEngine_Transform_o *)continueItemRoot,
                                    v28,
                                    0);
                                  checkGiveUpLabel = this->fields.checkGiveUpLabel;
                                  this->fields.EnableContinueItem = 1;
                                  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v18);
                                  continueItemRoot = (__int64)LocalizationManager__Get(
                                                                (System_String_o *)StringLiteral_2961/*"BATTLE_RETIRE_CHECKSTR"*/,
                                                                0);
                                  if ( checkGiveUpLabel )
                                  {
                                    UILabel__set_text(checkGiveUpLabel, (System_String_o *)continueItemRoot, 0);
                                    continueItemRoot = (__int64)this->fields.continueItemDeadLineLabel;
                                    if ( continueItemRoot )
                                    {
                                      continueItemRoot = (__int64)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)continueItemRoot,
                                                                    0);
                                      if ( continueItemRoot )
                                      {
                                        UnityEngine_GameObject__SetActive(
                                          (UnityEngine_GameObject_o *)continueItemRoot,
                                          1,
                                          0);
                                        goto LABEL_40;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        goto LABEL_62;
      }
    }
  }
  if ( !v9 )
    goto LABEL_62;
  continueItemRoot = QuestEntity__HasFlag(v9, 0x40000000, 0);
  if ( (continueItemRoot & 1) != 0 )
  {
    v10 = this->fields.checkGiveUpLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, call);
    v11 = &StringLiteral_2962/*"BATTLE_RETIRE_CONSUME_COST_CHECKSTR"*/;
    goto LABEL_38;
  }
  v12 = this->fields._data_k__BackingField;
  if ( !v12 )
    goto LABEL_62;
  continueItemRoot = (__int64)v12->fields.questphase_ent;
  if ( !continueItemRoot )
    goto LABEL_62;
  if ( !QuestPhaseEntity__IsInterruptionQuest((QuestPhaseEntity_o *)continueItemRoot, 0) )
  {
    v10 = this->fields.checkGiveUpLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v13);
    v11 = &StringLiteral_2961/*"BATTLE_RETIRE_CHECKSTR"*/;
LABEL_38:
    continueItemRoot = (__int64)LocalizationManager__Get((System_String_o *)*v11, 0);
    if ( v10 )
    {
      UILabel__set_text(v10, (System_String_o *)continueItemRoot, 0);
      goto LABEL_40;
    }
LABEL_62:
    sub_2213CDC(continueItemRoot, call);
  }
  BattleRetireWindowComponent__SetInterruptionQuestUI(this, v13);
LABEL_40:
  BattleWindowComponent__Open((BattleWindowComponent_o *)this, call, 0);
}


void BattleRetireWindowComponent__SetInterruptionQuestUI(BattleRetireWindowComponent_o *this, const MethodInfo *method)
{
  UIWidget_o *checkGiveUpLabel; // x0
  UIWidget_o *v4; // x8
  int m_CachedPtr; // w23
  __int64 v6; // x24
  __int64 v7; // x1
  System_String_o *v8; // x20
  Il2CppObject *v9; // x0
  System_String_o *v10; // x0
  UILabel_o *v11; // x21
  UIRect_o *giveUpBg; // x20
  struct UISprite_o *v13; // x8
  struct UISprite_o *v14; // x8
  struct UISprite_o *v15; // x8
  struct UISprite_o *v16; // x8
  __int64 v17; // x1
  UIRect_o *Component_object; // x20
  __int64 v19; // x1
  UIRect_o *v20; // x20
  int v21; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_5974172 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonTemplate_BattleItemData__get_Instance__);
    sub_2213A60(&StringLiteral_17295/*"_{0}"*/);
    sub_2213A60(&StringLiteral_2963/*"BATTLE_RETIRE_INTERRUPTION_BATTLE_ITEM_CHECK_STR"*/);
    sub_2213A60(&StringLiteral_2964/*"BATTLE_RETIRE_INTERRUPTION_BATTLE_ITEM_CHECK_STR_PARTY"*/);
    byte_5974172 = 1;
  }
  checkGiveUpLabel = (UIWidget_o *)this->fields.checkGiveUpLabel;
  if ( !checkGiveUpLabel )
    goto LABEL_50;
  UIWidget__set_pivot(checkGiveUpLabel, 1, 0);
  checkGiveUpLabel = (UIWidget_o *)this->fields.checkGiveUpLabel;
  if ( !checkGiveUpLabel )
    goto LABEL_50;
  UILabel__set_overflowMethod((UILabel_o *)checkGiveUpLabel, 2, 0);
  checkGiveUpLabel = (UIWidget_o *)this->fields.checkGiveUpLabel;
  if ( !checkGiveUpLabel )
    goto LABEL_50;
  checkGiveUpLabel = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)checkGiveUpLabel, 0);
  if ( !checkGiveUpLabel )
    goto LABEL_50;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)checkGiveUpLabel,
    this->fields.messageLabelPosInInterruptionQuest,
    0);
  checkGiveUpLabel = (UIWidget_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_BattleItemData__get_Instance__);
  if ( !checkGiveUpLabel )
    goto LABEL_50;
  v4 = checkGiveUpLabel;
  checkGiveUpLabel = (UIWidget_o *)this->fields._data_k__BackingField;
  if ( !checkGiveUpLabel )
    goto LABEL_50;
  m_CachedPtr = v4->fields.m_CachedPtr;
  v6 = StringLiteral_2963/*"BATTLE_RETIRE_INTERRUPTION_BATTLE_ITEM_CHECK_STR"*/;
  if ( BattleData__IsWaveSetupAsOneParty((BattleData_o *)checkGiveUpLabel, 0) )
    v8 = (System_String_o *)StringLiteral_2964/*"BATTLE_RETIRE_INTERRUPTION_BATTLE_ITEM_CHECK_STR_PARTY"*/;
  else
    v8 = (System_String_o *)v6;
  if ( m_CachedPtr >= 1 )
  {
    v21 = m_CachedPtr;
    v9 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v21);
    v10 = System_String__Format((System_String_o *)StringLiteral_17295/*"_{0}"*/, v9, 0);
    v8 = System_String__Concat_75651716((System_String_o *)StringLiteral_2963/*"BATTLE_RETIRE_INTERRUPTION_BATTLE_ITEM_CHECK_STR"*/, v10, 0);
  }
  v11 = this->fields.checkGiveUpLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7);
  checkGiveUpLabel = (UIWidget_o *)LocalizationManager__Get(v8, 0);
  if ( !v11 )
    goto LABEL_50;
  UILabel__set_text(v11, (System_String_o *)checkGiveUpLabel, 0);
  checkGiveUpLabel = (UIWidget_o *)this->fields.checkGiveUpLabel;
  if ( !checkGiveUpLabel )
    goto LABEL_50;
  giveUpBg = (UIRect_o *)this->fields.giveUpBg;
  checkGiveUpLabel = (UIWidget_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)checkGiveUpLabel, 0);
  if ( !giveUpBg )
    goto LABEL_50;
  UIRect__SetAnchor_56478404(giveUpBg, (UnityEngine_GameObject_o *)checkGiveUpLabel, 0);
  v13 = this->fields.giveUpBg;
  if ( !v13 )
    goto LABEL_50;
  checkGiveUpLabel = (UIWidget_o *)v13->fields.leftAnchor;
  if ( !checkGiveUpLabel )
    goto LABEL_50;
  UIRect_AnchorPoint__Set((UIRect_AnchorPoint_o *)checkGiveUpLabel, 0.0, -107.0, 0);
  v14 = this->fields.giveUpBg;
  if ( !v14 )
    goto LABEL_50;
  checkGiveUpLabel = (UIWidget_o *)v14->fields.rightAnchor;
  if ( !checkGiveUpLabel )
    goto LABEL_50;
  UIRect_AnchorPoint__Set((UIRect_AnchorPoint_o *)checkGiveUpLabel, 1.0, 107.0, 0);
  v15 = this->fields.giveUpBg;
  if ( !v15 )
    goto LABEL_50;
  checkGiveUpLabel = (UIWidget_o *)v15->fields.bottomAnchor;
  if ( !checkGiveUpLabel )
    goto LABEL_50;
  UIRect_AnchorPoint__Set((UIRect_AnchorPoint_o *)checkGiveUpLabel, 0.0, -102.0, 0);
  v16 = this->fields.giveUpBg;
  if ( !v16 )
    goto LABEL_50;
  checkGiveUpLabel = (UIWidget_o *)v16->fields.topAnchor;
  if ( !checkGiveUpLabel )
    goto LABEL_50;
  UIRect_AnchorPoint__Set((UIRect_AnchorPoint_o *)checkGiveUpLabel, 1.0, 90.0, 0);
  checkGiveUpLabel = (UIWidget_o *)this->fields.cancelBtn;
  if ( !checkGiveUpLabel )
    goto LABEL_50;
  Component_object = (UIRect_o *)UnityEngine_GameObject__GetComponent_object_(
                                   (UnityEngine_GameObject_o *)checkGiveUpLabel,
                                   (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
  {
    checkGiveUpLabel = (UIWidget_o *)this->fields.giveUpBg;
    if ( !checkGiveUpLabel )
      goto LABEL_50;
    checkGiveUpLabel = (UIWidget_o *)UnityEngine_Component__get_gameObject(
                                       (UnityEngine_Component_o *)checkGiveUpLabel,
                                       0);
    if ( !Component_object )
      goto LABEL_50;
    UIRect__SetAnchor_56478404(Component_object, (UnityEngine_GameObject_o *)checkGiveUpLabel, 0);
    checkGiveUpLabel = (UIWidget_o *)Component_object->fields.leftAnchor;
    if ( !checkGiveUpLabel )
      goto LABEL_50;
    UIRect_AnchorPoint__Set((UIRect_AnchorPoint_o *)checkGiveUpLabel, 0.0, 113.0, 0);
    checkGiveUpLabel = (UIWidget_o *)Component_object->fields.rightAnchor;
    if ( !checkGiveUpLabel )
      goto LABEL_50;
    UIRect_AnchorPoint__Set((UIRect_AnchorPoint_o *)checkGiveUpLabel, 0.0, 383.0, 0);
    checkGiveUpLabel = (UIWidget_o *)Component_object->fields.bottomAnchor;
    if ( !checkGiveUpLabel )
      goto LABEL_50;
    UIRect_AnchorPoint__Set((UIRect_AnchorPoint_o *)checkGiveUpLabel, 0.0, 15.0, 0);
    checkGiveUpLabel = (UIWidget_o *)Component_object->fields.topAnchor;
    if ( !checkGiveUpLabel )
      goto LABEL_50;
    UIRect_AnchorPoint__Set((UIRect_AnchorPoint_o *)checkGiveUpLabel, 0.0, 81.0, 0);
  }
  checkGiveUpLabel = (UIWidget_o *)this->fields.okBtn;
  if ( !checkGiveUpLabel )
    goto LABEL_50;
  v20 = (UIRect_o *)UnityEngine_GameObject__GetComponent_object_(
                      (UnityEngine_GameObject_o *)checkGiveUpLabel,
                      (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v20, 0, 0) )
  {
    checkGiveUpLabel = (UIWidget_o *)this->fields.giveUpBg;
    if ( checkGiveUpLabel )
    {
      checkGiveUpLabel = (UIWidget_o *)UnityEngine_Component__get_gameObject(
                                         (UnityEngine_Component_o *)checkGiveUpLabel,
                                         0);
      if ( v20 )
      {
        UIRect__SetAnchor_56478404(v20, (UnityEngine_GameObject_o *)checkGiveUpLabel, 0);
        checkGiveUpLabel = (UIWidget_o *)v20->fields.leftAnchor;
        if ( checkGiveUpLabel )
        {
          UIRect_AnchorPoint__Set((UIRect_AnchorPoint_o *)checkGiveUpLabel, 1.0, -383.0, 0);
          checkGiveUpLabel = (UIWidget_o *)v20->fields.rightAnchor;
          if ( checkGiveUpLabel )
          {
            UIRect_AnchorPoint__Set((UIRect_AnchorPoint_o *)checkGiveUpLabel, 1.0, -113.0, 0);
            checkGiveUpLabel = (UIWidget_o *)v20->fields.bottomAnchor;
            if ( checkGiveUpLabel )
            {
              UIRect_AnchorPoint__Set((UIRect_AnchorPoint_o *)checkGiveUpLabel, 0.0, 15.0, 0);
              checkGiveUpLabel = (UIWidget_o *)v20->fields.topAnchor;
              if ( checkGiveUpLabel )
              {
                UIRect_AnchorPoint__Set((UIRect_AnchorPoint_o *)checkGiveUpLabel, 0.0, 81.0, 0);
                return;
              }
            }
          }
        }
      }
    }
LABEL_50:
    sub_2213CDC(checkGiveUpLabel, method);
  }
}


void BattleRetireWindowComponent__Update(BattleRetireWindowComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *data_k__BackingField; // x20
  __int64 v4; // x1
  UILabel_o *continueItemDeadLineLabel; // x20
  System_String_o *v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x21
  int64_t ContinueDeadLine; // x0
  Il2CppObject *RestTime; // x0
  __int64 v11; // x1
  int64_t v12; // x20
  __int64 v13; // x1
  Il2CppObject *Instance; // x20
  System_String_o *v15; // x21
  ErrorDialog_ClickDelegate_o *v16; // x22
  System_Nullable_Vector2__o effectDistance; // [xsp+0h] [xbp-50h]

  if ( (byte_597416F & 1) == 0 )
  {
    sub_2213A60(&Method_BattleRetireWindowComponent_CallbackConfirmDialog__);
    sub_2213A60(&ErrorDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&StringLiteral_2836/*"BATTLE_CONTINUE_ITEM_GIVEUP"*/);
    sub_2213A60(&StringLiteral_2835/*"BATTLE_CONTINUE_ITEM_END_TIME"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_597416F = 1;
  }
  data_k__BackingField = (UnityEngine_Object_o *)this->fields._data_k__BackingField;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(data_k__BackingField, 0, 0) && this->fields.EnableContinueItem )
  {
    continueItemDeadLineLabel = this->fields.continueItemDeadLineLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v4);
    v6 = LocalizationManager__Get((System_String_o *)StringLiteral_2836/*"BATTLE_CONTINUE_ITEM_GIVEUP"*/, 0);
    if ( !this->fields._data_k__BackingField )
      goto LABEL_21;
    v8 = v6;
    ContinueDeadLine = BattleData__GetContinueDeadLine(this->fields._data_k__BackingField, 0);
    RestTime = (Il2CppObject *)LocalizationManager__GetRestTime(ContinueDeadLine, 0);
    v6 = System_String__Format(v8, RestTime, 0);
    if ( !continueItemDeadLineLabel )
      goto LABEL_21;
    UILabel__set_text(continueItemDeadLineLabel, v6, 0);
    v6 = (System_String_o *)this->fields._data_k__BackingField;
    if ( !v6 )
      goto LABEL_21;
    v12 = BattleData__GetContinueDeadLine((BattleData_o *)v6, 0);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v11);
    if ( v12 < NetworkManager__getTime(0) && !this->fields.isShowDeadLineDialog )
    {
      this->fields.isShowDeadLineDialog = 1;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v13);
      v15 = LocalizationManager__Get((System_String_o *)StringLiteral_2835/*"BATTLE_CONTINUE_ITEM_END_TIME"*/, 0);
      v16 = (ErrorDialog_ClickDelegate_o *)sub_2213CCC(ErrorDialog_ClickDelegate_TypeInfo);
      ErrorDialog_ClickDelegate___ctor(
        v16,
        (Il2CppObject *)this,
        Method_BattleRetireWindowComponent_CallbackConfirmDialog__,
        0);
      if ( Instance )
      {
        *(_QWORD *)&effectDistance.fields.hasValue = 0;
        effectDistance.fields.value.fields.y = 0.0;
        CommonUI__OpenWarningDialog(
          (CommonUI_o *)Instance,
          (System_String_o *)StringLiteral_1/*""*/,
          v15,
          v16,
          0,
          0,
          -1.0,
          1,
          effectDistance,
          0);
        return;
      }
LABEL_21:
      sub_2213CDC(v6, v7);
    }
  }
}


System_String_o *BattleRetireWindowComponent__get_closeBtnPath(
        BattleRetireWindowComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_5974173 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_18234/*"btn_cancel"*/);
    byte_5974173 = 1;
  }
  return (System_String_o *)StringLiteral_18234/*"btn_cancel"*/;
}


BattleData_o *BattleRetireWindowComponent__get_data(BattleRetireWindowComponent_o *this, const MethodInfo *method)
{
  return this->fields._data_k__BackingField;
}


void BattleRetireWindowComponent__set_data(
        BattleRetireWindowComponent_o *this,
        BattleData_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._data_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._data_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}