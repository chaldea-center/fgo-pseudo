void __fastcall QuestRewardCostumeAction___ctor(QuestRewardCostumeAction_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall QuestRewardCostumeAction__Awake(QuestRewardCostumeAction_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  struct CStateManager_QuestRewardCostumeAction__o **p_mFSM; // x20
  CStateManager_T__o *v15; // x21
  int32_t v16; // w2
  int32_t v17; // w3
  CStateManager_T__o *mFSM; // x21
  __int64 v19; // x1
  __int64 v20; // x2
  Il2CppObject *v21; // x22
  Il2CppObject *ComponentInChildren_object; // x0
  CStateManager_T__o *v23; // x21
  __int64 v24; // x1
  __int64 v25; // x2
  Il2CppObject *v26; // x22
  CStateManager_T__o *v27; // x21
  __int64 v28; // x1
  __int64 v29; // x2
  Il2CppObject *v30; // x22
  CStateManager_T__o *v31; // x20
  __int64 v32; // x1
  __int64 v33; // x2
  Il2CppObject *v34; // x21
  const MethodInfo *v35; // x2
  ServantStatusBattleListViewItem_o *p_particleObj; // x20
  UnityEngine_Object_o *particleObj; // x21
  UnityEngine_Object_o *particlePrefab; // x21
  Il2CppObject *v39; // x21
  Il2CppObject *v40; // x21
  __int64 v41; // x1
  int32_t v42; // w2
  int32_t v43; // w3

  if ( (byte_49F94C1 & 1) == 0 )
  {
    sub_1B640C8(&Method_CStateManager_QuestRewardCostumeAction___ctor__, method);
    sub_1B640C8(&Method_CStateManager_QuestRewardCostumeAction__add__, v4);
    sub_1B640C8(&CStateManager_QuestRewardCostumeAction__TypeInfo, v5);
    sub_1B640C8(&CTouch_TypeInfo, v6);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___, v7);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v8);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v9);
    sub_1B640C8(&QuestRewardCostumeAction_StateItemLabel_TypeInfo, v10);
    sub_1B640C8(&QuestRewardCostumeAction_StateNone_TypeInfo, v11);
    sub_1B640C8(&QuestRewardCostumeAction_StatePlay_TypeInfo, v12);
    sub_1B640C8(&QuestRewardCostumeAction_StateTouchWait_TypeInfo, v13);
    byte_49F94C1 = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v15 = (CStateManager_T__o *)sub_1B64314(CStateManager_QuestRewardCostumeAction__TypeInfo, method, v2);
    CStateManager_object____ctor(
      v15,
      (Il2CppObject *)this,
      4,
      (const MethodInfo_30612BC *)Method_CStateManager_QuestRewardCostumeAction___ctor__);
    this->fields.mFSM = (struct CStateManager_QuestRewardCostumeAction__o *)v15;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mFSM, (int32_t)v15, v16, v17);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v21 = (Il2CppObject *)sub_1B64314(QuestRewardCostumeAction_StateNone_TypeInfo, v19, v20);
    System_Object___ctor(v21, 0LL);
    if ( !mFSM )
      goto LABEL_26;
    CStateManager_object___add(
      mFSM,
      0,
      (IState_T__o *)v21,
      (const MethodInfo_3061364 *)Method_CStateManager_QuestRewardCostumeAction__add__);
    v23 = (CStateManager_T__o *)*p_mFSM;
    v26 = (Il2CppObject *)sub_1B64314(QuestRewardCostumeAction_StatePlay_TypeInfo, v24, v25);
    System_Object___ctor(v26, 0LL);
    if ( !v23 )
      goto LABEL_26;
    CStateManager_object___add(
      v23,
      1,
      (IState_T__o *)v26,
      (const MethodInfo_3061364 *)Method_CStateManager_QuestRewardCostumeAction__add__);
    v27 = (CStateManager_T__o *)*p_mFSM;
    v30 = (Il2CppObject *)sub_1B64314(QuestRewardCostumeAction_StateItemLabel_TypeInfo, v28, v29);
    System_Object___ctor(v30, 0LL);
    if ( !v27 )
      goto LABEL_26;
    CStateManager_object___add(
      v27,
      2,
      (IState_T__o *)v30,
      (const MethodInfo_3061364 *)Method_CStateManager_QuestRewardCostumeAction__add__);
    v31 = (CStateManager_T__o *)*p_mFSM;
    v34 = (Il2CppObject *)sub_1B64314(QuestRewardCostumeAction_StateTouchWait_TypeInfo, v32, v33);
    System_Object___ctor(v34, 0LL);
    if ( !v31 )
      goto LABEL_26;
    CStateManager_object___add(
      v31,
      3,
      (IState_T__o *)v34,
      (const MethodInfo_3061364 *)Method_CStateManager_QuestRewardCostumeAction__add__);
    QuestRewardCostumeAction__SetState(this, 0, v35);
  }
  p_particleObj = (ServantStatusBattleListViewItem_o *)&this->fields.particleObj;
  particleObj = (UnityEngine_Object_o *)this->fields.particleObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(particleObj, 0LL, 0LL) )
  {
    particlePrefab = (UnityEngine_Object_o *)this->fields.particlePrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(particlePrefab, 0LL, 0LL) )
    {
      v39 = (Il2CppObject *)this->fields.particlePrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v40 = UnityEngine_Object__Instantiate_object_(
              v39,
              (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v40, 0LL, 0LL) )
      {
        GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v40, (UnityEngine_Component_o *)this, 0LL);
        if ( !byte_49F7111 )
        {
          sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v41);
          byte_49F7111 = 1;
        }
        GameObjectExtensions__SetLocalPosition(
          (UnityEngine_GameObject_o *)v40,
          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
          0LL);
        if ( v40 )
        {
          ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                         (UnityEngine_GameObject_o *)v40,
                                         (const MethodInfo_2E8813C *)Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___);
          if ( ComponentInChildren_object )
          {
            UIWidget__set_depth((UIWidget_o *)ComponentInChildren_object, 0, 0LL);
            p_particleObj->klass = (ServantStatusBattleListViewItem_c *)v40;
            sub_1B6406C(p_particleObj, (int32_t)v40, v42, v43);
            goto LABEL_23;
          }
        }
