void __fastcall QuestPhaseRewardComponent___ctor(QuestPhaseRewardComponent_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int64_t v9; // x1

  if ( (byte_4B19D26 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_22917/*"qev79"*/, method, v2);
    byte_4B19D26 = 1;
  }
  v9 = StringLiteral_22917/*"qev79"*/;
  this->fields.DISP_SE = (struct System_String_o *)StringLiteral_22917/*"qev79"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.DISP_SE, v9, v2, v3, v4, v5, v6, v7);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall QuestPhaseRewardComponent__Awake(QuestPhaseRewardComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  CStateManager_T__o *v13; // x21
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  CStateManager_T__o *mFSM; // x21
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  Il2CppObject *v24; // x22
  __int64 v25; // x0
  __int64 v26; // x1
  CStateManager_T__o *v27; // x20
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  Il2CppObject *v31; // x21
  const MethodInfo *v32; // x2

  if ( (byte_4B19D1E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CStateManager_QuestPhaseRewardComponent___ctor__, method, v2);
    sub_1BCA7E0(&Method_CStateManager_QuestPhaseRewardComponent__add__, v5, v6);
    sub_1BCA7E0(&CStateManager_QuestPhaseRewardComponent__TypeInfo, v7, v8);
    sub_1BCA7E0(&QuestPhaseRewardComponent_StateNone_TypeInfo, v9, v10);
    sub_1BCA7E0(&QuestPhaseRewardComponent_StatePlay_TypeInfo, v11, v12);
    byte_4B19D1E = 1;
  }
  if ( !this->fields.mFSM )
  {
    v13 = (CStateManager_T__o *)sub_1BCAA2C(CStateManager_QuestPhaseRewardComponent__TypeInfo, method, v2, v3);
    CStateManager_object____ctor(
      v13,
      (Il2CppObject *)this,
      2,
      (const MethodInfo_313FBC4 *)Method_CStateManager_QuestPhaseRewardComponent___ctor__);
    this->fields.mFSM = (struct CStateManager_QuestPhaseRewardComponent__o *)v13;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mFSM, (int64_t)v13, v14, v15, v16, v17, v18, v19);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v24 = (Il2CppObject *)sub_1BCAA2C(QuestPhaseRewardComponent_StateNone_TypeInfo, v21, v22, v23);
    System_Object___ctor(v24, 0LL);
    if ( !mFSM
      || (CStateManager_object___add(
            mFSM,
            0,
            (IState_T__o *)v24,
            (const MethodInfo_313FC6C *)Method_CStateManager_QuestPhaseRewardComponent__add__),
          v27 = (CStateManager_T__o *)this->fields.mFSM,
          v31 = (Il2CppObject *)sub_1BCAA2C(QuestPhaseRewardComponent_StatePlay_TypeInfo, v28, v29, v30),
          System_Object___ctor(v31, 0LL),
          !v27) )
    {
      sub_1BCAA3C(v25, v26);
    }
    CStateManager_object___add(
      v27,
      1,
      (IState_T__o *)v31,
      (const MethodInfo_313FC6C *)Method_CStateManager_QuestPhaseRewardComponent__add__);
    QuestPhaseRewardComponent__SetState(this, 0, v32);
  }
}


int32_t __fastcall QuestPhaseRewardComponent__GetState(QuestPhaseRewardComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  QuestPhaseRewardComponent_o *v3; // x19
  struct CStateManager_QuestPhaseRewardComponent__o *mFSM; // x8

  v3 = this;
  if ( (byte_4B19D24 & 1) == 0 )
  {
    this = (QuestPhaseRewardComponent_o *)sub_1BCA7E0(
                                            &Method_CStateManager_QuestPhaseRewardComponent__getState__,
                                            method,
                                            v2);
    byte_4B19D24 = 1;
  }
  mFSM = v3->fields.mFSM;
  if ( !mFSM )
    sub_1BCAA3C(this, method);
  return mFSM->fields.m_state;
}


void __fastcall QuestPhaseRewardComponent__Init(QuestPhaseRewardComponent_o *this, const MethodInfo *method)
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
  Il2CppObject *Component_object; // x0
  UnityEngine_Animation_o **p_mAnimation; // x20
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  UnityEngine_Component_o *transform; // x0
  __int64 v27; // x1
  Il2CppObject *ComponentInChildren_object__49322392; // x0
  struct SimpleAnimation_o **p_mSimpleAnimation; // x21
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  __int64 v36; // x1
  UnityEngine_Object_o *mSimpleAnimation; // x22
  SimpleAnimation_o *v38; // x20
  System_String_o *name; // x0
  UnityEngine_Component_c *klass; // x8
  UnityEngine_Component_o *v41; // x20
  __int64 v42; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v44; // x0
  UnityEngine_Animation_o *v45; // x21
  UnityEngine_Animation_o *v46; // x21
  System_String_o *v47; // x0
  UnityEngine_Animation_o *v48; // x20
  System_String_o *v49; // x0
  SimpleAnimation_o *v50; // x20
  System_String_o *v51; // x0
  UnityEngine_Component_c *v52; // x8
  UnityEngine_Component_o *v53; // x20
  __int64 v54; // x9
  SimpleAnimation_State_c **v55; // x10
  __int64 v56; // x0
  struct System_String_o *Value; // x0
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7

  if ( (byte_4B19D20 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_Animation___, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ConstantStrMaster___, v6, v7);
    sub_1BCA7E0(&DataManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v10, v11);
    sub_1BCA7E0(&SimpleAnimation_State_TypeInfo, v12, v13);
    sub_1BCA7E0(&StringLiteral_22865/*"progress_reward_board"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_11037/*"QUEST_PHASE_REWARD_OVERWRITE_SPRITE"*/, v16, v17);
    byte_4B19D20 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Animation___);
  this->fields.mAnimation = (struct UnityEngine_Animation_o *)Component_object;
  p_mAnimation = &this->fields.mAnimation;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.mAnimation,
    (int64_t)Component_object,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_44;
  ComponentInChildren_object__49322392 = UnityEngine_Component__GetComponentInChildren_object__49322392(
                                           transform,
                                           (const MethodInfo_2F09998 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  this->fields.mSimpleAnimation = (struct SimpleAnimation_o *)ComponentInChildren_object__49322392;
  p_mSimpleAnimation = &this->fields.mSimpleAnimation;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.mSimpleAnimation,
    (int64_t)ComponentInChildren_object__49322392,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  mSimpleAnimation = (UnityEngine_Object_o *)this->fields.mSimpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v36);
  transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(mSimpleAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    v38 = *p_mSimpleAnimation;
    if ( *p_mSimpleAnimation )
    {
      transform = (UnityEngine_Component_o *)v38[1].monitor;
      if ( transform )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0LL);
        transform = (UnityEngine_Component_o *)SimpleAnimation__get_Item(v38, name, 0LL);
        if ( transform )
        {
          klass = transform->klass;
          v41 = transform;
          v42 = *(unsigned __int16 *)(&transform->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&transform->klass->_2.bitflags2 + 3) )
          {
            p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
            while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
            {
              --v42;
              p_offset += 2;
              if ( !v42 )
                goto LABEL_14;
            }
            v44 = (__int64)(&klass[1]._1.castClass + 2 * *(_DWORD *)p_offset);
          }
          else
          {
LABEL_14:
            v44 = sub_1C1C7C0(transform, SimpleAnimation_State_TypeInfo, 8LL);
          }
          transform = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(UnityEngine_Component_o *, _QWORD, float))v44)(
                                                   v41,
                                                   *(_QWORD *)(v44 + 8),
                                                   0.0);
          v50 = *p_mSimpleAnimation;
          if ( *p_mSimpleAnimation )
          {
            transform = (UnityEngine_Component_o *)v50[1].monitor;
            if ( transform )
            {
              v51 = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0LL);
              transform = (UnityEngine_Component_o *)SimpleAnimation__get_Item(v50, v51, 0LL);
              if ( transform )
              {
                v52 = transform->klass;
                v53 = transform;
                v54 = *(unsigned __int16 *)(&transform->klass->_2.bitflags2 + 3);
                if ( *(_WORD *)(&transform->klass->_2.bitflags2 + 3) )
                {
                  v55 = (SimpleAnimation_State_c **)&v52->_1.interfaceOffsets->offset;
                  while ( *(v55 - 1) != SimpleAnimation_State_TypeInfo )
                  {
                    --v54;
                    v55 += 2;
                    if ( !v54 )
                      goto LABEL_33;
                  }
                  v56 = (__int64)(&v52[1]._1.byval_arg.bits + 4 * *(_DWORD *)v55);
                }
                else
                {
LABEL_33:
                  v56 = sub_1C1C7C0(transform, SimpleAnimation_State_TypeInfo, 6LL);
                }
                (*(void (__fastcall **)(UnityEngine_Component_o *, _QWORD, float))v56)(v53, *(_QWORD *)(v56 + 8), 0.0);
                goto LABEL_36;
              }
            }
          }
        }
      }
    }
