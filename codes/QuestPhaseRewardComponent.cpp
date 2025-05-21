void __fastcall QuestPhaseRewardComponent___ctor(QuestPhaseRewardComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4B3EF2E & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_22866/*"qev79"*/, method);
    byte_4B3EF2E = 1;
  }
  this->fields.DISP_SE = (struct System_String_o *)StringLiteral_22866/*"qev79"*/;
  sub_1BDB81C(&this->fields.DISP_SE);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall QuestPhaseRewardComponent__Awake(QuestPhaseRewardComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  CStateManager_T__o *v7; // x21
  CStateManager_T__o *mFSM; // x21
  Il2CppObject *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  CStateManager_T__o *v12; // x20
  Il2CppObject *v13; // x21
  const MethodInfo *v14; // x2

  if ( (byte_4B3EF24 & 1) == 0 )
  {
    sub_1BDB878(&Method_CStateManager_QuestPhaseRewardComponent___ctor__, method);
    sub_1BDB878(&Method_CStateManager_QuestPhaseRewardComponent__add__, v3);
    sub_1BDB878(&CStateManager_QuestPhaseRewardComponent__TypeInfo, v4);
    sub_1BDB878(&QuestPhaseRewardComponent_StateNone_TypeInfo, v5);
    sub_1BDB878(&QuestPhaseRewardComponent_StatePlay_TypeInfo, v6);
    byte_4B3EF24 = 1;
  }
  if ( !this->fields.mFSM )
  {
    v7 = (CStateManager_T__o *)sub_1BDBAC4(CStateManager_QuestPhaseRewardComponent__TypeInfo);
    CStateManager_object____ctor(
      v7,
      (Il2CppObject *)this,
      2,
      (const MethodInfo_3270084 *)Method_CStateManager_QuestPhaseRewardComponent___ctor__);
    this->fields.mFSM = (struct CStateManager_QuestPhaseRewardComponent__o *)v7;
    sub_1BDB81C(&this->fields.mFSM);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v9 = (Il2CppObject *)sub_1BDBAC4(QuestPhaseRewardComponent_StateNone_TypeInfo);
    System_Object___ctor(v9, 0LL);
    if ( !mFSM
      || (CStateManager_object___add(
            mFSM,
            0,
            (IState_T__o *)v9,
            (const MethodInfo_327012C *)Method_CStateManager_QuestPhaseRewardComponent__add__),
          v12 = (CStateManager_T__o *)this->fields.mFSM,
          v13 = (Il2CppObject *)sub_1BDBAC4(QuestPhaseRewardComponent_StatePlay_TypeInfo),
          System_Object___ctor(v13, 0LL),
          !v12) )
    {
      sub_1BDBAD4(v10, v11);
    }
    CStateManager_object___add(
      v12,
      1,
      (IState_T__o *)v13,
      (const MethodInfo_327012C *)Method_CStateManager_QuestPhaseRewardComponent__add__);
    QuestPhaseRewardComponent__SetState(this, 0, v14);
  }
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestPhaseRewardComponent__GetBgSpriteName(
        int32_t type,
        int32_t itemId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  Il2CppObject **v11; // x8
  Il2CppObject *v12; // x20
  Il2CppObject *v13; // x0
  System_String_o *v14; // x20
  Il2CppObject *Instance; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  Il2CppObject *v20; // x0
  int32_t v22; // [xsp+8h] [xbp-48h] BYREF
  int32_t v23; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B3EF29 & 1) == 0 )
  {
    sub_1BDB878(&int_TypeInfo, *(_QWORD *)&itemId);
    sub_1BDB878(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, v7);
    sub_1BDB878(&StringLiteral_25286/*"{0}_{1}"*/, v8);
    sub_1BDB878(&StringLiteral_22816/*"progress_reward_board"*/, v9);
    sub_1BDB878(&StringLiteral_24553/*"use_add_reward_item_reward_board"*/, v10);
    byte_4B3EF29 = 1;
  }
  if ( type == 4 )
    v11 = (Il2CppObject **)&StringLiteral_24553/*"use_add_reward_item_reward_board"*/;
  else
    v11 = (Il2CppObject **)&StringLiteral_22816/*"progress_reward_board"*/;
  v12 = *v11;
  v23 = itemId;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23, method, v3, v4);
  v14 = System_String__Format_62613552((System_String_o *)StringLiteral_25286/*"{0}_{1}"*/, v12, v13, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
  if ( !Instance )
    sub_1BDBAD4(0LL, v16);
  if ( !AtlasManager__HasSpriteInEventAtlas((AtlasManager_o *)Instance, v14, 0LL) )
  {
    v22 = itemId;
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22, v17, v18, v19);
    return System_String__Format_62613552(
             (System_String_o *)StringLiteral_25286/*"{0}_{1}"*/,
             (Il2CppObject *)StringLiteral_22816/*"progress_reward_board"*/,
             v20,
             0LL);
  }
  return v14;
}


