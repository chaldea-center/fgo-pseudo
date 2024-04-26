void __fastcall BattleRetireWindowComponent___ctor(BattleRetireWindowComponent_o *this, const MethodInfo *method)
{
  this->fields.messageLabelPosInInterruptionQuest.fields.z = 0.0;
  *(_QWORD *)&this->fields.messageLabelPosInInterruptionQuest.fields.x = 0x41E6666600000000LL;
  BattleWindowComponent___ctor((BattleWindowComponent_o *)this, 0LL);
}


void __fastcall BattleRetireWindowComponent__CallbackConfirmDialog(
        BattleRetireWindowComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_434EC2A & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_434EC2A = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseConfirmDialog(Instance, 0LL), (Instance = (CommonUI_o *)this->fields._data_k__BackingField) == 0LL) )
  {
    sub_B7076C(Instance, v5);
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
  UnityEngine_GameObject_o *continueItemRoot; // x0
  struct BattleData_o *data_k__BackingField; // x8
  struct BattleEntity_o *battle_ent; // x8
  QuestEntity_o *v8; // x21
  UILabel_o *v9; // x21
  __int64 *v10; // x8
  struct BattleData_o *v11; // x8
  const MethodInfo *v12; // x1
  UILabel_o *continueCount; // x21
  UISprite_o *continueItemCountSpr; // x21
  int32_t ContinueItemImageId; // w22
  UILabel_o *checkGiveUpLabel; // x21
  int32_t ContinueItemNum; // [xsp+Ch] [xbp-34h] BYREF
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_434EC2B & 1) == 0 )
  {
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_B70694(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&StringLiteral_2558/*"BATTLE_RETIRE_CHECKSTR"*/);
    sub_B70694(&StringLiteral_2559/*"BATTLE_RETIRE_CONSUME_COST_CHECKSTR"*/);
    sub_B70694(&StringLiteral_978/*"0"*/);
    byte_434EC2B = 1;
  }
  ContinueItemNum = 0;
  continueItemRoot = this->fields.continueItemRoot;
  if ( !continueItemRoot )
    goto LABEL_66;
  UnityEngine_GameObject__SetActive(continueItemRoot, 0, 0LL);
  continueItemRoot = (UnityEngine_GameObject_o *)this->fields.continueCount;
  if ( !continueItemRoot )
    goto LABEL_66;
  UILabel__set_text((UILabel_o *)continueItemRoot, (System_String_o *)StringLiteral_978/*"0"*/, 0LL);
  continueItemRoot = (UnityEngine_GameObject_o *)this->fields.giveUpTitleSpr;
  if ( !continueItemRoot )
    goto LABEL_66;
  continueItemRoot = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)continueItemRoot,
                                                   0LL);
  if ( !continueItemRoot )
    goto LABEL_66;
  v18.fields.y = 77.0;
  v18.fields.x = 0.0;
  v18.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)continueItemRoot, v18, 0LL);
  continueItemRoot = this->fields.okBtn;
  if ( !continueItemRoot )
    goto LABEL_66;
  continueItemRoot = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(continueItemRoot, 0LL);
  if ( !continueItemRoot )
    goto LABEL_66;
  v19.fields.z = 0.0;
  v19.fields.x = 193.0;
  v19.fields.y = -72.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)continueItemRoot, v19, 0LL);
  continueItemRoot = this->fields.cancelBtn;
  if ( !continueItemRoot )
    goto LABEL_66;
  continueItemRoot = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(continueItemRoot, 0LL);
  if ( !continueItemRoot )
    goto LABEL_66;
  v20.fields.z = 0.0;
  v20.fields.y = -72.0;
  v20.fields.x = -193.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)continueItemRoot, v20, 0LL);
  continueItemRoot = (UnityEngine_GameObject_o *)this->fields.giveUpBg;
  if ( !continueItemRoot )
    goto LABEL_66;
  UIWidget__set_height((UIWidget_o *)continueItemRoot, 239, 0LL);
  continueItemRoot = (UnityEngine_GameObject_o *)this->fields.continueItemDeadLineLabel;
  if ( !continueItemRoot )
    goto LABEL_66;
  continueItemRoot = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)continueItemRoot, 0LL);
  if ( !continueItemRoot )
    goto LABEL_66;
  UnityEngine_GameObject__SetActive(continueItemRoot, 0, 0LL);
  continueItemRoot = (UnityEngine_GameObject_o *)this->fields.checkGiveUpLabel;
  if ( !continueItemRoot )
    goto LABEL_66;
  continueItemRoot = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)continueItemRoot,
                                                   0LL);
  if ( !continueItemRoot )
    goto LABEL_66;
  v21.fields.y = 6.0;
  v21.fields.x = 0.0;
  v21.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)continueItemRoot, v21, 0LL);
  this->fields.EnableContinueItem = 0;
  continueItemRoot = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !continueItemRoot )
    goto LABEL_66;
  continueItemRoot = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   (DataManager_o *)continueItemRoot,
                                                   (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_QuestMaster___);
  data_k__BackingField = this->fields._data_k__BackingField;
  if ( !data_k__BackingField )
    goto LABEL_66;
  battle_ent = data_k__BackingField->fields.battle_ent;
  if ( !battle_ent )
    goto LABEL_66;
  if ( !continueItemRoot )
    goto LABEL_66;
  continueItemRoot = (UnityEngine_GameObject_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                   (DataMasterBase_WarMaster__WarEntity__int__o *)continueItemRoot,
                                                   battle_ent->fields.questId,
                                                   (const MethodInfo_21C0440 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( !this->fields._data_k__BackingField )
    goto LABEL_66;
  v8 = (QuestEntity_o *)continueItemRoot;
  continueItemRoot = (UnityEngine_GameObject_o *)BattleData__EnableContinueItem(this->fields._data_k__BackingField, 0LL);
  if ( ((unsigned __int8)continueItemRoot & 1) != 0 )
  {
    continueItemRoot = (UnityEngine_GameObject_o *)this->fields._data_k__BackingField;
    if ( !continueItemRoot )
      goto LABEL_66;
    continueItemRoot = (UnityEngine_GameObject_o *)BattleData__GetContinueItemNum((BattleData_o *)continueItemRoot, 0LL);
    if ( (int)continueItemRoot >= 1 )
    {
      continueItemRoot = (UnityEngine_GameObject_o *)this->fields._data_k__BackingField;
      if ( !continueItemRoot )
        goto LABEL_66;
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
                if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !AtlasManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                }
                AtlasManager__SetItem(continueItemCountSpr, ContinueItemImageId, 0LL);
                continueItemRoot = (UnityEngine_GameObject_o *)this->fields.giveUpTitleSpr;
                if ( continueItemRoot )
                {
                  continueItemRoot = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                                   (UnityEngine_Component_o *)continueItemRoot,
                                                                   0LL);
                  if ( continueItemRoot )
                  {
                    v22.fields.y = 97.0;
                    v22.fields.x = 0.0;
                    v22.fields.z = 0.0;
                    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)continueItemRoot, v22, 0LL);
                    continueItemRoot = this->fields.okBtn;
                    if ( continueItemRoot )
                    {
                      continueItemRoot = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                       continueItemRoot,
                                                                       0LL);
                      if ( continueItemRoot )
                      {
                        v23.fields.z = 0.0;
                        v23.fields.x = 193.0;
                        v23.fields.y = -92.0;
                        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)continueItemRoot, v23, 0LL);
                        continueItemRoot = this->fields.cancelBtn;
                        if ( continueItemRoot )
                        {
                          continueItemRoot = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                           continueItemRoot,
                                                                           0LL);
                          if ( continueItemRoot )
                          {
                            v24.fields.z = 0.0;
                            v24.fields.x = -193.0;
                            v24.fields.y = -92.0;
                            UnityEngine_Transform__set_localPosition(
                              (UnityEngine_Transform_o *)continueItemRoot,
                              v24,
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
                                  v25.fields.y = 26.0;
                                  v25.fields.x = 0.0;
                                  v25.fields.z = 0.0;
                                  UnityEngine_Transform__set_localPosition(
                                    (UnityEngine_Transform_o *)continueItemRoot,
                                    v25,
                                    0LL);
                                  this->fields.EnableContinueItem = 1;
                                  checkGiveUpLabel = this->fields.checkGiveUpLabel;
                                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                  }
                                  continueItemRoot = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                                   (System_String_o *)StringLiteral_2558/*"BATTLE_RETIRE_CHECKSTR"*/,
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
                                        goto LABEL_42;
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
        goto LABEL_66;
      }
    }
  }
  if ( !v8 )
    goto LABEL_66;
  continueItemRoot = (UnityEngine_GameObject_o *)QuestEntity__HasFlag(v8, 0x40000000LL, 0LL);
  if ( ((unsigned __int8)continueItemRoot & 1) != 0 )
  {
    v9 = this->fields.checkGiveUpLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v10 = &StringLiteral_2559/*"BATTLE_RETIRE_CONSUME_COST_CHECKSTR"*/;
    goto LABEL_40;
  }
  v11 = this->fields._data_k__BackingField;
  if ( !v11 )
    goto LABEL_66;
  continueItemRoot = (UnityEngine_GameObject_o *)v11->fields.questphase_ent;
  if ( !continueItemRoot )
    goto LABEL_66;
  if ( !QuestPhaseEntity__IsInterruptionQuest((QuestPhaseEntity_o *)continueItemRoot, 0LL) )
  {
    v9 = this->fields.checkGiveUpLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v10 = &StringLiteral_2558/*"BATTLE_RETIRE_CHECKSTR"*/;
LABEL_40:
    continueItemRoot = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v10, 0LL);
    if ( v9 )
    {
      UILabel__set_text(v9, (System_String_o *)continueItemRoot, 0LL);
      goto LABEL_42;
    }
