void ClassBoardSquare___ctor(ClassBoardSquare_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w1
  int32_t v6; // w1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w1
  int32_t v19; // w2
  const MethodInfo *v20; // x3

  if ( (byte_4C5A970 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_3228/*"BrightTurnTransition"*/);
    sub_1C3E564(&StringLiteral_3225/*"BrightTurn"*/);
    sub_1C3E564(&StringLiteral_7155/*"GrandReturnTransition"*/);
    sub_1C3E564(&StringLiteral_3230/*"BrightTurnUnLock"*/);
    sub_1C3E564(&StringLiteral_13027/*"SquareEnable"*/);
    sub_1C3E564(&StringLiteral_3178/*"BlackOutTransition"*/);
    byte_4C5A970 = 1;
  }
  v5 = StringLiteral_3225/*"BrightTurn"*/;
  this->fields.enableAnimationName = (struct System_String_o *)StringLiteral_3225/*"BrightTurn"*/;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.enableAnimationName, v5, v2, v3);
  v6 = StringLiteral_13027/*"SquareEnable"*/;
  this->fields.releaseAnimationName = (struct System_String_o *)StringLiteral_13027/*"SquareEnable"*/;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.releaseAnimationName, v6, v7, v8);
  v9 = StringLiteral_3228/*"BrightTurnTransition"*/;
  this->fields.brightTurnTransitionAnimationName = (struct System_String_o *)StringLiteral_3228/*"BrightTurnTransition"*/;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.brightTurnTransitionAnimationName, v9, v10, v11);
  v12 = StringLiteral_3178/*"BlackOutTransition"*/;
  this->fields.blackOutTransitionAnimationName = (struct System_String_o *)StringLiteral_3178/*"BlackOutTransition"*/;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.blackOutTransitionAnimationName, v12, v13, v14);
  v15 = StringLiteral_3230/*"BrightTurnUnLock"*/;
  this->fields.unlockEnableAnimationName = (struct System_String_o *)StringLiteral_3230/*"BrightTurnUnLock"*/;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.unlockEnableAnimationName, v15, v16, v17);
  v18 = StringLiteral_7155/*"GrandReturnTransition"*/;
  this->fields.animNameGrandReturnTransition = (struct System_String_o *)StringLiteral_7155/*"GrandReturnTransition"*/;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.animNameGrandReturnTransition, v18, v19, v20);
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
  if ( (byte_4C5A96C & 1) == 0 )
  {
    sub_1C3E564(&Method_ClassBoardSquare_PlayClickedSe__);
    this = (ClassBoardSquare_o *)sub_1C3E564(&IClassBoardSquareModel_TypeInfo);
    byte_4C5A96C = 1;
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
    v7 = sub_1C8ED7C(v2->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 12);
  }
  this = (ClassBoardSquare_o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v7)(
                                 SquareModel_k__BackingField,
                                 *(_QWORD *)(v7 + 8));
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_19;
  v8 = v2->fields._SquareModel_k__BackingField;
  if ( !v8 )
