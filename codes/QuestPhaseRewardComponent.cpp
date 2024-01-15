void __fastcall QuestPhaseRewardComponent___ctor(QuestPhaseRewardComponent_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1

  if ( (byte_40FD547 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_21505/*"qev79"*/, method);
    byte_40FD547 = 1;
  }
  v9 = (System_Int32_array **)StringLiteral_21505/*"qev79"*/;
  this->fields.DISP_SE = (struct System_String_o *)StringLiteral_21505/*"qev79"*/;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.DISP_SE, v9, v2, v3, v4, v5, v6, v7);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall QuestPhaseRewardComponent__Awake(QuestPhaseRewardComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  CStateManager_QAASpotStateController_IMapSpot__o *v10; // x21
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct CStateManager_QuestPhaseRewardComponent__o *mFSM; // x21
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  QuestPhaseRewardComponent_StateNone_o *v22; // x22
  struct CStateManager_QuestPhaseRewardComponent__o *v23; // x20
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  QuestPhaseRewardComponent_StatePlay_o *v28; // x21
  const MethodInfo *v29; // x2

  if ( (byte_40FD53F & 1) == 0 )
  {
    sub_B16FFC(&Method_CStateManager_QuestPhaseRewardComponent___ctor__, method);
    sub_B16FFC(&Method_CStateManager_QuestPhaseRewardComponent__add__, v6);
    sub_B16FFC(&CStateManager_QuestPhaseRewardComponent__TypeInfo, v7);
    sub_B16FFC(&QuestPhaseRewardComponent_StateNone_TypeInfo, v8);
    sub_B16FFC(&QuestPhaseRewardComponent_StatePlay_TypeInfo, v9);
    byte_40FD53F = 1;
  }
  if ( !this->fields.mFSM )
  {
    v10 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B170CC(
                                                                CStateManager_QuestPhaseRewardComponent__TypeInfo,
                                                                method,
                                                                v2,
                                                                v3,
                                                                v4);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v10,
      (QAASpotStateController_IMapSpot_o *)this,
      2,
      (const MethodInfo_2907EF0 *)Method_CStateManager_QuestPhaseRewardComponent___ctor__);
    this->fields.mFSM = (struct CStateManager_QuestPhaseRewardComponent__o *)v10;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.mFSM,
      (System_Int32_array **)v10,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    mFSM = this->fields.mFSM;
    v22 = (QuestPhaseRewardComponent_StateNone_o *)sub_B170CC(
                                                     QuestPhaseRewardComponent_StateNone_TypeInfo,
                                                     v18,
                                                     v19,
                                                     v20,
                                                     v21);
    QuestPhaseRewardComponent_StateNone___ctor(v22, 0LL);
    if ( !mFSM
      || (CStateManager_QAASpotStateController_IMapSpot___add(
            (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
            0,
            (IState_T__o *)v22,
            (const MethodInfo_2907FBC *)Method_CStateManager_QuestPhaseRewardComponent__add__),
          v23 = this->fields.mFSM,
          v28 = (QuestPhaseRewardComponent_StatePlay_o *)sub_B170CC(
                                                           QuestPhaseRewardComponent_StatePlay_TypeInfo,
                                                           v24,
                                                           v25,
                                                           v26,
                                                           v27),
          QuestPhaseRewardComponent_StatePlay___ctor(v28, 0LL),
          !v23) )
    {
      sub_B170D4();
    }
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)v23,
      1,
      (IState_T__o *)v28,
      (const MethodInfo_2907FBC *)Method_CStateManager_QuestPhaseRewardComponent__add__);
    QuestPhaseRewardComponent__SetState(this, 0, v29);
  }
}


int32_t __fastcall QuestPhaseRewardComponent__GetState(QuestPhaseRewardComponent_o *this, const MethodInfo *method)
{
  struct CStateManager_QuestPhaseRewardComponent__o *mFSM; // x8

  if ( (byte_40FD545 & 1) == 0 )
  {
    sub_B16FFC(&Method_CStateManager_QuestPhaseRewardComponent__getState__, method);
    byte_40FD545 = 1;
  }
  mFSM = this->fields.mFSM;
  if ( !mFSM )
    sub_B170D4();
  return mFSM->fields.m_state;
}


