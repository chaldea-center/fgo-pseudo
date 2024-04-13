void __fastcall QuestPhaseRewardComponent___ctor(QuestPhaseRewardComponent_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1

  if ( (byte_42ED255 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_21887/*"qev79"*/, (_DWORD)method, (_DWORD)v2, v3);
    byte_42ED255 = 1;
  }
  v9 = (System_Int32_array **)StringLiteral_21887/*"qev79"*/;
  this->fields.DISP_SE = (struct System_String_o *)StringLiteral_21887/*"qev79"*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.DISP_SE, v9, v2, v3, v4, v5, v6, v7);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall QuestPhaseRewardComponent__Awake(QuestPhaseRewardComponent_o *this, const MethodInfo *method)
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
  CStateManager_QAASpotStateController_IMapSpot__o *v17; // x21
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct CStateManager_QuestPhaseRewardComponent__o *mFSM; // x21
  QuestPhaseRewardComponent_StateNone_o *v25; // x22
  __int64 v26; // x0
  __int64 v27; // x1
  struct CStateManager_QuestPhaseRewardComponent__o *v28; // x20
  QuestPhaseRewardComponent_StatePlay_o *v29; // x21
  const MethodInfo *v30; // x2

  if ( (byte_42ED24D & 1) == 0 )
  {
    sub_B5D5C4(&Method_CStateManager_QuestPhaseRewardComponent___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_CStateManager_QuestPhaseRewardComponent__add__, v5, v6, v7);
    sub_B5D5C4(&CStateManager_QuestPhaseRewardComponent__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&QuestPhaseRewardComponent_StateNone_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&QuestPhaseRewardComponent_StatePlay_TypeInfo, v14, v15, v16);
    byte_42ED24D = 1;
  }
  if ( !this->fields.mFSM )
  {
    v17 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B5D694(CStateManager_QuestPhaseRewardComponent__TypeInfo);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v17,
      (QAASpotStateController_IMapSpot_o *)this,
      2,
      (const MethodInfo_2BB2630 *)Method_CStateManager_QuestPhaseRewardComponent___ctor__);
    this->fields.mFSM = (struct CStateManager_QuestPhaseRewardComponent__o *)v17;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.mFSM,
      (System_Int32_array **)v17,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
    mFSM = this->fields.mFSM;
    v25 = (QuestPhaseRewardComponent_StateNone_o *)sub_B5D694(QuestPhaseRewardComponent_StateNone_TypeInfo);
    QuestPhaseRewardComponent_StateNone___ctor(v25, 0LL);
    if ( !mFSM
      || (CStateManager_QAASpotStateController_IMapSpot___add(
            (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
            0,
            (IState_T__o *)v25,
            (const MethodInfo_2BB26FC *)Method_CStateManager_QuestPhaseRewardComponent__add__),
          v28 = this->fields.mFSM,
          v29 = (QuestPhaseRewardComponent_StatePlay_o *)sub_B5D694(QuestPhaseRewardComponent_StatePlay_TypeInfo),
          QuestPhaseRewardComponent_StatePlay___ctor(v29, 0LL),
          !v28) )
    {
      sub_B5D69C(v26, v27);
    }
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)v28,
      1,
      (IState_T__o *)v29,
      (const MethodInfo_2BB26FC *)Method_CStateManager_QuestPhaseRewardComponent__add__);
    QuestPhaseRewardComponent__SetState(this, 0, v30);
  }
}


int32_t __fastcall QuestPhaseRewardComponent__GetState(QuestPhaseRewardComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  QuestPhaseRewardComponent_o *v4; // x19
  struct CStateManager_QuestPhaseRewardComponent__o *mFSM; // x8

  v4 = this;
  if ( (byte_42ED253 & 1) == 0 )
  {
    this = (QuestPhaseRewardComponent_o *)sub_B5D5C4(
                                            &Method_CStateManager_QuestPhaseRewardComponent__getState__,
                                            (_DWORD)method,
                                            v2,
                                            v3);
    byte_42ED253 = 1;
  }
  mFSM = v4->fields.mFSM;
  if ( !mFSM )
    sub_B5D69C(this, method);
  return mFSM->fields.m_state;
}


void __fastcall QuestPhaseRewardComponent__Init(QuestPhaseRewardComponent_o *this, const MethodInfo *method)
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
  struct UnityEngine_Animation_o *Component_WebViewObject; // x0
  UnityEngine_Animation_o **p_mAnimation; // x20
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  UnityEngine_Component_o *transform; // x0
  __int64 v35; // x1
  struct SimpleAnimation_o *ComponentInChildren_UIWidget; // x0
  struct SimpleAnimation_o **p_mSimpleAnimation; // x21
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  UnityEngine_Object_o *mSimpleAnimation; // x22
  SimpleAnimation_o *v45; // x20
  System_String_o *name; // x0
  __int64 v47; // x3
  UnityEngine_Component_c *klass; // x8
  UnityEngine_Component_o *v49; // x20
  unsigned __int64 v50; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v52; // x0
  UnityEngine_Animation_o *v53; // x21
  UnityEngine_Animation_o *v54; // x21
  System_String_o *v55; // x0
  UnityEngine_Animation_o *v56; // x20
  System_String_o *v57; // x0
  SimpleAnimation_o *v58; // x20
  System_String_o *v59; // x0
  __int64 v60; // x3
  UnityEngine_Component_c *v61; // x8
  UnityEngine_Component_o *v62; // x20
  unsigned __int64 v63; // x10
  SimpleAnimation_State_c **v64; // x11
  __int64 v65; // x0
  struct System_String_o *Value; // x0
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7

  if ( (byte_42ED24F & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_Animation___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMaster_ConstantStrMaster___, v8, v9, v10);
    sub_B5D5C4(&DataManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&SimpleAnimation_State_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_21841/*"progress_reward_board"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_11093/*"QUEST_PHASE_REWARD_OVERWRITE_SPRITE"*/, v23, v24, v25);
    byte_42ED24F = 1;
  }
  Component_WebViewObject = (struct UnityEngine_Animation_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                (UnityEngine_Component_o *)this,
                                                                (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Animation___);
  p_mAnimation = &this->fields.mAnimation;
  this->fields.mAnimation = Component_WebViewObject;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.mAnimation,
    (System_Int32_array **)Component_WebViewObject,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_47;
  ComponentInChildren_UIWidget = (struct SimpleAnimation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                               transform,
                                                               (const MethodInfo_1ADE34C *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  this->fields.mSimpleAnimation = ComponentInChildren_UIWidget;
  p_mSimpleAnimation = &this->fields.mSimpleAnimation;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.mSimpleAnimation,
    (System_Int32_array **)ComponentInChildren_UIWidget,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  mSimpleAnimation = (UnityEngine_Object_o *)this->fields.mSimpleAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(mSimpleAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    v45 = *p_mSimpleAnimation;
    if ( *p_mSimpleAnimation )
    {
      transform = (UnityEngine_Component_o *)v45[1].monitor;
      if ( transform )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0LL);
        transform = (UnityEngine_Component_o *)SimpleAnimation__get_Item(v45, name, 0LL);
        if ( transform )
        {
          klass = transform->klass;
          v49 = transform;
          if ( *(_WORD *)&transform->klass->_2.bitflags1 )
          {
            v50 = 0LL;
            p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
            while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
            {
              ++v50;
              p_offset += 2;
              if ( v50 >= *(unsigned __int16 *)&transform->klass->_2.bitflags1 )
                goto LABEL_15;
            }
            v52 = (__int64)(&klass[1]._1.castClass + 2 * *(_DWORD *)p_offset);
          }
          else
          {
LABEL_15:
            v52 = sub_AF54C0(transform, SimpleAnimation_State_TypeInfo, 8LL, v47);
          }
          transform = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(UnityEngine_Component_o *, _QWORD, float))v52)(
                                                   v49,
                                                   *(_QWORD *)(v52 + 8),
                                                   0.0);
          v58 = *p_mSimpleAnimation;
          if ( *p_mSimpleAnimation )
          {
            transform = (UnityEngine_Component_o *)v58[1].monitor;
            if ( transform )
            {
              v59 = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0LL);
              transform = (UnityEngine_Component_o *)SimpleAnimation__get_Item(v58, v59, 0LL);
              if ( transform )
              {
                v61 = transform->klass;
                v62 = transform;
                if ( *(_WORD *)&transform->klass->_2.bitflags1 )
                {
                  v63 = 0LL;
                  v64 = (SimpleAnimation_State_c **)&v61->_1.interfaceOffsets->offset;
                  while ( *(v64 - 1) != SimpleAnimation_State_TypeInfo )
                  {
                    ++v63;
                    v64 += 2;
                    if ( v63 >= *(unsigned __int16 *)&transform->klass->_2.bitflags1 )
                      goto LABEL_35;
                  }
                  v65 = (__int64)(&v61[1]._1.byval_arg.bits + 4 * *(_DWORD *)v64);
                }
                else
                {
LABEL_35:
                  v65 = sub_AF54C0(transform, SimpleAnimation_State_TypeInfo, 6LL, v60);
                }
                (*(void (__fastcall **)(UnityEngine_Component_o *, _QWORD, float))v65)(v62, *(_QWORD *)(v65 + 8), 0.0);
                goto LABEL_38;
              }
            }
          }
        }
      }
    }
