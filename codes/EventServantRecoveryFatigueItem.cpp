void __fastcall EventServantRecoveryFatigueItem___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  int32_t v3; // w1
  struct EventServantRecoveryFatigueItem_StaticFields *static_fields; // x0
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4A5F422 & 1) == 0 )
  {
    sub_1B885B0(&EventServantRecoveryFatigueItem_TypeInfo);
    sub_1B885B0(&StringLiteral_16989/*"available_0"*/);
    sub_1B885B0(&StringLiteral_19239/*"event_recvoer_servant_bg02"*/);
    byte_4A5F422 = 1;
  }
  EventServantRecoveryFatigueItem_TypeInfo->static_fields->EMPTY_BG_NAME = (struct System_String_o *)StringLiteral_19239/*"event_recvoer_servant_bg02"*/;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)EventServantRecoveryFatigueItem_TypeInfo->static_fields,
    StringLiteral_19239/*"event_recvoer_servant_bg02"*/,
    v1,
    v2);
  v3 = StringLiteral_16989/*"available_0"*/;
  static_fields = EventServantRecoveryFatigueItem_TypeInfo->static_fields;
  static_fields->OPEN_CLIP_NAME = (struct System_String_o *)StringLiteral_16989/*"available_0"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->OPEN_CLIP_NAME, v3, v5, v6);
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
  int32_t v4; // w2
  int32_t v5; // w3
  int32_t v6; // w2
  int32_t v7; // w3
  int32_t v8; // w2
  int32_t v9; // w3
  UnityEngine_Object_o *nameSprite; // x20
  UnityEngine_Object_o *frameSprite; // x20
  UnityEngine_Object_o *simpleAnimation; // x20
  UnityEngine_Object_o *animation; // x20

  if ( (byte_4A5F41C & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5F41C = 1;
  }
  servantFaceIcon = (UnityEngine_Component_o *)this->fields.servantFaceIcon;
  if ( !servantFaceIcon )
    goto LABEL_28;
  servantFaceIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(servantFaceIcon, 0LL);
  if ( !servantFaceIcon )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 0, 0LL);
  servantFaceIcon = (UnityEngine_Component_o *)this->fields.emptySprite;
  if ( !servantFaceIcon )
    goto LABEL_28;
  servantFaceIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(servantFaceIcon, 0LL);
  if ( !servantFaceIcon )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 0, 0LL);
  servantFaceIcon = (UnityEngine_Component_o *)this->fields.fatigueRecoveryTimeLabel;
  if ( !servantFaceIcon )
    goto LABEL_28;
  servantFaceIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(servantFaceIcon, 0LL);
  if ( !servantFaceIcon )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 0, 0LL);
  this->fields.userServantEntity = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.userServantEntity, 0, v4, v5);
  this->fields.isFatigueRecover = 0;
  this->fields.index = -1;
  this->fields.fatigueTime = -1LL;
  this->fields.updateTime = -1LL;
  this->fields.clickCallback = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.clickCallback, 0, v6, v7);
  this->fields.eventFatigueRecoveryEnt = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.eventFatigueRecoveryEnt, 0, v8, v9);
  nameSprite = (UnityEngine_Object_o *)this->fields.nameSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(nameSprite, 0LL, 0LL) )
  {
    servantFaceIcon = (UnityEngine_Component_o *)this->fields.nameSprite;
    if ( !servantFaceIcon )
      goto LABEL_28;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 0, 0LL);
  }
  frameSprite = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(frameSprite, 0LL, 0LL) )
  {
    servantFaceIcon = (UnityEngine_Component_o *)this->fields.frameSprite;
    if ( !servantFaceIcon )
      goto LABEL_28;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 0, 0LL);
  }
  simpleAnimation = (UnityEngine_Object_o *)this->fields.simpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(simpleAnimation, 0LL, 0LL) )
  {
    servantFaceIcon = (UnityEngine_Component_o *)this->fields.simpleAnimation;
    if ( servantFaceIcon )
    {
LABEL_23:
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)servantFaceIcon, 0, 0LL);
      return;
    }
LABEL_28:
    sub_1B8880C(servantFaceIcon, method);
  }
  animation = (UnityEngine_Object_o *)this->fields.animation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(animation, 0LL, 0LL) )
  {
    servantFaceIcon = (UnityEngine_Component_o *)this->fields.animation;
    if ( servantFaceIcon )
      goto LABEL_23;
    goto LABEL_28;
  }
}


bool __fastcall EventServantRecoveryFatigueItem__IsAnimation(
        EventServantRecoveryFatigueItem_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *simpleAnimation; // x20
  UnityEngine_Object_o *animation; // x19

  if ( (byte_4A5F420 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5F420 = 1;
  }
  simpleAnimation = (UnityEngine_Object_o *)this->fields.simpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(simpleAnimation, 0LL, 0LL) )
    return 1;
  animation = (UnityEngine_Object_o *)this->fields.animation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Inequality(animation, 0LL, 0LL);
}


void __fastcall EventServantRecoveryFatigueItem__OnClickItem(
        EventServantRecoveryFatigueItem_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct System_Action_int__o *clickCallback; // x8

  if ( (byte_4A5F41F & 1) == 0 )
  {
    sub_1B885B0(&Method_EventServantRecoveryFatigueItem_OnClickItem__);
    byte_4A5F41F = 1;
  }
  if ( this->fields.clickCallback )
  {
    v3 = Method_EventServantRecoveryFatigueItem_OnClickItem__;
    if ( (*((_BYTE *)Method_EventServantRecoveryFatigueItem_OnClickItem__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_EventServantRecoveryFatigueItem_OnClickItem__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    clickCallback = this->fields.clickCallback;
    if ( !clickCallback )
      sub_1B8880C(v5, v6);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))clickCallback->fields.m_target)(
      clickCallback->fields.original_method_info,
      (unsigned int)this->fields.index,
      *(_QWORD *)&clickCallback->fields.extra_arg);
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
  SimpleAnimation_c *klass; // x8
  SimpleAnimation_o *v13; // x20
  __int64 v14; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v16; // x0
  UnityEngine_Object_o *animation; // x21
  UnityEngine_AnimationClip_o *Clip; // x20
  UnityEngine_Animation_o *v19; // x19
  System_String_o *v20; // x0
  UnityEngine_AnimationClip_o *v21; // x20
  struct SimpleAnimation_o *v22; // x19
  System_String_o *name; // x0
  int32_t v24; // [xsp+Ch] [xbp-24h] BYREF

  v24 = no;
  if ( (byte_4A5F421 & 1) == 0 )
  {
    sub_1B885B0(&EventServantRecoveryFatigueItem_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&SimpleAnimation_State_TypeInfo);
    byte_4A5F421 = 1;
  }
  if ( EventServantRecoveryFatigueItem__IsAnimation(this, *(const MethodInfo **)&no) )
  {
    v4 = EventServantRecoveryFatigueItem_TypeInfo;
    if ( !EventServantRecoveryFatigueItem_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventServantRecoveryFatigueItem_TypeInfo);
      v4 = EventServantRecoveryFatigueItem_TypeInfo;
    }
    OPEN_CLIP_NAME = v4->static_fields->OPEN_CLIP_NAME;
    v6 = System_Int32__ToString((int32_t)&v24, 0LL);
    v7 = System_String__Concat_61707032(OPEN_CLIP_NAME, v6, 0LL);
    simpleAnimation = (UnityEngine_Object_o *)this->fields.simpleAnimation;
    v9 = v7;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(simpleAnimation, 0LL, 0LL) )
    {
      Item = this->fields.simpleAnimation;
      if ( !Item )
        goto LABEL_38;
      Item = (SimpleAnimation_o *)SimpleAnimation__get_Item(Item, v9, 0LL);
      if ( !Item )
        goto LABEL_38;
      klass = Item->klass;
      v13 = Item;
      v14 = *(unsigned __int16 *)(&Item->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Item->klass->_2.bitflags2 + 3) )
      {
        p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v14;
          p_offset += 2;
          if ( !v14 )
            goto LABEL_15;
        }
        v16 = (__int64)(&klass[1]._1.typeMetadataHandle + 2 * *(_DWORD *)p_offset);
      }
      else
      {
LABEL_15:
        v16 = sub_1BDA590(Item, SimpleAnimation_State_TypeInfo, 14LL);
      }
      v21 = (UnityEngine_AnimationClip_o *)(*(__int64 (__fastcall **)(SimpleAnimation_o *, _QWORD))v16)(
                                             v13,
                                             *(_QWORD *)(v16 + 8));
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v21, 0LL, 0LL) )
      {
        Item = this->fields.simpleAnimation;
        if ( Item )
        {
          SimpleAnimation__set_clip(Item, v21, 0LL);
          Item = this->fields.simpleAnimation;
          if ( Item )
          {
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Item, 1, 0LL);
            v22 = this->fields.simpleAnimation;
            if ( v22 )
            {
              Item = (SimpleAnimation_o *)v22[1].monitor;
              if ( Item )
              {
                name = UnityEngine_Object__get_name((UnityEngine_Object_o *)Item, 0LL);
                SimpleAnimation__Play_63844704(v22, name, 0LL);
                return;
              }
            }
          }
        }
LABEL_38:
        sub_1B8880C(Item, v10);
      }
    }
    else
    {
      animation = (UnityEngine_Object_o *)this->fields.animation;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(animation, 0LL, 0LL) )
      {
        Item = (SimpleAnimation_o *)this->fields.animation;
        if ( !Item )
          goto LABEL_38;
        Clip = UnityEngine_Animation__GetClip((UnityEngine_Animation_o *)Item, v9, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
              v19 = this->fields.animation;
              if ( v19 )
              {
                Item = (SimpleAnimation_o *)UnityEngine_Animation__get_clip(v19, 0LL);
                if ( Item )
                {
                  v20 = UnityEngine_Object__get_name((UnityEngine_Object_o *)Item, 0LL);
                  UnityEngine_Animation__Play_69204472(v19, v20, 0LL);
                  return;
                }
              }
            }
          }
          goto LABEL_38;
        }
      }
    }
  }
}


void __fastcall EventServantRecoveryFatigueItem__SetServantInfo(
        EventServantRecoveryFatigueItem_o *this,
        UserServantEntity_o *userServantEntity,
        int32_t eventId,
        int32_t index,
        System_Action_int__o *callback,
        const MethodInfo *method)
{
  struct UserServantEntity_o **p_userServantEntity; // x24
  int32_t v12; // w2
  int32_t v13; // w3
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  struct EventFatigueRecoveryEntity_o *EntityDefinitely; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  IconLabelInfo_o *v19; // x21
  int32_t lv; // w25
  struct UserServantEntity_o *v21; // x8
  UserEventServantFatigueMaster_o *v22; // x24
  __int64 v23; // x25
  __int64 v24; // x26
  int64_t v25; // x22
  System_String_o *RestTime4; // x23
  UILabel_o *fatigueRecoveryTimeLabel; // x22
  UnityEngine_Object_o *v28; // x20
  bool v29; // w1
  UISprite_o *emptySprite; // x20
  EventServantRecoveryFatigueItem_c *v31; // x0
  System_String_o *EMPTY_BG_NAME; // x21
  UnityEngine_Object_o *v33; // x20
  System_String_o *v34; // x0
  UnityEngine_Object_o *frameSprite; // x20
  UnityEngine_Object_o *nameSprite; // x20
  int64_t recoverAt; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16

  if ( (byte_4A5F41D & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventFatigueRecoveryMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
    sub_1B885B0(&EventRewardRootComponent_TypeInfo);
    sub_1B885B0(&EventServantRecoveryFatigueItem_TypeInfo);
    sub_1B885B0(&IconLabelInfo_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_11638/*"SERVANT_RECOVERY_FATIGUE_REST_TIME"*/);
    byte_4A5F41D = 1;
  }
  recoverAt = 0LL;
  this->fields.isFatigueRecover = 0;
  this->fields.fatigueTime = -1LL;
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.userServantEntity,
    (int32_t)userServantEntity,
    eventId,
    index);
  this->fields.index = index;
  if ( callback )
  {
    this->fields.clickCallback = callback;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.clickCallback, (int32_t)callback, v12, v13);
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventFatigueRecoveryMaster___);
  if ( !Instance )
    goto LABEL_68;
  EntityDefinitely = EventFatigueRecoveryMaster__GetEntityDefinitely(
                       (EventFatigueRecoveryMaster_o *)Instance,
                       eventId,
                       this->fields.index,
                       0LL);
  this->fields.eventFatigueRecoveryEnt = EntityDefinitely;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.eventFatigueRecoveryEnt,
    (int32_t)EntityDefinitely,
    v17,
    v18);
  if ( userServantEntity )
  {
    v19 = (IconLabelInfo_o *)sub_1B887FC(IconLabelInfo_TypeInfo);
    IconLabelInfo___ctor(v19, 0LL);
    lv = userServantEntity->fields.lv;
    Instance = (DataManager_o *)UserServantEntity__getLevelMax(userServantEntity, 0LL);
    if ( !v19 )
      goto LABEL_68;
    IconLabelInfo__Set_38140136(v19, 2, lv, (int32_t)Instance, 0, 0, 0, 0, 0LL);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_68;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
    v21 = *p_userServantEntity;
    if ( !*p_userServantEntity )
      goto LABEL_68;
    v22 = (UserEventServantFatigueMaster_o *)Instance;
    v24 = *(_QWORD *)&v21->fields.svtId.fields.currentCryptoKey;
    v23 = *(_QWORD *)&v21->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v38.fields.currentCryptoKey = v24;
    *(_QWORD *)&v38.fields.fakeValue = v23;
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v38, 0LL);
    if ( !v22 )
      goto LABEL_68;
    if ( UserEventServantFatigueMaster__GetFatigueInfo(
           v22,
           &recoverAt,
           &this->fields.isFatigueRecover,
           eventId,
           (int32_t)Instance,
           0LL) )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      this->fields.updateTime = NetworkManager__getTime(0LL);
      v25 = recoverAt;
      this->fields.fatigueTime = recoverAt;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      RestTime4 = LocalizationManager__GetRestTime4(v25, -1LL, 0LL);
      Instance = (DataManager_o *)System_String__IsNullOrEmpty(RestTime4, 0LL);
      fatigueRecoveryTimeLabel = this->fields.fatigueRecoveryTimeLabel;
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v34 = LocalizationManager__Get((System_String_o *)StringLiteral_11638/*"SERVANT_RECOVERY_FATIGUE_REST_TIME"*/, 0LL);
        Instance = (DataManager_o *)System_String__Format(v34, (Il2CppObject *)RestTime4, 0LL);
        if ( !fatigueRecoveryTimeLabel )
          goto LABEL_68;
        UILabel__set_text(fatigueRecoveryTimeLabel, (System_String_o *)Instance, 0LL);
        Instance = (DataManager_o *)this->fields.fatigueRecoveryTimeLabel;
        if ( !Instance )
          goto LABEL_68;
        Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_68;
        v29 = 1;
        goto LABEL_51;
      }
      if ( !fatigueRecoveryTimeLabel )
        goto LABEL_68;
      Instance = (DataManager_o *)this->fields.fatigueRecoveryTimeLabel;
    }
    else
    {
      Instance = (DataManager_o *)this->fields.fatigueRecoveryTimeLabel;
      if ( !Instance )
        goto LABEL_68;
    }
    Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_68;
    v29 = 0;
