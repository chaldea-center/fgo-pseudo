void __fastcall ClassBoardSquare___ctor(ClassBoardSquare_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Int32_array **v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Int32_array **v24; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Int32_array **v31; // x1
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7

  if ( (byte_438D449 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_2982/*"BrightTurnTransition"*/);
    sub_B775C4(&StringLiteral_2979/*"BrightTurn"*/);
    sub_B775C4(&StringLiteral_2984/*"BrightTurnUnLock"*/);
    sub_B775C4(&StringLiteral_13249/*"SquareEnable"*/);
    sub_B775C4(&StringLiteral_2935/*"BlackOutTransition"*/);
    byte_438D449 = 1;
  }
  v9 = (System_Int32_array **)StringLiteral_2979/*"BrightTurn"*/;
  this->fields.enableAnimationName = (struct System_String_o *)StringLiteral_2979/*"BrightTurn"*/;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.enableAnimationName, v9, v2, v3, v4, v5, v6, v7);
  v10 = (System_Int32_array **)StringLiteral_13249/*"SquareEnable"*/;
  this->fields.releaseAnimationName = (struct System_String_o *)StringLiteral_13249/*"SquareEnable"*/;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.releaseAnimationName, v10, v11, v12, v13, v14, v15, v16);
  v17 = (System_Int32_array **)StringLiteral_2982/*"BrightTurnTransition"*/;
  this->fields.brightTurnTransitionAnimationName = (struct System_String_o *)StringLiteral_2982/*"BrightTurnTransition"*/;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.brightTurnTransitionAnimationName,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = (System_Int32_array **)StringLiteral_2935/*"BlackOutTransition"*/;
  this->fields.blackOutTransitionAnimationName = (struct System_String_o *)StringLiteral_2935/*"BlackOutTransition"*/;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.blackOutTransitionAnimationName,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = (System_Int32_array **)StringLiteral_2984/*"BrightTurnUnLock"*/;
  this->fields.unlockEnableAnimationName = (struct System_String_o *)StringLiteral_2984/*"BrightTurnUnLock"*/;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.unlockEnableAnimationName, v31, v32, v33, v34, v35, v36, v37);
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
    ((void (__fastcall *)(ClassBoardSquare_o *, _QWORD, Il2CppMethodPointer))klass->vtable._8_UpdateDraw.method)(
      this,
      0LL,
      klass->vtable._9_PlayReleaseEffect.methodPtr);
  }
}


void __fastcall ClassBoardSquare__OnClickSquare(ClassBoardSquare_o *this, const MethodInfo *method)
{
  struct System_Action_ClassBoardSquare__o *clickedEvent; // x0

  if ( (byte_438D43F & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_ClassBoardSquare__Invoke__);
    byte_438D43F = 1;
  }
  ((void (__fastcall *)(ClassBoardSquare_o *, void *))this->klass->vtable._11_PlayClickedSe.method)(
    this,
    this->klass[1]._1.image);
  clickedEvent = this->fields.clickedEvent;
  if ( clickedEvent )
    System_Action_Uri___Invoke(
      (System_Action_Uri__o *)clickedEvent,
      (System_Uri_o *)this,
      (const MethodInfo_26A087C *)Method_System_Action_ClassBoardSquare__Invoke__);
}


void __fastcall ClassBoardSquare__PlayClickedSe(ClassBoardSquare_o *this, const MethodInfo *method)
{
  _QWORD *v2; // x0
  System_Reflection_MethodBase_o *v3; // x0

  if ( (byte_438D446 & 1) == 0 )
  {
    sub_B775C4(&Method_ClassBoardSquare_PlayClickedSe__);
    byte_438D446 = 1;
  }
  v2 = Method_ClassBoardSquare_PlayClickedSe__;
  if ( (*((_BYTE *)Method_ClassBoardSquare_PlayClickedSe__ + 75) & 2) != 0 )
    v2 = (_QWORD *)sub_B775CC(Method_ClassBoardSquare_PlayClickedSe__);
  v3 = (System_Reflection_MethodBase_o *)sub_B775A8(v2, v2[3]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 0, 0LL);
}


