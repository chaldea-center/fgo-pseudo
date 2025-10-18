void BattleResultPopupWindowComponent___ctor(BattleResultPopupWindowComponent_o *this, const MethodInfo *method)
{
  BattleWindowComponent___ctor((BattleWindowComponent_o *)this, 0);
}


void BattleResultPopupWindowComponent__Close(
        BattleResultPopupWindowComponent_o *this,
        BattleWindowComponent_EndCall_o *call,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  BattleWindowComponent_EndCall_o *v6; // x20

  if ( (byte_4C46885 & 1) == 0 )
  {
    sub_1C37058(&BattleWindowComponent_EndCall_TypeInfo);
    byte_4C46885 = 1;
  }
  this->fields.callbackClose = call;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.callbackClose, (int32_t)call, (int32_t)method, v3);
  ((void (__fastcall *)(BattleResultPopupWindowComponent_o *, const MethodInfo *))this->klass->vtable._18_ClosePreProcess.methodPtr)(
    this,
    this->klass->vtable._18_ClosePreProcess.method);
  v6 = (BattleWindowComponent_EndCall_o *)sub_1C372A4(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v6,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._19_EndCloseCallback.method,
    0);
  BattleWindowComponent__Close((BattleWindowComponent_o *)this, v6, 0);
  ((void (__fastcall *)(BattleResultPopupWindowComponent_o *, const MethodInfo *))this->klass->vtable._20_ClosedPostProcess.methodPtr)(
    this,
    this->klass->vtable._20_ClosedPostProcess.method);
}


void BattleResultPopupWindowComponent__ClosePreProcess(
        BattleResultPopupWindowComponent_o *this,
        const MethodInfo *method)
{
  BattleResultComponent_o *ownerComp; // x0

  ownerComp = this->fields.ownerComp;
  if ( !ownerComp )
    sub_1C372B4(0);
  BattleResultComponent__setTouch(ownerComp, 0, 0);
}


void BattleResultPopupWindowComponent__ClosedPostProcess(
        BattleResultPopupWindowComponent_o *this,
        const MethodInfo *method)
{
  ;
}


void BattleResultPopupWindowComponent__EndCloseCallback(
        BattleResultPopupWindowComponent_o *this,
        const MethodInfo *method)
{
  struct BattleWindowComponent_EndCall_o *callbackClose; // x8
  UnityEngine_GameObject_o *rootObj; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4C46886 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_5456/*"END_PROC"*/);
    byte_4C46886 = 1;
  }
  callbackClose = this->fields.callbackClose;
  if ( callbackClose )
    ((void (__fastcall *)(intptr_t, intptr_t))callbackClose->fields.invoke_impl)(
      callbackClose->fields.method_code,
      callbackClose->fields.method);
  rootObj = this->fields.rootObj;
  if ( !rootObj )
    sub_1C372B4(0);
  UnityEngine_GameObject__SetActive(rootObj, 0, 0);
  BattleResultPopupWindowComponent__SendFsmEvent(this, (System_String_o *)StringLiteral_5456/*"END_PROC"*/, v5);
}


void BattleResultPopupWindowComponent__EndOpenCallback(
        BattleResultPopupWindowComponent_o *this,
        const MethodInfo *method)
{
  BattleResultComponent_o *ownerComp; // x0
  struct BattleWindowComponent_EndCall_o *callbackOpen; // x8

  ownerComp = this->fields.ownerComp;
  if ( !ownerComp )
    sub_1C372B4(0);
  BattleResultComponent__setTouch(ownerComp, 1, 0);
  callbackOpen = this->fields.callbackOpen;
  if ( callbackOpen )
    ((void (__fastcall *)(intptr_t, intptr_t))callbackOpen->fields.invoke_impl)(
      callbackOpen->fields.method_code,
      callbackOpen->fields.method);
}


