void __fastcall ClassBoardSquare___ctor(ClassBoardSquare_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Int32_array **v13; // x1
  System_Int32_array **v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Int32_array **v21; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Int32_array **v28; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Int32_array **v35; // x1
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7

  if ( (byte_42146AC & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_2883/*"BrightTurnTransition"*/, method);
    sub_B0D8A4(&StringLiteral_2880/*"BrightTurn"*/, v9);
    sub_B0D8A4(&StringLiteral_2885/*"BrightTurnUnLock"*/, v10);
    sub_B0D8A4(&StringLiteral_13050/*"SquareEnable"*/, v11);
    sub_B0D8A4(&StringLiteral_2836/*"BlackOutTransition"*/, v12);
    byte_42146AC = 1;
  }
  v13 = (System_Int32_array **)StringLiteral_2880/*"BrightTurn"*/;
  this->fields.enableAnimationName = (struct System_String_o *)StringLiteral_2880/*"BrightTurn"*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.enableAnimationName, v13, v2, v3, v4, v5, v6, v7);
  v14 = (System_Int32_array **)StringLiteral_13050/*"SquareEnable"*/;
  this->fields.releaseAnimationName = (struct System_String_o *)StringLiteral_13050/*"SquareEnable"*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.releaseAnimationName, v14, v15, v16, v17, v18, v19, v20);
  v21 = (System_Int32_array **)StringLiteral_2883/*"BrightTurnTransition"*/;
  this->fields.brightTurnTransitionAnimationName = (struct System_String_o *)StringLiteral_2883/*"BrightTurnTransition"*/;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.brightTurnTransitionAnimationName,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  v28 = (System_Int32_array **)StringLiteral_2836/*"BlackOutTransition"*/;
  this->fields.blackOutTransitionAnimationName = (struct System_String_o *)StringLiteral_2836/*"BlackOutTransition"*/;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.blackOutTransitionAnimationName,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  v35 = (System_Int32_array **)StringLiteral_2885/*"BrightTurnUnLock"*/;
  this->fields.unlockEnableAnimationName = (struct System_String_o *)StringLiteral_2885/*"BrightTurnUnLock"*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.unlockEnableAnimationName, v35, v36, v37, v38, v39, v40, v41);
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

  if ( (byte_42146A2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_ClassBoardSquare__Invoke__, method);
    byte_42146A2 = 1;
  }
  ((void (__fastcall *)(ClassBoardSquare_o *, void *))this->klass->vtable._11_PlayClickedSe.method)(
    this,
    this->klass[1]._1.image);
  clickedEvent = this->fields.clickedEvent;
  if ( clickedEvent )
    System_Action_Uri___Invoke(
      (System_Action_Uri__o *)clickedEvent,
      (System_Uri_o *)this,
      (const MethodInfo_246EA50 *)Method_System_Action_ClassBoardSquare__Invoke__);
}


void __fastcall ClassBoardSquare__PlayClickedSe(ClassBoardSquare_o *this, const MethodInfo *method)
{
  _QWORD *v2; // x0
  System_Reflection_MethodBase_o *v3; // x0

  if ( (byte_42146A9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_ClassBoardSquare_PlayClickedSe__, method);
    byte_42146A9 = 1;
  }
  v2 = Method_ClassBoardSquare_PlayClickedSe__;
  if ( (*((_BYTE *)Method_ClassBoardSquare_PlayClickedSe__ + 75) & 2) != 0 )
    v2 = (_QWORD *)sub_B0D8AC(Method_ClassBoardSquare_PlayClickedSe__);
  v3 = (System_Reflection_MethodBase_o *)sub_B0D888(v2, v2[3]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 0, 0LL);
}


void __fastcall ClassBoardSquare__PlayEnableEffect(ClassBoardSquare_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  ClassBoardEffectPlayer_o *enableEffectPlayer; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  System_String_o *unlockEnableAnimationName; // x20
  System_Action_o *v10; // x0
  __int64 *v11; // x8
  System_Action_o *v12; // x21
  const MethodInfo *v13; // x3

  if ( (byte_42146A8 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_ClassBoardEffectPlayer_GetData_bool___, v3);
    sub_B0D8A4(&Method_ClassBoardSquare__PlayEnableEffect_b__46_0__, v4);
    sub_B0D8A4(&Method_ClassBoardSquare__PlayEnableEffect_b__46_1__, v5);
    byte_42146A8 = 1;
  }
  enableEffectPlayer = this->fields.enableEffectPlayer;
  if ( !enableEffectPlayer )
    sub_B0D97C(0LL);
  if ( ClassBoardEffectPlayer__GetData_bool_(
         enableEffectPlayer,
         (const MethodInfo_170D1BC *)Method_ClassBoardEffectPlayer_GetData_bool___) )
  {
    unlockEnableAnimationName = this->fields.unlockEnableAnimationName;
    v10 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v7, v8);
    v11 = &Method_ClassBoardSquare__PlayEnableEffect_b__46_0__;
  }
  else
  {
    unlockEnableAnimationName = this->fields.enableAnimationName;
    v10 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v7, v8);
    v11 = &Method_ClassBoardSquare__PlayEnableEffect_b__46_1__;
  }
  v12 = v10;
  System_Action___ctor(v10, (Il2CppObject *)this, *v11, 0LL);
  ClassBoardSquare__PlaySimpleAnimation(this, unlockEnableAnimationName, v12, v13);
}


void __fastcall ClassBoardSquare__PlayReleaseEffect(ClassBoardSquare_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_String_o *releaseAnimationName; // x20
  System_Action_o *v6; // x21
  const MethodInfo *v7; // x3

  if ( (byte_42146A7 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_ClassBoardSquare__PlayReleaseEffect_b__45_0__, v4);
    byte_42146A7 = 1;
  }
  releaseAnimationName = this->fields.releaseAnimationName;
  v6 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, method, v2);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_ClassBoardSquare__PlayReleaseEffect_b__45_0__, 0LL);
  ClassBoardSquare__PlaySimpleAnimation(this, releaseAnimationName, v6, v7);
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
    sub_B0D97C(0LL);
  SimpleAnimation__Play_50482404(simpleAnimation, name, 0LL);
  v9 = ClassBoardSquare__WaitAnimationFinished(this, name, endCallback, v8);
  UnityEngine_MonoBehaviour__StartCoroutine_34930128((UnityEngine_MonoBehaviour_o *)this, v9, 0LL);
}


void __fastcall ClassBoardSquare__PlayTransition(ClassBoardSquare_o *this, const MethodInfo *method)
{
  ClassBoardSquare_o *v2; // x19
  __int64 v3; // x1
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  IClassBoardSquareModel_c *klass; // x8
  unsigned __int64 v6; // x10
  IClassBoardSquareModel_c **p_offset; // x11
  __int64 p_method; // x0
  int v9; // w0
  const MethodInfo *v10; // x3
  System_Enum_o *v11; // x20
  System_String_o *brightTurnTransitionAnimationName; // x1
  int v13; // [xsp+8h] [xbp-18h] BYREF
  int v14; // [xsp+Ch] [xbp-14h] BYREF

  v2 = this;
  if ( (byte_42146A3 & 1) == 0 )
  {
    sub_B0D8A4(&AcquireFlag_TypeInfo, method);
    this = (ClassBoardSquare_o *)sub_B0D8A4(&IClassBoardSquareModel_TypeInfo, v3);
    byte_42146A3 = 1;
  }
  SquareModel_k__BackingField = v2->fields._SquareModel_k__BackingField;
  if ( !SquareModel_k__BackingField )
    goto LABEL_16;
  klass = SquareModel_k__BackingField->klass;
  if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
  {
    v6 = 0LL;
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v6;
      p_offset += 2;
      if ( v6 >= *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 13].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AA67A0(v2->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 13LL);
  }
  v9 = (*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD, _QWORD))p_method)(
         SquareModel_k__BackingField,
         0LL,
         *(_QWORD *)(p_method + 8));
  if ( !v9 )
    goto LABEL_14;
  v14 = v9;
  v11 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v14);
  v13 = 2;
  this = (ClassBoardSquare_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v13);
  if ( !v11 )
LABEL_16:
    sub_B0D97C(this);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardSquare__SetActiveArrayObject(
        ClassBoardSquare_o *this,
        UnityEngine_GameObject_array *objects,
        bool isActive,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  ClassBoardSquare___c__DisplayClass43_0_o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v14; // x20

  if ( (byte_42146A5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_GameObject___ctor__, objects);
    sub_B0D8A4(&System_Action_GameObject__TypeInfo, v6);
    sub_B0D8A4(&Method_BasicHelper_ForEach_GameObject___, v7);
    sub_B0D8A4(&Method_ClassBoardSquare___c__DisplayClass43_0__SetActiveArrayObject_b__0__, v8);
    sub_B0D8A4(&ClassBoardSquare___c__DisplayClass43_0_TypeInfo, v9);
    byte_42146A5 = 1;
  }
  v10 = (ClassBoardSquare___c__DisplayClass43_0_o *)sub_B0D974(
                                                      ClassBoardSquare___c__DisplayClass43_0_TypeInfo,
                                                      objects,
                                                      isActive);
  ClassBoardSquare___c__DisplayClass43_0___ctor(v10, 0LL);
  if ( !v10 )
    sub_B0D97C(v11);
  v10->fields.isActive = isActive;
  v14 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                               System_Action_GameObject__TypeInfo,
                                                                               v12,
                                                                               v13);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v14,
    (Il2CppObject *)v10,
    Method_ClassBoardSquare___c__DisplayClass43_0__SetActiveArrayObject_b__0__,
    (const MethodInfo_246EA3C *)Method_System_Action_GameObject___ctor__);
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    (System_Collections_Generic_IEnumerable_T__o *)objects,
    (System_Action_T__o *)v14,
    (const MethodInfo_17086DC *)Method_BasicHelper_ForEach_GameObject___);
}


void __fastcall ClassBoardSquare__SetActiveObject(
        ClassBoardSquare_o *this,
        UnityEngine_GameObject_o *obj,
        bool isActive,
        const MethodInfo *method)
{
  _BOOL8 v6; // x0

  if ( (byte_42146A6 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, obj);
    byte_42146A6 = 1;
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
      sub_B0D97C(v6);
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
  UnityEngine_GameObject_o *v6; // x0

  if ( (byte_42146AB & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, isActive);
    byte_42146AB = 1;
  }
  selectedEffect = (UnityEngine_Object_o *)this->fields.selectedEffect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(selectedEffect, 0LL, 0LL) )
  {
    v6 = this->fields.selectedEffect;
    if ( !v6 )
      sub_B0D97C(0LL);
    UnityEngine_GameObject__SetActive(v6, isActive, 0LL);
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  UnityEngine_Object_o *transform; // x0
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x22
  IClassBoardSquareModel_c *klass; // x8
  UnityEngine_Transform_o *v16; // x21
  unsigned __int64 v17; // x10
  IClassBoardSquareModel_c **p_offset; // x11
  __int64 p_method; // x0
  int v20; // s0
  UnityEngine_Object_o *v23; // x21
  IClassBoardSquareModel_c *v24; // x8
  System_String_o *v25; // x22
  unsigned __int64 v26; // x10
  int32_t *v27; // x11
  __int64 v28; // x0
  System_String_o *v29; // x0
  System_String_o *v30; // x0
  System_String_o *name; // x20
  __int64 v32; // x1
  __int64 v33; // x2
  ClassBoardEffectPlayer_o *v34; // x21
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  struct ClassBoardEffectPlayer_o *releaseEffectPlayer; // x20
  __int64 v42; // x1
  __int64 v43; // x2
  System_Int32_array **v44; // x21
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_String_o *v51; // x20
  __int64 v52; // x1
  __int64 v53; // x2
  ClassBoardEffectPlayer_o *v54; // x21
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  struct ClassBoardEffectPlayer_o *enableEffectPlayer; // x20
  __int64 v62; // x1
  __int64 v63; // x2
  System_Action_o *v64; // x21
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  int v71; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42146A0 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, squareModel);
    sub_B0D8A4(&ClassBoardEffectPlayer_TypeInfo, v10);
    sub_B0D8A4(&IClassBoardSquareModel_TypeInfo, v11);
    sub_B0D8A4(&StringLiteral_15952/*"_"*/, v12);
    byte_42146A0 = 1;
  }
  v71 = 0;
  this->fields._SquareModel_k__BackingField = squareModel;
  sub_B0D840(
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
  v16 = (UnityEngine_Transform_o *)transform;
  if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
  {
    v17 = 0LL;
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v17;
      p_offset += 2;
      if ( v17 >= *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 3].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AA67A0(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 3LL);
  }
  transform = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))p_method)(
                                        SquareModel_k__BackingField,
                                        *(_QWORD *)(p_method + 8));
  if ( !v16 )
    goto LABEL_25;
  UnityEngine_Transform__set_localPosition(v16, *(UnityEngine_Vector3_o *)&v20, 0LL);
  ((void (__fastcall *)(ClassBoardSquare_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._8_UpdateDraw.method)(
    this,
    0LL,
    this->klass->vtable._9_PlayReleaseEffect.methodPtr);
  transform = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_25;
  v23 = transform;
  transform = (UnityEngine_Object_o *)UnityEngine_Object__get_name(transform, 0LL);
  if ( !squareModel )
    goto LABEL_25;
  v24 = squareModel->klass;
  v25 = (System_String_o *)transform;
  if ( *(_WORD *)&squareModel->klass->_2.bitflags1 )
  {
    v26 = 0LL;
    v27 = &v24->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v27 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v26;
      v27 += 4;
      if ( v26 >= *(unsigned __int16 *)&squareModel->klass->_2.bitflags1 )
        goto LABEL_17;
    }
    v28 = (__int64)&v24->vtable[*v27].method;
  }
  else
  {
LABEL_17:
    v28 = sub_AA67A0(squareModel, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  v71 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v28)(squareModel, *(_QWORD *)(v28 + 8));
  v29 = System_Int32__ToString((int32_t)&v71, 0LL);
  v30 = System_String__Concat_43852188(v25, (System_String_o *)StringLiteral_15952/*"_"*/, v29, 0LL);
  UnityEngine_Object__set_name(v23, v30, 0LL);
  transform = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_25;
  name = UnityEngine_Object__get_name(transform, 0LL);
  v34 = (ClassBoardEffectPlayer_o *)sub_B0D974(ClassBoardEffectPlayer_TypeInfo, v32, v33);
  ClassBoardEffectPlayer___ctor_30283960(v34, name, 0LL);
  this->fields.releaseEffectPlayer = v34;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.releaseEffectPlayer,
    (System_Int32_array **)v34,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  releaseEffectPlayer = this->fields.releaseEffectPlayer;
  transform = (UnityEngine_Object_o *)sub_B0D974(System_Action_TypeInfo, v42, v43);
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
  sub_B0D840(
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
  v51 = UnityEngine_Object__get_name(transform, 0LL);
  v54 = (ClassBoardEffectPlayer_o *)sub_B0D974(ClassBoardEffectPlayer_TypeInfo, v52, v53);
  ClassBoardEffectPlayer___ctor_30283960(v54, v51, 0LL);
  this->fields.enableEffectPlayer = v54;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.enableEffectPlayer,
    (System_Int32_array **)v54,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60);
  enableEffectPlayer = this->fields.enableEffectPlayer;
  v64 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v62, v63);
  System_Action___ctor(v64, (Il2CppObject *)this, (intptr_t)this->klass->vtable._11_PlayClickedSe.methodPtr, 0LL);
  if ( !enableEffectPlayer )
LABEL_25:
    sub_B0D97C(transform);
  enableEffectPlayer->fields.playCallback = v64;
  sub_B0D840(
    (BattleServantConfConponent_o *)&enableEffectPlayer->fields.playCallback,
    (System_Int32_array **)v64,
    v65,
    v66,
    v67,
    v68,
    v69,
    v70);
  ((void (__fastcall *)(ClassBoardSquare_o *, Il2CppMethodPointer))this->klass->vtable._6_SetupIcon.method)(
    this,
    this->klass->vtable._7_PlayTransition.methodPtr);
}


