void __fastcall ClassBoardBackground___ctor(ClassBoardBackground_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1

  if ( (byte_4187D1F & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_16013/*"_MainTex"*/, method);
    byte_4187D1F = 1;
  }
  v9 = (System_Int32_array **)StringLiteral_16013/*"_MainTex"*/;
  this->fields.iconMaterialPropertyName = (struct System_String_o *)StringLiteral_16013/*"_MainTex"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.iconMaterialPropertyName, v9, v2, v3, v4, v5, v6, v7);
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
    sub_B2C434(0LL, value);
  UnityEngine_GameObject__SetActive(earthAccessoriesObject, value, 0LL);
}


void __fastcall ClassBoardBackground__Awake(ClassBoardBackground_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *gameObject; // x0
  __int64 v6; // x1
  System_String_o *name; // x20
  ClassBoardEffectPlayer_o *v8; // x21
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  struct ClassBoardEffectPlayer_o *startMainEffectPlayer; // x20
  System_Action_o *v16; // x21
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  if ( (byte_4187D16 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_ClassBoardBackground_PlayStartMainEffectPlayer__, v3);
    sub_B2C35C(&ClassBoardEffectPlayer_TypeInfo, v4);
    byte_4187D16 = 1;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_6;
  name = UnityEngine_Object__get_name(gameObject, 0LL);
  v8 = (ClassBoardEffectPlayer_o *)sub_B2C42C(ClassBoardEffectPlayer_TypeInfo);
  ClassBoardEffectPlayer___ctor_28123700(v8, name, 0LL);
  this->fields.startMainEffectPlayer = v8;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.startMainEffectPlayer,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  startMainEffectPlayer = this->fields.startMainEffectPlayer;
  v16 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v16, (Il2CppObject *)this, Method_ClassBoardBackground_PlayStartMainEffectPlayer__, 0LL);
  if ( !startMainEffectPlayer )
LABEL_6:
    sub_B2C434(gameObject, v6);
  startMainEffectPlayer->fields.playCallback = v16;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&startMainEffectPlayer->fields.playCallback,
    (System_Int32_array **)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
}


void __fastcall ClassBoardBackground__CallAnimationEventBoardParent(
        ClassBoardBackground_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *boardParentAnimation; // x20
  UnityEngine_Object_o *boardParentAnimationClip; // x20
  __int64 v5; // x1
  UnityEngine_Object_o *name; // x0
  SimpleAnimation_o *v7; // x19

  if ( (byte_4187D1E & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4187D1E = 1;
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
        || (v7 = this->fields.boardParentAnimation,
            name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0LL),
            !v7) )
      {
        sub_B2C434(name, v5);
      }
      SimpleAnimation__Play_16486620(v7, (System_String_o *)name, 0LL);
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
  sub_B2C2F8(p_showBoardCallback, 0LL, v3, v4, v5, v6, v7, v8);
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

  if ( (byte_4187D17 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, camera);
    byte_4187D17 = 1;
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
    sub_B2C434(classBoardViewCamera, camera);
  }
  UnityEngine_GameObject__SetActive(v9, (unsigned __int8)classBoardViewCamera & 1, 0LL);
  this->fields.currentCamera = camera;
  sub_B2C2F8(
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
    sub_B2C434(0LL, method);
  return UnityEngine_Camera__get_targetTexture(currentCamera, 0LL);
}


void __fastcall ClassBoardBackground__OnDestroy(ClassBoardBackground_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_IEnumerable_T__o *iconRenderers; // x19
  ClassBoardBackground___c_c *v8; // x0
  struct ClassBoardBackground___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__30_0; // x20
  Il2CppObject *v11; // x21
  struct ClassBoardBackground___c_StaticFields *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_4187D1B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_Renderer___ctor__, method);
    sub_B2C35C(&System_Action_Renderer__TypeInfo, v3);
    sub_B2C35C(&Method_BasicHelper_ForEach_Renderer___, v4);
    sub_B2C35C(&Method_ClassBoardBackground___c__OnDestroy_b__30_0__, v5);
    sub_B2C35C(&ClassBoardBackground___c_TypeInfo, v6);
    byte_4187D1B = 1;
  }
  iconRenderers = (System_Collections_Generic_IEnumerable_T__o *)this->fields.iconRenderers;
  v8 = ClassBoardBackground___c_TypeInfo;
  if ( (BYTE3(ClassBoardBackground___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardBackground___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardBackground___c_TypeInfo);
    v8 = ClassBoardBackground___c_TypeInfo;
  }
  static_fields = v8->static_fields;
  _9__30_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__30_0;
  if ( !_9__30_0 )
  {
    if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      static_fields = ClassBoardBackground___c_TypeInfo->static_fields;
    }
    v11 = (Il2CppObject *)static_fields->__9;
    _9__30_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_Renderer__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__30_0,
      v11,
      Method_ClassBoardBackground___c__OnDestroy_b__30_0__,
      (const MethodInfo_24BBAD8 *)Method_System_Action_Renderer___ctor__);
    v12 = ClassBoardBackground___c_TypeInfo->static_fields;
    v12->__9__30_0 = (struct System_Action_Renderer__o *)_9__30_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v12->__9__30_0,
      (System_Int32_array **)_9__30_0,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    iconRenderers,
    (System_Action_T__o *)_9__30_0,
    (const MethodInfo_1727C50 *)Method_BasicHelper_ForEach_Renderer___);
}


void __fastcall ClassBoardBackground__PlayBoardParentBeforeAnimation(
        ClassBoardBackground_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *boardParentAnimation; // x20
  UnityEngine_Object_o *boardParentBeforeAnimationClip; // x20
  __int64 v5; // x1
  SimpleAnimation_o *v6; // x0

  if ( (byte_4187D1A & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4187D1A = 1;
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
      v6 = this->fields.boardParentAnimation;
      if ( !v6
        || (SimpleAnimation__set_clip(v6, this->fields.boardParentBeforeAnimationClip, 0LL),
            (v6 = this->fields.boardParentAnimation) == 0LL) )
      {
        sub_B2C434(v6, v5);
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
    sub_B2C434(this, 0LL);
  SimpleAnimation__Rewind(anim, 0LL);
  v9 = SimpleAnimation__Play_16486620(anim, name, 0LL);
  v11 = ClassBoardBackground__WaitAnimationFinished((ClassBoardBackground_o *)v9, anim, name, endCallback, v10);
  UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, v11, 0LL);
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
  System_Action_o *v13; // x22
  const MethodInfo *v14; // x4
  int32_t v15; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4187D1C & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_ClassBoardBackground__PlayStartMainEffectPlayer_b__31_0__, v3);
    sub_B2C35C(&Method_ClassBoardEffectPlayer_GetData_int___, v4);
    sub_B2C35C(&int_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_23651/*"{0}{1}"*/, v6);
    sub_B2C35C(&StringLiteral_8899/*"MainTransition"*/, v7);
    byte_4187D1C = 1;
  }
  startMainEffectPlayer = this->fields.startMainEffectPlayer;
  if ( !startMainEffectPlayer )
    sub_B2C434(0LL, method);
  Data_int = ClassBoardEffectPlayer__GetData_int_(
               startMainEffectPlayer,
               (const MethodInfo_172C70C *)Method_ClassBoardEffectPlayer_GetData_int___);
  mainAnimation = this->fields.mainAnimation;
  v15 = Data_int;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15);
  v12 = System_String__Format_44301068(
          (System_String_o *)StringLiteral_23651/*"{0}{1}"*/,
          (Il2CppObject *)StringLiteral_8899/*"MainTransition"*/,
          v11,
          0LL);
  v13 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_ClassBoardBackground__PlayStartMainEffectPlayer_b__31_0__, 0LL);
  ClassBoardBackground__PlaySimpleAnimation(this, mainAnimation, v12, v13, v14);
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
  __int64 v12; // x1
  UnityEngine_Object_o *name; // x0
  SimpleAnimation_o *v14; // x20
  UnityEngine_AnimationClip_o *v15; // x20
  SimpleAnimation_o *v16; // x21
  UnityEngine_Object_o *boardParentBeforeAnimationClip; // x20
  SimpleAnimation_o *v18; // x20
  UnityEngine_AnimationClip_o *v19; // x20
  SimpleAnimation_o *v20; // x21
  SimpleAnimation_o *v21; // x19

  if ( (byte_4187D18 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, animation);
    byte_4187D18 = 1;
  }
  this->fields.boardParentAnimation = animation;
  sub_B2C2F8(
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
      v14 = this->fields.boardParentAnimation;
      name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0LL);
      if ( !v14 )
        goto LABEL_31;
      name = (UnityEngine_Object_o *)SimpleAnimation__GetState(v14, (System_String_o *)name, 0LL);
      if ( !name )
      {
        v15 = this->fields.boardParentAnimationClip;
        if ( !v15 )
          goto LABEL_31;
        v16 = this->fields.boardParentAnimation;
        name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(
                                         (UnityEngine_Object_o *)this->fields.boardParentAnimationClip,
                                         0LL);
        if ( !v16 )
          goto LABEL_31;
        SimpleAnimation__AddClip(v16, v15, (System_String_o *)name, 0LL);
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
        v18 = this->fields.boardParentAnimation;
        name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0LL);
        if ( v18 )
        {
          name = (UnityEngine_Object_o *)SimpleAnimation__GetState(v18, (System_String_o *)name, 0LL);
          if ( !name )
          {
            v19 = this->fields.boardParentBeforeAnimationClip;
            if ( !v19 )
              goto LABEL_31;
            v20 = this->fields.boardParentAnimation;
            name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(
                                             (UnityEngine_Object_o *)this->fields.boardParentBeforeAnimationClip,
                                             0LL);
            if ( !v20 )
              goto LABEL_31;
            SimpleAnimation__AddClip(v20, v19, (System_String_o *)name, 0LL);
          }
          name = (UnityEngine_Object_o *)this->fields.boardParentBeforeAnimationClip;
          if ( name )
          {
            v21 = this->fields.boardParentAnimation;
            name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0LL);
            if ( v21 )
            {
              SimpleAnimation__Play_16486620(v21, (System_String_o *)name, 0LL);
              return;
            }
          }
        }
      }
