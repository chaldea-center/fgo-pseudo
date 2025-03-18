void __fastcall ClassBoardSquare___ctor(ClassBoardSquare_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  int64_t v13; // x1
  int64_t v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int64_t v28; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t v35; // x1
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7

  if ( (byte_4C25657 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_3379/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_DETAIL"*/, method);
    sub_1C3B764(&StringLiteral_3376/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_NUM"*/, v9);
    sub_1C3B764(&StringLiteral_3381/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_TITLE_LOCK"*/, v10);
    sub_1C3B764(&StringLiteral_13211/*"TUTORIAL_LABEL_DECK_SVT_EQUIP"*/, v11);
    sub_1C3B764(&StringLiteral_3330/*"CHANGE_SVT"*/, v12);
    byte_4C25657 = 1;
  }
  v13 = StringLiteral_3376/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_NUM"*/;
  this->fields.enableAnimationName = (struct System_String_o *)StringLiteral_3376/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_NUM"*/;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.enableAnimationName, v13, v2, v3, v4, v5, v6, v7);
  v14 = StringLiteral_13211/*"TUTORIAL_LABEL_DECK_SVT_EQUIP"*/;
  this->fields.releaseAnimationName = (struct System_String_o *)StringLiteral_13211/*"TUTORIAL_LABEL_DECK_SVT_EQUIP"*/;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.releaseAnimationName, v14, v15, v16, v17, v18, v19, v20);
  v21 = StringLiteral_3379/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_DETAIL"*/;
  this->fields.brightTurnTransitionAnimationName = (struct System_String_o *)StringLiteral_3379/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_DETAIL"*/;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.brightTurnTransitionAnimationName,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  v28 = StringLiteral_3330/*"CHANGE_SVT"*/;
  this->fields.blackOutTransitionAnimationName = (struct System_String_o *)StringLiteral_3330/*"CHANGE_SVT"*/;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.blackOutTransitionAnimationName,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  v35 = StringLiteral_3381/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_TITLE_LOCK"*/;
  this->fields.unlockEnableAnimationName = (struct System_String_o *)StringLiteral_3381/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_TITLE_LOCK"*/;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.unlockEnableAnimationName, v35, v36, v37, v38, v39, v40, v41);
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
  _QWORD *v2; // x0
  System_Reflection_MethodBase_o *v3; // x0

  if ( (byte_4C25654 & 1) == 0 )
  {
    sub_1C3B764(&Method_ClassBoardSquare_PlayClickedSe__, method);
    byte_4C25654 = 1;
  }
  v2 = Method_ClassBoardSquare_PlayClickedSe__;
  if ( (*((_BYTE *)Method_ClassBoardSquare_PlayClickedSe__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_1C3B77C(Method_ClassBoardSquare_PlayClickedSe__);
  v3 = (System_Reflection_MethodBase_o *)sub_1C3B748(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 0, 0, 0LL);
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

  if ( (byte_4C25653 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&Method_ClassBoardEffectPlayer_GetData_bool___, v3);
    sub_1C3B764(&Method_ClassBoardSquare__PlayEnableEffect_b__46_0__, v4);
    sub_1C3B764(&Method_ClassBoardSquare__PlayEnableEffect_b__46_1__, v5);
    byte_4C25653 = 1;
  }
  enableEffectPlayer = this->fields.enableEffectPlayer;
  if ( !enableEffectPlayer )
    sub_1C3B9C0(0LL, method);
  if ( ClassBoardEffectPlayer__GetData_bool_(
         enableEffectPlayer,
         (const MethodInfo_2FE3C38 *)Method_ClassBoardEffectPlayer_GetData_bool___) )
  {
    unlockEnableAnimationName = this->fields.unlockEnableAnimationName;
    v8 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    v9 = &Method_ClassBoardSquare__PlayEnableEffect_b__46_0__;
  }
  else
  {
    unlockEnableAnimationName = this->fields.enableAnimationName;
    v8 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
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

  if ( (byte_4C25652 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&Method_ClassBoardSquare__PlayReleaseEffect_b__45_0__, v3);
    byte_4C25652 = 1;
  }
  releaseAnimationName = this->fields.releaseAnimationName;
  v5 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
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
    sub_1C3B9C0(0LL, name);
  SimpleAnimation__Play_65506988(simpleAnimation, name, 0LL);
  v9 = ClassBoardSquare__WaitAnimationFinished(this, name, endCallback, v8);
  UnityEngine_MonoBehaviour__StartCoroutine_71108020((UnityEngine_MonoBehaviour_o *)this, v9, 0LL);
}


void __fastcall ClassBoardSquare__PlayTransition(ClassBoardSquare_o *this, const MethodInfo *method)
{
  ClassBoardSquare_o *v2; // x19
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  IClassBoardSquareModel_c *klass; // x8
  __int64 v5; // x9
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 p_method; // x0
  char v8; // w0
  const MethodInfo *v9; // x3
  __int64 v10; // x8

  v2 = this;
  if ( (byte_4C2564E & 1) == 0 )
  {
    this = (ClassBoardSquare_o *)sub_1C3B764(&IClassBoardSquareModel_TypeInfo, method);
    byte_4C2564E = 1;
  }
  SquareModel_k__BackingField = v2->fields._SquareModel_k__BackingField;
  if ( !SquareModel_k__BackingField )
    sub_1C3B9C0(this, method);
  klass = SquareModel_k__BackingField->klass;
  v5 = *(unsigned __int16 *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3) )
  {
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v5;
      p_offset += 2;
      if ( !v5 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 13].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C8D744(v2->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 13LL);
  }
  v8 = (*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD, _QWORD))p_method)(
         SquareModel_k__BackingField,
         0LL,
         *(_QWORD *)(p_method + 8));
  v10 = 128LL;
  if ( (v8 & 2) == 0 )
    v10 = 120LL;
  ClassBoardSquare__PlaySimpleAnimation(v2, *(System_String_o **)((char *)&v2->klass + v10), 0LL, v9);
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

  if ( (byte_4C25650 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_GameObject__TypeInfo, objects);
    sub_1C3B764(&Method_BasicHelper_ForEach_GameObject___, v6);
    sub_1C3B764(&Method_ClassBoardSquare___c__DisplayClass43_0__SetActiveArrayObject_b__0__, v7);
    sub_1C3B764(&ClassBoardSquare___c__DisplayClass43_0_TypeInfo, v8);
    byte_4C25650 = 1;
  }
  v9 = sub_1C3B9B0(ClassBoardSquare___c__DisplayClass43_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    sub_1C3B9C0(v10, v11);
  *(_BYTE *)(v9 + 16) = isActive;
  v12 = (System_Action_object__o *)sub_1C3B9B0(System_Action_GameObject__TypeInfo);
  System_Action_object____ctor(
    v12,
    (Il2CppObject *)v9,
    Method_ClassBoardSquare___c__DisplayClass43_0__SetActiveArrayObject_b__0__,
    0LL);
  BasicHelper__ForEach_object_(
    (System_Collections_Generic_IEnumerable_T__o *)objects,
    (System_Action_T__o *)v12,
    (const MethodInfo_2FDCE70 *)Method_BasicHelper_ForEach_GameObject___);
}


void __fastcall ClassBoardSquare__SetActiveObject(
        ClassBoardSquare_o *this,
        UnityEngine_GameObject_o *obj,
        bool isActive,
        const MethodInfo *method)
{
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_4C25651 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, obj);
    byte_4C25651 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)obj, 0LL, 0LL);
  if ( v6 )
  {
    if ( !obj )
      sub_1C3B9C0(v6, v7);
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

  if ( (byte_4C25656 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, isActive);
    byte_4C25656 = 1;
  }
  selectedEffect = (UnityEngine_Object_o *)this->fields.selectedEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(selectedEffect, 0LL, 0LL) )
  {
    v7 = this->fields.selectedEffect;
    if ( !v7 )
      sub_1C3B9C0(0LL, v6);
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
  __int64 v11; // x1
  __int64 v12; // x1
  UnityEngine_Object_o *transform; // x0
  __int64 v14; // x1
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x22
  IClassBoardSquareModel_c *klass; // x8
  UnityEngine_Transform_o *v17; // x21
  __int64 v18; // x9
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 p_method; // x0
  int v21; // s0
  UnityEngine_Object_o *v24; // x21
  IClassBoardSquareModel_c *v25; // x8
  System_String_o *v26; // x22
  __int64 v27; // x9
  int32_t *v28; // x10
  __int64 v29; // x0
  System_String_o *v30; // x0
  System_String_o *v31; // x0
  System_String_o *name; // x20
  ClassBoardEffectPlayer_o *v33; // x21
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  struct ClassBoardEffectPlayer_o *releaseEffectPlayer; // x20
  System_Action_o *v41; // x21
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  System_String_o *v48; // x20
  ClassBoardEffectPlayer_o *v49; // x21
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  struct ClassBoardEffectPlayer_o *enableEffectPlayer; // x20
  System_Action_o *v57; // x21
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  int v64; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C2564C & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, squareModel);
    sub_1C3B764(&ClassBoardEffectPlayer_TypeInfo, v10);
    sub_1C3B764(&IClassBoardSquareModel_TypeInfo, v11);
    sub_1C3B764(&StringLiteral_16438/*"animationId"*/, v12);
    byte_4C2564C = 1;
  }
  v64 = 0;
  this->fields._SquareModel_k__BackingField = squareModel;
  sub_1C3B708(
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
  v17 = (UnityEngine_Transform_o *)transform;
  v18 = *(unsigned __int16 *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3) )
  {
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v18;
      p_offset += 2;
      if ( !v18 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 3].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C8D744(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 3LL);
  }
  transform = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))p_method)(
                                        SquareModel_k__BackingField,
                                        *(_QWORD *)(p_method + 8));
  if ( !v17 )
    goto LABEL_24;
  UnityEngine_Transform__set_localPosition(v17, *(UnityEngine_Vector3_o *)&v21, 0LL);
  ((void (__fastcall *)(ClassBoardSquare_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._8_UpdateDraw.method)(
    this,
    0LL,
    this->klass->vtable._9_PlayReleaseEffect.methodPtr);
  transform = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_24;
  v24 = transform;
  transform = (UnityEngine_Object_o *)UnityEngine_Object__get_name(transform, 0LL);
  if ( !squareModel )
    goto LABEL_24;
  v25 = squareModel->klass;
  v26 = (System_String_o *)transform;
  v27 = *(unsigned __int16 *)(&squareModel->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&squareModel->klass->_2.bitflags2 + 3) )
  {
    v28 = &v25->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v28 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v27;
      v28 += 4;
      if ( !v27 )
        goto LABEL_17;
    }
    v29 = (__int64)&v25->vtable[*v28].method;
  }
  else
  {
LABEL_17:
    v29 = sub_1C8D744(squareModel, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  v64 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v29)(squareModel, *(_QWORD *)(v29 + 8));
  v30 = System_Int32__ToString((int32_t)&v64, 0LL);
  v31 = System_String__Concat_63379872(v26, (System_String_o *)StringLiteral_16438/*"animationId"*/, v30, 0LL);
  UnityEngine_Object__set_name(v24, v31, 0LL);
  transform = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_24;
  name = UnityEngine_Object__get_name(transform, 0LL);
  v33 = (ClassBoardEffectPlayer_o *)sub_1C3B9B0(ClassBoardEffectPlayer_TypeInfo);
  ClassBoardEffectPlayer___ctor_46100648(v33, name, 0LL);
  this->fields.releaseEffectPlayer = v33;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.releaseEffectPlayer,
    (int64_t)v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  releaseEffectPlayer = this->fields.releaseEffectPlayer;
  v41 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(v41, (Il2CppObject *)this, (intptr_t)this->klass->vtable._10_PlayEnableEffect.methodPtr, 0LL);
  if ( !releaseEffectPlayer )
    goto LABEL_24;
  releaseEffectPlayer->fields.playCallback = v41;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&releaseEffectPlayer->fields.playCallback,
    (int64_t)v41,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  transform = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_24;
  v48 = UnityEngine_Object__get_name(transform, 0LL);
  v49 = (ClassBoardEffectPlayer_o *)sub_1C3B9B0(ClassBoardEffectPlayer_TypeInfo);
  ClassBoardEffectPlayer___ctor_46100648(v49, v48, 0LL);
  this->fields.enableEffectPlayer = v49;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.enableEffectPlayer,
    (int64_t)v49,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  enableEffectPlayer = this->fields.enableEffectPlayer;
  v57 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(v57, (Il2CppObject *)this, (intptr_t)this->klass->vtable._11_PlayClickedSe.methodPtr, 0LL);
  if ( !enableEffectPlayer )
LABEL_24:
    sub_1C3B9C0(transform, v14);
  enableEffectPlayer->fields.playCallback = v57;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&enableEffectPlayer->fields.playCallback,
    (int64_t)v57,
    v58,
    v59,
    v60,
    v61,
    v62,
    v63);
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
  __int64 v11; // x9
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 p_method; // x0
  struct IClassBoardSquareModel_o *v14; // x23
  IClassBoardSquareModel_c *v15; // x8
  int32_t v16; // w22
  __int64 v17; // x9
  IClassBoardSquareModel_c **v18; // x10
  __int64 v19; // x0
  const MethodInfo *v20; // x2
  int32_t v21; // w23

  v2 = this;
  if ( (byte_4C2564D & 1) == 0 )
  {
    sub_1C3B764(&ClassBoardUtility_TypeInfo, method);
    this = (ClassBoardSquare_o *)sub_1C3B764(&IClassBoardSquareModel_TypeInfo, v3);
    byte_4C2564D = 1;
  }
  iconSpritesNormal = v2->fields.iconSpritesNormal;
  if ( !iconSpritesNormal )
    goto LABEL_26;
  v5 = *(_QWORD *)&iconSpritesNormal->max_length;
  if ( (int)v5 >= 1 )
  {
    v6 = 0LL;
    while ( 1 )
    {
      if ( v6 >= (unsigned int)v5 )
        sub_1C3B9C8(this, method);
      v7 = iconSpritesNormal->m_Items[v6];
      this = (ClassBoardSquare_o *)ClassBoardGlobalObject__get_IconAtlasManagerUnit(0LL);
      SquareModel_k__BackingField = v2->fields._SquareModel_k__BackingField;
      if ( !SquareModel_k__BackingField )
        break;
      klass = SquareModel_k__BackingField->klass;
      v10 = (AtlasManagerUnit_o *)this;
      v11 = *(unsigned __int16 *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3) )
      {
        p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v11;
          p_offset += 2;
          if ( !v11 )
            goto LABEL_12;
        }
        p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 2].method;
      }
      else
      {
LABEL_12:
        p_method = sub_1C8D744(v2->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 2LL);
      }
      this = (ClassBoardSquare_o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))p_method)(
                                     SquareModel_k__BackingField,
                                     *(_QWORD *)(p_method + 8));
      v14 = v2->fields._SquareModel_k__BackingField;
      if ( !v14 )
        break;
      v15 = v14->klass;
      v16 = (int)this;
      v17 = *(unsigned __int16 *)(&v14->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v14->klass->_2.bitflags2 + 3) )
      {
        v18 = (IClassBoardSquareModel_c **)&v15->_1.interfaceOffsets->offset;
        while ( *(v18 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v17;
          v18 += 2;
          if ( !v17 )
            goto LABEL_19;
        }
        v19 = (__int64)&v15->vtable[*(_DWORD *)v18 + 7].method;
      }
      else
      {
LABEL_19:
        v19 = sub_1C8D744(v2->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 7LL);
      }
      v21 = (*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v19)(v14, *(_QWORD *)(v19 + 8));
      if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
      this = (ClassBoardSquare_o *)ClassBoardUtility__GetClassBoardSkillIconName(v16, v21, v20);
      if ( !v10 )
        break;
      this = (ClassBoardSquare_o *)AtlasManagerUnit__SetUI(v10, v7, (System_String_o *)this, 0LL);
      LODWORD(v5) = iconSpritesNormal->max_length;
      if ( (__int64)++v6 >= (int)v5 )
        return;
    }