void __fastcall ClassBoardSquare__SetupIcon(ClassBoardSquare_o *this, const MethodInfo *method)
{
  ClassBoardSquare_o *v2; // x19
  __int64 v3; // x1
  struct UISprite_array *iconSpritesNormal; // x24
  __int64 v5; // x8
  unsigned __int64 v6; // x25
  UISprite_o *v7; // x20
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x22
  IClassBoardSquareModel_c *klass; // x8
  AtlasManagerUnit_o *v10; // x21
  unsigned __int64 v11; // x10
  IClassBoardSquareModel_c **p_offset; // x11
  __int64 p_method; // x0
  struct IClassBoardSquareModel_o *v14; // x23
  IClassBoardSquareModel_c *v15; // x8
  int32_t v16; // w22
  unsigned __int64 v17; // x10
  IClassBoardSquareModel_c **v18; // x11
  __int64 v19; // x0
  const MethodInfo *v20; // x2
  int32_t v21; // w23
  __int64 v22; // x0

  v2 = this;
  if ( (byte_42146A1 & 1) == 0 )
  {
    sub_B0D8A4(&ClassBoardUtility_TypeInfo, method);
    this = (ClassBoardSquare_o *)sub_B0D8A4(&IClassBoardSquareModel_TypeInfo, v3);
    byte_42146A1 = 1;
  }
  iconSpritesNormal = v2->fields.iconSpritesNormal;
  if ( !iconSpritesNormal )
    goto LABEL_27;
  v5 = *(_QWORD *)&iconSpritesNormal->max_length;
  if ( (int)v5 >= 1 )
  {
    v6 = 0LL;
    while ( 1 )
    {
      if ( v6 >= (unsigned int)v5 )
      {
        v22 = sub_B0D9A8(this);
        sub_B0D948(v22, 0LL);
      }
      v7 = iconSpritesNormal->m_Items[v6];
      this = (ClassBoardSquare_o *)ClassBoardGlobalObject__get_IconAtlasManagerUnit(0LL);
      SquareModel_k__BackingField = v2->fields._SquareModel_k__BackingField;
      if ( !SquareModel_k__BackingField )
        break;
      klass = SquareModel_k__BackingField->klass;
      v10 = (AtlasManagerUnit_o *)this;
      if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
      {
        v11 = 0LL;
        p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
        {
          ++v11;
          p_offset += 2;
          if ( v11 >= *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
            goto LABEL_12;
        }
        p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 2].method;
      }
      else
      {
LABEL_12:
        p_method = sub_AA67A0(v2->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 2LL);
      }
      this = (ClassBoardSquare_o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))p_method)(
                                     SquareModel_k__BackingField,
                                     *(_QWORD *)(p_method + 8));
      v14 = v2->fields._SquareModel_k__BackingField;
      if ( !v14 )
        break;
      v15 = v14->klass;
      v16 = (int)this;
      if ( *(_WORD *)&v14->klass->_2.bitflags1 )
      {
        v17 = 0LL;
        v18 = (IClassBoardSquareModel_c **)&v15->_1.interfaceOffsets->offset;
        while ( *(v18 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          ++v17;
          v18 += 2;
          if ( v17 >= *(unsigned __int16 *)&v14->klass->_2.bitflags1 )
            goto LABEL_19;
        }
        v19 = (__int64)&v15->vtable[*(_DWORD *)v18 + 7].method;
      }
      else
      {
LABEL_19:
        v19 = sub_AA67A0(v2->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 7LL);
      }
      v21 = (*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v19)(v14, *(_QWORD *)(v19 + 8));
      if ( (BYTE3(ClassBoardUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ClassBoardUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
      }
      this = (ClassBoardSquare_o *)ClassBoardUtility__GetClassBoardSkillIconName(v16, v21, v20);
      if ( !v10 )
        break;
      this = (ClassBoardSquare_o *)AtlasManagerUnit__SetUI(v10, v7, (System_String_o *)this, 0LL);
      LODWORD(v5) = iconSpritesNormal->max_length;
      if ( (__int64)++v6 >= (int)v5 )
        return;
    }
LABEL_27:
    sub_B0D97C(this);
  }
}


void __fastcall ClassBoardSquare__UpdateDraw(
        ClassBoardSquare_o *this,
        System_Nullable_AcquireFlag__o handoverFlag,
        const MethodInfo *method)
{
  ClassBoardSquare_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t Value; // w0
  const MethodInfo *v9; // x1
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  IClassBoardSquareModel_c *klass; // x8
  unsigned __int64 v12; // x10
  IClassBoardSquareModel_c **p_offset; // x11
  __int64 p_method; // x0
  int v15; // w20
  System_Enum_o *v16; // x21
  const MethodInfo *v17; // x1
  System_Enum_o *v18; // x21
  const MethodInfo *v19; // x1
  System_Enum_o *v20; // x20
  const MethodInfo *v21; // x1
  int v22; // [xsp+0h] [xbp-30h] BYREF
  int32_t v23; // [xsp+4h] [xbp-2Ch] BYREF
  System_Nullable_AcquireFlag__o v24; // [xsp+8h] [xbp-28h] BYREF
  System_Nullable_T__o v25; // 0:x0.16

  v4 = this;
  v24 = handoverFlag;
  if ( (byte_42146A4 & 1) == 0 )
  {
    sub_B0D8A4(&AcquireFlag_TypeInfo, handoverFlag);
    sub_B0D8A4(&IClassBoardSquareModel_TypeInfo, v5);
    sub_B0D8A4(&Method_System_Nullable_AcquireFlag__get_HasValue__, v6);
    this = (ClassBoardSquare_o *)sub_B0D8A4(&Method_System_Nullable_AcquireFlag__get_Value__, v7);
    byte_42146A4 = 1;
  }
  if ( (*(_QWORD *)&handoverFlag & 0xFF00000000LL) != 0 )
  {
    v25.fields.value = (Il2CppObject *)&v24;
    *(_QWORD *)&v25.fields.has_value = Method_System_Nullable_AcquireFlag__get_Value__;
    Value = System_Nullable_Int32Enum___get_Value(v25, (const MethodInfo_297FD54 *)method);
  }
  else
  {
    SquareModel_k__BackingField = v4->fields._SquareModel_k__BackingField;
    if ( !SquareModel_k__BackingField )
      goto LABEL_25;
    klass = SquareModel_k__BackingField->klass;
    if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
    {
      v12 = 0LL;
      p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
      {
        ++v12;
        p_offset += 2;
        if ( v12 >= *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 13].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AA67A0(v4->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 13LL);
    }
    Value = (*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD, _QWORD))p_method)(
              SquareModel_k__BackingField,
              0LL,
              *(_QWORD *)(p_method + 8));
  }
  v15 = Value;
  if ( !Value )
  {
    ClassBoardSquare__DrawAvailable(v4, v9);
    return;
  }
  v23 = Value;
  v16 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v23);
  v22 = 1;
  this = (ClassBoardSquare_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v22);
  if ( !v16 )
    goto LABEL_25;
  if ( System_Enum__HasFlag(v16, (System_Enum_o *)this, 0LL) )
  {
    ClassBoardSquare__DrawAcquired(v4, v17);
    return;
  }
  v23 = v15;
  v18 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v23);
  v22 = 2;
  this = (ClassBoardSquare_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v22);
  if ( !v18 )
    goto LABEL_25;
  if ( System_Enum__HasFlag(v18, (System_Enum_o *)this, 0LL) )
  {
    ClassBoardSquare__DrawNotConnected(v4, v19);
    return;
  }
  v23 = v15;
  v20 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v23);
  v22 = 8;
  this = (ClassBoardSquare_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v22);
  if ( !v20 )
