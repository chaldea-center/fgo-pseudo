void __fastcall EventServantRecoveryFatigueItem___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  struct EventServantRecoveryFatigueItem_StaticFields *static_fields; // x0

  if ( (byte_4B1121F & 1) == 0 )
  {
    sub_1BCA7E0(&EventServantRecoveryFatigueItem_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_17160/*"available_0"*/, v3, v4);
    sub_1BCA7E0(&StringLiteral_19440/*"event_recvoer_servant_bg02"*/, v5, v6);
    byte_4B1121F = 1;
  }
  EventServantRecoveryFatigueItem_TypeInfo->static_fields->EMPTY_BG_NAME = (struct System_String_o *)StringLiteral_19440/*"event_recvoer_servant_bg02"*/;
  sub_1BCA784(EventServantRecoveryFatigueItem_TypeInfo->static_fields, StringLiteral_19440/*"event_recvoer_servant_bg02"*/);
  v7 = StringLiteral_17160/*"available_0"*/;
  static_fields = EventServantRecoveryFatigueItem_TypeInfo->static_fields;
  static_fields->OPEN_CLIP_NAME = (struct System_String_o *)StringLiteral_17160/*"available_0"*/;
  sub_1BCA784(&static_fields->OPEN_CLIP_NAME, v7);
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
  __int64 v2; // x2
  UnityEngine_Component_o *servantFaceIcon; // x0
  __int64 v5; // x1
  UnityEngine_Object_o *nameSprite; // x20
  UnityEngine_Object_o *frameSprite; // x20
  UnityEngine_Object_o *simpleAnimation; // x20
  UnityEngine_Object_o *animation; // x20

  if ( (byte_4B11219 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B11219 = 1;
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
  sub_1BCA784(&this->fields.userServantEntity, 0LL);
  this->fields.isFatigueRecover = 0;
  this->fields.index = -1;
  this->fields.fatigueTime = -1LL;
  this->fields.updateTime = -1LL;
  this->fields.clickCallback = 0LL;
  sub_1BCA784(&this->fields.clickCallback, 0LL);
  this->fields.eventFatigueRecoveryEnt = 0LL;
  sub_1BCA784(&this->fields.eventFatigueRecoveryEnt, 0LL);
  nameSprite = (UnityEngine_Object_o *)this->fields.nameSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( UnityEngine_Object__op_Inequality(nameSprite, 0LL, 0LL) )
  {
    servantFaceIcon = (UnityEngine_Component_o *)this->fields.nameSprite;
    if ( !servantFaceIcon )
      goto LABEL_28;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 0, 0LL);
  }
  frameSprite = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(frameSprite, 0LL, 0LL) )
  {
    servantFaceIcon = (UnityEngine_Component_o *)this->fields.frameSprite;
    if ( !servantFaceIcon )
      goto LABEL_28;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 0, 0LL);
  }
  simpleAnimation = (UnityEngine_Object_o *)this->fields.simpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
    sub_1BCAA3C(servantFaceIcon, method);
  }
  animation = (UnityEngine_Object_o *)this->fields.animation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
  __int64 v2; // x2
  UnityEngine_Object_o *simpleAnimation; // x20
  __int64 v5; // x1
  UnityEngine_Object_o *animation; // x19

  if ( (byte_4B1121D & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B1121D = 1;
  }
  simpleAnimation = (UnityEngine_Object_o *)this->fields.simpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(simpleAnimation, 0LL, 0LL) )
    return 1;
  animation = (UnityEngine_Object_o *)this->fields.animation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  return UnityEngine_Object__op_Inequality(animation, 0LL, 0LL);
}