void __fastcall ClassBoardSquare__PlayEnableEffect(ClassBoardSquare_o *this, const MethodInfo *method)
{
  ClassBoardEffectPlayer_o *enableEffectPlayer; // x0
  System_String_o *unlockEnableAnimationName; // x20
  System_Action_o *v5; // x0
  __int64 *v6; // x8
  System_Action_o *v7; // x21
  const MethodInfo *v8; // x3

  if ( (byte_438D445 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_ClassBoardEffectPlayer_GetData_bool___);
    sub_B775C4(&Method_ClassBoardSquare__PlayEnableEffect_b__46_0__);
    sub_B775C4(&Method_ClassBoardSquare__PlayEnableEffect_b__46_1__);
    byte_438D445 = 1;
  }
  enableEffectPlayer = this->fields.enableEffectPlayer;
  if ( !enableEffectPlayer )
    sub_B7769C(0LL, method);
  if ( ClassBoardEffectPlayer__GetData_bool_(
         enableEffectPlayer,
         (const MethodInfo_1C6C1C8 *)Method_ClassBoardEffectPlayer_GetData_bool___) )
  {
    unlockEnableAnimationName = this->fields.unlockEnableAnimationName;
    v5 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    v6 = &Method_ClassBoardSquare__PlayEnableEffect_b__46_0__;
  }
  else
  {
    unlockEnableAnimationName = this->fields.enableAnimationName;
    v5 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    v6 = &Method_ClassBoardSquare__PlayEnableEffect_b__46_1__;
  }
  v7 = v5;
  System_Action___ctor(v5, (Il2CppObject *)this, *v6, 0LL);
  ClassBoardSquare__PlaySimpleAnimation(this, unlockEnableAnimationName, v7, v8);
}


void __fastcall ClassBoardSquare__PlayReleaseEffect(ClassBoardSquare_o *this, const MethodInfo *method)
{
  System_String_o *releaseAnimationName; // x20
  System_Action_o *v4; // x21
  const MethodInfo *v5; // x3

  if ( (byte_438D444 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_ClassBoardSquare__PlayReleaseEffect_b__45_0__);
    byte_438D444 = 1;
  }
  releaseAnimationName = this->fields.releaseAnimationName;
  v4 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_ClassBoardSquare__PlayReleaseEffect_b__45_0__, 0LL);
  ClassBoardSquare__PlaySimpleAnimation(this, releaseAnimationName, v4, v5);
}


void __fastcall ClassBoardSquare__PlaySimpleAnimation(
        ClassBoardSquare_o *this,
        System_String_o *name,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x0
  const MethodInfo *v8; // x3
  System_Collections_IEnumerator_o *v9; // x1

  simpleAnimation = this->fields.simpleAnimation;
  if ( !simpleAnimation )
    sub_B7769C(0LL, name);
  SimpleAnimation__Play_16815192(simpleAnimation, name, 0LL);
  v9 = ClassBoardSquare__WaitAnimationFinished(this, name, endCallback, v8);
  UnityEngine_MonoBehaviour__StartCoroutine_36304832((UnityEngine_MonoBehaviour_o *)this, v9, 0LL);
}


void __fastcall ClassBoardSquare__PlayTransition(ClassBoardSquare_o *this, const MethodInfo *method)
{
  ClassBoardSquare_o *v2; // x19
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  IClassBoardSquareModel_c *klass; // x8
  unsigned __int64 v5; // x10
  IClassBoardSquareModel_c **p_offset; // x11
  __int64 p_method; // x0
  int v8; // w0
  __int64 v9; // x2
  const MethodInfo *v10; // x3
  System_Enum_o *v11; // x20
  __int64 v12; // x2
  System_String_o *brightTurnTransitionAnimationName; // x1
  int v14; // [xsp+8h] [xbp-18h] BYREF
  int v15; // [xsp+Ch] [xbp-14h] BYREF

  v2 = this;
  if ( (byte_438D440 & 1) == 0 )
  {
    sub_B775C4(&AcquireFlag_TypeInfo);
    this = (ClassBoardSquare_o *)sub_B775C4(&IClassBoardSquareModel_TypeInfo);
    byte_438D440 = 1;
  }
  SquareModel_k__BackingField = v2->fields._SquareModel_k__BackingField;
  if ( !SquareModel_k__BackingField )
    goto LABEL_16;
  klass = SquareModel_k__BackingField->klass;
  if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
  {
    v5 = 0LL;
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v5;
      p_offset += 2;
      if ( v5 >= *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 13].method;
  }
  else
  {
LABEL_8:
    p_method = sub_B0F4C0(v2->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 13LL);
  }
  v8 = (*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD, _QWORD))p_method)(
         SquareModel_k__BackingField,
         0LL,
         *(_QWORD *)(p_method + 8));
  if ( !v8 )
    goto LABEL_14;
  v15 = v8;
  v11 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v15, v9);
  v14 = 2;
  this = (ClassBoardSquare_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v14, v12);
  if ( !v11 )
