void __fastcall QuestRewardTokenAction___cctor(const MethodInfo *method)
{
  if ( (byte_43501EF & 1) == 0 )
  {
    sub_B70694(&QuestRewardTokenAction_TypeInfo);
    byte_43501EF = 1;
  }
  QuestRewardTokenAction_TypeInfo->static_fields->TOKEN_EVENT_ID = 80285000;
  QuestRewardTokenAction_TypeInfo->static_fields->TOKEN_IMAGE_ID = 94047700;
  QuestRewardTokenAction_TypeInfo->static_fields->TOKEN_UNKNOWN_IMAGE_ID = 94047799;
}


void __fastcall QuestRewardTokenAction___ctor(QuestRewardTokenAction_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall QuestRewardTokenAction__Awake(QuestRewardTokenAction_o *this, const MethodInfo *method)
{
  struct CStateManager_QuestRewardTokenAction__o **p_fsm; // x20
  CStateManager_QAASpotStateController_IMapSpot__o *v4; // x21
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  struct CStateManager_QuestRewardTokenAction__o *fsm; // x21
  QuestRewardTokenAction_StateNone_o *v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1
  CStateManager_QAASpotStateController_IMapSpot__o *v15; // x21
  QuestRewardTokenAction_StatePlay_o *v16; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v17; // x20
  QuestRewardTokenAction_StateTouchWait_o *v18; // x21
  const MethodInfo *v19; // x2

  if ( (byte_43501E2 & 1) == 0 )
  {
    sub_B70694(&Method_CStateManager_QuestRewardTokenAction___ctor__);
    sub_B70694(&Method_CStateManager_QuestRewardTokenAction__add__);
    sub_B70694(&CStateManager_QuestRewardTokenAction__TypeInfo);
    sub_B70694(&QuestRewardTokenAction_StateNone_TypeInfo);
    sub_B70694(&QuestRewardTokenAction_StatePlay_TypeInfo);
    sub_B70694(&QuestRewardTokenAction_StateTouchWait_TypeInfo);
    byte_43501E2 = 1;
  }
  p_fsm = &this->fields.fsm;
  if ( !this->fields.fsm )
  {
    v4 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B70764(CStateManager_QuestRewardTokenAction__TypeInfo);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v4,
      (QAASpotStateController_IMapSpot_o *)this,
      3,
      (const MethodInfo_2C7FFDC *)Method_CStateManager_QuestRewardTokenAction___ctor__);
    this->fields.fsm = (struct CStateManager_QuestRewardTokenAction__o *)v4;
    sub_B70630((BattleServantConfConponent_o *)&this->fields.fsm, (System_Int32_array **)v4, v5, v6, v7, v8, v9, v10);
    fsm = this->fields.fsm;
    v12 = (QuestRewardTokenAction_StateNone_o *)sub_B70764(QuestRewardTokenAction_StateNone_TypeInfo);
    QuestRewardTokenAction_StateNone___ctor(v12, 0LL);
    if ( !fsm )
      goto LABEL_8;
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)fsm,
      0,
      (IState_T__o *)v12,
      (const MethodInfo_2C800A8 *)Method_CStateManager_QuestRewardTokenAction__add__);
    v15 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_fsm;
    v16 = (QuestRewardTokenAction_StatePlay_o *)sub_B70764(QuestRewardTokenAction_StatePlay_TypeInfo);
    QuestRewardTokenAction_StatePlay___ctor(v16, 0LL);
    if ( !v15
      || (CStateManager_QAASpotStateController_IMapSpot___add(
            v15,
            1,
            (IState_T__o *)v16,
            (const MethodInfo_2C800A8 *)Method_CStateManager_QuestRewardTokenAction__add__),
          v17 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_fsm,
          v18 = (QuestRewardTokenAction_StateTouchWait_o *)sub_B70764(QuestRewardTokenAction_StateTouchWait_TypeInfo),
          QuestRewardTokenAction_StateTouchWait___ctor(v18, 0LL),
          !v17) )
    {
LABEL_8:
      sub_B7076C(v13, v14);
    }
    CStateManager_QAASpotStateController_IMapSpot___add(
      v17,
      2,
      (IState_T__o *)v18,
      (const MethodInfo_2C800A8 *)Method_CStateManager_QuestRewardTokenAction__add__);
    QuestRewardTokenAction__SetState(this, 0, v19);
  }
}


