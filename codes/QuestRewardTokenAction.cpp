void __fastcall QuestRewardTokenAction___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_418607D & 1) == 0 )
  {
    sub_B2C35C(&QuestRewardTokenAction_TypeInfo, v1);
    byte_418607D = 1;
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct CStateManager_QuestRewardTokenAction__o **p_fsm; // x20
  CStateManager_QAASpotStateController_IMapSpot__o *v9; // x21
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct CStateManager_QuestRewardTokenAction__o *fsm; // x21
  QuestRewardTokenAction_StateNone_o *v17; // x22
  __int64 v18; // x0
  __int64 v19; // x1
  CStateManager_QAASpotStateController_IMapSpot__o *v20; // x21
  QuestRewardTokenAction_StatePlay_o *v21; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v22; // x20
  QuestRewardTokenAction_StateTouchWait_o *v23; // x21
  const MethodInfo *v24; // x2

  if ( (byte_4186070 & 1) == 0 )
  {
    sub_B2C35C(&Method_CStateManager_QuestRewardTokenAction___ctor__, method);
    sub_B2C35C(&Method_CStateManager_QuestRewardTokenAction__add__, v3);
    sub_B2C35C(&CStateManager_QuestRewardTokenAction__TypeInfo, v4);
    sub_B2C35C(&QuestRewardTokenAction_StateNone_TypeInfo, v5);
    sub_B2C35C(&QuestRewardTokenAction_StatePlay_TypeInfo, v6);
    sub_B2C35C(&QuestRewardTokenAction_StateTouchWait_TypeInfo, v7);
    byte_4186070 = 1;
  }
  p_fsm = &this->fields.fsm;
  if ( !this->fields.fsm )
  {
    v9 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B2C42C(CStateManager_QuestRewardTokenAction__TypeInfo);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v9,
      (QAASpotStateController_IMapSpot_o *)this,
      3,
      (const MethodInfo_2A08354 *)Method_CStateManager_QuestRewardTokenAction___ctor__);
    this->fields.fsm = (struct CStateManager_QuestRewardTokenAction__o *)v9;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.fsm,
      (System_Int32_array **)v9,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
    fsm = this->fields.fsm;
    v17 = (QuestRewardTokenAction_StateNone_o *)sub_B2C42C(QuestRewardTokenAction_StateNone_TypeInfo);
    QuestRewardTokenAction_StateNone___ctor(v17, 0LL);
    if ( !fsm )
      goto LABEL_8;
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)fsm,
      0,
      (IState_T__o *)v17,
      (const MethodInfo_2A08420 *)Method_CStateManager_QuestRewardTokenAction__add__);
    v20 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_fsm;
    v21 = (QuestRewardTokenAction_StatePlay_o *)sub_B2C42C(QuestRewardTokenAction_StatePlay_TypeInfo);
    QuestRewardTokenAction_StatePlay___ctor(v21, 0LL);
    if ( !v20
      || (CStateManager_QAASpotStateController_IMapSpot___add(
            v20,
            1,
            (IState_T__o *)v21,
            (const MethodInfo_2A08420 *)Method_CStateManager_QuestRewardTokenAction__add__),
          v22 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_fsm,
          v23 = (QuestRewardTokenAction_StateTouchWait_o *)sub_B2C42C(QuestRewardTokenAction_StateTouchWait_TypeInfo),
          QuestRewardTokenAction_StateTouchWait___ctor(v23, 0LL),
          !v22) )
    {
LABEL_8:
      sub_B2C434(v18, v19);
    }
    CStateManager_QAASpotStateController_IMapSpot___add(
      v22,
      2,
      (IState_T__o *)v23,
      (const MethodInfo_2A08420 *)Method_CStateManager_QuestRewardTokenAction__add__);
    QuestRewardTokenAction__SetState(this, 0, v24);
  }
}


