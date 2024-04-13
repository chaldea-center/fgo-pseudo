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
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_42E573A & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, (_DWORD)method, v3);
    byte_42E573A = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseConfirmDialog(Instance, 0LL), (Instance = (CommonUI_o *)this->fields._data_k__BackingField) == 0LL) )
  {
    sub_B5D69C(Instance, v6);
  }
  BattleData__UpdateContinueItemInfo((BattleData_o *)Instance, 0LL);
  BattleRetireWindowComponent__Open(this, 0LL, v7);
  this->fields.isShowDeadLineDialog = 1;
}


void __fastcall BattleRetireWindowComponent__Open(
        BattleRetireWindowComponent_o *this,
        BattleWindowComponent_EndCall_o *call,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
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
  UnityEngine_GameObject_o *continueItemRoot; // x0
  struct BattleData_o *data_k__BackingField; // x8
  struct BattleEntity_o *battle_ent; // x8
  QuestEntity_o *v30; // x21
  UILabel_o *v31; // x21
  __int64 *v32; // x8
  struct BattleData_o *v33; // x8
  const MethodInfo *v34; // x1
  UILabel_o *continueCount; // x21
  UISprite_o *continueItemCountSpr; // x21
  int32_t ContinueItemImageId; // w22
  UILabel_o *checkGiveUpLabel; // x21
  int32_t ContinueItemNum; // [xsp+Ch] [xbp-34h] BYREF
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v44; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v46; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v47; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E573B & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)call, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v9, v10, v11);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_2551/*"BATTLE_RETIRE_CHECKSTR"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_2552/*"BATTLE_RETIRE_CONSUME_COST_CHECKSTR"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_973/*"0"*/, v24, v25, v26);
    byte_42E573B = 1;
  }
  ContinueItemNum = 0;
  continueItemRoot = this->fields.continueItemRoot;
  if ( !continueItemRoot )
    goto LABEL_66;
  UnityEngine_GameObject__SetActive(continueItemRoot, 0, 0LL);
  continueItemRoot = (UnityEngine_GameObject_o *)this->fields.continueCount;
  if ( !continueItemRoot )
    goto LABEL_66;
  UILabel__set_text((UILabel_o *)continueItemRoot, (System_String_o *)StringLiteral_973/*"0"*/, 0LL);
  continueItemRoot = (UnityEngine_GameObject_o *)this->fields.giveUpTitleSpr;
  if ( !continueItemRoot )
    goto LABEL_66;
  continueItemRoot = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)continueItemRoot,
                                                   0LL);
  if ( !continueItemRoot )
    goto LABEL_66;
  v40.fields.y = 77.0;
  v40.fields.x = 0.0;
  v40.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)continueItemRoot, v40, 0LL);
  continueItemRoot = this->fields.okBtn;
  if ( !continueItemRoot )
    goto LABEL_66;
  continueItemRoot = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(continueItemRoot, 0LL);
  if ( !continueItemRoot )
    goto LABEL_66;
  v41.fields.z = 0.0;
  v41.fields.x = 193.0;
  v41.fields.y = -72.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)continueItemRoot, v41, 0LL);
  continueItemRoot = this->fields.cancelBtn;
  if ( !continueItemRoot )
    goto LABEL_66;
  continueItemRoot = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(continueItemRoot, 0LL);
  if ( !continueItemRoot )
    goto LABEL_66;
  v42.fields.z = 0.0;
  v42.fields.y = -72.0;
  v42.fields.x = -193.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)continueItemRoot, v42, 0LL);
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
  v43.fields.y = 6.0;
  v43.fields.x = 0.0;
  v43.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)continueItemRoot, v43, 0LL);
  this->fields.EnableContinueItem = 0;
  continueItemRoot = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !continueItemRoot )
    goto LABEL_66;
  continueItemRoot = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   (DataManager_o *)continueItemRoot,
                                                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestMaster___);
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
                                                   (const MethodInfo_23FAE10 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( !this->fields._data_k__BackingField )
    goto LABEL_66;
  v30 = (QuestEntity_o *)continueItemRoot;
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
                    v44.fields.y = 97.0;
                    v44.fields.x = 0.0;
                    v44.fields.z = 0.0;
                    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)continueItemRoot, v44, 0LL);
                    continueItemRoot = this->fields.okBtn;
                    if ( continueItemRoot )
                    {
                      continueItemRoot = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                       continueItemRoot,
                                                                       0LL);
                      if ( continueItemRoot )
                      {
                        v45.fields.z = 0.0;
                        v45.fields.x = 193.0;
                        v45.fields.y = -92.0;
                        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)continueItemRoot, v45, 0LL);
                        continueItemRoot = this->fields.cancelBtn;
                        if ( continueItemRoot )
                        {
                          continueItemRoot = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                           continueItemRoot,
                                                                           0LL);
                          if ( continueItemRoot )
                          {
                            v46.fields.z = 0.0;
                            v46.fields.x = -193.0;
                            v46.fields.y = -92.0;
                            UnityEngine_Transform__set_localPosition(
                              (UnityEngine_Transform_o *)continueItemRoot,
                              v46,
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
                                  v47.fields.y = 26.0;
                                  v47.fields.x = 0.0;
                                  v47.fields.z = 0.0;
                                  UnityEngine_Transform__set_localPosition(
                                    (UnityEngine_Transform_o *)continueItemRoot,
                                    v47,
                                    0LL);
                                  this->fields.EnableContinueItem = 1;
                                  checkGiveUpLabel = this->fields.checkGiveUpLabel;
                                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                  }
                                  continueItemRoot = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                                   (System_String_o *)StringLiteral_2551/*"BATTLE_RETIRE_CHECKSTR"*/,
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
  if ( !v30 )
    goto LABEL_66;
  continueItemRoot = (UnityEngine_GameObject_o *)QuestEntity__HasFlag(v30, 0x40000000LL, 0LL);
  if ( ((unsigned __int8)continueItemRoot & 1) != 0 )
  {
    v31 = this->fields.checkGiveUpLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v32 = &StringLiteral_2552/*"BATTLE_RETIRE_CONSUME_COST_CHECKSTR"*/;
    goto LABEL_40;
  }
  v33 = this->fields._data_k__BackingField;
  if ( !v33 )
    goto LABEL_66;
  continueItemRoot = (UnityEngine_GameObject_o *)v33->fields.questphase_ent;
  if ( !continueItemRoot )
    goto LABEL_66;
  if ( !QuestPhaseEntity__IsInterruptionQuest((QuestPhaseEntity_o *)continueItemRoot, 0LL) )
  {
    v31 = this->fields.checkGiveUpLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v32 = &StringLiteral_2551/*"BATTLE_RETIRE_CHECKSTR"*/;
LABEL_40:
    continueItemRoot = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v32, 0LL);
    if ( v31 )
    {
      UILabel__set_text(v31, (System_String_o *)continueItemRoot, 0LL);
      goto LABEL_42;
    }
LABEL_66:
    sub_B5D69C(continueItemRoot, call);
  }
  BattleRetireWindowComponent__SetInterruptionQuestUI(this, v34);
