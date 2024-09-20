void __fastcall ClassBoardSquare___ctor(ClassBoardSquare_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t v5; // w1
  int32_t v6; // w1
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t v9; // w1
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w1
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w1
  int32_t v16; // w2
  int32_t v17; // w3

  if ( (byte_4A5E608 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_3343/*"BrightTurnTransition"*/);
    sub_1B885B0(&StringLiteral_3340/*"BrightTurn"*/);
    sub_1B885B0(&StringLiteral_3345/*"BrightTurnUnLock"*/);
    sub_1B885B0(&StringLiteral_12921/*"SquareEnable"*/);
    sub_1B885B0(&StringLiteral_3294/*"BlackOutTransition"*/);
    byte_4A5E608 = 1;
  }
  v5 = StringLiteral_3340/*"BrightTurn"*/;
  this->fields.enableAnimationName = (struct System_String_o *)StringLiteral_3340/*"BrightTurn"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.enableAnimationName, v5, v2, v3);
  v6 = StringLiteral_12921/*"SquareEnable"*/;
  this->fields.releaseAnimationName = (struct System_String_o *)StringLiteral_12921/*"SquareEnable"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.releaseAnimationName, v6, v7, v8);
  v9 = StringLiteral_3343/*"BrightTurnTransition"*/;
  this->fields.brightTurnTransitionAnimationName = (struct System_String_o *)StringLiteral_3343/*"BrightTurnTransition"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.brightTurnTransitionAnimationName, v9, v10, v11);
  v12 = StringLiteral_3294/*"BlackOutTransition"*/;
  this->fields.blackOutTransitionAnimationName = (struct System_String_o *)StringLiteral_3294/*"BlackOutTransition"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.blackOutTransitionAnimationName, v12, v13, v14);
  v15 = StringLiteral_3345/*"BrightTurnUnLock"*/;
  this->fields.unlockEnableAnimationName = (struct System_String_o *)StringLiteral_3345/*"BrightTurnUnLock"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.unlockEnableAnimationName, v15, v16, v17);
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

  if ( (byte_4A5E605 & 1) == 0 )
  {
    sub_1B885B0(&Method_ClassBoardSquare_PlayClickedSe__);
    byte_4A5E605 = 1;
  }
  v2 = Method_ClassBoardSquare_PlayClickedSe__;
  if ( (*((_BYTE *)Method_ClassBoardSquare_PlayClickedSe__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_1B885C8(Method_ClassBoardSquare_PlayClickedSe__);
  v3 = (System_Reflection_MethodBase_o *)sub_1B88594(v2, v2[4]);
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

  if ( (byte_4A5E604 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_ClassBoardEffectPlayer_GetData_bool___);
    sub_1B885B0(&Method_ClassBoardSquare__PlayEnableEffect_b__46_0__);
    sub_1B885B0(&Method_ClassBoardSquare__PlayEnableEffect_b__46_1__);
    byte_4A5E604 = 1;
  }
  enableEffectPlayer = this->fields.enableEffectPlayer;
  if ( !enableEffectPlayer )
    sub_1B8880C(0LL, method);
  if ( ClassBoardEffectPlayer__GetData_bool_(
         enableEffectPlayer,
         (const MethodInfo_2E7365C *)Method_ClassBoardEffectPlayer_GetData_bool___) )
  {
    unlockEnableAnimationName = this->fields.unlockEnableAnimationName;
    v5 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    v6 = &Method_ClassBoardSquare__PlayEnableEffect_b__46_0__;
  }
  else
  {
    unlockEnableAnimationName = this->fields.enableAnimationName;
    v5 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
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

  if ( (byte_4A5E603 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_ClassBoardSquare__PlayReleaseEffect_b__45_0__);
    byte_4A5E603 = 1;
  }
  releaseAnimationName = this->fields.releaseAnimationName;
  v4 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
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
    sub_1B8880C(0LL, name);
  SimpleAnimation__Play_63844704(simpleAnimation, name, 0LL);
  v9 = ClassBoardSquare__WaitAnimationFinished(this, name, endCallback, v8);
  UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)this, v9, 0LL);
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
  if ( (byte_4A5E5FF & 1) == 0 )
  {
    this = (ClassBoardSquare_o *)sub_1B885B0(&IClassBoardSquareModel_TypeInfo);
    byte_4A5E5FF = 1;
  }
  SquareModel_k__BackingField = v2->fields._SquareModel_k__BackingField;
  if ( !SquareModel_k__BackingField )
    sub_1B8880C(this, method);
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
    p_method = sub_1BDA590(v2->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 13LL);
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
  __int64 v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  System_Action_object__o *v9; // x20

  if ( (byte_4A5E601 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_GameObject__TypeInfo);
    sub_1B885B0(&Method_BasicHelper_ForEach_GameObject___);
    sub_1B885B0(&Method_ClassBoardSquare___c__DisplayClass43_0__SetActiveArrayObject_b__0__);
    sub_1B885B0(&ClassBoardSquare___c__DisplayClass43_0_TypeInfo);
    byte_4A5E601 = 1;
  }
  v6 = sub_1B887FC(ClassBoardSquare___c__DisplayClass43_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  if ( !v6 )
    sub_1B8880C(v7, v8);
  *(_BYTE *)(v6 + 16) = isActive;
  v9 = (System_Action_object__o *)sub_1B887FC(System_Action_GameObject__TypeInfo);
  System_Action_object____ctor(
    v9,
    (Il2CppObject *)v6,
    Method_ClassBoardSquare___c__DisplayClass43_0__SetActiveArrayObject_b__0__,
    0LL);
  BasicHelper__ForEach_object_(
    (System_Collections_Generic_IEnumerable_T__o *)objects,
    (System_Action_T__o *)v9,
    (const MethodInfo_2E6CCC0 *)Method_BasicHelper_ForEach_GameObject___);
}


void __fastcall ClassBoardSquare__SetActiveObject(
        ClassBoardSquare_o *this,
        UnityEngine_GameObject_o *obj,
        bool isActive,
        const MethodInfo *method)
{
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_4A5E602 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E602 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)obj, 0LL, 0LL);
  if ( v6 )
  {
    if ( !obj )
      sub_1B8880C(v6, v7);
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

  if ( (byte_4A5E607 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E607 = 1;
  }
  selectedEffect = (UnityEngine_Object_o *)this->fields.selectedEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(selectedEffect, 0LL, 0LL) )
  {
    v7 = this->fields.selectedEffect;
    if ( !v7 )
      sub_1B8880C(0LL, v6);
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
  UnityEngine_Object_o *transform; // x0
  __int64 v7; // x1
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x22
  IClassBoardSquareModel_c *klass; // x8
  UnityEngine_Transform_o *v10; // x21
  __int64 v11; // x9
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 p_method; // x0
  int v14; // s0
  UnityEngine_Object_o *v17; // x21
  IClassBoardSquareModel_c *v18; // x8
  System_String_o *v19; // x22
  __int64 v20; // x9
  int32_t *v21; // x10
  __int64 v22; // x0
  System_String_o *v23; // x0
  System_String_o *v24; // x0
  System_String_o *name; // x20
  __int64 v26; // x21
  int32_t v27; // w2
  int32_t v28; // w3
  int32_t v29; // w2
  int32_t v30; // w3
  struct ClassBoardEffectPlayer_o *releaseEffectPlayer; // x20
  System_Action_o *v32; // x21
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x20
  __int64 v36; // x21
  int32_t v37; // w2
  int32_t v38; // w3
  int32_t v39; // w2
  int32_t v40; // w3
  struct ClassBoardEffectPlayer_o *enableEffectPlayer; // x20
  System_Action_o *v42; // x21
  int32_t v43; // w2
  int32_t v44; // w3
  int v45; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A5E5FD & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&ClassBoardEffectPlayer_TypeInfo);
    sub_1B885B0(&IClassBoardSquareModel_TypeInfo);
    sub_1B885B0(&StringLiteral_16123/*"_"*/);
    byte_4A5E5FD = 1;
  }
  v45 = 0;
  this->fields._SquareModel_k__BackingField = squareModel;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._SquareModel_k__BackingField,
    (int32_t)squareModel,
    (int32_t)method,
    v3);
  transform = (UnityEngine_Object_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  SquareModel_k__BackingField = this->fields._SquareModel_k__BackingField;
  if ( !SquareModel_k__BackingField )
    goto LABEL_24;
  klass = SquareModel_k__BackingField->klass;
  v10 = (UnityEngine_Transform_o *)transform;
  v11 = *(unsigned __int16 *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3) )
  {
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v11;
      p_offset += 2;
      if ( !v11 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 3].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1BDA590(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 3LL);
  }
  transform = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))p_method)(
                                        SquareModel_k__BackingField,
                                        *(_QWORD *)(p_method + 8));
  if ( !v10 )
    goto LABEL_24;
  UnityEngine_Transform__set_localPosition(v10, *(UnityEngine_Vector3_o *)&v14, 0LL);
  ((void (__fastcall *)(ClassBoardSquare_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._8_UpdateDraw.method)(
    this,
    0LL,
    this->klass->vtable._9_PlayReleaseEffect.methodPtr);
  transform = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_24;
  v17 = transform;
  transform = (UnityEngine_Object_o *)UnityEngine_Object__get_name(transform, 0LL);
  if ( !squareModel )
    goto LABEL_24;
  v18 = squareModel->klass;
  v19 = (System_String_o *)transform;
  v20 = *(unsigned __int16 *)(&squareModel->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&squareModel->klass->_2.bitflags2 + 3) )
  {
    v21 = &v18->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v21 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v20;
      v21 += 4;
      if ( !v20 )
        goto LABEL_17;
    }
    v22 = (__int64)&v18->vtable[*v21].method;
  }
  else
  {
LABEL_17:
    v22 = sub_1BDA590(squareModel, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  v45 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v22)(squareModel, *(_QWORD *)(v22 + 8));
  v23 = System_Int32__ToString((int32_t)&v45, 0LL);
  v24 = System_String__Concat_61718292(v19, (System_String_o *)StringLiteral_16123/*"_"*/, v23, 0LL);
  UnityEngine_Object__set_name(v17, v24, 0LL);
  transform = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_24;
  name = UnityEngine_Object__get_name(transform, 0LL);
  v26 = sub_1B887FC(ClassBoardEffectPlayer_TypeInfo);
  System_Object___ctor((Il2CppObject *)v26, 0LL);
  *(_QWORD *)(v26 + 16) = name;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v26 + 16), (int32_t)name, v27, v28);
  this->fields.releaseEffectPlayer = (struct ClassBoardEffectPlayer_o *)v26;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.releaseEffectPlayer, v26, v29, v30);
  releaseEffectPlayer = this->fields.releaseEffectPlayer;
  v32 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v32, (Il2CppObject *)this, (intptr_t)this->klass->vtable._10_PlayEnableEffect.methodPtr, 0LL);
  if ( !releaseEffectPlayer )
    goto LABEL_24;
  releaseEffectPlayer->fields.playCallback = v32;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&releaseEffectPlayer->fields.playCallback, (int32_t)v32, v33, v34);
  transform = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_24;
  v35 = UnityEngine_Object__get_name(transform, 0LL);
  v36 = sub_1B887FC(ClassBoardEffectPlayer_TypeInfo);
  System_Object___ctor((Il2CppObject *)v36, 0LL);
  *(_QWORD *)(v36 + 16) = v35;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v36 + 16), (int32_t)v35, v37, v38);
  this->fields.enableEffectPlayer = (struct ClassBoardEffectPlayer_o *)v36;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.enableEffectPlayer, v36, v39, v40);
  enableEffectPlayer = this->fields.enableEffectPlayer;
  v42 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v42, (Il2CppObject *)this, (intptr_t)this->klass->vtable._11_PlayClickedSe.methodPtr, 0LL);
  if ( !enableEffectPlayer )