void BattleResultPopupWindowComponent__InitPopup(BattleResultPopupWindowComponent_o *this, const MethodInfo *method)
{
  BattleResultPopupWindowComponent_o *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  UnityEngine_GameObject_o *titleAnim; // x0

  v2 = this;
  BattleWindowComponent__setInitData((BattleWindowComponent_o *)this, 2, 0.15, 0, 0);
  ((void (__fastcall *)(BattleResultPopupWindowComponent_o *, const MethodInfo *))v2->klass->vtable._9_setClose.methodPtr)(
    v2,
    v2->klass->vtable._9_setClose.method);
  v2->fields.callbackOpen = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields.callbackOpen, 0, v3, v4);
  v2->fields.callbackClose = 0;
  v2 = (BattleResultPopupWindowComponent_o *)((char *)v2 + 128);
  sub_1C36FFC((CGThumbnailListItem_o *)v2, 0, v5, v6);
  titleAnim = (UnityEngine_GameObject_o *)v2[-1].fields.titleAnim;
  LOBYTE(v2->monitor) = 0;
  if ( !titleAnim )
    sub_1C372B4(0);
  UnityEngine_GameObject__SetActive(titleAnim, 0, 0);
}


bool BattleResultPopupWindowComponent__IsOpenPossible(
        BattleResultPopupWindowComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.isOpenPossible;
}


void BattleResultPopupWindowComponent__Open(
        BattleResultPopupWindowComponent_o *this,
        BattleWindowComponent_EndCall_o *call,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  BattleWindowComponent_EndCall_o *v6; // x20

  if ( (byte_4C46882 & 1) == 0 )
  {
    sub_1C37058(&BattleWindowComponent_EndCall_TypeInfo);
    byte_4C46882 = 1;
  }
  this->fields.callbackOpen = call;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.callbackOpen, (int32_t)call, (int32_t)method, v3);
  ((void (__fastcall *)(BattleResultPopupWindowComponent_o *, const MethodInfo *))this->klass->vtable._15_OpenPreProcess.methodPtr)(
    this,
    this->klass->vtable._15_OpenPreProcess.method);
  v6 = (BattleWindowComponent_EndCall_o *)sub_1C372A4(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v6,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._16_EndOpenCallback.method,
    0);
  BattleWindowComponent__Open((BattleWindowComponent_o *)this, v6, 0);
  ((void (__fastcall *)(BattleResultPopupWindowComponent_o *, const MethodInfo *))this->klass->vtable._17_OpenedPostProcess.methodPtr)(
    this,
    this->klass->vtable._17_OpenedPostProcess.method);
}


