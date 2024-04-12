void __fastcall QuestPhaseRewardComponent___ctor(QuestPhaseRewardComponent_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1

  if ( (byte_42B48C7 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_21774/*"qev79"*/);
    byte_42B48C7 = 1;
  }
  v9 = (System_Int32_array **)StringLiteral_21774/*"qev79"*/;
  this->fields.DISP_SE = (struct System_String_o *)StringLiteral_21774/*"qev79"*/;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.DISP_SE, v9, v2, v3, v4, v5, v6, v7);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall QuestPhaseRewardComponent__Awake(QuestPhaseRewardComponent_o *this, const MethodInfo *method)
{
  CStateManager_QAASpotStateController_IMapSpot__o *v3; // x21
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  struct CStateManager_QuestPhaseRewardComponent__o *mFSM; // x21
  QuestPhaseRewardComponent_StateNone_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  struct CStateManager_QuestPhaseRewardComponent__o *v14; // x20
  QuestPhaseRewardComponent_StatePlay_o *v15; // x21
  const MethodInfo *v16; // x2

  if ( (byte_42B48BF & 1) == 0 )
  {
    sub_B52984(&Method_CStateManager_QuestPhaseRewardComponent___ctor__);
    sub_B52984(&Method_CStateManager_QuestPhaseRewardComponent__add__);
    sub_B52984(&CStateManager_QuestPhaseRewardComponent__TypeInfo);
    sub_B52984(&QuestPhaseRewardComponent_StateNone_TypeInfo);
    sub_B52984(&QuestPhaseRewardComponent_StatePlay_TypeInfo);
    byte_42B48BF = 1;
  }
  if ( !this->fields.mFSM )
  {
    v3 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B52A54(CStateManager_QuestPhaseRewardComponent__TypeInfo);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v3,
      (QAASpotStateController_IMapSpot_o *)this,
      2,
      (const MethodInfo_2B925C4 *)Method_CStateManager_QuestPhaseRewardComponent___ctor__);
    this->fields.mFSM = (struct CStateManager_QuestPhaseRewardComponent__o *)v3;
    sub_B52920((BattleServantConfConponent_o *)&this->fields.mFSM, (System_Int32_array **)v3, v4, v5, v6, v7, v8, v9);
    mFSM = this->fields.mFSM;
    v11 = (QuestPhaseRewardComponent_StateNone_o *)sub_B52A54(QuestPhaseRewardComponent_StateNone_TypeInfo);
    QuestPhaseRewardComponent_StateNone___ctor(v11, 0LL);
    if ( !mFSM
      || (CStateManager_QAASpotStateController_IMapSpot___add(
            (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
            0,
            (IState_T__o *)v11,
            (const MethodInfo_2B92690 *)Method_CStateManager_QuestPhaseRewardComponent__add__),
          v14 = this->fields.mFSM,
          v15 = (QuestPhaseRewardComponent_StatePlay_o *)sub_B52A54(QuestPhaseRewardComponent_StatePlay_TypeInfo),
          QuestPhaseRewardComponent_StatePlay___ctor(v15, 0LL),
          !v14) )
    {
      sub_B52A5C(v12, v13);
    }
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)v14,
      1,
      (IState_T__o *)v15,
      (const MethodInfo_2B92690 *)Method_CStateManager_QuestPhaseRewardComponent__add__);
    QuestPhaseRewardComponent__SetState(this, 0, v16);
  }
}


