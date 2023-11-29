void __fastcall ClassBoardBackground___ctor(ClassBoardBackground_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1

  if ( (byte_40FAF8E & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_15950, method);
    byte_40FAF8E = 1;
  }
  v9 = (System_Int32_array **)StringLiteral_15950;
  this->fields.iconMaterialPropertyName = (struct System_String_o *)StringLiteral_15950;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.iconMaterialPropertyName, v9, v2, v3, v4, v5, v6, v7);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ClassBoardBackground__ActivateEarthAccessories(
        ClassBoardBackground_o *this,
        bool value,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *earthAccessoriesObject; // x0

  earthAccessoriesObject = this->fields.earthAccessoriesObject;
  if ( !earthAccessoriesObject )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(earthAccessoriesObject, value, 0LL);
}


void __fastcall ClassBoardBackground__Awake(ClassBoardBackground_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *gameObject; // x0
  System_String_o *name; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  ClassBoardEffectPlayer_o *v11; // x21
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct ClassBoardEffectPlayer_o *startMainEffectPlayer; // x20
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  System_Action_o *v23; // x21
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7

  if ( (byte_40FAF85 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_ClassBoardBackground_PlayStartMainEffectPlayer__, v3);
    sub_B16FFC(&ClassBoardEffectPlayer_TypeInfo, v4);
    byte_40FAF85 = 1;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_6;
  name = UnityEngine_Object__get_name(gameObject, 0LL);
  v11 = (ClassBoardEffectPlayer_o *)sub_B170CC(ClassBoardEffectPlayer_TypeInfo, v7, v8, v9, v10);
  ClassBoardEffectPlayer___ctor_28066828(v11, name, 0LL);
  this->fields.startMainEffectPlayer = v11;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.startMainEffectPlayer,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  startMainEffectPlayer = this->fields.startMainEffectPlayer;
  v23 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v19, v20, v21, v22);
  System_Action___ctor(v23, (Il2CppObject *)this, Method_ClassBoardBackground_PlayStartMainEffectPlayer__, 0LL);
  if ( !startMainEffectPlayer )
LABEL_6:
    sub_B170D4();
  startMainEffectPlayer->fields.playCallback = v23;
  sub_B16F98(
    (BattleServantConfConponent_o *)&startMainEffectPlayer->fields.playCallback,
    (System_Int32_array **)v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
}


void __fastcall ClassBoardBackground__CallAnimationEventBoardParent(
        ClassBoardBackground_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *boardParentAnimation; // x20
  UnityEngine_Object_o *boardParentAnimationClip; // x20
  UnityEngine_Object_o *v5; // x0
  SimpleAnimation_o *v6; // x19
  System_String_o *name; // x0

  if ( (byte_40FAF8D & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FAF8D = 1;
  }
  boardParentAnimation = (UnityEngine_Object_o *)this->fields.boardParentAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(boardParentAnimation, 0LL, 0LL) )
  {
    boardParentAnimationClip = (UnityEngine_Object_o *)this->fields.boardParentAnimationClip;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(boardParentAnimationClip, 0LL, 0LL) )
    {
      v5 = (UnityEngine_Object_o *)this->fields.boardParentAnimationClip;
      if ( !v5 || (v6 = this->fields.boardParentAnimation, name = UnityEngine_Object__get_name(v5, 0LL), !v6) )
        sub_B170D4();
      SimpleAnimation__Play_16380456(v6, name, 0LL);
    }
  }
}


void __fastcall ClassBoardBackground__CallAnimationEventShowBoard(
        ClassBoardBackground_o *this,
        const MethodInfo *method)
{
  BattleServantConfConponent_o *p_showBoardCallback; // x19
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  p_showBoardCallback = (BattleServantConfConponent_o *)&this->fields.showBoardCallback;
  ActionExtensions__Call(this->fields.showBoardCallback, 0LL);
  p_showBoardCallback->klass = 0LL;
  sub_B16F98(p_showBoardCallback, 0LL, v3, v4, v5, v6, v7, v8);
}