LABEL_42:
  BattleWindowComponent__Open((BattleWindowComponent_o *)this, call, 0LL);
}


void __fastcall BattleRetireWindowComponent__SetInterruptionQuestUI(
        BattleRetireWindowComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  UIWidget_o *checkGiveUpLabel; // x0
  System_String_o *v27; // x20
  Il2CppObject *v28; // x0
  System_String_o *v29; // x0
  UILabel_o *v30; // x21
  UIRect_o *giveUpBg; // x20
  struct UISprite_o *v32; // x8
  struct UISprite_o *v33; // x8
  struct UISprite_o *v34; // x8
  struct UISprite_o *v35; // x8
  UIRect_o *Component_srcLineSprite; // x20
  UIRect_o *v37; // x20
  intptr_t m_CachedPtr; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42E573C & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&int_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonTemplate_BattleItemData__get_Instance__, v14, v15, v16);
    sub_B5D5C4(&SingletonTemplate_BattleItemData__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_16408/*"_{0}"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_2553/*"BATTLE_RETIRE_INTERRUPTION_BATTLE_ITEM_CHECK_STR"*/, v23, v24, v25);
    byte_42E573C = 1;
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
  checkGiveUpLabel = (UIWidget_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_BattleItemData__get_Instance__);
  if ( !checkGiveUpLabel )
    goto LABEL_52;
  v27 = (System_String_o *)StringLiteral_2553/*"BATTLE_RETIRE_INTERRUPTION_BATTLE_ITEM_CHECK_STR"*/;
  if ( checkGiveUpLabel->fields.m_CachedPtr >= 1 )
  {
    m_CachedPtr = checkGiveUpLabel->fields.m_CachedPtr;
    v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &m_CachedPtr);
    v29 = System_String__Format((System_String_o *)StringLiteral_16408/*"_{0}"*/, v28, 0LL);
    v27 = System_String__Concat_44577788(v27, v29, 0LL);
  }
  v30 = this->fields.checkGiveUpLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  checkGiveUpLabel = (UIWidget_o *)LocalizationManager__Get(v27, 0LL);
  if ( !v30 )
    goto LABEL_52;
  UILabel__set_text(v30, (System_String_o *)checkGiveUpLabel, 0LL);
  checkGiveUpLabel = (UIWidget_o *)this->fields.checkGiveUpLabel;
  if ( !checkGiveUpLabel )
    goto LABEL_52;
  giveUpBg = (UIRect_o *)this->fields.giveUpBg;
  checkGiveUpLabel = (UIWidget_o *)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)checkGiveUpLabel,
                                     0LL);
  if ( !giveUpBg )
    goto LABEL_52;
  UIRect__SetAnchor_39132280(giveUpBg, (UnityEngine_GameObject_o *)checkGiveUpLabel, 0LL);
  v32 = this->fields.giveUpBg;
  if ( !v32 )
    goto LABEL_52;
  checkGiveUpLabel = (UIWidget_o *)v32->fields.leftAnchor;
  if ( !checkGiveUpLabel )
    goto LABEL_52;
  UIRect_AnchorPoint__Set((UIRect_AnchorPoint_o *)checkGiveUpLabel, 0.0, -107.0, 0LL);
  v33 = this->fields.giveUpBg;
  if ( !v33 )
    goto LABEL_52;
  checkGiveUpLabel = (UIWidget_o *)v33->fields.rightAnchor;
  if ( !checkGiveUpLabel )
    goto LABEL_52;
  UIRect_AnchorPoint__Set((UIRect_AnchorPoint_o *)checkGiveUpLabel, 1.0, 107.0, 0LL);
  v34 = this->fields.giveUpBg;
  if ( !v34 )
    goto LABEL_52;
  checkGiveUpLabel = (UIWidget_o *)v34->fields.bottomAnchor;
  if ( !checkGiveUpLabel )
    goto LABEL_52;
  UIRect_AnchorPoint__Set((UIRect_AnchorPoint_o *)checkGiveUpLabel, 0.0, -102.0, 0LL);
  v35 = this->fields.giveUpBg;
  if ( !v35 )
    goto LABEL_52;
  checkGiveUpLabel = (UIWidget_o *)v35->fields.topAnchor;
  if ( !checkGiveUpLabel )
    goto LABEL_52;
  UIRect_AnchorPoint__Set((UIRect_AnchorPoint_o *)checkGiveUpLabel, 1.0, 90.0, 0LL);
  checkGiveUpLabel = (UIWidget_o *)this->fields.cancelBtn;
  if ( !checkGiveUpLabel )
    goto LABEL_52;
  Component_srcLineSprite = (UIRect_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                          (UnityEngine_GameObject_o *)checkGiveUpLabel,
                                          (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
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
    UIRect__SetAnchor_39132280(Component_srcLineSprite, (UnityEngine_GameObject_o *)checkGiveUpLabel, 0LL);
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
  v37 = (UIRect_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                      (UnityEngine_GameObject_o *)checkGiveUpLabel,
                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v37, 0LL, 0LL) )
  {
    checkGiveUpLabel = (UIWidget_o *)this->fields.giveUpBg;
    if ( checkGiveUpLabel )
    {
      checkGiveUpLabel = (UIWidget_o *)UnityEngine_Component__get_gameObject(
                                         (UnityEngine_Component_o *)checkGiveUpLabel,
                                         0LL);
      if ( v37 )
      {
        UIRect__SetAnchor_39132280(v37, (UnityEngine_GameObject_o *)checkGiveUpLabel, 0LL);
        checkGiveUpLabel = (UIWidget_o *)v37->fields.leftAnchor;
        if ( checkGiveUpLabel )
        {
          UIRect_AnchorPoint__Set((UIRect_AnchorPoint_o *)checkGiveUpLabel, 1.0, -383.0, 0LL);
          checkGiveUpLabel = (UIWidget_o *)v37->fields.rightAnchor;
          if ( checkGiveUpLabel )
          {
            UIRect_AnchorPoint__Set((UIRect_AnchorPoint_o *)checkGiveUpLabel, 1.0, -113.0, 0LL);
            checkGiveUpLabel = (UIWidget_o *)v37->fields.bottomAnchor;
            if ( checkGiveUpLabel )
            {
              UIRect_AnchorPoint__Set((UIRect_AnchorPoint_o *)checkGiveUpLabel, 0.0, 15.0, 0LL);
              checkGiveUpLabel = (UIWidget_o *)v37->fields.topAnchor;
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
    sub_B5D69C(checkGiveUpLabel, method);
  }
}


void __fastcall BattleRetireWindowComponent__Update(BattleRetireWindowComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  UnityEngine_Object_o *data_k__BackingField; // x20
  UILabel_o *continueItemDeadLineLabel; // x20
  System_String_o *v31; // x0
  __int64 v32; // x1
  System_String_o *v33; // x21
  int64_t ContinueDeadLine; // x0
  Il2CppObject *RestTime; // x0
  int64_t v36; // x20
  CommonUI_o *Instance; // x20
  System_String_o *v38; // x21
  ErrorDialog_ClickDelegate_o *v39; // x22
  System_Nullable_Vector2__o effectDistance; // [xsp+0h] [xbp-40h]

  if ( (byte_42E5739 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleRetireWindowComponent_CallbackConfirmDialog__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&ErrorDialog_ClickDelegate_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&NetworkManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_2438/*"BATTLE_CONTINUE_ITEM_GIVEUP"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_2437/*"BATTLE_CONTINUE_ITEM_END_TIME"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_1/*""*/, v26, v27, v28);
    byte_42E5739 = 1;
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
    v31 = LocalizationManager__Get((System_String_o *)StringLiteral_2438/*"BATTLE_CONTINUE_ITEM_GIVEUP"*/, 0LL);
    if ( !this->fields._data_k__BackingField )
      goto LABEL_25;
    v33 = v31;
    ContinueDeadLine = BattleData__GetContinueDeadLine(this->fields._data_k__BackingField, 0LL);
    RestTime = (Il2CppObject *)LocalizationManager__GetRestTime(ContinueDeadLine, 0LL);
    v31 = System_String__Format(v33, RestTime, 0LL);
    if ( !continueItemDeadLineLabel )
      goto LABEL_25;
    UILabel__set_text(continueItemDeadLineLabel, v31, 0LL);
    v31 = (System_String_o *)this->fields._data_k__BackingField;
    if ( !v31 )
      goto LABEL_25;
    v36 = BattleData__GetContinueDeadLine((BattleData_o *)v31, 0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    if ( v36 < NetworkManager__getTime(0LL) && !this->fields.isShowDeadLineDialog )
    {
      this->fields.isShowDeadLineDialog = 1;
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v38 = LocalizationManager__Get((System_String_o *)StringLiteral_2437/*"BATTLE_CONTINUE_ITEM_END_TIME"*/, 0LL);
      v39 = (ErrorDialog_ClickDelegate_o *)sub_B5D694(ErrorDialog_ClickDelegate_TypeInfo);
      ErrorDialog_ClickDelegate___ctor(
        v39,
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
          v38,
          v39,
          0,
          0,
          -1.0,
          1,
          effectDistance,
          0LL);
        return;
      }
LABEL_25:
      sub_B5D69C(v31, v32);
    }
  }
}


System_String_o *__fastcall BattleRetireWindowComponent__get_closeBtnPath(
        BattleRetireWindowComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E573D & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_17192/*"btn_cancel"*/, (_DWORD)method, v2, v3);
    byte_42E573D = 1;
  }
  return (System_String_o *)StringLiteral_17192/*"btn_cancel"*/;
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
  sub_B5D560(&this->fields._data_k__BackingField);
}