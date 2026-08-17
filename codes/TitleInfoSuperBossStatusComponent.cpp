void TitleInfoSuperBossStatusComponent___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  int32_t v8; // w1
  struct TitleInfoSuperBossStatusComponent_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  TitleInfoSuperBossStatusComponent_c *v16; // x8
  struct TitleInfoSuperBossStatusComponent_StaticFields *v17; // x9

  if ( (byte_596F358 & 1) == 0 )
  {
    sub_2213A60(&TitleInfoSuperBossStatusComponent_TypeInfo);
    sub_2213A60(&StringLiteral_20181/*"event_superboss_status_win_"*/);
    sub_2213A60(&StringLiteral_20180/*"event_superboss_status_battle_"*/);
    byte_596F358 = 1;
  }
  v7 = StringLiteral_20180/*"event_superboss_status_battle_"*/;
  TitleInfoSuperBossStatusComponent_TypeInfo->static_fields->SUPERBOSS_ICON_SPNAME_PREFIX_BATTLE = (struct System_String_o *)StringLiteral_20180/*"event_superboss_status_battle_"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)TitleInfoSuperBossStatusComponent_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v8 = StringLiteral_20181/*"event_superboss_status_win_"*/;
  static_fields = TitleInfoSuperBossStatusComponent_TypeInfo->static_fields;
  static_fields->SUPERBOSS_ICON_SPNAME_PREFIX_WIN = (struct System_String_o *)StringLiteral_20181/*"event_superboss_status_win_"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->SUPERBOSS_ICON_SPNAME_PREFIX_WIN,
    v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = TitleInfoSuperBossStatusComponent_TypeInfo;
  v17 = TitleInfoSuperBossStatusComponent_TypeInfo->static_fields;
  *(_QWORD *)&v17->FRAME_ANIM_OUT_POS_DELTA.fields.x = 3263954944LL;
  v17->FRAME_ANIM_OUT_POS_DELTA.fields.z = 0.0;
  *(_QWORD *)&v16->static_fields->FRAME_ANIM_DURATION = 0x3F0000003E99999ALL;
}


void TitleInfoSuperBossStatusComponent___ctor(TitleInfoSuperBossStatusComponent_o *this, const MethodInfo *method)
{
  TitleInfoEventInfoComponent___ctor((TitleInfoEventInfoComponent_o *)this, 0);
}


void TitleInfoSuperBossStatusComponent__AnimFrameOutEnd(
        TitleInfoSuperBossStatusComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  TitleInfoSuperBossStatusComponent_c *v4; // x0
  struct EventSuperBossEntity_o *superBossEntity; // x8
  System_String_o *SUPERBOSS_ICON_SPNAME_PREFIX_WIN; // x20
  System_String_o *v7; // x0
  System_String_o *v8; // x0
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x2

  if ( (byte_596F355 & 1) == 0 )
  {
    sub_2213A60(&TitleInfoSuperBossStatusComponent_TypeInfo);
    byte_596F355 = 1;
  }
  v4 = TitleInfoSuperBossStatusComponent_TypeInfo;
  if ( !*(&TitleInfoSuperBossStatusComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossStatusComponent_TypeInfo, method, v2);
  superBossEntity = this->fields.superBossEntity;
  if ( !superBossEntity )
    sub_2213CDC(v4, method);
  SUPERBOSS_ICON_SPNAME_PREFIX_WIN = TitleInfoSuperBossStatusComponent_TypeInfo->static_fields->SUPERBOSS_ICON_SPNAME_PREFIX_WIN;
  v7 = System_Int32__ToString((int)superBossEntity + 56, 0);
  v8 = System_String__Concat_75651716(SUPERBOSS_ICON_SPNAME_PREFIX_WIN, v7, 0);
  TitleInfoSuperBossStatusComponent__SetBossIcon(this, v8, v9);
  TitleInfoSuperBossStatusComponent__FrameIn(this, 0, v10);
}


void TitleInfoSuperBossStatusComponent__Destroy(TitleInfoSuperBossStatusComponent_o *this, const MethodInfo *method)
{
  ;
}


void TitleInfoSuperBossStatusComponent__EntryAnim(TitleInfoSuperBossStatusComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  TitleInfoSuperBossStatusComponent__FrameIn(this, 0, v2);
}


void TitleInfoSuperBossStatusComponent__FrameIn(
        TitleInfoSuperBossStatusComponent_o *this,
        System_String_o *callFinished,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  TitleInfoSuperBossStatusComponent_c *v8; // x8
  UnityEngine_GameObject_o *v9; // x21
  char *superBossIconSp; // x0
  __int64 v11; // x1
  __int64 v12; // x9
  char *v13; // x21
  __int64 v14; // x9
  UnityEngine_GameObject_o *v15; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  UnityEngine_GameObject_o *v28; // x0

  if ( (byte_596F356 & 1) == 0 )
  {
    sub_2213A60(&TitleInfoSuperBossStatusComponent_TypeInfo);
    sub_2213A60(&Method_UITweener_Begin_TweenAlpha___);
    sub_2213A60(&Method_UITweener_Begin_TweenPosition___);
    byte_596F356 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v8 = TitleInfoSuperBossStatusComponent_TypeInfo;
  v9 = gameObject;
  if ( !*(&TitleInfoSuperBossStatusComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossStatusComponent_TypeInfo, v6, v7);
    v8 = TitleInfoSuperBossStatusComponent_TypeInfo;
  }
  superBossIconSp = (char *)UITweener__Begin_object_(
                              v9,
                              v8->static_fields->FRAME_ANIM_DURATION,
                              (const MethodInfo_3A047F4 *)Method_UITweener_Begin_TweenPosition___);
  if ( !superBossIconSp )
    goto LABEL_9;
  v12 = *(_QWORD *)&this->fields.outPos.fields.x;
  v13 = superBossIconSp;
  *((_DWORD *)superBossIconSp + 34) = LODWORD(this->fields.outPos.fields.z);
  *((_QWORD *)superBossIconSp + 16) = v12;
  v14 = *(_QWORD *)&this->fields.inPos.fields.x;
  *((_DWORD *)superBossIconSp + 37) = LODWORD(this->fields.inPos.fields.z);
  *(_QWORD *)(superBossIconSp + 140) = v14;
  *((_DWORD *)superBossIconSp + 8) = 6;
  v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  *((_QWORD *)v13 + 10) = v15;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 80), (int32_t)v15, v16, v17, v18, v19, v20, v21);
  *((_QWORD *)v13 + 11) = callFinished;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 88), (int32_t)callFinished, v22, v23, v24, v25, v26, v27);
  superBossIconSp = (char *)this->fields.superBossIconSp;
  if ( !superBossIconSp
    || (v28 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)superBossIconSp, 0),
        (superBossIconSp = (char *)UITweener__Begin_object_(
                                     v28,
                                     TitleInfoSuperBossStatusComponent_TypeInfo->static_fields->FRAME_ANIM_DURATION,
                                     (const MethodInfo_3A047F4 *)Method_UITweener_Begin_TweenAlpha___)) == 0) )
  {
LABEL_9:
    sub_2213CDC(superBossIconSp, v11);
  }
  *((_QWORD *)superBossIconSp + 16) = 0x3F80000000000000LL;
  *((_DWORD *)superBossIconSp + 8) = 6;
}


void TitleInfoSuperBossStatusComponent__FrameOut(
        TitleInfoSuperBossStatusComponent_o *this,
        System_String_o *callFinished,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  TitleInfoSuperBossStatusComponent_c *v8; // x8
  UnityEngine_GameObject_o *v9; // x21
  char *superBossIconSp; // x0
  __int64 v11; // x1
  __int64 v12; // x9
  char *v13; // x21
  __int64 v14; // x9
  UnityEngine_GameObject_o *v15; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  UnityEngine_GameObject_o *v28; // x0

  if ( (byte_596F357 & 1) == 0 )
  {
    sub_2213A60(&TitleInfoSuperBossStatusComponent_TypeInfo);
    sub_2213A60(&Method_UITweener_Begin_TweenAlpha___);
    sub_2213A60(&Method_UITweener_Begin_TweenPosition___);
    byte_596F357 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v8 = TitleInfoSuperBossStatusComponent_TypeInfo;
  v9 = gameObject;
  if ( !*(&TitleInfoSuperBossStatusComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossStatusComponent_TypeInfo, v6, v7);
    v8 = TitleInfoSuperBossStatusComponent_TypeInfo;
  }
  superBossIconSp = (char *)UITweener__Begin_object_(
                              v9,
                              v8->static_fields->FRAME_ANIM_DURATION,
                              (const MethodInfo_3A047F4 *)Method_UITweener_Begin_TweenPosition___);
  if ( !superBossIconSp )
    goto LABEL_9;
  v12 = *(_QWORD *)&this->fields.inPos.fields.x;
  v13 = superBossIconSp;
  *((_DWORD *)superBossIconSp + 34) = LODWORD(this->fields.inPos.fields.z);
  *((_QWORD *)superBossIconSp + 16) = v12;
  v14 = *(_QWORD *)&this->fields.outPos.fields.x;
  *((_DWORD *)superBossIconSp + 37) = LODWORD(this->fields.outPos.fields.z);
  *(_QWORD *)(superBossIconSp + 140) = v14;
  *((_DWORD *)superBossIconSp + 8) = 2;
  v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  *((_QWORD *)v13 + 10) = v15;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 80), (int32_t)v15, v16, v17, v18, v19, v20, v21);
  *((_QWORD *)v13 + 11) = callFinished;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 88), (int32_t)callFinished, v22, v23, v24, v25, v26, v27);
  superBossIconSp = (char *)this->fields.superBossIconSp;
  if ( !superBossIconSp
    || (v28 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)superBossIconSp, 0),
        (superBossIconSp = (char *)UITweener__Begin_object_(
                                     v28,
                                     TitleInfoSuperBossStatusComponent_TypeInfo->static_fields->FRAME_ANIM_DURATION,
                                     (const MethodInfo_3A047F4 *)Method_UITweener_Begin_TweenAlpha___)) == 0) )
  {
LABEL_9:
    sub_2213CDC(superBossIconSp, v11);
  }
  *((_QWORD *)superBossIconSp + 16) = 1065353216;
  *((_DWORD *)superBossIconSp + 8) = 2;
}


int32_t TitleInfoSuperBossStatusComponent__GetBackBtnDepth(
        TitleInfoSuperBossStatusComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.backBtnDepth;
}


UnityEngine_Vector3_o TitleInfoSuperBossStatusComponent__GetBossGridPosition(
        TitleInfoSuperBossStatusComponent_o *this,
        const MethodInfo *method)
{
  float x; // s0
  float y; // s1
  float z; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  x = this->fields.bossGridPosition.fields.x;
  y = this->fields.bossGridPosition.fields.y;
  z = this->fields.bossGridPosition.fields.z;
  result.fields.z = z;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


UISprite_o *TitleInfoSuperBossStatusComponent__GetIconSprite(
        TitleInfoSuperBossStatusComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.superBossIconSp;
}


bool TitleInfoSuperBossStatusComponent__IsDispPossible(
        TitleInfoSuperBossStatusComponent_o *this,
        const MethodInfo *method)
{
  return 1;
}


bool TitleInfoSuperBossStatusComponent__IsEventRaidBoss(
        TitleInfoSuperBossStatusComponent_o *this,
        const MethodInfo *method)
{
  return 0;
}


void TitleInfoSuperBossStatusComponent__OnDestroy(TitleInfoSuperBossStatusComponent_o *this, const MethodInfo *method)
{
  ;
}


void TitleInfoSuperBossStatusComponent__SetBossIcon(
        TitleInfoSuperBossStatusComponent_o *this,
        System_String_o *spName,
        const MethodInfo *method)
{
  UISprite_o *superBossIconSp; // x21
  struct UISprite_o *v6; // x0
  __int64 v7; // x1

  if ( (byte_596F34F & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    byte_596F34F = 1;
  }
  superBossIconSp = this->fields.superBossIconSp;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, spName, method);
  v6 = (struct UISprite_o *)AtlasManager__SetEventUI(superBossIconSp, spName, 0);
  if ( !superBossIconSp )
    goto LABEL_11;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)superBossIconSp, (unsigned __int8)v6 & 1, 0);
  v6 = this->fields.superBossIconSp;
  if ( !v6 )
    goto LABEL_11;
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)v6, 0) )
  {
    v6 = this->fields.superBossIconSp;
    if ( v6 )
    {
      ((void (__fastcall *)(struct UISprite_o *, const MethodInfo *))v6->klass->vtable._33_MakePixelPerfect.methodPtr)(
        v6,
        v6->klass->vtable._33_MakePixelPerfect.method);
      return;
    }
LABEL_11:
    sub_2213CDC(v6, v7);
  }
}


void TitleInfoSuperBossStatusComponent__SetClearAnim(
        TitleInfoSuperBossStatusComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  struct EventSuperBossEntity_o *superBossEntity; // x8
  System_String_o *SUPERBOSS_ICON_SPNAME_PREFIX_BATTLE; // x20
  System_String_o *v8; // x0
  System_String_o *v9; // x1
  const MethodInfo *v10; // x2

  if ( (byte_596F353 & 1) == 0 )
  {
    sub_2213A60(&TitleInfoSuperBossStatusComponent_TypeInfo);
    byte_596F353 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_8;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  gameObject = (UnityEngine_GameObject_o *)TitleInfoSuperBossStatusComponent_TypeInfo;
  if ( !*(&TitleInfoSuperBossStatusComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossStatusComponent_TypeInfo, v4, v5);
  superBossEntity = this->fields.superBossEntity;
  if ( !superBossEntity )
LABEL_8:
    sub_2213CDC(gameObject, v4);
  SUPERBOSS_ICON_SPNAME_PREFIX_BATTLE = TitleInfoSuperBossStatusComponent_TypeInfo->static_fields->SUPERBOSS_ICON_SPNAME_PREFIX_BATTLE;
  v8 = System_Int32__ToString((int)superBossEntity + 56, 0);
  v9 = System_String__Concat_75651716(SUPERBOSS_ICON_SPNAME_PREFIX_BATTLE, v8, 0);
  TitleInfoSuperBossStatusComponent__SetBossIcon(this, v9, v10);
}


void TitleInfoSuperBossStatusComponent__SetClickCallBack(
        TitleInfoSuperBossStatusComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.clickCallBack = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.clickCallBack,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void TitleInfoSuperBossStatusComponent__SetEntryAnim(
        TitleInfoSuperBossStatusComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  TitleInfoSuperBossStatusComponent_c *v7; // x0
  float v8; // s1
  float32x2_t v9; // d0
  float32x2_t *static_fields; // x8
  float v11; // s3
  float v12; // [xsp+0h] [xbp-30h]
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596F352 & 1) == 0 )
  {
    sub_2213A60(&TitleInfoSuperBossStatusComponent_TypeInfo);
    sub_2213A60(&StringLiteral_6342/*"EntryAnim"*/);
    byte_596F352 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_9;
  localPosition = UnityEngine_Transform__get_localPosition(transform, 0);
  localPosition.fields.x = this->fields.offsetY;
  v7 = TitleInfoSuperBossStatusComponent_TypeInfo;
  this->fields.inPos.fields.x = 0.0;
  this->fields.inPos.fields.z = 0.0;
  v8 = localPosition.fields.y + localPosition.fields.x;
  this->fields.inPos.fields.y = v8;
  if ( !*(&v7->_2.cctor_finished + 1) )
  {
    v12 = v8;
    j_il2cpp_runtime_class_init_0(v7, v5, v6);
    v8 = v12;
    v7 = TitleInfoSuperBossStatusComponent_TypeInfo;
  }
  v9.n64_u32[0] = 0;
  static_fields = (float32x2_t *)v7->static_fields;
  v11 = static_fields[3].n64_f32[0];
  v9.n64_f32[1] = v8;
  *(float32x2_t *)&this->fields.outPos.fields.x = vadd_f32(v9, static_fields[2]);
  this->fields.outPos.fields.z = v11 + 0.0;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.outPos, 0),
        (transform = (UnityEngine_Transform_o *)this->fields.superBossIconSp) == 0) )
  {
LABEL_9:
    sub_2213CDC(transform, v4);
  }
  ((void (__fastcall *)(UnityEngine_Transform_o *, _QWORD, double))transform->klass[1]._1.this_arg.data)(
    transform,
    *(_QWORD *)&transform->klass[1]._1.this_arg.bits,
    0.0);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6342/*"EntryAnim"*/,
    TitleInfoSuperBossStatusComponent_TypeInfo->static_fields->ENTRY_ANIM_DELAY
  + (float)(this->fields.inPos.fields.y / -500.0),
    0);
}