LABEL_66:
    sub_B7076C(continueItemRoot, call);
  }
  BattleRetireWindowComponent__SetInterruptionQuestUI(this, v12);
LABEL_42:
  BattleWindowComponent__Open((BattleWindowComponent_o *)this, call, 0LL);
}


void __fastcall BattleRetireWindowComponent__SetInterruptionQuestUI(
        BattleRetireWindowComponent_o *this,
        const MethodInfo *method)
{
  UIWidget_o *checkGiveUpLabel; // x0
  __int64 v4; // x2
  System_String_o *v5; // x20
  Il2CppObject *v6; // x0
  System_String_o *v7; // x0
  UILabel_o *v8; // x21
  UIRect_o *giveUpBg; // x20
  struct UISprite_o *v10; // x8
  struct UISprite_o *v11; // x8
  struct UISprite_o *v12; // x8
  struct UISprite_o *v13; // x8
  UIRect_o *Component_srcLineSprite; // x20
  UIRect_o *v15; // x20
  intptr_t m_CachedPtr; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_434EC2C & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SingletonTemplate_BattleItemData__get_Instance__);
    sub_B70694(&SingletonTemplate_BattleItemData__TypeInfo);
    sub_B70694(&StringLiteral_16452/*"_{0}"*/);
    sub_B70694(&StringLiteral_2560/*"BATTLE_RETIRE_INTERRUPTION_BATTLE_ITEM_CHECK_STR"*/);
    byte_434EC2C = 1;
  }
  checkGiveUpLabel = (UIWidget_o *)this->fields.checkGiveUpLabel;
  if ( !checkGiveUpLabel )
    goto LABEL_52;
  UIWidget__set_pivot(checkGiveUpLabel, 1, 0LL);
  checkGiveUpLabel = (UIWidget_o *)this->fields.checkGiveUpLabel;
  if ( !checkGiveUpLabel )
    goto LABEL_52;
  UILabel__set_overflowMethod((UILabel_o *)checkGiveUpLabel, 2, 0LL);
  checkGiveUpLabel = (UIWidget_o *)this->fields.checkGiveUpLabel;
  if ( !checkGiveUpLabel )
    goto LABEL_52;
  checkGiveUpLabel = (UIWidget_o *)UnityEngine_Component__get_transform(
                                     (UnityEngine_Component_o *)checkGiveUpLabel,
                                     0LL);
  if ( !checkGiveUpLabel )
    goto LABEL_52;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)checkGiveUpLabel,
    this->fields.messageLabelPosInInterruptionQuest,
    0LL);
  if ( (BYTE3(SingletonTemplate_BattleItemData__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_BattleItemData__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_BattleItemData__TypeInfo);
  }
  checkGiveUpLabel = (UIWidget_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_BattleItemData__get_Instance__);
  if ( !checkGiveUpLabel )
    goto LABEL_52;
  v5 = (System_String_o *)StringLiteral_2560/*"BATTLE_RETIRE_INTERRUPTION_BATTLE_ITEM_CHECK_STR"*/;
  if ( checkGiveUpLabel->fields.m_CachedPtr >= 1 )
  {
    m_CachedPtr = checkGiveUpLabel->fields.m_CachedPtr;
    v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &m_CachedPtr, v4);
    v7 = System_String__Format((System_String_o *)StringLiteral_16452/*"_{0}"*/, v6, 0LL);
    v5 = System_String__Concat_44758168(v5, v7, 0LL);
  }
  v8 = this->fields.checkGiveUpLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  checkGiveUpLabel = (UIWidget_o *)LocalizationManager__Get(v5, 0LL);
  if ( !v8 )
    goto LABEL_52;
  UILabel__set_text(v8, (System_String_o *)checkGiveUpLabel, 0LL);
  checkGiveUpLabel = (UIWidget_o *)this->fields.checkGiveUpLabel;
  if ( !checkGiveUpLabel )
    goto LABEL_52;
  giveUpBg = (UIRect_o *)this->fields.giveUpBg;
  checkGiveUpLabel = (UIWidget_o *)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)checkGiveUpLabel,
                                     0LL);
  if ( !giveUpBg )
    goto LABEL_52;
  UIRect__SetAnchor_38833932(giveUpBg, (UnityEngine_GameObject_o *)checkGiveUpLabel, 0LL);
  v10 = this->fields.giveUpBg;
  if ( !v10 )
    goto LABEL_52;
  checkGiveUpLabel = (UIWidget_o *)v10->fields.leftAnchor;
  if ( !checkGiveUpLabel )
    goto LABEL_52;
  UIRect_AnchorPoint__Set((UIRect_AnchorPoint_o *)checkGiveUpLabel, 0.0, -107.0, 0LL);
  v11 = this->fields.giveUpBg;
  if ( !v11 )
    goto LABEL_52;
  checkGiveUpLabel = (UIWidget_o *)v11->fields.rightAnchor;
  if ( !checkGiveUpLabel )
    goto LABEL_52;
  UIRect_AnchorPoint__Set((UIRect_AnchorPoint_o *)checkGiveUpLabel, 1.0, 107.0, 0LL);
  v12 = this->fields.giveUpBg;
  if ( !v12 )
    goto LABEL_52;
  checkGiveUpLabel = (UIWidget_o *)v12->fields.bottomAnchor;
  if ( !checkGiveUpLabel )
    goto LABEL_52;
  UIRect_AnchorPoint__Set((UIRect_AnchorPoint_o *)checkGiveUpLabel, 0.0, -102.0, 0LL);
  v13 = this->fields.giveUpBg;
  if ( !v13 )
    goto LABEL_52;
  checkGiveUpLabel = (UIWidget_o *)v13->fields.topAnchor;
  if ( !checkGiveUpLabel )
    goto LABEL_52;
  UIRect_AnchorPoint__Set((UIRect_AnchorPoint_o *)checkGiveUpLabel, 1.0, 90.0, 0LL);
  checkGiveUpLabel = (UIWidget_o *)this->fields.cancelBtn;
  if ( !checkGiveUpLabel )
    goto LABEL_52;
  Component_srcLineSprite = (UIRect_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                          (UnityEngine_GameObject_o *)checkGiveUpLabel,
                                          (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
  {
    checkGiveUpLabel = (UIWidget_o *)this->fields.giveUpBg;
    if ( !checkGiveUpLabel )
      goto LABEL_52;
    checkGiveUpLabel = (UIWidget_o *)UnityEngine_Component__get_gameObject(
                                       (UnityEngine_Component_o *)checkGiveUpLabel,
                                       0LL);
    if ( !Component_srcLineSprite )
      goto LABEL_52;
    UIRect__SetAnchor_38833932(Component_srcLineSprite, (UnityEngine_GameObject_o *)checkGiveUpLabel, 0LL);
    checkGiveUpLabel = (UIWidget_o *)Component_srcLineSprite->fields.leftAnchor;
    if ( !checkGiveUpLabel )
      goto LABEL_52;
    UIRect_AnchorPoint__Set((UIRect_AnchorPoint_o *)checkGiveUpLabel, 0.0, 113.0, 0LL);
    checkGiveUpLabel = (UIWidget_o *)Component_srcLineSprite->fields.rightAnchor;
    if ( !checkGiveUpLabel )
      goto LABEL_52;
    UIRect_AnchorPoint__Set((UIRect_AnchorPoint_o *)checkGiveUpLabel, 0.0, 383.0, 0LL);
    checkGiveUpLabel = (UIWidget_o *)Component_srcLineSprite->fields.bottomAnchor;
    if ( !checkGiveUpLabel )
      goto LABEL_52;
    UIRect_AnchorPoint__Set((UIRect_AnchorPoint_o *)checkGiveUpLabel, 0.0, 15.0, 0LL);
    checkGiveUpLabel = (UIWidget_o *)Component_srcLineSprite->fields.topAnchor;
    if ( !checkGiveUpLabel )
      goto LABEL_52;
    UIRect_AnchorPoint__Set((UIRect_AnchorPoint_o *)checkGiveUpLabel, 0.0, 81.0, 0LL);
  }
  checkGiveUpLabel = (UIWidget_o *)this->fields.okBtn;
  if ( !checkGiveUpLabel )
    goto LABEL_52;
  v15 = (UIRect_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                      (UnityEngine_GameObject_o *)checkGiveUpLabel,
                      (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v15, 0LL, 0LL) )
  {
    checkGiveUpLabel = (UIWidget_o *)this->fields.giveUpBg;
    if ( checkGiveUpLabel )
    {
      checkGiveUpLabel = (UIWidget_o *)UnityEngine_Component__get_gameObject(
                                         (UnityEngine_Component_o *)checkGiveUpLabel,
                                         0LL);
      if ( v15 )
      {
        UIRect__SetAnchor_38833932(v15, (UnityEngine_GameObject_o *)checkGiveUpLabel, 0LL);
        checkGiveUpLabel = (UIWidget_o *)v15->fields.leftAnchor;
        if ( checkGiveUpLabel )
        {
          UIRect_AnchorPoint__Set((UIRect_AnchorPoint_o *)checkGiveUpLabel, 1.0, -383.0, 0LL);
          checkGiveUpLabel = (UIWidget_o *)v15->fields.rightAnchor;
          if ( checkGiveUpLabel )
          {
            UIRect_AnchorPoint__Set((UIRect_AnchorPoint_o *)checkGiveUpLabel, 1.0, -113.0, 0LL);
            checkGiveUpLabel = (UIWidget_o *)v15->fields.bottomAnchor;
            if ( checkGiveUpLabel )
            {
              UIRect_AnchorPoint__Set((UIRect_AnchorPoint_o *)checkGiveUpLabel, 0.0, 15.0, 0LL);
              checkGiveUpLabel = (UIWidget_o *)v15->fields.topAnchor;
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
LABEL_52:
    sub_B7076C(checkGiveUpLabel, method);
  }
}


void __fastcall BattleRetireWindowComponent__Update(BattleRetireWindowComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *data_k__BackingField; // x20
  UILabel_o *continueItemDeadLineLabel; // x20
  System_String_o *v5; // x0
  __int64 v6; // x1
  System_String_o *v7; // x21
  int64_t ContinueDeadLine; // x0
  Il2CppObject *RestTime; // x0
  int64_t v10; // x20
  CommonUI_o *Instance; // x20
  System_String_o *v12; // x21
  ErrorDialog_ClickDelegate_o *v13; // x22
  System_Nullable_Vector2__o effectDistance; // [xsp+0h] [xbp-40h]

  if ( (byte_434EC29 & 1) == 0 )
  {
    sub_B70694(&Method_BattleRetireWindowComponent_CallbackConfirmDialog__);
    sub_B70694(&ErrorDialog_ClickDelegate_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&StringLiteral_2445/*"BATTLE_CONTINUE_ITEM_GIVEUP"*/);
    sub_B70694(&StringLiteral_2444/*"BATTLE_CONTINUE_ITEM_END_TIME"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_434EC29 = 1;
  }
  data_k__BackingField = (UnityEngine_Object_o *)this->fields._data_k__BackingField;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(data_k__BackingField, 0LL, 0LL) && this->fields.EnableContinueItem )
  {
    continueItemDeadLineLabel = this->fields.continueItemDeadLineLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v5 = LocalizationManager__Get((System_String_o *)StringLiteral_2445/*"BATTLE_CONTINUE_ITEM_GIVEUP"*/, 0LL);
    if ( !this->fields._data_k__BackingField )
      goto LABEL_25;
    v7 = v5;
    ContinueDeadLine = BattleData__GetContinueDeadLine(this->fields._data_k__BackingField, 0LL);
    RestTime = (Il2CppObject *)LocalizationManager__GetRestTime(ContinueDeadLine, 0LL);
    v5 = System_String__Format(v7, RestTime, 0LL);
    if ( !continueItemDeadLineLabel )
      goto LABEL_25;
    UILabel__set_text(continueItemDeadLineLabel, v5, 0LL);
    v5 = (System_String_o *)this->fields._data_k__BackingField;
    if ( !v5 )
      goto LABEL_25;
    v10 = BattleData__GetContinueDeadLine((BattleData_o *)v5, 0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    if ( v10 < NetworkManager__getTime(0LL) && !this->fields.isShowDeadLineDialog )
    {
      this->fields.isShowDeadLineDialog = 1;
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v12 = LocalizationManager__Get((System_String_o *)StringLiteral_2444/*"BATTLE_CONTINUE_ITEM_END_TIME"*/, 0LL);
      v13 = (ErrorDialog_ClickDelegate_o *)sub_B70764(ErrorDialog_ClickDelegate_TypeInfo);
      ErrorDialog_ClickDelegate___ctor(
        v13,
        (Il2CppObject *)this,
        Method_BattleRetireWindowComponent_CallbackConfirmDialog__,
        0LL);
      if ( Instance )
      {
        effectDistance.fields.value = 0LL;
        *(_DWORD *)&effectDistance.fields.has_value = 0;
        CommonUI__OpenWarningDialog(
          Instance,
          (System_String_o *)StringLiteral_1/*""*/,
          v12,
          v13,
          0,
          0,
          -1.0,
          1,
          effectDistance,
          0LL);
        return;
      }
LABEL_25:
      sub_B7076C(v5, v6);
    }
  }
}


System_String_o *__fastcall BattleRetireWindowComponent__get_closeBtnPath(
        BattleRetireWindowComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_434EC2D & 1) == 0 )
  {
    sub_B70694(&StringLiteral_17239/*"btn_cancel"*/);
    byte_434EC2D = 1;
  }
  return (System_String_o *)StringLiteral_17239/*"btn_cancel"*/;
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
  this->fields._data_k__BackingField = value;
  sub_B70630(&this->fields._data_k__BackingField);
}