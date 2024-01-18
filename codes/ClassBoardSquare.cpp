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

  if ( (byte_4189582 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_2872/*"BrightTurnTransition"*/, method);
    sub_B2C35C(&StringLiteral_2869/*"BrightTurn"*/, v9);
    sub_B2C35C(&StringLiteral_2874/*"BrightTurnUnLock"*/, v10);
    sub_B2C35C(&StringLiteral_13006/*"SquareEnable"*/, v11);
    sub_B2C35C(&StringLiteral_2825/*"BlackOutTransition"*/, v12);
    byte_4189582 = 1;
  }
  v13 = (System_Int32_array **)StringLiteral_2869/*"BrightTurn"*/;
  this->fields.enableAnimationName = (struct System_String_o *)StringLiteral_2869/*"BrightTurn"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.enableAnimationName, v13, v2, v3, v4, v5, v6, v7);
  v14 = (System_Int32_array **)StringLiteral_13006/*"SquareEnable"*/;
  this->fields.releaseAnimationName = (struct System_String_o *)StringLiteral_13006/*"SquareEnable"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.releaseAnimationName, v14, v15, v16, v17, v18, v19, v20);
  v21 = (System_Int32_array **)StringLiteral_2872/*"BrightTurnTransition"*/;
  this->fields.brightTurnTransitionAnimationName = (struct System_String_o *)StringLiteral_2872/*"BrightTurnTransition"*/;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.brightTurnTransitionAnimationName,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  v28 = (System_Int32_array **)StringLiteral_2825/*"BlackOutTransition"*/;
  this->fields.blackOutTransitionAnimationName = (struct System_String_o *)StringLiteral_2825/*"BlackOutTransition"*/;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.blackOutTransitionAnimationName,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  v35 = (System_Int32_array **)StringLiteral_2874/*"BrightTurnUnLock"*/;
  this->fields.unlockEnableAnimationName = (struct System_String_o *)StringLiteral_2874/*"BrightTurnUnLock"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.unlockEnableAnimationName, v35, v36, v37, v38, v39, v40, v41);
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

  if ( (byte_4189578 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_ClassBoardSquare__Invoke__, method);
    byte_4189578 = 1;
  }
  ((void (__fastcall *)(ClassBoardSquare_o *, void *))this->klass->vtable._11_PlayClickedSe.method)(
    this,
    this->klass[1]._1.image);
  clickedEvent = this->fields.clickedEvent;
  if ( clickedEvent )
    System_Action_Uri___Invoke(
      (System_Action_Uri__o *)clickedEvent,
      (System_Uri_o *)this,
      (const MethodInfo_24BBAEC *)Method_System_Action_ClassBoardSquare__Invoke__);
}


void __fastcall ClassBoardSquare__PlayClickedSe(ClassBoardSquare_o *this, const MethodInfo *method)
{
  _QWORD *v2; // x0
  System_Reflection_MethodBase_o *v3; // x0

  if ( (byte_418957F & 1) == 0 )
  {
    sub_B2C35C(&Method_ClassBoardSquare_PlayClickedSe__, method);
    byte_418957F = 1;
  }
  v2 = Method_ClassBoardSquare_PlayClickedSe__;
  if ( (*((_BYTE *)Method_ClassBoardSquare_PlayClickedSe__ + 75) & 2) != 0 )
    v2 = (_QWORD *)sub_B2C364(Method_ClassBoardSquare_PlayClickedSe__);
  v3 = (System_Reflection_MethodBase_o *)sub_B2C340(v2, v2[3]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 0, 0LL);
}


void __fastcall ClassBoardSquare__PlayEnableEffect(ClassBoardSquare_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  ClassBoardEffectPlayer_o *enableEffectPlayer; // x0
  System_String_o *unlockEnableAnimationName; // x20
  System_Action_o *v8; // x0
  __int64 *v9; // x8
  System_Action_o *v10; // x21
  const MethodInfo *v11; // x3

  if ( (byte_418957E & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_ClassBoardEffectPlayer_GetData_bool___, v3);
    sub_B2C35C(&Method_ClassBoardSquare__PlayEnableEffect_b__46_0__, v4);
    sub_B2C35C(&Method_ClassBoardSquare__PlayEnableEffect_b__46_1__, v5);
    byte_418957E = 1;
  }
  enableEffectPlayer = this->fields.enableEffectPlayer;
  if ( !enableEffectPlayer )
    sub_B2C434(0LL, method);
  if ( ClassBoardEffectPlayer__GetData_bool_(
         enableEffectPlayer,
         (const MethodInfo_172C6A8 *)Method_ClassBoardEffectPlayer_GetData_bool___) )
  {
    unlockEnableAnimationName = this->fields.unlockEnableAnimationName;
    v8 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    v9 = &Method_ClassBoardSquare__PlayEnableEffect_b__46_0__;
  }
  else
  {
    unlockEnableAnimationName = this->fields.enableAnimationName;
    v8 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    v9 = &Method_ClassBoardSquare__PlayEnableEffect_b__46_1__;
  }
  v10 = v8;
  System_Action___ctor(v8, (Il2CppObject *)this, *v9, 0LL);
  ClassBoardSquare__PlaySimpleAnimation(this, unlockEnableAnimationName, v10, v11);
}


void __fastcall ClassBoardSquare__PlayReleaseEffect(ClassBoardSquare_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *releaseAnimationName; // x20
  System_Action_o *v5; // x21
  const MethodInfo *v6; // x3

  if ( (byte_418957D & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_ClassBoardSquare__PlayReleaseEffect_b__45_0__, v3);
    byte_418957D = 1;
  }
  releaseAnimationName = this->fields.releaseAnimationName;
  v5 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_ClassBoardSquare__PlayReleaseEffect_b__45_0__, 0LL);
  ClassBoardSquare__PlaySimpleAnimation(this, releaseAnimationName, v5, v6);
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
    sub_B2C434(0LL, name);
  SimpleAnimation__Play_16486620(simpleAnimation, name, 0LL);
  v9 = ClassBoardSquare__WaitAnimationFinished(this, name, endCallback, v8);
  UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, v9, 0LL);
}


void __fastcall ClassBoardSquare__PlayTransition(ClassBoardSquare_o *this, const MethodInfo *method)
{
  __int64 v2; // x3
  ClassBoardSquare_o *v3; // x19
  __int64 v4; // x1
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  IClassBoardSquareModel_c *klass; // x8
  unsigned __int64 v7; // x10
  IClassBoardSquareModel_c **p_offset; // x11
  __int64 p_method; // x0
  int v10; // w0
  const MethodInfo *v11; // x3
  System_Enum_o *v12; // x20
  System_String_o *brightTurnTransitionAnimationName; // x1
  int v14; // [xsp+8h] [xbp-18h] BYREF
  int v15; // [xsp+Ch] [xbp-14h] BYREF

  v3 = this;
  if ( (byte_4189579 & 1) == 0 )
  {
    sub_B2C35C(&AcquireFlag_TypeInfo, method);
    this = (ClassBoardSquare_o *)sub_B2C35C(&IClassBoardSquareModel_TypeInfo, v4);
    byte_4189579 = 1;
  }
  SquareModel_k__BackingField = v3->fields._SquareModel_k__BackingField;
  if ( !SquareModel_k__BackingField )
    goto LABEL_16;
  klass = SquareModel_k__BackingField->klass;
  if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
  {
    v7 = 0LL;
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v7;
      p_offset += 2;
      if ( v7 >= *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 13].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AC5258(v3->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 13LL, v2);
  }
  v10 = (*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD, _QWORD))p_method)(
          SquareModel_k__BackingField,
          0LL,
          *(_QWORD *)(p_method + 8));
  if ( !v10 )
    goto LABEL_14;
  v15 = v10;
  v12 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v15);
  v14 = 2;
  this = (ClassBoardSquare_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v14);
  if ( !v12 )
LABEL_16:
    sub_B2C434(this, method);
  if ( !System_Enum__HasFlag(v12, (System_Enum_o *)this, 0LL) )
  {
LABEL_14:
    brightTurnTransitionAnimationName = v3->fields.brightTurnTransitionAnimationName;
    goto LABEL_15;
  }
  brightTurnTransitionAnimationName = v3->fields.blackOutTransitionAnimationName;
LABEL_15:
  ClassBoardSquare__PlaySimpleAnimation(v3, brightTurnTransitionAnimationName, 0LL, v11);
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
  __int64 v9; // x1
  ClassBoardSquare___c__DisplayClass43_0_o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v13; // x20

  if ( (byte_418957B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_GameObject___ctor__, objects);
    sub_B2C35C(&System_Action_GameObject__TypeInfo, v6);
    sub_B2C35C(&Method_BasicHelper_ForEach_GameObject___, v7);
    sub_B2C35C(&Method_ClassBoardSquare___c__DisplayClass43_0__SetActiveArrayObject_b__0__, v8);
    sub_B2C35C(&ClassBoardSquare___c__DisplayClass43_0_TypeInfo, v9);
    byte_418957B = 1;
  }
  v10 = (ClassBoardSquare___c__DisplayClass43_0_o *)sub_B2C42C(ClassBoardSquare___c__DisplayClass43_0_TypeInfo);
  ClassBoardSquare___c__DisplayClass43_0___ctor(v10, 0LL);
  if ( !v10 )
    sub_B2C434(v11, v12);
  v10->fields.isActive = isActive;
  v13 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_GameObject__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v13,
    (Il2CppObject *)v10,
    Method_ClassBoardSquare___c__DisplayClass43_0__SetActiveArrayObject_b__0__,
    (const MethodInfo_24BBAD8 *)Method_System_Action_GameObject___ctor__);
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    (System_Collections_Generic_IEnumerable_T__o *)objects,
    (System_Action_T__o *)v13,
    (const MethodInfo_1727C50 *)Method_BasicHelper_ForEach_GameObject___);
}


void __fastcall ClassBoardSquare__SetActiveObject(
        ClassBoardSquare_o *this,
        UnityEngine_GameObject_o *obj,
        bool isActive,
        const MethodInfo *method)
{
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_418957C & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, obj);
    byte_418957C = 1;
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
      sub_B2C434(v6, v7);
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

  if ( (byte_4189581 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, isActive);
    byte_4189581 = 1;
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
      sub_B2C434(0LL, v6);
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  UnityEngine_Object_o *transform; // x0
  __int64 v14; // x1
  __int64 v15; // x3
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x22
  IClassBoardSquareModel_c *klass; // x8
  UnityEngine_Transform_o *v18; // x21
  unsigned __int64 v19; // x10
  IClassBoardSquareModel_c **p_offset; // x11
  __int64 p_method; // x0
  int v22; // s0
  UnityEngine_Object_o *v25; // x21
  __int64 v26; // x3
  IClassBoardSquareModel_c *v27; // x8
  System_String_o *v28; // x22
  unsigned __int64 v29; // x10
  int32_t *v30; // x11
  __int64 v31; // x0
  System_String_o *v32; // x0
  System_String_o *v33; // x0
  System_Int32_array **name; // x20
  __int64 v35; // x21
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  struct ClassBoardEffectPlayer_o *releaseEffectPlayer; // x20
  System_Int32_array **v49; // x21
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_Int32_array **v56; // x20
  __int64 v57; // x21
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  struct ClassBoardEffectPlayer_o *enableEffectPlayer; // x20
  System_Action_o *v71; // x21
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  int v78; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4189576 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, squareModel);
    sub_B2C35C(&ClassBoardEffectPlayer_TypeInfo, v10);
    sub_B2C35C(&IClassBoardSquareModel_TypeInfo, v11);
    sub_B2C35C(&StringLiteral_15905/*"_"*/, v12);
    byte_4189576 = 1;
  }
  v78 = 0;
  this->fields._SquareModel_k__BackingField = squareModel;
  sub_B2C2F8(
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
  v18 = (UnityEngine_Transform_o *)transform;
  if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
  {
    v19 = 0LL;
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v19;
      p_offset += 2;
      if ( v19 >= *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 3].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AC5258(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 3LL, v15);
  }
  transform = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))p_method)(
                                        SquareModel_k__BackingField,
                                        *(_QWORD *)(p_method + 8));
  if ( !v18 )
    goto LABEL_25;
  UnityEngine_Transform__set_localPosition(v18, *(UnityEngine_Vector3_o *)&v22, 0LL);
  ((void (__fastcall *)(ClassBoardSquare_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._8_UpdateDraw.method)(
    this,
    0LL,
    this->klass->vtable._9_PlayReleaseEffect.methodPtr);
  transform = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_25;
  v25 = transform;
  transform = (UnityEngine_Object_o *)UnityEngine_Object__get_name(transform, 0LL);
  if ( !squareModel )
    goto LABEL_25;
  v27 = squareModel->klass;
  v28 = (System_String_o *)transform;
  if ( *(_WORD *)&squareModel->klass->_2.bitflags1 )
  {
    v29 = 0LL;
    v30 = &v27->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v30 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v29;
      v30 += 4;
      if ( v29 >= *(unsigned __int16 *)&squareModel->klass->_2.bitflags1 )
        goto LABEL_17;
    }
    v31 = (__int64)&v27->vtable[*v30].method;
  }
  else
  {
LABEL_17:
    v31 = sub_AC5258(squareModel, IClassBoardSquareModel_TypeInfo, 0LL, v26);
  }
  v78 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v31)(squareModel, *(_QWORD *)(v31 + 8));
  v32 = System_Int32__ToString((int32_t)&v78, 0LL);
  v33 = System_String__Concat_44307816(v28, (System_String_o *)StringLiteral_15905/*"_"*/, v32, 0LL);
  UnityEngine_Object__set_name(v25, v33, 0LL);
  transform = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_25;
  name = (System_Int32_array **)UnityEngine_Object__get_name(transform, 0LL);
  v35 = sub_B2C42C(ClassBoardEffectPlayer_TypeInfo);
  System_Object___ctor((Il2CppObject *)v35, 0LL);
  *(_QWORD *)(v35 + 16) = name;
  sub_B2C2F8((BattleServantConfConponent_o *)(v35 + 16), name, v36, v37, v38, v39, v40, v41);
  this->fields.releaseEffectPlayer = (struct ClassBoardEffectPlayer_o *)v35;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.releaseEffectPlayer,
    (System_Int32_array **)v35,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  releaseEffectPlayer = this->fields.releaseEffectPlayer;
  transform = (UnityEngine_Object_o *)sub_B2C42C(System_Action_TypeInfo);
  if ( !this )
    goto LABEL_25;
  v49 = (System_Int32_array **)transform;
  System_Action___ctor(
    (System_Action_o *)transform,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._10_PlayEnableEffect.methodPtr,
    0LL);
  if ( !releaseEffectPlayer )
    goto LABEL_25;
  releaseEffectPlayer->fields.playCallback = (struct System_Action_o *)v49;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&releaseEffectPlayer->fields.playCallback,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  transform = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_25;
  v56 = (System_Int32_array **)UnityEngine_Object__get_name(transform, 0LL);
  v57 = sub_B2C42C(ClassBoardEffectPlayer_TypeInfo);
  System_Object___ctor((Il2CppObject *)v57, 0LL);
  *(_QWORD *)(v57 + 16) = v56;
  sub_B2C2F8((BattleServantConfConponent_o *)(v57 + 16), v56, v58, v59, v60, v61, v62, v63);
  this->fields.enableEffectPlayer = (struct ClassBoardEffectPlayer_o *)v57;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.enableEffectPlayer,
    (System_Int32_array **)v57,
    v64,
    v65,
    v66,
    v67,
    v68,
    v69);
  enableEffectPlayer = this->fields.enableEffectPlayer;
  v71 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v71, (Il2CppObject *)this, (intptr_t)this->klass->vtable._11_PlayClickedSe.methodPtr, 0LL);
  if ( !enableEffectPlayer )
