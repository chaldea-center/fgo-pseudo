void __fastcall BattleResultPopupWindowComponent___ctor(
        BattleResultPopupWindowComponent_o *this,
        const MethodInfo *method)
{
  BattleWindowComponent___ctor((BattleWindowComponent_o *)this, 0LL);
}


void __fastcall BattleResultPopupWindowComponent__Close(
        BattleResultPopupWindowComponent_o *this,
        BattleWindowComponent_EndCall_o *call,
        const MethodInfo *method)
{
  long double v5; // q0
  BattleWindowComponent_EndCall_o *v6; // x0
  __int64 v7; // x1
  BattleWindowComponent_EndCall_o *v8; // x20

  if ( (byte_43881EC & 1) == 0 )
  {
    sub_B775C4(&BattleWindowComponent_EndCall_TypeInfo);
    byte_43881EC = 1;
  }
  this->fields.callbackClose = call;
  *(__n128 *)&v5 = sub_B77560(&this->fields.callbackClose);
  ((void (__fastcall *)(BattleResultPopupWindowComponent_o *, Il2CppMethodPointer, long double))this->klass->vtable._18_ClosePreProcess.method)(
    this,
    this->klass->vtable._19_EndCloseCallback.methodPtr,
    v5);
  v6 = (BattleWindowComponent_EndCall_o *)sub_B77694(BattleWindowComponent_EndCall_TypeInfo);
  if ( !this )
    sub_B7769C(v6, v7);
  v8 = v6;
  BattleWindowComponent_EndCall___ctor(
    v6,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._20_ClosedPostProcess.methodPtr,
    0LL);
  BattleWindowComponent__Close((BattleWindowComponent_o *)this, v8, 0LL);
  ((void (__fastcall *)(BattleResultPopupWindowComponent_o *, void *))this->klass->vtable._20_ClosedPostProcess.method)(
    this,
    this->klass[1]._1.image);
}


void __fastcall BattleResultPopupWindowComponent__ClosePreProcess(
        BattleResultPopupWindowComponent_o *this,
        const MethodInfo *method)
{
  BattleResultComponent_o *ownerComp; // x0

  ownerComp = this->fields.ownerComp;
  if ( !ownerComp )
    sub_B7769C(0LL, method);
  BattleResultComponent__setTouch(ownerComp, 0, 0LL);
}


