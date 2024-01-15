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

  if ( (byte_40FB9FC & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_2860/*"BrightTurnTransition"*/, method);
    sub_B16FFC(&StringLiteral_2857/*"BrightTurn"*/, v9);
    sub_B16FFC(&StringLiteral_2862/*"BrightTurnUnLock"*/, v10);
    sub_B16FFC(&StringLiteral_12950/*"SquareEnable"*/, v11);
    sub_B16FFC(&StringLiteral_2813/*"BlackOutTransition"*/, v12);
    byte_40FB9FC = 1;
  }
  v13 = (System_Int32_array **)StringLiteral_2857/*"BrightTurn"*/;
  this->fields.enableAnimationName = (struct System_String_o *)StringLiteral_2857/*"BrightTurn"*/;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.enableAnimationName, v13, v2, v3, v4, v5, v6, v7);
  v14 = (System_Int32_array **)StringLiteral_12950/*"SquareEnable"*/;
  this->fields.releaseAnimationName = (struct System_String_o *)StringLiteral_12950/*"SquareEnable"*/;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.releaseAnimationName, v14, v15, v16, v17, v18, v19, v20);
  v21 = (System_Int32_array **)StringLiteral_2860/*"BrightTurnTransition"*/;
  this->fields.brightTurnTransitionAnimationName = (struct System_String_o *)StringLiteral_2860/*"BrightTurnTransition"*/;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.brightTurnTransitionAnimationName,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  v28 = (System_Int32_array **)StringLiteral_2813/*"BlackOutTransition"*/;
  this->fields.blackOutTransitionAnimationName = (struct System_String_o *)StringLiteral_2813/*"BlackOutTransition"*/;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.blackOutTransitionAnimationName,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  v35 = (System_Int32_array **)StringLiteral_2862/*"BrightTurnUnLock"*/;
  this->fields.unlockEnableAnimationName = (struct System_String_o *)StringLiteral_2862/*"BrightTurnUnLock"*/;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.unlockEnableAnimationName, v35, v36, v37, v38, v39, v40, v41);
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

  if ( (byte_40FB9F2 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_ClassBoardSquare__Invoke__, method);
    byte_40FB9F2 = 1;
  }
  ((void (__fastcall *)(ClassBoardSquare_o *, void *))this->klass->vtable._11_PlayClickedSe.method)(
    this,
    this->klass[1]._1.image);
  clickedEvent = this->fields.clickedEvent;
  if ( clickedEvent )
    System_Action_Uri___Invoke(
      (System_Action_Uri__o *)clickedEvent,
      (System_Uri_o *)this,
      (const MethodInfo_24B7324 *)Method_System_Action_ClassBoardSquare__Invoke__);
}


void __fastcall ClassBoardSquare__PlayClickedSe(ClassBoardSquare_o *this, const MethodInfo *method)
{
  _QWORD *v2; // x0
  System_Reflection_MethodBase_o *v3; // x0

  if ( (byte_40FB9F9 & 1) == 0 )
  {
    sub_B16FFC(&Method_ClassBoardSquare_PlayClickedSe__, method);
    byte_40FB9F9 = 1;
  }
  v2 = Method_ClassBoardSquare_PlayClickedSe__;
  if ( (*((_BYTE *)Method_ClassBoardSquare_PlayClickedSe__ + 75) & 2) != 0 )
    v2 = (_QWORD *)sub_B17004(Method_ClassBoardSquare_PlayClickedSe__);
  v3 = (System_Reflection_MethodBase_o *)sub_B16FE0(v2, v2[3]);
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
  __int64 v9; // x3
  __int64 v10; // x4
  System_String_o *unlockEnableAnimationName; // x20
  System_Action_o *v12; // x0
  __int64 *v13; // x8
  System_Action_o *v14; // x21
  const MethodInfo *v15; // x3

  if ( (byte_40FB9F8 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_ClassBoardEffectPlayer_GetData_bool___, v3);
    sub_B16FFC(&Method_ClassBoardSquare__PlayEnableEffect_b__46_0__, v4);
    sub_B16FFC(&Method_ClassBoardSquare__PlayEnableEffect_b__46_1__, v5);
    byte_40FB9F8 = 1;
  }
  enableEffectPlayer = this->fields.enableEffectPlayer;
  if ( !enableEffectPlayer )
    sub_B170D4();
  if ( ClassBoardEffectPlayer__GetData_bool_(
         enableEffectPlayer,
         (const MethodInfo_18BBF40 *)Method_ClassBoardEffectPlayer_GetData_bool___) )
  {
    unlockEnableAnimationName = this->fields.unlockEnableAnimationName;
    v12 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v7, v8, v9, v10);
    v13 = &Method_ClassBoardSquare__PlayEnableEffect_b__46_0__;
  }
  else
  {
    unlockEnableAnimationName = this->fields.enableAnimationName;
    v12 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v7, v8, v9, v10);
    v13 = &Method_ClassBoardSquare__PlayEnableEffect_b__46_1__;
  }
  v14 = v12;
  System_Action___ctor(v12, (Il2CppObject *)this, *v13, 0LL);
  ClassBoardSquare__PlaySimpleAnimation(this, unlockEnableAnimationName, v14, v15);
}