void __fastcall QuestPhaseRewardComponent__Init(QuestPhaseRewardComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct UnityEngine_Animation_o *Component_WebViewObject; // x0
  UnityEngine_Animation_o **p_mAnimation; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  UnityEngine_Component_o *transform; // x0
  struct SimpleAnimation_o *ComponentInChildren_UIWidget; // x0
  struct SimpleAnimation_o **p_mSimpleAnimation; // x21
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  UnityEngine_Object_o *mSimpleAnimation; // x22
  SimpleAnimation_o *v28; // x20
  UnityEngine_Object_o *monitor; // x0
  System_String_o *name; // x0
  SimpleAnimation_State_o *Item; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v33; // x20
  unsigned __int64 v34; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  UnityEngine_Animation_o *v37; // x21
  UnityEngine_Animation_o *v38; // x21
  UnityEngine_Object_o *clip; // x0
  System_String_o *v40; // x0
  UnityEngine_AnimationState_o *v41; // x0
  UnityEngine_Animation_o *v42; // x20
  UnityEngine_Object_o *v43; // x0
  System_String_o *v44; // x0
  UnityEngine_AnimationState_o *v45; // x0
  SimpleAnimation_o *v46; // x20
  UnityEngine_Object_o *v47; // x0
  System_String_o *v48; // x0
  SimpleAnimation_State_o *v49; // x0
  SimpleAnimation_State_c *v50; // x8
  SimpleAnimation_State_o *v51; // x20
  unsigned __int64 v52; // x10
  SimpleAnimation_State_c **v53; // x11
  __int64 v54; // x0
  ConstantStrMaster_o *Master_WarQuestSelectionMaster; // x0
  struct System_String_o *Value; // x0
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  UISprite_o *bgSprite; // x0
  UnityEngine_Object_o *v64; // x0
  UnityEngine_Component_o *countLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40FD541 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___, method);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_Animation___, v3);
    sub_B16FFC(&Method_DataManager_GetMaster_ConstantStrMaster___, v4);
    sub_B16FFC(&DataManager_TypeInfo, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    sub_B16FFC(&SimpleAnimation_State_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_21459/*"progress_reward_board"*/, v8);
    sub_B16FFC(&StringLiteral_10927/*"QUEST_PHASE_REWARD_OVERWRITE_SPRITE"*/, v9);
    byte_40FD541 = 1;
  }
  Component_WebViewObject = (struct UnityEngine_Animation_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                (UnityEngine_Component_o *)this,
                                                                (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Animation___);
  p_mAnimation = &this->fields.mAnimation;
  this->fields.mAnimation = Component_WebViewObject;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.mAnimation,
    (System_Int32_array **)Component_WebViewObject,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_47;
  ComponentInChildren_UIWidget = (struct SimpleAnimation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                               transform,
                                                               (const MethodInfo_18BD4D4 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  this->fields.mSimpleAnimation = ComponentInChildren_UIWidget;
  p_mSimpleAnimation = &this->fields.mSimpleAnimation;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.mSimpleAnimation,
    (System_Int32_array **)ComponentInChildren_UIWidget,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  mSimpleAnimation = (UnityEngine_Object_o *)this->fields.mSimpleAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(mSimpleAnimation, 0LL, 0LL) )
  {
    v28 = *p_mSimpleAnimation;
    if ( *p_mSimpleAnimation )
    {
      monitor = (UnityEngine_Object_o *)v28[1].monitor;
      if ( monitor )
      {
        name = UnityEngine_Object__get_name(monitor, 0LL);
        Item = SimpleAnimation__get_Item(v28, name, 0LL);
        if ( Item )
        {
          klass = Item->klass;
          v33 = Item;
          if ( *(_WORD *)&Item->klass->_2.bitflags1 )
          {
            v34 = 0LL;
            p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
            while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
            {
              ++v34;
              p_offset += 2;
              if ( v34 >= *(unsigned __int16 *)&Item->klass->_2.bitflags1 )
                goto LABEL_15;
            }
            p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 8].method;
          }
          else
          {
LABEL_15:
            p_method = sub_AAFEF8(Item, SimpleAnimation_State_TypeInfo, 8LL);
          }
          (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD, float))p_method)(
            v33,
            *(_QWORD *)(p_method + 8),
            0.0);
          v46 = *p_mSimpleAnimation;
          if ( *p_mSimpleAnimation )
          {
            v47 = (UnityEngine_Object_o *)v46[1].monitor;
            if ( v47 )
            {
              v48 = UnityEngine_Object__get_name(v47, 0LL);
              v49 = SimpleAnimation__get_Item(v46, v48, 0LL);
              if ( v49 )
              {
                v50 = v49->klass;
                v51 = v49;
                if ( *(_WORD *)&v49->klass->_2.bitflags1 )
                {
                  v52 = 0LL;
                  v53 = (SimpleAnimation_State_c **)&v50->_1.interfaceOffsets->offset;
                  while ( *(v53 - 1) != SimpleAnimation_State_TypeInfo )
                  {
                    ++v52;
                    v53 += 2;
                    if ( v52 >= *(unsigned __int16 *)&v49->klass->_2.bitflags1 )
                      goto LABEL_35;
                  }
                  v54 = (__int64)&v50->vtable[*(_DWORD *)v53 + 6].method;
                }
                else
                {
LABEL_35:
                  v54 = sub_AAFEF8(v49, SimpleAnimation_State_TypeInfo, 6LL);
                }
                (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD, float))v54)(v51, *(_QWORD *)(v54 + 8), 0.0);
                goto LABEL_38;
              }
            }
          }
        }
      }
    }
