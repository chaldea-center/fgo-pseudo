void __fastcall TitleInfoSuperBossStatusComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v11; // x1
  struct TitleInfoSuperBossStatusComponent_StaticFields *v12; // x0
  System_Int32_array **v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  TitleInfoSuperBossStatusComponent_c *v20; // x8
  struct TitleInfoSuperBossStatusComponent_StaticFields *v21; // x9

  if ( (byte_42130E3 & 1) == 0 )
  {
    sub_B0D8A4(&TitleInfoSuperBossStatusComponent_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_18658/*"event_superboss_status_win_"*/, v8);
    sub_B0D8A4(&StringLiteral_18657/*"event_superboss_status_battle_"*/, v9);
    byte_42130E3 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)TitleInfoSuperBossStatusComponent_TypeInfo->static_fields;
  v11 = (System_Int32_array **)StringLiteral_18657/*"event_superboss_status_battle_"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_18657/*"event_superboss_status_battle_"*/;
  sub_B0D840(static_fields, v11, v2, v3, v4, v5, v6, v7);
  v12 = TitleInfoSuperBossStatusComponent_TypeInfo->static_fields;
  v13 = (System_Int32_array **)StringLiteral_18658/*"event_superboss_status_win_"*/;
  v12->SUPERBOSS_ICON_SPNAME_PREFIX_WIN = (struct System_String_o *)StringLiteral_18658/*"event_superboss_status_win_"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v12->SUPERBOSS_ICON_SPNAME_PREFIX_WIN, v13, v14, v15, v16, v17, v18, v19);
  v20 = TitleInfoSuperBossStatusComponent_TypeInfo;
  v21 = TitleInfoSuperBossStatusComponent_TypeInfo->static_fields;
  *(_QWORD *)&v21->FRAME_ANIM_OUT_POS_DELTA.fields.x = 3263954944LL;
  v21->FRAME_ANIM_OUT_POS_DELTA.fields.z = 0.0;
  v20->static_fields->FRAME_ANIM_DURATION = 0.3;
  v20->static_fields->ENTRY_ANIM_DELAY = 0.5;
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

  if ( (byte_42130E0 & 1) == 0 )
  {
    sub_B0D8A4(&TitleInfoSuperBossStatusComponent_TypeInfo, method);
    byte_42130E0 = 1;
  }
  v3 = TitleInfoSuperBossStatusComponent_TypeInfo;
  if ( (BYTE3(TitleInfoSuperBossStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoSuperBossStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossStatusComponent_TypeInfo);
  }
  v4 = *(_QWORD *)&this->fields.inPos.fields.x;
  if ( !v4 )
    sub_B0D97C(v3);
  SUPERBOSS_ICON_SPNAME_PREFIX_WIN = TitleInfoSuperBossStatusComponent_TypeInfo->static_fields->SUPERBOSS_ICON_SPNAME_PREFIX_WIN;
  v6 = System_Int32__ToString((int)v4 + 56, 0LL);
  v7 = System_String__Concat_43849904(SUPERBOSS_ICON_SPNAME_PREFIX_WIN, v6, 0LL);
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
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_GameObject_o *gameObject; // x21
  TitleInfoSuperBossStatusComponent_c *v8; // x8
  TweenWidth_o *v9; // x0
  int clickCallBack_high; // w9
  TweenWidth_o *v11; // x21
  __int64 v12; // x8
  float y; // w9
  System_Int32_array **v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  UnityEngine_GameObject_o *v27; // x0

  if ( (byte_42130E1 & 1) == 0 )
  {
    sub_B0D8A4(&TitleInfoSuperBossStatusComponent_TypeInfo, callFinished);
    sub_B0D8A4(&Method_UITweener_Begin_TweenAlpha___, v5);
    sub_B0D8A4(&Method_UITweener_Begin_TweenPosition___, v6);
    byte_42130E1 = 1;
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
         (const MethodInfo_205679C *)Method_UITweener_Begin_TweenPosition___);
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
  v14 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v11->fields.eventReceiver = (struct UnityEngine_GameObject_o *)v14;
  sub_B0D840((BattleServantConfConponent_o *)&v11->fields.eventReceiver, v14, v15, v16, v17, v18, v19, v20);
  v11->fields.callWhenFinished = callFinished;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v11->fields.callWhenFinished,
    (System_Int32_array **)callFinished,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  v9 = *(TweenWidth_o **)&this->fields.bossGridPosition.fields.x;
  if ( !v9
    || (v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v9, 0LL),
        (v9 = UITweener__Begin_TweenWidth_(
                v27,
                TitleInfoSuperBossStatusComponent_TypeInfo->static_fields->FRAME_ANIM_DURATION,
                (const MethodInfo_205679C *)Method_UITweener_Begin_TweenAlpha___)) == 0LL) )
  {
LABEL_10:
    sub_B0D97C(v9);
  }
  v9->fields.style = 6;
  *(_QWORD *)&v9->fields.from = 0x3F80000000000000LL;
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
  System_Int32_array **v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  UnityEngine_GameObject_o *v27; // x0

  if ( (byte_42130E2 & 1) == 0 )
  {
    sub_B0D8A4(&TitleInfoSuperBossStatusComponent_TypeInfo, callFinished);
    sub_B0D8A4(&Method_UITweener_Begin_TweenAlpha___, v5);
    sub_B0D8A4(&Method_UITweener_Begin_TweenPosition___, v6);
    byte_42130E2 = 1;
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
         (const MethodInfo_205679C *)Method_UITweener_Begin_TweenPosition___);
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
  v14 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v11->fields.eventReceiver = (struct UnityEngine_GameObject_o *)v14;
  sub_B0D840((BattleServantConfConponent_o *)&v11->fields.eventReceiver, v14, v15, v16, v17, v18, v19, v20);
  v11->fields.callWhenFinished = callFinished;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v11->fields.callWhenFinished,
    (System_Int32_array **)callFinished,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  v9 = *(TweenWidth_o **)&this->fields.bossGridPosition.fields.x;
  if ( !v9
    || (v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v9, 0LL),
        (v9 = UITweener__Begin_TweenWidth_(
                v27,
                TitleInfoSuperBossStatusComponent_TypeInfo->static_fields->FRAME_ANIM_DURATION,
                (const MethodInfo_205679C *)Method_UITweener_Begin_TweenAlpha___)) == 0LL) )
  {
LABEL_10:
    sub_B0D97C(v9);
  }
  v9->fields.style = 2;
  *(_QWORD *)&v9->fields.from = 1065353216LL;
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

  if ( (byte_42130DA & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, spName);
    byte_42130DA = 1;
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
    sub_B0D97C(v6);
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

  if ( (byte_42130DE & 1) == 0 )
  {
    sub_B0D8A4(&TitleInfoSuperBossStatusComponent_TypeInfo, method);
    byte_42130DE = 1;
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
  v4 = *(_QWORD *)&this->fields.inPos.fields.x;
  if ( !v4 )
LABEL_9:
    sub_B0D97C(gameObject);
  SUPERBOSS_ICON_SPNAME_PREFIX_BATTLE = TitleInfoSuperBossStatusComponent_TypeInfo->static_fields->SUPERBOSS_ICON_SPNAME_PREFIX_BATTLE;
  v6 = System_Int32__ToString((int)v4 + 56, 0LL);
  v7 = System_String__Concat_43849904(SUPERBOSS_ICON_SPNAME_PREFIX_BATTLE, v6, 0LL);
  TitleInfoSuperBossStatusComponent__SetBossIcon(this, v7, v8);
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
  sub_B0D840(
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
  __int64 v3; // x1
  UnityEngine_Transform_o *transform; // x0
  float v5; // s1
  float v6; // s0
  float v7; // s4
  TitleInfoSuperBossStatusComponent_c *v8; // x0
  float32x2_t *static_fields; // x8
  float32x2_t v10; // d0
  float v11; // s2
  float v12; // [xsp+0h] [xbp-20h]

  if ( (byte_42130DD & 1) == 0 )
  {
    sub_B0D8A4(&TitleInfoSuperBossStatusComponent_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_6048/*"EntryAnim"*/, v3);
    byte_42130DD = 1;
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
    sub_B0D97C(transform);
  }
  (*(void (__fastcall **)(UnityEngine_Transform_o *, Il2CppClass *, float))&transform->klass[1]._1.this_arg.bits)(
    transform,
    transform->klass[1]._1.element_class,
    0.0);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6048/*"EntryAnim"*/,
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
  UnityEngine_Object_o *v13; // x20
  __int64 v14; // x8
  System_String_o *v15; // x21
  System_String_o *v16; // x0
  System_String_o *v17; // x0

  *(_QWORD *)&this->fields.inPos.fields.x = eventSuperBossEntity;
  p_inPos = &this->fields.inPos;
  sub_B0D840(
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
    || (v13 = gameObject,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Object__get_name(gameObject, 0LL),
        (v14 = *(_QWORD *)&p_inPos->fields.x) == 0) )
  {
    sub_B0D97C(gameObject);
  }
  v15 = (System_String_o *)gameObject;
  v16 = System_Int32__ToString((int)v14 + 20, 0LL);
  v17 = System_String__Concat_43849904(v15, v16, 0LL);
  UnityEngine_Object__set_name(v13, v17, 0LL);
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

  if ( (byte_42130DF & 1) == 0 )
  {
    sub_B0D8A4(&TitleInfoSuperBossStatusComponent_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_1980/*"AnimFrameOutEnd"*/, v3);
    byte_42130DF = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_B0D97C(0LL);
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
  TitleInfoSuperBossStatusComponent__FrameOut(this, (System_String_o *)StringLiteral_1980/*"AnimFrameOutEnd"*/, v5);
}