void __fastcall ClassBoardSquare__PlayReleaseEffect(ClassBoardSquare_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_String_o *releaseAnimationName; // x20
  System_Action_o *v8; // x21
  const MethodInfo *v9; // x3

  if ( (byte_40FB9F7 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_ClassBoardSquare__PlayReleaseEffect_b__45_0__, v6);
    byte_40FB9F7 = 1;
  }
  releaseAnimationName = this->fields.releaseAnimationName;
  v8 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_ClassBoardSquare__PlayReleaseEffect_b__45_0__, 0LL);
  ClassBoardSquare__PlaySimpleAnimation(this, releaseAnimationName, v8, v9);
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
    sub_B170D4();
  SimpleAnimation__Play_16380456(simpleAnimation, name, 0LL);
  v9 = ClassBoardSquare__WaitAnimationFinished(this, name, endCallback, v8);
  UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, v9, 0LL);
}


void __fastcall ClassBoardSquare__PlayTransition(ClassBoardSquare_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  IClassBoardSquareModel_c *klass; // x8
  unsigned __int64 v6; // x10
  IClassBoardSquareModel_c **p_offset; // x11
  __int64 p_method; // x0
  int v9; // w0
  const MethodInfo *v10; // x3
  System_Enum_o *v11; // x20
  System_Enum_o *v12; // x0
  System_String_o *brightTurnTransitionAnimationName; // x1
  int v14; // [xsp+8h] [xbp-18h] BYREF
  int v15; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40FB9F3 & 1) == 0 )
  {
    sub_B16FFC(&AcquireFlag_TypeInfo, method);
    sub_B16FFC(&IClassBoardSquareModel_TypeInfo, v3);
    byte_40FB9F3 = 1;
  }
  SquareModel_k__BackingField = this->fields._SquareModel_k__BackingField;
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
    p_method = sub_AAFEF8(this->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 13LL);
  }
  v9 = (*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD, _QWORD))p_method)(
         SquareModel_k__BackingField,
         0LL,
         *(_QWORD *)(p_method + 8));
  if ( !v9 )
    goto LABEL_14;
  v15 = v9;
  v11 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v15);
  v14 = 2;
  v12 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v14);
  if ( !v11 )
LABEL_16:
    sub_B170D4();
  if ( !System_Enum__HasFlag(v11, v12, 0LL) )
  {
LABEL_14:
    brightTurnTransitionAnimationName = this->fields.brightTurnTransitionAnimationName;
    goto LABEL_15;
  }
  brightTurnTransitionAnimationName = this->fields.blackOutTransitionAnimationName;
LABEL_15:
  ClassBoardSquare__PlaySimpleAnimation(this, brightTurnTransitionAnimationName, 0LL, v10);
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
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  ClassBoardSquare___c__DisplayClass43_0_o *v11; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v16; // x20

  if ( (byte_40FB9F5 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_GameObject___ctor__, objects);
    sub_B16FFC(&System_Action_GameObject__TypeInfo, v7);
    sub_B16FFC(&Method_BasicHelper_ForEach_GameObject___, v8);
    sub_B16FFC(&Method_ClassBoardSquare___c__DisplayClass43_0__SetActiveArrayObject_b__0__, v9);
    sub_B16FFC(&ClassBoardSquare___c__DisplayClass43_0_TypeInfo, v10);
    byte_40FB9F5 = 1;
  }
  v11 = (ClassBoardSquare___c__DisplayClass43_0_o *)sub_B170CC(
                                                      ClassBoardSquare___c__DisplayClass43_0_TypeInfo,
                                                      objects,
                                                      isActive,
                                                      method,
                                                      v4);
  ClassBoardSquare___c__DisplayClass43_0___ctor(v11, 0LL);
  if ( !v11 )
    sub_B170D4();
  v11->fields.isActive = isActive;
  v16 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                               System_Action_GameObject__TypeInfo,
                                                                               v12,
                                                                               v13,
                                                                               v14,
                                                                               v15);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v16,
    (Il2CppObject *)v11,
    Method_ClassBoardSquare___c__DisplayClass43_0__SetActiveArrayObject_b__0__,
    (const MethodInfo_24B7310 *)Method_System_Action_GameObject___ctor__);
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    (System_Collections_Generic_IEnumerable_T__o *)objects,
    (System_Action_T__o *)v16,
    (const MethodInfo_18B756C *)Method_BasicHelper_ForEach_GameObject___);
}