LABEL_24:
    sub_1B8880C(transform, v7);
  enableEffectPlayer->fields.playCallback = v42;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&enableEffectPlayer->fields.playCallback, (int32_t)v42, v43, v44);
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
  __int64 v10; // x9
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 p_method; // x0
  struct IClassBoardSquareModel_o *v13; // x23
  IClassBoardSquareModel_c *v14; // x8
  int32_t v15; // w22
  __int64 v16; // x9
  IClassBoardSquareModel_c **v17; // x10
  __int64 v18; // x0
  const MethodInfo *v19; // x2
  int32_t v20; // w23

  v2 = this;
  if ( (byte_4A5E5FE & 1) == 0 )
  {
    sub_1B885B0(&ClassBoardUtility_TypeInfo);
    this = (ClassBoardSquare_o *)sub_1B885B0(&IClassBoardSquareModel_TypeInfo);
    byte_4A5E5FE = 1;
  }
  iconSpritesNormal = v2->fields.iconSpritesNormal;
  if ( !iconSpritesNormal )
    goto LABEL_26;
  v4 = *(_QWORD *)&iconSpritesNormal->max_length;
  if ( (int)v4 >= 1 )
  {
    v5 = 0LL;
    while ( 1 )
    {
      if ( v5 >= (unsigned int)v4 )
        sub_1B88814(this, method);
      v6 = iconSpritesNormal->m_Items[v5];
      this = (ClassBoardSquare_o *)ClassBoardGlobalObject__get_IconAtlasManagerUnit((const MethodInfo *)this);
      SquareModel_k__BackingField = v2->fields._SquareModel_k__BackingField;
      if ( !SquareModel_k__BackingField )
        break;
      klass = SquareModel_k__BackingField->klass;
      v9 = (AtlasManagerUnit_o *)this;
      v10 = *(unsigned __int16 *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3) )
      {
        p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v10;
          p_offset += 2;
          if ( !v10 )
            goto LABEL_12;
        }
        p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 2].method;
      }
      else
      {
LABEL_12:
        p_method = sub_1BDA590(v2->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 2LL);
      }
      this = (ClassBoardSquare_o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))p_method)(
                                     SquareModel_k__BackingField,
                                     *(_QWORD *)(p_method + 8));
      v13 = v2->fields._SquareModel_k__BackingField;
      if ( !v13 )
        break;
      v14 = v13->klass;
      v15 = (int)this;
      v16 = *(unsigned __int16 *)(&v13->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v13->klass->_2.bitflags2 + 3) )
      {
        v17 = (IClassBoardSquareModel_c **)&v14->_1.interfaceOffsets->offset;
        while ( *(v17 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v16;
          v17 += 2;
          if ( !v16 )
            goto LABEL_19;
        }
        v18 = (__int64)&v14->vtable[*(_DWORD *)v17 + 7].method;
      }
      else
      {
LABEL_19:
        v18 = sub_1BDA590(v2->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 7LL);
      }
      v20 = (*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v18)(v13, *(_QWORD *)(v18 + 8));
      if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
      this = (ClassBoardSquare_o *)ClassBoardUtility__GetClassBoardSkillIconName(v15, v20, v19);
      if ( !v9 )
        break;
      this = (ClassBoardSquare_o *)AtlasManagerUnit__SetUI(v9, v6, (System_String_o *)this, 0LL);
      LODWORD(v4) = iconSpritesNormal->max_length;
      if ( (__int64)++v5 >= (int)v4 )
        return;
    }