LABEL_23:
    sub_1C3E7C0(this, method);
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
    v12 = sub_1C8ED7C(v8, IClassBoardSquareModel_TypeInfo, 13);
  }
  if ( ((*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v12)(v8, *(_QWORD *)(v12 + 8)) & 1) != 0 )
  {
LABEL_19:
    v13 = Method_ClassBoardSquare_PlayClickedSe__;
    if ( (*((_BYTE *)Method_ClassBoardSquare_PlayClickedSe__ + 83) & 2) != 0 )
      v13 = (_QWORD *)sub_1C3E57C(Method_ClassBoardSquare_PlayClickedSe__);
    v14 = (System_Reflection_MethodBase_o *)sub_1C3E548(v13, v13[4]);
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

  if ( (byte_4C5A96B & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_ClassBoardEffectPlayer_GetData_bool___);
    sub_1C3E564(&Method_ClassBoardSquare__PlayEnableEffect_b__48_0__);
    sub_1C3E564(&Method_ClassBoardSquare__PlayEnableEffect_b__48_1__);
    byte_4C5A96B = 1;
  }
  simpleAnimation = this->fields.simpleAnimation;
  if ( !simpleAnimation
    || (SimpleAnimation__Rewind(simpleAnimation, 0),
        (simpleAnimation = (SimpleAnimation_o *)this->fields.enableEffectPlayer) == 0) )
  {
    sub_1C3E7C0(simpleAnimation, method);
  }
  if ( ClassBoardEffectPlayer__GetData_bool_(
         (ClassBoardEffectPlayer_o *)simpleAnimation,
         (const MethodInfo_30ED244 *)Method_ClassBoardEffectPlayer_GetData_bool___) )
  {
    unlockEnableAnimationName = this->fields.unlockEnableAnimationName;
    v5 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
    v6 = &Method_ClassBoardSquare__PlayEnableEffect_b__48_0__;
  }
  else
  {
    unlockEnableAnimationName = this->fields.enableAnimationName;
    v5 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
    v6 = &Method_ClassBoardSquare__PlayEnableEffect_b__48_1__;
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

  if ( (byte_4C5A96D & 1) == 0 )
  {
    sub_1C3E564(&SimpleAnimation_State_TypeInfo);
    byte_4C5A96D = 1;
  }
  simpleAnimation = this->fields.simpleAnimation;
  if ( !simpleAnimation
    || (simpleAnimation = (SimpleAnimation_o *)SimpleAnimation__Play_66582224(simpleAnimation, name, 0),
        (v8 = this->fields.simpleAnimation) == 0)
    || (simpleAnimation = (SimpleAnimation_o *)v8->fields.m_Clip) == 0
    || (v9 = UnityEngine_Object__get_name((UnityEngine_Object_o *)simpleAnimation, 0),
        (simpleAnimation = (SimpleAnimation_o *)SimpleAnimation__get_Item(v8, v9, 0)) == 0) )
  {
    sub_1C3E7C0(simpleAnimation, name);
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
    v14 = (__int64)(&klass->vtable._6_Awake + *(_DWORD *)p_offset);
  }
  else
  {
LABEL_11:
    v14 = sub_1C8ED7C(simpleAnimation, SimpleAnimation_State_TypeInfo, 6);
  }
  (*(void (__fastcall **)(SimpleAnimation_o *, _QWORD, float))v14)(v11, *(_QWORD *)(v14 + 8), 1.0);
  v16 = ClassBoardSquare__WaitAnimationFinished(this, name, endCallback, v15);
  UnityEngine_MonoBehaviour__StartCoroutine_71327136((UnityEngine_MonoBehaviour_o *)this, v16, 0);
}


void ClassBoardSquare__PlayGrandToClassTransition(ClassBoardSquare_o *this, bool isQuick, const MethodInfo *method)
{
  System_String_o *animNameGrandReturnTransition; // x21
  System_Action_o *v6; // x22
  const MethodInfo *v7; // x4

  if ( (byte_4C5A966 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_ClassBoardSquare__PlayGrandToClassTransition_b__37_0__);
    byte_4C5A966 = 1;
  }
  animNameGrandReturnTransition = this->fields.animNameGrandReturnTransition;
  v6 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_ClassBoardSquare__PlayGrandToClassTransition_b__37_0__, 0);
  ClassBoardSquare__PlaySimpleAnimation(this, animNameGrandReturnTransition, isQuick, v6, v7);
}