void __fastcall ClassBoardSquare__SetActiveObject(
        ClassBoardSquare_o *this,
        UnityEngine_GameObject_o *obj,
        bool isActive,
        const MethodInfo *method)
{
  if ( (byte_40FB9F6 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, obj);
    byte_40FB9F6 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)obj, 0LL, 0LL) )
  {
    if ( !obj )
      sub_B170D4();
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

  if ( (byte_40FB9FB & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, isActive);
    byte_40FB9FB = 1;
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
      sub_B170D4();
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
  UnityEngine_Transform_o *transform; // x0
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x22
  IClassBoardSquareModel_c *klass; // x8
  UnityEngine_Transform_o *v16; // x21
  unsigned __int64 v17; // x10
  IClassBoardSquareModel_c **p_offset; // x11
  __int64 p_method; // x0
  int v20; // s0
  UnityEngine_Object_o *gameObject; // x0
  UnityEngine_Object_o *v24; // x21
  System_String_o *name; // x0
  IClassBoardSquareModel_c *v26; // x8
  System_String_o *v27; // x22
  unsigned __int64 v28; // x10
  int32_t *v29; // x11
  __int64 v30; // x0
  System_String_o *v31; // x0
  System_String_o *v32; // x0
  UnityEngine_Object_o *v33; // x0
  System_Int32_array **v34; // x20
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  __int64 v39; // x21
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  struct ClassBoardEffectPlayer_o *releaseEffectPlayer; // x20
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x3
  __int64 v56; // x4
  System_Action_o *v57; // x0
  System_Int32_array **v58; // x21
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  UnityEngine_Object_o *v65; // x0
  System_Int32_array **v66; // x20
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x3
  __int64 v70; // x4
  __int64 v71; // x21
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  struct ClassBoardEffectPlayer_o *enableEffectPlayer; // x20
  __int64 v85; // x1
  __int64 v86; // x2
  __int64 v87; // x3
  __int64 v88; // x4
  System_Action_o *v89; // x21
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  int v96; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40FB9F0 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, squareModel);
    sub_B16FFC(&ClassBoardEffectPlayer_TypeInfo, v10);
    sub_B16FFC(&IClassBoardSquareModel_TypeInfo, v11);
    sub_B16FFC(&StringLiteral_15842/*"_"*/, v12);
    byte_40FB9F0 = 1;
  }
  v96 = 0;
  this->fields._SquareModel_k__BackingField = squareModel;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._SquareModel_k__BackingField,
    (System_Int32_array **)squareModel,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  SquareModel_k__BackingField = this->fields._SquareModel_k__BackingField;
  if ( !SquareModel_k__BackingField )
    goto LABEL_25;
  klass = SquareModel_k__BackingField->klass;
  v16 = transform;
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
    p_method = sub_AAFEF8(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 3LL);
  }
  (*(void (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))p_method)(
    SquareModel_k__BackingField,
    *(_QWORD *)(p_method + 8));
  if ( !v16 )
    goto LABEL_25;
  UnityEngine_Transform__set_localPosition(v16, *(UnityEngine_Vector3_o *)&v20, 0LL);
  ((void (__fastcall *)(ClassBoardSquare_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._8_UpdateDraw.method)(
    this,
    0LL,
    this->klass->vtable._9_PlayReleaseEffect.methodPtr);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_25;
  v24 = gameObject;
  name = UnityEngine_Object__get_name(gameObject, 0LL);
  if ( !squareModel )
    goto LABEL_25;
  v26 = squareModel->klass;
  v27 = name;
  if ( *(_WORD *)&squareModel->klass->_2.bitflags1 )
  {
    v28 = 0LL;
    v29 = &v26->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v29 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v28;
      v29 += 4;
      if ( v28 >= *(unsigned __int16 *)&squareModel->klass->_2.bitflags1 )
        goto LABEL_17;
    }
    v30 = (__int64)&v26->vtable[*v29].method;
  }
  else
  {
LABEL_17:
    v30 = sub_AAFEF8(squareModel, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  v96 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v30)(squareModel, *(_QWORD *)(v30 + 8));
  v31 = System_Int32__ToString((int32_t)&v96, 0LL);
  v32 = System_String__Concat_43746016(v27, (System_String_o *)StringLiteral_15842/*"_"*/, v31, 0LL);
  UnityEngine_Object__set_name(v24, v32, 0LL);
  v33 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v33 )
    goto LABEL_25;
  v34 = (System_Int32_array **)UnityEngine_Object__get_name(v33, 0LL);
  v39 = sub_B170CC(ClassBoardEffectPlayer_TypeInfo, v35, v36, v37, v38);
  System_Object___ctor((Il2CppObject *)v39, 0LL);
  *(_QWORD *)(v39 + 16) = v34;
  sub_B16F98((BattleServantConfConponent_o *)(v39 + 16), v34, v40, v41, v42, v43, v44, v45);
  this->fields.releaseEffectPlayer = (struct ClassBoardEffectPlayer_o *)v39;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.releaseEffectPlayer,
    (System_Int32_array **)v39,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  releaseEffectPlayer = this->fields.releaseEffectPlayer;
  v57 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v53, v54, v55, v56);
  if ( !this )
    goto LABEL_25;
  v58 = (System_Int32_array **)v57;
  System_Action___ctor(v57, (Il2CppObject *)this, (intptr_t)this->klass->vtable._10_PlayEnableEffect.methodPtr, 0LL);
  if ( !releaseEffectPlayer )
    goto LABEL_25;
  releaseEffectPlayer->fields.playCallback = (struct System_Action_o *)v58;
  sub_B16F98(
    (BattleServantConfConponent_o *)&releaseEffectPlayer->fields.playCallback,
    v58,
    v59,
    v60,
    v61,
    v62,
    v63,
    v64);
  v65 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v65 )
    goto LABEL_25;
  v66 = (System_Int32_array **)UnityEngine_Object__get_name(v65, 0LL);
  v71 = sub_B170CC(ClassBoardEffectPlayer_TypeInfo, v67, v68, v69, v70);
  System_Object___ctor((Il2CppObject *)v71, 0LL);
  *(_QWORD *)(v71 + 16) = v66;
  sub_B16F98((BattleServantConfConponent_o *)(v71 + 16), v66, v72, v73, v74, v75, v76, v77);
  this->fields.enableEffectPlayer = (struct ClassBoardEffectPlayer_o *)v71;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.enableEffectPlayer,
    (System_Int32_array **)v71,
    v78,
    v79,
    v80,
    v81,
    v82,
    v83);
  enableEffectPlayer = this->fields.enableEffectPlayer;
  v89 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v85, v86, v87, v88);
  System_Action___ctor(v89, (Il2CppObject *)this, (intptr_t)this->klass->vtable._11_PlayClickedSe.methodPtr, 0LL);
  if ( !enableEffectPlayer )