LABEL_26:
    sub_1B8880C(this, method);
  }
}


void __fastcall ClassBoardSquare__UpdateDraw(
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
  __int64 p_method; // x0
  System_Nullable_AcquireFlag__o v12; // [xsp+8h] [xbp-28h] BYREF
  System_Nullable_Int32Enum__o v13; // 0:x0.8

  hasValue = handoverFlag.fields.hasValue;
  v4 = this;
  v12 = handoverFlag;
  if ( (byte_4A5E600 & 1) == 0 )
  {
    sub_1B885B0(&IClassBoardSquareModel_TypeInfo);
    sub_1B885B0(&Method_System_Nullable_AcquireFlag__get_HasValue__);
    this = (ClassBoardSquare_o *)sub_1B885B0(&Method_System_Nullable_AcquireFlag__get_Value__);
    byte_4A5E600 = 1;
  }
  if ( !hasValue )
  {
    SquareModel_k__BackingField = v4->fields._SquareModel_k__BackingField;
    if ( !SquareModel_k__BackingField )
      ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_1B8880C)(this, handoverFlag);
    klass = SquareModel_k__BackingField->klass;
    v9 = *(unsigned __int16 *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3) )
    {
      p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
      {
        --v9;
        p_offset += 2;
        if ( !v9 )
          goto LABEL_14;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 13].method;
    }
    else
    {
LABEL_14:
      p_method = sub_1BDA590(v4->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 13LL);
    }
    Value = (*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD, _QWORD))p_method)(
              SquareModel_k__BackingField,
              0LL,
              *(_QWORD *)(p_method + 8));
    if ( Value )
      goto LABEL_5;
