void __fastcall QuestPhaseRewardComponent___ctor(QuestPhaseRewardComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4BAF3A9 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_23048/*"purchaseToken"*/, method);
    byte_4BAF3A9 = 1;
  }
  this->fields.DISP_SE = (struct System_String_o *)StringLiteral_23048/*"purchaseToken"*/;
  sub_1C13CC8(&this->fields.DISP_SE);
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

  if ( (byte_4BAF3A1 & 1) == 0 )
  {
    sub_1C13D24(&Method_CStateManager_QuestPhaseRewardComponent___ctor__, method);
    sub_1C13D24(&Method_CStateManager_QuestPhaseRewardComponent__add__, v3);
    sub_1C13D24(&CStateManager_QuestPhaseRewardComponent__TypeInfo, v4);
    sub_1C13D24(&QuestPhaseRewardComponent_StateNone_TypeInfo, v5);
    sub_1C13D24(&QuestPhaseRewardComponent_StatePlay_TypeInfo, v6);
    byte_4BAF3A1 = 1;
  }
  if ( !this->fields.mFSM )
  {
    v7 = (CStateManager_T__o *)sub_1C13F70(CStateManager_QuestPhaseRewardComponent__TypeInfo);
    CStateManager_object____ctor(
      v7,
      (Il2CppObject *)this,
      2,
      (const MethodInfo_31C327C *)Method_CStateManager_QuestPhaseRewardComponent___ctor__);
    this->fields.mFSM = (struct CStateManager_QuestPhaseRewardComponent__o *)v7;
    sub_1C13CC8(&this->fields.mFSM);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v9 = (Il2CppObject *)sub_1C13F70(QuestPhaseRewardComponent_StateNone_TypeInfo);
    System_Object___ctor(v9, 0LL);
    if ( !mFSM
      || (CStateManager_object___add(
            mFSM,
            0,
            (IState_T__o *)v9,
            (const MethodInfo_31C3324 *)Method_CStateManager_QuestPhaseRewardComponent__add__),
          v12 = (CStateManager_T__o *)this->fields.mFSM,
          v13 = (Il2CppObject *)sub_1C13F70(QuestPhaseRewardComponent_StatePlay_TypeInfo),
          System_Object___ctor(v13, 0LL),
          !v12) )
    {
      sub_1C13F80(v10, v11);
    }
    CStateManager_object___add(
      v12,
      1,
      (IState_T__o *)v13,
      (const MethodInfo_31C3324 *)Method_CStateManager_QuestPhaseRewardComponent__add__);
    QuestPhaseRewardComponent__SetState(this, 0, v14);
  }
}


