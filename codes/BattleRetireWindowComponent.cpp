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

  if ( (byte_4B1924F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, method);
    byte_4B1924F = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseConfirmDialog(Instance, 0LL), (Instance = (CommonUI_o *)this->fields._data_k__BackingField) == 0LL) )
  {
    sub_1BCAA3C(Instance, v5);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
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
  UnityEngine_GameObject_o *continueItemRoot; // x0
  struct BattleData_o *data_k__BackingField; // x8
  struct BattleEntity_o *battle_ent; // x8
  QuestEntity_o *v22; // x21
  UILabel_o *v23; // x21
  __int64 *v24; // x8
  struct BattleData_o *v25; // x8
  const MethodInfo *v26; // x1
  UILabel_o *continueCount; // x21
  UISprite_o *continueItemCountSpr; // x21
  __int64 v29; // x1
  int32_t ContinueItemImageId; // w22
  __int64 v31; // x1
  UILabel_o *checkGiveUpLabel; // x21
  int32_t ContinueItemNum; // [xsp+Ch] [xbp-24h] BYREF
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B19250 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, call, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v7, v8);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12);
    sub_1BCA7E0(&StringLiteral_2983/*"BATTLE_RETIRE_CHECKSTR"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_2984/*"BATTLE_RETIRE_CONSUME_COST_CHECKSTR"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_1209/*"0"*/, v17, v18);
    byte_4B19250 = 1;
  }
  ContinueItemNum = 0;
  continueItemRoot = this->fields.continueItemRoot;
  if ( !continueItemRoot )
    goto LABEL_62;
  UnityEngine_GameObject__SetActive(continueItemRoot, 0, 0LL);
  continueItemRoot = (UnityEngine_GameObject_o *)this->fields.continueCount;
  if ( !continueItemRoot )
    goto LABEL_62;
  UILabel__set_text((UILabel_o *)continueItemRoot, (System_String_o *)StringLiteral_1209/*"0"*/, 0LL);
  continueItemRoot = (UnityEngine_GameObject_o *)this->fields.giveUpTitleSpr;
  if ( !continueItemRoot )
    goto LABEL_62;
  continueItemRoot = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)continueItemRoot,
                                                   0LL);
  if ( !continueItemRoot )
    goto LABEL_62;
  v34.fields.x = 0.0;
  v34.fields.z = 0.0;
  v34.fields.y = 77.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)continueItemRoot, v34, 0LL);
  continueItemRoot = this->fields.okBtn;
  if ( !continueItemRoot )
    goto LABEL_62;
  continueItemRoot = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(continueItemRoot, 0LL);
  if ( !continueItemRoot )
    goto LABEL_62;
  v35.fields.z = 0.0;
  v35.fields.x = 193.0;
  v35.fields.y = -72.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)continueItemRoot, v35, 0LL);
  continueItemRoot = this->fields.cancelBtn;
  if ( !continueItemRoot )
    goto LABEL_62;
  continueItemRoot = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(continueItemRoot, 0LL);
  if ( !continueItemRoot )
    goto LABEL_62;
  v36.fields.z = 0.0;
  v36.fields.x = -193.0;
  v36.fields.y = -72.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)continueItemRoot, v36, 0LL);
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
  v37.fields.x = 0.0;
  v37.fields.y = 6.0;
  v37.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)continueItemRoot, v37, 0LL);
  this->fields.EnableContinueItem = 0;
  continueItemRoot = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !continueItemRoot )
    goto LABEL_62;
  continueItemRoot = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)continueItemRoot,
                                                   (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestMaster___);
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
                                                   (const MethodInfo_31B2E40 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( !this->fields._data_k__BackingField )
    goto LABEL_62;
  v22 = (QuestEntity_o *)continueItemRoot;
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
                  j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v29);
                AtlasManager__SetItem(continueItemCountSpr, ContinueItemImageId, 0LL);
                continueItemRoot = (UnityEngine_GameObject_o *)this->fields.giveUpTitleSpr;
                if ( continueItemRoot )
                {
                  continueItemRoot = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                                   (UnityEngine_Component_o *)continueItemRoot,
                                                                   0LL);
                  if ( continueItemRoot )
                  {
                    v38.fields.x = 0.0;
                    v38.fields.z = 0.0;
                    v38.fields.y = 97.0;
                    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)continueItemRoot, v38, 0LL);
                    continueItemRoot = this->fields.okBtn;
                    if ( continueItemRoot )
                    {
                      continueItemRoot = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                       continueItemRoot,
                                                                       0LL);
                      if ( continueItemRoot )
                      {
                        v39.fields.z = 0.0;
                        v39.fields.x = 193.0;
                        v39.fields.y = -92.0;
                        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)continueItemRoot, v39, 0LL);
                        continueItemRoot = this->fields.cancelBtn;
                        if ( continueItemRoot )
                        {
                          continueItemRoot = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                           continueItemRoot,
                                                                           0LL);
                          if ( continueItemRoot )
                          {
                            v40.fields.z = 0.0;
                            v40.fields.x = -193.0;
                            v40.fields.y = -92.0;
                            UnityEngine_Transform__set_localPosition(
                              (UnityEngine_Transform_o *)continueItemRoot,
                              v40,
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
                                  v41.fields.x = 0.0;
                                  v41.fields.y = 26.0;
                                  v41.fields.z = 0.0;
                                  UnityEngine_Transform__set_localPosition(
                                    (UnityEngine_Transform_o *)continueItemRoot,
                                    v41,
                                    0LL);
                                  this->fields.EnableContinueItem = 1;
                                  checkGiveUpLabel = this->fields.checkGiveUpLabel;
                                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v31);
                                  continueItemRoot = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                                   (System_String_o *)StringLiteral_2983/*"BATTLE_RETIRE_CHECKSTR"*/,
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
  if ( !v22 )
    goto LABEL_62;
  continueItemRoot = (UnityEngine_GameObject_o *)QuestEntity__HasFlag(v22, 0x40000000LL, 0LL);
  if ( ((unsigned __int8)continueItemRoot & 1) != 0 )
  {
    v23 = this->fields.checkGiveUpLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, call);
    v24 = &StringLiteral_2984/*"BATTLE_RETIRE_CONSUME_COST_CHECKSTR"*/;
    goto LABEL_38;
  }
  v25 = this->fields._data_k__BackingField;
  if ( !v25 )
    goto LABEL_62;
  continueItemRoot = (UnityEngine_GameObject_o *)v25->fields.questphase_ent;
  if ( !continueItemRoot )
    goto LABEL_62;
  if ( !QuestPhaseEntity__IsInterruptionQuest((QuestPhaseEntity_o *)continueItemRoot, 0LL) )
  {
    v23 = this->fields.checkGiveUpLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v26);
    v24 = &StringLiteral_2983/*"BATTLE_RETIRE_CHECKSTR"*/;