void __fastcall BattleResultPopupWindowComponent__ClosedPostProcess(
        BattleResultPopupWindowComponent_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleResultPopupWindowComponent__EndCloseCallback(
        BattleResultPopupWindowComponent_o *this,
        const MethodInfo *method)
{
  BattleWindowComponent_EndCall_o *callbackClose; // x0
  UnityEngine_GameObject_o *rootObj; // x0
  const MethodInfo *v5; // x2

  if ( (byte_43881ED & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_5639/*"END_PROC"*/);
    byte_43881ED = 1;
  }
  callbackClose = this->fields.callbackClose;
  if ( callbackClose )
    BattleWindowComponent_EndCall__Invoke(callbackClose, 0LL);
  rootObj = this->fields.rootObj;
  if ( !rootObj )
    sub_B7769C(0LL, method);
  UnityEngine_GameObject__SetActive(rootObj, 0, 0LL);
  BattleResultPopupWindowComponent__SendFsmEvent(this, (System_String_o *)StringLiteral_5639/*"END_PROC"*/, v5);
}


void __fastcall BattleResultPopupWindowComponent__EndOpenCallback(
        BattleResultPopupWindowComponent_o *this,
        const MethodInfo *method)
{
  BattleResultComponent_o *ownerComp; // x0
  BattleWindowComponent_EndCall_o *callbackOpen; // x0

  ownerComp = this->fields.ownerComp;
  if ( !ownerComp )
    sub_B7769C(0LL, method);
  BattleResultComponent__setTouch(ownerComp, 1, 0LL);
  callbackOpen = this->fields.callbackOpen;
  if ( callbackOpen )
    BattleWindowComponent_EndCall__Invoke(callbackOpen, 0LL);
}


void __fastcall BattleResultPopupWindowComponent__InitPopup(
        BattleResultPopupWindowComponent_o *this,
        const MethodInfo *method)
{
  BattleResultPopupWindowComponent_o *v2; // x19
  __int64 v3; // x1
  UnityEngine_GameObject_o *titleAnim; // x0

  v2 = this;
  BattleWindowComponent__setInitData((BattleWindowComponent_o *)this, 2, 0.15, 0, 0LL);
  ((void (__fastcall *)(BattleResultPopupWindowComponent_o *, Il2CppMethodPointer))v2->klass->vtable._9_setClose.method)(
    v2,
    v2->klass->vtable._10_Open.methodPtr);
  v2->fields.callbackOpen = 0LL;
  sub_B77560(&v2->fields.callbackOpen);
  v2->fields.callbackClose = 0LL;
  v2 = (BattleResultPopupWindowComponent_o *)((char *)v2 + 120);
  sub_B77560(v2);
  titleAnim = (UnityEngine_GameObject_o *)v2[-1].fields.titleAnim;
  LOBYTE(v2->monitor) = 0;
  if ( !titleAnim )
    sub_B7769C(0LL, v3);
  UnityEngine_GameObject__SetActive(titleAnim, 0, 0LL);
}


bool __fastcall BattleResultPopupWindowComponent__IsOpenPossible(
        BattleResultPopupWindowComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.isOpenPossible;
}


void __fastcall BattleResultPopupWindowComponent__Open(
        BattleResultPopupWindowComponent_o *this,
        BattleWindowComponent_EndCall_o *call,
        const MethodInfo *method)
{
  long double v5; // q0
  BattleWindowComponent_EndCall_o *v6; // x0
  __int64 v7; // x1
  BattleWindowComponent_EndCall_o *v8; // x20

  if ( (byte_43881E9 & 1) == 0 )
  {
    sub_B775C4(&BattleWindowComponent_EndCall_TypeInfo);
    byte_43881E9 = 1;
  }
  this->fields.callbackOpen = call;
  *(__n128 *)&v5 = sub_B77560(&this->fields.callbackOpen);
  ((void (__fastcall *)(BattleResultPopupWindowComponent_o *, Il2CppMethodPointer, long double))this->klass->vtable._15_OpenPreProcess.method)(
    this,
    this->klass->vtable._16_EndOpenCallback.methodPtr,
    v5);
  v6 = (BattleWindowComponent_EndCall_o *)sub_B77694(BattleWindowComponent_EndCall_TypeInfo);
  if ( !this )
    sub_B7769C(v6, v7);
  v8 = v6;
  BattleWindowComponent_EndCall___ctor(
    v6,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._17_OpenedPostProcess.methodPtr,
    0LL);
  BattleWindowComponent__Open((BattleWindowComponent_o *)this, v8, 0LL);
  ((void (__fastcall *)(BattleResultPopupWindowComponent_o *, Il2CppMethodPointer))this->klass->vtable._17_OpenedPostProcess.method)(
    this,
    this->klass->vtable._18_ClosePreProcess.methodPtr);
}


void __fastcall BattleResultPopupWindowComponent__OpenPreProcess(
        BattleResultPopupWindowComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *rootObj; // x0
  BattleResultPopupWindowComponent_o *v4; // x0
  const MethodInfo *v5; // x3
  _BOOL8 v6; // x0
  const MethodInfo *v7; // x3

  if ( (byte_43881EA & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_43881EA = 1;
  }
  rootObj = this->fields.rootObj;
  if ( !rootObj )
    sub_B7769C(0LL, method);
  UnityEngine_GameObject__SetActive(rootObj, 1, 0LL);
  v6 = BattleResultPopupWindowComponent__PlayTargetSimpleAnimation(
         v4,
         this->fields.titleSimpleAnim,
         (System_String_o *)StringLiteral_1/*""*/,
         v5);
  if ( !v6 )
    BattleResultPopupWindowComponent__PlayTargetAnimation(
      (BattleResultPopupWindowComponent_o *)v6,
      this->fields.titleAnim,
      (System_String_o *)StringLiteral_1/*""*/,
      v7);
}


void __fastcall BattleResultPopupWindowComponent__OpenedPostProcess(
        BattleResultPopupWindowComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_43881EB & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_43881EB = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(6, 0LL);
}


void __fastcall BattleResultPopupWindowComponent__PlayTargetAnimation(
        BattleResultPopupWindowComponent_o *this,
        UnityEngine_Animation_o *anim,
        System_String_o *clipName,
        const MethodInfo *method)
{
  UnityEngine_Object_o *IsNullOrEmpty; // x0
  __int64 v7; // x1

  if ( (byte_43881F0 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_43881F0 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)anim, 0LL, 0LL) )
  {
    IsNullOrEmpty = (UnityEngine_Object_o *)System_String__IsNullOrEmpty(clipName, 0LL);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    {
      if ( !anim )
        goto LABEL_15;
      IsNullOrEmpty = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(anim, 0LL);
      if ( !IsNullOrEmpty )
        goto LABEL_15;
      clipName = UnityEngine_Object__get_name(IsNullOrEmpty, 0LL);
    }
    else if ( !anim )
    {
      goto LABEL_15;
    }
    IsNullOrEmpty = (UnityEngine_Object_o *)UnityEngine_Animation__get_Item(anim, clipName, 0LL);
    if ( IsNullOrEmpty )
    {
      UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)IsNullOrEmpty, 0.0, 0LL);
      UnityEngine_Animation__Play_51745976(anim, clipName, 0LL);
      return;
    }
LABEL_15:
    sub_B7769C(IsNullOrEmpty, v7);
  }
}