LABEL_26:
        sub_1B64324(ComponentInChildren_object);
      }
    }
  }
LABEL_23:
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__init(0LL);
}


int32_t __fastcall QuestRewardCostumeAction__GetState(QuestRewardCostumeAction_o *this, const MethodInfo *method)
{
  QuestRewardCostumeAction_o *v2; // x19
  struct CStateManager_QuestRewardCostumeAction__o *mFSM; // x8

  v2 = this;
  if ( (byte_49F94C5 & 1) == 0 )
  {
    this = (QuestRewardCostumeAction_o *)sub_1B640C8(&Method_CStateManager_QuestRewardCostumeAction__getState__, method);
    byte_49F94C5 = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_1B64324(this);
  return mFSM->fields.m_state;
}


void __fastcall QuestRewardCostumeAction__Play(
        QuestRewardCostumeAction_o *this,
        System_Action_o *endAct,
        float fadeInTime,
        const MethodInfo *method)
{
  int32_t v4; // w3
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *mSimpleAnimation; // x20
  struct SimpleAnimation_o *v15; // x20
  System_String_o *name; // x0
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v18; // x20
  __int64 v19; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v21; // x0
  UnityEngine_Object_o *mAnimation; // x20
  UnityEngine_Animation_o *v23; // x20
  System_String_o *v24; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v28; // x0
  System_Action_o *v29; // x21

  if ( (byte_49F94C4 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, endAct);
    sub_1B640C8(&AvalonSceneManager_TypeInfo, v8);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v9);
    sub_1B640C8(&Method_QuestRewardCostumeAction__Play_b__14_0__, v10);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_1B640C8(&SimpleAnimation_State_TypeInfo, v12);
    byte_49F94C4 = 1;
  }
  this->fields.mEndAct = endAct;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mEndAct, (int32_t)endAct, (int32_t)method, v4);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  mSimpleAnimation = (UnityEngine_Object_o *)this->fields.mSimpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(mSimpleAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v15 = this->fields.mSimpleAnimation;
    if ( !v15 )
      goto LABEL_30;
    gameObject = (UnityEngine_GameObject_o *)v15[1].monitor;
    if ( !gameObject )
      goto LABEL_30;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0LL);
    gameObject = (UnityEngine_GameObject_o *)SimpleAnimation__get_Item(v15, name, 0LL);
    if ( !gameObject )
      goto LABEL_30;
    klass = gameObject->klass;
    v18 = gameObject;
    v19 = *(unsigned __int16 *)(&gameObject->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&gameObject->klass->_2.bitflags2 + 3) )
    {
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v19;
        p_offset += 2;
        if ( !v19 )
          goto LABEL_14;
      }
      v21 = (__int64)(&klass[1]._1.castClass + 2 * *(_DWORD *)p_offset);
    }
    else
    {
LABEL_14:
      v21 = sub_1BB60A8(gameObject, SimpleAnimation_State_TypeInfo, 8LL);
    }
    (*(void (__fastcall **)(UnityEngine_GameObject_o *, _QWORD, float))v21)(v18, *(_QWORD *)(v21 + 8), 0.0);
  }
  else
  {
    mAnimation = (UnityEngine_Object_o *)this->fields.mAnimation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(mAnimation, 0LL, 0LL);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      v23 = this->fields.mAnimation;
      if ( !v23 )
        goto LABEL_30;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_clip(this->fields.mAnimation, 0LL);
      if ( !gameObject )
        goto LABEL_30;
      v24 = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0LL);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_Item(v23, v24, 0LL);
      if ( !gameObject )
        goto LABEL_30;
      UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)gameObject, 0.0, 0LL);
    }
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( fadeInTime <= 0.0 )
  {
    v28 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v28 = AvalonSceneManager_TypeInfo;
    }
    fadeInTime = v28->static_fields->DEFAULT_FADE_TIME;
  }
  v29 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v25, v26);
  System_Action___ctor(v29, (Il2CppObject *)this, Method_QuestRewardCostumeAction__Play_b__14_0__, 0LL);
  if ( !Instance )