void ClassBoardSquare__PlayReleaseEffect(ClassBoardSquare_o *this, const MethodInfo *method)
{
  System_String_o *releaseAnimationName; // x20
  System_Action_o *v4; // x21
  const MethodInfo *v5; // x4

  if ( (byte_4C5A96A & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_ClassBoardSquare__PlayReleaseEffect_b__47_0__);
    byte_4C5A96A = 1;
  }
  releaseAnimationName = this->fields.releaseAnimationName;
  v4 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_ClassBoardSquare__PlayReleaseEffect_b__47_0__, 0);
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
      sub_1C3E7C0(0, name);
    SimpleAnimation__Play_66582224(simpleAnimation, name, 0);
    v10 = ClassBoardSquare__WaitAnimationFinished(this, name, endCallback, v9);
    UnityEngine_MonoBehaviour__StartCoroutine_71327136((UnityEngine_MonoBehaviour_o *)this, v10, 0);
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
  if ( (byte_4C5A965 & 1) == 0 )
  {
    this = (ClassBoardSquare_o *)sub_1C3E564(&IClassBoardSquareModel_TypeInfo);
    byte_4C5A965 = 1;
  }
  SquareModel_k__BackingField = v4->fields._SquareModel_k__BackingField;
  if ( !SquareModel_k__BackingField )
    sub_1C3E7C0(this, isQuick);
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
    v9 = sub_1C8ED7C(v4->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 15);
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

  if ( (byte_4C5A968 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_GameObject__TypeInfo);
    sub_1C3E564(&Method_BasicHelper_ForEach_GameObject___);
    sub_1C3E564(&Method_ClassBoardSquare___c__DisplayClass45_0__SetActiveArrayObject_b__0__);
    sub_1C3E564(&ClassBoardSquare___c__DisplayClass45_0_TypeInfo);
    byte_4C5A968 = 1;
  }
  v6 = sub_1C3E7B0(ClassBoardSquare___c__DisplayClass45_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  if ( !v6 )
    sub_1C3E7C0(v7, v8);
  *(_BYTE *)(v6 + 16) = isActive;
  v9 = (System_Action_object__o *)sub_1C3E7B0(System_Action_GameObject__TypeInfo);
  System_Action_object____ctor(
    v9,
    (Il2CppObject *)v6,
    Method_ClassBoardSquare___c__DisplayClass45_0__SetActiveArrayObject_b__0__,
    0);
  BasicHelper__ForEach_object_(
    (System_Collections_Generic_IEnumerable_T__o *)objects,
    (System_Action_T__o *)v9,
    (const MethodInfo_30E5A30 *)Method_BasicHelper_ForEach_GameObject___);
}


void ClassBoardSquare__SetActiveObject(
        ClassBoardSquare_o *this,
        UnityEngine_GameObject_o *obj,
        bool isActive,
        const MethodInfo *method)
{
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_4C5A969 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5A969 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)obj, 0, 0);
  if ( v6 )
  {
    if ( !obj )
      sub_1C3E7C0(v6, v7);
    UnityEngine_GameObject__SetActive(obj, isActive, 0);
  }
}


void ClassBoardSquare__SetSelectedEffectActive(ClassBoardSquare_o *this, bool isActive, const MethodInfo *method)
{
  UnityEngine_Object_o *selectedEffect; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_4C5A96F & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5A96F = 1;
  }
  selectedEffect = (UnityEngine_Object_o *)this->fields.selectedEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(selectedEffect, 0, 0) )
  {
    v7 = this->fields.selectedEffect;
    if ( !v7 )
      sub_1C3E7C0(0, v6);
    UnityEngine_GameObject__SetActive(v7, isActive, 0);
  }
}


void ClassBoardSquare__SetUpdateDraw(ClassBoardSquare_o *this, const MethodInfo *method)
{
  this->fields.isUpdateDraw = 1;
}