LABEL_19:
    ClassBoardSquare__DrawAvailable(v4, v6);
    return;
  }
  v13 = (System_Nullable_Int32Enum__o)&v12;
  Value = System_Nullable_Int32Enum___get_Value(
            v13,
            (const MethodInfo_361A694 *)Method_System_Nullable_AcquireFlag__get_Value__);
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
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_4A5E606 & 1) == 0 )
  {
    sub_1B885B0(&ClassBoardSquare__WaitAnimationFinished_d__49_TypeInfo);
    byte_4A5E606 = 1;
  }
  v7 = sub_1B887FC(ClassBoardSquare__WaitAnimationFinished_d__49_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)this, v8, v9);
  *(_QWORD *)(v7 + 40) = name;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 40), (int32_t)name, v10, v11);
  *(_QWORD *)(v7 + 48) = endCallback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 48), (int32_t)endCallback, v12, v13);
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
    sub_1B8880C(simpleAnimation, method);
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
    sub_1B8880C(simpleAnimation, method);
  }
  ClassBoardEffectPlayer__End((ClassBoardEffectPlayer_o *)simpleAnimation, method);
}


void __fastcall ClassBoardSquare___PlayReleaseEffect_b__45_0(ClassBoardSquare_o *this, const MethodInfo *method)
{
  ClassBoardEffectPlayer_o *releaseEffectPlayer; // x0

  releaseEffectPlayer = this->fields.releaseEffectPlayer;
  this->fields.isUpdateDraw = 1;
  if ( !releaseEffectPlayer )
    sub_1B8880C(0LL, method);
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

  if ( (byte_4A5E5FB & 1) == 0 )
  {
    sub_1B885B0(&System_Action_ClassBoardSquare__TypeInfo);
    byte_4A5E5FB = 1;
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
    v10 = sub_1B886EC(v8, System_Action_ClassBoardSquare__TypeInfo);
    if ( !v10 )
      break;
LABEL_8:
    v11 = sub_1BC3AA0(p_clickedEvent, v10, v6);
    v12 = v6 == (System_Delegate_o *)v11;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_1B88ACC(v9);
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

  if ( (byte_4A5E5FC & 1) == 0 )
  {
    sub_1B885B0(&System_Action_ClassBoardSquare__TypeInfo);
    byte_4A5E5FC = 1;
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
    v10 = sub_1B886EC(v8, System_Action_ClassBoardSquare__TypeInfo);
    if ( !v10 )
      break;
LABEL_8:
    v11 = sub_1BC3AA0(p_clickedEvent, v10, v6);
    v12 = v6 == (System_Delegate_o *)v11;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_1B88ACC(v9);
  ClassBoardSquare__get_ReleaseEffectPlayer(v13, v14);
}


void __fastcall ClassBoardSquare__set_SquareModel(
        ClassBoardSquare_o *this,
        IClassBoardSquareModel_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._SquareModel_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._SquareModel_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
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
  int32_t v6; // w2
  int32_t v7; // w3
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
  int32_t v19; // w3
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  bool result; // w0

  v2 = this;
  if ( (byte_4A5E609 & 1) == 0 )
  {
    this = (ClassBoardSquare__WaitAnimationFinished_d__49_o *)sub_1B885B0(&SimpleAnimation_State_TypeInfo);
    byte_4A5E609 = 1;
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
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields._state_5__2, (int32_t)State, v6, v7);
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
      p_method = sub_1BDA590(v2->fields._state_5__2, SimpleAnimation_State_TypeInfo, 13LL);
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
        v17 = sub_1BDA590(v2->fields._state_5__2, SimpleAnimation_State_TypeInfo, 5LL);
      }
      if ( (*(float (__fastcall **)(struct SimpleAnimation_State_o *, _QWORD))v17)(v13, *(_QWORD *)(v17 + 8)) < 1.0 )
      {
        v2->fields.__2__current = 0LL;
        p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
        sub_1B88554(p__2__current, 0, v18, v19);
        result = 1;
        *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
        return result;
      }
      goto LABEL_26;
    }
LABEL_28:
    sub_1B8880C(this, method);
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

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_ClassBoardSquare__WaitAnimationFinished_d__49_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
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
    sub_1B8880C(this, x);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v3->fields.isActive, 0LL);
}