LABEL_25:
    sub_B2C434(transform, v14);
  enableEffectPlayer->fields.playCallback = v71;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&enableEffectPlayer->fields.playCallback,
    (System_Int32_array **)v71,
    v72,
    v73,
    v74,
    v75,
    v76,
    v77);
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
  __int64 v8; // x3
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x22
  IClassBoardSquareModel_c *klass; // x8
  AtlasManagerUnit_o *v11; // x21
  unsigned __int64 v12; // x10
  IClassBoardSquareModel_c **p_offset; // x11
  __int64 p_method; // x0
  __int64 v15; // x3
  struct IClassBoardSquareModel_o *v16; // x23
  IClassBoardSquareModel_c *v17; // x8
  int32_t v18; // w22
  unsigned __int64 v19; // x10
  IClassBoardSquareModel_c **v20; // x11
  __int64 v21; // x0
  const MethodInfo *v22; // x2
  int32_t v23; // w23
  __int64 v24; // x0

  v2 = this;
  if ( (byte_4189577 & 1) == 0 )
  {
    sub_B2C35C(&ClassBoardUtility_TypeInfo, method);
    this = (ClassBoardSquare_o *)sub_B2C35C(&IClassBoardSquareModel_TypeInfo, v3);
    byte_4189577 = 1;
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
        v24 = sub_B2C460(this);
        sub_B2C400(v24, 0LL);
      }
      v7 = iconSpritesNormal->m_Items[v6];
      this = (ClassBoardSquare_o *)ClassBoardGlobalObject__get_IconAtlasManagerUnit((const MethodInfo *)this);
      SquareModel_k__BackingField = v2->fields._SquareModel_k__BackingField;
      if ( !SquareModel_k__BackingField )
        break;
      klass = SquareModel_k__BackingField->klass;
      v11 = (AtlasManagerUnit_o *)this;
      if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
      {
        v12 = 0LL;
        p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
        {
          ++v12;
          p_offset += 2;
          if ( v12 >= *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
            goto LABEL_12;
        }
        p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 2].method;
      }
      else
      {
LABEL_12:
        p_method = sub_AC5258(v2->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 2LL, v8);
      }
      this = (ClassBoardSquare_o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))p_method)(
                                     SquareModel_k__BackingField,
                                     *(_QWORD *)(p_method + 8));
      v16 = v2->fields._SquareModel_k__BackingField;
      if ( !v16 )
        break;
      v17 = v16->klass;
      v18 = (int)this;
      if ( *(_WORD *)&v16->klass->_2.bitflags1 )
      {
        v19 = 0LL;
        v20 = (IClassBoardSquareModel_c **)&v17->_1.interfaceOffsets->offset;
        while ( *(v20 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          ++v19;
          v20 += 2;
          if ( v19 >= *(unsigned __int16 *)&v16->klass->_2.bitflags1 )
            goto LABEL_19;
        }
        v21 = (__int64)&v17->vtable[*(_DWORD *)v20 + 7].method;
      }
      else
      {
LABEL_19:
        v21 = sub_AC5258(v2->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 7LL, v15);
      }
      v23 = (*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v21)(v16, *(_QWORD *)(v21 + 8));
      if ( (BYTE3(ClassBoardUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ClassBoardUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
      }
      this = (ClassBoardSquare_o *)ClassBoardUtility__GetClassBoardSkillIconName(v18, v23, v22);
      if ( !v11 )
        break;
      this = (ClassBoardSquare_o *)AtlasManagerUnit__SetUI(v11, v7, (System_String_o *)this, 0LL);
      LODWORD(v5) = iconSpritesNormal->max_length;
      if ( (__int64)++v6 >= (int)v5 )
        return;
    }
LABEL_27:
    sub_B2C434(this, method);
  }
}


