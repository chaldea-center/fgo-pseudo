void __fastcall ClassBoardSquare___ctor(ClassBoardSquare_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  int64_t v17; // x1
  int64_t v18; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int64_t v25; // x1
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int64_t v32; // x1
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int64_t v39; // x1
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7

  if ( (byte_4B19736 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_3368/*"BrightTurnTransition"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_3365/*"BrightTurn"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_3370/*"BrightTurnUnLock"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_13081/*"SquareEnable"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_3319/*"BlackOutTransition"*/, v15, v16);
    byte_4B19736 = 1;
  }
  v17 = StringLiteral_3365/*"BrightTurn"*/;
  this->fields.enableAnimationName = (struct System_String_o *)StringLiteral_3365/*"BrightTurn"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.enableAnimationName, v17, v2, v3, v4, v5, v6, v7);
  v18 = StringLiteral_13081/*"SquareEnable"*/;
  this->fields.releaseAnimationName = (struct System_String_o *)StringLiteral_13081/*"SquareEnable"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.releaseAnimationName, v18, v19, v20, v21, v22, v23, v24);
  v25 = StringLiteral_3368/*"BrightTurnTransition"*/;
  this->fields.brightTurnTransitionAnimationName = (struct System_String_o *)StringLiteral_3368/*"BrightTurnTransition"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.brightTurnTransitionAnimationName,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v32 = StringLiteral_3319/*"BlackOutTransition"*/;
  this->fields.blackOutTransitionAnimationName = (struct System_String_o *)StringLiteral_3319/*"BlackOutTransition"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.blackOutTransitionAnimationName,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  v39 = StringLiteral_3370/*"BrightTurnUnLock"*/;
  this->fields.unlockEnableAnimationName = (struct System_String_o *)StringLiteral_3370/*"BrightTurnUnLock"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.unlockEnableAnimationName, v39, v40, v41, v42, v43, v44, v45);
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
  struct System_Action_ClassBoardSquare__o *clickedEvent; // x8

  ((void (__fastcall *)(ClassBoardSquare_o *, void *))this->klass->vtable._11_PlayClickedSe.method)(
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
  __int64 v2; // x2
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_4B19733 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ClassBoardSquare_PlayClickedSe__, method, v2);
    byte_4B19733 = 1;
  }
  v3 = Method_ClassBoardSquare_PlayClickedSe__;
  if ( (*((_BYTE *)Method_ClassBoardSquare_PlayClickedSe__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1BCA7F8(Method_ClassBoardSquare_PlayClickedSe__);
  v4 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
}


void __fastcall ClassBoardSquare__PlayEnableEffect(ClassBoardSquare_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  ClassBoardEffectPlayer_o *enableEffectPlayer; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  System_String_o *unlockEnableAnimationName; // x20
  System_Action_o *v15; // x0
  __int64 *v16; // x8
  System_Action_o *v17; // x21
  const MethodInfo *v18; // x3

  if ( (byte_4B19732 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_ClassBoardEffectPlayer_GetData_bool___, v4, v5);
    sub_1BCA7E0(&Method_ClassBoardSquare__PlayEnableEffect_b__46_0__, v6, v7);
    sub_1BCA7E0(&Method_ClassBoardSquare__PlayEnableEffect_b__46_1__, v8, v9);
    byte_4B19732 = 1;
  }
  enableEffectPlayer = this->fields.enableEffectPlayer;
  if ( !enableEffectPlayer )
    sub_1BCAA3C(0LL, method);
  if ( ClassBoardEffectPlayer__GetData_bool_(
         enableEffectPlayer,
         (const MethodInfo_2F06760 *)Method_ClassBoardEffectPlayer_GetData_bool___) )
  {
    unlockEnableAnimationName = this->fields.unlockEnableAnimationName;
    v15 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v11, v12, v13);
    v16 = &Method_ClassBoardSquare__PlayEnableEffect_b__46_0__;
  }
  else
  {
    unlockEnableAnimationName = this->fields.enableAnimationName;
    v15 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v11, v12, v13);
    v16 = &Method_ClassBoardSquare__PlayEnableEffect_b__46_1__;
  }
  v17 = v15;
  System_Action___ctor(v15, (Il2CppObject *)this, *v16, 0LL);
  ClassBoardSquare__PlaySimpleAnimation(this, unlockEnableAnimationName, v17, v18);
}


void __fastcall ClassBoardSquare__PlayReleaseEffect(ClassBoardSquare_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_String_o *releaseAnimationName; // x20
  System_Action_o *v8; // x21
  const MethodInfo *v9; // x3

  if ( (byte_4B19731 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_ClassBoardSquare__PlayReleaseEffect_b__45_0__, v5, v6);
    byte_4B19731 = 1;
  }
  releaseAnimationName = this->fields.releaseAnimationName;
  v8 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
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
    sub_1BCAA3C(0LL, name);
  SimpleAnimation__Play_64539336(simpleAnimation, name, 0LL);
  v9 = ClassBoardSquare__WaitAnimationFinished(this, name, endCallback, v8);
  UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v9, 0LL);
}


void __fastcall ClassBoardSquare__PlayTransition(ClassBoardSquare_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ClassBoardSquare_o *v3; // x19
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  IClassBoardSquareModel_c *klass; // x8
  __int64 v6; // x9
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 p_method; // x0
  char v9; // w0
  const MethodInfo *v10; // x3
  __int64 v11; // x8

  v3 = this;
  if ( (byte_4B1972D & 1) == 0 )
  {
    this = (ClassBoardSquare_o *)sub_1BCA7E0(&IClassBoardSquareModel_TypeInfo, method, v2);
    byte_4B1972D = 1;
  }
  SquareModel_k__BackingField = v3->fields._SquareModel_k__BackingField;
  if ( !SquareModel_k__BackingField )
    sub_1BCAA3C(this, method);
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
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 13].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C1C7C0(v3->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 13LL);
  }
  v9 = (*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD, _QWORD))p_method)(
         SquareModel_k__BackingField,
         0LL,
         *(_QWORD *)(p_method + 8));
  v11 = 128LL;
  if ( (v9 & 2) == 0 )
    v11 = 120LL;
  ClassBoardSquare__PlaySimpleAnimation(v3, *(System_String_o **)((char *)&v3->klass + v11), 0LL, v10);
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
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  System_Action_object__o *v17; // x20

  if ( (byte_4B1972F & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_GameObject__TypeInfo, objects, isActive);
    sub_1BCA7E0(&Method_BasicHelper_ForEach_GameObject___, v6, v7);
    sub_1BCA7E0(&Method_ClassBoardSquare___c__DisplayClass43_0__SetActiveArrayObject_b__0__, v8, v9);
    sub_1BCA7E0(&ClassBoardSquare___c__DisplayClass43_0_TypeInfo, v10, v11);
    byte_4B1972F = 1;
  }
  v12 = sub_1BCAA2C(ClassBoardSquare___c__DisplayClass43_0_TypeInfo, objects, isActive, method);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    sub_1BCAA3C(v13, v14);
  *(_BYTE *)(v12 + 16) = isActive;
  v17 = (System_Action_object__o *)sub_1BCAA2C(System_Action_GameObject__TypeInfo, v14, v15, v16);
  System_Action_object____ctor(
    v17,
    (Il2CppObject *)v12,
    Method_ClassBoardSquare___c__DisplayClass43_0__SetActiveArrayObject_b__0__,
    0LL);
  BasicHelper__ForEach_object_(
    (System_Collections_Generic_IEnumerable_T__o *)objects,
    (System_Action_T__o *)v17,
    (const MethodInfo_2EFFC84 *)Method_BasicHelper_ForEach_GameObject___);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardSquare__SetActiveObject(
        ClassBoardSquare_o *this,
        UnityEngine_GameObject_o *obj,
        bool isActive,
        const MethodInfo *method)
{
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_4B19730 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, obj, isActive);
    byte_4B19730 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, obj);
  v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)obj, 0LL, 0LL);
  if ( v6 )
  {
    if ( !obj )
      sub_1BCAA3C(v6, v7);
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

  if ( (byte_4B19735 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, isActive, method);
    byte_4B19735 = 1;
  }
  selectedEffect = (UnityEngine_Object_o *)this->fields.selectedEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isActive);
  if ( UnityEngine_Object__op_Inequality(selectedEffect, 0LL, 0LL) )
  {
    v7 = this->fields.selectedEffect;
    if ( !v7 )
      sub_1BCAA3C(0LL, v6);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  UnityEngine_Object_o *transform; // x0
  __int64 v17; // x1
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x22
  IClassBoardSquareModel_c *klass; // x8
  UnityEngine_Transform_o *v20; // x21
  __int64 v21; // x9
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 p_method; // x0
  int v24; // s0
  UnityEngine_Object_o *v27; // x21
  IClassBoardSquareModel_c *v28; // x8
  System_String_o *v29; // x22
  __int64 v30; // x9
  int32_t *v31; // x10
  __int64 v32; // x0
  System_String_o *v33; // x0
  System_String_o *v34; // x0
  System_String_o *name; // x20
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  int64_t v39; // x21
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  struct ClassBoardEffectPlayer_o *releaseEffectPlayer; // x20
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x3
  System_Action_o *v56; // x21
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  System_String_o *v63; // x20
  __int64 v64; // x1
  __int64 v65; // x2
  __int64 v66; // x3
  int64_t v67; // x21
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  struct ClassBoardEffectPlayer_o *enableEffectPlayer; // x20
  __int64 v81; // x1
  __int64 v82; // x2
  __int64 v83; // x3
  System_Action_o *v84; // x21
  int64_t v85; // x2
  int32_t v86; // w3
  System_String_o *v87; // x4
  BattleSetupInfo_o *v88; // x5
  FollowerInfo_o *v89; // x6
  PartyListViewItem_o *v90; // x7
  int v91; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B1972B & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, squareModel, method);
    sub_1BCA7E0(&ClassBoardEffectPlayer_TypeInfo, v10, v11);
    sub_1BCA7E0(&IClassBoardSquareModel_TypeInfo, v12, v13);
    sub_1BCA7E0(&StringLiteral_16290/*"_"*/, v14, v15);
    byte_4B1972B = 1;
  }
  v91 = 0;
  this->fields._SquareModel_k__BackingField = squareModel;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._SquareModel_k__BackingField,
    (int64_t)squareModel,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  transform = (UnityEngine_Object_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  SquareModel_k__BackingField = this->fields._SquareModel_k__BackingField;
  if ( !SquareModel_k__BackingField )
    goto LABEL_24;
  klass = SquareModel_k__BackingField->klass;
  v20 = (UnityEngine_Transform_o *)transform;
  v21 = *(unsigned __int16 *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3) )
  {
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v21;
      p_offset += 2;
      if ( !v21 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 3].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C1C7C0(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 3LL);
  }
  transform = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))p_method)(
                                        SquareModel_k__BackingField,
                                        *(_QWORD *)(p_method + 8));
  if ( !v20 )
    goto LABEL_24;
  UnityEngine_Transform__set_localPosition(v20, *(UnityEngine_Vector3_o *)&v24, 0LL);
  ((void (__fastcall *)(ClassBoardSquare_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._8_UpdateDraw.method)(
    this,
    0LL,
    this->klass->vtable._9_PlayReleaseEffect.methodPtr);
  transform = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_24;
  v27 = transform;
  transform = (UnityEngine_Object_o *)UnityEngine_Object__get_name(transform, 0LL);
  if ( !squareModel )
    goto LABEL_24;
  v28 = squareModel->klass;
  v29 = (System_String_o *)transform;
  v30 = *(unsigned __int16 *)(&squareModel->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&squareModel->klass->_2.bitflags2 + 3) )
  {
    v31 = &v28->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v31 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v30;
      v31 += 4;
      if ( !v30 )
        goto LABEL_17;
    }
    v32 = (__int64)&v28->vtable[*v31].method;
  }
  else
  {
LABEL_17:
    v32 = sub_1C1C7C0(squareModel, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  v91 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v32)(squareModel, *(_QWORD *)(v32 + 8));
  v33 = System_Int32__ToString((int32_t)&v91, 0LL);
  v34 = System_String__Concat_62412480(v29, (System_String_o *)StringLiteral_16290/*"_"*/, v33, 0LL);
  UnityEngine_Object__set_name(v27, v34, 0LL);
  transform = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_24;
  name = UnityEngine_Object__get_name(transform, 0LL);
  v39 = sub_1BCAA2C(ClassBoardEffectPlayer_TypeInfo, v36, v37, v38);
  System_Object___ctor((Il2CppObject *)v39, 0LL);
  *(_QWORD *)(v39 + 16) = name;
  sub_1BCA784((PartyOrganizationUtility_o *)(v39 + 16), (int64_t)name, v40, v41, v42, v43, v44, v45);
  this->fields.releaseEffectPlayer = (struct ClassBoardEffectPlayer_o *)v39;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.releaseEffectPlayer, v39, v46, v47, v48, v49, v50, v51);
  releaseEffectPlayer = this->fields.releaseEffectPlayer;
  v56 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v53, v54, v55);
  System_Action___ctor(v56, (Il2CppObject *)this, (intptr_t)this->klass->vtable._10_PlayEnableEffect.methodPtr, 0LL);
  if ( !releaseEffectPlayer )
    goto LABEL_24;
  releaseEffectPlayer->fields.playCallback = v56;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&releaseEffectPlayer->fields.playCallback,
    (int64_t)v56,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62);
  transform = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_24;
  v63 = UnityEngine_Object__get_name(transform, 0LL);
  v67 = sub_1BCAA2C(ClassBoardEffectPlayer_TypeInfo, v64, v65, v66);
  System_Object___ctor((Il2CppObject *)v67, 0LL);
  *(_QWORD *)(v67 + 16) = v63;
  sub_1BCA784((PartyOrganizationUtility_o *)(v67 + 16), (int64_t)v63, v68, v69, v70, v71, v72, v73);
  this->fields.enableEffectPlayer = (struct ClassBoardEffectPlayer_o *)v67;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.enableEffectPlayer, v67, v74, v75, v76, v77, v78, v79);
  enableEffectPlayer = this->fields.enableEffectPlayer;
  v84 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v81, v82, v83);
  System_Action___ctor(v84, (Il2CppObject *)this, (intptr_t)this->klass->vtable._11_PlayClickedSe.methodPtr, 0LL);
  if ( !enableEffectPlayer )
