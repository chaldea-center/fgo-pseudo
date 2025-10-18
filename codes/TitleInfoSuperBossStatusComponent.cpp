void TitleInfoSuperBossStatusComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  int32_t v3; // w1
  struct TitleInfoSuperBossStatusComponent_StaticFields *static_fields; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  TitleInfoSuperBossStatusComponent_c *v7; // x8
  struct TitleInfoSuperBossStatusComponent_StaticFields *v8; // x9

  if ( (byte_4C41B67 & 1) == 0 )
  {
    sub_1C37058(&TitleInfoSuperBossStatusComponent_TypeInfo);
    sub_1C37058(&StringLiteral_19289/*"event_superboss_status_win_"*/);
    sub_1C37058(&StringLiteral_19288/*"event_superboss_status_battle_"*/);
    byte_4C41B67 = 1;
  }
  TitleInfoSuperBossStatusComponent_TypeInfo->static_fields->SUPERBOSS_ICON_SPNAME_PREFIX_BATTLE = (struct System_String_o *)StringLiteral_19288/*"event_superboss_status_battle_"*/;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)TitleInfoSuperBossStatusComponent_TypeInfo->static_fields,
    StringLiteral_19288/*"event_superboss_status_battle_"*/,
    v1,
    v2);
  v3 = StringLiteral_19289/*"event_superboss_status_win_"*/;
  static_fields = TitleInfoSuperBossStatusComponent_TypeInfo->static_fields;
  static_fields->SUPERBOSS_ICON_SPNAME_PREFIX_WIN = (struct System_String_o *)StringLiteral_19289/*"event_superboss_status_win_"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->SUPERBOSS_ICON_SPNAME_PREFIX_WIN, v3, v5, v6);
  v7 = TitleInfoSuperBossStatusComponent_TypeInfo;
  v8 = TitleInfoSuperBossStatusComponent_TypeInfo->static_fields;
  *(_QWORD *)&v8->FRAME_ANIM_OUT_POS_DELTA.fields.x = 3263954944LL;
  v8->FRAME_ANIM_OUT_POS_DELTA.fields.z = 0.0;
  *(_QWORD *)&v7->static_fields->FRAME_ANIM_DURATION = 0x3F0000003E99999ALL;
}


void TitleInfoSuperBossStatusComponent___ctor(TitleInfoSuperBossStatusComponent_o *this, const MethodInfo *method)
{
  TitleInfoEventInfoComponent___ctor((TitleInfoEventInfoComponent_o *)this, 0);
}


void TitleInfoSuperBossStatusComponent__AnimFrameOutEnd(
        TitleInfoSuperBossStatusComponent_o *this,
        const MethodInfo *method)
{
  TitleInfoSuperBossStatusComponent_c *v3; // x0
  struct EventSuperBossEntity_o *superBossEntity; // x8
  System_String_o *SUPERBOSS_ICON_SPNAME_PREFIX_WIN; // x20
  System_String_o *v6; // x0
  System_String_o *v7; // x0
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x2

  if ( (byte_4C41B64 & 1) == 0 )
  {
    sub_1C37058(&TitleInfoSuperBossStatusComponent_TypeInfo);
    byte_4C41B64 = 1;
  }
  v3 = TitleInfoSuperBossStatusComponent_TypeInfo;
  if ( !TitleInfoSuperBossStatusComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossStatusComponent_TypeInfo);
  superBossEntity = this->fields.superBossEntity;
  if ( !superBossEntity )
    sub_1C372B4(v3);
  SUPERBOSS_ICON_SPNAME_PREFIX_WIN = TitleInfoSuperBossStatusComponent_TypeInfo->static_fields->SUPERBOSS_ICON_SPNAME_PREFIX_WIN;
  v6 = System_Int32__ToString((int)superBossEntity + 56, 0);
  v7 = System_String__Concat_63561656(SUPERBOSS_ICON_SPNAME_PREFIX_WIN, v6, 0);
  TitleInfoSuperBossStatusComponent__SetBossIcon(this, v7, v8);
  TitleInfoSuperBossStatusComponent__FrameIn(this, 0, v9);
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
  TitleInfoSuperBossStatusComponent_c *v6; // x8
  UnityEngine_GameObject_o *v7; // x21
  char *superBossIconSp; // x0
  char *v9; // x21
  float z; // w8
  __int64 v11; // x9
  UnityEngine_GameObject_o *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  UnityEngine_GameObject_o *v17; // x0
  __int64 v18; // [xsp+0h] [xbp-40h]

  if ( (byte_4C41B65 & 1) == 0 )
  {
    sub_1C37058(&TitleInfoSuperBossStatusComponent_TypeInfo);
    sub_1C37058(&Method_UITweener_Begin_TweenAlpha___);
    sub_1C37058(&Method_UITweener_Begin_TweenPosition___);
    byte_4C41B65 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v6 = TitleInfoSuperBossStatusComponent_TypeInfo;
  v7 = gameObject;
  if ( !TitleInfoSuperBossStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossStatusComponent_TypeInfo);
    v6 = TitleInfoSuperBossStatusComponent_TypeInfo;
  }
  superBossIconSp = (char *)UITweener__Begin_object_(
                              v7,
                              v6->static_fields->FRAME_ANIM_DURATION,
                              (const MethodInfo_31A3570 *)Method_UITweener_Begin_TweenPosition___);
  v18 = *(_QWORD *)&this->fields.outPos.fields.x;
  if ( !superBossIconSp )
    goto LABEL_9;
  v9 = superBossIconSp;
  *((_DWORD *)superBossIconSp + 34) = LODWORD(this->fields.outPos.fields.z);
  *((_QWORD *)superBossIconSp + 16) = v18;
  z = this->fields.inPos.fields.z;
  v11 = *(_QWORD *)&this->fields.inPos.fields.x;
  *((_DWORD *)superBossIconSp + 8) = 6;
  *((float *)superBossIconSp + 37) = z;
  *(_QWORD *)(superBossIconSp + 140) = v11;
  v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  *((_QWORD *)v9 + 10) = v12;
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 80), (int32_t)v12, v13, v14);
  *((_QWORD *)v9 + 11) = callFinished;
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 88), (int32_t)callFinished, v15, v16);
  superBossIconSp = (char *)this->fields.superBossIconSp;
  if ( !superBossIconSp
    || (v17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)superBossIconSp, 0),
        (superBossIconSp = (char *)UITweener__Begin_object_(
                                     v17,
                                     TitleInfoSuperBossStatusComponent_TypeInfo->static_fields->FRAME_ANIM_DURATION,
                                     (const MethodInfo_31A3570 *)Method_UITweener_Begin_TweenAlpha___)) == 0) )
  {
LABEL_9:
    sub_1C372B4(superBossIconSp);
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
  TitleInfoSuperBossStatusComponent_c *v6; // x8
  UnityEngine_GameObject_o *v7; // x21
  char *superBossIconSp; // x0
  char *v9; // x21
  float z; // w8
  __int64 v11; // x9
  UnityEngine_GameObject_o *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  UnityEngine_GameObject_o *v17; // x0
  __int64 v18; // [xsp+0h] [xbp-40h]

  if ( (byte_4C41B66 & 1) == 0 )
  {
    sub_1C37058(&TitleInfoSuperBossStatusComponent_TypeInfo);
    sub_1C37058(&Method_UITweener_Begin_TweenAlpha___);
    sub_1C37058(&Method_UITweener_Begin_TweenPosition___);
    byte_4C41B66 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v6 = TitleInfoSuperBossStatusComponent_TypeInfo;
  v7 = gameObject;
  if ( !TitleInfoSuperBossStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossStatusComponent_TypeInfo);
    v6 = TitleInfoSuperBossStatusComponent_TypeInfo;
  }
  superBossIconSp = (char *)UITweener__Begin_object_(
                              v7,
                              v6->static_fields->FRAME_ANIM_DURATION,
                              (const MethodInfo_31A3570 *)Method_UITweener_Begin_TweenPosition___);
  v18 = *(_QWORD *)&this->fields.inPos.fields.x;
  if ( !superBossIconSp )
    goto LABEL_9;
  v9 = superBossIconSp;
  *((_DWORD *)superBossIconSp + 34) = LODWORD(this->fields.inPos.fields.z);
  *((_QWORD *)superBossIconSp + 16) = v18;
  z = this->fields.outPos.fields.z;
  v11 = *(_QWORD *)&this->fields.outPos.fields.x;
  *((_DWORD *)superBossIconSp + 8) = 2;
  *((float *)superBossIconSp + 37) = z;
  *(_QWORD *)(superBossIconSp + 140) = v11;
  v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  *((_QWORD *)v9 + 10) = v12;
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 80), (int32_t)v12, v13, v14);
  *((_QWORD *)v9 + 11) = callFinished;
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 88), (int32_t)callFinished, v15, v16);
  superBossIconSp = (char *)this->fields.superBossIconSp;
  if ( !superBossIconSp
    || (v17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)superBossIconSp, 0),
        (superBossIconSp = (char *)UITweener__Begin_object_(
                                     v17,
                                     TitleInfoSuperBossStatusComponent_TypeInfo->static_fields->FRAME_ANIM_DURATION,
                                     (const MethodInfo_31A3570 *)Method_UITweener_Begin_TweenAlpha___)) == 0) )
  {
LABEL_9:
    sub_1C372B4(superBossIconSp);
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

  if ( (byte_4C41B5E & 1) == 0 )
  {
    sub_1C37058(&AtlasManager_TypeInfo);
    byte_4C41B5E = 1;
  }
  superBossIconSp = this->fields.superBossIconSp;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
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
    sub_1C372B4(v6);
  }
}


void TitleInfoSuperBossStatusComponent__SetClearAnim(
        TitleInfoSuperBossStatusComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  struct EventSuperBossEntity_o *superBossEntity; // x8
  System_String_o *SUPERBOSS_ICON_SPNAME_PREFIX_BATTLE; // x20
  System_String_o *v6; // x0
  System_String_o *v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_4C41B62 & 1) == 0 )
  {
    sub_1C37058(&TitleInfoSuperBossStatusComponent_TypeInfo);
    byte_4C41B62 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_8;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  gameObject = (UnityEngine_GameObject_o *)TitleInfoSuperBossStatusComponent_TypeInfo;
  if ( !TitleInfoSuperBossStatusComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossStatusComponent_TypeInfo);
  superBossEntity = this->fields.superBossEntity;
  if ( !superBossEntity )
LABEL_8:
    sub_1C372B4(gameObject);
  SUPERBOSS_ICON_SPNAME_PREFIX_BATTLE = TitleInfoSuperBossStatusComponent_TypeInfo->static_fields->SUPERBOSS_ICON_SPNAME_PREFIX_BATTLE;
  v6 = System_Int32__ToString((int)superBossEntity + 56, 0);
  v7 = System_String__Concat_63561656(SUPERBOSS_ICON_SPNAME_PREFIX_BATTLE, v6, 0);
  TitleInfoSuperBossStatusComponent__SetBossIcon(this, v7, v8);
}


void TitleInfoSuperBossStatusComponent__SetClickCallBack(
        TitleInfoSuperBossStatusComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.clickCallBack = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.clickCallBack, (int32_t)callback, (int32_t)method, v3);
}


void TitleInfoSuperBossStatusComponent__SetEntryAnim(
        TitleInfoSuperBossStatusComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  float offsetY; // s0
  float v5; // s4
  TitleInfoSuperBossStatusComponent_c *v6; // x0
  float32x2_t *static_fields; // x8
  float32x2_t v8; // d0
  float v9; // s2
  float v10; // [xsp+0h] [xbp-30h]
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C41B61 & 1) == 0 )
  {
    sub_1C37058(&TitleInfoSuperBossStatusComponent_TypeInfo);
    sub_1C37058(&StringLiteral_6085/*"EntryAnim"*/);
    byte_4C41B61 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_9;
  localPosition = UnityEngine_Transform__get_localPosition(transform, 0);
  offsetY = this->fields.offsetY;
  this->fields.inPos.fields.x = 0.0;
  this->fields.inPos.fields.z = 0.0;
  v5 = localPosition.fields.y + offsetY;
  this->fields.inPos.fields.y = localPosition.fields.y + offsetY;
  v6 = TitleInfoSuperBossStatusComponent_TypeInfo;
  if ( !TitleInfoSuperBossStatusComponent_TypeInfo->_2.cctor_finished )
  {
    v10 = localPosition.fields.y + offsetY;
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossStatusComponent_TypeInfo);
    v5 = v10;
    v6 = TitleInfoSuperBossStatusComponent_TypeInfo;
  }
  static_fields = (float32x2_t *)v6->static_fields;
  v8.n64_u32[0] = 0;
  v8.n64_f32[1] = v5;
  v9 = static_fields[3].n64_f32[0];
  *(float32x2_t *)&this->fields.outPos.fields.x = vadd_f32(static_fields[2], v8);
  this->fields.outPos.fields.z = v9 + 0.0;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.outPos, 0),
        (transform = (UnityEngine_Transform_o *)this->fields.superBossIconSp) == 0) )
  {
LABEL_9:
    sub_1C372B4(transform);
  }
  ((void (__fastcall *)(UnityEngine_Transform_o *, _QWORD, float))transform->klass[1]._1.this_arg.data)(
    transform,
    *(_QWORD *)&transform->klass[1]._1.this_arg.bits,
    0.0);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6085/*"EntryAnim"*/,
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
  const MethodInfo *v4; // x3
  struct EventSuperBossEntity_o **p_superBossEntity; // x21
  UnityEngine_Object_o *gameObject; // x0
  UnityEngine_Object_o *v9; // x20
  struct EventSuperBossEntity_o *v10; // x8
  System_String_o *v11; // x21
  System_String_o *v12; // x0
  System_String_o *v13; // x0

  this->fields.superBossEntity = eventSuperBossEntity;
  p_superBossEntity = &this->fields.superBossEntity;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&this->fields.superBossEntity,
    (int32_t)eventSuperBossEntity,
    (int32_t)method,
    v4);
  this->fields.offsetY = offsetY;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (v9 = gameObject,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Object__get_name(gameObject, 0),
        (v10 = *p_superBossEntity) == 0) )
  {
    sub_1C372B4(gameObject);
  }
  v11 = (System_String_o *)gameObject;
  v12 = System_Int32__ToString((int)v10 + 20, 0);
  v13 = System_String__Concat_63561656(v11, v12, 0);
  UnityEngine_Object__set_name(v9, v13, 0);
  ((void (__fastcall *)(TitleInfoSuperBossStatusComponent_o *, const MethodInfo *))this->klass->vtable._5_UpdateDisp.methodPtr)(
    this,
    this->klass->vtable._5_UpdateDisp.method);
}


