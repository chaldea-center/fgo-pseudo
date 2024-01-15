void __fastcall TitleInfoSuperBossStatusComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  struct TitleInfoSuperBossStatusComponent_StaticFields *static_fields; // x0
  __int64 v5; // x1
  struct TitleInfoSuperBossStatusComponent_StaticFields *v6; // x0
  __int64 v7; // x1
  TitleInfoSuperBossStatusComponent_c *v8; // x8
  struct TitleInfoSuperBossStatusComponent_StaticFields *v9; // x9

  if ( (byte_40F8452 & 1) == 0 )
  {
    sub_B16FFC(&TitleInfoSuperBossStatusComponent_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_18530/*"event_superboss_status_win_"*/, v2);
    sub_B16FFC(&StringLiteral_18529/*"event_superboss_status_battle_"*/, v3);
    byte_40F8452 = 1;
  }
  static_fields = TitleInfoSuperBossStatusComponent_TypeInfo->static_fields;
  v5 = StringLiteral_18529/*"event_superboss_status_battle_"*/;
  static_fields->SUPERBOSS_ICON_SPNAME_PREFIX_BATTLE = (struct System_String_o *)StringLiteral_18529/*"event_superboss_status_battle_"*/;
  sub_B16F98(static_fields, v5);
  v6 = TitleInfoSuperBossStatusComponent_TypeInfo->static_fields;
  v7 = StringLiteral_18530/*"event_superboss_status_win_"*/;
  v6->SUPERBOSS_ICON_SPNAME_PREFIX_WIN = (struct System_String_o *)StringLiteral_18530/*"event_superboss_status_win_"*/;
  sub_B16F98(&v6->SUPERBOSS_ICON_SPNAME_PREFIX_WIN, v7);
  v8 = TitleInfoSuperBossStatusComponent_TypeInfo;
  v9 = TitleInfoSuperBossStatusComponent_TypeInfo->static_fields;
  *(_QWORD *)&v9->FRAME_ANIM_OUT_POS_DELTA.fields.x = 3263954944LL;
  v9->FRAME_ANIM_OUT_POS_DELTA.fields.z = 0.0;
  v8->static_fields->FRAME_ANIM_DURATION = 0.3;
  v8->static_fields->ENTRY_ANIM_DELAY = 0.5;
}


void __fastcall TitleInfoSuperBossStatusComponent___ctor(
        TitleInfoSuperBossStatusComponent_o *this,
        const MethodInfo *method)
{
  TitleInfoEventInfoComponent___ctor((TitleInfoEventInfoComponent_o *)this, 0LL);
}


