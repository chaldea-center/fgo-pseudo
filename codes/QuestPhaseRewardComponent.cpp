void __fastcall QuestPhaseRewardComponent___ctor(QuestPhaseRewardComponent_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1

  if ( (byte_418AECB & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_21597/*"qev79"*/, method);
    byte_418AECB = 1;
  }
  v9 = (System_Int32_array **)StringLiteral_21597/*"qev79"*/;
  this->fields.DISP_SE = (struct System_String_o *)StringLiteral_21597/*"qev79"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.DISP_SE, v9, v2, v3, v4, v5, v6, v7);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall QuestPhaseRewardComponent__Awake(QuestPhaseRewardComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  CStateManager_QAASpotStateController_IMapSpot__o *v7; // x21
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct CStateManager_QuestPhaseRewardComponent__o *mFSM; // x21
  QuestPhaseRewardComponent_StateNone_o *v15; // x22
  __int64 v16; // x0
  __int64 v17; // x1
  struct CStateManager_QuestPhaseRewardComponent__o *v18; // x20
  QuestPhaseRewardComponent_StatePlay_o *v19; // x21
  const MethodInfo *v20; // x2

  if ( (byte_418AEC3 & 1) == 0 )
  {
    sub_B2C35C(&Method_CStateManager_QuestPhaseRewardComponent___ctor__, method);
    sub_B2C35C(&Method_CStateManager_QuestPhaseRewardComponent__add__, v3);
    sub_B2C35C(&CStateManager_QuestPhaseRewardComponent__TypeInfo, v4);
    sub_B2C35C(&QuestPhaseRewardComponent_StateNone_TypeInfo, v5);
    sub_B2C35C(&QuestPhaseRewardComponent_StatePlay_TypeInfo, v6);
    byte_418AEC3 = 1;
  }
  if ( !this->fields.mFSM )
  {
    v7 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B2C42C(CStateManager_QuestPhaseRewardComponent__TypeInfo);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v7,
      (QAASpotStateController_IMapSpot_o *)this,
      2,
      (const MethodInfo_2A08354 *)Method_CStateManager_QuestPhaseRewardComponent___ctor__);
    this->fields.mFSM = (struct CStateManager_QuestPhaseRewardComponent__o *)v7;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.mFSM,
      (System_Int32_array **)v7,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
    mFSM = this->fields.mFSM;
    v15 = (QuestPhaseRewardComponent_StateNone_o *)sub_B2C42C(QuestPhaseRewardComponent_StateNone_TypeInfo);
    QuestPhaseRewardComponent_StateNone___ctor(v15, 0LL);
    if ( !mFSM
      || (CStateManager_QAASpotStateController_IMapSpot___add(
            (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
            0,
            (IState_T__o *)v15,
            (const MethodInfo_2A08420 *)Method_CStateManager_QuestPhaseRewardComponent__add__),
          v18 = this->fields.mFSM,
          v19 = (QuestPhaseRewardComponent_StatePlay_o *)sub_B2C42C(QuestPhaseRewardComponent_StatePlay_TypeInfo),
          QuestPhaseRewardComponent_StatePlay___ctor(v19, 0LL),
          !v18) )
    {
      sub_B2C434(v16, v17);
    }
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)v18,
      1,
      (IState_T__o *)v19,
      (const MethodInfo_2A08420 *)Method_CStateManager_QuestPhaseRewardComponent__add__);
    QuestPhaseRewardComponent__SetState(this, 0, v20);
  }
}


int32_t __fastcall QuestPhaseRewardComponent__GetState(QuestPhaseRewardComponent_o *this, const MethodInfo *method)
{
  QuestPhaseRewardComponent_o *v2; // x19
  struct CStateManager_QuestPhaseRewardComponent__o *mFSM; // x8

  v2 = this;
  if ( (byte_418AEC9 & 1) == 0 )
  {
    this = (QuestPhaseRewardComponent_o *)sub_B2C35C(
                                            &Method_CStateManager_QuestPhaseRewardComponent__getState__,
                                            method);
    byte_418AEC9 = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_B2C434(this, method);
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
  __int64 v19; // x1
  struct SimpleAnimation_o *ComponentInChildren_UIWidget; // x0
  struct SimpleAnimation_o **p_mSimpleAnimation; // x21
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  UnityEngine_Object_o *mSimpleAnimation; // x22
  SimpleAnimation_o *v29; // x20
  System_String_o *name; // x0
  __int64 v31; // x3
  UnityEngine_Component_c *klass; // x8
  UnityEngine_Component_o *v33; // x20
  unsigned __int64 v34; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v36; // x0
  UnityEngine_Animation_o *v37; // x21
  UnityEngine_Animation_o *v38; // x21
  System_String_o *v39; // x0
  UnityEngine_Animation_o *v40; // x20
  System_String_o *v41; // x0
  SimpleAnimation_o *v42; // x20
  System_String_o *v43; // x0
  __int64 v44; // x3
  UnityEngine_Component_c *v45; // x8
  UnityEngine_Component_o *v46; // x20
  unsigned __int64 v47; // x10
  SimpleAnimation_State_c **v48; // x11
  __int64 v49; // x0
  struct System_String_o *Value; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7

  if ( (byte_418AEC5 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___, method);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_Animation___, v3);
    sub_B2C35C(&Method_DataManager_GetMaster_ConstantStrMaster___, v4);
    sub_B2C35C(&DataManager_TypeInfo, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    sub_B2C35C(&SimpleAnimation_State_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_21551/*"progress_reward_board"*/, v8);
    sub_B2C35C(&StringLiteral_10963/*"QUEST_PHASE_REWARD_OVERWRITE_SPRITE"*/, v9);
    byte_418AEC5 = 1;
  }
  Component_WebViewObject = (struct UnityEngine_Animation_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                (UnityEngine_Component_o *)this,
                                                                (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Animation___);
  p_mAnimation = &this->fields.mAnimation;
  this->fields.mAnimation = Component_WebViewObject;
  sub_B2C2F8(
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
                                                               (const MethodInfo_172DC3C *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  this->fields.mSimpleAnimation = ComponentInChildren_UIWidget;
  p_mSimpleAnimation = &this->fields.mSimpleAnimation;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.mSimpleAnimation,
    (System_Int32_array **)ComponentInChildren_UIWidget,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  mSimpleAnimation = (UnityEngine_Object_o *)this->fields.mSimpleAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(mSimpleAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    v29 = *p_mSimpleAnimation;
    if ( *p_mSimpleAnimation )
    {
      transform = (UnityEngine_Component_o *)v29[1].monitor;
      if ( transform )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0LL);
        transform = (UnityEngine_Component_o *)SimpleAnimation__get_Item(v29, name, 0LL);
        if ( transform )
        {
          klass = transform->klass;
          v33 = transform;
          if ( *(_WORD *)&transform->klass->_2.bitflags1 )
          {
            v34 = 0LL;
            p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
            while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
            {
              ++v34;
              p_offset += 2;
              if ( v34 >= *(unsigned __int16 *)&transform->klass->_2.bitflags1 )
                goto LABEL_15;
            }
            v36 = (__int64)(&klass[1]._1.castClass + 2 * *(_DWORD *)p_offset);
          }
          else
          {
LABEL_15:
            v36 = sub_AC5258(transform, SimpleAnimation_State_TypeInfo, 8LL, v31);
          }
          transform = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(UnityEngine_Component_o *, _QWORD, float))v36)(
                                                   v33,
                                                   *(_QWORD *)(v36 + 8),
                                                   0.0);
          v42 = *p_mSimpleAnimation;
          if ( *p_mSimpleAnimation )
          {
            transform = (UnityEngine_Component_o *)v42[1].monitor;
            if ( transform )
            {
              v43 = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0LL);
              transform = (UnityEngine_Component_o *)SimpleAnimation__get_Item(v42, v43, 0LL);
              if ( transform )
              {
                v45 = transform->klass;
                v46 = transform;
                if ( *(_WORD *)&transform->klass->_2.bitflags1 )
                {
                  v47 = 0LL;
                  v48 = (SimpleAnimation_State_c **)&v45->_1.interfaceOffsets->offset;
                  while ( *(v48 - 1) != SimpleAnimation_State_TypeInfo )
                  {
                    ++v47;
                    v48 += 2;
                    if ( v47 >= *(unsigned __int16 *)&transform->klass->_2.bitflags1 )
                      goto LABEL_35;
                  }
                  v49 = (__int64)(&v45[1]._1.byval_arg.bits + 4 * *(_DWORD *)v48);
                }
                else
                {
LABEL_35:
                  v49 = sub_AC5258(transform, SimpleAnimation_State_TypeInfo, 6LL, v44);
                }
                (*(void (__fastcall **)(UnityEngine_Component_o *, _QWORD, float))v49)(v46, *(_QWORD *)(v49 + 8), 0.0);
                goto LABEL_38;
              }
            }
          }
        }
      }
    }
