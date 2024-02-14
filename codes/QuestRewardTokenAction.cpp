void __fastcall QuestRewardTokenAction___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4212E86 & 1) == 0 )
  {
    sub_B0D8A4(&QuestRewardTokenAction_TypeInfo, v1);
    byte_4212E86 = 1;
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct CStateManager_QuestRewardTokenAction__o **p_fsm; // x20
  CStateManager_QAASpotStateController_IMapSpot__o *v10; // x21
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct CStateManager_QuestRewardTokenAction__o *fsm; // x21
  __int64 v18; // x1
  __int64 v19; // x2
  QuestRewardTokenAction_StateNone_o *v20; // x22
  __int64 v21; // x0
  CStateManager_QAASpotStateController_IMapSpot__o *v22; // x21
  __int64 v23; // x1
  __int64 v24; // x2
  QuestRewardTokenAction_StatePlay_o *v25; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v26; // x20
  __int64 v27; // x1
  __int64 v28; // x2
  QuestRewardTokenAction_StateTouchWait_o *v29; // x21
  const MethodInfo *v30; // x2

  if ( (byte_4212E79 & 1) == 0 )
  {
    sub_B0D8A4(&Method_CStateManager_QuestRewardTokenAction___ctor__, method);
    sub_B0D8A4(&Method_CStateManager_QuestRewardTokenAction__add__, v4);
    sub_B0D8A4(&CStateManager_QuestRewardTokenAction__TypeInfo, v5);
    sub_B0D8A4(&QuestRewardTokenAction_StateNone_TypeInfo, v6);
    sub_B0D8A4(&QuestRewardTokenAction_StatePlay_TypeInfo, v7);
    sub_B0D8A4(&QuestRewardTokenAction_StateTouchWait_TypeInfo, v8);
    byte_4212E79 = 1;
  }
  p_fsm = &this->fields.fsm;
  if ( !this->fields.fsm )
  {
    v10 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B0D974(
                                                                CStateManager_QuestRewardTokenAction__TypeInfo,
                                                                method,
                                                                v2);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v10,
      (QAASpotStateController_IMapSpot_o *)this,
      3,
      (const MethodInfo_2AAF784 *)Method_CStateManager_QuestRewardTokenAction___ctor__);
    this->fields.fsm = (struct CStateManager_QuestRewardTokenAction__o *)v10;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.fsm,
      (System_Int32_array **)v10,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    fsm = this->fields.fsm;
    v20 = (QuestRewardTokenAction_StateNone_o *)sub_B0D974(QuestRewardTokenAction_StateNone_TypeInfo, v18, v19);
    QuestRewardTokenAction_StateNone___ctor(v20, 0LL);
    if ( !fsm )
      goto LABEL_8;
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)fsm,
      0,
      (IState_T__o *)v20,
      (const MethodInfo_2AAF850 *)Method_CStateManager_QuestRewardTokenAction__add__);
    v22 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_fsm;
    v25 = (QuestRewardTokenAction_StatePlay_o *)sub_B0D974(QuestRewardTokenAction_StatePlay_TypeInfo, v23, v24);
    QuestRewardTokenAction_StatePlay___ctor(v25, 0LL);
    if ( !v22
      || (CStateManager_QAASpotStateController_IMapSpot___add(
            v22,
            1,
            (IState_T__o *)v25,
            (const MethodInfo_2AAF850 *)Method_CStateManager_QuestRewardTokenAction__add__),
          v26 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_fsm,
          v29 = (QuestRewardTokenAction_StateTouchWait_o *)sub_B0D974(
                                                             QuestRewardTokenAction_StateTouchWait_TypeInfo,
                                                             v27,
                                                             v28),
          QuestRewardTokenAction_StateTouchWait___ctor(v29, 0LL),
          !v26) )
    {
LABEL_8:
      sub_B0D97C(v21);
    }
    CStateManager_QAASpotStateController_IMapSpot___add(
      v26,
      2,
      (IState_T__o *)v29,
      (const MethodInfo_2AAF850 *)Method_CStateManager_QuestRewardTokenAction__add__);
    QuestRewardTokenAction__SetState(this, 0, v30);
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

  if ( (byte_4212E7E & 1) == 0 )
  {
    sub_B0D8A4(&Method_AssetData_GetObjectList_GameObject___, assetData);
    sub_B0D8A4(&Method_AssetData_GetObject_GameObject____67951440, v6);
    this = (QuestRewardTokenAction_o *)sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v7);
    byte_4212E7E = 1;
  }
  if ( !assetData )
    goto LABEL_10;
  result = (UIAtlas_o *)AssetData__GetObjectList_Texture2D_(
                          assetData,
                          (const MethodInfo_1700F84 *)Method_AssetData_GetObjectList_GameObject___);
  if ( result )
  {
    if ( result->fields.material )
    {
      this = (QuestRewardTokenAction_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                           assetData,
                                           name,
                                           (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
      if ( this )
        return (UIAtlas_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              (UnityEngine_GameObject_o *)this,
                              (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
LABEL_10:
      sub_B0D97C(this);
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
  if ( (byte_4212E84 & 1) == 0 )
  {
    this = (QuestRewardTokenAction_o *)sub_B0D8A4(&Method_CStateManager_QuestRewardTokenAction__getState__, method);
    byte_4212E84 = 1;
  }
  fsm = v2->fields.fsm;
  if ( !fsm )
    sub_B0D97C(this);
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
  struct UISprite_array *v11; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct UILabel_array *tokenName; // x8
  __int64 v14; // x9
  __int64 v15; // x21
  __int64 v16; // x22
  UnityEngine_Object_o *v17; // x20
  struct UILabel_array *v18; // x8
  System_Int32_array **ComponentInChildren_UIWidget; // x0
  UnityEngine_Animation_o **p_animation; // x20
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Int32_array **v27; // x0
  struct SimpleAnimation_o **p_simpleAnimation; // x21
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  UnityEngine_Object_o *simpleAnimation; // x22
  struct SimpleAnimation_o *v36; // x20
  System_String_o *v37; // x0
  QuestRewardTokenAction_c *klass; // x8
  QuestRewardTokenAction_o *v39; // x20
  unsigned __int64 v40; // x10
  int32_t *p_offset; // x11
  __int64 v42; // x0
  UnityEngine_Animation_o *v43; // x21
  UnityEngine_Animation_o *v44; // x21
  System_String_o *name; // x0
  UnityEngine_Animation_o *v46; // x20
  System_String_o *v47; // x0
  struct SimpleAnimation_o *v48; // x20
  System_String_o *v49; // x0
  QuestRewardTokenAction_c *v50; // x8
  QuestRewardTokenAction_o *v51; // x20
  unsigned __int64 v52; // x10
  int32_t *v53; // x11
  __int64 v54; // x0
  __int64 v55; // x0

  v2 = this;
  if ( (byte_4212E81 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponentInChildren_Animation___, method);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___, v3);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v4);
    this = (QuestRewardTokenAction_o *)sub_B0D8A4(&SimpleAnimation_State_TypeInfo, v5);
    byte_4212E81 = 1;
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
          v11 = v2->fields.tokenSprite;
          if ( !v11 )
            goto LABEL_74;
          if ( v9 - 4 >= (unsigned __int64)v11->max_length )
            break;
          this = (QuestRewardTokenAction_o *)*((_QWORD *)&v11->obj.klass + v9);
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
      v55 = sub_B0D9A8(this);
      sub_B0D948(v55, 0LL);
    }
  }
LABEL_20:
  tokenName = v2->fields.tokenName;
  if ( tokenName )
  {
    v14 = *(_QWORD *)&tokenName->max_length;
    if ( (int)v14 >= 1 )
    {
      v15 = (int)v14;
      v16 = 4LL;
      while ( v16 - 4 < (unsigned __int64)tokenName->max_length )
      {
        v17 = (UnityEngine_Object_o *)*((_QWORD *)&tokenName->obj.klass + v16);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (QuestRewardTokenAction_o *)UnityEngine_Object__op_Inequality(v17, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v18 = v2->fields.tokenName;
          if ( !v18 )
            goto LABEL_74;
          if ( v16 - 4 >= (unsigned __int64)v18->max_length )
            goto LABEL_75;
          this = (QuestRewardTokenAction_o *)*((_QWORD *)&v18->obj.klass + v16);
          if ( !this )
            goto LABEL_74;
          this = (QuestRewardTokenAction_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          if ( !this )
            goto LABEL_74;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        }
        if ( v16 - 3 >= v15 )
          goto LABEL_36;
        tokenName = v2->fields.tokenName;
        ++v16;
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
                                                          (const MethodInfo_170E750 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  v2->fields.animation = (struct UnityEngine_Animation_o *)ComponentInChildren_UIWidget;
  p_animation = &v2->fields.animation;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v2->fields.animation,
    ComponentInChildren_UIWidget,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  this = (QuestRewardTokenAction_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v2, 0LL);
  if ( !this )
    goto LABEL_74;
  v27 = (System_Int32_array **)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                 (UnityEngine_Component_o *)this,
                                 (const MethodInfo_170E750 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  v2->fields.simpleAnimation = (struct SimpleAnimation_o *)v27;
  p_simpleAnimation = &v2->fields.simpleAnimation;
  sub_B0D840((BattleServantConfConponent_o *)&v2->fields.simpleAnimation, v27, v29, v30, v31, v32, v33, v34);
  simpleAnimation = (UnityEngine_Object_o *)v2->fields.simpleAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (QuestRewardTokenAction_o *)UnityEngine_Object__op_Inequality(simpleAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v43 = *p_animation;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (QuestRewardTokenAction_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v43, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_72;
    v44 = *p_animation;
    if ( *p_animation )
    {
      this = (QuestRewardTokenAction_o *)UnityEngine_Animation__get_clip(*p_animation, 0LL);
      if ( this )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
        this = (QuestRewardTokenAction_o *)UnityEngine_Animation__get_Item(v44, name, 0LL);
        if ( this )
        {
          UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)this, 0.0, 0LL);
          v46 = *p_animation;
          if ( v46 )
          {
            this = (QuestRewardTokenAction_o *)UnityEngine_Animation__get_clip(v46, 0LL);
            if ( this )
            {
              v47 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
              this = (QuestRewardTokenAction_o *)UnityEngine_Animation__get_Item(v46, v47, 0LL);
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
    sub_B0D97C(this);
  }
  v36 = *p_simpleAnimation;
  if ( !*p_simpleAnimation )
    goto LABEL_74;
  this = (QuestRewardTokenAction_o *)v36[1].monitor;
  if ( !this )
    goto LABEL_74;
  v37 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestRewardTokenAction_o *)SimpleAnimation__get_Item(v36, v37, 0LL);
  if ( !this )
    goto LABEL_74;
  klass = this->klass;
  v39 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v40 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((SimpleAnimation_State_c **)p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v40;
      p_offset += 4;
      if ( v40 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_49;
    }
    v42 = (__int64)(&klass[1]._1.castClass + 2 * *p_offset);
  }
  else
  {
LABEL_49:
    v42 = sub_AA67A0(this, SimpleAnimation_State_TypeInfo, 8LL);
  }
  this = (QuestRewardTokenAction_o *)(*(__int64 (__fastcall **)(QuestRewardTokenAction_o *, _QWORD, float))v42)(
                                       v39,
                                       *(_QWORD *)(v42 + 8),
                                       0.0);
  v48 = *p_simpleAnimation;
  if ( !*p_simpleAnimation )
    goto LABEL_74;
  this = (QuestRewardTokenAction_o *)v48[1].monitor;
  if ( !this )
    goto LABEL_74;
  v49 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestRewardTokenAction_o *)SimpleAnimation__get_Item(v48, v49, 0LL);
  if ( !this )
    goto LABEL_74;
  v50 = this->klass;
  v51 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v52 = 0LL;
    v53 = &v50->_1.interfaceOffsets->offset;
    while ( *((SimpleAnimation_State_c **)v53 - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v52;
      v53 += 4;
      if ( v52 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_69;
    }
    v54 = (__int64)(&v50[1]._1.byval_arg.bits + 4 * *v53);
  }
  else
  {
LABEL_69:
    v54 = sub_AA67A0(this, SimpleAnimation_State_TypeInfo, 6LL);
  }
  (*(void (__fastcall **)(QuestRewardTokenAction_o *, _QWORD, float))v54)(v51, *(_QWORD *)(v54 + 8), 0.0);
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
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  __int64 v15; // x1
  __int64 v16; // x2
  System_Action_o *v17; // x20
  const MethodInfo *v18; // x3

  if ( (byte_4212E7B & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, endAct);
    sub_B0D8A4(&Method_QuestRewardTokenAction___c__DisplayClass18_0__LoadData_b__0__, v5);
    sub_B0D8A4(&QuestRewardTokenAction___c__DisplayClass18_0_TypeInfo, v6);
    byte_4212E7B = 1;
  }
  v7 = sub_B0D974(QuestRewardTokenAction___c__DisplayClass18_0_TypeInfo, endAct, method);
  QuestRewardTokenAction___c__DisplayClass18_0___ctor((QuestRewardTokenAction___c__DisplayClass18_0_o *)v7, 0LL);
  if ( !v7 )
    sub_B0D97C(v8);
  *(_QWORD *)(v7 + 16) = endAct;
  sub_B0D840((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)endAct, v9, v10, v11, v12, v13, v14);
  v17 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v15, v16);
  System_Action___ctor(
    v17,
    (Il2CppObject *)v7,
    Method_QuestRewardTokenAction___c__DisplayClass18_0__LoadData_b__0__,
    0LL);
  QuestRewardTokenAction__LoadEventUI(this, v17, 1, v18);
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
  __int64 v19; // x1
  __int64 v20; // x2
  AssetLoader_LoadEndDataHandler_o *v21; // x21
  const MethodInfo *v22; // x2
  QuestRewardTokenAction_o *v23; // x0
  AssetData_o *v24; // x1

  if ( (byte_4212E7C & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, callback);
    sub_B0D8A4(&AssetManager_TypeInfo, v7);
    sub_B0D8A4(&AssetLoader_LoadEndDataHandler_TypeInfo, v8);
    sub_B0D8A4(&Method_QuestRewardTokenAction_LoadEventUIEnd__, v9);
    sub_B0D8A4(&StringLiteral_6220/*"EventUI/Prefabs/80285"*/, v10);
    byte_4212E7C = 1;
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
      v23 = (QuestRewardTokenAction_o *)sub_B0DC70(v12);
      goto LABEL_13;
    }
    this->fields.eventUILoadCallbackFunc = v12;
    sub_B0D840(
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
      v21 = (AssetLoader_LoadEndDataHandler_o *)sub_B0D974(AssetLoader_LoadEndDataHandler_TypeInfo, v19, v20);
      AssetLoader_LoadEndDataHandler___ctor(
        v21,
        (Il2CppObject *)this,
        Method_QuestRewardTokenAction_LoadEventUIEnd__,
        0LL);
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      if ( !AssetManager__loadAssetStorage((System_String_o *)StringLiteral_6220/*"EventUI/Prefabs/80285"*/, v21, loadParallelMax, 0LL) )
      {
        this->fields.isEventUILoad = 0;
        v23 = this;
        v24 = 0LL;
LABEL_13:
        QuestRewardTokenAction__LoadEventUIEnd(v23, v24, v22);
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

  if ( (byte_4212E7D & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_5394/*"DownloadEventUIAtlas8028500"*/, assetData);
    byte_4212E7D = 1;
  }
  if ( this->fields.isEventUILoad )
  {
    this->fields.eventUIAssetData = assetData;
    this->fields.isEventUILoad = 0;
    sub_B0D840(
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
                             (System_String_o *)StringLiteral_5394/*"DownloadEventUIAtlas8028500"*/,
                             v11);
    this->fields.eventUIDownloadAtlas = UIAtlasFromAssetData;
    sub_B0D840(
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
    sub_B0D840(p_eventUILoadCallbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
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
  __int64 v17; // x2
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v19; // x0
  System_Action_o *v20; // x21

  if ( (byte_4212E83 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, end_act);
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, v12);
    sub_B0D8A4(&Method_QuestRewardTokenAction__Play_b__26_0__, v13);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14);
    byte_4212E83 = 1;
  }
  this->fields.endAct = end_act;
  sub_B0D840(
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
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( fade_in_time <= 0.0 )
  {
    v19 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v19 = AvalonSceneManager_TypeInfo;
    }
    fade_in_time = v19->static_fields->DEFAULT_FADE_TIME;
  }
  v20 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v16, v17);
  System_Action___ctor(v20, (Il2CppObject *)this, Method_QuestRewardTokenAction__Play_b__26_0__, 0LL);
  if ( !Instance )
LABEL_11:
    sub_B0D97C(gameObject);
  CommonUI__maskFadein(Instance, fade_in_time, v20, 0LL);
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

  if ( (byte_4212E7F & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_6220/*"EventUI/Prefabs/80285"*/, v9);
    byte_4212E7F = 1;
  }
  if ( this->fields.isEventUILoad )
  {
    this->fields.isEventUILoad = 0;
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage((System_String_o *)StringLiteral_6220/*"EventUI/Prefabs/80285"*/, 0LL);
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
      AssetManager__releaseAsset_29516400(eventUIAssetData, 0LL);
    }
  }
  this->fields.eventUIDownloadAtlas = 0LL;
  p_eventUIDownloadAtlas = &this->fields.eventUIDownloadAtlas;
  sub_B0D840((BattleServantConfConponent_o *)p_eventUIDownloadAtlas, 0LL, v2, v3, v4, v5, v6, v7);
  *(p_eventUIDownloadAtlas - 1) = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)p_eventUIAssetData, 0LL, v13, v14, v15, v16, v17, v18);
}


bool __fastcall QuestRewardTokenAction__SetEventUI(
        QuestRewardTokenAction_o *this,
        UISprite_o *sprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  UIAtlas_o *IsNullOrEmpty; // x0
  UnityEngine_Object_o *eventUIDownloadAtlas; // x22
  UISprite_o *v9; // x0
  System_String_o *v10; // x1

  if ( (byte_4212E80 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, sprite);
    byte_4212E80 = 1;
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
      v9 = sprite;
      v10 = 0LL;
LABEL_10:
      UISprite__set_spriteName(v9, v10, 0LL);
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
      v9 = sprite;
      v10 = spriteName;
      goto LABEL_10;
    }
LABEL_17:
    sub_B0D97C(IsNullOrEmpty);
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

  if ( (byte_4212E85 & 1) == 0 )
  {
    sub_B0D8A4(&Method_CStateManager_QuestRewardTokenAction__setState__, *(_QWORD *)&state);
    byte_4212E85 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_B0D97C(0LL);
  CStateManager_QAASpotStateController_IMapSpot___setState(
    (CStateManager_QAASpotStateController_IMapSpot__o *)fsm,
    state,
    (const MethodInfo_2AAF8F4 *)Method_CStateManager_QuestRewardTokenAction__setState__);
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
  __int64 v16; // x2
  QuestRewardTokenAction___c_c *v17; // x0
  struct QuestRewardTokenAction___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__25_0; // x21
  Il2CppObject *v20; // x22
  struct QuestRewardTokenAction___c_StaticFields *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  __int64 v28; // x8
  __int64 v29; // x22
  __int64 v30; // x23
  __int64 v31; // x8
  int v32; // w21
  int v33; // w9
  struct QuestRewardTokenAction_StaticFields *v34; // x8
  int v35; // w21
  int v36; // w8
  struct UISprite_array *tokenSprite; // x8
  unsigned __int64 v38; // x26
  unsigned __int64 max_length; // x9
  UnityEngine_Object_o *v40; // x21
  struct UISprite_array *v41; // x8
  UISprite_o *v42; // x21
  System_String_o *v43; // x0
  const MethodInfo *v44; // x3
  struct UILabel_array *tokenName; // x8
  unsigned __int64 v46; // x9
  UnityEngine_Object_o *v47; // x21
  struct UILabel_array *v48; // x8
  UILabel_o *v49; // x21
  unsigned __int64 v50; // x8
  __int64 v51; // x0
  struct ScreenTouchInformationComponent_o **p_screenTouchInfo; // x20
  UnityEngine_Object_o *screenTouchInfo; // x21
  CommonUI_o *Instance; // x21
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  __int64 v62; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4212E82 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_Sort_QuestRewardInfo___, infos);
    sub_B0D8A4(&Method_System_Comparison_QuestRewardInfo___ctor__, v5);
    sub_B0D8A4(&System_Comparison_QuestRewardInfo__TypeInfo, v6);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___, v7);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___, v8);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v9);
    sub_B0D8A4(&QuestRewardTokenAction_TypeInfo, v10);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_B0D8A4(&Method_QuestRewardTokenAction___c__Setup_b__25_0__, v12);
    sub_B0D8A4(&QuestRewardTokenAction___c_TypeInfo, v13);
    byte_4212E82 = 1;
  }
  v62 = 0LL;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_66;
  transform = UnityEngine_Component__GetComponentInChildren_UIWidget_(
                (UnityEngine_Component_o *)transform,
                (const MethodInfo_170E750 *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
  if ( !transform )
    goto LABEL_66;
  *((_BYTE *)transform + 101) = 1;
  v17 = QuestRewardTokenAction___c_TypeInfo;
  if ( (BYTE3(QuestRewardTokenAction___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestRewardTokenAction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRewardTokenAction___c_TypeInfo);
    v17 = QuestRewardTokenAction___c_TypeInfo;
  }
  static_fields = v17->static_fields;
  _9__25_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__25_0;
  if ( !_9__25_0 )
  {
    if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      static_fields = QuestRewardTokenAction___c_TypeInfo->static_fields;
    }
    v20 = (Il2CppObject *)static_fields->__9;
    _9__25_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                           System_Comparison_QuestRewardInfo__TypeInfo,
                                                                           v15,
                                                                           v16);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__25_0,
      v20,
      Method_QuestRewardTokenAction___c__Setup_b__25_0__,
      (const MethodInfo_2412E90 *)Method_System_Comparison_QuestRewardInfo___ctor__);
    v21 = QuestRewardTokenAction___c_TypeInfo->static_fields;
    v21->__9__25_0 = (struct System_Comparison_QuestRewardInfo__o *)_9__25_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v21->__9__25_0,
      (System_Int32_array **)_9__25_0,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
  }
  System_Array__Sort_BattleBuffData_BuffData_(
    (BattleBuffData_BuffData_array *)infos,
    (System_Comparison_T__o *)_9__25_0,
    (const MethodInfo_23398EC *)Method_System_Array_Sort_QuestRewardInfo___);
  if ( !infos )
    goto LABEL_66;
  v28 = *(_QWORD *)&infos->max_length;
  if ( (int)v28 >= 1 )
  {
    v29 = (int)v28;
    v30 = 4LL;
    while ( 1 )
    {
      v31 = *((_QWORD *)&infos->obj.klass + v30);
      if ( v31 && *(_DWORD *)(v31 + 16) == 13 )
      {
        transform = QuestRewardTokenAction_TypeInfo;
        v32 = *(_DWORD *)(v31 + 20);
        if ( (WORD1(QuestRewardTokenAction_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 )
        {
          if ( !QuestRewardTokenAction_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(QuestRewardTokenAction_TypeInfo);
            transform = QuestRewardTokenAction_TypeInfo;
          }
          v33 = WORD1(QuestRewardTokenAction_TypeInfo->vtable._0_Equals.methodPtr) & 0x400;
        }
        else
        {
          v33 = 0;
        }
        v34 = (struct QuestRewardTokenAction_StaticFields *)*((_QWORD *)transform + 23);
        v35 = v32 - v34->TOKEN_EVENT_ID;
        HIDWORD(v62) = v35;
        if ( v35 >= 27 )
        {
          if ( v33 && !*((_DWORD *)transform + 56) )
          {
            j_il2cpp_runtime_class_init_0(transform);
            v34 = QuestRewardTokenAction_TypeInfo->static_fields;
          }
          v36 = v35 + v34->TOKEN_IMAGE_ID + 1;
        }
        else
        {
          if ( v33 && !*((_DWORD *)transform + 56) )
          {
            j_il2cpp_runtime_class_init_0(transform);
            v34 = QuestRewardTokenAction_TypeInfo->static_fields;
          }
          v36 = v34->TOKEN_IMAGE_ID + v35;
        }
        LODWORD(v62) = v36;
        tokenSprite = this->fields.tokenSprite;
        v38 = v30 - 4;
        if ( tokenSprite )
        {
          max_length = tokenSprite->max_length;
          if ( (__int64)v38 < (int)max_length )
          {
            if ( v38 >= max_length )
              goto LABEL_55;
            v40 = (UnityEngine_Object_o *)*((_QWORD *)&tokenSprite->obj.klass + v30);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            transform = (void *)UnityEngine_Object__op_Inequality(v40, 0LL, 0LL);
            if ( ((unsigned __int8)transform & 1) != 0 )
            {
              v41 = this->fields.tokenSprite;
              if ( !v41 )
                goto LABEL_66;
              if ( v38 >= v41->max_length )
                goto LABEL_55;
              v42 = (UISprite_o *)*((_QWORD *)&v41->obj.klass + v30);
              v43 = System_Int32__ToString((int32_t)&v62, 0LL);
              transform = (void *)QuestRewardTokenAction__SetEventUI(this, v42, v43, v44);
            }
          }
        }
        tokenName = this->fields.tokenName;
        if ( tokenName )
        {
          v46 = tokenName->max_length;
          if ( (__int64)v38 < (int)v46 )
          {
            if ( v38 >= v46 )
              goto LABEL_55;
            v47 = (UnityEngine_Object_o *)*((_QWORD *)&tokenName->obj.klass + v30);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            transform = (void *)UnityEngine_Object__op_Inequality(v47, 0LL, 0LL);
            if ( ((unsigned __int8)transform & 1) != 0 )
            {
              v48 = this->fields.tokenName;
              if ( !v48 )
                goto LABEL_66;
              if ( v38 >= v48->max_length )
                goto LABEL_55;
              v49 = (UILabel_o *)*((_QWORD *)&v48->obj.klass + v30);
              transform = System_Int32__ToString((int32_t)&v62 + 4, 0LL);
              if ( !v49 )
                goto LABEL_66;
              UILabel__set_text(v49, (System_String_o *)transform, 0LL);
            }
          }
        }
      }
      v50 = v30 - 3;
      if ( v30 - 3 >= v29 )
        break;
      ++v30;
      if ( v50 >= infos->max_length )
      {
LABEL_55:
        v51 = sub_B0D9A8(transform);
        sub_B0D948(v51, 0LL);
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
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( Instance )
    {
      transform = CommonUI__CreateScreeenTouchInfo(Instance, (UnityEngine_Transform_o *)transform, 0, 0LL);
      if ( transform )
      {
        Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                           (UnityEngine_GameObject_o *)transform,
                                                           (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
        *p_screenTouchInfo = (struct ScreenTouchInformationComponent_o *)Component_srcLineSprite;
        sub_B0D840(
          (BattleServantConfConponent_o *)&this->fields.screenTouchInfo,
          Component_srcLineSprite,
          v56,
          v57,
          v58,
          v59,
          v60,
          v61);
        goto LABEL_63;
      }
    }
LABEL_66:
    sub_B0D97C(transform);
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

  if ( (byte_4212E7A & 1) == 0 )
  {
    sub_B0D8A4(&Method_CStateManager_QuestRewardTokenAction__update__, method);
    sub_B0D8A4(&CTouch_TypeInfo, v3);
    byte_4212E7A = 1;
  }
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__process(0LL);
  fsm = this->fields.fsm;
  if ( fsm )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)fsm,
      (const MethodInfo_2AAF8CC *)Method_CStateManager_QuestRewardTokenAction__update__);
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
  QuestRewardTokenAction_StatePlay_c *klass; // x8
  QuestRewardTokenAction_StatePlay_o *v13; // x20
  unsigned __int64 v14; // x10
  int32_t *p_offset; // x11
  __int64 v16; // x0
  UnityEngine_Object_o *animation; // x20
  UnityEngine_Animation_o *v18; // x20
  System_String_o *name; // x0
  UnityEngine_Animation_o *v20; // x20
  System_String_o *v21; // x0
  UnityEngine_Animation_o *v22; // x20
  System_String_o *v23; // x0
  UnityEngine_Animation_o *v24; // x19
  System_String_o *v25; // x0
  struct SimpleAnimation_o *v26; // x19
  System_String_o *v27; // x0
  QuestRewardTokenAction_StatePlay_c *v28; // x8
  QuestRewardTokenAction_StatePlay_o *v29; // x19
  unsigned __int64 v30; // x10
  int32_t *v31; // x11
  __int64 v32; // x0

  if ( (byte_4212502 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, that);
    this = (QuestRewardTokenAction_StatePlay_o *)sub_B0D8A4(&SimpleAnimation_State_TypeInfo, v4);
    byte_4212502 = 1;
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
    v18 = that->fields.animation;
    if ( v18 )
    {
      this = (QuestRewardTokenAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.animation, 0LL);
      if ( this )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
        this = (QuestRewardTokenAction_StatePlay_o *)UnityEngine_Animation__IsPlaying(v18, name, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v20 = that->fields.animation;
          if ( !v20 )
            goto LABEL_51;
          this = (QuestRewardTokenAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.animation, 0LL);
          if ( !this )
            goto LABEL_51;
          v21 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
          this = (QuestRewardTokenAction_StatePlay_o *)UnityEngine_Animation__Play_50564840(v20, v21, 0LL);
        }
        v22 = that->fields.animation;
        if ( v22 )
        {
          this = (QuestRewardTokenAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.animation, 0LL);
          if ( this )
          {
            v23 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
            this = (QuestRewardTokenAction_StatePlay_o *)UnityEngine_Animation__get_Item(v22, v23, 0LL);
            if ( this )
            {
              UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)this, 0.0, 0LL);
              v24 = that->fields.animation;
              if ( v24 )
              {
                this = (QuestRewardTokenAction_StatePlay_o *)UnityEngine_Animation__get_clip(v24, 0LL);
                if ( this )
                {
                  v25 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
                  this = (QuestRewardTokenAction_StatePlay_o *)UnityEngine_Animation__get_Item(v24, v25, 0LL);
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
    sub_B0D97C(this);
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
    this = (QuestRewardTokenAction_StatePlay_o *)SimpleAnimation__Play_50482404(v8, v9, 0LL);
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
  v13 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v14 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((SimpleAnimation_State_c **)p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v14;
      p_offset += 4;
      if ( v14 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_21;
    }
    v16 = (__int64)(&klass->vtable._6_end.method + 2 * *p_offset);
  }
  else
  {
LABEL_21:
    v16 = sub_AA67A0(this, SimpleAnimation_State_TypeInfo, 6LL);
  }
  this = (QuestRewardTokenAction_StatePlay_o *)(*(__int64 (__fastcall **)(QuestRewardTokenAction_StatePlay_o *, _QWORD, float))v16)(
                                                 v13,
                                                 *(_QWORD *)(v16 + 8),
                                                 0.0);
  v26 = that->fields.simpleAnimation;
  if ( !v26 )
    goto LABEL_51;
  this = (QuestRewardTokenAction_StatePlay_o *)v26[1].monitor;
  if ( !this )
    goto LABEL_51;
  v27 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestRewardTokenAction_StatePlay_o *)SimpleAnimation__get_Item(v26, v27, 0LL);
  if ( !this )
    goto LABEL_51;
  v28 = this->klass;
  v29 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v30 = 0LL;
    v31 = &v28->_1.interfaceOffsets->offset;
    while ( *((SimpleAnimation_State_c **)v31 - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v30;
      v31 += 4;
      if ( v30 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_48;
    }
    v32 = (__int64)(&v28[1]._1.namespaze + 2 * *v31);
  }
  else
  {
LABEL_48:
    v32 = sub_AA67A0(this, SimpleAnimation_State_TypeInfo, 8LL);
  }
  (*(void (__fastcall **)(QuestRewardTokenAction_StatePlay_o *, _QWORD, float))v32)(v29, *(_QWORD *)(v32 + 8), 1.0);
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

  if ( (byte_4212503 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, that);
    this = (QuestRewardTokenAction_StatePlay_o *)sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_4212503 = 1;
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
    this = (QuestRewardTokenAction_StatePlay_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( this )
    {
      if ( !CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0LL) )
        QuestRewardTokenAction__SetState(that, 2, 0LL);
      return;
    }
LABEL_23:
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
  QuestRewardTokenAction_StateTouchWait___c__DisplayClass1_0_Fields *p_fields; // x19
  __int64 v13; // x1
  __int64 v14; // x2
  CommonUI_o *Instance; // x21
  AvalonSceneManager_c *v16; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v18; // x22

  if ( (byte_4212504 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, that);
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, v4);
    sub_B0D8A4(&CTouch_TypeInfo, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B0D8A4(&SoundManager_TypeInfo, v7);
    sub_B0D8A4(&Method_QuestRewardTokenAction_StateTouchWait___c__DisplayClass1_0__update_b__0__, v8);
    sub_B0D8A4(&QuestRewardTokenAction_StateTouchWait___c__DisplayClass1_0_TypeInfo, v9);
    byte_4212504 = 1;
  }
  v10 = (QuestRewardTokenAction_StateTouchWait___c__DisplayClass1_0_o *)sub_B0D974(
                                                                          QuestRewardTokenAction_StateTouchWait___c__DisplayClass1_0_TypeInfo,
                                                                          that,
                                                                          method);
  QuestRewardTokenAction_StateTouchWait___c__DisplayClass1_0___ctor(v10, 0LL);
  if ( !v10 )
    goto LABEL_21;
  v10->fields.that = that;
  p_fields = &v10->fields;
  sub_B0D840(&v10->fields, that);
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
          Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v16 = AvalonSceneManager_TypeInfo;
          if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
            v16 = AvalonSceneManager_TypeInfo;
          }
          DEFAULT_FADE_TIME = v16->static_fields->DEFAULT_FADE_TIME;
          v18 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v13, v14);
          System_Action___ctor(
            v18,
            (Il2CppObject *)v10,
            Method_QuestRewardTokenAction_StateTouchWait___c__DisplayClass1_0__update_b__0__,
            0LL);
          if ( Instance )
          {
            CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v18, 0LL);
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
    sub_B0D97C(isTouchPush);
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
    sub_B0D97C(this);
  ActionExtensions__Call(that->fields.endAct, 0LL);
}


void __fastcall QuestRewardTokenAction___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct QuestRewardTokenAction___c_StaticFields *static_fields; // x0

  if ( (byte_4212501 & 1) == 0 )
  {
    sub_B0D8A4(&QuestRewardTokenAction___c_TypeInfo, v1);
    byte_4212501 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(QuestRewardTokenAction___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = QuestRewardTokenAction___c_TypeInfo->static_fields;
  static_fields->__9 = (struct QuestRewardTokenAction___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
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