LABEL_16:
    sub_B7769C(this, method);
  if ( !System_Enum__HasFlag(v11, (System_Enum_o *)this, 0LL) )
  {
LABEL_14:
    brightTurnTransitionAnimationName = v2->fields.brightTurnTransitionAnimationName;
    goto LABEL_15;
  }
  brightTurnTransitionAnimationName = v2->fields.blackOutTransitionAnimationName;
LABEL_15:
  ClassBoardSquare__PlaySimpleAnimation(v2, brightTurnTransitionAnimationName, 0LL, v10);
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
  ClassBoardSquare___c__DisplayClass43_0_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v9; // x20

  if ( (byte_438D442 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_GameObject___ctor__);
    sub_B775C4(&System_Action_GameObject__TypeInfo);
    sub_B775C4(&Method_BasicHelper_ForEach_GameObject___);
    sub_B775C4(&Method_ClassBoardSquare___c__DisplayClass43_0__SetActiveArrayObject_b__0__);
    sub_B775C4(&ClassBoardSquare___c__DisplayClass43_0_TypeInfo);
    byte_438D442 = 1;
  }
  v6 = (ClassBoardSquare___c__DisplayClass43_0_o *)sub_B77694(ClassBoardSquare___c__DisplayClass43_0_TypeInfo);
  ClassBoardSquare___c__DisplayClass43_0___ctor(v6, 0LL);
  if ( !v6 )
    sub_B7769C(v7, v8);
  v6->fields.isActive = isActive;
  v9 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B77694(System_Action_GameObject__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v9,
    (Il2CppObject *)v6,
    Method_ClassBoardSquare___c__DisplayClass43_0__SetActiveArrayObject_b__0__,
    (const MethodInfo_26A0868 *)Method_System_Action_GameObject___ctor__);
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    (System_Collections_Generic_IEnumerable_T__o *)objects,
    (System_Action_T__o *)v9,
    (const MethodInfo_1C676E8 *)Method_BasicHelper_ForEach_GameObject___);
}


void __fastcall ClassBoardSquare__SetActiveObject(
        ClassBoardSquare_o *this,
        UnityEngine_GameObject_o *obj,
        bool isActive,
        const MethodInfo *method)
{
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_438D443 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438D443 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)obj, 0LL, 0LL);
  if ( v6 )
  {
    if ( !obj )
      sub_B7769C(v6, v7);
    UnityEngine_GameObject__SetActive(obj, isActive, 0LL);
  }
}


