void __fastcall QuestRewardCostumeAction___ctor(QuestRewardCostumeAction_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall QuestRewardCostumeAction__Awake(QuestRewardCostumeAction_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  struct CStateManager_QuestRewardCostumeAction__o **p_mFSM; // x20
  CStateManager_QAASpotStateController_IMapSpot__o *v17; // x21
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct CStateManager_QuestRewardCostumeAction__o *mFSM; // x21
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  QuestRewardCostumeAction_StateNone_o *v29; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v30; // x21
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  QuestRewardCostumeAction_StatePlay_o *v35; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v36; // x21
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  QuestRewardCostumeAction_StateItemLabel_o *v41; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v42; // x20
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  QuestRewardCostumeAction_StateTouchWait_o *v47; // x21
  const MethodInfo *v48; // x2
  UnityEngine_Object_o *particleObj; // x21
  UnityEngine_Object_o *particlePrefab; // x21
  struct UnityEngine_GameObject_o *v51; // x21
  UnityEngine_GameObject_o *v52; // x21
  UnityEngine_UI_Dropdown_DropdownItem_o *ComponentInChildren_Dropdown_DropdownItem; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FD5E5 & 1) == 0 )
  {
    sub_B16FFC(&Method_CStateManager_QuestRewardCostumeAction___ctor__, method);
    sub_B16FFC(&Method_CStateManager_QuestRewardCostumeAction__add__, v6);
    sub_B16FFC(&CStateManager_QuestRewardCostumeAction__TypeInfo, v7);
    sub_B16FFC(&CTouch_TypeInfo, v8);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___, v9);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v10);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    sub_B16FFC(&QuestRewardCostumeAction_StateItemLabel_TypeInfo, v12);
    sub_B16FFC(&QuestRewardCostumeAction_StateNone_TypeInfo, v13);
    sub_B16FFC(&QuestRewardCostumeAction_StatePlay_TypeInfo, v14);
    sub_B16FFC(&QuestRewardCostumeAction_StateTouchWait_TypeInfo, v15);
    byte_40FD5E5 = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v17 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B170CC(
                                                                CStateManager_QuestRewardCostumeAction__TypeInfo,
                                                                method,
                                                                v2,
                                                                v3,
                                                                v4);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v17,
      (QAASpotStateController_IMapSpot_o *)this,
      4,
      (const MethodInfo_2907EF0 *)Method_CStateManager_QuestRewardCostumeAction___ctor__);
    this->fields.mFSM = (struct CStateManager_QuestRewardCostumeAction__o *)v17;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.mFSM,
      (System_Int32_array **)v17,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
    mFSM = this->fields.mFSM;
    v29 = (QuestRewardCostumeAction_StateNone_o *)sub_B170CC(
                                                    QuestRewardCostumeAction_StateNone_TypeInfo,
                                                    v25,
                                                    v26,
                                                    v27,
                                                    v28);
    QuestRewardCostumeAction_StateNone___ctor(v29, 0LL);
    if ( !mFSM )
      goto LABEL_28;
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      0,
      (IState_T__o *)v29,
      (const MethodInfo_2907FBC *)Method_CStateManager_QuestRewardCostumeAction__add__);
    v30 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v35 = (QuestRewardCostumeAction_StatePlay_o *)sub_B170CC(
                                                    QuestRewardCostumeAction_StatePlay_TypeInfo,
                                                    v31,
                                                    v32,
                                                    v33,
                                                    v34);
    QuestRewardCostumeAction_StatePlay___ctor(v35, 0LL);
    if ( !v30 )
      goto LABEL_28;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v30,
      1,
      (IState_T__o *)v35,
      (const MethodInfo_2907FBC *)Method_CStateManager_QuestRewardCostumeAction__add__);
    v36 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v41 = (QuestRewardCostumeAction_StateItemLabel_o *)sub_B170CC(
                                                         QuestRewardCostumeAction_StateItemLabel_TypeInfo,
                                                         v37,
                                                         v38,
                                                         v39,
                                                         v40);
    QuestRewardCostumeAction_StateItemLabel___ctor(v41, 0LL);
    if ( !v36 )
      goto LABEL_28;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v36,
      2,
      (IState_T__o *)v41,
      (const MethodInfo_2907FBC *)Method_CStateManager_QuestRewardCostumeAction__add__);
    v42 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v47 = (QuestRewardCostumeAction_StateTouchWait_o *)sub_B170CC(
                                                         QuestRewardCostumeAction_StateTouchWait_TypeInfo,
                                                         v43,
                                                         v44,
                                                         v45,
                                                         v46);
    QuestRewardCostumeAction_StateTouchWait___ctor(v47, 0LL);
    if ( !v42 )
      goto LABEL_28;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v42,
      3,
      (IState_T__o *)v47,
      (const MethodInfo_2907FBC *)Method_CStateManager_QuestRewardCostumeAction__add__);
    QuestRewardCostumeAction__SetState(this, 0, v48);
  }
  particleObj = (UnityEngine_Object_o *)this->fields.particleObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(particleObj, 0LL, 0LL) )
  {
    particlePrefab = (UnityEngine_Object_o *)this->fields.particlePrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(particlePrefab, 0LL, 0LL) )
    {
      v51 = this->fields.particlePrefab;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v52 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                          (UnityEngine_UI_Dropdown_DropdownItem_o *)v51,
                                          (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v52, 0LL, 0LL) )
      {
        GameObjectExtensions__SafeSetParent(v52, (UnityEngine_Component_o *)this, 0LL);
        zero = UnityEngine_Vector3__get_zero(0LL);
        GameObjectExtensions__SetLocalPosition(v52, zero, 0LL);
        if ( v52 )
        {
          ComponentInChildren_Dropdown_DropdownItem = UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                        v52,
                                                        (const MethodInfo_19D158C *)Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___);
          if ( ComponentInChildren_Dropdown_DropdownItem )
          {
            UIWidget__set_depth((UIWidget_o *)ComponentInChildren_Dropdown_DropdownItem, 0, 0LL);
            this->fields.particleObj = v52;
            sub_B16F98(
              (BattleServantConfConponent_o *)&this->fields.particleObj,
              (System_Int32_array **)v52,
              v54,
              v55,
              v56,
              v57,
              v58,
              v59);
            goto LABEL_24;
          }
        }