LABEL_25:
    sub_B0D97C(this);
  if ( System_Enum__HasFlag(v20, (System_Enum_o *)this, 0LL) )
    ClassBoardSquare__DrawUnacquired(v4, v21);
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

  if ( (byte_42146AA & 1) == 0 )
  {
    sub_B0D8A4(&ClassBoardSquare__WaitAnimationFinished_d__49_TypeInfo, name);
    byte_42146AA = 1;
  }
  v7 = sub_B0D974(ClassBoardSquare__WaitAnimationFinished_d__49_TypeInfo, name, endCallback);
  ClassBoardSquare__WaitAnimationFinished_d__49___ctor((ClassBoardSquare__WaitAnimationFinished_d__49_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_B0D97C(v8);
  *(_QWORD *)(v7 + 32) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v7 + 40) = name;
  sub_B0D840((BattleServantConfConponent_o *)(v7 + 40), (System_Int32_array **)name, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v7 + 48) = endCallback;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v7 + 48),
    (System_Int32_array **)endCallback,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
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
    sub_B0D97C(simpleAnimation);
  }
  ClassBoardEffectPlayer__End((ClassBoardEffectPlayer_o *)simpleAnimation, 0LL);
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
    sub_B0D97C(simpleAnimation);
  }
  ClassBoardEffectPlayer__End((ClassBoardEffectPlayer_o *)simpleAnimation, 0LL);
}


