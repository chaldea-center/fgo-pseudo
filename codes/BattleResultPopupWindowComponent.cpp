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
  __int64 v3; // x3
  long double v6; // q0
  BattleWindowComponent_EndCall_o *v7; // x0
  __int64 v8; // x1
  BattleWindowComponent_EndCall_o *v9; // x20

  if ( (byte_42E572B & 1) == 0 )
  {
    sub_B5D5C4(&BattleWindowComponent_EndCall_TypeInfo, (_DWORD)call, (_DWORD)method, v3);
    byte_42E572B = 1;
  }
  this->fields.callbackClose = call;
  *(__n128 *)&v6 = sub_B5D560(&this->fields.callbackClose);
  ((void (__fastcall *)(BattleResultPopupWindowComponent_o *, Il2CppMethodPointer, long double))this->klass->vtable._18_ClosePreProcess.method)(
    this,
    this->klass->vtable._19_EndCloseCallback.methodPtr,
    v6);
  v7 = (BattleWindowComponent_EndCall_o *)sub_B5D694(BattleWindowComponent_EndCall_TypeInfo);
  if ( !this )
    sub_B5D69C(v7, v8);
  v9 = v7;
  BattleWindowComponent_EndCall___ctor(
    v7,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._20_ClosedPostProcess.methodPtr,
    0LL);
  BattleWindowComponent__Close((BattleWindowComponent_o *)this, v9, 0LL);
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
    sub_B5D69C(0LL, method);
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
  int v2; // w2
  __int64 v3; // x3
  BattleWindowComponent_EndCall_o *callbackClose; // x0
  UnityEngine_GameObject_o *rootObj; // x0
  const MethodInfo *v7; // x2

  if ( (byte_42E572C & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_5573/*"END_PROC"*/, (_DWORD)method, v2, v3);
    byte_42E572C = 1;
  }
  callbackClose = this->fields.callbackClose;
  if ( callbackClose )
    BattleWindowComponent_EndCall__Invoke(callbackClose, 0LL);
  rootObj = this->fields.rootObj;
  if ( !rootObj )
    sub_B5D69C(0LL, method);
  UnityEngine_GameObject__SetActive(rootObj, 0, 0LL);
  BattleResultPopupWindowComponent__SendFsmEvent(this, (System_String_o *)StringLiteral_5573/*"END_PROC"*/, v7);
}


void __fastcall BattleResultPopupWindowComponent__EndOpenCallback(
        BattleResultPopupWindowComponent_o *this,
        const MethodInfo *method)
{
  BattleResultComponent_o *ownerComp; // x0
  BattleWindowComponent_EndCall_o *callbackOpen; // x0

  ownerComp = this->fields.ownerComp;
  if ( !ownerComp )
    sub_B5D69C(0LL, method);
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
  sub_B5D560(&v2->fields.callbackOpen);
  v2->fields.callbackClose = 0LL;
  v2 = (BattleResultPopupWindowComponent_o *)((char *)v2 + 120);
  sub_B5D560(v2);
  titleAnim = (UnityEngine_GameObject_o *)v2[-1].fields.titleAnim;
  LOBYTE(v2->monitor) = 0;
  if ( !titleAnim )
    sub_B5D69C(0LL, v3);
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
  __int64 v3; // x3
  long double v6; // q0
  BattleWindowComponent_EndCall_o *v7; // x0
  __int64 v8; // x1
  BattleWindowComponent_EndCall_o *v9; // x20

  if ( (byte_42E5728 & 1) == 0 )
  {
    sub_B5D5C4(&BattleWindowComponent_EndCall_TypeInfo, (_DWORD)call, (_DWORD)method, v3);
    byte_42E5728 = 1;
  }
  this->fields.callbackOpen = call;
  *(__n128 *)&v6 = sub_B5D560(&this->fields.callbackOpen);
  ((void (__fastcall *)(BattleResultPopupWindowComponent_o *, Il2CppMethodPointer, long double))this->klass->vtable._15_OpenPreProcess.method)(
    this,
    this->klass->vtable._16_EndOpenCallback.methodPtr,
    v6);
  v7 = (BattleWindowComponent_EndCall_o *)sub_B5D694(BattleWindowComponent_EndCall_TypeInfo);
  if ( !this )
    sub_B5D69C(v7, v8);
  v9 = v7;
  BattleWindowComponent_EndCall___ctor(
    v7,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._17_OpenedPostProcess.methodPtr,
    0LL);
  BattleWindowComponent__Open((BattleWindowComponent_o *)this, v9, 0LL);
  ((void (__fastcall *)(BattleResultPopupWindowComponent_o *, Il2CppMethodPointer))this->klass->vtable._17_OpenedPostProcess.method)(
    this,
    this->klass->vtable._18_ClosePreProcess.methodPtr);
}


