void EventServantRecoveryFatigueItem___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct EventServantRecoveryFatigueItem_StaticFields *static_fields; // x0

  if ( (byte_4C322BB & 1) == 0 )
  {
    sub_1C32C20(&EventServantRecoveryFatigueItem_TypeInfo);
    sub_1C32C20(&StringLiteral_16958/*"available_0"*/);
    sub_1C32C20(&StringLiteral_19257/*"event_recvoer_servant_bg02"*/);
    byte_4C322BB = 1;
  }
  EventServantRecoveryFatigueItem_TypeInfo->static_fields->EMPTY_BG_NAME = (struct System_String_o *)StringLiteral_19257/*"event_recvoer_servant_bg02"*/;
  sub_1C32BC4(EventServantRecoveryFatigueItem_TypeInfo->static_fields, StringLiteral_19257/*"event_recvoer_servant_bg02"*/);
  v1 = StringLiteral_16958/*"available_0"*/;
  static_fields = EventServantRecoveryFatigueItem_TypeInfo->static_fields;
  static_fields->OPEN_CLIP_NAME = (struct System_String_o *)StringLiteral_16958/*"available_0"*/;
  sub_1C32BC4(&static_fields->OPEN_CLIP_NAME, v1);
}


void EventServantRecoveryFatigueItem___ctor(EventServantRecoveryFatigueItem_o *this, const MethodInfo *method)
{
  this->fields.updateTime = -1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventServantRecoveryFatigueItem__Init(EventServantRecoveryFatigueItem_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *servantFaceIcon; // x0
  UnityEngine_Object_o *nameSprite; // x20
  UnityEngine_Object_o *frameSprite; // x20
  UnityEngine_Object_o *simpleAnimation; // x20
  UnityEngine_Object_o *animation; // x20

  if ( (byte_4C322B5 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C322B5 = 1;
  }
  servantFaceIcon = (UnityEngine_Component_o *)this->fields.servantFaceIcon;
  if ( !servantFaceIcon )
    goto LABEL_28;
  servantFaceIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(servantFaceIcon, 0);
  if ( !servantFaceIcon )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 0, 0);
  servantFaceIcon = (UnityEngine_Component_o *)this->fields.emptySprite;
  if ( !servantFaceIcon )
    goto LABEL_28;
  servantFaceIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(servantFaceIcon, 0);
  if ( !servantFaceIcon )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 0, 0);
  servantFaceIcon = (UnityEngine_Component_o *)this->fields.fatigueRecoveryTimeLabel;
  if ( !servantFaceIcon )
    goto LABEL_28;
  servantFaceIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(servantFaceIcon, 0);
  if ( !servantFaceIcon )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 0, 0);
  this->fields.userServantEntity = 0;
  sub_1C32BC4(&this->fields.userServantEntity, 0);
  this->fields.isFatigueRecover = 0;
  this->fields.index = -1;
  this->fields.fatigueTime = -1;
  this->fields.updateTime = -1;
  this->fields.clickCallback = 0;
  sub_1C32BC4(&this->fields.clickCallback, 0);
  this->fields.eventFatigueRecoveryEnt = 0;
  sub_1C32BC4(&this->fields.eventFatigueRecoveryEnt, 0);
  nameSprite = (UnityEngine_Object_o *)this->fields.nameSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(nameSprite, 0, 0) )
  {
    servantFaceIcon = (UnityEngine_Component_o *)this->fields.nameSprite;
    if ( !servantFaceIcon )
      goto LABEL_28;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 0, 0);
  }
  frameSprite = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(frameSprite, 0, 0) )
  {
    servantFaceIcon = (UnityEngine_Component_o *)this->fields.frameSprite;
    if ( !servantFaceIcon )
      goto LABEL_28;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 0, 0);
  }
  simpleAnimation = (UnityEngine_Object_o *)this->fields.simpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(simpleAnimation, 0, 0) )
  {
    servantFaceIcon = (UnityEngine_Component_o *)this->fields.simpleAnimation;
    if ( servantFaceIcon )
    {
LABEL_23:
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)servantFaceIcon, 0, 0);
      return;
    }
LABEL_28:
    sub_1C32E7C(servantFaceIcon);
  }
  animation = (UnityEngine_Object_o *)this->fields.animation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(animation, 0, 0) )
  {
    servantFaceIcon = (UnityEngine_Component_o *)this->fields.animation;
    if ( servantFaceIcon )
      goto LABEL_23;
    goto LABEL_28;
  }
}