void __fastcall ClassBoardBackground__ChangeCamera(
        ClassBoardBackground_o *this,
        UnityEngine_Camera_o *camera,
        const MethodInfo *method)
{
  UnityEngine_Component_o *classBoardViewCamera; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *v7; // x22
  UnityEngine_GameObject_o *v8; // x21
  bool v9; // w0
  UnityEngine_Component_o *classBoardSelectViewCamera; // x0
  UnityEngine_GameObject_o *v11; // x21
  bool v12; // w0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_40FAF86 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, camera);
    byte_40FAF86 = 1;
  }
  classBoardViewCamera = (UnityEngine_Component_o *)this->fields.classBoardViewCamera;
  if ( !classBoardViewCamera )
    goto LABEL_11;
  gameObject = UnityEngine_Component__get_gameObject(classBoardViewCamera, 0LL);
  v7 = (UnityEngine_Object_o *)this->fields.classBoardViewCamera;
  v8 = gameObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)camera, v7, 0LL);
  if ( !v8
    || (UnityEngine_GameObject__SetActive(v8, v9, 0LL),
        (classBoardSelectViewCamera = (UnityEngine_Component_o *)this->fields.classBoardSelectViewCamera) == 0LL)
    || (v11 = UnityEngine_Component__get_gameObject(classBoardSelectViewCamera, 0LL),
        v12 = UnityEngine_Object__op_Equality(
                (UnityEngine_Object_o *)camera,
                (UnityEngine_Object_o *)this->fields.classBoardSelectViewCamera,
                0LL),
        !v11) )
  {
LABEL_11:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(v11, v12, 0LL);
  this->fields.currentCamera = camera;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.currentCamera,
    (System_Int32_array **)camera,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
}


UnityEngine_RenderTexture_o *__fastcall ClassBoardBackground__GetRenderTexture(
        ClassBoardBackground_o *this,
        const MethodInfo *method)
{
  UnityEngine_Camera_o *currentCamera; // x0

  currentCamera = this->fields.currentCamera;
  if ( !currentCamera )
    sub_B170D4();
  return UnityEngine_Camera__get_targetTexture(currentCamera, 0LL);
}


void __fastcall ClassBoardBackground__OnDestroy(ClassBoardBackground_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_IEnumerable_T__o *iconRenderers; // x19
  ClassBoardBackground___c_c *v11; // x0
  struct ClassBoardBackground___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__30_0; // x20
  Il2CppObject *v14; // x21
  struct ClassBoardBackground___c_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_40FAF8A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_Renderer___ctor__, method);
    sub_B16FFC(&System_Action_Renderer__TypeInfo, v6);
    sub_B16FFC(&Method_BasicHelper_ForEach_Renderer___, v7);
    sub_B16FFC(&Method_ClassBoardBackground___c__OnDestroy_b__30_0__, v8);
    sub_B16FFC(&ClassBoardBackground___c_TypeInfo, v9);
    byte_40FAF8A = 1;
  }
  iconRenderers = (System_Collections_Generic_IEnumerable_T__o *)this->fields.iconRenderers;
  v11 = ClassBoardBackground___c_TypeInfo;
  if ( (BYTE3(ClassBoardBackground___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardBackground___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardBackground___c_TypeInfo);
    v11 = ClassBoardBackground___c_TypeInfo;
  }
  static_fields = v11->static_fields;
  _9__30_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__30_0;
  if ( !_9__30_0 )
  {
    if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      static_fields = ClassBoardBackground___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__30_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                      System_Action_Renderer__TypeInfo,
                                                                                      method,
                                                                                      v2,
                                                                                      v3,
                                                                                      v4);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__30_0,
      v14,
      Method_ClassBoardBackground___c__OnDestroy_b__30_0__,
      (const MethodInfo_24B7310 *)Method_System_Action_Renderer___ctor__);
    v15 = ClassBoardBackground___c_TypeInfo->static_fields;
    v15->__9__30_0 = (struct System_Action_Renderer__o *)_9__30_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v15->__9__30_0,
      (System_Int32_array **)_9__30_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    iconRenderers,
    (System_Action_T__o *)_9__30_0,
    (const MethodInfo_18B756C *)Method_BasicHelper_ForEach_Renderer___);
}


