void ClassBoardSquare___ctor(ClassBoardSquare_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v9; // w1
  int32_t v10; // w1
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  int32_t v17; // w1
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  int32_t v24; // w1
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  int32_t v31; // w1
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  int32_t v38; // w1
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7

  if ( (byte_4D346E5 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_3243/*"BrightTurnTransition"*/);
    sub_1C93AD4(&StringLiteral_3240/*"BrightTurn"*/);
    sub_1C93AD4(&StringLiteral_7192/*"GrandReturnTransition"*/);
    sub_1C93AD4(&StringLiteral_3245/*"BrightTurnUnLock"*/);
    sub_1C93AD4(&StringLiteral_13116/*"SquareEnable"*/);
    sub_1C93AD4(&StringLiteral_3193/*"BlackOutTransition"*/);
    byte_4D346E5 = 1;
  }
  v9 = StringLiteral_3240/*"BrightTurn"*/;
  this->fields.enableAnimationName = (struct System_String_o *)StringLiteral_3240/*"BrightTurn"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.enableAnimationName, v9, v2, v3, v4, v5, v6, v7);
  v10 = StringLiteral_13116/*"SquareEnable"*/;
  this->fields.releaseAnimationName = (struct System_String_o *)StringLiteral_13116/*"SquareEnable"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.releaseAnimationName, v10, v11, v12, v13, v14, v15, v16);
  v17 = StringLiteral_3243/*"BrightTurnTransition"*/;
  this->fields.brightTurnTransitionAnimationName = (struct System_String_o *)StringLiteral_3243/*"BrightTurnTransition"*/;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.brightTurnTransitionAnimationName,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = StringLiteral_3193/*"BlackOutTransition"*/;
  this->fields.blackOutTransitionAnimationName = (struct System_String_o *)StringLiteral_3193/*"BlackOutTransition"*/;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.blackOutTransitionAnimationName,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = StringLiteral_3245/*"BrightTurnUnLock"*/;
  this->fields.unlockEnableAnimationName = (struct System_String_o *)StringLiteral_3245/*"BrightTurnUnLock"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.unlockEnableAnimationName, v31, v32, v33, v34, v35, v36, v37);
  v38 = StringLiteral_7192/*"GrandReturnTransition"*/;
  this->fields.animNameGrandReturnTransition = (struct System_String_o *)StringLiteral_7192/*"GrandReturnTransition"*/;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.animNameGrandReturnTransition,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ClassBoardSquare__Awake(ClassBoardSquare_o *this, const MethodInfo *method)
{
  ;
}


void ClassBoardSquare__DrawAcquired(ClassBoardSquare_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  ClassBoardSquare_o *v4; // x0
  const MethodInfo *v5; // x3
  ClassBoardSquare_o *v6; // x0
  const MethodInfo *v7; // x3
  ClassBoardSquare_o *v8; // x0
  const MethodInfo *v9; // x3
  ClassBoardSquare_o *v10; // x0
  const MethodInfo *v11; // x3
  ClassBoardSquare_o *v12; // x0
  const MethodInfo *v13; // x3

  ClassBoardSquare__SetActiveArrayObject(this, this->fields.acquiredObjects, 1, v2);
  ClassBoardSquare__SetActiveArrayObject(v4, this->fields.unacquiredObjects, 0, v5);
  ClassBoardSquare__SetActiveArrayObject(v6, this->fields.availableObjects, 0, v7);
  ClassBoardSquare__SetActiveArrayObject(v8, this->fields.notConnectedObjects, 0, v9);
  ClassBoardSquare__SetActiveObject(v10, this->fields.availableEffect, 0, v11);
  ClassBoardSquare__SetActiveObject(v12, this->fields.releasedEffect, 1, v13);
}


void ClassBoardSquare__DrawAvailable(ClassBoardSquare_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  ClassBoardSquare_o *v4; // x0
  const MethodInfo *v5; // x3
  ClassBoardSquare_o *v6; // x0
  const MethodInfo *v7; // x3
  ClassBoardSquare_o *v8; // x0
  const MethodInfo *v9; // x3
  ClassBoardSquare_o *v10; // x0
  const MethodInfo *v11; // x3
  ClassBoardSquare_o *v12; // x0
  const MethodInfo *v13; // x3

  ClassBoardSquare__SetActiveArrayObject(this, this->fields.acquiredObjects, 0, v2);
  ClassBoardSquare__SetActiveArrayObject(v4, this->fields.unacquiredObjects, 0, v5);
  ClassBoardSquare__SetActiveArrayObject(v6, this->fields.availableObjects, 1, v7);
  ClassBoardSquare__SetActiveArrayObject(v8, this->fields.notConnectedObjects, 0, v9);
  ClassBoardSquare__SetActiveObject(v10, this->fields.availableEffect, 1, v11);
  ClassBoardSquare__SetActiveObject(v12, this->fields.releasedEffect, 0, v13);
}


void ClassBoardSquare__DrawNotConnected(ClassBoardSquare_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  ClassBoardSquare_o *v4; // x0
  const MethodInfo *v5; // x3
  ClassBoardSquare_o *v6; // x0
  const MethodInfo *v7; // x3
  ClassBoardSquare_o *v8; // x0
  const MethodInfo *v9; // x3
  ClassBoardSquare_o *v10; // x0
  const MethodInfo *v11; // x3
  ClassBoardSquare_o *v12; // x0
  const MethodInfo *v13; // x3

  ClassBoardSquare__SetActiveArrayObject(this, this->fields.acquiredObjects, 0, v2);
  ClassBoardSquare__SetActiveArrayObject(v4, this->fields.unacquiredObjects, 0, v5);
  ClassBoardSquare__SetActiveArrayObject(v6, this->fields.availableObjects, 0, v7);
  ClassBoardSquare__SetActiveArrayObject(v8, this->fields.notConnectedObjects, 1, v9);
  ClassBoardSquare__SetActiveObject(v10, this->fields.availableEffect, 0, v11);
  ClassBoardSquare__SetActiveObject(v12, this->fields.releasedEffect, 0, v13);
}


void ClassBoardSquare__DrawUnacquired(ClassBoardSquare_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  ClassBoardSquare_o *v4; // x0
  const MethodInfo *v5; // x3
  ClassBoardSquare_o *v6; // x0
  const MethodInfo *v7; // x3
  ClassBoardSquare_o *v8; // x0
  const MethodInfo *v9; // x3
  ClassBoardSquare_o *v10; // x0
  const MethodInfo *v11; // x3
  ClassBoardSquare_o *v12; // x0
  const MethodInfo *v13; // x3

  ClassBoardSquare__SetActiveArrayObject(this, this->fields.acquiredObjects, 0, v2);
  ClassBoardSquare__SetActiveArrayObject(v4, this->fields.unacquiredObjects, 1, v5);
  ClassBoardSquare__SetActiveArrayObject(v6, this->fields.availableObjects, 0, v7);
  ClassBoardSquare__SetActiveArrayObject(v8, this->fields.notConnectedObjects, 0, v9);
  ClassBoardSquare__SetActiveObject(v10, this->fields.availableEffect, 0, v11);
  ClassBoardSquare__SetActiveObject(v12, this->fields.releasedEffect, 0, v13);
}


void ClassBoardSquare__FixedUpdate(ClassBoardSquare_o *this, const MethodInfo *method)
{
  ClassBoardSquare_c *klass; // x8

  if ( this->fields.isUpdateDraw )
  {
    klass = this->klass;
    this->fields.isUpdateDraw = 0;
    ((void (__fastcall *)(ClassBoardSquare_o *, _QWORD, const MethodInfo *))klass->vtable._9_UpdateDraw.methodPtr)(
      this,
      0,
      klass->vtable._9_UpdateDraw.method);
  }
}


void ClassBoardSquare__OnClickSquare(ClassBoardSquare_o *this, const MethodInfo *method)
{
  struct System_Action_ClassBoardSquare__o *clickedEvent; // x8

  if ( !this->fields._IsProcessingClick_k__BackingField )
  {
    ((void (__fastcall *)(ClassBoardSquare_o *, const MethodInfo *))this->klass->vtable._12_PlayClickedSe.methodPtr)(
      this,
      this->klass->vtable._12_PlayClickedSe.method);
    clickedEvent = this->fields.clickedEvent;
    if ( clickedEvent )
      ((void (__fastcall *)(intptr_t, ClassBoardSquare_o *, intptr_t))clickedEvent->fields.invoke_impl)(
        clickedEvent->fields.method_code,
        this,
        clickedEvent->fields.method);
  }
}


void ClassBoardSquare__PlayClickedSe(ClassBoardSquare_o *this, const MethodInfo *method)
{
  ClassBoardSquare_o *v2; // x19
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  IClassBoardSquareModel_c *klass; // x8
  __int64 v5; // x9
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 v7; // x0
  struct IClassBoardSquareModel_o *v8; // x19
  IClassBoardSquareModel_c *v9; // x8
  __int64 v10; // x9
  IClassBoardSquareModel_c **v11; // x10
  __int64 v12; // x0
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0

  v2 = this;
  if ( (byte_4D346E1 & 1) == 0 )
  {
    sub_1C93AD4(&Method_ClassBoardSquare_PlayClickedSe__);
    this = (ClassBoardSquare_o *)sub_1C93AD4(&IClassBoardSquareModel_TypeInfo);
    byte_4D346E1 = 1;
  }
  SquareModel_k__BackingField = v2->fields._SquareModel_k__BackingField;
  if ( !SquareModel_k__BackingField )
    goto LABEL_23;
  klass = SquareModel_k__BackingField->klass;
  v5 = *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.rank;
  if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.rank )
  {
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v5;
      p_offset += 2;
      if ( !v5 )
        goto LABEL_8;
    }
    v7 = (__int64)&(&klass->rgctx_data)[2 * *(_DWORD *)p_offset + 39];
  }
  else
  {
LABEL_8:
    v7 = sub_1C69E5C(v2->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 12);
  }
  this = (ClassBoardSquare_o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v7)(
                                 SquareModel_k__BackingField,
                                 *(_QWORD *)(v7 + 8));
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_19;
  v8 = v2->fields._SquareModel_k__BackingField;
  if ( !v8 )
