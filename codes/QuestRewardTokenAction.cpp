void __fastcall QuestRewardTokenAction___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E6F08 & 1) == 0 )
  {
    sub_B5D5C4(&QuestRewardTokenAction_TypeInfo, v1, v2, v3);
    byte_42E6F08 = 1;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  struct CStateManager_QuestRewardTokenAction__o **p_fsm; // x20
  CStateManager_QAASpotStateController_IMapSpot__o *v21; // x21
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  struct CStateManager_QuestRewardTokenAction__o *fsm; // x21
  QuestRewardTokenAction_StateNone_o *v29; // x22
  __int64 v30; // x0
  __int64 v31; // x1
  CStateManager_QAASpotStateController_IMapSpot__o *v32; // x21
  QuestRewardTokenAction_StatePlay_o *v33; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v34; // x20
  QuestRewardTokenAction_StateTouchWait_o *v35; // x21
  const MethodInfo *v36; // x2

  if ( (byte_42E6EFB & 1) == 0 )
  {
    sub_B5D5C4(&Method_CStateManager_QuestRewardTokenAction___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_CStateManager_QuestRewardTokenAction__add__, v5, v6, v7);
    sub_B5D5C4(&CStateManager_QuestRewardTokenAction__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&QuestRewardTokenAction_StateNone_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&QuestRewardTokenAction_StatePlay_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&QuestRewardTokenAction_StateTouchWait_TypeInfo, v17, v18, v19);
    byte_42E6EFB = 1;
  }
  p_fsm = &this->fields.fsm;
  if ( !this->fields.fsm )
  {
    v21 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B5D694(CStateManager_QuestRewardTokenAction__TypeInfo);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v21,
      (QAASpotStateController_IMapSpot_o *)this,
      3,
      (const MethodInfo_2BB2630 *)Method_CStateManager_QuestRewardTokenAction___ctor__);
    this->fields.fsm = (struct CStateManager_QuestRewardTokenAction__o *)v21;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.fsm,
      (System_Int32_array **)v21,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
    fsm = this->fields.fsm;
    v29 = (QuestRewardTokenAction_StateNone_o *)sub_B5D694(QuestRewardTokenAction_StateNone_TypeInfo);
    QuestRewardTokenAction_StateNone___ctor(v29, 0LL);
    if ( !fsm )
      goto LABEL_8;
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)fsm,
      0,
      (IState_T__o *)v29,
      (const MethodInfo_2BB26FC *)Method_CStateManager_QuestRewardTokenAction__add__);
    v32 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_fsm;
    v33 = (QuestRewardTokenAction_StatePlay_o *)sub_B5D694(QuestRewardTokenAction_StatePlay_TypeInfo);
    QuestRewardTokenAction_StatePlay___ctor(v33, 0LL);
    if ( !v32
      || (CStateManager_QAASpotStateController_IMapSpot___add(
            v32,
            1,
            (IState_T__o *)v33,
            (const MethodInfo_2BB26FC *)Method_CStateManager_QuestRewardTokenAction__add__),
          v34 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_fsm,
          v35 = (QuestRewardTokenAction_StateTouchWait_o *)sub_B5D694(QuestRewardTokenAction_StateTouchWait_TypeInfo),
          QuestRewardTokenAction_StateTouchWait___ctor(v35, 0LL),
          !v34) )
    {
LABEL_8:
      sub_B5D69C(v30, v31);
    }
    CStateManager_QAASpotStateController_IMapSpot___add(
      v34,
      2,
      (IState_T__o *)v35,
      (const MethodInfo_2BB26FC *)Method_CStateManager_QuestRewardTokenAction__add__);
    QuestRewardTokenAction__SetState(this, 0, v36);
  }
}