LABEL_47:
    sub_B2C434(transform, v19);
  }
  v37 = *p_mAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v37, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    v38 = *p_mAnimation;
    if ( !*p_mAnimation )
      goto LABEL_47;
    transform = (UnityEngine_Component_o *)UnityEngine_Animation__get_clip(*p_mAnimation, 0LL);
    if ( !transform )
      goto LABEL_47;
    v39 = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0LL);
    transform = (UnityEngine_Component_o *)UnityEngine_Animation__get_Item(v38, v39, 0LL);
    if ( !transform )
      goto LABEL_47;
    UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)transform, 0.0, 0LL);
    v40 = *p_mAnimation;
    if ( !v40 )
      goto LABEL_47;
    transform = (UnityEngine_Component_o *)UnityEngine_Animation__get_clip(v40, 0LL);
    if ( !transform )
      goto LABEL_47;
    v41 = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0LL);
    transform = (UnityEngine_Component_o *)UnityEngine_Animation__get_Item(v40, v41, 0LL);
    if ( !transform )
      goto LABEL_47;
    UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)transform, 0.0, 0LL);
  }
LABEL_38:
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  transform = (UnityEngine_Component_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ConstantStrMaster___);
  if ( !transform )
    goto LABEL_47;
  Value = ConstantStrMaster__GetValue((ConstantStrMaster_o *)transform, (System_String_o *)StringLiteral_10963/*"QUEST_PHASE_REWARD_OVERWRITE_SPRITE"*/, 0LL);
  this->fields.overwriteSpriteName = Value;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.overwriteSpriteName,
    (System_Int32_array **)Value,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
  transform = (UnityEngine_Component_o *)this->fields.bgSprite;
  if ( !transform )
    goto LABEL_47;
  UISprite__set_atlas((UISprite_o *)transform, this->fields.systemUIAtlas, 0LL);
  transform = (UnityEngine_Component_o *)this->fields.bgSprite;
  if ( !transform )
    goto LABEL_47;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)transform, (System_String_o *)StringLiteral_21551/*"progress_reward_board"*/, 0LL);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  TerminalPramsManager_c *v10; // x0
  WarBoardControlPlayTalkUiComponent_array *ComponentsInChildren_WarBoardControlPlayTalkUiComponent; // x21
  GiftDetailMaster_o *IsNullOrEmpty; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  TerminalPramsManager_c *v15; // x0
  int32_t PhaseCnt_k__BackingField; // w25
  const MethodInfo *v17; // x4
  QuestPhaseMaster_o *Master_WarQuestSelectionMaster; // x22
  int32_t giftId; // w22
  System_String_o *OverwriteImageIdByQuestPhaseReward; // x22
  System_String_o *overwriteSpriteName; // x1
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *entries; // x8
  int max_length; // w9
  int i; // w10
  __int64 v25; // x11
  System_Collections_IEnumerator_o *v26; // x0
  __int64 v27; // x0
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_418AEC6 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponentsInChildren_ItemIconComponent___, callback);
    sub_B2C35C(&Method_DataManager_GetMaster_GiftDetailMaster___, v5);
    sub_B2C35C(&Method_DataManager_GetMaster_QuestPhaseMaster___, v6);
    sub_B2C35C(&DataManager_TypeInfo, v7);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v8);
    sub_B2C35C(&StringLiteral_1/*""*/, v9);
    byte_418AEC6 = 1;
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
                                                              (const MethodInfo_172DFBC *)Method_UnityEngine_Component_GetComponentsInChildren_ItemIconComponent___);
  IsNullOrEmpty = (GiftDetailMaster_o *)System_String__IsNullOrEmpty(this->fields.overwriteSpriteName, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4183C7B )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v13);
      byte_4183C7B = 1;
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
    Master_WarQuestSelectionMaster = (QuestPhaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !byte_4183C7A )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v13);
      byte_4183C7A = 1;
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
                                            v17);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
      goto LABEL_43;
    if ( !entity )
      goto LABEL_59;
    giftId = entity->fields.giftId;
    if ( !giftId )
      goto LABEL_43;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    IsNullOrEmpty = (GiftDetailMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_GiftDetailMaster___);
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
      entries = IsNullOrEmpty[2].fields._lookup[7].fields.entries;
      if ( !entries )
        goto LABEL_59;
      max_length = entries->max_length;
      if ( max_length < 1 )
      {
        v13 = 0LL;
        if ( !ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
          goto LABEL_58;
      }
      else
      {
        for ( i = 0; i < max_length; ++i )
        {
          if ( i >= (unsigned int)max_length )
            goto LABEL_60;
          v25 = *((_QWORD *)&entries->m_Items[0].fields.hashCode + i);
          if ( !v25 )
            goto LABEL_59;
        }
        v13 = *(unsigned int *)(v25 + 20);
        if ( !ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
          goto LABEL_58;
      }
      if ( ComponentsInChildren_WarBoardControlPlayTalkUiComponent->max_length )
      {
        IsNullOrEmpty = (GiftDetailMaster_o *)ComponentsInChildren_WarBoardControlPlayTalkUiComponent->m_Items[0];
        if ( IsNullOrEmpty )
        {
          ItemIconComponent__SetItemImage((ItemIconComponent_o *)IsNullOrEmpty, v13, 0LL);
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
      sub_B2C434(IsNullOrEmpty, v13);
    }
LABEL_60:
    v27 = sub_B2C460(IsNullOrEmpty);
    sub_B2C400(v27, 0LL);
  }
LABEL_58:
  v26 = QuestPhaseRewardComponent__Play(this, callback, v14);
  UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, v26, 0LL);
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
  System_String_o *gameObject; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x2
  System_Collections_IEnumerator_o *v22; // x0
  int32_t v23; // [xsp+8h] [xbp-38h] BYREF
  int32_t v24; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_418AEC7 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, *(_QWORD *)&itemId);
    sub_B2C35C(&int_TypeInfo, v9);
    sub_B2C35C(&LocalizationManager_TypeInfo, v10);
    sub_B2C35C(&StringLiteral_21552/*"progress_reward_board_{0}"*/, v11);
    sub_B2C35C(&StringLiteral_8852/*"MULTIPLE_INFO"*/, v12);
    byte_418AEC7 = 1;
  }
  bgSprite = this->fields.bgSprite;
  v24 = itemId;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24);
  v15 = System_String__Format((System_String_o *)StringLiteral_21552/*"progress_reward_board_{0}"*/, v14, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventSprite(bgSprite, v15, 0LL);
  countLabel = this->fields.countLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_8852/*"MULTIPLE_INFO"*/, 0LL);
  v23 = itemNum;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23);
  gameObject = System_String__Format(v17, v18, 0LL);
  if ( !countLabel
    || (UILabel__set_text(countLabel, gameObject, 0LL), (gameObject = (System_String_o *)this->fields.countLabel) == 0LL)
    || (gameObject = (System_String_o *)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)gameObject,
                                          0LL)) == 0LL )
  {
    sub_B2C434(gameObject, v20);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  v22 = QuestPhaseRewardComponent__Play(this, endAction, v21);
  UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, v22, 0LL);
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

  if ( (byte_418AEC8 & 1) == 0 )
  {
    sub_B2C35C(&QuestPhaseRewardComponent__Play_d__21_TypeInfo, end_act);
    byte_418AEC8 = 1;
  }
  v5 = sub_B2C42C(QuestPhaseRewardComponent__Play_d__21_TypeInfo);
  QuestPhaseRewardComponent__Play_d__21___ctor((QuestPhaseRewardComponent__Play_d__21_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_B2C434(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 40) = end_act;
  sub_B2C2F8((BattleServantConfConponent_o *)(v5 + 40), (System_Int32_array **)end_act, v14, v15, v16, v17, v18, v19);
  return (System_Collections_IEnumerator_o *)v5;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestPhaseRewardComponent__SetState(
        QuestPhaseRewardComponent_o *this,
        int32_t state,
        const MethodInfo *method)
{
  struct CStateManager_QuestPhaseRewardComponent__o *mFSM; // x0

  if ( (byte_418AECA & 1) == 0 )
  {
    sub_B2C35C(&Method_CStateManager_QuestPhaseRewardComponent__setState__, *(_QWORD *)&state);
    byte_418AECA = 1;
  }
  mFSM = this->fields.mFSM;
  if ( !mFSM )
    sub_B2C434(0LL, *(_QWORD *)&state);
  CStateManager_QAASpotStateController_IMapSpot___setState(
    (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
    state,
    (const MethodInfo_2A084C4 *)Method_CStateManager_QuestPhaseRewardComponent__setState__);
}


void __fastcall QuestPhaseRewardComponent__Update(QuestPhaseRewardComponent_o *this, const MethodInfo *method)
{
  struct CStateManager_QuestPhaseRewardComponent__o *mFSM; // x0

  if ( (byte_418AEC4 & 1) == 0 )
  {
    sub_B2C35C(&Method_CStateManager_QuestPhaseRewardComponent__update__, method);
    byte_418AEC4 = 1;
  }
  mFSM = this->fields.mFSM;
  if ( mFSM )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      (const MethodInfo_2A0849C *)Method_CStateManager_QuestPhaseRewardComponent__update__);
}


bool __fastcall QuestPhaseRewardComponent___Play_b__21_0(QuestPhaseRewardComponent_o *this, const MethodInfo *method)
{
  System_String_o *DISP_SE; // x19

  if ( (byte_418AECC & 1) == 0 )
  {
    sub_B2C35C(&SeManager_TypeInfo, method);
    byte_418AECC = 1;
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
  System_String_o *v7; // x0
  struct SimpleAnimation_o *v8; // x20
  System_String_o *v9; // x0
  struct SimpleAnimation_o *v10; // x20
  System_String_o *v11; // x0
  __int64 v12; // x3
  QuestPhaseRewardComponent_StatePlay_c *klass; // x8
  QuestPhaseRewardComponent_StatePlay_o *v14; // x20
  unsigned __int64 v15; // x10
  int32_t *p_offset; // x11
  __int64 v17; // x0
  UnityEngine_Object_o *mAnimation; // x20
  UnityEngine_Animation_o *v19; // x20
  System_String_o *name; // x0
  UnityEngine_Animation_o *v21; // x20
  System_String_o *v22; // x0
  UnityEngine_Animation_o *v23; // x20
  System_String_o *v24; // x0
  UnityEngine_Animation_o *v25; // x19
  System_String_o *v26; // x0
  struct SimpleAnimation_o *v27; // x19
  System_String_o *v28; // x0
  __int64 v29; // x3
  QuestPhaseRewardComponent_StatePlay_c *v30; // x8
  QuestPhaseRewardComponent_StatePlay_o *v31; // x19
  unsigned __int64 v32; // x10
  int32_t *v33; // x11
  __int64 v34; // x0

  if ( (byte_418560C & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, that);
    this = (QuestPhaseRewardComponent_StatePlay_o *)sub_B2C35C(&SimpleAnimation_State_TypeInfo, v4);
    byte_418560C = 1;
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
    v19 = that->fields.mAnimation;
    if ( v19 )
    {
      this = (QuestPhaseRewardComponent_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0LL);
      if ( this )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
        this = (QuestPhaseRewardComponent_StatePlay_o *)UnityEngine_Animation__IsPlaying(v19, name, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v21 = that->fields.mAnimation;
          if ( !v21 )
            goto LABEL_51;
          this = (QuestPhaseRewardComponent_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0LL);
          if ( !this )
            goto LABEL_51;
          v22 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
          this = (QuestPhaseRewardComponent_StatePlay_o *)UnityEngine_Animation__Play_50201580(v21, v22, 0LL);
        }
        v23 = that->fields.mAnimation;
        if ( v23 )
        {
          this = (QuestPhaseRewardComponent_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0LL);
          if ( this )
          {
            v24 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
            this = (QuestPhaseRewardComponent_StatePlay_o *)UnityEngine_Animation__get_Item(v23, v24, 0LL);
            if ( this )
            {
              UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)this, 0.0, 0LL);
              v25 = that->fields.mAnimation;
              if ( v25 )
              {
                this = (QuestPhaseRewardComponent_StatePlay_o *)UnityEngine_Animation__get_clip(v25, 0LL);
                if ( this )
                {
                  v26 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
                  this = (QuestPhaseRewardComponent_StatePlay_o *)UnityEngine_Animation__get_Item(v25, v26, 0LL);
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
    sub_B2C434(this, that);
  }
  v6 = that->fields.mSimpleAnimation;
  if ( !v6 )
    goto LABEL_51;
  this = (QuestPhaseRewardComponent_StatePlay_o *)v6[1].monitor;
  if ( !this )
    goto LABEL_51;
  v7 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestPhaseRewardComponent_StatePlay_o *)SimpleAnimation__IsPlaying(v6, v7, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v8 = that->fields.mSimpleAnimation;
    if ( !v8 )
      goto LABEL_51;
    this = (QuestPhaseRewardComponent_StatePlay_o *)v8[1].monitor;
    if ( !this )
      goto LABEL_51;
    v9 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
    this = (QuestPhaseRewardComponent_StatePlay_o *)SimpleAnimation__Play_16486620(v8, v9, 0LL);
  }
  v10 = that->fields.mSimpleAnimation;
  if ( !v10 )
    goto LABEL_51;
  this = (QuestPhaseRewardComponent_StatePlay_o *)v10[1].monitor;
  if ( !this )
    goto LABEL_51;
  v11 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestPhaseRewardComponent_StatePlay_o *)SimpleAnimation__get_Item(v10, v11, 0LL);
  if ( !this )
    goto LABEL_51;
  klass = this->klass;
  v14 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v15 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((SimpleAnimation_State_c **)p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v15;
      p_offset += 4;
      if ( v15 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_21;
    }
    v17 = (__int64)(&klass->vtable._6_end.method + 2 * *p_offset);
  }
  else
  {
LABEL_21:
    v17 = sub_AC5258(this, SimpleAnimation_State_TypeInfo, 6LL, v12);
  }
  this = (QuestPhaseRewardComponent_StatePlay_o *)(*(__int64 (__fastcall **)(QuestPhaseRewardComponent_StatePlay_o *, _QWORD, float))v17)(
                                                    v14,
                                                    *(_QWORD *)(v17 + 8),
                                                    0.0);
  v27 = that->fields.mSimpleAnimation;
  if ( !v27 )
    goto LABEL_51;
  this = (QuestPhaseRewardComponent_StatePlay_o *)v27[1].monitor;
  if ( !this )
    goto LABEL_51;
  v28 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestPhaseRewardComponent_StatePlay_o *)SimpleAnimation__get_Item(v27, v28, 0LL);
  if ( !this )
    goto LABEL_51;
  v30 = this->klass;
  v31 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v32 = 0LL;
    v33 = &v30->_1.interfaceOffsets->offset;
    while ( *((SimpleAnimation_State_c **)v33 - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v32;
      v33 += 4;
      if ( v32 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_48;
    }
    v34 = (__int64)(&v30[1]._1.namespaze + 2 * *v33);
  }
  else
  {
LABEL_48:
    v34 = sub_AC5258(this, SimpleAnimation_State_TypeInfo, 8LL, v29);
  }
  (*(void (__fastcall **)(QuestPhaseRewardComponent_StatePlay_o *, _QWORD, float))v34)(v31, *(_QWORD *)(v34 + 8), 1.0);
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

  if ( (byte_418560D & 1) == 0 )
  {
    this = (QuestPhaseRewardComponent_StatePlay_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, that);
    byte_418560D = 1;
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
    sub_B2C434(this, that);
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
  QuestPhaseRewardComponent__Play_d__21_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t _1__state; // w8
  QuestPhaseRewardComponent_o *_4__this; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  struct System_Action_o *end_act; // x1
  System_String_o *DISP_SE; // x21
  System_Func_bool__o *v13; // x21
  UnityEngine_WaitUntil_o *v14; // x20
  Il2CppObject **v15; // x19

  v2 = this;
  if ( (byte_418560B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Func_bool___ctor__, method);
    sub_B2C35C(&System_Func_bool__TypeInfo, v3);
    sub_B2C35C(&Method_QuestPhaseRewardComponent__Play_b__21_0__, v4);
    sub_B2C35C(&SoundManager_TypeInfo, v5);
    this = (QuestPhaseRewardComponent__Play_d__21_o *)sub_B2C35C(&UnityEngine_WaitUntil_TypeInfo, v6);
    byte_418560B = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 2 )
  {
    v2->fields.__1__state = -1;
    if ( _4__this )
    {
      QuestPhaseRewardComponent__SetState(_4__this, 1, 0LL);
      return 0;
    }
LABEL_15:
    sub_B2C434(this, method);
  }
  if ( _1__state != 1 )
  {
    if ( !_1__state )
    {
      v2->fields.__2__current = 0LL;
      p__2__current = &v2->fields.__2__current;
      *((_DWORD *)p__2__current - 2) = -1;
      sub_B2C2F8(p__2__current, 0LL);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
    return 0;
  }
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_15;
  end_act = v2->fields.end_act;
  _4__this->fields.mEndAct = end_act;
  sub_B2C2F8(&_4__this->fields.mEndAct, end_act);
  DISP_SE = _4__this->fields.DISP_SE;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSe(DISP_SE, 0LL);
  v13 = (System_Func_bool__o *)sub_B2C42C(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v13,
    (Il2CppObject *)_4__this,
    Method_QuestPhaseRewardComponent__Play_b__21_0__,
    (const MethodInfo_26FE8F8 *)Method_System_Func_bool___ctor__);
  v14 = (UnityEngine_WaitUntil_o *)sub_B2C42C(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v14, v13, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v14;
  v15 = &v2->fields.__2__current;
  sub_B2C2F8(v15, v14);
  *((_DWORD *)v15 - 2) = 2;
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

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_QuestPhaseRewardComponent__Play_d__21_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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