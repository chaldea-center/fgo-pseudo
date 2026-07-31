void EventServantRecoveryFatigueItem___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  int32_t v8; // w1
  struct EventServantRecoveryFatigueItem_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_5932BC1 & 1) == 0 )
  {
    sub_21FFC50(&EventServantRecoveryFatigueItem_TypeInfo);
    sub_21FFC50(&StringLiteral_17640/*"available_0"*/);
    sub_21FFC50(&StringLiteral_20110/*"event_recvoer_servant_bg02"*/);
    byte_5932BC1 = 1;
  }
  v7 = StringLiteral_20110/*"event_recvoer_servant_bg02"*/;
  EventServantRecoveryFatigueItem_TypeInfo->static_fields->EMPTY_BG_NAME = (struct System_String_o *)StringLiteral_20110/*"event_recvoer_servant_bg02"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)EventServantRecoveryFatigueItem_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v8 = StringLiteral_17640/*"available_0"*/;
  static_fields = EventServantRecoveryFatigueItem_TypeInfo->static_fields;
  static_fields->OPEN_CLIP_NAME = (struct System_String_o *)StringLiteral_17640/*"available_0"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&static_fields->OPEN_CLIP_NAME, v8, v10, v11, v12, v13, v14, v15);
}


void EventServantRecoveryFatigueItem___ctor(EventServantRecoveryFatigueItem_o *this, const MethodInfo *method)
{
  this->fields.updateTime = -1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventServantRecoveryFatigueItem__Init(EventServantRecoveryFatigueItem_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *servantFaceIcon; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  __int64 v22; // x1
  __int64 v23; // x2
  UnityEngine_Object_o *nameSprite; // x20
  __int64 v25; // x2
  UnityEngine_Object_o *frameSprite; // x20
  __int64 v27; // x2
  UnityEngine_Object_o *simpleAnimation; // x20
  __int64 v29; // x2
  UnityEngine_Object_o *animation; // x20

  if ( (byte_5932BBB & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5932BBB = 1;
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
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.userServantEntity, 0, v4, v5, v6, v7, v8, v9);
  this->fields.index = -1;
  this->fields.fatigueTime = -1;
  this->fields.isFatigueRecover = 0;
  this->fields.updateTime = -1;
  this->fields.clickCallback = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.clickCallback, 0, v10, v11, v12, v13, v14, v15);
  this->fields.eventFatigueRecoveryEnt = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.eventFatigueRecoveryEnt,
    0,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  nameSprite = (UnityEngine_Object_o *)this->fields.nameSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22, v23);
  if ( UnityEngine_Object__op_Inequality(nameSprite, 0, 0) )
  {
    servantFaceIcon = (UnityEngine_Component_o *)this->fields.nameSprite;
    if ( !servantFaceIcon )
      goto LABEL_28;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 0, 0);
  }
  frameSprite = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v25);
  if ( UnityEngine_Object__op_Inequality(frameSprite, 0, 0) )
  {
    servantFaceIcon = (UnityEngine_Component_o *)this->fields.frameSprite;
    if ( !servantFaceIcon )
      goto LABEL_28;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 0, 0);
  }
  simpleAnimation = (UnityEngine_Object_o *)this->fields.simpleAnimation;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v27);
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
    sub_21FFECC(servantFaceIcon, method);
  }
  animation = (UnityEngine_Object_o *)this->fields.animation;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v29);
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
  __int64 v2; // x2
  UnityEngine_Object_o *simpleAnimation; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *animation; // x19

  if ( (byte_5932BBF & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5932BBF = 1;
  }
  simpleAnimation = (UnityEngine_Object_o *)this->fields.simpleAnimation;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(simpleAnimation, 0, 0) )
    return 1;
  animation = (UnityEngine_Object_o *)this->fields.animation;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  return UnityEngine_Object__op_Inequality(animation, 0, 0);
}


void EventServantRecoveryFatigueItem__OnClickItem(EventServantRecoveryFatigueItem_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct System_Action_int__o *clickCallback; // x8

  if ( (byte_5932BBE & 1) == 0 )
  {
    sub_21FFC50(&Method_EventServantRecoveryFatigueItem_OnClickItem__);
    byte_5932BBE = 1;
  }
  if ( this->fields.clickCallback )
  {
    v3 = Method_EventServantRecoveryFatigueItem_OnClickItem__;
    if ( (*((_BYTE *)Method_EventServantRecoveryFatigueItem_OnClickItem__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_EventServantRecoveryFatigueItem_OnClickItem__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    clickCallback = this->fields.clickCallback;
    if ( !clickCallback )
      sub_21FFECC(v5, v6);
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
  __int64 v4; // x1
  __int64 v5; // x2
  EventServantRecoveryFatigueItem_c *v6; // x0
  System_String_o *OPEN_CLIP_NAME; // x20
  System_String_o *v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  System_String_o *v11; // x20
  UnityEngine_Object_o *simpleAnimation; // x21
  __int64 v13; // x1
  __int64 v14; // x2
  SimpleAnimation_o *Item; // x0
  SimpleAnimation_c *klass; // x8
  SimpleAnimation_o *v17; // x20
  __int64 v18; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v20; // x0
  UnityEngine_Object_o *animation; // x21
  __int64 v22; // x1
  __int64 v23; // x2
  UnityEngine_AnimationClip_o *Clip; // x20
  UnityEngine_Animation_o *v25; // x19
  System_String_o *v26; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  UnityEngine_AnimationClip_o *v29; // x20
  struct SimpleAnimation_o *v30; // x19
  System_String_o *name; // x0
  int32_t v32; // [xsp+Ch] [xbp-24h] BYREF

  v32 = no;
  if ( (byte_5932BC0 & 1) == 0 )
  {
    sub_21FFC50(&EventServantRecoveryFatigueItem_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&SimpleAnimation_State_TypeInfo);
    byte_5932BC0 = 1;
  }
  if ( EventServantRecoveryFatigueItem__IsAnimation(this, *(const MethodInfo **)&no) )
  {
    v6 = EventServantRecoveryFatigueItem_TypeInfo;
    if ( !*(&EventServantRecoveryFatigueItem_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(EventServantRecoveryFatigueItem_TypeInfo, v4, v5);
      v6 = EventServantRecoveryFatigueItem_TypeInfo;
    }
    OPEN_CLIP_NAME = v6->static_fields->OPEN_CLIP_NAME;
    v8 = System_Int32__ToString((int32_t)&v32, 0);
    v11 = System_String__Concat_75438412(OPEN_CLIP_NAME, v8, 0);
    simpleAnimation = (UnityEngine_Object_o *)this->fields.simpleAnimation;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
    if ( UnityEngine_Object__op_Inequality(simpleAnimation, 0, 0) )
    {
      Item = this->fields.simpleAnimation;
      if ( !Item )
        goto LABEL_38;
      Item = (SimpleAnimation_o *)SimpleAnimation__get_Item(Item, v11, 0);
      if ( !Item )
        goto LABEL_38;
      klass = Item->klass;
      v17 = Item;
      v18 = *(unsigned __int16 *)&Item->klass->_2.rank;
      if ( *(_WORD *)&Item->klass->_2.rank )
      {
        p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v18;
          p_offset += 2;
          if ( !v18 )
            goto LABEL_15;
        }
        v20 = (__int64)(&klass[1]._1.this_arg + *(_DWORD *)p_offset);
      }
      else
      {
LABEL_15:
        v20 = sub_2237E2C(Item, SimpleAnimation_State_TypeInfo, 14);
      }
      v29 = (UnityEngine_AnimationClip_o *)(*(__int64 (__fastcall **)(SimpleAnimation_o *, _QWORD))v20)(
                                             v17,
                                             *(_QWORD *)(v20 + 8));
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27, v28);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v29, 0, 0) )
      {
        Item = this->fields.simpleAnimation;
        if ( Item )
        {
          SimpleAnimation__set_clip(Item, v29, 0);
          Item = this->fields.simpleAnimation;
          if ( Item )
          {
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Item, 1, 0);
            v30 = this->fields.simpleAnimation;
            if ( v30 )
            {
              Item = (SimpleAnimation_o *)v30->fields.m_Clip;
              if ( Item )
              {
                name = UnityEngine_Object__get_name((UnityEngine_Object_o *)Item, 0);
                SimpleAnimation__Play_78338864(v30, name, 0);
                return;
              }
            }
          }
        }
LABEL_38:
        sub_21FFECC(Item, v13);
      }
    }
    else
    {
      animation = (UnityEngine_Object_o *)this->fields.animation;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v14);
      if ( UnityEngine_Object__op_Inequality(animation, 0, 0) )
      {
        Item = (SimpleAnimation_o *)this->fields.animation;
        if ( !Item )
          goto LABEL_38;
        Clip = UnityEngine_Animation__GetClip((UnityEngine_Animation_o *)Item, v11, 0);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22, v23);
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
              v25 = this->fields.animation;
              if ( v25 )
              {
                Item = (SimpleAnimation_o *)UnityEngine_Animation__get_clip(v25, 0);
                if ( Item )
                {
                  v26 = UnityEngine_Object__get_name((UnityEngine_Object_o *)Item, 0);
                  UnityEngine_Animation__Play_82865240(v25, v26, 0);
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
void EventServantRecoveryFatigueItem__SetServantInfo(
        EventServantRecoveryFatigueItem_o *this,
        UserServantEntity_o *userServantEntity,
        int32_t eventId,
        int32_t index,
        System_Action_int__o *callback,
        const MethodInfo *method)
{
  bool v6; // w6
  bool v7; // w7
  struct UserServantEntity_o **p_userServantEntity; // x24
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  DataManager_o *Instance; // x0
  __int64 v21; // x1
  struct EventFatigueRecoveryEntity_o *EntityDefinitely; // x0
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  IconLabelInfo_o *v29; // x21
  int32_t lv; // w25
  __int64 v31; // x2
  struct UserServantEntity_o *v32; // x8
  UserEventServantFatigueMaster_o *v33; // x24
  __int64 v34; // x25
  __int64 v35; // x26
  __int64 v36; // x2
  int64_t Time; // x0
  __int64 v38; // x1
  __int64 v39; // x2
  int64_t v40; // x22
  LocalizationManager_c *v41; // x0
  System_String_o *RestTime4; // x23
  __int64 v43; // x2
  UILabel_o *fatigueRecoveryTimeLabel; // x22
  __int64 v45; // x1
  __int64 v46; // x2
  UnityEngine_Object_o *v47; // x20
  __int64 v48; // x2
  bool v49; // w1
  UISprite_o *emptySprite; // x20
  EventServantRecoveryFatigueItem_c *v51; // x0
  System_String_o *EMPTY_BG_NAME; // x21
  __int64 v53; // x1
  __int64 v54; // x2
  UnityEngine_Object_o *v55; // x20
  System_String_o *v56; // x0
  __int64 v57; // x1
  __int64 v58; // x2
  UnityEngine_Object_o *frameSprite; // x20
  __int64 v60; // x1
  __int64 v61; // x2
  UnityEngine_Object_o *nameSprite; // x20
  int64_t recoverAt; // [xsp+18h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16

  if ( (byte_5932BBC & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_EventFatigueRecoveryMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
    sub_21FFC50(&EventRewardRootComponent_TypeInfo);
    sub_21FFC50(&EventServantRecoveryFatigueItem_TypeInfo);
    sub_21FFC50(&IconLabelInfo_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&StringLiteral_12156/*"SERVANT_RECOVERY_FATIGUE_REST_TIME"*/);
    byte_5932BBC = 1;
  }
  this->fields.isFatigueRecover = 0;
  recoverAt = 0;
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  this->fields.fatigueTime = -1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.userServantEntity,
    (int32_t)userServantEntity,
    *(System_String_o **)&eventId,
    *(System_String_o **)&index,
    (int32_t)callback,
    (int32_t)method,
    v6,
    v7);
  this->fields.index = index;
  if ( callback )
  {
    this->fields.clickCallback = callback;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.clickCallback,
      (int32_t)callback,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventFatigueRecoveryMaster___);
  if ( !Instance )
    goto LABEL_68;
  EntityDefinitely = EventFatigueRecoveryMaster__GetEntityDefinitely(
                       (EventFatigueRecoveryMaster_o *)Instance,
                       eventId,
                       this->fields.index,
                       0);
  this->fields.eventFatigueRecoveryEnt = EntityDefinitely;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.eventFatigueRecoveryEnt,
    (int32_t)EntityDefinitely,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  if ( userServantEntity )
  {
    v29 = (IconLabelInfo_o *)sub_21FFEBC(IconLabelInfo_TypeInfo);
    IconLabelInfo___ctor(v29, 0);
    lv = userServantEntity->fields.lv;
    Instance = (DataManager_o *)UserServantEntity__getLevelMax(userServantEntity, 0);
    if ( !v29 )
      goto LABEL_68;
    IconLabelInfo__Set_47932852(v29, 2, lv, (int32_t)Instance, 0, 0, 0, 0, 0, 0);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_68;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
    v32 = *p_userServantEntity;
    if ( !*p_userServantEntity )
      goto LABEL_68;
    v33 = (UserEventServantFatigueMaster_o *)Instance;
    v34 = *(_QWORD *)&v32->fields.svtId.fields.currentCryptoKey;
    v35 = *(_QWORD *)&v32->fields.svtId.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21, v31);
    *(_QWORD *)&v64.fields.currentCryptoKey = v34;
    *(_QWORD *)&v64.fields.fakeValue = v35;
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v64, 0);
    if ( !v33 )
      goto LABEL_68;
    if ( UserEventServantFatigueMaster__GetFatigueInfo(
           v33,
           &recoverAt,
           &this->fields.isFatigueRecover,
           eventId,
           (int32_t)Instance,
           0) )
    {
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v21, v36);
      Time = NetworkManager__getTime(0);
      v40 = recoverAt;
      this->fields.updateTime = Time;
      v41 = LocalizationManager_TypeInfo;
      this->fields.fatigueTime = v40;
      if ( !*(&v41->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(v41, v38, v39);
      RestTime4 = LocalizationManager__GetRestTime4(v40, -1, 0);
      Instance = (DataManager_o *)System_String__IsNullOrEmpty(RestTime4, 0);
      fatigueRecoveryTimeLabel = this->fields.fatigueRecoveryTimeLabel;
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v21, v43);
        v56 = LocalizationManager__Get((System_String_o *)StringLiteral_12156/*"SERVANT_RECOVERY_FATIGUE_REST_TIME"*/, 0);
        Instance = (DataManager_o *)System_String__Format(v56, (Il2CppObject *)RestTime4, 0);
        if ( !fatigueRecoveryTimeLabel )
          goto LABEL_68;
        UILabel__set_text(fatigueRecoveryTimeLabel, (System_String_o *)Instance, 0);
        Instance = (DataManager_o *)this->fields.fatigueRecoveryTimeLabel;
        if ( !Instance )
          goto LABEL_68;
        Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
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
    Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    if ( !Instance )
      goto LABEL_68;
    v49 = 0;
LABEL_51:
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v49, 0);
    Instance = (DataManager_o *)this->fields.servantFaceIcon;
    if ( !Instance )
      goto LABEL_68;
    ServantFaceIconComponent__Set_48018228((ServantFaceIconComponent_o *)Instance, userServantEntity, v29, 0, 1, 0);
    frameSprite = (UnityEngine_Object_o *)this->fields.frameSprite;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v57, v58);
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
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v60, v61);
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
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
        return;
      }
    }