void __fastcall TitleInfoSuperBossStatusComponent__UpdateDisp(
        TitleInfoSuperBossStatusComponent_o *this,
        const MethodInfo *method)
{
  EventSuperBossEntity_o *v3; // x0
  bool IsEncounted; // w20
  UnityEngine_GameObject_o *gameObject; // x0
  TitleInfoSuperBossStatusComponent_c *v6; // x8
  System_String_o **p_SUPERBOSS_ICON_SPNAME_PREFIX_WIN; // x8
  __int64 v8; // x9
  System_String_o *v9; // x20
  System_String_o *v10; // x0
  System_String_o *v11; // x0
  const MethodInfo *v12; // x2
  UnityEngine_Collider_o *superBossEntity; // x20
  __int64 v14; // x8
  __int64 v15; // x8
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42130DB & 1) == 0 )
  {
    sub_B0D8A4(&TitleInfoSuperBossStatusComponent_TypeInfo, method);
    byte_42130DB = 1;
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
    v6 = TitleInfoSuperBossStatusComponent_TypeInfo;
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      if ( (WORD1(TitleInfoSuperBossStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !TitleInfoSuperBossStatusComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoSuperBossStatusComponent_TypeInfo);
        v6 = TitleInfoSuperBossStatusComponent_TypeInfo;
      }
      p_SUPERBOSS_ICON_SPNAME_PREFIX_WIN = &v6->static_fields->SUPERBOSS_ICON_SPNAME_PREFIX_WIN;
    }
    else
    {
      if ( (WORD1(TitleInfoSuperBossStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !TitleInfoSuperBossStatusComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoSuperBossStatusComponent_TypeInfo);
        v6 = TitleInfoSuperBossStatusComponent_TypeInfo;
      }
      p_SUPERBOSS_ICON_SPNAME_PREFIX_WIN = &v6->static_fields->SUPERBOSS_ICON_SPNAME_PREFIX_BATTLE;
    }
    v8 = *(_QWORD *)&this->fields.inPos.fields.x;
    if ( !v8 )
      goto LABEL_26;
    v9 = *p_SUPERBOSS_ICON_SPNAME_PREFIX_WIN;
    v10 = System_Int32__ToString((int)v8 + 56, 0LL);
    v11 = System_String__Concat_43849904(v9, v10, 0LL);
    TitleInfoSuperBossStatusComponent__SetBossIcon(this, v11, v12);
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
    v14 = *(_QWORD *)&this->fields.bossGridPosition.fields.x;
    if ( !v14
      || (gameObject = (UnityEngine_GameObject_o *)this->fields.superBossEntity) == 0LL
      || (v16.fields.z = 0.0,
          v16.fields.x = (float)*(int *)(v14 + 160) * 0.5,
          v16.fields.y = 0.0,
          UnityEngine_BoxCollider__set_center((UnityEngine_BoxCollider_o *)gameObject, v16, 0LL),
          (v15 = *(_QWORD *)&this->fields.bossGridPosition.fields.x) == 0)
      || (gameObject = (UnityEngine_GameObject_o *)this->fields.superBossEntity) == 0LL )
    {
LABEL_26:
      sub_B0D97C(gameObject);
    }
    v17.fields.y = (float)*(int *)(v15 + 164);
    v17.fields.x = (float)*(int *)(v15 + 160);
    v17.fields.z = 0.0;
    UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)gameObject, v17, 0LL);
  }
}


void __fastcall TitleInfoSuperBossStatusComponent__onClick(
        TitleInfoSuperBossStatusComponent_o *this,
        const MethodInfo *method)
{
  EventSuperBossEntity_o *v3; // x0

  if ( (byte_42130DC & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_42130DC = 1;
  }
  if ( !*(_QWORD *)&this->fields.offsetY )
    goto LABEL_6;
  v3 = *(EventSuperBossEntity_o **)&this->fields.inPos.fields.x;
  if ( !v3 )
    sub_B0D97C(0LL);
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