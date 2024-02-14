void __fastcall ClassBoardBackground___ctor(ClassBoardBackground_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1

  if ( (byte_4217A9E & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_16061/*"_MainTex"*/, method);
    byte_4217A9E = 1;
  }
  v9 = (System_Int32_array **)StringLiteral_16061/*"_MainTex"*/;
  this->fields.iconMaterialPropertyName = (struct System_String_o *)StringLiteral_16061/*"_MainTex"*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.iconMaterialPropertyName, v9, v2, v3, v4, v5, v6, v7);
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
    sub_B0D97C(0LL);
  UnityEngine_GameObject__SetActive(earthAccessoriesObject, value, 0LL);
}


void __fastcall ClassBoardBackground__Awake(ClassBoardBackground_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *gameObject; // x0
  System_Int32_array **name; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x21
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
  struct ClassBoardEffectPlayer_o *startMainEffectPlayer; // x20
  __int64 v23; // x1
  __int64 v24; // x2
  System_Action_o *v25; // x21
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7

  if ( (byte_4217A95 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_ClassBoardBackground_PlayStartMainEffectPlayer__, v3);
    sub_B0D8A4(&ClassBoardEffectPlayer_TypeInfo, v4);
    byte_4217A95 = 1;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_6;
  name = (System_Int32_array **)UnityEngine_Object__get_name(gameObject, 0LL);
  v9 = sub_B0D974(ClassBoardEffectPlayer_TypeInfo, v7, v8);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  *(_QWORD *)(v9 + 16) = name;
  sub_B0D840((BattleServantConfConponent_o *)(v9 + 16), name, v10, v11, v12, v13, v14, v15);
  this->fields.startMainEffectPlayer = (struct ClassBoardEffectPlayer_o *)v9;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.startMainEffectPlayer,
    (System_Int32_array **)v9,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  startMainEffectPlayer = this->fields.startMainEffectPlayer;
  v25 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v23, v24);
  System_Action___ctor(v25, (Il2CppObject *)this, Method_ClassBoardBackground_PlayStartMainEffectPlayer__, 0LL);
  if ( !startMainEffectPlayer )
LABEL_6:
    sub_B0D97C(gameObject);
  startMainEffectPlayer->fields.playCallback = v25;
  sub_B0D840(
    (BattleServantConfConponent_o *)&startMainEffectPlayer->fields.playCallback,
    (System_Int32_array **)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
}


void __fastcall ClassBoardBackground__CallAnimationEventBoardParent(
        ClassBoardBackground_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *boardParentAnimation; // x20
  UnityEngine_Object_o *boardParentAnimationClip; // x20
  UnityEngine_Object_o *name; // x0
  SimpleAnimation_o *v6; // x19

  if ( (byte_4217A9D & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4217A9D = 1;
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
      name = (UnityEngine_Object_o *)this->fields.boardParentAnimationClip;
      if ( !name
        || (v6 = this->fields.boardParentAnimation,
            name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0LL),
            !v6) )
      {
        sub_B0D97C(name);
      }
      SimpleAnimation__Play_50482404(v6, (System_String_o *)name, 0LL);
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
  sub_B0D840(p_showBoardCallback, 0LL, v3, v4, v5, v6, v7, v8);
}


void __fastcall ClassBoardBackground__ChangeCamera(
        ClassBoardBackground_o *this,
        UnityEngine_Camera_o *camera,
        const MethodInfo *method)
{
  struct UnityEngine_Camera_o *classBoardViewCamera; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *v7; // x22
  UnityEngine_GameObject_o *v8; // x21
  UnityEngine_GameObject_o *v9; // x21
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_4217A96 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, camera);
    byte_4217A96 = 1;
  }
  classBoardViewCamera = this->fields.classBoardViewCamera;
  if ( !classBoardViewCamera )
    goto LABEL_11;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)classBoardViewCamera, 0LL);
  v7 = (UnityEngine_Object_o *)this->fields.classBoardViewCamera;
  v8 = gameObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  classBoardViewCamera = (struct UnityEngine_Camera_o *)UnityEngine_Object__op_Equality(
                                                          (UnityEngine_Object_o *)camera,
                                                          v7,
                                                          0LL);
  if ( !v8
    || (UnityEngine_GameObject__SetActive(v8, (unsigned __int8)classBoardViewCamera & 1, 0LL),
        (classBoardViewCamera = this->fields.classBoardSelectViewCamera) == 0LL)
    || (v9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)classBoardViewCamera, 0LL),
        classBoardViewCamera = (struct UnityEngine_Camera_o *)UnityEngine_Object__op_Equality(
                                                                (UnityEngine_Object_o *)camera,
                                                                (UnityEngine_Object_o *)this->fields.classBoardSelectViewCamera,
                                                                0LL),
        !v9) )
  {
LABEL_11:
    sub_B0D97C(classBoardViewCamera);
  }
  UnityEngine_GameObject__SetActive(v9, (unsigned __int8)classBoardViewCamera & 1, 0LL);
  this->fields.currentCamera = camera;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.currentCamera,
    (System_Int32_array **)camera,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
}


UnityEngine_RenderTexture_o *__fastcall ClassBoardBackground__GetRenderTexture(
        ClassBoardBackground_o *this,
        const MethodInfo *method)
{
  UnityEngine_Camera_o *currentCamera; // x0

  currentCamera = this->fields.currentCamera;
  if ( !currentCamera )
    sub_B0D97C(0LL);
  return UnityEngine_Camera__get_targetTexture(currentCamera, 0LL);
}


void __fastcall ClassBoardBackground__OnDestroy(ClassBoardBackground_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_T__o *iconRenderers; // x19
  ClassBoardBackground___c_c *v9; // x0
  struct ClassBoardBackground___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__30_0; // x20
  Il2CppObject *v12; // x21
  struct ClassBoardBackground___c_StaticFields *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_4217A9A & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_Renderer___ctor__, method);
    sub_B0D8A4(&System_Action_Renderer__TypeInfo, v4);
    sub_B0D8A4(&Method_BasicHelper_ForEach_Renderer___, v5);
    sub_B0D8A4(&Method_ClassBoardBackground___c__OnDestroy_b__30_0__, v6);
    sub_B0D8A4(&ClassBoardBackground___c_TypeInfo, v7);
    byte_4217A9A = 1;
  }
  iconRenderers = (System_Collections_Generic_IEnumerable_T__o *)this->fields.iconRenderers;
  v9 = ClassBoardBackground___c_TypeInfo;
  if ( (BYTE3(ClassBoardBackground___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardBackground___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardBackground___c_TypeInfo);
    v9 = ClassBoardBackground___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__30_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__30_0;
  if ( !_9__30_0 )
  {
    if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      static_fields = ClassBoardBackground___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__30_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                                      System_Action_Renderer__TypeInfo,
                                                                                      method,
                                                                                      v2);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__30_0,
      v12,
      Method_ClassBoardBackground___c__OnDestroy_b__30_0__,
      (const MethodInfo_246EA3C *)Method_System_Action_Renderer___ctor__);
    v13 = ClassBoardBackground___c_TypeInfo->static_fields;
    v13->__9__30_0 = (struct System_Action_Renderer__o *)_9__30_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v13->__9__30_0,
      (System_Int32_array **)_9__30_0,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    iconRenderers,
    (System_Action_T__o *)_9__30_0,
    (const MethodInfo_17086DC *)Method_BasicHelper_ForEach_Renderer___);
}


void __fastcall ClassBoardBackground__PlayBoardParentBeforeAnimation(
        ClassBoardBackground_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *boardParentAnimation; // x20
  UnityEngine_Object_o *boardParentBeforeAnimationClip; // x20
  SimpleAnimation_o *v5; // x0

  if ( (byte_4217A99 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4217A99 = 1;
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
            (v5 = this->fields.boardParentAnimation) == 0LL) )
      {
        sub_B0D97C(v5);
      }
      SimpleAnimation__Play(v5, 0LL);
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
    sub_B0D97C(this);
  SimpleAnimation__Rewind(anim, 0LL);
  v9 = SimpleAnimation__Play_50482404(anim, name, 0LL);
  v11 = ClassBoardBackground__WaitAnimationFinished((ClassBoardBackground_o *)v9, anim, name, endCallback, v10);
  UnityEngine_MonoBehaviour__StartCoroutine_34930128((UnityEngine_MonoBehaviour_o *)this, v11, 0LL);
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
  System_Action_o *v15; // x22
  const MethodInfo *v16; // x4
  int32_t v17; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4217A9B & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_ClassBoardBackground__PlayStartMainEffectPlayer_b__31_0__, v3);
    sub_B0D8A4(&Method_ClassBoardEffectPlayer_GetData_int___, v4);
    sub_B0D8A4(&int_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_23729/*"{0}{1}"*/, v6);
    sub_B0D8A4(&StringLiteral_8922/*"MainTransition"*/, v7);
    byte_4217A9B = 1;
  }
  startMainEffectPlayer = this->fields.startMainEffectPlayer;
  if ( !startMainEffectPlayer )
    sub_B0D97C(0LL);
  Data_int = ClassBoardEffectPlayer__GetData_int_(
               startMainEffectPlayer,
               (const MethodInfo_170D220 *)Method_ClassBoardEffectPlayer_GetData_int___);
  mainAnimation = this->fields.mainAnimation;
  v17 = Data_int;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17);
  v12 = System_String__Format_43845440(
          (System_String_o *)StringLiteral_23729/*"{0}{1}"*/,
          (Il2CppObject *)StringLiteral_8922/*"MainTransition"*/,
          v11,
          0LL);
  v15 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_ClassBoardBackground__PlayStartMainEffectPlayer_b__31_0__, 0LL);
  ClassBoardBackground__PlaySimpleAnimation(this, mainAnimation, v12, v15, v16);
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
  UnityEngine_Object_o *name; // x0
  SimpleAnimation_o *v13; // x20
  UnityEngine_AnimationClip_o *v14; // x20
  SimpleAnimation_o *v15; // x21
  UnityEngine_Object_o *boardParentBeforeAnimationClip; // x20
  SimpleAnimation_o *v17; // x20
  UnityEngine_AnimationClip_o *v18; // x20
  SimpleAnimation_o *v19; // x21
  SimpleAnimation_o *v20; // x19

  if ( (byte_4217A97 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, animation);
    byte_4217A97 = 1;
  }
  this->fields.boardParentAnimation = animation;
  sub_B0D840(
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
      name = (UnityEngine_Object_o *)this->fields.boardParentAnimationClip;
      if ( !name )
        goto LABEL_31;
      v13 = this->fields.boardParentAnimation;
      name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0LL);
      if ( !v13 )
        goto LABEL_31;
      name = (UnityEngine_Object_o *)SimpleAnimation__GetState(v13, (System_String_o *)name, 0LL);
      if ( !name )
      {
        v14 = this->fields.boardParentAnimationClip;
        if ( !v14 )
          goto LABEL_31;
        v15 = this->fields.boardParentAnimation;
        name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(
                                         (UnityEngine_Object_o *)this->fields.boardParentAnimationClip,
                                         0LL);
        if ( !v15 )
          goto LABEL_31;
        SimpleAnimation__AddClip(v15, v14, (System_String_o *)name, 0LL);
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
      name = (UnityEngine_Object_o *)this->fields.boardParentBeforeAnimationClip;
      if ( name )
      {
        v17 = this->fields.boardParentAnimation;
        name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0LL);
        if ( v17 )
        {
          name = (UnityEngine_Object_o *)SimpleAnimation__GetState(v17, (System_String_o *)name, 0LL);
          if ( !name )
          {
            v18 = this->fields.boardParentBeforeAnimationClip;
            if ( !v18 )
              goto LABEL_31;
            v19 = this->fields.boardParentAnimation;
            name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(
                                             (UnityEngine_Object_o *)this->fields.boardParentBeforeAnimationClip,
                                             0LL);
            if ( !v19 )
              goto LABEL_31;
            SimpleAnimation__AddClip(v19, v18, (System_String_o *)name, 0LL);
          }
          name = (UnityEngine_Object_o *)this->fields.boardParentBeforeAnimationClip;
          if ( name )
          {
            v20 = this->fields.boardParentAnimation;
            name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0LL);
            if ( v20 )
            {
              SimpleAnimation__Play_50482404(v20, (System_String_o *)name, 0LL);
              return;
            }
          }
        }
      }