LABEL_23:
    sub_1C93D2C(this, method);
  v9 = v8->klass;
  v10 = *(unsigned __int16 *)&v8->klass->_2.rank;
  if ( *(_WORD *)&v8->klass->_2.rank )
  {
    v11 = (IClassBoardSquareModel_c **)&v9->_1.interfaceOffsets->offset;
    while ( *(v11 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v10;
      v11 += 2;
      if ( !v10 )
        goto LABEL_16;
    }
    v12 = (__int64)&v9->vtable[*(_DWORD *)v11 + 13];
  }
  else
  {
LABEL_16:
    v12 = sub_1C69E5C(v8, IClassBoardSquareModel_TypeInfo, 13);
  }
  if ( ((*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v12)(v8, *(_QWORD *)(v12 + 8)) & 1) != 0 )
  {
LABEL_19:
    v13 = Method_ClassBoardSquare_PlayClickedSe__;
    if ( (*((_BYTE *)Method_ClassBoardSquare_PlayClickedSe__ + 83) & 2) != 0 )
      v13 = (_QWORD *)sub_1C93AEC(Method_ClassBoardSquare_PlayClickedSe__);
    v14 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v13, v13[4]);
    OverwriteAssetSoundName__PlaySystemSe(v14, 0, 0, 0);
  }
}


void ClassBoardSquare__PlayEnableEffect(ClassBoardSquare_o *this, const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x0
  System_String_o *unlockEnableAnimationName; // x20
  System_Action_o *v5; // x0
  intptr_t *v6; // x8
  System_Action_o *v7; // x21
  const MethodInfo *v8; // x4

  if ( (byte_4D346E0 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_ClassBoardEffectPlayer_GetData_bool___);
    sub_1C93AD4(&Method_ClassBoardSquare__PlayEnableEffect_b__52_0__);
    sub_1C93AD4(&Method_ClassBoardSquare__PlayEnableEffect_b__52_1__);
    byte_4D346E0 = 1;
  }
  simpleAnimation = this->fields.simpleAnimation;
  if ( !simpleAnimation
    || (SimpleAnimation__Rewind(simpleAnimation, 0),
        (simpleAnimation = (SimpleAnimation_o *)this->fields.enableEffectPlayer) == 0) )
  {
    sub_1C93D2C(simpleAnimation, method);
  }
  if ( ClassBoardEffectPlayer__GetData_bool_(
         (ClassBoardEffectPlayer_o *)simpleAnimation,
         (const MethodInfo_3198108 *)Method_ClassBoardEffectPlayer_GetData_bool___) )
  {
    unlockEnableAnimationName = this->fields.unlockEnableAnimationName;
    v5 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    v6 = &Method_ClassBoardSquare__PlayEnableEffect_b__52_0__;
  }
  else
  {
    unlockEnableAnimationName = this->fields.enableAnimationName;
    v5 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    v6 = &Method_ClassBoardSquare__PlayEnableEffect_b__52_1__;
  }
  v7 = v5;
  System_Action___ctor(v5, (Il2CppObject *)this, *v6, 0);
  ClassBoardSquare__PlaySimpleAnimation(this, unlockEnableAnimationName, 0, v7, v8);
}