// local variable allocation has failed, the output may be wrong!
void ClassBoardSquare__Setup(ClassBoardSquare_o *this, IClassBoardSquareModel_o *squareModel, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  UnityEngine_Object_o *transform; // x0
  __int64 v7; // x1
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x22
  IClassBoardSquareModel_c *klass; // x8
  UnityEngine_Transform_o *v10; // x21
  __int64 v11; // x9
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 v13; // x0
  int v14; // s0 OVERLAPPED
  UnityEngine_Object_o *gameObject; // x21
  UnityEngine_Object_o *v18; // x22
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int32_t v23; // w1
  IClassBoardSquareModel_c *v24; // x8
  __int64 v25; // x9
  int32_t *v26; // x10
  __int64 v27; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  int32_t v32; // w1
  IClassBoardSquareModel_c *v33; // x8
  __int64 v34; // x9
  int32_t *v35; // x10
  __int64 v36; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  System_String_o *v39; // x0
  System_String_o *name; // x20
  ClassBoardEffectPlayer_o *v41; // x21
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  struct ClassBoardEffectPlayer_o *releaseEffectPlayer; // x20
  System_Action_o *v45; // x21
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  System_String_o *v48; // x20
  ClassBoardEffectPlayer_o *v49; // x21
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  struct ClassBoardEffectPlayer_o *enableEffectPlayer; // x20
  System_Action_o *v53; // x21
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  int v56; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C5A963 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&ClassBoardEffectPlayer_TypeInfo);
    sub_1C3E564(&IClassBoardSquareModel_TypeInfo);
    sub_1C3E564(&string___TypeInfo);
    sub_1C3E564(&StringLiteral_16119/*"_"*/);
    byte_4C5A963 = 1;
  }
  v56 = 0;
  this->fields._SquareModel_k__BackingField = squareModel;
  sub_1C3E508(
    (CGThumbnailListItem_o *)&this->fields._SquareModel_k__BackingField,
    (int32_t)squareModel,
    (int32_t)method,
    v3);
  transform = (UnityEngine_Object_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  SquareModel_k__BackingField = this->fields._SquareModel_k__BackingField;
  if ( !SquareModel_k__BackingField )
    goto LABEL_36;
  klass = SquareModel_k__BackingField->klass;
  v10 = (UnityEngine_Transform_o *)transform;
  v11 = *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.rank;
  if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.rank )
  {
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v11;
      p_offset += 2;
      if ( !v11 )
        goto LABEL_8;
    }
    v13 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 3];
  }
  else
  {
LABEL_8:
    v13 = sub_1C8ED7C(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 3);
  }
  transform = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v13)(
                                        SquareModel_k__BackingField,
                                        *(_QWORD *)(v13 + 8));
  if ( !v10 )
    goto LABEL_36;
  UnityEngine_Transform__set_localPosition(v10, *(UnityEngine_Vector3_o *)&v14, 0);
  ((void (__fastcall *)(ClassBoardSquare_o *, _QWORD, const MethodInfo *))this->klass->vtable._9_UpdateDraw.methodPtr)(
    this,
    0,
    this->klass->vtable._9_UpdateDraw.method);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  transform = (UnityEngine_Object_o *)sub_1C3E60C(string___TypeInfo, 5);
  if ( !gameObject )
    goto LABEL_36;
  v18 = transform;
  transform = (UnityEngine_Object_o *)UnityEngine_Object__get_name(gameObject, 0);
  if ( !v18 )
    goto LABEL_36;
  if ( !LODWORD(v18[1].klass) )
    goto LABEL_37;
  v18[1].monitor = transform;
  sub_1C3E508((CGThumbnailListItem_o *)&v18[1].monitor, (int32_t)transform, v19, v20);
  if ( LODWORD(v18[1].klass) <= 1 )
    goto LABEL_37;
  v23 = StringLiteral_16119/*"_"*/;
  v18[1].fields.m_CachedPtr = StringLiteral_16119/*"_"*/;
  sub_1C3E508((CGThumbnailListItem_o *)&v18[1].fields, v23, v21, v22);
  if ( !squareModel )
    goto LABEL_36;
  v24 = squareModel->klass;
  v25 = *(unsigned __int16 *)&squareModel->klass->_2.rank;
  if ( *(_WORD *)&squareModel->klass->_2.rank )
  {
    v26 = &v24->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v26 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v25;
      v26 += 4;
      if ( !v25 )
        goto LABEL_20;
    }
    v27 = (__int64)&v24->vtable[*v26];
  }
  else
  {
LABEL_20:
    v27 = sub_1C8ED7C(squareModel, IClassBoardSquareModel_TypeInfo, 0);
  }
  v56 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v27)(squareModel, *(_QWORD *)(v27 + 8));
  transform = (UnityEngine_Object_o *)System_Int32__ToString((int32_t)&v56, 0);
  if ( LODWORD(v18[1].klass) <= 2 )
    goto LABEL_37;
  v18[2].klass = (UnityEngine_Object_c *)transform;
  sub_1C3E508((CGThumbnailListItem_o *)&v18[2], (int32_t)transform, v28, v29);
  if ( LODWORD(v18[1].klass) <= 3 )
    goto LABEL_37;
  v32 = StringLiteral_16119/*"_"*/;
  v18[2].monitor = (void *)StringLiteral_16119/*"_"*/;
  sub_1C3E508((CGThumbnailListItem_o *)&v18[2].monitor, v32, v30, v31);
  v33 = squareModel->klass;
  v34 = *(unsigned __int16 *)&squareModel->klass->_2.rank;
  if ( *(_WORD *)&squareModel->klass->_2.rank )
  {
    v35 = &v33->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v35 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v34;
      v35 += 4;
      if ( !v34 )
        goto LABEL_28;
    }
    v36 = (__int64)&v33->vtable[*v35 + 1];
  }
  else
  {
LABEL_28:
    v36 = sub_1C8ED7C(squareModel, IClassBoardSquareModel_TypeInfo, 1);
  }
  v56 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v36)(squareModel, *(_QWORD *)(v36 + 8));
  transform = (UnityEngine_Object_o *)System_Int32__ToString((int32_t)&v56, 0);
  if ( LODWORD(v18[1].klass) <= 4 )