void __fastcall ClassBoardSquare__SetSelectedEffectActive(
        ClassBoardSquare_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_Object_o *selectedEffect; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_438D448 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438D448 = 1;
  }
  selectedEffect = (UnityEngine_Object_o *)this->fields.selectedEffect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(selectedEffect, 0LL, 0LL) )
  {
    v7 = this->fields.selectedEffect;
    if ( !v7 )
      sub_B7769C(0LL, v6);
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  UnityEngine_Object_o *transform; // x0
  __int64 v11; // x1
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x22
  IClassBoardSquareModel_c *klass; // x8
  UnityEngine_Transform_o *v14; // x21
  unsigned __int64 v15; // x10
  IClassBoardSquareModel_c **p_offset; // x11
  __int64 p_method; // x0
  int v18; // s0
  UnityEngine_Object_o *v21; // x21
  IClassBoardSquareModel_c *v22; // x8
  System_String_o *v23; // x22
  unsigned __int64 v24; // x10
  int32_t *v25; // x11
  __int64 v26; // x0
  System_String_o *v27; // x0
  System_String_o *v28; // x0
  System_Int32_array **name; // x20
  __int64 v30; // x21
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  struct ClassBoardEffectPlayer_o *releaseEffectPlayer; // x20
  System_Int32_array **v44; // x21
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Int32_array **v51; // x20
  __int64 v52; // x21
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  struct ClassBoardEffectPlayer_o *enableEffectPlayer; // x20
  System_Action_o *v66; // x21
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  int v73; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_438D43D & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&ClassBoardEffectPlayer_TypeInfo);
    sub_B775C4(&IClassBoardSquareModel_TypeInfo);
    sub_B775C4(&StringLiteral_16197/*"_"*/);
    byte_438D43D = 1;
  }
  v73 = 0;
  this->fields._SquareModel_k__BackingField = squareModel;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._SquareModel_k__BackingField,
    (System_Int32_array **)squareModel,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  transform = (UnityEngine_Object_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  SquareModel_k__BackingField = this->fields._SquareModel_k__BackingField;
  if ( !SquareModel_k__BackingField )
    goto LABEL_25;
  klass = SquareModel_k__BackingField->klass;
  v14 = (UnityEngine_Transform_o *)transform;
  if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
  {
    v15 = 0LL;
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v15;
      p_offset += 2;
      if ( v15 >= *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 3].method;
  }
  else
  {
LABEL_8:
    p_method = sub_B0F4C0(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 3LL);
  }
  transform = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))p_method)(
                                        SquareModel_k__BackingField,
                                        *(_QWORD *)(p_method + 8));
  if ( !v14 )
    goto LABEL_25;
  UnityEngine_Transform__set_localPosition(v14, *(UnityEngine_Vector3_o *)&v18, 0LL);
  ((void (__fastcall *)(ClassBoardSquare_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._8_UpdateDraw.method)(
    this,
    0LL,
    this->klass->vtable._9_PlayReleaseEffect.methodPtr);
  transform = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_25;
  v21 = transform;
  transform = (UnityEngine_Object_o *)UnityEngine_Object__get_name(transform, 0LL);
  if ( !squareModel )
    goto LABEL_25;
  v22 = squareModel->klass;
  v23 = (System_String_o *)transform;
  if ( *(_WORD *)&squareModel->klass->_2.bitflags1 )
  {
    v24 = 0LL;
    v25 = &v22->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v25 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v24;
      v25 += 4;
      if ( v24 >= *(unsigned __int16 *)&squareModel->klass->_2.bitflags1 )
        goto LABEL_17;
    }
    v26 = (__int64)&v22->vtable[*v25].method;
  }
  else
  {
LABEL_17:
    v26 = sub_B0F4C0(squareModel, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  v73 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v26)(squareModel, *(_QWORD *)(v26 + 8));
  v27 = System_Int32__ToString((int32_t)&v73, 0LL);
  v28 = System_String__Concat_44904220(v23, (System_String_o *)StringLiteral_16197/*"_"*/, v27, 0LL);
  UnityEngine_Object__set_name(v21, v28, 0LL);
  transform = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_25;
  name = (System_Int32_array **)UnityEngine_Object__get_name(transform, 0LL);
  v30 = sub_B77694(ClassBoardEffectPlayer_TypeInfo);
  System_Object___ctor((Il2CppObject *)v30, 0LL);
  *(_QWORD *)(v30 + 16) = name;
  sub_B77560((BattleServantConfConponent_o *)(v30 + 16), name, v31, v32, v33, v34, v35, v36);
  this->fields.releaseEffectPlayer = (struct ClassBoardEffectPlayer_o *)v30;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.releaseEffectPlayer,
    (System_Int32_array **)v30,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  releaseEffectPlayer = this->fields.releaseEffectPlayer;
  transform = (UnityEngine_Object_o *)sub_B77694(System_Action_TypeInfo);
  if ( !this )
    goto LABEL_25;
  v44 = (System_Int32_array **)transform;
  System_Action___ctor(
    (System_Action_o *)transform,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._10_PlayEnableEffect.methodPtr,
    0LL);
  if ( !releaseEffectPlayer )
    goto LABEL_25;
  releaseEffectPlayer->fields.playCallback = (struct System_Action_o *)v44;
  sub_B77560(
    (BattleServantConfConponent_o *)&releaseEffectPlayer->fields.playCallback,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
  transform = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_25;
  v51 = (System_Int32_array **)UnityEngine_Object__get_name(transform, 0LL);
  v52 = sub_B77694(ClassBoardEffectPlayer_TypeInfo);
  System_Object___ctor((Il2CppObject *)v52, 0LL);
  *(_QWORD *)(v52 + 16) = v51;
  sub_B77560((BattleServantConfConponent_o *)(v52 + 16), v51, v53, v54, v55, v56, v57, v58);
  this->fields.enableEffectPlayer = (struct ClassBoardEffectPlayer_o *)v52;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.enableEffectPlayer,
    (System_Int32_array **)v52,
    v59,
    v60,
    v61,
    v62,
    v63,
    v64);
  enableEffectPlayer = this->fields.enableEffectPlayer;
  v66 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v66, (Il2CppObject *)this, (intptr_t)this->klass->vtable._11_PlayClickedSe.methodPtr, 0LL);
  if ( !enableEffectPlayer )
LABEL_25:
    sub_B7769C(transform, v11);
  enableEffectPlayer->fields.playCallback = v66;
  sub_B77560(
    (BattleServantConfConponent_o *)&enableEffectPlayer->fields.playCallback,
    (System_Int32_array **)v66,
    v67,
    v68,
    v69,
    v70,
    v71,
    v72);
  ((void (__fastcall *)(ClassBoardSquare_o *, Il2CppMethodPointer))this->klass->vtable._6_SetupIcon.method)(
    this,
    this->klass->vtable._7_PlayTransition.methodPtr);
}