LABEL_31:
      sub_B0D97C(name);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardBackground__SetClassIcon(
        ClassBoardBackground_o *this,
        int32_t iconId,
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
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Collections_Generic_IEnumerable_TSource__o *iconTextures; // x21
  __int64 v25; // x1
  __int64 v26; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v27; // x22
  System_Int32_array **v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  UnityEngine_Object_o *v35; // x21
  __int64 v36; // x1
  __int64 v37; // x2
  System_Collections_Generic_IEnumerable_T__o *iconRenderers; // x21
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v39; // x22
  __int64 v40; // x1
  __int64 v41; // x2
  System_Collections_Generic_IEnumerable_TSource__o *exIconTextures; // x21
  struct UnityEngine_Renderer_array *exIconRenderers; // x22
  __int64 v44; // x8
  ClassBoardBackground___c_c *v45; // x0
  struct ClassBoardBackground___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__28_2; // x20
  Il2CppObject *v48; // x22
  struct ClassBoardBackground___c_StaticFields *v49; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  UnityEngine_Object_o *v56; // x20
  struct UnityEngine_Renderer_array *v57; // x22
  int max_length; // w8
  unsigned int v59; // w23
  Il2CppClass **v60; // x8
  UnityEngine_Renderer_o *v61; // x21
  __int64 v62; // x19
  __int64 v63; // x0

  if ( (byte_4217A98 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_Renderer___ctor__, *(_QWORD *)&iconId);
    sub_B0D8A4(&System_Action_Renderer__TypeInfo, v5);
    sub_B0D8A4(&Method_BasicHelper_ForEach_Renderer___, v6);
    sub_B0D8A4(&Method_System_Linq_Enumerable_FirstOrDefault_Texture___, v7);
    sub_B0D8A4(&Method_System_Func_Texture__bool___ctor__, v8);
    sub_B0D8A4(&System_Func_Texture__bool__TypeInfo, v9);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v10);
    sub_B0D8A4(&Method_ClassBoardBackground___c__SetClassIcon_b__28_2__, v11);
    sub_B0D8A4(&Method_ClassBoardBackground___c__DisplayClass28_0__SetClassIcon_b__0__, v12);
    sub_B0D8A4(&Method_ClassBoardBackground___c__DisplayClass28_0__SetClassIcon_b__1__, v13);
    sub_B0D8A4(&ClassBoardBackground___c__DisplayClass28_0_TypeInfo, v14);
    sub_B0D8A4(&ClassBoardBackground___c_TypeInfo, v15);
    byte_4217A98 = 1;
  }
  v16 = sub_B0D974(ClassBoardBackground___c__DisplayClass28_0_TypeInfo, *(_QWORD *)&iconId, method);
  ClassBoardBackground___c__DisplayClass28_0___ctor((ClassBoardBackground___c__DisplayClass28_0_o *)v16, 0LL);
  if ( !v16 )
    goto LABEL_41;
  *(_DWORD *)(v16 + 16) = iconId;
  *(_QWORD *)(v16 + 24) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v16 + 24), (System_Int32_array **)this, v18, v19, v20, v21, v22, v23);
  iconTextures = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.iconTextures;
  v27 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_Texture__bool__TypeInfo,
                                                                             v25,
                                                                             v26);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v27,
    (Il2CppObject *)v16,
    Method_ClassBoardBackground___c__DisplayClass28_0__SetClassIcon_b__0__,
    (const MethodInfo_26189B8 *)Method_System_Func_Texture__bool___ctor__);
  v28 = (System_Int32_array **)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                 iconTextures,
                                 (System_Func_TSource__bool__o *)v27,
                                 (const MethodInfo_1B4C408 *)Method_System_Linq_Enumerable_FirstOrDefault_Texture___);
  *(_QWORD *)(v16 + 32) = v28;
  sub_B0D840((BattleServantConfConponent_o *)(v16 + 32), v28, v29, v30, v31, v32, v33, v34);
  v35 = *(UnityEngine_Object_o **)(v16 + 32);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(v35, 0LL, 0LL) )
    return;
  iconRenderers = (System_Collections_Generic_IEnumerable_T__o *)this->fields.iconRenderers;
  v39 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                               System_Action_Renderer__TypeInfo,
                                                                               v36,
                                                                               v37);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v39,
    (Il2CppObject *)v16,
    Method_ClassBoardBackground___c__DisplayClass28_0__SetClassIcon_b__1__,
    (const MethodInfo_246EA3C *)Method_System_Action_Renderer___ctor__);
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    iconRenderers,
    (System_Action_T__o *)v39,
    (const MethodInfo_17086DC *)Method_BasicHelper_ForEach_Renderer___);
  exIconTextures = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.exIconTextures;
  if ( !exIconTextures )
    goto LABEL_41;
  if ( !exIconTextures[1].monitor )
    return;
  exIconRenderers = this->fields.exIconRenderers;
  if ( !exIconRenderers )
    goto LABEL_41;
  v44 = *(_QWORD *)&exIconRenderers->max_length;
  if ( !v44 )
    return;
  if ( *(_DWORD *)(v16 + 16) == 9 )
  {
    v45 = ClassBoardBackground___c_TypeInfo;
    if ( (BYTE3(ClassBoardBackground___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ClassBoardBackground___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardBackground___c_TypeInfo);
      v45 = ClassBoardBackground___c_TypeInfo;
    }
    static_fields = v45->static_fields;
    _9__28_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__28_2;
    if ( !_9__28_2 )
    {
      if ( (BYTE3(v45->vtable._0_Equals.methodPtr) & 4) != 0 && !v45->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v45);
        static_fields = ClassBoardBackground___c_TypeInfo->static_fields;
      }
      v48 = (Il2CppObject *)static_fields->__9;
      _9__28_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                      System_Func_Texture__bool__TypeInfo,
                                                                                      v40,
                                                                                      v41);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__28_2,
        v48,
        Method_ClassBoardBackground___c__SetClassIcon_b__28_2__,
        (const MethodInfo_26189B8 *)Method_System_Func_Texture__bool___ctor__);
      v49 = ClassBoardBackground___c_TypeInfo->static_fields;
      v49->__9__28_2 = (struct System_Func_Texture__bool__o *)_9__28_2;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v49->__9__28_2,
        (System_Int32_array **)_9__28_2,
        v50,
        v51,
        v52,
        v53,
        v54,
        v55);
    }
    v56 = (UnityEngine_Object_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                    exIconTextures,
                                    (System_Func_TSource__bool__o *)_9__28_2,
                                    (const MethodInfo_1B4C408 *)Method_System_Linq_Enumerable_FirstOrDefault_Texture___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(v56, 0LL, 0LL);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
      return;
    v57 = this->fields.exIconRenderers;
    if ( v57 )
    {
      max_length = v57->max_length;
      if ( max_length >= 1 )
      {
        v59 = 0;
        while ( v59 < max_length )
        {
          v60 = &v57->obj.klass + (int)v59;
          v61 = (UnityEngine_Renderer_o *)v60[4];
          if ( !v61 )
            goto LABEL_41;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v60[4], 0LL);
          if ( !gameObject )
            goto LABEL_41;
          UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
          gameObject = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_material(v61, 0LL);
          if ( !gameObject )
            goto LABEL_41;
          UnityEngine_Material__SetTexture(
            (UnityEngine_Material_o *)gameObject,
            this->fields.iconMaterialPropertyName,
            (UnityEngine_Texture_o *)v56,
            0LL);
          max_length = v57->max_length;
          if ( (int)++v59 >= max_length )
            return;
        }
        goto LABEL_42;
      }
      return;
    }