void __fastcall EventServantRecoveryFatigueItem__OnClickItem(
        EventServantRecoveryFatigueItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Action_int__o *clickCallback; // x8

  if ( (byte_4B1121C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_EventServantRecoveryFatigueItem_OnClickItem__, method, v2);
    byte_4B1121C = 1;
  }
  if ( this->fields.clickCallback )
  {
    v4 = Method_EventServantRecoveryFatigueItem_OnClickItem__;
    if ( (*((_BYTE *)Method_EventServantRecoveryFatigueItem_OnClickItem__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_EventServantRecoveryFatigueItem_OnClickItem__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    clickCallback = this->fields.clickCallback;
    if ( !clickCallback )
      sub_1BCAA3C(v6, v7);
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
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  EventServantRecoveryFatigueItem_c *v9; // x0
  System_String_o *OPEN_CLIP_NAME; // x20
  System_String_o *v11; // x0
  System_String_o *v12; // x0
  __int64 v13; // x1
  UnityEngine_Object_o *simpleAnimation; // x21
  System_String_o *v15; // x20
  __int64 v16; // x1
  SimpleAnimation_o *Item; // x0
  SimpleAnimation_c *klass; // x8
  SimpleAnimation_o *v19; // x20
  __int64 v20; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v22; // x0
  UnityEngine_Object_o *animation; // x21
  __int64 v24; // x1
  UnityEngine_AnimationClip_o *Clip; // x20
  UnityEngine_Animation_o *v26; // x19
  System_String_o *v27; // x0
  __int64 v28; // x1
  UnityEngine_AnimationClip_o *v29; // x20
  struct SimpleAnimation_o *v30; // x19
  System_String_o *name; // x0
  int32_t v32; // [xsp+Ch] [xbp-24h] BYREF

  v32 = no;
  if ( (byte_4B1121E & 1) == 0 )
  {
    sub_1BCA7E0(&EventServantRecoveryFatigueItem_TypeInfo, *(_QWORD *)&no, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    sub_1BCA7E0(&SimpleAnimation_State_TypeInfo, v6, v7);
    byte_4B1121E = 1;
  }
  if ( EventServantRecoveryFatigueItem__IsAnimation(this, *(const MethodInfo **)&no) )
  {
    v9 = EventServantRecoveryFatigueItem_TypeInfo;
    if ( !EventServantRecoveryFatigueItem_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventServantRecoveryFatigueItem_TypeInfo, v8);
      v9 = EventServantRecoveryFatigueItem_TypeInfo;
    }
    OPEN_CLIP_NAME = v9->static_fields->OPEN_CLIP_NAME;
    v11 = System_Int32__ToString((int32_t)&v32, 0LL);
    v12 = System_String__Concat_62401220(OPEN_CLIP_NAME, v11, 0LL);
    simpleAnimation = (UnityEngine_Object_o *)this->fields.simpleAnimation;
    v15 = v12;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
    if ( UnityEngine_Object__op_Inequality(simpleAnimation, 0LL, 0LL) )
    {
      Item = this->fields.simpleAnimation;
      if ( !Item )
        goto LABEL_38;
      Item = (SimpleAnimation_o *)SimpleAnimation__get_Item(Item, v15, 0LL);
      if ( !Item )
        goto LABEL_38;
      klass = Item->klass;
      v19 = Item;
      v20 = *(unsigned __int16 *)(&Item->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Item->klass->_2.bitflags2 + 3) )
      {
        p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v20;
          p_offset += 2;
          if ( !v20 )
            goto LABEL_15;
        }
        v22 = (__int64)(&klass[1]._1.typeMetadataHandle + 2 * *(_DWORD *)p_offset);
      }
      else
      {
LABEL_15:
        v22 = sub_1C1C7C0(Item, SimpleAnimation_State_TypeInfo, 14LL);
      }
      v29 = (UnityEngine_AnimationClip_o *)(*(__int64 (__fastcall **)(SimpleAnimation_o *, _QWORD))v22)(
                                             v19,
                                             *(_QWORD *)(v22 + 8));
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28);
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
                SimpleAnimation__Play_64539336(v30, name, 0LL);
                return;
              }
            }
          }
        }