UIAtlas_o *__fastcall QuestRewardTokenAction__CreateUIAtlasFromAssetData(
        QuestRewardTokenAction_o *this,
        AssetData_o *assetData,
        System_String_o *name,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  UIAtlas_o *result; // x0

  if ( (byte_42E6F00 & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObjectList_GameObject___, (_DWORD)assetData, (_DWORD)name, method);
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, v6, v7, v8);
    this = (QuestRewardTokenAction_o *)sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v9, v10, v11);
    byte_42E6F00 = 1;
  }
  if ( !assetData )
    goto LABEL_10;
  result = (UIAtlas_o *)AssetData__GetObjectList_Texture2D_(
                          assetData,
                          (const MethodInfo_1AD0B80 *)Method_AssetData_GetObjectList_GameObject___);
  if ( result )
  {
    if ( result->fields.material )
    {
      this = (QuestRewardTokenAction_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                           assetData,
                                           name,
                                           (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
      if ( this )
        return (UIAtlas_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              (UnityEngine_GameObject_o *)this,
                              (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
LABEL_10:
      sub_B5D69C(this, assetData);
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
  int v2; // w2
  __int64 v3; // x3
  QuestRewardTokenAction_o *v4; // x19
  struct CStateManager_QuestRewardTokenAction__o *fsm; // x8

  v4 = this;
  if ( (byte_42E6F06 & 1) == 0 )
  {
    this = (QuestRewardTokenAction_o *)sub_B5D5C4(
                                         &Method_CStateManager_QuestRewardTokenAction__getState__,
                                         (_DWORD)method,
                                         v2,
                                         v3);
    byte_42E6F06 = 1;
  }
  fsm = v4->fields.fsm;
  if ( !fsm )
    sub_B5D69C(this, method);
  return fsm->fields.m_state;
}


void __fastcall QuestRewardTokenAction__Init(QuestRewardTokenAction_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  QuestRewardTokenAction_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct UISprite_array *tokenSprite; // x8
  __int64 v15; // x9
  __int64 v16; // x21
  __int64 v17; // x22
  UnityEngine_Object_o *v18; // x20
  __int64 v19; // x1
  struct UISprite_array *v20; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct UILabel_array *tokenName; // x8
  __int64 v23; // x9
  __int64 v24; // x21
  __int64 v25; // x22
  UnityEngine_Object_o *v26; // x20
  struct UILabel_array *v27; // x8
  System_Int32_array **ComponentInChildren_UIWidget; // x0
  UnityEngine_Animation_o **p_animation; // x20
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Int32_array **v36; // x0
  struct SimpleAnimation_o **p_simpleAnimation; // x21
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  UnityEngine_Object_o *simpleAnimation; // x22
  struct SimpleAnimation_o *v45; // x20
  System_String_o *v46; // x0
  __int64 v47; // x3
  QuestRewardTokenAction_c *klass; // x8
  QuestRewardTokenAction_o *v49; // x20
  unsigned __int64 v50; // x10
  int32_t *p_offset; // x11
  __int64 v52; // x0
  UnityEngine_Animation_o *v53; // x21
  UnityEngine_Animation_o *v54; // x21
  System_String_o *name; // x0
  UnityEngine_Animation_o *v56; // x20
  System_String_o *v57; // x0
  struct SimpleAnimation_o *v58; // x20
  System_String_o *v59; // x0
  __int64 v60; // x3
  QuestRewardTokenAction_c *v61; // x8
  QuestRewardTokenAction_o *v62; // x20
  unsigned __int64 v63; // x10
  int32_t *v64; // x11
  __int64 v65; // x0
  __int64 v66; // x0

  v4 = this;
  if ( (byte_42E6F03 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentInChildren_Animation___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    this = (QuestRewardTokenAction_o *)sub_B5D5C4(&SimpleAnimation_State_TypeInfo, v11, v12, v13);
    byte_42E6F03 = 1;
  }
  tokenSprite = v4->fields.tokenSprite;
  if ( tokenSprite )
  {
    v15 = *(_QWORD *)&tokenSprite->max_length;
    if ( (int)v15 >= 1 )
    {
      v16 = (int)v15;
      v17 = 4LL;
      while ( v17 - 4 < (unsigned __int64)tokenSprite->max_length )
      {
        v18 = (UnityEngine_Object_o *)*((_QWORD *)&tokenSprite->obj.klass + v17);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (QuestRewardTokenAction_o *)UnityEngine_Object__op_Inequality(v18, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v20 = v4->fields.tokenSprite;
          if ( !v20 )
            goto LABEL_74;
          if ( v17 - 4 >= (unsigned __int64)v20->max_length )
            break;
          this = (QuestRewardTokenAction_o *)*((_QWORD *)&v20->obj.klass + v17);
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
        if ( v17 - 3 >= v16 )
          goto LABEL_20;
        tokenSprite = v4->fields.tokenSprite;
        ++v17;
        if ( !tokenSprite )
          goto LABEL_74;
      }
LABEL_75:
      v66 = sub_B5D6C8(this);
      sub_B5D668(v66, 0LL);
    }
  }
LABEL_20:
  tokenName = v4->fields.tokenName;
  if ( tokenName )
  {
    v23 = *(_QWORD *)&tokenName->max_length;
    if ( (int)v23 >= 1 )
    {
      v24 = (int)v23;
      v25 = 4LL;
      while ( v25 - 4 < (unsigned __int64)tokenName->max_length )
      {
        v26 = (UnityEngine_Object_o *)*((_QWORD *)&tokenName->obj.klass + v25);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (QuestRewardTokenAction_o *)UnityEngine_Object__op_Inequality(v26, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v27 = v4->fields.tokenName;
          if ( !v27 )
            goto LABEL_74;
          if ( v25 - 4 >= (unsigned __int64)v27->max_length )
            goto LABEL_75;
          this = (QuestRewardTokenAction_o *)*((_QWORD *)&v27->obj.klass + v25);
          if ( !this )
            goto LABEL_74;
          this = (QuestRewardTokenAction_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          if ( !this )
            goto LABEL_74;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        }
        if ( v25 - 3 >= v24 )
          goto LABEL_36;
        tokenName = v4->fields.tokenName;
        ++v25;
        if ( !tokenName )
          goto LABEL_74;
      }
      goto LABEL_75;
    }
  }
LABEL_36:
  this = (QuestRewardTokenAction_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v4, 0LL);
  if ( !this )
    goto LABEL_74;
  ComponentInChildren_UIWidget = (System_Int32_array **)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                          (UnityEngine_Component_o *)this,
                                                          (const MethodInfo_1ADE34C *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  v4->fields.animation = (struct UnityEngine_Animation_o *)ComponentInChildren_UIWidget;
  p_animation = &v4->fields.animation;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v4->fields.animation,
    ComponentInChildren_UIWidget,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  this = (QuestRewardTokenAction_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v4, 0LL);
  if ( !this )
    goto LABEL_74;
  v36 = (System_Int32_array **)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                 (UnityEngine_Component_o *)this,
                                 (const MethodInfo_1ADE34C *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  v4->fields.simpleAnimation = (struct SimpleAnimation_o *)v36;
  p_simpleAnimation = &v4->fields.simpleAnimation;
  sub_B5D560((BattleServantConfConponent_o *)&v4->fields.simpleAnimation, v36, v38, v39, v40, v41, v42, v43);
  simpleAnimation = (UnityEngine_Object_o *)v4->fields.simpleAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (QuestRewardTokenAction_o *)UnityEngine_Object__op_Inequality(simpleAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v53 = *p_animation;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (QuestRewardTokenAction_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v53, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_72;
    v54 = *p_animation;
    if ( *p_animation )
    {
      this = (QuestRewardTokenAction_o *)UnityEngine_Animation__get_clip(*p_animation, 0LL);
      if ( this )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
        this = (QuestRewardTokenAction_o *)UnityEngine_Animation__get_Item(v54, name, 0LL);
        if ( this )
        {
          UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)this, 0.0, 0LL);
          v56 = *p_animation;
          if ( v56 )
          {
            this = (QuestRewardTokenAction_o *)UnityEngine_Animation__get_clip(v56, 0LL);
            if ( this )
            {
              v57 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
              this = (QuestRewardTokenAction_o *)UnityEngine_Animation__get_Item(v56, v57, 0LL);
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
    sub_B5D69C(this, v19);
  }
  v45 = *p_simpleAnimation;
  if ( !*p_simpleAnimation )
    goto LABEL_74;
  this = (QuestRewardTokenAction_o *)v45[1].monitor;
  if ( !this )
    goto LABEL_74;
  v46 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestRewardTokenAction_o *)SimpleAnimation__get_Item(v45, v46, 0LL);
  if ( !this )
    goto LABEL_74;
  klass = this->klass;
  v49 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v50 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((SimpleAnimation_State_c **)p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v50;
      p_offset += 4;
      if ( v50 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_49;
    }
    v52 = (__int64)(&klass[1]._1.castClass + 2 * *p_offset);
  }
  else
  {
LABEL_49:
    v52 = sub_AF54C0(this, SimpleAnimation_State_TypeInfo, 8LL, v47);
  }
  this = (QuestRewardTokenAction_o *)(*(__int64 (__fastcall **)(QuestRewardTokenAction_o *, _QWORD, float))v52)(
                                       v49,
                                       *(_QWORD *)(v52 + 8),
                                       0.0);
  v58 = *p_simpleAnimation;
  if ( !*p_simpleAnimation )
    goto LABEL_74;
  this = (QuestRewardTokenAction_o *)v58[1].monitor;
  if ( !this )
    goto LABEL_74;
  v59 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestRewardTokenAction_o *)SimpleAnimation__get_Item(v58, v59, 0LL);
  if ( !this )
    goto LABEL_74;
  v61 = this->klass;
  v62 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v63 = 0LL;
    v64 = &v61->_1.interfaceOffsets->offset;
    while ( *((SimpleAnimation_State_c **)v64 - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v63;
      v64 += 4;
      if ( v63 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_69;
    }
    v65 = (__int64)(&v61[1]._1.byval_arg.bits + 4 * *v64);
  }
  else
  {
LABEL_69:
    v65 = sub_AF54C0(this, SimpleAnimation_State_TypeInfo, 6LL, v60);
  }
  (*(void (__fastcall **)(QuestRewardTokenAction_o *, _QWORD, float))v65)(v62, *(_QWORD *)(v65 + 8), 0.0);
LABEL_72:
  this = (QuestRewardTokenAction_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0LL);
  if ( !this )
    goto LABEL_74;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


void __fastcall QuestRewardTokenAction__LoadData(
        QuestRewardTokenAction_o *this,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  __int64 v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Action_o *v21; // x20
  const MethodInfo *v22; // x3

  if ( (byte_42E6EFD & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)endAct, (_DWORD)method, v3);
    sub_B5D5C4(&Method_QuestRewardTokenAction___c__DisplayClass18_0__LoadData_b__0__, v6, v7, v8);
    sub_B5D5C4(&QuestRewardTokenAction___c__DisplayClass18_0_TypeInfo, v9, v10, v11);
    byte_42E6EFD = 1;
  }
  v12 = sub_B5D694(QuestRewardTokenAction___c__DisplayClass18_0_TypeInfo);
  QuestRewardTokenAction___c__DisplayClass18_0___ctor((QuestRewardTokenAction___c__DisplayClass18_0_o *)v12, 0LL);
  if ( !v12 )
    sub_B5D69C(v13, v14);
  *(_QWORD *)(v12 + 16) = endAct;
  sub_B5D560((BattleServantConfConponent_o *)(v12 + 16), (System_Int32_array **)endAct, v15, v16, v17, v18, v19, v20);
  v21 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v21,
    (Il2CppObject *)v12,
    Method_QuestRewardTokenAction___c__DisplayClass18_0__LoadData_b__0__,
    0LL);
  QuestRewardTokenAction__LoadEventUI(this, v21, 1, v22);
}


void __fastcall QuestRewardTokenAction__LoadEventUI(
        QuestRewardTokenAction_o *this,
        System_Action_o *callback,
        int32_t loadParallelMax,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  AssetData_o *eventUIAssetData; // x0
  struct System_Action_o *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  AssetLoader_LoadEndDataHandler_o *v27; // x21
  const MethodInfo *v28; // x2
  QuestRewardTokenAction_o *v29; // x0
  AssetData_o *v30; // x1

  if ( (byte_42E6EFE & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, loadParallelMax, method);
    sub_B5D5C4(&AssetManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_QuestRewardTokenAction_LoadEventUIEnd__, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_6282/*"EventUI/Prefabs/80285"*/, v16, v17, v18);
    byte_42E6EFE = 1;
  }
  eventUIAssetData = this->fields.eventUIAssetData;
  if ( eventUIAssetData && !AssetData__get_IsEmpty(eventUIAssetData, 0LL) )
  {
    if ( callback )
      System_Action__Invoke(callback, 0LL);
  }
  else
  {
    v20 = (struct System_Action_o *)System_Delegate__Combine(
                                      (System_Delegate_o *)this->fields.eventUILoadCallbackFunc,
                                      (System_Delegate_o *)callback,
                                      0LL);
    if ( v20 && v20->klass != System_Action_TypeInfo )
    {
      v29 = (QuestRewardTokenAction_o *)sub_B5D990(v20);
      goto LABEL_13;
    }
    this->fields.eventUILoadCallbackFunc = v20;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.eventUILoadCallbackFunc,
      (System_Int32_array **)v20,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
    if ( !this->fields.isEventUILoad )
    {
      this->fields.isEventUILoad = 1;
      v27 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v27,
        (Il2CppObject *)this,
        Method_QuestRewardTokenAction_LoadEventUIEnd__,
        0LL);
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      if ( !AssetManager__loadAssetStorage((System_String_o *)StringLiteral_6282/*"EventUI/Prefabs/80285"*/, v27, loadParallelMax, 0LL) )
      {
        this->fields.isEventUILoad = 0;
        v29 = this;
        v30 = 0LL;
LABEL_13:
        QuestRewardTokenAction__LoadEventUIEnd(v29, v30, v28);
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

  if ( (byte_42E6EFF & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_5454/*"DownloadEventUIAtlas8028500"*/, (_DWORD)assetData, (_DWORD)method, v3);
    byte_42E6EFF = 1;
  }
  if ( this->fields.isEventUILoad )
  {
    this->fields.eventUIAssetData = assetData;
    this->fields.isEventUILoad = 0;
    sub_B5D560(
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
                             (System_String_o *)StringLiteral_5454/*"DownloadEventUIAtlas8028500"*/,
                             v11);
    this->fields.eventUIDownloadAtlas = UIAtlasFromAssetData;
    sub_B5D560(
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
    sub_B5D560(p_eventUILoadCallbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
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
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v22; // x1
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v24; // x0
  System_Action_o *v25; // x21

  if ( (byte_42E6F05 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)end_act, (_DWORD)method, v4);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_QuestRewardTokenAction__Play_b__26_0__, v15, v16, v17);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v18, v19, v20);
    byte_42E6F05 = 1;
  }
  this->fields.endAct = end_act;
  sub_B5D560(
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
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( fade_in_time <= 0.0 )
  {
    v24 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v24 = AvalonSceneManager_TypeInfo;
    }
    fade_in_time = v24->static_fields->DEFAULT_FADE_TIME;
  }
  v25 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v25, (Il2CppObject *)this, Method_QuestRewardTokenAction__Play_b__26_0__, 0LL);
  if ( !Instance )
LABEL_11:
    sub_B5D69C(gameObject, v22);
  CommonUI__maskFadein(Instance, fade_in_time, v25, 0LL);
}


void __fastcall QuestRewardTokenAction__ReleaseEventUI(QuestRewardTokenAction_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  struct AssetData_o **p_eventUIAssetData; // x20
  AssetData_o *eventUIAssetData; // x21
  struct UIAtlas_o **p_eventUIDownloadAtlas; // x19
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_42E6F01 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_6282/*"EventUI/Prefabs/80285"*/, v9, v10, v11);
    byte_42E6F01 = 1;
  }
  if ( this->fields.isEventUILoad )
  {
    this->fields.isEventUILoad = 0;
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage((System_String_o *)StringLiteral_6282/*"EventUI/Prefabs/80285"*/, 0LL);
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
      AssetManager__releaseAsset_30657564(eventUIAssetData, 0LL);
    }
  }
  this->fields.eventUIDownloadAtlas = 0LL;
  p_eventUIDownloadAtlas = &this->fields.eventUIDownloadAtlas;
  sub_B5D560((BattleServantConfConponent_o *)p_eventUIDownloadAtlas, 0LL, v2, v3, v4, v5, v6, v7);
  *(p_eventUIDownloadAtlas - 1) = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)p_eventUIAssetData, 0LL, v15, v16, v17, v18, v19, v20);
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

  if ( (byte_42E6F02 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)sprite, (_DWORD)spriteName, method);
    byte_42E6F02 = 1;
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
    sub_B5D69C(IsNullOrEmpty, v8);
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
  __int64 v3; // x3
  struct CStateManager_QuestRewardTokenAction__o *fsm; // x0

  if ( (byte_42E6F07 & 1) == 0 )
  {
    sub_B5D5C4(&Method_CStateManager_QuestRewardTokenAction__setState__, state, (_DWORD)method, v3);
    byte_42E6F07 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_B5D69C(0LL, *(_QWORD *)&state);
  CStateManager_QAASpotStateController_IMapSpot___setState(
    (CStateManager_QAASpotStateController_IMapSpot__o *)fsm,
    state,
    (const MethodInfo_2BB27A0 *)Method_CStateManager_QuestRewardTokenAction__setState__);
}


void __fastcall QuestRewardTokenAction__Setup(
        QuestRewardTokenAction_o *this,
        QuestRewardInfo_array *infos,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  void *transform; // x0
  __int64 v34; // x1
  QuestRewardTokenAction___c_c *v35; // x0
  struct QuestRewardTokenAction___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__25_0; // x21
  Il2CppObject *v38; // x22
  struct QuestRewardTokenAction___c_StaticFields *v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  __int64 v46; // x8
  __int64 v47; // x22
  __int64 v48; // x23
  __int64 v49; // x8
  int v50; // w21
  int v51; // w9
  struct QuestRewardTokenAction_StaticFields *v52; // x8
  int v53; // w21
  int v54; // w8
  struct UISprite_array *tokenSprite; // x8
  unsigned __int64 v56; // x26
  unsigned __int64 max_length; // x9
  UnityEngine_Object_o *v58; // x21
  struct UISprite_array *v59; // x8
  UISprite_o *v60; // x21
  System_String_o *v61; // x0
  const MethodInfo *v62; // x3
  struct UILabel_array *tokenName; // x8
  unsigned __int64 v64; // x9
  UnityEngine_Object_o *v65; // x21
  struct UILabel_array *v66; // x8
  UILabel_o *v67; // x21
  unsigned __int64 v68; // x8
  __int64 v69; // x0
  struct ScreenTouchInformationComponent_o **p_screenTouchInfo; // x20
  UnityEngine_Object_o *screenTouchInfo; // x21
  CommonUI_o *Instance; // x21
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  __int64 v80; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42E6F04 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_Sort_QuestRewardInfo___, (_DWORD)infos, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Comparison_QuestRewardInfo___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Comparison_QuestRewardInfo__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___, v12, v13, v14);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___, v15, v16, v17);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&QuestRewardTokenAction_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v24, v25, v26);
    sub_B5D5C4(&Method_QuestRewardTokenAction___c__Setup_b__25_0__, v27, v28, v29);
    sub_B5D5C4(&QuestRewardTokenAction___c_TypeInfo, v30, v31, v32);
    byte_42E6F04 = 1;
  }
  v80 = 0LL;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_66;
  transform = UnityEngine_Component__GetComponentInChildren_UIWidget_(
                (UnityEngine_Component_o *)transform,
                (const MethodInfo_1ADE34C *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
  if ( !transform )
    goto LABEL_66;
  *((_BYTE *)transform + 101) = 1;
  v35 = QuestRewardTokenAction___c_TypeInfo;
  if ( (BYTE3(QuestRewardTokenAction___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestRewardTokenAction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRewardTokenAction___c_TypeInfo);
    v35 = QuestRewardTokenAction___c_TypeInfo;
  }
  static_fields = v35->static_fields;
  _9__25_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__25_0;
  if ( !_9__25_0 )
  {
    if ( (BYTE3(v35->vtable._0_Equals.methodPtr) & 4) != 0 && !v35->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v35);
      static_fields = QuestRewardTokenAction___c_TypeInfo->static_fields;
    }
    v38 = (Il2CppObject *)static_fields->__9;
    _9__25_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_QuestRewardInfo__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__25_0,
      v38,
      Method_QuestRewardTokenAction___c__Setup_b__25_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_QuestRewardInfo___ctor__);
    v39 = QuestRewardTokenAction___c_TypeInfo->static_fields;
    v39->__9__25_0 = (struct System_Comparison_QuestRewardInfo__o *)_9__25_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v39->__9__25_0,
      (System_Int32_array **)_9__25_0,
      v40,
      v41,
      v42,
      v43,
      v44,
      v45);
  }
  System_Array__Sort_BattleBuffData_BuffData_(
    (BattleBuffData_BuffData_array *)infos,
    (System_Comparison_T__o *)_9__25_0,
    (const MethodInfo_1AC8530 *)Method_System_Array_Sort_QuestRewardInfo___);
  if ( !infos )
    goto LABEL_66;
  v46 = *(_QWORD *)&infos->max_length;
  if ( (int)v46 >= 1 )
  {
    v47 = (int)v46;
    v48 = 4LL;
    while ( 1 )
    {
      v49 = *((_QWORD *)&infos->obj.klass + v48);
      if ( v49 && *(_DWORD *)(v49 + 16) == 13 )
      {
        transform = QuestRewardTokenAction_TypeInfo;
        v50 = *(_DWORD *)(v49 + 20);
        if ( (WORD1(QuestRewardTokenAction_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 )
        {
          if ( !QuestRewardTokenAction_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(QuestRewardTokenAction_TypeInfo);
            transform = QuestRewardTokenAction_TypeInfo;
          }
          v51 = WORD1(QuestRewardTokenAction_TypeInfo->vtable._0_Equals.methodPtr) & 0x400;
        }
        else
        {
          v51 = 0;
        }
        v52 = (struct QuestRewardTokenAction_StaticFields *)*((_QWORD *)transform + 23);
        v53 = v50 - v52->TOKEN_EVENT_ID;
        HIDWORD(v80) = v53;
        if ( v53 >= 27 )
        {
          if ( v51 && !*((_DWORD *)transform + 56) )
          {
            j_il2cpp_runtime_class_init_0(transform);
            v52 = QuestRewardTokenAction_TypeInfo->static_fields;
          }
          v54 = v53 + v52->TOKEN_IMAGE_ID + 1;
        }
        else
        {
          if ( v51 && !*((_DWORD *)transform + 56) )
          {
            j_il2cpp_runtime_class_init_0(transform);
            v52 = QuestRewardTokenAction_TypeInfo->static_fields;
          }
          v54 = v52->TOKEN_IMAGE_ID + v53;
        }
        LODWORD(v80) = v54;
        tokenSprite = this->fields.tokenSprite;
        v56 = v48 - 4;
        if ( tokenSprite )
        {
          max_length = tokenSprite->max_length;
          if ( (__int64)v56 < (int)max_length )
          {
            if ( v56 >= max_length )
              goto LABEL_55;
            v58 = (UnityEngine_Object_o *)*((_QWORD *)&tokenSprite->obj.klass + v48);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            transform = (void *)UnityEngine_Object__op_Inequality(v58, 0LL, 0LL);
            if ( ((unsigned __int8)transform & 1) != 0 )
            {
              v59 = this->fields.tokenSprite;
              if ( !v59 )
                goto LABEL_66;
              if ( v56 >= v59->max_length )
                goto LABEL_55;
              v60 = (UISprite_o *)*((_QWORD *)&v59->obj.klass + v48);
              v61 = System_Int32__ToString((int32_t)&v80, 0LL);
              transform = (void *)QuestRewardTokenAction__SetEventUI(this, v60, v61, v62);
            }
          }
        }
        tokenName = this->fields.tokenName;
        if ( tokenName )
        {
          v64 = tokenName->max_length;
          if ( (__int64)v56 < (int)v64 )
          {
            if ( v56 >= v64 )
              goto LABEL_55;
            v65 = (UnityEngine_Object_o *)*((_QWORD *)&tokenName->obj.klass + v48);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            transform = (void *)UnityEngine_Object__op_Inequality(v65, 0LL, 0LL);
            if ( ((unsigned __int8)transform & 1) != 0 )
            {
              v66 = this->fields.tokenName;
              if ( !v66 )
                goto LABEL_66;
              if ( v56 >= v66->max_length )
                goto LABEL_55;
              v67 = (UILabel_o *)*((_QWORD *)&v66->obj.klass + v48);
              transform = System_Int32__ToString((int32_t)&v80 + 4, 0LL);
              if ( !v67 )
                goto LABEL_66;
              UILabel__set_text(v67, (System_String_o *)transform, 0LL);
            }
          }
        }
      }
      v68 = v48 - 3;
      if ( v48 - 3 >= v47 )
        break;
      ++v48;
      if ( v68 >= infos->max_length )
      {
LABEL_55:
        v69 = sub_B5D6C8(transform);
        sub_B5D668(v69, 0LL);
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
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( Instance )
    {
      transform = CommonUI__CreateScreeenTouchInfo(Instance, (UnityEngine_Transform_o *)transform, 0, 0LL);
      if ( transform )
      {
        Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                           (UnityEngine_GameObject_o *)transform,
                                                           (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
        *p_screenTouchInfo = (struct ScreenTouchInformationComponent_o *)Component_srcLineSprite;
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.screenTouchInfo,
          Component_srcLineSprite,
          v74,
          v75,
          v76,
          v77,
          v78,
          v79);
        goto LABEL_63;
      }
    }
LABEL_66:
    sub_B5D69C(transform, v34);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct CStateManager_QuestRewardTokenAction__o *fsm; // x0

  if ( (byte_42E6EFC & 1) == 0 )
  {
    sub_B5D5C4(&Method_CStateManager_QuestRewardTokenAction__update__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CTouch_TypeInfo, v5, v6, v7);
    byte_42E6EFC = 1;
  }
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__process(0LL);
  fsm = this->fields.fsm;
  if ( fsm )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)fsm,
      (const MethodInfo_2BB2778 *)Method_CStateManager_QuestRewardTokenAction__update__);
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
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *simpleAnimation; // x20
  struct SimpleAnimation_o *v9; // x20
  System_String_o *v10; // x0
  struct SimpleAnimation_o *v11; // x20
  System_String_o *v12; // x0
  struct SimpleAnimation_o *v13; // x20
  System_String_o *v14; // x0
  __int64 v15; // x3
  QuestRewardTokenAction_StatePlay_c *klass; // x8
  QuestRewardTokenAction_StatePlay_o *v17; // x20
  unsigned __int64 v18; // x10
  int32_t *p_offset; // x11
  __int64 v20; // x0
  UnityEngine_Object_o *animation; // x20
  UnityEngine_Animation_o *v22; // x20
  System_String_o *name; // x0
  UnityEngine_Animation_o *v24; // x20
  System_String_o *v25; // x0
  UnityEngine_Animation_o *v26; // x20
  System_String_o *v27; // x0
  UnityEngine_Animation_o *v28; // x19
  System_String_o *v29; // x0
  struct SimpleAnimation_o *v30; // x19
  System_String_o *v31; // x0
  __int64 v32; // x3
  QuestRewardTokenAction_StatePlay_c *v33; // x8
  QuestRewardTokenAction_StatePlay_o *v34; // x19
  unsigned __int64 v35; // x10
  int32_t *v36; // x11
  __int64 v37; // x0

  if ( (byte_42E7F26 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)that, (_DWORD)method, v3);
    this = (QuestRewardTokenAction_StatePlay_o *)sub_B5D5C4(&SimpleAnimation_State_TypeInfo, v5, v6, v7);
    byte_42E7F26 = 1;
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
    v22 = that->fields.animation;
    if ( v22 )
    {
      this = (QuestRewardTokenAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.animation, 0LL);
      if ( this )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
        this = (QuestRewardTokenAction_StatePlay_o *)UnityEngine_Animation__IsPlaying(v22, name, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v24 = that->fields.animation;
          if ( !v24 )
            goto LABEL_51;
          this = (QuestRewardTokenAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.animation, 0LL);
          if ( !this )
            goto LABEL_51;
          v25 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
          this = (QuestRewardTokenAction_StatePlay_o *)UnityEngine_Animation__Play_51249124(v24, v25, 0LL);
        }
        v26 = that->fields.animation;
        if ( v26 )
        {
          this = (QuestRewardTokenAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.animation, 0LL);
          if ( this )
          {
            v27 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
            this = (QuestRewardTokenAction_StatePlay_o *)UnityEngine_Animation__get_Item(v26, v27, 0LL);
            if ( this )
            {
              UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)this, 0.0, 0LL);
              v28 = that->fields.animation;
              if ( v28 )
              {
                this = (QuestRewardTokenAction_StatePlay_o *)UnityEngine_Animation__get_clip(v28, 0LL);
                if ( this )
                {
                  v29 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
                  this = (QuestRewardTokenAction_StatePlay_o *)UnityEngine_Animation__get_Item(v28, v29, 0LL);
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
    sub_B5D69C(this, that);
  }
  v9 = that->fields.simpleAnimation;
  if ( !v9 )
    goto LABEL_51;
  this = (QuestRewardTokenAction_StatePlay_o *)v9[1].monitor;
  if ( !this )
    goto LABEL_51;
  v10 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestRewardTokenAction_StatePlay_o *)SimpleAnimation__IsPlaying(v9, v10, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v11 = that->fields.simpleAnimation;
    if ( !v11 )
      goto LABEL_51;
    this = (QuestRewardTokenAction_StatePlay_o *)v11[1].monitor;
    if ( !this )
      goto LABEL_51;
    v12 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
    this = (QuestRewardTokenAction_StatePlay_o *)SimpleAnimation__Play_16676044(v11, v12, 0LL);
  }
  v13 = that->fields.simpleAnimation;
  if ( !v13 )
    goto LABEL_51;
  this = (QuestRewardTokenAction_StatePlay_o *)v13[1].monitor;
  if ( !this )
    goto LABEL_51;
  v14 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestRewardTokenAction_StatePlay_o *)SimpleAnimation__get_Item(v13, v14, 0LL);
  if ( !this )
    goto LABEL_51;
  klass = this->klass;
  v17 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v18 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((SimpleAnimation_State_c **)p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v18;
      p_offset += 4;
      if ( v18 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_21;
    }
    v20 = (__int64)(&klass->vtable._6_end.method + 2 * *p_offset);
  }
  else
  {
LABEL_21:
    v20 = sub_AF54C0(this, SimpleAnimation_State_TypeInfo, 6LL, v15);
  }
  this = (QuestRewardTokenAction_StatePlay_o *)(*(__int64 (__fastcall **)(QuestRewardTokenAction_StatePlay_o *, _QWORD, float))v20)(
                                                 v17,
                                                 *(_QWORD *)(v20 + 8),
                                                 0.0);
  v30 = that->fields.simpleAnimation;
  if ( !v30 )
    goto LABEL_51;
  this = (QuestRewardTokenAction_StatePlay_o *)v30[1].monitor;
  if ( !this )
    goto LABEL_51;
  v31 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestRewardTokenAction_StatePlay_o *)SimpleAnimation__get_Item(v30, v31, 0LL);
  if ( !this )
    goto LABEL_51;
  v33 = this->klass;
  v34 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v35 = 0LL;
    v36 = &v33->_1.interfaceOffsets->offset;
    while ( *((SimpleAnimation_State_c **)v36 - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v35;
      v36 += 4;
      if ( v35 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_48;
    }
    v37 = (__int64)(&v33[1]._1.namespaze + 2 * *v36);
  }
  else
  {
LABEL_48:
    v37 = sub_AF54C0(this, SimpleAnimation_State_TypeInfo, 8LL, v32);
  }
  (*(void (__fastcall **)(QuestRewardTokenAction_StatePlay_o *, _QWORD, float))v37)(v34, *(_QWORD *)(v37 + 8), 1.0);
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
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *simpleAnimation; // x20
  struct SimpleAnimation_o *v9; // x20
  System_String_o *name; // x0
  UnityEngine_Object_o *animation; // x20
  UnityEngine_Animation_o *v12; // x20
  System_String_o *v13; // x0

  if ( (byte_42E7F27 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)that, (_DWORD)method, v3);
    this = (QuestRewardTokenAction_StatePlay_o *)sub_B5D5C4(
                                                   &Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
                                                   v5,
                                                   v6,
                                                   v7);
    byte_42E7F27 = 1;
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
    v9 = that->fields.simpleAnimation;
    if ( !v9 )
      goto LABEL_23;
    this = (QuestRewardTokenAction_StatePlay_o *)v9[1].monitor;
    if ( !this )
      goto LABEL_23;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
    if ( SimpleAnimation__IsPlaying(v9, name, 0LL) )
      return;
LABEL_19:
    this = (QuestRewardTokenAction_StatePlay_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( this )
    {
      if ( !CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0LL) )
        QuestRewardTokenAction__SetState(that, 2, 0LL);
      return;
    }
LABEL_23:
    sub_B5D69C(this, that);
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
    v12 = that->fields.animation;
    if ( !v12 )
      goto LABEL_23;
    this = (QuestRewardTokenAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.animation, 0LL);
    if ( !this )
      goto LABEL_23;
    v13 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
    if ( UnityEngine_Animation__IsPlaying(v12, v13, 0LL) )
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
    sub_B5D69C(this, that);
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
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  __int64 v23; // x20
  UnityEngine_GameObject_o *isTouchPush; // x0
  __int64 v25; // x1
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  __int64 v32; // x19
  CommonUI_o *Instance; // x21
  AvalonSceneManager_c *v34; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v36; // x22

  if ( (byte_42E7F28 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)that, (_DWORD)method, v3);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&CTouch_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11, v12, v13);
    sub_B5D5C4(&SoundManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_QuestRewardTokenAction_StateTouchWait___c__DisplayClass1_0__update_b__0__, v17, v18, v19);
    sub_B5D5C4(&QuestRewardTokenAction_StateTouchWait___c__DisplayClass1_0_TypeInfo, v20, v21, v22);
    byte_42E7F28 = 1;
  }
  v23 = sub_B5D694(QuestRewardTokenAction_StateTouchWait___c__DisplayClass1_0_TypeInfo);
  QuestRewardTokenAction_StateTouchWait___c__DisplayClass1_0___ctor(
    (QuestRewardTokenAction_StateTouchWait___c__DisplayClass1_0_o *)v23,
    0LL);
  if ( !v23 )
    goto LABEL_21;
  *(_QWORD *)(v23 + 16) = that;
  v32 = v23 + 16;
  sub_B5D560((BattleServantConfConponent_o *)(v23 + 16), (System_Int32_array **)that, v26, v27, v28, v29, v30, v31);
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  isTouchPush = (UnityEngine_GameObject_o *)CTouch__isTouchPush(0LL);
  if ( ((unsigned __int8)isTouchPush & 1) != 0 )
  {
    if ( *(_QWORD *)v32 )
    {
      isTouchPush = *(UnityEngine_GameObject_o **)(*(_QWORD *)v32 + 104LL);
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
          Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v34 = AvalonSceneManager_TypeInfo;
          if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
            v34 = AvalonSceneManager_TypeInfo;
          }
          DEFAULT_FADE_TIME = v34->static_fields->DEFAULT_FADE_TIME;
          v36 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
          System_Action___ctor(
            v36,
            (Il2CppObject *)v23,
            Method_QuestRewardTokenAction_StateTouchWait___c__DisplayClass1_0__update_b__0__,
            0LL);
          if ( Instance )
          {
            CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v36, 0LL);
            isTouchPush = *(UnityEngine_GameObject_o **)v32;
            if ( *(_QWORD *)v32 )
            {
              QuestRewardTokenAction__SetState((QuestRewardTokenAction_o *)isTouchPush, 0, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_21:
    sub_B5D69C(isTouchPush, v25);
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
    sub_B5D69C(this, method);
  ActionExtensions__Call(that->fields.endAct, 0LL);
}


void __fastcall QuestRewardTokenAction___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E7F25 & 1) == 0 )
  {
    sub_B5D5C4(&QuestRewardTokenAction___c_TypeInfo, v1, v2, v3);
    byte_42E7F25 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(QuestRewardTokenAction___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)QuestRewardTokenAction___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
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
    sub_B5D69C(this, x);
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