LABEL_47:
    sub_B170D4();
  }
  v37 = *p_mAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v37, 0LL, 0LL) )
  {
    v38 = *p_mAnimation;
    if ( !*p_mAnimation )
      goto LABEL_47;
    clip = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(*p_mAnimation, 0LL);
    if ( !clip )
      goto LABEL_47;
    v40 = UnityEngine_Object__get_name(clip, 0LL);
    v41 = UnityEngine_Animation__get_Item(v38, v40, 0LL);
    if ( !v41 )
      goto LABEL_47;
    UnityEngine_AnimationState__set_speed(v41, 0.0, 0LL);
    v42 = *p_mAnimation;
    if ( !v42 )
      goto LABEL_47;
    v43 = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(v42, 0LL);
    if ( !v43 )
      goto LABEL_47;
    v44 = UnityEngine_Object__get_name(v43, 0LL);
    v45 = UnityEngine_Animation__get_Item(v42, v44, 0LL);
    if ( !v45 )
      goto LABEL_47;
    UnityEngine_AnimationState__set_normalizedTime(v45, 0.0, 0LL);
  }
LABEL_38:
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ConstantStrMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ConstantStrMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_47;
  Value = ConstantStrMaster__GetValue(Master_WarQuestSelectionMaster, (System_String_o *)StringLiteral_10927/*"QUEST_PHASE_REWARD_OVERWRITE_SPRITE"*/, 0LL);
  this->fields.overwriteSpriteName = Value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.overwriteSpriteName,
    (System_Int32_array **)Value,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62);
  bgSprite = this->fields.bgSprite;
  if ( !bgSprite )
    goto LABEL_47;
  UISprite__set_atlas(bgSprite, this->fields.systemUIAtlas, 0LL);
  v64 = (UnityEngine_Object_o *)this->fields.bgSprite;
  if ( !v64 )
    goto LABEL_47;
  UnityEngine_Object__set_name(v64, (System_String_o *)StringLiteral_21459/*"progress_reward_board"*/, 0LL);
  countLabel = (UnityEngine_Component_o *)this->fields.countLabel;
  if ( !countLabel )
    goto LABEL_47;
  gameObject = UnityEngine_Component__get_gameObject(countLabel, 0LL);
  if ( !gameObject )
    goto LABEL_47;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall QuestPhaseRewardComponent__Open(
        QuestPhaseRewardComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  TerminalPramsManager_c *v10; // x0
  WarBoardControlPlayTalkUiComponent_array *ComponentsInChildren_WarBoardControlPlayTalkUiComponent; // x21
  TerminalPramsManager_c *IsNullOrEmpty; // x0
  __int64 objectId; // x1
  const MethodInfo *v14; // x2
  TerminalPramsManager_c *v15; // x0
  int32_t PhaseCnt_k__BackingField; // w25
  __int64 v17; // x1
  const MethodInfo *v18; // x4
  QuestPhaseMaster_o *Master_WarQuestSelectionMaster; // x22
  TerminalPramsManager_c *v20; // x0
  int32_t giftId; // w22
  GiftDetailMaster_o *v22; // x0
  System_String_o *OverwriteImageIdByQuestPhaseReward; // x22
  ItemIconComponent_o *v24; // x0
  System_String_o *overwriteSpriteName; // x1
  struct QuestRewardInfo_array *mQuestPhaseRewardInfos; // x8
  int max_length; // w9
  int i; // w10
  QuestRewardInfo_o *v29; // x11
  ItemIconComponent_o *v30; // x0
  System_Collections_IEnumerator_o *v31; // x0
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_40FD542 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentsInChildren_ItemIconComponent___, callback);
    sub_B16FFC(&Method_DataManager_GetMaster_GiftDetailMaster___, v5);
    sub_B16FFC(&Method_DataManager_GetMaster_QuestPhaseMaster___, v6);
    sub_B16FFC(&DataManager_TypeInfo, v7);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_1/*""*/, v9);
    byte_40FD542 = 1;
  }
  entity = 0LL;
  v10 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v10 = TerminalPramsManager_TypeInfo;
  }
  if ( !v10->static_fields->mQuestPhaseRewardInfos )
  {
    ActionExtensions__Call(callback, 0LL);
    return;
  }
  ComponentsInChildren_WarBoardControlPlayTalkUiComponent = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                                              (UnityEngine_Component_o *)this,
                                                              1,
                                                              (const MethodInfo_18BD854 *)Method_UnityEngine_Component_GetComponentsInChildren_ItemIconComponent___);
  IsNullOrEmpty = (TerminalPramsManager_c *)System_String__IsNullOrEmpty(this->fields.overwriteSpriteName, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_40F6058 )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, objectId);
      byte_40F6058 = 1;
    }
    v15 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v15 = TerminalPramsManager_TypeInfo;
    }
    PhaseCnt_k__BackingField = v15->static_fields->_PhaseCnt_k__BackingField;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (QuestPhaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !byte_40F6057 )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v17);
      byte_40F6057 = 1;
    }
    v20 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v20 = TerminalPramsManager_TypeInfo;
    }
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_59;
    if ( !QuestPhaseMaster__TryGetEntity(
            Master_WarQuestSelectionMaster,
            &entity,
            v20->static_fields->_QuestId_k__BackingField,
            PhaseCnt_k__BackingField + 1,
            v18) )
      goto LABEL_43;
    if ( !entity )
      goto LABEL_59;
    giftId = entity->fields.giftId;
    if ( !giftId )
      goto LABEL_43;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v22 = (GiftDetailMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_GiftDetailMaster___);
    if ( !v22 )
      goto LABEL_59;
    OverwriteImageIdByQuestPhaseReward = GiftDetailMaster__GetOverwriteImageIdByQuestPhaseReward(v22, giftId, 0LL);
    IsNullOrEmpty = (TerminalPramsManager_c *)System_String__op_Inequality(
                                                OverwriteImageIdByQuestPhaseReward,
                                                (System_String_o *)StringLiteral_1/*""*/,
                                                0LL);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    {
      if ( !ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
        goto LABEL_59;
      if ( ComponentsInChildren_WarBoardControlPlayTalkUiComponent->max_length )
      {
        v24 = (ItemIconComponent_o *)ComponentsInChildren_WarBoardControlPlayTalkUiComponent->m_Items[0];
        if ( v24 )
        {
          overwriteSpriteName = OverwriteImageIdByQuestPhaseReward;
LABEL_42:
          ItemIconComponent__SetItemImageByName(v24, overwriteSpriteName, 0LL);
          goto LABEL_58;
        }
        goto LABEL_59;
      }
    }
    else
    {
LABEL_43:
      IsNullOrEmpty = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        IsNullOrEmpty = TerminalPramsManager_TypeInfo;
      }
      mQuestPhaseRewardInfos = IsNullOrEmpty->static_fields->mQuestPhaseRewardInfos;
      if ( !mQuestPhaseRewardInfos )
        goto LABEL_59;
      max_length = mQuestPhaseRewardInfos->max_length;
      if ( max_length < 1 )
      {
        objectId = 0LL;
        if ( !ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
          goto LABEL_58;
      }
      else
      {
        for ( i = 0; i < max_length; ++i )
        {
          if ( i >= (unsigned int)max_length )
            goto LABEL_60;
          v29 = mQuestPhaseRewardInfos->m_Items[i];
          if ( !v29 )
            goto LABEL_59;
        }
        objectId = (unsigned int)v29->fields.objectId;
        if ( !ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
          goto LABEL_58;
      }
      if ( ComponentsInChildren_WarBoardControlPlayTalkUiComponent->max_length )
      {
        v30 = (ItemIconComponent_o *)ComponentsInChildren_WarBoardControlPlayTalkUiComponent->m_Items[0];
        if ( v30 )
        {
          ItemIconComponent__SetItemImage(v30, objectId, 0LL);
          goto LABEL_58;
        }
        goto LABEL_59;
      }
    }
    goto LABEL_60;
  }
  if ( ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
  {
    if ( ComponentsInChildren_WarBoardControlPlayTalkUiComponent->max_length )
    {
      v24 = (ItemIconComponent_o *)ComponentsInChildren_WarBoardControlPlayTalkUiComponent->m_Items[0];
      if ( v24 )
      {
        overwriteSpriteName = this->fields.overwriteSpriteName;
        goto LABEL_42;
      }
LABEL_59:
      sub_B170D4();
    }
LABEL_60:
    sub_B17100(IsNullOrEmpty, objectId, v14);
    sub_B170A0();
  }
LABEL_58:
  v31 = QuestPhaseRewardComponent__Play(this, callback, v14);
  UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, v31, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestPhaseRewardComponent__OpenByItemIdAndNum(
        QuestPhaseRewardComponent_o *this,
        int32_t itemId,
        int32_t itemNum,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  UISprite_o *bgSprite; // x22
  Il2CppObject *v14; // x0
  System_String_o *v15; // x23
  UILabel_o *countLabel; // x22
  System_String_o *v17; // x23
  Il2CppObject *v18; // x0
  System_String_o *v19; // x0
  UnityEngine_Component_o *v20; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v22; // x2
  System_Collections_IEnumerator_o *v23; // x0
  int32_t v24; // [xsp+8h] [xbp-38h] BYREF
  int32_t v25; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_40FD543 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, *(_QWORD *)&itemId);
    sub_B16FFC(&int_TypeInfo, v9);
    sub_B16FFC(&LocalizationManager_TypeInfo, v10);
    sub_B16FFC(&StringLiteral_21460/*"progress_reward_board_{0}"*/, v11);
    sub_B16FFC(&StringLiteral_8823/*"MULTIPLE_INFO"*/, v12);
    byte_40FD543 = 1;
  }
  bgSprite = this->fields.bgSprite;
  v25 = itemId;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25);
  v15 = System_String__Format((System_String_o *)StringLiteral_21460/*"progress_reward_board_{0}"*/, v14, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventSprite(bgSprite, v15, 0LL);
  countLabel = this->fields.countLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_8823/*"MULTIPLE_INFO"*/, 0LL);
  v24 = itemNum;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24);
  v19 = System_String__Format(v17, v18, 0LL);
  if ( !countLabel
    || (UILabel__set_text(countLabel, v19, 0LL), (v20 = (UnityEngine_Component_o *)this->fields.countLabel) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject(v20, 0LL)) == 0LL )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  v23 = QuestPhaseRewardComponent__Play(this, endAction, v22);
  UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, v23, 0LL);
}