void TitleInfoSuperBossStatusComponent__Setup(
        TitleInfoSuperBossStatusComponent_o *this,
        EventSuperBossEntity_o *eventSuperBossEntity,
        float offsetY,
        const MethodInfo *method)
{
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  struct EventSuperBossEntity_o **p_superBossEntity; // x21
  UnityEngine_Object_o *gameObject; // x0
  __int64 v13; // x1
  UnityEngine_Object_o *v14; // x20
  struct EventSuperBossEntity_o *v15; // x8
  System_String_o *v16; // x21
  System_String_o *v17; // x0
  System_String_o *v18; // x0

  this->fields.superBossEntity = eventSuperBossEntity;
  p_superBossEntity = &this->fields.superBossEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.superBossEntity,
    (int32_t)eventSuperBossEntity,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7,
    v8);
  this->fields.offsetY = offsetY;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (v14 = gameObject,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Object__get_name(gameObject, 0),
        (v15 = *p_superBossEntity) == 0) )
  {
    sub_2213CDC(gameObject, v13);
  }
  v16 = (System_String_o *)gameObject;
  v17 = System_Int32__ToString((int)v15 + 20, 0);
  v18 = System_String__Concat_75651716(v16, v17, 0);
  UnityEngine_Object__set_name(v14, v18, 0);
  ((void (__fastcall *)(TitleInfoSuperBossStatusComponent_o *, const MethodInfo *))this->klass->vtable._5_UpdateDisp.methodPtr)(
    this,
    this->klass->vtable._5_UpdateDisp.method);
}


