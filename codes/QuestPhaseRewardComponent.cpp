void QuestPhaseRewardComponent___ctor(QuestPhaseRewardComponent_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t v9; // w1

  if ( (byte_596A88F & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_24035/*"qev79"*/);
    byte_596A88F = 1;
  }
  v9 = StringLiteral_24035/*"qev79"*/;
  this->fields.DISP_SE = (struct System_String_o *)StringLiteral_24035/*"qev79"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.DISP_SE, v9, v2, v3, v4, v5, v6, v7);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void QuestPhaseRewardComponent__Awake(QuestPhaseRewardComponent_o *this, const MethodInfo *method)
{
  CStateManager_T__o *v3; // x21
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  CStateManager_T__o *mFSM; // x21
  Il2CppObject *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  CStateManager_T__o *v14; // x20
  Il2CppObject *v15; // x21
  const MethodInfo *v16; // x2

  if ( (byte_596A885 & 1) == 0 )
  {
    sub_2213A60(&Method_CStateManager_QuestPhaseRewardComponent___ctor__);
    sub_2213A60(&Method_CStateManager_QuestPhaseRewardComponent__add__);
    sub_2213A60(&CStateManager_QuestPhaseRewardComponent__TypeInfo);
    sub_2213A60(&QuestPhaseRewardComponent_StateNone_TypeInfo);
    sub_2213A60(&QuestPhaseRewardComponent_StatePlay_TypeInfo);
    byte_596A885 = 1;
  }
  if ( !this->fields.mFSM )
  {
    v3 = (CStateManager_T__o *)sub_2213CCC(CStateManager_QuestPhaseRewardComponent__TypeInfo);
    CStateManager_object____ctor(
      v3,
      (Il2CppObject *)this,
      2,
      (const MethodInfo_3E83D54 *)Method_CStateManager_QuestPhaseRewardComponent___ctor__);
    this->fields.mFSM = (struct CStateManager_QuestPhaseRewardComponent__o *)v3;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mFSM, (int32_t)v3, v4, v5, v6, v7, v8, v9);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v11 = (Il2CppObject *)sub_2213CCC(QuestPhaseRewardComponent_StateNone_TypeInfo);
    System_Object___ctor(v11, 0);
    if ( !mFSM
      || (CStateManager_object___add(
            mFSM,
            0,
            (IState_T__o *)v11,
            (const MethodInfo_3E83E04 *)Method_CStateManager_QuestPhaseRewardComponent__add__),
          v14 = (CStateManager_T__o *)this->fields.mFSM,
          v15 = (Il2CppObject *)sub_2213CCC(QuestPhaseRewardComponent_StatePlay_TypeInfo),
          System_Object___ctor(v15, 0),
          !v14) )
    {
      sub_2213CDC(v12, v13);
    }
    CStateManager_object___add(
      v14,
      1,
      (IState_T__o *)v15,
      (const MethodInfo_3E83E04 *)Method_CStateManager_QuestPhaseRewardComponent__add__);
    QuestPhaseRewardComponent__SetState(this, 0, v16);
  }
}


System_String_o *QuestPhaseRewardComponent__GetBgSpriteName(int32_t type, int32_t itemId, const MethodInfo *method)
{
  Il2CppObject **v5; // x8
  Il2CppObject *v6; // x20
  Il2CppObject *v7; // x0
  System_String_o *v8; // x20
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  Il2CppObject *v11; // x0
  int32_t v13; // [xsp+8h] [xbp-48h] BYREF
  int32_t v14; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_596A88A & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    sub_2213A60(&StringLiteral_26596/*"{0}_{1}"*/);
    sub_2213A60(&StringLiteral_23984/*"progress_reward_board"*/);
    sub_2213A60(&StringLiteral_25842/*"use_add_reward_item_reward_board"*/);
    byte_596A88A = 1;
  }
  if ( type == 4 )
    v5 = (Il2CppObject **)&StringLiteral_25842/*"use_add_reward_item_reward_board"*/;
  else
    v5 = (Il2CppObject **)&StringLiteral_23984/*"progress_reward_board"*/;
  v6 = *v5;
  v14 = itemId;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v14);
  v8 = System_String__Format_75697880((System_String_o *)StringLiteral_26596/*"{0}_{1}"*/, v6, v7, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v10);
  if ( !AtlasManager__HasSpriteInEventAtlas((AtlasManager_o *)Instance, v8, 0) )
  {
    v13 = itemId;
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v13);
    return System_String__Format_75697880(
             (System_String_o *)StringLiteral_26596/*"{0}_{1}"*/,
             (Il2CppObject *)StringLiteral_23984/*"progress_reward_board"*/,
             v11,
             0);
  }
  return v8;
}