int32_t __fastcall QuestPhaseRewardComponent__GetState(QuestPhaseRewardComponent_o *this, const MethodInfo *method)
{
  QuestPhaseRewardComponent_o *v2; // x19
  struct CStateManager_QuestPhaseRewardComponent__o *mFSM; // x8

  v2 = this;
  if ( (byte_4B3EF2C & 1) == 0 )
  {
    this = (QuestPhaseRewardComponent_o *)sub_1BDB878(
                                            &Method_CStateManager_QuestPhaseRewardComponent__getState__,
                                            method);
    byte_4B3EF2C = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_1BDBAD4(this, method);
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
  UnityEngine_Animation_o **p_mAnimation; // x20
  UnityEngine_Component_o *transform; // x0
  __int64 v12; // x1
  struct SimpleAnimation_o **p_mSimpleAnimation; // x21
  UnityEngine_Object_o *mSimpleAnimation; // x22
  SimpleAnimation_o *v15; // x20
  System_String_o *name; // x0
  UnityEngine_Component_c *klass; // x8
  UnityEngine_Component_o *v18; // x20
  __int64 v19; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v21; // x0
  UnityEngine_Animation_o *v22; // x21
  UnityEngine_Animation_o *v23; // x21
  System_String_o *v24; // x0
  UnityEngine_Animation_o *v25; // x20
  System_String_o *v26; // x0
  SimpleAnimation_o *v27; // x20
  System_String_o *v28; // x0
  UnityEngine_Component_c *v29; // x8
  UnityEngine_Component_o *v30; // x20
  __int64 v31; // x9
  SimpleAnimation_State_c **v32; // x10
  __int64 v33; // x0

  if ( (byte_4B3EF26 & 1) == 0 )
  {
    sub_1BDB878(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___, method);
    sub_1BDB878(&Method_UnityEngine_Component_GetComponent_Animation___, v3);
    sub_1BDB878(&Method_DataManager_GetMaster_ConstantStrMaster___, v4);
    sub_1BDB878(&DataManager_TypeInfo, v5);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v6);
    sub_1BDB878(&SimpleAnimation_State_TypeInfo, v7);
    sub_1BDB878(&StringLiteral_22816/*"progress_reward_board"*/, v8);
    sub_1BDB878(&StringLiteral_10897/*"QUEST_PHASE_REWARD_OVERWRITE_SPRITE"*/, v9);
    byte_4B3EF26 = 1;
  }
  this->fields.mAnimation = (struct UnityEngine_Animation_o *)UnityEngine_Component__GetComponent_object_(
                                                                (UnityEngine_Component_o *)this,
                                                                (const MethodInfo_302A12C *)Method_UnityEngine_Component_GetComponent_Animation___);
  p_mAnimation = &this->fields.mAnimation;
  sub_1BDB81C(&this->fields.mAnimation);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_44;
  this->fields.mSimpleAnimation = (struct SimpleAnimation_o *)UnityEngine_Component__GetComponentInChildren_object__50504592(
                                                                transform,
                                                                (const MethodInfo_302A390 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  p_mSimpleAnimation = &this->fields.mSimpleAnimation;
  sub_1BDB81C(&this->fields.mSimpleAnimation);
  mSimpleAnimation = (UnityEngine_Object_o *)this->fields.mSimpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(mSimpleAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    v15 = *p_mSimpleAnimation;
    if ( *p_mSimpleAnimation )
    {
      transform = (UnityEngine_Component_o *)v15[1].monitor;
      if ( transform )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0LL);
        transform = (UnityEngine_Component_o *)SimpleAnimation__get_Item(v15, name, 0LL);
        if ( transform )
        {
          klass = transform->klass;
          v18 = transform;
          v19 = *(unsigned __int16 *)(&transform->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&transform->klass->_2.bitflags2 + 3) )
          {
            p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
            while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
            {
              --v19;
              p_offset += 2;
              if ( !v19 )
                goto LABEL_14;
            }
            v21 = (__int64)(&klass[1]._1.castClass + 2 * *(_DWORD *)p_offset);
          }
          else
          {
LABEL_14:
            v21 = sub_1C2C00C(transform, SimpleAnimation_State_TypeInfo, 8LL);
          }
          transform = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(UnityEngine_Component_o *, _QWORD, float))v21)(
                                                   v18,
                                                   *(_QWORD *)(v21 + 8),
                                                   0.0);
          v27 = *p_mSimpleAnimation;
          if ( *p_mSimpleAnimation )
          {
            transform = (UnityEngine_Component_o *)v27[1].monitor;
            if ( transform )
            {
              v28 = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0LL);
              transform = (UnityEngine_Component_o *)SimpleAnimation__get_Item(v27, v28, 0LL);
              if ( transform )
              {
                v29 = transform->klass;
                v30 = transform;
                v31 = *(unsigned __int16 *)(&transform->klass->_2.bitflags2 + 3);
                if ( *(_WORD *)(&transform->klass->_2.bitflags2 + 3) )
                {
                  v32 = (SimpleAnimation_State_c **)&v29->_1.interfaceOffsets->offset;
                  while ( *(v32 - 1) != SimpleAnimation_State_TypeInfo )
                  {
                    --v31;
                    v32 += 2;
                    if ( !v31 )
                      goto LABEL_33;
                  }
                  v33 = (__int64)(&v29[1]._1.byval_arg.bits + 4 * *(_DWORD *)v32);
                }
                else
                {
LABEL_33:
                  v33 = sub_1C2C00C(transform, SimpleAnimation_State_TypeInfo, 6LL);
                }
                (*(void (__fastcall **)(UnityEngine_Component_o *, _QWORD, float))v33)(v30, *(_QWORD *)(v33 + 8), 0.0);
                goto LABEL_36;
              }
            }
          }
        }
      }
    }