LABEL_28:
        sub_B170D4();
      }
    }
  }
LABEL_24:
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__init(0LL);
}


int32_t __fastcall QuestRewardCostumeAction__GetState(QuestRewardCostumeAction_o *this, const MethodInfo *method)
{
  struct CStateManager_QuestRewardCostumeAction__o *mFSM; // x8

  if ( (byte_40FD5E9 & 1) == 0 )
  {
    sub_B16FFC(&Method_CStateManager_QuestRewardCostumeAction__getState__, method);
    byte_40FD5E9 = 1;
  }
  mFSM = this->fields.mFSM;
  if ( !mFSM )
    sub_B170D4();
  return mFSM->fields.m_state;
}


void __fastcall QuestRewardCostumeAction__Play(
        QuestRewardCostumeAction_o *this,
        System_Action_o *endAct,
        float fadeInTime,
        const MethodInfo *method)
{
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *mSimpleAnimation; // x20
  struct SimpleAnimation_o *v19; // x20
  UnityEngine_Object_o *monitor; // x0
  System_String_o *name; // x0
  SimpleAnimation_State_o *Item; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v24; // x20
  unsigned __int64 v25; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  UnityEngine_Object_o *mAnimation; // x20
  UnityEngine_Animation_o *v29; // x20
  UnityEngine_Object_o *clip; // x0
  System_String_o *v31; // x0
  UnityEngine_AnimationState_o *v32; // x0
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v38; // x0
  System_Action_o *v39; // x21

  if ( (byte_40FD5E8 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, endAct);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v12);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v13);
    sub_B16FFC(&Method_QuestRewardCostumeAction__Play_b__14_0__, v14);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15);
    sub_B16FFC(&SimpleAnimation_State_TypeInfo, v16);
    byte_40FD5E8 = 1;
  }
  this->fields.mEndAct = endAct;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.mEndAct,
    (System_Int32_array **)endAct,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7,
    v8);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  mSimpleAnimation = (UnityEngine_Object_o *)this->fields.mSimpleAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(mSimpleAnimation, 0LL, 0LL) )
  {
    v19 = this->fields.mSimpleAnimation;
    if ( !v19 )
      goto LABEL_33;
    monitor = (UnityEngine_Object_o *)v19[1].monitor;
    if ( !monitor )
      goto LABEL_33;
    name = UnityEngine_Object__get_name(monitor, 0LL);
    Item = SimpleAnimation__get_Item(v19, name, 0LL);
    if ( !Item )
      goto LABEL_33;
    klass = Item->klass;
    v24 = Item;
    if ( *(_WORD *)&Item->klass->_2.bitflags1 )
    {
      v25 = 0LL;
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        ++v25;
        p_offset += 2;
        if ( v25 >= *(unsigned __int16 *)&Item->klass->_2.bitflags1 )
          goto LABEL_15;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 8].method;
    }
    else
    {
LABEL_15:
      p_method = sub_AAFEF8(Item, SimpleAnimation_State_TypeInfo, 8LL);
    }
    (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD, float))p_method)(v24, *(_QWORD *)(p_method + 8), 0.0);
  }
  else
  {
    mAnimation = (UnityEngine_Object_o *)this->fields.mAnimation;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(mAnimation, 0LL, 0LL) )
    {
      v29 = this->fields.mAnimation;
      if ( !v29 )
        goto LABEL_33;
      clip = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(this->fields.mAnimation, 0LL);
      if ( !clip )
        goto LABEL_33;
      v31 = UnityEngine_Object__get_name(clip, 0LL);
      v32 = UnityEngine_Animation__get_Item(v29, v31, 0LL);
      if ( !v32 )
        goto LABEL_33;
      UnityEngine_AnimationState__set_speed(v32, 0.0, 0LL);
    }
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( fadeInTime <= 0.0 )
  {
    v38 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v38 = AvalonSceneManager_TypeInfo;
    }
    fadeInTime = v38->static_fields->DEFAULT_FADE_TIME;
  }
  v39 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v33, v34, v35, v36);
  System_Action___ctor(v39, (Il2CppObject *)this, Method_QuestRewardCostumeAction__Play_b__14_0__, 0LL);
  if ( !Instance )