LABEL_47:
    sub_B5D69C(transform, v35);
  }
  v53 = *p_mAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v53, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    v54 = *p_mAnimation;
    if ( !*p_mAnimation )
      goto LABEL_47;
    transform = (UnityEngine_Component_o *)UnityEngine_Animation__get_clip(*p_mAnimation, 0LL);
    if ( !transform )
      goto LABEL_47;
    v55 = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0LL);
    transform = (UnityEngine_Component_o *)UnityEngine_Animation__get_Item(v54, v55, 0LL);
    if ( !transform )
      goto LABEL_47;
    UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)transform, 0.0, 0LL);
    v56 = *p_mAnimation;
    if ( !v56 )
      goto LABEL_47;
    transform = (UnityEngine_Component_o *)UnityEngine_Animation__get_clip(v56, 0LL);
    if ( !transform )
      goto LABEL_47;
    v57 = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0LL);
    transform = (UnityEngine_Component_o *)UnityEngine_Animation__get_Item(v56, v57, 0LL);
    if ( !transform )
      goto LABEL_47;
    UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)transform, 0.0, 0LL);
  }
LABEL_38:
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  transform = (UnityEngine_Component_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ConstantStrMaster___);
  if ( !transform )
    goto LABEL_47;
  Value = ConstantStrMaster__GetValue((ConstantStrMaster_o *)transform, (System_String_o *)StringLiteral_11093/*"QUEST_PHASE_REWARD_OVERWRITE_SPRITE"*/, 0LL);
  this->fields.overwriteSpriteName = Value;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.overwriteSpriteName,
    (System_Int32_array **)Value,
    v67,
    v68,
    v69,
    v70,
    v71,
    v72);
  transform = (UnityEngine_Component_o *)this->fields.bgSprite;
  if ( !transform )
    goto LABEL_47;
  UISprite__set_atlas((UISprite_o *)transform, this->fields.systemUIAtlas, 0LL);
  transform = (UnityEngine_Component_o *)this->fields.bgSprite;
  if ( !transform )
    goto LABEL_47;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)transform, (System_String_o *)StringLiteral_21841/*"progress_reward_board"*/, 0LL);
  transform = (UnityEngine_Component_o *)this->fields.countLabel;
  if ( !transform )
    goto LABEL_47;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(transform, 0LL);
  if ( !transform )
    goto LABEL_47;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
}


