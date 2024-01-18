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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleWindowComponent_EndCall_o *v10; // x0
  __int64 v11; // x1
  BattleWindowComponent_EndCall_o *v12; // x20

  if ( (byte_4187F1F & 1) == 0 )
  {
    sub_B2C35C(&BattleWindowComponent_EndCall_TypeInfo, call);
    byte_4187F1F = 1;
  }
  this->fields.callbackClose = call;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackClose,
    (System_Int32_array **)call,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  ((void (__fastcall *)(BattleResultPopupWindowComponent_o *, Il2CppMethodPointer))this->klass->vtable._18_ClosePreProcess.method)(
    this,
    this->klass->vtable._19_EndCloseCallback.methodPtr);
  v10 = (BattleWindowComponent_EndCall_o *)sub_B2C42C(BattleWindowComponent_EndCall_TypeInfo);
  if ( !this )
    sub_B2C434(v10, v11);
  v12 = v10;
  BattleWindowComponent_EndCall___ctor(
    v10,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._20_ClosedPostProcess.methodPtr,
    0LL);
  BattleWindowComponent__Close((BattleWindowComponent_o *)this, v12, 0LL);
  ((void (__fastcall *)(BattleResultPopupWindowComponent_o *, void *))this->klass->vtable._20_ClosedPostProcess.method)(
    this,
    this->klass[1]._1.image);
}


void __fastcall BattleResultPopupWindowComponent__ClosePreProcess(
        BattleResultPopupWindowComponent_o *this,
        const MethodInfo *method)
{
  struct BattleResultComponent_o *ownerComp; // x8

  ownerComp = this->fields.ownerComp;
  if ( !ownerComp || (this = (BattleResultPopupWindowComponent_o *)ownerComp->fields.obj_fronttouch) == 0LL )
    sub_B2C434(this, method);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
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

  if ( (byte_4187F20 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_5496/*"END_PROC"*/, method);
    byte_4187F20 = 1;
  }
  callbackClose = this->fields.callbackClose;
  if ( callbackClose )
    BattleWindowComponent_EndCall__Invoke(callbackClose, 0LL);
  rootObj = this->fields.rootObj;
  if ( !rootObj )
    sub_B2C434(0LL, method);
  UnityEngine_GameObject__SetActive(rootObj, 0, 0LL);
  BattleResultPopupWindowComponent__SendFsmEvent(this, (System_String_o *)StringLiteral_5496/*"END_PROC"*/, v5);
}


void __fastcall BattleResultPopupWindowComponent__EndOpenCallback(
        BattleResultPopupWindowComponent_o *this,
        const MethodInfo *method)
{
  struct BattleResultComponent_o *ownerComp; // x8
  BattleResultPopupWindowComponent_o *v3; // x19
  BattleWindowComponent_EndCall_o *callbackOpen; // x0

  ownerComp = this->fields.ownerComp;
  if ( !ownerComp || (v3 = this, (this = (BattleResultPopupWindowComponent_o *)ownerComp->fields.obj_fronttouch) == 0LL) )
    sub_B2C434(this, method);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  callbackOpen = v3->fields.callbackOpen;
  if ( callbackOpen )
    BattleWindowComponent_EndCall__Invoke(callbackOpen, 0LL);
}