LABEL_68:
    sub_21FFECC(Instance, v21);
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
  v47 = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v45, v46);
  if ( UnityEngine_Object__op_Inequality(v47, 0, 0) )
  {
    Instance = (DataManager_o *)this->fields.frameSprite;
    if ( !Instance )
      goto LABEL_68;
  }
  else
  {
    emptySprite = this->fields.emptySprite;
    v51 = EventServantRecoveryFatigueItem_TypeInfo;
    if ( !*(&EventServantRecoveryFatigueItem_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(EventServantRecoveryFatigueItem_TypeInfo, v21, v48);
      v51 = EventServantRecoveryFatigueItem_TypeInfo;
    }
    EMPTY_BG_NAME = v51->static_fields->EMPTY_BG_NAME;
    if ( !*(&EventRewardRootComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo, v21, v48);
    EventRewardRootComponent__setRewardInfoImg(emptySprite, EMPTY_BG_NAME, 0);
    Instance = (DataManager_o *)this->fields.emptySprite;
    if ( !Instance )
      goto LABEL_68;
    Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    if ( !Instance )
      goto LABEL_68;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  v55 = (UnityEngine_Object_o *)this->fields.nameSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v53, v54);
  if ( UnityEngine_Object__op_Inequality(v55, 0, 0) )
  {
    Instance = (DataManager_o *)this->fields.nameSprite;
    if ( !Instance )
      goto LABEL_68;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  }
}


void EventServantRecoveryFatigueItem__Update(EventServantRecoveryFatigueItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int64_t Time; // x0
  const MethodInfo *v5; // x1

  if ( (byte_5932BBA & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5932BBA = 1;
  }
  if ( (this->fields.updateTime & 0x8000000000000000LL) == 0 && this->fields.userServantEntity )
  {
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method, v2);
    Time = NetworkManager__getTime(0);
    if ( this->fields.updateTime != Time )
    {
      this->fields.updateTime = Time;
      EventServantRecoveryFatigueItem__UpdateDisp(this, v5);
    }
  }
}


void EventServantRecoveryFatigueItem__UpdateDisp(EventServantRecoveryFatigueItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int64_t fatigueTime; // x20
  System_String_o *RestTime4; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Component_o *fatigueRecoveryTimeLabel; // x0
  UILabel_o *v9; // x19
  System_String_o *v10; // x0

  if ( (byte_5932BBD & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_12156/*"SERVANT_RECOVERY_FATIGUE_REST_TIME"*/);
    byte_5932BBD = 1;
  }
  fatigueTime = this->fields.fatigueTime;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
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
    sub_21FFECC(fatigueRecoveryTimeLabel, v6);
  }
  v9 = this->fields.fatigueRecoveryTimeLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6, v7);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_12156/*"SERVANT_RECOVERY_FATIGUE_REST_TIME"*/, 0);
  fatigueRecoveryTimeLabel = (UnityEngine_Component_o *)System_String__Format(v10, (Il2CppObject *)RestTime4, 0);
  if ( !v9 )
    goto LABEL_13;
  UILabel__set_text(v9, (System_String_o *)fatigueRecoveryTimeLabel, 0);
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
    sub_21FFECC(this, method);
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
    sub_21FFECC(this, method);
  return eventFatigueRecoveryEnt->fields.targetIndividuality;
}


System_String_array *EventServantRecoveryFatigueItem__get_IndividualityName(
        EventServantRecoveryFatigueItem_o *this,
        const MethodInfo *method)
{
  struct EventFatigueRecoveryEntity_o *eventFatigueRecoveryEnt; // x8

  eventFatigueRecoveryEnt = this->fields.eventFatigueRecoveryEnt;
  if ( !eventFatigueRecoveryEnt )
    sub_21FFECC(this, method);
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
    sub_21FFECC(this, method);
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