LABEL_44:
    sub_1BCAA3C(transform, v27);
  }
  v45 = *p_mAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27);
  transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v45, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    v46 = *p_mAnimation;
    if ( !*p_mAnimation )
      goto LABEL_44;
    transform = (UnityEngine_Component_o *)UnityEngine_Animation__get_clip(*p_mAnimation, 0LL);
    if ( !transform )
      goto LABEL_44;
    v47 = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0LL);
    transform = (UnityEngine_Component_o *)UnityEngine_Animation__get_Item(v46, v47, 0LL);
    if ( !transform )
      goto LABEL_44;
    UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)transform, 0.0, 0LL);
    v48 = *p_mAnimation;
    if ( !v48 )
      goto LABEL_44;
    transform = (UnityEngine_Component_o *)UnityEngine_Animation__get_clip(v48, 0LL);
    if ( !transform )
      goto LABEL_44;
    v49 = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0LL);
    transform = (UnityEngine_Component_o *)UnityEngine_Animation__get_Item(v48, v49, 0LL);
    if ( !transform )
      goto LABEL_44;
    UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)transform, 0.0, 0LL);
  }
LABEL_36:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v27);
  transform = (UnityEngine_Component_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ConstantStrMaster___);
  if ( !transform )
    goto LABEL_44;
  Value = ConstantStrMaster__GetValue((ConstantStrMaster_o *)transform, (System_String_o *)StringLiteral_11037/*"QUEST_PHASE_REWARD_OVERWRITE_SPRITE"*/, 0LL);
  this->fields.overwriteSpriteName = Value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.overwriteSpriteName,
    (int64_t)Value,
    v58,
    v59,
    v60,
    v61,
    v62,
    v63);
  transform = (UnityEngine_Component_o *)this->fields.bgSprite;
  if ( !transform )
    goto LABEL_44;
  UISprite__set_atlas((UISprite_o *)transform, this->fields.systemUIAtlas, 0LL);
  transform = (UnityEngine_Component_o *)this->fields.bgSprite;
  if ( !transform )
    goto LABEL_44;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)transform, (System_String_o *)StringLiteral_22865/*"progress_reward_board"*/, 0LL);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  TerminalPramsManager_c *v15; // x0
  System_Object_array *ComponentsInChildren_object; // x21
  GiftDetailMaster_o *IsNullOrEmpty; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x2
  TerminalPramsManager_c *v20; // x0
  int32_t PhaseCnt_k__BackingField; // w25
  __int64 v22; // x2
  Il2CppObject *Master_object; // x22
  int32_t giftId; // w22
  System_String_o *OverwriteImageIdByQuestPhaseReward; // x22
  System_String_o *overwriteSpriteName; // x1
  System_Collections_Generic_Dictionary_string__DataEntityBase__c *klass; // x8
  int namespaze; // w9
  int i; // w10
  __int64 v30; // x11
  System_Collections_IEnumerator_o *v31; // x0
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B19D21 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentsInChildren_ItemIconComponent___, callback, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_GiftDetailMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMaster_QuestPhaseMaster___, v7, v8);
    sub_1BCA7E0(&DataManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v13, v14);
    byte_4B19D21 = 1;
  }
  v15 = TerminalPramsManager_TypeInfo;
  entity = 0LL;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, callback);
    v15 = TerminalPramsManager_TypeInfo;
  }
  if ( !v15->static_fields->mQuestPhaseRewardInfos )
  {
    ActionExtensions__Call(callback, 0LL);
    return;
  }
  ComponentsInChildren_object = UnityEngine_Component__GetComponentsInChildren_object_(
                                  (UnityEngine_Component_o *)this,
                                  1,
                                  (const MethodInfo_2F0A220 *)Method_UnityEngine_Component_GetComponentsInChildren_ItemIconComponent___);
  IsNullOrEmpty = (GiftDetailMaster_o *)System_String__IsNullOrEmpty(this->fields.overwriteSpriteName, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v18);
    if ( !byte_4B12DCE )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v18, v19);
      byte_4B12DCE = 1;
    }
    v20 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v18);
      v20 = TerminalPramsManager_TypeInfo;
    }
    PhaseCnt_k__BackingField = v20->static_fields->_PhaseCnt_k__BackingField;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v18);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !byte_4B12DC3 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v18, v22);
      byte_4B12DC3 = 1;
    }
    IsNullOrEmpty = (GiftDetailMaster_o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v18);
      IsNullOrEmpty = (GiftDetailMaster_o *)TerminalPramsManager_TypeInfo;
    }
    if ( !Master_object )
      goto LABEL_52;
    IsNullOrEmpty = (GiftDetailMaster_o *)QuestPhaseMaster__TryGetEntity(
                                            (QuestPhaseMaster_o *)Master_object,
                                            &entity,
                                            HIDWORD(IsNullOrEmpty[2].fields._lookup->fields._buckets),
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
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v18);
    IsNullOrEmpty = (GiftDetailMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_GiftDetailMaster___);
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
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v18);
        IsNullOrEmpty = (GiftDetailMaster_o *)TerminalPramsManager_TypeInfo;
      }
      klass = IsNullOrEmpty[2].fields._lookup[8].klass;
      if ( !klass )
        goto LABEL_52;
      namespaze = (int)klass->_1.namespaze;
      if ( namespaze < 1 )
      {
        v18 = 0LL;
        if ( !ComponentsInChildren_object )
          goto LABEL_51;
      }
      else
      {
        for ( i = 0; i != namespaze; ++i )
        {
          if ( namespaze == i )
            goto LABEL_53;
          v30 = *((_QWORD *)&klass->_1.byval_arg.data + i);
          if ( !v30 )
            goto LABEL_52;
        }
        v18 = *(unsigned int *)(v30 + 20);
        if ( !ComponentsInChildren_object )
          goto LABEL_51;
      }
      if ( ComponentsInChildren_object->max_length )
      {
        IsNullOrEmpty = (GiftDetailMaster_o *)ComponentsInChildren_object->m_Items[0];
        if ( IsNullOrEmpty )
        {
          ItemIconComponent__SetItemImage((ItemIconComponent_o *)IsNullOrEmpty, v18, 0LL);
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
      sub_1BCAA3C(IsNullOrEmpty, v18);
    }
LABEL_53:
    sub_1BCAA44(IsNullOrEmpty, v18);
  }