void __fastcall ClassBoardSquare__SetupIcon(ClassBoardSquare_o *this, const MethodInfo *method)
{
  ClassBoardSquare_o *v2; // x19
  struct UISprite_array *iconSpritesNormal; // x24
  __int64 v4; // x8
  unsigned __int64 v5; // x25
  UISprite_o *v6; // x20
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x22
  IClassBoardSquareModel_c *klass; // x8
  AtlasManagerUnit_o *v9; // x21
  unsigned __int64 v10; // x10
  IClassBoardSquareModel_c **p_offset; // x11
  __int64 p_method; // x0
  struct IClassBoardSquareModel_o *v13; // x23
  IClassBoardSquareModel_c *v14; // x8
  int32_t v15; // w22
  unsigned __int64 v16; // x10
  IClassBoardSquareModel_c **v17; // x11
  __int64 v18; // x0
  const MethodInfo *v19; // x2
  int32_t v20; // w23
  __int64 v21; // x0

  v2 = this;
  if ( (byte_438D43E & 1) == 0 )
  {
    sub_B775C4(&ClassBoardUtility_TypeInfo);
    this = (ClassBoardSquare_o *)sub_B775C4(&IClassBoardSquareModel_TypeInfo);
    byte_438D43E = 1;
  }
  iconSpritesNormal = v2->fields.iconSpritesNormal;
  if ( !iconSpritesNormal )
    goto LABEL_27;
  v4 = *(_QWORD *)&iconSpritesNormal->max_length;
  if ( (int)v4 >= 1 )
  {
    v5 = 0LL;
    while ( 1 )
    {
      if ( v5 >= (unsigned int)v4 )
      {
        v21 = sub_B776C8(this);
        sub_B77668(v21, 0LL);
      }
      v6 = iconSpritesNormal->m_Items[v5];
      this = (ClassBoardSquare_o *)ClassBoardGlobalObject__get_IconAtlasManagerUnit((const MethodInfo *)this);
      SquareModel_k__BackingField = v2->fields._SquareModel_k__BackingField;
      if ( !SquareModel_k__BackingField )
        break;
      klass = SquareModel_k__BackingField->klass;
      v9 = (AtlasManagerUnit_o *)this;
      if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
      {
        v10 = 0LL;
        p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
        {
          ++v10;
          p_offset += 2;
          if ( v10 >= *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
            goto LABEL_12;
        }
        p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 2].method;
      }
      else
      {
LABEL_12:
        p_method = sub_B0F4C0(v2->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 2LL);
      }
      this = (ClassBoardSquare_o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))p_method)(
                                     SquareModel_k__BackingField,
                                     *(_QWORD *)(p_method + 8));
      v13 = v2->fields._SquareModel_k__BackingField;
      if ( !v13 )
        break;
      v14 = v13->klass;
      v15 = (int)this;
      if ( *(_WORD *)&v13->klass->_2.bitflags1 )
      {
        v16 = 0LL;
        v17 = (IClassBoardSquareModel_c **)&v14->_1.interfaceOffsets->offset;
        while ( *(v17 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          ++v16;
          v17 += 2;
          if ( v16 >= *(unsigned __int16 *)&v13->klass->_2.bitflags1 )
            goto LABEL_19;
        }
        v18 = (__int64)&v14->vtable[*(_DWORD *)v17 + 7].method;
      }
      else
      {
LABEL_19:
        v18 = sub_B0F4C0(v2->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 7LL);
      }
      v20 = (*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v18)(v13, *(_QWORD *)(v18 + 8));
      if ( (BYTE3(ClassBoardUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ClassBoardUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
      }
      this = (ClassBoardSquare_o *)ClassBoardUtility__GetClassBoardSkillIconName(v15, v20, v19);
      if ( !v9 )
        break;
      this = (ClassBoardSquare_o *)AtlasManagerUnit__SetUI(v9, v6, (System_String_o *)this, 0LL);
      LODWORD(v4) = iconSpritesNormal->max_length;
      if ( (__int64)++v5 >= (int)v4 )
        return;
    }
LABEL_27:
    sub_B7769C(this, method);
  }
}


void __fastcall ClassBoardSquare__UpdateDraw(
        ClassBoardSquare_o *this,
        System_Nullable_AcquireFlag__o handoverFlag,
        const MethodInfo *method)
{
  ClassBoardSquare_o *v4; // x19
  int32_t Value; // w0
  const MethodInfo *v6; // x1
  __int64 v7; // x2
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  IClassBoardSquareModel_c *klass; // x8
  unsigned __int64 v10; // x10
  IClassBoardSquareModel_c **p_offset; // x11
  __int64 p_method; // x0
  int v13; // w20
  System_Enum_o *v14; // x21
  __int64 v15; // x2
  const MethodInfo *v16; // x1
  __int64 v17; // x2
  System_Enum_o *v18; // x21
  __int64 v19; // x2
  const MethodInfo *v20; // x1
  __int64 v21; // x2
  System_Enum_o *v22; // x20
  __int64 v23; // x2
  const MethodInfo *v24; // x1
  int v25; // [xsp+0h] [xbp-30h] BYREF
  int32_t v26; // [xsp+4h] [xbp-2Ch] BYREF
  System_Nullable_AcquireFlag__o v27; // [xsp+8h] [xbp-28h] BYREF
  System_Nullable_T__o v28; // 0:x0.16

  v4 = this;
  v27 = handoverFlag;
  if ( (byte_438D441 & 1) == 0 )
  {
    sub_B775C4(&AcquireFlag_TypeInfo);
    sub_B775C4(&IClassBoardSquareModel_TypeInfo);
    sub_B775C4(&Method_System_Nullable_AcquireFlag__get_HasValue__);
    this = (ClassBoardSquare_o *)sub_B775C4(&Method_System_Nullable_AcquireFlag__get_Value__);
    byte_438D441 = 1;
  }
  if ( (*(_QWORD *)&handoverFlag & 0xFF00000000LL) != 0 )
  {
    v28.fields.value = (Il2CppObject *)&v27;
    *(_QWORD *)&v28.fields.has_value = Method_System_Nullable_AcquireFlag__get_Value__;
    Value = System_Nullable_Int32Enum___get_Value(v28, (const MethodInfo_2476994 *)method);
  }
  else
  {
    SquareModel_k__BackingField = v4->fields._SquareModel_k__BackingField;
    if ( !SquareModel_k__BackingField )
      goto LABEL_25;
    klass = SquareModel_k__BackingField->klass;
    if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
    {
      v10 = 0LL;
      p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
      {
        ++v10;
        p_offset += 2;
        if ( v10 >= *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 13].method;
    }
    else
    {
LABEL_10:
      p_method = sub_B0F4C0(v4->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 13LL);
    }
    Value = (*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD, _QWORD))p_method)(
              SquareModel_k__BackingField,
              0LL,
              *(_QWORD *)(p_method + 8));
  }
  v13 = Value;
  if ( !Value )
  {
    ClassBoardSquare__DrawAvailable(v4, v6);
    return;
  }
  v26 = Value;
  v14 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v26, v7);
  v25 = 1;
  this = (ClassBoardSquare_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v25, v15);
  if ( !v14 )
    goto LABEL_25;
  if ( System_Enum__HasFlag(v14, (System_Enum_o *)this, 0LL) )
  {
    ClassBoardSquare__DrawAcquired(v4, v16);
    return;
  }
  v26 = v13;
  v18 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v26, v17);
  v25 = 2;
  this = (ClassBoardSquare_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v25, v19);
  if ( !v18 )
    goto LABEL_25;
  if ( System_Enum__HasFlag(v18, (System_Enum_o *)this, 0LL) )
  {
    ClassBoardSquare__DrawNotConnected(v4, v20);
    return;
  }
  v26 = v13;
  v22 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v26, v21);
  v25 = 8;
  this = (ClassBoardSquare_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v25, v23);
  if ( !v22 )