UIAtlas_o *__fastcall QuestRewardTokenAction__CreateUIAtlasFromAssetData(
        QuestRewardTokenAction_o *this,
        AssetData_o *assetData,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  UIAtlas_o *result; // x0

  if ( (byte_4186075 & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetData_GetObjectList_GameObject___, assetData);
    sub_B2C35C(&Method_AssetData_GetObject_GameObject____67377624, v6);
    this = (QuestRewardTokenAction_o *)sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v7);
    byte_4186075 = 1;
  }
  if ( !assetData )
    goto LABEL_10;
  result = (UIAtlas_o *)AssetData__GetObjectList_Texture2D_(
                          assetData,
                          (const MethodInfo_17204F8 *)Method_AssetData_GetObjectList_GameObject___);
  if ( result )
  {
    if ( result->fields.material )
    {
      this = (QuestRewardTokenAction_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                           assetData,
                                           name,
                                           (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
      if ( this )
        return (UIAtlas_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              (UnityEngine_GameObject_o *)this,
                              (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
LABEL_10:
      sub_B2C434(this, assetData);
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
  if ( (byte_418607B & 1) == 0 )
  {
    this = (QuestRewardTokenAction_o *)sub_B2C35C(&Method_CStateManager_QuestRewardTokenAction__getState__, method);
    byte_418607B = 1;
  }
  fsm = v2->fields.fsm;
  if ( !fsm )
    sub_B2C434(this, method);
  return fsm->fields.m_state;
}


void __fastcall QuestRewardTokenAction__Init(QuestRewardTokenAction_o *this, const MethodInfo *method)
{
  QuestRewardTokenAction_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct UISprite_array *tokenSprite; // x8
  __int64 v7; // x9
  __int64 v8; // x21
  __int64 v9; // x22
  UnityEngine_Object_o *v10; // x20
  __int64 v11; // x1
  struct UISprite_array *v12; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct UILabel_array *tokenName; // x8
  __int64 v15; // x9
  __int64 v16; // x21
  __int64 v17; // x22
  UnityEngine_Object_o *v18; // x20
  struct UILabel_array *v19; // x8
  System_Int32_array **ComponentInChildren_UIWidget; // x0
  UnityEngine_Animation_o **p_animation; // x20
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Int32_array **v28; // x0
  struct SimpleAnimation_o **p_simpleAnimation; // x21
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  UnityEngine_Object_o *simpleAnimation; // x22
  struct SimpleAnimation_o *v37; // x20
  System_String_o *v38; // x0
  __int64 v39; // x3
  QuestRewardTokenAction_c *klass; // x8
  QuestRewardTokenAction_o *v41; // x20
  unsigned __int64 v42; // x10
  int32_t *p_offset; // x11
  __int64 v44; // x0
  UnityEngine_Animation_o *v45; // x21
  UnityEngine_Animation_o *v46; // x21
  System_String_o *name; // x0
  UnityEngine_Animation_o *v48; // x20
  System_String_o *v49; // x0
  struct SimpleAnimation_o *v50; // x20
  System_String_o *v51; // x0
  __int64 v52; // x3
  QuestRewardTokenAction_c *v53; // x8
  QuestRewardTokenAction_o *v54; // x20
  unsigned __int64 v55; // x10
  int32_t *v56; // x11
  __int64 v57; // x0
  __int64 v58; // x0

  v2 = this;
  if ( (byte_4186078 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponentInChildren_Animation___, method);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___, v3);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    this = (QuestRewardTokenAction_o *)sub_B2C35C(&SimpleAnimation_State_TypeInfo, v5);
    byte_4186078 = 1;
  }
  tokenSprite = v2->fields.tokenSprite;
  if ( tokenSprite )
  {
    v7 = *(_QWORD *)&tokenSprite->max_length;
    if ( (int)v7 >= 1 )
    {
      v8 = (int)v7;
      v9 = 4LL;
      while ( v9 - 4 < (unsigned __int64)tokenSprite->max_length )
      {
        v10 = (UnityEngine_Object_o *)*((_QWORD *)&tokenSprite->obj.klass + v9);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (QuestRewardTokenAction_o *)UnityEngine_Object__op_Inequality(v10, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v12 = v2->fields.tokenSprite;
          if ( !v12 )
            goto LABEL_74;
          if ( v9 - 4 >= (unsigned __int64)v12->max_length )
            break;
          this = (QuestRewardTokenAction_o *)*((_QWORD *)&v12->obj.klass + v9);
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
        if ( v9 - 3 >= v8 )
          goto LABEL_20;
        tokenSprite = v2->fields.tokenSprite;
        ++v9;
        if ( !tokenSprite )
          goto LABEL_74;
      }
LABEL_75:
      v58 = sub_B2C460(this);
      sub_B2C400(v58, 0LL);
    }
  }
LABEL_20:
  tokenName = v2->fields.tokenName;
  if ( tokenName )
  {
    v15 = *(_QWORD *)&tokenName->max_length;
    if ( (int)v15 >= 1 )
    {
      v16 = (int)v15;
      v17 = 4LL;
      while ( v17 - 4 < (unsigned __int64)tokenName->max_length )
      {
        v18 = (UnityEngine_Object_o *)*((_QWORD *)&tokenName->obj.klass + v17);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (QuestRewardTokenAction_o *)UnityEngine_Object__op_Inequality(v18, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v19 = v2->fields.tokenName;
          if ( !v19 )
            goto LABEL_74;
          if ( v17 - 4 >= (unsigned __int64)v19->max_length )
            goto LABEL_75;
          this = (QuestRewardTokenAction_o *)*((_QWORD *)&v19->obj.klass + v17);
          if ( !this )
            goto LABEL_74;
          this = (QuestRewardTokenAction_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          if ( !this )
            goto LABEL_74;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        }
        if ( v17 - 3 >= v16 )
          goto LABEL_36;
        tokenName = v2->fields.tokenName;
        ++v17;
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
                                                          (const MethodInfo_172DC3C *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  v2->fields.animation = (struct UnityEngine_Animation_o *)ComponentInChildren_UIWidget;
  p_animation = &v2->fields.animation;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v2->fields.animation,
    ComponentInChildren_UIWidget,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  this = (QuestRewardTokenAction_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v2, 0LL);
  if ( !this )
    goto LABEL_74;
  v28 = (System_Int32_array **)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                 (UnityEngine_Component_o *)this,
                                 (const MethodInfo_172DC3C *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  v2->fields.simpleAnimation = (struct SimpleAnimation_o *)v28;
  p_simpleAnimation = &v2->fields.simpleAnimation;
  sub_B2C2F8((BattleServantConfConponent_o *)&v2->fields.simpleAnimation, v28, v30, v31, v32, v33, v34, v35);
  simpleAnimation = (UnityEngine_Object_o *)v2->fields.simpleAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (QuestRewardTokenAction_o *)UnityEngine_Object__op_Inequality(simpleAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v45 = *p_animation;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (QuestRewardTokenAction_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v45, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_72;
    v46 = *p_animation;
    if ( *p_animation )
    {
      this = (QuestRewardTokenAction_o *)UnityEngine_Animation__get_clip(*p_animation, 0LL);
      if ( this )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
        this = (QuestRewardTokenAction_o *)UnityEngine_Animation__get_Item(v46, name, 0LL);
        if ( this )
        {
          UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)this, 0.0, 0LL);
          v48 = *p_animation;
          if ( v48 )
          {
            this = (QuestRewardTokenAction_o *)UnityEngine_Animation__get_clip(v48, 0LL);
            if ( this )
            {
              v49 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
              this = (QuestRewardTokenAction_o *)UnityEngine_Animation__get_Item(v48, v49, 0LL);
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
    sub_B2C434(this, v11);
  }
  v37 = *p_simpleAnimation;
  if ( !*p_simpleAnimation )
    goto LABEL_74;
  this = (QuestRewardTokenAction_o *)v37[1].monitor;
  if ( !this )
    goto LABEL_74;
  v38 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestRewardTokenAction_o *)SimpleAnimation__get_Item(v37, v38, 0LL);
  if ( !this )
    goto LABEL_74;
  klass = this->klass;
  v41 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v42 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((SimpleAnimation_State_c **)p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v42;
      p_offset += 4;
      if ( v42 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_49;
    }
    v44 = (__int64)(&klass[1]._1.castClass + 2 * *p_offset);
  }
  else
  {
LABEL_49:
    v44 = sub_AC5258(this, SimpleAnimation_State_TypeInfo, 8LL, v39);
  }
  this = (QuestRewardTokenAction_o *)(*(__int64 (__fastcall **)(QuestRewardTokenAction_o *, _QWORD, float))v44)(
                                       v41,
                                       *(_QWORD *)(v44 + 8),
                                       0.0);
  v50 = *p_simpleAnimation;
  if ( !*p_simpleAnimation )
    goto LABEL_74;
  this = (QuestRewardTokenAction_o *)v50[1].monitor;
  if ( !this )
    goto LABEL_74;
  v51 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestRewardTokenAction_o *)SimpleAnimation__get_Item(v50, v51, 0LL);
  if ( !this )
    goto LABEL_74;
  v53 = this->klass;
  v54 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v55 = 0LL;
    v56 = &v53->_1.interfaceOffsets->offset;
    while ( *((SimpleAnimation_State_c **)v56 - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v55;
      v56 += 4;
      if ( v55 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_69;
    }
    v57 = (__int64)(&v53[1]._1.byval_arg.bits + 4 * *v56);
  }
  else
  {
LABEL_69:
    v57 = sub_AC5258(this, SimpleAnimation_State_TypeInfo, 6LL, v52);
  }
  (*(void (__fastcall **)(QuestRewardTokenAction_o *, _QWORD, float))v57)(v54, *(_QWORD *)(v57 + 8), 0.0);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Action_o *v16; // x20
  const MethodInfo *v17; // x3

  if ( (byte_4186072 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, endAct);
    sub_B2C35C(&Method_QuestRewardTokenAction___c__DisplayClass18_0__LoadData_b__0__, v5);
    sub_B2C35C(&QuestRewardTokenAction___c__DisplayClass18_0_TypeInfo, v6);
    byte_4186072 = 1;
  }
  v7 = sub_B2C42C(QuestRewardTokenAction___c__DisplayClass18_0_TypeInfo);
  QuestRewardTokenAction___c__DisplayClass18_0___ctor((QuestRewardTokenAction___c__DisplayClass18_0_o *)v7, 0LL);
  if ( !v7 )
    sub_B2C434(v8, v9);
  *(_QWORD *)(v7 + 16) = endAct;
  sub_B2C2F8((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)endAct, v10, v11, v12, v13, v14, v15);
  v16 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v16,
    (Il2CppObject *)v7,
    Method_QuestRewardTokenAction___c__DisplayClass18_0__LoadData_b__0__,
    0LL);
  QuestRewardTokenAction__LoadEventUI(this, v16, 1, v17);
}


void __fastcall QuestRewardTokenAction__LoadEventUI(
        QuestRewardTokenAction_o *this,
        System_Action_o *callback,
        int32_t loadParallelMax,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  AssetData_o *eventUIAssetData; // x0
  struct System_Action_o *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  AssetLoader_LoadEndDataHandler_o *v19; // x21
  const MethodInfo *v20; // x2
  QuestRewardTokenAction_o *v21; // x0
  AssetData_o *v22; // x1

  if ( (byte_4186073 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&AssetManager_TypeInfo, v7);
    sub_B2C35C(&AssetLoader_LoadEndDataHandler_TypeInfo, v8);
    sub_B2C35C(&Method_QuestRewardTokenAction_LoadEventUIEnd__, v9);
    sub_B2C35C(&StringLiteral_6203/*"EventUI/Prefabs/80285"*/, v10);
    byte_4186073 = 1;
  }
  eventUIAssetData = this->fields.eventUIAssetData;
  if ( eventUIAssetData && !AssetData__get_IsEmpty(eventUIAssetData, 0LL) )
  {
    if ( callback )
      System_Action__Invoke(callback, 0LL);
  }
  else
  {
    v12 = (struct System_Action_o *)System_Delegate__Combine(
                                      (System_Delegate_o *)this->fields.eventUILoadCallbackFunc,
                                      (System_Delegate_o *)callback,
                                      0LL);
    if ( v12 && v12->klass != System_Action_TypeInfo )
    {
      v21 = (QuestRewardTokenAction_o *)sub_B2C728(v12);
      goto LABEL_13;
    }
    this->fields.eventUILoadCallbackFunc = v12;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.eventUILoadCallbackFunc,
      (System_Int32_array **)v12,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    if ( !this->fields.isEventUILoad )
    {
      this->fields.isEventUILoad = 1;
      v19 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v19,
        (Il2CppObject *)this,
        Method_QuestRewardTokenAction_LoadEventUIEnd__,
        0LL);
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      if ( !AssetManager__loadAssetStorage((System_String_o *)StringLiteral_6203/*"EventUI/Prefabs/80285"*/, v19, loadParallelMax, 0LL) )
      {
        this->fields.isEventUILoad = 0;
        v21 = this;
        v22 = 0LL;
LABEL_13:
        QuestRewardTokenAction__LoadEventUIEnd(v21, v22, v20);
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

  if ( (byte_4186074 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_5378/*"DownloadEventUIAtlas8028500"*/, assetData);
    byte_4186074 = 1;
  }
  if ( this->fields.isEventUILoad )
  {
    this->fields.eventUIAssetData = assetData;
    this->fields.isEventUILoad = 0;
    sub_B2C2F8(
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
                             (System_String_o *)StringLiteral_5378/*"DownloadEventUIAtlas8028500"*/,
                             v11);
    this->fields.eventUIDownloadAtlas = UIAtlasFromAssetData;
    sub_B2C2F8(
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
    sub_B2C2F8(p_eventUILoadCallbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
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
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v16; // x1
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v18; // x0
  System_Action_o *v19; // x21

  if ( (byte_418607A & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, end_act);
    sub_B2C35C(&AvalonSceneManager_TypeInfo, v12);
    sub_B2C35C(&Method_QuestRewardTokenAction__Play_b__26_0__, v13);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14);
    byte_418607A = 1;
  }
  this->fields.endAct = end_act;
  sub_B2C2F8(
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
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( fade_in_time <= 0.0 )
  {
    v18 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v18 = AvalonSceneManager_TypeInfo;
    }
    fade_in_time = v18->static_fields->DEFAULT_FADE_TIME;
  }
  v19 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v19, (Il2CppObject *)this, Method_QuestRewardTokenAction__Play_b__26_0__, 0LL);
  if ( !Instance )
LABEL_11:
    sub_B2C434(gameObject, v16);
  CommonUI__maskFadein(Instance, fade_in_time, v19, 0LL);
}


void __fastcall QuestRewardTokenAction__ReleaseEventUI(QuestRewardTokenAction_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v9; // x1
  struct AssetData_o **p_eventUIAssetData; // x20
  AssetData_o *eventUIAssetData; // x21
  struct UIAtlas_o **p_eventUIDownloadAtlas; // x19
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_4186076 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_6203/*"EventUI/Prefabs/80285"*/, v9);
    byte_4186076 = 1;
  }
  if ( this->fields.isEventUILoad )
  {
    this->fields.isEventUILoad = 0;
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage((System_String_o *)StringLiteral_6203/*"EventUI/Prefabs/80285"*/, 0LL);
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
      AssetManager__releaseAsset_30152684(eventUIAssetData, 0LL);
    }
  }
  this->fields.eventUIDownloadAtlas = 0LL;
  p_eventUIDownloadAtlas = &this->fields.eventUIDownloadAtlas;
  sub_B2C2F8((BattleServantConfConponent_o *)p_eventUIDownloadAtlas, 0LL, v2, v3, v4, v5, v6, v7);
  *(p_eventUIDownloadAtlas - 1) = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)p_eventUIAssetData, 0LL, v13, v14, v15, v16, v17, v18);
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

  if ( (byte_4186077 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, sprite);
    byte_4186077 = 1;
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
    sub_B2C434(IsNullOrEmpty, v8);
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

  if ( (byte_418607C & 1) == 0 )
  {
    sub_B2C35C(&Method_CStateManager_QuestRewardTokenAction__setState__, *(_QWORD *)&state);
    byte_418607C = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_B2C434(0LL, *(_QWORD *)&state);
  CStateManager_QAASpotStateController_IMapSpot___setState(
    (CStateManager_QAASpotStateController_IMapSpot__o *)fsm,
    state,
    (const MethodInfo_2A084C4 *)Method_CStateManager_QuestRewardTokenAction__setState__);
}


void __fastcall QuestRewardTokenAction__Setup(
        QuestRewardTokenAction_o *this,
        QuestRewardInfo_array *infos,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  void *transform; // x0
  __int64 v15; // x1
  QuestRewardTokenAction___c_c *v16; // x0
  struct QuestRewardTokenAction___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__25_0; // x21
  Il2CppObject *v19; // x22
  struct QuestRewardTokenAction___c_StaticFields *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  __int64 v27; // x8
  __int64 v28; // x22
  __int64 v29; // x23
  __int64 v30; // x8
  int v31; // w21
  int v32; // w9
  struct QuestRewardTokenAction_StaticFields *v33; // x8
  int v34; // w21
  int v35; // w8
  struct UISprite_array *tokenSprite; // x8
  unsigned __int64 v37; // x26
  unsigned __int64 max_length; // x9
  UnityEngine_Object_o *v39; // x21
  struct UISprite_array *v40; // x8
  UISprite_o *v41; // x21
  System_String_o *v42; // x0
  const MethodInfo *v43; // x3
  struct UILabel_array *tokenName; // x8
  unsigned __int64 v45; // x9
  UnityEngine_Object_o *v46; // x21
  struct UILabel_array *v47; // x8
  UILabel_o *v48; // x21
  unsigned __int64 v49; // x8
  __int64 v50; // x0
  struct ScreenTouchInformationComponent_o **p_screenTouchInfo; // x20
  UnityEngine_Object_o *screenTouchInfo; // x21
  CommonUI_o *Instance; // x21
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  __int64 v61; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4186079 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_Sort_QuestRewardInfo___, infos);
    sub_B2C35C(&Method_System_Comparison_QuestRewardInfo___ctor__, v5);
    sub_B2C35C(&System_Comparison_QuestRewardInfo__TypeInfo, v6);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___, v7);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___, v8);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v9);
    sub_B2C35C(&QuestRewardTokenAction_TypeInfo, v10);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_B2C35C(&Method_QuestRewardTokenAction___c__Setup_b__25_0__, v12);
    sub_B2C35C(&QuestRewardTokenAction___c_TypeInfo, v13);
    byte_4186079 = 1;
  }
  v61 = 0LL;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_66;
  transform = UnityEngine_Component__GetComponentInChildren_UIWidget_(
                (UnityEngine_Component_o *)transform,
                (const MethodInfo_172DC3C *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
  if ( !transform )
    goto LABEL_66;
  *((_BYTE *)transform + 101) = 1;
  v16 = QuestRewardTokenAction___c_TypeInfo;
  if ( (BYTE3(QuestRewardTokenAction___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestRewardTokenAction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRewardTokenAction___c_TypeInfo);
    v16 = QuestRewardTokenAction___c_TypeInfo;
  }
  static_fields = v16->static_fields;
  _9__25_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__25_0;
  if ( !_9__25_0 )
  {
    if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      static_fields = QuestRewardTokenAction___c_TypeInfo->static_fields;
    }
    v19 = (Il2CppObject *)static_fields->__9;
    _9__25_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_QuestRewardInfo__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__25_0,
      v19,
      Method_QuestRewardTokenAction___c__Setup_b__25_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_QuestRewardInfo___ctor__);
    v20 = QuestRewardTokenAction___c_TypeInfo->static_fields;
    v20->__9__25_0 = (struct System_Comparison_QuestRewardInfo__o *)_9__25_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v20->__9__25_0,
      (System_Int32_array **)_9__25_0,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
  }
  System_Array__Sort_BattleBuffData_BuffData_(
    (BattleBuffData_BuffData_array *)infos,
    (System_Comparison_T__o *)_9__25_0,
    (const MethodInfo_23CBA5C *)Method_System_Array_Sort_QuestRewardInfo___);
  if ( !infos )
    goto LABEL_66;
  v27 = *(_QWORD *)&infos->max_length;
  if ( (int)v27 >= 1 )
  {
    v28 = (int)v27;
    v29 = 4LL;
    while ( 1 )
    {
      v30 = *((_QWORD *)&infos->obj.klass + v29);
      if ( v30 && *(_DWORD *)(v30 + 16) == 13 )
      {
        transform = QuestRewardTokenAction_TypeInfo;
        v31 = *(_DWORD *)(v30 + 20);
        if ( (WORD1(QuestRewardTokenAction_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 )
        {
          if ( !QuestRewardTokenAction_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(QuestRewardTokenAction_TypeInfo);
            transform = QuestRewardTokenAction_TypeInfo;
          }
          v32 = WORD1(QuestRewardTokenAction_TypeInfo->vtable._0_Equals.methodPtr) & 0x400;
        }
        else
        {
          v32 = 0;
        }
        v33 = (struct QuestRewardTokenAction_StaticFields *)*((_QWORD *)transform + 23);
        v34 = v31 - v33->TOKEN_EVENT_ID;
        HIDWORD(v61) = v34;
        if ( v34 >= 27 )
        {
          if ( v32 && !*((_DWORD *)transform + 56) )
          {
            j_il2cpp_runtime_class_init_0(transform);
            v33 = QuestRewardTokenAction_TypeInfo->static_fields;
          }
          v35 = v34 + v33->TOKEN_IMAGE_ID + 1;
        }
        else
        {
          if ( v32 && !*((_DWORD *)transform + 56) )
          {
            j_il2cpp_runtime_class_init_0(transform);
            v33 = QuestRewardTokenAction_TypeInfo->static_fields;
          }
          v35 = v33->TOKEN_IMAGE_ID + v34;
        }
        LODWORD(v61) = v35;
        tokenSprite = this->fields.tokenSprite;
        v37 = v29 - 4;
        if ( tokenSprite )
        {
          max_length = tokenSprite->max_length;
          if ( (__int64)v37 < (int)max_length )
          {
            if ( v37 >= max_length )
              goto LABEL_55;
            v39 = (UnityEngine_Object_o *)*((_QWORD *)&tokenSprite->obj.klass + v29);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            transform = (void *)UnityEngine_Object__op_Inequality(v39, 0LL, 0LL);
            if ( ((unsigned __int8)transform & 1) != 0 )
            {
              v40 = this->fields.tokenSprite;
              if ( !v40 )
                goto LABEL_66;
              if ( v37 >= v40->max_length )
                goto LABEL_55;
              v41 = (UISprite_o *)*((_QWORD *)&v40->obj.klass + v29);
              v42 = System_Int32__ToString((int32_t)&v61, 0LL);
              transform = (void *)QuestRewardTokenAction__SetEventUI(this, v41, v42, v43);
            }
          }
        }
        tokenName = this->fields.tokenName;
        if ( tokenName )
        {
          v45 = tokenName->max_length;
          if ( (__int64)v37 < (int)v45 )
          {
            if ( v37 >= v45 )
              goto LABEL_55;
            v46 = (UnityEngine_Object_o *)*((_QWORD *)&tokenName->obj.klass + v29);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            transform = (void *)UnityEngine_Object__op_Inequality(v46, 0LL, 0LL);
            if ( ((unsigned __int8)transform & 1) != 0 )
            {
              v47 = this->fields.tokenName;
              if ( !v47 )
                goto LABEL_66;
              if ( v37 >= v47->max_length )
                goto LABEL_55;
              v48 = (UILabel_o *)*((_QWORD *)&v47->obj.klass + v29);
              transform = System_Int32__ToString((int32_t)&v61 + 4, 0LL);
              if ( !v48 )
                goto LABEL_66;
              UILabel__set_text(v48, (System_String_o *)transform, 0LL);
            }
          }
        }
      }
      v49 = v29 - 3;
      if ( v29 - 3 >= v28 )
        break;
      ++v29;
      if ( v49 >= infos->max_length )
      {
LABEL_55:
        v50 = sub_B2C460(transform);
        sub_B2C400(v50, 0LL);
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
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( Instance )
    {
      transform = CommonUI__CreateScreeenTouchInfo(Instance, (UnityEngine_Transform_o *)transform, 0, 0LL);
      if ( transform )
      {
        Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                           (UnityEngine_GameObject_o *)transform,
                                                           (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
        *p_screenTouchInfo = (struct ScreenTouchInformationComponent_o *)Component_srcLineSprite;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&this->fields.screenTouchInfo,
          Component_srcLineSprite,
          v55,
          v56,
          v57,
          v58,
          v59,
          v60);
        goto LABEL_63;
      }
    }
LABEL_66:
    sub_B2C434(transform, v15);
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
  __int64 v3; // x1
  struct CStateManager_QuestRewardTokenAction__o *fsm; // x0

  if ( (byte_4186071 & 1) == 0 )
  {
    sub_B2C35C(&Method_CStateManager_QuestRewardTokenAction__update__, method);
    sub_B2C35C(&CTouch_TypeInfo, v3);
    byte_4186071 = 1;
  }
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__process(0LL);
  fsm = this->fields.fsm;
  if ( fsm )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)fsm,
      (const MethodInfo_2A0849C *)Method_CStateManager_QuestRewardTokenAction__update__);
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
  __int64 v4; // x1
  UnityEngine_Object_o *simpleAnimation; // x20
  struct SimpleAnimation_o *v6; // x20
  System_String_o *v7; // x0
  struct SimpleAnimation_o *v8; // x20
  System_String_o *v9; // x0
  struct SimpleAnimation_o *v10; // x20
  System_String_o *v11; // x0
  __int64 v12; // x3
  QuestRewardTokenAction_StatePlay_c *klass; // x8
  QuestRewardTokenAction_StatePlay_o *v14; // x20
  unsigned __int64 v15; // x10
  int32_t *p_offset; // x11
  __int64 v17; // x0
  UnityEngine_Object_o *animation; // x20
  UnityEngine_Animation_o *v19; // x20
  System_String_o *name; // x0
  UnityEngine_Animation_o *v21; // x20
  System_String_o *v22; // x0
  UnityEngine_Animation_o *v23; // x20
  System_String_o *v24; // x0
  UnityEngine_Animation_o *v25; // x19
  System_String_o *v26; // x0
  struct SimpleAnimation_o *v27; // x19
  System_String_o *v28; // x0
  __int64 v29; // x3
  QuestRewardTokenAction_StatePlay_c *v30; // x8
  QuestRewardTokenAction_StatePlay_o *v31; // x19
  unsigned __int64 v32; // x10
  int32_t *v33; // x11
  __int64 v34; // x0

  if ( (byte_4185631 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, that);
    this = (QuestRewardTokenAction_StatePlay_o *)sub_B2C35C(&SimpleAnimation_State_TypeInfo, v4);
    byte_4185631 = 1;
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
    v19 = that->fields.animation;
    if ( v19 )
    {
      this = (QuestRewardTokenAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.animation, 0LL);
      if ( this )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
        this = (QuestRewardTokenAction_StatePlay_o *)UnityEngine_Animation__IsPlaying(v19, name, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v21 = that->fields.animation;
          if ( !v21 )
            goto LABEL_51;
          this = (QuestRewardTokenAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.animation, 0LL);
          if ( !this )
            goto LABEL_51;
          v22 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
          this = (QuestRewardTokenAction_StatePlay_o *)UnityEngine_Animation__Play_50201580(v21, v22, 0LL);
        }
        v23 = that->fields.animation;
        if ( v23 )
        {
          this = (QuestRewardTokenAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.animation, 0LL);
          if ( this )
          {
            v24 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
            this = (QuestRewardTokenAction_StatePlay_o *)UnityEngine_Animation__get_Item(v23, v24, 0LL);
            if ( this )
            {
              UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)this, 0.0, 0LL);
              v25 = that->fields.animation;
              if ( v25 )
              {
                this = (QuestRewardTokenAction_StatePlay_o *)UnityEngine_Animation__get_clip(v25, 0LL);
                if ( this )
                {
                  v26 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
                  this = (QuestRewardTokenAction_StatePlay_o *)UnityEngine_Animation__get_Item(v25, v26, 0LL);
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
    sub_B2C434(this, that);
  }
  v6 = that->fields.simpleAnimation;
  if ( !v6 )
    goto LABEL_51;
  this = (QuestRewardTokenAction_StatePlay_o *)v6[1].monitor;
  if ( !this )
    goto LABEL_51;
  v7 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestRewardTokenAction_StatePlay_o *)SimpleAnimation__IsPlaying(v6, v7, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v8 = that->fields.simpleAnimation;
    if ( !v8 )
      goto LABEL_51;
    this = (QuestRewardTokenAction_StatePlay_o *)v8[1].monitor;
    if ( !this )
      goto LABEL_51;
    v9 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
    this = (QuestRewardTokenAction_StatePlay_o *)SimpleAnimation__Play_16486620(v8, v9, 0LL);
  }
  v10 = that->fields.simpleAnimation;
  if ( !v10 )
    goto LABEL_51;
  this = (QuestRewardTokenAction_StatePlay_o *)v10[1].monitor;
  if ( !this )
    goto LABEL_51;
  v11 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestRewardTokenAction_StatePlay_o *)SimpleAnimation__get_Item(v10, v11, 0LL);
  if ( !this )
    goto LABEL_51;
  klass = this->klass;
  v14 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v15 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((SimpleAnimation_State_c **)p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v15;
      p_offset += 4;
      if ( v15 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_21;
    }
    v17 = (__int64)(&klass->vtable._6_end.method + 2 * *p_offset);
  }
  else
  {
LABEL_21:
    v17 = sub_AC5258(this, SimpleAnimation_State_TypeInfo, 6LL, v12);
  }
  this = (QuestRewardTokenAction_StatePlay_o *)(*(__int64 (__fastcall **)(QuestRewardTokenAction_StatePlay_o *, _QWORD, float))v17)(
                                                 v14,
                                                 *(_QWORD *)(v17 + 8),
                                                 0.0);
  v27 = that->fields.simpleAnimation;
  if ( !v27 )
    goto LABEL_51;
  this = (QuestRewardTokenAction_StatePlay_o *)v27[1].monitor;
  if ( !this )
    goto LABEL_51;
  v28 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestRewardTokenAction_StatePlay_o *)SimpleAnimation__get_Item(v27, v28, 0LL);
  if ( !this )
    goto LABEL_51;
  v30 = this->klass;
  v31 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v32 = 0LL;
    v33 = &v30->_1.interfaceOffsets->offset;
    while ( *((SimpleAnimation_State_c **)v33 - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v32;
      v33 += 4;
      if ( v32 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_48;
    }
    v34 = (__int64)(&v30[1]._1.namespaze + 2 * *v33);
  }
  else
  {
LABEL_48:
    v34 = sub_AC5258(this, SimpleAnimation_State_TypeInfo, 8LL, v29);
  }
  (*(void (__fastcall **)(QuestRewardTokenAction_StatePlay_o *, _QWORD, float))v34)(v31, *(_QWORD *)(v34 + 8), 1.0);
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
  __int64 v4; // x1
  UnityEngine_Object_o *simpleAnimation; // x20
  struct SimpleAnimation_o *v6; // x20
  System_String_o *name; // x0
  UnityEngine_Object_o *animation; // x20
  UnityEngine_Animation_o *v9; // x20
  System_String_o *v10; // x0

  if ( (byte_4185632 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, that);
    this = (QuestRewardTokenAction_StatePlay_o *)sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_4185632 = 1;
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
    v6 = that->fields.simpleAnimation;
    if ( !v6 )
      goto LABEL_23;
    this = (QuestRewardTokenAction_StatePlay_o *)v6[1].monitor;
    if ( !this )
      goto LABEL_23;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
    if ( SimpleAnimation__IsPlaying(v6, name, 0LL) )
      return;
LABEL_19:
    this = (QuestRewardTokenAction_StatePlay_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( this )
    {
      if ( !CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0LL) )
        QuestRewardTokenAction__SetState(that, 2, 0LL);
      return;
    }
LABEL_23:
    sub_B2C434(this, that);
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
    v9 = that->fields.animation;
    if ( !v9 )
      goto LABEL_23;
    this = (QuestRewardTokenAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.animation, 0LL);
    if ( !this )
      goto LABEL_23;
    v10 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
    if ( UnityEngine_Animation__IsPlaying(v9, v10, 0LL) )
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
    sub_B2C434(this, that);
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  QuestRewardTokenAction_StateTouchWait___c__DisplayClass1_0_o *v10; // x20
  UnityEngine_Component_o *isTouchPush; // x0
  __int64 v12; // x1
  QuestRewardTokenAction_StateTouchWait___c__DisplayClass1_0_Fields *p_fields; // x19
  CommonUI_o *Instance; // x21
  AvalonSceneManager_c *v15; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v17; // x22

  if ( (byte_4185633 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, that);
    sub_B2C35C(&AvalonSceneManager_TypeInfo, v4);
    sub_B2C35C(&CTouch_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B2C35C(&SoundManager_TypeInfo, v7);
    sub_B2C35C(&Method_QuestRewardTokenAction_StateTouchWait___c__DisplayClass1_0__update_b__0__, v8);
    sub_B2C35C(&QuestRewardTokenAction_StateTouchWait___c__DisplayClass1_0_TypeInfo, v9);
    byte_4185633 = 1;
  }
  v10 = (QuestRewardTokenAction_StateTouchWait___c__DisplayClass1_0_o *)sub_B2C42C(QuestRewardTokenAction_StateTouchWait___c__DisplayClass1_0_TypeInfo);
  QuestRewardTokenAction_StateTouchWait___c__DisplayClass1_0___ctor(v10, 0LL);
  if ( !v10 )
    goto LABEL_21;
  v10->fields.that = that;
  p_fields = &v10->fields;
  sub_B2C2F8(&v10->fields, that);
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  isTouchPush = (UnityEngine_Component_o *)CTouch__isTouchPush(0LL);
  if ( ((unsigned __int8)isTouchPush & 1) != 0 )
  {
    if ( p_fields->that )
    {
      isTouchPush = (UnityEngine_Component_o *)p_fields->that->fields.screenTouchInfo;
      if ( isTouchPush )
      {
        isTouchPush = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(isTouchPush, 0LL);
        if ( isTouchPush )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)isTouchPush, 0, 0LL);
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(0, 0LL);
          Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v15 = AvalonSceneManager_TypeInfo;
          if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
            v15 = AvalonSceneManager_TypeInfo;
          }
          DEFAULT_FADE_TIME = v15->static_fields->DEFAULT_FADE_TIME;
          v17 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
          System_Action___ctor(
            v17,
            (Il2CppObject *)v10,
            Method_QuestRewardTokenAction_StateTouchWait___c__DisplayClass1_0__update_b__0__,
            0LL);
          if ( Instance )
          {
            CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v17, 0LL);
            isTouchPush = (UnityEngine_Component_o *)p_fields->that;
            if ( p_fields->that )
            {
              QuestRewardTokenAction__SetState((QuestRewardTokenAction_o *)isTouchPush, 0, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_21:
    sub_B2C434(isTouchPush, v12);
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
    sub_B2C434(this, method);
  ActionExtensions__Call(that->fields.endAct, 0LL);
}


void __fastcall QuestRewardTokenAction___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct QuestRewardTokenAction___c_StaticFields *static_fields; // x0

  if ( (byte_4185630 & 1) == 0 )
  {
    sub_B2C35C(&QuestRewardTokenAction___c_TypeInfo, v1);
    byte_4185630 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(QuestRewardTokenAction___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = QuestRewardTokenAction___c_TypeInfo->static_fields;
  static_fields->__9 = (struct QuestRewardTokenAction___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, x);
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