void __fastcall TitleInfoSuperBossStatusComponent__AnimFrameOutEnd(
        TitleInfoSuperBossStatusComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x8
  System_String_o *SUPERBOSS_ICON_SPNAME_PREFIX_WIN; // x20
  System_String_o *v5; // x0
  System_String_o *v6; // x0
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x2

  if ( (byte_40F844F & 1) == 0 )
  {
    sub_B16FFC(&TitleInfoSuperBossStatusComponent_TypeInfo, method);
    byte_40F844F = 1;
  }
  if ( (BYTE3(TitleInfoSuperBossStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoSuperBossStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossStatusComponent_TypeInfo);
  }
  v3 = *(_QWORD *)&this->fields.inPos.fields.x;
  if ( !v3 )
    sub_B170D4();
  SUPERBOSS_ICON_SPNAME_PREFIX_WIN = TitleInfoSuperBossStatusComponent_TypeInfo->static_fields->SUPERBOSS_ICON_SPNAME_PREFIX_WIN;
  v5 = System_Int32__ToString((int)v3 + 56, 0LL);
  v6 = System_String__Concat_43743732(SUPERBOSS_ICON_SPNAME_PREFIX_WIN, v5, 0LL);
  TitleInfoSuperBossStatusComponent__SetBossIcon(this, v6, v7);
  TitleInfoSuperBossStatusComponent__FrameIn(this, 0LL, v8);
}


void __fastcall TitleInfoSuperBossStatusComponent__Destroy(
        TitleInfoSuperBossStatusComponent_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall TitleInfoSuperBossStatusComponent__EntryAnim(
        TitleInfoSuperBossStatusComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  TitleInfoSuperBossStatusComponent__FrameIn(this, 0LL, v2);
}


void __fastcall TitleInfoSuperBossStatusComponent__FrameIn(
        TitleInfoSuperBossStatusComponent_o *this,
        System_String_o *callFinished,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_GameObject_o *gameObject; // x21
  TitleInfoSuperBossStatusComponent_c *v8; // x8
  TweenWidth_o *v9; // x0
  int clickCallBack_high; // w9
  TweenWidth_o *v11; // x21
  __int64 v12; // x8
  float y; // w9
  UnityEngine_GameObject_o *v14; // x0
  UnityEngine_Component_o *v15; // x0
  UnityEngine_GameObject_o *v16; // x0
  TweenWidth_o *v17; // x0

  if ( (byte_40F8450 & 1) == 0 )
  {
    sub_B16FFC(&TitleInfoSuperBossStatusComponent_TypeInfo, callFinished);
    sub_B16FFC(&Method_UITweener_Begin_TweenAlpha___, v5);
    sub_B16FFC(&Method_UITweener_Begin_TweenPosition___, v6);
    byte_40F8450 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v8 = TitleInfoSuperBossStatusComponent_TypeInfo;
  if ( (BYTE3(TitleInfoSuperBossStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoSuperBossStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossStatusComponent_TypeInfo);
    v8 = TitleInfoSuperBossStatusComponent_TypeInfo;
  }
  v9 = UITweener__Begin_TweenWidth_(
         gameObject,
         v8->static_fields->FRAME_ANIM_DURATION,
         (const MethodInfo_2254D94 *)Method_UITweener_Begin_TweenPosition___);
  if ( !v9 )
    goto LABEL_10;
  clickCallBack_high = HIDWORD(this->fields.clickCallBack);
  v11 = v9;
  *(_QWORD *)&v9->fields.from = *(_QWORD *)&this->fields.outPos.fields.z;
  *(_DWORD *)&v9->fields.updateTable = clickCallBack_high;
  v12 = *(_QWORD *)&this->fields.inPos.fields.z;
  y = this->fields.outPos.fields.y;
  v9->fields.style = 6;
  *(_QWORD *)(&v9->fields.updateTable + 4) = v12;
  *((float *)&v9->fields.mWidget + 1) = y;
  v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v11->fields.eventReceiver = v14;
  sub_B16F98(&v11->fields.eventReceiver, v14);
  v11->fields.callWhenFinished = callFinished;
  sub_B16F98(&v11->fields.callWhenFinished, callFinished);
  v15 = *(UnityEngine_Component_o **)&this->fields.bossGridPosition.fields.x;
  if ( !v15
    || (v16 = UnityEngine_Component__get_gameObject(v15, 0LL),
        (v17 = UITweener__Begin_TweenWidth_(
                 v16,
                 TitleInfoSuperBossStatusComponent_TypeInfo->static_fields->FRAME_ANIM_DURATION,
                 (const MethodInfo_2254D94 *)Method_UITweener_Begin_TweenAlpha___)) == 0LL) )
  {
LABEL_10:
    sub_B170D4();
  }
  v17->fields.style = 6;
  *(_QWORD *)&v17->fields.from = 0x3F80000000000000LL;
}


void __fastcall TitleInfoSuperBossStatusComponent__FrameOut(
        TitleInfoSuperBossStatusComponent_o *this,
        System_String_o *callFinished,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_GameObject_o *gameObject; // x21
  TitleInfoSuperBossStatusComponent_c *v8; // x8
  TweenWidth_o *v9; // x0
  float y; // w9
  TweenWidth_o *v11; // x21
  __int64 v12; // x8
  int clickCallBack_high; // w9
  UnityEngine_GameObject_o *v14; // x0
  UnityEngine_Component_o *v15; // x0
  UnityEngine_GameObject_o *v16; // x0
  TweenWidth_o *v17; // x0

  if ( (byte_40F8451 & 1) == 0 )
  {
    sub_B16FFC(&TitleInfoSuperBossStatusComponent_TypeInfo, callFinished);
    sub_B16FFC(&Method_UITweener_Begin_TweenAlpha___, v5);
    sub_B16FFC(&Method_UITweener_Begin_TweenPosition___, v6);
    byte_40F8451 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v8 = TitleInfoSuperBossStatusComponent_TypeInfo;
  if ( (BYTE3(TitleInfoSuperBossStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoSuperBossStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossStatusComponent_TypeInfo);
    v8 = TitleInfoSuperBossStatusComponent_TypeInfo;
  }
  v9 = UITweener__Begin_TweenWidth_(
         gameObject,
         v8->static_fields->FRAME_ANIM_DURATION,
         (const MethodInfo_2254D94 *)Method_UITweener_Begin_TweenPosition___);
  if ( !v9 )
    goto LABEL_10;
  y = this->fields.outPos.fields.y;
  v11 = v9;
  *(_QWORD *)&v9->fields.from = *(_QWORD *)&this->fields.inPos.fields.z;
  *(float *)&v9->fields.updateTable = y;
  v12 = *(_QWORD *)&this->fields.outPos.fields.z;
  clickCallBack_high = HIDWORD(this->fields.clickCallBack);
  v9->fields.style = 2;
  *(_QWORD *)(&v9->fields.updateTable + 4) = v12;
  HIDWORD(v9->fields.mWidget) = clickCallBack_high;
  v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v11->fields.eventReceiver = v14;
  sub_B16F98(&v11->fields.eventReceiver, v14);
  v11->fields.callWhenFinished = callFinished;
  sub_B16F98(&v11->fields.callWhenFinished, callFinished);
  v15 = *(UnityEngine_Component_o **)&this->fields.bossGridPosition.fields.x;
  if ( !v15
    || (v16 = UnityEngine_Component__get_gameObject(v15, 0LL),
        (v17 = UITweener__Begin_TweenWidth_(
                 v16,
                 TitleInfoSuperBossStatusComponent_TypeInfo->static_fields->FRAME_ANIM_DURATION,
                 (const MethodInfo_2254D94 *)Method_UITweener_Begin_TweenAlpha___)) == 0LL) )
  {
LABEL_10:
    sub_B170D4();
  }
  v17->fields.style = 2;
  *(_QWORD *)&v17->fields.from = 1065353216LL;
}


int32_t __fastcall TitleInfoSuperBossStatusComponent__GetBackBtnDepth(
        TitleInfoSuperBossStatusComponent_o *this,
        const MethodInfo *method)
{
  return HIDWORD(this->fields.boxCollider);
}


UnityEngine_Vector3_o __fastcall TitleInfoSuperBossStatusComponent__GetBossGridPosition(
        TitleInfoSuperBossStatusComponent_o *this,
        const MethodInfo *method)
{
  float z; // s0
  float v3; // s1
  float v4; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  z = this->fields.bossGridPosition.fields.z;
  v3 = *(float *)&this->fields.backBtnDepth;
  v4 = *(float *)&this->fields.boxCollider;
  result.fields.z = v4;
  result.fields.y = v3;
  result.fields.x = z;
  return result;
}


UISprite_o *__fastcall TitleInfoSuperBossStatusComponent__GetIconSprite(
        TitleInfoSuperBossStatusComponent_o *this,
        const MethodInfo *method)
{
  return *(UISprite_o **)&this->fields.bossGridPosition.fields.x;
}


bool __fastcall TitleInfoSuperBossStatusComponent__IsDispPossible(
        TitleInfoSuperBossStatusComponent_o *this,
        const MethodInfo *method)
{
  return 1;
}


bool __fastcall TitleInfoSuperBossStatusComponent__IsEventRaidBoss(
        TitleInfoSuperBossStatusComponent_o *this,
        const MethodInfo *method)
{
  return 0;
}


void __fastcall TitleInfoSuperBossStatusComponent__OnDestroy(
        TitleInfoSuperBossStatusComponent_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall TitleInfoSuperBossStatusComponent__SetBossIcon(
        TitleInfoSuperBossStatusComponent_o *this,
        System_String_o *spName,
        const MethodInfo *method)
{
  UISprite_o *v5; // x21
  bool v6; // w0
  UnityEngine_Behaviour_o *v7; // x0
  __int64 v8; // x0

  if ( (byte_40F8449 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, spName);
    byte_40F8449 = 1;
  }
  v5 = *(UISprite_o **)&this->fields.bossGridPosition.fields.x;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  v6 = AtlasManager__SetEventUI(v5, spName, 0LL);
  if ( !v5 )
    goto LABEL_12;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v5, v6, 0LL);
  v7 = *(UnityEngine_Behaviour_o **)&this->fields.bossGridPosition.fields.x;
  if ( !v7 )
    goto LABEL_12;
  if ( UnityEngine_Behaviour__get_enabled(v7, 0LL) )
  {
    v8 = *(_QWORD *)&this->fields.bossGridPosition.fields.x;
    if ( v8 )
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 840LL))(v8, *(_QWORD *)(*(_QWORD *)v8 + 848LL));
      return;
    }
LABEL_12:
    sub_B170D4();
  }
}


void __fastcall TitleInfoSuperBossStatusComponent__SetClearAnim(
        TitleInfoSuperBossStatusComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x8
  System_String_o *SUPERBOSS_ICON_SPNAME_PREFIX_BATTLE; // x20
  System_String_o *v6; // x0
  System_String_o *v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_40F844D & 1) == 0 )
  {
    sub_B16FFC(&TitleInfoSuperBossStatusComponent_TypeInfo, method);
    byte_40F844D = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  if ( (BYTE3(TitleInfoSuperBossStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoSuperBossStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossStatusComponent_TypeInfo);
  }
  v4 = *(_QWORD *)&this->fields.inPos.fields.x;
  if ( !v4 )
LABEL_9:
    sub_B170D4();
  SUPERBOSS_ICON_SPNAME_PREFIX_BATTLE = TitleInfoSuperBossStatusComponent_TypeInfo->static_fields->SUPERBOSS_ICON_SPNAME_PREFIX_BATTLE;
  v6 = System_Int32__ToString((int)v4 + 56, 0LL);
  v7 = System_String__Concat_43743732(SUPERBOSS_ICON_SPNAME_PREFIX_BATTLE, v6, 0LL);
  TitleInfoSuperBossStatusComponent__SetBossIcon(this, v7, v8);
}


void __fastcall TitleInfoSuperBossStatusComponent__SetClickCallBack(
        TitleInfoSuperBossStatusComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  *(_QWORD *)&this->fields.offsetY = callback;
  sub_B16F98(&this->fields.offsetY, callback);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoSuperBossStatusComponent__SetEntryAnim(
        TitleInfoSuperBossStatusComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Transform_o *transform; // x0
  float v5; // s1
  float v6; // s0
  float v7; // s4
  TitleInfoSuperBossStatusComponent_c *v8; // x0
  float32x2_t *static_fields; // x8
  float32x2_t v10; // d0
  float v11; // s2
  UnityEngine_Transform_o *v12; // x0
  __int64 v13; // x0
  float v14; // [xsp+0h] [xbp-20h]

  if ( (byte_40F844C & 1) == 0 )
  {
    sub_B16FFC(&TitleInfoSuperBossStatusComponent_TypeInfo, method);
    sub_B16FFC(&StringLiteral_6013/*"EntryAnim"*/, v3);
    byte_40F844C = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_10;
  *(UnityEngine_Vector3_o *)(&v5 - 1) = UnityEngine_Transform__get_localPosition(transform, 0LL);
  v6 = *(float *)&this[1].klass;
  this->fields.inPos.fields.z = 0.0;
  this->fields.outPos.fields.y = 0.0;
  v7 = v5 + v6;
  this->fields.outPos.fields.x = v5 + v6;
  v8 = TitleInfoSuperBossStatusComponent_TypeInfo;
  if ( (BYTE3(TitleInfoSuperBossStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoSuperBossStatusComponent_TypeInfo->_2.cctor_finished )
  {
    v14 = v5 + v6;
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossStatusComponent_TypeInfo);
    v7 = v14;
    v8 = TitleInfoSuperBossStatusComponent_TypeInfo;
  }
  static_fields = (float32x2_t *)v8->static_fields;
  v10.n64_u32[0] = 0;
  v10.n64_f32[1] = v7;
  v11 = static_fields[3].n64_f32[0];
  *(float32x2_t *)&this->fields.outPos.fields.z = vadd_f32(v10, static_fields[2]);
  *((float *)&this->fields.clickCallBack + 1) = v11 + 0.0;
  v12 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v12
    || (UnityEngine_Transform__set_localPosition(v12, *(UnityEngine_Vector3_o *)&this->fields.outPos.fields.z, 0LL),
        (v13 = *(_QWORD *)&this->fields.bossGridPosition.fields.x) == 0) )
  {
LABEL_10:
    sub_B170D4();
  }
  (*(void (__fastcall **)(__int64, _QWORD, float))(*(_QWORD *)v13 + 440LL))(
    v13,
    *(_QWORD *)(*(_QWORD *)v13 + 448LL),
    0.0);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6013/*"EntryAnim"*/,
    TitleInfoSuperBossStatusComponent_TypeInfo->static_fields->ENTRY_ANIM_DELAY
  + (float)(this->fields.outPos.fields.x / -500.0),
    0LL);
}


void __fastcall TitleInfoSuperBossStatusComponent__Setup(
        TitleInfoSuperBossStatusComponent_o *this,
        EventSuperBossEntity_o *eventSuperBossEntity,
        float offsetY,
        const MethodInfo *method)
{
  struct UnityEngine_Vector3_o *p_inPos; // x21
  UnityEngine_Object_o *gameObject; // x0
  UnityEngine_Object_o *v8; // x20
  System_String_o *name; // x0
  __int64 v10; // x8
  System_String_o *v11; // x21
  System_String_o *v12; // x0
  System_String_o *v13; // x0

  *(_QWORD *)&this->fields.inPos.fields.x = eventSuperBossEntity;
  p_inPos = &this->fields.inPos;
  sub_B16F98(&this->fields.inPos, eventSuperBossEntity);
  *(float *)&this[1].klass = offsetY;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (v8 = gameObject, name = UnityEngine_Object__get_name(gameObject, 0LL),
                         (v10 = *(_QWORD *)&p_inPos->fields.x) == 0) )
  {
    sub_B170D4();
  }
  v11 = name;
  v12 = System_Int32__ToString((int)v10 + 20, 0LL);
  v13 = System_String__Concat_43743732(v11, v12, 0LL);
  UnityEngine_Object__set_name(v8, v13, 0LL);
  ((void (__fastcall *)(TitleInfoSuperBossStatusComponent_o *, Il2CppMethodPointer))this->klass->vtable._5_UpdateDisp.method)(
    this,
    this->klass->vtable._6_IsEventRaidBoss.methodPtr);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoSuperBossStatusComponent__StartClearAnim(
        TitleInfoSuperBossStatusComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v5; // x2
  float v6; // s1
  float v7; // s0
  float v8; // s4
  TitleInfoSuperBossStatusComponent_c *v9; // x0
  float32x2_t *static_fields; // x8
  float32x2_t v11; // d0
  float v12; // s2
  float v13; // [xsp+0h] [xbp-20h]

  if ( (byte_40F844E & 1) == 0 )
  {
    sub_B16FFC(&TitleInfoSuperBossStatusComponent_TypeInfo, method);
    sub_B16FFC(&StringLiteral_1966/*"AnimFrameOutEnd"*/, v3);
    byte_40F844E = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_B170D4();
  *(UnityEngine_Vector3_o *)(&v6 - 1) = UnityEngine_Transform__get_localPosition(transform, 0LL);
  v7 = *(float *)&this[1].klass;
  this->fields.inPos.fields.z = 0.0;
  this->fields.outPos.fields.y = 0.0;
  v8 = v6 + v7;
  this->fields.outPos.fields.x = v6 + v7;
  v9 = TitleInfoSuperBossStatusComponent_TypeInfo;
  if ( (BYTE3(TitleInfoSuperBossStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoSuperBossStatusComponent_TypeInfo->_2.cctor_finished )
  {
    v13 = v6 + v7;
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossStatusComponent_TypeInfo);
    v8 = v13;
    v9 = TitleInfoSuperBossStatusComponent_TypeInfo;
  }
  static_fields = (float32x2_t *)v9->static_fields;
  v11.n64_u32[0] = 0;
  v11.n64_f32[1] = v8;
  v12 = static_fields[3].n64_f32[0];
  *(float32x2_t *)&this->fields.outPos.fields.z = vadd_f32(v11, static_fields[2]);
  *((float *)&this->fields.clickCallBack + 1) = v12 + 0.0;
  TitleInfoSuperBossStatusComponent__FrameOut(this, (System_String_o *)StringLiteral_1966/*"AnimFrameOutEnd"*/, v5);
}


void __fastcall TitleInfoSuperBossStatusComponent__UpdateDisp(
        TitleInfoSuperBossStatusComponent_o *this,
        const MethodInfo *method)
{
  EventSuperBossEntity_o *v3; // x0
  bool IsEncounted; // w20
  UnityEngine_GameObject_o *gameObject; // x0
  EventSuperBossEntity_o *v6; // x0
  bool IsCleard; // w0
  TitleInfoSuperBossStatusComponent_c *v8; // x8
  System_String_o **p_SUPERBOSS_ICON_SPNAME_PREFIX_WIN; // x8
  __int64 v10; // x9
  System_String_o *v11; // x20
  System_String_o *v12; // x0
  System_String_o *v13; // x0
  const MethodInfo *v14; // x2
  UnityEngine_Behaviour_o *v15; // x0
  UnityEngine_Collider_o *superBossEntity; // x20
  bool enabled; // w0
  __int64 v18; // x8
  UnityEngine_BoxCollider_o *v19; // x0
  __int64 v20; // x8
  UnityEngine_BoxCollider_o *v21; // x0
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F844A & 1) == 0 )
  {
    sub_B16FFC(&TitleInfoSuperBossStatusComponent_TypeInfo, method);
    byte_40F844A = 1;
  }
  v3 = *(EventSuperBossEntity_o **)&this->fields.inPos.fields.x;
  if ( v3 )
  {
    IsEncounted = EventSuperBossEntity__IsEncounted(v3, 0LL);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_26;
    if ( !IsEncounted )
    {
      UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      return;
    }
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    v6 = *(EventSuperBossEntity_o **)&this->fields.inPos.fields.x;
    if ( !v6 )
      goto LABEL_26;
    IsCleard = EventSuperBossEntity__IsCleard(v6, 0LL);
    v8 = TitleInfoSuperBossStatusComponent_TypeInfo;
    if ( IsCleard )
    {
      if ( (WORD1(TitleInfoSuperBossStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !TitleInfoSuperBossStatusComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoSuperBossStatusComponent_TypeInfo);
        v8 = TitleInfoSuperBossStatusComponent_TypeInfo;
      }
      p_SUPERBOSS_ICON_SPNAME_PREFIX_WIN = &v8->static_fields->SUPERBOSS_ICON_SPNAME_PREFIX_WIN;
    }
    else
    {
      if ( (WORD1(TitleInfoSuperBossStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !TitleInfoSuperBossStatusComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoSuperBossStatusComponent_TypeInfo);
        v8 = TitleInfoSuperBossStatusComponent_TypeInfo;
      }
      p_SUPERBOSS_ICON_SPNAME_PREFIX_WIN = &v8->static_fields->SUPERBOSS_ICON_SPNAME_PREFIX_BATTLE;
    }
    v10 = *(_QWORD *)&this->fields.inPos.fields.x;
    if ( !v10 )
      goto LABEL_26;
    v11 = *p_SUPERBOSS_ICON_SPNAME_PREFIX_WIN;
    v12 = System_Int32__ToString((int)v10 + 56, 0LL);
    v13 = System_String__Concat_43743732(v11, v12, 0LL);
    TitleInfoSuperBossStatusComponent__SetBossIcon(this, v13, v14);
    v15 = *(UnityEngine_Behaviour_o **)&this->fields.bossGridPosition.fields.x;
    if ( !v15 )
      goto LABEL_26;
    superBossEntity = (UnityEngine_Collider_o *)this->fields.superBossEntity;
    enabled = UnityEngine_Behaviour__get_enabled(v15, 0LL);
    if ( !superBossEntity )
      goto LABEL_26;
    UnityEngine_Collider__set_enabled(superBossEntity, enabled, 0LL);
    v18 = *(_QWORD *)&this->fields.bossGridPosition.fields.x;
    if ( !v18
      || (v19 = (UnityEngine_BoxCollider_o *)this->fields.superBossEntity) == 0LL
      || (v22.fields.z = 0.0,
          v22.fields.x = (float)*(int *)(v18 + 160) * 0.5,
          v22.fields.y = 0.0,
          UnityEngine_BoxCollider__set_center(v19, v22, 0LL),
          (v20 = *(_QWORD *)&this->fields.bossGridPosition.fields.x) == 0)
      || (v21 = (UnityEngine_BoxCollider_o *)this->fields.superBossEntity) == 0LL )
    {
LABEL_26:
      sub_B170D4();
    }
    v23.fields.y = (float)*(int *)(v20 + 164);
    v23.fields.x = (float)*(int *)(v20 + 160);
    v23.fields.z = 0.0;
    UnityEngine_BoxCollider__set_size(v21, v23, 0LL);
  }
}


void __fastcall TitleInfoSuperBossStatusComponent__onClick(
        TitleInfoSuperBossStatusComponent_o *this,
        const MethodInfo *method)
{
  EventSuperBossEntity_o *v3; // x0

  if ( (byte_40F844B & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F844B = 1;
  }
  if ( !*(_QWORD *)&this->fields.offsetY )
    goto LABEL_6;
  v3 = *(EventSuperBossEntity_o **)&this->fields.inPos.fields.x;
  if ( !v3 )
    sub_B170D4();
  if ( !EventSuperBossEntity__IsCleard(v3, 0LL) )
  {
    ActionExtensions__Call(*(System_Action_o **)&this->fields.offsetY, 0LL);
  }
  else
  {
LABEL_6:
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(2, 0LL);
  }
}