LABEL_37:
    sub_1C3E7C8(transform, v7);
  v18[2].fields.m_CachedPtr = (intptr_t)transform;
  sub_1C3E508((CGThumbnailListItem_o *)&v18[2].fields, (int32_t)transform, v37, v38);
  v39 = System_String__Concat_63676984((System_String_array *)v18, 0);
  UnityEngine_Object__set_name(gameObject, v39, 0);
  transform = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_36;
  name = UnityEngine_Object__get_name(transform, 0);
  v41 = (ClassBoardEffectPlayer_o *)sub_1C3E7B0(ClassBoardEffectPlayer_TypeInfo);
  ClassBoardEffectPlayer___ctor_48096216(v41, name, 0);
  this->fields.releaseEffectPlayer = v41;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.releaseEffectPlayer, (int32_t)v41, v42, v43);
  releaseEffectPlayer = this->fields.releaseEffectPlayer;
  v45 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v45, (Il2CppObject *)this, (intptr_t)this->klass->vtable._10_PlayReleaseEffect.method, 0);
  if ( !releaseEffectPlayer )
    goto LABEL_36;
  releaseEffectPlayer->fields.playCallback = v45;
  sub_1C3E508((CGThumbnailListItem_o *)&releaseEffectPlayer->fields.playCallback, (int32_t)v45, v46, v47);
  transform = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_36;
  v48 = UnityEngine_Object__get_name(transform, 0);
  v49 = (ClassBoardEffectPlayer_o *)sub_1C3E7B0(ClassBoardEffectPlayer_TypeInfo);
  ClassBoardEffectPlayer___ctor_48096216(v49, v48, 0);
  this->fields.enableEffectPlayer = v49;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.enableEffectPlayer, (int32_t)v49, v50, v51);
  enableEffectPlayer = this->fields.enableEffectPlayer;
  v53 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v53, (Il2CppObject *)this, (intptr_t)this->klass->vtable._11_PlayEnableEffect.method, 0);
  if ( !enableEffectPlayer )
LABEL_36:
    sub_1C3E7C0(transform, v7);
  enableEffectPlayer->fields.playCallback = v53;
  sub_1C3E508((CGThumbnailListItem_o *)&enableEffectPlayer->fields.playCallback, (int32_t)v53, v54, v55);
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
  if ( (byte_4C5A964 & 1) == 0 )
  {
    sub_1C3E564(&ClassBoardUtility_TypeInfo);
    this = (ClassBoardSquare_o *)sub_1C3E564(&IClassBoardSquareModel_TypeInfo);
    byte_4C5A964 = 1;
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
        sub_1C3E7C8(this, method);
      v6 = iconSpritesNormal->m_Items[v5];
      this = (ClassBoardSquare_o *)ClassBoardGlobalObject__get_IconAtlasManagerUnit(0);
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
        v12 = sub_1C8ED7C(v2->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 2);
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
        v18 = sub_1C8ED7C(v2->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 7);
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
    sub_1C3E7C0(this, method);
  }
}


