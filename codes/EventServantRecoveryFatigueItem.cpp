void __fastcall EventServantRecoveryFatigueItem___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v11; // x1
  struct EventServantRecoveryFatigueItem_StaticFields *v12; // x0
  System_Int32_array **v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_418A9DD & 1) == 0 )
  {
    sub_B2C35C(&EventServantRecoveryFatigueItem_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_16539/*"available_0"*/, v8);
    sub_B2C35C(&StringLiteral_18571/*"event_recvoer_servant_bg02"*/, v9);
    byte_418A9DD = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventServantRecoveryFatigueItem_TypeInfo->static_fields;
  v11 = (System_Int32_array **)StringLiteral_18571/*"event_recvoer_servant_bg02"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_18571/*"event_recvoer_servant_bg02"*/;
  sub_B2C2F8(static_fields, v11, v2, v3, v4, v5, v6, v7);
  v12 = EventServantRecoveryFatigueItem_TypeInfo->static_fields;
  v13 = (System_Int32_array **)StringLiteral_16539/*"available_0"*/;
  v12->OPEN_CLIP_NAME = (struct System_String_o *)StringLiteral_16539/*"available_0"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v12->OPEN_CLIP_NAME, v13, v14, v15, v16, v17, v18, v19);
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

  if ( (byte_418A9D7 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418A9D7 = 1;
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
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.userServantEntity, 0LL, v4, v5, v6, v7, v8, v9);
  this->fields.isFatigueRecover = 0;
  this->fields.index = -1;
  this->fields.fatigueTime = -1LL;
  this->fields.updateTime = -1LL;
  this->fields.clickCallback = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.clickCallback, 0LL, v10, v11, v12, v13, v14, v15);
  this->fields.eventFatigueRecoveryEnt = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.eventFatigueRecoveryEnt, 0LL, v16, v17, v18, v19, v20, v21);
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
    sub_B2C434(servantFaceIcon, method);
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

  if ( (byte_418A9DB & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418A9DB = 1;
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
  __int64 v4; // x1
  System_Action_int__o *clickCallback; // x0

  if ( (byte_418A9DA & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_int__Invoke__, method);
    sub_B2C35C(&SoundManager_TypeInfo, v3);
    byte_418A9DA = 1;
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
      sub_B2C434(0LL, v4);
    System_Action_int___Invoke(
      clickCallback,
      this->fields.index,
      (const MethodInfo_24BA55C *)Method_System_Action_int__Invoke__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventServantRecoveryFatigueItem__SetAnimationPlay(
        EventServantRecoveryFatigueItem_o *this,
        int32_t no,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  EventServantRecoveryFatigueItem_c *v6; // x0
  System_String_o *OPEN_CLIP_NAME; // x20
  System_String_o *v8; // x0
  System_String_o *v9; // x0
  UnityEngine_Object_o *simpleAnimation; // x21
  System_String_o *v11; // x20
  __int64 v12; // x1
  SimpleAnimation_o *Item; // x0
  __int64 v14; // x3
  SimpleAnimation_c *klass; // x8
  SimpleAnimation_o *v16; // x20
  unsigned __int64 v17; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v19; // x0
  UnityEngine_Object_o *animation; // x21
  UnityEngine_AnimationClip_o *Clip; // x20
  UnityEngine_Animation_o *v22; // x19
  System_String_o *v23; // x0
  UnityEngine_AnimationClip_o *v24; // x20
  struct SimpleAnimation_o *v25; // x19
  System_String_o *name; // x0
  int32_t v27; // [xsp+Ch] [xbp-24h] BYREF

  v27 = no;
  if ( (byte_418A9DC & 1) == 0 )
  {
    sub_B2C35C(&EventServantRecoveryFatigueItem_TypeInfo, *(_QWORD *)&no);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    sub_B2C35C(&SimpleAnimation_State_TypeInfo, v5);
    byte_418A9DC = 1;
  }
  if ( EventServantRecoveryFatigueItem__IsAnimation(this, *(const MethodInfo **)&no) )
  {
    v6 = EventServantRecoveryFatigueItem_TypeInfo;
    if ( (BYTE3(EventServantRecoveryFatigueItem_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventServantRecoveryFatigueItem_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventServantRecoveryFatigueItem_TypeInfo);
      v6 = EventServantRecoveryFatigueItem_TypeInfo;
    }
    OPEN_CLIP_NAME = v6->static_fields->OPEN_CLIP_NAME;
    v8 = System_Int32__ToString((int32_t)&v27, 0LL);
    v9 = System_String__Concat_44305532(OPEN_CLIP_NAME, v8, 0LL);
    simpleAnimation = (UnityEngine_Object_o *)this->fields.simpleAnimation;
    v11 = v9;
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
      Item = (SimpleAnimation_o *)SimpleAnimation__get_Item(Item, v11, 0LL);
      if ( !Item )
        goto LABEL_43;
      klass = Item->klass;
      v16 = Item;
      if ( *(_WORD *)&Item->klass->_2.bitflags1 )
      {
        v17 = 0LL;
        p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
        {
          ++v17;
          p_offset += 2;
          if ( v17 >= *(unsigned __int16 *)&Item->klass->_2.bitflags1 )
            goto LABEL_17;
        }
        v19 = (__int64)(&klass[1]._1.typeMetadataHandle + 2 * *(_DWORD *)p_offset);
      }
      else
      {
LABEL_17:
        v19 = sub_AC5258(Item, SimpleAnimation_State_TypeInfo, 14LL, v14);
      }
      v24 = (UnityEngine_AnimationClip_o *)(*(__int64 (__fastcall **)(SimpleAnimation_o *, _QWORD))v19)(
                                             v16,
                                             *(_QWORD *)(v19 + 8));
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v24, 0LL, 0LL) )
      {
        Item = this->fields.simpleAnimation;
        if ( Item )
        {
          SimpleAnimation__set_clip(Item, v24, 0LL);
          Item = this->fields.simpleAnimation;
          if ( Item )
          {
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Item, 1, 0LL);
            v25 = this->fields.simpleAnimation;
            if ( v25 )
            {
              Item = (SimpleAnimation_o *)v25[1].monitor;
              if ( Item )
              {
                name = UnityEngine_Object__get_name((UnityEngine_Object_o *)Item, 0LL);
                SimpleAnimation__Play_16486620(v25, name, 0LL);
                return;
              }
            }
          }
        }
LABEL_43:
        sub_B2C434(Item, v12);
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
        Clip = UnityEngine_Animation__GetClip((UnityEngine_Animation_o *)Item, v11, 0LL);
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
              v22 = this->fields.animation;
              if ( v22 )
              {
                Item = (SimpleAnimation_o *)UnityEngine_Animation__get_clip(v22, 0LL);
                if ( Item )
                {
                  v23 = UnityEngine_Object__get_name((UnityEngine_Object_o *)Item, 0LL);
                  UnityEngine_Animation__Play_50201580(v22, v23, 0LL);
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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  struct UserServantEntity_o **p_userServantEntity; // x24
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  DataManager_o *Instance; // x0
  __int64 v31; // x1
  struct EventFatigueRecoveryEntity_o *EntityDefinitely; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  IconLabelInfo_o *v39; // x21
  int32_t lv; // w25
  struct UserServantEntity_o *v41; // x8
  UserEventServantFatigueMaster_o *v42; // x24
  __int64 v43; // x25
  __int64 v44; // x26
  int64_t v45; // x22
  System_String_o *RestTime4; // x23
  UILabel_o *fatigueRecoveryTimeLabel; // x22
  UnityEngine_Object_o *v48; // x20
  bool v49; // w1
  UISprite_o *emptySprite; // x20
  EventServantRecoveryFatigueItem_c *v51; // x0
  System_String_o *EMPTY_BG_NAME; // x21
  UnityEngine_Object_o *v53; // x20
  System_String_o *v54; // x0
  UnityEngine_Object_o *frameSprite; // x20
  UnityEngine_Object_o *nameSprite; // x20
  int64_t recoverAt; // [xsp+8h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v58; // 0:x0.16

  if ( (byte_418A9D8 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventFatigueRecoveryMaster___, userServantEntity);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___, v13);
    sub_B2C35C(&EventRewardRootComponent_TypeInfo, v14);
    sub_B2C35C(&EventServantRecoveryFatigueItem_TypeInfo, v15);
    sub_B2C35C(&IconLabelInfo_TypeInfo, v16);
    sub_B2C35C(&LocalizationManager_TypeInfo, v17);
    sub_B2C35C(&NetworkManager_TypeInfo, v18);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v19);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_B2C35C(&StringLiteral_11762/*"SERVANT_RECOVERY_FATIGUE_REST_TIME"*/, v22);
    byte_418A9D8 = 1;
  }
  recoverAt = 0LL;
  this->fields.isFatigueRecover = 0;
  this->fields.fatigueTime = -1LL;
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_B2C2F8(
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
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.clickCallback,
      (System_Int32_array **)callback,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_78;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventFatigueRecoveryMaster___);
  if ( !Instance )
    goto LABEL_78;
  EntityDefinitely = EventFatigueRecoveryMaster__GetEntityDefinitely(
                       (EventFatigueRecoveryMaster_o *)Instance,
                       eventId,
                       this->fields.index,
                       0LL);
  this->fields.eventFatigueRecoveryEnt = EntityDefinitely;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.eventFatigueRecoveryEnt,
    (System_Int32_array **)EntityDefinitely,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  if ( userServantEntity )
  {
    v39 = (IconLabelInfo_o *)sub_B2C42C(IconLabelInfo_TypeInfo);
    IconLabelInfo___ctor(v39, 0LL);
    lv = userServantEntity->fields.lv;
    Instance = (DataManager_o *)UserServantEntity__getLevelMax(userServantEntity, 0LL);
    if ( !v39 )
      goto LABEL_78;
    IconLabelInfo__Set_27362128(v39, 2, lv, (int32_t)Instance, 0, 0, 0, 0, 0LL);
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_78;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
    v41 = *p_userServantEntity;
    if ( !*p_userServantEntity )
      goto LABEL_78;
    v42 = (UserEventServantFatigueMaster_o *)Instance;
    v44 = *(_QWORD *)&v41->fields.svtId.fields.currentCryptoKey;
    v43 = *(_QWORD *)&v41->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v58.fields.currentCryptoKey = v44;
    *(_QWORD *)&v58.fields.fakeValue = v43;
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v58, 0LL);
    if ( !v42 )
      goto LABEL_78;
    if ( UserEventServantFatigueMaster__GetFatigueInfo(
           v42,
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
      v45 = recoverAt;
      this->fields.fatigueTime = recoverAt;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      RestTime4 = LocalizationManager__GetRestTime4(v45, -1LL, 0LL);
      Instance = (DataManager_o *)System_String__IsNullOrEmpty(RestTime4, 0LL);
      fatigueRecoveryTimeLabel = this->fields.fatigueRecoveryTimeLabel;
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v54 = LocalizationManager__Get((System_String_o *)StringLiteral_11762/*"SERVANT_RECOVERY_FATIGUE_REST_TIME"*/, 0LL);
        Instance = (DataManager_o *)System_String__Format(v54, (Il2CppObject *)RestTime4, 0LL);
        if ( !fatigueRecoveryTimeLabel )
          goto LABEL_78;
        UILabel__set_text(fatigueRecoveryTimeLabel, (System_String_o *)Instance, 0LL);
        Instance = (DataManager_o *)this->fields.fatigueRecoveryTimeLabel;
        if ( !Instance )
          goto LABEL_78;
        Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_78;
        v49 = 1;
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
    v49 = 0;
LABEL_59:
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v49, 0LL);
    Instance = (DataManager_o *)this->fields.servantFaceIcon;
    if ( !Instance )
      goto LABEL_78;
    ServantFaceIconComponent__Set_30719352((ServantFaceIconComponent_o *)Instance, userServantEntity, v39, 0LL, 0LL);
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
    sub_B2C434(Instance, v31);
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
  v48 = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v48, 0LL, 0LL) )
  {
    Instance = (DataManager_o *)this->fields.frameSprite;
    if ( !Instance )
      goto LABEL_78;
  }
  else
  {
    emptySprite = this->fields.emptySprite;
    v51 = EventServantRecoveryFatigueItem_TypeInfo;
    if ( (BYTE3(EventServantRecoveryFatigueItem_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventServantRecoveryFatigueItem_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventServantRecoveryFatigueItem_TypeInfo);
      v51 = EventServantRecoveryFatigueItem_TypeInfo;
    }
    EMPTY_BG_NAME = v51->static_fields->EMPTY_BG_NAME;
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
  v53 = (UnityEngine_Object_o *)this->fields.nameSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v53, 0LL, 0LL) )
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

  if ( (byte_418A9D6 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    byte_418A9D6 = 1;
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
  __int64 v3; // x1
  int64_t fatigueTime; // x20
  System_String_o *RestTime4; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *fatigueRecoveryTimeLabel; // x0
  UILabel_o *v8; // x19
  System_String_o *v9; // x0

  if ( (byte_418A9D9 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_11762/*"SERVANT_RECOVERY_FATIGUE_REST_TIME"*/, v3);
    byte_418A9D9 = 1;
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
    sub_B2C434(fatigueRecoveryTimeLabel, v6);
  }
  v8 = this->fields.fatigueRecoveryTimeLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_11762/*"SERVANT_RECOVERY_FATIGUE_REST_TIME"*/, 0LL);
  fatigueRecoveryTimeLabel = (UnityEngine_Component_o *)System_String__Format(v9, (Il2CppObject *)RestTime4, 0LL);
  if ( !v8 )
    goto LABEL_15;
  UILabel__set_text(v8, (System_String_o *)fatigueRecoveryTimeLabel, 0LL);
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
    sub_B2C434(this, method);
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
    sub_B2C434(this, method);
  return eventFatigueRecoveryEnt->fields.targetIndividuality;
}


System_String_array *__fastcall EventServantRecoveryFatigueItem__get_IndividualityName(
        EventServantRecoveryFatigueItem_o *this,
        const MethodInfo *method)
{
  struct EventFatigueRecoveryEntity_o *eventFatigueRecoveryEnt; // x8

  eventFatigueRecoveryEnt = this->fields.eventFatigueRecoveryEnt;
  if ( !eventFatigueRecoveryEnt )
    sub_B2C434(this, method);
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
    sub_B2C434(this, method);
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