void __fastcall QuestPhaseRewardComponent__Open(
        QuestPhaseRewardComponent_o *this,
        System_Action_o *callback,
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
  TerminalPramsManager_c *v21; // x0
  WarBoardControlPlayTalkUiComponent_array *ComponentsInChildren_WarBoardControlPlayTalkUiComponent; // x21
  GiftDetailMaster_o *IsNullOrEmpty; // x0
  __int64 v24; // x1
  const MethodInfo *v25; // x2
  __int64 v26; // x3
  TerminalPramsManager_c *v27; // x0
  int32_t PhaseCnt_k__BackingField; // w25
  int v29; // w2
  __int64 v30; // x3
  const MethodInfo *v31; // x4
  QuestPhaseMaster_o *Master_WarQuestSelectionMaster; // x22
  int32_t giftId; // w22
  System_String_o *OverwriteImageIdByQuestPhaseReward; // x22
  System_String_o *overwriteSpriteName; // x1
  struct System_Collections_Generic_IEqualityComparer_TKey__o *comparer; // x8
  int monitor; // w9
  int i; // w10
  __int64 v39; // x11
  System_Collections_IEnumerator_o *v40; // x0
  __int64 v41; // x0
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42ED250 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_Component_GetComponentsInChildren_ItemIconComponent___,
      (_DWORD)callback,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_GiftDetailMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMaster_QuestPhaseMaster___, v9, v10, v11);
    sub_B5D5C4(&DataManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_1/*""*/, v18, v19, v20);
    byte_42ED250 = 1;
  }
  entity = 0LL;
  v21 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v21 = TerminalPramsManager_TypeInfo;
  }
  if ( !v21->static_fields->mQuestPhaseRewardInfos )
  {
    ActionExtensions__Call(callback, 0LL);
    return;
  }
  ComponentsInChildren_WarBoardControlPlayTalkUiComponent = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                                              (UnityEngine_Component_o *)this,
                                                              1,
                                                              (const MethodInfo_1ADE6CC *)Method_UnityEngine_Component_GetComponentsInChildren_ItemIconComponent___);
  IsNullOrEmpty = (GiftDetailMaster_o *)System_String__IsNullOrEmpty(this->fields.overwriteSpriteName, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42E4B34 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v24, (_DWORD)v25, v26);
      byte_42E4B34 = 1;
    }
    v27 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v27 = TerminalPramsManager_TypeInfo;
    }
    PhaseCnt_k__BackingField = v27->static_fields->_PhaseCnt_k__BackingField;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (QuestPhaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !byte_42E4B33 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v24, v29, v30);
      byte_42E4B33 = 1;
    }
    IsNullOrEmpty = (GiftDetailMaster_o *)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      IsNullOrEmpty = (GiftDetailMaster_o *)TerminalPramsManager_TypeInfo;
    }
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_59;
    IsNullOrEmpty = (GiftDetailMaster_o *)QuestPhaseMaster__TryGetEntity(
                                            Master_WarQuestSelectionMaster,
                                            &entity,
                                            (int32_t)IsNullOrEmpty[2].fields._lookup->fields.buckets,
                                            PhaseCnt_k__BackingField + 1,
                                            v31);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
      goto LABEL_43;
    if ( !entity )
      goto LABEL_59;
    giftId = entity->fields.giftId;
    if ( !giftId )
      goto LABEL_43;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    IsNullOrEmpty = (GiftDetailMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_GiftDetailMaster___);
    if ( !IsNullOrEmpty )
      goto LABEL_59;
    OverwriteImageIdByQuestPhaseReward = GiftDetailMaster__GetOverwriteImageIdByQuestPhaseReward(
                                           IsNullOrEmpty,
                                           giftId,
                                           0LL);
    IsNullOrEmpty = (GiftDetailMaster_o *)System_String__op_Inequality(
                                            OverwriteImageIdByQuestPhaseReward,
                                            (System_String_o *)StringLiteral_1/*""*/,
                                            0LL);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    {
      if ( !ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
        goto LABEL_59;
      if ( ComponentsInChildren_WarBoardControlPlayTalkUiComponent->max_length )
      {
        IsNullOrEmpty = (GiftDetailMaster_o *)ComponentsInChildren_WarBoardControlPlayTalkUiComponent->m_Items[0];
        if ( IsNullOrEmpty )
        {
          overwriteSpriteName = OverwriteImageIdByQuestPhaseReward;
LABEL_42:
          ItemIconComponent__SetItemImageByName((ItemIconComponent_o *)IsNullOrEmpty, overwriteSpriteName, 0LL);
          goto LABEL_58;
        }
        goto LABEL_59;
      }
    }
    else
    {
LABEL_43:
      IsNullOrEmpty = (GiftDetailMaster_o *)TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        IsNullOrEmpty = (GiftDetailMaster_o *)TerminalPramsManager_TypeInfo;
      }
      comparer = IsNullOrEmpty[2].fields._lookup[7].fields.comparer;
      if ( !comparer )
        goto LABEL_59;
      monitor = (int)comparer[1].monitor;
      if ( monitor < 1 )
      {
        v24 = 0LL;
        if ( !ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
          goto LABEL_58;
      }
      else
      {
        for ( i = 0; i < monitor; ++i )
        {
          if ( i >= (unsigned int)monitor )
            goto LABEL_60;
          v39 = *((_QWORD *)&comparer[2].klass + i);
          if ( !v39 )
            goto LABEL_59;
        }
        v24 = *(unsigned int *)(v39 + 20);
        if ( !ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
          goto LABEL_58;
      }
      if ( ComponentsInChildren_WarBoardControlPlayTalkUiComponent->max_length )
      {
        IsNullOrEmpty = (GiftDetailMaster_o *)ComponentsInChildren_WarBoardControlPlayTalkUiComponent->m_Items[0];
        if ( IsNullOrEmpty )
        {
          ItemIconComponent__SetItemImage((ItemIconComponent_o *)IsNullOrEmpty, v24, 0LL);
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
      IsNullOrEmpty = (GiftDetailMaster_o *)ComponentsInChildren_WarBoardControlPlayTalkUiComponent->m_Items[0];
      if ( IsNullOrEmpty )
      {
        overwriteSpriteName = this->fields.overwriteSpriteName;
        goto LABEL_42;
      }
LABEL_59:
      sub_B5D69C(IsNullOrEmpty, v24);
    }
LABEL_60:
    v41 = sub_B5D6C8(IsNullOrEmpty);
    sub_B5D668(v41, 0LL);
  }
LABEL_58:
  v40 = QuestPhaseRewardComponent__Play(this, callback, v25);
  UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, v40, 0LL);
}


void __fastcall QuestPhaseRewardComponent__OpenByItemIdAndNum(
        QuestPhaseRewardComponent_o *this,
        int32_t itemId,
        int32_t itemNum,
        System_Action_o *endAction,
        const MethodInfo *method)
{
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
  UISprite_o *bgSprite; // x22
  Il2CppObject *v22; // x0
  System_String_o *v23; // x23
  UILabel_o *countLabel; // x22
  System_String_o *v25; // x23
  Il2CppObject *v26; // x0
  System_String_o *gameObject; // x0
  __int64 v28; // x1
  const MethodInfo *v29; // x2
  System_Collections_IEnumerator_o *v30; // x0
  int32_t v31; // [xsp+8h] [xbp-38h] BYREF
  int32_t v32; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42ED251 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, itemId, itemNum, endAction);
    sub_B5D5C4(&int_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_21842/*"progress_reward_board_{0}"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_8943/*"MULTIPLE_INFO"*/, v18, v19, v20);
    byte_42ED251 = 1;
  }
  bgSprite = this->fields.bgSprite;
  v32 = itemId;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v32);
  v23 = System_String__Format((System_String_o *)StringLiteral_21842/*"progress_reward_board_{0}"*/, v22, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventSprite(bgSprite, v23, 0LL);
  countLabel = this->fields.countLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_8943/*"MULTIPLE_INFO"*/, 0LL);
  v31 = itemNum;
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31);
  gameObject = System_String__Format(v25, v26, 0LL);
  if ( !countLabel
    || (UILabel__set_text(countLabel, gameObject, 0LL), (gameObject = (System_String_o *)this->fields.countLabel) == 0LL)
    || (gameObject = (System_String_o *)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)gameObject,
                                          0LL)) == 0LL )
  {
    sub_B5D69C(gameObject, v28);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  v30 = QuestPhaseRewardComponent__Play(this, endAction, v29);
  UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, v30, 0LL);
}