int32_t __fastcall QuestPhaseRewardComponent__GetState(QuestPhaseRewardComponent_o *this, const MethodInfo *method)
{
  QuestPhaseRewardComponent_o *v2; // x19
  struct CStateManager_QuestPhaseRewardComponent__o *mFSM; // x8

  v2 = this;
  if ( (byte_42B48C5 & 1) == 0 )
  {
    this = (QuestPhaseRewardComponent_o *)sub_B52984(&Method_CStateManager_QuestPhaseRewardComponent__getState__);
    byte_42B48C5 = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_B52A5C(this, method);
  return mFSM->fields.m_state;
}


void __fastcall QuestPhaseRewardComponent__Init(QuestPhaseRewardComponent_o *this, const MethodInfo *method)
{
  struct UnityEngine_Animation_o *Component_WebViewObject; // x0
  UnityEngine_Animation_o **p_mAnimation; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  UnityEngine_Component_o *transform; // x0
  __int64 v12; // x1
  struct SimpleAnimation_o *ComponentInChildren_UIWidget; // x0
  struct SimpleAnimation_o **p_mSimpleAnimation; // x21
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  UnityEngine_Object_o *mSimpleAnimation; // x22
  SimpleAnimation_o *v22; // x20
  System_String_o *name; // x0
  __int64 v24; // x3
  UnityEngine_Component_c *klass; // x8
  UnityEngine_Component_o *v26; // x20
  unsigned __int64 v27; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v29; // x0
  UnityEngine_Animation_o *v30; // x21
  UnityEngine_Animation_o *v31; // x21
  System_String_o *v32; // x0
  UnityEngine_Animation_o *v33; // x20
  System_String_o *v34; // x0
  SimpleAnimation_o *v35; // x20
  System_String_o *v36; // x0
  __int64 v37; // x3
  UnityEngine_Component_c *v38; // x8
  UnityEngine_Component_o *v39; // x20
  unsigned __int64 v40; // x10
  SimpleAnimation_State_c **v41; // x11
  __int64 v42; // x0
  struct System_String_o *Value; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7

  if ( (byte_42B48C1 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
    sub_B52984(&Method_UnityEngine_Component_GetComponent_Animation___);
    sub_B52984(&Method_DataManager_GetMaster_ConstantStrMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&SimpleAnimation_State_TypeInfo);
    sub_B52984(&StringLiteral_21728/*"progress_reward_board"*/);
    sub_B52984(&StringLiteral_11047/*"QUEST_PHASE_REWARD_OVERWRITE_SPRITE"*/);
    byte_42B48C1 = 1;
  }
  Component_WebViewObject = (struct UnityEngine_Animation_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                (UnityEngine_Component_o *)this,
                                                                (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_Animation___);
  p_mAnimation = &this->fields.mAnimation;
  this->fields.mAnimation = Component_WebViewObject;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.mAnimation,
    (System_Int32_array **)Component_WebViewObject,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_47;
  ComponentInChildren_UIWidget = (struct SimpleAnimation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                               transform,
                                                               (const MethodInfo_1A49284 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  this->fields.mSimpleAnimation = ComponentInChildren_UIWidget;
  p_mSimpleAnimation = &this->fields.mSimpleAnimation;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.mSimpleAnimation,
    (System_Int32_array **)ComponentInChildren_UIWidget,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  mSimpleAnimation = (UnityEngine_Object_o *)this->fields.mSimpleAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(mSimpleAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    v22 = *p_mSimpleAnimation;
    if ( *p_mSimpleAnimation )
    {
      transform = (UnityEngine_Component_o *)v22[1].monitor;
      if ( transform )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0LL);
        transform = (UnityEngine_Component_o *)SimpleAnimation__get_Item(v22, name, 0LL);
        if ( transform )
        {
          klass = transform->klass;
          v26 = transform;
          if ( *(_WORD *)&transform->klass->_2.bitflags1 )
          {
            v27 = 0LL;
            p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
            while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
            {
              ++v27;
              p_offset += 2;
              if ( v27 >= *(unsigned __int16 *)&transform->klass->_2.bitflags1 )
                goto LABEL_15;
            }
            v29 = (__int64)(&klass[1]._1.castClass + 2 * *(_DWORD *)p_offset);
          }
          else
          {
LABEL_15:
            v29 = sub_AEB880(transform, SimpleAnimation_State_TypeInfo, 8LL, v24);
          }
          transform = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(UnityEngine_Component_o *, _QWORD, float))v29)(
                                                   v26,
                                                   *(_QWORD *)(v29 + 8),
                                                   0.0);
          v35 = *p_mSimpleAnimation;
          if ( *p_mSimpleAnimation )
          {
            transform = (UnityEngine_Component_o *)v35[1].monitor;
            if ( transform )
            {
              v36 = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0LL);
              transform = (UnityEngine_Component_o *)SimpleAnimation__get_Item(v35, v36, 0LL);
              if ( transform )
              {
                v38 = transform->klass;
                v39 = transform;
                if ( *(_WORD *)&transform->klass->_2.bitflags1 )
                {
                  v40 = 0LL;
                  v41 = (SimpleAnimation_State_c **)&v38->_1.interfaceOffsets->offset;
                  while ( *(v41 - 1) != SimpleAnimation_State_TypeInfo )
                  {
                    ++v40;
                    v41 += 2;
                    if ( v40 >= *(unsigned __int16 *)&transform->klass->_2.bitflags1 )
                      goto LABEL_35;
                  }
                  v42 = (__int64)(&v38[1]._1.byval_arg.bits + 4 * *(_DWORD *)v41);
                }
                else
                {
LABEL_35:
                  v42 = sub_AEB880(transform, SimpleAnimation_State_TypeInfo, 6LL, v37);
                }
                (*(void (__fastcall **)(UnityEngine_Component_o *, _QWORD, float))v42)(v39, *(_QWORD *)(v42 + 8), 0.0);
                goto LABEL_38;
              }
            }
          }
        }
      }
    }
LABEL_47:
    sub_B52A5C(transform, v12);
  }
  v30 = *p_mAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v30, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    v31 = *p_mAnimation;
    if ( !*p_mAnimation )
      goto LABEL_47;
    transform = (UnityEngine_Component_o *)UnityEngine_Animation__get_clip(*p_mAnimation, 0LL);
    if ( !transform )
      goto LABEL_47;
    v32 = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0LL);
    transform = (UnityEngine_Component_o *)UnityEngine_Animation__get_Item(v31, v32, 0LL);
    if ( !transform )
      goto LABEL_47;
    UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)transform, 0.0, 0LL);
    v33 = *p_mAnimation;
    if ( !v33 )
      goto LABEL_47;
    transform = (UnityEngine_Component_o *)UnityEngine_Animation__get_clip(v33, 0LL);
    if ( !transform )
      goto LABEL_47;
    v34 = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0LL);
    transform = (UnityEngine_Component_o *)UnityEngine_Animation__get_Item(v33, v34, 0LL);
    if ( !transform )
      goto LABEL_47;
    UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)transform, 0.0, 0LL);
  }