void TitleInfoSuperBossStatusComponent__StartClearAnim(
        TitleInfoSuperBossStatusComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v4; // x2
  float offsetY; // s0
  float v6; // s4
  TitleInfoSuperBossStatusComponent_c *v7; // x0
  float32x2_t *static_fields; // x8
  float32x2_t v9; // d0
  float v10; // s2
  float v11; // [xsp+0h] [xbp-30h]
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C41B63 & 1) == 0 )
  {
    sub_1C37058(&TitleInfoSuperBossStatusComponent_TypeInfo);
    sub_1C37058(&StringLiteral_2272/*"AnimFrameOutEnd"*/);
    byte_4C41B63 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    sub_1C372B4(0);
  localPosition = UnityEngine_Transform__get_localPosition(transform, 0);
  offsetY = this->fields.offsetY;
  this->fields.inPos.fields.x = 0.0;
  this->fields.inPos.fields.z = 0.0;
  v6 = localPosition.fields.y + offsetY;
  this->fields.inPos.fields.y = localPosition.fields.y + offsetY;
  v7 = TitleInfoSuperBossStatusComponent_TypeInfo;
  if ( !TitleInfoSuperBossStatusComponent_TypeInfo->_2.cctor_finished )
  {
    v11 = localPosition.fields.y + offsetY;
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossStatusComponent_TypeInfo);
    v6 = v11;
    v7 = TitleInfoSuperBossStatusComponent_TypeInfo;
  }
  static_fields = (float32x2_t *)v7->static_fields;
  v9.n64_u32[0] = 0;
  v9.n64_f32[1] = v6;
  v10 = static_fields[3].n64_f32[0];
  *(float32x2_t *)&this->fields.outPos.fields.x = vadd_f32(static_fields[2], v9);
  this->fields.outPos.fields.z = v10 + 0.0;
  TitleInfoSuperBossStatusComponent__FrameOut(this, (System_String_o *)StringLiteral_2272/*"AnimFrameOutEnd"*/, v4);
}