LABEL_31:
      sub_B2C434(name, v12);
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
  __int64 v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Collections_Generic_IEnumerable_TSource__o *iconTextures; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v26; // x22
  System_Int32_array **v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  UnityEngine_Object_o *v34; // x21
  System_Collections_Generic_IEnumerable_T__o *iconRenderers; // x21
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v36; // x22
  System_Collections_Generic_IEnumerable_TSource__o *exIconTextures; // x21
  struct UnityEngine_Renderer_array *exIconRenderers; // x22
  __int64 v39; // x8
  ClassBoardBackground___c_c *v40; // x0
  struct ClassBoardBackground___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__28_2; // x20
  Il2CppObject *v43; // x22
  struct ClassBoardBackground___c_StaticFields *v44; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  UnityEngine_Object_o *v51; // x20
  struct UnityEngine_Renderer_array *v52; // x22
  int max_length; // w8
  unsigned int v54; // w23
  Il2CppClass **v55; // x8
  UnityEngine_Renderer_o *v56; // x21
  __int64 v57; // x19
  __int64 v58; // x0

  if ( (byte_4187D19 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_Renderer___ctor__, *(_QWORD *)&iconId);
    sub_B2C35C(&System_Action_Renderer__TypeInfo, v5);
    sub_B2C35C(&Method_BasicHelper_ForEach_Renderer___, v6);
    sub_B2C35C(&Method_System_Linq_Enumerable_FirstOrDefault_Texture___, v7);
    sub_B2C35C(&Method_System_Func_Texture__bool___ctor__, v8);
    sub_B2C35C(&System_Func_Texture__bool__TypeInfo, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    sub_B2C35C(&Method_ClassBoardBackground___c__SetClassIcon_b__28_2__, v11);
    sub_B2C35C(&Method_ClassBoardBackground___c__DisplayClass28_0__SetClassIcon_b__0__, v12);
    sub_B2C35C(&Method_ClassBoardBackground___c__DisplayClass28_0__SetClassIcon_b__1__, v13);
    sub_B2C35C(&ClassBoardBackground___c__DisplayClass28_0_TypeInfo, v14);
    sub_B2C35C(&ClassBoardBackground___c_TypeInfo, v15);
    byte_4187D19 = 1;
  }
  v16 = sub_B2C42C(ClassBoardBackground___c__DisplayClass28_0_TypeInfo);
  ClassBoardBackground___c__DisplayClass28_0___ctor((ClassBoardBackground___c__DisplayClass28_0_o *)v16, 0LL);
  if ( !v16 )
    goto LABEL_41;
  *(_DWORD *)(v16 + 16) = iconId;
  *(_QWORD *)(v16 + 24) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v16 + 24), (System_Int32_array **)this, v19, v20, v21, v22, v23, v24);
  iconTextures = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.iconTextures;
  v26 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_Texture__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v26,
    (Il2CppObject *)v16,
    Method_ClassBoardBackground___c__DisplayClass28_0__SetClassIcon_b__0__,
    (const MethodInfo_2711C04 *)Method_System_Func_Texture__bool___ctor__);
  v27 = (System_Int32_array **)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                 iconTextures,
                                 (System_Func_TSource__bool__o *)v26,
                                 (const MethodInfo_1A9113C *)Method_System_Linq_Enumerable_FirstOrDefault_Texture___);
  *(_QWORD *)(v16 + 32) = v27;
  sub_B2C2F8((BattleServantConfConponent_o *)(v16 + 32), v27, v28, v29, v30, v31, v32, v33);
  v34 = *(UnityEngine_Object_o **)(v16 + 32);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(v34, 0LL, 0LL) )
    return;
  iconRenderers = (System_Collections_Generic_IEnumerable_T__o *)this->fields.iconRenderers;
  v36 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_Renderer__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v36,
    (Il2CppObject *)v16,
    Method_ClassBoardBackground___c__DisplayClass28_0__SetClassIcon_b__1__,
    (const MethodInfo_24BBAD8 *)Method_System_Action_Renderer___ctor__);
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    iconRenderers,
    (System_Action_T__o *)v36,
    (const MethodInfo_1727C50 *)Method_BasicHelper_ForEach_Renderer___);
  exIconTextures = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.exIconTextures;
  if ( !exIconTextures )
    goto LABEL_41;
  if ( !exIconTextures[1].monitor )
    return;
  exIconRenderers = this->fields.exIconRenderers;
  if ( !exIconRenderers )
    goto LABEL_41;
  v39 = *(_QWORD *)&exIconRenderers->max_length;
  if ( !v39 )
    return;
  if ( *(_DWORD *)(v16 + 16) == 9 )
  {
    v40 = ClassBoardBackground___c_TypeInfo;
    if ( (BYTE3(ClassBoardBackground___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ClassBoardBackground___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardBackground___c_TypeInfo);
      v40 = ClassBoardBackground___c_TypeInfo;
    }
    static_fields = v40->static_fields;
    _9__28_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__28_2;
    if ( !_9__28_2 )
    {
      if ( (BYTE3(v40->vtable._0_Equals.methodPtr) & 4) != 0 && !v40->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v40);
        static_fields = ClassBoardBackground___c_TypeInfo->static_fields;
      }
      v43 = (Il2CppObject *)static_fields->__9;
      _9__28_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_Texture__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__28_2,
        v43,
        Method_ClassBoardBackground___c__SetClassIcon_b__28_2__,
        (const MethodInfo_2711C04 *)Method_System_Func_Texture__bool___ctor__);
      v44 = ClassBoardBackground___c_TypeInfo->static_fields;
      v44->__9__28_2 = (struct System_Func_Texture__bool__o *)_9__28_2;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v44->__9__28_2,
        (System_Int32_array **)_9__28_2,
        v45,
        v46,
        v47,
        v48,
        v49,
        v50);
    }
    v51 = (UnityEngine_Object_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                    exIconTextures,
                                    (System_Func_TSource__bool__o *)_9__28_2,
                                    (const MethodInfo_1A9113C *)Method_System_Linq_Enumerable_FirstOrDefault_Texture___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(v51, 0LL, 0LL);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
      return;
    v52 = this->fields.exIconRenderers;
    if ( v52 )
    {
      max_length = v52->max_length;
      if ( max_length >= 1 )
      {
        v54 = 0;
        while ( v54 < max_length )
        {
          v55 = &v52->obj.klass + (int)v54;
          v56 = (UnityEngine_Renderer_o *)v55[4];
          if ( !v56 )
            goto LABEL_41;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v55[4], 0LL);
          if ( !gameObject )
            goto LABEL_41;
          UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
          gameObject = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_material(v56, 0LL);
          if ( !gameObject )
            goto LABEL_41;
          UnityEngine_Material__SetTexture(
            (UnityEngine_Material_o *)gameObject,
            this->fields.iconMaterialPropertyName,
            (UnityEngine_Texture_o *)v51,
            0LL);
          max_length = v52->max_length;
          if ( (int)++v54 >= max_length )
            return;
        }
        goto LABEL_42;
      }
      return;
    }