LABEL_51:
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v29, 0LL);
    Instance = (DataManager_o *)this->fields.servantFaceIcon;
    if ( !Instance )
      goto LABEL_68;
    ServantFaceIconComponent__Set_38220260((ServantFaceIconComponent_o *)Instance, userServantEntity, v19, 0LL, 0LL);
    frameSprite = (UnityEngine_Object_o *)this->fields.frameSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(frameSprite, 0LL, 0LL) )
    {
      Instance = (DataManager_o *)this->fields.frameSprite;
      if ( !Instance )
        goto LABEL_68;
    }
    else
    {
      Instance = (DataManager_o *)this->fields.emptySprite;
      if ( !Instance )
        goto LABEL_68;
      Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_68;
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
    nameSprite = (UnityEngine_Object_o *)this->fields.nameSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(nameSprite, 0LL, 0LL) )
    {
      Instance = (DataManager_o *)this->fields.nameSprite;
      if ( !Instance )
        goto LABEL_68;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    }
    Instance = (DataManager_o *)this->fields.servantFaceIcon;
    if ( Instance )
    {
      Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( Instance )
      {
LABEL_66:
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
        return;
      }
    }
LABEL_68:
    sub_1B8880C(Instance, v15);
  }
  Instance = (DataManager_o *)this->fields.servantFaceIcon;
  if ( !Instance )
    goto LABEL_68;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_68;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (DataManager_o *)this->fields.fatigueRecoveryTimeLabel;
  if ( !Instance )
    goto LABEL_68;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_68;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  v28 = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v28, 0LL, 0LL) )
  {
    Instance = (DataManager_o *)this->fields.frameSprite;
    if ( !Instance )
      goto LABEL_68;
  }
  else
  {
    emptySprite = this->fields.emptySprite;
    v31 = EventServantRecoveryFatigueItem_TypeInfo;
    if ( !EventServantRecoveryFatigueItem_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventServantRecoveryFatigueItem_TypeInfo);
      v31 = EventServantRecoveryFatigueItem_TypeInfo;
    }
    EMPTY_BG_NAME = v31->static_fields->EMPTY_BG_NAME;
    if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
    EventRewardRootComponent__setRewardInfoImg(emptySprite, EMPTY_BG_NAME, 0LL);
    Instance = (DataManager_o *)this->fields.emptySprite;
    if ( !Instance )
      goto LABEL_68;
    Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_68;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  v33 = (UnityEngine_Object_o *)this->fields.nameSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v33, 0LL, 0LL) )
  {
    Instance = (DataManager_o *)this->fields.nameSprite;
    if ( !Instance )
      goto LABEL_68;
    goto LABEL_66;
  }
}


