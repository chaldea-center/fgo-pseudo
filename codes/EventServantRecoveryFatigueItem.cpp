void __fastcall EventServantRecoveryFatigueItem___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v15; // x1
  struct EventServantRecoveryFatigueItem_StaticFields *v16; // x0
  System_Int32_array **v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_42EC0A1 & 1) == 0 )
  {
    sub_B5D5C4(&EventServantRecoveryFatigueItem_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_16739/*"available_0"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_18802/*"event_recvoer_servant_bg02"*/, v11, v12, v13);
    byte_42EC0A1 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventServantRecoveryFatigueItem_TypeInfo->static_fields;
  v15 = (System_Int32_array **)StringLiteral_18802/*"event_recvoer_servant_bg02"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_18802/*"event_recvoer_servant_bg02"*/;
  sub_B5D560(static_fields, v15, v2, v3, v4, v5, v6, v7);
  v16 = EventServantRecoveryFatigueItem_TypeInfo->static_fields;
  v17 = (System_Int32_array **)StringLiteral_16739/*"available_0"*/;
  v16->OPEN_CLIP_NAME = (struct System_String_o *)StringLiteral_16739/*"available_0"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v16->OPEN_CLIP_NAME, v17, v18, v19, v20, v21, v22, v23);
}


void __fastcall EventServantRecoveryFatigueItem___ctor(
        EventServantRecoveryFatigueItem_o *this,
        const MethodInfo *method)
{
  this->fields.updateTime = -1LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventServantRecoveryFatigueItem__Init(
        EventServantRecoveryFatigueItem_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Component_o *servantFaceIcon; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  UnityEngine_Object_o *nameSprite; // x20
  UnityEngine_Object_o *frameSprite; // x20
  UnityEngine_Object_o *simpleAnimation; // x20
  UnityEngine_Object_o *animation; // x20

  if ( (byte_42EC09B & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC09B = 1;
  }
  servantFaceIcon = (UnityEngine_Component_o *)this->fields.servantFaceIcon;
  if ( !servantFaceIcon )
    goto LABEL_32;
  servantFaceIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(servantFaceIcon, 0LL);
  if ( !servantFaceIcon )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 0, 0LL);
  servantFaceIcon = (UnityEngine_Component_o *)this->fields.emptySprite;
  if ( !servantFaceIcon )
    goto LABEL_32;
  servantFaceIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(servantFaceIcon, 0LL);
  if ( !servantFaceIcon )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 0, 0LL);
  servantFaceIcon = (UnityEngine_Component_o *)this->fields.fatigueRecoveryTimeLabel;
  if ( !servantFaceIcon )
    goto LABEL_32;
  servantFaceIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(servantFaceIcon, 0LL);
  if ( !servantFaceIcon )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 0, 0LL);
  this->fields.userServantEntity = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.userServantEntity, 0LL, v6, v7, v8, v9, v10, v11);
  this->fields.isFatigueRecover = 0;
  this->fields.index = -1;
  this->fields.fatigueTime = -1LL;
  this->fields.updateTime = -1LL;
  this->fields.clickCallback = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.clickCallback, 0LL, v12, v13, v14, v15, v16, v17);
  this->fields.eventFatigueRecoveryEnt = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.eventFatigueRecoveryEnt, 0LL, v18, v19, v20, v21, v22, v23);
  nameSprite = (UnityEngine_Object_o *)this->fields.nameSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(nameSprite, 0LL, 0LL) )
  {
    servantFaceIcon = (UnityEngine_Component_o *)this->fields.nameSprite;
    if ( !servantFaceIcon )
      goto LABEL_32;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 0, 0LL);
  }
  frameSprite = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(frameSprite, 0LL, 0LL) )
  {
    servantFaceIcon = (UnityEngine_Component_o *)this->fields.frameSprite;
    if ( !servantFaceIcon )
      goto LABEL_32;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 0, 0LL);
  }
  simpleAnimation = (UnityEngine_Object_o *)this->fields.simpleAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(simpleAnimation, 0LL, 0LL) )
  {
    servantFaceIcon = (UnityEngine_Component_o *)this->fields.simpleAnimation;
    if ( servantFaceIcon )
    {
LABEL_26:
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)servantFaceIcon, 0, 0LL);
      return;
    }
LABEL_32:
    sub_B5D69C(servantFaceIcon, method);
  }
  animation = (UnityEngine_Object_o *)this->fields.animation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(animation, 0LL, 0LL) )
  {
    servantFaceIcon = (UnityEngine_Component_o *)this->fields.animation;
    if ( servantFaceIcon )
      goto LABEL_26;
    goto LABEL_32;
  }
}


bool __fastcall EventServantRecoveryFatigueItem__IsAnimation(
        EventServantRecoveryFatigueItem_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *simpleAnimation; // x20
  UnityEngine_Object_o *animation; // x19

  if ( (byte_42EC09F & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC09F = 1;
  }
  simpleAnimation = (UnityEngine_Object_o *)this->fields.simpleAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(simpleAnimation, 0LL, 0LL) )
    return 1;
  animation = (UnityEngine_Object_o *)this->fields.animation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  return UnityEngine_Object__op_Inequality(animation, 0LL, 0LL);
}


void __fastcall EventServantRecoveryFatigueItem__OnClickItem(
        EventServantRecoveryFatigueItem_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  __int64 v8; // x1
  System_Action_int__o *clickCallback; // x0

  if ( (byte_42EC09E & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_int__Invoke__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    byte_42EC09E = 1;
  }
  if ( this->fields.clickCallback )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    clickCallback = this->fields.clickCallback;
    if ( !clickCallback )
      sub_B5D69C(0LL, v8);
    System_Action_int___Invoke(
      clickCallback,
      this->fields.index,
      (const MethodInfo_2589DA4 *)Method_System_Action_int__Invoke__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventServantRecoveryFatigueItem__SetAnimationPlay(
        EventServantRecoveryFatigueItem_o *this,
        int32_t no,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  EventServantRecoveryFatigueItem_c *v11; // x0
  System_String_o *OPEN_CLIP_NAME; // x20
  System_String_o *v13; // x0
  System_String_o *v14; // x0
  UnityEngine_Object_o *simpleAnimation; // x21
  System_String_o *v16; // x20
  __int64 v17; // x1
  SimpleAnimation_o *Item; // x0
  __int64 v19; // x3
  SimpleAnimation_c *klass; // x8
  SimpleAnimation_o *v21; // x20
  unsigned __int64 v22; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v24; // x0
  UnityEngine_Object_o *animation; // x21
  UnityEngine_AnimationClip_o *Clip; // x20
  UnityEngine_Animation_o *v27; // x19
  System_String_o *v28; // x0
  UnityEngine_AnimationClip_o *v29; // x20
  struct SimpleAnimation_o *v30; // x19
  System_String_o *name; // x0
  int32_t v32; // [xsp+Ch] [xbp-24h] BYREF

  v32 = no;
  if ( (byte_42EC0A0 & 1) == 0 )
  {
    sub_B5D5C4(&EventServantRecoveryFatigueItem_TypeInfo, no, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&SimpleAnimation_State_TypeInfo, v8, v9, v10);
    byte_42EC0A0 = 1;
  }
  if ( EventServantRecoveryFatigueItem__IsAnimation(this, *(const MethodInfo **)&no) )
  {
    v11 = EventServantRecoveryFatigueItem_TypeInfo;
    if ( (BYTE3(EventServantRecoveryFatigueItem_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventServantRecoveryFatigueItem_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventServantRecoveryFatigueItem_TypeInfo);
      v11 = EventServantRecoveryFatigueItem_TypeInfo;
    }
    OPEN_CLIP_NAME = v11->static_fields->OPEN_CLIP_NAME;
    v13 = System_Int32__ToString((int32_t)&v32, 0LL);
    v14 = System_String__Concat_44577788(OPEN_CLIP_NAME, v13, 0LL);
    simpleAnimation = (UnityEngine_Object_o *)this->fields.simpleAnimation;
    v16 = v14;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(simpleAnimation, 0LL, 0LL) )
    {
      Item = this->fields.simpleAnimation;
      if ( !Item )
        goto LABEL_43;
      Item = (SimpleAnimation_o *)SimpleAnimation__get_Item(Item, v16, 0LL);
      if ( !Item )
        goto LABEL_43;
      klass = Item->klass;
      v21 = Item;
      if ( *(_WORD *)&Item->klass->_2.bitflags1 )
      {
        v22 = 0LL;
        p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
        {
          ++v22;
          p_offset += 2;
          if ( v22 >= *(unsigned __int16 *)&Item->klass->_2.bitflags1 )
            goto LABEL_17;
        }
        v24 = (__int64)(&klass[1]._1.typeMetadataHandle + 2 * *(_DWORD *)p_offset);
      }
      else
      {
LABEL_17:
        v24 = sub_AF54C0(Item, SimpleAnimation_State_TypeInfo, 14LL, v19);
      }
      v29 = (UnityEngine_AnimationClip_o *)(*(__int64 (__fastcall **)(SimpleAnimation_o *, _QWORD))v24)(
                                             v21,
                                             *(_QWORD *)(v24 + 8));
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v29, 0LL, 0LL) )
      {
        Item = this->fields.simpleAnimation;
        if ( Item )
        {
          SimpleAnimation__set_clip(Item, v29, 0LL);
          Item = this->fields.simpleAnimation;
          if ( Item )
          {
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Item, 1, 0LL);
            v30 = this->fields.simpleAnimation;
            if ( v30 )
            {
              Item = (SimpleAnimation_o *)v30[1].monitor;
              if ( Item )
              {
                name = UnityEngine_Object__get_name((UnityEngine_Object_o *)Item, 0LL);
                SimpleAnimation__Play_16676044(v30, name, 0LL);
                return;
              }
            }
          }
        }
LABEL_43:
        sub_B5D69C(Item, v17);
      }
    }
    else
    {
      animation = (UnityEngine_Object_o *)this->fields.animation;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(animation, 0LL, 0LL) )
      {
        Item = (SimpleAnimation_o *)this->fields.animation;
        if ( !Item )
          goto LABEL_43;
        Clip = UnityEngine_Animation__GetClip((UnityEngine_Animation_o *)Item, v16, 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Clip, 0LL, 0LL) )
        {
          Item = (SimpleAnimation_o *)this->fields.animation;
          if ( Item )
          {
            UnityEngine_Animation__set_clip((UnityEngine_Animation_o *)Item, Clip, 0LL);
            Item = (SimpleAnimation_o *)this->fields.animation;
            if ( Item )
            {
              UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Item, 1, 0LL);
              v27 = this->fields.animation;
              if ( v27 )
              {
                Item = (SimpleAnimation_o *)UnityEngine_Animation__get_clip(v27, 0LL);
                if ( Item )
                {
                  v28 = UnityEngine_Object__get_name((UnityEngine_Object_o *)Item, 0LL);
                  UnityEngine_Animation__Play_51249124(v27, v28, 0LL);
                  return;
                }
              }
            }
          }
          goto LABEL_43;
        }
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventServantRecoveryFatigueItem__SetServantInfo(
        EventServantRecoveryFatigueItem_o *this,
        UserServantEntity_o *userServantEntity,
        int32_t eventId,
        int32_t index,
        System_Action_int__o *callback,
        const MethodInfo *method)
{
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  struct UserServantEntity_o **p_userServantEntity; // x24
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  DataManager_o *Instance; // x0
  __int64 v51; // x1
  struct EventFatigueRecoveryEntity_o *EntityDefinitely; // x0
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  IconLabelInfo_o *v59; // x21
  int32_t lv; // w25
  struct UserServantEntity_o *v61; // x8
  UserEventServantFatigueMaster_o *v62; // x24
  __int64 v63; // x25
  __int64 v64; // x26
  int64_t v65; // x22
  System_String_o *RestTime4; // x23
  UILabel_o *fatigueRecoveryTimeLabel; // x22
  UnityEngine_Object_o *v68; // x20
  bool v69; // w1
  UISprite_o *emptySprite; // x20
  EventServantRecoveryFatigueItem_c *v71; // x0
  System_String_o *EMPTY_BG_NAME; // x21
  UnityEngine_Object_o *v73; // x20
  System_String_o *v74; // x0
  UnityEngine_Object_o *frameSprite; // x20
  UnityEngine_Object_o *nameSprite; // x20
  int64_t recoverAt; // [xsp+8h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v78; // 0:x0.16

  if ( (byte_42EC09C & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMasterData_EventFatigueRecoveryMaster___,
      (_DWORD)userServantEntity,
      eventId,
      *(_QWORD *)&index);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___, v13, v14, v15);
    sub_B5D5C4(&EventRewardRootComponent_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&EventServantRecoveryFatigueItem_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&IconLabelInfo_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&NetworkManager_TypeInfo, v28, v29, v30);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v31, v32, v33);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v34, v35, v36);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v37, v38, v39);
    sub_B5D5C4(&StringLiteral_11892/*"SERVANT_RECOVERY_FATIGUE_REST_TIME"*/, v40, v41, v42);
    byte_42EC09C = 1;
  }
  recoverAt = 0LL;
  this->fields.isFatigueRecover = 0;
  this->fields.fatigueTime = -1LL;
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.userServantEntity,
    (System_Int32_array **)userServantEntity,
    *(System_String_array ***)&eventId,
    *(System_String_array ***)&index,
    (System_Boolean_array **)callback,
    (System_Int32_array **)method,
    v6,
    v7);
  this->fields.index = index;
  if ( callback )
  {
    this->fields.clickCallback = callback;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.clickCallback,
      (System_Int32_array **)callback,
      v44,
      v45,
      v46,
      v47,
      v48,
      v49);
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_78;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventFatigueRecoveryMaster___);
  if ( !Instance )
    goto LABEL_78;
  EntityDefinitely = EventFatigueRecoveryMaster__GetEntityDefinitely(
                       (EventFatigueRecoveryMaster_o *)Instance,
                       eventId,
                       this->fields.index,
                       0LL);
  this->fields.eventFatigueRecoveryEnt = EntityDefinitely;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.eventFatigueRecoveryEnt,
    (System_Int32_array **)EntityDefinitely,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  if ( userServantEntity )
  {
    v59 = (IconLabelInfo_o *)sub_B5D694(IconLabelInfo_TypeInfo);
    IconLabelInfo___ctor(v59, 0LL);
    lv = userServantEntity->fields.lv;
    Instance = (DataManager_o *)UserServantEntity__getLevelMax(userServantEntity, 0LL);
    if ( !v59 )
      goto LABEL_78;
    IconLabelInfo__Set_28463004(v59, 2, lv, (int32_t)Instance, 0, 0, 0, 0, 0LL);
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_78;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
    v61 = *p_userServantEntity;
    if ( !*p_userServantEntity )
      goto LABEL_78;
    v62 = (UserEventServantFatigueMaster_o *)Instance;
    v64 = *(_QWORD *)&v61->fields.svtId.fields.currentCryptoKey;
    v63 = *(_QWORD *)&v61->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v78.fields.currentCryptoKey = v64;
    *(_QWORD *)&v78.fields.fakeValue = v63;
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v78, 0LL);
    if ( !v62 )
      goto LABEL_78;
    if ( UserEventServantFatigueMaster__GetFatigueInfo(
           v62,
           &recoverAt,
           &this->fields.isFatigueRecover,
           eventId,
           (int32_t)Instance,
           0LL) )
    {
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      this->fields.updateTime = NetworkManager__getTime(0LL);
      v65 = recoverAt;
      this->fields.fatigueTime = recoverAt;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      RestTime4 = LocalizationManager__GetRestTime4(v65, -1LL, 0LL);
      Instance = (DataManager_o *)System_String__IsNullOrEmpty(RestTime4, 0LL);
      fatigueRecoveryTimeLabel = this->fields.fatigueRecoveryTimeLabel;
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v74 = LocalizationManager__Get((System_String_o *)StringLiteral_11892/*"SERVANT_RECOVERY_FATIGUE_REST_TIME"*/, 0LL);
        Instance = (DataManager_o *)System_String__Format(v74, (Il2CppObject *)RestTime4, 0LL);
        if ( !fatigueRecoveryTimeLabel )
          goto LABEL_78;
        UILabel__set_text(fatigueRecoveryTimeLabel, (System_String_o *)Instance, 0LL);
        Instance = (DataManager_o *)this->fields.fatigueRecoveryTimeLabel;
        if ( !Instance )
          goto LABEL_78;
        Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_78;
        v69 = 1;
        goto LABEL_59;
      }
      if ( !fatigueRecoveryTimeLabel )
        goto LABEL_78;
      Instance = (DataManager_o *)this->fields.fatigueRecoveryTimeLabel;
    }
    else
    {
      Instance = (DataManager_o *)this->fields.fatigueRecoveryTimeLabel;
      if ( !Instance )
        goto LABEL_78;
    }
    Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_78;
    v69 = 0;