void __fastcall ClassBoardSquare__UpdateDraw(
        ClassBoardSquare_o *this,
        System_Nullable_AcquireFlag__o handoverFlag,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ClassBoardSquare_o *v5; // x19
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t Value; // w0
  const MethodInfo *v10; // x1
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  IClassBoardSquareModel_c *klass; // x8
  unsigned __int64 v13; // x10
  IClassBoardSquareModel_c **p_offset; // x11
  __int64 p_method; // x0
  int v16; // w20
  System_Enum_o *v17; // x21
  const MethodInfo *v18; // x1
  System_Enum_o *v19; // x21
  const MethodInfo *v20; // x1
  System_Enum_o *v21; // x20
  const MethodInfo *v22; // x1
  int v23; // [xsp+0h] [xbp-30h] BYREF
  int32_t v24; // [xsp+4h] [xbp-2Ch] BYREF
  System_Nullable_AcquireFlag__o v25; // [xsp+8h] [xbp-28h] BYREF
  System_Nullable_T__o v26; // 0:x0.16

  v5 = this;
  v25 = handoverFlag;
  if ( (byte_418957A & 1) == 0 )
  {
    sub_B2C35C(&AcquireFlag_TypeInfo, handoverFlag);
    sub_B2C35C(&IClassBoardSquareModel_TypeInfo, v6);
    sub_B2C35C(&Method_System_Nullable_AcquireFlag__get_HasValue__, v7);
    this = (ClassBoardSquare_o *)sub_B2C35C(&Method_System_Nullable_AcquireFlag__get_Value__, v8);
    byte_418957A = 1;
  }
  if ( (*(_QWORD *)&handoverFlag & 0xFF00000000LL) != 0 )
  {
    v26.fields.value = (Il2CppObject *)&v25;
    *(_QWORD *)&v26.fields.has_value = Method_System_Nullable_AcquireFlag__get_Value__;
    Value = System_Nullable_Int32Enum___get_Value(v26, (const MethodInfo_2151FF8 *)method);
  }
  else
  {
    SquareModel_k__BackingField = v5->fields._SquareModel_k__BackingField;
    if ( !SquareModel_k__BackingField )
      goto LABEL_25;
    klass = SquareModel_k__BackingField->klass;
    if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
    {
      v13 = 0LL;
      p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
      {
        ++v13;
        p_offset += 2;
        if ( v13 >= *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 13].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AC5258(v5->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 13LL, v3);
    }
    Value = (*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD, _QWORD))p_method)(
              SquareModel_k__BackingField,
              0LL,
              *(_QWORD *)(p_method + 8));
  }
  v16 = Value;
  if ( !Value )
  {
    ClassBoardSquare__DrawAvailable(v5, v10);
    return;
  }
  v24 = Value;
  v17 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v24);
  v23 = 1;
  this = (ClassBoardSquare_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v23);
  if ( !v17 )
    goto LABEL_25;
  if ( System_Enum__HasFlag(v17, (System_Enum_o *)this, 0LL) )
  {
    ClassBoardSquare__DrawAcquired(v5, v18);
    return;
  }
  v24 = v16;
  v19 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v24);
  v23 = 2;
  this = (ClassBoardSquare_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v23);
  if ( !v19 )
    goto LABEL_25;
  if ( System_Enum__HasFlag(v19, (System_Enum_o *)this, 0LL) )
  {
    ClassBoardSquare__DrawNotConnected(v5, v20);
    return;
  }
  v24 = v16;
  v21 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v24);
  v23 = 8;
  this = (ClassBoardSquare_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v23);
  if ( !v21 )