LABEL_41:
    sub_B0D97C(gameObject);
  }
  if ( (int)v44 >= 1 )
  {
    v62 = 0LL;
    while ( (unsigned int)v62 < (unsigned int)v44 )
    {
      gameObject = (UnityEngine_GameObject_o *)exIconRenderers->m_Items[v62];
      if ( !gameObject )
        goto LABEL_41;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_41;
      UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      LODWORD(v44) = exIconRenderers->max_length;
      if ( (int)++v62 >= (int)v44 )
        return;
    }
LABEL_42:
    v63 = sub_B0D9A8(gameObject);
    sub_B0D948(v63, 0LL);
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
  sub_B0D840(
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
  __int64 v9; // x0
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
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  if ( (byte_4217A9C & 1) == 0 )
  {
    sub_B0D8A4(&ClassBoardBackground__WaitAnimationFinished_d__33_TypeInfo, anim);
    byte_4217A9C = 1;
  }
  v8 = sub_B0D974(ClassBoardBackground__WaitAnimationFinished_d__33_TypeInfo, anim, name);
  ClassBoardBackground__WaitAnimationFinished_d__33___ctor(
    (ClassBoardBackground__WaitAnimationFinished_d__33_o *)v8,
    0,
    0LL);
  if ( !v8 )
    sub_B0D97C(v9);
  *(_QWORD *)(v8 + 32) = anim;
  sub_B0D840((BattleServantConfConponent_o *)(v8 + 32), (System_Int32_array **)anim, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v8 + 40) = name;
  sub_B0D840((BattleServantConfConponent_o *)(v8 + 40), (System_Int32_array **)name, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v8 + 48) = endCallback;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v8 + 48),
    (System_Int32_array **)endCallback,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  return (System_Collections_IEnumerator_o *)v8;
}