bool EventServantRecoveryFatigueItem__IsAnimation(EventServantRecoveryFatigueItem_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *simpleAnimation; // x20
  UnityEngine_Object_o *animation; // x19

  if ( (byte_4C322B9 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C322B9 = 1;
  }
  simpleAnimation = (UnityEngine_Object_o *)this->fields.simpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(simpleAnimation, 0, 0) )
    return 1;
  animation = (UnityEngine_Object_o *)this->fields.animation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Inequality(animation, 0, 0);
}


void EventServantRecoveryFatigueItem__OnClickItem(EventServantRecoveryFatigueItem_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  struct System_Action_int__o *clickCallback; // x8

  if ( (byte_4C322B8 & 1) == 0 )
  {
    sub_1C32C20(&Method_EventServantRecoveryFatigueItem_OnClickItem__);
    byte_4C322B8 = 1;
  }
  if ( this->fields.clickCallback )
  {
    v3 = Method_EventServantRecoveryFatigueItem_OnClickItem__;
    if ( (*((_BYTE *)Method_EventServantRecoveryFatigueItem_OnClickItem__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_EventServantRecoveryFatigueItem_OnClickItem__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    clickCallback = this->fields.clickCallback;
    if ( !clickCallback )
      sub_1C32E7C(v5);
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))clickCallback->fields.invoke_impl)(
      clickCallback->fields.method_code,
      (unsigned int)this->fields.index,
      clickCallback->fields.method);
  }
}


// local variable allocation has failed, the output may be wrong!
void EventServantRecoveryFatigueItem__SetAnimationPlay(
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
  SimpleAnimation_o *Item; // x0
  SimpleAnimation_c *klass; // x8
  SimpleAnimation_o *v12; // x20
  __int64 v13; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v15; // x0
  UnityEngine_Object_o *animation; // x21
  UnityEngine_AnimationClip_o *Clip; // x20
  UnityEngine_Animation_o *v18; // x19
  System_String_o *v19; // x0
  UnityEngine_AnimationClip_o *v20; // x20
  struct SimpleAnimation_o *v21; // x19
  System_String_o *name; // x0
  int32_t v23; // [xsp+Ch] [xbp-24h] BYREF

  v23 = no;
  if ( (byte_4C322BA & 1) == 0 )
  {
    sub_1C32C20(&EventServantRecoveryFatigueItem_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&SimpleAnimation_State_TypeInfo);
    byte_4C322BA = 1;
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
    v6 = System_Int32__ToString((int32_t)&v23, 0);
    v7 = System_String__Concat_63518544(OPEN_CLIP_NAME, v6, 0);
    simpleAnimation = (UnityEngine_Object_o *)this->fields.simpleAnimation;
    v9 = v7;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(simpleAnimation, 0, 0) )
    {
      Item = this->fields.simpleAnimation;
      if ( !Item )
        goto LABEL_38;
      Item = (SimpleAnimation_o *)SimpleAnimation__get_Item(Item, v9, 0);
      if ( !Item )
        goto LABEL_38;
      klass = Item->klass;
      v12 = Item;
      v13 = *(unsigned __int16 *)&Item->klass->_2.rank;
      if ( *(_WORD *)&Item->klass->_2.rank )
      {
        p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v13;
          p_offset += 2;
          if ( !v13 )
            goto LABEL_15;
        }
        v15 = (__int64)(&klass[1]._1.generic_class + 2 * *(_DWORD *)p_offset);
      }
      else
      {
LABEL_15:
        v15 = sub_1C83438(Item, SimpleAnimation_State_TypeInfo, 14);
      }
      v20 = (UnityEngine_AnimationClip_o *)(*(__int64 (__fastcall **)(SimpleAnimation_o *, _QWORD))v15)(
                                             v12,
                                             *(_QWORD *)(v15 + 8));
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v20, 0, 0) )
      {
        Item = this->fields.simpleAnimation;
        if ( Item )
        {
          SimpleAnimation__set_clip(Item, v20, 0);
          Item = this->fields.simpleAnimation;
          if ( Item )
          {
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Item, 1, 0);
            v21 = this->fields.simpleAnimation;
            if ( v21 )
            {
              Item = (SimpleAnimation_o *)v21->fields.m_Clip;
              if ( Item )
              {
                name = UnityEngine_Object__get_name((UnityEngine_Object_o *)Item, 0);
                SimpleAnimation__Play_66464300(v21, name, 0);
                return;
              }
            }
          }
        }
