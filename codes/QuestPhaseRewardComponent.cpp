void QuestPhaseRewardComponent___ctor(QuestPhaseRewardComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4C213C2 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_22824/*"qev79"*/);
    byte_4C213C2 = 1;
  }
  this->fields.DISP_SE = (struct System_String_o *)StringLiteral_22824/*"qev79"*/;
  sub_1C2D434(&this->fields.DISP_SE);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void QuestPhaseRewardComponent__Awake(QuestPhaseRewardComponent_o *this, const MethodInfo *method)
{
  CStateManager_T__o *v3; // x21
  CStateManager_T__o *mFSM; // x21
  Il2CppObject *v5; // x22
  __int64 v6; // x0
  __int64 v7; // x1
  CStateManager_T__o *v8; // x20
  Il2CppObject *v9; // x21
  const MethodInfo *v10; // x2

  if ( (byte_4C213B8 & 1) == 0 )
  {
    sub_1C2D490(&Method_CStateManager_QuestPhaseRewardComponent___ctor__);
    sub_1C2D490(&Method_CStateManager_QuestPhaseRewardComponent__add__);
    sub_1C2D490(&CStateManager_QuestPhaseRewardComponent__TypeInfo);
    sub_1C2D490(&QuestPhaseRewardComponent_StateNone_TypeInfo);
    sub_1C2D490(&QuestPhaseRewardComponent_StatePlay_TypeInfo);
    byte_4C213B8 = 1;
  }
  if ( !this->fields.mFSM )
  {
    v3 = (CStateManager_T__o *)sub_1C2D6DC(CStateManager_QuestPhaseRewardComponent__TypeInfo);
    CStateManager_object____ctor(
      v3,
      (Il2CppObject *)this,
      2,
      (const MethodInfo_3313C68 *)Method_CStateManager_QuestPhaseRewardComponent___ctor__);
    this->fields.mFSM = (struct CStateManager_QuestPhaseRewardComponent__o *)v3;
    sub_1C2D434(&this->fields.mFSM);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v5 = (Il2CppObject *)sub_1C2D6DC(QuestPhaseRewardComponent_StateNone_TypeInfo);
    System_Object___ctor(v5, 0);
    if ( !mFSM
      || (CStateManager_object___add(
            mFSM,
            0,
            (IState_T__o *)v5,
            (const MethodInfo_3313D10 *)Method_CStateManager_QuestPhaseRewardComponent__add__),
          v8 = (CStateManager_T__o *)this->fields.mFSM,
          v9 = (Il2CppObject *)sub_1C2D6DC(QuestPhaseRewardComponent_StatePlay_TypeInfo),
          System_Object___ctor(v9, 0),
          !v8) )
    {
      sub_1C2D6EC(v6, v7);
    }
    CStateManager_object___add(
      v8,
      1,
      (IState_T__o *)v9,
      (const MethodInfo_3313D10 *)Method_CStateManager_QuestPhaseRewardComponent__add__);
    QuestPhaseRewardComponent__SetState(this, 0, v10);
  }
}


System_String_o *QuestPhaseRewardComponent__GetBgSpriteName(int32_t type, int32_t itemId, const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject **v7; // x8
  Il2CppObject *v8; // x20
  Il2CppObject *v9; // x0
  System_String_o *v10; // x20
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  Il2CppObject *v16; // x0
  int32_t v18; // [xsp+8h] [xbp-48h] BYREF
  int32_t v19; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C213BD & 1) == 0 )
  {
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    sub_1C2D490(&StringLiteral_25174/*"{0}_{1}"*/);
    sub_1C2D490(&StringLiteral_22776/*"progress_reward_board"*/);
    sub_1C2D490(&StringLiteral_24470/*"use_add_reward_item_reward_board"*/);
    byte_4C213BD = 1;
  }
  if ( type == 4 )
    v7 = (Il2CppObject **)&StringLiteral_24470/*"use_add_reward_item_reward_board"*/;
  else
    v7 = (Il2CppObject **)&StringLiteral_22776/*"progress_reward_board"*/;
  v8 = *v7;
  v19 = itemId;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19, method, v3, v4);
  v10 = System_String__Format_63499156((System_String_o *)StringLiteral_25174/*"{0}_{1}"*/, v8, v9, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v12);
  if ( !AtlasManager__HasSpriteInEventAtlas((AtlasManager_o *)Instance, v10, 0) )
  {
    v18 = itemId;
    v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18, v13, v14, v15);
    return System_String__Format_63499156(
             (System_String_o *)StringLiteral_25174/*"{0}_{1}"*/,
             (Il2CppObject *)StringLiteral_22776/*"progress_reward_board"*/,
             v16,
             0);
  }
  return v10;
}


