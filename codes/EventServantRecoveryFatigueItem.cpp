void __fastcall EventServantRecoveryFatigueItem___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1
  struct EventServantRecoveryFatigueItem_StaticFields *v9; // x0
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_42B34E3 & 1) == 0 )
  {
    sub_B52984(&EventServantRecoveryFatigueItem_TypeInfo);
    sub_B52984(&StringLiteral_16653/*"available_0"*/);
    sub_B52984(&StringLiteral_18707/*"event_recvoer_servant_bg02"*/);
    byte_42B34E3 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventServantRecoveryFatigueItem_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_18707/*"event_recvoer_servant_bg02"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_18707/*"event_recvoer_servant_bg02"*/;
  sub_B52920(static_fields, v8, v1, v2, v3, v4, v5, v6);
  v9 = EventServantRecoveryFatigueItem_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_16653/*"available_0"*/;
  v9->OPEN_CLIP_NAME = (struct System_String_o *)StringLiteral_16653/*"available_0"*/;
  sub_B52920((BattleServantConfConponent_o *)&v9->OPEN_CLIP_NAME, v10, v11, v12, v13, v14, v15, v16);
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
  UnityEngine_Component_o *servantFaceIcon; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  UnityEngine_Object_o *nameSprite; // x20
  UnityEngine_Object_o *frameSprite; // x20
  UnityEngine_Object_o *simpleAnimation; // x20
  UnityEngine_Object_o *animation; // x20

  if ( (byte_42B34DD & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B34DD = 1;
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
  sub_B52920((BattleServantConfConponent_o *)&this->fields.userServantEntity, 0LL, v4, v5, v6, v7, v8, v9);
  this->fields.isFatigueRecover = 0;
  this->fields.index = -1;
  this->fields.fatigueTime = -1LL;
  this->fields.updateTime = -1LL;
  this->fields.clickCallback = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.clickCallback, 0LL, v10, v11, v12, v13, v14, v15);
  this->fields.eventFatigueRecoveryEnt = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.eventFatigueRecoveryEnt, 0LL, v16, v17, v18, v19, v20, v21);
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
    sub_B52A5C(servantFaceIcon, method);
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
  UnityEngine_Object_o *simpleAnimation; // x20
  UnityEngine_Object_o *animation; // x19

  if ( (byte_42B34E1 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B34E1 = 1;
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
  __int64 v3; // x1
  System_Action_int__o *clickCallback; // x0

  if ( (byte_42B34E0 & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_int__Invoke__);
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B34E0 = 1;
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
      sub_B52A5C(0LL, v3);
    System_Action_int___Invoke(
      clickCallback,
      this->fields.index,
      (const MethodInfo_2626204 *)Method_System_Action_int__Invoke__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventServantRecoveryFatigueItem__SetAnimationPlay(
        EventServantRecoveryFatigueItem_o *this,
        int32_t no,
        const MethodInfo *method)
{
  EventServantRecoveryFatigueItem_c *v4; // x0
  System_String_o *OPEN_CLIP_NAME; // x20
  System_String_o *v6; // x0
  System_String_o *v7; // x0
  UnityEngine_Object_o *simpleAnimation; // x21
  System_String_o *v9; // x20
  __int64 v10; // x1
  SimpleAnimation_o *Item; // x0
  __int64 v12; // x3
  SimpleAnimation_c *klass; // x8
  SimpleAnimation_o *v14; // x20
  unsigned __int64 v15; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v17; // x0
  UnityEngine_Object_o *animation; // x21
  UnityEngine_AnimationClip_o *Clip; // x20
  UnityEngine_Animation_o *v20; // x19
  System_String_o *v21; // x0
  UnityEngine_AnimationClip_o *v22; // x20
  struct SimpleAnimation_o *v23; // x19
  System_String_o *name; // x0
  int32_t v25; // [xsp+Ch] [xbp-24h] BYREF

  v25 = no;
  if ( (byte_42B34E2 & 1) == 0 )
  {
    sub_B52984(&EventServantRecoveryFatigueItem_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&SimpleAnimation_State_TypeInfo);
    byte_42B34E2 = 1;
  }
  if ( EventServantRecoveryFatigueItem__IsAnimation(this, *(const MethodInfo **)&no) )
  {
    v4 = EventServantRecoveryFatigueItem_TypeInfo;
    if ( (BYTE3(EventServantRecoveryFatigueItem_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventServantRecoveryFatigueItem_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventServantRecoveryFatigueItem_TypeInfo);
      v4 = EventServantRecoveryFatigueItem_TypeInfo;
    }
    OPEN_CLIP_NAME = v4->static_fields->OPEN_CLIP_NAME;
    v6 = System_Int32__ToString((int32_t)&v25, 0LL);
    v7 = System_String__Concat_44568316(OPEN_CLIP_NAME, v6, 0LL);
    simpleAnimation = (UnityEngine_Object_o *)this->fields.simpleAnimation;
    v9 = v7;
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
      Item = (SimpleAnimation_o *)SimpleAnimation__get_Item(Item, v9, 0LL);
      if ( !Item )
        goto LABEL_43;
      klass = Item->klass;
      v14 = Item;
      if ( *(_WORD *)&Item->klass->_2.bitflags1 )
      {
        v15 = 0LL;
        p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
        {
          ++v15;
          p_offset += 2;
          if ( v15 >= *(unsigned __int16 *)&Item->klass->_2.bitflags1 )
            goto LABEL_17;
        }
        v17 = (__int64)(&klass[1]._1.typeMetadataHandle + 2 * *(_DWORD *)p_offset);
      }
      else
      {
LABEL_17:
        v17 = sub_AEB880(Item, SimpleAnimation_State_TypeInfo, 14LL, v12);
      }
      v22 = (UnityEngine_AnimationClip_o *)(*(__int64 (__fastcall **)(SimpleAnimation_o *, _QWORD))v17)(
                                             v14,
                                             *(_QWORD *)(v17 + 8));
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v22, 0LL, 0LL) )
      {
        Item = this->fields.simpleAnimation;
        if ( Item )
        {
          SimpleAnimation__set_clip(Item, v22, 0LL);
          Item = this->fields.simpleAnimation;
          if ( Item )
          {
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Item, 1, 0LL);
            v23 = this->fields.simpleAnimation;
            if ( v23 )
            {
              Item = (SimpleAnimation_o *)v23[1].monitor;
              if ( Item )
              {
                name = UnityEngine_Object__get_name((UnityEngine_Object_o *)Item, 0LL);
                SimpleAnimation__Play_16625408(v23, name, 0LL);
                return;
              }
            }
          }
        }
LABEL_43:
        sub_B52A5C(Item, v10);
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
        Clip = UnityEngine_Animation__GetClip((UnityEngine_Animation_o *)Item, v9, 0LL);
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
              v20 = this->fields.animation;
              if ( v20 )
              {
                Item = (SimpleAnimation_o *)UnityEngine_Animation__get_clip(v20, 0LL);
                if ( Item )
                {
                  v21 = UnityEngine_Object__get_name((UnityEngine_Object_o *)Item, 0LL);
                  UnityEngine_Animation__Play_51067744(v20, v21, 0LL);
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
  struct UserServantEntity_o **p_userServantEntity; // x24
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  DataManager_o *Instance; // x0
  __int64 v21; // x1
  struct EventFatigueRecoveryEntity_o *EntityDefinitely; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  IconLabelInfo_o *v29; // x21
  int32_t lv; // w25
  struct UserServantEntity_o *v31; // x8
  UserEventServantFatigueMaster_o *v32; // x24
  __int64 v33; // x25
  __int64 v34; // x26
  int64_t v35; // x22
  System_String_o *RestTime4; // x23
  UILabel_o *fatigueRecoveryTimeLabel; // x22
  UnityEngine_Object_o *v38; // x20
  bool v39; // w1
  UISprite_o *emptySprite; // x20
  EventServantRecoveryFatigueItem_c *v41; // x0
  System_String_o *EMPTY_BG_NAME; // x21
  UnityEngine_Object_o *v43; // x20
  System_String_o *v44; // x0
  UnityEngine_Object_o *frameSprite; // x20
  UnityEngine_Object_o *nameSprite; // x20
  int64_t recoverAt; // [xsp+8h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16

  if ( (byte_42B34DE & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_EventFatigueRecoveryMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
    sub_B52984(&EventRewardRootComponent_TypeInfo);
    sub_B52984(&EventServantRecoveryFatigueItem_TypeInfo);
    sub_B52984(&IconLabelInfo_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&StringLiteral_11836/*"SERVANT_RECOVERY_FATIGUE_REST_TIME"*/);
    byte_42B34DE = 1;
  }
  recoverAt = 0LL;
  this->fields.isFatigueRecover = 0;
  this->fields.fatigueTime = -1LL;
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_B52920(
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
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.clickCallback,
      (System_Int32_array **)callback,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_78;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventFatigueRecoveryMaster___);
  if ( !Instance )
    goto LABEL_78;
  EntityDefinitely = EventFatigueRecoveryMaster__GetEntityDefinitely(
                       (EventFatigueRecoveryMaster_o *)Instance,
                       eventId,
                       this->fields.index,
                       0LL);
  this->fields.eventFatigueRecoveryEnt = EntityDefinitely;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.eventFatigueRecoveryEnt,
    (System_Int32_array **)EntityDefinitely,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  if ( userServantEntity )
  {
    v29 = (IconLabelInfo_o *)sub_B52A54(IconLabelInfo_TypeInfo);
    IconLabelInfo___ctor(v29, 0LL);
    lv = userServantEntity->fields.lv;
    Instance = (DataManager_o *)UserServantEntity__getLevelMax(userServantEntity, 0LL);
    if ( !v29 )
      goto LABEL_78;
    IconLabelInfo__Set_28274368(v29, 2, lv, (int32_t)Instance, 0, 0, 0, 0, 0LL);
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_78;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
    v31 = *p_userServantEntity;
    if ( !*p_userServantEntity )
      goto LABEL_78;
    v32 = (UserEventServantFatigueMaster_o *)Instance;
    v34 = *(_QWORD *)&v31->fields.svtId.fields.currentCryptoKey;
    v33 = *(_QWORD *)&v31->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v48.fields.currentCryptoKey = v34;
    *(_QWORD *)&v48.fields.fakeValue = v33;
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v48, 0LL);
    if ( !v32 )
      goto LABEL_78;
    if ( UserEventServantFatigueMaster__GetFatigueInfo(
           v32,
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
      v35 = recoverAt;
      this->fields.fatigueTime = recoverAt;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      RestTime4 = LocalizationManager__GetRestTime4(v35, -1LL, 0LL);
      Instance = (DataManager_o *)System_String__IsNullOrEmpty(RestTime4, 0LL);
      fatigueRecoveryTimeLabel = this->fields.fatigueRecoveryTimeLabel;
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v44 = LocalizationManager__Get((System_String_o *)StringLiteral_11836/*"SERVANT_RECOVERY_FATIGUE_REST_TIME"*/, 0LL);
        Instance = (DataManager_o *)System_String__Format(v44, (Il2CppObject *)RestTime4, 0LL);
        if ( !fatigueRecoveryTimeLabel )
          goto LABEL_78;
        UILabel__set_text(fatigueRecoveryTimeLabel, (System_String_o *)Instance, 0LL);
        Instance = (DataManager_o *)this->fields.fatigueRecoveryTimeLabel;
        if ( !Instance )
          goto LABEL_78;
        Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_78;
        v39 = 1;
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
    v39 = 0;
LABEL_59:
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v39, 0LL);
    Instance = (DataManager_o *)this->fields.servantFaceIcon;
    if ( !Instance )
      goto LABEL_78;
    ServantFaceIconComponent__Set_30396076((ServantFaceIconComponent_o *)Instance, userServantEntity, v29, 0LL, 0LL);
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
    sub_B52A5C(Instance, v21);
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
  v38 = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v38, 0LL, 0LL) )
  {
    Instance = (DataManager_o *)this->fields.frameSprite;
    if ( !Instance )
      goto LABEL_78;
  }
  else
  {
    emptySprite = this->fields.emptySprite;
    v41 = EventServantRecoveryFatigueItem_TypeInfo;
    if ( (BYTE3(EventServantRecoveryFatigueItem_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventServantRecoveryFatigueItem_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventServantRecoveryFatigueItem_TypeInfo);
      v41 = EventServantRecoveryFatigueItem_TypeInfo;
    }
    EMPTY_BG_NAME = v41->static_fields->EMPTY_BG_NAME;
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
  v43 = (UnityEngine_Object_o *)this->fields.nameSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v43, 0LL, 0LL) )
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
  int64_t Time; // x0
  const MethodInfo *v4; // x1

  if ( (byte_42B34DC & 1) == 0 )
  {
    sub_B52984(&NetworkManager_TypeInfo);
    byte_42B34DC = 1;
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
      EventServantRecoveryFatigueItem__UpdateDisp(this, v4);
    }
  }
}


void __fastcall EventServantRecoveryFatigueItem__UpdateDisp(
        EventServantRecoveryFatigueItem_o *this,
        const MethodInfo *method)
{
  int64_t fatigueTime; // x20
  System_String_o *RestTime4; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *fatigueRecoveryTimeLabel; // x0
  UILabel_o *v7; // x19
  System_String_o *v8; // x0

  if ( (byte_42B34DF & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_11836/*"SERVANT_RECOVERY_FATIGUE_REST_TIME"*/);
    byte_42B34DF = 1;
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
    sub_B52A5C(fatigueRecoveryTimeLabel, v5);
  }
  v7 = this->fields.fatigueRecoveryTimeLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_11836/*"SERVANT_RECOVERY_FATIGUE_REST_TIME"*/, 0LL);
  fatigueRecoveryTimeLabel = (UnityEngine_Component_o *)System_String__Format(v8, (Il2CppObject *)RestTime4, 0LL);
  if ( !v7 )
    goto LABEL_15;
  UILabel__set_text(v7, (System_String_o *)fatigueRecoveryTimeLabel, 0LL);
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
    sub_B52A5C(this, method);
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
    sub_B52A5C(this, method);
  return eventFatigueRecoveryEnt->fields.targetIndividuality;
}


System_String_array *__fastcall EventServantRecoveryFatigueItem__get_IndividualityName(
        EventServantRecoveryFatigueItem_o *this,
        const MethodInfo *method)
{
  struct EventFatigueRecoveryEntity_o *eventFatigueRecoveryEnt; // x8

  eventFatigueRecoveryEnt = this->fields.eventFatigueRecoveryEnt;
  if ( !eventFatigueRecoveryEnt )
    sub_B52A5C(this, method);
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
    sub_B52A5C(this, method);
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