System_Collections_IEnumerator_o *__fastcall QuestPhaseRewardComponent__Play(
        QuestPhaseRewardComponent_o *this,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_42ED252 & 1) == 0 )
  {
    sub_B5D5C4(&QuestPhaseRewardComponent__Play_d__21_TypeInfo, (_DWORD)end_act, (_DWORD)method, v3);
    byte_42ED252 = 1;
  }
  v6 = sub_B5D694(QuestPhaseRewardComponent__Play_d__21_TypeInfo);
  QuestPhaseRewardComponent__Play_d__21___ctor((QuestPhaseRewardComponent__Play_d__21_o *)v6, 0, 0LL);
  if ( !v6 )
    sub_B5D69C(v7, v8);
  *(_QWORD *)(v6 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v6 + 40) = end_act;
  sub_B5D560((BattleServantConfConponent_o *)(v6 + 40), (System_Int32_array **)end_act, v15, v16, v17, v18, v19, v20);
  return (System_Collections_IEnumerator_o *)v6;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestPhaseRewardComponent__SetState(
        QuestPhaseRewardComponent_o *this,
        int32_t state,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct CStateManager_QuestPhaseRewardComponent__o *mFSM; // x0

  if ( (byte_42ED254 & 1) == 0 )
  {
    sub_B5D5C4(&Method_CStateManager_QuestPhaseRewardComponent__setState__, state, (_DWORD)method, v3);
    byte_42ED254 = 1;
  }
  mFSM = this->fields.mFSM;
  if ( !mFSM )
    sub_B5D69C(0LL, *(_QWORD *)&state);
  CStateManager_QAASpotStateController_IMapSpot___setState(
    (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
    state,
    (const MethodInfo_2BB27A0 *)Method_CStateManager_QuestPhaseRewardComponent__setState__);
}


void __fastcall QuestPhaseRewardComponent__Update(QuestPhaseRewardComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct CStateManager_QuestPhaseRewardComponent__o *mFSM; // x0

  if ( (byte_42ED24E & 1) == 0 )
  {
    sub_B5D5C4(&Method_CStateManager_QuestPhaseRewardComponent__update__, (_DWORD)method, v2, v3);
    byte_42ED24E = 1;
  }
  mFSM = this->fields.mFSM;
  if ( mFSM )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      (const MethodInfo_2BB2778 *)Method_CStateManager_QuestPhaseRewardComponent__update__);
}