void __fastcall ClassBoardBackground___PlayStartMainEffectPlayer_b__31_0(
        ClassBoardBackground_o *this,
        const MethodInfo *method)
{
  ClassBoardEffectPlayer_o *startMainEffectPlayer; // x0

  startMainEffectPlayer = this->fields.startMainEffectPlayer;
  if ( !startMainEffectPlayer )
    sub_B0D97C(0LL);
  ClassBoardEffectPlayer__End(startMainEffectPlayer, method);
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
  Il2CppObject **p__2__current; // x19
  bool result; // w0

  if ( (byte_4211E10 & 1) == 0 )
  {
    sub_B0D8A4(&SimpleAnimation_State_TypeInfo, method);
    byte_4211E10 = 1;
  }
  if ( this->fields.__1__state <= 1u )
  {
    anim = this->fields.anim;
    this->fields.__1__state = -1;
    if ( !anim )
      sub_B0D97C(0LL);
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
        p_method = sub_AA67A0(State, SimpleAnimation_State_TypeInfo, 5LL);
      }
      if ( (*(float (__fastcall **)(SimpleAnimation_State_o *, _QWORD))p_method)(v6, *(_QWORD *)(p_method + 8)) < 1.0 )
      {
        this->fields.__2__current = 0LL;
        p__2__current = &this->fields.__2__current;
        sub_B0D840(p__2__current, 0LL);
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
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_ClassBoardBackground__WaitAnimationFinished_d__33_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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
  Il2CppObject *v3; // x19
  struct ClassBoardBackground___c_StaticFields *static_fields; // x0

  if ( (byte_4211E0C & 1) == 0 )
  {
    sub_B0D8A4(&ClassBoardBackground___c_TypeInfo, v1);
    byte_4211E0C = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(ClassBoardBackground___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = ClassBoardBackground___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ClassBoardBackground___c_o *)v3;
  sub_B0D840(static_fields, v3);
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

  if ( (byte_4211E0E & 1) == 0 )
  {
    this = (ClassBoardBackground___c_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, x);
    byte_4211E0E = 1;
  }
  if ( !x )
    sub_B0D97C(this);
  material = (UnityEngine_Object_o *)UnityEngine_Renderer__get_material(x, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_34935276(material, 0LL);
}


bool __fastcall ClassBoardBackground___c___SetClassIcon_b__28_2(
        ClassBoardBackground___c_o *this,
        UnityEngine_Texture_o *x,
        const MethodInfo *method)
{
  System_String_o *name; // x0

  if ( (byte_4211E0D & 1) == 0 )
  {
    this = (ClassBoardBackground___c_o *)sub_B0D8A4(&StringLiteral_4028/*"ClassIconEx2"*/, x);
    byte_4211E0D = 1;
  }
  if ( !x )
    sub_B0D97C(this);
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)x, 0LL);
  return System_String__op_Equality(name, (System_String_o *)StringLiteral_4028/*"ClassIconEx2"*/, 0LL);
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
  ClassBoardBackground___c__DisplayClass28_0_o *v4; // x19
  __int64 v5; // x1
  System_String_o *name; // x20
  Il2CppObject *v7; // x0
  System_String_o *v8; // x0
  int32_t iconId; // [xsp+Ch] [xbp-14h] BYREF

  v4 = this;
  if ( (byte_4211E0F & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, x);
    this = (ClassBoardBackground___c__DisplayClass28_0_o *)sub_B0D8A4(&StringLiteral_4030/*"ClassIcon{0}"*/, v5);
    byte_4211E0F = 1;
  }
  if ( !x )
    sub_B0D97C(this);
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)x, 0LL);
  iconId = v4->fields.iconId;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId);
  v8 = System_String__Format((System_String_o *)StringLiteral_4030/*"ClassIcon{0}"*/, v7, 0LL);
  return System_String__op_Equality(name, v8, 0LL);
}


void __fastcall ClassBoardBackground___c__DisplayClass28_0___SetClassIcon_b__1(
        ClassBoardBackground___c__DisplayClass28_0_o *this,
        UnityEngine_Renderer_o *x,
        const MethodInfo *method)
{
  ClassBoardBackground___c__DisplayClass28_0_o *v3; // x19
  struct ClassBoardBackground_o *_4__this; // x8

  if ( !x
    || (v3 = this,
        this = (ClassBoardBackground___c__DisplayClass28_0_o *)UnityEngine_Renderer__get_material(x, 0LL),
        (_4__this = v3->fields.__4__this) == 0LL)
    || !this )
  {
    sub_B0D97C(this);
  }
  UnityEngine_Material__SetTexture(
    (UnityEngine_Material_o *)this,
    _4__this->fields.iconMaterialPropertyName,
    v3->fields.iconTex,
    0LL);
}