LABEL_38:
        sub_1BCAA3C(Item, v16);
      }
    }
    else
    {
      animation = (UnityEngine_Object_o *)this->fields.animation;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
      if ( UnityEngine_Object__op_Inequality(animation, 0LL, 0LL) )
      {
        Item = (SimpleAnimation_o *)this->fields.animation;
        if ( !Item )
          goto LABEL_38;
        Clip = UnityEngine_Animation__GetClip((UnityEngine_Animation_o *)Item, v15, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
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
              v26 = this->fields.animation;
              if ( v26 )
              {
                Item = (SimpleAnimation_o *)UnityEngine_Animation__get_clip(v26, 0LL);
                if ( Item )
                {
                  v27 = UnityEngine_Object__get_name((UnityEngine_Object_o *)Item, 0LL);
                  UnityEngine_Animation__Play_69899248(v26, v27, 0LL);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall EventServantRecoveryFatigueItem__SetServantInfo(
        EventServantRecoveryFatigueItem_o *this,
        UserServantEntity_o *userServantEntity,
        int32_t eventId,
        int32_t index,
        System_Action_int__o *callback,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  struct UserServantEntity_o **p_userServantEntity; // x24
  DataManager_o *Instance; // x0
  __int64 v33; // x1
  struct EventFatigueRecoveryEntity_o *EntityDefinitely; // x0
  __int64 v35; // x2
  __int64 v36; // x3
  IconLabelInfo_o *v37; // x21
  int32_t lv; // w25
  struct UserServantEntity_o *v39; // x8
  UserEventServantFatigueMaster_o *v40; // x24
  __int64 v41; // x25
  __int64 v42; // x26
  __int64 v43; // x1
  int64_t v44; // x22
  System_String_o *RestTime4; // x23
  UILabel_o *fatigueRecoveryTimeLabel; // x22
  __int64 v47; // x1
  UnityEngine_Object_o *v48; // x20
  bool v49; // w1
  UISprite_o *emptySprite; // x20
  EventServantRecoveryFatigueItem_c *v51; // x0
  System_String_o *EMPTY_BG_NAME; // x21
  __int64 v53; // x1
  UnityEngine_Object_o *v54; // x20
  System_String_o *v55; // x0
  __int64 v56; // x1
  UnityEngine_Object_o *frameSprite; // x20
  __int64 v58; // x1
  UnityEngine_Object_o *nameSprite; // x20
  int64_t recoverAt; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16

  if ( (byte_4B1121A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventFatigueRecoveryMaster___, userServantEntity, *(_QWORD *)&eventId);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___, v11, v12);
    sub_1BCA7E0(&EventRewardRootComponent_TypeInfo, v13, v14);
    sub_1BCA7E0(&EventServantRecoveryFatigueItem_TypeInfo, v15, v16);
    sub_1BCA7E0(&IconLabelInfo_TypeInfo, v17, v18);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v19, v20);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v21, v22);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v23, v24);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v25, v26);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27, v28);
    sub_1BCA7E0(&StringLiteral_11776/*"SERVANT_RECOVERY_FATIGUE_REST_TIME"*/, v29, v30);
    byte_4B1121A = 1;
  }
  recoverAt = 0LL;
  this->fields.isFatigueRecover = 0;
  this->fields.fatigueTime = -1LL;
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_1BCA784(&this->fields.userServantEntity, userServantEntity);
  this->fields.index = index;
  if ( callback )
  {
    this->fields.clickCallback = callback;
    sub_1BCA784(&this->fields.clickCallback, callback);
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventFatigueRecoveryMaster___);
  if ( !Instance )
    goto LABEL_68;
  EntityDefinitely = EventFatigueRecoveryMaster__GetEntityDefinitely(
                       (EventFatigueRecoveryMaster_o *)Instance,
                       eventId,
                       this->fields.index,
                       0LL);
  this->fields.eventFatigueRecoveryEnt = EntityDefinitely;
  sub_1BCA784(&this->fields.eventFatigueRecoveryEnt, EntityDefinitely);
  if ( userServantEntity )
  {
    v37 = (IconLabelInfo_o *)sub_1BCAA2C(IconLabelInfo_TypeInfo, v33, v35, v36);
    IconLabelInfo___ctor(v37, 0LL);
    lv = userServantEntity->fields.lv;
    Instance = (DataManager_o *)UserServantEntity__getLevelMax(userServantEntity, 0LL);
    if ( !v37 )
      goto LABEL_68;
    IconLabelInfo__Set_38850420(v37, 2, lv, (int32_t)Instance, 0, 0, 0, 0, 0LL);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_68;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
    v39 = *p_userServantEntity;
    if ( !*p_userServantEntity )
      goto LABEL_68;
    v40 = (UserEventServantFatigueMaster_o *)Instance;
    v42 = *(_QWORD *)&v39->fields.svtId.fields.currentCryptoKey;
    v41 = *(_QWORD *)&v39->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v33);
    *(_QWORD *)&v61.fields.currentCryptoKey = v42;
    *(_QWORD *)&v61.fields.fakeValue = v41;
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v61, 0LL);
    if ( !v40 )
      goto LABEL_68;
    if ( UserEventServantFatigueMaster__GetFatigueInfo(
           v40,
           &recoverAt,
           &this->fields.isFatigueRecover,
           eventId,
           (int32_t)Instance,
           0LL) )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v33);
      this->fields.updateTime = NetworkManager__getTime(0LL);
      v44 = recoverAt;
      this->fields.fatigueTime = recoverAt;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v43);
      RestTime4 = LocalizationManager__GetRestTime4(v44, -1LL, 0LL);
      Instance = (DataManager_o *)System_String__IsNullOrEmpty(RestTime4, 0LL);
      fatigueRecoveryTimeLabel = this->fields.fatigueRecoveryTimeLabel;
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v33);
        v55 = LocalizationManager__Get((System_String_o *)StringLiteral_11776/*"SERVANT_RECOVERY_FATIGUE_REST_TIME"*/, 0LL);
        Instance = (DataManager_o *)System_String__Format(v55, (Il2CppObject *)RestTime4, 0LL);
        if ( !fatigueRecoveryTimeLabel )
          goto LABEL_68;
        UILabel__set_text(fatigueRecoveryTimeLabel, (System_String_o *)Instance, 0LL);
        Instance = (DataManager_o *)this->fields.fatigueRecoveryTimeLabel;
        if ( !Instance )
          goto LABEL_68;
        Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_68;
        v49 = 1;
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
    v49 = 0;
