void __fastcall BattleRetireWindowComponent___ctor(BattleRetireWindowComponent_o *this, const MethodInfo *method)
{
  this->fields.messageLabelPosInInterruptionQuest.fields.z = 0.0;
  *(_QWORD *)&this->fields.messageLabelPosInInterruptionQuest.fields.x = 0x41E6666600000000LL;
  BattleWindowComponent___ctor((BattleWindowComponent_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleRetireWindowComponent__CallbackConfirmDialog(
        BattleRetireWindowComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4A01462 & 1) == 0 )
  {
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4A01462 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseConfirmDialog(Instance, 0LL), (Instance = (CommonUI_o *)this->fields._data_k__BackingField) == 0LL) )
  {
    sub_1B64ACC(Instance, v5);
  }
  BattleData__UpdateContinueItemInfo((BattleData_o *)Instance, 0LL);
  BattleRetireWindowComponent__Open(this, 0LL, v6);
  this->fields.isShowDeadLineDialog = 1;
}


void __fastcall BattleRetireWindowComponent__Open(
        BattleRetireWindowComponent_o *this,
        BattleWindowComponent_EndCall_o *call,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  UnityEngine_GameObject_o *continueItemRoot; // x0
  struct BattleData_o *data_k__BackingField; // x8
  struct BattleEntity_o *battle_ent; // x8
  QuestEntity_o *v15; // x21
  UILabel_o *v16; // x21
  __int64 *v17; // x8
  struct BattleData_o *v18; // x8
  const MethodInfo *v19; // x1
  UILabel_o *continueCount; // x21
  UISprite_o *continueItemCountSpr; // x21
  int32_t ContinueItemImageId; // w22
  UILabel_o *checkGiveUpLabel; // x21
  int32_t ContinueItemNum; // [xsp+Ch] [xbp-24h] BYREF
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A01463 & 1) == 0 )
  {
    sub_1B64870(&AtlasManager_TypeInfo, call);
    sub_1B64870(&Method_DataManager_GetMasterData_QuestMaster___, v5);
    sub_1B64870(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v6);
    sub_1B64870(&LocalizationManager_TypeInfo, v7);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1B64870(&StringLiteral_2941/*"BATTLE_RETIRE_CHECKSTR"*/, v9);
    sub_1B64870(&StringLiteral_2942/*"BATTLE_RETIRE_CONSUME_COST_CHECKSTR"*/, v10);
    sub_1B64870(&StringLiteral_1213/*"0"*/, v11);
    byte_4A01463 = 1;
  }
  ContinueItemNum = 0;
  continueItemRoot = this->fields.continueItemRoot;
  if ( !continueItemRoot )
    goto LABEL_62;
  UnityEngine_GameObject__SetActive(continueItemRoot, 0, 0LL);
  continueItemRoot = (UnityEngine_GameObject_o *)this->fields.continueCount;
  if ( !continueItemRoot )
    goto LABEL_62;
  UILabel__set_text((UILabel_o *)continueItemRoot, (System_String_o *)StringLiteral_1213/*"0"*/, 0LL);
  continueItemRoot = (UnityEngine_GameObject_o *)this->fields.giveUpTitleSpr;
  if ( !continueItemRoot )
    goto LABEL_62;
  continueItemRoot = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)continueItemRoot,
                                                   0LL);
  if ( !continueItemRoot )
    goto LABEL_62;
  v25.fields.x = 0.0;
  v25.fields.z = 0.0;
  v25.fields.y = 77.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)continueItemRoot, v25, 0LL);
  continueItemRoot = this->fields.okBtn;
  if ( !continueItemRoot )
    goto LABEL_62;
  continueItemRoot = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(continueItemRoot, 0LL);
  if ( !continueItemRoot )
    goto LABEL_62;
  v26.fields.z = 0.0;
  v26.fields.x = 193.0;
  v26.fields.y = -72.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)continueItemRoot, v26, 0LL);
  continueItemRoot = this->fields.cancelBtn;
  if ( !continueItemRoot )
    goto LABEL_62;
  continueItemRoot = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(continueItemRoot, 0LL);
  if ( !continueItemRoot )
    goto LABEL_62;
  v27.fields.z = 0.0;
  v27.fields.x = -193.0;
  v27.fields.y = -72.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)continueItemRoot, v27, 0LL);
  continueItemRoot = (UnityEngine_GameObject_o *)this->fields.giveUpBg;
  if ( !continueItemRoot )
    goto LABEL_62;
  UIWidget__set_height((UIWidget_o *)continueItemRoot, 239, 0LL);
  continueItemRoot = (UnityEngine_GameObject_o *)this->fields.continueItemDeadLineLabel;
  if ( !continueItemRoot )
    goto LABEL_62;
  continueItemRoot = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)continueItemRoot, 0LL);
  if ( !continueItemRoot )
    goto LABEL_62;
  UnityEngine_GameObject__SetActive(continueItemRoot, 0, 0LL);
  continueItemRoot = (UnityEngine_GameObject_o *)this->fields.checkGiveUpLabel;
  if ( !continueItemRoot )
    goto LABEL_62;
  continueItemRoot = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)continueItemRoot,
                                                   0LL);
  if ( !continueItemRoot )
    goto LABEL_62;
  v28.fields.x = 0.0;
  v28.fields.y = 6.0;
  v28.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)continueItemRoot, v28, 0LL);
  this->fields.EnableContinueItem = 0;
  continueItemRoot = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !continueItemRoot )
    goto LABEL_62;
  continueItemRoot = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)continueItemRoot,
                                                   (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_QuestMaster___);
  data_k__BackingField = this->fields._data_k__BackingField;
  if ( !data_k__BackingField )
    goto LABEL_62;
  battle_ent = data_k__BackingField->fields.battle_ent;
  if ( !battle_ent )
    goto LABEL_62;
  if ( !continueItemRoot )
    goto LABEL_62;
  continueItemRoot = (UnityEngine_GameObject_o *)DataMasterBase_object__object__int___GetEntity(
                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)continueItemRoot,
                                                   battle_ent->fields.questId,
                                                   (const MethodInfo_30D6180 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( !this->fields._data_k__BackingField )
    goto LABEL_62;
  v15 = (QuestEntity_o *)continueItemRoot;
  continueItemRoot = (UnityEngine_GameObject_o *)BattleData__EnableContinueItem(this->fields._data_k__BackingField, 0LL);
  if ( ((unsigned __int8)continueItemRoot & 1) != 0 )
  {
    continueItemRoot = (UnityEngine_GameObject_o *)this->fields._data_k__BackingField;
    if ( !continueItemRoot )
      goto LABEL_62;
    continueItemRoot = (UnityEngine_GameObject_o *)BattleData__GetContinueItemNum((BattleData_o *)continueItemRoot, 0LL);
    if ( (int)continueItemRoot >= 1 )
    {
      continueItemRoot = (UnityEngine_GameObject_o *)this->fields._data_k__BackingField;
      if ( !continueItemRoot )
        goto LABEL_62;
      continueItemRoot = (UnityEngine_GameObject_o *)BattleData__isNgContinue((BattleData_o *)continueItemRoot, 0LL);
      if ( ((unsigned __int8)continueItemRoot & 1) == 0 )
      {
        continueItemRoot = this->fields.continueItemRoot;
        if ( continueItemRoot )
        {
          UnityEngine_GameObject__SetActive(continueItemRoot, 1, 0LL);
          continueItemRoot = (UnityEngine_GameObject_o *)this->fields._data_k__BackingField;
          if ( continueItemRoot )
          {
            continueCount = this->fields.continueCount;
            ContinueItemNum = BattleData__GetContinueItemNum((BattleData_o *)continueItemRoot, 0LL);
            continueItemRoot = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&ContinueItemNum, 0LL);
            if ( continueCount )
            {
              UILabel__set_text(continueCount, (System_String_o *)continueItemRoot, 0LL);
              continueItemRoot = (UnityEngine_GameObject_o *)this->fields._data_k__BackingField;
              if ( continueItemRoot )
              {
                continueItemCountSpr = this->fields.continueItemCountSpr;
                ContinueItemImageId = BattleData__GetContinueItemImageId((BattleData_o *)continueItemRoot, 0LL);
                if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                AtlasManager__SetItem(continueItemCountSpr, ContinueItemImageId, 0LL);
                continueItemRoot = (UnityEngine_GameObject_o *)this->fields.giveUpTitleSpr;
                if ( continueItemRoot )
                {
                  continueItemRoot = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                                   (UnityEngine_Component_o *)continueItemRoot,
                                                                   0LL);
                  if ( continueItemRoot )
                  {
                    v29.fields.x = 0.0;
                    v29.fields.z = 0.0;
                    v29.fields.y = 97.0;
                    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)continueItemRoot, v29, 0LL);
                    continueItemRoot = this->fields.okBtn;
                    if ( continueItemRoot )
                    {
                      continueItemRoot = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                       continueItemRoot,
                                                                       0LL);
                      if ( continueItemRoot )
                      {
                        v30.fields.z = 0.0;
                        v30.fields.x = 193.0;
                        v30.fields.y = -92.0;
                        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)continueItemRoot, v30, 0LL);
                        continueItemRoot = this->fields.cancelBtn;
                        if ( continueItemRoot )
                        {
                          continueItemRoot = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                           continueItemRoot,
                                                                           0LL);
                          if ( continueItemRoot )
                          {
                            v31.fields.z = 0.0;
                            v31.fields.x = -193.0;
                            v31.fields.y = -92.0;
                            UnityEngine_Transform__set_localPosition(
                              (UnityEngine_Transform_o *)continueItemRoot,
                              v31,
                              0LL);
                            continueItemRoot = (UnityEngine_GameObject_o *)this->fields.giveUpBg;
                            if ( continueItemRoot )
                            {
                              UIWidget__set_height((UIWidget_o *)continueItemRoot, 279, 0LL);
                              continueItemRoot = (UnityEngine_GameObject_o *)this->fields.checkGiveUpLabel;
                              if ( continueItemRoot )
                              {
                                continueItemRoot = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                                                 (UnityEngine_Component_o *)continueItemRoot,
                                                                                 0LL);
                                if ( continueItemRoot )
                                {
                                  v32.fields.x = 0.0;
                                  v32.fields.y = 26.0;
                                  v32.fields.z = 0.0;
                                  UnityEngine_Transform__set_localPosition(
                                    (UnityEngine_Transform_o *)continueItemRoot,
                                    v32,
                                    0LL);
                                  this->fields.EnableContinueItem = 1;
                                  checkGiveUpLabel = this->fields.checkGiveUpLabel;
                                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                  continueItemRoot = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                                   (System_String_o *)StringLiteral_2941/*"BATTLE_RETIRE_CHECKSTR"*/,
                                                                                   0LL);
                                  if ( checkGiveUpLabel )
                                  {
                                    UILabel__set_text(checkGiveUpLabel, (System_String_o *)continueItemRoot, 0LL);
                                    continueItemRoot = (UnityEngine_GameObject_o *)this->fields.continueItemDeadLineLabel;
                                    if ( continueItemRoot )
                                    {
                                      continueItemRoot = UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)continueItemRoot,
                                                           0LL);
                                      if ( continueItemRoot )
                                      {
                                        UnityEngine_GameObject__SetActive(continueItemRoot, 1, 0LL);
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
  if ( !v15 )
    goto LABEL_62;
  continueItemRoot = (UnityEngine_GameObject_o *)QuestEntity__HasFlag(v15, 0x40000000LL, 0LL);
  if ( ((unsigned __int8)continueItemRoot & 1) != 0 )
  {
    v16 = this->fields.checkGiveUpLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v17 = &StringLiteral_2942/*"BATTLE_RETIRE_CONSUME_COST_CHECKSTR"*/;
    goto LABEL_38;
  }
  v18 = this->fields._data_k__BackingField;
  if ( !v18 )
    goto LABEL_62;
  continueItemRoot = (UnityEngine_GameObject_o *)v18->fields.questphase_ent;
  if ( !continueItemRoot )
    goto LABEL_62;
  if ( !QuestPhaseEntity__IsInterruptionQuest((QuestPhaseEntity_o *)continueItemRoot, 0LL) )
  {
    v16 = this->fields.checkGiveUpLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v17 = &StringLiteral_2941/*"BATTLE_RETIRE_CHECKSTR"*/;
LABEL_38:
    continueItemRoot = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v17, 0LL);
    if ( v16 )
    {
      UILabel__set_text(v16, (System_String_o *)continueItemRoot, 0LL);
      goto LABEL_40;
    }
LABEL_62:
    sub_1B64ACC(continueItemRoot, call);
  }
  BattleRetireWindowComponent__SetInterruptionQuestUI(this, v19);
LABEL_40:
  BattleWindowComponent__Open((BattleWindowComponent_o *)this, call, 0LL);
}


void __fastcall BattleRetireWindowComponent__SetInterruptionQuestUI(
        BattleRetireWindowComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UIWidget_o *checkGiveUpLabel; // x0
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  System_String_o *v13; // x20
  Il2CppObject *v14; // x0
  System_String_o *v15; // x0
  UILabel_o *v16; // x21
  UIRect_o *giveUpBg; // x20
  struct UISprite_o *v18; // x8
  struct UISprite_o *v19; // x8
  struct UISprite_o *v20; // x8
  struct UISprite_o *v21; // x8
  UIRect_o *Component_object; // x20
  UIRect_o *v23; // x20
  intptr_t m_CachedPtr; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A01464 & 1) == 0 )
  {
    sub_1B64870(&Method_UnityEngine_GameObject_GetComponent_UISprite___, method);
    sub_1B64870(&int_TypeInfo, v3);
    sub_1B64870(&LocalizationManager_TypeInfo, v4);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v5);
    sub_1B64870(&Method_SingletonTemplate_BattleItemData__get_Instance__, v6);
    sub_1B64870(&StringLiteral_16543/*"_{0}"*/, v7);
    sub_1B64870(&StringLiteral_2943/*"BATTLE_RETIRE_INTERRUPTION_BATTLE_ITEM_CHECK_STR"*/, v8);
    byte_4A01464 = 1;
  }
  checkGiveUpLabel = (UIWidget_o *)this->fields.checkGiveUpLabel;
  if ( !checkGiveUpLabel )
    goto LABEL_46;
  UIWidget__set_pivot(checkGiveUpLabel, 1, 0LL);
  checkGiveUpLabel = (UIWidget_o *)this->fields.checkGiveUpLabel;
  if ( !checkGiveUpLabel )
    goto LABEL_46;
  UILabel__set_overflowMethod((UILabel_o *)checkGiveUpLabel, 2, 0LL);
  checkGiveUpLabel = (UIWidget_o *)this->fields.checkGiveUpLabel;
  if ( !checkGiveUpLabel )
    goto LABEL_46;
  checkGiveUpLabel = (UIWidget_o *)UnityEngine_Component__get_transform(
                                     (UnityEngine_Component_o *)checkGiveUpLabel,
                                     0LL);
  if ( !checkGiveUpLabel )
    goto LABEL_46;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)checkGiveUpLabel,
    this->fields.messageLabelPosInInterruptionQuest,
    0LL);
  checkGiveUpLabel = (UIWidget_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EE738 *)Method_SingletonTemplate_BattleItemData__get_Instance__);
  if ( !checkGiveUpLabel )
    goto LABEL_46;
  v13 = (System_String_o *)StringLiteral_2943/*"BATTLE_RETIRE_INTERRUPTION_BATTLE_ITEM_CHECK_STR"*/;
  if ( checkGiveUpLabel->fields.m_CachedPtr >= 1 )
  {
    m_CachedPtr = checkGiveUpLabel->fields.m_CachedPtr;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &m_CachedPtr, v10, v11, v12);
    v15 = System_String__Format((System_String_o *)StringLiteral_16543/*"_{0}"*/, v14, 0LL);
    v13 = System_String__Concat_61383576(v13, v15, 0LL);
  }
  v16 = this->fields.checkGiveUpLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  checkGiveUpLabel = (UIWidget_o *)LocalizationManager__Get(v13, 0LL);
  if ( !v16 )
    goto LABEL_46;
  UILabel__set_text(v16, (System_String_o *)checkGiveUpLabel, 0LL);
  checkGiveUpLabel = (UIWidget_o *)this->fields.checkGiveUpLabel;
  if ( !checkGiveUpLabel )
    goto LABEL_46;
  giveUpBg = (UIRect_o *)this->fields.giveUpBg;
  checkGiveUpLabel = (UIWidget_o *)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)checkGiveUpLabel,
                                     0LL);
  if ( !giveUpBg )
    goto LABEL_46;
  UIRect__SetAnchor_46656068(giveUpBg, (UnityEngine_GameObject_o *)checkGiveUpLabel, 0LL);
  v18 = this->fields.giveUpBg;
  if ( !v18 )
    goto LABEL_46;
  checkGiveUpLabel = (UIWidget_o *)v18->fields.leftAnchor;
  if ( !checkGiveUpLabel )
    goto LABEL_46;
  UIRect_AnchorPoint__Set((UIRect_AnchorPoint_o *)checkGiveUpLabel, 0.0, -107.0, 0LL);
  v19 = this->fields.giveUpBg;
  if ( !v19 )
    goto LABEL_46;
  checkGiveUpLabel = (UIWidget_o *)v19->fields.rightAnchor;
  if ( !checkGiveUpLabel )
    goto LABEL_46;
  UIRect_AnchorPoint__Set((UIRect_AnchorPoint_o *)checkGiveUpLabel, 1.0, 107.0, 0LL);
  v20 = this->fields.giveUpBg;
  if ( !v20 )
    goto LABEL_46;
  checkGiveUpLabel = (UIWidget_o *)v20->fields.bottomAnchor;
  if ( !checkGiveUpLabel )
    goto LABEL_46;
  UIRect_AnchorPoint__Set((UIRect_AnchorPoint_o *)checkGiveUpLabel, 0.0, -102.0, 0LL);
  v21 = this->fields.giveUpBg;
  if ( !v21 )
    goto LABEL_46;
  checkGiveUpLabel = (UIWidget_o *)v21->fields.topAnchor;
  if ( !checkGiveUpLabel )
    goto LABEL_46;
  UIRect_AnchorPoint__Set((UIRect_AnchorPoint_o *)checkGiveUpLabel, 1.0, 90.0, 0LL);
  checkGiveUpLabel = (UIWidget_o *)this->fields.cancelBtn;
  if ( !checkGiveUpLabel )
    goto LABEL_46;
  Component_object = (UIRect_o *)UnityEngine_GameObject__GetComponent_object_(
                                   (UnityEngine_GameObject_o *)checkGiveUpLabel,
                                   (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
  {
    checkGiveUpLabel = (UIWidget_o *)this->fields.giveUpBg;
    if ( !checkGiveUpLabel )
      goto LABEL_46;
    checkGiveUpLabel = (UIWidget_o *)UnityEngine_Component__get_gameObject(
                                       (UnityEngine_Component_o *)checkGiveUpLabel,
                                       0LL);
    if ( !Component_object )
      goto LABEL_46;
    UIRect__SetAnchor_46656068(Component_object, (UnityEngine_GameObject_o *)checkGiveUpLabel, 0LL);
    checkGiveUpLabel = (UIWidget_o *)Component_object->fields.leftAnchor;
    if ( !checkGiveUpLabel )
      goto LABEL_46;
    UIRect_AnchorPoint__Set((UIRect_AnchorPoint_o *)checkGiveUpLabel, 0.0, 113.0, 0LL);
    checkGiveUpLabel = (UIWidget_o *)Component_object->fields.rightAnchor;
    if ( !checkGiveUpLabel )
      goto LABEL_46;
    UIRect_AnchorPoint__Set((UIRect_AnchorPoint_o *)checkGiveUpLabel, 0.0, 383.0, 0LL);
    checkGiveUpLabel = (UIWidget_o *)Component_object->fields.bottomAnchor;
    if ( !checkGiveUpLabel )
      goto LABEL_46;
    UIRect_AnchorPoint__Set((UIRect_AnchorPoint_o *)checkGiveUpLabel, 0.0, 15.0, 0LL);
    checkGiveUpLabel = (UIWidget_o *)Component_object->fields.topAnchor;
    if ( !checkGiveUpLabel )
      goto LABEL_46;
    UIRect_AnchorPoint__Set((UIRect_AnchorPoint_o *)checkGiveUpLabel, 0.0, 81.0, 0LL);
  }
  checkGiveUpLabel = (UIWidget_o *)this->fields.okBtn;
  if ( !checkGiveUpLabel )
    goto LABEL_46;
  v23 = (UIRect_o *)UnityEngine_GameObject__GetComponent_object_(
                      (UnityEngine_GameObject_o *)checkGiveUpLabel,
                      (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v23, 0LL, 0LL) )
  {
    checkGiveUpLabel = (UIWidget_o *)this->fields.giveUpBg;
    if ( checkGiveUpLabel )
    {
      checkGiveUpLabel = (UIWidget_o *)UnityEngine_Component__get_gameObject(
                                         (UnityEngine_Component_o *)checkGiveUpLabel,
                                         0LL);
      if ( v23 )
      {
        UIRect__SetAnchor_46656068(v23, (UnityEngine_GameObject_o *)checkGiveUpLabel, 0LL);
        checkGiveUpLabel = (UIWidget_o *)v23->fields.leftAnchor;
        if ( checkGiveUpLabel )
        {
          UIRect_AnchorPoint__Set((UIRect_AnchorPoint_o *)checkGiveUpLabel, 1.0, -383.0, 0LL);
          checkGiveUpLabel = (UIWidget_o *)v23->fields.rightAnchor;
          if ( checkGiveUpLabel )
          {
            UIRect_AnchorPoint__Set((UIRect_AnchorPoint_o *)checkGiveUpLabel, 1.0, -113.0, 0LL);
            checkGiveUpLabel = (UIWidget_o *)v23->fields.bottomAnchor;
            if ( checkGiveUpLabel )
            {
              UIRect_AnchorPoint__Set((UIRect_AnchorPoint_o *)checkGiveUpLabel, 0.0, 15.0, 0LL);
              checkGiveUpLabel = (UIWidget_o *)v23->fields.topAnchor;
              if ( checkGiveUpLabel )
              {
                UIRect_AnchorPoint__Set((UIRect_AnchorPoint_o *)checkGiveUpLabel, 0.0, 81.0, 0LL);
                return;
              }
            }
          }
        }
      }
    }
LABEL_46:
    sub_1B64ACC(checkGiveUpLabel, method);
  }
}


void __fastcall BattleRetireWindowComponent__Update(BattleRetireWindowComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_Object_o *data_k__BackingField; // x20
  UILabel_o *continueItemDeadLineLabel; // x20
  System_String_o *v13; // x0
  __int64 v14; // x1
  System_String_o *v15; // x21
  int64_t ContinueDeadLine; // x0
  Il2CppObject *RestTime; // x0
  int64_t v18; // x20
  Il2CppObject *Instance; // x20
  System_String_o *v20; // x21
  ErrorDialog_ClickDelegate_o *v21; // x22
  System_Nullable_Vector2__o effectDistance; // [xsp+0h] [xbp-50h]

  if ( (byte_4A01461 & 1) == 0 )
  {
    sub_1B64870(&Method_BattleRetireWindowComponent_CallbackConfirmDialog__, method);
    sub_1B64870(&ErrorDialog_ClickDelegate_TypeInfo, v3);
    sub_1B64870(&LocalizationManager_TypeInfo, v4);
    sub_1B64870(&NetworkManager_TypeInfo, v5);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v6);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1B64870(&StringLiteral_2822/*"BATTLE_CONTINUE_ITEM_GIVEUP"*/, v8);
    sub_1B64870(&StringLiteral_2821/*"BATTLE_CONTINUE_ITEM_END_TIME"*/, v9);
    sub_1B64870(&StringLiteral_1/*""*/, v10);
    byte_4A01461 = 1;
  }
  data_k__BackingField = (UnityEngine_Object_o *)this->fields._data_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(data_k__BackingField, 0LL, 0LL) && this->fields.EnableContinueItem )
  {
    continueItemDeadLineLabel = this->fields.continueItemDeadLineLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_2822/*"BATTLE_CONTINUE_ITEM_GIVEUP"*/, 0LL);
    if ( !this->fields._data_k__BackingField )
      goto LABEL_21;
    v15 = v13;
    ContinueDeadLine = BattleData__GetContinueDeadLine(this->fields._data_k__BackingField, 0LL);
    RestTime = (Il2CppObject *)LocalizationManager__GetRestTime(ContinueDeadLine, 0LL);
    v13 = System_String__Format(v15, RestTime, 0LL);
    if ( !continueItemDeadLineLabel )
      goto LABEL_21;
    UILabel__set_text(continueItemDeadLineLabel, v13, 0LL);
    v13 = (System_String_o *)this->fields._data_k__BackingField;
    if ( !v13 )
      goto LABEL_21;
    v18 = BattleData__GetContinueDeadLine((BattleData_o *)v13, 0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( v18 < NetworkManager__getTime(0LL) && !this->fields.isShowDeadLineDialog )
    {
      this->fields.isShowDeadLineDialog = 1;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v20 = LocalizationManager__Get((System_String_o *)StringLiteral_2821/*"BATTLE_CONTINUE_ITEM_END_TIME"*/, 0LL);
      v21 = (ErrorDialog_ClickDelegate_o *)sub_1B64ABC(ErrorDialog_ClickDelegate_TypeInfo);
      ErrorDialog_ClickDelegate___ctor(
        v21,
        (Il2CppObject *)this,
        Method_BattleRetireWindowComponent_CallbackConfirmDialog__,
        0LL);
      if ( Instance )
      {
        *(_QWORD *)&effectDistance.fields.hasValue = 0LL;
        effectDistance.fields.value.fields.y = 0.0;
        CommonUI__OpenWarningDialog(
          (CommonUI_o *)Instance,
          (System_String_o *)StringLiteral_1/*""*/,
          v20,
          v21,
          0,
          0,
          -1.0,
          1,
          effectDistance,
          0LL);
        return;
      }
LABEL_21:
      sub_1B64ACC(v13, v14);
    }
  }
}


System_String_o *__fastcall BattleRetireWindowComponent__get_closeBtnPath(
        BattleRetireWindowComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A01465 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_17433/*"btn_cancel"*/, method);
    byte_4A01465 = 1;
  }
  return (System_String_o *)StringLiteral_17433/*"btn_cancel"*/;
}


BattleData_o *__fastcall BattleRetireWindowComponent__get_data(
        BattleRetireWindowComponent_o *this,
        const MethodInfo *method)
{
  return this->fields._data_k__BackingField;
}


void __fastcall BattleRetireWindowComponent__set_data(
        BattleRetireWindowComponent_o *this,
        BattleData_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._data_k__BackingField = value;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields._data_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}