LABEL_25:
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_B2C434)(this, handoverFlag);
  if ( System_Enum__HasFlag(v21, (System_Enum_o *)this, 0LL) )
    ClassBoardSquare__DrawUnacquired(v5, v22);
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

  if ( (byte_4189580 & 1) == 0 )
  {
    sub_B2C35C(&ClassBoardSquare__WaitAnimationFinished_d__49_TypeInfo, name);
    byte_4189580 = 1;
  }
  v7 = sub_B2C42C(ClassBoardSquare__WaitAnimationFinished_d__49_TypeInfo);
  ClassBoardSquare__WaitAnimationFinished_d__49___ctor((ClassBoardSquare__WaitAnimationFinished_d__49_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_B2C434(v8, v9);
  *(_QWORD *)(v7 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 40) = name;
  sub_B2C2F8((BattleServantConfConponent_o *)(v7 + 40), (System_Int32_array **)name, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v7 + 48) = endCallback;
  sub_B2C2F8(
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
    sub_B2C434(simpleAnimation, method);
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
    sub_B2C434(simpleAnimation, method);
  }
  ClassBoardEffectPlayer__End((ClassBoardEffectPlayer_o *)simpleAnimation, method);
}


void __fastcall ClassBoardSquare___PlayReleaseEffect_b__45_0(ClassBoardSquare_o *this, const MethodInfo *method)
{
  ClassBoardEffectPlayer_o *releaseEffectPlayer; // x0

  releaseEffectPlayer = this->fields.releaseEffectPlayer;
  this->fields.isUpdateDraw = 1;
  if ( !releaseEffectPlayer )
    sub_B2C434(0LL, method);
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

  if ( (byte_4189574 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_ClassBoardSquare__TypeInfo, value);
    byte_4189574 = 1;
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
    v9 = sub_B20D74(p_clickedEvent, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ClassBoardSquare_o *)sub_B2C728(v8);
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

  if ( (byte_4189575 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_ClassBoardSquare__TypeInfo, value);
    byte_4189575 = 1;
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
    v9 = sub_B20D74(p_clickedEvent, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ClassBoardSquare_o *)sub_B2C728(v8);
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
  sub_B2C2F8(
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
  __int64 v2; // x3
  ClassBoardSquare__WaitAnimationFinished_d__49_o *v3; // x19
  int32_t _1__state; // w8
  struct ClassBoardSquare_o *_4__this; // x8
  SimpleAnimation_State_o *State; // x0
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

  v3 = this;
  if ( (byte_4184EFA & 1) == 0 )
  {
    this = (ClassBoardSquare__WaitAnimationFinished_d__49_o *)sub_B2C35C(&SimpleAnimation_State_TypeInfo, method);
    byte_4184EFA = 1;
  }
  _1__state = v3->fields.__1__state;
  if ( _1__state == 1 )
  {
    p_state_5__2 = &v3->fields._state_5__2;
    v3->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    _4__this = v3->fields.__4__this;
    v3->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_28;
    this = (ClassBoardSquare__WaitAnimationFinished_d__49_o *)_4__this->fields.simpleAnimation;
    if ( !this )
      goto LABEL_28;
    State = SimpleAnimation__GetState((SimpleAnimation_o *)this, v3->fields.name, 0LL);
    p_state_5__2 = &v3->fields._state_5__2;
    v3->fields._state_5__2 = State;
    sub_B2C2F8(&v3->fields._state_5__2, State);
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
    p_method = sub_AC5258(*p_state_5__2, SimpleAnimation_State_TypeInfo, 13LL, v2);
  }
  if ( (*(float (__fastcall **)(struct SimpleAnimation_State_o *, _QWORD))p_method)(v8, *(_QWORD *)(p_method + 8)) <= 0.0 )
    goto LABEL_25;
  v14 = *p_state_5__2;
  if ( !v14 )
LABEL_28:
    sub_B2C434(this, method);
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
    v18 = sub_AC5258(v14, SimpleAnimation_State_TypeInfo, 5LL, v13);
  }
  if ( (*(float (__fastcall **)(struct SimpleAnimation_State_o *, _QWORD))v18)(v14, *(_QWORD *)(v18 + 8)) >= 1.0 )
  {
LABEL_25:
    ActionExtensions__Call(v3->fields.endCallback, 0LL);
    return 0;
  }
  v3->fields.__2__current = 0LL;
  p__2__current = &v3->fields.__2__current;
  sub_B2C2F8(p__2__current, 0LL);
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

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_ClassBoardSquare__WaitAnimationFinished_d__49_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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
    sub_B2C434(this, x);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v3->fields.isActive, 0LL);
}