LABEL_24:
    sub_1BCAA3C(transform, v17);
  enableEffectPlayer->fields.playCallback = v84;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&enableEffectPlayer->fields.playCallback,
    (int64_t)v84,
    v85,
    v86,
    v87,
    v88,
    v89,
    v90);
  ((void (__fastcall *)(ClassBoardSquare_o *, Il2CppMethodPointer))this->klass->vtable._6_SetupIcon.method)(
    this,
    this->klass->vtable._7_PlayTransition.methodPtr);
}


void __fastcall ClassBoardSquare__SetupIcon(ClassBoardSquare_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ClassBoardSquare_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  struct UISprite_array *iconSpritesNormal; // x24
  __int64 v7; // x8
  unsigned __int64 v8; // x25
  UISprite_o *v9; // x20
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x22
  IClassBoardSquareModel_c *klass; // x8
  AtlasManagerUnit_o *v12; // x21
  __int64 v13; // x9
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 p_method; // x0
  struct IClassBoardSquareModel_o *v16; // x23
  IClassBoardSquareModel_c *v17; // x8
  int32_t v18; // w22
  __int64 v19; // x9
  IClassBoardSquareModel_c **v20; // x10
  __int64 v21; // x0
  __int64 v22; // x1
  const MethodInfo *v23; // x2
  int32_t v24; // w23

  v3 = this;
  if ( (byte_4B1972C & 1) == 0 )
  {
    sub_1BCA7E0(&ClassBoardUtility_TypeInfo, method, v2);
    this = (ClassBoardSquare_o *)sub_1BCA7E0(&IClassBoardSquareModel_TypeInfo, v4, v5);
    byte_4B1972C = 1;
  }
  iconSpritesNormal = v3->fields.iconSpritesNormal;
  if ( !iconSpritesNormal )
    goto LABEL_26;
  v7 = *(_QWORD *)&iconSpritesNormal->max_length;
  if ( (int)v7 >= 1 )
  {
    v8 = 0LL;
    while ( 1 )
    {
      if ( v8 >= (unsigned int)v7 )
        sub_1BCAA44(this, method);
      v9 = iconSpritesNormal->m_Items[v8];
      this = (ClassBoardSquare_o *)ClassBoardGlobalObject__get_IconAtlasManagerUnit((const MethodInfo *)this);
      SquareModel_k__BackingField = v3->fields._SquareModel_k__BackingField;
      if ( !SquareModel_k__BackingField )
        break;
      klass = SquareModel_k__BackingField->klass;
      v12 = (AtlasManagerUnit_o *)this;
      v13 = *(unsigned __int16 *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3) )
      {
        p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v13;
          p_offset += 2;
          if ( !v13 )
            goto LABEL_12;
        }
        p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 2].method;
      }
      else
      {
LABEL_12:
        p_method = sub_1C1C7C0(v3->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 2LL);
      }
      this = (ClassBoardSquare_o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))p_method)(
                                     SquareModel_k__BackingField,
                                     *(_QWORD *)(p_method + 8));
      v16 = v3->fields._SquareModel_k__BackingField;
      if ( !v16 )
        break;
      v17 = v16->klass;
      v18 = (int)this;
      v19 = *(unsigned __int16 *)(&v16->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v16->klass->_2.bitflags2 + 3) )
      {
        v20 = (IClassBoardSquareModel_c **)&v17->_1.interfaceOffsets->offset;
        while ( *(v20 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v19;
          v20 += 2;
          if ( !v19 )
            goto LABEL_19;
        }
        v21 = (__int64)&v17->vtable[*(_DWORD *)v20 + 7].method;
      }
      else
      {
LABEL_19:
        v21 = sub_1C1C7C0(v3->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 7LL);
      }
      v24 = (*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v21)(v16, *(_QWORD *)(v21 + 8));
      if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo, v22);
      this = (ClassBoardSquare_o *)ClassBoardUtility__GetClassBoardSkillIconName(v18, v24, v23);
      if ( !v12 )
        break;
      this = (ClassBoardSquare_o *)AtlasManagerUnit__SetUI(v12, v9, (System_String_o *)this, 0LL);
      LODWORD(v7) = iconSpritesNormal->max_length;
      if ( (__int64)++v8 >= (int)v7 )
        return;
    }