void __fastcall ClassBoardBackground__PlayBoardParentBeforeAnimation(
        ClassBoardBackground_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *boardParentAnimation; // x20
  UnityEngine_Object_o *boardParentBeforeAnimationClip; // x20
  SimpleAnimation_o *v5; // x0
  SimpleAnimation_o *v6; // x0

  if ( (byte_40FAF89 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FAF89 = 1;
  }
  boardParentAnimation = (UnityEngine_Object_o *)this->fields.boardParentAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(boardParentAnimation, 0LL, 0LL) )
  {
    boardParentBeforeAnimationClip = (UnityEngine_Object_o *)this->fields.boardParentBeforeAnimationClip;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(boardParentBeforeAnimationClip, 0LL, 0LL) )
    {
      v5 = this->fields.boardParentAnimation;
      if ( !v5
        || (SimpleAnimation__set_clip(v5, this->fields.boardParentBeforeAnimationClip, 0LL),
            (v6 = this->fields.boardParentAnimation) == 0LL) )
      {
        sub_B170D4();
      }
      SimpleAnimation__Play(v6, 0LL);
    }
  }
}


void __fastcall ClassBoardBackground__PlaySimpleAnimation(
        ClassBoardBackground_o *this,
        SimpleAnimation_o *anim,
        System_String_o *name,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  _BOOL8 v9; // x0
  const MethodInfo *v10; // x4
  System_Collections_IEnumerator_o *v11; // x1

  if ( !anim )
    sub_B170D4();
  SimpleAnimation__Rewind(anim, 0LL);
  v9 = SimpleAnimation__Play_16380456(anim, name, 0LL);
  v11 = ClassBoardBackground__WaitAnimationFinished((ClassBoardBackground_o *)v9, anim, name, endCallback, v10);
  UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, v11, 0LL);
}


void __fastcall ClassBoardBackground__PlayStartMainEffectPlayer(ClassBoardBackground_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  ClassBoardEffectPlayer_o *startMainEffectPlayer; // x0
  int32_t Data_int; // w0
  SimpleAnimation_o *mainAnimation; // x20
  Il2CppObject *v11; // x0
  System_String_o *v12; // x21
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  System_Action_o *v17; // x22
  const MethodInfo *v18; // x4
  int32_t v19; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40FAF8B & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_ClassBoardBackground__PlayStartMainEffectPlayer_b__31_0__, v3);
    sub_B16FFC(&Method_ClassBoardEffectPlayer_GetData_int___, v4);
    sub_B16FFC(&int_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_23557, v6);
    sub_B16FFC(&StringLiteral_8870, v7);
    byte_40FAF8B = 1;
  }
  startMainEffectPlayer = this->fields.startMainEffectPlayer;
  if ( !startMainEffectPlayer )
    sub_B170D4();
  Data_int = ClassBoardEffectPlayer__GetData_int_(
               startMainEffectPlayer,
               (const MethodInfo_18BBFA4 *)Method_ClassBoardEffectPlayer_GetData_int___);
  mainAnimation = this->fields.mainAnimation;
  v19 = Data_int;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19);
  v12 = System_String__Format_43739268(
          (System_String_o *)StringLiteral_23557,
          (Il2CppObject *)StringLiteral_8870,
          v11,
          0LL);
  v17 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v13, v14, v15, v16);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_ClassBoardBackground__PlayStartMainEffectPlayer_b__31_0__, 0LL);
  ClassBoardBackground__PlaySimpleAnimation(this, mainAnimation, v12, v17, v18);
}