LABEL_41:
    sub_B2C434(gameObject, v18);
  }
  if ( (int)v39 >= 1 )
  {
    v57 = 0LL;
    while ( (unsigned int)v57 < (unsigned int)v39 )
    {
      gameObject = (UnityEngine_GameObject_o *)exIconRenderers->m_Items[v57];
      if ( !gameObject )
        goto LABEL_41;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_41;
      UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      LODWORD(v39) = exIconRenderers->max_length;
      if ( (int)++v57 >= (int)v39 )
        return;
    }
LABEL_42:
    v58 = sub_B2C460(gameObject);
    sub_B2C400(v58, 0LL);
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
  sub_B2C2F8(
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
  __int64 v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_4187D1D & 1) == 0 )
  {
    sub_B2C35C(&ClassBoardBackground__WaitAnimationFinished_d__33_TypeInfo, anim);
    byte_4187D1D = 1;
  }
  v8 = sub_B2C42C(ClassBoardBackground__WaitAnimationFinished_d__33_TypeInfo);
  ClassBoardBackground__WaitAnimationFinished_d__33___ctor(
    (ClassBoardBackground__WaitAnimationFinished_d__33_o *)v8,
    0,
    0LL);
  if ( !v8 )
    sub_B2C434(v9, v10);
  *(_QWORD *)(v8 + 32) = anim;
  sub_B2C2F8((BattleServantConfConponent_o *)(v8 + 32), (System_Int32_array **)anim, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)(v8 + 40) = name;
  sub_B2C2F8((BattleServantConfConponent_o *)(v8 + 40), (System_Int32_array **)name, v17, v18, v19, v20, v21, v22);
  *(_QWORD *)(v8 + 48) = endCallback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v8 + 48),
    (System_Int32_array **)endCallback,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  return (System_Collections_IEnumerator_o *)v8;
}