int32_t QuestPhaseRewardComponent__GetState(QuestPhaseRewardComponent_o *this, const MethodInfo *method)
{
  QuestPhaseRewardComponent_o *v2; // x19
  struct CStateManager_QuestPhaseRewardComponent__o *mFSM; // x8

  v2 = this;
  if ( (byte_4C213C0 & 1) == 0 )
  {
    this = (QuestPhaseRewardComponent_o *)sub_1C2D490(&Method_CStateManager_QuestPhaseRewardComponent__getState__);
    byte_4C213C0 = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_1C2D6EC(this, method);
  return mFSM->fields.m_state;
}


void QuestPhaseRewardComponent__Init(QuestPhaseRewardComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Animation_o **p_mAnimation; // x20
  UnityEngine_Component_o *transform; // x0
  __int64 v5; // x1
  struct SimpleAnimation_o **p_mSimpleAnimation; // x21
  UnityEngine_Object_o *mSimpleAnimation; // x22
  SimpleAnimation_o *v8; // x20
  System_String_o *name; // x0
  UnityEngine_Component_c *klass; // x8
  UnityEngine_Component_o *v11; // x20
  __int64 v12; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v14; // x0
  UnityEngine_Animation_o *v15; // x21
  UnityEngine_Animation_o *v16; // x21
  System_String_o *v17; // x0
  UnityEngine_Animation_o *v18; // x20
  System_String_o *v19; // x0
  SimpleAnimation_o *v20; // x20
  System_String_o *v21; // x0
  UnityEngine_Component_c *v22; // x8
  UnityEngine_Component_o *v23; // x20
  __int64 v24; // x9
  SimpleAnimation_State_c **v25; // x10
  __int64 v26; // x0

  if ( (byte_4C213BA & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_Animation___);
    sub_1C2D490(&Method_DataManager_GetMaster_ConstantStrMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&SimpleAnimation_State_TypeInfo);
    sub_1C2D490(&StringLiteral_22776/*"progress_reward_board"*/);
    sub_1C2D490(&StringLiteral_10894/*"QUEST_PHASE_REWARD_OVERWRITE_SPRITE"*/);
    byte_4C213BA = 1;
  }
  this->fields.mAnimation = (struct UnityEngine_Animation_o *)UnityEngine_Component__GetComponent_object_(
                                                                (UnityEngine_Component_o *)this,
                                                                (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_Animation___);
  p_mAnimation = &this->fields.mAnimation;
  sub_1C2D434(&this->fields.mAnimation);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_44;
  this->fields.mSimpleAnimation = (struct SimpleAnimation_o *)UnityEngine_Component__GetComponentInChildren_object__51139460(
                                                                transform,
                                                                (const MethodInfo_30C5384 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  p_mSimpleAnimation = &this->fields.mSimpleAnimation;
  sub_1C2D434(&this->fields.mSimpleAnimation);
  mSimpleAnimation = (UnityEngine_Object_o *)this->fields.mSimpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(mSimpleAnimation, 0, 0);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    v8 = *p_mSimpleAnimation;
    if ( *p_mSimpleAnimation )
    {
      transform = (UnityEngine_Component_o *)v8->fields.m_Clip;
      if ( transform )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0);
        transform = (UnityEngine_Component_o *)SimpleAnimation__get_Item(v8, name, 0);
        if ( transform )
        {
          klass = transform->klass;
          v11 = transform;
          v12 = *(unsigned __int16 *)&transform->klass->_2.rank;
          if ( *(_WORD *)&transform->klass->_2.rank )
          {
            p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
            while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
            {
              --v12;
              p_offset += 2;
              if ( !v12 )
                goto LABEL_14;
            }
            v14 = (__int64)(&klass[1]._1.element_class + 2 * *(_DWORD *)p_offset);
          }
          else
          {
LABEL_14:
            v14 = sub_1C7DCA8(transform, SimpleAnimation_State_TypeInfo, 8);
          }
          transform = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(UnityEngine_Component_o *, _QWORD, float))v14)(
                                                   v11,
                                                   *(_QWORD *)(v14 + 8),
                                                   0.0);
          v20 = *p_mSimpleAnimation;
          if ( *p_mSimpleAnimation )
          {
            transform = (UnityEngine_Component_o *)v20->fields.m_Clip;
            if ( transform )
            {
              v21 = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0);
              transform = (UnityEngine_Component_o *)SimpleAnimation__get_Item(v20, v21, 0);
              if ( transform )
              {
                v22 = transform->klass;
                v23 = transform;
                v24 = *(unsigned __int16 *)&transform->klass->_2.rank;
                if ( *(_WORD *)&transform->klass->_2.rank )
                {
                  v25 = (SimpleAnimation_State_c **)&v22->_1.interfaceOffsets->offset;
                  while ( *(v25 - 1) != SimpleAnimation_State_TypeInfo )
                  {
                    --v24;
                    v25 += 2;
                    if ( !v24 )
                      goto LABEL_33;
                  }
                  v26 = (__int64)(&v22[1]._1.byval_arg + *(_DWORD *)v25);
                }
                else
                {
LABEL_33:
                  v26 = sub_1C7DCA8(transform, SimpleAnimation_State_TypeInfo, 6);
                }
                (*(void (__fastcall **)(UnityEngine_Component_o *, _QWORD, float))v26)(v23, *(_QWORD *)(v26 + 8), 0.0);
                goto LABEL_36;
              }
            }
          }
        }
      }
    }