LABEL_38:
        sub_1C32E7C(Item);
      }
    }
    else
    {
      animation = (UnityEngine_Object_o *)this->fields.animation;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(animation, 0, 0) )
      {
        Item = (SimpleAnimation_o *)this->fields.animation;
        if ( !Item )
          goto LABEL_38;
        Clip = UnityEngine_Animation__GetClip((UnityEngine_Animation_o *)Item, v9, 0);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Clip, 0, 0) )
        {
          Item = (SimpleAnimation_o *)this->fields.animation;
          if ( Item )
          {
            UnityEngine_Animation__set_clip((UnityEngine_Animation_o *)Item, Clip, 0);
            Item = (SimpleAnimation_o *)this->fields.animation;
            if ( Item )
            {
              UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Item, 1, 0);
              v18 = this->fields.animation;
              if ( v18 )
              {
                Item = (SimpleAnimation_o *)UnityEngine_Animation__get_clip(v18, 0);
                if ( Item )
                {
                  v19 = UnityEngine_Object__get_name((UnityEngine_Object_o *)Item, 0);
                  UnityEngine_Animation__Play_70968924(v18, v19, 0);
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


void EventServantRecoveryFatigueItem__SetServantInfo(
        EventServantRecoveryFatigueItem_o *this,
        UserServantEntity_o *userServantEntity,
        int32_t eventId,
        int32_t index,
        System_Action_int__o *callback,
        const MethodInfo *method)
{
  struct UserServantEntity_o **p_userServantEntity; // x24
  DataManager_o *Instance; // x0
  struct EventFatigueRecoveryEntity_o *EntityDefinitely; // x0
  IconLabelInfo_o *v14; // x21
  int32_t lv; // w25
  struct UserServantEntity_o *v16; // x8
  UserEventServantFatigueMaster_o *v17; // x24
  __int64 v18; // x25
  __int64 v19; // x26
  int64_t v20; // x22
  System_String_o *RestTime4; // x23
  UILabel_o *fatigueRecoveryTimeLabel; // x22
  UnityEngine_Object_o *v23; // x20
  bool v24; // w1
  UISprite_o *emptySprite; // x20
  EventServantRecoveryFatigueItem_c *v26; // x0
  System_String_o *EMPTY_BG_NAME; // x21
  UnityEngine_Object_o *v28; // x20
  System_String_o *v29; // x0
  UnityEngine_Object_o *frameSprite; // x20
  UnityEngine_Object_o *nameSprite; // x20
  int64_t recoverAt; // [xsp+18h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16

  if ( (byte_4C322B6 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_EventFatigueRecoveryMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
    sub_1C32C20(&EventRewardRootComponent_TypeInfo);
    sub_1C32C20(&EventServantRecoveryFatigueItem_TypeInfo);
    sub_1C32C20(&IconLabelInfo_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&StringLiteral_11670/*"SERVANT_RECOVERY_FATIGUE_REST_TIME"*/);
    byte_4C322B6 = 1;
  }
  recoverAt = 0;
  this->fields.isFatigueRecover = 0;
  this->fields.fatigueTime = -1;
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_1C32BC4(&this->fields.userServantEntity, userServantEntity);
  this->fields.index = index;
  if ( callback )
  {
    this->fields.clickCallback = callback;
    sub_1C32BC4(&this->fields.clickCallback, callback);
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventFatigueRecoveryMaster___);
  if ( !Instance )
    goto LABEL_68;
  EntityDefinitely = EventFatigueRecoveryMaster__GetEntityDefinitely(
                       (EventFatigueRecoveryMaster_o *)Instance,
                       eventId,
                       this->fields.index,
                       0);
  this->fields.eventFatigueRecoveryEnt = EntityDefinitely;
  sub_1C32BC4(&this->fields.eventFatigueRecoveryEnt, EntityDefinitely);
  if ( userServantEntity )
  {
    v14 = (IconLabelInfo_o *)sub_1C32E6C(IconLabelInfo_TypeInfo);
    IconLabelInfo___ctor(v14, 0);
    lv = userServantEntity->fields.lv;
    Instance = (DataManager_o *)UserServantEntity__getLevelMax(userServantEntity, 0);
    if ( !v14 )
      goto LABEL_68;
    IconLabelInfo__Set_40818388(v14, 2, lv, (int32_t)Instance, 0, 0, 0, 0, 0, 0);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_68;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
    v16 = *p_userServantEntity;
    if ( !*p_userServantEntity )
      goto LABEL_68;
    v17 = (UserEventServantFatigueMaster_o *)Instance;
    v19 = *(_QWORD *)&v16->fields.svtId.fields.currentCryptoKey;
    v18 = *(_QWORD *)&v16->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v33.fields.currentCryptoKey = v19;
    *(_QWORD *)&v33.fields.fakeValue = v18;
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v33, 0);
    if ( !v17 )
      goto LABEL_68;
    if ( UserEventServantFatigueMaster__GetFatigueInfo(
           v17,
           &recoverAt,
           &this->fields.isFatigueRecover,
           eventId,
           (int32_t)Instance,
           0) )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      this->fields.updateTime = NetworkManager__getTime(0);
      v20 = recoverAt;
      this->fields.fatigueTime = recoverAt;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      RestTime4 = LocalizationManager__GetRestTime4(v20, -1, 0);
      Instance = (DataManager_o *)System_String__IsNullOrEmpty(RestTime4, 0);
      fatigueRecoveryTimeLabel = this->fields.fatigueRecoveryTimeLabel;
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v29 = LocalizationManager__Get((System_String_o *)StringLiteral_11670/*"SERVANT_RECOVERY_FATIGUE_REST_TIME"*/, 0);
        Instance = (DataManager_o *)System_String__Format(v29, (Il2CppObject *)RestTime4, 0);
        if ( !fatigueRecoveryTimeLabel )
          goto LABEL_68;
        UILabel__set_text(fatigueRecoveryTimeLabel, (System_String_o *)Instance, 0);
        Instance = (DataManager_o *)this->fields.fatigueRecoveryTimeLabel;
        if ( !Instance )
          goto LABEL_68;
        Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
        if ( !Instance )
          goto LABEL_68;
        v24 = 1;
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
    Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    if ( !Instance )
      goto LABEL_68;
    v24 = 0;
LABEL_51:
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v24, 0);
    Instance = (DataManager_o *)this->fields.servantFaceIcon;
    if ( !Instance )
      goto LABEL_68;
    ServantFaceIconComponent__Set_40905852((ServantFaceIconComponent_o *)Instance, userServantEntity, v14, 0, 0);
    frameSprite = (UnityEngine_Object_o *)this->fields.frameSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(frameSprite, 0, 0) )
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
      Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
      if ( !Instance )
        goto LABEL_68;
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
    nameSprite = (UnityEngine_Object_o *)this->fields.nameSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(nameSprite, 0, 0) )
    {
      Instance = (DataManager_o *)this->fields.nameSprite;
      if ( !Instance )
        goto LABEL_68;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
    }
    Instance = (DataManager_o *)this->fields.servantFaceIcon;
    if ( Instance )
    {
      Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
      if ( Instance )
      {
LABEL_66:
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
        return;
      }
    }
LABEL_68:
    sub_1C32E7C(Instance);
  }
  Instance = (DataManager_o *)this->fields.servantFaceIcon;
  if ( !Instance )
    goto LABEL_68;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_68;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  Instance = (DataManager_o *)this->fields.fatigueRecoveryTimeLabel;
  if ( !Instance )
    goto LABEL_68;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_68;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  v23 = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v23, 0, 0) )
  {
    Instance = (DataManager_o *)this->fields.frameSprite;
    if ( !Instance )
      goto LABEL_68;
  }
  else
  {
    emptySprite = this->fields.emptySprite;
    v26 = EventServantRecoveryFatigueItem_TypeInfo;
    if ( !EventServantRecoveryFatigueItem_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventServantRecoveryFatigueItem_TypeInfo);
      v26 = EventServantRecoveryFatigueItem_TypeInfo;
    }
    EMPTY_BG_NAME = v26->static_fields->EMPTY_BG_NAME;
    if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
    EventRewardRootComponent__setRewardInfoImg(emptySprite, EMPTY_BG_NAME, 0);
    Instance = (DataManager_o *)this->fields.emptySprite;
    if ( !Instance )
      goto LABEL_68;
    Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    if ( !Instance )
      goto LABEL_68;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  v28 = (UnityEngine_Object_o *)this->fields.nameSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v28, 0, 0) )
  {
    Instance = (DataManager_o *)this->fields.nameSprite;
    if ( !Instance )
      goto LABEL_68;
    goto LABEL_66;
  }
}