void __fastcall BattleResultPopupWindowComponent__OpenPreProcess(
        BattleResultPopupWindowComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_GameObject_o *rootObj; // x0
  BattleResultPopupWindowComponent_o *v6; // x0
  const MethodInfo *v7; // x3
  _BOOL8 v8; // x0
  const MethodInfo *v9; // x3

  if ( (byte_42E5729 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, v2, v3);
    byte_42E5729 = 1;
  }
  rootObj = this->fields.rootObj;
  if ( !rootObj )
    sub_B5D69C(0LL, method);
  UnityEngine_GameObject__SetActive(rootObj, 1, 0LL);
  v8 = BattleResultPopupWindowComponent__PlayTargetSimpleAnimation(
         v6,
         this->fields.titleSimpleAnim,
         (System_String_o *)StringLiteral_1/*""*/,
         v7);
  if ( !v8 )
    BattleResultPopupWindowComponent__PlayTargetAnimation(
      (BattleResultPopupWindowComponent_o *)v8,
      this->fields.titleAnim,
      (System_String_o *)StringLiteral_1/*""*/,
      v9);
}


void __fastcall BattleResultPopupWindowComponent__OpenedPostProcess(
        BattleResultPopupWindowComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E572A & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E572A = 1;
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
  System_String_o *name; // x20
  UnityEngine_Object_o *IsNullOrEmpty; // x0
  __int64 v7; // x1

  name = clipName;
  if ( (byte_42E572F & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)anim, (_DWORD)clipName, method);
    byte_42E572F = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)anim, 0LL, 0LL) )
  {
    IsNullOrEmpty = (UnityEngine_Object_o *)System_String__IsNullOrEmpty(name, 0LL);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    {
      if ( !anim )
        goto LABEL_15;
      IsNullOrEmpty = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(anim, 0LL);
      if ( !IsNullOrEmpty )
        goto LABEL_15;
      name = UnityEngine_Object__get_name(IsNullOrEmpty, 0LL);
    }
    else if ( !anim )
    {
      goto LABEL_15;
    }
    IsNullOrEmpty = (UnityEngine_Object_o *)UnityEngine_Animation__get_Item(anim, name, 0LL);
    if ( IsNullOrEmpty )
    {
      UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)IsNullOrEmpty, 0.0, 0LL);
      UnityEngine_Animation__Play_51249124(anim, name, 0LL);
      return;
    }
LABEL_15:
    sub_B5D69C(IsNullOrEmpty, v7);
  }
}


bool __fastcall BattleResultPopupWindowComponent__PlayTargetSimpleAnimation(
        BattleResultPopupWindowComponent_o *this,
        SimpleAnimation_o *anim,
        System_String_o *clipName,
        const MethodInfo *method)
{
  System_String_o *name; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_Object_o *IsNullOrEmpty; // x0
  __int64 v10; // x1
  __int64 v12; // x3
  UnityEngine_Object_c *klass; // x8
  UnityEngine_Object_o *v14; // x21
  unsigned __int64 v15; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v17; // x0

  name = clipName;
  if ( (byte_42E572E & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)anim, (_DWORD)clipName, method);
    sub_B5D5C4(&SimpleAnimation_State_TypeInfo, v6, v7, v8);
    byte_42E572E = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)anim, 0LL, 0LL) )
    return 0;
  IsNullOrEmpty = (UnityEngine_Object_o *)System_String__IsNullOrEmpty(name, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    if ( !anim || (IsNullOrEmpty = (UnityEngine_Object_o *)anim[1].monitor) == 0LL )
LABEL_21:
      sub_B5D69C(IsNullOrEmpty, v10);
    name = UnityEngine_Object__get_name(IsNullOrEmpty, 0LL);
  }
  else if ( !anim )
  {
    goto LABEL_21;
  }
  IsNullOrEmpty = (UnityEngine_Object_o *)SimpleAnimation__get_Item(anim, name, 0LL);
  if ( !IsNullOrEmpty )
    goto LABEL_21;
  klass = IsNullOrEmpty->klass;
  v14 = IsNullOrEmpty;
  if ( *(_WORD *)&IsNullOrEmpty->klass->_2.bitflags1 )
  {
    v15 = 0LL;
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v15;
      p_offset += 2;
      if ( v15 >= *(unsigned __int16 *)&IsNullOrEmpty->klass->_2.bitflags1 )
        goto LABEL_18;
    }
    v17 = (__int64)(&klass[1]._1.gc_desc + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_18:
    v17 = sub_AF54C0(IsNullOrEmpty, SimpleAnimation_State_TypeInfo, 4LL, v12);
  }
  (*(void (__fastcall **)(UnityEngine_Object_o *, _QWORD, float))v17)(v14, *(_QWORD *)(v17 + 8), 0.0);
  SimpleAnimation__Play_16676044(anim, name, 0LL);
  return 1;
}


void __fastcall BattleResultPopupWindowComponent__SendFsmEvent(
        BattleResultPopupWindowComponent_o *this,
        System_String_o *eventName,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *notifyFsm; // x21
  __int64 v7; // x1
  PlayMakerFSM_o *v8; // x0

  if ( (byte_42E572D & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)eventName, (_DWORD)method, v3);
    byte_42E572D = 1;
  }
  notifyFsm = (UnityEngine_Object_o *)this->fields.notifyFsm;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(notifyFsm, 0LL, 0LL) )
  {
    v8 = this->fields.notifyFsm;
    if ( !v8 )
      sub_B5D69C(0LL, v7);
    PlayMakerFSM__SendEvent(v8, eventName, 0LL);
  }
}