LABEL_26:
    sub_1BCAA3C(this, method);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  int32_t Value; // w0
  const MethodInfo *v10; // x1
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  IClassBoardSquareModel_c *klass; // x8
  __int64 v13; // x9
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 p_method; // x0
  System_Nullable_AcquireFlag__o v16; // [xsp+8h] [xbp-28h] BYREF
  System_Nullable_Int32Enum__o v17; // 0:x0.8

  hasValue = handoverFlag.fields.hasValue;
  v4 = this;
  v16 = handoverFlag;
  if ( (byte_4B1972E & 1) == 0 )
  {
    sub_1BCA7E0(&IClassBoardSquareModel_TypeInfo, handoverFlag, method);
    sub_1BCA7E0(&Method_System_Nullable_AcquireFlag__get_HasValue__, v5, v6);
    this = (ClassBoardSquare_o *)sub_1BCA7E0(&Method_System_Nullable_AcquireFlag__get_Value__, v7, v8);
    byte_4B1972E = 1;
  }
  if ( !hasValue )
  {
    SquareModel_k__BackingField = v4->fields._SquareModel_k__BackingField;
    if ( !SquareModel_k__BackingField )
      sub_1BCAA3C(this, handoverFlag);
    klass = SquareModel_k__BackingField->klass;
    v13 = *(unsigned __int16 *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3) )
    {
      p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
      {
        --v13;
        p_offset += 2;
        if ( !v13 )
          goto LABEL_14;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 13].method;
    }
    else
    {
LABEL_14:
      p_method = sub_1C1C7C0(v4->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 13LL);
    }
    Value = (*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD, _QWORD))p_method)(
              SquareModel_k__BackingField,
              0LL,
              *(_QWORD *)(p_method + 8));
    if ( Value )
      goto LABEL_5;