void ClassBoardSquare__UpdateDraw(
        ClassBoardSquare_o *this,
        System_Nullable_AcquireFlag__o handoverFlag,
        const MethodInfo *method)
{
  bool hasValue; // w20
  ClassBoardSquare_o *v4; // x19
  System_Nullable_Int32Enum__o v5; // x0
  int32_t Value; // w0
  const MethodInfo *v7; // x1
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  IClassBoardSquareModel_c *klass; // x8
  __int64 v10; // x9
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 v12; // x0
  System_Nullable_AcquireFlag__o v13; // [xsp+8h] [xbp-28h] BYREF

  hasValue = handoverFlag.fields.hasValue;
  v4 = this;
  v13 = handoverFlag;
  if ( (byte_4C5A967 & 1) == 0 )
  {
    sub_1C3E564(&IClassBoardSquareModel_TypeInfo);
    sub_1C3E564(&Method_System_Nullable_AcquireFlag__get_HasValue__);
    this = (ClassBoardSquare_o *)sub_1C3E564(&Method_System_Nullable_AcquireFlag__get_Value__);
    byte_4C5A967 = 1;
  }
  if ( !hasValue )
  {
    SquareModel_k__BackingField = v4->fields._SquareModel_k__BackingField;
    if ( !SquareModel_k__BackingField )
      sub_1C3E7C0(this, handoverFlag);
    klass = SquareModel_k__BackingField->klass;
    v10 = *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.rank;
    if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.rank )
    {
      p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
      {
        --v10;
        p_offset += 2;
        if ( !v10 )
          goto LABEL_14;
      }
      v12 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 15];
    }
    else
    {
LABEL_14:
      v12 = sub_1C8ED7C(v4->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 15);
    }
    Value = (*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD, _QWORD))v12)(
              SquareModel_k__BackingField,
              0,
              *(_QWORD *)(v12 + 8));
    if ( Value )
      goto LABEL_5;
LABEL_19:
    ClassBoardSquare__DrawAvailable(v4, v7);
    return;
  }
  v5 = (System_Nullable_Int32Enum__o)&v13;
  Value = System_Nullable_Int32Enum___get_Value(
            v5,
            (const MethodInfo_38DAFB4 *)Method_System_Nullable_AcquireFlag__get_Value__);
  if ( !Value )
    goto LABEL_19;
LABEL_5:
  if ( (Value & 1) != 0 )
  {
    ClassBoardSquare__DrawAcquired(v4, v7);
  }
  else if ( (Value & 2) != 0 )
  {
    ClassBoardSquare__DrawNotConnected(v4, v7);
  }
  else if ( (Value & 8) != 0 )
  {
    ClassBoardSquare__DrawUnacquired(v4, v7);
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
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4C5A96E & 1) == 0 )
  {
    sub_1C3E564(&ClassBoardSquare__WaitAnimationFinished_d__52_TypeInfo);
    byte_4C5A96E = 1;
  }
  v7 = sub_1C3E7B0(ClassBoardSquare__WaitAnimationFinished_d__52_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v7 + 32), (int32_t)this, v8, v9);
  *(_QWORD *)(v7 + 40) = name;
  sub_1C3E508((CGThumbnailListItem_o *)(v7 + 40), (int32_t)name, v10, v11);
  *(_QWORD *)(v7 + 48) = endCallback;
  sub_1C3E508((CGThumbnailListItem_o *)(v7 + 48), (int32_t)endCallback, v12, v13);
  return (System_Collections_IEnumerator_o *)v7;
}


void ClassBoardSquare___PlayEnableEffect_b__48_0(ClassBoardSquare_o *this, const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x0

  simpleAnimation = this->fields.simpleAnimation;
  if ( !simpleAnimation
    || (SimpleAnimation__Stop(simpleAnimation, 0),
        simpleAnimation = (SimpleAnimation_o *)this->fields.enableEffectPlayer,
        this->fields.isUpdateDraw = 1,
        !simpleAnimation) )
  {
    sub_1C3E7C0(simpleAnimation, method);
  }
  ClassBoardEffectPlayer__End((ClassBoardEffectPlayer_o *)simpleAnimation, 0);
}


