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
  const MethodInfo *v3; // x3
  BattleWindowComponent_EndCall_o *v6; // x20

  if ( (byte_4B1FC6B & 1) == 0 )
  {
    sub_1BCAFF8(&BattleWindowComponent_EndCall_TypeInfo, call);
    byte_4B1FC6B = 1;
  }
  this->fields.callbackClose = call;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.callbackClose, (int32_t)call, (int32_t)method, v3);
  ((void (__fastcall *)(BattleResultPopupWindowComponent_o *, Il2CppMethodPointer))this->klass->vtable._18_ClosePreProcess.method)(
    this,
    this->klass->vtable._19_EndCloseCallback.methodPtr);
  v6 = (BattleWindowComponent_EndCall_o *)sub_1BCB244(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v6,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._20_ClosedPostProcess.methodPtr,
    0LL);
  BattleWindowComponent__Close((BattleWindowComponent_o *)this, v6, 0LL);
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
    sub_1BCB254(0LL, method);
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
  struct BattleWindowComponent_EndCall_o *callbackClose; // x8
  UnityEngine_GameObject_o *rootObj; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4B1FC6C & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_5411/*"END_PROC"*/, method);
    byte_4B1FC6C = 1;
  }
  callbackClose = this->fields.callbackClose;
  if ( callbackClose )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackClose->fields.m_target)(
      callbackClose->fields.original_method_info,
      *(_QWORD *)&callbackClose->fields.extra_arg);
  rootObj = this->fields.rootObj;
  if ( !rootObj )
    sub_1BCB254(0LL, method);
  UnityEngine_GameObject__SetActive(rootObj, 0, 0LL);
  BattleResultPopupWindowComponent__SendFsmEvent(this, (System_String_o *)StringLiteral_5411/*"END_PROC"*/, v5);
}


void __fastcall BattleResultPopupWindowComponent__EndOpenCallback(
        BattleResultPopupWindowComponent_o *this,
        const MethodInfo *method)
{
  BattleResultComponent_o *ownerComp; // x0
  struct BattleWindowComponent_EndCall_o *callbackOpen; // x8

  ownerComp = this->fields.ownerComp;
  if ( !ownerComp )
    sub_1BCB254(0LL, method);
  BattleResultComponent__setTouch(ownerComp, 1, 0LL);
  callbackOpen = this->fields.callbackOpen;
  if ( callbackOpen )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackOpen->fields.m_target)(
      callbackOpen->fields.original_method_info,
      *(_QWORD *)&callbackOpen->fields.extra_arg);
}


void __fastcall BattleResultPopupWindowComponent__InitPopup(
        BattleResultPopupWindowComponent_o *this,
        const MethodInfo *method)
{
  BattleResultPopupWindowComponent_o *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  __int64 v7; // x1
  UnityEngine_GameObject_o *titleAnim; // x0

  v2 = this;
  BattleWindowComponent__setInitData((BattleWindowComponent_o *)this, 2, 0.15, 0, 0LL);
  ((void (__fastcall *)(BattleResultPopupWindowComponent_o *, Il2CppMethodPointer))v2->klass->vtable._9_setClose.method)(
    v2,
    v2->klass->vtable._10_Open.methodPtr);
  v2->fields.callbackOpen = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v2->fields.callbackOpen, 0, v3, v4);
  v2->fields.callbackClose = 0LL;
  v2 = (BattleResultPopupWindowComponent_o *)((char *)v2 + 128);
  sub_1BCAF9C((CGThumbnailListItem_o *)v2, 0, v5, v6);
  titleAnim = (UnityEngine_GameObject_o *)v2[-1].fields.titleAnim;
  LOBYTE(v2->monitor) = 0;
  if ( !titleAnim )
    sub_1BCB254(0LL, v7);
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
  const MethodInfo *v3; // x3
  BattleWindowComponent_EndCall_o *v6; // x20

  if ( (byte_4B1FC68 & 1) == 0 )
  {
    sub_1BCAFF8(&BattleWindowComponent_EndCall_TypeInfo, call);
    byte_4B1FC68 = 1;
  }
  this->fields.callbackOpen = call;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.callbackOpen, (int32_t)call, (int32_t)method, v3);
  ((void (__fastcall *)(BattleResultPopupWindowComponent_o *, Il2CppMethodPointer))this->klass->vtable._15_OpenPreProcess.method)(
    this,
    this->klass->vtable._16_EndOpenCallback.methodPtr);
  v6 = (BattleWindowComponent_EndCall_o *)sub_1BCB244(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v6,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._17_OpenedPostProcess.methodPtr,
    0LL);
  BattleWindowComponent__Open((BattleWindowComponent_o *)this, v6, 0LL);
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

  if ( (byte_4B1FC69 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_1/*""*/, method);
    byte_4B1FC69 = 1;
  }
  rootObj = this->fields.rootObj;
  if ( !rootObj )
    sub_1BCB254(0LL, method);
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
  _QWORD *v2; // x0
  System_Reflection_MethodBase_o *v3; // x0

  if ( (byte_4B1FC6A & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BattleResultPopupWindowComponent_OpenedPostProcess__, method);
    byte_4B1FC6A = 1;
  }
  v2 = Method_BattleResultPopupWindowComponent_OpenedPostProcess__;
  if ( (*((_BYTE *)Method_BattleResultPopupWindowComponent_OpenedPostProcess__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_1BCB010(Method_BattleResultPopupWindowComponent_OpenedPostProcess__);
  v3 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 6, 0, 0LL);
}


void __fastcall BattleResultPopupWindowComponent__PlayTargetAnimation(
        BattleResultPopupWindowComponent_o *this,
        UnityEngine_Animation_o *anim,
        System_String_o *clipName,
        const MethodInfo *method)
{
  UnityEngine_Object_o *IsNullOrEmpty; // x0
  __int64 v7; // x1

  if ( (byte_4B1FC6F & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, anim);
    byte_4B1FC6F = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)anim, 0LL, 0LL) )
  {
    IsNullOrEmpty = (UnityEngine_Object_o *)System_String__IsNullOrEmpty(clipName, 0LL);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    {
      if ( !anim )
        goto LABEL_14;
      IsNullOrEmpty = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(anim, 0LL);
      if ( !IsNullOrEmpty )
        goto LABEL_14;
      clipName = UnityEngine_Object__get_name(IsNullOrEmpty, 0LL);
    }
    else if ( !anim )
    {
      goto LABEL_14;
    }
    IsNullOrEmpty = (UnityEngine_Object_o *)UnityEngine_Animation__get_Item(anim, clipName, 0LL);
    if ( IsNullOrEmpty )
    {
      UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)IsNullOrEmpty, 0.0, 0LL);
      UnityEngine_Animation__Play_69881360(anim, clipName, 0LL);
      return;
    }