LABEL_33:
    sub_B170D4();
  CommonUI__maskFadein(Instance, fadeInTime, v39, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestRewardCostumeAction__SetState(
        QuestRewardCostumeAction_o *this,
        int32_t state,
        const MethodInfo *method)
{
  struct CStateManager_QuestRewardCostumeAction__o *mFSM; // x0

  if ( (byte_40FD5EA & 1) == 0 )
  {
    sub_B16FFC(&Method_CStateManager_QuestRewardCostumeAction__setState__, *(_QWORD *)&state);
    byte_40FD5EA = 1;
  }
  mFSM = this->fields.mFSM;
  if ( !mFSM )
    sub_B170D4();
  CStateManager_QAASpotStateController_IMapSpot___setState(
    (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
    state,
    (const MethodInfo_2908060 *)Method_CStateManager_QuestRewardCostumeAction__setState__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestRewardCostumeAction__Setup(
        QuestRewardCostumeAction_o *this,
        int32_t imgId,
        System_String_o *itmName,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  UnityEngine_Component_o *transform; // x0
  struct UnityEngine_Animation_o *ComponentInChildren_UIWidget; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  UnityEngine_Component_o *v23; // x0
  struct SimpleAnimation_o *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  UnityEngine_Component_o *v31; // x0
  UIWidget_o *v32; // x0
  UnityEngine_Component_o *mItemSp; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UIWidget_o *Component_UIWidget; // x0
  System_String_o *v36; // x0
  System_String_o *v37; // x0
  UnityEngine_GameObject_o *v38; // x0
  UnityEngine_Component_o *mItemLabel; // x0
  UnityEngine_GameObject_o *v40; // x0
  UnityEngine_Component_o **p_mScreenTouchInfo; // x20
  UnityEngine_Object_o *mScreenTouchInfo; // x21
  CommonUI_o *Instance; // x21
  UnityEngine_Transform_o *v44; // x0
  UnityEngine_GameObject_o *ScreeenTouchInfo; // x0
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  UnityEngine_GameObject_o *v53; // x0

  if ( (byte_40FD5E7 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentInChildren_Animation___, *(_QWORD *)&imgId);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___, v7);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___, v8);
    sub_B16FFC(&Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___, v9);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___, v10);
    sub_B16FFC(&LocalizationManager_TypeInfo, v11);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v12);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13);
    sub_B16FFC(&StringLiteral_10877/*"QUEST_CLEAR_COSTUME_GET"*/, v14);
    byte_40FD5E7 = 1;
  }
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_26;
  ComponentInChildren_UIWidget = (struct UnityEngine_Animation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                                     transform,
                                                                     (const MethodInfo_18BD4D4 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  this->fields.mAnimation = ComponentInChildren_UIWidget;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.mAnimation,
    (System_Int32_array **)ComponentInChildren_UIWidget,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  v23 = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v23 )
    goto LABEL_26;
  v24 = (struct SimpleAnimation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                      v23,
                                      (const MethodInfo_18BD4D4 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  this->fields.mSimpleAnimation = v24;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.mSimpleAnimation,
    (System_Int32_array **)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v31 )
    goto LABEL_26;
  v32 = UnityEngine_Component__GetComponentInChildren_UIWidget_(
          v31,
          (const MethodInfo_18BD4D4 *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
  if ( !v32 )
    goto LABEL_26;
  *(&v32->fields.mAnchorsCached + 5) = 1;
  mItemSp = (UnityEngine_Component_o *)this->fields.mItemSp;
  if ( !mItemSp )
    goto LABEL_26;
  gameObject = UnityEngine_Component__get_gameObject(mItemSp, 0LL);
  Component_UIWidget = GameObjectExtensions__SafeGetComponent_UIWidget_(
                         gameObject,
                         (const MethodInfo_19D2264 *)Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___);
  if ( !Component_UIWidget )
    goto LABEL_26;
  ItemIconComponent__SetItemImage((ItemIconComponent_o *)Component_UIWidget, imgId, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v36 = LocalizationManager__Get((System_String_o *)StringLiteral_10877/*"QUEST_CLEAR_COSTUME_GET"*/, 0LL);
  v37 = System_String__Format(v36, (Il2CppObject *)itmName, 0LL);
  if ( !this->fields.mItemLabel )
    goto LABEL_26;
  UILabel__set_text(this->fields.mItemLabel, v37, 0LL);
  v38 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v38 )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive(v38, 0, 0LL);
  mItemLabel = (UnityEngine_Component_o *)this->fields.mItemLabel;
  if ( !mItemLabel )
    goto LABEL_26;
  v40 = UnityEngine_Component__get_gameObject(mItemLabel, 0LL);
  if ( !v40 )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive(v40, 0, 0LL);
  p_mScreenTouchInfo = (UnityEngine_Component_o **)&this->fields.mScreenTouchInfo;
  mScreenTouchInfo = (UnityEngine_Object_o *)this->fields.mScreenTouchInfo;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(mScreenTouchInfo, 0LL, 0LL) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v44 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( Instance )
    {
      ScreeenTouchInfo = CommonUI__CreateScreeenTouchInfo(Instance, v44, 0, 0LL);
      if ( ScreeenTouchInfo )
      {
        Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                           ScreeenTouchInfo,
                                                           (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
        *p_mScreenTouchInfo = (UnityEngine_Component_o *)Component_srcLineSprite;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.mScreenTouchInfo,
          Component_srcLineSprite,
          v47,
          v48,
          v49,
          v50,
          v51,
          v52);
        goto LABEL_23;
      }
    }
LABEL_26:
    sub_B170D4();
  }
LABEL_23:
  if ( !*p_mScreenTouchInfo )
    goto LABEL_26;
  v53 = UnityEngine_Component__get_gameObject(*p_mScreenTouchInfo, 0LL);
  if ( !v53 )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive(v53, 0, 0LL);
}


void __fastcall QuestRewardCostumeAction__Update(QuestRewardCostumeAction_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct CStateManager_QuestRewardCostumeAction__o *mFSM; // x0

  if ( (byte_40FD5E6 & 1) == 0 )
  {
    sub_B16FFC(&Method_CStateManager_QuestRewardCostumeAction__update__, method);
    sub_B16FFC(&CTouch_TypeInfo, v3);
    byte_40FD5E6 = 1;
  }
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__process(0LL);
  mFSM = this->fields.mFSM;
  if ( mFSM )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      (const MethodInfo_2908038 *)Method_CStateManager_QuestRewardCostumeAction__update__);
}


void __fastcall QuestRewardCostumeAction___Play_b__14_0(QuestRewardCostumeAction_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  QuestRewardCostumeAction__SetState(this, 1, v2);
}


void __fastcall QuestRewardCostumeAction_StateItemLabel___ctor(
        QuestRewardCostumeAction_StateItemLabel_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestRewardCostumeAction_StateItemLabel__begin(
        QuestRewardCostumeAction_StateItemLabel_o *this,
        QuestRewardCostumeAction_o *that,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x19
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  __int64 v18; // x8
  UnityEngine_Component_o *v19; // x0
  System_Int32_array **gameObject; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  UnityEngine_GameObject_o *v27; // x0
  System_Int32_array **Component_UIWidget; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  float y; // s8
  float z; // s9
  ManagerConfig_c *v37; // x0
  int WIDTH; // w23
  MoveObject_o *v39; // x20
  float x; // s10
  float v41; // s11
  float v42; // s12
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  System_Action_o *v47; // x21
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  System_Action_o *v52; // x22
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v54; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v55; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v56; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_40FA321 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, that);
    sub_B16FFC(&Method_GameObjectExtensions_SafeGetComponent_MoveObject___, v6);
    sub_B16FFC(&ManagerConfig_TypeInfo, v7);
    sub_B16FFC(&Method_QuestRewardCostumeAction_StateItemLabel___c__DisplayClass1_0__begin_b__0__, v8);
    sub_B16FFC(&Method_QuestRewardCostumeAction_StateItemLabel___c__DisplayClass1_0__begin_b__1__, v9);
    sub_B16FFC(&QuestRewardCostumeAction_StateItemLabel___c__DisplayClass1_0_TypeInfo, v10);
    byte_40FA321 = 1;
  }
  v11 = sub_B170CC(QuestRewardCostumeAction_StateItemLabel___c__DisplayClass1_0_TypeInfo, that, method, v3, v4);
  QuestRewardCostumeAction_StateItemLabel___c__DisplayClass1_0___ctor(
    (QuestRewardCostumeAction_StateItemLabel___c__DisplayClass1_0_o *)v11,
    0LL);
  if ( !v11 )
    goto LABEL_12;
  *(_QWORD *)(v11 + 32) = that;
  sub_B16F98((BattleServantConfConponent_o *)(v11 + 32), (System_Int32_array **)that, v12, v13, v14, v15, v16, v17);
  v18 = *(_QWORD *)(v11 + 32);
  if ( !v18 )
    goto LABEL_12;
  v19 = *(UnityEngine_Component_o **)(v18 + 56);
  if ( !v19 )
    goto LABEL_12;
  gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject(v19, 0LL);
  *(_QWORD *)(v11 + 16) = gameObject;
  sub_B16F98((BattleServantConfConponent_o *)(v11 + 16), gameObject, v21, v22, v23, v24, v25, v26);
  v27 = *(UnityEngine_GameObject_o **)(v11 + 16);
  if ( !v27 )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(v27, 1, 0LL);
  Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                *(UnityEngine_GameObject_o **)(v11 + 16),
                                                (const MethodInfo_19D2264 *)Method_GameObjectExtensions_SafeGetComponent_MoveObject___);
  *(_QWORD *)(v11 + 24) = Component_UIWidget;
  sub_B16F98((BattleServantConfConponent_o *)(v11 + 24), Component_UIWidget, v29, v30, v31, v32, v33, v34);
  LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v11 + 16), 0LL);
  y = LocalPosition.fields.y;
  z = LocalPosition.fields.z;
  v37 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v37 = ManagerConfig_TypeInfo;
  }
  WIDTH = v37->static_fields->WIDTH;
  v54 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v11 + 16), 0LL);
  v39 = *(MoveObject_o **)(v11 + 24);
  x = v54.fields.x;
  v41 = v54.fields.y;
  v42 = v54.fields.z;
  v47 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v43, v44, v45, v46);
  System_Action___ctor(
    v47,
    (Il2CppObject *)v11,
    Method_QuestRewardCostumeAction_StateItemLabel___c__DisplayClass1_0__begin_b__0__,
    0LL);
  v52 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v48, v49, v50, v51);
  System_Action___ctor(
    v52,
    (Il2CppObject *)v11,
    Method_QuestRewardCostumeAction_StateItemLabel___c__DisplayClass1_0__begin_b__1__,
    0LL);
  if ( !v39 )
