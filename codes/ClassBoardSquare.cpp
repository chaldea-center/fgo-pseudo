void __fastcall ClassBoardSquare___ctor(ClassBoardSquare_o *this, const MethodInfo *method)
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
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  System_Int32_array **v21; // x1
  System_Int32_array **v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Int32_array **v29; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Int32_array **v36; // x1
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Int32_array **v43; // x1
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7

  if ( (byte_42EA897 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_2927/*"BrightTurnTransition"*/, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_2924/*"BrightTurn"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_2929/*"BrightTurnUnLock"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_13162/*"SquareEnable"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_2880/*"BlackOutTransition"*/, v18, v19, v20);
    byte_42EA897 = 1;
  }
  v21 = (System_Int32_array **)StringLiteral_2924/*"BrightTurn"*/;
  this->fields.enableAnimationName = (struct System_String_o *)StringLiteral_2924/*"BrightTurn"*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.enableAnimationName, v21, v2, v3, v4, v5, v6, v7);
  v22 = (System_Int32_array **)StringLiteral_13162/*"SquareEnable"*/;
  this->fields.releaseAnimationName = (struct System_String_o *)StringLiteral_13162/*"SquareEnable"*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.releaseAnimationName, v22, v23, v24, v25, v26, v27, v28);
  v29 = (System_Int32_array **)StringLiteral_2927/*"BrightTurnTransition"*/;
  this->fields.brightTurnTransitionAnimationName = (struct System_String_o *)StringLiteral_2927/*"BrightTurnTransition"*/;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.brightTurnTransitionAnimationName,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  v36 = (System_Int32_array **)StringLiteral_2880/*"BlackOutTransition"*/;
  this->fields.blackOutTransitionAnimationName = (struct System_String_o *)StringLiteral_2880/*"BlackOutTransition"*/;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.blackOutTransitionAnimationName,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  v43 = (System_Int32_array **)StringLiteral_2929/*"BrightTurnUnLock"*/;
  this->fields.unlockEnableAnimationName = (struct System_String_o *)StringLiteral_2929/*"BrightTurnUnLock"*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.unlockEnableAnimationName, v43, v44, v45, v46, v47, v48, v49);
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
  int v2; // w2
  __int64 v3; // x3
  struct System_Action_ClassBoardSquare__o *clickedEvent; // x0

  if ( (byte_42EA88D & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_ClassBoardSquare__Invoke__, (_DWORD)method, v2, v3);
    byte_42EA88D = 1;
  }
  ((void (__fastcall *)(ClassBoardSquare_o *, void *))this->klass->vtable._11_PlayClickedSe.method)(
    this,
    this->klass[1]._1.image);
  clickedEvent = this->fields.clickedEvent;
  if ( clickedEvent )
    System_Action_Uri___Invoke(
      (System_Action_Uri__o *)clickedEvent,
      (System_Uri_o *)this,
      (const MethodInfo_258B334 *)Method_System_Action_ClassBoardSquare__Invoke__);
}


void __fastcall ClassBoardSquare__PlayClickedSe(ClassBoardSquare_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0

  if ( (byte_42EA894 & 1) == 0 )
  {
    sub_B5D5C4(&Method_ClassBoardSquare_PlayClickedSe__, (_DWORD)method, v2, v3);
    byte_42EA894 = 1;
  }
  v4 = Method_ClassBoardSquare_PlayClickedSe__;
  if ( (*((_BYTE *)Method_ClassBoardSquare_PlayClickedSe__ + 75) & 2) != 0 )
    v4 = (_QWORD *)sub_B5D5CC(Method_ClassBoardSquare_PlayClickedSe__);
  v5 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v4, v4[3]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
}


void __fastcall ClassBoardSquare__PlayEnableEffect(ClassBoardSquare_o *this, const MethodInfo *method)
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
  ClassBoardEffectPlayer_o *enableEffectPlayer; // x0
  System_String_o *unlockEnableAnimationName; // x20
  System_Action_o *v16; // x0
  __int64 *v17; // x8
  System_Action_o *v18; // x21
  const MethodInfo *v19; // x3

  if ( (byte_42EA893 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_ClassBoardEffectPlayer_GetData_bool___, v5, v6, v7);
    sub_B5D5C4(&Method_ClassBoardSquare__PlayEnableEffect_b__46_0__, v8, v9, v10);
    sub_B5D5C4(&Method_ClassBoardSquare__PlayEnableEffect_b__46_1__, v11, v12, v13);
    byte_42EA893 = 1;
  }
  enableEffectPlayer = this->fields.enableEffectPlayer;
  if ( !enableEffectPlayer )
    sub_B5D69C(0LL, method);
  if ( ClassBoardEffectPlayer__GetData_bool_(
         enableEffectPlayer,
         (const MethodInfo_1ADCDB8 *)Method_ClassBoardEffectPlayer_GetData_bool___) )
  {
    unlockEnableAnimationName = this->fields.unlockEnableAnimationName;
    v16 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    v17 = &Method_ClassBoardSquare__PlayEnableEffect_b__46_0__;
  }
  else
  {
    unlockEnableAnimationName = this->fields.enableAnimationName;
    v16 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    v17 = &Method_ClassBoardSquare__PlayEnableEffect_b__46_1__;
  }
  v18 = v16;
  System_Action___ctor(v16, (Il2CppObject *)this, *v17, 0LL);
  ClassBoardSquare__PlaySimpleAnimation(this, unlockEnableAnimationName, v18, v19);
}


void __fastcall ClassBoardSquare__PlayReleaseEffect(ClassBoardSquare_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_String_o *releaseAnimationName; // x20
  System_Action_o *v9; // x21
  const MethodInfo *v10; // x3

  if ( (byte_42EA892 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_ClassBoardSquare__PlayReleaseEffect_b__45_0__, v5, v6, v7);
    byte_42EA892 = 1;
  }
  releaseAnimationName = this->fields.releaseAnimationName;
  v9 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_ClassBoardSquare__PlayReleaseEffect_b__45_0__, 0LL);
  ClassBoardSquare__PlaySimpleAnimation(this, releaseAnimationName, v9, v10);
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
    sub_B5D69C(0LL, name);
  SimpleAnimation__Play_16676044(simpleAnimation, name, 0LL);
  v9 = ClassBoardSquare__WaitAnimationFinished(this, name, endCallback, v8);
  UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, v9, 0LL);
}


void __fastcall ClassBoardSquare__PlayTransition(ClassBoardSquare_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ClassBoardSquare_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  IClassBoardSquareModel_c *klass; // x8
  unsigned __int64 v10; // x10
  IClassBoardSquareModel_c **p_offset; // x11
  __int64 p_method; // x0
  int v13; // w0
  const MethodInfo *v14; // x3
  System_Enum_o *v15; // x20
  System_String_o *brightTurnTransitionAnimationName; // x1
  int v17; // [xsp+8h] [xbp-18h] BYREF
  int v18; // [xsp+Ch] [xbp-14h] BYREF

  v4 = this;
  if ( (byte_42EA88E & 1) == 0 )
  {
    sub_B5D5C4(&AcquireFlag_TypeInfo, (_DWORD)method, v2, v3);
    this = (ClassBoardSquare_o *)sub_B5D5C4(&IClassBoardSquareModel_TypeInfo, v5, v6, v7);
    byte_42EA88E = 1;
  }
  SquareModel_k__BackingField = v4->fields._SquareModel_k__BackingField;
  if ( !SquareModel_k__BackingField )
    goto LABEL_16;
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
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 13].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AF54C0(v4->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 13LL, v3);
  }
  v13 = (*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD, _QWORD))p_method)(
          SquareModel_k__BackingField,
          0LL,
          *(_QWORD *)(p_method + 8));
  if ( !v13 )
    goto LABEL_14;
  v18 = v13;
  v15 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v18);
  v17 = 2;
  this = (ClassBoardSquare_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v17);
  if ( !v15 )
LABEL_16:
    sub_B5D69C(this, method);
  if ( !System_Enum__HasFlag(v15, (System_Enum_o *)this, 0LL) )
  {
LABEL_14:
    brightTurnTransitionAnimationName = v4->fields.brightTurnTransitionAnimationName;
    goto LABEL_15;
  }
  brightTurnTransitionAnimationName = v4->fields.blackOutTransitionAnimationName;
LABEL_15:
  ClassBoardSquare__PlaySimpleAnimation(v4, brightTurnTransitionAnimationName, 0LL, v14);
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
  int v6; // w1
  char v7; // w2
  __int64 v8; // x3
  int v9; // w1
  char v10; // w2
  __int64 v11; // x3
  int v12; // w1
  char v13; // w2
  __int64 v14; // x3
  int v15; // w1
  char v16; // w2
  __int64 v17; // x3
  ClassBoardSquare___c__DisplayClass43_0_o *v18; // x21
  __int64 v19; // x0
  __int64 v20; // x1
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v21; // x20

  if ( (byte_42EA890 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_GameObject___ctor__, (_DWORD)objects, isActive, method);
    sub_B5D5C4(&System_Action_GameObject__TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_BasicHelper_ForEach_GameObject___, v9, v10, v11);
    sub_B5D5C4(&Method_ClassBoardSquare___c__DisplayClass43_0__SetActiveArrayObject_b__0__, v12, v13, v14);
    sub_B5D5C4(&ClassBoardSquare___c__DisplayClass43_0_TypeInfo, v15, v16, v17);
    byte_42EA890 = 1;
  }
  v18 = (ClassBoardSquare___c__DisplayClass43_0_o *)sub_B5D694(ClassBoardSquare___c__DisplayClass43_0_TypeInfo);
  ClassBoardSquare___c__DisplayClass43_0___ctor(v18, 0LL);
  if ( !v18 )
    sub_B5D69C(v19, v20);
  v18->fields.isActive = isActive;
  v21 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_GameObject__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v21,
    (Il2CppObject *)v18,
    Method_ClassBoardSquare___c__DisplayClass43_0__SetActiveArrayObject_b__0__,
    (const MethodInfo_258B320 *)Method_System_Action_GameObject___ctor__);
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    (System_Collections_Generic_IEnumerable_T__o *)objects,
    (System_Action_T__o *)v21,
    (const MethodInfo_1AD82D8 *)Method_BasicHelper_ForEach_GameObject___);
}


void __fastcall ClassBoardSquare__SetActiveObject(
        ClassBoardSquare_o *this,
        UnityEngine_GameObject_o *obj,
        bool isActive,
        const MethodInfo *method)
{
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_42EA891 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)obj, isActive, method);
    byte_42EA891 = 1;
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
      sub_B5D69C(v6, v7);
    UnityEngine_GameObject__SetActive(obj, isActive, 0LL);
  }
}


void __fastcall ClassBoardSquare__SetSelectedEffectActive(
        ClassBoardSquare_o *this,
        bool isActive,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *selectedEffect; // x21
  __int64 v7; // x1
  UnityEngine_GameObject_o *v8; // x0

  if ( (byte_42EA896 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, isActive, (_DWORD)method, v3);
    byte_42EA896 = 1;
  }
  selectedEffect = (UnityEngine_Object_o *)this->fields.selectedEffect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(selectedEffect, 0LL, 0LL) )
  {
    v8 = this->fields.selectedEffect;
    if ( !v8 )
      sub_B5D69C(0LL, v7);
    UnityEngine_GameObject__SetActive(v8, isActive, 0LL);
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  UnityEngine_Object_o *transform; // x0
  __int64 v20; // x1
  __int64 v21; // x3
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x22
  IClassBoardSquareModel_c *klass; // x8
  UnityEngine_Transform_o *v24; // x21
  unsigned __int64 v25; // x10
  IClassBoardSquareModel_c **p_offset; // x11
  __int64 p_method; // x0
  int v28; // s0
  UnityEngine_Object_o *v31; // x21
  __int64 v32; // x3
  IClassBoardSquareModel_c *v33; // x8
  System_String_o *v34; // x22
  unsigned __int64 v35; // x10
  int32_t *v36; // x11
  __int64 v37; // x0
  System_String_o *v38; // x0
  System_String_o *v39; // x0
  System_Int32_array **name; // x20
  __int64 v41; // x21
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  struct ClassBoardEffectPlayer_o *releaseEffectPlayer; // x20
  System_Int32_array **v55; // x21
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_Int32_array **v62; // x20
  __int64 v63; // x21
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  struct ClassBoardEffectPlayer_o *enableEffectPlayer; // x20
  System_Action_o *v77; // x21
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  int v84; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42EA88B & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)squareModel, (_DWORD)method, v3);
    sub_B5D5C4(&ClassBoardEffectPlayer_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&IClassBoardSquareModel_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_16096/*"_"*/, v16, v17, v18);
    byte_42EA88B = 1;
  }
  v84 = 0;
  this->fields._SquareModel_k__BackingField = squareModel;
  sub_B5D560(
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
  v24 = (UnityEngine_Transform_o *)transform;
  if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
  {
    v25 = 0LL;
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v25;
      p_offset += 2;
      if ( v25 >= *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 3].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AF54C0(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 3LL, v21);
  }
  transform = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))p_method)(
                                        SquareModel_k__BackingField,
                                        *(_QWORD *)(p_method + 8));
  if ( !v24 )
    goto LABEL_25;
  UnityEngine_Transform__set_localPosition(v24, *(UnityEngine_Vector3_o *)&v28, 0LL);
  ((void (__fastcall *)(ClassBoardSquare_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._8_UpdateDraw.method)(
    this,
    0LL,
    this->klass->vtable._9_PlayReleaseEffect.methodPtr);
  transform = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_25;
  v31 = transform;
  transform = (UnityEngine_Object_o *)UnityEngine_Object__get_name(transform, 0LL);
  if ( !squareModel )
    goto LABEL_25;
  v33 = squareModel->klass;
  v34 = (System_String_o *)transform;
  if ( *(_WORD *)&squareModel->klass->_2.bitflags1 )
  {
    v35 = 0LL;
    v36 = &v33->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v36 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v35;
      v36 += 4;
      if ( v35 >= *(unsigned __int16 *)&squareModel->klass->_2.bitflags1 )
        goto LABEL_17;
    }
    v37 = (__int64)&v33->vtable[*v36].method;
  }
  else
  {
LABEL_17:
    v37 = sub_AF54C0(squareModel, IClassBoardSquareModel_TypeInfo, 0LL, v32);
  }
  v84 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v37)(squareModel, *(_QWORD *)(v37 + 8));
  v38 = System_Int32__ToString((int32_t)&v84, 0LL);
  v39 = System_String__Concat_44580072(v34, (System_String_o *)StringLiteral_16096/*"_"*/, v38, 0LL);
  UnityEngine_Object__set_name(v31, v39, 0LL);
  transform = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_25;
  name = (System_Int32_array **)UnityEngine_Object__get_name(transform, 0LL);
  v41 = sub_B5D694(ClassBoardEffectPlayer_TypeInfo);
  System_Object___ctor((Il2CppObject *)v41, 0LL);
  *(_QWORD *)(v41 + 16) = name;
  sub_B5D560((BattleServantConfConponent_o *)(v41 + 16), name, v42, v43, v44, v45, v46, v47);
  this->fields.releaseEffectPlayer = (struct ClassBoardEffectPlayer_o *)v41;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.releaseEffectPlayer,
    (System_Int32_array **)v41,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  releaseEffectPlayer = this->fields.releaseEffectPlayer;
  transform = (UnityEngine_Object_o *)sub_B5D694(System_Action_TypeInfo);
  if ( !this )
    goto LABEL_25;
  v55 = (System_Int32_array **)transform;
  System_Action___ctor(
    (System_Action_o *)transform,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._10_PlayEnableEffect.methodPtr,
    0LL);
  if ( !releaseEffectPlayer )
    goto LABEL_25;
  releaseEffectPlayer->fields.playCallback = (struct System_Action_o *)v55;
  sub_B5D560(
    (BattleServantConfConponent_o *)&releaseEffectPlayer->fields.playCallback,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61);
  transform = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_25;
  v62 = (System_Int32_array **)UnityEngine_Object__get_name(transform, 0LL);
  v63 = sub_B5D694(ClassBoardEffectPlayer_TypeInfo);
  System_Object___ctor((Il2CppObject *)v63, 0LL);
  *(_QWORD *)(v63 + 16) = v62;
  sub_B5D560((BattleServantConfConponent_o *)(v63 + 16), v62, v64, v65, v66, v67, v68, v69);
  this->fields.enableEffectPlayer = (struct ClassBoardEffectPlayer_o *)v63;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.enableEffectPlayer,
    (System_Int32_array **)v63,
    v70,
    v71,
    v72,
    v73,
    v74,
    v75);
  enableEffectPlayer = this->fields.enableEffectPlayer;
  v77 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v77, (Il2CppObject *)this, (intptr_t)this->klass->vtable._11_PlayClickedSe.methodPtr, 0LL);
  if ( !enableEffectPlayer )