LABEL_19:
    ClassBoardSquare__DrawAvailable(v4, v10);
    return;
  }
  v17 = (System_Nullable_Int32Enum__o)&v16;
  Value = System_Nullable_Int32Enum___get_Value(
            v17,
            (const MethodInfo_36BEE74 *)Method_System_Nullable_AcquireFlag__get_Value__);
  if ( !Value )
    goto LABEL_19;
LABEL_5:
  if ( (Value & 1) != 0 )
  {
    ClassBoardSquare__DrawAcquired(v4, v10);
  }
  else if ( (Value & 2) != 0 )
  {
    ClassBoardSquare__DrawNotConnected(v4, v10);
  }
  else if ( (Value & 8) != 0 )
  {
    ClassBoardSquare__DrawUnacquired(v4, v10);
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7

  if ( (byte_4B19734 & 1) == 0 )
  {
    sub_1BCA7E0(&ClassBoardSquare__WaitAnimationFinished_d__49_TypeInfo, name, endCallback);
    byte_4B19734 = 1;
  }
  v7 = sub_1BCAA2C(ClassBoardSquare__WaitAnimationFinished_d__49_TypeInfo, name, endCallback, method);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v7 + 32), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v7 + 40) = name;
  sub_1BCA784((PartyOrganizationUtility_o *)(v7 + 40), (int64_t)name, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v7 + 48) = endCallback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v7 + 48), (int64_t)endCallback, v20, v21, v22, v23, v24, v25);
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
    sub_1BCAA3C(simpleAnimation, method);
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
    sub_1BCAA3C(simpleAnimation, method);
  }
  ClassBoardEffectPlayer__End((ClassBoardEffectPlayer_o *)simpleAnimation, method);
}