void __fastcall ClassBoardBackground__SetBoardParentAnimation(
        ClassBoardBackground_o *this,
        SimpleAnimation_o *animation,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  UnityEngine_Object_o *boardParentAnimation; // x20
  UnityEngine_Object_o *boardParentAnimationClip; // x20
  UnityEngine_Object_o *v12; // x0
  SimpleAnimation_o *v13; // x20
  System_String_o *name; // x0
  UnityEngine_AnimationClip_o *v15; // x20
  SimpleAnimation_o *v16; // x21
  System_String_o *v17; // x0
  UnityEngine_Object_o *boardParentBeforeAnimationClip; // x20
  UnityEngine_Object_o *v19; // x0
  SimpleAnimation_o *v20; // x20
  System_String_o *v21; // x0
  UnityEngine_AnimationClip_o *v22; // x20
  SimpleAnimation_o *v23; // x21
  System_String_o *v24; // x0
  UnityEngine_Object_o *v25; // x0
  SimpleAnimation_o *v26; // x19
  System_String_o *v27; // x0

  if ( (byte_40FAF87 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, animation);
    byte_40FAF87 = 1;
  }
  this->fields.boardParentAnimation = animation;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.boardParentAnimation,
    (System_Int32_array **)animation,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  boardParentAnimation = (UnityEngine_Object_o *)this->fields.boardParentAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(boardParentAnimation, 0LL, 0LL) )
  {
    boardParentAnimationClip = (UnityEngine_Object_o *)this->fields.boardParentAnimationClip;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(boardParentAnimationClip, 0LL, 0LL) )
    {
      v12 = (UnityEngine_Object_o *)this->fields.boardParentAnimationClip;
      if ( !v12 )
        goto LABEL_31;
      v13 = this->fields.boardParentAnimation;
      name = UnityEngine_Object__get_name(v12, 0LL);
      if ( !v13 )
        goto LABEL_31;
      if ( !SimpleAnimation__GetState(v13, name, 0LL) )
      {
        v15 = this->fields.boardParentAnimationClip;
        if ( !v15 )
          goto LABEL_31;
        v16 = this->fields.boardParentAnimation;
        v17 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this->fields.boardParentAnimationClip, 0LL);
        if ( !v16 )
          goto LABEL_31;
        SimpleAnimation__AddClip(v16, v15, v17, 0LL);
      }
    }
    boardParentBeforeAnimationClip = (UnityEngine_Object_o *)this->fields.boardParentBeforeAnimationClip;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(boardParentBeforeAnimationClip, 0LL, 0LL) )
    {
      v19 = (UnityEngine_Object_o *)this->fields.boardParentBeforeAnimationClip;
      if ( v19 )
      {
        v20 = this->fields.boardParentAnimation;
        v21 = UnityEngine_Object__get_name(v19, 0LL);
        if ( v20 )
        {
          if ( !SimpleAnimation__GetState(v20, v21, 0LL) )
          {
            v22 = this->fields.boardParentBeforeAnimationClip;
            if ( !v22 )
              goto LABEL_31;
            v23 = this->fields.boardParentAnimation;
            v24 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this->fields.boardParentBeforeAnimationClip, 0LL);
            if ( !v23 )
              goto LABEL_31;
            SimpleAnimation__AddClip(v23, v22, v24, 0LL);
          }
          v25 = (UnityEngine_Object_o *)this->fields.boardParentBeforeAnimationClip;
          if ( v25 )
          {
            v26 = this->fields.boardParentAnimation;
            v27 = UnityEngine_Object__get_name(v25, 0LL);
            if ( v26 )
            {
              SimpleAnimation__Play_16380456(v26, v27, 0LL);
              return;
            }
          }
        }
      }