LABEL_25:
    sub_B5D69C(transform, v20);
  enableEffectPlayer->fields.playCallback = v77;
  sub_B5D560(
    (BattleServantConfConponent_o *)&enableEffectPlayer->fields.playCallback,
    (System_Int32_array **)v77,
    v78,
    v79,
    v80,
    v81,
    v82,
    v83);
  ((void (__fastcall *)(ClassBoardSquare_o *, Il2CppMethodPointer))this->klass->vtable._6_SetupIcon.method)(
    this,
    this->klass->vtable._7_PlayTransition.methodPtr);
}


void __fastcall ClassBoardSquare__SetupIcon(ClassBoardSquare_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ClassBoardSquare_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct UISprite_array *iconSpritesNormal; // x24
  __int64 v9; // x8
  unsigned __int64 v10; // x25
  UISprite_o *v11; // x20
  __int64 v12; // x3
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x22
  IClassBoardSquareModel_c *klass; // x8
  AtlasManagerUnit_o *v15; // x21
  unsigned __int64 v16; // x10
  IClassBoardSquareModel_c **p_offset; // x11
  __int64 p_method; // x0
  __int64 v19; // x3
  struct IClassBoardSquareModel_o *v20; // x23
  IClassBoardSquareModel_c *v21; // x8
  int32_t v22; // w22
  unsigned __int64 v23; // x10
  IClassBoardSquareModel_c **v24; // x11
  __int64 v25; // x0
  const MethodInfo *v26; // x2
  int32_t v27; // w23
  __int64 v28; // x0

  v4 = this;
  if ( (byte_42EA88C & 1) == 0 )
  {
    sub_B5D5C4(&ClassBoardUtility_TypeInfo, (_DWORD)method, v2, v3);
    this = (ClassBoardSquare_o *)sub_B5D5C4(&IClassBoardSquareModel_TypeInfo, v5, v6, v7);
    byte_42EA88C = 1;
  }
  iconSpritesNormal = v4->fields.iconSpritesNormal;
  if ( !iconSpritesNormal )
    goto LABEL_27;
  v9 = *(_QWORD *)&iconSpritesNormal->max_length;
  if ( (int)v9 >= 1 )
  {
    v10 = 0LL;
    while ( 1 )
    {
      if ( v10 >= (unsigned int)v9 )
      {
        v28 = sub_B5D6C8(this);
        sub_B5D668(v28, 0LL);
      }
      v11 = iconSpritesNormal->m_Items[v10];
      this = (ClassBoardSquare_o *)ClassBoardGlobalObject__get_IconAtlasManagerUnit((const MethodInfo *)this);
      SquareModel_k__BackingField = v4->fields._SquareModel_k__BackingField;
      if ( !SquareModel_k__BackingField )
        break;
      klass = SquareModel_k__BackingField->klass;
      v15 = (AtlasManagerUnit_o *)this;
      if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
      {
        v16 = 0LL;
        p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
        {
          ++v16;
          p_offset += 2;
          if ( v16 >= *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
            goto LABEL_12;
        }
        p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 2].method;
      }
      else
      {
LABEL_12:
        p_method = sub_AF54C0(v4->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 2LL, v12);
      }
      this = (ClassBoardSquare_o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))p_method)(
                                     SquareModel_k__BackingField,
                                     *(_QWORD *)(p_method + 8));
      v20 = v4->fields._SquareModel_k__BackingField;
      if ( !v20 )
        break;
      v21 = v20->klass;
      v22 = (int)this;
      if ( *(_WORD *)&v20->klass->_2.bitflags1 )
      {
        v23 = 0LL;
        v24 = (IClassBoardSquareModel_c **)&v21->_1.interfaceOffsets->offset;
        while ( *(v24 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          ++v23;
          v24 += 2;
          if ( v23 >= *(unsigned __int16 *)&v20->klass->_2.bitflags1 )
            goto LABEL_19;
        }
        v25 = (__int64)&v21->vtable[*(_DWORD *)v24 + 7].method;
      }
      else
      {
LABEL_19:
        v25 = sub_AF54C0(v4->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 7LL, v19);
      }
      v27 = (*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v25)(v20, *(_QWORD *)(v25 + 8));
      if ( (BYTE3(ClassBoardUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ClassBoardUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
      }
      this = (ClassBoardSquare_o *)ClassBoardUtility__GetClassBoardSkillIconName(v22, v27, v26);
      if ( !v15 )
        break;
      this = (ClassBoardSquare_o *)AtlasManagerUnit__SetUI(v15, v11, (System_String_o *)this, 0LL);
      LODWORD(v9) = iconSpritesNormal->max_length;
      if ( (__int64)++v10 >= (int)v9 )
        return;
    }
LABEL_27:
    sub_B5D69C(this, method);
  }
}


void __fastcall ClassBoardSquare__UpdateDraw(
        ClassBoardSquare_o *this,
        System_Nullable_AcquireFlag__o handoverFlag,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ClassBoardSquare_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int32_t Value; // w0
  const MethodInfo *v16; // x1
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  IClassBoardSquareModel_c *klass; // x8
  unsigned __int64 v19; // x10
  IClassBoardSquareModel_c **p_offset; // x11
  __int64 p_method; // x0
  int v22; // w20
  System_Enum_o *v23; // x21
  const MethodInfo *v24; // x1
  System_Enum_o *v25; // x21
  const MethodInfo *v26; // x1
  System_Enum_o *v27; // x20
  const MethodInfo *v28; // x1
  int v29; // [xsp+0h] [xbp-30h] BYREF
  int32_t v30; // [xsp+4h] [xbp-2Ch] BYREF
  System_Nullable_AcquireFlag__o v31; // [xsp+8h] [xbp-28h] BYREF
  System_Nullable_T__o v32; // 0:x0.16

  v5 = this;
  v31 = handoverFlag;
  if ( (byte_42EA88F & 1) == 0 )
  {
    sub_B5D5C4(&AcquireFlag_TypeInfo, handoverFlag.fields.value, (_DWORD)method, v3);
    sub_B5D5C4(&IClassBoardSquareModel_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_System_Nullable_AcquireFlag__get_HasValue__, v9, v10, v11);
    this = (ClassBoardSquare_o *)sub_B5D5C4(&Method_System_Nullable_AcquireFlag__get_Value__, v12, v13, v14);
    byte_42EA88F = 1;
  }
  if ( (*(_QWORD *)&handoverFlag & 0xFF00000000LL) != 0 )
  {
    v32.fields.value = (Il2CppObject *)&v31;
    *(_QWORD *)&v32.fields.has_value = Method_System_Nullable_AcquireFlag__get_Value__;
    Value = System_Nullable_Int32Enum___get_Value(v32, (const MethodInfo_234B6CC *)method);
  }
  else
  {
    SquareModel_k__BackingField = v5->fields._SquareModel_k__BackingField;
    if ( !SquareModel_k__BackingField )
      goto LABEL_25;
    klass = SquareModel_k__BackingField->klass;
    if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
    {
      v19 = 0LL;
      p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
      {
        ++v19;
        p_offset += 2;
        if ( v19 >= *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 13].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AF54C0(v5->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 13LL, v3);
    }
    Value = (*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD, _QWORD))p_method)(
              SquareModel_k__BackingField,
              0LL,
              *(_QWORD *)(p_method + 8));
  }
  v22 = Value;
  if ( !Value )
  {
    ClassBoardSquare__DrawAvailable(v5, v16);
    return;
  }
  v30 = Value;
  v23 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v30);
  v29 = 1;
  this = (ClassBoardSquare_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v29);
  if ( !v23 )
    goto LABEL_25;
  if ( System_Enum__HasFlag(v23, (System_Enum_o *)this, 0LL) )
  {
    ClassBoardSquare__DrawAcquired(v5, v24);
    return;
  }
  v30 = v22;
  v25 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v30);
  v29 = 2;
  this = (ClassBoardSquare_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v29);
  if ( !v25 )
    goto LABEL_25;
  if ( System_Enum__HasFlag(v25, (System_Enum_o *)this, 0LL) )
  {
    ClassBoardSquare__DrawNotConnected(v5, v26);
    return;
  }
  v30 = v22;
  v27 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v30);
  v29 = 8;
  this = (ClassBoardSquare_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v29);
  if ( !v27 )