void BattleResultPopupWindowComponent__OpenPreProcess(
        BattleResultPopupWindowComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *rootObj; // x0
  BattleResultPopupWindowComponent_o *v4; // x0
  const MethodInfo *v5; // x3
  _BOOL8 v6; // x0
  const MethodInfo *v7; // x3

  if ( (byte_4C46883 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C46883 = 1;
  }
  rootObj = this->fields.rootObj;
  if ( !rootObj )
    sub_1C372B4(0);
  UnityEngine_GameObject__SetActive(rootObj, 1, 0);
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


void BattleResultPopupWindowComponent__OpenedPostProcess(
        BattleResultPopupWindowComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v2; // x0
  System_Reflection_MethodBase_o *v3; // x0

  if ( (byte_4C46884 & 1) == 0 )
  {
    sub_1C37058(&Method_BattleResultPopupWindowComponent_OpenedPostProcess__);
    byte_4C46884 = 1;
  }
  v2 = Method_BattleResultPopupWindowComponent_OpenedPostProcess__;
  if ( (*((_BYTE *)Method_BattleResultPopupWindowComponent_OpenedPostProcess__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_1C37070(Method_BattleResultPopupWindowComponent_OpenedPostProcess__);
  v3 = (System_Reflection_MethodBase_o *)sub_1C3703C(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 6, 0, 0);
}


void BattleResultPopupWindowComponent__PlayTargetAnimation(
        BattleResultPopupWindowComponent_o *this,
        UnityEngine_Animation_o *anim,
        System_String_o *clipName,
        const MethodInfo *method)
{
  UnityEngine_Object_o *IsNullOrEmpty; // x0

  if ( (byte_4C46889 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C46889 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)anim, 0, 0) )
  {
    IsNullOrEmpty = (UnityEngine_Object_o *)System_String__IsNullOrEmpty(clipName, 0);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    {
      if ( !anim )
        goto LABEL_14;
      IsNullOrEmpty = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(anim, 0);
      if ( !IsNullOrEmpty )
        goto LABEL_14;
      clipName = UnityEngine_Object__get_name(IsNullOrEmpty, 0);
    }
    else if ( !anim )
    {
      goto LABEL_14;
    }
    IsNullOrEmpty = (UnityEngine_Object_o *)UnityEngine_Animation__get_Item(anim, clipName, 0);
    if ( IsNullOrEmpty )
    {
      UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)IsNullOrEmpty, 0.0, 0);
      UnityEngine_Animation__Play_71012036(anim, clipName, 0);
      return;
    }
LABEL_14:
    sub_1C372B4(IsNullOrEmpty);
  }
}


bool BattleResultPopupWindowComponent__PlayTargetSimpleAnimation(
        BattleResultPopupWindowComponent_o *this,
        SimpleAnimation_o *anim,
        System_String_o *clipName,
        const MethodInfo *method)
{
  bool v6; // w21
  UnityEngine_Object_o *IsNullOrEmpty; // x0
  UnityEngine_Object_c *klass; // x8
  UnityEngine_Object_o *v9; // x22
  __int64 v10; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v12; // x0

  if ( (byte_4C46888 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&SimpleAnimation_State_TypeInfo);
    byte_4C46888 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)anim, 0, 0);
  if ( !v6 )
    return v6;
  IsNullOrEmpty = (UnityEngine_Object_o *)System_String__IsNullOrEmpty(clipName, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    if ( !anim || (IsNullOrEmpty = (UnityEngine_Object_o *)anim->fields.m_Clip) == 0 )
LABEL_20:
      sub_1C372B4(IsNullOrEmpty);
    clipName = UnityEngine_Object__get_name(IsNullOrEmpty, 0);
  }
  else if ( !anim )
  {
    goto LABEL_20;
  }
  IsNullOrEmpty = (UnityEngine_Object_o *)SimpleAnimation__get_Item(anim, clipName, 0);
  if ( !IsNullOrEmpty )
    goto LABEL_20;
  klass = IsNullOrEmpty->klass;
  v9 = IsNullOrEmpty;
  v10 = *(unsigned __int16 *)&IsNullOrEmpty->klass->_2.rank;
  if ( *(_WORD *)&IsNullOrEmpty->klass->_2.rank )
  {
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v10;
      p_offset += 2;
      if ( !v10 )
        goto LABEL_16;
    }
    v12 = (__int64)&klass[1] + 16 * *(_DWORD *)p_offset;
  }
  else
  {
LABEL_16:
    v12 = sub_1C87870(IsNullOrEmpty, SimpleAnimation_State_TypeInfo, 4);
  }
  (*(void (__fastcall **)(UnityEngine_Object_o *, _QWORD, float))v12)(v9, *(_QWORD *)(v12 + 8), 0.0);
  SimpleAnimation__Play_66507412(anim, clipName, 0);
  return v6;
}


void BattleResultPopupWindowComponent__SendFsmEvent(
        BattleResultPopupWindowComponent_o *this,
        System_String_o *eventName,
        const MethodInfo *method)
{
  UnityEngine_Object_o *notifyFsm; // x21
  PlayMakerFSM_o *v6; // x0

  if ( (byte_4C46887 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C46887 = 1;
  }
  notifyFsm = (UnityEngine_Object_o *)this->fields.notifyFsm;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(notifyFsm, 0, 0) )
  {
    v6 = this->fields.notifyFsm;
    if ( !v6 )
      sub_1C372B4(0);
    PlayMakerFSM__SendEvent(v6, eventName, 0);
  }
}