LABEL_30:
    sub_1B64324(gameObject);
  CommonUI__maskFadein((CommonUI_o *)Instance, fadeInTime, v29, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestRewardCostumeAction__SetState(
        QuestRewardCostumeAction_o *this,
        int32_t state,
        const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_49F94C6 & 1) == 0 )
  {
    sub_1B640C8(&Method_CStateManager_QuestRewardCostumeAction__setState__, *(_QWORD *)&state);
    byte_49F94C6 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_1B64324(0LL);
  CStateManager_object___setState(
    mFSM,
    state,
    (const MethodInfo_30613F0 *)Method_CStateManager_QuestRewardCostumeAction__setState__);
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
  Il2CppObject *ComponentInChildren_object__48431348; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  Il2CppObject *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *v23; // x0
  struct ScreenTouchInformationComponent_o **p_mScreenTouchInfo; // x20
  UnityEngine_Object_o *mScreenTouchInfo; // x21
  Il2CppObject *Instance; // x21
  Il2CppObject *Component_object; // x0
  int32_t v28; // w2
  int32_t v29; // w3

  if ( (byte_49F94C3 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponentInChildren_Animation___, *(_QWORD *)&imgId);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___, v7);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___, v8);
    sub_1B640C8(&Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___, v9);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___, v10);
    sub_1B640C8(&LocalizationManager_TypeInfo, v11);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v12);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13);
    sub_1B640C8(&StringLiteral_10797/*"QUEST_CLEAR_COSTUME_GET"*/, v14);
    byte_49F94C3 = 1;
  }
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_24;
  ComponentInChildren_object__48431348 = UnityEngine_Component__GetComponentInChildren_object__48431348(
                                           transform,
                                           (const MethodInfo_2E300F4 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  this->fields.mAnimation = (struct UnityEngine_Animation_o *)ComponentInChildren_object__48431348;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.mAnimation,
    (int32_t)ComponentInChildren_object__48431348,
    v17,
    v18);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_24;
  v19 = UnityEngine_Component__GetComponentInChildren_object__48431348(
          transform,
          (const MethodInfo_2E300F4 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  this->fields.mSimpleAnimation = (struct SimpleAnimation_o *)v19;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mSimpleAnimation, (int32_t)v19, v20, v21);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_24;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentInChildren_object__48431348(
                                           transform,
                                           (const MethodInfo_2E300F4 *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
  if ( !transform )
    goto LABEL_24;
  BYTE5(transform[4].monitor) = 1;
  transform = (UnityEngine_Component_o *)this->fields.mItemSp;
  if ( !transform )
    goto LABEL_24;
  gameObject = UnityEngine_Component__get_gameObject(transform, 0LL);
  transform = (UnityEngine_Component_o *)GameObjectExtensions__SafeGetComponent_object_(
                                           gameObject,
                                           (const MethodInfo_2E899C0 *)Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___);
  if ( !transform )
    goto LABEL_24;
  ItemIconComponent__SetItemImage((ItemIconComponent_o *)transform, imgId, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_10797/*"QUEST_CLEAR_COSTUME_GET"*/, 0LL);
  transform = (UnityEngine_Component_o *)System_String__Format(v23, (Il2CppObject *)itmName, 0LL);
  if ( !this->fields.mItemLabel )
    goto LABEL_24;
  UILabel__set_text(this->fields.mItemLabel, (System_String_o *)transform, 0LL);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
  transform = (UnityEngine_Component_o *)this->fields.mItemLabel;
  if ( !transform )
    goto LABEL_24;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(transform, 0LL);
  if ( !transform )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
  p_mScreenTouchInfo = &this->fields.mScreenTouchInfo;
  mScreenTouchInfo = (UnityEngine_Object_o *)this->fields.mScreenTouchInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mScreenTouchInfo, 0LL, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( Instance )
    {
      transform = (UnityEngine_Component_o *)CommonUI__CreateScreeenTouchInfo(
                                               (CommonUI_o *)Instance,
                                               (UnityEngine_Transform_o *)transform,
                                               0,
                                               0LL);
      if ( transform )
      {
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)transform,
                             (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
        *p_mScreenTouchInfo = (struct ScreenTouchInformationComponent_o *)Component_object;
        sub_1B6406C(
          (ServantStatusBattleListViewItem_o *)&this->fields.mScreenTouchInfo,
          (int32_t)Component_object,
          v28,
          v29);
        goto LABEL_21;
      }
    }
LABEL_24:
    sub_1B64324(transform);
  }
LABEL_21:
  transform = (UnityEngine_Component_o *)*p_mScreenTouchInfo;
  if ( !*p_mScreenTouchInfo )
    goto LABEL_24;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(transform, 0LL);
  if ( !transform )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
}


void __fastcall QuestRewardCostumeAction__Update(QuestRewardCostumeAction_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  CStateManager_T__o *mFSM; // x0

  if ( (byte_49F94C2 & 1) == 0 )
  {
    sub_1B640C8(&Method_CStateManager_QuestRewardCostumeAction__update__, method);
    sub_1B640C8(&CTouch_TypeInfo, v3);
    byte_49F94C2 = 1;
  }
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__process(0LL);
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(
      mFSM,
      (const MethodInfo_30613CC *)Method_CStateManager_QuestRewardCostumeAction__update__);
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x19
  UnityEngine_Component_o *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  __int64 v13; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  Il2CppObject *Component_object; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  ManagerConfig_c *v20; // x0
  float y; // s8
  float z; // s9
  int WIDTH; // w24
  MoveObject_o *v24; // x20
  float x; // s10
  float v26; // s11
  float v27; // s12
  __int64 v28; // x1
  __int64 v29; // x2
  System_Action_o *v30; // x21
  __int64 v31; // x1
  __int64 v32; // x2
  System_Action_o *v33; // x22
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v37; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_49F94C9 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, that);
    sub_1B640C8(&Method_GameObjectExtensions_SafeGetComponent_MoveObject___, v4);
    sub_1B640C8(&ManagerConfig_TypeInfo, v5);
    sub_1B640C8(&Method_QuestRewardCostumeAction_StateItemLabel___c__DisplayClass1_0__begin_b__0__, v6);
    sub_1B640C8(&Method_QuestRewardCostumeAction_StateItemLabel___c__DisplayClass1_0__begin_b__1__, v7);
    sub_1B640C8(&QuestRewardCostumeAction_StateItemLabel___c__DisplayClass1_0_TypeInfo, v8);
    byte_49F94C9 = 1;
  }
  v9 = sub_1B64314(QuestRewardCostumeAction_StateItemLabel___c__DisplayClass1_0_TypeInfo, that, method);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_11;
  *(_QWORD *)(v9 + 32) = that;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v9 + 32), (int32_t)that, v11, v12);
  v13 = *(_QWORD *)(v9 + 32);
  if ( !v13 )
    goto LABEL_11;
  v10 = *(UnityEngine_Component_o **)(v13 + 64);
  if ( !v10 )
    goto LABEL_11;
  gameObject = UnityEngine_Component__get_gameObject(v10, 0LL);
  *(_QWORD *)(v9 + 16) = gameObject;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)gameObject, v15, v16);
  v10 = *(UnityEngine_Component_o **)(v9 + 16);
  if ( !v10 )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v10, 1, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       *(UnityEngine_GameObject_o **)(v9 + 16),
                       (const MethodInfo_2E899C0 *)Method_GameObjectExtensions_SafeGetComponent_MoveObject___);
  *(_QWORD *)(v9 + 24) = Component_object;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v9 + 24), (int32_t)Component_object, v18, v19);
  LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v9 + 16), 0LL);
  v20 = ManagerConfig_TypeInfo;
  y = LocalPosition.fields.y;
  z = LocalPosition.fields.z;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v20 = ManagerConfig_TypeInfo;
  }
  WIDTH = v20->static_fields->WIDTH;
  v35 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v9 + 16), 0LL);
  v24 = *(MoveObject_o **)(v9 + 24);
  x = v35.fields.x;
  v26 = v35.fields.y;
  v27 = v35.fields.z;
  v30 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v28, v29);
  System_Action___ctor(
    v30,
    (Il2CppObject *)v9,
    Method_QuestRewardCostumeAction_StateItemLabel___c__DisplayClass1_0__begin_b__0__,
    0LL);
  v33 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v31, v32);
  System_Action___ctor(
    v33,
    (Il2CppObject *)v9,
    Method_QuestRewardCostumeAction_StateItemLabel___c__DisplayClass1_0__begin_b__1__,
    0LL);
  if ( !v24 )