LABEL_31:
      sub_B170D4();
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardBackground__SetClassIcon(
        ClassBoardBackground_o *this,
        int32_t iconId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x20
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Collections_Generic_IEnumerable_TSource__o *iconTextures; // x21
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v30; // x22
  System_Int32_array **v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  UnityEngine_Object_o *v38; // x21
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  System_Collections_Generic_IEnumerable_T__o *iconRenderers; // x21
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v44; // x22
  _BOOL8 v45; // x0
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  System_Collections_Generic_IEnumerable_TSource__o *exIconTextures; // x21
  struct UnityEngine_Renderer_array *exIconRenderers; // x22
  __int64 v52; // x8
  ClassBoardBackground___c_c *v53; // x0
  struct ClassBoardBackground___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__28_2; // x20
  Il2CppObject *v56; // x22
  struct ClassBoardBackground___c_StaticFields *v57; // x0
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  UnityEngine_Object_o *v64; // x20
  struct UnityEngine_Renderer_array *v65; // x22
  int max_length; // w8
  unsigned int v67; // w23
  Il2CppClass **v68; // x8
  UnityEngine_Renderer_o *v69; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Material_o *material; // x0
  __int64 v72; // x19
  UnityEngine_Component_o *v73; // x0
  UnityEngine_GameObject_o *v74; // x0

  if ( (byte_40FAF88 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_Renderer___ctor__, *(_QWORD *)&iconId);
    sub_B16FFC(&System_Action_Renderer__TypeInfo, v7);
    sub_B16FFC(&Method_BasicHelper_ForEach_Renderer___, v8);
    sub_B16FFC(&Method_System_Linq_Enumerable_FirstOrDefault_Texture___, v9);
    sub_B16FFC(&Method_System_Func_Texture__bool___ctor__, v10);
    sub_B16FFC(&System_Func_Texture__bool__TypeInfo, v11);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v12);
    sub_B16FFC(&Method_ClassBoardBackground___c__SetClassIcon_b__28_2__, v13);
    sub_B16FFC(&Method_ClassBoardBackground___c__DisplayClass28_0__SetClassIcon_b__0__, v14);
    sub_B16FFC(&Method_ClassBoardBackground___c__DisplayClass28_0__SetClassIcon_b__1__, v15);
    sub_B16FFC(&ClassBoardBackground___c__DisplayClass28_0_TypeInfo, v16);
    sub_B16FFC(&ClassBoardBackground___c_TypeInfo, v17);
    byte_40FAF88 = 1;
  }
  v18 = sub_B170CC(ClassBoardBackground___c__DisplayClass28_0_TypeInfo, *(_QWORD *)&iconId, method, v3, v4);
  ClassBoardBackground___c__DisplayClass28_0___ctor((ClassBoardBackground___c__DisplayClass28_0_o *)v18, 0LL);
  if ( !v18 )
    goto LABEL_41;
  *(_DWORD *)(v18 + 16) = iconId;
  *(_QWORD *)(v18 + 24) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v18 + 24), (System_Int32_array **)this, v19, v20, v21, v22, v23, v24);
  iconTextures = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.iconTextures;
  v30 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_Texture__bool__TypeInfo,
                                                                             v26,
                                                                             v27,
                                                                             v28,
                                                                             v29);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v30,
    (Il2CppObject *)v18,
    Method_ClassBoardBackground___c__DisplayClass28_0__SetClassIcon_b__0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_Texture__bool___ctor__);
  v31 = (System_Int32_array **)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                 iconTextures,
                                 (System_Func_TSource__bool__o *)v30,
                                 (const MethodInfo_18D8450 *)Method_System_Linq_Enumerable_FirstOrDefault_Texture___);
  *(_QWORD *)(v18 + 32) = v31;
  sub_B16F98((BattleServantConfConponent_o *)(v18 + 32), v31, v32, v33, v34, v35, v36, v37);
  v38 = *(UnityEngine_Object_o **)(v18 + 32);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(v38, 0LL, 0LL) )
    return;
  iconRenderers = (System_Collections_Generic_IEnumerable_T__o *)this->fields.iconRenderers;
  v44 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                               System_Action_Renderer__TypeInfo,
                                                                               v39,
                                                                               v40,
                                                                               v41,
                                                                               v42);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v44,
    (Il2CppObject *)v18,
    Method_ClassBoardBackground___c__DisplayClass28_0__SetClassIcon_b__1__,
    (const MethodInfo_24B7310 *)Method_System_Action_Renderer___ctor__);
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    iconRenderers,
    (System_Action_T__o *)v44,
    (const MethodInfo_18B756C *)Method_BasicHelper_ForEach_Renderer___);
  exIconTextures = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.exIconTextures;
  if ( !exIconTextures )
    goto LABEL_41;
  if ( !exIconTextures[1].monitor )
    return;
  exIconRenderers = this->fields.exIconRenderers;
  if ( !exIconRenderers )
    goto LABEL_41;
  v52 = *(_QWORD *)&exIconRenderers->max_length;
  if ( !v52 )
    return;
  if ( *(_DWORD *)(v18 + 16) == 9 )
  {
    v53 = ClassBoardBackground___c_TypeInfo;
    if ( (BYTE3(ClassBoardBackground___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ClassBoardBackground___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardBackground___c_TypeInfo);
      v53 = ClassBoardBackground___c_TypeInfo;
    }
    static_fields = v53->static_fields;
    _9__28_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__28_2;
    if ( !_9__28_2 )
    {
      if ( (BYTE3(v53->vtable._0_Equals.methodPtr) & 4) != 0 && !v53->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v53);
        static_fields = ClassBoardBackground___c_TypeInfo->static_fields;
      }
      v56 = (Il2CppObject *)static_fields->__9;
      _9__28_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                      System_Func_Texture__bool__TypeInfo,
                                                                                      v46,
                                                                                      v47,
                                                                                      v48,
                                                                                      v49);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__28_2,
        v56,
        Method_ClassBoardBackground___c__SetClassIcon_b__28_2__,
        (const MethodInfo_2B6AB40 *)Method_System_Func_Texture__bool___ctor__);
      v57 = ClassBoardBackground___c_TypeInfo->static_fields;
      v57->__9__28_2 = (struct System_Func_Texture__bool__o *)_9__28_2;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v57->__9__28_2,
        (System_Int32_array **)_9__28_2,
        v58,
        v59,
        v60,
        v61,
        v62,
        v63);
    }
    v64 = (UnityEngine_Object_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                    exIconTextures,
                                    (System_Func_TSource__bool__o *)_9__28_2,
                                    (const MethodInfo_18D8450 *)Method_System_Linq_Enumerable_FirstOrDefault_Texture___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v45 = UnityEngine_Object__op_Equality(v64, 0LL, 0LL);
    if ( v45 )
      return;
    v65 = this->fields.exIconRenderers;
    if ( v65 )
    {
      max_length = v65->max_length;
      if ( max_length >= 1 )
      {
        v67 = 0;
        while ( v67 < max_length )
        {
          v68 = &v65->obj.klass + (int)v67;
          v69 = (UnityEngine_Renderer_o *)v68[4];
          if ( !v69 )
            goto LABEL_41;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v68[4], 0LL);
          if ( !gameObject )
            goto LABEL_41;
          UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
          material = UnityEngine_Renderer__get_material(v69, 0LL);
          if ( !material )
            goto LABEL_41;
          UnityEngine_Material__SetTexture(
            material,
            this->fields.iconMaterialPropertyName,
            (UnityEngine_Texture_o *)v64,
            0LL);
          max_length = v65->max_length;
          if ( (int)++v67 >= max_length )
            return;
        }
        goto LABEL_42;
      }
      return;
    }