void EventServantRecoveryFatigueItem__Update(EventServantRecoveryFatigueItem_o *this, const MethodInfo *method)
{
  int64_t Time; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4C322B4 & 1) == 0 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C322B4 = 1;
  }
  if ( (this->fields.updateTime & 0x8000000000000000LL) == 0 && this->fields.userServantEntity )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Time = NetworkManager__getTime(0);
    if ( this->fields.updateTime != Time )
    {
      this->fields.updateTime = Time;
      EventServantRecoveryFatigueItem__UpdateDisp(this, v4);
    }
  }
}


void EventServantRecoveryFatigueItem__UpdateDisp(EventServantRecoveryFatigueItem_o *this, const MethodInfo *method)
{
  int64_t fatigueTime; // x20
  System_String_o *RestTime4; // x20
  UnityEngine_Component_o *fatigueRecoveryTimeLabel; // x0
  UILabel_o *v6; // x19
  System_String_o *v7; // x0

  if ( (byte_4C322B7 & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_11670/*"SERVANT_RECOVERY_FATIGUE_REST_TIME"*/);
    byte_4C322B7 = 1;
  }
  fatigueTime = this->fields.fatigueTime;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  RestTime4 = LocalizationManager__GetRestTime4(fatigueTime, -1, 0);
  if ( System_String__IsNullOrEmpty(RestTime4, 0) )
  {
    fatigueRecoveryTimeLabel = (UnityEngine_Component_o *)this->fields.fatigueRecoveryTimeLabel;
    this->fields.updateTime = -1;
    if ( fatigueRecoveryTimeLabel )
    {
      fatigueRecoveryTimeLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                              fatigueRecoveryTimeLabel,
                                                              0);
      if ( fatigueRecoveryTimeLabel )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)fatigueRecoveryTimeLabel, 0, 0);
        return;
      }
    }
