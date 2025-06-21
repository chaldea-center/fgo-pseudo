void __fastcall ClassBoardSquare___ctor(ClassBoardSquare_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int32_t v10; // w1
  int32_t v11; // w1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v20; // w1
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int32_t v23; // w1
  int32_t v24; // w2
  const MethodInfo *v25; // x3

  if ( (byte_4B1FE81 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_3203/*"BrightTurnTransition"*/, method);
    sub_1BCAFF8(&StringLiteral_3200/*"BrightTurn"*/, v5);
    sub_1BCAFF8(&StringLiteral_7091/*"GrandReturnTransition"*/, v6);
    sub_1BCAFF8(&StringLiteral_3205/*"BrightTurnUnLock"*/, v7);
    sub_1BCAFF8(&StringLiteral_12906/*"SquareEnable"*/, v8);
    sub_1BCAFF8(&StringLiteral_3155/*"BlackOutTransition"*/, v9);
    byte_4B1FE81 = 1;
  }
  v10 = StringLiteral_3200/*"BrightTurn"*/;
  this->fields.enableAnimationName = (struct System_String_o *)StringLiteral_3200/*"BrightTurn"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.enableAnimationName, v10, v2, v3);
  v11 = StringLiteral_12906/*"SquareEnable"*/;
  this->fields.releaseAnimationName = (struct System_String_o *)StringLiteral_12906/*"SquareEnable"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.releaseAnimationName, v11, v12, v13);
  v14 = StringLiteral_3203/*"BrightTurnTransition"*/;
  this->fields.brightTurnTransitionAnimationName = (struct System_String_o *)StringLiteral_3203/*"BrightTurnTransition"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.brightTurnTransitionAnimationName, v14, v15, v16);
  v17 = StringLiteral_3155/*"BlackOutTransition"*/;
  this->fields.blackOutTransitionAnimationName = (struct System_String_o *)StringLiteral_3155/*"BlackOutTransition"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.blackOutTransitionAnimationName, v17, v18, v19);
  v20 = StringLiteral_3205/*"BrightTurnUnLock"*/;
  this->fields.unlockEnableAnimationName = (struct System_String_o *)StringLiteral_3205/*"BrightTurnUnLock"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.unlockEnableAnimationName, v20, v21, v22);
  v23 = StringLiteral_7091/*"GrandReturnTransition"*/;
  this->fields.animNameGrandReturnTransition = (struct System_String_o *)StringLiteral_7091/*"GrandReturnTransition"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.animNameGrandReturnTransition, v23, v24, v25);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ClassBoardSquare__Awake(ClassBoardSquare_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall ClassBoardSquare__DrawAcquired(ClassBoardSquare_o *this, const MethodInfo *method)
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


void __fastcall ClassBoardSquare__DrawAvailable(ClassBoardSquare_o *this, const MethodInfo *method)
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


void __fastcall ClassBoardSquare__DrawNotConnected(ClassBoardSquare_o *this, const MethodInfo *method)
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


void __fastcall ClassBoardSquare__DrawUnacquired(ClassBoardSquare_o *this, const MethodInfo *method)
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


void __fastcall ClassBoardSquare__FixedUpdate(ClassBoardSquare_o *this, const MethodInfo *method)
{
  ClassBoardSquare_c *klass; // x8

  if ( this->fields.isUpdateDraw )
  {
    klass = this->klass;
    this->fields.isUpdateDraw = 0;
    ((void (__fastcall *)(ClassBoardSquare_o *, _QWORD, Il2CppMethodPointer))klass->vtable._9_UpdateDraw.method)(
      this,
      0LL,
      klass->vtable._10_PlayReleaseEffect.methodPtr);
  }
}


void __fastcall ClassBoardSquare__OnClickSquare(ClassBoardSquare_o *this, const MethodInfo *method)
{
  struct System_Action_ClassBoardSquare__o *clickedEvent; // x8

  ((void (__fastcall *)(ClassBoardSquare_o *, void *))this->klass->vtable._12_PlayClickedSe.method)(
    this,
    this->klass[1]._1.image);
  clickedEvent = this->fields.clickedEvent;
  if ( clickedEvent )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, ClassBoardSquare_o *, _QWORD))clickedEvent->fields.m_target)(
      clickedEvent->fields.original_method_info,
      this,
      *(_QWORD *)&clickedEvent->fields.extra_arg);
}


void __fastcall ClassBoardSquare__PlayClickedSe(ClassBoardSquare_o *this, const MethodInfo *method)
{
  ClassBoardSquare_o *v2; // x19
  __int64 v3; // x1
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  IClassBoardSquareModel_c *klass; // x8
  __int64 v6; // x9
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 v8; // x0
  struct IClassBoardSquareModel_o *v9; // x19
  IClassBoardSquareModel_c *v10; // x8
  __int64 v11; // x9
  IClassBoardSquareModel_c **v12; // x10
  __int64 p_method; // x0
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0

  v2 = this;
  if ( (byte_4B1FE7D & 1) == 0 )
  {
    sub_1BCAFF8(&Method_ClassBoardSquare_PlayClickedSe__, method);
    this = (ClassBoardSquare_o *)sub_1BCAFF8(&IClassBoardSquareModel_TypeInfo, v3);
    byte_4B1FE7D = 1;
  }
  SquareModel_k__BackingField = v2->fields._SquareModel_k__BackingField;
  if ( !SquareModel_k__BackingField )
    goto LABEL_23;
  klass = SquareModel_k__BackingField->klass;
  v6 = *(unsigned __int16 *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3) )
  {
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v6;
      p_offset += 2;
      if ( !v6 )
        goto LABEL_8;
    }
    v8 = (__int64)&(&klass->rgctx_data)[2 * *(_DWORD *)p_offset + 39];
  }
  else
  {
LABEL_8:
    v8 = sub_1C1B560(v2->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 12LL);
  }
  this = (ClassBoardSquare_o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v8)(
                                 SquareModel_k__BackingField,
                                 *(_QWORD *)(v8 + 8));
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_19;
  v9 = v2->fields._SquareModel_k__BackingField;
  if ( !v9 )
LABEL_23:
    sub_1BCB254(this, method);
  v10 = v9->klass;
  v11 = *(unsigned __int16 *)(&v9->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v9->klass->_2.bitflags2 + 3) )
  {
    v12 = (IClassBoardSquareModel_c **)&v10->_1.interfaceOffsets->offset;
    while ( *(v12 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v11;
      v12 += 2;
      if ( !v11 )
        goto LABEL_16;
    }
    p_method = (__int64)&v10->vtable[*(_DWORD *)v12 + 13].method;
  }
  else
  {
LABEL_16:
    p_method = sub_1C1B560(v9, IClassBoardSquareModel_TypeInfo, 13LL);
  }
  if ( ((*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))p_method)(v9, *(_QWORD *)(p_method + 8)) & 1) != 0 )
  {
LABEL_19:
    v14 = Method_ClassBoardSquare_PlayClickedSe__;
    if ( (*((_BYTE *)Method_ClassBoardSquare_PlayClickedSe__ + 83) & 2) != 0 )
      v14 = (_QWORD *)sub_1BCB010(Method_ClassBoardSquare_PlayClickedSe__);
    v15 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v14, v14[4]);
    OverwriteAssetSoundName__PlaySystemSe(v15, 0, 0, 0LL);
  }
}


void __fastcall ClassBoardSquare__PlayEnableEffect(ClassBoardSquare_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  SimpleAnimation_o *simpleAnimation; // x0
  System_String_o *unlockEnableAnimationName; // x20
  System_Action_o *v8; // x0
  __int64 *v9; // x8
  System_Action_o *v10; // x21
  const MethodInfo *v11; // x4

  if ( (byte_4B1FE7C & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&Method_ClassBoardEffectPlayer_GetData_bool___, v3);
    sub_1BCAFF8(&Method_ClassBoardSquare__PlayEnableEffect_b__48_0__, v4);
    sub_1BCAFF8(&Method_ClassBoardSquare__PlayEnableEffect_b__48_1__, v5);
    byte_4B1FE7C = 1;
  }
  simpleAnimation = this->fields.simpleAnimation;
  if ( !simpleAnimation
    || (SimpleAnimation__Rewind(simpleAnimation, 0LL),
        (simpleAnimation = (SimpleAnimation_o *)this->fields.enableEffectPlayer) == 0LL) )
  {
    sub_1BCB254(simpleAnimation, method);
  }
  if ( ClassBoardEffectPlayer__GetData_bool_(
         (ClassBoardEffectPlayer_o *)simpleAnimation,
         (const MethodInfo_300E278 *)Method_ClassBoardEffectPlayer_GetData_bool___) )
  {
    unlockEnableAnimationName = this->fields.unlockEnableAnimationName;
    v8 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    v9 = &Method_ClassBoardSquare__PlayEnableEffect_b__48_0__;
  }
  else
  {
    unlockEnableAnimationName = this->fields.enableAnimationName;
    v8 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    v9 = &Method_ClassBoardSquare__PlayEnableEffect_b__48_1__;
  }
  v10 = v8;
  System_Action___ctor(v8, (Il2CppObject *)this, *v9, 0LL);
  ClassBoardSquare__PlaySimpleAnimation(this, unlockEnableAnimationName, 0, v10, v11);
}


void __fastcall ClassBoardSquare__PlayForceEndSimpleAnimation(
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

  if ( (byte_4B1FE7E & 1) == 0 )
  {
    sub_1BCAFF8(&SimpleAnimation_State_TypeInfo, name);
    byte_4B1FE7E = 1;
  }
  simpleAnimation = this->fields.simpleAnimation;
  if ( !simpleAnimation
    || (simpleAnimation = (SimpleAnimation_o *)SimpleAnimation__Play_65395744(simpleAnimation, name, 0LL),
        (v8 = this->fields.simpleAnimation) == 0LL)
    || (simpleAnimation = (SimpleAnimation_o *)v8[1].monitor) == 0LL
    || (v9 = UnityEngine_Object__get_name((UnityEngine_Object_o *)simpleAnimation, 0LL),
        (simpleAnimation = (SimpleAnimation_o *)SimpleAnimation__get_Item(v8, v9, 0LL)) == 0LL) )
  {
    sub_1BCB254(simpleAnimation, name);
  }
  klass = simpleAnimation->klass;
  v11 = simpleAnimation;
  v12 = *(unsigned __int16 *)(&simpleAnimation->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&simpleAnimation->klass->_2.bitflags2 + 3) )
  {
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v12;
      p_offset += 2;
      if ( !v12 )
        goto LABEL_11;
    }
    v14 = (__int64)(&klass->vtable._6_Awake.method + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_11:
    v14 = sub_1C1B560(simpleAnimation, SimpleAnimation_State_TypeInfo, 6LL);
  }
  (*(void (__fastcall **)(SimpleAnimation_o *, _QWORD, float))v14)(v11, *(_QWORD *)(v14 + 8), 1.0);
  v16 = ClassBoardSquare__WaitAnimationFinished(this, name, endCallback, v15);
  UnityEngine_MonoBehaviour__StartCoroutine_70121648((UnityEngine_MonoBehaviour_o *)this, v16, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardSquare__PlayGrandToClassTransition(
        ClassBoardSquare_o *this,
        bool isQuick,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_String_o *animNameGrandReturnTransition; // x21
  System_Action_o *v7; // x22
  const MethodInfo *v8; // x4

  if ( (byte_4B1FE77 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, isQuick);
    sub_1BCAFF8(&Method_ClassBoardSquare__PlayGrandToClassTransition_b__37_0__, v5);
    byte_4B1FE77 = 1;
  }
  animNameGrandReturnTransition = this->fields.animNameGrandReturnTransition;
  v7 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_ClassBoardSquare__PlayGrandToClassTransition_b__37_0__, 0LL);
  ClassBoardSquare__PlaySimpleAnimation(this, animNameGrandReturnTransition, isQuick, v7, v8);
}


void __fastcall ClassBoardSquare__PlayReleaseEffect(ClassBoardSquare_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *releaseAnimationName; // x20
  System_Action_o *v5; // x21
  const MethodInfo *v6; // x4

  if ( (byte_4B1FE7B & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&Method_ClassBoardSquare__PlayReleaseEffect_b__47_0__, v3);
    byte_4B1FE7B = 1;
  }
  releaseAnimationName = this->fields.releaseAnimationName;
  v5 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_ClassBoardSquare__PlayReleaseEffect_b__47_0__, 0LL);
  ClassBoardSquare__PlaySimpleAnimation(this, releaseAnimationName, 0, v5, v6);
}


void __fastcall ClassBoardSquare__PlaySimpleAnimation(
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
      sub_1BCB254(0LL, name);
    SimpleAnimation__Play_65395744(simpleAnimation, name, 0LL);
    v10 = ClassBoardSquare__WaitAnimationFinished(this, name, endCallback, v9);
    UnityEngine_MonoBehaviour__StartCoroutine_70121648((UnityEngine_MonoBehaviour_o *)this, v10, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardSquare__PlayTransition(ClassBoardSquare_o *this, bool isQuick, const MethodInfo *method)
{
  ClassBoardSquare_o *v4; // x20
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x21
  IClassBoardSquareModel_c *klass; // x8
  __int64 v7; // x9
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 p_method; // x0
  char v10; // w0
  const MethodInfo *v11; // x4
  __int64 v12; // x8

  v4 = this;
  if ( (byte_4B1FE76 & 1) == 0 )
  {
    this = (ClassBoardSquare_o *)sub_1BCAFF8(&IClassBoardSquareModel_TypeInfo, isQuick);
    byte_4B1FE76 = 1;
  }
  SquareModel_k__BackingField = v4->fields._SquareModel_k__BackingField;
  if ( !SquareModel_k__BackingField )
    sub_1BCB254(this, isQuick);
  klass = SquareModel_k__BackingField->klass;
  v7 = *(unsigned __int16 *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3) )
  {
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v7;
      p_offset += 2;
      if ( !v7 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 15].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C1B560(v4->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 15LL);
  }
  v10 = (*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD, _QWORD))p_method)(
          SquareModel_k__BackingField,
          0LL,
          *(_QWORD *)(p_method + 8));
  v12 = 128LL;
  if ( (v10 & 2) == 0 )
    v12 = 120LL;
  ClassBoardSquare__PlaySimpleAnimation(v4, *(System_String_o **)((char *)&v4->klass + v12), isQuick, 0LL, v11);
}


void __fastcall ClassBoardSquare__ReleaseAfterUpdate(ClassBoardSquare_o *this, const MethodInfo *method)
{
  this->fields.isUpdateDraw = 1;
}


void __fastcall ClassBoardSquare__SetActiveArrayObject(
        ClassBoardSquare_o *this,
        UnityEngine_GameObject_array *objects,
        bool isActive,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  System_Action_object__o *v12; // x20

  if ( (byte_4B1FE79 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_GameObject__TypeInfo, objects);
    sub_1BCAFF8(&Method_BasicHelper_ForEach_GameObject___, v6);
    sub_1BCAFF8(&Method_ClassBoardSquare___c__DisplayClass45_0__SetActiveArrayObject_b__0__, v7);
    sub_1BCAFF8(&ClassBoardSquare___c__DisplayClass45_0_TypeInfo, v8);
    byte_4B1FE79 = 1;
  }
  v9 = sub_1BCB244(ClassBoardSquare___c__DisplayClass45_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    sub_1BCB254(v10, v11);
  *(_BYTE *)(v9 + 16) = isActive;
  v12 = (System_Action_object__o *)sub_1BCB244(System_Action_GameObject__TypeInfo);
  System_Action_object____ctor(
    v12,
    (Il2CppObject *)v9,
    Method_ClassBoardSquare___c__DisplayClass45_0__SetActiveArrayObject_b__0__,
    0LL);
  BasicHelper__ForEach_object_(
    (System_Collections_Generic_IEnumerable_T__o *)objects,
    (System_Action_T__o *)v12,
    (const MethodInfo_3006B3C *)Method_BasicHelper_ForEach_GameObject___);
}


void __fastcall ClassBoardSquare__SetActiveObject(
        ClassBoardSquare_o *this,
        UnityEngine_GameObject_o *obj,
        bool isActive,
        const MethodInfo *method)
{
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_4B1FE7A & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, obj);
    byte_4B1FE7A = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)obj, 0LL, 0LL);
  if ( v6 )
  {
    if ( !obj )
      sub_1BCB254(v6, v7);
    UnityEngine_GameObject__SetActive(obj, isActive, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardSquare__SetSelectedEffectActive(
        ClassBoardSquare_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_Object_o *selectedEffect; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_4B1FE80 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, isActive);
    byte_4B1FE80 = 1;
  }
  selectedEffect = (UnityEngine_Object_o *)this->fields.selectedEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(selectedEffect, 0LL, 0LL) )
  {
    v7 = this->fields.selectedEffect;
    if ( !v7 )
      sub_1BCB254(0LL, v6);
    UnityEngine_GameObject__SetActive(v7, isActive, 0LL);
  }
}


void __fastcall ClassBoardSquare__SetUpdateDraw(ClassBoardSquare_o *this, const MethodInfo *method)
{
  this->fields.isUpdateDraw = 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardSquare__Setup(
        ClassBoardSquare_o *this,
        IClassBoardSquareModel_o *squareModel,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_Object_o *transform; // x0
  __int64 v11; // x1
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x22
  IClassBoardSquareModel_c *klass; // x8
  UnityEngine_Transform_o *v14; // x21
  __int64 v15; // x9
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 p_method; // x0
  int v18; // s0
  UnityEngine_Object_o *gameObject; // x21
  UnityEngine_Object_o *v22; // x22
  __int64 v23; // x2
  const MethodInfo *v24; // x3
  const MethodInfo *v25; // x3
  int32_t v26; // w1
  IClassBoardSquareModel_c *v27; // x8
  __int64 v28; // x9
  int32_t *v29; // x10
  __int64 v30; // x0
  const MethodInfo *v31; // x3
  const MethodInfo *v32; // x3
  int32_t v33; // w1
  IClassBoardSquareModel_c *v34; // x8
  __int64 v35; // x9
  int32_t *v36; // x10
  __int64 v37; // x0
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

  if ( (byte_4B1FE74 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, squareModel);
    sub_1BCAFF8(&ClassBoardEffectPlayer_TypeInfo, v6);
    sub_1BCAFF8(&IClassBoardSquareModel_TypeInfo, v7);
    sub_1BCAFF8(&string___TypeInfo, v8);
    sub_1BCAFF8(&StringLiteral_15973/*"_"*/, v9);
    byte_4B1FE74 = 1;
  }
  v56 = 0;
  this->fields._SquareModel_k__BackingField = squareModel;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields._SquareModel_k__BackingField,
    (int32_t)squareModel,
    (int32_t)method,
    v3);
  transform = (UnityEngine_Object_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  SquareModel_k__BackingField = this->fields._SquareModel_k__BackingField;
  if ( !SquareModel_k__BackingField )
    goto LABEL_36;
  klass = SquareModel_k__BackingField->klass;
  v14 = (UnityEngine_Transform_o *)transform;
  v15 = *(unsigned __int16 *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3) )
  {
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v15;
      p_offset += 2;
      if ( !v15 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 3].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C1B560(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 3LL);
  }
  transform = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))p_method)(
                                        SquareModel_k__BackingField,
                                        *(_QWORD *)(p_method + 8));
  if ( !v14 )
    goto LABEL_36;
  UnityEngine_Transform__set_localPosition(v14, *(UnityEngine_Vector3_o *)&v18, 0LL);
  ((void (__fastcall *)(ClassBoardSquare_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._9_UpdateDraw.method)(
    this,
    0LL,
    this->klass->vtable._10_PlayReleaseEffect.methodPtr);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  transform = (UnityEngine_Object_o *)sub_1BCB0A0(string___TypeInfo, 5LL);
  if ( !gameObject )
    goto LABEL_36;
  v22 = transform;
  transform = (UnityEngine_Object_o *)UnityEngine_Object__get_name(gameObject, 0LL);
  if ( !v22 )
    goto LABEL_36;
  if ( !LODWORD(v22[1].klass) )
    goto LABEL_37;
  v22[1].monitor = transform;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v22[1].monitor, (int32_t)transform, v23, v24);
  if ( LODWORD(v22[1].klass) <= 1 )
    goto LABEL_37;
  v26 = StringLiteral_15973/*"_"*/;
  *(_QWORD *)&v22[1].fields.m_CachedPtr = StringLiteral_15973/*"_"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v22[1].fields, v26, v23, v25);
  if ( !squareModel )
    goto LABEL_36;
  v27 = squareModel->klass;
  v28 = *(unsigned __int16 *)(&squareModel->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&squareModel->klass->_2.bitflags2 + 3) )
  {
    v29 = &v27->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v29 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v28;
      v29 += 4;
      if ( !v28 )
        goto LABEL_20;
    }
    v30 = (__int64)&v27->vtable[*v29].method;
  }
  else
  {
LABEL_20:
    v30 = sub_1C1B560(squareModel, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  v56 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v30)(squareModel, *(_QWORD *)(v30 + 8));
  transform = (UnityEngine_Object_o *)System_Int32__ToString((int32_t)&v56, 0LL);
  if ( LODWORD(v22[1].klass) <= 2 )
    goto LABEL_37;
  v22[2].klass = (UnityEngine_Object_c *)transform;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v22[2], (int32_t)transform, v23, v31);
  if ( LODWORD(v22[1].klass) <= 3 )
    goto LABEL_37;
  v33 = StringLiteral_15973/*"_"*/;
  v22[2].monitor = (void *)StringLiteral_15973/*"_"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v22[2].monitor, v33, v23, v32);
  v34 = squareModel->klass;
  v35 = *(unsigned __int16 *)(&squareModel->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&squareModel->klass->_2.bitflags2 + 3) )
  {
    v36 = &v34->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v36 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v35;
      v36 += 4;
      if ( !v35 )
        goto LABEL_28;
    }
    v37 = (__int64)&v34->vtable[*v36 + 1].method;
  }
  else
  {
LABEL_28:
    v37 = sub_1C1B560(squareModel, IClassBoardSquareModel_TypeInfo, 1LL);
  }
  v56 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v37)(squareModel, *(_QWORD *)(v37 + 8));
  transform = (UnityEngine_Object_o *)System_Int32__ToString((int32_t)&v56, 0LL);
  if ( LODWORD(v22[1].klass) <= 4 )
LABEL_37:
    sub_1BCB25C(transform, v11, v23);
  *(_QWORD *)&v22[2].fields.m_CachedPtr = transform;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v22[2].fields, (int32_t)transform, v23, v38);
  v39 = System_String__Concat_62490940((System_String_array *)v22, 0LL);
  UnityEngine_Object__set_name(gameObject, v39, 0LL);
  transform = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_36;
  name = UnityEngine_Object__get_name(transform, 0LL);
  v41 = (ClassBoardEffectPlayer_o *)sub_1BCB244(ClassBoardEffectPlayer_TypeInfo);
  ClassBoardEffectPlayer___ctor_46914980(v41, name, 0LL);
  this->fields.releaseEffectPlayer = v41;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.releaseEffectPlayer, (int32_t)v41, v42, v43);
  releaseEffectPlayer = this->fields.releaseEffectPlayer;
  v45 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(v45, (Il2CppObject *)this, (intptr_t)this->klass->vtable._11_PlayEnableEffect.methodPtr, 0LL);
  if ( !releaseEffectPlayer )
    goto LABEL_36;
  releaseEffectPlayer->fields.playCallback = v45;
  sub_1BCAF9C((CGThumbnailListItem_o *)&releaseEffectPlayer->fields.playCallback, (int32_t)v45, v46, v47);
  transform = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_36;
  v48 = UnityEngine_Object__get_name(transform, 0LL);
  v49 = (ClassBoardEffectPlayer_o *)sub_1BCB244(ClassBoardEffectPlayer_TypeInfo);
  ClassBoardEffectPlayer___ctor_46914980(v49, v48, 0LL);
  this->fields.enableEffectPlayer = v49;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.enableEffectPlayer, (int32_t)v49, v50, v51);
  enableEffectPlayer = this->fields.enableEffectPlayer;
  v53 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(v53, (Il2CppObject *)this, (intptr_t)this->klass->vtable._12_PlayClickedSe.methodPtr, 0LL);
  if ( !enableEffectPlayer )
LABEL_36:
    sub_1BCB254(transform, v11);
  enableEffectPlayer->fields.playCallback = v53;
  sub_1BCAF9C((CGThumbnailListItem_o *)&enableEffectPlayer->fields.playCallback, (int32_t)v53, v54, v55);
  ((void (__fastcall *)(ClassBoardSquare_o *, Il2CppMethodPointer))this->klass->vtable._6_SetupIcon.method)(
    this,
    this->klass->vtable._7_PlayTransition.methodPtr);
}


void __fastcall ClassBoardSquare__SetupIcon(ClassBoardSquare_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ClassBoardSquare_o *v3; // x19
  __int64 v4; // x1
  struct UISprite_array *iconSpritesNormal; // x24
  __int64 v6; // x8
  unsigned __int64 v7; // x25
  UISprite_o *v8; // x20
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x22
  IClassBoardSquareModel_c *klass; // x8
  AtlasManagerUnit_o *v11; // x21
  __int64 v12; // x9
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 p_method; // x0
  struct IClassBoardSquareModel_o *v15; // x23
  IClassBoardSquareModel_c *v16; // x8
  int32_t v17; // w22
  __int64 v18; // x9
  IClassBoardSquareModel_c **v19; // x10
  __int64 v20; // x0
  const MethodInfo *v21; // x2
  int32_t v22; // w23

  v3 = this;
  if ( (byte_4B1FE75 & 1) == 0 )
  {
    sub_1BCAFF8(&ClassBoardUtility_TypeInfo, method);
    this = (ClassBoardSquare_o *)sub_1BCAFF8(&IClassBoardSquareModel_TypeInfo, v4);
    byte_4B1FE75 = 1;
  }
  iconSpritesNormal = v3->fields.iconSpritesNormal;
  if ( !iconSpritesNormal )
    goto LABEL_26;
  v6 = *(_QWORD *)&iconSpritesNormal->max_length;
  if ( (int)v6 >= 1 )
  {
    v7 = 0LL;
    while ( 1 )
    {
      if ( v7 >= (unsigned int)v6 )
        sub_1BCB25C(this, method, v2);
      v8 = iconSpritesNormal->m_Items[v7];
      this = (ClassBoardSquare_o *)ClassBoardGlobalObject__get_IconAtlasManagerUnit(0LL);
      SquareModel_k__BackingField = v3->fields._SquareModel_k__BackingField;
      if ( !SquareModel_k__BackingField )
        break;
      klass = SquareModel_k__BackingField->klass;
      v11 = (AtlasManagerUnit_o *)this;
      v12 = *(unsigned __int16 *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3) )
      {
        p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v12;
          p_offset += 2;
          if ( !v12 )
            goto LABEL_12;
        }
        p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 2].method;
      }
      else
      {
LABEL_12:
        p_method = sub_1C1B560(v3->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 2LL);
      }
      this = (ClassBoardSquare_o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))p_method)(
                                     SquareModel_k__BackingField,
                                     *(_QWORD *)(p_method + 8));
      v15 = v3->fields._SquareModel_k__BackingField;
      if ( !v15 )
        break;
      v16 = v15->klass;
      v17 = (int)this;
      v18 = *(unsigned __int16 *)(&v15->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v15->klass->_2.bitflags2 + 3) )
      {
        v19 = (IClassBoardSquareModel_c **)&v16->_1.interfaceOffsets->offset;
        while ( *(v19 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v18;
          v19 += 2;
          if ( !v18 )
            goto LABEL_19;
        }
        v20 = (__int64)&v16->vtable[*(_DWORD *)v19 + 7].method;
      }
      else
      {
LABEL_19:
        v20 = sub_1C1B560(v3->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 7LL);
      }
      v22 = (*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v20)(v15, *(_QWORD *)(v20 + 8));
      if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
      this = (ClassBoardSquare_o *)ClassBoardUtility__GetClassBoardSkillIconName(v17, v22, v21);
      if ( !v11 )
        break;
      this = (ClassBoardSquare_o *)AtlasManagerUnit__SetUI(v11, v8, (System_String_o *)this, 0LL);
      LODWORD(v6) = iconSpritesNormal->max_length;
      if ( (__int64)++v7 >= (int)v6 )
        return;
    }
LABEL_26:
    sub_1BCB254(this, method);
  }
}


void __fastcall ClassBoardSquare__UpdateDraw(
        ClassBoardSquare_o *this,
        System_Nullable_AcquireFlag__o handoverFlag,
        const MethodInfo *method)
{
  bool hasValue; // w20
  ClassBoardSquare_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t Value; // w0
  const MethodInfo *v8; // x1
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  IClassBoardSquareModel_c *klass; // x8
  __int64 v11; // x9
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 p_method; // x0
  System_Nullable_AcquireFlag__o v14; // [xsp+8h] [xbp-28h] BYREF
  System_Nullable_Int32Enum__o v15; // 0:x0.8

  hasValue = handoverFlag.fields.hasValue;
  v4 = this;
  v14 = handoverFlag;
  if ( (byte_4B1FE78 & 1) == 0 )
  {
    sub_1BCAFF8(&IClassBoardSquareModel_TypeInfo, handoverFlag);
    sub_1BCAFF8(&Method_System_Nullable_AcquireFlag__get_HasValue__, v5);
    this = (ClassBoardSquare_o *)sub_1BCAFF8(&Method_System_Nullable_AcquireFlag__get_Value__, v6);
    byte_4B1FE78 = 1;
  }
  if ( !hasValue )
  {
    SquareModel_k__BackingField = v4->fields._SquareModel_k__BackingField;
    if ( !SquareModel_k__BackingField )
      ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_1BCB254)(this, handoverFlag);
    klass = SquareModel_k__BackingField->klass;
    v11 = *(unsigned __int16 *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3) )
    {
      p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
      {
        --v11;
        p_offset += 2;
        if ( !v11 )
          goto LABEL_14;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 15].method;
    }
    else
    {
LABEL_14:
      p_method = sub_1C1B560(v4->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 15LL);
    }
    Value = (*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD, _QWORD))p_method)(
              SquareModel_k__BackingField,
              0LL,
              *(_QWORD *)(p_method + 8));
    if ( Value )
      goto LABEL_5;
LABEL_19:
    ClassBoardSquare__DrawAvailable(v4, v8);
    return;
  }
  v15 = (System_Nullable_Int32Enum__o)&v14;
  Value = System_Nullable_Int32Enum___get_Value(
            v15,
            (const MethodInfo_37D91FC *)Method_System_Nullable_AcquireFlag__get_Value__);
  if ( !Value )
    goto LABEL_19;
LABEL_5:
  if ( (Value & 1) != 0 )
  {
    ClassBoardSquare__DrawAcquired(v4, v8);
  }
  else if ( (Value & 2) != 0 )
  {
    ClassBoardSquare__DrawNotConnected(v4, v8);
  }
  else if ( (Value & 8) != 0 )
  {
    ClassBoardSquare__DrawUnacquired(v4, v8);
  }
}


void __fastcall ClassBoardSquare__UpdateDrawFromAnimationEvent(ClassBoardSquare_o *this, const MethodInfo *method)
{
  this->fields.isUpdateDraw = 1;
}


System_Collections_IEnumerator_o *__fastcall ClassBoardSquare__WaitAnimationFinished(
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

  if ( (byte_4B1FE7F & 1) == 0 )
  {
    sub_1BCAFF8(&ClassBoardSquare__WaitAnimationFinished_d__52_TypeInfo, name);
    byte_4B1FE7F = 1;
  }
  v7 = sub_1BCB244(ClassBoardSquare__WaitAnimationFinished_d__52_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v7 + 32), (int32_t)this, v8, v9);
  *(_QWORD *)(v7 + 40) = name;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v7 + 40), (int32_t)name, v10, v11);
  *(_QWORD *)(v7 + 48) = endCallback;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v7 + 48), (int32_t)endCallback, v12, v13);
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall ClassBoardSquare___PlayEnableEffect_b__48_0(ClassBoardSquare_o *this, const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x0

  simpleAnimation = this->fields.simpleAnimation;
  if ( !simpleAnimation
    || (SimpleAnimation__Stop(simpleAnimation, 0LL),
        simpleAnimation = (SimpleAnimation_o *)this->fields.enableEffectPlayer,
        this->fields.isUpdateDraw = 1,
        !simpleAnimation) )
  {
    sub_1BCB254(simpleAnimation, method);
  }
  ClassBoardEffectPlayer__End((ClassBoardEffectPlayer_o *)simpleAnimation, 0LL);
}


void __fastcall ClassBoardSquare___PlayEnableEffect_b__48_1(ClassBoardSquare_o *this, const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x0

  simpleAnimation = this->fields.simpleAnimation;
  if ( !simpleAnimation
    || (SimpleAnimation__Stop(simpleAnimation, 0LL),
        simpleAnimation = (SimpleAnimation_o *)this->fields.enableEffectPlayer,
        this->fields.isUpdateDraw = 1,
        !simpleAnimation) )
  {
    sub_1BCB254(simpleAnimation, method);
  }
  ClassBoardEffectPlayer__End((ClassBoardEffectPlayer_o *)simpleAnimation, 0LL);
}


void __fastcall ClassBoardSquare___PlayGrandToClassTransition_b__37_0(
        ClassBoardSquare_o *this,
        const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x0

  simpleAnimation = this->fields.simpleAnimation;
  if ( !simpleAnimation )
    sub_1BCB254(0LL, method);
  SimpleAnimation__Stop(simpleAnimation, 0LL);
}


void __fastcall ClassBoardSquare___PlayReleaseEffect_b__47_0(ClassBoardSquare_o *this, const MethodInfo *method)
{
  ClassBoardEffectPlayer_o *releaseEffectPlayer; // x0

  releaseEffectPlayer = this->fields.releaseEffectPlayer;
  this->fields.isUpdateDraw = 1;
  if ( !releaseEffectPlayer )
    sub_1BCB254(0LL, method);
  ClassBoardEffectPlayer__End(releaseEffectPlayer, 0LL);
}


void __fastcall ClassBoardSquare__add_clickedEvent(
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

  if ( (byte_4B1FE72 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_ClassBoardSquare__TypeInfo, value);
    byte_4B1FE72 = 1;
  }
  clickedEvent = this->fields.clickedEvent;
  p_clickedEvent = &this->fields.clickedEvent;
  v6 = (System_Delegate_o *)clickedEvent;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( !v8 )
    {
      v10 = 0LL;
      goto LABEL_8;
    }
    v9 = v8;
    v10 = sub_1BCB134(v8, System_Action_ClassBoardSquare__TypeInfo);
    if ( !v10 )
      break;
LABEL_8:
    v11 = sub_1C05088(p_clickedEvent, v10, v6);
    v12 = v6 == (System_Delegate_o *)v11;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_1BCB514(v9);
  ClassBoardSquare__remove_clickedEvent(v13, v14, v15);
}


ClassBoardEffectPlayer_o *__fastcall ClassBoardSquare__get_EnableEffectPlayer(
        ClassBoardSquare_o *this,
        const MethodInfo *method)
{
  return this->fields.enableEffectPlayer;
}


ClassBoardEffectPlayer_o *__fastcall ClassBoardSquare__get_ReleaseEffectPlayer(
        ClassBoardSquare_o *this,
        const MethodInfo *method)
{
  return this->fields.releaseEffectPlayer;
}


IClassBoardSquareModel_o *__fastcall ClassBoardSquare__get_SquareModel(
        ClassBoardSquare_o *this,
        const MethodInfo *method)
{
  return this->fields._SquareModel_k__BackingField;
}


void __fastcall ClassBoardSquare__remove_clickedEvent(
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

  if ( (byte_4B1FE73 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_ClassBoardSquare__TypeInfo, value);
    byte_4B1FE73 = 1;
  }
  clickedEvent = this->fields.clickedEvent;
  p_clickedEvent = &this->fields.clickedEvent;
  v6 = (System_Delegate_o *)clickedEvent;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( !v8 )
    {
      v10 = 0LL;
      goto LABEL_8;
    }
    v9 = v8;
    v10 = sub_1BCB134(v8, System_Action_ClassBoardSquare__TypeInfo);
    if ( !v10 )
      break;
LABEL_8:
    v11 = sub_1C05088(p_clickedEvent, v10, v6);
    v12 = v6 == (System_Delegate_o *)v11;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_1BCB514(v9);
  ClassBoardSquare__get_ReleaseEffectPlayer(v13, v14);
}


void __fastcall ClassBoardSquare__set_SquareModel(
        ClassBoardSquare_o *this,
        IClassBoardSquareModel_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._SquareModel_k__BackingField = value;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields._SquareModel_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void __fastcall ClassBoardSquare__WaitAnimationFinished_d__52___ctor(
        ClassBoardSquare__WaitAnimationFinished_d__52_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall ClassBoardSquare__WaitAnimationFinished_d__52__MoveNext(
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
  __int64 p_method; // x0
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
  if ( (byte_4B1FE82 & 1) == 0 )
  {
    this = (ClassBoardSquare__WaitAnimationFinished_d__52_o *)sub_1BCAFF8(&SimpleAnimation_State_TypeInfo, method);
    byte_4B1FE82 = 1;
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
    State = SimpleAnimation__GetState((SimpleAnimation_o *)this, v2->fields.name, 0LL);
    v2->fields._state_5__2 = State;
    sub_1BCAF9C((CGThumbnailListItem_o *)&v2->fields._state_5__2, (int32_t)State, v6, v7);
LABEL_9:
    state_5__2 = v2->fields._state_5__2;
    if ( !state_5__2 )
      goto LABEL_26;
    klass = state_5__2->klass;
    v10 = *(unsigned __int16 *)(&state_5__2->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&state_5__2->klass->_2.bitflags2 + 3) )
    {
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v10;
        p_offset += 2;
        if ( !v10 )
          goto LABEL_14;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 13].method;
    }
    else
    {
LABEL_14:
      p_method = sub_1C1B560(v2->fields._state_5__2, SimpleAnimation_State_TypeInfo, 13LL);
    }
    if ( (*(float (__fastcall **)(struct SimpleAnimation_State_o *, _QWORD))p_method)(
           state_5__2,
           *(_QWORD *)(p_method + 8)) <= 0.0 )
    {
LABEL_26:
      ActionExtensions__Call(v2->fields.endCallback, 0LL);
      return 0;
    }
    v13 = v2->fields._state_5__2;
    if ( v13 )
    {
      v14 = v13->klass;
      v15 = *(unsigned __int16 *)(&v13->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v13->klass->_2.bitflags2 + 3) )
      {
        v16 = (SimpleAnimation_State_c **)&v14->_1.interfaceOffsets->offset;
        while ( *(v16 - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v15;
          v16 += 2;
          if ( !v15 )
            goto LABEL_22;
        }
        v17 = (__int64)&v14->vtable[*(_DWORD *)v16 + 5].method;
      }
      else
      {
LABEL_22:
        v17 = sub_1C1B560(v2->fields._state_5__2, SimpleAnimation_State_TypeInfo, 5LL);
      }
      if ( (*(float (__fastcall **)(struct SimpleAnimation_State_o *, _QWORD))v17)(v13, *(_QWORD *)(v17 + 8)) < 1.0 )
      {
        v2->fields.__2__current = 0LL;
        p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
        sub_1BCAF9C(p__2__current, 0, v18, v19);
        result = 1;
        LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
        return result;
      }
      goto LABEL_26;
    }
LABEL_28:
    sub_1BCB254(this, method);
  }
  return 0;
}


Il2CppObject *__fastcall ClassBoardSquare__WaitAnimationFinished_d__52__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ClassBoardSquare__WaitAnimationFinished_d__52_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn ClassBoardSquare__WaitAnimationFinished_d__52__System_Collections_IEnumerator_Reset(
        ClassBoardSquare__WaitAnimationFinished_d__52_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BCB00C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BCB244(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BCB00C(&Method_ClassBoardSquare__WaitAnimationFinished_d__52_System_Collections_IEnumerator_Reset__);
  sub_1BCB120(v3, v4);
}


Il2CppObject *__fastcall ClassBoardSquare__WaitAnimationFinished_d__52__System_Collections_IEnumerator_get_Current(
        ClassBoardSquare__WaitAnimationFinished_d__52_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall ClassBoardSquare__WaitAnimationFinished_d__52__System_IDisposable_Dispose(
        ClassBoardSquare__WaitAnimationFinished_d__52_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall ClassBoardSquare___c__DisplayClass45_0___ctor(
        ClassBoardSquare___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ClassBoardSquare___c__DisplayClass45_0___SetActiveArrayObject_b__0(
        ClassBoardSquare___c__DisplayClass45_0_o *this,
        UnityEngine_GameObject_o *x,
        const MethodInfo *method)
{
  ClassBoardSquare___c__DisplayClass45_0_o *v3; // x19

  if ( !x
    || (v3 = this,
        (this = (ClassBoardSquare___c__DisplayClass45_0_o *)UnityEngine_GameObject__get_gameObject(x, 0LL)) == 0LL) )
  {
    sub_1BCB254(this, x);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v3->fields.isActive, 0LL);
}