int32_t QuestPhaseRewardComponent__GetState(QuestPhaseRewardComponent_o *this, const MethodInfo *method)
{
  QuestPhaseRewardComponent_o *v2; // x19
  struct CStateManager_QuestPhaseRewardComponent__o *mFSM; // x8

  v2 = this;
  if ( (byte_596A88D & 1) == 0 )
  {
    this = (QuestPhaseRewardComponent_o *)sub_2213A60(&Method_CStateManager_QuestPhaseRewardComponent__getState__);
    byte_596A88D = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_2213CDC(this, method);
  return mFSM->fields.m_state;
}


void QuestPhaseRewardComponent__Init(QuestPhaseRewardComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  UnityEngine_Animation_o **p_mAnimation; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  UnityEngine_Component_o *transform; // x0
  __int64 v12; // x1
  Il2CppObject *ComponentInChildren_object__58855044; // x0
  struct SimpleAnimation_o **p_mSimpleAnimation; // x21
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  __int64 v21; // x1
  __int64 v22; // x2
  UnityEngine_Object_o *mSimpleAnimation; // x22
  __int64 v24; // x2
  SimpleAnimation_o *v25; // x20
  System_String_o *name; // x0
  UnityEngine_Component_c *klass; // x8
  UnityEngine_Component_o *v28; // x20
  __int64 v29; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v31; // x0
  UnityEngine_Animation_o *v32; // x21
  __int64 v33; // x2
  UnityEngine_Animation_o *v34; // x21
  System_String_o *v35; // x0
  UnityEngine_Animation_o *v36; // x20
  System_String_o *v37; // x0
  SimpleAnimation_o *v38; // x20
  System_String_o *v39; // x0
  UnityEngine_Component_c *v40; // x8
  UnityEngine_Component_o *v41; // x20
  __int64 v42; // x9
  SimpleAnimation_State_c **v43; // x10
  __int64 v44; // x0
  struct System_String_o *Value; // x0
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7

  if ( (byte_596A887 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Animation___);
    sub_2213A60(&Method_DataManager_GetMaster_ConstantStrMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&SimpleAnimation_State_TypeInfo);
    sub_2213A60(&StringLiteral_23984/*"progress_reward_board"*/);
    sub_2213A60(&StringLiteral_11375/*"QUEST_PHASE_REWARD_OVERWRITE_SPRITE"*/);
    byte_596A887 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Animation___);
  this->fields.mAnimation = (struct UnityEngine_Animation_o *)Component_object;
  p_mAnimation = &this->fields.mAnimation;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mAnimation,
    (int32_t)Component_object,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_44;
  ComponentInChildren_object__58855044 = UnityEngine_Component__GetComponentInChildren_object__58855044(
                                           transform,
                                           (const MethodInfo_3820E84 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  this->fields.mSimpleAnimation = (struct SimpleAnimation_o *)ComponentInChildren_object__58855044;
  p_mSimpleAnimation = &this->fields.mSimpleAnimation;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mSimpleAnimation,
    (int32_t)ComponentInChildren_object__58855044,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  mSimpleAnimation = (UnityEngine_Object_o *)this->fields.mSimpleAnimation;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21, v22);
  transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(mSimpleAnimation, 0, 0);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    v25 = *p_mSimpleAnimation;
    if ( *p_mSimpleAnimation )
    {
      transform = (UnityEngine_Component_o *)v25->fields.m_Clip;
      if ( transform )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0);
        transform = (UnityEngine_Component_o *)SimpleAnimation__get_Item(v25, name, 0);
        if ( transform )
        {
          klass = transform->klass;
          v28 = transform;
          v29 = *(unsigned __int16 *)&transform->klass->_2.rank;
          if ( *(_WORD *)&transform->klass->_2.rank )
          {
            p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
            while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
            {
              --v29;
              p_offset += 2;
              if ( !v29 )
                goto LABEL_14;
            }
            v31 = (__int64)(&klass[1]._1.element_class + 2 * *(_DWORD *)p_offset);
          }
          else
          {
LABEL_14:
            v31 = sub_224BC3C(transform, SimpleAnimation_State_TypeInfo, 8);
          }
          transform = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(UnityEngine_Component_o *, _QWORD, double))v31)(
                                                   v28,
                                                   *(_QWORD *)(v31 + 8),
                                                   0.0);
          v38 = *p_mSimpleAnimation;
          if ( *p_mSimpleAnimation )
          {
            transform = (UnityEngine_Component_o *)v38->fields.m_Clip;
            if ( transform )
            {
              v39 = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0);
              transform = (UnityEngine_Component_o *)SimpleAnimation__get_Item(v38, v39, 0);
              if ( transform )
              {
                v40 = transform->klass;
                v41 = transform;
                v42 = *(unsigned __int16 *)&transform->klass->_2.rank;
                if ( *(_WORD *)&transform->klass->_2.rank )
                {
                  v43 = (SimpleAnimation_State_c **)&v40->_1.interfaceOffsets->offset;
                  while ( *(v43 - 1) != SimpleAnimation_State_TypeInfo )
                  {
                    --v42;
                    v43 += 2;
                    if ( !v42 )
                      goto LABEL_33;
                  }
                  v44 = (__int64)(&v40[1]._1.byval_arg + *(_DWORD *)v43);
                }
                else
                {
LABEL_33:
                  v44 = sub_224BC3C(transform, SimpleAnimation_State_TypeInfo, 6);
                }
                (*(void (__fastcall **)(UnityEngine_Component_o *, _QWORD, double))v44)(v41, *(_QWORD *)(v44 + 8), 0.0);
                goto LABEL_36;
              }
            }
          }
        }
      }
    }
