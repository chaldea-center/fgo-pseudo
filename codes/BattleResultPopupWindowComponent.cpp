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
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  BattleWindowComponent_EndCall_o *v14; // x0
  BattleWindowComponent_EndCall_o *v15; // x20

  if ( (byte_40FA400 & 1) == 0 )
  {
    sub_B16FFC(&BattleWindowComponent_EndCall_TypeInfo, call);
    byte_40FA400 = 1;
  }
  this->fields.callbackClose = call;
  sub_B16F98(
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
  v14 = (BattleWindowComponent_EndCall_o *)sub_B170CC(BattleWindowComponent_EndCall_TypeInfo, v10, v11, v12, v13);
  if ( !this )
    sub_B170D4();
  v15 = v14;
  BattleWindowComponent_EndCall___ctor(
    v14,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._20_ClosedPostProcess.methodPtr,
    0LL);
  BattleWindowComponent__Close((BattleWindowComponent_o *)this, v15, 0LL);
  ((void (__fastcall *)(BattleResultPopupWindowComponent_o *, void *))this->klass->vtable._20_ClosedPostProcess.method)(
    this,
    this->klass[1]._1.image);
}


void __fastcall BattleResultPopupWindowComponent__ClosePreProcess(
        BattleResultPopupWindowComponent_o *this,
        const MethodInfo *method)
{
  struct BattleResultComponent_o *ownerComp; // x8
  UnityEngine_GameObject_o *obj_fronttouch; // x0

  ownerComp = this->fields.ownerComp;
  if ( !ownerComp || (obj_fronttouch = ownerComp->fields.obj_fronttouch) == 0LL )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(obj_fronttouch, 0, 0LL);
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

  if ( (byte_40FA401 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_5481/*"END_PROC"*/, method);
    byte_40FA401 = 1;
  }
  callbackClose = this->fields.callbackClose;
  if ( callbackClose )
    BattleWindowComponent_EndCall__Invoke(callbackClose, 0LL);
  rootObj = this->fields.rootObj;
  if ( !rootObj )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(rootObj, 0, 0LL);
  BattleResultPopupWindowComponent__SendFsmEvent(this, (System_String_o *)StringLiteral_5481/*"END_PROC"*/, v5);
}


void __fastcall BattleResultPopupWindowComponent__EndOpenCallback(
        BattleResultPopupWindowComponent_o *this,
        const MethodInfo *method)
{
  struct BattleResultComponent_o *ownerComp; // x8
  UnityEngine_GameObject_o *obj_fronttouch; // x0
  BattleWindowComponent_EndCall_o *callbackOpen; // x0

  ownerComp = this->fields.ownerComp;
  if ( !ownerComp || (obj_fronttouch = ownerComp->fields.obj_fronttouch) == 0LL )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(obj_fronttouch, 1, 0LL);
  callbackOpen = this->fields.callbackOpen;
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
  UnityEngine_GameObject_o *titleAnim; // x0

  v2 = this;
  BattleWindowComponent__setInitData((BattleWindowComponent_o *)this, 2, 0.15, 0, 0LL);
  ((void (__fastcall *)(BattleResultPopupWindowComponent_o *, Il2CppMethodPointer))v2->klass->vtable._9_setClose.method)(
    v2,
    v2->klass->vtable._10_Open.methodPtr);
  v2->fields.callbackOpen = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&v2->fields.callbackOpen, 0LL, v3, v4, v5, v6, v7, v8);
  v2->fields.callbackClose = 0LL;
  v2 = (BattleResultPopupWindowComponent_o *)((char *)v2 + 120);
  sub_B16F98((BattleServantConfConponent_o *)v2, 0LL, v9, v10, v11, v12, v13, v14);
  titleAnim = (UnityEngine_GameObject_o *)v2[-1].fields.titleAnim;
  LOBYTE(v2->monitor) = 0;
  if ( !titleAnim )
    sub_B170D4();
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
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  BattleWindowComponent_EndCall_o *v14; // x0
  BattleWindowComponent_EndCall_o *v15; // x20

  if ( (byte_40FA3FD & 1) == 0 )
  {
    sub_B16FFC(&BattleWindowComponent_EndCall_TypeInfo, call);
    byte_40FA3FD = 1;
  }
  this->fields.callbackOpen = call;
  sub_B16F98(
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
  v14 = (BattleWindowComponent_EndCall_o *)sub_B170CC(BattleWindowComponent_EndCall_TypeInfo, v10, v11, v12, v13);
  if ( !this )
    sub_B170D4();
  v15 = v14;
  BattleWindowComponent_EndCall___ctor(
    v14,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._17_OpenedPostProcess.methodPtr,
    0LL);
  BattleWindowComponent__Open((BattleWindowComponent_o *)this, v15, 0LL);
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

  if ( (byte_40FA3FE & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1/*""*/, method);
    byte_40FA3FE = 1;
  }
  rootObj = this->fields.rootObj;
  if ( !rootObj )
    sub_B170D4();
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
  if ( (byte_40FA3FF & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FA3FF = 1;
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
  UnityEngine_Object_o *clip; // x0
  UnityEngine_AnimationState_o *Item; // x0

  if ( (byte_40FA404 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, anim);
    byte_40FA404 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)anim, 0LL, 0LL) )
  {
    if ( System_String__IsNullOrEmpty(clipName, 0LL) )
    {
      if ( !anim )
        goto LABEL_15;
      clip = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(anim, 0LL);
      if ( !clip )
        goto LABEL_15;
      clipName = UnityEngine_Object__get_name(clip, 0LL);
    }
    else if ( !anim )
    {
      goto LABEL_15;
    }
    Item = UnityEngine_Animation__get_Item(anim, clipName, 0LL);
    if ( Item )
    {
      UnityEngine_AnimationState__set_time(Item, 0.0, 0LL);
      UnityEngine_Animation__Play_49744236(anim, clipName, 0LL);
      return;
    }
LABEL_15:
    sub_B170D4();
  }
}