LABEL_25:
    sub_B170D4();
  enableEffectPlayer->fields.playCallback = v89;
  sub_B16F98(
    (BattleServantConfConponent_o *)&enableEffectPlayer->fields.playCallback,
    (System_Int32_array **)v89,
    v90,
    v91,
    v92,
    v93,
    v94,
    v95);
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
  AtlasManagerUnit_o *IconAtlasManagerUnit; // x0
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x22
  IClassBoardSquareModel_c *klass; // x8
  AtlasManagerUnit_o *v12; // x21
  unsigned __int64 v13; // x10
  IClassBoardSquareModel_c **p_offset; // x11
  __int64 p_method; // x0
  int32_t v16; // w0
  struct IClassBoardSquareModel_o *v17; // x23
  IClassBoardSquareModel_c *v18; // x8
  int32_t v19; // w22
  unsigned __int64 v20; // x10
  IClassBoardSquareModel_c **v21; // x11
  __int64 v22; // x0
  const MethodInfo *v23; // x2
  int32_t v24; // w23
  System_String_o *ClassBoardSkillIconName; // x0

  v3 = this;
  if ( (byte_40FB9F1 & 1) == 0 )
  {
    sub_B16FFC(&ClassBoardUtility_TypeInfo, method);
    this = (ClassBoardSquare_o *)sub_B16FFC(&IClassBoardSquareModel_TypeInfo, v4);
    byte_40FB9F1 = 1;
  }
  iconSpritesNormal = v3->fields.iconSpritesNormal;
  if ( !iconSpritesNormal )
    goto LABEL_27;
  v6 = *(_QWORD *)&iconSpritesNormal->max_length;
  if ( (int)v6 >= 1 )
  {
    v7 = 0LL;
    while ( 1 )
    {
      if ( v7 >= (unsigned int)v6 )
      {
        sub_B17100(this, method, v2);
        sub_B170A0();
      }
      v8 = iconSpritesNormal->m_Items[v7];
      IconAtlasManagerUnit = ClassBoardGlobalObject__get_IconAtlasManagerUnit((const MethodInfo *)this);
      SquareModel_k__BackingField = v3->fields._SquareModel_k__BackingField;
      if ( !SquareModel_k__BackingField )
        break;
      klass = SquareModel_k__BackingField->klass;
      v12 = IconAtlasManagerUnit;
      if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
      {
        v13 = 0LL;
        p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
        {
          ++v13;
          p_offset += 2;
          if ( v13 >= *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
            goto LABEL_12;
        }
        p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 2].method;
      }
      else
      {
LABEL_12:
        p_method = sub_AAFEF8(v3->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 2LL);
      }
      v16 = (*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))p_method)(
              SquareModel_k__BackingField,
              *(_QWORD *)(p_method + 8));
      v17 = v3->fields._SquareModel_k__BackingField;
      if ( !v17 )
        break;
      v18 = v17->klass;
      v19 = v16;
      if ( *(_WORD *)&v17->klass->_2.bitflags1 )
      {
        v20 = 0LL;
        v21 = (IClassBoardSquareModel_c **)&v18->_1.interfaceOffsets->offset;
        while ( *(v21 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          ++v20;
          v21 += 2;
          if ( v20 >= *(unsigned __int16 *)&v17->klass->_2.bitflags1 )
            goto LABEL_19;
        }
        v22 = (__int64)&v18->vtable[*(_DWORD *)v21 + 7].method;
      }
      else
      {
LABEL_19:
        v22 = sub_AAFEF8(v3->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 7LL);
      }
      v24 = (*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v22)(v17, *(_QWORD *)(v22 + 8));
      if ( (BYTE3(ClassBoardUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ClassBoardUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
      }
      ClassBoardSkillIconName = ClassBoardUtility__GetClassBoardSkillIconName(v19, v24, v23);
      if ( !v12 )
        break;
      this = (ClassBoardSquare_o *)AtlasManagerUnit__SetUI(v12, v8, ClassBoardSkillIconName, 0LL);
      LODWORD(v6) = iconSpritesNormal->max_length;
      if ( (__int64)++v7 >= (int)v6 )
        return;
    }
LABEL_27:
    sub_B170D4();
  }
}