LABEL_13:
    sub_1C32E7C(fatigueRecoveryTimeLabel);
  }
  v6 = this->fields.fatigueRecoveryTimeLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_11670/*"SERVANT_RECOVERY_FATIGUE_REST_TIME"*/, 0);
  fatigueRecoveryTimeLabel = (UnityEngine_Component_o *)System_String__Format(v7, (Il2CppObject *)RestTime4, 0);
  if ( !v6 )
    goto LABEL_13;
  UILabel__set_text(v6, (System_String_o *)fatigueRecoveryTimeLabel, 0);
}


int64_t EventServantRecoveryFatigueItem__get_FatigueTime(
        EventServantRecoveryFatigueItem_o *this,
        const MethodInfo *method)
{
  return this->fields.fatigueTime;
}


int32_t EventServantRecoveryFatigueItem__get_Idx(EventServantRecoveryFatigueItem_o *this, const MethodInfo *method)
{
  struct EventFatigueRecoveryEntity_o *eventFatigueRecoveryEnt; // x8

  eventFatigueRecoveryEnt = this->fields.eventFatigueRecoveryEnt;
  if ( !eventFatigueRecoveryEnt )
    sub_1C32E7C(this);
  return eventFatigueRecoveryEnt->fields.idx;
}


int32_t EventServantRecoveryFatigueItem__get_Index(EventServantRecoveryFatigueItem_o *this, const MethodInfo *method)
{
  return this->fields.index;
}


System_Int32_array *EventServantRecoveryFatigueItem__get_Individuality(
        EventServantRecoveryFatigueItem_o *this,
        const MethodInfo *method)
{
  struct EventFatigueRecoveryEntity_o *eventFatigueRecoveryEnt; // x8

  eventFatigueRecoveryEnt = this->fields.eventFatigueRecoveryEnt;
  if ( !eventFatigueRecoveryEnt )
    sub_1C32E7C(this);
  return eventFatigueRecoveryEnt->fields.targetIndividuality;
}


System_String_array *EventServantRecoveryFatigueItem__get_IndividualityName(
        EventServantRecoveryFatigueItem_o *this,
        const MethodInfo *method)
{
  struct EventFatigueRecoveryEntity_o *eventFatigueRecoveryEnt; // x8

  eventFatigueRecoveryEnt = this->fields.eventFatigueRecoveryEnt;
  if ( !eventFatigueRecoveryEnt )
    sub_1C32E7C(this);
  return eventFatigueRecoveryEnt->fields.individualityName;
}


int32_t EventServantRecoveryFatigueItem__get_IndividualityRate(
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


System_String_o *EventServantRecoveryFatigueItem__get_Name(
        EventServantRecoveryFatigueItem_o *this,
        const MethodInfo *method)
{
  struct EventFatigueRecoveryEntity_o *eventFatigueRecoveryEnt; // x8

  eventFatigueRecoveryEnt = this->fields.eventFatigueRecoveryEnt;
  if ( !eventFatigueRecoveryEnt )
    sub_1C32E7C(this);
  return eventFatigueRecoveryEnt->fields.name;
}


int32_t EventServantRecoveryFatigueItem__get_RecoveryRate(
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


UserServantEntity_o *EventServantRecoveryFatigueItem__get_UserServantEntity(
        EventServantRecoveryFatigueItem_o *this,
        const MethodInfo *method)
{
  return this->fields.userServantEntity;
}