LABEL_44:
    sub_1BDBAD4(transform, v12);
  }
  v22 = *p_mAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v22, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    v23 = *p_mAnimation;
    if ( !*p_mAnimation )
      goto LABEL_44;
    transform = (UnityEngine_Component_o *)UnityEngine_Animation__get_clip(*p_mAnimation, 0LL);
    if ( !transform )
      goto LABEL_44;
    v24 = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0LL);
    transform = (UnityEngine_Component_o *)UnityEngine_Animation__get_Item(v23, v24, 0LL);
    if ( !transform )
      goto LABEL_44;
    UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)transform, 0.0, 0LL);
    v25 = *p_mAnimation;
    if ( !v25 )
      goto LABEL_44;
    transform = (UnityEngine_Component_o *)UnityEngine_Animation__get_clip(v25, 0LL);
    if ( !transform )
      goto LABEL_44;
    v26 = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0LL);
    transform = (UnityEngine_Component_o *)UnityEngine_Animation__get_Item(v25, v26, 0LL);
    if ( !transform )
      goto LABEL_44;
    UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)transform, 0.0, 0LL);
  }
LABEL_36:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  transform = (UnityEngine_Component_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ConstantStrMaster___);
  if ( !transform )
    goto LABEL_44;
  this->fields.overwriteSpriteName = ConstantStrMaster__GetValue(
                                       (ConstantStrMaster_o *)transform,
                                       (System_String_o *)StringLiteral_10897/*"QUEST_PHASE_REWARD_OVERWRITE_SPRITE"*/,
                                       0LL);
  sub_1BDB81C(&this->fields.overwriteSpriteName);
  transform = (UnityEngine_Component_o *)this->fields.bgSprite;
  if ( !transform )
    goto LABEL_44;
  UISprite__set_atlas((UISprite_o *)transform, this->fields.systemUIAtlas, 0LL);
  transform = (UnityEngine_Component_o *)this->fields.bgSprite;
  if ( !transform )
    goto LABEL_44;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)transform, (System_String_o *)StringLiteral_22816/*"progress_reward_board"*/, 0LL);
  transform = (UnityEngine_Component_o *)this->fields.countLabel;
  if ( !transform )
    goto LABEL_44;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(transform, 0LL);
  if ( !transform )
    goto LABEL_44;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
}