LABEL_41:
    sub_B170D4();
  }
  if ( (int)v52 >= 1 )
  {
    v72 = 0LL;
    while ( (unsigned int)v72 < (unsigned int)v52 )
    {
      v73 = (UnityEngine_Component_o *)exIconRenderers->m_Items[v72];
      if ( !v73 )
        goto LABEL_41;
      v74 = UnityEngine_Component__get_gameObject(v73, 0LL);
      if ( !v74 )
        goto LABEL_41;
      UnityEngine_GameObject__SetActive(v74, 0, 0LL);
      LODWORD(v52) = exIconRenderers->max_length;
      if ( (int)++v72 >= (int)v52 )
        return;
    }
LABEL_42:
    sub_B17100(v45, v46, v47);
    sub_B170A0();
  }
}


void __fastcall ClassBoardBackground__SetShowBoardCallback(
        ClassBoardBackground_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.showBoardCallback = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.showBoardCallback,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ClassBoardBackground__UseClassBoardSelectViewCamera(
        ClassBoardBackground_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ClassBoardBackground__ChangeCamera(this, this->fields.classBoardSelectViewCamera, v2);
}


void __fastcall ClassBoardBackground__UseClassBoardViewCamera(ClassBoardBackground_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ClassBoardBackground__ChangeCamera(this, this->fields.classBoardViewCamera, v2);
}


void __fastcall ClassBoardBackground__Validation(ClassBoardBackground_o *this, const MethodInfo *method)
{
  ;
}


System_Collections_IEnumerator_o *__fastcall ClassBoardBackground__WaitAnimationFinished(
        ClassBoardBackground_o *this,
        SimpleAnimation_o *anim,
        System_String_o *name,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  __int64 v8; // x22
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

  if ( (byte_40FAF8C & 1) == 0 )
  {
    sub_B16FFC(&ClassBoardBackground__WaitAnimationFinished_d__33_TypeInfo, anim);
    byte_40FAF8C = 1;
  }
  v8 = sub_B170CC(ClassBoardBackground__WaitAnimationFinished_d__33_TypeInfo, anim, name, endCallback, method);
  ClassBoardBackground__WaitAnimationFinished_d__33___ctor(
    (ClassBoardBackground__WaitAnimationFinished_d__33_o *)v8,
    0,
    0LL);
  if ( !v8 )
    sub_B170D4();
  *(_QWORD *)(v8 + 32) = anim;
  sub_B16F98((BattleServantConfConponent_o *)(v8 + 32), (System_Int32_array **)anim, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v8 + 40) = name;
  sub_B16F98((BattleServantConfConponent_o *)(v8 + 40), (System_Int32_array **)name, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v8 + 48) = endCallback;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v8 + 48),
    (System_Int32_array **)endCallback,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  return (System_Collections_IEnumerator_o *)v8;
}