bool __fastcall BattleResultPopupWindowComponent__PlayTargetSimpleAnimation(
        BattleResultPopupWindowComponent_o *this,
        SimpleAnimation_o *anim,
        System_String_o *clipName,
        const MethodInfo *method)
{
  UnityEngine_Object_o *IsNullOrEmpty; // x0
  __int64 v7; // x1
  UnityEngine_Object_c *klass; // x8
  UnityEngine_Object_o *v10; // x21
  unsigned __int64 v11; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v13; // x0

  if ( (byte_43881EF & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&SimpleAnimation_State_TypeInfo);
    byte_43881EF = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)anim, 0LL, 0LL) )
    return 0;
  IsNullOrEmpty = (UnityEngine_Object_o *)System_String__IsNullOrEmpty(clipName, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    if ( !anim || (IsNullOrEmpty = (UnityEngine_Object_o *)anim[1].monitor) == 0LL )
LABEL_21:
      sub_B7769C(IsNullOrEmpty, v7);
    clipName = UnityEngine_Object__get_name(IsNullOrEmpty, 0LL);
  }
  else if ( !anim )
  {
    goto LABEL_21;
  }
  IsNullOrEmpty = (UnityEngine_Object_o *)SimpleAnimation__get_Item(anim, clipName, 0LL);
  if ( !IsNullOrEmpty )
    goto LABEL_21;
  klass = IsNullOrEmpty->klass;
  v10 = IsNullOrEmpty;
  if ( *(_WORD *)&IsNullOrEmpty->klass->_2.bitflags1 )
  {
    v11 = 0LL;
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v11;
      p_offset += 2;
      if ( v11 >= *(unsigned __int16 *)&IsNullOrEmpty->klass->_2.bitflags1 )
        goto LABEL_18;
    }
    v13 = (__int64)(&klass[1]._1.gc_desc + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_18:
    v13 = sub_B0F4C0(IsNullOrEmpty, SimpleAnimation_State_TypeInfo, 4LL);
  }
  (*(void (__fastcall **)(UnityEngine_Object_o *, _QWORD, float))v13)(v10, *(_QWORD *)(v13 + 8), 0.0);
  SimpleAnimation__Play_16815192(anim, clipName, 0LL);
  return 1;
}


void __fastcall BattleResultPopupWindowComponent__SendFsmEvent(
        BattleResultPopupWindowComponent_o *this,
        System_String_o *eventName,
        const MethodInfo *method)
{
  UnityEngine_Object_o *notifyFsm; // x21
  __int64 v6; // x1
  PlayMakerFSM_o *v7; // x0

  if ( (byte_43881EE & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_43881EE = 1;
  }
  notifyFsm = (UnityEngine_Object_o *)this->fields.notifyFsm;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(notifyFsm, 0LL, 0LL) )
  {
    v7 = this->fields.notifyFsm;
    if ( !v7 )
      sub_B7769C(0LL, v6);
    PlayMakerFSM__SendEvent(v7, eventName, 0LL);
  }
}