bool __fastcall BattleResultPopupWindowComponent__PlayTargetSimpleAnimation(
        BattleResultPopupWindowComponent_o *this,
        SimpleAnimation_o *anim,
        System_String_o *clipName,
        const MethodInfo *method)
{
  __int64 v6; // x1
  UnityEngine_Object_o *monitor; // x0
  SimpleAnimation_State_o *Item; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v11; // x21
  unsigned __int64 v12; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0

  if ( (byte_40FA403 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, anim);
    sub_B16FFC(&SimpleAnimation_State_TypeInfo, v6);
    byte_40FA403 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)anim, 0LL, 0LL) )
    return 0;
  if ( System_String__IsNullOrEmpty(clipName, 0LL) )
  {
    if ( !anim || (monitor = (UnityEngine_Object_o *)anim[1].monitor) == 0LL )
LABEL_21:
      sub_B170D4();
    clipName = UnityEngine_Object__get_name(monitor, 0LL);
  }
  else if ( !anim )
  {
    goto LABEL_21;
  }
  Item = SimpleAnimation__get_Item(anim, clipName, 0LL);
  if ( !Item )
    goto LABEL_21;
  klass = Item->klass;
  v11 = Item;
  if ( *(_WORD *)&Item->klass->_2.bitflags1 )
  {
    v12 = 0LL;
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v12;
      p_offset += 2;
      if ( v12 >= *(unsigned __int16 *)&Item->klass->_2.bitflags1 )
        goto LABEL_18;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 4].method;
  }
  else
  {
LABEL_18:
    p_method = sub_AAFEF8(Item, SimpleAnimation_State_TypeInfo, 4LL);
  }
  (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD, float))p_method)(v11, *(_QWORD *)(p_method + 8), 0.0);
  SimpleAnimation__Play_16380456(anim, clipName, 0LL);
  return 1;
}


void __fastcall BattleResultPopupWindowComponent__SendFsmEvent(
        BattleResultPopupWindowComponent_o *this,
        System_String_o *eventName,
        const MethodInfo *method)
{
  UnityEngine_Object_o *notifyFsm; // x21
  PlayMakerFSM_o *v6; // x0

  if ( (byte_40FA402 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, eventName);
    byte_40FA402 = 1;
  }
  notifyFsm = (UnityEngine_Object_o *)this->fields.notifyFsm;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(notifyFsm, 0LL, 0LL) )
  {
    v6 = this->fields.notifyFsm;
    if ( !v6 )
      sub_B170D4();
    PlayMakerFSM__SendEvent(v6, eventName, 0LL);
  }
}