void __fastcall ClassBoardBackground___PlayStartMainEffectPlayer_b__31_0(
        ClassBoardBackground_o *this,
        const MethodInfo *method)
{
  ClassBoardEffectPlayer_o *startMainEffectPlayer; // x0

  startMainEffectPlayer = this->fields.startMainEffectPlayer;
  if ( !startMainEffectPlayer )
    sub_B170D4();
  ClassBoardEffectPlayer__End(startMainEffectPlayer, 0LL);
}


ClassBoardEffectPlayer_o *__fastcall ClassBoardBackground__get_StartMainEffectPlayer(
        ClassBoardBackground_o *this,
        const MethodInfo *method)
{
  return this->fields.startMainEffectPlayer;
}


void __fastcall ClassBoardBackground__WaitAnimationFinished_d__33___ctor(
        ClassBoardBackground__WaitAnimationFinished_d__33_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall ClassBoardBackground__WaitAnimationFinished_d__33__MoveNext(
        ClassBoardBackground__WaitAnimationFinished_d__33_o *this,
        const MethodInfo *method)
{
  SimpleAnimation_o *anim; // x0
  SimpleAnimation_State_o *State; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v6; // x20
  unsigned __int64 v7; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  Il2CppObject **p__2__current; // x19
  bool result; // w0

  if ( (byte_40F70CB & 1) == 0 )
  {
    sub_B16FFC(&SimpleAnimation_State_TypeInfo, method);
    byte_40F70CB = 1;
  }
  if ( this->fields.__1__state <= 1u )
  {
    anim = this->fields.anim;
    this->fields.__1__state = -1;
    if ( !anim )
      sub_B170D4();
    State = SimpleAnimation__GetState(anim, this->fields.name, 0LL);
    if ( State )
    {
      klass = State->klass;
      v6 = State;
      if ( *(_WORD *)&State->klass->_2.bitflags1 )
      {
        v7 = 0LL;
        p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
        {
          ++v7;
          p_offset += 2;
          if ( v7 >= *(unsigned __int16 *)&State->klass->_2.bitflags1 )
            goto LABEL_10;
        }
        p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 5].method;
      }
      else
      {
LABEL_10:
        p_method = sub_AAFEF8(State, SimpleAnimation_State_TypeInfo, 5LL);
      }
      if ( (*(float (__fastcall **)(SimpleAnimation_State_o *, _QWORD))p_method)(v6, *(_QWORD *)(p_method + 8)) < 1.0 )
      {
        this->fields.__2__current = 0LL;
        p__2__current = &this->fields.__2__current;
        sub_B16F98((BattleServantConfConponent_o *)p__2__current, 0LL, v10, v11, v12, v13, v14, v15);
        result = 1;
        *((_DWORD *)p__2__current - 2) = 1;
        return result;
      }
    }
    ActionExtensions__Call(this->fields.endCallback, 0LL);
  }
  return 0;
}


