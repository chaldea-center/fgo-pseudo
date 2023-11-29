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

  if ( (byte_40FD1CC & 1) == 0 )
  {
    sub_B16FFC(&EventServantRecoveryFatigueItem_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_16475, v8);
    sub_B16FFC(&StringLiteral_18502, v9);
    byte_40FD1CC = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventServantRecoveryFatigueItem_TypeInfo->static_fields;
  v11 = (System_Int32_array **)StringLiteral_18502;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_18502;
  sub_B16F98(static_fields, v11, v2, v3, v4, v5, v6, v7);
  v12 = EventServantRecoveryFatigueItem_TypeInfo->static_fields;
  v13 = (System_Int32_array **)StringLiteral_16475;
  v12->OPEN_CLIP_NAME = (struct System_String_o *)StringLiteral_16475;
  sub_B16F98((BattleServantConfConponent_o *)&v12->OPEN_CLIP_NAME, v13, v14, v15, v16, v17, v18, v19);
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
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *emptySprite; // x0
  UnityEngine_GameObject_o *v6; // x0
  UnityEngine_Component_o *fatigueRecoveryTimeLabel; // x0
  UnityEngine_GameObject_o *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  UnityEngine_Object_o *nameSprite; // x20
  UnityEngine_GameObject_o *v28; // x0
  UnityEngine_Object_o *frameSprite; // x20
  UnityEngine_GameObject_o *v30; // x0
  UnityEngine_Object_o *simpleAnimation; // x20
  UnityEngine_Behaviour_o *v32; // x0
  UnityEngine_Object_o *animation; // x20

  if ( (byte_40FD1C6 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FD1C6 = 1;
  }
  servantFaceIcon = (UnityEngine_Component_o *)this->fields.servantFaceIcon;
  if ( !servantFaceIcon )
    goto LABEL_32;
  gameObject = UnityEngine_Component__get_gameObject(servantFaceIcon, 0LL);
  if ( !gameObject )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  emptySprite = (UnityEngine_Component_o *)this->fields.emptySprite;
  if ( !emptySprite )
    goto LABEL_32;
  v6 = UnityEngine_Component__get_gameObject(emptySprite, 0LL);
  if ( !v6 )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive(v6, 0, 0LL);
  fatigueRecoveryTimeLabel = (UnityEngine_Component_o *)this->fields.fatigueRecoveryTimeLabel;
  if ( !fatigueRecoveryTimeLabel )
    goto LABEL_32;
  v8 = UnityEngine_Component__get_gameObject(fatigueRecoveryTimeLabel, 0LL);
  if ( !v8 )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive(v8, 0, 0LL);
  this->fields.userServantEntity = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.userServantEntity, 0LL, v9, v10, v11, v12, v13, v14);
  this->fields.isFatigueRecover = 0;
  this->fields.index = -1;
  this->fields.fatigueTime = -1LL;
  this->fields.updateTime = -1LL;
  this->fields.clickCallback = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.clickCallback, 0LL, v15, v16, v17, v18, v19, v20);
  this->fields.eventFatigueRecoveryEnt = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.eventFatigueRecoveryEnt, 0LL, v21, v22, v23, v24, v25, v26);
  nameSprite = (UnityEngine_Object_o *)this->fields.nameSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(nameSprite, 0LL, 0LL) )
  {
    v28 = this->fields.nameSprite;
    if ( !v28 )
      goto LABEL_32;
    UnityEngine_GameObject__SetActive(v28, 0, 0LL);
  }
  frameSprite = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(frameSprite, 0LL, 0LL) )
  {
    v30 = this->fields.frameSprite;
    if ( !v30 )
      goto LABEL_32;
    UnityEngine_GameObject__SetActive(v30, 0, 0LL);
  }
  simpleAnimation = (UnityEngine_Object_o *)this->fields.simpleAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(simpleAnimation, 0LL, 0LL) )
  {
    v32 = (UnityEngine_Behaviour_o *)this->fields.simpleAnimation;
    if ( v32 )
    {
LABEL_26:
      UnityEngine_Behaviour__set_enabled(v32, 0, 0LL);
      return;
    }
LABEL_32:
    sub_B170D4();
  }
  animation = (UnityEngine_Object_o *)this->fields.animation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(animation, 0LL, 0LL) )
  {
    v32 = (UnityEngine_Behaviour_o *)this->fields.animation;
    if ( v32 )
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

  if ( (byte_40FD1CA & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FD1CA = 1;
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

  if ( (byte_40FD1C9 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_int__Invoke__, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    byte_40FD1C9 = 1;
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
      sub_B170D4();
    System_Action_int___Invoke(
      clickCallback,
      this->fields.index,
      (const MethodInfo_24B5D94 *)Method_System_Action_int__Invoke__);
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
  SimpleAnimation_o *v12; // x0
  SimpleAnimation_State_o *Item; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v15; // x20
  unsigned __int64 v16; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  UnityEngine_Object_o *animation; // x21
  UnityEngine_Animation_o *v20; // x0
  UnityEngine_AnimationClip_o *Clip; // x20
  UnityEngine_Animation_o *v22; // x0
  UnityEngine_Behaviour_o *v23; // x0
  UnityEngine_Animation_o *v24; // x19
  UnityEngine_Object_o *v25; // x0
  System_String_o *v26; // x0
  UnityEngine_AnimationClip_o *v27; // x20
  SimpleAnimation_o *v28; // x0
  UnityEngine_Behaviour_o *v29; // x0
  struct SimpleAnimation_o *v30; // x19
  UnityEngine_Object_o *monitor; // x0
  System_String_o *name; // x0
  int32_t v33; // [xsp+Ch] [xbp-24h] BYREF

  v33 = no;
  if ( (byte_40FD1CB & 1) == 0 )
  {
    sub_B16FFC(&EventServantRecoveryFatigueItem_TypeInfo, *(_QWORD *)&no);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    sub_B16FFC(&SimpleAnimation_State_TypeInfo, v5);
    byte_40FD1CB = 1;
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
    v8 = System_Int32__ToString((int32_t)&v33, 0LL);
    v9 = System_String__Concat_43743732(OPEN_CLIP_NAME, v8, 0LL);
    simpleAnimation = (UnityEngine_Object_o *)this->fields.simpleAnimation;
    v11 = v9;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(simpleAnimation, 0LL, 0LL) )
    {
      v12 = this->fields.simpleAnimation;
      if ( !v12 )
        goto LABEL_43;
      Item = SimpleAnimation__get_Item(v12, v11, 0LL);
      if ( !Item )
        goto LABEL_43;
      klass = Item->klass;
      v15 = Item;
      if ( *(_WORD *)&Item->klass->_2.bitflags1 )
      {
        v16 = 0LL;
        p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
        {
          ++v16;
          p_offset += 2;
          if ( v16 >= *(unsigned __int16 *)&Item->klass->_2.bitflags1 )
            goto LABEL_17;
        }
        p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 14].method;
      }
      else
      {
LABEL_17:
        p_method = sub_AAFEF8(Item, SimpleAnimation_State_TypeInfo, 14LL);
      }
      v27 = (UnityEngine_AnimationClip_o *)(*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))p_method)(
                                             v15,
                                             *(_QWORD *)(p_method + 8));
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v27, 0LL, 0LL) )
      {
        v28 = this->fields.simpleAnimation;
        if ( v28 )
        {
          SimpleAnimation__set_clip(v28, v27, 0LL);
          v29 = (UnityEngine_Behaviour_o *)this->fields.simpleAnimation;
          if ( v29 )
          {
            UnityEngine_Behaviour__set_enabled(v29, 1, 0LL);
            v30 = this->fields.simpleAnimation;
            if ( v30 )
            {
              monitor = (UnityEngine_Object_o *)v30[1].monitor;
              if ( monitor )
              {
                name = UnityEngine_Object__get_name(monitor, 0LL);
                SimpleAnimation__Play_16380456(v30, name, 0LL);
                return;
              }
            }
          }
        }
LABEL_43:
        sub_B170D4();
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
        v20 = this->fields.animation;
        if ( !v20 )
          goto LABEL_43;
        Clip = UnityEngine_Animation__GetClip(v20, v11, 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Clip, 0LL, 0LL) )
        {
          v22 = this->fields.animation;
          if ( v22 )
          {
            UnityEngine_Animation__set_clip(v22, Clip, 0LL);
            v23 = (UnityEngine_Behaviour_o *)this->fields.animation;
            if ( v23 )
            {
              UnityEngine_Behaviour__set_enabled(v23, 1, 0LL);
              v24 = this->fields.animation;
              if ( v24 )
              {
                v25 = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(v24, 0LL);
                if ( v25 )
                {
                  v26 = UnityEngine_Object__get_name(v25, 0LL);
                  UnityEngine_Animation__Play_49744236(v24, v26, 0LL);
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
  WebViewManager_o *Instance; // x0
  EventFatigueRecoveryMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct EventFatigueRecoveryEntity_o *EntityDefinitely; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  IconLabelInfo_o *v43; // x21
  int32_t lv; // w25
  int32_t LevelMax; // w0
  WebViewManager_o *v46; // x0
  WarQuestSelectionMaster_o *v47; // x0
  struct UserServantEntity_o *v48; // x8
  UserEventServantFatigueMaster_o *v49; // x24
  __int64 v50; // x25
  __int64 v51; // x26
  int32_t v52; // w0
  int64_t v53; // x22
  System_String_o *RestTime4; // x23
  bool IsNullOrEmpty; // w0
  UILabel_o *fatigueRecoveryTimeLabel; // x22
  UnityEngine_Component_o *v57; // x0
  UnityEngine_Component_o *v58; // x0
  UnityEngine_GameObject_o *v59; // x0
  UnityEngine_Component_o *v60; // x0
  UnityEngine_GameObject_o *v61; // x0
  UnityEngine_Object_o *v62; // x20
  UnityEngine_GameObject_o *v63; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  bool v65; // w1
  UISprite_o *v66; // x20
  EventServantRecoveryFatigueItem_c *v67; // x0
  System_String_o *EMPTY_BG_NAME; // x21
  UnityEngine_Component_o *v69; // x0
  UnityEngine_Object_o *v70; // x20
  UnityEngine_GameObject_o *v71; // x0
  System_String_o *v72; // x0
  System_String_o *v73; // x0
  UnityEngine_Component_o *v74; // x0
  ServantFaceIconComponent_o *servantFaceIcon; // x0
  UnityEngine_Object_o *frameSprite; // x20
  UnityEngine_GameObject_o *v77; // x0
  UnityEngine_Component_o *emptySprite; // x0
  UnityEngine_Object_o *nameSprite; // x20
  UnityEngine_GameObject_o *v80; // x0
  UnityEngine_Component_o *v81; // x0
  int64_t recoverAt; // [xsp+8h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v83; // 0:x0.16

  if ( (byte_40FD1C7 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventFatigueRecoveryMaster___, userServantEntity);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___, v13);
    sub_B16FFC(&EventRewardRootComponent_TypeInfo, v14);
    sub_B16FFC(&EventServantRecoveryFatigueItem_TypeInfo, v15);
    sub_B16FFC(&IconLabelInfo_TypeInfo, v16);
    sub_B16FFC(&LocalizationManager_TypeInfo, v17);
    sub_B16FFC(&NetworkManager_TypeInfo, v18);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v19);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_B16FFC(&StringLiteral_11712, v22);
    byte_40FD1C7 = 1;
  }
  recoverAt = 0LL;
  this->fields.isFatigueRecover = 0;
  this->fields.fatigueTime = -1LL;
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_B16F98(
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
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.clickCallback,
      (System_Int32_array **)callback,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_78;
  MasterData_WarQuestSelectionMaster = (EventFatigueRecoveryMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                         (DataManager_o *)Instance,
                                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventFatigueRecoveryMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_78;
  EntityDefinitely = EventFatigueRecoveryMaster__GetEntityDefinitely(
                       MasterData_WarQuestSelectionMaster,
                       eventId,
                       this->fields.index,
                       0LL);
  this->fields.eventFatigueRecoveryEnt = EntityDefinitely;
  sub_B16F98(
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
    v43 = (IconLabelInfo_o *)sub_B170CC(IconLabelInfo_TypeInfo, v39, v40, v41, v42);
    IconLabelInfo___ctor(v43, 0LL);
    lv = userServantEntity->fields.lv;
    LevelMax = UserServantEntity__getLevelMax(userServantEntity, 0LL);
    if ( !v43 )
      goto LABEL_78;
    IconLabelInfo__Set_28888132(v43, 2, lv, LevelMax, 0, 0, 0, 0, 0LL);
    v46 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v46 )
      goto LABEL_78;
    v47 = DataManager__GetMasterData_WarQuestSelectionMaster_(
            (DataManager_o *)v46,
            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
    v48 = *p_userServantEntity;
    if ( !*p_userServantEntity )
      goto LABEL_78;
    v49 = (UserEventServantFatigueMaster_o *)v47;
    v51 = *(_QWORD *)&v48->fields.svtId.fields.currentCryptoKey;
    v50 = *(_QWORD *)&v48->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v83.fields.currentCryptoKey = v51;
    *(_QWORD *)&v83.fields.fakeValue = v50;
    v52 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v83, 0LL);
    if ( !v49 )
      goto LABEL_78;
    if ( UserEventServantFatigueMaster__GetFatigueInfo(
           v49,
           &recoverAt,
           &this->fields.isFatigueRecover,
           eventId,
           v52,
           0LL) )
    {
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      this->fields.updateTime = NetworkManager__getTime(0LL);
      v53 = recoverAt;
      this->fields.fatigueTime = recoverAt;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      RestTime4 = LocalizationManager__GetRestTime4(v53, -1LL, 0LL);
      IsNullOrEmpty = System_String__IsNullOrEmpty(RestTime4, 0LL);
      fatigueRecoveryTimeLabel = this->fields.fatigueRecoveryTimeLabel;
      if ( !IsNullOrEmpty )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v72 = LocalizationManager__Get((System_String_o *)StringLiteral_11712, 0LL);
        v73 = System_String__Format(v72, (Il2CppObject *)RestTime4, 0LL);
        if ( !fatigueRecoveryTimeLabel )
          goto LABEL_78;
        UILabel__set_text(fatigueRecoveryTimeLabel, v73, 0LL);
        v74 = (UnityEngine_Component_o *)this->fields.fatigueRecoveryTimeLabel;
        if ( !v74 )
          goto LABEL_78;
        gameObject = UnityEngine_Component__get_gameObject(v74, 0LL);
        if ( !gameObject )
          goto LABEL_78;
        v65 = 1;
        goto LABEL_59;
      }
      if ( !fatigueRecoveryTimeLabel )
        goto LABEL_78;
      v57 = (UnityEngine_Component_o *)this->fields.fatigueRecoveryTimeLabel;
    }
    else
    {
      v57 = (UnityEngine_Component_o *)this->fields.fatigueRecoveryTimeLabel;
      if ( !v57 )
        goto LABEL_78;
    }
    gameObject = UnityEngine_Component__get_gameObject(v57, 0LL);
    if ( !gameObject )
      goto LABEL_78;
    v65 = 0;
LABEL_59:
    UnityEngine_GameObject__SetActive(gameObject, v65, 0LL);
    servantFaceIcon = this->fields.servantFaceIcon;
    if ( !servantFaceIcon )
      goto LABEL_78;
    ServantFaceIconComponent__Set_30631556(servantFaceIcon, userServantEntity, v43, 0LL, 0LL);
    frameSprite = (UnityEngine_Object_o *)this->fields.frameSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(frameSprite, 0LL, 0LL) )
    {
      v77 = this->fields.frameSprite;
      if ( !v77 )
        goto LABEL_78;
    }
    else
    {
      emptySprite = (UnityEngine_Component_o *)this->fields.emptySprite;
      if ( !emptySprite )
        goto LABEL_78;
      v77 = UnityEngine_Component__get_gameObject(emptySprite, 0LL);
      if ( !v77 )
        goto LABEL_78;
    }
    UnityEngine_GameObject__SetActive(v77, 0, 0LL);
    nameSprite = (UnityEngine_Object_o *)this->fields.nameSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(nameSprite, 0LL, 0LL) )
    {
      v80 = this->fields.nameSprite;
      if ( !v80 )
        goto LABEL_78;
      UnityEngine_GameObject__SetActive(v80, 1, 0LL);
    }
    v81 = (UnityEngine_Component_o *)this->fields.servantFaceIcon;
    if ( v81 )
    {
      v71 = UnityEngine_Component__get_gameObject(v81, 0LL);
      if ( v71 )
      {
LABEL_76:
        UnityEngine_GameObject__SetActive(v71, 1, 0LL);
        return;
      }
    }
LABEL_78:
    sub_B170D4();
  }
  v58 = (UnityEngine_Component_o *)this->fields.servantFaceIcon;
  if ( !v58 )
    goto LABEL_78;
  v59 = UnityEngine_Component__get_gameObject(v58, 0LL);
  if ( !v59 )
    goto LABEL_78;
  UnityEngine_GameObject__SetActive(v59, 0, 0LL);
  v60 = (UnityEngine_Component_o *)this->fields.fatigueRecoveryTimeLabel;
  if ( !v60 )
    goto LABEL_78;
  v61 = UnityEngine_Component__get_gameObject(v60, 0LL);
  if ( !v61 )
    goto LABEL_78;
  UnityEngine_GameObject__SetActive(v61, 0, 0LL);
  v62 = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v62, 0LL, 0LL) )
  {
    v63 = this->fields.frameSprite;
    if ( !v63 )
      goto LABEL_78;
  }
  else
  {
    v66 = this->fields.emptySprite;
    v67 = EventServantRecoveryFatigueItem_TypeInfo;
    if ( (BYTE3(EventServantRecoveryFatigueItem_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventServantRecoveryFatigueItem_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventServantRecoveryFatigueItem_TypeInfo);
      v67 = EventServantRecoveryFatigueItem_TypeInfo;
    }
    EMPTY_BG_NAME = v67->static_fields->EMPTY_BG_NAME;
    if ( (BYTE3(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
    }
    EventRewardRootComponent__setRewardInfoImg(v66, EMPTY_BG_NAME, 0LL);
    v69 = (UnityEngine_Component_o *)this->fields.emptySprite;
    if ( !v69 )
      goto LABEL_78;
    v63 = UnityEngine_Component__get_gameObject(v69, 0LL);
    if ( !v63 )
      goto LABEL_78;
  }
  UnityEngine_GameObject__SetActive(v63, 1, 0LL);
  v70 = (UnityEngine_Object_o *)this->fields.nameSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v70, 0LL, 0LL) )
  {
    v71 = this->fields.nameSprite;
    if ( !v71 )
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

  if ( (byte_40FD1C5 & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, method);
    byte_40FD1C5 = 1;
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
  UnityEngine_Component_o *fatigueRecoveryTimeLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *v8; // x19
  System_String_o *v9; // x0
  System_String_o *v10; // x0

  if ( (byte_40FD1C8 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_11712, v3);
    byte_40FD1C8 = 1;
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
      gameObject = UnityEngine_Component__get_gameObject(fatigueRecoveryTimeLabel, 0LL);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
        return;
      }
    }
LABEL_15:
    sub_B170D4();
  }
  v8 = this->fields.fatigueRecoveryTimeLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_11712, 0LL);
  v10 = System_String__Format(v9, (Il2CppObject *)RestTime4, 0LL);
  if ( !v8 )
    goto LABEL_15;
  UILabel__set_text(v8, v10, 0LL);
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
    sub_B170D4();
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
    sub_B170D4();
  return eventFatigueRecoveryEnt->fields.targetIndividuality;
}


System_String_array *__fastcall EventServantRecoveryFatigueItem__get_IndividualityName(
        EventServantRecoveryFatigueItem_o *this,
        const MethodInfo *method)
{
  struct EventFatigueRecoveryEntity_o *eventFatigueRecoveryEnt; // x8

  eventFatigueRecoveryEnt = this->fields.eventFatigueRecoveryEnt;
  if ( !eventFatigueRecoveryEnt )
    sub_B170D4();
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
    sub_B170D4();
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