void ClassBoardSquare___PlayEnableEffect_b__48_1(ClassBoardSquare_o *this, const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x0

  simpleAnimation = this->fields.simpleAnimation;
  if ( !simpleAnimation
    || (SimpleAnimation__Stop(simpleAnimation, 0),
        simpleAnimation = (SimpleAnimation_o *)this->fields.enableEffectPlayer,
        this->fields.isUpdateDraw = 1,
        !simpleAnimation) )
  {
    sub_1C3E7C0(simpleAnimation, method);
  }
  ClassBoardEffectPlayer__End((ClassBoardEffectPlayer_o *)simpleAnimation, 0);
}


void ClassBoardSquare___PlayGrandToClassTransition_b__37_0(ClassBoardSquare_o *this, const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x0

  simpleAnimation = this->fields.simpleAnimation;
  if ( !simpleAnimation )
    sub_1C3E7C0(0, method);
  SimpleAnimation__Stop(simpleAnimation, 0);
}


void ClassBoardSquare___PlayReleaseEffect_b__47_0(ClassBoardSquare_o *this, const MethodInfo *method)
{
  ClassBoardEffectPlayer_o *releaseEffectPlayer; // x0

  releaseEffectPlayer = this->fields.releaseEffectPlayer;
  this->fields.isUpdateDraw = 1;
  if ( !releaseEffectPlayer )
    sub_1C3E7C0(0, method);
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

  if ( (byte_4C5A961 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_ClassBoardSquare__TypeInfo);
    byte_4C5A961 = 1;
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
    v10 = sub_1C3E6A0(v8, System_Action_ClassBoardSquare__TypeInfo);
    if ( !v10 )
      break;
LABEL_8:
    v11 = sub_1C787BC(p_clickedEvent, v10, v6);
    v12 = v6 == (System_Delegate_o *)v11;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_1C3EA80(v9);
  ClassBoardSquare__remove_clickedEvent(v13, v14, v15);
}


ClassBoardEffectPlayer_o *ClassBoardSquare__get_EnableEffectPlayer(ClassBoardSquare_o *this, const MethodInfo *method)
{
  return this->fields.enableEffectPlayer;
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

  if ( (byte_4C5A962 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_ClassBoardSquare__TypeInfo);
    byte_4C5A962 = 1;
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
    v10 = sub_1C3E6A0(v8, System_Action_ClassBoardSquare__TypeInfo);
    if ( !v10 )
      break;
LABEL_8:
    v11 = sub_1C787BC(p_clickedEvent, v10, v6);
    v12 = v6 == (System_Delegate_o *)v11;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_1C3EA80(v9);
  ClassBoardSquare__get_ReleaseEffectPlayer(v13, v14);
}


void ClassBoardSquare__set_SquareModel(
        ClassBoardSquare_o *this,
        IClassBoardSquareModel_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._SquareModel_k__BackingField = value;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields._SquareModel_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void ClassBoardSquare__WaitAnimationFinished_d__52___ctor(
        ClassBoardSquare__WaitAnimationFinished_d__52_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool ClassBoardSquare__WaitAnimationFinished_d__52__MoveNext(
        ClassBoardSquare__WaitAnimationFinished_d__52_o *this,
        const MethodInfo *method)
{
  ClassBoardSquare__WaitAnimationFinished_d__52_o *v2; // x19
  int32_t _1__state; // w8
  struct ClassBoardSquare_o *_4__this; // x8
  SimpleAnimation_State_o *State; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  struct SimpleAnimation_State_o *state_5__2; // x20
  SimpleAnimation_State_c *klass; // x8
  __int64 v10; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v12; // x0
  struct SimpleAnimation_State_o *v13; // x20
  SimpleAnimation_State_c *v14; // x8
  __int64 v15; // x9
  SimpleAnimation_State_c **v16; // x10
  __int64 v17; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  CGThumbnailListItem_o *p__2__current; // x19
  bool result; // w0

  v2 = this;
  if ( (byte_4C5A971 & 1) == 0 )
  {
    this = (ClassBoardSquare__WaitAnimationFinished_d__52_o *)sub_1C3E564(&SimpleAnimation_State_TypeInfo);
    byte_4C5A971 = 1;
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
    this = (ClassBoardSquare__WaitAnimationFinished_d__52_o *)_4__this->fields.simpleAnimation;
    if ( !this )
      goto LABEL_28;
    State = SimpleAnimation__GetState((SimpleAnimation_o *)this, v2->fields.name, 0);
    v2->fields._state_5__2 = State;
    sub_1C3E508((CGThumbnailListItem_o *)&v2->fields._state_5__2, (int32_t)State, v6, v7);
LABEL_9:
    state_5__2 = v2->fields._state_5__2;
    if ( !state_5__2 )
      goto LABEL_26;
    klass = state_5__2->klass;
    v10 = *(unsigned __int16 *)&state_5__2->klass->_2.rank;
    if ( *(_WORD *)&state_5__2->klass->_2.rank )
    {
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v10;
        p_offset += 2;
        if ( !v10 )
          goto LABEL_14;
      }
      v12 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 13];
    }
    else
    {
LABEL_14:
      v12 = sub_1C8ED7C(v2->fields._state_5__2, SimpleAnimation_State_TypeInfo, 13);
    }
    if ( (*(float (__fastcall **)(struct SimpleAnimation_State_o *, _QWORD))v12)(state_5__2, *(_QWORD *)(v12 + 8)) <= 0.0 )
    {
LABEL_26:
      ActionExtensions__Call(v2->fields.endCallback, 0);
      return 0;
    }
    v13 = v2->fields._state_5__2;
    if ( v13 )
    {
      v14 = v13->klass;
      v15 = *(unsigned __int16 *)&v13->klass->_2.rank;
      if ( *(_WORD *)&v13->klass->_2.rank )
      {
        v16 = (SimpleAnimation_State_c **)&v14->_1.interfaceOffsets->offset;
        while ( *(v16 - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v15;
          v16 += 2;
          if ( !v15 )
            goto LABEL_22;
        }
        v17 = (__int64)&v14->vtable[*(_DWORD *)v16 + 5];
      }
      else
      {
LABEL_22:
        v17 = sub_1C8ED7C(v2->fields._state_5__2, SimpleAnimation_State_TypeInfo, 5);
      }
      if ( (*(float (__fastcall **)(struct SimpleAnimation_State_o *, _QWORD))v17)(v13, *(_QWORD *)(v17 + 8)) < 1.0 )
      {
        v2->fields.__2__current = 0;
        p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
        sub_1C3E508(p__2__current, 0, v18, v19);
        result = 1;
        LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
        return result;
      }
      goto LABEL_26;
    }
LABEL_28:
    sub_1C3E7C0(this, method);
  }
  return 0;
}


Il2CppObject *ClassBoardSquare__WaitAnimationFinished_d__52__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ClassBoardSquare__WaitAnimationFinished_d__52_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn ClassBoardSquare__WaitAnimationFinished_d__52__System_Collections_IEnumerator_Reset(
        ClassBoardSquare__WaitAnimationFinished_d__52_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3E578(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3E7B0(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3E578(&Method_ClassBoardSquare__WaitAnimationFinished_d__52_System_Collections_IEnumerator_Reset__);
  sub_1C3E68C(v3, v4);
}


Il2CppObject *ClassBoardSquare__WaitAnimationFinished_d__52__System_Collections_IEnumerator_get_Current(
        ClassBoardSquare__WaitAnimationFinished_d__52_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void ClassBoardSquare__WaitAnimationFinished_d__52__System_IDisposable_Dispose(
        ClassBoardSquare__WaitAnimationFinished_d__52_o *this,
        const MethodInfo *method)
{
  ;
}


void ClassBoardSquare___c__DisplayClass45_0___ctor(
        ClassBoardSquare___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ClassBoardSquare___c__DisplayClass45_0___SetActiveArrayObject_b__0(
        ClassBoardSquare___c__DisplayClass45_0_o *this,
        UnityEngine_GameObject_o *x,
        const MethodInfo *method)
{
  ClassBoardSquare___c__DisplayClass45_0_o *v3; // x19

  if ( !x
    || (v3 = this, (this = (ClassBoardSquare___c__DisplayClass45_0_o *)UnityEngine_GameObject__get_gameObject(x, 0)) == 0) )
  {
    sub_1C3E7C0(this, x);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v3->fields.isActive, 0);
}