int32_t __fastcall QuestPhaseRewardComponent__GetState(QuestPhaseRewardComponent_o *this, const MethodInfo *method)
{
  QuestPhaseRewardComponent_o *v2; // x19
  struct CStateManager_QuestPhaseRewardComponent__o *mFSM; // x8

  v2 = this;
  if ( (byte_4BAF3A7 & 1) == 0 )
  {
    this = (QuestPhaseRewardComponent_o *)sub_1C13D24(
                                            &Method_CStateManager_QuestPhaseRewardComponent__getState__,
                                            method);
    byte_4BAF3A7 = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_1C13F80(this, method);
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

  if ( (byte_4BAF3A3 & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___, method);
    sub_1C13D24(&Method_UnityEngine_Component_GetComponent_Animation___, v3);
    sub_1C13D24(&Method_DataManager_GetMaster_ConstantStrMaster___, v4);
    sub_1C13D24(&DataManager_TypeInfo, v5);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v6);
    sub_1C13D24(&SimpleAnimation_State_TypeInfo, v7);
    sub_1C13D24(&StringLiteral_22996/*"privacyPolicy"*/, v8);
    sub_1C13D24(&StringLiteral_11093/*"QUEST_MESSAGE_DLG_MOVIE_PLAY_SUB_MESSAGE"*/, v9);
    byte_4BAF3A3 = 1;
  }
  this->fields.mAnimation = (struct UnityEngine_Animation_o *)UnityEngine_Component__GetComponent_object_(
                                                                (UnityEngine_Component_o *)this,
                                                                (const MethodInfo_2F85F10 *)Method_UnityEngine_Component_GetComponent_Animation___);
  p_mAnimation = &this->fields.mAnimation;
  sub_1C13CC8(&this->fields.mAnimation);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_44;
  this->fields.mSimpleAnimation = (struct SimpleAnimation_o *)UnityEngine_Component__GetComponentInChildren_object__49832308(
                                                                transform,
                                                                (const MethodInfo_2F86174 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  p_mSimpleAnimation = &this->fields.mSimpleAnimation;
  sub_1C13CC8(&this->fields.mSimpleAnimation);
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
            v21 = sub_1C65D04(transform, SimpleAnimation_State_TypeInfo, 8LL);
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
                  v33 = sub_1C65D04(transform, SimpleAnimation_State_TypeInfo, 6LL);
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
    sub_1C13F80(transform, v12);
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
  transform = (UnityEngine_Component_o *)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_ConstantStrMaster___);
  if ( !transform )
    goto LABEL_44;
  this->fields.overwriteSpriteName = ConstantStrMaster__GetValue(
                                       (ConstantStrMaster_o *)transform,
                                       (System_String_o *)StringLiteral_11093/*"QUEST_MESSAGE_DLG_MOVIE_PLAY_SUB_MESSAGE"*/,
                                       0LL);
  sub_1C13CC8(&this->fields.overwriteSpriteName);
  transform = (UnityEngine_Component_o *)this->fields.bgSprite;
  if ( !transform )
    goto LABEL_44;
  UISprite__set_atlas((UISprite_o *)transform, this->fields.systemUIAtlas, 0LL);
  transform = (UnityEngine_Component_o *)this->fields.bgSprite;
  if ( !transform )
    goto LABEL_44;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)transform, (System_String_o *)StringLiteral_22996/*"privacyPolicy"*/, 0LL);
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
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  TerminalPramsManager_c *v10; // x0
  System_Object_array *ComponentsInChildren_object; // x21
  GiftDetailMaster_o *IsNullOrEmpty; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  __int64 v15; // x3
  TerminalPramsManager_c *v16; // x0
  int32_t PhaseCnt_k__BackingField; // w25
  Il2CppObject *Master_object; // x22
  int32_t giftId; // w22
  System_String_o *OverwriteImageIdByQuestPhaseReward; // x22
  System_String_o *overwriteSpriteName; // x1
  struct System_Collections_ObjectModel_ObservableCollection_SimpleMonitor_T__o *monitor; // x8
  int collection; // w9
  int i; // w10
  __int64 v25; // x11
  System_Collections_IEnumerator_o *v26; // x0
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4BAF3A4 & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_Component_GetComponentsInChildren_ItemIconComponent___, callback);
    sub_1C13D24(&Method_DataManager_GetMaster_GiftDetailMaster___, v5);
    sub_1C13D24(&Method_DataManager_GetMaster_QuestPhaseMaster___, v6);
    sub_1C13D24(&DataManager_TypeInfo, v7);
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v8);
    sub_1C13D24(&StringLiteral_1/*""*/, v9);
    byte_4BAF3A4 = 1;
  }
  v10 = TerminalPramsManager_TypeInfo;
  entity = 0LL;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v10 = TerminalPramsManager_TypeInfo;
  }
  if ( !v10->static_fields->mQuestPhaseRewardInfos )
  {
    ActionExtensions__Call(callback, 0LL);
    return;
  }
  ComponentsInChildren_object = UnityEngine_Component__GetComponentsInChildren_object_(
                                  (UnityEngine_Component_o *)this,
                                  1,
                                  (const MethodInfo_2F869FC *)Method_UnityEngine_Component_GetComponentsInChildren_ItemIconComponent___);
  IsNullOrEmpty = (GiftDetailMaster_o *)System_String__IsNullOrEmpty(this->fields.overwriteSpriteName, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BAF44C )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, v13);
      byte_4BAF44C = 1;
    }
    v16 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v16 = TerminalPramsManager_TypeInfo;
    }
    PhaseCnt_k__BackingField = v16->static_fields->_PhaseCnt_k__BackingField;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !byte_4BAF44D )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, v13);
      byte_4BAF44D = 1;
    }
    IsNullOrEmpty = (GiftDetailMaster_o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      IsNullOrEmpty = (GiftDetailMaster_o *)TerminalPramsManager_TypeInfo;
    }
    if ( !Master_object )
      goto LABEL_52;
    IsNullOrEmpty = (GiftDetailMaster_o *)QuestPhaseMaster__TryGetEntity(
                                            (QuestPhaseMaster_o *)Master_object,
                                            &entity,
                                            HIDWORD(IsNullOrEmpty[2].fields.list->fields.items),
                                            PhaseCnt_k__BackingField + 1,
                                            0LL);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
      goto LABEL_37;
    if ( !entity )
      goto LABEL_52;
    giftId = entity->fields.giftId;
    if ( !giftId )
      goto LABEL_37;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    IsNullOrEmpty = (GiftDetailMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_GiftDetailMaster___);
    if ( !IsNullOrEmpty )
      goto LABEL_52;
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
        goto LABEL_52;
      if ( ComponentsInChildren_object->max_length )
      {
        IsNullOrEmpty = (GiftDetailMaster_o *)ComponentsInChildren_object->m_Items[0];
        if ( IsNullOrEmpty )
        {
          overwriteSpriteName = OverwriteImageIdByQuestPhaseReward;
LABEL_36:
          ItemIconComponent__SetItemImageByName((ItemIconComponent_o *)IsNullOrEmpty, overwriteSpriteName, 0LL);
          goto LABEL_51;
        }
        goto LABEL_52;
      }
    }
    else
    {
LABEL_37:
      IsNullOrEmpty = (GiftDetailMaster_o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        IsNullOrEmpty = (GiftDetailMaster_o *)TerminalPramsManager_TypeInfo;
      }
      monitor = IsNullOrEmpty[2].fields.list[11].fields._monitor;
      if ( !monitor )
        goto LABEL_52;
      collection = (int)monitor->fields._collection;
      if ( collection < 1 )
      {
        v13 = 0LL;
        if ( !ComponentsInChildren_object )
          goto LABEL_51;
      }
      else
      {
        for ( i = 0; i != collection; ++i )
        {
          if ( collection == i )
            goto LABEL_53;
          v25 = *((_QWORD *)&monitor[1].klass + i);
          if ( !v25 )
            goto LABEL_52;
        }
        v13 = *(unsigned int *)(v25 + 20);
        if ( !ComponentsInChildren_object )
          goto LABEL_51;
      }
      if ( ComponentsInChildren_object->max_length )
      {
        IsNullOrEmpty = (GiftDetailMaster_o *)ComponentsInChildren_object->m_Items[0];
        if ( IsNullOrEmpty )
        {
          ItemIconComponent__SetItemImage((ItemIconComponent_o *)IsNullOrEmpty, v13, 0LL);
          goto LABEL_51;
        }
        goto LABEL_52;
      }
    }
    goto LABEL_53;
  }
  if ( ComponentsInChildren_object )
  {
    if ( ComponentsInChildren_object->max_length )
    {
      IsNullOrEmpty = (GiftDetailMaster_o *)ComponentsInChildren_object->m_Items[0];
      if ( IsNullOrEmpty )
      {
        overwriteSpriteName = this->fields.overwriteSpriteName;
        goto LABEL_36;
      }
LABEL_52:
      sub_1C13F80(IsNullOrEmpty, v13);
    }
LABEL_53:
    sub_1C13F88(IsNullOrEmpty, v13, v14, v15);
  }