void __fastcall QuestPhaseRewardComponent__Open(
        QuestPhaseRewardComponent_o *this,
        QuestRewardInfo_array *questRewardInfoArray,
        RewardMiniPopup_DisplayArgs_o *args,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Object_array *ComponentsInChildren_object; // x22
  GiftDetailMaster_o *IsNullOrEmpty; // x0
  __int64 objectId; // x1
  __int64 v17; // x2
  const MethodInfo *v18; // x3
  TerminalPramsManager_c *v19; // x0
  int32_t PhaseCnt_k__BackingField; // w27
  Il2CppObject *Master_object; // x24
  int32_t giftId; // w24
  System_String_o *OverwriteImageIdByQuestPhaseReward; // x24
  System_String_o *overwriteSpriteName; // x1
  signed int max_length; // w8
  __int64 v26; // x9
  QuestRewardInfo_o *v27; // x11
  System_Collections_IEnumerator_o *v28; // x0
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B3EF27 & 1) == 0 )
  {
    sub_1BDB878(&Method_UnityEngine_Component_GetComponentsInChildren_ItemIconComponent___, questRewardInfoArray);
    sub_1BDB878(&Method_DataManager_GetMaster_GiftDetailMaster___, v9);
    sub_1BDB878(&Method_DataManager_GetMaster_QuestPhaseMaster___, v10);
    sub_1BDB878(&DataManager_TypeInfo, v11);
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v12);
    sub_1BDB878(&StringLiteral_1/*""*/, v13);
    byte_4B3EF27 = 1;
  }
  entity = 0LL;
  if ( !questRewardInfoArray )
  {
    ActionExtensions__Call(callback, 0LL);
    return;
  }
  ComponentsInChildren_object = UnityEngine_Component__GetComponentsInChildren_object_(
                                  (UnityEngine_Component_o *)this,
                                  1,
                                  (const MethodInfo_302AE50 *)Method_UnityEngine_Component_GetComponentsInChildren_ItemIconComponent___);
  IsNullOrEmpty = (GiftDetailMaster_o *)System_String__IsNullOrEmpty(this->fields.overwriteSpriteName, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4B3EFCF )
    {
      sub_1BDB878(&TerminalPramsManager_TypeInfo, objectId);
      byte_4B3EFCF = 1;
    }
    v19 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v19 = TerminalPramsManager_TypeInfo;
    }
    PhaseCnt_k__BackingField = v19->static_fields->_PhaseCnt_k__BackingField;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !byte_4B3EFD0 )
    {
      sub_1BDB878(&TerminalPramsManager_TypeInfo, objectId);
      byte_4B3EFD0 = 1;
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
                                            0LL);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
      goto LABEL_35;
    if ( !entity )
      goto LABEL_48;
    giftId = entity->fields.giftId;
    if ( !giftId )
      goto LABEL_35;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    IsNullOrEmpty = (GiftDetailMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_GiftDetailMaster___);
    if ( !IsNullOrEmpty )
      goto LABEL_48;
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
      if ( !ComponentsInChildren_object )
        goto LABEL_48;
      if ( ComponentsInChildren_object->max_length )
      {
        IsNullOrEmpty = (GiftDetailMaster_o *)ComponentsInChildren_object->m_Items[0];
        if ( IsNullOrEmpty )
        {
          overwriteSpriteName = OverwriteImageIdByQuestPhaseReward;
LABEL_34:
          ItemIconComponent__SetItemImageByName((ItemIconComponent_o *)IsNullOrEmpty, overwriteSpriteName, 0LL);
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
        objectId = 0LL;
        if ( !ComponentsInChildren_object )
          goto LABEL_46;
      }
      else
      {
        v26 = 0LL;
        do
        {
          if ( (unsigned int)v26 >= max_length )
            goto LABEL_47;
          v27 = questRewardInfoArray->m_Items[v26];
          if ( !v27 )
            goto LABEL_48;
          ++v26;
        }
        while ( (int)v26 < max_length );
        objectId = (unsigned int)v27->fields.objectId;
        if ( !ComponentsInChildren_object )
          goto LABEL_46;
      }
      if ( ComponentsInChildren_object->max_length )
      {
        IsNullOrEmpty = (GiftDetailMaster_o *)ComponentsInChildren_object->m_Items[0];
        if ( IsNullOrEmpty )
        {
          ItemIconComponent__SetItemImage((ItemIconComponent_o *)IsNullOrEmpty, objectId, 0LL);
          goto LABEL_46;
        }
        goto LABEL_48;
      }
    }
    goto LABEL_47;
  }
  if ( ComponentsInChildren_object )
  {
    if ( ComponentsInChildren_object->max_length )
    {
      IsNullOrEmpty = (GiftDetailMaster_o *)ComponentsInChildren_object->m_Items[0];
      if ( IsNullOrEmpty )
      {
        overwriteSpriteName = this->fields.overwriteSpriteName;
        goto LABEL_34;
      }
LABEL_48:
      sub_1BDBAD4(IsNullOrEmpty, objectId);
    }
LABEL_47:
    sub_1BDBADC(IsNullOrEmpty, objectId, v17, v18);
  }