LABEL_11:
    sub_1B64324(v10);
  v36.fields.x = (float)WIDTH;
  v36.fields.y = y;
  v36.fields.z = z;
  v37.fields.x = x;
  v37.fields.y = v26;
  v37.fields.z = v27;
  MoveObject__Play(v24, v36, v37, 0.25, v30, v33, 0.0, 17, 0LL);
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
    sub_1B64324(this);
  GameObjectExtensions__SetLocalPosition(this->fields.tgt_obj, mo->fields.mNow, 0LL);
}


void __fastcall QuestRewardCostumeAction_StateItemLabel___c__DisplayClass1_0___begin_b__1(
        QuestRewardCostumeAction_StateItemLabel___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  QuestRewardCostumeAction_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_1B64324(0LL);
  QuestRewardCostumeAction__SetState(that, 3, v2);
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
  QuestRewardCostumeAction_StatePlay_o *v4; // x20
  __int64 v5; // x1
  UnityEngine_Object_o *mSimpleAnimation; // x21
  struct SimpleAnimation_o *v7; // x21
  System_String_o *v8; // x0
  struct SimpleAnimation_o *v9; // x21
  System_String_o *v10; // x0
  SimpleAnimation_State_o *v11; // x0
  ServantStatusBattleListViewItem_o *p_mSimpleAnimState; // x20
  int32_t v13; // w2
  int32_t v14; // w3
  ServantStatusBattleListViewItem_c *klass; // x21
  _QWORD *image; // x8
  __int64 v17; // x9
  SimpleAnimation_State_c **v18; // x10
  __int64 v19; // x0
  UnityEngine_Object_o *mAnimation; // x21
  UnityEngine_Animation_o *v21; // x21
  System_String_o *name; // x0
  UnityEngine_Animation_o *v23; // x21
  System_String_o *v24; // x0
  UnityEngine_AnimationState_o *Item; // x0
  ServantStatusBattleListViewItem_o *p_fields; // x20
  int32_t v27; // w2
  int32_t v28; // w3
  ServantStatusBattleListViewItem_c *v29; // x20
  _QWORD *v30; // x8
  __int64 v31; // x9
  SimpleAnimation_State_c **v32; // x10
  __int64 v33; // x0

  v4 = this;
  if ( (byte_49F94C7 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, that);
    this = (QuestRewardCostumeAction_StatePlay_o *)sub_1B640C8(&SimpleAnimation_State_TypeInfo, v5);
    byte_49F94C7 = 1;
  }
  if ( !that )
    goto LABEL_38;
  mSimpleAnimation = (UnityEngine_Object_o *)that->fields.mSimpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (QuestRewardCostumeAction_StatePlay_o *)UnityEngine_Object__op_Inequality(mSimpleAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    mAnimation = (UnityEngine_Object_o *)that->fields.mAnimation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (QuestRewardCostumeAction_StatePlay_o *)UnityEngine_Object__op_Inequality(mAnimation, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_36;
    v21 = that->fields.mAnimation;
    if ( v21 )
    {
      this = (QuestRewardCostumeAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0LL);
      if ( this )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
        this = (QuestRewardCostumeAction_StatePlay_o *)UnityEngine_Animation__Play_68872828(v21, name, 0LL);
        v23 = that->fields.mAnimation;
        if ( v23 )
        {
          this = (QuestRewardCostumeAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0LL);
          if ( this )
          {
            v24 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
            Item = UnityEngine_Animation__get_Item(v23, v24, 0LL);
            v4->fields.mAnimState = Item;
            p_fields = (ServantStatusBattleListViewItem_o *)&v4->fields;
            sub_1B6406C(p_fields, (int32_t)Item, v27, v28);
            this = (QuestRewardCostumeAction_StatePlay_o *)p_fields->klass;
            if ( p_fields->klass )
            {
              UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)this, 0.0, 0LL);
              this = (QuestRewardCostumeAction_StatePlay_o *)p_fields->klass;
              if ( p_fields->klass )
              {
                UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)this, 1.0, 0LL);
                goto LABEL_36;
              }
            }
          }
        }
      }
    }