void TitleInfoSuperBossStatusComponent__StartClearAnim(
        TitleInfoSuperBossStatusComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  TitleInfoSuperBossStatusComponent_c *v7; // x0
  float v8; // s1
  float32x2_t v9; // d0
  float32x2_t *static_fields; // x8
  System_String_o *v11; // x1
  float v12; // s3
  float v13; // [xsp+0h] [xbp-30h]
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596F354 & 1) == 0 )
  {
    sub_2213A60(&TitleInfoSuperBossStatusComponent_TypeInfo);
    sub_2213A60(&StringLiteral_2378/*"AnimFrameOutEnd"*/);
    byte_596F354 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    sub_2213CDC(0, v4);
  localPosition = UnityEngine_Transform__get_localPosition(transform, 0);
  localPosition.fields.x = this->fields.offsetY;
  v7 = TitleInfoSuperBossStatusComponent_TypeInfo;
  this->fields.inPos.fields.x = 0.0;
  this->fields.inPos.fields.z = 0.0;
  v8 = localPosition.fields.y + localPosition.fields.x;
  this->fields.inPos.fields.y = v8;
  if ( !*(&v7->_2.cctor_finished + 1) )
  {
    v13 = v8;
    j_il2cpp_runtime_class_init_0(v7, v5, v6);
    v8 = v13;
    v7 = TitleInfoSuperBossStatusComponent_TypeInfo;
  }
  v9.n64_u32[0] = 0;
  static_fields = (float32x2_t *)v7->static_fields;
  v11 = (System_String_o *)StringLiteral_2378/*"AnimFrameOutEnd"*/;
  v12 = static_fields[3].n64_f32[0];
  v9.n64_f32[1] = v8;
  *(float32x2_t *)&this->fields.outPos.fields.x = vadd_f32(v9, static_fields[2]);
  this->fields.outPos.fields.z = v12 + 0.0;
  TitleInfoSuperBossStatusComponent__FrameOut(this, v11, v6);
}