LABEL_51:
  v26 = QuestPhaseRewardComponent__Play(this, callback, v14);
  UnityEngine_MonoBehaviour__StartCoroutine_70707260((UnityEngine_MonoBehaviour_o *)this, v26, 0LL);
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
  UISprite_o *bgSprite; // x23
  Il2CppObject *v14; // x0
  System_String_o *v15; // x22
  UILabel_o *countLabel; // x22
  System_String_o *v17; // x23
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  Il2CppObject *v21; // x0
  System_String_o *gameObject; // x0
  __int64 v23; // x1
  const MethodInfo *v24; // x2
  System_Collections_IEnumerator_o *v25; // x0
  int32_t v26; // [xsp+8h] [xbp-58h] BYREF
  int32_t v27; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4BAF3A5 & 1) == 0 )
  {
    sub_1C13D24(&AtlasManager_TypeInfo, *(_QWORD *)&itemId);
    sub_1C13D24(&int_TypeInfo, v9);
    sub_1C13D24(&LocalizationManager_TypeInfo, v10);
    sub_1C13D24(&StringLiteral_22997/*"private"*/, v11);
    sub_1C13D24(&StringLiteral_8949/*"MST_MISSION_CHANGE_MSG"*/, v12);
    byte_4BAF3A5 = 1;
  }
  bgSprite = this->fields.bgSprite;
  v27 = itemId;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27, *(_QWORD *)&itemNum, endAction, method);
  v15 = System_String__Format((System_String_o *)StringLiteral_22997/*"private"*/, v14, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventSprite(bgSprite, v15, 0LL);
  countLabel = this->fields.countLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_8949/*"MST_MISSION_CHANGE_MSG"*/, 0LL);
  v26 = itemNum;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26, v18, v19, v20);
  gameObject = System_String__Format(v17, v21, 0LL);
  if ( !countLabel
    || (UILabel__set_text(countLabel, gameObject, 0LL), (gameObject = (System_String_o *)this->fields.countLabel) == 0LL)
    || (gameObject = (System_String_o *)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)gameObject,
                                          0LL)) == 0LL )
  {
    sub_1C13F80(gameObject, v23);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  v25 = QuestPhaseRewardComponent__Play(this, endAction, v24);
  UnityEngine_MonoBehaviour__StartCoroutine_70707260((UnityEngine_MonoBehaviour_o *)this, v25, 0LL);
}