void __fastcall ClassBoardSquare__UpdateDraw(
        ClassBoardSquare_o *this,
        System_Nullable_AcquireFlag__o handoverFlag,
        const MethodInfo *method)
{
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
  System_Enum_o *v17; // x0
  const MethodInfo *v18; // x1
  System_Enum_o *v19; // x21
  System_Enum_o *v20; // x0
  const MethodInfo *v21; // x1
  System_Enum_o *v22; // x20
  System_Enum_o *v23; // x0
  const MethodInfo *v24; // x1
  int v25; // [xsp+0h] [xbp-30h] BYREF
  int32_t v26; // [xsp+4h] [xbp-2Ch] BYREF
  System_Nullable_AcquireFlag__o v27; // [xsp+8h] [xbp-28h] BYREF
  System_Nullable_T__o v28; // 0:x0.16

  v27 = handoverFlag;
  if ( (byte_40FB9F4 & 1) == 0 )
  {
    sub_B16FFC(&AcquireFlag_TypeInfo, handoverFlag);
    sub_B16FFC(&IClassBoardSquareModel_TypeInfo, v5);
    sub_B16FFC(&Method_System_Nullable_AcquireFlag__get_HasValue__, v6);
    sub_B16FFC(&Method_System_Nullable_AcquireFlag__get_Value__, v7);
    byte_40FB9F4 = 1;
  }
  if ( (*(_QWORD *)&handoverFlag & 0xFF00000000LL) != 0 )
  {
    v28.fields.value = (Il2CppObject *)&v27;
    *(_QWORD *)&v28.fields.has_value = Method_System_Nullable_AcquireFlag__get_Value__;
    Value = System_Nullable_Int32Enum___get_Value(v28, (const MethodInfo_2968B58 *)method);
  }
  else
  {
    SquareModel_k__BackingField = this->fields._SquareModel_k__BackingField;
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
      p_method = sub_AAFEF8(this->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 13LL);
    }
    Value = (*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD, _QWORD))p_method)(
              SquareModel_k__BackingField,
              0LL,
              *(_QWORD *)(p_method + 8));
  }
  v15 = Value;
  if ( !Value )
  {
    ClassBoardSquare__DrawAvailable(this, v9);
    return;
  }
  v26 = Value;
  v16 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v26);
  v25 = 1;
  v17 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v25);
  if ( !v16 )
    goto LABEL_25;
  if ( System_Enum__HasFlag(v16, v17, 0LL) )
  {
    ClassBoardSquare__DrawAcquired(this, v18);
    return;
  }
  v26 = v15;
  v19 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v26);
  v25 = 2;
  v20 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v25);
  if ( !v19 )
    goto LABEL_25;
  if ( System_Enum__HasFlag(v19, v20, 0LL) )
  {
    ClassBoardSquare__DrawNotConnected(this, v21);
    return;
  }
  v26 = v15;
  v22 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v26);
  v25 = 8;
  v23 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v25);
  if ( !v22 )