void ClassBoardSquare__PlayForceEndSimpleAnimation(
        ClassBoardSquare_o *this,
        System_String_o *name,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x0
  struct SimpleAnimation_o *v8; // x22
  System_String_o *v9; // x0
  SimpleAnimation_c *klass; // x8
  SimpleAnimation_o *v11; // x22
  __int64 v12; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v14; // x0
  const MethodInfo *v15; // x3
  System_Collections_IEnumerator_o *v16; // x1

  if ( (byte_4D346E2 & 1) == 0 )
  {
    sub_1C93AD4(&SimpleAnimation_State_TypeInfo);
    byte_4D346E2 = 1;
  }
  simpleAnimation = this->fields.simpleAnimation;
  if ( !simpleAnimation
    || (simpleAnimation = (SimpleAnimation_o *)SimpleAnimation__Play_67370764(simpleAnimation, name, 0),
        (v8 = this->fields.simpleAnimation) == 0)
    || (simpleAnimation = (SimpleAnimation_o *)v8->fields.m_Clip) == 0
    || (v9 = UnityEngine_Object__get_name((UnityEngine_Object_o *)simpleAnimation, 0),
        (simpleAnimation = (SimpleAnimation_o *)SimpleAnimation__get_Item(v8, v9, 0)) == 0) )
  {
    sub_1C93D2C(simpleAnimation, name);
  }
  klass = simpleAnimation->klass;
  v11 = simpleAnimation;
  v12 = *(unsigned __int16 *)&simpleAnimation->klass->_2.rank;
  if ( *(_WORD *)&simpleAnimation->klass->_2.rank )
  {
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v12;
      p_offset += 2;
      if ( !v12 )
        goto LABEL_11;
    }
    v14 = (__int64)(&klass->vtable._6_OnDisable + *(_DWORD *)p_offset);
  }
  else
  {
LABEL_11:
    v14 = sub_1C69E5C(simpleAnimation, SimpleAnimation_State_TypeInfo, 6);
  }
  (*(void (__fastcall **)(SimpleAnimation_o *, _QWORD, float))v14)(v11, *(_QWORD *)(v14 + 8), 1.0);
  v16 = ClassBoardSquare__WaitAnimationFinished(this, name, endCallback, v15);
  UnityEngine_MonoBehaviour__StartCoroutine_72105100((UnityEngine_MonoBehaviour_o *)this, v16, 0);
}


void ClassBoardSquare__PlayGrandToClassTransition(ClassBoardSquare_o *this, bool isQuick, const MethodInfo *method)
{
  System_String_o *animNameGrandReturnTransition; // x21
  System_Action_o *v6; // x22
  const MethodInfo *v7; // x4

  if ( (byte_4D346DB & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_ClassBoardSquare__PlayGrandToClassTransition_b__41_0__);
    byte_4D346DB = 1;
  }
  animNameGrandReturnTransition = this->fields.animNameGrandReturnTransition;
  v6 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_ClassBoardSquare__PlayGrandToClassTransition_b__41_0__, 0);
  ClassBoardSquare__PlaySimpleAnimation(this, animNameGrandReturnTransition, isQuick, v6, v7);
}


void ClassBoardSquare__PlayReleaseEffect(ClassBoardSquare_o *this, const MethodInfo *method)
{
  System_String_o *releaseAnimationName; // x20
  System_Action_o *v4; // x21
  const MethodInfo *v5; // x4

  if ( (byte_4D346DF & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_ClassBoardSquare__PlayReleaseEffect_b__51_0__);
    byte_4D346DF = 1;
  }
  releaseAnimationName = this->fields.releaseAnimationName;
  v4 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_ClassBoardSquare__PlayReleaseEffect_b__51_0__, 0);
  ClassBoardSquare__PlaySimpleAnimation(this, releaseAnimationName, 0, v4, v5);
}


void ClassBoardSquare__PlaySimpleAnimation(
        ClassBoardSquare_o *this,
        System_String_o *name,
        bool isQuick,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x0
  const MethodInfo *v9; // x3
  System_Collections_IEnumerator_o *v10; // x1

  if ( isQuick )
  {
    ClassBoardSquare__PlayForceEndSimpleAnimation(this, name, endCallback, (const MethodInfo *)endCallback);
  }
  else
  {
    simpleAnimation = this->fields.simpleAnimation;
    if ( !simpleAnimation )
      sub_1C93D2C(0, name);
    SimpleAnimation__Play_67370764(simpleAnimation, name, 0);
    v10 = ClassBoardSquare__WaitAnimationFinished(this, name, endCallback, v9);
    UnityEngine_MonoBehaviour__StartCoroutine_72105100((UnityEngine_MonoBehaviour_o *)this, v10, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void ClassBoardSquare__PlayTransition(ClassBoardSquare_o *this, bool isQuick, const MethodInfo *method)
{
  ClassBoardSquare_o *v4; // x20
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x21
  IClassBoardSquareModel_c *klass; // x8
  __int64 v7; // x9
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 v9; // x0
  char v10; // w0
  const MethodInfo *v11; // x4
  __int64 v12; // x8

  v4 = this;
  if ( (byte_4D346DA & 1) == 0 )
  {
    this = (ClassBoardSquare_o *)sub_1C93AD4(&IClassBoardSquareModel_TypeInfo);
    byte_4D346DA = 1;
  }
  SquareModel_k__BackingField = v4->fields._SquareModel_k__BackingField;
  if ( !SquareModel_k__BackingField )
    sub_1C93D2C(this, isQuick);
  klass = SquareModel_k__BackingField->klass;
  v7 = *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.rank;
  if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.rank )
  {
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v7;
      p_offset += 2;
      if ( !v7 )
        goto LABEL_8;
    }
    v9 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 15];
  }
  else
  {
LABEL_8:
    v9 = sub_1C69E5C(v4->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 15);
  }
  v10 = (*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD, _QWORD))v9)(
          SquareModel_k__BackingField,
          0,
          *(_QWORD *)(v9 + 8));
  v12 = 128;
  if ( (v10 & 2) == 0 )
    v12 = 120;
  ClassBoardSquare__PlaySimpleAnimation(v4, *(System_String_o **)((char *)&v4->klass + v12), isQuick, 0, v11);
}