void TitleInfoSuperBossStatusComponent__UpdateDisp(TitleInfoSuperBossStatusComponent_o *this, const MethodInfo *method)
{
  EventSuperBossEntity_o *superBossEntity; // x0
  bool IsEncounted; // w20
  UnityEngine_GameObject_o *gameObject; // x0
  char v6; // w20
  TitleInfoSuperBossStatusComponent_c *v7; // x8
  struct EventSuperBossEntity_o *v8; // x9
  System_String_o **p_SUPERBOSS_ICON_SPNAME_PREFIX_BATTLE; // x8
  System_String_o *v10; // x20
  System_String_o *v11; // x0
  System_String_o *v12; // x0
  const MethodInfo *v13; // x2
  UnityEngine_Collider_o *boxCollider; // x20
  struct UISprite_o *superBossIconSp; // x8
  struct UISprite_o *v16; // x8
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C41B5F & 1) == 0 )
  {
    sub_1C37058(&TitleInfoSuperBossStatusComponent_TypeInfo);
    byte_4C41B5F = 1;
  }
  superBossEntity = this->fields.superBossEntity;
  if ( superBossEntity )
  {
    IsEncounted = EventSuperBossEntity__IsEncounted(superBossEntity, 0);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_21;
    if ( IsEncounted )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.superBossEntity;
      if ( gameObject )
      {
        gameObject = (UnityEngine_GameObject_o *)EventSuperBossEntity__IsCleard((EventSuperBossEntity_o *)gameObject, 0);
        v6 = (char)gameObject;
        v7 = TitleInfoSuperBossStatusComponent_TypeInfo;
        if ( !TitleInfoSuperBossStatusComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TitleInfoSuperBossStatusComponent_TypeInfo);
          v7 = TitleInfoSuperBossStatusComponent_TypeInfo;
        }
        v8 = this->fields.superBossEntity;
        if ( v8 )
        {
          p_SUPERBOSS_ICON_SPNAME_PREFIX_BATTLE = &v7->static_fields->SUPERBOSS_ICON_SPNAME_PREFIX_BATTLE;
          if ( (v6 & 1) != 0 )
            ++p_SUPERBOSS_ICON_SPNAME_PREFIX_BATTLE;
          v10 = *p_SUPERBOSS_ICON_SPNAME_PREFIX_BATTLE;
          v11 = System_Int32__ToString((int)v8 + 56, 0);
          v12 = System_String__Concat_63561656(v10, v11, 0);
          TitleInfoSuperBossStatusComponent__SetBossIcon(this, v12, v13);
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
                  v17.fields.z = 0.0;
                  v17.fields.x = (float)superBossIconSp->fields.mWidth * 0.5;
                  v17.fields.y = 0.0;
                  UnityEngine_BoxCollider__set_center((UnityEngine_BoxCollider_o *)gameObject, v17, 0);
                  v16 = this->fields.superBossIconSp;
                  if ( v16 )
                  {
                    gameObject = (UnityEngine_GameObject_o *)this->fields.boxCollider;
                    if ( gameObject )
                    {
                      v18.fields.y = (float)v16->fields.mHeight;
                      v18.fields.x = (float)v16->fields.mWidth;
                      v18.fields.z = 0.0;
                      UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)gameObject, v18, 0);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_21:
      sub_1C372B4(gameObject);
    }
    UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  }
}


void TitleInfoSuperBossStatusComponent__onClick(TitleInfoSuperBossStatusComponent_o *this, const MethodInfo *method)
{
  EventSuperBossEntity_o *superBossEntity; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0

  if ( (byte_4C41B60 & 1) == 0 )
  {
    sub_1C37058(&Method_TitleInfoSuperBossStatusComponent_onClick__);
    byte_4C41B60 = 1;
  }
  if ( !this->fields.clickCallBack )
    goto LABEL_6;
  superBossEntity = this->fields.superBossEntity;
  if ( !superBossEntity )
    sub_1C372B4(0);
  if ( !EventSuperBossEntity__IsCleard(superBossEntity, 0) )
  {
    ActionExtensions__Call(this->fields.clickCallBack, 0);
  }
  else
  {
LABEL_6:
    v4 = Method_TitleInfoSuperBossStatusComponent_onClick__;
    if ( (*((_BYTE *)Method_TitleInfoSuperBossStatusComponent_onClick__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C37070(Method_TitleInfoSuperBossStatusComponent_onClick__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C3703C(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 2, 0, 0);
  }
}