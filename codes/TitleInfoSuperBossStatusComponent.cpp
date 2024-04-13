void __fastcall TitleInfoSuperBossStatusComponent___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v15; // x1
  struct TitleInfoSuperBossStatusComponent_StaticFields *v16; // x0
  System_Int32_array **v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  TitleInfoSuperBossStatusComponent_c *v24; // x8
  struct TitleInfoSuperBossStatusComponent_StaticFields *v25; // x9

  if ( (byte_42E6C89 & 1) == 0 )
  {
    sub_B5D5C4(&TitleInfoSuperBossStatusComponent_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_18831/*"event_superboss_status_win_"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_18830/*"event_superboss_status_battle_"*/, v11, v12, v13);
    byte_42E6C89 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)TitleInfoSuperBossStatusComponent_TypeInfo->static_fields;
  v15 = (System_Int32_array **)StringLiteral_18830/*"event_superboss_status_battle_"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_18830/*"event_superboss_status_battle_"*/;
  sub_B5D560(static_fields, v15, v2, v3, v4, v5, v6, v7);
  v16 = TitleInfoSuperBossStatusComponent_TypeInfo->static_fields;
  v17 = (System_Int32_array **)StringLiteral_18831/*"event_superboss_status_win_"*/;
  v16->SUPERBOSS_ICON_SPNAME_PREFIX_WIN = (struct System_String_o *)StringLiteral_18831/*"event_superboss_status_win_"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v16->SUPERBOSS_ICON_SPNAME_PREFIX_WIN, v17, v18, v19, v20, v21, v22, v23);
  v24 = TitleInfoSuperBossStatusComponent_TypeInfo;
  v25 = TitleInfoSuperBossStatusComponent_TypeInfo->static_fields;
  *(_QWORD *)&v25->FRAME_ANIM_OUT_POS_DELTA.fields.x = 3263954944LL;
  v25->FRAME_ANIM_OUT_POS_DELTA.fields.z = 0.0;
  v24->static_fields->FRAME_ANIM_DURATION = 0.3;
  v24->static_fields->ENTRY_ANIM_DELAY = 0.5;
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
  int v2; // w2
  __int64 v3; // x3
  TitleInfoSuperBossStatusComponent_c *v5; // x0
  __int64 v6; // x8
  System_String_o *SUPERBOSS_ICON_SPNAME_PREFIX_WIN; // x20
  System_String_o *v8; // x0
  System_String_o *v9; // x0
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x2

  if ( (byte_42E6C86 & 1) == 0 )
  {
    sub_B5D5C4(&TitleInfoSuperBossStatusComponent_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6C86 = 1;
  }
  v5 = TitleInfoSuperBossStatusComponent_TypeInfo;
  if ( (BYTE3(TitleInfoSuperBossStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoSuperBossStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossStatusComponent_TypeInfo);
  }
  v6 = *(_QWORD *)&this->fields.inPos.fields.x;
  if ( !v6 )
    sub_B5D69C(v5, method);
  SUPERBOSS_ICON_SPNAME_PREFIX_WIN = TitleInfoSuperBossStatusComponent_TypeInfo->static_fields->SUPERBOSS_ICON_SPNAME_PREFIX_WIN;
  v8 = System_Int32__ToString((int)v6 + 56, 0LL);
  v9 = System_String__Concat_44577788(SUPERBOSS_ICON_SPNAME_PREFIX_WIN, v8, 0LL);
  TitleInfoSuperBossStatusComponent__SetBossIcon(this, v9, v10);
  TitleInfoSuperBossStatusComponent__FrameIn(this, 0LL, v11);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  UnityEngine_GameObject_o *gameObject; // x21
  TitleInfoSuperBossStatusComponent_c *v13; // x8
  TweenWidth_o *v14; // x0
  __int64 v15; // x1
  int clickCallBack_high; // w9
  TweenWidth_o *v17; // x21
  __int64 v18; // x8
  float y; // w9
  System_Int32_array **v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  UnityEngine_GameObject_o *v33; // x0

  if ( (byte_42E6C87 & 1) == 0 )
  {
    sub_B5D5C4(&TitleInfoSuperBossStatusComponent_TypeInfo, (_DWORD)callFinished, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UITweener_Begin_TweenAlpha___, v6, v7, v8);
    sub_B5D5C4(&Method_UITweener_Begin_TweenPosition___, v9, v10, v11);
    byte_42E6C87 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v13 = TitleInfoSuperBossStatusComponent_TypeInfo;
  if ( (BYTE3(TitleInfoSuperBossStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoSuperBossStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossStatusComponent_TypeInfo);
    v13 = TitleInfoSuperBossStatusComponent_TypeInfo;
  }
  v14 = UITweener__Begin_TweenWidth_(
          gameObject,
          v13->static_fields->FRAME_ANIM_DURATION,
          (const MethodInfo_1E72118 *)Method_UITweener_Begin_TweenPosition___);
  if ( !v14 )
    goto LABEL_10;
  clickCallBack_high = HIDWORD(this->fields.clickCallBack);
  v17 = v14;
  *(_QWORD *)&v14->fields.from = *(_QWORD *)&this->fields.outPos.fields.z;
  *(_DWORD *)&v14->fields.updateTable = clickCallBack_high;
  v18 = *(_QWORD *)&this->fields.inPos.fields.z;
  y = this->fields.outPos.fields.y;
  v14->fields.style = 6;
  *(_QWORD *)(&v14->fields.updateTable + 4) = v18;
  *((float *)&v14->fields.mWidget + 1) = y;
  v20 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v17->fields.eventReceiver = (struct UnityEngine_GameObject_o *)v20;
  sub_B5D560((BattleServantConfConponent_o *)&v17->fields.eventReceiver, v20, v21, v22, v23, v24, v25, v26);
  v17->fields.callWhenFinished = callFinished;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v17->fields.callWhenFinished,
    (System_Int32_array **)callFinished,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  v14 = *(TweenWidth_o **)&this->fields.bossGridPosition.fields.x;
  if ( !v14
    || (v33 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v14, 0LL),
        (v14 = UITweener__Begin_TweenWidth_(
                 v33,
                 TitleInfoSuperBossStatusComponent_TypeInfo->static_fields->FRAME_ANIM_DURATION,
                 (const MethodInfo_1E72118 *)Method_UITweener_Begin_TweenAlpha___)) == 0LL) )
  {
LABEL_10:
    sub_B5D69C(v14, v15);
  }
  v14->fields.style = 6;
  *(_QWORD *)&v14->fields.from = 0x3F80000000000000LL;
}


void __fastcall TitleInfoSuperBossStatusComponent__FrameOut(
        TitleInfoSuperBossStatusComponent_o *this,
        System_String_o *callFinished,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  UnityEngine_GameObject_o *gameObject; // x21
  TitleInfoSuperBossStatusComponent_c *v13; // x8
  TweenWidth_o *v14; // x0
  __int64 v15; // x1
  float y; // w9
  TweenWidth_o *v17; // x21
  __int64 v18; // x8
  int clickCallBack_high; // w9
  System_Int32_array **v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  UnityEngine_GameObject_o *v33; // x0

  if ( (byte_42E6C88 & 1) == 0 )
  {
    sub_B5D5C4(&TitleInfoSuperBossStatusComponent_TypeInfo, (_DWORD)callFinished, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UITweener_Begin_TweenAlpha___, v6, v7, v8);
    sub_B5D5C4(&Method_UITweener_Begin_TweenPosition___, v9, v10, v11);
    byte_42E6C88 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v13 = TitleInfoSuperBossStatusComponent_TypeInfo;
  if ( (BYTE3(TitleInfoSuperBossStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoSuperBossStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossStatusComponent_TypeInfo);
    v13 = TitleInfoSuperBossStatusComponent_TypeInfo;
  }
  v14 = UITweener__Begin_TweenWidth_(
          gameObject,
          v13->static_fields->FRAME_ANIM_DURATION,
          (const MethodInfo_1E72118 *)Method_UITweener_Begin_TweenPosition___);
  if ( !v14 )
    goto LABEL_10;
  y = this->fields.outPos.fields.y;
  v17 = v14;
  *(_QWORD *)&v14->fields.from = *(_QWORD *)&this->fields.inPos.fields.z;
  *(float *)&v14->fields.updateTable = y;
  v18 = *(_QWORD *)&this->fields.outPos.fields.z;
  clickCallBack_high = HIDWORD(this->fields.clickCallBack);
  v14->fields.style = 2;
  *(_QWORD *)(&v14->fields.updateTable + 4) = v18;
  HIDWORD(v14->fields.mWidget) = clickCallBack_high;
  v20 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v17->fields.eventReceiver = (struct UnityEngine_GameObject_o *)v20;
  sub_B5D560((BattleServantConfConponent_o *)&v17->fields.eventReceiver, v20, v21, v22, v23, v24, v25, v26);
  v17->fields.callWhenFinished = callFinished;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v17->fields.callWhenFinished,
    (System_Int32_array **)callFinished,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  v14 = *(TweenWidth_o **)&this->fields.bossGridPosition.fields.x;
  if ( !v14
    || (v33 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v14, 0LL),
        (v14 = UITweener__Begin_TweenWidth_(
                 v33,
                 TitleInfoSuperBossStatusComponent_TypeInfo->static_fields->FRAME_ANIM_DURATION,
                 (const MethodInfo_1E72118 *)Method_UITweener_Begin_TweenAlpha___)) == 0LL) )
  {
LABEL_10:
    sub_B5D69C(v14, v15);
  }
  v14->fields.style = 2;
  *(_QWORD *)&v14->fields.from = 1065353216LL;
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
  __int64 v3; // x3
  UISprite_o *v6; // x21
  UnityEngine_Behaviour_o *v7; // x0
  __int64 v8; // x1

  if ( (byte_42E6C80 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)spName, (_DWORD)method, v3);
    byte_42E6C80 = 1;
  }
  v6 = *(UISprite_o **)&this->fields.bossGridPosition.fields.x;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  v7 = (UnityEngine_Behaviour_o *)AtlasManager__SetEventUI(v6, spName, 0LL);
  if ( !v6 )
    goto LABEL_12;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v6, (unsigned __int8)v7 & 1, 0LL);
  v7 = *(UnityEngine_Behaviour_o **)&this->fields.bossGridPosition.fields.x;
  if ( !v7 )
    goto LABEL_12;
  if ( UnityEngine_Behaviour__get_enabled(v7, 0LL) )
  {
    v7 = *(UnityEngine_Behaviour_o **)&this->fields.bossGridPosition.fields.x;
    if ( v7 )
    {
      ((void (__fastcall *)(UnityEngine_Behaviour_o *, void *))v7->klass[2]._1.typeMetadataHandle)(
        v7,
        v7->klass[2]._1.interopData);
      return;
    }
LABEL_12:
    sub_B5D69C(v7, v8);
  }
}


void __fastcall TitleInfoSuperBossStatusComponent__SetClearAnim(
        TitleInfoSuperBossStatusComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  __int64 v7; // x8
  System_String_o *SUPERBOSS_ICON_SPNAME_PREFIX_BATTLE; // x20
  System_String_o *v9; // x0
  System_String_o *v10; // x1
  const MethodInfo *v11; // x2

  if ( (byte_42E6C84 & 1) == 0 )
  {
    sub_B5D5C4(&TitleInfoSuperBossStatusComponent_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6C84 = 1;
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
  v7 = *(_QWORD *)&this->fields.inPos.fields.x;
  if ( !v7 )
LABEL_9:
    sub_B5D69C(gameObject, v6);
  SUPERBOSS_ICON_SPNAME_PREFIX_BATTLE = TitleInfoSuperBossStatusComponent_TypeInfo->static_fields->SUPERBOSS_ICON_SPNAME_PREFIX_BATTLE;
  v9 = System_Int32__ToString((int)v7 + 56, 0LL);
  v10 = System_String__Concat_44577788(SUPERBOSS_ICON_SPNAME_PREFIX_BATTLE, v9, 0LL);
  TitleInfoSuperBossStatusComponent__SetBossIcon(this, v10, v11);
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
  sub_B5D560(
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Transform_o *transform; // x0
  __int64 v9; // x1
  float v10; // s1
  float v11; // s0
  float v12; // s4
  TitleInfoSuperBossStatusComponent_c *v13; // x0
  float32x2_t *static_fields; // x8
  float32x2_t v15; // d0
  float v16; // s2
  float v17; // [xsp+0h] [xbp-20h]

  if ( (byte_42E6C83 & 1) == 0 )
  {
    sub_B5D5C4(&TitleInfoSuperBossStatusComponent_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_6110/*"EntryAnim"*/, v5, v6, v7);
    byte_42E6C83 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_10;
  *(UnityEngine_Vector3_o *)(&v10 - 1) = UnityEngine_Transform__get_localPosition(transform, 0LL);
  v11 = *(float *)&this[1].klass;
  this->fields.inPos.fields.z = 0.0;
  this->fields.outPos.fields.y = 0.0;
  v12 = v10 + v11;
  this->fields.outPos.fields.x = v10 + v11;
  v13 = TitleInfoSuperBossStatusComponent_TypeInfo;
  if ( (BYTE3(TitleInfoSuperBossStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoSuperBossStatusComponent_TypeInfo->_2.cctor_finished )
  {
    v17 = v10 + v11;
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossStatusComponent_TypeInfo);
    v12 = v17;
    v13 = TitleInfoSuperBossStatusComponent_TypeInfo;
  }
  static_fields = (float32x2_t *)v13->static_fields;
  v15.n64_u32[0] = 0;
  v15.n64_f32[1] = v12;
  v16 = static_fields[3].n64_f32[0];
  *(float32x2_t *)&this->fields.outPos.fields.z = vadd_f32(v15, static_fields[2]);
  *((float *)&this->fields.clickCallBack + 1) = v16 + 0.0;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(
          transform,
          *(UnityEngine_Vector3_o *)&this->fields.outPos.fields.z,
          0LL),
        (transform = *(UnityEngine_Transform_o **)&this->fields.bossGridPosition.fields.x) == 0LL) )
  {
LABEL_10:
    sub_B5D69C(transform, v9);
  }
  (*(void (__fastcall **)(UnityEngine_Transform_o *, Il2CppClass *, float))&transform->klass[1]._1.this_arg.bits)(
    transform,
    transform->klass[1]._1.element_class,
    0.0);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6110/*"EntryAnim"*/,
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
  sub_B5D560(
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
    sub_B5D69C(gameObject, v13);
  }
  v16 = (System_String_o *)gameObject;
  v17 = System_Int32__ToString((int)v15 + 20, 0LL);
  v18 = System_String__Concat_44577788(v16, v17, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Transform_o *transform; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  float v11; // s1
  float v12; // s0
  float v13; // s4
  TitleInfoSuperBossStatusComponent_c *v14; // x0
  float32x2_t *static_fields; // x8
  float32x2_t v16; // d0
  float v17; // s2
  float v18; // [xsp+0h] [xbp-20h]

  if ( (byte_42E6C85 & 1) == 0 )
  {
    sub_B5D5C4(&TitleInfoSuperBossStatusComponent_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_1999/*"AnimFrameOutEnd"*/, v5, v6, v7);
    byte_42E6C85 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_B5D69C(0LL, v9);
  *(UnityEngine_Vector3_o *)(&v11 - 1) = UnityEngine_Transform__get_localPosition(transform, 0LL);
  v12 = *(float *)&this[1].klass;
  this->fields.inPos.fields.z = 0.0;
  this->fields.outPos.fields.y = 0.0;
  v13 = v11 + v12;
  this->fields.outPos.fields.x = v11 + v12;
  v14 = TitleInfoSuperBossStatusComponent_TypeInfo;
  if ( (BYTE3(TitleInfoSuperBossStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoSuperBossStatusComponent_TypeInfo->_2.cctor_finished )
  {
    v18 = v11 + v12;
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossStatusComponent_TypeInfo);
    v13 = v18;
    v14 = TitleInfoSuperBossStatusComponent_TypeInfo;
  }
  static_fields = (float32x2_t *)v14->static_fields;
  v16.n64_u32[0] = 0;
  v16.n64_f32[1] = v13;
  v17 = static_fields[3].n64_f32[0];
  *(float32x2_t *)&this->fields.outPos.fields.z = vadd_f32(v16, static_fields[2]);
  *((float *)&this->fields.clickCallBack + 1) = v17 + 0.0;
  TitleInfoSuperBossStatusComponent__FrameOut(this, (System_String_o *)StringLiteral_1999/*"AnimFrameOutEnd"*/, v10);
}


void __fastcall TitleInfoSuperBossStatusComponent__UpdateDisp(
        TitleInfoSuperBossStatusComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  EventSuperBossEntity_o *v5; // x0
  bool IsEncounted; // w20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1
  TitleInfoSuperBossStatusComponent_c *v9; // x8
  System_String_o **p_SUPERBOSS_ICON_SPNAME_PREFIX_WIN; // x8
  __int64 v11; // x9
  System_String_o *v12; // x20
  System_String_o *v13; // x0
  System_String_o *v14; // x0
  const MethodInfo *v15; // x2
  UnityEngine_Collider_o *superBossEntity; // x20
  __int64 v17; // x8
  __int64 v18; // x8
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E6C81 & 1) == 0 )
  {
    sub_B5D5C4(&TitleInfoSuperBossStatusComponent_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6C81 = 1;
  }
  v5 = *(EventSuperBossEntity_o **)&this->fields.inPos.fields.x;
  if ( v5 )
  {
    IsEncounted = EventSuperBossEntity__IsEncounted(v5, 0LL);
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
    v9 = TitleInfoSuperBossStatusComponent_TypeInfo;
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      if ( (WORD1(TitleInfoSuperBossStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !TitleInfoSuperBossStatusComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoSuperBossStatusComponent_TypeInfo);
        v9 = TitleInfoSuperBossStatusComponent_TypeInfo;
      }
      p_SUPERBOSS_ICON_SPNAME_PREFIX_WIN = &v9->static_fields->SUPERBOSS_ICON_SPNAME_PREFIX_WIN;
    }
    else
    {
      if ( (WORD1(TitleInfoSuperBossStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !TitleInfoSuperBossStatusComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoSuperBossStatusComponent_TypeInfo);
        v9 = TitleInfoSuperBossStatusComponent_TypeInfo;
      }
      p_SUPERBOSS_ICON_SPNAME_PREFIX_WIN = &v9->static_fields->SUPERBOSS_ICON_SPNAME_PREFIX_BATTLE;
    }
    v11 = *(_QWORD *)&this->fields.inPos.fields.x;
    if ( !v11 )
      goto LABEL_26;
    v12 = *p_SUPERBOSS_ICON_SPNAME_PREFIX_WIN;
    v13 = System_Int32__ToString((int)v11 + 56, 0LL);
    v14 = System_String__Concat_44577788(v12, v13, 0LL);
    TitleInfoSuperBossStatusComponent__SetBossIcon(this, v14, v15);
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
    v17 = *(_QWORD *)&this->fields.bossGridPosition.fields.x;
    if ( !v17
      || (gameObject = (UnityEngine_GameObject_o *)this->fields.superBossEntity) == 0LL
      || (v19.fields.z = 0.0,
          v19.fields.x = (float)*(int *)(v17 + 160) * 0.5,
          v19.fields.y = 0.0,
          UnityEngine_BoxCollider__set_center((UnityEngine_BoxCollider_o *)gameObject, v19, 0LL),
          (v18 = *(_QWORD *)&this->fields.bossGridPosition.fields.x) == 0)
      || (gameObject = (UnityEngine_GameObject_o *)this->fields.superBossEntity) == 0LL )
    {
LABEL_26:
      sub_B5D69C(gameObject, v8);
    }
    v20.fields.y = (float)*(int *)(v18 + 164);
    v20.fields.x = (float)*(int *)(v18 + 160);
    v20.fields.z = 0.0;
    UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)gameObject, v20, 0LL);
  }
}


void __fastcall TitleInfoSuperBossStatusComponent__onClick(
        TitleInfoSuperBossStatusComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  EventSuperBossEntity_o *v5; // x0

  if ( (byte_42E6C82 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6C82 = 1;
  }
  if ( !*(_QWORD *)&this->fields.offsetY )
    goto LABEL_6;
  v5 = *(EventSuperBossEntity_o **)&this->fields.inPos.fields.x;
  if ( !v5 )
    sub_B5D69C(0LL, method);
  if ( !EventSuperBossEntity__IsCleard(v5, 0LL) )
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