Il2CppObject *__fastcall ClassBoardBackground__WaitAnimationFinished_d__33__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ClassBoardBackground__WaitAnimationFinished_d__33_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn ClassBoardBackground__WaitAnimationFinished_d__33__System_Collections_IEnumerator_Reset(
        ClassBoardBackground__WaitAnimationFinished_d__33_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_ClassBoardBackground__WaitAnimationFinished_d__33_System_Collections_IEnumerator_Reset__);
  sub_B170A0();
}


Il2CppObject *__fastcall ClassBoardBackground__WaitAnimationFinished_d__33__System_Collections_IEnumerator_get_Current(
        ClassBoardBackground__WaitAnimationFinished_d__33_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall ClassBoardBackground__WaitAnimationFinished_d__33__System_IDisposable_Dispose(
        ClassBoardBackground__WaitAnimationFinished_d__33_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall ClassBoardBackground___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F70C7 & 1) == 0 )
  {
    sub_B16FFC(&ClassBoardBackground___c_TypeInfo, v1);
    byte_40F70C7 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(ClassBoardBackground___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)ClassBoardBackground___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall ClassBoardBackground___c___ctor(ClassBoardBackground___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ClassBoardBackground___c___OnDestroy_b__30_0(
        ClassBoardBackground___c_o *this,
        UnityEngine_Renderer_o *x,
        const MethodInfo *method)
{
  UnityEngine_Object_o *material; // x19

  if ( (byte_40F70C9 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, x);
    byte_40F70C9 = 1;
  }
  if ( !x )
    sub_B170D4();
  material = (UnityEngine_Object_o *)UnityEngine_Renderer__get_material(x, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_34809464(material, 0LL);
}


bool __fastcall ClassBoardBackground___c___SetClassIcon_b__28_2(
        ClassBoardBackground___c_o *this,
        UnityEngine_Texture_o *x,
        const MethodInfo *method)
{
  System_String_o *name; // x0

  if ( (byte_40F70C8 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_3998, x);
    byte_40F70C8 = 1;
  }
  if ( !x )
    sub_B170D4();
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)x, 0LL);
  return System_String__op_Equality(name, (System_String_o *)StringLiteral_3998, 0LL);
}


void __fastcall ClassBoardBackground___c__DisplayClass28_0___ctor(
        ClassBoardBackground___c__DisplayClass28_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ClassBoardBackground___c__DisplayClass28_0___SetClassIcon_b__0(
        ClassBoardBackground___c__DisplayClass28_0_o *this,
        UnityEngine_Texture_o *x,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_String_o *name; // x20
  Il2CppObject *v7; // x0
  System_String_o *v8; // x0
  int32_t iconId; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40F70CA & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, x);
    sub_B16FFC(&StringLiteral_4000, v5);
    byte_40F70CA = 1;
  }
  if ( !x )
    sub_B170D4();
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)x, 0LL);
  iconId = this->fields.iconId;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId);
  v8 = System_String__Format((System_String_o *)StringLiteral_4000, v7, 0LL);
  return System_String__op_Equality(name, v8, 0LL);
}


void __fastcall ClassBoardBackground___c__DisplayClass28_0___SetClassIcon_b__1(
        ClassBoardBackground___c__DisplayClass28_0_o *this,
        UnityEngine_Renderer_o *x,
        const MethodInfo *method)
{
  UnityEngine_Material_o *material; // x0
  struct ClassBoardBackground_o *_4__this; // x8

  if ( !x
    || (material = UnityEngine_Renderer__get_material(x, 0LL), (_4__this = this->fields.__4__this) == 0LL)
    || !material )
  {
    sub_B170D4();
  }
  UnityEngine_Material__SetTexture(material, _4__this->fields.iconMaterialPropertyName, this->fields.iconTex, 0LL);
}