LABEL_25:
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_B5D69C)(this, handoverFlag);
  if ( System_Enum__HasFlag(v27, (System_Enum_o *)this, 0LL) )
    ClassBoardSquare__DrawUnacquired(v5, v28);
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

  if ( (byte_42EA895 & 1) == 0 )
  {
    sub_B5D5C4(&ClassBoardSquare__WaitAnimationFinished_d__49_TypeInfo, (_DWORD)name, (_DWORD)endCallback, method);
    byte_42EA895 = 1;
  }
  v7 = sub_B5D694(ClassBoardSquare__WaitAnimationFinished_d__49_TypeInfo);
  ClassBoardSquare__WaitAnimationFinished_d__49___ctor((ClassBoardSquare__WaitAnimationFinished_d__49_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_B5D69C(v8, v9);
  *(_QWORD *)(v7 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 40) = name;
  sub_B5D560((BattleServantConfConponent_o *)(v7 + 40), (System_Int32_array **)name, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v7 + 48) = endCallback;
  sub_B5D560(
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
    sub_B5D69C(simpleAnimation, method);
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
    sub_B5D69C(simpleAnimation, method);
  }
  ClassBoardEffectPlayer__End((ClassBoardEffectPlayer_o *)simpleAnimation, method);
}


void __fastcall ClassBoardSquare___PlayReleaseEffect_b__45_0(ClassBoardSquare_o *this, const MethodInfo *method)
{
  ClassBoardEffectPlayer_o *releaseEffectPlayer; // x0

  releaseEffectPlayer = this->fields.releaseEffectPlayer;
  this->fields.isUpdateDraw = 1;
  if ( !releaseEffectPlayer )
    sub_B5D69C(0LL, method);
  ClassBoardEffectPlayer__End(releaseEffectPlayer, method);
}


void __fastcall ClassBoardSquare__add_clickedEvent(
        ClassBoardSquare_o *this,
        System_Action_ClassBoardSquare__o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct System_Action_ClassBoardSquare__o **p_clickedEvent; // x20
  System_Delegate_o *v7; // x21
  struct System_Action_ClassBoardSquare__o *clickedEvent; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  ClassBoardSquare_o *v12; // x0
  System_Action_ClassBoardSquare__o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42EA889 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_ClassBoardSquare__TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EA889 = 1;
  }
  clickedEvent = this->fields.clickedEvent;
  p_clickedEvent = &this->fields.clickedEvent;
  v7 = (System_Delegate_o *)clickedEvent;
  while ( 1 )
  {
    v9 = System_Delegate__Combine(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (System_Action_ClassBoardSquare__c *)v9->klass != System_Action_ClassBoardSquare__TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_clickedEvent, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = (ClassBoardSquare_o *)sub_B5D990(v9);
  ClassBoardSquare__remove_clickedEvent(v12, v13, v14);
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
  __int64 v3; // x3
  struct System_Action_ClassBoardSquare__o **p_clickedEvent; // x20
  System_Delegate_o *v7; // x21
  struct System_Action_ClassBoardSquare__o *clickedEvent; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  ClassBoardSquare_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_42EA88A & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_ClassBoardSquare__TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EA88A = 1;
  }
  clickedEvent = this->fields.clickedEvent;
  p_clickedEvent = &this->fields.clickedEvent;
  v7 = (System_Delegate_o *)clickedEvent;
  while ( 1 )
  {
    v9 = System_Delegate__Remove(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (System_Action_ClassBoardSquare__c *)v9->klass != System_Action_ClassBoardSquare__TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_clickedEvent, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = (ClassBoardSquare_o *)sub_B5D990(v9);
  ClassBoardSquare__get_ReleaseEffectPlayer(v12, v13);
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
  sub_B5D560(
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
  int v2; // w2
  __int64 v3; // x3
  ClassBoardSquare__WaitAnimationFinished_d__49_o *v4; // x19
  int32_t _1__state; // w8
  struct ClassBoardSquare_o *_4__this; // x8
  struct SimpleAnimation_State_o **p_state_5__2; // x20
  struct SimpleAnimation_State_o *v8; // x21
  SimpleAnimation_State_c *klass; // x8
  unsigned __int64 v10; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  __int64 v13; // x3
  struct SimpleAnimation_State_o *v14; // x20
  SimpleAnimation_State_c *v15; // x8
  unsigned __int64 v16; // x10
  SimpleAnimation_State_c **v17; // x11
  __int64 v18; // x0
  bool result; // w0
  Il2CppObject **p__2__current; // x19

  v4 = this;
  if ( (byte_42E5E90 & 1) == 0 )
  {
    this = (ClassBoardSquare__WaitAnimationFinished_d__49_o *)sub_B5D5C4(
                                                                &SimpleAnimation_State_TypeInfo,
                                                                (_DWORD)method,
                                                                v2,
                                                                v3);
    byte_42E5E90 = 1;
  }
  _1__state = v4->fields.__1__state;
  if ( _1__state == 1 )
  {
    p_state_5__2 = &v4->fields._state_5__2;
    v4->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    _4__this = v4->fields.__4__this;
    v4->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_28;
    this = (ClassBoardSquare__WaitAnimationFinished_d__49_o *)_4__this->fields.simpleAnimation;
    if ( !this )
      goto LABEL_28;
    p_state_5__2 = &v4->fields._state_5__2;
    v4->fields._state_5__2 = SimpleAnimation__GetState((SimpleAnimation_o *)this, v4->fields.name, 0LL);
    sub_B5D560(&v4->fields._state_5__2);
  }
  v8 = *p_state_5__2;
  if ( !*p_state_5__2 )
    goto LABEL_25;
  klass = v8->klass;
  if ( *(_WORD *)&v8->klass->_2.bitflags1 )
  {
    v10 = 0LL;
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v10;
      p_offset += 2;
      if ( v10 >= *(unsigned __int16 *)&v8->klass->_2.bitflags1 )
        goto LABEL_14;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 13].method;
  }
  else
  {
LABEL_14:
    p_method = sub_AF54C0(*p_state_5__2, SimpleAnimation_State_TypeInfo, 13LL, v3);
  }
  if ( (*(float (__fastcall **)(struct SimpleAnimation_State_o *, _QWORD))p_method)(v8, *(_QWORD *)(p_method + 8)) <= 0.0 )
    goto LABEL_25;
  v14 = *p_state_5__2;
  if ( !v14 )
LABEL_28:
    sub_B5D69C(this, method);
  v15 = v14->klass;
  if ( *(_WORD *)&v14->klass->_2.bitflags1 )
  {
    v16 = 0LL;
    v17 = (SimpleAnimation_State_c **)&v15->_1.interfaceOffsets->offset;
    while ( *(v17 - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v16;
      v17 += 2;
      if ( v16 >= *(unsigned __int16 *)&v14->klass->_2.bitflags1 )
        goto LABEL_22;
    }
    v18 = (__int64)&v15->vtable[*(_DWORD *)v17 + 5].method;
  }
  else
  {
LABEL_22:
    v18 = sub_AF54C0(v14, SimpleAnimation_State_TypeInfo, 5LL, v13);
  }
  if ( (*(float (__fastcall **)(struct SimpleAnimation_State_o *, _QWORD))v18)(v14, *(_QWORD *)(v18 + 8)) >= 1.0 )
  {
LABEL_25:
    ActionExtensions__Call(v4->fields.endCallback, 0LL);
    return 0;
  }
  v4->fields.__2__current = 0LL;
  p__2__current = &v4->fields.__2__current;
  sub_B5D560(p__2__current);
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_ClassBoardSquare__WaitAnimationFinished_d__49_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
    sub_B5D69C(this, x);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v3->fields.isActive, 0LL);
}