LABEL_38:
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  transform = (UnityEngine_Component_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ConstantStrMaster___);
  if ( !transform )
    goto LABEL_47;
  Value = ConstantStrMaster__GetValue((ConstantStrMaster_o *)transform, (System_String_o *)StringLiteral_11047/*"QUEST_PHASE_REWARD_OVERWRITE_SPRITE"*/, 0LL);
  this->fields.overwriteSpriteName = Value;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.overwriteSpriteName,
    (System_Int32_array **)Value,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  transform = (UnityEngine_Component_o *)this->fields.bgSprite;
  if ( !transform )
    goto LABEL_47;
  UISprite__set_atlas((UISprite_o *)transform, this->fields.systemUIAtlas, 0LL);
  transform = (UnityEngine_Component_o *)this->fields.bgSprite;
  if ( !transform )
    goto LABEL_47;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)transform, (System_String_o *)StringLiteral_21728/*"progress_reward_board"*/, 0LL);
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
  TerminalPramsManager_c *v5; // x0
  WarBoardControlPlayTalkUiComponent_array *ComponentsInChildren_WarBoardControlPlayTalkUiComponent; // x21
  GiftDetailMaster_o *IsNullOrEmpty; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  TerminalPramsManager_c *v10; // x0
  int32_t PhaseCnt_k__BackingField; // w25
  const MethodInfo *v12; // x4
  QuestPhaseMaster_o *Master_WarQuestSelectionMaster; // x22
  int32_t giftId; // w22
  System_String_o *OverwriteImageIdByQuestPhaseReward; // x22
  System_String_o *overwriteSpriteName; // x1
  struct System_Collections_Generic_IEqualityComparer_TKey__o *comparer; // x8
  int monitor; // w9
  int i; // w10
  __int64 v20; // x11
  System_Collections_IEnumerator_o *v21; // x0
  __int64 v22; // x0
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42B48C2 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponentsInChildren_ItemIconComponent___);
    sub_B52984(&Method_DataManager_GetMaster_GiftDetailMaster___);
    sub_B52984(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&TerminalPramsManager_TypeInfo);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B48C2 = 1;
  }
  entity = 0LL;
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  if ( !v5->static_fields->mQuestPhaseRewardInfos )
  {
    ActionExtensions__Call(callback, 0LL);
    return;
  }
  ComponentsInChildren_WarBoardControlPlayTalkUiComponent = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                                              (UnityEngine_Component_o *)this,
                                                              1,
                                                              (const MethodInfo_1A49604 *)Method_UnityEngine_Component_GetComponentsInChildren_ItemIconComponent___);
  IsNullOrEmpty = (GiftDetailMaster_o *)System_String__IsNullOrEmpty(this->fields.overwriteSpriteName, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42AC2B6 )
    {
      sub_B52984(&TerminalPramsManager_TypeInfo);
      byte_42AC2B6 = 1;
    }
    v10 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v10 = TerminalPramsManager_TypeInfo;
    }
    PhaseCnt_k__BackingField = v10->static_fields->_PhaseCnt_k__BackingField;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (QuestPhaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !byte_42AC2B5 )
    {
      sub_B52984(&TerminalPramsManager_TypeInfo);
      byte_42AC2B5 = 1;
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
                                            v12);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
      goto LABEL_43;
    if ( !entity )
      goto LABEL_59;
    giftId = entity->fields.giftId;
    if ( !giftId )
      goto LABEL_43;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    IsNullOrEmpty = (GiftDetailMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_GiftDetailMaster___);
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
        v8 = 0LL;
        if ( !ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
          goto LABEL_58;
      }
      else
      {
        for ( i = 0; i < monitor; ++i )
        {
          if ( i >= (unsigned int)monitor )
            goto LABEL_60;
          v20 = *((_QWORD *)&comparer[2].klass + i);
          if ( !v20 )
            goto LABEL_59;
        }
        v8 = *(unsigned int *)(v20 + 20);
        if ( !ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
          goto LABEL_58;
      }
      if ( ComponentsInChildren_WarBoardControlPlayTalkUiComponent->max_length )
      {
        IsNullOrEmpty = (GiftDetailMaster_o *)ComponentsInChildren_WarBoardControlPlayTalkUiComponent->m_Items[0];
        if ( IsNullOrEmpty )
        {
          ItemIconComponent__SetItemImage((ItemIconComponent_o *)IsNullOrEmpty, v8, 0LL);
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
      sub_B52A5C(IsNullOrEmpty, v8);
    }
LABEL_60:
    v22 = sub_B52A88(IsNullOrEmpty);
    sub_B52A28(v22, 0LL);
  }
LABEL_58:
  v21 = QuestPhaseRewardComponent__Play(this, callback, v9);
  UnityEngine_MonoBehaviour__StartCoroutine_35611808((UnityEngine_MonoBehaviour_o *)this, v21, 0LL);
}