System_Collections_IEnumerator_o *__fastcall QuestPhaseRewardComponent__Play(
        QuestPhaseRewardComponent_o *this,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  __int64 v5; // x21

  if ( (byte_4BAF3A6 & 1) == 0 )
  {
    sub_1C13D24(&QuestPhaseRewardComponent__Play_d__21_TypeInfo, end_act);
    byte_4BAF3A6 = 1;
  }
  v5 = sub_1C13F70(QuestPhaseRewardComponent__Play_d__21_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C13CC8(v5 + 32);
  *(_QWORD *)(v5 + 40) = end_act;
  sub_1C13CC8(v5 + 40);
  return (System_Collections_IEnumerator_o *)v5;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestPhaseRewardComponent__SetState(
        QuestPhaseRewardComponent_o *this,
        int32_t state,
        const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4BAF3A8 & 1) == 0 )
  {
    sub_1C13D24(&Method_CStateManager_QuestPhaseRewardComponent__setState__, *(_QWORD *)&state);
    byte_4BAF3A8 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_1C13F80(0LL, *(_QWORD *)&state);
  CStateManager_object___setState(
    mFSM,
    state,
    (const MethodInfo_31C33B0 *)Method_CStateManager_QuestPhaseRewardComponent__setState__);
}


void __fastcall QuestPhaseRewardComponent__Update(QuestPhaseRewardComponent_o *this, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4BAF3A2 & 1) == 0 )
  {
    sub_1C13D24(&Method_CStateManager_QuestPhaseRewardComponent__update__, method);
    byte_4BAF3A2 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(
      mFSM,
      (const MethodInfo_31C338C *)Method_CStateManager_QuestPhaseRewardComponent__update__);
}