LABEL_44:
    sub_2213CDC(transform, v12);
  }
  v32 = *p_mAnimation;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12, v24);
  transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v32, 0, 0);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    v34 = *p_mAnimation;
    if ( !*p_mAnimation )
      goto LABEL_44;
    transform = (UnityEngine_Component_o *)UnityEngine_Animation__get_clip(*p_mAnimation, 0);
    if ( !transform )
      goto LABEL_44;
    v35 = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0);
    transform = (UnityEngine_Component_o *)UnityEngine_Animation__get_Item(v34, v35, 0);
    if ( !transform )
      goto LABEL_44;
    UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)transform, 0.0, 0);
    v36 = *p_mAnimation;
    if ( !v36 )
      goto LABEL_44;
    transform = (UnityEngine_Component_o *)UnityEngine_Animation__get_clip(v36, 0);
    if ( !transform )
      goto LABEL_44;
    v37 = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0);
    transform = (UnityEngine_Component_o *)UnityEngine_Animation__get_Item(v36, v37, 0);
    if ( !transform )
      goto LABEL_44;
    UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)transform, 0.0, 0);
  }
LABEL_36:
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v12, v33);
  transform = (UnityEngine_Component_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ConstantStrMaster___);
  if ( !transform )
    goto LABEL_44;
  Value = ConstantStrMaster__GetValue((ConstantStrMaster_o *)transform, (System_String_o *)StringLiteral_11375/*"QUEST_PHASE_REWARD_OVERWRITE_SPRITE"*/, 0);
  this->fields.overwriteSpriteName = Value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.overwriteSpriteName,
    (int32_t)Value,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  transform = (UnityEngine_Component_o *)this->fields.bgSprite;
  if ( !transform )
    goto LABEL_44;
  UISprite__set_atlas((UISprite_o *)transform, this->fields.systemUIAtlas, 0);
  transform = (UnityEngine_Component_o *)this->fields.bgSprite;
  if ( !transform )
    goto LABEL_44;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)transform, (System_String_o *)StringLiteral_23984/*"progress_reward_board"*/, 0);
  transform = (UnityEngine_Component_o *)this->fields.countLabel;
  if ( !transform )
    goto LABEL_44;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(transform, 0);
  if ( !transform )
    goto LABEL_44;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0);
}