LABEL_46:
  v28 = QuestPhaseRewardComponent__Play(this, args, callback, v18);
  UnityEngine_MonoBehaviour__StartCoroutine_70269772((UnityEngine_MonoBehaviour_o *)this, v28, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestPhaseRewardComponent__OpenByItemIdAndNum(
        QuestPhaseRewardComponent_o *this,
        int32_t itemId,
        int32_t itemNum,
        RewardMiniPopup_DisplayArgs_o *args,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  QuestPhaseRewardComponent_o *v10; // x20
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  UISprite_o *bgSprite; // x24
  System_String_o *BgSpriteName; // x23
  UILabel_o *countLabel; // x23
  System_String_o *v17; // x24
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  Il2CppObject *v21; // x0
  const MethodInfo *v22; // x3
  System_Collections_IEnumerator_o *v23; // x0
  int32_t v24; // [xsp+Ch] [xbp-54h] BYREF

  v10 = this;
  if ( (byte_4B3EF28 & 1) == 0 )
  {
    sub_1BDB878(&AtlasManager_TypeInfo, *(_QWORD *)&itemId);
    sub_1BDB878(&int_TypeInfo, v11);
    sub_1BDB878(&LocalizationManager_TypeInfo, v12);
    this = (QuestPhaseRewardComponent_o *)sub_1BDB878(&StringLiteral_8809/*"MULTIPLE_INFO"*/, v13);
    byte_4B3EF28 = 1;
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
  AtlasManager__SetEventSprite(bgSprite, BgSpriteName, 0LL);
  countLabel = v10->fields.countLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_8809/*"MULTIPLE_INFO"*/, 0LL);
  v24 = itemNum;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24, v18, v19, v20);
  this = (QuestPhaseRewardComponent_o *)System_String__Format(v17, v21, 0LL);
  if ( !countLabel
    || (UILabel__set_text(countLabel, (System_String_o *)this, 0LL),
        (this = (QuestPhaseRewardComponent_o *)v10->fields.countLabel) == 0LL)
    || (this = (QuestPhaseRewardComponent_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this,
                                                0LL)) == 0LL )
  {
LABEL_12:
    sub_1BDBAD4(this, *(_QWORD *)&itemId);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v23 = QuestPhaseRewardComponent__Play(v10, args, endAction, v22);
  UnityEngine_MonoBehaviour__StartCoroutine_70269772((UnityEngine_MonoBehaviour_o *)v10, v23, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestPhaseRewardComponent__OpenCampaignDirectBonus(
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

  if ( (byte_4B3EF2A & 1) == 0 )
  {
    sub_1BDB878(&RewardMiniPopup_DisplayArgs_TypeInfo, *(_QWORD *)&itemId);
    byte_4B3EF2A = 1;
  }
  v9 = (RewardMiniPopup_DisplayArgs_o *)sub_1BDBAC4(RewardMiniPopup_DisplayArgs_TypeInfo);
  RewardMiniPopup_DisplayArgs___ctor(v9, 0LL);
  if ( !v9 )
    sub_1BDBAD4(v10, v11);
  v9->fields._Type_k__BackingField = 3;
  QuestPhaseRewardComponent__OpenByItemIdAndNum(this, itemId, itemNum, v9, callback, v12);
}


System_Collections_IEnumerator_o *__fastcall QuestPhaseRewardComponent__Play(
        QuestPhaseRewardComponent_o *this,
        RewardMiniPopup_DisplayArgs_o *args,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v7; // x22

  if ( (byte_4B3EF2B & 1) == 0 )
  {
    sub_1BDB878(&QuestPhaseRewardComponent__Play_d__24_TypeInfo, args);
    byte_4B3EF2B = 1;
  }
  v7 = sub_1BDBAC4(QuestPhaseRewardComponent__Play_d__24_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1BDB81C(v7 + 32);
  *(_QWORD *)(v7 + 48) = args;
  sub_1BDB81C(v7 + 48);
  *(_QWORD *)(v7 + 40) = endAction;
  sub_1BDB81C(v7 + 40);
  return (System_Collections_IEnumerator_o *)v7;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestPhaseRewardComponent__SetState(
        QuestPhaseRewardComponent_o *this,
        int32_t state,
        const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4B3EF2D & 1) == 0 )
  {
    sub_1BDB878(&Method_CStateManager_QuestPhaseRewardComponent__setState__, *(_QWORD *)&state);
    byte_4B3EF2D = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_1BDBAD4(0LL, *(_QWORD *)&state);
  CStateManager_object___setState(
    mFSM,
    state,
    (const MethodInfo_32701B8 *)Method_CStateManager_QuestPhaseRewardComponent__setState__);
}


void __fastcall QuestPhaseRewardComponent__Update(QuestPhaseRewardComponent_o *this, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4B3EF25 & 1) == 0 )
  {
    sub_1BDB878(&Method_CStateManager_QuestPhaseRewardComponent__update__, method);
    byte_4B3EF25 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(
      mFSM,
      (const MethodInfo_3270194 *)Method_CStateManager_QuestPhaseRewardComponent__update__);
}


bool __fastcall QuestPhaseRewardComponent___Play_b__24_0(QuestPhaseRewardComponent_o *this, const MethodInfo *method)
{
  System_String_o *DISP_SE; // x19

  if ( (byte_4B3EF2F & 1) == 0 )
  {
    sub_1BDB878(&SeManager_TypeInfo, method);
    byte_4B3EF2F = 1;
  }
  DISP_SE = this->fields.DISP_SE;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
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
  QuestPhaseRewardComponent_StatePlay_c *klass; // x8
  QuestPhaseRewardComponent_StatePlay_o *v13; // x20
  __int64 v14; // x9
  int32_t *p_offset; // x10
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

  if ( (byte_4B3EF30 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, that);
    this = (QuestPhaseRewardComponent_StatePlay_o *)sub_1BDB878(&SimpleAnimation_State_TypeInfo, v4);
    byte_4B3EF30 = 1;
  }
  if ( !that )
    goto LABEL_49;
  mSimpleAnimation = (UnityEngine_Object_o *)that->fields.mSimpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (QuestPhaseRewardComponent_StatePlay_o *)UnityEngine_Object__op_Inequality(mSimpleAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    mAnimation = (UnityEngine_Object_o *)that->fields.mAnimation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
            goto LABEL_49;
          this = (QuestPhaseRewardComponent_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0LL);
          if ( !this )
            goto LABEL_49;
          v21 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
          this = (QuestPhaseRewardComponent_StatePlay_o *)UnityEngine_Animation__Play_70027660(v20, v21, 0LL);
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
LABEL_49:
    sub_1BDBAD4(this, that);
  }
  v6 = that->fields.mSimpleAnimation;
  if ( !v6 )
    goto LABEL_49;
  this = (QuestPhaseRewardComponent_StatePlay_o *)v6[1].monitor;
  if ( !this )
    goto LABEL_49;
  v7 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestPhaseRewardComponent_StatePlay_o *)SimpleAnimation__IsPlaying(v6, v7, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v8 = that->fields.mSimpleAnimation;
    if ( !v8 )
      goto LABEL_49;
    this = (QuestPhaseRewardComponent_StatePlay_o *)v8[1].monitor;
    if ( !this )
      goto LABEL_49;
    v9 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
    this = (QuestPhaseRewardComponent_StatePlay_o *)SimpleAnimation__Play_65523240(v8, v9, 0LL);
  }
  v10 = that->fields.mSimpleAnimation;
  if ( !v10 )
    goto LABEL_49;
  this = (QuestPhaseRewardComponent_StatePlay_o *)v10[1].monitor;
  if ( !this )
    goto LABEL_49;
  v11 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestPhaseRewardComponent_StatePlay_o *)SimpleAnimation__get_Item(v10, v11, 0LL);
  if ( !this )
    goto LABEL_49;
  klass = this->klass;
  v13 = this;
  v14 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((SimpleAnimation_State_c **)p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v14;
      p_offset += 4;
      if ( !v14 )
        goto LABEL_20;
    }
    v16 = (__int64)(&klass->vtable._6_end.method + 2 * *p_offset);
  }
  else
  {
LABEL_20:
    v16 = sub_1C2C00C(this, SimpleAnimation_State_TypeInfo, 6LL);
  }
  this = (QuestPhaseRewardComponent_StatePlay_o *)(*(__int64 (__fastcall **)(QuestPhaseRewardComponent_StatePlay_o *, _QWORD, float))v16)(
                                                    v13,
                                                    *(_QWORD *)(v16 + 8),
                                                    0.0);
  v26 = that->fields.mSimpleAnimation;
  if ( !v26 )
    goto LABEL_49;
  this = (QuestPhaseRewardComponent_StatePlay_o *)v26[1].monitor;
  if ( !this )
    goto LABEL_49;
  v27 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestPhaseRewardComponent_StatePlay_o *)SimpleAnimation__get_Item(v26, v27, 0LL);
  if ( !this )
    goto LABEL_49;
  v28 = this->klass;
  v29 = this;
  v30 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
  {
    v31 = &v28->_1.interfaceOffsets->offset;
    while ( *((SimpleAnimation_State_c **)v31 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v30;
      v31 += 4;
      if ( !v30 )
        goto LABEL_46;
    }
    v32 = (__int64)(&v28[1]._1.namespaze + 2 * *v31);
  }
  else
  {
LABEL_46:
    v32 = sub_1C2C00C(this, SimpleAnimation_State_TypeInfo, 8LL);
  }
  (*(void (__fastcall **)(QuestPhaseRewardComponent_StatePlay_o *, _QWORD, float))v32)(v29, *(_QWORD *)(v32 + 8), 1.0);
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
  const MethodInfo *v10; // x2

  if ( (byte_4B3EF31 & 1) == 0 )
  {
    this = (QuestPhaseRewardComponent_StatePlay_o *)sub_1BDB878(&UnityEngine_Object_TypeInfo, that);
    byte_4B3EF31 = 1;
  }
  if ( !that )
    goto LABEL_19;
  mSimpleAnimation = (UnityEngine_Object_o *)that->fields.mSimpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
          goto LABEL_18;
        return;
      }
    }