LABEL_14:
    sub_1BCB254(IsNullOrEmpty, v7);
  }
}


bool __fastcall BattleResultPopupWindowComponent__PlayTargetSimpleAnimation(
        BattleResultPopupWindowComponent_o *this,
        SimpleAnimation_o *anim,
        System_String_o *clipName,
        const MethodInfo *method)
{
  __int64 v6; // x1
  bool v7; // w21
  UnityEngine_Object_o *IsNullOrEmpty; // x0
  __int64 v9; // x1
  UnityEngine_Object_c *klass; // x8
  UnityEngine_Object_o *v11; // x22
  __int64 v12; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v14; // x0

  if ( (byte_4B1FC6E & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, anim);
    sub_1BCAFF8(&SimpleAnimation_State_TypeInfo, v6);
    byte_4B1FC6E = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)anim, 0LL, 0LL);
  if ( !v7 )
    return v7;
  IsNullOrEmpty = (UnityEngine_Object_o *)System_String__IsNullOrEmpty(clipName, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    if ( !anim || (IsNullOrEmpty = (UnityEngine_Object_o *)anim[1].monitor) == 0LL )
LABEL_20:
      sub_1BCB254(IsNullOrEmpty, v9);
    clipName = UnityEngine_Object__get_name(IsNullOrEmpty, 0LL);
  }
  else if ( !anim )
  {
    goto LABEL_20;
  }
  IsNullOrEmpty = (UnityEngine_Object_o *)SimpleAnimation__get_Item(anim, clipName, 0LL);
  if ( !IsNullOrEmpty )
    goto LABEL_20;
  klass = IsNullOrEmpty->klass;
  v11 = IsNullOrEmpty;
  v12 = *(unsigned __int16 *)(&IsNullOrEmpty->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&IsNullOrEmpty->klass->_2.bitflags2 + 3) )
  {
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v12;
      p_offset += 2;
      if ( !v12 )
        goto LABEL_16;
    }
    v14 = (__int64)(&klass[1]._1.gc_desc + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_16:
    v14 = sub_1C1B560(IsNullOrEmpty, SimpleAnimation_State_TypeInfo, 4LL);
  }
  (*(void (__fastcall **)(UnityEngine_Object_o *, _QWORD, float))v14)(v11, *(_QWORD *)(v14 + 8), 0.0);
  SimpleAnimation__Play_65395744(anim, clipName, 0LL);
  return v7;
}


void __fastcall BattleResultPopupWindowComponent__SendFsmEvent(
        BattleResultPopupWindowComponent_o *this,
        System_String_o *eventName,
        const MethodInfo *method)
{
  UnityEngine_Object_o *notifyFsm; // x21
  __int64 v6; // x1
  PlayMakerFSM_o *v7; // x0

  if ( (byte_4B1FC6D & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, eventName);
    byte_4B1FC6D = 1;
  }
  notifyFsm = (UnityEngine_Object_o *)this->fields.notifyFsm;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(notifyFsm, 0LL, 0LL) )
  {
    v7 = this->fields.notifyFsm;
    if ( !v7 )
      sub_1BCB254(0LL, v6);
    PlayMakerFSM__SendEvent(v7, eventName, 0LL);
  }
}