UIAtlas_o *__fastcall QuestRewardTokenAction__CreateUIAtlasFromAssetData(
        QuestRewardTokenAction_o *this,
        AssetData_o *assetData,
        System_String_o *name,
        const MethodInfo *method)
{
  UIAtlas_o *result; // x0

  if ( (byte_43501E7 & 1) == 0 )
  {
    sub_B70694(&Method_AssetData_GetObjectList_GameObject___);
    sub_B70694(&Method_AssetData_GetObject_GameObject____69232720);
    this = (QuestRewardTokenAction_o *)sub_B70694(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    byte_43501E7 = 1;
  }
  if ( !assetData )
    goto LABEL_10;
  result = (UIAtlas_o *)AssetData__GetObjectList_Texture2D_(
                          assetData,
                          (const MethodInfo_1BD68D4 *)Method_AssetData_GetObjectList_GameObject___);
  if ( result )
  {
    if ( result->fields.material )
    {
      this = (QuestRewardTokenAction_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                           assetData,
                                           name,
                                           (const MethodInfo_1BD6720 *)Method_AssetData_GetObject_GameObject____69232720);
      if ( this )
        return (UIAtlas_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              (UnityEngine_GameObject_o *)this,
                              (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
LABEL_10:
      sub_B7076C(this, assetData);
    }
    return 0LL;
  }
  return result;
}


// attributes: thunk
void __fastcall QuestRewardTokenAction__DestroyData(QuestRewardTokenAction_o *this, const MethodInfo *method)
{
  QuestRewardTokenAction__ReleaseEventUI(this, method);
}


int32_t __fastcall QuestRewardTokenAction__GetState(QuestRewardTokenAction_o *this, const MethodInfo *method)
{
  QuestRewardTokenAction_o *v2; // x19
  struct CStateManager_QuestRewardTokenAction__o *fsm; // x8

  v2 = this;
  if ( (byte_43501ED & 1) == 0 )
  {
    this = (QuestRewardTokenAction_o *)sub_B70694(&Method_CStateManager_QuestRewardTokenAction__getState__);
    byte_43501ED = 1;
  }
  fsm = v2->fields.fsm;
  if ( !fsm )
    sub_B7076C(this, method);
  return fsm->fields.m_state;
}


void __fastcall QuestRewardTokenAction__Init(QuestRewardTokenAction_o *this, const MethodInfo *method)
{
  QuestRewardTokenAction_o *v2; // x19
  struct UISprite_array *tokenSprite; // x8
  __int64 v4; // x9
  __int64 v5; // x21
  __int64 v6; // x22
  UnityEngine_Object_o *v7; // x20
  __int64 v8; // x1
  struct UISprite_array *v9; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct UILabel_array *tokenName; // x8
  __int64 v12; // x9
  __int64 v13; // x21
  __int64 v14; // x22
  UnityEngine_Object_o *v15; // x20
  struct UILabel_array *v16; // x8
  System_Int32_array **ComponentInChildren_UIWidget; // x0
  UnityEngine_Animation_o **p_animation; // x20
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Int32_array **v25; // x0
  struct SimpleAnimation_o **p_simpleAnimation; // x21
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  UnityEngine_Object_o *simpleAnimation; // x22
  struct SimpleAnimation_o *v34; // x20
  System_String_o *v35; // x0
  QuestRewardTokenAction_c *klass; // x8
  QuestRewardTokenAction_o *v37; // x20
  unsigned __int64 v38; // x10
  int32_t *p_offset; // x11
  __int64 v40; // x0
  UnityEngine_Animation_o *v41; // x21
  UnityEngine_Animation_o *v42; // x21
  System_String_o *name; // x0
  UnityEngine_Animation_o *v44; // x20
  System_String_o *v45; // x0
  struct SimpleAnimation_o *v46; // x20
  System_String_o *v47; // x0
  QuestRewardTokenAction_c *v48; // x8
  QuestRewardTokenAction_o *v49; // x20
  unsigned __int64 v50; // x10
  int32_t *v51; // x11
  __int64 v52; // x0
  __int64 v53; // x0

  v2 = this;
  if ( (byte_43501EA & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Component_GetComponentInChildren_Animation___);
    sub_B70694(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    this = (QuestRewardTokenAction_o *)sub_B70694(&SimpleAnimation_State_TypeInfo);
    byte_43501EA = 1;
  }
  tokenSprite = v2->fields.tokenSprite;
  if ( tokenSprite )
  {
    v4 = *(_QWORD *)&tokenSprite->max_length;
    if ( (int)v4 >= 1 )
    {
      v5 = (int)v4;
      v6 = 4LL;
      while ( v6 - 4 < (unsigned __int64)tokenSprite->max_length )
      {
        v7 = (UnityEngine_Object_o *)*((_QWORD *)&tokenSprite->obj.klass + v6);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (QuestRewardTokenAction_o *)UnityEngine_Object__op_Inequality(v7, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v9 = v2->fields.tokenSprite;
          if ( !v9 )
            goto LABEL_74;
          if ( v6 - 4 >= (unsigned __int64)v9->max_length )
            break;
          this = (QuestRewardTokenAction_o *)*((_QWORD *)&v9->obj.klass + v6);
          if ( !this )
            goto LABEL_74;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          this = (QuestRewardTokenAction_o *)GameObjectExtensions__GetParent(gameObject, 0LL);
          if ( !this )
            goto LABEL_74;
          this = (QuestRewardTokenAction_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          if ( !this )
            goto LABEL_74;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        }
        if ( v6 - 3 >= v5 )
          goto LABEL_20;
        tokenSprite = v2->fields.tokenSprite;
        ++v6;
        if ( !tokenSprite )
          goto LABEL_74;
      }
LABEL_75:
      v53 = sub_B70798(this);
      sub_B70738(v53, 0LL);
    }
  }
LABEL_20:
  tokenName = v2->fields.tokenName;
  if ( tokenName )
  {
    v12 = *(_QWORD *)&tokenName->max_length;
    if ( (int)v12 >= 1 )
    {
      v13 = (int)v12;
      v14 = 4LL;
      while ( v14 - 4 < (unsigned __int64)tokenName->max_length )
      {
        v15 = (UnityEngine_Object_o *)*((_QWORD *)&tokenName->obj.klass + v14);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (QuestRewardTokenAction_o *)UnityEngine_Object__op_Inequality(v15, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v16 = v2->fields.tokenName;
          if ( !v16 )
            goto LABEL_74;
          if ( v14 - 4 >= (unsigned __int64)v16->max_length )
            goto LABEL_75;
          this = (QuestRewardTokenAction_o *)*((_QWORD *)&v16->obj.klass + v14);
          if ( !this )
            goto LABEL_74;
          this = (QuestRewardTokenAction_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          if ( !this )
            goto LABEL_74;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        }
        if ( v14 - 3 >= v13 )
          goto LABEL_36;
        tokenName = v2->fields.tokenName;
        ++v14;
        if ( !tokenName )
          goto LABEL_74;
      }
      goto LABEL_75;
    }
  }
LABEL_36:
  this = (QuestRewardTokenAction_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v2, 0LL);
  if ( !this )
    goto LABEL_74;
  ComponentInChildren_UIWidget = (System_Int32_array **)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                          (UnityEngine_Component_o *)this,
                                                          (const MethodInfo_1BE40A0 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  v2->fields.animation = (struct UnityEngine_Animation_o *)ComponentInChildren_UIWidget;
  p_animation = &v2->fields.animation;
  sub_B70630(
    (BattleServantConfConponent_o *)&v2->fields.animation,
    ComponentInChildren_UIWidget,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  this = (QuestRewardTokenAction_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v2, 0LL);
  if ( !this )
    goto LABEL_74;
  v25 = (System_Int32_array **)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                 (UnityEngine_Component_o *)this,
                                 (const MethodInfo_1BE40A0 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  v2->fields.simpleAnimation = (struct SimpleAnimation_o *)v25;
  p_simpleAnimation = &v2->fields.simpleAnimation;
  sub_B70630((BattleServantConfConponent_o *)&v2->fields.simpleAnimation, v25, v27, v28, v29, v30, v31, v32);
  simpleAnimation = (UnityEngine_Object_o *)v2->fields.simpleAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (QuestRewardTokenAction_o *)UnityEngine_Object__op_Inequality(simpleAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v41 = *p_animation;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (QuestRewardTokenAction_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v41, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_72;
    v42 = *p_animation;
    if ( *p_animation )
    {
      this = (QuestRewardTokenAction_o *)UnityEngine_Animation__get_clip(*p_animation, 0LL);
      if ( this )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
        this = (QuestRewardTokenAction_o *)UnityEngine_Animation__get_Item(v42, name, 0LL);
        if ( this )
        {
          UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)this, 0.0, 0LL);
          v44 = *p_animation;
          if ( v44 )
          {
            this = (QuestRewardTokenAction_o *)UnityEngine_Animation__get_clip(v44, 0LL);
            if ( this )
            {
              v45 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
              this = (QuestRewardTokenAction_o *)UnityEngine_Animation__get_Item(v44, v45, 0LL);
              if ( this )
              {
                UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)this, 0.0, 0LL);
                goto LABEL_72;
              }
            }
          }
        }
      }
    }
LABEL_74:
    sub_B7076C(this, v8);
  }
  v34 = *p_simpleAnimation;
  if ( !*p_simpleAnimation )
    goto LABEL_74;
  this = (QuestRewardTokenAction_o *)v34[1].monitor;
  if ( !this )
    goto LABEL_74;
  v35 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestRewardTokenAction_o *)SimpleAnimation__get_Item(v34, v35, 0LL);
  if ( !this )
    goto LABEL_74;
  klass = this->klass;
  v37 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v38 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((SimpleAnimation_State_c **)p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v38;
      p_offset += 4;
      if ( v38 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_49;
    }
    v40 = (__int64)(&klass[1]._1.castClass + 2 * *p_offset);
  }
  else
  {
LABEL_49:
    v40 = sub_B08590(this, SimpleAnimation_State_TypeInfo, 8LL);
  }
  this = (QuestRewardTokenAction_o *)(*(__int64 (__fastcall **)(QuestRewardTokenAction_o *, _QWORD, float))v40)(
                                       v37,
                                       *(_QWORD *)(v40 + 8),
                                       0.0);
  v46 = *p_simpleAnimation;
  if ( !*p_simpleAnimation )
    goto LABEL_74;
  this = (QuestRewardTokenAction_o *)v46[1].monitor;
  if ( !this )
    goto LABEL_74;
  v47 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestRewardTokenAction_o *)SimpleAnimation__get_Item(v46, v47, 0LL);
  if ( !this )
    goto LABEL_74;
  v48 = this->klass;
  v49 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v50 = 0LL;
    v51 = &v48->_1.interfaceOffsets->offset;
    while ( *((SimpleAnimation_State_c **)v51 - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v50;
      v51 += 4;
      if ( v50 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_69;
    }
    v52 = (__int64)(&v48[1]._1.byval_arg.bits + 4 * *v51);
  }
  else
  {
LABEL_69:
    v52 = sub_B08590(this, SimpleAnimation_State_TypeInfo, 6LL);
  }
  (*(void (__fastcall **)(QuestRewardTokenAction_o *, _QWORD, float))v52)(v49, *(_QWORD *)(v52 + 8), 0.0);
LABEL_72:
  this = (QuestRewardTokenAction_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v2, 0LL);
  if ( !this )
    goto LABEL_74;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


void __fastcall QuestRewardTokenAction__LoadData(
        QuestRewardTokenAction_o *this,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Action_o *v14; // x20
  const MethodInfo *v15; // x3

  if ( (byte_43501E4 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_QuestRewardTokenAction___c__DisplayClass18_0__LoadData_b__0__);
    sub_B70694(&QuestRewardTokenAction___c__DisplayClass18_0_TypeInfo);
    byte_43501E4 = 1;
  }
  v5 = sub_B70764(QuestRewardTokenAction___c__DisplayClass18_0_TypeInfo);
  QuestRewardTokenAction___c__DisplayClass18_0___ctor((QuestRewardTokenAction___c__DisplayClass18_0_o *)v5, 0LL);
  if ( !v5 )
    sub_B7076C(v6, v7);
  *(_QWORD *)(v5 + 16) = endAct;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)endAct, v8, v9, v10, v11, v12, v13);
  v14 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(
    v14,
    (Il2CppObject *)v5,
    Method_QuestRewardTokenAction___c__DisplayClass18_0__LoadData_b__0__,
    0LL);
  QuestRewardTokenAction__LoadEventUI(this, v14, 1, v15);
}


void __fastcall QuestRewardTokenAction__LoadEventUI(
        QuestRewardTokenAction_o *this,
        System_Action_o *callback,
        int32_t loadParallelMax,
        const MethodInfo *method)
{
  AssetData_o *eventUIAssetData; // x0
  struct System_Action_o *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  AssetLoader_LoadEndDataHandler_o *v15; // x21
  const MethodInfo *v16; // x2
  QuestRewardTokenAction_o *v17; // x0
  AssetData_o *v18; // x1

  if ( (byte_43501E5 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&AssetManager_TypeInfo);
    sub_B70694(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B70694(&Method_QuestRewardTokenAction_LoadEventUIEnd__);
    sub_B70694(&StringLiteral_6295/*"EventUI/Prefabs/80285"*/);
    byte_43501E5 = 1;
  }
  eventUIAssetData = this->fields.eventUIAssetData;
  if ( eventUIAssetData && !AssetData__get_IsEmpty(eventUIAssetData, 0LL) )
  {
    if ( callback )
      System_Action__Invoke(callback, 0LL);
  }
  else
  {
    v8 = (struct System_Action_o *)System_Delegate__Combine(
                                     (System_Delegate_o *)this->fields.eventUILoadCallbackFunc,
                                     (System_Delegate_o *)callback,
                                     0LL);
    if ( v8 && v8->klass != System_Action_TypeInfo )
    {
      v17 = (QuestRewardTokenAction_o *)sub_B70A60(v8);
      goto LABEL_13;
    }
    this->fields.eventUILoadCallbackFunc = v8;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.eventUILoadCallbackFunc,
      (System_Int32_array **)v8,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
    if ( !this->fields.isEventUILoad )
    {
      this->fields.isEventUILoad = 1;
      v15 = (AssetLoader_LoadEndDataHandler_o *)sub_B70764(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v15,
        (Il2CppObject *)this,
        Method_QuestRewardTokenAction_LoadEventUIEnd__,
        0LL);
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      if ( !AssetManager__loadAssetStorage((System_String_o *)StringLiteral_6295/*"EventUI/Prefabs/80285"*/, v15, loadParallelMax, 0LL) )
      {
        this->fields.isEventUILoad = 0;
        v17 = this;
        v18 = 0LL;
LABEL_13:
        QuestRewardTokenAction__LoadEventUIEnd(v17, v18, v16);
      }
    }
  }
}


void __fastcall QuestRewardTokenAction__LoadEventUIEnd(
        QuestRewardTokenAction_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  QuestRewardTokenAction_o *v10; // x0
  const MethodInfo *v11; // x3
  struct UIAtlas_o *UIAtlasFromAssetData; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  BattleServantConfConponent_o *p_eventUILoadCallbackFunc; // x19
  System_Action_o *v20; // x20
  struct System_Action_o *eventUILoadCallbackFunc; // t1

  if ( (byte_43501E6 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_5465/*"DownloadEventUIAtlas8028500"*/);
    byte_43501E6 = 1;
  }
  if ( this->fields.isEventUILoad )
  {
    this->fields.eventUIAssetData = assetData;
    this->fields.isEventUILoad = 0;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.eventUIAssetData,
      (System_Int32_array **)assetData,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    UIAtlasFromAssetData = QuestRewardTokenAction__CreateUIAtlasFromAssetData(
                             v10,
                             assetData,
                             (System_String_o *)StringLiteral_5465/*"DownloadEventUIAtlas8028500"*/,
                             v11);
    this->fields.eventUIDownloadAtlas = UIAtlasFromAssetData;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.eventUIDownloadAtlas,
      (System_Int32_array **)UIAtlasFromAssetData,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  eventUILoadCallbackFunc = this->fields.eventUILoadCallbackFunc;
  p_eventUILoadCallbackFunc = (BattleServantConfConponent_o *)&this->fields.eventUILoadCallbackFunc;
  v20 = eventUILoadCallbackFunc;
  if ( eventUILoadCallbackFunc )
  {
    p_eventUILoadCallbackFunc->klass = 0LL;
    sub_B70630(p_eventUILoadCallbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    System_Action__Invoke(v20, 0LL);
  }
}


void __fastcall QuestRewardTokenAction__Play(
        QuestRewardTokenAction_o *this,
        System_Action_o *end_act,
        float fade_in_time,
        const MethodInfo *method)
{
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v13; // x1
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v15; // x0
  System_Action_o *v16; // x21

  if ( (byte_43501EC & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&AvalonSceneManager_TypeInfo);
    sub_B70694(&Method_QuestRewardTokenAction__Play_b__26_0__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_43501EC = 1;
  }
  this->fields.endAct = end_act;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.endAct,
    (System_Int32_array **)end_act,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7,
    v8);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( fade_in_time <= 0.0 )
  {
    v15 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v15 = AvalonSceneManager_TypeInfo;
    }
    fade_in_time = v15->static_fields->DEFAULT_FADE_TIME;
  }
  v16 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v16, (Il2CppObject *)this, Method_QuestRewardTokenAction__Play_b__26_0__, 0LL);
  if ( !Instance )
LABEL_11:
    sub_B7076C(gameObject, v13);
  CommonUI__maskFadein(Instance, fade_in_time, v16, 0LL);
}


void __fastcall QuestRewardTokenAction__ReleaseEventUI(QuestRewardTokenAction_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct AssetData_o **p_eventUIAssetData; // x20
  AssetData_o *eventUIAssetData; // x21
  struct UIAtlas_o **p_eventUIDownloadAtlas; // x19
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_43501E8 & 1) == 0 )
  {
    sub_B70694(&AssetManager_TypeInfo);
    sub_B70694(&StringLiteral_6295/*"EventUI/Prefabs/80285"*/);
    byte_43501E8 = 1;
  }
  if ( this->fields.isEventUILoad )
  {
    this->fields.isEventUILoad = 0;
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage((System_String_o *)StringLiteral_6295/*"EventUI/Prefabs/80285"*/, 0LL);
    p_eventUIAssetData = &this->fields.eventUIAssetData;
  }
  else
  {
    p_eventUIAssetData = &this->fields.eventUIAssetData;
    eventUIAssetData = this->fields.eventUIAssetData;
    if ( eventUIAssetData )
    {
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      AssetManager__releaseAsset_31197044(eventUIAssetData, 0LL);
    }
  }
  this->fields.eventUIDownloadAtlas = 0LL;
  p_eventUIDownloadAtlas = &this->fields.eventUIDownloadAtlas;
  sub_B70630((BattleServantConfConponent_o *)p_eventUIDownloadAtlas, 0LL, v2, v3, v4, v5, v6, v7);
  *(p_eventUIDownloadAtlas - 1) = 0LL;
  sub_B70630((BattleServantConfConponent_o *)p_eventUIAssetData, 0LL, v12, v13, v14, v15, v16, v17);
}


bool __fastcall QuestRewardTokenAction__SetEventUI(
        QuestRewardTokenAction_o *this,
        UISprite_o *sprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  UIAtlas_o *IsNullOrEmpty; // x0
  __int64 v8; // x1
  UnityEngine_Object_o *eventUIDownloadAtlas; // x22
  UISprite_o *v10; // x0
  System_String_o *v11; // x1

  if ( (byte_43501E9 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_43501E9 = 1;
  }
  IsNullOrEmpty = (UIAtlas_o *)System_String__IsNullOrEmpty(spriteName, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    goto LABEL_8;
  eventUIDownloadAtlas = (UnityEngine_Object_o *)this->fields.eventUIDownloadAtlas;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  IsNullOrEmpty = (UIAtlas_o *)UnityEngine_Object__op_Equality(eventUIDownloadAtlas, 0LL, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
LABEL_8:
    if ( sprite )
    {
      v10 = sprite;
      v11 = 0LL;
LABEL_10:
      UISprite__set_spriteName(v10, v11, 0LL);
      return 1;
    }
    goto LABEL_17;
  }
  IsNullOrEmpty = this->fields.eventUIDownloadAtlas;
  if ( !IsNullOrEmpty )
    goto LABEL_17;
  IsNullOrEmpty = (UIAtlas_o *)UIAtlas__GetSprite(IsNullOrEmpty, spriteName, 0LL);
  if ( IsNullOrEmpty )
  {
    if ( sprite )
    {
      UISprite__set_atlas(sprite, this->fields.eventUIDownloadAtlas, 0LL);
      v10 = sprite;
      v11 = spriteName;
      goto LABEL_10;
    }
LABEL_17:
    sub_B7076C(IsNullOrEmpty, v8);
  }
  if ( !sprite )
    goto LABEL_17;
  UISprite__set_spriteName(sprite, 0LL, 0LL);
  return 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestRewardTokenAction__SetState(
        QuestRewardTokenAction_o *this,
        int32_t state,
        const MethodInfo *method)
{
  struct CStateManager_QuestRewardTokenAction__o *fsm; // x0

  if ( (byte_43501EE & 1) == 0 )
  {
    sub_B70694(&Method_CStateManager_QuestRewardTokenAction__setState__);
    byte_43501EE = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_B7076C(0LL, *(_QWORD *)&state);
  CStateManager_QAASpotStateController_IMapSpot___setState(
    (CStateManager_QAASpotStateController_IMapSpot__o *)fsm,
    state,
    (const MethodInfo_2C8014C *)Method_CStateManager_QuestRewardTokenAction__setState__);
}


void __fastcall QuestRewardTokenAction__Setup(
        QuestRewardTokenAction_o *this,
        QuestRewardInfo_array *infos,
        const MethodInfo *method)
{
  void *transform; // x0
  __int64 v6; // x1
  QuestRewardTokenAction___c_c *v7; // x0
  struct QuestRewardTokenAction___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__25_0; // x21
  Il2CppObject *v10; // x22
  struct QuestRewardTokenAction___c_StaticFields *v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  __int64 v18; // x8
  __int64 v19; // x22
  __int64 v20; // x23
  __int64 v21; // x8
  int v22; // w21
  int v23; // w9
  struct QuestRewardTokenAction_StaticFields *v24; // x8
  int v25; // w21
  int v26; // w8
  struct UISprite_array *tokenSprite; // x8
  unsigned __int64 v28; // x26
  unsigned __int64 max_length; // x9
  UnityEngine_Object_o *v30; // x21
  struct UISprite_array *v31; // x8
  UISprite_o *v32; // x21
  System_String_o *v33; // x0
  const MethodInfo *v34; // x3
  struct UILabel_array *tokenName; // x8
  unsigned __int64 v36; // x9
  UnityEngine_Object_o *v37; // x21
  struct UILabel_array *v38; // x8
  UILabel_o *v39; // x21
  unsigned __int64 v40; // x8
  __int64 v41; // x0
  struct ScreenTouchInformationComponent_o **p_screenTouchInfo; // x20
  UnityEngine_Object_o *screenTouchInfo; // x21
  CommonUI_o *Instance; // x21
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  __int64 v52; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_43501EB & 1) == 0 )
  {
    sub_B70694(&Method_System_Array_Sort_QuestRewardInfo___);
    sub_B70694(&Method_System_Comparison_QuestRewardInfo___ctor__);
    sub_B70694(&System_Comparison_QuestRewardInfo__TypeInfo);
    sub_B70694(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&QuestRewardTokenAction_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_QuestRewardTokenAction___c__Setup_b__25_0__);
    sub_B70694(&QuestRewardTokenAction___c_TypeInfo);
    byte_43501EB = 1;
  }
  v52 = 0LL;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_66;
  transform = UnityEngine_Component__GetComponentInChildren_UIWidget_(
                (UnityEngine_Component_o *)transform,
                (const MethodInfo_1BE40A0 *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
  if ( !transform )
    goto LABEL_66;
  *((_BYTE *)transform + 101) = 1;
  v7 = QuestRewardTokenAction___c_TypeInfo;
  if ( (BYTE3(QuestRewardTokenAction___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestRewardTokenAction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRewardTokenAction___c_TypeInfo);
    v7 = QuestRewardTokenAction___c_TypeInfo;
  }
  static_fields = v7->static_fields;
  _9__25_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__25_0;
  if ( !_9__25_0 )
  {
    if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      static_fields = QuestRewardTokenAction___c_TypeInfo->static_fields;
    }
    v10 = (Il2CppObject *)static_fields->__9;
    _9__25_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B70764(System_Comparison_QuestRewardInfo__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__25_0,
      v10,
      Method_QuestRewardTokenAction___c__Setup_b__25_0__,
      (const MethodInfo_2B05B38 *)Method_System_Comparison_QuestRewardInfo___ctor__);
    v11 = QuestRewardTokenAction___c_TypeInfo->static_fields;
    v11->__9__25_0 = (struct System_Comparison_QuestRewardInfo__o *)_9__25_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v11->__9__25_0,
      (System_Int32_array **)_9__25_0,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
  System_Array__Sort_BattleBuffData_BuffData_(
    (BattleBuffData_BuffData_array *)infos,
    (System_Comparison_T__o *)_9__25_0,
    (const MethodInfo_1BCD49C *)Method_System_Array_Sort_QuestRewardInfo___);
  if ( !infos )
    goto LABEL_66;
  v18 = *(_QWORD *)&infos->max_length;
  if ( (int)v18 >= 1 )
  {
    v19 = (int)v18;
    v20 = 4LL;
    while ( 1 )
    {
      v21 = *((_QWORD *)&infos->obj.klass + v20);
      if ( v21 && *(_DWORD *)(v21 + 16) == 13 )
      {
        transform = QuestRewardTokenAction_TypeInfo;
        v22 = *(_DWORD *)(v21 + 20);
        if ( (WORD1(QuestRewardTokenAction_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 )
        {
          if ( !QuestRewardTokenAction_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(QuestRewardTokenAction_TypeInfo);
            transform = QuestRewardTokenAction_TypeInfo;
          }
          v23 = WORD1(QuestRewardTokenAction_TypeInfo->vtable._0_Equals.methodPtr) & 0x400;
        }
        else
        {
          v23 = 0;
        }
        v24 = (struct QuestRewardTokenAction_StaticFields *)*((_QWORD *)transform + 23);
        v25 = v22 - v24->TOKEN_EVENT_ID;
        HIDWORD(v52) = v25;
        if ( v25 >= 27 )
        {
          if ( v23 && !*((_DWORD *)transform + 56) )
          {
            j_il2cpp_runtime_class_init_0(transform);
            v24 = QuestRewardTokenAction_TypeInfo->static_fields;
          }
          v26 = v25 + v24->TOKEN_IMAGE_ID + 1;
        }
        else
        {
          if ( v23 && !*((_DWORD *)transform + 56) )
          {
            j_il2cpp_runtime_class_init_0(transform);
            v24 = QuestRewardTokenAction_TypeInfo->static_fields;
          }
          v26 = v24->TOKEN_IMAGE_ID + v25;
        }
        LODWORD(v52) = v26;
        tokenSprite = this->fields.tokenSprite;
        v28 = v20 - 4;
        if ( tokenSprite )
        {
          max_length = tokenSprite->max_length;
          if ( (__int64)v28 < (int)max_length )
          {
            if ( v28 >= max_length )
              goto LABEL_55;
            v30 = (UnityEngine_Object_o *)*((_QWORD *)&tokenSprite->obj.klass + v20);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            transform = (void *)UnityEngine_Object__op_Inequality(v30, 0LL, 0LL);
            if ( ((unsigned __int8)transform & 1) != 0 )
            {
              v31 = this->fields.tokenSprite;
              if ( !v31 )
                goto LABEL_66;
              if ( v28 >= v31->max_length )
                goto LABEL_55;
              v32 = (UISprite_o *)*((_QWORD *)&v31->obj.klass + v20);
              v33 = System_Int32__ToString((int32_t)&v52, 0LL);
              transform = (void *)QuestRewardTokenAction__SetEventUI(this, v32, v33, v34);
            }
          }
        }
        tokenName = this->fields.tokenName;
        if ( tokenName )
        {
          v36 = tokenName->max_length;
          if ( (__int64)v28 < (int)v36 )
          {
            if ( v28 >= v36 )
              goto LABEL_55;
            v37 = (UnityEngine_Object_o *)*((_QWORD *)&tokenName->obj.klass + v20);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            transform = (void *)UnityEngine_Object__op_Inequality(v37, 0LL, 0LL);
            if ( ((unsigned __int8)transform & 1) != 0 )
            {
              v38 = this->fields.tokenName;
              if ( !v38 )
                goto LABEL_66;
              if ( v28 >= v38->max_length )
                goto LABEL_55;
              v39 = (UILabel_o *)*((_QWORD *)&v38->obj.klass + v20);
              transform = System_Int32__ToString((int32_t)&v52 + 4, 0LL);
              if ( !v39 )
                goto LABEL_66;
              UILabel__set_text(v39, (System_String_o *)transform, 0LL);
            }
          }
        }
      }
      v40 = v20 - 3;
      if ( v20 - 3 >= v19 )
        break;
      ++v20;
      if ( v40 >= infos->max_length )
      {
LABEL_55:
        v41 = sub_B70798(transform);
        sub_B70738(v41, 0LL);
      }
    }
  }
  p_screenTouchInfo = &this->fields.screenTouchInfo;
  screenTouchInfo = (UnityEngine_Object_o *)this->fields.screenTouchInfo;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(screenTouchInfo, 0LL, 0LL) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( Instance )
    {
      transform = CommonUI__CreateScreeenTouchInfo(Instance, (UnityEngine_Transform_o *)transform, 0, 0LL);
      if ( transform )
      {
        Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                           (UnityEngine_GameObject_o *)transform,
                                                           (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
        *p_screenTouchInfo = (struct ScreenTouchInformationComponent_o *)Component_srcLineSprite;
        sub_B70630(
          (BattleServantConfConponent_o *)&this->fields.screenTouchInfo,
          Component_srcLineSprite,
          v46,
          v47,
          v48,
          v49,
          v50,
          v51);
        goto LABEL_63;
      }
    }
LABEL_66:
    sub_B7076C(transform, v6);
  }
LABEL_63:
  transform = *p_screenTouchInfo;
  if ( !*p_screenTouchInfo )
    goto LABEL_66;
  transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_66;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
}


void __fastcall QuestRewardTokenAction__Update(QuestRewardTokenAction_o *this, const MethodInfo *method)
{
  struct CStateManager_QuestRewardTokenAction__o *fsm; // x0

  if ( (byte_43501E3 & 1) == 0 )
  {
    sub_B70694(&Method_CStateManager_QuestRewardTokenAction__update__);
    sub_B70694(&CTouch_TypeInfo);
    byte_43501E3 = 1;
  }
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__process(0LL);
  fsm = this->fields.fsm;
  if ( fsm )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)fsm,
      (const MethodInfo_2C80124 *)Method_CStateManager_QuestRewardTokenAction__update__);
}


void __fastcall QuestRewardTokenAction___Play_b__26_0(QuestRewardTokenAction_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  QuestRewardTokenAction__SetState(this, 1, v2);
}


void __fastcall QuestRewardTokenAction_StateNone___ctor(
        QuestRewardTokenAction_StateNone_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestRewardTokenAction_StateNone__begin(
        QuestRewardTokenAction_StateNone_o *this,
        QuestRewardTokenAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestRewardTokenAction_StateNone__end(
        QuestRewardTokenAction_StateNone_o *this,
        QuestRewardTokenAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestRewardTokenAction_StateNone__update(
        QuestRewardTokenAction_StateNone_o *this,
        QuestRewardTokenAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestRewardTokenAction_StatePlay___ctor(
        QuestRewardTokenAction_StatePlay_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestRewardTokenAction_StatePlay__begin(
        QuestRewardTokenAction_StatePlay_o *this,
        QuestRewardTokenAction_o *that,
        const MethodInfo *method)
{
  UnityEngine_Object_o *simpleAnimation; // x20
  struct SimpleAnimation_o *v5; // x20
  System_String_o *v6; // x0
  struct SimpleAnimation_o *v7; // x20
  System_String_o *v8; // x0
  struct SimpleAnimation_o *v9; // x20
  System_String_o *v10; // x0
  QuestRewardTokenAction_StatePlay_c *klass; // x8
  QuestRewardTokenAction_StatePlay_o *v12; // x20
  unsigned __int64 v13; // x10
  int32_t *p_offset; // x11
  __int64 v15; // x0
  UnityEngine_Object_o *animation; // x20
  UnityEngine_Animation_o *v17; // x20
  System_String_o *name; // x0
  UnityEngine_Animation_o *v19; // x20
  System_String_o *v20; // x0
  UnityEngine_Animation_o *v21; // x20
  System_String_o *v22; // x0
  UnityEngine_Animation_o *v23; // x19
  System_String_o *v24; // x0
  struct SimpleAnimation_o *v25; // x19
  System_String_o *v26; // x0
  QuestRewardTokenAction_StatePlay_c *v27; // x8
  QuestRewardTokenAction_StatePlay_o *v28; // x19
  unsigned __int64 v29; // x10
  int32_t *v30; // x11
  __int64 v31; // x0

  if ( (byte_4351B31 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    this = (QuestRewardTokenAction_StatePlay_o *)sub_B70694(&SimpleAnimation_State_TypeInfo);
    byte_4351B31 = 1;
  }
  if ( !that )
    goto LABEL_51;
  simpleAnimation = (UnityEngine_Object_o *)that->fields.simpleAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (QuestRewardTokenAction_StatePlay_o *)UnityEngine_Object__op_Inequality(simpleAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    animation = (UnityEngine_Object_o *)that->fields.animation;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (QuestRewardTokenAction_StatePlay_o *)UnityEngine_Object__op_Inequality(animation, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      return;
    v17 = that->fields.animation;
    if ( v17 )
    {
      this = (QuestRewardTokenAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.animation, 0LL);
      if ( this )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
        this = (QuestRewardTokenAction_StatePlay_o *)UnityEngine_Animation__IsPlaying(v17, name, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v19 = that->fields.animation;
          if ( !v19 )
            goto LABEL_51;
          this = (QuestRewardTokenAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.animation, 0LL);
          if ( !this )
            goto LABEL_51;
          v20 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
          this = (QuestRewardTokenAction_StatePlay_o *)UnityEngine_Animation__Play_51542184(v19, v20, 0LL);
        }
        v21 = that->fields.animation;
        if ( v21 )
        {
          this = (QuestRewardTokenAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.animation, 0LL);
          if ( this )
          {
            v22 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
            this = (QuestRewardTokenAction_StatePlay_o *)UnityEngine_Animation__get_Item(v21, v22, 0LL);
            if ( this )
            {
              UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)this, 0.0, 0LL);
              v23 = that->fields.animation;
              if ( v23 )
              {
                this = (QuestRewardTokenAction_StatePlay_o *)UnityEngine_Animation__get_clip(v23, 0LL);
                if ( this )
                {
                  v24 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
                  this = (QuestRewardTokenAction_StatePlay_o *)UnityEngine_Animation__get_Item(v23, v24, 0LL);
                  if ( this )
                  {
                    UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)this, 1.0, 0LL);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_51:
    sub_B7076C(this, that);
  }
  v5 = that->fields.simpleAnimation;
  if ( !v5 )
    goto LABEL_51;
  this = (QuestRewardTokenAction_StatePlay_o *)v5[1].monitor;
  if ( !this )
    goto LABEL_51;
  v6 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestRewardTokenAction_StatePlay_o *)SimpleAnimation__IsPlaying(v5, v6, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v7 = that->fields.simpleAnimation;
    if ( !v7 )
      goto LABEL_51;
    this = (QuestRewardTokenAction_StatePlay_o *)v7[1].monitor;
    if ( !this )
      goto LABEL_51;
    v8 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
    this = (QuestRewardTokenAction_StatePlay_o *)SimpleAnimation__Play_16672920(v7, v8, 0LL);
  }
  v9 = that->fields.simpleAnimation;
  if ( !v9 )
    goto LABEL_51;
  this = (QuestRewardTokenAction_StatePlay_o *)v9[1].monitor;
  if ( !this )
    goto LABEL_51;
  v10 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestRewardTokenAction_StatePlay_o *)SimpleAnimation__get_Item(v9, v10, 0LL);
  if ( !this )
    goto LABEL_51;
  klass = this->klass;
  v12 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v13 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((SimpleAnimation_State_c **)p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v13;
      p_offset += 4;
      if ( v13 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_21;
    }
    v15 = (__int64)(&klass->vtable._6_end.method + 2 * *p_offset);
  }
  else
  {
LABEL_21:
    v15 = sub_B08590(this, SimpleAnimation_State_TypeInfo, 6LL);
  }
  this = (QuestRewardTokenAction_StatePlay_o *)(*(__int64 (__fastcall **)(QuestRewardTokenAction_StatePlay_o *, _QWORD, float))v15)(
                                                 v12,
                                                 *(_QWORD *)(v15 + 8),
                                                 0.0);
  v25 = that->fields.simpleAnimation;
  if ( !v25 )
    goto LABEL_51;
  this = (QuestRewardTokenAction_StatePlay_o *)v25[1].monitor;
  if ( !this )
    goto LABEL_51;
  v26 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestRewardTokenAction_StatePlay_o *)SimpleAnimation__get_Item(v25, v26, 0LL);
  if ( !this )
    goto LABEL_51;
  v27 = this->klass;
  v28 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v29 = 0LL;
    v30 = &v27->_1.interfaceOffsets->offset;
    while ( *((SimpleAnimation_State_c **)v30 - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v29;
      v30 += 4;
      if ( v29 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_48;
    }
    v31 = (__int64)(&v27[1]._1.namespaze + 2 * *v30);
  }
  else
  {
LABEL_48:
    v31 = sub_B08590(this, SimpleAnimation_State_TypeInfo, 8LL);
  }
  (*(void (__fastcall **)(QuestRewardTokenAction_StatePlay_o *, _QWORD, float))v31)(v28, *(_QWORD *)(v31 + 8), 1.0);
}


void __fastcall QuestRewardTokenAction_StatePlay__end(
        QuestRewardTokenAction_StatePlay_o *this,
        QuestRewardTokenAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestRewardTokenAction_StatePlay__update(
        QuestRewardTokenAction_StatePlay_o *this,
        QuestRewardTokenAction_o *that,
        const MethodInfo *method)
{
  UnityEngine_Object_o *simpleAnimation; // x20
  struct SimpleAnimation_o *v5; // x20
  System_String_o *name; // x0
  UnityEngine_Object_o *animation; // x20
  UnityEngine_Animation_o *v8; // x20
  System_String_o *v9; // x0

  if ( (byte_4351B32 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    this = (QuestRewardTokenAction_StatePlay_o *)sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4351B32 = 1;
  }
  if ( !that )
    goto LABEL_23;
  simpleAnimation = (UnityEngine_Object_o *)that->fields.simpleAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (QuestRewardTokenAction_StatePlay_o *)UnityEngine_Object__op_Inequality(simpleAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v5 = that->fields.simpleAnimation;
    if ( !v5 )
      goto LABEL_23;
    this = (QuestRewardTokenAction_StatePlay_o *)v5[1].monitor;
    if ( !this )
      goto LABEL_23;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
    if ( SimpleAnimation__IsPlaying(v5, name, 0LL) )
      return;
LABEL_19:
    this = (QuestRewardTokenAction_StatePlay_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( this )
    {
      if ( !CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0LL) )
        QuestRewardTokenAction__SetState(that, 2, 0LL);
      return;
    }
LABEL_23:
    sub_B7076C(this, that);
  }
  animation = (UnityEngine_Object_o *)that->fields.animation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (QuestRewardTokenAction_StatePlay_o *)UnityEngine_Object__op_Inequality(animation, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v8 = that->fields.animation;
    if ( !v8 )
      goto LABEL_23;
    this = (QuestRewardTokenAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.animation, 0LL);
    if ( !this )
      goto LABEL_23;
    v9 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
    if ( UnityEngine_Animation__IsPlaying(v8, v9, 0LL) )
      return;
    goto LABEL_19;
  }
}


void __fastcall QuestRewardTokenAction_StateTouchWait___ctor(
        QuestRewardTokenAction_StateTouchWait_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestRewardTokenAction_StateTouchWait__begin(
        QuestRewardTokenAction_StateTouchWait_o *this,
        QuestRewardTokenAction_o *that,
        const MethodInfo *method)
{
  if ( !that
    || (this = (QuestRewardTokenAction_StateTouchWait_o *)that->fields.screenTouchInfo) == 0LL
    || (this = (QuestRewardTokenAction_StateTouchWait_o *)UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)this,
                                                            0LL)) == 0LL )
  {
    sub_B7076C(this, that);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
}


void __fastcall QuestRewardTokenAction_StateTouchWait__end(
        QuestRewardTokenAction_StateTouchWait_o *this,
        QuestRewardTokenAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestRewardTokenAction_StateTouchWait__update(
        QuestRewardTokenAction_StateTouchWait_o *this,
        QuestRewardTokenAction_o *that,
        const MethodInfo *method)
{
  __int64 v4; // x20
  UnityEngine_GameObject_o *isTouchPush; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  __int64 v13; // x19
  CommonUI_o *Instance; // x21
  AvalonSceneManager_c *v15; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v17; // x22

  if ( (byte_4351B33 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&AvalonSceneManager_TypeInfo);
    sub_B70694(&CTouch_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&Method_QuestRewardTokenAction_StateTouchWait___c__DisplayClass1_0__update_b__0__);
    sub_B70694(&QuestRewardTokenAction_StateTouchWait___c__DisplayClass1_0_TypeInfo);
    byte_4351B33 = 1;
  }
  v4 = sub_B70764(QuestRewardTokenAction_StateTouchWait___c__DisplayClass1_0_TypeInfo);
  QuestRewardTokenAction_StateTouchWait___c__DisplayClass1_0___ctor(
    (QuestRewardTokenAction_StateTouchWait___c__DisplayClass1_0_o *)v4,
    0LL);
  if ( !v4 )
    goto LABEL_21;
  *(_QWORD *)(v4 + 16) = that;
  v13 = v4 + 16;
  sub_B70630((BattleServantConfConponent_o *)(v4 + 16), (System_Int32_array **)that, v7, v8, v9, v10, v11, v12);
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  isTouchPush = (UnityEngine_GameObject_o *)CTouch__isTouchPush(0LL);
  if ( ((unsigned __int8)isTouchPush & 1) != 0 )
  {
    if ( *(_QWORD *)v13 )
    {
      isTouchPush = *(UnityEngine_GameObject_o **)(*(_QWORD *)v13 + 104LL);
      if ( isTouchPush )
      {
        isTouchPush = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)isTouchPush, 0LL);
        if ( isTouchPush )
        {
          UnityEngine_GameObject__SetActive(isTouchPush, 0, 0LL);
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(0, 0LL);
          Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v15 = AvalonSceneManager_TypeInfo;
          if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
            v15 = AvalonSceneManager_TypeInfo;
          }
          DEFAULT_FADE_TIME = v15->static_fields->DEFAULT_FADE_TIME;
          v17 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
          System_Action___ctor(
            v17,
            (Il2CppObject *)v4,
            Method_QuestRewardTokenAction_StateTouchWait___c__DisplayClass1_0__update_b__0__,
            0LL);
          if ( Instance )
          {
            CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v17, 0LL);
            isTouchPush = *(UnityEngine_GameObject_o **)v13;
            if ( *(_QWORD *)v13 )
            {
              QuestRewardTokenAction__SetState((QuestRewardTokenAction_o *)isTouchPush, 0, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_21:
    sub_B7076C(isTouchPush, v6);
  }
}


void __fastcall QuestRewardTokenAction_StateTouchWait___c__DisplayClass1_0___ctor(
        QuestRewardTokenAction_StateTouchWait___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestRewardTokenAction_StateTouchWait___c__DisplayClass1_0___update_b__0(
        QuestRewardTokenAction_StateTouchWait___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  struct QuestRewardTokenAction_o *that; // x8

  that = this->fields.that;
  if ( !that )
    sub_B7076C(this, method);
  ActionExtensions__Call(that->fields.endAct, 0LL);
}


void __fastcall QuestRewardTokenAction___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_4351B30 & 1) == 0 )
  {
    sub_B70694(&QuestRewardTokenAction___c_TypeInfo);
    byte_4351B30 = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(QuestRewardTokenAction___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)QuestRewardTokenAction___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B70630(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
}


void __fastcall QuestRewardTokenAction___c___ctor(QuestRewardTokenAction___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall QuestRewardTokenAction___c___Setup_b__25_0(
        QuestRewardTokenAction___c_o *this,
        QuestRewardInfo_o *x,
        QuestRewardInfo_o *y,
        const MethodInfo *method)
{
  if ( !x || !y )
    sub_B7076C(this, x);
  return x->fields.objectId - y->fields.objectId;
}


void __fastcall QuestRewardTokenAction___c__DisplayClass18_0___ctor(
        QuestRewardTokenAction___c__DisplayClass18_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestRewardTokenAction___c__DisplayClass18_0___LoadData_b__0(
        QuestRewardTokenAction___c__DisplayClass18_0_o *this,
        const MethodInfo *method)
{
  System_Action_o *endAct; // x0

  endAct = this->fields.endAct;
  if ( endAct )
    ActionExtensions__Call(endAct, 0LL);
}