LABEL_51:
  v31 = QuestPhaseRewardComponent__Play(this, callback, v19);
  UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v31, 0LL);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  UISprite_o *bgSprite; // x23
  Il2CppObject *v18; // x0
  __int64 v19; // x1
  System_String_o *v20; // x22
  __int64 v21; // x1
  UILabel_o *countLabel; // x22
  System_String_o *v23; // x23
  Il2CppObject *v24; // x0
  System_String_o *gameObject; // x0
  __int64 v26; // x1
  const MethodInfo *v27; // x2
  System_Collections_IEnumerator_o *v28; // x0
  int32_t v29; // [xsp+8h] [xbp-58h] BYREF
  int32_t v30; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4B19D22 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, *(_QWORD *)&itemId, *(_QWORD *)&itemNum);
    sub_1BCA7E0(&int_TypeInfo, v9, v10);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&StringLiteral_22866/*"progress_reward_board_{0}"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_8905/*"MULTIPLE_INFO"*/, v15, v16);
    byte_4B19D22 = 1;
  }
  bgSprite = this->fields.bgSprite;
  v30 = itemId;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30);
  v20 = System_String__Format((System_String_o *)StringLiteral_22866/*"progress_reward_board_{0}"*/, v18, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v19);
  AtlasManager__SetEventSprite(bgSprite, v20, 0LL);
  countLabel = this->fields.countLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v21);
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_8905/*"MULTIPLE_INFO"*/, 0LL);
  v29 = itemNum;
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29);
  gameObject = System_String__Format(v23, v24, 0LL);
  if ( !countLabel
    || (UILabel__set_text(countLabel, gameObject, 0LL), (gameObject = (System_String_o *)this->fields.countLabel) == 0LL)
    || (gameObject = (System_String_o *)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)gameObject,
                                          0LL)) == 0LL )
  {
    sub_1BCAA3C(gameObject, v26);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  v28 = QuestPhaseRewardComponent__Play(this, endAction, v27);
  UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v28, 0LL);
}