void TitleInfoSuperBossStatusComponent__UpdateDisp(TitleInfoSuperBossStatusComponent_o *this, const MethodInfo *method)
{
  EventSuperBossEntity_o *superBossEntity; // x0
  bool IsEncounted; // w20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  bool IsCleard; // w8
  int v9; // w9
  System_String_o **m_CachedPtr; // x8
  struct EventSuperBossEntity_o *v11; // x9
  System_String_o *v12; // x20
  System_String_o *v13; // x0
  System_String_o *v14; // x0
  const MethodInfo *v15; // x2
  UnityEngine_Collider_o *boxCollider; // x20
  struct UISprite_o *superBossIconSp; // x8
  struct UISprite_o *v18; // x8
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596F350 & 1) == 0 )
  {
    sub_2213A60(&TitleInfoSuperBossStatusComponent_TypeInfo);
    byte_596F350 = 1;
  }
  superBossEntity = this->fields.superBossEntity;
  if ( superBossEntity )
  {
    IsEncounted = EventSuperBossEntity__IsEncounted(superBossEntity, 0);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( IsEncounted )
    {
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive(gameObject, 1, 0);
        gameObject = (UnityEngine_GameObject_o *)this->fields.superBossEntity;
        if ( gameObject )
        {
          IsCleard = EventSuperBossEntity__IsCleard((EventSuperBossEntity_o *)gameObject, 0);
          gameObject = (UnityEngine_GameObject_o *)TitleInfoSuperBossStatusComponent_TypeInfo;
          v9 = *(&TitleInfoSuperBossStatusComponent_TypeInfo->_2.cctor_finished + 1);
          if ( IsCleard )
          {
            if ( !v9 )
            {
              j_il2cpp_runtime_class_init_0(TitleInfoSuperBossStatusComponent_TypeInfo, v6, v7);
              gameObject = (UnityEngine_GameObject_o *)TitleInfoSuperBossStatusComponent_TypeInfo;
            }
            m_CachedPtr = (System_String_o **)(gameObject[7].fields.m_CachedPtr + 8);
          }
          else
          {
            if ( !v9 )
            {
              j_il2cpp_runtime_class_init_0(TitleInfoSuperBossStatusComponent_TypeInfo, v6, v7);
              gameObject = (UnityEngine_GameObject_o *)TitleInfoSuperBossStatusComponent_TypeInfo;
            }
            m_CachedPtr = (System_String_o **)gameObject[7].fields.m_CachedPtr;
          }
          v11 = this->fields.superBossEntity;
          if ( v11 )
          {
            v12 = *m_CachedPtr;
            v13 = System_Int32__ToString((int)v11 + 56, 0);
            v14 = System_String__Concat_75651716(v12, v13, 0);
            TitleInfoSuperBossStatusComponent__SetBossIcon(this, v14, v15);
            gameObject = (UnityEngine_GameObject_o *)this->fields.superBossIconSp;
            if ( gameObject )
            {
              boxCollider = (UnityEngine_Collider_o *)this->fields.boxCollider;
              gameObject = (UnityEngine_GameObject_o *)UnityEngine_Behaviour__get_enabled(
                                                         (UnityEngine_Behaviour_o *)gameObject,
                                                         0);
              if ( boxCollider )
              {
                UnityEngine_Collider__set_enabled(boxCollider, (unsigned __int8)gameObject & 1, 0);
                superBossIconSp = this->fields.superBossIconSp;
                if ( superBossIconSp )
                {
                  gameObject = (UnityEngine_GameObject_o *)this->fields.boxCollider;
                  if ( gameObject )
                  {
                    v19.fields.z = 0.0;
                    v19.fields.x = (float)superBossIconSp->fields.mWidth * 0.5;
                    v19.fields.y = 0.0;
                    UnityEngine_BoxCollider__set_center((UnityEngine_BoxCollider_o *)gameObject, v19, 0);
                    v18 = this->fields.superBossIconSp;
                    if ( v18 )
                    {
                      gameObject = (UnityEngine_GameObject_o *)this->fields.boxCollider;
                      if ( gameObject )
                      {
                        v20.fields.y = (float)v18->fields.mHeight;
                        v20.fields.x = (float)v18->fields.mWidth;
                        v20.fields.z = 0.0;
                        UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)gameObject, v20, 0);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    else if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 0, 0);
      return;
    }
    sub_2213CDC(gameObject, v6);
  }
}


void TitleInfoSuperBossStatusComponent__onClick(TitleInfoSuperBossStatusComponent_o *this, const MethodInfo *method)
{
  EventSuperBossEntity_o *superBossEntity; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0

  if ( (byte_596F351 & 1) == 0 )
  {
    sub_2213A60(&Method_TitleInfoSuperBossStatusComponent_onClick__);
    byte_596F351 = 1;
  }
  if ( !this->fields.clickCallBack )
    goto LABEL_6;
  superBossEntity = this->fields.superBossEntity;
  if ( !superBossEntity )
    sub_2213CDC(0, method);
  if ( !EventSuperBossEntity__IsCleard(superBossEntity, 0) )
  {
    ActionExtensions__Call(this->fields.clickCallBack, 0);
  }
  else
  {
LABEL_6:
    v4 = Method_TitleInfoSuperBossStatusComponent_onClick__;
    if ( (*((_BYTE *)Method_TitleInfoSuperBossStatusComponent_onClick__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_2213A78(Method_TitleInfoSuperBossStatusComponent_onClick__);
    v5 = (System_Reflection_MethodBase_o *)sub_2213A44(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 2, 0, 0);
  }
}