LABEL_59:
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v69, 0LL);
    Instance = (DataManager_o *)this->fields.servantFaceIcon;
    if ( !Instance )
      goto LABEL_78;
    ServantFaceIconComponent__Set_30775392((ServantFaceIconComponent_o *)Instance, userServantEntity, v59, 0LL, 0LL);
    frameSprite = (UnityEngine_Object_o *)this->fields.frameSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(frameSprite, 0LL, 0LL) )
    {
      Instance = (DataManager_o *)this->fields.frameSprite;
      if ( !Instance )
        goto LABEL_78;
    }
    else
    {
      Instance = (DataManager_o *)this->fields.emptySprite;
      if ( !Instance )
        goto LABEL_78;
      Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_78;
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
    nameSprite = (UnityEngine_Object_o *)this->fields.nameSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(nameSprite, 0LL, 0LL) )
    {
      Instance = (DataManager_o *)this->fields.nameSprite;
      if ( !Instance )
        goto LABEL_78;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    }
    Instance = (DataManager_o *)this->fields.servantFaceIcon;
    if ( Instance )
    {
      Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( Instance )
      {
LABEL_76:
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
        return;
      }
    }
LABEL_78:
    sub_B5D69C(Instance, v51);
  }
  Instance = (DataManager_o *)this->fields.servantFaceIcon;
  if ( !Instance )
    goto LABEL_78;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_78;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (DataManager_o *)this->fields.fatigueRecoveryTimeLabel;
  if ( !Instance )
    goto LABEL_78;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_78;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  v68 = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v68, 0LL, 0LL) )
  {
    Instance = (DataManager_o *)this->fields.frameSprite;
    if ( !Instance )
      goto LABEL_78;
  }
  else
  {
    emptySprite = this->fields.emptySprite;
    v71 = EventServantRecoveryFatigueItem_TypeInfo;
    if ( (BYTE3(EventServantRecoveryFatigueItem_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventServantRecoveryFatigueItem_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventServantRecoveryFatigueItem_TypeInfo);
      v71 = EventServantRecoveryFatigueItem_TypeInfo;
    }
    EMPTY_BG_NAME = v71->static_fields->EMPTY_BG_NAME;
    if ( (BYTE3(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
    }
    EventRewardRootComponent__setRewardInfoImg(emptySprite, EMPTY_BG_NAME, 0LL);
    Instance = (DataManager_o *)this->fields.emptySprite;
    if ( !Instance )
      goto LABEL_78;
    Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_78;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  v73 = (UnityEngine_Object_o *)this->fields.nameSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v73, 0LL, 0LL) )
  {
    Instance = (DataManager_o *)this->fields.nameSprite;
    if ( !Instance )
      goto LABEL_78;
    goto LABEL_76;
  }
}


void __fastcall EventServantRecoveryFatigueItem__Update(
        EventServantRecoveryFatigueItem_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int64_t Time; // x0
  const MethodInfo *v6; // x1

  if ( (byte_42EC09A & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC09A = 1;
  }
  if ( (this->fields.updateTime & 0x8000000000000000LL) == 0 && this->fields.userServantEntity )
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Time = NetworkManager__getTime(0LL);
    if ( this->fields.updateTime != Time )
    {
      this->fields.updateTime = Time;
      EventServantRecoveryFatigueItem__UpdateDisp(this, v6);
    }
  }
}


void __fastcall EventServantRecoveryFatigueItem__UpdateDisp(
        EventServantRecoveryFatigueItem_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int64_t fatigueTime; // x20
  System_String_o *RestTime4; // x20
  __int64 v10; // x1
  UnityEngine_Component_o *fatigueRecoveryTimeLabel; // x0
  UILabel_o *v12; // x19
  System_String_o *v13; // x0

  if ( (byte_42EC09D & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_11892/*"SERVANT_RECOVERY_FATIGUE_REST_TIME"*/, v5, v6, v7);
    byte_42EC09D = 1;
  }
  fatigueTime = this->fields.fatigueTime;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  RestTime4 = LocalizationManager__GetRestTime4(fatigueTime, -1LL, 0LL);
  if ( System_String__IsNullOrEmpty(RestTime4, 0LL) )
  {
    fatigueRecoveryTimeLabel = (UnityEngine_Component_o *)this->fields.fatigueRecoveryTimeLabel;
    this->fields.updateTime = -1LL;
    if ( fatigueRecoveryTimeLabel )
    {
      fatigueRecoveryTimeLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                              fatigueRecoveryTimeLabel,
                                                              0LL);
      if ( fatigueRecoveryTimeLabel )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)fatigueRecoveryTimeLabel, 0, 0LL);
        return;
      }
    }