void __fastcall EventServantRecoveryFatigueItem__Update(
        EventServantRecoveryFatigueItem_o *this,
        const MethodInfo *method)
{
  int64_t Time; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4A5F41B & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5F41B = 1;
  }
  if ( (this->fields.updateTime & 0x8000000000000000LL) == 0 && this->fields.userServantEntity )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
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

  if ( (byte_4A5F41E & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_11638/*"SERVANT_RECOVERY_FATIGUE_REST_TIME"*/);
    byte_4A5F41E = 1;
  }
  fatigueTime = this->fields.fatigueTime;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
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
LABEL_13:
    sub_1B8880C(fatigueRecoveryTimeLabel, v5);
  }
  v7 = this->fields.fatigueRecoveryTimeLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_11638/*"SERVANT_RECOVERY_FATIGUE_REST_TIME"*/, 0LL);
  fatigueRecoveryTimeLabel = (UnityEngine_Component_o *)System_String__Format(v8, (Il2CppObject *)RestTime4, 0LL);
  if ( !v7 )
    goto LABEL_13;
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
    sub_1B8880C(this, method);
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
    sub_1B8880C(this, method);
  return eventFatigueRecoveryEnt->fields.targetIndividuality;
}


System_String_array *__fastcall EventServantRecoveryFatigueItem__get_IndividualityName(
        EventServantRecoveryFatigueItem_o *this,
        const MethodInfo *method)
{
  struct EventFatigueRecoveryEntity_o *eventFatigueRecoveryEnt; // x8

  eventFatigueRecoveryEnt = this->fields.eventFatigueRecoveryEnt;
  if ( !eventFatigueRecoveryEnt )
    sub_1B8880C(this, method);
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
    sub_1B8880C(this, method);
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