LABEL_38:
    continueItemRoot = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v24, 0LL);
    if ( v23 )
    {
      UILabel__set_text(v23, (System_String_o *)continueItemRoot, 0LL);
      goto LABEL_40;
    }
LABEL_62:
    sub_1BCAA3C(continueItemRoot, call);
  }
  BattleRetireWindowComponent__SetInterruptionQuestUI(this, v26);
LABEL_40:
  BattleWindowComponent__Open((BattleWindowComponent_o *)this, call, 0LL);
}


void __fastcall BattleRetireWindowComponent__SetInterruptionQuestUI(
        BattleRetireWindowComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  UIWidget_o *checkGiveUpLabel; // x0
  System_String_o *v17; // x20
  Il2CppObject *v18; // x0
  System_String_o *v19; // x0
  UILabel_o *v20; // x21
  UIRect_o *giveUpBg; // x20
  struct UISprite_o *v22; // x8
  struct UISprite_o *v23; // x8
  struct UISprite_o *v24; // x8
  struct UISprite_o *v25; // x8
  __int64 v26; // x1
  UIRect_o *Component_object; // x20
  __int64 v28; // x1
  UIRect_o *v29; // x20
  intptr_t m_CachedPtr; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B19251 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UISprite___, method, v2);
    sub_1BCA7E0(&int_TypeInfo, v4, v5);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SingletonTemplate_BattleItemData__get_Instance__, v10, v11);
    sub_1BCA7E0(&StringLiteral_16779/*"_{0}"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_2985/*"BATTLE_RETIRE_INTERRUPTION_BATTLE_ITEM_CHECK_STR"*/, v14, v15);
    byte_4B19251 = 1;
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
  checkGiveUpLabel = (UIWidget_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_BattleItemData__get_Instance__);
  if ( !checkGiveUpLabel )
    goto LABEL_46;
  v17 = (System_String_o *)StringLiteral_2985/*"BATTLE_RETIRE_INTERRUPTION_BATTLE_ITEM_CHECK_STR"*/;
  if ( checkGiveUpLabel->fields.m_CachedPtr >= 1 )
  {
    m_CachedPtr = checkGiveUpLabel->fields.m_CachedPtr;
    v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &m_CachedPtr);
    v19 = System_String__Format((System_String_o *)StringLiteral_16779/*"_{0}"*/, v18, 0LL);
    v17 = System_String__Concat_62401220(v17, v19, 0LL);
  }
  v20 = this->fields.checkGiveUpLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  checkGiveUpLabel = (UIWidget_o *)LocalizationManager__Get(v17, 0LL);
  if ( !v20 )
    goto LABEL_46;
  UILabel__set_text(v20, (System_String_o *)checkGiveUpLabel, 0LL);
  checkGiveUpLabel = (UIWidget_o *)this->fields.checkGiveUpLabel;
  if ( !checkGiveUpLabel )
    goto LABEL_46;
  giveUpBg = (UIRect_o *)this->fields.giveUpBg;
  checkGiveUpLabel = (UIWidget_o *)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)checkGiveUpLabel,
                                     0LL);
  if ( !giveUpBg )
    goto LABEL_46;
  UIRect__SetAnchor_47487268(giveUpBg, (UnityEngine_GameObject_o *)checkGiveUpLabel, 0LL);
  v22 = this->fields.giveUpBg;
  if ( !v22 )
    goto LABEL_46;
  checkGiveUpLabel = (UIWidget_o *)v22->fields.leftAnchor;
  if ( !checkGiveUpLabel )
    goto LABEL_46;
  UIRect_AnchorPoint__Set((UIRect_AnchorPoint_o *)checkGiveUpLabel, 0.0, -107.0, 0LL);
  v23 = this->fields.giveUpBg;
  if ( !v23 )
    goto LABEL_46;
  checkGiveUpLabel = (UIWidget_o *)v23->fields.rightAnchor;
  if ( !checkGiveUpLabel )
    goto LABEL_46;
  UIRect_AnchorPoint__Set((UIRect_AnchorPoint_o *)checkGiveUpLabel, 1.0, 107.0, 0LL);
  v24 = this->fields.giveUpBg;
  if ( !v24 )
    goto LABEL_46;
  checkGiveUpLabel = (UIWidget_o *)v24->fields.bottomAnchor;
  if ( !checkGiveUpLabel )
    goto LABEL_46;
  UIRect_AnchorPoint__Set((UIRect_AnchorPoint_o *)checkGiveUpLabel, 0.0, -102.0, 0LL);
  v25 = this->fields.giveUpBg;
  if ( !v25 )
    goto LABEL_46;
  checkGiveUpLabel = (UIWidget_o *)v25->fields.topAnchor;
  if ( !checkGiveUpLabel )
    goto LABEL_46;
  UIRect_AnchorPoint__Set((UIRect_AnchorPoint_o *)checkGiveUpLabel, 1.0, 90.0, 0LL);
  checkGiveUpLabel = (UIWidget_o *)this->fields.cancelBtn;
  if ( !checkGiveUpLabel )
    goto LABEL_46;
  Component_object = (UIRect_o *)UnityEngine_GameObject__GetComponent_object_(
                                   (UnityEngine_GameObject_o *)checkGiveUpLabel,
                                   (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
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
    UIRect__SetAnchor_47487268(Component_object, (UnityEngine_GameObject_o *)checkGiveUpLabel, 0LL);
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
  v29 = (UIRect_o *)UnityEngine_GameObject__GetComponent_object_(
                      (UnityEngine_GameObject_o *)checkGiveUpLabel,
                      (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v29, 0LL, 0LL) )
  {
    checkGiveUpLabel = (UIWidget_o *)this->fields.giveUpBg;
    if ( checkGiveUpLabel )
    {
      checkGiveUpLabel = (UIWidget_o *)UnityEngine_Component__get_gameObject(
                                         (UnityEngine_Component_o *)checkGiveUpLabel,
                                         0LL);
      if ( v29 )
      {
        UIRect__SetAnchor_47487268(v29, (UnityEngine_GameObject_o *)checkGiveUpLabel, 0LL);
        checkGiveUpLabel = (UIWidget_o *)v29->fields.leftAnchor;
        if ( checkGiveUpLabel )
        {
          UIRect_AnchorPoint__Set((UIRect_AnchorPoint_o *)checkGiveUpLabel, 1.0, -383.0, 0LL);
          checkGiveUpLabel = (UIWidget_o *)v29->fields.rightAnchor;
          if ( checkGiveUpLabel )
          {
            UIRect_AnchorPoint__Set((UIRect_AnchorPoint_o *)checkGiveUpLabel, 1.0, -113.0, 0LL);
            checkGiveUpLabel = (UIWidget_o *)v29->fields.bottomAnchor;
            if ( checkGiveUpLabel )
            {
              UIRect_AnchorPoint__Set((UIRect_AnchorPoint_o *)checkGiveUpLabel, 0.0, 15.0, 0LL);
              checkGiveUpLabel = (UIWidget_o *)v29->fields.topAnchor;
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
    sub_1BCAA3C(checkGiveUpLabel, method);
  }
}


void __fastcall BattleRetireWindowComponent__Update(BattleRetireWindowComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  UnityEngine_Object_o *data_k__BackingField; // x20
  __int64 v21; // x1
  UILabel_o *continueItemDeadLineLabel; // x20
  System_String_o *v23; // x0
  __int64 v24; // x1
  System_String_o *v25; // x21
  int64_t ContinueDeadLine; // x0
  Il2CppObject *RestTime; // x0
  __int64 v28; // x1
  int64_t v29; // x20
  __int64 v30; // x1
  Il2CppObject *Instance; // x20
  System_String_o *v32; // x21
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  ErrorDialog_ClickDelegate_o *v36; // x22
  System_Nullable_Vector2__o effectDistance; // [xsp+0h] [xbp-50h]

  if ( (byte_4B1924E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleRetireWindowComponent_CallbackConfirmDialog__, method, v2);
    sub_1BCA7E0(&ErrorDialog_ClickDelegate_TypeInfo, v4, v5);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12, v13);
    sub_1BCA7E0(&StringLiteral_2861/*"BATTLE_CONTINUE_ITEM_GIVEUP"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_2860/*"BATTLE_CONTINUE_ITEM_END_TIME"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v18, v19);
    byte_4B1924E = 1;
  }
  data_k__BackingField = (UnityEngine_Object_o *)this->fields._data_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(data_k__BackingField, 0LL, 0LL) && this->fields.EnableContinueItem )
  {
    continueItemDeadLineLabel = this->fields.continueItemDeadLineLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v21);
    v23 = LocalizationManager__Get((System_String_o *)StringLiteral_2861/*"BATTLE_CONTINUE_ITEM_GIVEUP"*/, 0LL);
    if ( !this->fields._data_k__BackingField )
      goto LABEL_21;
    v25 = v23;
    ContinueDeadLine = BattleData__GetContinueDeadLine(this->fields._data_k__BackingField, 0LL);
    RestTime = (Il2CppObject *)LocalizationManager__GetRestTime(ContinueDeadLine, 0LL);
    v23 = System_String__Format(v25, RestTime, 0LL);
    if ( !continueItemDeadLineLabel )
      goto LABEL_21;
    UILabel__set_text(continueItemDeadLineLabel, v23, 0LL);
    v23 = (System_String_o *)this->fields._data_k__BackingField;
    if ( !v23 )
      goto LABEL_21;
    v29 = BattleData__GetContinueDeadLine((BattleData_o *)v23, 0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v28);
    if ( v29 < NetworkManager__getTime(0LL) && !this->fields.isShowDeadLineDialog )
    {
      this->fields.isShowDeadLineDialog = 1;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v30);
      v32 = LocalizationManager__Get((System_String_o *)StringLiteral_2860/*"BATTLE_CONTINUE_ITEM_END_TIME"*/, 0LL);
      v36 = (ErrorDialog_ClickDelegate_o *)sub_1BCAA2C(ErrorDialog_ClickDelegate_TypeInfo, v33, v34, v35);
      ErrorDialog_ClickDelegate___ctor(
        v36,
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
          v32,
          v36,
          0,
          0,
          -1.0,
          1,
          effectDistance,
          0LL);
        return;
      }
LABEL_21:
      sub_1BCAA3C(v23, v24);
    }
  }
}


System_String_o *__fastcall BattleRetireWindowComponent__get_closeBtnPath(
        BattleRetireWindowComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B19252 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17674/*"btn_cancel"*/, method, v2);
    byte_4B19252 = 1;
  }
  return (System_String_o *)StringLiteral_17674/*"btn_cancel"*/;
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._data_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._data_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}