System_Collections_IEnumerator_o *__fastcall QuestPhaseRewardComponent__Play(
        QuestPhaseRewardComponent_o *this,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x21
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4B19D23 & 1) == 0 )
  {
    sub_1BCA7E0(&QuestPhaseRewardComponent__Play_d__21_TypeInfo, end_act, method);
    byte_4B19D23 = 1;
  }
  v6 = sub_1BCAA2C(QuestPhaseRewardComponent__Play_d__21_TypeInfo, end_act, method, v3);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  *(_DWORD *)(v6 + 16) = 0;
  *(_QWORD *)(v6 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 32), (int64_t)this, v7, v8, v9, v10, v11, v12);
  *(_QWORD *)(v6 + 40) = end_act;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 40), (int64_t)end_act, v13, v14, v15, v16, v17, v18);
  return (System_Collections_IEnumerator_o *)v6;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestPhaseRewardComponent__SetState(
        QuestPhaseRewardComponent_o *this,
        int32_t state,
        const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4B19D25 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CStateManager_QuestPhaseRewardComponent__setState__, *(_QWORD *)&state, method);
    byte_4B19D25 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_1BCAA3C(0LL, *(_QWORD *)&state);
  CStateManager_object___setState(
    mFSM,
    state,
    (const MethodInfo_313FCF8 *)Method_CStateManager_QuestPhaseRewardComponent__setState__);
}