LABEL_15:
    sub_B5D69C(fatigueRecoveryTimeLabel, v10);
  }
  v12 = this->fields.fatigueRecoveryTimeLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_11892/*"SERVANT_RECOVERY_FATIGUE_REST_TIME"*/, 0LL);
  fatigueRecoveryTimeLabel = (UnityEngine_Component_o *)System_String__Format(v13, (Il2CppObject *)RestTime4, 0LL);
  if ( !v12 )
    goto LABEL_15;
  UILabel__set_text(v12, (System_String_o *)fatigueRecoveryTimeLabel, 0LL);
}


int64_t __fastcall EventServantRecoveryFatigueItem__get_FatigueTime(
        EventServantRecoveryFatigueItem_o *this,
        const MethodInfo *method)
{
  return this->fields.fatigueTime;
}


int32_t __fastcall EventServantRecoveryFatigueItem__get_Idx(
        EventServantRecoveryFatigueItem_o *this,
        const MethodInfo *method)
{
  struct EventFatigueRecoveryEntity_o *eventFatigueRecoveryEnt; // x8

  eventFatigueRecoveryEnt = this->fields.eventFatigueRecoveryEnt;
  if ( !eventFatigueRecoveryEnt )
    sub_B5D69C(this, method);
  return eventFatigueRecoveryEnt->fields.idx;
}