void __fastcall ClassBoardSquare___PlayReleaseEffect_b__45_0(ClassBoardSquare_o *this, const MethodInfo *method)
{
  ClassBoardEffectPlayer_o *releaseEffectPlayer; // x0

  releaseEffectPlayer = this->fields.releaseEffectPlayer;
  this->fields.isUpdateDraw = 1;
  if ( !releaseEffectPlayer )
    sub_1BCAA3C(0LL, method);
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
  System_Delegate_o *v9; // x22
  __int64 v10; // x1
  __int64 v11; // x0
  bool v12; // zf
  ClassBoardSquare_o *v13; // x0
  System_Action_ClassBoardSquare__o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_4B19729 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_ClassBoardSquare__TypeInfo, value, method);
    byte_4B19729 = 1;
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
    v10 = sub_1BCA91C(v8, System_Action_ClassBoardSquare__TypeInfo);
    if ( !v10 )
      break;
LABEL_8:
    v11 = sub_1C05CD0(p_clickedEvent, v10, v6);
    v12 = v6 == (System_Delegate_o *)v11;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_1BCACFC(v9);
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

  if ( (byte_4B1972A & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_ClassBoardSquare__TypeInfo, value, method);
    byte_4B1972A = 1;
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
    v10 = sub_1BCA91C(v8, System_Action_ClassBoardSquare__TypeInfo);
    if ( !v10 )
      break;
LABEL_8:
    v11 = sub_1C05CD0(p_clickedEvent, v10, v6);
    v12 = v6 == (System_Delegate_o *)v11;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_1BCACFC(v9);
  ClassBoardSquare__get_ReleaseEffectPlayer(v13, v14);
}