void QuestPhaseRewardComponent__Open(
        QuestPhaseRewardComponent_o *this,
        QuestRewardInfo_array *questRewardInfoArray,
        RewardMiniPopup_DisplayArgs_o *args,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Object_array *ComponentsInChildren_object; // x23
  GiftDetailMaster_o *IsNullOrEmpty; // x0
  __int64 objectId; // x1
  __int64 v12; // x2
  const MethodInfo *v13; // x3
  TerminalPramsManager_c *v14; // x0
  int32_t PhaseCnt_k__BackingField; // w27
  __int64 v16; // x2
  Il2CppObject *Master_object; // x24
  __int64 v18; // x2
  int32_t giftId; // w24
  System_String_o *OverwriteImageIdByQuestPhaseReward; // x24
  System_String_o *overwriteSpriteName; // x1
  int max_length; // w8
  QuestRewardInfo_o **m_Items; // x9
  QuestRewardInfo_o *v24; // x10
  System_Collections_IEnumerator_o *v25; // x0
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_596A888 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponentsInChildren_ItemIconComponent___);
    sub_2213A60(&Method_DataManager_GetMaster_GiftDetailMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596A888 = 1;
  }
  entity = 0;
  if ( !questRewardInfoArray )
  {
    ActionExtensions__Call(callback, 0);
    return;
  }
  ComponentsInChildren_object = UnityEngine_Component__GetComponentsInChildren_object_(
                                  (UnityEngine_Component_o *)this,
                                  1,
                                  (const MethodInfo_38217CC *)Method_UnityEngine_Component_GetComponentsInChildren_ItemIconComponent___);
  IsNullOrEmpty = (GiftDetailMaster_o *)System_String__IsNullOrEmpty(this->fields.overwriteSpriteName, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, objectId, v12);
    if ( !byte_596A92D )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596A92D = 1;
    }
    v14 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, objectId, v12);
      v14 = TerminalPramsManager_TypeInfo;
    }
    PhaseCnt_k__BackingField = v14->static_fields->_PhaseCnt_k__BackingField;
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, objectId, v12);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !byte_596A92E )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596A92E = 1;
    }
    IsNullOrEmpty = (GiftDetailMaster_o *)TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, objectId, v16);
      IsNullOrEmpty = (GiftDetailMaster_o *)TerminalPramsManager_TypeInfo;
    }
    if ( !Master_object )
      goto LABEL_46;
    IsNullOrEmpty = (GiftDetailMaster_o *)QuestPhaseMaster__TryGetEntity(
                                            (QuestPhaseMaster_o *)Master_object,
                                            &entity,
                                            HIDWORD(IsNullOrEmpty[2].fields.list->fields.items),
                                            PhaseCnt_k__BackingField + 1,
                                            0);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
      goto LABEL_35;
    if ( !entity )
      goto LABEL_46;
    giftId = entity->fields.giftId;
    if ( !giftId )
      goto LABEL_35;
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, objectId, v18);
    IsNullOrEmpty = (GiftDetailMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_GiftDetailMaster___);
    if ( !IsNullOrEmpty )
      goto LABEL_46;
    OverwriteImageIdByQuestPhaseReward = GiftDetailMaster__GetOverwriteImageIdByQuestPhaseReward(
                                           IsNullOrEmpty,
                                           giftId,
                                           0);
    IsNullOrEmpty = (GiftDetailMaster_o *)System_String__op_Inequality(
                                            OverwriteImageIdByQuestPhaseReward,
                                            (System_String_o *)StringLiteral_1/*""*/,
                                            0);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    {
      if ( !ComponentsInChildren_object )
        goto LABEL_46;
      if ( LODWORD(ComponentsInChildren_object->max_length) )
      {
        IsNullOrEmpty = (GiftDetailMaster_o *)ComponentsInChildren_object->m_Items[0];
        if ( IsNullOrEmpty )
        {
          overwriteSpriteName = OverwriteImageIdByQuestPhaseReward;
LABEL_34:
          ItemIconComponent__SetItemImageByName((ItemIconComponent_o *)IsNullOrEmpty, overwriteSpriteName, 0);
          goto LABEL_45;
        }
        goto LABEL_46;
      }
    }
    else
    {
LABEL_35:
      max_length = questRewardInfoArray->max_length;
      if ( max_length < 1 )
      {
        objectId = 0;
        if ( !ComponentsInChildren_object )
          goto LABEL_45;
      }
      else
      {
        m_Items = questRewardInfoArray->m_Items;
        do
        {
          v24 = *m_Items;
          if ( !*m_Items )
            goto LABEL_46;
          --max_length;
          ++m_Items;
        }
        while ( max_length );
        objectId = (unsigned int)v24->fields.objectId;
        if ( !ComponentsInChildren_object )
          goto LABEL_45;
      }
      if ( LODWORD(ComponentsInChildren_object->max_length) )
      {
        IsNullOrEmpty = (GiftDetailMaster_o *)ComponentsInChildren_object->m_Items[0];
        if ( IsNullOrEmpty )
        {
          ItemIconComponent__SetItemImage((ItemIconComponent_o *)IsNullOrEmpty, objectId, 0);
          goto LABEL_45;
        }
        goto LABEL_46;
      }
    }
    goto LABEL_47;
  }
  if ( ComponentsInChildren_object )
  {
    if ( LODWORD(ComponentsInChildren_object->max_length) )
    {
      IsNullOrEmpty = (GiftDetailMaster_o *)ComponentsInChildren_object->m_Items[0];
      if ( IsNullOrEmpty )
      {
        overwriteSpriteName = this->fields.overwriteSpriteName;
        goto LABEL_34;
      }
LABEL_46:
      sub_2213CDC(IsNullOrEmpty, objectId);
    }
LABEL_47:
    sub_2213CE4(IsNullOrEmpty);
  }
LABEL_45:
  v25 = QuestPhaseRewardComponent__Play(this, args, callback, v13);
  UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, v25, 0);
}