void __fastcall QuestPhaseRewardComponent__Update(QuestPhaseRewardComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4B19D1F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CStateManager_QuestPhaseRewardComponent__update__, method, v2);
    byte_4B19D1F = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(
      mFSM,
      (const MethodInfo_313FCD4 *)Method_CStateManager_QuestPhaseRewardComponent__update__);
}


bool __fastcall QuestPhaseRewardComponent___Play_b__21_0(QuestPhaseRewardComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  System_String_o *DISP_SE; // x19

  if ( (byte_4B19D27 & 1) == 0 )
  {
    sub_1BCA7E0(&SeManager_TypeInfo, method, v2);
    byte_4B19D27 = 1;
  }
  DISP_SE = this->fields.DISP_SE;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, method);
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
  __int64 v5; // x2
  UnityEngine_Object_o *mSimpleAnimation; // x20
  struct SimpleAnimation_o *v7; // x20
  System_String_o *v8; // x0
  struct SimpleAnimation_o *v9; // x20
  System_String_o *v10; // x0
  struct SimpleAnimation_o *v11; // x20
  System_String_o *v12; // x0
  QuestPhaseRewardComponent_StatePlay_c *klass; // x8
  QuestPhaseRewardComponent_StatePlay_o *v14; // x20
  __int64 v15; // x9
  int32_t *p_offset; // x10
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
  QuestPhaseRewardComponent_StatePlay_c *v29; // x8
  QuestPhaseRewardComponent_StatePlay_o *v30; // x19
  __int64 v31; // x9
  int32_t *v32; // x10
  __int64 v33; // x0

  if ( (byte_4B19D28 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, that, method);
    this = (QuestPhaseRewardComponent_StatePlay_o *)sub_1BCA7E0(&SimpleAnimation_State_TypeInfo, v4, v5);
    byte_4B19D28 = 1;
  }
  if ( !that )
    goto LABEL_49;
  mSimpleAnimation = (UnityEngine_Object_o *)that->fields.mSimpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, that);
  this = (QuestPhaseRewardComponent_StatePlay_o *)UnityEngine_Object__op_Inequality(mSimpleAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    mAnimation = (UnityEngine_Object_o *)that->fields.mAnimation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, that);
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
            goto LABEL_49;
          this = (QuestPhaseRewardComponent_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0LL);
          if ( !this )
            goto LABEL_49;
          v22 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
          this = (QuestPhaseRewardComponent_StatePlay_o *)UnityEngine_Animation__Play_69899248(v21, v22, 0LL);
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
LABEL_49:
    sub_1BCAA3C(this, that);
  }
  v7 = that->fields.mSimpleAnimation;
  if ( !v7 )
    goto LABEL_49;
  this = (QuestPhaseRewardComponent_StatePlay_o *)v7[1].monitor;
  if ( !this )
    goto LABEL_49;
  v8 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestPhaseRewardComponent_StatePlay_o *)SimpleAnimation__IsPlaying(v7, v8, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v9 = that->fields.mSimpleAnimation;
    if ( !v9 )
      goto LABEL_49;
    this = (QuestPhaseRewardComponent_StatePlay_o *)v9[1].monitor;
    if ( !this )
      goto LABEL_49;
    v10 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
    this = (QuestPhaseRewardComponent_StatePlay_o *)SimpleAnimation__Play_64539336(v9, v10, 0LL);
  }
  v11 = that->fields.mSimpleAnimation;
  if ( !v11 )
    goto LABEL_49;
  this = (QuestPhaseRewardComponent_StatePlay_o *)v11[1].monitor;
  if ( !this )
    goto LABEL_49;
  v12 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestPhaseRewardComponent_StatePlay_o *)SimpleAnimation__get_Item(v11, v12, 0LL);
  if ( !this )
    goto LABEL_49;
  klass = this->klass;
  v14 = this;
  v15 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((SimpleAnimation_State_c **)p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v15;
      p_offset += 4;
      if ( !v15 )
        goto LABEL_20;
    }
    v17 = (__int64)(&klass->vtable._6_end.method + 2 * *p_offset);
  }
  else
  {
LABEL_20:
    v17 = sub_1C1C7C0(this, SimpleAnimation_State_TypeInfo, 6LL);
  }
  this = (QuestPhaseRewardComponent_StatePlay_o *)(*(__int64 (__fastcall **)(QuestPhaseRewardComponent_StatePlay_o *, _QWORD, float))v17)(
                                                    v14,
                                                    *(_QWORD *)(v17 + 8),
                                                    0.0);
  v27 = that->fields.mSimpleAnimation;
  if ( !v27 )
    goto LABEL_49;
  this = (QuestPhaseRewardComponent_StatePlay_o *)v27[1].monitor;
  if ( !this )
    goto LABEL_49;
  v28 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestPhaseRewardComponent_StatePlay_o *)SimpleAnimation__get_Item(v27, v28, 0LL);
  if ( !this )
    goto LABEL_49;
  v29 = this->klass;
  v30 = this;
  v31 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
  {
    v32 = &v29->_1.interfaceOffsets->offset;
    while ( *((SimpleAnimation_State_c **)v32 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v31;
      v32 += 4;
      if ( !v31 )
        goto LABEL_46;
    }
    v33 = (__int64)(&v29[1]._1.namespaze + 2 * *v32);
  }
  else
  {
LABEL_46:
    v33 = sub_1C1C7C0(this, SimpleAnimation_State_TypeInfo, 8LL);
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
  const MethodInfo *v10; // x2

  if ( (byte_4B19D29 & 1) == 0 )
  {
    this = (QuestPhaseRewardComponent_StatePlay_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, that, method);
    byte_4B19D29 = 1;
  }
  if ( !that )
    goto LABEL_19;
  mSimpleAnimation = (UnityEngine_Object_o *)that->fields.mSimpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, that);
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
    sub_1BCAA3C(this, that);
  }
  mAnimation = (UnityEngine_Object_o *)that->fields.mAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, that);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  QuestPhaseRewardComponent__Play_d__21_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  int32_t _1__state; // w8
  struct QuestPhaseRewardComponent_o *_4__this; // x20
  PartyOrganizationUtility_o *p__2__current; // x19
  bool result; // w0
  int64_t end_act; // x1
  _QWORD *v20; // x0
  System_Reflection_MethodBase_o *v21; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  System_Func_bool__o *v25; // x21
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  UnityEngine_WaitUntil_o *v29; // x20
  PartyOrganizationUtility_o *v30; // x19
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7

  v8 = this;
  if ( (byte_4B19D2A & 1) == 0 )
  {
    sub_1BCA7E0(&System_Func_bool__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_QuestPhaseRewardComponent__Play_b__21_0__, v9, v10);
    sub_1BCA7E0(&Method_QuestPhaseRewardComponent__Play_d__21_MoveNext__, v11, v12);
    this = (QuestPhaseRewardComponent__Play_d__21_o *)sub_1BCA7E0(&UnityEngine_WaitUntil_TypeInfo, v13, v14);
    byte_4B19D2A = 1;
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
LABEL_14:
    sub_1BCAA3C(this, method);
  }
  if ( _1__state != 1 )
  {
    if ( !_1__state )
    {
      v8->fields.__2__current = 0LL;
      p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = -1;
      sub_1BCA784(p__2__current, 0LL, (int64_t)v2, v3, v4, v5, v6, v7);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
      return result;
    }
    return 0;
  }
  v8->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_14;
  end_act = (int64_t)v8->fields.end_act;
  _4__this->fields.mEndAct = (struct System_Action_o *)end_act;
  sub_1BCA784((PartyOrganizationUtility_o *)&_4__this->fields.mEndAct, end_act, (int64_t)v2, v3, v4, v5, v6, v7);
  v20 = Method_QuestPhaseRewardComponent__Play_d__21_MoveNext__;
  if ( (*((_BYTE *)Method_QuestPhaseRewardComponent__Play_d__21_MoveNext__ + 83) & 2) != 0 )
    v20 = (_QWORD *)sub_1BCA7F8(Method_QuestPhaseRewardComponent__Play_d__21_MoveNext__);
  v21 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v20, v20[4]);
  OverwriteAssetSoundName__PlaySe(v21, _4__this->fields.DISP_SE, 0LL);
  v25 = (System_Func_bool__o *)sub_1BCAA2C(System_Func_bool__TypeInfo, v22, v23, v24);
  System_Func_bool____ctor(v25, (Il2CppObject *)_4__this, Method_QuestPhaseRewardComponent__Play_b__21_0__, 0LL);
  v29 = (UnityEngine_WaitUntil_o *)sub_1BCAA2C(UnityEngine_WaitUntil_TypeInfo, v26, v27, v28);
  UnityEngine_WaitUntil___ctor(v29, v25, 0LL);
  v8->fields.__2__current = (Il2CppObject *)v29;
  v30 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
  sub_1BCA784(v30, (int64_t)v29, v31, v32, v33, v34, v35, v36);
  *(_DWORD *)&v30[-1].fields._IsQuestStartMenuMode_k__BackingField = 2;
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
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_QuestPhaseRewardComponent__Play_d__21_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
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