void ClassBoardSquare__ReleaseAfterUpdate(ClassBoardSquare_o *this, const MethodInfo *method)
{
  this->fields.isUpdateDraw = 1;
}


void ClassBoardSquare__SetActiveArrayObject(
        ClassBoardSquare_o *this,
        UnityEngine_GameObject_array *objects,
        bool isActive,
        const MethodInfo *method)
{
  __int64 v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  System_Action_object__o *v9; // x20

  if ( (byte_4D346DD & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_GameObject__TypeInfo);
    sub_1C93AD4(&Method_BasicHelper_ForEach_GameObject___);
    sub_1C93AD4(&Method_ClassBoardSquare___c__DisplayClass49_0__SetActiveArrayObject_b__0__);
    sub_1C93AD4(&ClassBoardSquare___c__DisplayClass49_0_TypeInfo);
    byte_4D346DD = 1;
  }
  v6 = sub_1C93D20(ClassBoardSquare___c__DisplayClass49_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  if ( !v6 )
    sub_1C93D2C(v7, v8);
  *(_BYTE *)(v6 + 16) = isActive;
  v9 = (System_Action_object__o *)sub_1C93D20(System_Action_GameObject__TypeInfo);
  System_Action_object____ctor(
    v9,
    (Il2CppObject *)v6,
    Method_ClassBoardSquare___c__DisplayClass49_0__SetActiveArrayObject_b__0__,
    0);
  BasicHelper__ForEach_object_(
    (System_Collections_Generic_IEnumerable_T__o *)objects,
    (System_Action_T__o *)v9,
    (const MethodInfo_3190798 *)Method_BasicHelper_ForEach_GameObject___);
}


void ClassBoardSquare__SetActiveObject(
        ClassBoardSquare_o *this,
        UnityEngine_GameObject_o *obj,
        bool isActive,
        const MethodInfo *method)
{
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_4D346DE & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D346DE = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)obj, 0, 0);
  if ( v6 )
  {
    if ( !obj )
      sub_1C93D2C(v6, v7);
    UnityEngine_GameObject__SetActive(obj, isActive, 0);
  }
}


void ClassBoardSquare__SetSelectedEffectActive(ClassBoardSquare_o *this, bool isActive, const MethodInfo *method)
{
  UnityEngine_Object_o *selectedEffect; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_4D346E4 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D346E4 = 1;
  }
  selectedEffect = (UnityEngine_Object_o *)this->fields.selectedEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(selectedEffect, 0, 0) )
  {
    v7 = this->fields.selectedEffect;
    if ( !v7 )
      sub_1C93D2C(0, v6);
    UnityEngine_GameObject__SetActive(v7, isActive, 0);
  }
}


void ClassBoardSquare__SetUpdateDraw(ClassBoardSquare_o *this, const MethodInfo *method)
{
  this->fields.isUpdateDraw = 1;
}