// local variable allocation has failed, the output may be wrong!
void QuestPhaseRewardComponent__OpenByItemIdAndNum(
        QuestPhaseRewardComponent_o *this,
        int32_t itemId,
        int32_t itemNum,
        RewardMiniPopup_DisplayArgs_o *args,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  QuestPhaseRewardComponent_o *v10; // x20
  UISprite_o *bgSprite; // x24
  __int64 v12; // x1
  __int64 v13; // x2
  System_String_o *BgSpriteName; // x23
  __int64 v15; // x1
  __int64 v16; // x2
  UILabel_o *countLabel; // x23
  System_String_o *v18; // x24
  Il2CppObject *v19; // x0
  const MethodInfo *v20; // x3
  System_Collections_IEnumerator_o *v21; // x0
  int32_t v22; // [xsp+Ch] [xbp-44h] BYREF

  v10 = this;
  if ( (byte_596A889 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    this = (QuestPhaseRewardComponent_o *)sub_2213A60(&StringLiteral_9183/*"MULTIPLE_INFO"*/);
    byte_596A889 = 1;
  }
  if ( !args )
    goto LABEL_12;
  bgSprite = v10->fields.bgSprite;
  BgSpriteName = QuestPhaseRewardComponent__GetBgSpriteName(
                   args->fields._Type_k__BackingField,
                   itemId,
                   *(const MethodInfo **)&itemNum);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v12, v13);
  AtlasManager__SetEventSprite(bgSprite, BgSpriteName, 0);
  countLabel = v10->fields.countLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v15, v16);
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_9183/*"MULTIPLE_INFO"*/, 0);
  v22 = itemNum;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v22);
  this = (QuestPhaseRewardComponent_o *)System_String__Format(v18, v19, 0);
  if ( !countLabel
    || (UILabel__set_text(countLabel, (System_String_o *)this, 0),
        (this = (QuestPhaseRewardComponent_o *)v10->fields.countLabel) == 0)
    || (this = (QuestPhaseRewardComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0 )
  {
LABEL_12:
    sub_2213CDC(this, *(_QWORD *)&itemId);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  v21 = QuestPhaseRewardComponent__Play(v10, args, endAction, v20);
  UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)v10, v21, 0);
}


void QuestPhaseRewardComponent__OpenCampaignDirectBonus(
        QuestPhaseRewardComponent_o *this,
        int32_t itemId,
        int32_t itemNum,
        System_Action_o *callback,
        const MethodInfo *method)
{
  RewardMiniPopup_DisplayArgs_o *v9; // x23
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x5

  if ( (byte_596A88B & 1) == 0 )
  {
    sub_2213A60(&RewardMiniPopup_DisplayArgs_TypeInfo);
    byte_596A88B = 1;
  }
  v9 = (RewardMiniPopup_DisplayArgs_o *)sub_2213CCC(RewardMiniPopup_DisplayArgs_TypeInfo);
  RewardMiniPopup_DisplayArgs___ctor(v9, 0);
  if ( !v9 )
    sub_2213CDC(v10, v11);
  v9->fields._Type_k__BackingField = 3;
  QuestPhaseRewardComponent__OpenByItemIdAndNum(this, itemId, itemNum, v9, callback, v12);
}


System_Collections_IEnumerator_o *QuestPhaseRewardComponent__Play(
        QuestPhaseRewardComponent_o *this,
        RewardMiniPopup_DisplayArgs_o *args,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v7; // x22
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7

  if ( (byte_596A88C & 1) == 0 )
  {
    sub_2213A60(&QuestPhaseRewardComponent__Play_d__24_TypeInfo);
    byte_596A88C = 1;
  }
  v7 = sub_2213CCC(QuestPhaseRewardComponent__Play_d__24_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 32), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v7 + 48) = args;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 48), (int32_t)args, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v7 + 40) = endAction;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 40), (int32_t)endAction, v20, v21, v22, v23, v24, v25);
  return (System_Collections_IEnumerator_o *)v7;
}


// local variable allocation has failed, the output may be wrong!
void QuestPhaseRewardComponent__SetState(QuestPhaseRewardComponent_o *this, int32_t state, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_596A88E & 1) == 0 )
  {
    sub_2213A60(&Method_CStateManager_QuestPhaseRewardComponent__setState__);
    byte_596A88E = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_2213CDC(0, *(_QWORD *)&state);
  CStateManager_object___setState(
    mFSM,
    state,
    (const MethodInfo_3E83E8C *)Method_CStateManager_QuestPhaseRewardComponent__setState__);
}


void QuestPhaseRewardComponent__Update(QuestPhaseRewardComponent_o *this, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_596A886 & 1) == 0 )
  {
    sub_2213A60(&Method_CStateManager_QuestPhaseRewardComponent__update__);
    byte_596A886 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(
      mFSM,
      (const MethodInfo_3E83E6C *)Method_CStateManager_QuestPhaseRewardComponent__update__);
}


bool QuestPhaseRewardComponent___Play_b__24_0(QuestPhaseRewardComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  System_String_o *DISP_SE; // x19

  if ( (byte_596A890 & 1) == 0 )
  {
    sub_2213A60(&SeManager_TypeInfo);
    byte_596A890 = 1;
  }
  DISP_SE = this->fields.DISP_SE;
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, method, v2);
  return SeManager__IsBusySe(DISP_SE, 0);
}


UISprite_o *QuestPhaseRewardComponent__get_ItemIcon(QuestPhaseRewardComponent_o *this, const MethodInfo *method)
{
  return this->fields.itemIcon;
}


