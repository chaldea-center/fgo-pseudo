void __fastcall TitleInfoSuperBossStatusComponent___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1
  struct TitleInfoSuperBossStatusComponent_StaticFields *v9; // x0
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  TitleInfoSuperBossStatusComponent_c *v17; // x8
  struct TitleInfoSuperBossStatusComponent_StaticFields *v18; // x9

  if ( (byte_4350333 & 1) == 0 )
  {
    sub_B70694(&TitleInfoSuperBossStatusComponent_TypeInfo);
    sub_B70694(&StringLiteral_18881/*"event_superboss_status_win_"*/);
    sub_B70694(&StringLiteral_18880/*"event_superboss_status_battle_"*/);
    byte_4350333 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)TitleInfoSuperBossStatusComponent_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_18880/*"event_superboss_status_battle_"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_18880/*"event_superboss_status_battle_"*/;
  sub_B70630(static_fields, v8, v1, v2, v3, v4, v5, v6);
  v9 = TitleInfoSuperBossStatusComponent_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_18881/*"event_superboss_status_win_"*/;
  v9->SUPERBOSS_ICON_SPNAME_PREFIX_WIN = (struct System_String_o *)StringLiteral_18881/*"event_superboss_status_win_"*/;
  sub_B70630((BattleServantConfConponent_o *)&v9->SUPERBOSS_ICON_SPNAME_PREFIX_WIN, v10, v11, v12, v13, v14, v15, v16);
  v17 = TitleInfoSuperBossStatusComponent_TypeInfo;
  v18 = TitleInfoSuperBossStatusComponent_TypeInfo->static_fields;
  *(_QWORD *)&v18->FRAME_ANIM_OUT_POS_DELTA.fields.x = 3263954944LL;
  v18->FRAME_ANIM_OUT_POS_DELTA.fields.z = 0.0;
  v17->static_fields->FRAME_ANIM_DURATION = 0.3;
  v17->static_fields->ENTRY_ANIM_DELAY = 0.5;
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
  TitleInfoSuperBossStatusComponent_c *v3; // x0
  __int64 v4; // x8
  System_String_o *SUPERBOSS_ICON_SPNAME_PREFIX_WIN; // x20
  System_String_o *v6; // x0
  System_String_o *v7; // x0
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x2

  if ( (byte_4350330 & 1) == 0 )
  {
    sub_B70694(&TitleInfoSuperBossStatusComponent_TypeInfo);
    byte_4350330 = 1;
  }
  v3 = TitleInfoSuperBossStatusComponent_TypeInfo;
  if ( (BYTE3(TitleInfoSuperBossStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoSuperBossStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossStatusComponent_TypeInfo);
  }
  v4 = *(_QWORD *)&this->fields.inPos.fields.x;
  if ( !v4 )
    sub_B7076C(v3, method);
  SUPERBOSS_ICON_SPNAME_PREFIX_WIN = TitleInfoSuperBossStatusComponent_TypeInfo->static_fields->SUPERBOSS_ICON_SPNAME_PREFIX_WIN;
  v6 = System_Int32__ToString((int)v4 + 56, 0LL);
  v7 = System_String__Concat_44758168(SUPERBOSS_ICON_SPNAME_PREFIX_WIN, v6, 0LL);
  TitleInfoSuperBossStatusComponent__SetBossIcon(this, v7, v8);
  TitleInfoSuperBossStatusComponent__FrameIn(this, 0LL, v9);
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
  UnityEngine_GameObject_o *gameObject; // x21
  TitleInfoSuperBossStatusComponent_c *v6; // x8
  TweenWidth_o *v7; // x0
  __int64 v8; // x1
  int clickCallBack_high; // w9
  TweenWidth_o *v10; // x21
  __int64 v11; // x8
  float y; // w9
  System_Int32_array **v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  UnityEngine_GameObject_o *v26; // x0

  if ( (byte_4350331 & 1) == 0 )
  {
    sub_B70694(&TitleInfoSuperBossStatusComponent_TypeInfo);
    sub_B70694(&Method_UITweener_Begin_TweenAlpha___);
    sub_B70694(&Method_UITweener_Begin_TweenPosition___);
    byte_4350331 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v6 = TitleInfoSuperBossStatusComponent_TypeInfo;
  if ( (BYTE3(TitleInfoSuperBossStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoSuperBossStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossStatusComponent_TypeInfo);
    v6 = TitleInfoSuperBossStatusComponent_TypeInfo;
  }
  v7 = UITweener__Begin_TweenWidth_(
         gameObject,
         v6->static_fields->FRAME_ANIM_DURATION,
         (const MethodInfo_1D645B8 *)Method_UITweener_Begin_TweenPosition___);
  if ( !v7 )
    goto LABEL_10;
  clickCallBack_high = HIDWORD(this->fields.clickCallBack);
  v10 = v7;
  *(_QWORD *)&v7->fields.from = *(_QWORD *)&this->fields.outPos.fields.z;
  *(_DWORD *)&v7->fields.updateTable = clickCallBack_high;
  v11 = *(_QWORD *)&this->fields.inPos.fields.z;
  y = this->fields.outPos.fields.y;
  v7->fields.style = 6;
  *(_QWORD *)(&v7->fields.updateTable + 4) = v11;
  *((float *)&v7->fields.mWidget + 1) = y;
  v13 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v10->fields.eventReceiver = (struct UnityEngine_GameObject_o *)v13;
  sub_B70630((BattleServantConfConponent_o *)&v10->fields.eventReceiver, v13, v14, v15, v16, v17, v18, v19);
  v10->fields.callWhenFinished = callFinished;
  sub_B70630(
    (BattleServantConfConponent_o *)&v10->fields.callWhenFinished,
    (System_Int32_array **)callFinished,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v7 = *(TweenWidth_o **)&this->fields.bossGridPosition.fields.x;
  if ( !v7
    || (v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v7, 0LL),
        (v7 = UITweener__Begin_TweenWidth_(
                v26,
                TitleInfoSuperBossStatusComponent_TypeInfo->static_fields->FRAME_ANIM_DURATION,
                (const MethodInfo_1D645B8 *)Method_UITweener_Begin_TweenAlpha___)) == 0LL) )
  {
LABEL_10:
    sub_B7076C(v7, v8);
  }
  v7->fields.style = 6;
  *(_QWORD *)&v7->fields.from = 0x3F80000000000000LL;
}


void __fastcall TitleInfoSuperBossStatusComponent__FrameOut(
        TitleInfoSuperBossStatusComponent_o *this,
        System_String_o *callFinished,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x21
  TitleInfoSuperBossStatusComponent_c *v6; // x8
  TweenWidth_o *v7; // x0
  __int64 v8; // x1
  float y; // w9
  TweenWidth_o *v10; // x21
  __int64 v11; // x8
  int clickCallBack_high; // w9
  System_Int32_array **v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  UnityEngine_GameObject_o *v26; // x0

  if ( (byte_4350332 & 1) == 0 )
  {
    sub_B70694(&TitleInfoSuperBossStatusComponent_TypeInfo);
    sub_B70694(&Method_UITweener_Begin_TweenAlpha___);
    sub_B70694(&Method_UITweener_Begin_TweenPosition___);
    byte_4350332 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v6 = TitleInfoSuperBossStatusComponent_TypeInfo;
  if ( (BYTE3(TitleInfoSuperBossStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoSuperBossStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossStatusComponent_TypeInfo);
    v6 = TitleInfoSuperBossStatusComponent_TypeInfo;
  }
  v7 = UITweener__Begin_TweenWidth_(
         gameObject,
         v6->static_fields->FRAME_ANIM_DURATION,
         (const MethodInfo_1D645B8 *)Method_UITweener_Begin_TweenPosition___);
  if ( !v7 )
    goto LABEL_10;
  y = this->fields.outPos.fields.y;
  v10 = v7;
  *(_QWORD *)&v7->fields.from = *(_QWORD *)&this->fields.inPos.fields.z;
  *(float *)&v7->fields.updateTable = y;
  v11 = *(_QWORD *)&this->fields.outPos.fields.z;
  clickCallBack_high = HIDWORD(this->fields.clickCallBack);
  v7->fields.style = 2;
  *(_QWORD *)(&v7->fields.updateTable + 4) = v11;
  HIDWORD(v7->fields.mWidget) = clickCallBack_high;
  v13 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v10->fields.eventReceiver = (struct UnityEngine_GameObject_o *)v13;
  sub_B70630((BattleServantConfConponent_o *)&v10->fields.eventReceiver, v13, v14, v15, v16, v17, v18, v19);
  v10->fields.callWhenFinished = callFinished;
  sub_B70630(
    (BattleServantConfConponent_o *)&v10->fields.callWhenFinished,
    (System_Int32_array **)callFinished,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v7 = *(TweenWidth_o **)&this->fields.bossGridPosition.fields.x;
  if ( !v7
    || (v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v7, 0LL),
        (v7 = UITweener__Begin_TweenWidth_(
                v26,
                TitleInfoSuperBossStatusComponent_TypeInfo->static_fields->FRAME_ANIM_DURATION,
                (const MethodInfo_1D645B8 *)Method_UITweener_Begin_TweenAlpha___)) == 0LL) )
  {
LABEL_10:
    sub_B7076C(v7, v8);
  }
  v7->fields.style = 2;
  *(_QWORD *)&v7->fields.from = 1065353216LL;
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
  UnityEngine_Behaviour_o *v6; // x0
  __int64 v7; // x1

  if ( (byte_435032A & 1) == 0 )
  {
    sub_B70694(&AtlasManager_TypeInfo);
    byte_435032A = 1;
  }
  v5 = *(UISprite_o **)&this->fields.bossGridPosition.fields.x;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  v6 = (UnityEngine_Behaviour_o *)AtlasManager__SetEventUI(v5, spName, 0LL);
  if ( !v5 )
    goto LABEL_12;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v5, (unsigned __int8)v6 & 1, 0LL);
  v6 = *(UnityEngine_Behaviour_o **)&this->fields.bossGridPosition.fields.x;
  if ( !v6 )
    goto LABEL_12;
  if ( UnityEngine_Behaviour__get_enabled(v6, 0LL) )
  {
    v6 = *(UnityEngine_Behaviour_o **)&this->fields.bossGridPosition.fields.x;
    if ( v6 )
    {
      ((void (__fastcall *)(UnityEngine_Behaviour_o *, void *))v6->klass[2]._1.typeMetadataHandle)(
        v6,
        v6->klass[2]._1.interopData);
      return;
    }
LABEL_12:
    sub_B7076C(v6, v7);
  }
}


void __fastcall TitleInfoSuperBossStatusComponent__SetClearAnim(
        TitleInfoSuperBossStatusComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  __int64 v5; // x8
  System_String_o *SUPERBOSS_ICON_SPNAME_PREFIX_BATTLE; // x20
  System_String_o *v7; // x0
  System_String_o *v8; // x1
  const MethodInfo *v9; // x2

  if ( (byte_435032E & 1) == 0 )
  {
    sub_B70694(&TitleInfoSuperBossStatusComponent_TypeInfo);
    byte_435032E = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = (UnityEngine_GameObject_o *)TitleInfoSuperBossStatusComponent_TypeInfo;
  if ( (BYTE3(TitleInfoSuperBossStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoSuperBossStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossStatusComponent_TypeInfo);
  }
  v5 = *(_QWORD *)&this->fields.inPos.fields.x;
  if ( !v5 )
LABEL_9:
    sub_B7076C(gameObject, v4);
  SUPERBOSS_ICON_SPNAME_PREFIX_BATTLE = TitleInfoSuperBossStatusComponent_TypeInfo->static_fields->SUPERBOSS_ICON_SPNAME_PREFIX_BATTLE;
  v7 = System_Int32__ToString((int)v5 + 56, 0LL);
  v8 = System_String__Concat_44758168(SUPERBOSS_ICON_SPNAME_PREFIX_BATTLE, v7, 0LL);
  TitleInfoSuperBossStatusComponent__SetBossIcon(this, v8, v9);
}


void __fastcall TitleInfoSuperBossStatusComponent__SetClickCallBack(
        TitleInfoSuperBossStatusComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  *(_QWORD *)&this->fields.offsetY = callback;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.offsetY,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoSuperBossStatusComponent__SetEntryAnim(
        TitleInfoSuperBossStatusComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  float v5; // s1
  float v6; // s0
  float v7; // s4
  TitleInfoSuperBossStatusComponent_c *v8; // x0
  float32x2_t *static_fields; // x8
  float32x2_t v10; // d0
  float v11; // s2
  float v12; // [xsp+0h] [xbp-20h]

  if ( (byte_435032D & 1) == 0 )
  {
    sub_B70694(&TitleInfoSuperBossStatusComponent_TypeInfo);
    sub_B70694(&StringLiteral_6123/*"EntryAnim"*/);
    byte_435032D = 1;
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
    v12 = v5 + v6;
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossStatusComponent_TypeInfo);
    v7 = v12;
    v8 = TitleInfoSuperBossStatusComponent_TypeInfo;
  }
  static_fields = (float32x2_t *)v8->static_fields;
  v10.n64_u32[0] = 0;
  v10.n64_f32[1] = v7;
  v11 = static_fields[3].n64_f32[0];
  *(float32x2_t *)&this->fields.outPos.fields.z = vadd_f32(v10, static_fields[2]);
  *((float *)&this->fields.clickCallBack + 1) = v11 + 0.0;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(
          transform,
          *(UnityEngine_Vector3_o *)&this->fields.outPos.fields.z,
          0LL),
        (transform = *(UnityEngine_Transform_o **)&this->fields.bossGridPosition.fields.x) == 0LL) )
  {
LABEL_10:
    sub_B7076C(transform, v4);
  }
  (*(void (__fastcall **)(UnityEngine_Transform_o *, Il2CppClass *, float))&transform->klass[1]._1.this_arg.bits)(
    transform,
    transform->klass[1]._1.element_class,
    0.0);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6123/*"EntryAnim"*/,
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
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  struct UnityEngine_Vector3_o *p_inPos; // x21
  UnityEngine_Object_o *gameObject; // x0
  __int64 v13; // x1
  UnityEngine_Object_o *v14; // x20
  __int64 v15; // x8
  System_String_o *v16; // x21
  System_String_o *v17; // x0
  System_String_o *v18; // x0

  *(_QWORD *)&this->fields.inPos.fields.x = eventSuperBossEntity;
  p_inPos = &this->fields.inPos;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.inPos,
    (System_Int32_array **)eventSuperBossEntity,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7,
    v8);
  *(float *)&this[1].klass = offsetY;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (v14 = gameObject,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Object__get_name(gameObject, 0LL),
        (v15 = *(_QWORD *)&p_inPos->fields.x) == 0) )
  {
    sub_B7076C(gameObject, v13);
  }
  v16 = (System_String_o *)gameObject;
  v17 = System_Int32__ToString((int)v15 + 20, 0LL);
  v18 = System_String__Concat_44758168(v16, v17, 0LL);
  UnityEngine_Object__set_name(v14, v18, 0LL);
  ((void (__fastcall *)(TitleInfoSuperBossStatusComponent_o *, Il2CppMethodPointer))this->klass->vtable._5_UpdateDisp.method)(
    this,
    this->klass->vtable._6_IsEventRaidBoss.methodPtr);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoSuperBossStatusComponent__StartClearAnim(
        TitleInfoSuperBossStatusComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  float v6; // s1
  float v7; // s0
  float v8; // s4
  TitleInfoSuperBossStatusComponent_c *v9; // x0
  float32x2_t *static_fields; // x8
  float32x2_t v11; // d0
  float v12; // s2
  float v13; // [xsp+0h] [xbp-20h]

  if ( (byte_435032F & 1) == 0 )
  {
    sub_B70694(&TitleInfoSuperBossStatusComponent_TypeInfo);
    sub_B70694(&StringLiteral_2004/*"AnimFrameOutEnd"*/);
    byte_435032F = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_B7076C(0LL, v4);
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
  TitleInfoSuperBossStatusComponent__FrameOut(this, (System_String_o *)StringLiteral_2004/*"AnimFrameOutEnd"*/, v5);
}


void __fastcall TitleInfoSuperBossStatusComponent__UpdateDisp(
        TitleInfoSuperBossStatusComponent_o *this,
        const MethodInfo *method)
{
  EventSuperBossEntity_o *v3; // x0
  bool IsEncounted; // w20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  TitleInfoSuperBossStatusComponent_c *v7; // x8
  System_String_o **p_SUPERBOSS_ICON_SPNAME_PREFIX_WIN; // x8
  __int64 v9; // x9
  System_String_o *v10; // x20
  System_String_o *v11; // x0
  System_String_o *v12; // x0
  const MethodInfo *v13; // x2
  UnityEngine_Collider_o *superBossEntity; // x20
  __int64 v15; // x8
  __int64 v16; // x8
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_435032B & 1) == 0 )
  {
    sub_B70694(&TitleInfoSuperBossStatusComponent_TypeInfo);
    byte_435032B = 1;
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
    gameObject = *(UnityEngine_GameObject_o **)&this->fields.inPos.fields.x;
    if ( !gameObject )
      goto LABEL_26;
    gameObject = (UnityEngine_GameObject_o *)EventSuperBossEntity__IsCleard((EventSuperBossEntity_o *)gameObject, 0LL);
    v7 = TitleInfoSuperBossStatusComponent_TypeInfo;
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      if ( (WORD1(TitleInfoSuperBossStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !TitleInfoSuperBossStatusComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoSuperBossStatusComponent_TypeInfo);
        v7 = TitleInfoSuperBossStatusComponent_TypeInfo;
      }
      p_SUPERBOSS_ICON_SPNAME_PREFIX_WIN = &v7->static_fields->SUPERBOSS_ICON_SPNAME_PREFIX_WIN;
    }
    else
    {
      if ( (WORD1(TitleInfoSuperBossStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !TitleInfoSuperBossStatusComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoSuperBossStatusComponent_TypeInfo);
        v7 = TitleInfoSuperBossStatusComponent_TypeInfo;
      }
      p_SUPERBOSS_ICON_SPNAME_PREFIX_WIN = &v7->static_fields->SUPERBOSS_ICON_SPNAME_PREFIX_BATTLE;
    }
    v9 = *(_QWORD *)&this->fields.inPos.fields.x;
    if ( !v9 )
      goto LABEL_26;
    v10 = *p_SUPERBOSS_ICON_SPNAME_PREFIX_WIN;
    v11 = System_Int32__ToString((int)v9 + 56, 0LL);
    v12 = System_String__Concat_44758168(v10, v11, 0LL);
    TitleInfoSuperBossStatusComponent__SetBossIcon(this, v12, v13);
    gameObject = *(UnityEngine_GameObject_o **)&this->fields.bossGridPosition.fields.x;
    if ( !gameObject )
      goto LABEL_26;
    superBossEntity = (UnityEngine_Collider_o *)this->fields.superBossEntity;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Behaviour__get_enabled(
                                               (UnityEngine_Behaviour_o *)gameObject,
                                               0LL);
    if ( !superBossEntity )
      goto LABEL_26;
    UnityEngine_Collider__set_enabled(superBossEntity, (unsigned __int8)gameObject & 1, 0LL);
    v15 = *(_QWORD *)&this->fields.bossGridPosition.fields.x;
    if ( !v15
      || (gameObject = (UnityEngine_GameObject_o *)this->fields.superBossEntity) == 0LL
      || (v17.fields.z = 0.0,
          v17.fields.x = (float)*(int *)(v15 + 160) * 0.5,
          v17.fields.y = 0.0,
          UnityEngine_BoxCollider__set_center((UnityEngine_BoxCollider_o *)gameObject, v17, 0LL),
          (v16 = *(_QWORD *)&this->fields.bossGridPosition.fields.x) == 0)
      || (gameObject = (UnityEngine_GameObject_o *)this->fields.superBossEntity) == 0LL )
    {
LABEL_26:
      sub_B7076C(gameObject, v6);
    }
    v18.fields.y = (float)*(int *)(v16 + 164);
    v18.fields.x = (float)*(int *)(v16 + 160);
    v18.fields.z = 0.0;
    UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)gameObject, v18, 0LL);
  }
}


void __fastcall TitleInfoSuperBossStatusComponent__onClick(
        TitleInfoSuperBossStatusComponent_o *this,
        const MethodInfo *method)
{
  EventSuperBossEntity_o *v3; // x0

  if ( (byte_435032C & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    byte_435032C = 1;
  }
  if ( !*(_QWORD *)&this->fields.offsetY )
    goto LABEL_6;
  v3 = *(EventSuperBossEntity_o **)&this->fields.inPos.fields.x;
  if ( !v3 )
    sub_B7076C(0LL, method);
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