void __fastcall ClassBoardBackground___PlayStartMainEffectPlayer_b__31_0(
        ClassBoardBackground_o *this,
        const MethodInfo *method)
{
  ClassBoardEffectPlayer_o *startMainEffectPlayer; // x0

  startMainEffectPlayer = this->fields.startMainEffectPlayer;
  if ( !startMainEffectPlayer )
    sub_B2C434(0LL, method);
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
  __int64 v5; // x3
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v7; // x20
  unsigned __int64 v8; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  Il2CppObject **p__2__current; // x19
  bool result; // w0

  if ( (byte_4184ED3 & 1) == 0 )
  {
    sub_B2C35C(&SimpleAnimation_State_TypeInfo, method);
    byte_4184ED3 = 1;
  }
  if ( this->fields.__1__state <= 1u )
  {
    anim = this->fields.anim;
    this->fields.__1__state = -1;
    if ( !anim )
      sub_B2C434(0LL, method);
    State = SimpleAnimation__GetState(anim, this->fields.name, 0LL);
    if ( State )
    {
      klass = State->klass;
      v7 = State;
      if ( *(_WORD *)&State->klass->_2.bitflags1 )
      {
        v8 = 0LL;
        p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
        {
          ++v8;
          p_offset += 2;
          if ( v8 >= *(unsigned __int16 *)&State->klass->_2.bitflags1 )
            goto LABEL_10;
        }
        p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 5].method;
      }
      else
      {
LABEL_10:
        p_method = sub_AC5258(State, SimpleAnimation_State_TypeInfo, 5LL, v5);
      }
      if ( (*(float (__fastcall **)(SimpleAnimation_State_o *, _QWORD))p_method)(v7, *(_QWORD *)(p_method + 8)) < 1.0 )
      {
        this->fields.__2__current = 0LL;
        p__2__current = &this->fields.__2__current;
        sub_B2C2F8(p__2__current, 0LL);
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_ClassBoardBackground__WaitAnimationFinished_d__33_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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
  Il2CppObject *v2; // x19
  struct ClassBoardBackground___c_StaticFields *static_fields; // x0

  if ( (byte_4184ECF & 1) == 0 )
  {
    sub_B2C35C(&ClassBoardBackground___c_TypeInfo, v1);
    byte_4184ECF = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(ClassBoardBackground___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = ClassBoardBackground___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ClassBoardBackground___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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

  if ( (byte_4184ED1 & 1) == 0 )
  {
    this = (ClassBoardBackground___c_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, x);
    byte_4184ED1 = 1;
  }
  if ( !x )
    sub_B2C434(this, x);
  material = (UnityEngine_Object_o *)UnityEngine_Renderer__get_material(x, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_35314896(material, 0LL);
}


bool __fastcall ClassBoardBackground___c___SetClassIcon_b__28_2(
        ClassBoardBackground___c_o *this,
        UnityEngine_Texture_o *x,
        const MethodInfo *method)
{
  System_String_o *name; // x0

  if ( (byte_4184ED0 & 1) == 0 )
  {
    this = (ClassBoardBackground___c_o *)sub_B2C35C(&StringLiteral_4015/*"ClassIconEx2"*/, x);
    byte_4184ED0 = 1;
  }
  if ( !x )
    sub_B2C434(this, x);
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)x, 0LL);
  return System_String__op_Equality(name, (System_String_o *)StringLiteral_4015/*"ClassIconEx2"*/, 0LL);
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
  if ( (byte_4184ED2 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, x);
    this = (ClassBoardBackground___c__DisplayClass28_0_o *)sub_B2C35C(&StringLiteral_4017/*"ClassIcon{0}"*/, v5);
    byte_4184ED2 = 1;
  }
  if ( !x )
    sub_B2C434(this, x);
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)x, 0LL);
  iconId = v4->fields.iconId;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId);
  v8 = System_String__Format((System_String_o *)StringLiteral_4017/*"ClassIcon{0}"*/, v7, 0LL);
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
    sub_B2C434(this, x);
  }
  UnityEngine_Material__SetTexture(
    (UnityEngine_Material_o *)this,
    _4__this->fields.iconMaterialPropertyName,
    v3->fields.iconTex,
    0LL);
}