LABEL_44:
    sub_1C2D6EC(transform, v5);
  }
  v15 = *p_mAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v15, 0, 0);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    v16 = *p_mAnimation;
    if ( !*p_mAnimation )
      goto LABEL_44;
    transform = (UnityEngine_Component_o *)UnityEngine_Animation__get_clip(*p_mAnimation, 0);
    if ( !transform )
      goto LABEL_44;
    v17 = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0);
    transform = (UnityEngine_Component_o *)UnityEngine_Animation__get_Item(v16, v17, 0);
    if ( !transform )
      goto LABEL_44;
    UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)transform, 0.0, 0);
    v18 = *p_mAnimation;
    if ( !v18 )
      goto LABEL_44;
    transform = (UnityEngine_Component_o *)UnityEngine_Animation__get_clip(v18, 0);
    if ( !transform )
      goto LABEL_44;
    v19 = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0);
    transform = (UnityEngine_Component_o *)UnityEngine_Animation__get_Item(v18, v19, 0);
    if ( !transform )
      goto LABEL_44;
    UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)transform, 0.0, 0);
  }
LABEL_36:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  transform = (UnityEngine_Component_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ConstantStrMaster___);
  if ( !transform )
    goto LABEL_44;
  this->fields.overwriteSpriteName = ConstantStrMaster__GetValue(
                                       (ConstantStrMaster_o *)transform,
                                       (System_String_o *)StringLiteral_10894/*"QUEST_PHASE_REWARD_OVERWRITE_SPRITE"*/,
                                       0);
  sub_1C2D434(&this->fields.overwriteSpriteName);
  transform = (UnityEngine_Component_o *)this->fields.bgSprite;
  if ( !transform )
    goto LABEL_44;
  UISprite__set_atlas((UISprite_o *)transform, this->fields.systemUIAtlas, 0);
  transform = (UnityEngine_Component_o *)this->fields.bgSprite;
  if ( !transform )
    goto LABEL_44;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)transform, (System_String_o *)StringLiteral_22776/*"progress_reward_board"*/, 0);
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
  System_Object_array *ComponentsInChildren_object; // x22
  GiftDetailMaster_o *IsNullOrEmpty; // x0
  __int64 objectId; // x1
  __int64 v12; // x2
  const MethodInfo *v13; // x3
  TerminalPramsManager_c *v14; // x0
  int32_t PhaseCnt_k__BackingField; // w27
  Il2CppObject *Master_object; // x24
  int32_t giftId; // w24
  System_String_o *OverwriteImageIdByQuestPhaseReward; // x24
  System_String_o *overwriteSpriteName; // x1
  int max_length; // w8
  __int64 v21; // x9
  QuestRewardInfo_o *v22; // x11
  System_Collections_IEnumerator_o *v23; // x0
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C213BB & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponentsInChildren_ItemIconComponent___);
    sub_1C2D490(&Method_DataManager_GetMaster_GiftDetailMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C213BB = 1;
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
                                  (const MethodInfo_30C5E44 *)Method_UnityEngine_Component_GetComponentsInChildren_ItemIconComponent___);
  IsNullOrEmpty = (GiftDetailMaster_o *)System_String__IsNullOrEmpty(this->fields.overwriteSpriteName, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C21463 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C21463 = 1;
    }
    v14 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v14 = TerminalPramsManager_TypeInfo;
    }
    PhaseCnt_k__BackingField = v14->static_fields->_PhaseCnt_k__BackingField;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !byte_4C21464 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C21464 = 1;
    }
    IsNullOrEmpty = (GiftDetailMaster_o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      IsNullOrEmpty = (GiftDetailMaster_o *)TerminalPramsManager_TypeInfo;
    }
    if ( !Master_object )
      goto LABEL_48;
    IsNullOrEmpty = (GiftDetailMaster_o *)QuestPhaseMaster__TryGetEntity(
                                            (QuestPhaseMaster_o *)Master_object,
                                            &entity,
                                            HIDWORD(IsNullOrEmpty[2].fields.list->fields.items),
                                            PhaseCnt_k__BackingField + 1,
                                            0);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
      goto LABEL_35;
    if ( !entity )
      goto LABEL_48;
    giftId = entity->fields.giftId;
    if ( !giftId )
      goto LABEL_35;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    IsNullOrEmpty = (GiftDetailMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_GiftDetailMaster___);
    if ( !IsNullOrEmpty )
      goto LABEL_48;
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
        goto LABEL_48;
      if ( LODWORD(ComponentsInChildren_object->max_length) )
      {
        IsNullOrEmpty = (GiftDetailMaster_o *)ComponentsInChildren_object->m_Items[0];
        if ( IsNullOrEmpty )
        {
          overwriteSpriteName = OverwriteImageIdByQuestPhaseReward;
LABEL_34:
          ItemIconComponent__SetItemImageByName((ItemIconComponent_o *)IsNullOrEmpty, overwriteSpriteName, 0);
          goto LABEL_46;
        }
        goto LABEL_48;
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
          goto LABEL_46;
      }
      else
      {
        v21 = 0;
        do
        {
          if ( (unsigned int)v21 >= max_length )
            goto LABEL_47;
          v22 = questRewardInfoArray->m_Items[v21];
          if ( !v22 )
            goto LABEL_48;
          ++v21;
        }
        while ( (int)v21 < max_length );
        objectId = (unsigned int)v22->fields.objectId;
        if ( !ComponentsInChildren_object )
          goto LABEL_46;
      }
      if ( LODWORD(ComponentsInChildren_object->max_length) )
      {
        IsNullOrEmpty = (GiftDetailMaster_o *)ComponentsInChildren_object->m_Items[0];
        if ( IsNullOrEmpty )
        {
          ItemIconComponent__SetItemImage((ItemIconComponent_o *)IsNullOrEmpty, objectId, 0);
          goto LABEL_46;
        }
        goto LABEL_48;
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
LABEL_48:
      sub_1C2D6EC(IsNullOrEmpty, objectId);
    }