void __fastcall ClassBoardSquare___PlayReleaseEffect_b__45_0(ClassBoardSquare_o *this, const MethodInfo *method)
{
  ClassBoardEffectPlayer_o *releaseEffectPlayer; // x0

  releaseEffectPlayer = this->fields.releaseEffectPlayer;
  this->fields.isUpdateDraw = 1;
  if ( !releaseEffectPlayer )
    sub_B0D97C(0LL);
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
  __int64 v9; // x0
  bool v10; // zf
  ClassBoardSquare_o *v11; // x0
  System_Action_ClassBoardSquare__o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_421469E & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_ClassBoardSquare__TypeInfo, value);
    byte_421469E = 1;
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
    v9 = sub_B022BC(p_clickedEvent, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ClassBoardSquare_o *)sub_B0DC70(v8);
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

  if ( (byte_421469F & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_ClassBoardSquare__TypeInfo, value);
    byte_421469F = 1;
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
    v9 = sub_B022BC(p_clickedEvent, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ClassBoardSquare_o *)sub_B0DC70(v8);
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
  sub_B0D840(
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
  SimpleAnimation_State_o *State; // x0
  struct SimpleAnimation_State_o **p_state_5__2; // x20
  struct SimpleAnimation_State_o *v7; // x21
  SimpleAnimation_State_c *klass; // x8
  unsigned __int64 v9; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  struct SimpleAnimation_State_o *v12; // x20
  SimpleAnimation_State_c *v13; // x8
  unsigned __int64 v14; // x10
  SimpleAnimation_State_c **v15; // x11
  __int64 v16; // x0
  bool result; // w0
  Il2CppObject **p__2__current; // x19

  v2 = this;
  if ( (byte_4211E37 & 1) == 0 )
  {
    this = (ClassBoardSquare__WaitAnimationFinished_d__49_o *)sub_B0D8A4(&SimpleAnimation_State_TypeInfo, method);
    byte_4211E37 = 1;
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
    State = SimpleAnimation__GetState((SimpleAnimation_o *)this, v2->fields.name, 0LL);
    p_state_5__2 = &v2->fields._state_5__2;
    v2->fields._state_5__2 = State;
    sub_B0D840(&v2->fields._state_5__2, State);
  }
  v7 = *p_state_5__2;
  if ( !*p_state_5__2 )
    goto LABEL_25;
  klass = v7->klass;
  if ( *(_WORD *)&v7->klass->_2.bitflags1 )
  {
    v9 = 0LL;
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v9;
      p_offset += 2;
      if ( v9 >= *(unsigned __int16 *)&v7->klass->_2.bitflags1 )
        goto LABEL_14;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 13].method;
  }
  else
  {
LABEL_14:
    p_method = sub_AA67A0(*p_state_5__2, SimpleAnimation_State_TypeInfo, 13LL);
  }
  if ( (*(float (__fastcall **)(struct SimpleAnimation_State_o *, _QWORD))p_method)(v7, *(_QWORD *)(p_method + 8)) <= 0.0 )
    goto LABEL_25;
  v12 = *p_state_5__2;
  if ( !v12 )
LABEL_28:
    sub_B0D97C(this);
  v13 = v12->klass;
  if ( *(_WORD *)&v12->klass->_2.bitflags1 )
  {
    v14 = 0LL;
    v15 = (SimpleAnimation_State_c **)&v13->_1.interfaceOffsets->offset;
    while ( *(v15 - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v14;
      v15 += 2;
      if ( v14 >= *(unsigned __int16 *)&v12->klass->_2.bitflags1 )
        goto LABEL_22;
    }
    v16 = (__int64)&v13->vtable[*(_DWORD *)v15 + 5].method;
  }
  else
  {
LABEL_22:
    v16 = sub_AA67A0(v12, SimpleAnimation_State_TypeInfo, 5LL);
  }
  if ( (*(float (__fastcall **)(struct SimpleAnimation_State_o *, _QWORD))v16)(v12, *(_QWORD *)(v16 + 8)) >= 1.0 )
  {
LABEL_25:
    ActionExtensions__Call(v2->fields.endCallback, 0LL);
    return 0;
  }
  v2->fields.__2__current = 0LL;
  p__2__current = &v2->fields.__2__current;
  sub_B0D840(p__2__current, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_ClassBoardSquare__WaitAnimationFinished_d__49_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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
    sub_B0D97C(this);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v3->fields.isActive, 0LL);
}