int32_t __fastcall EventServantRecoveryFatigueItem__get_Index(
        EventServantRecoveryFatigueItem_o *this,
        const MethodInfo *method)
{
  return this->fields.index;
}


System_Int32_array *__fastcall EventServantRecoveryFatigueItem__get_Individuality(
        EventServantRecoveryFatigueItem_o *this,
        const MethodInfo *method)
{
  struct EventFatigueRecoveryEntity_o *eventFatigueRecoveryEnt; // x8

  eventFatigueRecoveryEnt = this->fields.eventFatigueRecoveryEnt;
  if ( !eventFatigueRecoveryEnt )
    sub_B5D69C(this, method);
  return eventFatigueRecoveryEnt->fields.targetIndividuality;
}


System_String_array *__fastcall EventServantRecoveryFatigueItem__get_IndividualityName(
        EventServantRecoveryFatigueItem_o *this,
        const MethodInfo *method)
{
  struct EventFatigueRecoveryEntity_o *eventFatigueRecoveryEnt; // x8

  eventFatigueRecoveryEnt = this->fields.eventFatigueRecoveryEnt;
  if ( !eventFatigueRecoveryEnt )
    sub_B5D69C(this, method);
  return eventFatigueRecoveryEnt->fields.individualityName;
}


int32_t __fastcall EventServantRecoveryFatigueItem__get_IndividualityRate(
        EventServantRecoveryFatigueItem_o *this,
        const MethodInfo *method)
{
  struct EventFatigueRecoveryEntity_o *eventFatigueRecoveryEnt; // x8

  eventFatigueRecoveryEnt = this->fields.eventFatigueRecoveryEnt;
  if ( eventFatigueRecoveryEnt )
    return eventFatigueRecoveryEnt->fields.individualityRate;
  else
    return 1000;
}


System_String_o *__fastcall EventServantRecoveryFatigueItem__get_Name(
        EventServantRecoveryFatigueItem_o *this,
        const MethodInfo *method)
{
  struct EventFatigueRecoveryEntity_o *eventFatigueRecoveryEnt; // x8

  eventFatigueRecoveryEnt = this->fields.eventFatigueRecoveryEnt;
  if ( !eventFatigueRecoveryEnt )
    sub_B5D69C(this, method);
  return eventFatigueRecoveryEnt->fields.name;
}


int32_t __fastcall EventServantRecoveryFatigueItem__get_RecoveryRate(
        EventServantRecoveryFatigueItem_o *this,
        const MethodInfo *method)
{
  struct EventFatigueRecoveryEntity_o *eventFatigueRecoveryEnt; // x8

  eventFatigueRecoveryEnt = this->fields.eventFatigueRecoveryEnt;
  if ( eventFatigueRecoveryEnt )
    return eventFatigueRecoveryEnt->fields.recoveryRate;
  else
    return 1000;
}


UserServantEntity_o *__fastcall EventServantRecoveryFatigueItem__get_UserServantEntity(
        EventServantRecoveryFatigueItem_o *this,
        const MethodInfo *method)
{
  return this->fields.userServantEntity;
}