void QuestPhaseRewardComponent_StateNone___ctor(QuestPhaseRewardComponent_StateNone_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestPhaseRewardComponent_StateNone__begin(
        QuestPhaseRewardComponent_StateNone_o *this,
        QuestPhaseRewardComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void QuestPhaseRewardComponent_StateNone__end(
        QuestPhaseRewardComponent_StateNone_o *this,
        QuestPhaseRewardComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void QuestPhaseRewardComponent_StateNone__update(
        QuestPhaseRewardComponent_StateNone_o *this,
        QuestPhaseRewardComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void QuestPhaseRewardComponent_StatePlay___ctor(QuestPhaseRewardComponent_StatePlay_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestPhaseRewardComponent_StatePlay__begin(
        QuestPhaseRewardComponent_StatePlay_o *this,
        QuestPhaseRewardComponent_o *that,
        const MethodInfo *method)
{
  UnityEngine_Object_o *mSimpleAnimation; // x20
  __int64 v5; // x2
  struct SimpleAnimation_o *v6; // x20
  System_String_o *v7; // x0
  struct SimpleAnimation_o *v8; // x20
  System_String_o *v9; // x0
  struct SimpleAnimation_o *v10; // x20
  System_String_o *v11; // x0
  QuestPhaseRewardComponent_StatePlay_c *klass; // x8
  QuestPhaseRewardComponent_StatePlay_o *v13; // x20
  __int64 v14; // x9
  SimpleAnimation_State_c **p_offset; // x10
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
  QuestPhaseRewardComponent_StatePlay_c *v28; // x8
  QuestPhaseRewardComponent_StatePlay_o *v29; // x19
  __int64 v30; // x9
  int32_t *v31; // x10
  __int64 v32; // x0

  if ( (byte_596A891 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    this = (QuestPhaseRewardComponent_StatePlay_o *)sub_2213A60(&SimpleAnimation_State_TypeInfo);
    byte_596A891 = 1;
  }
  if ( !that )
    goto LABEL_49;
  mSimpleAnimation = (UnityEngine_Object_o *)that->fields.mSimpleAnimation;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, that, method);
  this = (QuestPhaseRewardComponent_StatePlay_o *)UnityEngine_Object__op_Inequality(mSimpleAnimation, 0, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    mAnimation = (UnityEngine_Object_o *)that->fields.mAnimation;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, that, v5);
    this = (QuestPhaseRewardComponent_StatePlay_o *)UnityEngine_Object__op_Inequality(mAnimation, 0, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
      return;
    v18 = that->fields.mAnimation;
    if ( v18 )
    {
      this = (QuestPhaseRewardComponent_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0);
      if ( this )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
        this = (QuestPhaseRewardComponent_StatePlay_o *)UnityEngine_Animation__IsPlaying(v18, name, 0);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v20 = that->fields.mAnimation;
          if ( !v20 )
            goto LABEL_49;
          this = (QuestPhaseRewardComponent_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0);
          if ( !this )
            goto LABEL_49;
          v21 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
          this = (QuestPhaseRewardComponent_StatePlay_o *)UnityEngine_Animation__Play_83078544(v20, v21, 0);
        }
        v22 = that->fields.mAnimation;
        if ( v22 )
        {
          this = (QuestPhaseRewardComponent_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0);
          if ( this )
          {
            v23 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
            this = (QuestPhaseRewardComponent_StatePlay_o *)UnityEngine_Animation__get_Item(v22, v23, 0);
            if ( this )
            {
              UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)this, 0.0, 0);
              v24 = that->fields.mAnimation;
              if ( v24 )
              {
                this = (QuestPhaseRewardComponent_StatePlay_o *)UnityEngine_Animation__get_clip(v24, 0);
                if ( this )
                {
                  v25 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
                  this = (QuestPhaseRewardComponent_StatePlay_o *)UnityEngine_Animation__get_Item(v24, v25, 0);
                  if ( this )
                  {
                    UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)this, 1.0, 0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_49:
    sub_2213CDC(this, that);
  }
  v6 = that->fields.mSimpleAnimation;
  if ( !v6 )
    goto LABEL_49;
  this = (QuestPhaseRewardComponent_StatePlay_o *)v6->fields.m_Clip;
  if ( !this )
    goto LABEL_49;
  v7 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
  this = (QuestPhaseRewardComponent_StatePlay_o *)SimpleAnimation__IsPlaying(v6, v7, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v8 = that->fields.mSimpleAnimation;
    if ( !v8 )
      goto LABEL_49;
    this = (QuestPhaseRewardComponent_StatePlay_o *)v8->fields.m_Clip;
    if ( !this )
      goto LABEL_49;
    v9 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
    this = (QuestPhaseRewardComponent_StatePlay_o *)SimpleAnimation__Play_78552168(v8, v9, 0);
  }
  v10 = that->fields.mSimpleAnimation;
  if ( !v10 )
    goto LABEL_49;
  this = (QuestPhaseRewardComponent_StatePlay_o *)v10->fields.m_Clip;
  if ( !this )
    goto LABEL_49;
  v11 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
  this = (QuestPhaseRewardComponent_StatePlay_o *)SimpleAnimation__get_Item(v10, v11, 0);
  if ( !this )
    goto LABEL_49;
  klass = this->klass;
  v13 = this;
  v14 = *(unsigned __int16 *)&this->klass->_2.rank;
  if ( *(_WORD *)&this->klass->_2.rank )
  {
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v14;
      p_offset += 2;
      if ( !v14 )
        goto LABEL_20;
    }
    v16 = (__int64)(&klass->vtable._6_end + *(_DWORD *)p_offset);
  }
  else
  {
LABEL_20:
    v16 = sub_224BC3C(this, SimpleAnimation_State_TypeInfo, 6);
  }
  this = (QuestPhaseRewardComponent_StatePlay_o *)(*(__int64 (__fastcall **)(QuestPhaseRewardComponent_StatePlay_o *, _QWORD, double))v16)(
                                                    v13,
                                                    *(_QWORD *)(v16 + 8),
                                                    0.0);
  v26 = that->fields.mSimpleAnimation;
  if ( !v26 )
    goto LABEL_49;
  this = (QuestPhaseRewardComponent_StatePlay_o *)v26->fields.m_Clip;
  if ( !this )
    goto LABEL_49;
  v27 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
  this = (QuestPhaseRewardComponent_StatePlay_o *)SimpleAnimation__get_Item(v26, v27, 0);
  if ( !this )
    goto LABEL_49;
  v28 = this->klass;
  v29 = this;
  v30 = *(unsigned __int16 *)&this->klass->_2.rank;
  if ( *(_WORD *)&this->klass->_2.rank )
  {
    v31 = &v28->_1.interfaceOffsets->offset;
    while ( *((SimpleAnimation_State_c **)v31 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v30;
      v31 += 4;
      if ( !v30 )
        goto LABEL_46;
    }
    v32 = (__int64)(&v28[1]._1.name + 2 * *v31);
  }
  else
  {
LABEL_46:
    v32 = sub_224BC3C(this, SimpleAnimation_State_TypeInfo, 8);
  }
  (*(void (__fastcall **)(QuestPhaseRewardComponent_StatePlay_o *, _QWORD, float))v32)(v29, *(_QWORD *)(v32 + 8), 1.0);
}


void QuestPhaseRewardComponent_StatePlay__end(
        QuestPhaseRewardComponent_StatePlay_o *this,
        QuestPhaseRewardComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void QuestPhaseRewardComponent_StatePlay__update(
        QuestPhaseRewardComponent_StatePlay_o *this,
        QuestPhaseRewardComponent_o *that,
        const MethodInfo *method)
{
  UnityEngine_Object_o *mSimpleAnimation; // x20
  __int64 v5; // x2
  struct SimpleAnimation_o *v6; // x20
  System_String_o *name; // x0
  UnityEngine_Object_o *mAnimation; // x20
  UnityEngine_Animation_o *v9; // x20
  System_String_o *v10; // x0
  const MethodInfo *v11; // x2

  if ( (byte_596A892 & 1) == 0 )
  {
    this = (QuestPhaseRewardComponent_StatePlay_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A892 = 1;
  }
  if ( !that )
    goto LABEL_19;
  mSimpleAnimation = (UnityEngine_Object_o *)that->fields.mSimpleAnimation;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, that, method);
  this = (QuestPhaseRewardComponent_StatePlay_o *)UnityEngine_Object__op_Inequality(mSimpleAnimation, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v6 = that->fields.mSimpleAnimation;
    if ( v6 )
    {
      this = (QuestPhaseRewardComponent_StatePlay_o *)v6->fields.m_Clip;
      if ( this )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
        if ( !SimpleAnimation__IsPlaying(v6, name, 0) )
          goto LABEL_18;
        return;
      }
    }
LABEL_19:
    sub_2213CDC(this, that);
  }
  mAnimation = (UnityEngine_Object_o *)that->fields.mAnimation;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, that, v5);
  this = (QuestPhaseRewardComponent_StatePlay_o *)UnityEngine_Object__op_Inequality(mAnimation, 0, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
    return;
  v9 = that->fields.mAnimation;
  if ( !v9 )
    goto LABEL_19;
  this = (QuestPhaseRewardComponent_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0);
  if ( !this )
    goto LABEL_19;
  v10 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
  if ( !UnityEngine_Animation__IsPlaying(v9, v10, 0) )
  {
LABEL_18:
    ActionExtensions__Call(that->fields.mEndAct, 0);
    QuestPhaseRewardComponent__SetState(that, 0, v11);
  }
}


void QuestPhaseRewardComponent__Play_d__24___ctor(
        QuestPhaseRewardComponent__Play_d__24_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool QuestPhaseRewardComponent__Play_d__24__MoveNext(
        QuestPhaseRewardComponent__Play_d__24_o *this,
        const MethodInfo *method)
{
  MethodInfo *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  QuestPhaseRewardComponent__Play_d__24_o *v8; // x19
  int32_t _1__state; // w8
  struct QuestPhaseRewardComponent_o *_4__this; // x20
  MissionNaviTransitionBoardItem_o *p__2__current; // x19
  struct System_Action_o *endAction; // x1
  __int64 v14; // x1
  __int64 v15; // x2
  struct RewardMiniPopup_DisplayArgs_o *args; // x8
  System_String_o *DISP_SE; // x21
  _QWORD *v18; // x0
  System_Reflection_MethodBase_o *v19; // x0
  System_Func_bool__o *v20; // x21
  UnityEngine_WaitUntil_o *v21; // x20
  MissionNaviTransitionBoardItem_o *v22; // x19
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7

  v8 = this;
  if ( (byte_596A893 & 1) == 0 )
  {
    sub_2213A60(&System_Func_bool__TypeInfo);
    sub_2213A60(&Method_QuestPhaseRewardComponent__Play_b__24_0__);
    sub_2213A60(&SeManager_TypeInfo);
    sub_2213A60(&Method_QuestPhaseRewardComponent__Play_d__24_MoveNext__);
    this = (QuestPhaseRewardComponent__Play_d__24_o *)sub_2213A60(&UnityEngine_WaitUntil_TypeInfo);
    byte_596A893 = 1;
  }
  _1__state = v8->fields.__1__state;
  _4__this = v8->fields.__4__this;
  if ( _1__state == 2 )
  {
    v8->fields.__1__state = -1;
    if ( _4__this )
    {
      QuestPhaseRewardComponent__SetState(_4__this, 1, v2);
      return 0;
    }
LABEL_20:
    sub_2213CDC(this, method);
  }
  if ( _1__state != 1 )
  {
    if ( !_1__state )
    {
      v8->fields.__2__current = 0;
      p__2__current = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
      p__2__current[-1].fields._BoardType_k__BackingField = -1;
      sub_2213A04(p__2__current, 0, (System_String_o *)v2, v3, v4, v5, v6, v7);
      p__2__current[-1].fields._BoardType_k__BackingField = 1;
      return 1;
    }
    return 0;
  }
  v8->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_20;
  endAction = v8->fields.endAction;
  _4__this->fields.mEndAct = endAction;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&_4__this->fields.mEndAct,
    (int32_t)endAction,
    (System_String_o *)v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  args = v8->fields.args;
  if ( args && args->fields._IsPlaySeDuplicable_k__BackingField )
    goto LABEL_13;
  DISP_SE = _4__this->fields.DISP_SE;
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, v14, v15);
  if ( !SeManager__IsBusySe(DISP_SE, 0) )
  {
LABEL_13:
    v18 = Method_QuestPhaseRewardComponent__Play_d__24_MoveNext__;
    if ( (*((_BYTE *)Method_QuestPhaseRewardComponent__Play_d__24_MoveNext__ + 83) & 2) != 0 )
      v18 = (_QWORD *)sub_2213A78(Method_QuestPhaseRewardComponent__Play_d__24_MoveNext__);
    v19 = (System_Reflection_MethodBase_o *)sub_2213A44(v18, v18[4]);
    OverwriteAssetSoundName__PlaySe(v19, _4__this->fields.DISP_SE, 0, 0);
  }
  v20 = (System_Func_bool__o *)sub_2213CCC(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(v20, (Il2CppObject *)_4__this, Method_QuestPhaseRewardComponent__Play_b__24_0__, 0);
  v21 = (UnityEngine_WaitUntil_o *)sub_2213CCC(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v21, v20, 0);
  v8->fields.__2__current = (Il2CppObject *)v21;
  v22 = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
  sub_2213A04(v22, (int32_t)v21, v23, v24, v25, v26, v27, v28);
  v22[-1].fields._BoardType_k__BackingField = 2;
  return 1;
}


Il2CppObject *QuestPhaseRewardComponent__Play_d__24__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        QuestPhaseRewardComponent__Play_d__24_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn QuestPhaseRewardComponent__Play_d__24__System_Collections_IEnumerator_Reset(
        QuestPhaseRewardComponent__Play_d__24_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_QuestPhaseRewardComponent__Play_d__24_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *QuestPhaseRewardComponent__Play_d__24__System_Collections_IEnumerator_get_Current(
        QuestPhaseRewardComponent__Play_d__24_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void QuestPhaseRewardComponent__Play_d__24__System_IDisposable_Dispose(
        QuestPhaseRewardComponent__Play_d__24_o *this,
        const MethodInfo *method)
{
  ;
}