void __fastcall QuestPhaseRewardComponent__OpenByItemIdAndNum(
        QuestPhaseRewardComponent_o *this,
        int32_t itemId,
        int32_t itemNum,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  UISprite_o *bgSprite; // x22
  Il2CppObject *v10; // x0
  System_String_o *v11; // x23
  UILabel_o *countLabel; // x22
  System_String_o *v13; // x23
  Il2CppObject *v14; // x0
  System_String_o *gameObject; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x2
  System_Collections_IEnumerator_o *v18; // x0
  int32_t v19; // [xsp+8h] [xbp-38h] BYREF
  int32_t v20; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42B48C3 & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_21729/*"progress_reward_board_{0}"*/);
    sub_B52984(&StringLiteral_8906/*"MULTIPLE_INFO"*/);
    byte_42B48C3 = 1;
  }
  bgSprite = this->fields.bgSprite;
  v20 = itemId;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20);
  v11 = System_String__Format((System_String_o *)StringLiteral_21729/*"progress_reward_board_{0}"*/, v10, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventSprite(bgSprite, v11, 0LL);
  countLabel = this->fields.countLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_8906/*"MULTIPLE_INFO"*/, 0LL);
  v19 = itemNum;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19);
  gameObject = System_String__Format(v13, v14, 0LL);
  if ( !countLabel
    || (UILabel__set_text(countLabel, gameObject, 0LL), (gameObject = (System_String_o *)this->fields.countLabel) == 0LL)
    || (gameObject = (System_String_o *)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)gameObject,
                                          0LL)) == 0LL )
  {
    sub_B52A5C(gameObject, v16);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  v18 = QuestPhaseRewardComponent__Play(this, endAction, v17);
  UnityEngine_MonoBehaviour__StartCoroutine_35611808((UnityEngine_MonoBehaviour_o *)this, v18, 0LL);
}