LABEL_25:
    sub_B170D4();
  if ( System_Enum__HasFlag(v22, v23, 0LL) )
    ClassBoardSquare__DrawUnacquired(this, v24);
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
  __int64 v4; // x4
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

  if ( (byte_40FB9FA & 1) == 0 )
  {
    sub_B16FFC(&ClassBoardSquare__WaitAnimationFinished_d__49_TypeInfo, name);
    byte_40FB9FA = 1;
  }
  v8 = sub_B170CC(ClassBoardSquare__WaitAnimationFinished_d__49_TypeInfo, name, endCallback, method, v4);
  ClassBoardSquare__WaitAnimationFinished_d__49___ctor((ClassBoardSquare__WaitAnimationFinished_d__49_o *)v8, 0, 0LL);
  if ( !v8 )
    sub_B170D4();
  *(_QWORD *)(v8 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v8 + 32), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
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


void __fastcall ClassBoardSquare___PlayEnableEffect_b__46_0(ClassBoardSquare_o *this, const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x0
  const MethodInfo *v4; // x1
  ClassBoardEffectPlayer_o *enableEffectPlayer; // x0

  simpleAnimation = this->fields.simpleAnimation;
  if ( !simpleAnimation
    || (SimpleAnimation__Stop(simpleAnimation, 0LL),
        enableEffectPlayer = this->fields.enableEffectPlayer,
        this->fields.isUpdateDraw = 1,
        !enableEffectPlayer) )
  {
    sub_B170D4();
  }
  ClassBoardEffectPlayer__End(enableEffectPlayer, v4);
}


void __fastcall ClassBoardSquare___PlayEnableEffect_b__46_1(ClassBoardSquare_o *this, const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x0
  const MethodInfo *v4; // x1
  ClassBoardEffectPlayer_o *enableEffectPlayer; // x0

  simpleAnimation = this->fields.simpleAnimation;
  if ( !simpleAnimation
    || (SimpleAnimation__Stop(simpleAnimation, 0LL),
        enableEffectPlayer = this->fields.enableEffectPlayer,
        this->fields.isUpdateDraw = 1,
        !enableEffectPlayer) )
  {
    sub_B170D4();
  }
  ClassBoardEffectPlayer__End(enableEffectPlayer, v4);
}