System_Collections_IEnumerator_o *__fastcall QuestPhaseRewardComponent__Play(
        QuestPhaseRewardComponent_o *this,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x21
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_40FD544 & 1) == 0 )
  {
    sub_B16FFC(&QuestPhaseRewardComponent__Play_d__21_TypeInfo, end_act);
    byte_40FD544 = 1;
  }
  v7 = sub_B170CC(QuestPhaseRewardComponent__Play_d__21_TypeInfo, end_act, method, v3, v4);
  QuestPhaseRewardComponent__Play_d__21___ctor((QuestPhaseRewardComponent__Play_d__21_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_B170D4();
  *(_QWORD *)(v7 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v7 + 40) = end_act;
  sub_B16F98((BattleServantConfConponent_o *)(v7 + 40), (System_Int32_array **)end_act, v14, v15, v16, v17, v18, v19);
  return (System_Collections_IEnumerator_o *)v7;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestPhaseRewardComponent__SetState(
        QuestPhaseRewardComponent_o *this,
        int32_t state,
        const MethodInfo *method)
{
  struct CStateManager_QuestPhaseRewardComponent__o *mFSM; // x0

  if ( (byte_40FD546 & 1) == 0 )
  {
    sub_B16FFC(&Method_CStateManager_QuestPhaseRewardComponent__setState__, *(_QWORD *)&state);
    byte_40FD546 = 1;
  }
  mFSM = this->fields.mFSM;
  if ( !mFSM )
    sub_B170D4();
  CStateManager_QAASpotStateController_IMapSpot___setState(
    (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
    state,
    (const MethodInfo_2908060 *)Method_CStateManager_QuestPhaseRewardComponent__setState__);
}


void __fastcall QuestPhaseRewardComponent__Update(QuestPhaseRewardComponent_o *this, const MethodInfo *method)
{
  struct CStateManager_QuestPhaseRewardComponent__o *mFSM; // x0

  if ( (byte_40FD540 & 1) == 0 )
  {
    sub_B16FFC(&Method_CStateManager_QuestPhaseRewardComponent__update__, method);
    byte_40FD540 = 1;
  }
  mFSM = this->fields.mFSM;
  if ( mFSM )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      (const MethodInfo_2908038 *)Method_CStateManager_QuestPhaseRewardComponent__update__);
}


bool __fastcall QuestPhaseRewardComponent___Play_b__21_0(QuestPhaseRewardComponent_o *this, const MethodInfo *method)
{
  System_String_o *DISP_SE; // x19

  if ( (byte_40FD548 & 1) == 0 )
  {
    sub_B16FFC(&SeManager_TypeInfo, method);
    byte_40FD548 = 1;
  }
  DISP_SE = this->fields.DISP_SE;
  if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  return SeManager__IsBusySe(DISP_SE, 0LL);
}


UISprite_o *__fastcall QuestPhaseRewardComponent__get_ItemIcon(
        QuestPhaseRewardComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.itemIcon;
}


void __fastcall QuestPhaseRewardComponent_StateNone___ctor(
        QuestPhaseRewardComponent_StateNone_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestPhaseRewardComponent_StateNone__begin(
        QuestPhaseRewardComponent_StateNone_o *this,
        QuestPhaseRewardComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestPhaseRewardComponent_StateNone__end(
        QuestPhaseRewardComponent_StateNone_o *this,
        QuestPhaseRewardComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestPhaseRewardComponent_StateNone__update(
        QuestPhaseRewardComponent_StateNone_o *this,
        QuestPhaseRewardComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestPhaseRewardComponent_StatePlay___ctor(
        QuestPhaseRewardComponent_StatePlay_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestPhaseRewardComponent_StatePlay__begin(
        QuestPhaseRewardComponent_StatePlay_o *this,
        QuestPhaseRewardComponent_o *that,
        const MethodInfo *method)
{
  __int64 v4; // x1
  UnityEngine_Object_o *mSimpleAnimation; // x20
  struct SimpleAnimation_o *v6; // x20
  UnityEngine_Object_o *monitor; // x0
  System_String_o *v8; // x0
  struct SimpleAnimation_o *v9; // x20
  UnityEngine_Object_o *v10; // x0
  System_String_o *v11; // x0
  struct SimpleAnimation_o *v12; // x20
  UnityEngine_Object_o *v13; // x0
  System_String_o *v14; // x0
  SimpleAnimation_State_o *v15; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v17; // x20
  unsigned __int64 v18; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  UnityEngine_Object_o *mAnimation; // x20
  UnityEngine_Animation_o *v22; // x20
  UnityEngine_Object_o *clip; // x0
  System_String_o *name; // x0
  UnityEngine_Animation_o *v25; // x20
  UnityEngine_Object_o *v26; // x0
  System_String_o *v27; // x0
  UnityEngine_Animation_o *v28; // x20
  UnityEngine_Object_o *v29; // x0
  System_String_o *v30; // x0
  UnityEngine_AnimationState_o *Item; // x0
  UnityEngine_Animation_o *v32; // x19
  UnityEngine_Object_o *v33; // x0
  System_String_o *v34; // x0
  UnityEngine_AnimationState_o *v35; // x0
  struct SimpleAnimation_o *v36; // x19
  UnityEngine_Object_o *v37; // x0
  System_String_o *v38; // x0
  SimpleAnimation_State_o *v39; // x0
  SimpleAnimation_State_c *v40; // x8
  SimpleAnimation_State_o *v41; // x19
  unsigned __int64 v42; // x10
  SimpleAnimation_State_c **v43; // x11
  __int64 v44; // x0

  if ( (byte_40FA311 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, that);
    sub_B16FFC(&SimpleAnimation_State_TypeInfo, v4);
    byte_40FA311 = 1;
  }
  if ( !that )
    goto LABEL_51;
  mSimpleAnimation = (UnityEngine_Object_o *)that->fields.mSimpleAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(mSimpleAnimation, 0LL, 0LL) )
  {
    mAnimation = (UnityEngine_Object_o *)that->fields.mAnimation;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(mAnimation, 0LL, 0LL) )
      return;
    v22 = that->fields.mAnimation;
    if ( v22 )
    {
      clip = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0LL);
      if ( clip )
      {
        name = UnityEngine_Object__get_name(clip, 0LL);
        if ( !UnityEngine_Animation__IsPlaying(v22, name, 0LL) )
        {
          v25 = that->fields.mAnimation;
          if ( !v25 )
            goto LABEL_51;
          v26 = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0LL);
          if ( !v26 )
            goto LABEL_51;
          v27 = UnityEngine_Object__get_name(v26, 0LL);
          UnityEngine_Animation__Play_49744236(v25, v27, 0LL);
        }
        v28 = that->fields.mAnimation;
        if ( v28 )
        {
          v29 = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0LL);
          if ( v29 )
          {
            v30 = UnityEngine_Object__get_name(v29, 0LL);
            Item = UnityEngine_Animation__get_Item(v28, v30, 0LL);
            if ( Item )
            {
              UnityEngine_AnimationState__set_normalizedTime(Item, 0.0, 0LL);
              v32 = that->fields.mAnimation;
              if ( v32 )
              {
                v33 = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(v32, 0LL);
                if ( v33 )
                {
                  v34 = UnityEngine_Object__get_name(v33, 0LL);
                  v35 = UnityEngine_Animation__get_Item(v32, v34, 0LL);
                  if ( v35 )
                  {
                    UnityEngine_AnimationState__set_speed(v35, 1.0, 0LL);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_51:
    sub_B170D4();
  }
  v6 = that->fields.mSimpleAnimation;
  if ( !v6 )
    goto LABEL_51;
  monitor = (UnityEngine_Object_o *)v6[1].monitor;
  if ( !monitor )
    goto LABEL_51;
  v8 = UnityEngine_Object__get_name(monitor, 0LL);
  if ( !SimpleAnimation__IsPlaying(v6, v8, 0LL) )
  {
    v9 = that->fields.mSimpleAnimation;
    if ( !v9 )
      goto LABEL_51;
    v10 = (UnityEngine_Object_o *)v9[1].monitor;
    if ( !v10 )
      goto LABEL_51;
    v11 = UnityEngine_Object__get_name(v10, 0LL);
    SimpleAnimation__Play_16380456(v9, v11, 0LL);
  }
  v12 = that->fields.mSimpleAnimation;
  if ( !v12 )
    goto LABEL_51;
  v13 = (UnityEngine_Object_o *)v12[1].monitor;
  if ( !v13 )
    goto LABEL_51;
  v14 = UnityEngine_Object__get_name(v13, 0LL);
  v15 = SimpleAnimation__get_Item(v12, v14, 0LL);
  if ( !v15 )
    goto LABEL_51;
  klass = v15->klass;
  v17 = v15;
  if ( *(_WORD *)&v15->klass->_2.bitflags1 )
  {
    v18 = 0LL;
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v18;
      p_offset += 2;
      if ( v18 >= *(unsigned __int16 *)&v15->klass->_2.bitflags1 )
        goto LABEL_21;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 6].method;
  }
  else
  {
LABEL_21:
    p_method = sub_AAFEF8(v15, SimpleAnimation_State_TypeInfo, 6LL);
  }
  (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD, float))p_method)(v17, *(_QWORD *)(p_method + 8), 0.0);
  v36 = that->fields.mSimpleAnimation;
  if ( !v36 )
    goto LABEL_51;
  v37 = (UnityEngine_Object_o *)v36[1].monitor;
  if ( !v37 )
    goto LABEL_51;
  v38 = UnityEngine_Object__get_name(v37, 0LL);
  v39 = SimpleAnimation__get_Item(v36, v38, 0LL);
  if ( !v39 )
    goto LABEL_51;
  v40 = v39->klass;
  v41 = v39;
  if ( *(_WORD *)&v39->klass->_2.bitflags1 )
  {
    v42 = 0LL;
    v43 = (SimpleAnimation_State_c **)&v40->_1.interfaceOffsets->offset;
    while ( *(v43 - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v42;
      v43 += 2;
      if ( v42 >= *(unsigned __int16 *)&v39->klass->_2.bitflags1 )
        goto LABEL_48;
    }
    v44 = (__int64)&v40->vtable[*(_DWORD *)v43 + 8].method;
  }
  else
  {
LABEL_48:
    v44 = sub_AAFEF8(v39, SimpleAnimation_State_TypeInfo, 8LL);
  }
  (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD, float))v44)(v41, *(_QWORD *)(v44 + 8), 1.0);
}


void __fastcall QuestPhaseRewardComponent_StatePlay__end(
        QuestPhaseRewardComponent_StatePlay_o *this,
        QuestPhaseRewardComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestPhaseRewardComponent_StatePlay__update(
        QuestPhaseRewardComponent_StatePlay_o *this,
        QuestPhaseRewardComponent_o *that,
        const MethodInfo *method)
{
  UnityEngine_Object_o *mSimpleAnimation; // x20
  struct SimpleAnimation_o *v5; // x20
  UnityEngine_Object_o *monitor; // x0
  System_String_o *name; // x0
  UnityEngine_Object_o *mAnimation; // x20
  UnityEngine_Animation_o *v9; // x20
  UnityEngine_Object_o *clip; // x0
  System_String_o *v11; // x0

  if ( (byte_40FA312 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, that);
    byte_40FA312 = 1;
  }
  if ( !that )
    goto LABEL_21;
  mSimpleAnimation = (UnityEngine_Object_o *)that->fields.mSimpleAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(mSimpleAnimation, 0LL, 0LL) )
  {
    v5 = that->fields.mSimpleAnimation;
    if ( v5 )
    {
      monitor = (UnityEngine_Object_o *)v5[1].monitor;
      if ( monitor )
      {
        name = UnityEngine_Object__get_name(monitor, 0LL);
        if ( !SimpleAnimation__IsPlaying(v5, name, 0LL) )
          goto LABEL_20;
        return;
      }
    }
LABEL_21:
    sub_B170D4();
  }
  mAnimation = (UnityEngine_Object_o *)that->fields.mAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(mAnimation, 0LL, 0LL) )
    return;
  v9 = that->fields.mAnimation;
  if ( !v9 )
    goto LABEL_21;
  clip = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0LL);
  if ( !clip )
    goto LABEL_21;
  v11 = UnityEngine_Object__get_name(clip, 0LL);
  if ( !UnityEngine_Animation__IsPlaying(v9, v11, 0LL) )
  {
LABEL_20:
    ActionExtensions__Call(that->fields.mEndAct, 0LL);
    QuestPhaseRewardComponent__SetState(that, 0, 0LL);
  }
}


void __fastcall QuestPhaseRewardComponent__Play_d__21___ctor(
        QuestPhaseRewardComponent__Play_d__21_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall QuestPhaseRewardComponent__Play_d__21__MoveNext(
        QuestPhaseRewardComponent__Play_d__21_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  int32_t _1__state; // w8
  struct QuestPhaseRewardComponent_o *_4__this; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  System_Int32_array **end_act; // x1
  System_String_o *DISP_SE; // x21
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  System_Func_bool__o *v23; // x21
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  UnityEngine_WaitUntil_o *v28; // x20
  Il2CppObject **v29; // x19
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7

  if ( (byte_40FA310 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Func_bool___ctor__, method);
    sub_B16FFC(&System_Func_bool__TypeInfo, v9);
    sub_B16FFC(&Method_QuestPhaseRewardComponent__Play_b__21_0__, v10);
    sub_B16FFC(&SoundManager_TypeInfo, v11);
    sub_B16FFC(&UnityEngine_WaitUntil_TypeInfo, v12);
    byte_40FA310 = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 2 )
  {
    this->fields.__1__state = -1;
    if ( _4__this )
    {
      QuestPhaseRewardComponent__SetState(_4__this, 1, 0LL);
      return 0;
    }
LABEL_15:
    sub_B170D4();
  }
  if ( _1__state != 1 )
  {
    if ( !_1__state )
    {
      this->fields.__2__current = 0LL;
      p__2__current = &this->fields.__2__current;
      *((_DWORD *)p__2__current - 2) = -1;
      sub_B16F98((BattleServantConfConponent_o *)p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
    return 0;
  }
  this->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_15;
  end_act = (System_Int32_array **)this->fields.end_act;
  _4__this->fields.mEndAct = (struct System_Action_o *)end_act;
  sub_B16F98((BattleServantConfConponent_o *)&_4__this->fields.mEndAct, end_act, v2, v3, v4, v5, v6, v7);
  DISP_SE = _4__this->fields.DISP_SE;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSe(DISP_SE, 0LL);
  v23 = (System_Func_bool__o *)sub_B170CC(System_Func_bool__TypeInfo, v19, v20, v21, v22);
  System_Func_bool____ctor(
    v23,
    (Il2CppObject *)_4__this,
    Method_QuestPhaseRewardComponent__Play_b__21_0__,
    (const MethodInfo_284E7D0 *)Method_System_Func_bool___ctor__);
  v28 = (UnityEngine_WaitUntil_o *)sub_B170CC(UnityEngine_WaitUntil_TypeInfo, v24, v25, v26, v27);
  UnityEngine_WaitUntil___ctor(v28, v23, 0LL);
  this->fields.__2__current = (Il2CppObject *)v28;
  v29 = &this->fields.__2__current;
  sub_B16F98((BattleServantConfConponent_o *)v29, (System_Int32_array **)v28, v30, v31, v32, v33, v34, v35);
  *((_DWORD *)v29 - 2) = 2;
  return 1;
}


Il2CppObject *__fastcall QuestPhaseRewardComponent__Play_d__21__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        QuestPhaseRewardComponent__Play_d__21_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn QuestPhaseRewardComponent__Play_d__21__System_Collections_IEnumerator_Reset(
        QuestPhaseRewardComponent__Play_d__21_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_QuestPhaseRewardComponent__Play_d__21_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
}


Il2CppObject *__fastcall QuestPhaseRewardComponent__Play_d__21__System_Collections_IEnumerator_get_Current(
        QuestPhaseRewardComponent__Play_d__21_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall QuestPhaseRewardComponent__Play_d__21__System_IDisposable_Dispose(
        QuestPhaseRewardComponent__Play_d__21_o *this,
        const MethodInfo *method)
{
  ;
}