System_Collections_IEnumerator_o *__fastcall QuestPhaseRewardComponent__Play(
        QuestPhaseRewardComponent_o *this,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
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

  if ( (byte_42B48C4 & 1) == 0 )
  {
    sub_B52984(&QuestPhaseRewardComponent__Play_d__21_TypeInfo);
    byte_42B48C4 = 1;
  }
  v5 = sub_B52A54(QuestPhaseRewardComponent__Play_d__21_TypeInfo);
  QuestPhaseRewardComponent__Play_d__21___ctor((QuestPhaseRewardComponent__Play_d__21_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_B52A5C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B52920((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 40) = end_act;
  sub_B52920((BattleServantConfConponent_o *)(v5 + 40), (System_Int32_array **)end_act, v14, v15, v16, v17, v18, v19);
  return (System_Collections_IEnumerator_o *)v5;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestPhaseRewardComponent__SetState(
        QuestPhaseRewardComponent_o *this,
        int32_t state,
        const MethodInfo *method)
{
  struct CStateManager_QuestPhaseRewardComponent__o *mFSM; // x0

  if ( (byte_42B48C6 & 1) == 0 )
  {
    sub_B52984(&Method_CStateManager_QuestPhaseRewardComponent__setState__);
    byte_42B48C6 = 1;
  }
  mFSM = this->fields.mFSM;
  if ( !mFSM )
    sub_B52A5C(0LL, *(_QWORD *)&state);
  CStateManager_QAASpotStateController_IMapSpot___setState(
    (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
    state,
    (const MethodInfo_2B92734 *)Method_CStateManager_QuestPhaseRewardComponent__setState__);
}


void __fastcall QuestPhaseRewardComponent__Update(QuestPhaseRewardComponent_o *this, const MethodInfo *method)
{
  struct CStateManager_QuestPhaseRewardComponent__o *mFSM; // x0

  if ( (byte_42B48C0 & 1) == 0 )
  {
    sub_B52984(&Method_CStateManager_QuestPhaseRewardComponent__update__);
    byte_42B48C0 = 1;
  }
  mFSM = this->fields.mFSM;
  if ( mFSM )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      (const MethodInfo_2B9270C *)Method_CStateManager_QuestPhaseRewardComponent__update__);
}


bool __fastcall QuestPhaseRewardComponent___Play_b__21_0(QuestPhaseRewardComponent_o *this, const MethodInfo *method)
{
  System_String_o *DISP_SE; // x19

  if ( (byte_42B48C8 & 1) == 0 )
  {
    sub_B52984(&SeManager_TypeInfo);
    byte_42B48C8 = 1;
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
  UnityEngine_Object_o *mSimpleAnimation; // x20
  struct SimpleAnimation_o *v5; // x20
  System_String_o *v6; // x0
  struct SimpleAnimation_o *v7; // x20
  System_String_o *v8; // x0
  struct SimpleAnimation_o *v9; // x20
  System_String_o *v10; // x0
  __int64 v11; // x3
  QuestPhaseRewardComponent_StatePlay_c *klass; // x8
  QuestPhaseRewardComponent_StatePlay_o *v13; // x20
  unsigned __int64 v14; // x10
  int32_t *p_offset; // x11
  __int64 v16; // x0
  UnityEngine_Object_o *mAnimation; // x20
  UnityEngine_Animation_o *v18; // x20
  System_String_o *name; // x0
  UnityEngine_Animation_o *v20; // x20
  System_String_o *v21; // x0
  UnityEngine_Animation_o *v22; // x20
  System_String_o *v23; // x0
  UnityEngine_Animation_o *v24; // x19
  System_String_o *v25; // x0
  struct SimpleAnimation_o *v26; // x19
  System_String_o *v27; // x0
  __int64 v28; // x3
  QuestPhaseRewardComponent_StatePlay_c *v29; // x8
  QuestPhaseRewardComponent_StatePlay_o *v30; // x19
  unsigned __int64 v31; // x10
  int32_t *v32; // x11
  __int64 v33; // x0

  if ( (byte_42AF25C & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    this = (QuestPhaseRewardComponent_StatePlay_o *)sub_B52984(&SimpleAnimation_State_TypeInfo);
    byte_42AF25C = 1;
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
    v18 = that->fields.mAnimation;
    if ( v18 )
    {
      this = (QuestPhaseRewardComponent_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0LL);
      if ( this )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
        this = (QuestPhaseRewardComponent_StatePlay_o *)UnityEngine_Animation__IsPlaying(v18, name, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v20 = that->fields.mAnimation;
          if ( !v20 )
            goto LABEL_51;
          this = (QuestPhaseRewardComponent_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0LL);
          if ( !this )
            goto LABEL_51;
          v21 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
          this = (QuestPhaseRewardComponent_StatePlay_o *)UnityEngine_Animation__Play_51067744(v20, v21, 0LL);
        }
        v22 = that->fields.mAnimation;
        if ( v22 )
        {
          this = (QuestPhaseRewardComponent_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0LL);
          if ( this )
          {
            v23 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
            this = (QuestPhaseRewardComponent_StatePlay_o *)UnityEngine_Animation__get_Item(v22, v23, 0LL);
            if ( this )
            {
              UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)this, 0.0, 0LL);
              v24 = that->fields.mAnimation;
              if ( v24 )
              {
                this = (QuestPhaseRewardComponent_StatePlay_o *)UnityEngine_Animation__get_clip(v24, 0LL);
                if ( this )
                {
                  v25 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
                  this = (QuestPhaseRewardComponent_StatePlay_o *)UnityEngine_Animation__get_Item(v24, v25, 0LL);
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
    sub_B52A5C(this, that);
  }
  v5 = that->fields.mSimpleAnimation;
  if ( !v5 )
    goto LABEL_51;
  this = (QuestPhaseRewardComponent_StatePlay_o *)v5[1].monitor;
  if ( !this )
    goto LABEL_51;
  v6 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestPhaseRewardComponent_StatePlay_o *)SimpleAnimation__IsPlaying(v5, v6, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v7 = that->fields.mSimpleAnimation;
    if ( !v7 )
      goto LABEL_51;
    this = (QuestPhaseRewardComponent_StatePlay_o *)v7[1].monitor;
    if ( !this )
      goto LABEL_51;
    v8 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
    this = (QuestPhaseRewardComponent_StatePlay_o *)SimpleAnimation__Play_16625408(v7, v8, 0LL);
  }
  v9 = that->fields.mSimpleAnimation;
  if ( !v9 )
    goto LABEL_51;
  this = (QuestPhaseRewardComponent_StatePlay_o *)v9[1].monitor;
  if ( !this )
    goto LABEL_51;
  v10 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestPhaseRewardComponent_StatePlay_o *)SimpleAnimation__get_Item(v9, v10, 0LL);
  if ( !this )
    goto LABEL_51;
  klass = this->klass;
  v13 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v14 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((SimpleAnimation_State_c **)p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v14;
      p_offset += 4;
      if ( v14 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_21;
    }
    v16 = (__int64)(&klass->vtable._6_end.method + 2 * *p_offset);
  }
  else
  {
LABEL_21:
    v16 = sub_AEB880(this, SimpleAnimation_State_TypeInfo, 6LL, v11);
  }
  this = (QuestPhaseRewardComponent_StatePlay_o *)(*(__int64 (__fastcall **)(QuestPhaseRewardComponent_StatePlay_o *, _QWORD, float))v16)(
                                                    v13,
                                                    *(_QWORD *)(v16 + 8),
                                                    0.0);
  v26 = that->fields.mSimpleAnimation;
  if ( !v26 )
    goto LABEL_51;
  this = (QuestPhaseRewardComponent_StatePlay_o *)v26[1].monitor;
  if ( !this )
    goto LABEL_51;
  v27 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestPhaseRewardComponent_StatePlay_o *)SimpleAnimation__get_Item(v26, v27, 0LL);
  if ( !this )
    goto LABEL_51;
  v29 = this->klass;
  v30 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v31 = 0LL;
    v32 = &v29->_1.interfaceOffsets->offset;
    while ( *((SimpleAnimation_State_c **)v32 - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v31;
      v32 += 4;
      if ( v31 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_48;
    }
    v33 = (__int64)(&v29[1]._1.namespaze + 2 * *v32);
  }
  else
  {
LABEL_48:
    v33 = sub_AEB880(this, SimpleAnimation_State_TypeInfo, 8LL, v28);
  }
  (*(void (__fastcall **)(QuestPhaseRewardComponent_StatePlay_o *, _QWORD, float))v33)(v30, *(_QWORD *)(v33 + 8), 1.0);
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
  System_String_o *name; // x0
  UnityEngine_Object_o *mAnimation; // x20
  UnityEngine_Animation_o *v8; // x20
  System_String_o *v9; // x0

  if ( (byte_42AF25D & 1) == 0 )
  {
    this = (QuestPhaseRewardComponent_StatePlay_o *)sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AF25D = 1;
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
    v5 = that->fields.mSimpleAnimation;
    if ( v5 )
    {
      this = (QuestPhaseRewardComponent_StatePlay_o *)v5[1].monitor;
      if ( this )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
        if ( !SimpleAnimation__IsPlaying(v5, name, 0LL) )
          goto LABEL_20;
        return;
      }
    }
LABEL_21:
    sub_B52A5C(this, that);
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
  v8 = that->fields.mAnimation;
  if ( !v8 )
    goto LABEL_21;
  this = (QuestPhaseRewardComponent_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0LL);
  if ( !this )
    goto LABEL_21;
  v9 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  if ( !UnityEngine_Animation__IsPlaying(v8, v9, 0LL) )
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
  int32_t _1__state; // w8
  struct QuestPhaseRewardComponent_o *_4__this; // x20
  BattleServantConfConponent_o *p__2__current; // x19
  bool result; // w0
  System_Int32_array **end_act; // x1
  System_String_o *DISP_SE; // x21
  System_Func_bool__o *v15; // x21
  UnityEngine_WaitUntil_o *v16; // x20
  BattleServantConfConponent_o *v17; // x19
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  v8 = this;
  if ( (byte_42AF25B & 1) == 0 )
  {
    sub_B52984(&Method_System_Func_bool___ctor__);
    sub_B52984(&System_Func_bool__TypeInfo);
    sub_B52984(&Method_QuestPhaseRewardComponent__Play_b__21_0__);
    sub_B52984(&SoundManager_TypeInfo);
    this = (QuestPhaseRewardComponent__Play_d__21_o *)sub_B52984(&UnityEngine_WaitUntil_TypeInfo);
    byte_42AF25B = 1;
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
    sub_B52A5C(this, method);
  }
  if ( _1__state != 1 )
  {
    if ( !_1__state )
    {
      v8->fields.__2__current = 0LL;
      p__2__current = (BattleServantConfConponent_o *)&v8->fields.__2__current;
      *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = -1;
      sub_B52920(p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
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
  sub_B52920((BattleServantConfConponent_o *)&_4__this->fields.mEndAct, end_act, v2, v3, v4, v5, v6, v7);
  DISP_SE = _4__this->fields.DISP_SE;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSe(DISP_SE, 0LL);
  v15 = (System_Func_bool__o *)sub_B52A54(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v15,
    (Il2CppObject *)_4__this,
    Method_QuestPhaseRewardComponent__Play_b__21_0__,
    (const MethodInfo_27742F0 *)Method_System_Func_bool___ctor__);
  v16 = (UnityEngine_WaitUntil_o *)sub_B52A54(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v16, v15, 0LL);
  v8->fields.__2__current = (Il2CppObject *)v16;
  v17 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
  sub_B52920(v17, (System_Int32_array **)v16, v18, v19, v20, v21, v22, v23);
  *(_DWORD *)&v17[-1].fields.isOpenAfter = 2;
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

  v2 = sub_B52988(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B52A54(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B52988(&Method_QuestPhaseRewardComponent__Play_d__21_System_Collections_IEnumerator_Reset__);
  sub_B52A28(v3, v4);
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