LABEL_12:
    sub_B170D4();
  v55.fields.x = (float)WIDTH;
  v55.fields.y = y;
  v55.fields.z = z;
  v56.fields.x = x;
  v56.fields.y = v41;
  v56.fields.z = v42;
  MoveObject__Play(v39, v55, v56, 0.25, v47, v52, 0.0, 17, 0LL);
}


void __fastcall QuestRewardCostumeAction_StateItemLabel__end(
        QuestRewardCostumeAction_StateItemLabel_o *this,
        QuestRewardCostumeAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestRewardCostumeAction_StateItemLabel__update(
        QuestRewardCostumeAction_StateItemLabel_o *this,
        QuestRewardCostumeAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestRewardCostumeAction_StateItemLabel___c__DisplayClass1_0___ctor(
        QuestRewardCostumeAction_StateItemLabel___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestRewardCostumeAction_StateItemLabel___c__DisplayClass1_0___begin_b__0(
        QuestRewardCostumeAction_StateItemLabel___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  struct MoveObject_o *mo; // x8

  mo = this->fields.mo;
  if ( !mo )
    sub_B170D4();
  GameObjectExtensions__SetLocalPosition(this->fields.tgt_obj, *(UnityEngine_Vector3_o *)&mo->fields.mNow.fields.y, 0LL);
}


void __fastcall QuestRewardCostumeAction_StateItemLabel___c__DisplayClass1_0___begin_b__1(
        QuestRewardCostumeAction_StateItemLabel___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  QuestRewardCostumeAction_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_B170D4();
  QuestRewardCostumeAction__SetState(that, 3, 0LL);
}


void __fastcall QuestRewardCostumeAction_StateNone___ctor(
        QuestRewardCostumeAction_StateNone_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestRewardCostumeAction_StateNone__begin(
        QuestRewardCostumeAction_StateNone_o *this,
        QuestRewardCostumeAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestRewardCostumeAction_StateNone__end(
        QuestRewardCostumeAction_StateNone_o *this,
        QuestRewardCostumeAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestRewardCostumeAction_StateNone__update(
        QuestRewardCostumeAction_StateNone_o *this,
        QuestRewardCostumeAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestRewardCostumeAction_StatePlay___ctor(
        QuestRewardCostumeAction_StatePlay_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestRewardCostumeAction_StatePlay__begin(
        QuestRewardCostumeAction_StatePlay_o *this,
        QuestRewardCostumeAction_o *that,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *mSimpleAnimation; // x21
  struct SimpleAnimation_o *v7; // x21
  UnityEngine_Object_o *monitor; // x0
  System_String_o *v9; // x0
  struct SimpleAnimation_o *v10; // x21
  UnityEngine_Object_o *v11; // x0
  System_String_o *v12; // x0
  struct SimpleAnimation_State_o *v13; // x0
  struct SimpleAnimation_State_o **p_mSimpleAnimState; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct SimpleAnimation_State_o *v21; // x21
  SimpleAnimation_State_c *klass; // x8
  unsigned __int64 v23; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  UnityEngine_Object_o *mAnimation; // x21
  UnityEngine_Animation_o *v27; // x21
  UnityEngine_Object_o *clip; // x0
  System_String_o *name; // x0
  UnityEngine_Animation_o *v30; // x21
  UnityEngine_Object_o *v31; // x0
  System_String_o *v32; // x0
  struct UnityEngine_AnimationState_o *Item; // x0
  BattleServantConfConponent_o *p_fields; // x20
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  struct SimpleAnimation_State_o *v41; // x20
  SimpleAnimation_State_c *v42; // x8
  unsigned __int64 v43; // x10
  SimpleAnimation_State_c **v44; // x11
  __int64 v45; // x0
  UnityEngine_GameObject_o *mAppearEffObj; // x0

  if ( (byte_40FA322 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, that);
    sub_B16FFC(&SimpleAnimation_State_TypeInfo, v5);
    byte_40FA322 = 1;
  }
  if ( !that )
    goto LABEL_40;
  mSimpleAnimation = (UnityEngine_Object_o *)that->fields.mSimpleAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(mSimpleAnimation, 0LL, 0LL) )
  {
    mAnimation = (UnityEngine_Object_o *)that->fields.mAnimation;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(mAnimation, 0LL, 0LL) )
      goto LABEL_38;
    v27 = that->fields.mAnimation;
    if ( v27 )
    {
      clip = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0LL);
      if ( clip )
      {
        name = UnityEngine_Object__get_name(clip, 0LL);
        UnityEngine_Animation__Play_49744236(v27, name, 0LL);
        v30 = that->fields.mAnimation;
        if ( v30 )
        {
          v31 = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0LL);
          if ( v31 )
          {
            v32 = UnityEngine_Object__get_name(v31, 0LL);
            Item = UnityEngine_Animation__get_Item(v30, v32, 0LL);
            this->fields.mAnimState = Item;
            p_fields = (BattleServantConfConponent_o *)&this->fields;
            sub_B16F98(p_fields, (System_Int32_array **)Item, v35, v36, v37, v38, v39, v40);
            if ( p_fields->klass )
            {
              UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)p_fields->klass, 0.0, 0LL);
              if ( p_fields->klass )
              {
                UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)p_fields->klass, 1.0, 0LL);
                goto LABEL_38;
              }
            }
          }
        }
      }
    }
LABEL_40:
    sub_B170D4();
  }
  v7 = that->fields.mSimpleAnimation;
  if ( !v7 )
    goto LABEL_40;
  monitor = (UnityEngine_Object_o *)v7[1].monitor;
  if ( !monitor )
    goto LABEL_40;
  v9 = UnityEngine_Object__get_name(monitor, 0LL);
  SimpleAnimation__Play_16380456(v7, v9, 0LL);
  v10 = that->fields.mSimpleAnimation;
  if ( !v10 )
    goto LABEL_40;
  v11 = (UnityEngine_Object_o *)v10[1].monitor;
  if ( !v11 )
    goto LABEL_40;
  v12 = UnityEngine_Object__get_name(v11, 0LL);
  v13 = SimpleAnimation__get_Item(v10, v12, 0LL);
  this->fields.mSimpleAnimState = v13;
  p_mSimpleAnimState = &this->fields.mSimpleAnimState;
  sub_B16F98(
    (BattleServantConfConponent_o *)p_mSimpleAnimState,
    (System_Int32_array **)v13,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v21 = *p_mSimpleAnimState;
  if ( !*p_mSimpleAnimState )
    goto LABEL_40;
  klass = v21->klass;
  if ( *(_WORD *)&v21->klass->_2.bitflags1 )
  {
    v23 = 0LL;
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v23;
      p_offset += 2;
      if ( v23 >= *(unsigned __int16 *)&v21->klass->_2.bitflags1 )
        goto LABEL_17;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 6].method;
  }
  else
  {
LABEL_17:
    p_method = sub_AAFEF8(*p_mSimpleAnimState, SimpleAnimation_State_TypeInfo, 6LL);
  }
  (*(void (__fastcall **)(struct SimpleAnimation_State_o *, _QWORD, float))p_method)(
    v21,
    *(_QWORD *)(p_method + 8),
    0.0);
  v41 = *p_mSimpleAnimState;
  if ( !v41 )
    goto LABEL_40;
  v42 = v41->klass;
  if ( *(_WORD *)&v41->klass->_2.bitflags1 )
  {
    v43 = 0LL;
    v44 = (SimpleAnimation_State_c **)&v42->_1.interfaceOffsets->offset;
    while ( *(v44 - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v43;
      v44 += 2;
      if ( v43 >= *(unsigned __int16 *)&v41->klass->_2.bitflags1 )
        goto LABEL_35;
    }
    v45 = (__int64)&v42->vtable[*(_DWORD *)v44 + 8].method;
  }
  else
  {
LABEL_35:
    v45 = sub_AAFEF8(v41, SimpleAnimation_State_TypeInfo, 8LL);
  }
  (*(void (__fastcall **)(struct SimpleAnimation_State_o *, _QWORD, float))v45)(v41, *(_QWORD *)(v45 + 8), 1.0);
LABEL_38:
  mAppearEffObj = that->fields.mAppearEffObj;
  if ( !mAppearEffObj )
    goto LABEL_40;
  UnityEngine_GameObject__SetActive(mAppearEffObj, 1, 0LL);
}


void __fastcall QuestRewardCostumeAction_StatePlay__end(
        QuestRewardCostumeAction_StatePlay_o *this,
        QuestRewardCostumeAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestRewardCostumeAction_StatePlay__update(
        QuestRewardCostumeAction_StatePlay_o *this,
        QuestRewardCostumeAction_o *that,
        const MethodInfo *method)
{
  __int64 v4; // x1
  UnityEngine_Object_o *mSimpleAnimation; // x20
  struct SimpleAnimation_o *v6; // x20
  UnityEngine_Object_o *monitor; // x0
  System_String_o *name; // x0
  UnityEngine_Object_o *mAnimation; // x20
  UnityEngine_Animation_o *v10; // x20
  UnityEngine_Object_o *clip; // x0
  System_String_o *v12; // x0
  CommonUI_o *Instance; // x0

  if ( (byte_40FA323 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, that);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_40FA323 = 1;
  }
  if ( !that )
    goto LABEL_23;
  mSimpleAnimation = (UnityEngine_Object_o *)that->fields.mSimpleAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(mSimpleAnimation, 0LL, 0LL) )
  {
    v6 = that->fields.mSimpleAnimation;
    if ( !v6 )
      goto LABEL_23;
    monitor = (UnityEngine_Object_o *)v6[1].monitor;
    if ( !monitor )
      goto LABEL_23;
    name = UnityEngine_Object__get_name(monitor, 0LL);
    if ( SimpleAnimation__IsPlaying(v6, name, 0LL) )
      return;
LABEL_19:
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      if ( !CommonUI__maskFadeIsBusy(Instance, 0LL) )
        QuestRewardCostumeAction__SetState(that, 2, 0LL);
      return;
    }
LABEL_23:
    sub_B170D4();
  }
  mAnimation = (UnityEngine_Object_o *)that->fields.mAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(mAnimation, 0LL, 0LL) )
  {
    v10 = that->fields.mAnimation;
    if ( !v10 )
      goto LABEL_23;
    clip = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0LL);
    if ( !clip )
      goto LABEL_23;
    v12 = UnityEngine_Object__get_name(clip, 0LL);
    if ( UnityEngine_Animation__IsPlaying(v10, v12, 0LL) )
      return;
    goto LABEL_19;
  }
}