LABEL_25:
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_B7769C)(this, handoverFlag);
  if ( System_Enum__HasFlag(v22, (System_Enum_o *)this, 0LL) )
    ClassBoardSquare__DrawUnacquired(v4, v24);
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
  __int64 v8; // x0
  __int64 v9; // x1
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

  if ( (byte_438D447 & 1) == 0 )
  {
    sub_B775C4(&ClassBoardSquare__WaitAnimationFinished_d__49_TypeInfo);
    byte_438D447 = 1;
  }
  v7 = sub_B77694(ClassBoardSquare__WaitAnimationFinished_d__49_TypeInfo);
  ClassBoardSquare__WaitAnimationFinished_d__49___ctor((ClassBoardSquare__WaitAnimationFinished_d__49_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_B7769C(v8, v9);
  *(_QWORD *)(v7 + 32) = this;
  sub_B77560((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 40) = name;
  sub_B77560((BattleServantConfConponent_o *)(v7 + 40), (System_Int32_array **)name, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v7 + 48) = endCallback;
  sub_B77560(
    (BattleServantConfConponent_o *)(v7 + 48),
    (System_Int32_array **)endCallback,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall ClassBoardSquare___PlayEnableEffect_b__46_0(ClassBoardSquare_o *this, const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x0

  simpleAnimation = this->fields.simpleAnimation;
  if ( !simpleAnimation
    || (SimpleAnimation__Stop(simpleAnimation, 0LL),
        simpleAnimation = (SimpleAnimation_o *)this->fields.enableEffectPlayer,
        this->fields.isUpdateDraw = 1,
        !simpleAnimation) )
  {
    sub_B7769C(simpleAnimation, method);
  }
  ClassBoardEffectPlayer__End((ClassBoardEffectPlayer_o *)simpleAnimation, method);
}


void __fastcall ClassBoardSquare___PlayEnableEffect_b__46_1(ClassBoardSquare_o *this, const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x0

  simpleAnimation = this->fields.simpleAnimation;
  if ( !simpleAnimation
    || (SimpleAnimation__Stop(simpleAnimation, 0LL),
        simpleAnimation = (SimpleAnimation_o *)this->fields.enableEffectPlayer,
        this->fields.isUpdateDraw = 1,
        !simpleAnimation) )
  {
    sub_B7769C(simpleAnimation, method);
  }
  ClassBoardEffectPlayer__End((ClassBoardEffectPlayer_o *)simpleAnimation, method);
}


void __fastcall ClassBoardSquare___PlayReleaseEffect_b__45_0(ClassBoardSquare_o *this, const MethodInfo *method)
{
  ClassBoardEffectPlayer_o *releaseEffectPlayer; // x0

  releaseEffectPlayer = this->fields.releaseEffectPlayer;
  this->fields.isUpdateDraw = 1;
  if ( !releaseEffectPlayer )
    sub_B7769C(0LL, method);
  ClassBoardEffectPlayer__End(releaseEffectPlayer, method);
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
  __int64 v9; // x0
  bool v10; // zf
  ClassBoardSquare_o *v11; // x0
  System_Action_ClassBoardSquare__o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_438D43B & 1) == 0 )
  {
    sub_B775C4(&System_Action_ClassBoardSquare__TypeInfo);
    byte_438D43B = 1;
  }
  clickedEvent = this->fields.clickedEvent;
  p_clickedEvent = &this->fields.clickedEvent;
  v6 = (System_Delegate_o *)clickedEvent;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_ClassBoardSquare__c *)v8->klass != System_Action_ClassBoardSquare__TypeInfo )
        break;
    }
    v9 = sub_B6BFDC(p_clickedEvent, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B77990(v8);
  ClassBoardSquare__remove_clickedEvent(v11, v12, v13);
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
  __int64 v9; // x0
  bool v10; // zf
  ClassBoardSquare_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_438D43C & 1) == 0 )
  {
    sub_B775C4(&System_Action_ClassBoardSquare__TypeInfo);
    byte_438D43C = 1;
  }
  clickedEvent = this->fields.clickedEvent;
  p_clickedEvent = &this->fields.clickedEvent;
  v6 = (System_Delegate_o *)clickedEvent;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_ClassBoardSquare__c *)v8->klass != System_Action_ClassBoardSquare__TypeInfo )
        break;
    }
    v9 = sub_B6BFDC(p_clickedEvent, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B77990(v8);
  ClassBoardSquare__get_ReleaseEffectPlayer(v11, v12);
}