bool __fastcall QuestPhaseRewardComponent___Play_b__21_0(QuestPhaseRewardComponent_o *this, const MethodInfo *method)
{
  System_String_o *DISP_SE; // x19

  if ( (byte_4BAF3AA & 1) == 0 )
  {
    sub_1C13D24(&SeManager_TypeInfo, method);
    byte_4BAF3AA = 1;
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

  if ( (byte_4BAF3AB & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, that);
    this = (QuestPhaseRewardComponent_StatePlay_o *)sub_1C13D24(&SimpleAnimation_State_TypeInfo, v4);
    byte_4BAF3AB = 1;
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
          this = (QuestPhaseRewardComponent_StatePlay_o *)UnityEngine_Animation__Play_70466396(v20, v21, 0LL);
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
    sub_1C13F80(this, that);
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
    this = (QuestPhaseRewardComponent_StatePlay_o *)SimpleAnimation__Play_65106228(v8, v9, 0LL);
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
    v16 = sub_1C65D04(this, SimpleAnimation_State_TypeInfo, 6LL);
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
    v32 = sub_1C65D04(this, SimpleAnimation_State_TypeInfo, 8LL);
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

  if ( (byte_4BAF3AC & 1) == 0 )
  {
    this = (QuestPhaseRewardComponent_StatePlay_o *)sub_1C13D24(&UnityEngine_Object_TypeInfo, that);
    byte_4BAF3AC = 1;
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
    sub_1C13F80(this, that);
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
  const MethodInfo *v2; // x2
  QuestPhaseRewardComponent__Play_d__21_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t _1__state; // w8
  QuestPhaseRewardComponent_o *_4__this; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  System_Func_bool__o *v13; // x21
  UnityEngine_WaitUntil_o *v14; // x20
  Il2CppObject **v15; // x19

  v3 = this;
  if ( (byte_4BAF3AD & 1) == 0 )
  {
    sub_1C13D24(&System_Func_bool__TypeInfo, method);
    sub_1C13D24(&Method_QuestPhaseRewardComponent__Play_b__21_0__, v4);
    sub_1C13D24(&Method_QuestPhaseRewardComponent__Play_d__21_MoveNext__, v5);
    this = (QuestPhaseRewardComponent__Play_d__21_o *)sub_1C13D24(&UnityEngine_WaitUntil_TypeInfo, v6);
    byte_4BAF3AD = 1;
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
LABEL_14:
    sub_1C13F80(this, method);
  }
  if ( _1__state != 1 )
  {
    if ( !_1__state )
    {
      v3->fields.__2__current = 0LL;
      p__2__current = &v3->fields.__2__current;
      *((_DWORD *)p__2__current - 2) = -1;
      sub_1C13CC8(p__2__current);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
    return 0;
  }
  v3->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_14;
  _4__this->fields.mEndAct = v3->fields.end_act;
  sub_1C13CC8(&_4__this->fields.mEndAct);
  v11 = Method_QuestPhaseRewardComponent__Play_d__21_MoveNext__;
  if ( (*((_BYTE *)Method_QuestPhaseRewardComponent__Play_d__21_MoveNext__ + 83) & 2) != 0 )
    v11 = (_QWORD *)sub_1C13D3C();
  v12 = (System_Reflection_MethodBase_o *)sub_1C13D08(v11, v11[4]);
  OverwriteAssetSoundName__PlaySe(v12, _4__this->fields.DISP_SE, 0, 0LL);
  v13 = (System_Func_bool__o *)sub_1C13F70(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(v13, (Il2CppObject *)_4__this, Method_QuestPhaseRewardComponent__Play_b__21_0__, 0LL);
  v14 = (UnityEngine_WaitUntil_o *)sub_1C13F70(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v14, v13, 0LL);
  v3->fields.__2__current = (Il2CppObject *)v14;
  v15 = &v3->fields.__2__current;
  sub_1C13CC8(v15);
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

  v2 = sub_1C13D38(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C13F70(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C13D38(&Method_QuestPhaseRewardComponent__Play_d__21_System_Collections_IEnumerator_Reset__);
  sub_1C13E4C(v3, v4);
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