bool __fastcall QuestPhaseRewardComponent___Play_b__21_0(QuestPhaseRewardComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_String_o *DISP_SE; // x19

  if ( (byte_42ED256 & 1) == 0 )
  {
    sub_B5D5C4(&SeManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42ED256 = 1;
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
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *mSimpleAnimation; // x20
  struct SimpleAnimation_o *v9; // x20
  System_String_o *v10; // x0
  struct SimpleAnimation_o *v11; // x20
  System_String_o *v12; // x0
  struct SimpleAnimation_o *v13; // x20
  System_String_o *v14; // x0
  __int64 v15; // x3
  QuestPhaseRewardComponent_StatePlay_c *klass; // x8
  QuestPhaseRewardComponent_StatePlay_o *v17; // x20
  unsigned __int64 v18; // x10
  int32_t *p_offset; // x11
  __int64 v20; // x0
  UnityEngine_Object_o *mAnimation; // x20
  UnityEngine_Animation_o *v22; // x20
  System_String_o *name; // x0
  UnityEngine_Animation_o *v24; // x20
  System_String_o *v25; // x0
  UnityEngine_Animation_o *v26; // x20
  System_String_o *v27; // x0
  UnityEngine_Animation_o *v28; // x19
  System_String_o *v29; // x0
  struct SimpleAnimation_o *v30; // x19
  System_String_o *v31; // x0
  __int64 v32; // x3
  QuestPhaseRewardComponent_StatePlay_c *v33; // x8
  QuestPhaseRewardComponent_StatePlay_o *v34; // x19
  unsigned __int64 v35; // x10
  int32_t *v36; // x11
  __int64 v37; // x0

  if ( (byte_42E7F00 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)that, (_DWORD)method, v3);
    this = (QuestPhaseRewardComponent_StatePlay_o *)sub_B5D5C4(&SimpleAnimation_State_TypeInfo, v5, v6, v7);
    byte_42E7F00 = 1;
  }
  if ( !that )
    goto LABEL_51;
  mSimpleAnimation = (UnityEngine_Object_o *)that->fields.mSimpleAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (QuestPhaseRewardComponent_StatePlay_o *)UnityEngine_Object__op_Inequality(mSimpleAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    mAnimation = (UnityEngine_Object_o *)that->fields.mAnimation;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (QuestPhaseRewardComponent_StatePlay_o *)UnityEngine_Object__op_Inequality(mAnimation, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      return;
    v22 = that->fields.mAnimation;
    if ( v22 )
    {
      this = (QuestPhaseRewardComponent_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0LL);
      if ( this )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
        this = (QuestPhaseRewardComponent_StatePlay_o *)UnityEngine_Animation__IsPlaying(v22, name, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v24 = that->fields.mAnimation;
          if ( !v24 )
            goto LABEL_51;
          this = (QuestPhaseRewardComponent_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0LL);
          if ( !this )
            goto LABEL_51;
          v25 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
          this = (QuestPhaseRewardComponent_StatePlay_o *)UnityEngine_Animation__Play_51249124(v24, v25, 0LL);
        }
        v26 = that->fields.mAnimation;
        if ( v26 )
        {
          this = (QuestPhaseRewardComponent_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0LL);
          if ( this )
          {
            v27 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
            this = (QuestPhaseRewardComponent_StatePlay_o *)UnityEngine_Animation__get_Item(v26, v27, 0LL);
            if ( this )
            {
              UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)this, 0.0, 0LL);
              v28 = that->fields.mAnimation;
              if ( v28 )
              {
                this = (QuestPhaseRewardComponent_StatePlay_o *)UnityEngine_Animation__get_clip(v28, 0LL);
                if ( this )
                {
                  v29 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
                  this = (QuestPhaseRewardComponent_StatePlay_o *)UnityEngine_Animation__get_Item(v28, v29, 0LL);
                  if ( this )
                  {
                    UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)this, 1.0, 0LL);
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
    sub_B5D69C(this, that);
  }
  v9 = that->fields.mSimpleAnimation;
  if ( !v9 )
    goto LABEL_51;
  this = (QuestPhaseRewardComponent_StatePlay_o *)v9[1].monitor;
  if ( !this )
    goto LABEL_51;
  v10 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestPhaseRewardComponent_StatePlay_o *)SimpleAnimation__IsPlaying(v9, v10, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v11 = that->fields.mSimpleAnimation;
    if ( !v11 )
      goto LABEL_51;
    this = (QuestPhaseRewardComponent_StatePlay_o *)v11[1].monitor;
    if ( !this )
      goto LABEL_51;
    v12 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
    this = (QuestPhaseRewardComponent_StatePlay_o *)SimpleAnimation__Play_16676044(v11, v12, 0LL);
  }
  v13 = that->fields.mSimpleAnimation;
  if ( !v13 )
    goto LABEL_51;
  this = (QuestPhaseRewardComponent_StatePlay_o *)v13[1].monitor;
  if ( !this )
    goto LABEL_51;
  v14 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestPhaseRewardComponent_StatePlay_o *)SimpleAnimation__get_Item(v13, v14, 0LL);
  if ( !this )
    goto LABEL_51;
  klass = this->klass;
  v17 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v18 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((SimpleAnimation_State_c **)p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v18;
      p_offset += 4;
      if ( v18 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_21;
    }
    v20 = (__int64)(&klass->vtable._6_end.method + 2 * *p_offset);
  }
  else
  {
LABEL_21:
    v20 = sub_AF54C0(this, SimpleAnimation_State_TypeInfo, 6LL, v15);
  }
  this = (QuestPhaseRewardComponent_StatePlay_o *)(*(__int64 (__fastcall **)(QuestPhaseRewardComponent_StatePlay_o *, _QWORD, float))v20)(
                                                    v17,
                                                    *(_QWORD *)(v20 + 8),
                                                    0.0);
  v30 = that->fields.mSimpleAnimation;
  if ( !v30 )
    goto LABEL_51;
  this = (QuestPhaseRewardComponent_StatePlay_o *)v30[1].monitor;
  if ( !this )
    goto LABEL_51;
  v31 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestPhaseRewardComponent_StatePlay_o *)SimpleAnimation__get_Item(v30, v31, 0LL);
  if ( !this )
    goto LABEL_51;
  v33 = this->klass;
  v34 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v35 = 0LL;
    v36 = &v33->_1.interfaceOffsets->offset;
    while ( *((SimpleAnimation_State_c **)v36 - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v35;
      v36 += 4;
      if ( v35 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_48;
    }
    v37 = (__int64)(&v33[1]._1.namespaze + 2 * *v36);
  }
  else
  {
LABEL_48:
    v37 = sub_AF54C0(this, SimpleAnimation_State_TypeInfo, 8LL, v32);
  }
  (*(void (__fastcall **)(QuestPhaseRewardComponent_StatePlay_o *, _QWORD, float))v37)(v34, *(_QWORD *)(v37 + 8), 1.0);
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
  __int64 v3; // x3
  UnityEngine_Object_o *mSimpleAnimation; // x20
  struct SimpleAnimation_o *v6; // x20
  System_String_o *name; // x0
  UnityEngine_Object_o *mAnimation; // x20
  UnityEngine_Animation_o *v9; // x20
  System_String_o *v10; // x0

  if ( (byte_42E7F01 & 1) == 0 )
  {
    this = (QuestPhaseRewardComponent_StatePlay_o *)sub_B5D5C4(
                                                      &UnityEngine_Object_TypeInfo,
                                                      (_DWORD)that,
                                                      (_DWORD)method,
                                                      v3);
    byte_42E7F01 = 1;
  }
  if ( !that )
    goto LABEL_21;
  mSimpleAnimation = (UnityEngine_Object_o *)that->fields.mSimpleAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (QuestPhaseRewardComponent_StatePlay_o *)UnityEngine_Object__op_Inequality(mSimpleAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v6 = that->fields.mSimpleAnimation;
    if ( v6 )
    {
      this = (QuestPhaseRewardComponent_StatePlay_o *)v6[1].monitor;
      if ( this )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
        if ( !SimpleAnimation__IsPlaying(v6, name, 0LL) )
          goto LABEL_20;
        return;
      }
    }
LABEL_21:
    sub_B5D69C(this, that);
  }
  mAnimation = (UnityEngine_Object_o *)that->fields.mAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (QuestPhaseRewardComponent_StatePlay_o *)UnityEngine_Object__op_Inequality(mAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    return;
  v9 = that->fields.mAnimation;
  if ( !v9 )
    goto LABEL_21;
  this = (QuestPhaseRewardComponent_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0LL);
  if ( !this )
    goto LABEL_21;
  v10 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  if ( !UnityEngine_Animation__IsPlaying(v9, v10, 0LL) )
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
  QuestPhaseRewardComponent__Play_d__21_o *v8; // x19
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
  int32_t _1__state; // w8
  struct QuestPhaseRewardComponent_o *_4__this; // x20
  BattleServantConfConponent_o *p__2__current; // x19
  bool result; // w0
  System_Int32_array **end_act; // x1
  System_String_o *DISP_SE; // x21
  System_Func_bool__o *v27; // x21
  UnityEngine_WaitUntil_o *v28; // x20
  BattleServantConfConponent_o *v29; // x19
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7

  v8 = this;
  if ( (byte_42E7EFF & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Func_bool___ctor__, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&System_Func_bool__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_QuestPhaseRewardComponent__Play_b__21_0__, v12, v13, v14);
    sub_B5D5C4(&SoundManager_TypeInfo, v15, v16, v17);
    this = (QuestPhaseRewardComponent__Play_d__21_o *)sub_B5D5C4(&UnityEngine_WaitUntil_TypeInfo, v18, v19, v20);
    byte_42E7EFF = 1;
  }
  _1__state = v8->fields.__1__state;
  _4__this = v8->fields.__4__this;
  if ( _1__state == 2 )
  {
    v8->fields.__1__state = -1;
    if ( _4__this )
    {
      QuestPhaseRewardComponent__SetState(_4__this, 1, 0LL);
      return 0;
    }
LABEL_15:
    sub_B5D69C(this, method);
  }
  if ( _1__state != 1 )
  {
    if ( !_1__state )
    {
      v8->fields.__2__current = 0LL;
      p__2__current = (BattleServantConfConponent_o *)&v8->fields.__2__current;
      *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = -1;
      sub_B5D560(p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
      return result;
    }
    return 0;
  }
  v8->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_15;
  end_act = (System_Int32_array **)v8->fields.end_act;
  _4__this->fields.mEndAct = (struct System_Action_o *)end_act;
  sub_B5D560((BattleServantConfConponent_o *)&_4__this->fields.mEndAct, end_act, v2, v3, v4, v5, v6, v7);
  DISP_SE = _4__this->fields.DISP_SE;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSe(DISP_SE, 0LL);
  v27 = (System_Func_bool__o *)sub_B5D694(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v27,
    (Il2CppObject *)_4__this,
    Method_QuestPhaseRewardComponent__Play_b__21_0__,
    (const MethodInfo_278D9C4 *)Method_System_Func_bool___ctor__);
  v28 = (UnityEngine_WaitUntil_o *)sub_B5D694(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v28, v27, 0LL);
  v8->fields.__2__current = (Il2CppObject *)v28;
  v29 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
  sub_B5D560(v29, (System_Int32_array **)v28, v30, v31, v32, v33, v34, v35);
  *(_DWORD *)&v29[-1].fields.isOpenAfter = 2;
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_QuestPhaseRewardComponent__Play_d__21_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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