void ClassBoardSquare__Setup(ClassBoardSquare_o *this, IClassBoardSquareModel_o *squareModel, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  UnityEngine_Object_o *transform; // x0
  __int64 v11; // x1
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x22
  IClassBoardSquareModel_c *klass; // x8
  UnityEngine_Transform_o *v14; // x21
  __int64 v15; // x9
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 v17; // x0
  UnityEngine_Object_o *gameObject; // x21
  UnityEngine_Object_o *v21; // x22
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  int32_t v34; // w1
  IClassBoardSquareModel_c *v35; // x8
  __int64 v36; // x9
  int32_t *v37; // x10
  __int64 v38; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7
  int32_t v51; // w1
  IClassBoardSquareModel_c *v52; // x8
  __int64 v53; // x9
  int32_t *v54; // x10
  __int64 v55; // x0
  int32_t v56; // w2
  int32_t v57; // w3
  System_String_o *v58; // x4
  int32_t v59; // w5
  int64_t v60; // x6
  System_String_o *v61; // x7
  System_String_o *v62; // x0
  System_String_o *name; // x20
  ClassBoardEffectPlayer_o *v64; // x21
  int32_t v65; // w2
  int32_t v66; // w3
  System_String_o *v67; // x4
  int32_t v68; // w5
  int64_t v69; // x6
  System_String_o *v70; // x7
  struct ClassBoardEffectPlayer_o *releaseEffectPlayer; // x20
  System_Action_o *v72; // x21
  int32_t v73; // w2
  int32_t v74; // w3
  System_String_o *v75; // x4
  int32_t v76; // w5
  int64_t v77; // x6
  System_String_o *v78; // x7
  System_String_o *v79; // x20
  ClassBoardEffectPlayer_o *v80; // x21
  int32_t v81; // w2
  int32_t v82; // w3
  System_String_o *v83; // x4
  int32_t v84; // w5
  int64_t v85; // x6
  System_String_o *v86; // x7
  struct ClassBoardEffectPlayer_o *enableEffectPlayer; // x20
  System_Action_o *v88; // x21
  int32_t v89; // w2
  int32_t v90; // w3
  System_String_o *v91; // x4
  int32_t v92; // w5
  int64_t v93; // x6
  System_String_o *v94; // x7
  int v95; // [xsp+Ch] [xbp-44h] BYREF
  UnityEngine_Vector3_o v96; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D346D8 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&ClassBoardEffectPlayer_TypeInfo);
    sub_1C93AD4(&IClassBoardSquareModel_TypeInfo);
    sub_1C93AD4(&string___TypeInfo);
    sub_1C93AD4(&StringLiteral_16207/*"_"*/);
    byte_4D346D8 = 1;
  }
  v95 = 0;
  this->fields._SquareModel_k__BackingField = squareModel;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._SquareModel_k__BackingField,
    (int32_t)squareModel,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  transform = (UnityEngine_Object_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  SquareModel_k__BackingField = this->fields._SquareModel_k__BackingField;
  if ( !SquareModel_k__BackingField )
    goto LABEL_36;
  klass = SquareModel_k__BackingField->klass;
  v14 = (UnityEngine_Transform_o *)transform;
  v15 = *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.rank;
  if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.rank )
  {
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v15;
      p_offset += 2;
      if ( !v15 )
        goto LABEL_8;
    }
    v17 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 3];
  }
  else
  {
LABEL_8:
    v17 = sub_1C69E5C(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 3);
  }
  transform = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v17)(
                                        SquareModel_k__BackingField,
                                        *(_QWORD *)(v17 + 8));
  if ( !v14 )
    goto LABEL_36;
  UnityEngine_Transform__set_localPosition(v14, v96, 0);
  ((void (__fastcall *)(ClassBoardSquare_o *, _QWORD, const MethodInfo *))this->klass->vtable._9_UpdateDraw.methodPtr)(
    this,
    0,
    this->klass->vtable._9_UpdateDraw.method);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  transform = (UnityEngine_Object_o *)sub_1C93B7C(string___TypeInfo, 5);
  if ( !gameObject )
    goto LABEL_36;
  v21 = transform;
  transform = (UnityEngine_Object_o *)UnityEngine_Object__get_name(gameObject, 0);
  if ( !v21 )
    goto LABEL_36;
  if ( !LODWORD(v21[1].klass) )
    goto LABEL_37;
  v21[1].monitor = transform;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v21[1].monitor, (int32_t)transform, v22, v23, v24, v25, v26, v27);
  if ( LODWORD(v21[1].klass) <= 1 )
    goto LABEL_37;
  v34 = StringLiteral_16207/*"_"*/;
  v21[1].fields.m_CachedPtr = StringLiteral_16207/*"_"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v21[1].fields, v34, v28, v29, v30, v31, v32, v33);
  if ( !squareModel )
    goto LABEL_36;
  v35 = squareModel->klass;
  v36 = *(unsigned __int16 *)&squareModel->klass->_2.rank;
  if ( *(_WORD *)&squareModel->klass->_2.rank )
  {
    v37 = &v35->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v37 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v36;
      v37 += 4;
      if ( !v36 )
        goto LABEL_20;
    }
    v38 = (__int64)&v35->vtable[*v37];
  }
  else
  {
LABEL_20:
    v38 = sub_1C69E5C(squareModel, IClassBoardSquareModel_TypeInfo, 0);
  }
  v95 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v38)(squareModel, *(_QWORD *)(v38 + 8));
  transform = (UnityEngine_Object_o *)System_Int32__ToString((int32_t)&v95, 0);
  if ( LODWORD(v21[1].klass) <= 2 )
    goto LABEL_37;
  v21[2].klass = (UnityEngine_Object_c *)transform;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v21[2], (int32_t)transform, v39, v40, v41, v42, v43, v44);
  if ( LODWORD(v21[1].klass) <= 3 )
    goto LABEL_37;
  v51 = StringLiteral_16207/*"_"*/;
  v21[2].monitor = (void *)StringLiteral_16207/*"_"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v21[2].monitor, v51, v45, v46, v47, v48, v49, v50);
  v52 = squareModel->klass;
  v53 = *(unsigned __int16 *)&squareModel->klass->_2.rank;
  if ( *(_WORD *)&squareModel->klass->_2.rank )
  {
    v54 = &v52->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v54 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v53;
      v54 += 4;
      if ( !v53 )
        goto LABEL_28;
    }
    v55 = (__int64)&v52->vtable[*v54 + 1];
  }
  else
  {
LABEL_28:
    v55 = sub_1C69E5C(squareModel, IClassBoardSquareModel_TypeInfo, 1);
  }
  v95 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v55)(squareModel, *(_QWORD *)(v55 + 8));
  transform = (UnityEngine_Object_o *)System_Int32__ToString((int32_t)&v95, 0);
  if ( LODWORD(v21[1].klass) <= 4 )
LABEL_37:
    sub_1C93D34(transform);
  v21[2].fields.m_CachedPtr = (intptr_t)transform;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v21[2].fields, (int32_t)transform, v56, v57, v58, v59, v60, v61);
  v62 = System_String__Concat_64466256((System_String_array *)v21, 0);
  UnityEngine_Object__set_name(gameObject, v62, 0);
  transform = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_36;
  name = UnityEngine_Object__get_name(transform, 0);
  v64 = (ClassBoardEffectPlayer_o *)sub_1C93D20(ClassBoardEffectPlayer_TypeInfo);
  ClassBoardEffectPlayer___ctor_48851620(v64, name, 0);
  this->fields.releaseEffectPlayer = v64;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.releaseEffectPlayer,
    (int32_t)v64,
    v65,
    v66,
    v67,
    v68,
    v69,
    v70);
  releaseEffectPlayer = this->fields.releaseEffectPlayer;
  v72 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v72, (Il2CppObject *)this, (intptr_t)this->klass->vtable._10_PlayReleaseEffect.method, 0);
  if ( !releaseEffectPlayer )
    goto LABEL_36;
  releaseEffectPlayer->fields.playCallback = v72;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&releaseEffectPlayer->fields.playCallback,
    (int32_t)v72,
    v73,
    v74,
    v75,
    v76,
    v77,
    v78);
  transform = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_36;
  v79 = UnityEngine_Object__get_name(transform, 0);
  v80 = (ClassBoardEffectPlayer_o *)sub_1C93D20(ClassBoardEffectPlayer_TypeInfo);
  ClassBoardEffectPlayer___ctor_48851620(v80, v79, 0);
  this->fields.enableEffectPlayer = v80;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.enableEffectPlayer,
    (int32_t)v80,
    v81,
    v82,
    v83,
    v84,
    v85,
    v86);
  enableEffectPlayer = this->fields.enableEffectPlayer;
  v88 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v88, (Il2CppObject *)this, (intptr_t)this->klass->vtable._11_PlayEnableEffect.method, 0);
  if ( !enableEffectPlayer )
LABEL_36:
    sub_1C93D2C(transform, v11);
  enableEffectPlayer->fields.playCallback = v88;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&enableEffectPlayer->fields.playCallback,
    (int32_t)v88,
    v89,
    v90,
    v91,
    v92,
    v93,
    v94);
  ((void (__fastcall *)(ClassBoardSquare_o *, const MethodInfo *))this->klass->vtable._6_SetupIcon.methodPtr)(
    this,
    this->klass->vtable._6_SetupIcon.method);
}


void ClassBoardSquare__SetupIcon(ClassBoardSquare_o *this, const MethodInfo *method)
{
  ClassBoardSquare_o *v2; // x19
  struct UISprite_array *iconSpritesNormal; // x24
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v5; // x25
  UISprite_o *v6; // x20
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x22
  IClassBoardSquareModel_c *klass; // x8
  AtlasManagerUnit_o *v9; // x21
  __int64 v10; // x9
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 v12; // x0
  struct IClassBoardSquareModel_o *v13; // x23
  IClassBoardSquareModel_c *v14; // x8
  int32_t v15; // w22
  __int64 v16; // x9
  IClassBoardSquareModel_c **v17; // x10
  __int64 v18; // x0
  const MethodInfo *v19; // x2
  int32_t v20; // w23

  v2 = this;
  if ( (byte_4D346D9 & 1) == 0 )
  {
    sub_1C93AD4(&ClassBoardUtility_TypeInfo);
    this = (ClassBoardSquare_o *)sub_1C93AD4(&IClassBoardSquareModel_TypeInfo);
    byte_4D346D9 = 1;
  }
  iconSpritesNormal = v2->fields.iconSpritesNormal;
  if ( !iconSpritesNormal )
    goto LABEL_26;
  max_length = iconSpritesNormal->max_length;
  if ( (int)max_length >= 1 )
  {
    v5 = 0;
    while ( 1 )
    {
      if ( v5 >= (unsigned int)max_length )
        sub_1C93D34(this);
      v6 = iconSpritesNormal->m_Items[v5];
      this = (ClassBoardSquare_o *)ClassBoardGlobalObject__get_IconAtlasManagerUnit((const MethodInfo *)this);
      SquareModel_k__BackingField = v2->fields._SquareModel_k__BackingField;
      if ( !SquareModel_k__BackingField )
        break;
      klass = SquareModel_k__BackingField->klass;
      v9 = (AtlasManagerUnit_o *)this;
      v10 = *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.rank;
      if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.rank )
      {
        p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v10;
          p_offset += 2;
          if ( !v10 )
            goto LABEL_12;
        }
        v12 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 2];
      }
      else
      {
LABEL_12:
        v12 = sub_1C69E5C(v2->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 2);
      }
      this = (ClassBoardSquare_o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v12)(
                                     SquareModel_k__BackingField,
                                     *(_QWORD *)(v12 + 8));
      v13 = v2->fields._SquareModel_k__BackingField;
      if ( !v13 )
        break;
      v14 = v13->klass;
      v15 = (int)this;
      v16 = *(unsigned __int16 *)&v13->klass->_2.rank;
      if ( *(_WORD *)&v13->klass->_2.rank )
      {
        v17 = (IClassBoardSquareModel_c **)&v14->_1.interfaceOffsets->offset;
        while ( *(v17 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v16;
          v17 += 2;
          if ( !v16 )
            goto LABEL_19;
        }
        v18 = (__int64)&v14->vtable[*(_DWORD *)v17 + 7];
      }
      else
      {
LABEL_19:
        v18 = sub_1C69E5C(v2->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 7);
      }
      v20 = (*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v18)(v13, *(_QWORD *)(v18 + 8));
      if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
      this = (ClassBoardSquare_o *)ClassBoardUtility__GetClassBoardSkillIconName(v15, v20, v19);
      if ( !v9 )
        break;
      this = (ClassBoardSquare_o *)AtlasManagerUnit__SetUI(v9, v6, (System_String_o *)this, 0);
      LODWORD(max_length) = iconSpritesNormal->max_length;
      if ( (__int64)++v5 >= (int)max_length )
        return;
    }
LABEL_26:
    sub_1C93D2C(this, method);
  }
}


void ClassBoardSquare__UpdateDraw(
        ClassBoardSquare_o *this,
        System_Nullable_AcquireFlag__o handoverFlag,
        const MethodInfo *method)
{
  bool hasValue; // w20
  ClassBoardSquare_o *v4; // x19
  int32_t Value; // w0
  const MethodInfo *v6; // x1
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  IClassBoardSquareModel_c *klass; // x8
  __int64 v9; // x9
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 v11; // x0
  System_Nullable_AcquireFlag__o v12; // [xsp+8h] [xbp-28h] BYREF

  hasValue = handoverFlag.fields.hasValue;
  v4 = this;
  v12 = handoverFlag;
  if ( (byte_4D346DC & 1) == 0 )
  {
    sub_1C93AD4(&IClassBoardSquareModel_TypeInfo);
    sub_1C93AD4(&Method_System_Nullable_AcquireFlag__get_HasValue__);
    this = (ClassBoardSquare_o *)sub_1C93AD4(&Method_System_Nullable_AcquireFlag__get_Value__);
    byte_4D346DC = 1;
  }
  if ( !hasValue )
  {
    SquareModel_k__BackingField = v4->fields._SquareModel_k__BackingField;
    if ( !SquareModel_k__BackingField )
      ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_1C93D2C)(this, handoverFlag);
    klass = SquareModel_k__BackingField->klass;
    v9 = *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.rank;
    if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.rank )
    {
      p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
      {
        --v9;
        p_offset += 2;
        if ( !v9 )
          goto LABEL_14;
      }
      v11 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 15];
    }
    else
    {
LABEL_14:
      v11 = sub_1C69E5C(v4->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 15);
    }
    Value = (*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD, _QWORD))v11)(
              SquareModel_k__BackingField,
              0,
              *(_QWORD *)(v11 + 8));
    if ( Value )
      goto LABEL_5;
LABEL_19:
    ClassBoardSquare__DrawAvailable(v4, v6);
    return;
  }
  Value = System_Nullable_Int32Enum___get_Value(
            (System_Nullable_Int32Enum__o)&v12,
            (const MethodInfo_399FBE0 *)Method_System_Nullable_AcquireFlag__get_Value__);
  if ( !Value )
    goto LABEL_19;
LABEL_5:
  if ( (Value & 1) != 0 )
  {
    ClassBoardSquare__DrawAcquired(v4, v6);
  }
  else if ( (Value & 2) != 0 )
  {
    ClassBoardSquare__DrawNotConnected(v4, v6);
  }
  else if ( (Value & 8) != 0 )
  {
    ClassBoardSquare__DrawUnacquired(v4, v6);
  }
}


void ClassBoardSquare__UpdateDrawFromAnimationEvent(ClassBoardSquare_o *this, const MethodInfo *method)
{
  this->fields.isUpdateDraw = 1;
}


System_Collections_IEnumerator_o *ClassBoardSquare__WaitAnimationFinished(
        ClassBoardSquare_o *this,
        System_String_o *name,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  __int64 v7; // x22
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7

  if ( (byte_4D346E3 & 1) == 0 )
  {
    sub_1C93AD4(&ClassBoardSquare__WaitAnimationFinished_d__56_TypeInfo);
    byte_4D346E3 = 1;
  }
  v7 = sub_1C93D20(ClassBoardSquare__WaitAnimationFinished_d__56_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 32), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v7 + 40) = name;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 40), (int32_t)name, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v7 + 48) = endCallback;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 48), (int32_t)endCallback, v20, v21, v22, v23, v24, v25);
  return (System_Collections_IEnumerator_o *)v7;
}


void ClassBoardSquare___PlayEnableEffect_b__52_0(ClassBoardSquare_o *this, const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x0

  simpleAnimation = this->fields.simpleAnimation;
  if ( !simpleAnimation
    || (SimpleAnimation__Stop(simpleAnimation, 0),
        simpleAnimation = (SimpleAnimation_o *)this->fields.enableEffectPlayer,
        this->fields.isUpdateDraw = 1,
        !simpleAnimation) )
  {
    sub_1C93D2C(simpleAnimation, method);
  }
  ClassBoardEffectPlayer__End((ClassBoardEffectPlayer_o *)simpleAnimation, 0);
}


void ClassBoardSquare___PlayEnableEffect_b__52_1(ClassBoardSquare_o *this, const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x0

  simpleAnimation = this->fields.simpleAnimation;
  if ( !simpleAnimation
    || (SimpleAnimation__Stop(simpleAnimation, 0),
        simpleAnimation = (SimpleAnimation_o *)this->fields.enableEffectPlayer,
        this->fields.isUpdateDraw = 1,
        !simpleAnimation) )
  {
    sub_1C93D2C(simpleAnimation, method);
  }
  ClassBoardEffectPlayer__End((ClassBoardEffectPlayer_o *)simpleAnimation, 0);
}


void ClassBoardSquare___PlayGrandToClassTransition_b__41_0(ClassBoardSquare_o *this, const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x0

  simpleAnimation = this->fields.simpleAnimation;
  if ( !simpleAnimation )
    sub_1C93D2C(0, method);
  SimpleAnimation__Stop(simpleAnimation, 0);
}


void ClassBoardSquare___PlayReleaseEffect_b__51_0(ClassBoardSquare_o *this, const MethodInfo *method)
{
  ClassBoardEffectPlayer_o *releaseEffectPlayer; // x0

  releaseEffectPlayer = this->fields.releaseEffectPlayer;
  this->fields.isUpdateDraw = 1;
  if ( !releaseEffectPlayer )
    sub_1C93D2C(0, method);
  ClassBoardEffectPlayer__End(releaseEffectPlayer, 0);
}


void ClassBoardSquare__add_clickedEvent(
        ClassBoardSquare_o *this,
        System_Action_ClassBoardSquare__o *value,
        const MethodInfo *method)
{
  struct System_Action_ClassBoardSquare__o **p_clickedEvent; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_ClassBoardSquare__o *clickedEvent; // t1
  System_Delegate_o *v8; // x0
  System_Delegate_o *v9; // x22
  __int64 v10; // x1
  __int64 v11; // x0
  bool v12; // zf
  ClassBoardSquare_o *v13; // x0
  System_Action_ClassBoardSquare__o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_4D346D6 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_ClassBoardSquare__TypeInfo);
    byte_4D346D6 = 1;
  }
  clickedEvent = this->fields.clickedEvent;
  p_clickedEvent = &this->fields.clickedEvent;
  v6 = (System_Delegate_o *)clickedEvent;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( !v8 )
    {
      v10 = 0;
      goto LABEL_8;
    }
    v9 = v8;
    v10 = sub_1C93C10(v8, System_Action_ClassBoardSquare__TypeInfo);
    if ( !v10 )
      break;
LABEL_8:
    v11 = sub_1CEF8A8(p_clickedEvent, v10, v6);
    v12 = v6 == (System_Delegate_o *)v11;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_1C940C8(v9);
  ClassBoardSquare__remove_clickedEvent(v13, v14, v15);
}


ClassBoardEffectPlayer_o *ClassBoardSquare__get_EnableEffectPlayer(ClassBoardSquare_o *this, const MethodInfo *method)
{
  return this->fields.enableEffectPlayer;
}


bool ClassBoardSquare__get_IsProcessingClick(ClassBoardSquare_o *this, const MethodInfo *method)
{
  return this->fields._IsProcessingClick_k__BackingField;
}


ClassBoardEffectPlayer_o *ClassBoardSquare__get_ReleaseEffectPlayer(ClassBoardSquare_o *this, const MethodInfo *method)
{
  return this->fields.releaseEffectPlayer;
}


IClassBoardSquareModel_o *ClassBoardSquare__get_SquareModel(ClassBoardSquare_o *this, const MethodInfo *method)
{
  return this->fields._SquareModel_k__BackingField;
}


void ClassBoardSquare__remove_clickedEvent(
        ClassBoardSquare_o *this,
        System_Action_ClassBoardSquare__o *value,
        const MethodInfo *method)
{
  struct System_Action_ClassBoardSquare__o **p_clickedEvent; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_ClassBoardSquare__o *clickedEvent; // t1
  System_Delegate_o *v8; // x0
  System_Delegate_o *v9; // x22
  __int64 v10; // x1
  __int64 v11; // x0
  bool v12; // zf
  ClassBoardSquare_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_4D346D7 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_ClassBoardSquare__TypeInfo);
    byte_4D346D7 = 1;
  }
  clickedEvent = this->fields.clickedEvent;
  p_clickedEvent = &this->fields.clickedEvent;
  v6 = (System_Delegate_o *)clickedEvent;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( !v8 )
    {
      v10 = 0;
      goto LABEL_8;
    }
    v9 = v8;
    v10 = sub_1C93C10(v8, System_Action_ClassBoardSquare__TypeInfo);
    if ( !v10 )
      break;
LABEL_8:
    v11 = sub_1CEF8A8(p_clickedEvent, v10, v6);
    v12 = v6 == (System_Delegate_o *)v11;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_1C940C8(v9);
  ClassBoardSquare__get_ReleaseEffectPlayer(v13, v14);
}


void ClassBoardSquare__set_IsProcessingClick(ClassBoardSquare_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsProcessingClick_k__BackingField = value;
}


void ClassBoardSquare__set_SquareModel(
        ClassBoardSquare_o *this,
        IClassBoardSquareModel_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._SquareModel_k__BackingField = value;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._SquareModel_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ClassBoardSquare__WaitAnimationFinished_d__56___ctor(
        ClassBoardSquare__WaitAnimationFinished_d__56_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool ClassBoardSquare__WaitAnimationFinished_d__56__MoveNext(
        ClassBoardSquare__WaitAnimationFinished_d__56_o *this,
        const MethodInfo *method)
{
  ClassBoardSquare__WaitAnimationFinished_d__56_o *v2; // x19
  int32_t _1__state; // w8
  struct ClassBoardSquare_o *_4__this; // x8
  SimpleAnimation_State_o *State; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  struct SimpleAnimation_State_o *state_5__2; // x20
  SimpleAnimation_State_c *klass; // x8
  __int64 v14; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v16; // x0
  struct SimpleAnimation_State_o *v17; // x20
  SimpleAnimation_State_c *v18; // x8
  __int64 v19; // x9
  SimpleAnimation_State_c **v20; // x10
  __int64 v21; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  GrandQuestFolderBoardItem_o *p__2__current; // x19

  v2 = this;
  if ( (byte_4D346E6 & 1) == 0 )
  {
    this = (ClassBoardSquare__WaitAnimationFinished_d__56_o *)sub_1C93AD4(&SimpleAnimation_State_TypeInfo);
    byte_4D346E6 = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    goto LABEL_9;
  }
  if ( !_1__state )
  {
    _4__this = v2->fields.__4__this;
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_28;
    this = (ClassBoardSquare__WaitAnimationFinished_d__56_o *)_4__this->fields.simpleAnimation;
    if ( !this )
      goto LABEL_28;
    State = SimpleAnimation__GetState((SimpleAnimation_o *)this, v2->fields.name, 0);
    v2->fields._state_5__2 = State;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v2->fields._state_5__2, (int32_t)State, v6, v7, v8, v9, v10, v11);
LABEL_9:
    state_5__2 = v2->fields._state_5__2;
    if ( !state_5__2 )
      goto LABEL_26;
    klass = state_5__2->klass;
    v14 = *(unsigned __int16 *)&state_5__2->klass->_2.rank;
    if ( *(_WORD *)&state_5__2->klass->_2.rank )
    {
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v14;
        p_offset += 2;
        if ( !v14 )
          goto LABEL_14;
      }
      v16 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 13];
    }
    else
    {
LABEL_14:
      v16 = sub_1C69E5C(v2->fields._state_5__2, SimpleAnimation_State_TypeInfo, 13);
    }
    if ( (*(float (__fastcall **)(struct SimpleAnimation_State_o *, _QWORD))v16)(state_5__2, *(_QWORD *)(v16 + 8)) <= 0.0 )
    {
LABEL_26:
      ActionExtensions__Call(v2->fields.endCallback, 0);
      return 0;
    }
    v17 = v2->fields._state_5__2;
    if ( v17 )
    {
      v18 = v17->klass;
      v19 = *(unsigned __int16 *)&v17->klass->_2.rank;
      if ( *(_WORD *)&v17->klass->_2.rank )
      {
        v20 = (SimpleAnimation_State_c **)&v18->_1.interfaceOffsets->offset;
        while ( *(v20 - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v19;
          v20 += 2;
          if ( !v19 )
            goto LABEL_22;
        }
        v21 = (__int64)&v18->vtable[*(_DWORD *)v20 + 5];
      }
      else
      {
LABEL_22:
        v21 = sub_1C69E5C(v2->fields._state_5__2, SimpleAnimation_State_TypeInfo, 5);
      }
      if ( (*(float (__fastcall **)(struct SimpleAnimation_State_o *, _QWORD))v21)(v17, *(_QWORD *)(v21 + 8)) < 1.0 )
      {
        v2->fields.__2__current = 0;
        p__2__current = (GrandQuestFolderBoardItem_o *)&v2->fields.__2__current;
        sub_1C93A78(p__2__current, 0, v22, v23, v24, v25, v26, v27);
        LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 1;
        return 1;
      }
      goto LABEL_26;
    }
LABEL_28:
    sub_1C93D2C(this, method);
  }
  return 0;
}


Il2CppObject *ClassBoardSquare__WaitAnimationFinished_d__56__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ClassBoardSquare__WaitAnimationFinished_d__56_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn ClassBoardSquare__WaitAnimationFinished_d__56__System_Collections_IEnumerator_Reset(
        ClassBoardSquare__WaitAnimationFinished_d__56_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C93AE8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C93D20(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C93AE8(&Method_ClassBoardSquare__WaitAnimationFinished_d__56_System_Collections_IEnumerator_Reset__);
  sub_1C93BFC(v3, v4);
}


Il2CppObject *ClassBoardSquare__WaitAnimationFinished_d__56__System_Collections_IEnumerator_get_Current(
        ClassBoardSquare__WaitAnimationFinished_d__56_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void ClassBoardSquare__WaitAnimationFinished_d__56__System_IDisposable_Dispose(
        ClassBoardSquare__WaitAnimationFinished_d__56_o *this,
        const MethodInfo *method)
{
  ;
}


void ClassBoardSquare___c__DisplayClass49_0___ctor(
        ClassBoardSquare___c__DisplayClass49_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ClassBoardSquare___c__DisplayClass49_0___SetActiveArrayObject_b__0(
        ClassBoardSquare___c__DisplayClass49_0_o *this,
        UnityEngine_GameObject_o *x,
        const MethodInfo *method)
{
  ClassBoardSquare___c__DisplayClass49_0_o *v3; // x19

  if ( !x
    || (v3 = this, (this = (ClassBoardSquare___c__DisplayClass49_0_o *)UnityEngine_GameObject__get_gameObject(x, 0)) == 0) )
  {
    sub_1C93D2C(this, x);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v3->fields.isActive, 0);
}