void __fastcall ClassBoardSquare___PlayReleaseEffect_b__45_0(ClassBoardSquare_o *this, const MethodInfo *method)
{
  ClassBoardEffectPlayer_o *releaseEffectPlayer; // x0

  releaseEffectPlayer = this->fields.releaseEffectPlayer;
  this->fields.isUpdateDraw = 1;
  if ( !releaseEffectPlayer )
    sub_B170D4();
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

  if ( (byte_40FB9EE & 1) == 0 )
  {
    sub_B16FFC(&System_Action_ClassBoardSquare__TypeInfo, value);
    byte_40FB9EE = 1;
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
    v9 = sub_B0BA14(p_clickedEvent, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ClassBoardSquare_o *)sub_B173C8(v8);
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

  if ( (byte_40FB9EF & 1) == 0 )
  {
    sub_B16FFC(&System_Action_ClassBoardSquare__TypeInfo, value);
    byte_40FB9EF = 1;
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
    v9 = sub_B0BA14(p_clickedEvent, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ClassBoardSquare_o *)sub_B173C8(v8);
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
  sub_B16F98(
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
  int32_t _1__state; // w8
  struct ClassBoardSquare_o *_4__this; // x8
  SimpleAnimation_o *simpleAnimation; // x0
  struct SimpleAnimation_State_o *State; // x0
  struct SimpleAnimation_State_o **p_state_5__2; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct SimpleAnimation_State_o *v14; // x21
  SimpleAnimation_State_c *klass; // x8
  unsigned __int64 v16; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  struct SimpleAnimation_State_o *v19; // x20
  SimpleAnimation_State_c *v20; // x8
  unsigned __int64 v21; // x10
  SimpleAnimation_State_c **v22; // x11
  __int64 v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  bool result; // w0
  Il2CppObject **p__2__current; // x19

  if ( (byte_40F70F2 & 1) == 0 )
  {
    sub_B16FFC(&SimpleAnimation_State_TypeInfo, method);
    byte_40F70F2 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    p_state_5__2 = &this->fields._state_5__2;
    this->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_28;
    simpleAnimation = _4__this->fields.simpleAnimation;
    if ( !simpleAnimation )
      goto LABEL_28;
    State = SimpleAnimation__GetState(simpleAnimation, this->fields.name, 0LL);
    p_state_5__2 = &this->fields._state_5__2;
    this->fields._state_5__2 = State;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields._state_5__2,
      (System_Int32_array **)State,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
  }
  v14 = *p_state_5__2;
  if ( !*p_state_5__2 )
    goto LABEL_25;
  klass = v14->klass;
  if ( *(_WORD *)&v14->klass->_2.bitflags1 )
  {
    v16 = 0LL;
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v16;
      p_offset += 2;
      if ( v16 >= *(unsigned __int16 *)&v14->klass->_2.bitflags1 )
        goto LABEL_14;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 13].method;
  }
  else
  {
LABEL_14:
    p_method = sub_AAFEF8(*p_state_5__2, SimpleAnimation_State_TypeInfo, 13LL);
  }
  if ( (*(float (__fastcall **)(struct SimpleAnimation_State_o *, _QWORD))p_method)(v14, *(_QWORD *)(p_method + 8)) <= 0.0 )
    goto LABEL_25;
  v19 = *p_state_5__2;
  if ( !v19 )
LABEL_28:
    sub_B170D4();
  v20 = v19->klass;
  if ( *(_WORD *)&v19->klass->_2.bitflags1 )
  {
    v21 = 0LL;
    v22 = (SimpleAnimation_State_c **)&v20->_1.interfaceOffsets->offset;
    while ( *(v22 - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v21;
      v22 += 2;
      if ( v21 >= *(unsigned __int16 *)&v19->klass->_2.bitflags1 )
        goto LABEL_22;
    }
    v23 = (__int64)&v20->vtable[*(_DWORD *)v22 + 5].method;
  }
  else
  {
LABEL_22:
    v23 = sub_AAFEF8(v19, SimpleAnimation_State_TypeInfo, 5LL);
  }
  if ( (*(float (__fastcall **)(struct SimpleAnimation_State_o *, _QWORD))v23)(v19, *(_QWORD *)(v23 + 8)) >= 1.0 )
  {
LABEL_25:
    ActionExtensions__Call(this->fields.endCallback, 0LL);
    return 0;
  }
  this->fields.__2__current = 0LL;
  p__2__current = &this->fields.__2__current;
  sub_B16F98((BattleServantConfConponent_o *)p__2__current, 0LL, v24, v25, v26, v27, v28, v29);
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
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_ClassBoardSquare__WaitAnimationFinished_d__49_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
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
  UnityEngine_GameObject_o *gameObject; // x0

  if ( !x || (gameObject = UnityEngine_GameObject__get_gameObject(x, 0LL)) == 0LL )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, this->fields.isActive, 0LL);
}