LABEL_26:
    sub_1C3B9C0(this, method);
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
  if ( (byte_4C2564F & 1) == 0 )
  {
    sub_1C3B764(&IClassBoardSquareModel_TypeInfo, handoverFlag);
    sub_1C3B764(&Method_System_Nullable_AcquireFlag__get_HasValue__, v5);
    this = (ClassBoardSquare_o *)sub_1C3B764(&Method_System_Nullable_AcquireFlag__get_Value__, v6);
    byte_4C2564F = 1;
  }
  if ( !hasValue )
  {
    SquareModel_k__BackingField = v4->fields._SquareModel_k__BackingField;
    if ( !SquareModel_k__BackingField )
      ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_1C3B9C0)(this, handoverFlag);
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
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 13].method;
    }
    else
    {
LABEL_14:
      p_method = sub_1C8D744(v4->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 13LL);
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
            (const MethodInfo_37A87F4 *)Method_System_Nullable_AcquireFlag__get_Value__);
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

  if ( (byte_4C25655 & 1) == 0 )
  {
    sub_1C3B764(&ClassBoardSquare__WaitAnimationFinished_d__49_TypeInfo, name);
    byte_4C25655 = 1;
  }
  v7 = sub_1C3B9B0(ClassBoardSquare__WaitAnimationFinished_d__49_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v7 + 32), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v7 + 40) = name;
  sub_1C3B708((PartyOrganizationUtility_o *)(v7 + 40), (int64_t)name, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v7 + 48) = endCallback;
  sub_1C3B708((PartyOrganizationUtility_o *)(v7 + 48), (int64_t)endCallback, v20, v21, v22, v23, v24, v25);
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
    sub_1C3B9C0(simpleAnimation, method);
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
    sub_1C3B9C0(simpleAnimation, method);
  }
  ClassBoardEffectPlayer__End((ClassBoardEffectPlayer_o *)simpleAnimation, 0LL);
}