LABEL_51:
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v49, 0LL);
    Instance = (DataManager_o *)this->fields.servantFaceIcon;
    if ( !Instance )
      goto LABEL_68;
    ServantFaceIconComponent__Set_38931252((ServantFaceIconComponent_o *)Instance, userServantEntity, v37, 0LL, 0LL);
    frameSprite = (UnityEngine_Object_o *)this->fields.frameSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v56);
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
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v58);
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
    sub_1BCAA3C(Instance, v33);
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
  v48 = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v47);
  if ( UnityEngine_Object__op_Inequality(v48, 0LL, 0LL) )
  {
    Instance = (DataManager_o *)this->fields.frameSprite;
    if ( !Instance )
      goto LABEL_68;
  }
  else
  {
    emptySprite = this->fields.emptySprite;
    v51 = EventServantRecoveryFatigueItem_TypeInfo;
    if ( !EventServantRecoveryFatigueItem_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventServantRecoveryFatigueItem_TypeInfo, v33);
      v51 = EventServantRecoveryFatigueItem_TypeInfo;
    }
    EMPTY_BG_NAME = v51->static_fields->EMPTY_BG_NAME;
    if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo, v33);
    EventRewardRootComponent__setRewardInfoImg(emptySprite, EMPTY_BG_NAME, 0LL);
    Instance = (DataManager_o *)this->fields.emptySprite;
    if ( !Instance )
      goto LABEL_68;
    Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_68;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  v54 = (UnityEngine_Object_o *)this->fields.nameSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v53);
  if ( UnityEngine_Object__op_Inequality(v54, 0LL, 0LL) )
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
  __int64 v2; // x2
  int64_t Time; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4B11218 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    byte_4B11218 = 1;
  }
  if ( (this->fields.updateTime & 0x8000000000000000LL) == 0 && this->fields.userServantEntity )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
    Time = NetworkManager__getTime(0LL);
    if ( this->fields.updateTime != Time )
    {
      this->fields.updateTime = Time;
      EventServantRecoveryFatigueItem__UpdateDisp(this, v5);
    }
  }
}


void __fastcall EventServantRecoveryFatigueItem__UpdateDisp(
        EventServantRecoveryFatigueItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  int64_t fatigueTime; // x20
  System_String_o *RestTime4; // x20
  __int64 v8; // x1
  UnityEngine_Component_o *fatigueRecoveryTimeLabel; // x0
  UILabel_o *v10; // x19
  System_String_o *v11; // x0

  if ( (byte_4B1121B & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_11776/*"SERVANT_RECOVERY_FATIGUE_REST_TIME"*/, v4, v5);
    byte_4B1121B = 1;
  }
  fatigueTime = this->fields.fatigueTime;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
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
    sub_1BCAA3C(fatigueRecoveryTimeLabel, v8);
  }
  v10 = this->fields.fatigueRecoveryTimeLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v8);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_11776/*"SERVANT_RECOVERY_FATIGUE_REST_TIME"*/, 0LL);
  fatigueRecoveryTimeLabel = (UnityEngine_Component_o *)System_String__Format(v11, (Il2CppObject *)RestTime4, 0LL);
  if ( !v10 )
    goto LABEL_13;
  UILabel__set_text(v10, (System_String_o *)fatigueRecoveryTimeLabel, 0LL);
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
    sub_1BCAA3C(this, method);
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
    sub_1BCAA3C(this, method);
  return eventFatigueRecoveryEnt->fields.targetIndividuality;
}


System_String_array *__fastcall EventServantRecoveryFatigueItem__get_IndividualityName(
        EventServantRecoveryFatigueItem_o *this,
        const MethodInfo *method)
{
  struct EventFatigueRecoveryEntity_o *eventFatigueRecoveryEnt; // x8

  eventFatigueRecoveryEnt = this->fields.eventFatigueRecoveryEnt;
  if ( !eventFatigueRecoveryEnt )
    sub_1BCAA3C(this, method);
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
    sub_1BCAA3C(this, method);
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