void __fastcall QuestRewardCostumeAction_StateTouchWait___ctor(
        QuestRewardCostumeAction_StateTouchWait_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestRewardCostumeAction_StateTouchWait__begin(
        QuestRewardCostumeAction_StateTouchWait_o *this,
        QuestRewardCostumeAction_o *that,
        const MethodInfo *method)
{
  UnityEngine_Component_o *mScreenTouchInfo; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( !that
    || (mScreenTouchInfo = (UnityEngine_Component_o *)that->fields.mScreenTouchInfo) == 0LL
    || (gameObject = UnityEngine_Component__get_gameObject(mScreenTouchInfo, 0LL)) == 0LL )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


void __fastcall QuestRewardCostumeAction_StateTouchWait__end(
        QuestRewardCostumeAction_StateTouchWait_o *this,
        QuestRewardCostumeAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestRewardCostumeAction_StateTouchWait__update(
        QuestRewardCostumeAction_StateTouchWait_o *this,
        QuestRewardCostumeAction_o *that,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  QuestRewardCostumeAction_o **v19; // x19
  UnityEngine_Component_o *mScreenTouchInfo; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  CommonUI_o *Instance; // x21
  AvalonSceneManager_c *v27; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v29; // x22

  if ( (byte_40FA324 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, that);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v6);
    sub_B16FFC(&CTouch_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_B16FFC(&SoundManager_TypeInfo, v9);
    sub_B16FFC(&Method_QuestRewardCostumeAction_StateTouchWait___c__DisplayClass1_0__update_b__0__, v10);
    sub_B16FFC(&QuestRewardCostumeAction_StateTouchWait___c__DisplayClass1_0_TypeInfo, v11);
    byte_40FA324 = 1;
  }
  v12 = sub_B170CC(QuestRewardCostumeAction_StateTouchWait___c__DisplayClass1_0_TypeInfo, that, method, v3, v4);
  QuestRewardCostumeAction_StateTouchWait___c__DisplayClass1_0___ctor(
    (QuestRewardCostumeAction_StateTouchWait___c__DisplayClass1_0_o *)v12,
    0LL);
  if ( !v12 )
    goto LABEL_21;
  *(_QWORD *)(v12 + 16) = that;
  v19 = (QuestRewardCostumeAction_o **)(v12 + 16);
  sub_B16F98((BattleServantConfConponent_o *)(v12 + 16), (System_Int32_array **)that, v13, v14, v15, v16, v17, v18);
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  if ( CTouch__isTouchPush(0LL) )
  {
    if ( *v19 )
    {
      mScreenTouchInfo = (UnityEngine_Component_o *)(*v19)->fields.mScreenTouchInfo;
      if ( mScreenTouchInfo )
      {
        gameObject = UnityEngine_Component__get_gameObject(mScreenTouchInfo, 0LL);
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(0, 0LL);
          Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v27 = AvalonSceneManager_TypeInfo;
          if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
            v27 = AvalonSceneManager_TypeInfo;
          }
          DEFAULT_FADE_TIME = v27->static_fields->DEFAULT_FADE_TIME;
          v29 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v22, v23, v24, v25);
          System_Action___ctor(
            v29,
            (Il2CppObject *)v12,
            Method_QuestRewardCostumeAction_StateTouchWait___c__DisplayClass1_0__update_b__0__,
            0LL);
          if ( Instance )
          {
            CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v29, 0LL);
            if ( *v19 )
            {
              QuestRewardCostumeAction__SetState(*v19, 0, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_21:
    sub_B170D4();
  }
}


void __fastcall QuestRewardCostumeAction_StateTouchWait___c__DisplayClass1_0___ctor(
        QuestRewardCostumeAction_StateTouchWait___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestRewardCostumeAction_StateTouchWait___c__DisplayClass1_0___update_b__0(
        QuestRewardCostumeAction_StateTouchWait___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  struct QuestRewardCostumeAction_o *that; // x8

  that = this->fields.that;
  if ( !that )
    sub_B170D4();
  ActionExtensions__Call(that->fields.mEndAct, 0LL);
}