LABEL_47:
    sub_1C2D6F4(IsNullOrEmpty, objectId, v12, v13);
  }
LABEL_46:
  v23 = QuestPhaseRewardComponent__Play(this, args, callback, v13);
  UnityEngine_MonoBehaviour__StartCoroutine_71149276((UnityEngine_MonoBehaviour_o *)this, v23, 0);
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
  System_String_o *BgSpriteName; // x23
  UILabel_o *countLabel; // x23
  System_String_o *v14; // x24
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  Il2CppObject *v18; // x0
  const MethodInfo *v19; // x3
  System_Collections_IEnumerator_o *v20; // x0
  int32_t v21; // [xsp+Ch] [xbp-54h] BYREF

  v10 = this;
  if ( (byte_4C213BC & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    this = (QuestPhaseRewardComponent_o *)sub_1C2D490(&StringLiteral_8811/*"MULTIPLE_INFO"*/);
    byte_4C213BC = 1;
  }
  if ( !args )
    goto LABEL_12;
  bgSprite = v10->fields.bgSprite;
  BgSpriteName = QuestPhaseRewardComponent__GetBgSpriteName(
                   args->fields._Type_k__BackingField,
                   itemId,
                   *(const MethodInfo **)&itemNum);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventSprite(bgSprite, BgSpriteName, 0);
  countLabel = v10->fields.countLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_8811/*"MULTIPLE_INFO"*/, 0);
  v21 = itemNum;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21, v15, v16, v17);
  this = (QuestPhaseRewardComponent_o *)System_String__Format(v14, v18, 0);
  if ( !countLabel
    || (UILabel__set_text(countLabel, (System_String_o *)this, 0),
        (this = (QuestPhaseRewardComponent_o *)v10->fields.countLabel) == 0)
    || (this = (QuestPhaseRewardComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0 )
  {
LABEL_12:
    sub_1C2D6EC(this, *(_QWORD *)&itemId);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  v20 = QuestPhaseRewardComponent__Play(v10, args, endAction, v19);
  UnityEngine_MonoBehaviour__StartCoroutine_71149276((UnityEngine_MonoBehaviour_o *)v10, v20, 0);
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

  if ( (byte_4C213BE & 1) == 0 )
  {
    sub_1C2D490(&RewardMiniPopup_DisplayArgs_TypeInfo);
    byte_4C213BE = 1;
  }
  v9 = (RewardMiniPopup_DisplayArgs_o *)sub_1C2D6DC(RewardMiniPopup_DisplayArgs_TypeInfo);
  RewardMiniPopup_DisplayArgs___ctor(v9, 0);
  if ( !v9 )
    sub_1C2D6EC(v10, v11);
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

  if ( (byte_4C213BF & 1) == 0 )
  {
    sub_1C2D490(&QuestPhaseRewardComponent__Play_d__24_TypeInfo);
    byte_4C213BF = 1;
  }
  v7 = sub_1C2D6DC(QuestPhaseRewardComponent__Play_d__24_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1C2D434(v7 + 32);
  *(_QWORD *)(v7 + 48) = args;
  sub_1C2D434(v7 + 48);
  *(_QWORD *)(v7 + 40) = endAction;
  sub_1C2D434(v7 + 40);
  return (System_Collections_IEnumerator_o *)v7;
}


// local variable allocation has failed, the output may be wrong!
void QuestPhaseRewardComponent__SetState(QuestPhaseRewardComponent_o *this, int32_t state, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4C213C1 & 1) == 0 )
  {
    sub_1C2D490(&Method_CStateManager_QuestPhaseRewardComponent__setState__);
    byte_4C213C1 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_1C2D6EC(0, *(_QWORD *)&state);
  CStateManager_object___setState(
    mFSM,
    state,
    (const MethodInfo_3313D9C *)Method_CStateManager_QuestPhaseRewardComponent__setState__);
}


void QuestPhaseRewardComponent__Update(QuestPhaseRewardComponent_o *this, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4C213B9 & 1) == 0 )
  {
    sub_1C2D490(&Method_CStateManager_QuestPhaseRewardComponent__update__);
    byte_4C213B9 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(
      mFSM,
      (const MethodInfo_3313D78 *)Method_CStateManager_QuestPhaseRewardComponent__update__);
}


bool QuestPhaseRewardComponent___Play_b__24_0(QuestPhaseRewardComponent_o *this, const MethodInfo *method)
{
  System_String_o *DISP_SE; // x19

  if ( (byte_4C213C3 & 1) == 0 )
  {
    sub_1C2D490(&SeManager_TypeInfo);
    byte_4C213C3 = 1;
  }
  DISP_SE = this->fields.DISP_SE;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
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
  struct SimpleAnimation_o *v5; // x20
  System_String_o *v6; // x0
  struct SimpleAnimation_o *v7; // x20
  System_String_o *v8; // x0
  struct SimpleAnimation_o *v9; // x20
  System_String_o *v10; // x0
  QuestPhaseRewardComponent_StatePlay_c *klass; // x8
  QuestPhaseRewardComponent_StatePlay_o *v12; // x20
  __int64 v13; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v15; // x0
  UnityEngine_Object_o *mAnimation; // x20
  UnityEngine_Animation_o *v17; // x20
  System_String_o *name; // x0
  UnityEngine_Animation_o *v19; // x20
  System_String_o *v20; // x0
  UnityEngine_Animation_o *v21; // x20
  System_String_o *v22; // x0
  UnityEngine_Animation_o *v23; // x19
  System_String_o *v24; // x0
  struct SimpleAnimation_o *v25; // x19
  System_String_o *v26; // x0
  QuestPhaseRewardComponent_StatePlay_c *v27; // x8
  QuestPhaseRewardComponent_StatePlay_o *v28; // x19
  __int64 v29; // x9
  int32_t *v30; // x10
  __int64 v31; // x0

  if ( (byte_4C213C4 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    this = (QuestPhaseRewardComponent_StatePlay_o *)sub_1C2D490(&SimpleAnimation_State_TypeInfo);
    byte_4C213C4 = 1;
  }
  if ( !that )
    goto LABEL_49;
  mSimpleAnimation = (UnityEngine_Object_o *)that->fields.mSimpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (QuestPhaseRewardComponent_StatePlay_o *)UnityEngine_Object__op_Inequality(mSimpleAnimation, 0, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    mAnimation = (UnityEngine_Object_o *)that->fields.mAnimation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (QuestPhaseRewardComponent_StatePlay_o *)UnityEngine_Object__op_Inequality(mAnimation, 0, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
      return;
    v17 = that->fields.mAnimation;
    if ( v17 )
    {
      this = (QuestPhaseRewardComponent_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0);
      if ( this )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
        this = (QuestPhaseRewardComponent_StatePlay_o *)UnityEngine_Animation__IsPlaying(v17, name, 0);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v19 = that->fields.mAnimation;
          if ( !v19 )
            goto LABEL_49;
          this = (QuestPhaseRewardComponent_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0);
          if ( !this )
            goto LABEL_49;
          v20 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
          this = (QuestPhaseRewardComponent_StatePlay_o *)UnityEngine_Animation__Play_70908988(v19, v20, 0);
        }
        v21 = that->fields.mAnimation;
        if ( v21 )
        {
          this = (QuestPhaseRewardComponent_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0);
          if ( this )
          {
            v22 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
            this = (QuestPhaseRewardComponent_StatePlay_o *)UnityEngine_Animation__get_Item(v21, v22, 0);
            if ( this )
            {
              UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)this, 0.0, 0);
              v23 = that->fields.mAnimation;
              if ( v23 )
              {
                this = (QuestPhaseRewardComponent_StatePlay_o *)UnityEngine_Animation__get_clip(v23, 0);
                if ( this )
                {
                  v24 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
                  this = (QuestPhaseRewardComponent_StatePlay_o *)UnityEngine_Animation__get_Item(v23, v24, 0);
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
    sub_1C2D6EC(this, that);
  }
  v5 = that->fields.mSimpleAnimation;
  if ( !v5 )
    goto LABEL_49;
  this = (QuestPhaseRewardComponent_StatePlay_o *)v5->fields.m_Clip;
  if ( !this )
    goto LABEL_49;
  v6 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
  this = (QuestPhaseRewardComponent_StatePlay_o *)SimpleAnimation__IsPlaying(v5, v6, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v7 = that->fields.mSimpleAnimation;
    if ( !v7 )
      goto LABEL_49;
    this = (QuestPhaseRewardComponent_StatePlay_o *)v7->fields.m_Clip;
    if ( !this )
      goto LABEL_49;
    v8 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
    this = (QuestPhaseRewardComponent_StatePlay_o *)SimpleAnimation__Play_66404364(v7, v8, 0);
  }
  v9 = that->fields.mSimpleAnimation;
  if ( !v9 )
    goto LABEL_49;
  this = (QuestPhaseRewardComponent_StatePlay_o *)v9->fields.m_Clip;
  if ( !this )
    goto LABEL_49;
  v10 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
  this = (QuestPhaseRewardComponent_StatePlay_o *)SimpleAnimation__get_Item(v9, v10, 0);
  if ( !this )
    goto LABEL_49;
  klass = this->klass;
  v12 = this;
  v13 = *(unsigned __int16 *)&this->klass->_2.rank;
  if ( *(_WORD *)&this->klass->_2.rank )
  {
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v13;
      p_offset += 2;
      if ( !v13 )
        goto LABEL_20;
    }
    v15 = (__int64)(&klass->vtable._6_end + *(_DWORD *)p_offset);
  }
  else
  {
LABEL_20:
    v15 = sub_1C7DCA8(this, SimpleAnimation_State_TypeInfo, 6);
  }
  this = (QuestPhaseRewardComponent_StatePlay_o *)(*(__int64 (__fastcall **)(QuestPhaseRewardComponent_StatePlay_o *, _QWORD, float))v15)(
                                                    v12,
                                                    *(_QWORD *)(v15 + 8),
                                                    0.0);
  v25 = that->fields.mSimpleAnimation;
  if ( !v25 )
    goto LABEL_49;
  this = (QuestPhaseRewardComponent_StatePlay_o *)v25->fields.m_Clip;
  if ( !this )
    goto LABEL_49;
  v26 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
  this = (QuestPhaseRewardComponent_StatePlay_o *)SimpleAnimation__get_Item(v25, v26, 0);
  if ( !this )
    goto LABEL_49;
  v27 = this->klass;
  v28 = this;
  v29 = *(unsigned __int16 *)&this->klass->_2.rank;
  if ( *(_WORD *)&this->klass->_2.rank )
  {
    v30 = &v27->_1.interfaceOffsets->offset;
    while ( *((SimpleAnimation_State_c **)v30 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v29;
      v30 += 4;
      if ( !v29 )
        goto LABEL_46;
    }
    v31 = (__int64)(&v27[1]._1.name + 2 * *v30);
  }
  else
  {
LABEL_46:
    v31 = sub_1C7DCA8(this, SimpleAnimation_State_TypeInfo, 8);
  }
  (*(void (__fastcall **)(QuestPhaseRewardComponent_StatePlay_o *, _QWORD, float))v31)(v28, *(_QWORD *)(v31 + 8), 1.0);
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
  struct SimpleAnimation_o *v5; // x20
  System_String_o *name; // x0
  UnityEngine_Object_o *mAnimation; // x20
  UnityEngine_Animation_o *v8; // x20
  System_String_o *v9; // x0
  const MethodInfo *v10; // x2

  if ( (byte_4C213C5 & 1) == 0 )
  {
    this = (QuestPhaseRewardComponent_StatePlay_o *)sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C213C5 = 1;
  }
  if ( !that )
    goto LABEL_19;
  mSimpleAnimation = (UnityEngine_Object_o *)that->fields.mSimpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (QuestPhaseRewardComponent_StatePlay_o *)UnityEngine_Object__op_Inequality(mSimpleAnimation, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v5 = that->fields.mSimpleAnimation;
    if ( v5 )
    {
      this = (QuestPhaseRewardComponent_StatePlay_o *)v5->fields.m_Clip;
      if ( this )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
        if ( !SimpleAnimation__IsPlaying(v5, name, 0) )
          goto LABEL_18;
        return;
      }
    }
LABEL_19:
    sub_1C2D6EC(this, that);
  }
  mAnimation = (UnityEngine_Object_o *)that->fields.mAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (QuestPhaseRewardComponent_StatePlay_o *)UnityEngine_Object__op_Inequality(mAnimation, 0, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
    return;
  v8 = that->fields.mAnimation;
  if ( !v8 )
    goto LABEL_19;
  this = (QuestPhaseRewardComponent_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0);
  if ( !this )
    goto LABEL_19;
  v9 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
  if ( !UnityEngine_Animation__IsPlaying(v8, v9, 0) )
  {
LABEL_18:
    ActionExtensions__Call(that->fields.mEndAct, 0);
    QuestPhaseRewardComponent__SetState(that, 0, v10);
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
  const MethodInfo *v2; // x2
  QuestPhaseRewardComponent__Play_d__24_o *v3; // x19
  int32_t _1__state; // w8
  QuestPhaseRewardComponent_o *_4__this; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  struct RewardMiniPopup_DisplayArgs_o *args; // x8
  System_String_o *DISP_SE; // x21
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  System_Func_bool__o *v12; // x21
  UnityEngine_WaitUntil_o *v13; // x20
  Il2CppObject **v14; // x19

  v3 = this;
  if ( (byte_4C213C6 & 1) == 0 )
  {
    sub_1C2D490(&System_Func_bool__TypeInfo);
    sub_1C2D490(&Method_QuestPhaseRewardComponent__Play_b__24_0__);
    sub_1C2D490(&SeManager_TypeInfo);
    sub_1C2D490(&Method_QuestPhaseRewardComponent__Play_d__24_MoveNext__);
    this = (QuestPhaseRewardComponent__Play_d__24_o *)sub_1C2D490(&UnityEngine_WaitUntil_TypeInfo);
    byte_4C213C6 = 1;
  }
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( _1__state == 2 )
  {
    v3->fields.__1__state = -1;
    if ( _4__this )
    {
      QuestPhaseRewardComponent__SetState(_4__this, 1, v2);
      return 0;
    }
LABEL_20:
    sub_1C2D6EC(this, method);
  }
  if ( _1__state != 1 )
  {
    if ( !_1__state )
    {
      v3->fields.__2__current = 0;
      p__2__current = &v3->fields.__2__current;
      *((_DWORD *)p__2__current - 2) = -1;
      sub_1C2D434(p__2__current);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
    return 0;
  }
  v3->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_20;
  _4__this->fields.mEndAct = v3->fields.endAction;
  sub_1C2D434(&_4__this->fields.mEndAct);
  args = v3->fields.args;
  if ( args && args->fields._IsPlaySeDuplicable_k__BackingField )
    goto LABEL_13;
  DISP_SE = _4__this->fields.DISP_SE;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  if ( !SeManager__IsBusySe(DISP_SE, 0) )
  {
LABEL_13:
    v10 = Method_QuestPhaseRewardComponent__Play_d__24_MoveNext__;
    if ( (*((_BYTE *)Method_QuestPhaseRewardComponent__Play_d__24_MoveNext__ + 83) & 2) != 0 )
      v10 = (_QWORD *)sub_1C2D4A8();
    v11 = (System_Reflection_MethodBase_o *)sub_1C2D474(v10, v10[4]);
    OverwriteAssetSoundName__PlaySe(v11, _4__this->fields.DISP_SE, 0, 0);
  }
  v12 = (System_Func_bool__o *)sub_1C2D6DC(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(v12, (Il2CppObject *)_4__this, Method_QuestPhaseRewardComponent__Play_b__24_0__, 0);
  v13 = (UnityEngine_WaitUntil_o *)sub_1C2D6DC(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v13, v12, 0);
  v3->fields.__2__current = (Il2CppObject *)v13;
  v14 = &v3->fields.__2__current;
  sub_1C2D434(v14);
  *((_DWORD *)v14 - 2) = 2;
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

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_QuestPhaseRewardComponent__Play_d__24_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
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