void __fastcall ClassBoardSquare__set_SquareModel(
        ClassBoardSquare_o *this,
        IClassBoardSquareModel_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._SquareModel_k__BackingField = value;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._SquareModel_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ClassBoardSquare__WaitAnimationFinished_d__49___ctor(
        ClassBoardSquare__WaitAnimationFinished_d__49_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall ClassBoardSquare__WaitAnimationFinished_d__49__MoveNext(
        ClassBoardSquare__WaitAnimationFinished_d__49_o *this,
        const MethodInfo *method)
{
  ClassBoardSquare__WaitAnimationFinished_d__49_o *v2; // x19
  int32_t _1__state; // w8
  struct ClassBoardSquare_o *_4__this; // x8
  struct SimpleAnimation_State_o **p_state_5__2; // x20
  struct SimpleAnimation_State_o *v6; // x21
  SimpleAnimation_State_c *klass; // x8
  unsigned __int64 v8; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  struct SimpleAnimation_State_o *v11; // x20
  SimpleAnimation_State_c *v12; // x8
  unsigned __int64 v13; // x10
  SimpleAnimation_State_c **v14; // x11
  __int64 v15; // x0
  bool result; // w0
  Il2CppObject **p__2__current; // x19

  v2 = this;
  if ( (byte_438859A & 1) == 0 )
  {
    this = (ClassBoardSquare__WaitAnimationFinished_d__49_o *)sub_B775C4(&SimpleAnimation_State_TypeInfo);
    byte_438859A = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state == 1 )
  {
    p_state_5__2 = &v2->fields._state_5__2;
    v2->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    _4__this = v2->fields.__4__this;
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_28;
    this = (ClassBoardSquare__WaitAnimationFinished_d__49_o *)_4__this->fields.simpleAnimation;
    if ( !this )
      goto LABEL_28;
    p_state_5__2 = &v2->fields._state_5__2;
    v2->fields._state_5__2 = SimpleAnimation__GetState((SimpleAnimation_o *)this, v2->fields.name, 0LL);
    sub_B77560(&v2->fields._state_5__2);
  }
  v6 = *p_state_5__2;
  if ( !*p_state_5__2 )
    goto LABEL_25;
  klass = v6->klass;
  if ( *(_WORD *)&v6->klass->_2.bitflags1 )
  {
    v8 = 0LL;
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v8;
      p_offset += 2;
      if ( v8 >= *(unsigned __int16 *)&v6->klass->_2.bitflags1 )
        goto LABEL_14;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 13].method;
  }
  else
  {
LABEL_14:
    p_method = sub_B0F4C0(*p_state_5__2, SimpleAnimation_State_TypeInfo, 13LL);
  }
  if ( (*(float (__fastcall **)(struct SimpleAnimation_State_o *, _QWORD))p_method)(v6, *(_QWORD *)(p_method + 8)) <= 0.0 )
    goto LABEL_25;
  v11 = *p_state_5__2;
  if ( !v11 )
LABEL_28:
    sub_B7769C(this, method);
  v12 = v11->klass;
  if ( *(_WORD *)&v11->klass->_2.bitflags1 )
  {
    v13 = 0LL;
    v14 = (SimpleAnimation_State_c **)&v12->_1.interfaceOffsets->offset;
    while ( *(v14 - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v13;
      v14 += 2;
      if ( v13 >= *(unsigned __int16 *)&v11->klass->_2.bitflags1 )
        goto LABEL_22;
    }
    v15 = (__int64)&v12->vtable[*(_DWORD *)v14 + 5].method;
  }
  else
  {
LABEL_22:
    v15 = sub_B0F4C0(v11, SimpleAnimation_State_TypeInfo, 5LL);
  }
  if ( (*(float (__fastcall **)(struct SimpleAnimation_State_o *, _QWORD))v15)(v11, *(_QWORD *)(v15 + 8)) >= 1.0 )
  {
LABEL_25:
    ActionExtensions__Call(v2->fields.endCallback, 0LL);
    return 0;
  }
  v2->fields.__2__current = 0LL;
  p__2__current = &v2->fields.__2__current;
  sub_B77560(p__2__current);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


Il2CppObject *__fastcall ClassBoardSquare__WaitAnimationFinished_d__49__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ClassBoardSquare__WaitAnimationFinished_d__49_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn ClassBoardSquare__WaitAnimationFinished_d__49__System_Collections_IEnumerator_Reset(
        ClassBoardSquare__WaitAnimationFinished_d__49_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B775C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B77694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B775C8(&Method_ClassBoardSquare__WaitAnimationFinished_d__49_System_Collections_IEnumerator_Reset__);
  sub_B77668(v3, v4);
}


Il2CppObject *__fastcall ClassBoardSquare__WaitAnimationFinished_d__49__System_Collections_IEnumerator_get_Current(
        ClassBoardSquare__WaitAnimationFinished_d__49_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall ClassBoardSquare__WaitAnimationFinished_d__49__System_IDisposable_Dispose(
        ClassBoardSquare__WaitAnimationFinished_d__49_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall ClassBoardSquare___c__DisplayClass43_0___ctor(
        ClassBoardSquare___c__DisplayClass43_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ClassBoardSquare___c__DisplayClass43_0___SetActiveArrayObject_b__0(
        ClassBoardSquare___c__DisplayClass43_0_o *this,
        UnityEngine_GameObject_o *x,
        const MethodInfo *method)
{
  ClassBoardSquare___c__DisplayClass43_0_o *v3; // x19

  if ( !x
    || (v3 = this,
        (this = (ClassBoardSquare___c__DisplayClass43_0_o *)UnityEngine_GameObject__get_gameObject(x, 0LL)) == 0LL) )
  {
    sub_B7769C(this, x);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v3->fields.isActive, 0LL);
}