LABEL_19:
    sub_1BDBAD4(this, that);
  }
  mAnimation = (UnityEngine_Object_o *)that->fields.mAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (QuestPhaseRewardComponent_StatePlay_o *)UnityEngine_Object__op_Inequality(mAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    return;
  v8 = that->fields.mAnimation;
  if ( !v8 )
    goto LABEL_19;
  this = (QuestPhaseRewardComponent_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0LL);
  if ( !this )
    goto LABEL_19;
  v9 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  if ( !UnityEngine_Animation__IsPlaying(v8, v9, 0LL) )
  {
LABEL_18:
    ActionExtensions__Call(that->fields.mEndAct, 0LL);
    QuestPhaseRewardComponent__SetState(that, 0, v10);
  }
}


void __fastcall QuestPhaseRewardComponent__Play_d__24___ctor(
        QuestPhaseRewardComponent__Play_d__24_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall QuestPhaseRewardComponent__Play_d__24__MoveNext(
        QuestPhaseRewardComponent__Play_d__24_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  QuestPhaseRewardComponent__Play_d__24_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t _1__state; // w8
  QuestPhaseRewardComponent_o *_4__this; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  struct RewardMiniPopup_DisplayArgs_o *args; // x8
  System_String_o *DISP_SE; // x21
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0
  System_Func_bool__o *v16; // x21
  UnityEngine_WaitUntil_o *v17; // x20
  Il2CppObject **v18; // x19

  v3 = this;
  if ( (byte_4B3EF32 & 1) == 0 )
  {
    sub_1BDB878(&System_Func_bool__TypeInfo, method);
    sub_1BDB878(&Method_QuestPhaseRewardComponent__Play_b__24_0__, v4);
    sub_1BDB878(&SeManager_TypeInfo, v5);
    sub_1BDB878(&Method_QuestPhaseRewardComponent__Play_d__24_MoveNext__, v6);
    this = (QuestPhaseRewardComponent__Play_d__24_o *)sub_1BDB878(&UnityEngine_WaitUntil_TypeInfo, v7);
    byte_4B3EF32 = 1;
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
    sub_1BDBAD4(this, method);
  }
  if ( _1__state != 1 )
  {
    if ( !_1__state )
    {
      v3->fields.__2__current = 0LL;
      p__2__current = &v3->fields.__2__current;
      *((_DWORD *)p__2__current - 2) = -1;
      sub_1BDB81C(p__2__current);
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
  sub_1BDB81C(&_4__this->fields.mEndAct);
  args = v3->fields.args;
  if ( args && args->fields._IsPlaySeDuplicable_k__BackingField )
    goto LABEL_13;
  DISP_SE = _4__this->fields.DISP_SE;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  if ( !SeManager__IsBusySe(DISP_SE, 0LL) )
  {
LABEL_13:
    v14 = Method_QuestPhaseRewardComponent__Play_d__24_MoveNext__;
    if ( (*((_BYTE *)Method_QuestPhaseRewardComponent__Play_d__24_MoveNext__ + 83) & 2) != 0 )
      v14 = (_QWORD *)sub_1BDB890();
    v15 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v14, v14[4]);
    OverwriteAssetSoundName__PlaySe(v15, _4__this->fields.DISP_SE, 0, 0LL);
  }
  v16 = (System_Func_bool__o *)sub_1BDBAC4(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(v16, (Il2CppObject *)_4__this, Method_QuestPhaseRewardComponent__Play_b__24_0__, 0LL);
  v17 = (UnityEngine_WaitUntil_o *)sub_1BDBAC4(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v17, v16, 0LL);
  v3->fields.__2__current = (Il2CppObject *)v17;
  v18 = &v3->fields.__2__current;
  sub_1BDB81C(v18);
  *((_DWORD *)v18 - 2) = 2;
  return 1;
}


Il2CppObject *__fastcall QuestPhaseRewardComponent__Play_d__24__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        QuestPhaseRewardComponent__Play_d__24_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn QuestPhaseRewardComponent__Play_d__24__System_Collections_IEnumerator_Reset(
        QuestPhaseRewardComponent__Play_d__24_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BDB88C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BDBAC4(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BDB88C(&Method_QuestPhaseRewardComponent__Play_d__24_System_Collections_IEnumerator_Reset__);
  sub_1BDB9A0(v3, v4);
}


Il2CppObject *__fastcall QuestPhaseRewardComponent__Play_d__24__System_Collections_IEnumerator_get_Current(
        QuestPhaseRewardComponent__Play_d__24_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall QuestPhaseRewardComponent__Play_d__24__System_IDisposable_Dispose(
        QuestPhaseRewardComponent__Play_d__24_o *this,
        const MethodInfo *method)
{
  ;
}