void __fastcall BattleResultPopupWindowComponent__InitPopup(
        BattleResultPopupWindowComponent_o *this,
        const MethodInfo *method)
{
  BattleResultPopupWindowComponent_o *v2; // x19
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  __int64 v15; // x1
  UnityEngine_GameObject_o *titleAnim; // x0

  v2 = this;
  BattleWindowComponent__setInitData((BattleWindowComponent_o *)this, 2, 0.15, 0, 0LL);
  ((void (__fastcall *)(BattleResultPopupWindowComponent_o *, Il2CppMethodPointer))v2->klass->vtable._9_setClose.method)(
    v2,
    v2->klass->vtable._10_Open.methodPtr);
  v2->fields.callbackOpen = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&v2->fields.callbackOpen, 0LL, v3, v4, v5, v6, v7, v8);
  v2->fields.callbackClose = 0LL;
  v2 = (BattleResultPopupWindowComponent_o *)((char *)v2 + 120);
  sub_B2C2F8((BattleServantConfConponent_o *)v2, 0LL, v9, v10, v11, v12, v13, v14);
  titleAnim = (UnityEngine_GameObject_o *)v2[-1].fields.titleAnim;
  LOBYTE(v2->monitor) = 0;
  if ( !titleAnim )
    sub_B2C434(0LL, v15);
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleWindowComponent_EndCall_o *v10; // x0
  __int64 v11; // x1
  BattleWindowComponent_EndCall_o *v12; // x20

  if ( (byte_4187F1C & 1) == 0 )
  {
    sub_B2C35C(&BattleWindowComponent_EndCall_TypeInfo, call);
    byte_4187F1C = 1;
  }
  this->fields.callbackOpen = call;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackOpen,
    (System_Int32_array **)call,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  ((void (__fastcall *)(BattleResultPopupWindowComponent_o *, Il2CppMethodPointer))this->klass->vtable._15_OpenPreProcess.method)(
    this,
    this->klass->vtable._16_EndOpenCallback.methodPtr);
  v10 = (BattleWindowComponent_EndCall_o *)sub_B2C42C(BattleWindowComponent_EndCall_TypeInfo);
  if ( !this )
    sub_B2C434(v10, v11);
  v12 = v10;
  BattleWindowComponent_EndCall___ctor(
    v10,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._17_OpenedPostProcess.methodPtr,
    0LL);
  BattleWindowComponent__Open((BattleWindowComponent_o *)this, v12, 0LL);
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

  if ( (byte_4187F1D & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, method);
    byte_4187F1D = 1;
  }
  rootObj = this->fields.rootObj;
  if ( !rootObj )
    sub_B2C434(0LL, method);
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
  if ( (byte_4187F1E & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4187F1E = 1;
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

  if ( (byte_4187F23 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, anim);
    byte_4187F23 = 1;
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
      UnityEngine_Animation__Play_50201580(anim, clipName, 0LL);
      return;
    }
LABEL_15:
    sub_B2C434(IsNullOrEmpty, v7);
  }
}


bool __fastcall BattleResultPopupWindowComponent__PlayTargetSimpleAnimation(
        BattleResultPopupWindowComponent_o *this,
        SimpleAnimation_o *anim,
        System_String_o *clipName,
        const MethodInfo *method)
{
  __int64 v6; // x1
  UnityEngine_Object_o *IsNullOrEmpty; // x0
  __int64 v8; // x1
  __int64 v10; // x3
  UnityEngine_Object_c *klass; // x8
  UnityEngine_Object_o *v12; // x21
  unsigned __int64 v13; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v15; // x0

  if ( (byte_4187F22 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, anim);
    sub_B2C35C(&SimpleAnimation_State_TypeInfo, v6);
    byte_4187F22 = 1;
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
      sub_B2C434(IsNullOrEmpty, v8);
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
  v12 = IsNullOrEmpty;
  if ( *(_WORD *)&IsNullOrEmpty->klass->_2.bitflags1 )
  {
    v13 = 0LL;
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v13;
      p_offset += 2;
      if ( v13 >= *(unsigned __int16 *)&IsNullOrEmpty->klass->_2.bitflags1 )
        goto LABEL_18;
    }
    v15 = (__int64)(&klass[1]._1.gc_desc + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_18:
    v15 = sub_AC5258(IsNullOrEmpty, SimpleAnimation_State_TypeInfo, 4LL, v10);
  }
  (*(void (__fastcall **)(UnityEngine_Object_o *, _QWORD, float))v15)(v12, *(_QWORD *)(v15 + 8), 0.0);
  SimpleAnimation__Play_16486620(anim, clipName, 0LL);
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

  if ( (byte_4187F21 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, eventName);
    byte_4187F21 = 1;
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
      sub_B2C434(0LL, v6);
    PlayMakerFSM__SendEvent(v7, eventName, 0LL);
  }
}