void __fastcall ClassBoardSquare___PlayReleaseEffect_b__45_0(ClassBoardSquare_o *this, const MethodInfo *method)
{
  ClassBoardEffectPlayer_o *releaseEffectPlayer; // x0

  releaseEffectPlayer = this->fields.releaseEffectPlayer;
  this->fields.isUpdateDraw = 1;
  if ( !releaseEffectPlayer )
    sub_1C3B9C0(0LL, method);
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

  if ( (byte_4C2564A & 1) == 0 )
  {
    sub_1C3B764(&System_Action_ClassBoardSquare__TypeInfo, value);
    byte_4C2564A = 1;
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
    v10 = sub_1C3B8A0(v8, System_Action_ClassBoardSquare__TypeInfo);
    if ( !v10 )
      break;
LABEL_8:
    v11 = sub_1C76C54(p_clickedEvent, v10, v6);
    v12 = v6 == (System_Delegate_o *)v11;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_1C3BC80(v9);
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

  if ( (byte_4C2564B & 1) == 0 )
  {
    sub_1C3B764(&System_Action_ClassBoardSquare__TypeInfo, value);
    byte_4C2564B = 1;
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
    v10 = sub_1C3B8A0(v8, System_Action_ClassBoardSquare__TypeInfo);
    if ( !v10 )
      break;
LABEL_8:
    v11 = sub_1C76C54(p_clickedEvent, v10, v6);
    v12 = v6 == (System_Delegate_o *)v11;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_1C3BC80(v9);
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
  sub_1C3B708(
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
  ClassBoardSquare__WaitAnimationFinished_d__49_o *v2; // x19
  int32_t _1__state; // w8
  struct ClassBoardSquare_o *_4__this; // x8
  SimpleAnimation_State_o *State; // x0
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  struct SimpleAnimation_State_o *state_5__2; // x20
  SimpleAnimation_State_c *klass; // x8
  __int64 v14; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 p_method; // x0
  struct SimpleAnimation_State_o *v17; // x20
  SimpleAnimation_State_c *v18; // x8
  __int64 v19; // x9
  SimpleAnimation_State_c **v20; // x10
  __int64 v21; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  PartyOrganizationUtility_o *p__2__current; // x19
  bool result; // w0

  v2 = this;
  if ( (byte_4C25658 & 1) == 0 )
  {
    this = (ClassBoardSquare__WaitAnimationFinished_d__49_o *)sub_1C3B764(&SimpleAnimation_State_TypeInfo, method);
    byte_4C25658 = 1;
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
    this = (ClassBoardSquare__WaitAnimationFinished_d__49_o *)_4__this->fields.simpleAnimation;
    if ( !this )
      goto LABEL_28;
    State = SimpleAnimation__GetState((SimpleAnimation_o *)this, v2->fields.name, 0LL);
    v2->fields._state_5__2 = State;
    sub_1C3B708((PartyOrganizationUtility_o *)&v2->fields._state_5__2, (int64_t)State, v6, v7, v8, v9, v10, v11);
LABEL_9:
    state_5__2 = v2->fields._state_5__2;
    if ( !state_5__2 )
      goto LABEL_26;
    klass = state_5__2->klass;
    v14 = *(unsigned __int16 *)(&state_5__2->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&state_5__2->klass->_2.bitflags2 + 3) )
    {
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v14;
        p_offset += 2;
        if ( !v14 )
          goto LABEL_14;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 13].method;
    }
    else
    {
LABEL_14:
      p_method = sub_1C8D744(v2->fields._state_5__2, SimpleAnimation_State_TypeInfo, 13LL);
    }
    if ( (*(float (__fastcall **)(struct SimpleAnimation_State_o *, _QWORD))p_method)(
           state_5__2,
           *(_QWORD *)(p_method + 8)) <= 0.0 )
    {
LABEL_26:
      ActionExtensions__Call(v2->fields.endCallback, 0LL);
      return 0;
    }
    v17 = v2->fields._state_5__2;
    if ( v17 )
    {
      v18 = v17->klass;
      v19 = *(unsigned __int16 *)(&v17->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v17->klass->_2.bitflags2 + 3) )
      {
        v20 = (SimpleAnimation_State_c **)&v18->_1.interfaceOffsets->offset;
        while ( *(v20 - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v19;
          v20 += 2;
          if ( !v19 )
            goto LABEL_22;
        }
        v21 = (__int64)&v18->vtable[*(_DWORD *)v20 + 5].method;
      }
      else
      {
LABEL_22:
        v21 = sub_1C8D744(v2->fields._state_5__2, SimpleAnimation_State_TypeInfo, 5LL);
      }
      if ( (*(float (__fastcall **)(struct SimpleAnimation_State_o *, _QWORD))v21)(v17, *(_QWORD *)(v21 + 8)) < 1.0 )
      {
        v2->fields.__2__current = 0LL;
        p__2__current = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
        sub_1C3B708(p__2__current, 0LL, v22, v23, v24, v25, v26, v27);
        result = 1;
        *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
        return result;
      }
      goto LABEL_26;
    }
LABEL_28:
    sub_1C3B9C0(this, method);
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3B778(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3B9B0(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C3B778(&Method_ClassBoardSquare__WaitAnimationFinished_d__49_System_Collections_IEnumerator_Reset__);
  sub_1C3B88C(v3, v4);
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
    sub_1C3B9C0(this, x);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v3->fields.isActive, 0LL);
}