void __fastcall ClassBoardSquare__set_SquareModel(
        ClassBoardSquare_o *this,
        IClassBoardSquareModel_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._SquareModel_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._SquareModel_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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
  __int64 v2; // x2
  ClassBoardSquare__WaitAnimationFinished_d__49_o *v3; // x19
  int32_t _1__state; // w8
  struct ClassBoardSquare_o *_4__this; // x8
  SimpleAnimation_State_o *State; // x0
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  struct SimpleAnimation_State_o *state_5__2; // x20
  SimpleAnimation_State_c *klass; // x8
  __int64 v15; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 p_method; // x0
  struct SimpleAnimation_State_o *v18; // x20
  SimpleAnimation_State_c *v19; // x8
  __int64 v20; // x9
  SimpleAnimation_State_c **v21; // x10
  __int64 v22; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  PartyOrganizationUtility_o *p__2__current; // x19
  bool result; // w0

  v3 = this;
  if ( (byte_4B19737 & 1) == 0 )
  {
    this = (ClassBoardSquare__WaitAnimationFinished_d__49_o *)sub_1BCA7E0(&SimpleAnimation_State_TypeInfo, method, v2);
    byte_4B19737 = 1;
  }
  _1__state = v3->fields.__1__state;
  if ( _1__state == 1 )
  {
    v3->fields.__1__state = -1;
    goto LABEL_9;
  }
  if ( !_1__state )
  {
    _4__this = v3->fields.__4__this;
    v3->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_28;
    this = (ClassBoardSquare__WaitAnimationFinished_d__49_o *)_4__this->fields.simpleAnimation;
    if ( !this )
      goto LABEL_28;
    State = SimpleAnimation__GetState((SimpleAnimation_o *)this, v3->fields.name, 0LL);
    v3->fields._state_5__2 = State;
    sub_1BCA784((PartyOrganizationUtility_o *)&v3->fields._state_5__2, (int64_t)State, v7, v8, v9, v10, v11, v12);
LABEL_9:
    state_5__2 = v3->fields._state_5__2;
    if ( !state_5__2 )
      goto LABEL_26;
    klass = state_5__2->klass;
    v15 = *(unsigned __int16 *)(&state_5__2->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&state_5__2->klass->_2.bitflags2 + 3) )
    {
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v15;
        p_offset += 2;
        if ( !v15 )
          goto LABEL_14;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 13].method;
    }
    else
    {
LABEL_14:
      p_method = sub_1C1C7C0(v3->fields._state_5__2, SimpleAnimation_State_TypeInfo, 13LL);
    }
    if ( (*(float (__fastcall **)(struct SimpleAnimation_State_o *, _QWORD))p_method)(
           state_5__2,
           *(_QWORD *)(p_method + 8)) <= 0.0 )
    {
LABEL_26:
      ActionExtensions__Call(v3->fields.endCallback, 0LL);
      return 0;
    }
    v18 = v3->fields._state_5__2;
    if ( v18 )
    {
      v19 = v18->klass;
      v20 = *(unsigned __int16 *)(&v18->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v18->klass->_2.bitflags2 + 3) )
      {
        v21 = (SimpleAnimation_State_c **)&v19->_1.interfaceOffsets->offset;
        while ( *(v21 - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v20;
          v21 += 2;
          if ( !v20 )
            goto LABEL_22;
        }
        v22 = (__int64)&v19->vtable[*(_DWORD *)v21 + 5].method;
      }
      else
      {
LABEL_22:
        v22 = sub_1C1C7C0(v3->fields._state_5__2, SimpleAnimation_State_TypeInfo, 5LL);
      }
      if ( (*(float (__fastcall **)(struct SimpleAnimation_State_o *, _QWORD))v22)(v18, *(_QWORD *)(v22 + 8)) < 1.0 )
      {
        v3->fields.__2__current = 0LL;
        p__2__current = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
        sub_1BCA784(p__2__current, 0LL, v23, v24, v25, v26, v27, v28);
        result = 1;
        *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
        return result;
      }
      goto LABEL_26;
    }
LABEL_28:
    sub_1BCAA3C(this, method);
  }
  return 0;
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
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_ClassBoardSquare__WaitAnimationFinished_d__49_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
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
    sub_1BCAA3C(this, x);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v3->fields.isActive, 0LL);
}