LABEL_38:
    sub_1B64324(this);
  }
  v7 = that->fields.mSimpleAnimation;
  if ( !v7 )
    goto LABEL_38;
  this = (QuestRewardCostumeAction_StatePlay_o *)v7[1].monitor;
  if ( !this )
    goto LABEL_38;
  v8 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestRewardCostumeAction_StatePlay_o *)SimpleAnimation__Play_63513060(v7, v8, 0LL);
  v9 = that->fields.mSimpleAnimation;
  if ( !v9 )
    goto LABEL_38;
  this = (QuestRewardCostumeAction_StatePlay_o *)v9[1].monitor;
  if ( !this )
    goto LABEL_38;
  v10 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  v11 = SimpleAnimation__get_Item(v9, v10, 0LL);
  v4->fields.mSimpleAnimState = v11;
  p_mSimpleAnimState = (ServantStatusBattleListViewItem_o *)&v4->fields.mSimpleAnimState;
  sub_1B6406C(p_mSimpleAnimState, (int32_t)v11, v13, v14);
  klass = p_mSimpleAnimState->klass;
  if ( !p_mSimpleAnimState->klass )
    goto LABEL_38;
  image = klass->_1.image;
  v17 = *((unsigned __int16 *)klass->_1.image + 151);
  if ( *((_WORD *)klass->_1.image + 151) )
  {
    v18 = (SimpleAnimation_State_c **)(image[22] + 8LL);
    while ( *(v18 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v17;
      v18 += 2;
      if ( !v17 )
        goto LABEL_16;
    }
    v19 = (__int64)&image[2 * *(_DWORD *)v18 + 51];
  }
  else
  {
LABEL_16:
    v19 = sub_1BB60A8(p_mSimpleAnimState->klass, SimpleAnimation_State_TypeInfo, 6LL);
  }
  this = (QuestRewardCostumeAction_StatePlay_o *)(*(__int64 (__fastcall **)(ServantStatusBattleListViewItem_c *, _QWORD, float))v19)(
                                                   klass,
                                                   *(_QWORD *)(v19 + 8),
                                                   0.0);
  v29 = p_mSimpleAnimState->klass;
  if ( !v29 )
    goto LABEL_38;
  v30 = v29->_1.image;
  v31 = *((unsigned __int16 *)v29->_1.image + 151);
  if ( *((_WORD *)v29->_1.image + 151) )
  {
    v32 = (SimpleAnimation_State_c **)(v30[22] + 8LL);
    while ( *(v32 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v31;
      v32 += 2;
      if ( !v31 )
        goto LABEL_33;
    }
    v33 = (__int64)&v30[2 * *(_DWORD *)v32 + 55];
  }
  else
  {
LABEL_33:
    v33 = sub_1BB60A8(v29, SimpleAnimation_State_TypeInfo, 8LL);
  }
  (*(void (__fastcall **)(ServantStatusBattleListViewItem_c *, _QWORD, float))v33)(v29, *(_QWORD *)(v33 + 8), 1.0);
LABEL_36:
  this = (QuestRewardCostumeAction_StatePlay_o *)that->fields.mAppearEffObj;
  if ( !this )
    goto LABEL_38;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
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
  System_String_o *name; // x0
  UnityEngine_Object_o *mAnimation; // x20
  UnityEngine_Animation_o *v9; // x20
  System_String_o *v10; // x0
  const MethodInfo *v11; // x2

  if ( (byte_49F94C8 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, that);
    this = (QuestRewardCostumeAction_StatePlay_o *)sub_1B640C8(
                                                     &Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
                                                     v4);
    byte_49F94C8 = 1;
  }
  if ( !that )
    goto LABEL_21;
  mSimpleAnimation = (UnityEngine_Object_o *)that->fields.mSimpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (QuestRewardCostumeAction_StatePlay_o *)UnityEngine_Object__op_Inequality(mSimpleAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v6 = that->fields.mSimpleAnimation;
    if ( !v6 )
      goto LABEL_21;
    this = (QuestRewardCostumeAction_StatePlay_o *)v6[1].monitor;
    if ( !this )
      goto LABEL_21;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
    if ( SimpleAnimation__IsPlaying(v6, name, 0LL) )
      return;
LABEL_17:
    this = (QuestRewardCostumeAction_StatePlay_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( this )
    {
      if ( !CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0LL) )
        QuestRewardCostumeAction__SetState(that, 2, v11);
      return;
    }
LABEL_21:
    sub_1B64324(this);
  }
  mAnimation = (UnityEngine_Object_o *)that->fields.mAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (QuestRewardCostumeAction_StatePlay_o *)UnityEngine_Object__op_Inequality(mAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v9 = that->fields.mAnimation;
    if ( !v9 )
      goto LABEL_21;
    this = (QuestRewardCostumeAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0LL);
    if ( !this )
      goto LABEL_21;
    v10 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
    if ( UnityEngine_Animation__IsPlaying(v9, v10, 0LL) )
      return;
    goto LABEL_17;
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
  if ( !that
    || (this = (QuestRewardCostumeAction_StateTouchWait_o *)that->fields.mScreenTouchInfo) == 0LL
    || (this = (QuestRewardCostumeAction_StateTouchWait_o *)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)this,
                                                              0LL)) == 0LL )
  {
    sub_1B64324(this);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x20
  UnityEngine_GameObject_o *isTouchPush; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  __int64 v14; // x19
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  Il2CppObject *Instance; // x21
  AvalonSceneManager_c *v20; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v22; // x22
  const MethodInfo *v23; // x2

  if ( (byte_49F94CA & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, that);
    sub_1B640C8(&AvalonSceneManager_TypeInfo, v4);
    sub_1B640C8(&CTouch_TypeInfo, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B640C8(&Method_QuestRewardCostumeAction_StateTouchWait_update__, v7);
    sub_1B640C8(&Method_QuestRewardCostumeAction_StateTouchWait___c__DisplayClass1_0__update_b__0__, v8);
    sub_1B640C8(&QuestRewardCostumeAction_StateTouchWait___c__DisplayClass1_0_TypeInfo, v9);
    byte_49F94CA = 1;
  }
  v10 = sub_1B64314(QuestRewardCostumeAction_StateTouchWait___c__DisplayClass1_0_TypeInfo, that, method);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    goto LABEL_18;
  *(_QWORD *)(v10 + 16) = that;
  v14 = v10 + 16;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v10 + 16), (int32_t)that, v12, v13);
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  isTouchPush = (UnityEngine_GameObject_o *)CTouch__isTouchPush(0LL);
  if ( ((unsigned __int8)isTouchPush & 1) != 0 )
  {
    if ( *(_QWORD *)v14 )
    {
      isTouchPush = *(UnityEngine_GameObject_o **)(*(_QWORD *)v14 + 96LL);
      if ( isTouchPush )
      {
        isTouchPush = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)isTouchPush, 0LL);
        if ( isTouchPush )
        {
          UnityEngine_GameObject__SetActive(isTouchPush, 0, 0LL);
          v15 = Method_QuestRewardCostumeAction_StateTouchWait_update__;
          if ( (*((_BYTE *)Method_QuestRewardCostumeAction_StateTouchWait_update__ + 83) & 2) != 0 )
            v15 = (_QWORD *)sub_1B640E0(Method_QuestRewardCostumeAction_StateTouchWait_update__);
          v16 = (System_Reflection_MethodBase_o *)sub_1B640AC(v15, v15[4]);
          OverwriteAssetSoundName__PlaySystemSe(v16, 0, 0LL);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v20 = AvalonSceneManager_TypeInfo;
          if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
            v20 = AvalonSceneManager_TypeInfo;
          }
          DEFAULT_FADE_TIME = v20->static_fields->DEFAULT_FADE_TIME;
          v22 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v17, v18);
          System_Action___ctor(
            v22,
            (Il2CppObject *)v10,
            Method_QuestRewardCostumeAction_StateTouchWait___c__DisplayClass1_0__update_b__0__,
            0LL);
          if ( Instance )
          {
            CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v22, 0LL);
            isTouchPush = *(UnityEngine_GameObject_o **)v14;
            if ( *(_QWORD *)v14 )
            {
              QuestRewardCostumeAction__SetState((QuestRewardCostumeAction_o *)isTouchPush, 0, v23);
              return;
            }
          }
        }
      }
    }
LABEL_18:
    sub_1B64324(isTouchPush);
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
    sub_1B64324(this);
  ActionExtensions__Call(that->fields.mEndAct, 0LL);
}