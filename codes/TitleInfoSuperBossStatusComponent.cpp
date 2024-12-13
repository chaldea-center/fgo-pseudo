void __fastcall TitleInfoSuperBossStatusComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  int64_t v10; // x1
  struct TitleInfoSuperBossStatusComponent_StaticFields *static_fields; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  TitleInfoSuperBossStatusComponent_c *v18; // x8
  struct TitleInfoSuperBossStatusComponent_StaticFields *v19; // x9

  if ( (byte_4B35CA4 & 1) == 0 )
  {
    sub_1BD3458(&TitleInfoSuperBossStatusComponent_TypeInfo, v1);
    sub_1BD3458(&StringLiteral_19498/*"event_superboss_status_win_"*/, v8);
    sub_1BD3458(&StringLiteral_19497/*"event_superboss_status_battle_"*/, v9);
    byte_4B35CA4 = 1;
  }
  TitleInfoSuperBossStatusComponent_TypeInfo->static_fields->SUPERBOSS_ICON_SPNAME_PREFIX_BATTLE = (struct System_String_o *)StringLiteral_19497/*"event_superboss_status_battle_"*/;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)TitleInfoSuperBossStatusComponent_TypeInfo->static_fields,
    StringLiteral_19497/*"event_superboss_status_battle_"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = StringLiteral_19498/*"event_superboss_status_win_"*/;
  static_fields = TitleInfoSuperBossStatusComponent_TypeInfo->static_fields;
  static_fields->SUPERBOSS_ICON_SPNAME_PREFIX_WIN = (struct System_String_o *)StringLiteral_19498/*"event_superboss_status_win_"*/;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&static_fields->SUPERBOSS_ICON_SPNAME_PREFIX_WIN,
    v10,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v18 = TitleInfoSuperBossStatusComponent_TypeInfo;
  v19 = TitleInfoSuperBossStatusComponent_TypeInfo->static_fields;
  *(_QWORD *)&v19->FRAME_ANIM_OUT_POS_DELTA.fields.x = 3263954944LL;
  v19->FRAME_ANIM_OUT_POS_DELTA.fields.z = 0.0;
  *(_QWORD *)&v18->static_fields->FRAME_ANIM_DURATION = 0x3F0000003E99999ALL;
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
  struct EventSuperBossEntity_o *superBossEntity; // x8
  System_String_o *SUPERBOSS_ICON_SPNAME_PREFIX_WIN; // x20
  System_String_o *v6; // x0
  System_String_o *v7; // x0
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x2

  if ( (byte_4B35CA1 & 1) == 0 )
  {
    sub_1BD3458(&TitleInfoSuperBossStatusComponent_TypeInfo, method);
    byte_4B35CA1 = 1;
  }
  v3 = TitleInfoSuperBossStatusComponent_TypeInfo;
  if ( !TitleInfoSuperBossStatusComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossStatusComponent_TypeInfo);
  superBossEntity = this->fields.superBossEntity;
  if ( !superBossEntity )
    sub_1BD36B4(v3, method);
  SUPERBOSS_ICON_SPNAME_PREFIX_WIN = TitleInfoSuperBossStatusComponent_TypeInfo->static_fields->SUPERBOSS_ICON_SPNAME_PREFIX_WIN;
  v6 = System_Int32__ToString((int)superBossEntity + 56, 0LL);
  v7 = System_String__Concat_62525248(SUPERBOSS_ICON_SPNAME_PREFIX_WIN, v6, 0LL);
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
  UnityEngine_GameObject_o *gameObject; // x0
  TitleInfoSuperBossStatusComponent_c *v8; // x8
  UnityEngine_GameObject_o *v9; // x21
  char *superBossIconSp; // x0
  __int64 v11; // x1
  char *v12; // x21
  float z; // w8
  __int64 v14; // x9
  UnityEngine_GameObject_o *v15; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  UnityEngine_GameObject_o *v28; // x0
  __int64 v29; // [xsp+0h] [xbp-40h]

  if ( (byte_4B35CA2 & 1) == 0 )
  {
    sub_1BD3458(&TitleInfoSuperBossStatusComponent_TypeInfo, callFinished);
    sub_1BD3458(&Method_UITweener_Begin_TweenAlpha___, v5);
    sub_1BD3458(&Method_UITweener_Begin_TweenPosition___, v6);
    byte_4B35CA2 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v8 = TitleInfoSuperBossStatusComponent_TypeInfo;
  v9 = gameObject;
  if ( !TitleInfoSuperBossStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossStatusComponent_TypeInfo);
    v8 = TitleInfoSuperBossStatusComponent_TypeInfo;
  }
  superBossIconSp = (char *)UITweener__Begin_object_(
                              v9,
                              v8->static_fields->FRAME_ANIM_DURATION,
                              (const MethodInfo_2FE5B60 *)Method_UITweener_Begin_TweenPosition___);
  v29 = *(_QWORD *)&this->fields.outPos.fields.x;
  if ( !superBossIconSp )
    goto LABEL_9;
  v12 = superBossIconSp;
  *((_DWORD *)superBossIconSp + 34) = LODWORD(this->fields.outPos.fields.z);
  *((_QWORD *)superBossIconSp + 16) = v29;
  z = this->fields.inPos.fields.z;
  v14 = *(_QWORD *)&this->fields.inPos.fields.x;
  *((_DWORD *)superBossIconSp + 8) = 6;
  *((float *)superBossIconSp + 37) = z;
  *(_QWORD *)(superBossIconSp + 140) = v14;
  v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  *((_QWORD *)v12 + 10) = v15;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v12 + 80), (int64_t)v15, v16, v17, v18, v19, v20, v21);
  *((_QWORD *)v12 + 11) = callFinished;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v12 + 88), (int64_t)callFinished, v22, v23, v24, v25, v26, v27);
  superBossIconSp = (char *)this->fields.superBossIconSp;
  if ( !superBossIconSp
    || (v28 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)superBossIconSp, 0LL),
        (superBossIconSp = (char *)UITweener__Begin_object_(
                                     v28,
                                     TitleInfoSuperBossStatusComponent_TypeInfo->static_fields->FRAME_ANIM_DURATION,
                                     (const MethodInfo_2FE5B60 *)Method_UITweener_Begin_TweenAlpha___)) == 0LL) )
  {
LABEL_9:
    sub_1BD36B4(superBossIconSp, v11);
  }
  *((_QWORD *)superBossIconSp + 16) = 0x3F80000000000000LL;
  *((_DWORD *)superBossIconSp + 8) = 6;
}


void __fastcall TitleInfoSuperBossStatusComponent__FrameOut(
        TitleInfoSuperBossStatusComponent_o *this,
        System_String_o *callFinished,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  TitleInfoSuperBossStatusComponent_c *v8; // x8
  UnityEngine_GameObject_o *v9; // x21
  char *superBossIconSp; // x0
  __int64 v11; // x1
  char *v12; // x21
  float z; // w8
  __int64 v14; // x9
  UnityEngine_GameObject_o *v15; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  UnityEngine_GameObject_o *v28; // x0
  __int64 v29; // [xsp+0h] [xbp-40h]

  if ( (byte_4B35CA3 & 1) == 0 )
  {
    sub_1BD3458(&TitleInfoSuperBossStatusComponent_TypeInfo, callFinished);
    sub_1BD3458(&Method_UITweener_Begin_TweenAlpha___, v5);
    sub_1BD3458(&Method_UITweener_Begin_TweenPosition___, v6);
    byte_4B35CA3 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v8 = TitleInfoSuperBossStatusComponent_TypeInfo;
  v9 = gameObject;
  if ( !TitleInfoSuperBossStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossStatusComponent_TypeInfo);
    v8 = TitleInfoSuperBossStatusComponent_TypeInfo;
  }
  superBossIconSp = (char *)UITweener__Begin_object_(
                              v9,
                              v8->static_fields->FRAME_ANIM_DURATION,
                              (const MethodInfo_2FE5B60 *)Method_UITweener_Begin_TweenPosition___);
  v29 = *(_QWORD *)&this->fields.inPos.fields.x;
  if ( !superBossIconSp )
    goto LABEL_9;
  v12 = superBossIconSp;
  *((_DWORD *)superBossIconSp + 34) = LODWORD(this->fields.inPos.fields.z);
  *((_QWORD *)superBossIconSp + 16) = v29;
  z = this->fields.outPos.fields.z;
  v14 = *(_QWORD *)&this->fields.outPos.fields.x;
  *((_DWORD *)superBossIconSp + 8) = 2;
  *((float *)superBossIconSp + 37) = z;
  *(_QWORD *)(superBossIconSp + 140) = v14;
  v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  *((_QWORD *)v12 + 10) = v15;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v12 + 80), (int64_t)v15, v16, v17, v18, v19, v20, v21);
  *((_QWORD *)v12 + 11) = callFinished;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v12 + 88), (int64_t)callFinished, v22, v23, v24, v25, v26, v27);
  superBossIconSp = (char *)this->fields.superBossIconSp;
  if ( !superBossIconSp
    || (v28 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)superBossIconSp, 0LL),
        (superBossIconSp = (char *)UITweener__Begin_object_(
                                     v28,
                                     TitleInfoSuperBossStatusComponent_TypeInfo->static_fields->FRAME_ANIM_DURATION,
                                     (const MethodInfo_2FE5B60 *)Method_UITweener_Begin_TweenAlpha___)) == 0LL) )
  {
LABEL_9:
    sub_1BD36B4(superBossIconSp, v11);
  }
  *((_QWORD *)superBossIconSp + 16) = 1065353216LL;
  *((_DWORD *)superBossIconSp + 8) = 2;
}


int32_t __fastcall TitleInfoSuperBossStatusComponent__GetBackBtnDepth(
        TitleInfoSuperBossStatusComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.backBtnDepth;
}


UnityEngine_Vector3_o __fastcall TitleInfoSuperBossStatusComponent__GetBossGridPosition(
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


UISprite_o *__fastcall TitleInfoSuperBossStatusComponent__GetIconSprite(
        TitleInfoSuperBossStatusComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.superBossIconSp;
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
  UISprite_o *superBossIconSp; // x21
  struct UISprite_o *v6; // x0
  __int64 v7; // x1

  if ( (byte_4B35C9B & 1) == 0 )
  {
    sub_1BD3458(&AtlasManager_TypeInfo, spName);
    byte_4B35C9B = 1;
  }
  superBossIconSp = this->fields.superBossIconSp;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  v6 = (struct UISprite_o *)AtlasManager__SetEventUI(superBossIconSp, spName, 0LL);
  if ( !superBossIconSp )
    goto LABEL_11;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)superBossIconSp, (unsigned __int8)v6 & 1, 0LL);
  v6 = this->fields.superBossIconSp;
  if ( !v6 )
    goto LABEL_11;
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)v6, 0LL) )
  {
    v6 = this->fields.superBossIconSp;
    if ( v6 )
    {
      ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v6->klass->vtable._33_MakePixelPerfect.method)(
        v6,
        v6->klass->vtable._34_get_minWidth.methodPtr);
      return;
    }
LABEL_11:
    sub_1BD36B4(v6, v7);
  }
}


void __fastcall TitleInfoSuperBossStatusComponent__SetClearAnim(
        TitleInfoSuperBossStatusComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  struct EventSuperBossEntity_o *superBossEntity; // x8
  System_String_o *SUPERBOSS_ICON_SPNAME_PREFIX_BATTLE; // x20
  System_String_o *v7; // x0
  System_String_o *v8; // x1
  const MethodInfo *v9; // x2

  if ( (byte_4B35C9F & 1) == 0 )
  {
    sub_1BD3458(&TitleInfoSuperBossStatusComponent_TypeInfo, method);
    byte_4B35C9F = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_8;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = (UnityEngine_GameObject_o *)TitleInfoSuperBossStatusComponent_TypeInfo;
  if ( !TitleInfoSuperBossStatusComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossStatusComponent_TypeInfo);
  superBossEntity = this->fields.superBossEntity;
  if ( !superBossEntity )
LABEL_8:
    sub_1BD36B4(gameObject, v4);
  SUPERBOSS_ICON_SPNAME_PREFIX_BATTLE = TitleInfoSuperBossStatusComponent_TypeInfo->static_fields->SUPERBOSS_ICON_SPNAME_PREFIX_BATTLE;
  v7 = System_Int32__ToString((int)superBossEntity + 56, 0LL);
  v8 = System_String__Concat_62525248(SUPERBOSS_ICON_SPNAME_PREFIX_BATTLE, v7, 0LL);
  TitleInfoSuperBossStatusComponent__SetBossIcon(this, v8, v9);
}


void __fastcall TitleInfoSuperBossStatusComponent__SetClickCallBack(
        TitleInfoSuperBossStatusComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.clickCallBack = callback;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields.clickCallBack,
    (int64_t)callback,
    (int64_t)method,
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
  __int64 v5; // x1
  float v6; // s1
  float offsetY; // s0
  float v8; // s4
  TitleInfoSuperBossStatusComponent_c *v9; // x0
  float32x2_t *static_fields; // x8
  float32x2_t v11; // d0
  float v12; // s2
  float v13; // [xsp+0h] [xbp-30h]

  if ( (byte_4B35C9E & 1) == 0 )
  {
    sub_1BD3458(&TitleInfoSuperBossStatusComponent_TypeInfo, method);
    sub_1BD3458(&StringLiteral_6172/*"EntryAnim"*/, v3);
    byte_4B35C9E = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_9;
  *(UnityEngine_Vector3_o *)(&v6 - 1) = UnityEngine_Transform__get_localPosition(transform, 0LL);
  offsetY = this->fields.offsetY;
  this->fields.inPos.fields.x = 0.0;
  this->fields.inPos.fields.z = 0.0;
  v8 = v6 + offsetY;
  this->fields.inPos.fields.y = v6 + offsetY;
  v9 = TitleInfoSuperBossStatusComponent_TypeInfo;
  if ( !TitleInfoSuperBossStatusComponent_TypeInfo->_2.cctor_finished )
  {
    v13 = v6 + offsetY;
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossStatusComponent_TypeInfo);
    v8 = v13;
    v9 = TitleInfoSuperBossStatusComponent_TypeInfo;
  }
  static_fields = (float32x2_t *)v9->static_fields;
  v11.n64_u32[0] = 0;
  v11.n64_f32[1] = v8;
  v12 = static_fields[3].n64_f32[0];
  *(float32x2_t *)&this->fields.outPos.fields.x = vadd_f32(static_fields[2], v11);
  this->fields.outPos.fields.z = v12 + 0.0;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.outPos, 0LL),
        (transform = (UnityEngine_Transform_o *)this->fields.superBossIconSp) == 0LL) )
  {
LABEL_9:
    sub_1BD36B4(transform, v5);
  }
  (*(void (__fastcall **)(UnityEngine_Transform_o *, Il2CppClass *, float))&transform->klass[1]._1.this_arg.bits)(
    transform,
    transform->klass[1]._1.element_class,
    0.0);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6172/*"EntryAnim"*/,
    TitleInfoSuperBossStatusComponent_TypeInfo->static_fields->ENTRY_ANIM_DELAY
  + (float)(this->fields.inPos.fields.y / -500.0),
    0LL);
}


void __fastcall TitleInfoSuperBossStatusComponent__Setup(
        TitleInfoSuperBossStatusComponent_o *this,
        EventSuperBossEntity_o *eventSuperBossEntity,
        float offsetY,
        const MethodInfo *method)
{
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
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
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields.superBossEntity,
    (int64_t)eventSuperBossEntity,
    (int64_t)method,
    v4,
    v5,
    v6,
    v7,
    v8);
  this->fields.offsetY = offsetY;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (v14 = gameObject,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Object__get_name(gameObject, 0LL),
        (v15 = *p_superBossEntity) == 0LL) )
  {
    sub_1BD36B4(gameObject, v13);
  }
  v16 = (System_String_o *)gameObject;
  v17 = System_Int32__ToString((int)v15 + 20, 0LL);
  v18 = System_String__Concat_62525248(v16, v17, 0LL);
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
  __int64 v3; // x1
  UnityEngine_Transform_o *transform; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  float v7; // s1
  float offsetY; // s0
  float v9; // s4
  TitleInfoSuperBossStatusComponent_c *v10; // x0
  float32x2_t *static_fields; // x8
  float32x2_t v12; // d0
  float v13; // s2
  float v14; // [xsp+0h] [xbp-30h]

  if ( (byte_4B35CA0 & 1) == 0 )
  {
    sub_1BD3458(&TitleInfoSuperBossStatusComponent_TypeInfo, method);
    sub_1BD3458(&StringLiteral_2397/*"AnimFrameOutEnd"*/, v3);
    byte_4B35CA0 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_1BD36B4(0LL, v5);
  *(UnityEngine_Vector3_o *)(&v7 - 1) = UnityEngine_Transform__get_localPosition(transform, 0LL);
  offsetY = this->fields.offsetY;
  this->fields.inPos.fields.x = 0.0;
  this->fields.inPos.fields.z = 0.0;
  v9 = v7 + offsetY;
  this->fields.inPos.fields.y = v7 + offsetY;
  v10 = TitleInfoSuperBossStatusComponent_TypeInfo;
  if ( !TitleInfoSuperBossStatusComponent_TypeInfo->_2.cctor_finished )
  {
    v14 = v7 + offsetY;
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossStatusComponent_TypeInfo);
    v9 = v14;
    v10 = TitleInfoSuperBossStatusComponent_TypeInfo;
  }
  static_fields = (float32x2_t *)v10->static_fields;
  v12.n64_u32[0] = 0;
  v12.n64_f32[1] = v9;
  v13 = static_fields[3].n64_f32[0];
  *(float32x2_t *)&this->fields.outPos.fields.x = vadd_f32(static_fields[2], v12);
  this->fields.outPos.fields.z = v13 + 0.0;
  TitleInfoSuperBossStatusComponent__FrameOut(this, (System_String_o *)StringLiteral_2397/*"AnimFrameOutEnd"*/, v6);
}


void __fastcall TitleInfoSuperBossStatusComponent__UpdateDisp(
        TitleInfoSuperBossStatusComponent_o *this,
        const MethodInfo *method)
{
  EventSuperBossEntity_o *superBossEntity; // x0
  bool IsEncounted; // w20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  char v7; // w20
  TitleInfoSuperBossStatusComponent_c *v8; // x8
  struct EventSuperBossEntity_o *v9; // x9
  System_String_o **p_SUPERBOSS_ICON_SPNAME_PREFIX_BATTLE; // x8
  System_String_o *v11; // x20
  System_String_o *v12; // x0
  System_String_o *v13; // x0
  const MethodInfo *v14; // x2
  UnityEngine_Collider_o *boxCollider; // x20
  struct UISprite_o *superBossIconSp; // x8
  struct UISprite_o *v17; // x8
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B35C9C & 1) == 0 )
  {
    sub_1BD3458(&TitleInfoSuperBossStatusComponent_TypeInfo, method);
    byte_4B35C9C = 1;
  }
  superBossEntity = this->fields.superBossEntity;
  if ( superBossEntity )
  {
    IsEncounted = EventSuperBossEntity__IsEncounted(superBossEntity, 0LL);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_21;
    if ( IsEncounted )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      gameObject = (UnityEngine_GameObject_o *)this->fields.superBossEntity;
      if ( gameObject )
      {
        gameObject = (UnityEngine_GameObject_o *)EventSuperBossEntity__IsCleard(
                                                   (EventSuperBossEntity_o *)gameObject,
                                                   0LL);
        v7 = (char)gameObject;
        v8 = TitleInfoSuperBossStatusComponent_TypeInfo;
        if ( !TitleInfoSuperBossStatusComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TitleInfoSuperBossStatusComponent_TypeInfo);
          v8 = TitleInfoSuperBossStatusComponent_TypeInfo;
        }
        v9 = this->fields.superBossEntity;
        if ( v9 )
        {
          p_SUPERBOSS_ICON_SPNAME_PREFIX_BATTLE = &v8->static_fields->SUPERBOSS_ICON_SPNAME_PREFIX_BATTLE;
          if ( (v7 & 1) != 0 )
            ++p_SUPERBOSS_ICON_SPNAME_PREFIX_BATTLE;
          v11 = *p_SUPERBOSS_ICON_SPNAME_PREFIX_BATTLE;
          v12 = System_Int32__ToString((int)v9 + 56, 0LL);
          v13 = System_String__Concat_62525248(v11, v12, 0LL);
          TitleInfoSuperBossStatusComponent__SetBossIcon(this, v13, v14);
          gameObject = (UnityEngine_GameObject_o *)this->fields.superBossIconSp;
          if ( gameObject )
          {
            boxCollider = (UnityEngine_Collider_o *)this->fields.boxCollider;
            gameObject = (UnityEngine_GameObject_o *)UnityEngine_Behaviour__get_enabled(
                                                       (UnityEngine_Behaviour_o *)gameObject,
                                                       0LL);
            if ( boxCollider )
            {
              UnityEngine_Collider__set_enabled(boxCollider, (unsigned __int8)gameObject & 1, 0LL);
              superBossIconSp = this->fields.superBossIconSp;
              if ( superBossIconSp )
              {
                gameObject = (UnityEngine_GameObject_o *)this->fields.boxCollider;
                if ( gameObject )
                {
                  v18.fields.z = 0.0;
                  v18.fields.x = (float)superBossIconSp->fields.mWidth * 0.5;
                  v18.fields.y = 0.0;
                  UnityEngine_BoxCollider__set_center((UnityEngine_BoxCollider_o *)gameObject, v18, 0LL);
                  v17 = this->fields.superBossIconSp;
                  if ( v17 )
                  {
                    gameObject = (UnityEngine_GameObject_o *)this->fields.boxCollider;
                    if ( gameObject )
                    {
                      v19.fields.y = (float)v17->fields.mHeight;
                      v19.fields.x = (float)v17->fields.mWidth;
                      v19.fields.z = 0.0;
                      UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)gameObject, v19, 0LL);
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
      sub_1BD36B4(gameObject, v6);
    }
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  }
}


void __fastcall TitleInfoSuperBossStatusComponent__onClick(
        TitleInfoSuperBossStatusComponent_o *this,
        const MethodInfo *method)
{
  EventSuperBossEntity_o *superBossEntity; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0

  if ( (byte_4B35C9D & 1) == 0 )
  {
    sub_1BD3458(&Method_TitleInfoSuperBossStatusComponent_onClick__, method);
    byte_4B35C9D = 1;
  }
  if ( !this->fields.clickCallBack )
    goto LABEL_6;
  superBossEntity = this->fields.superBossEntity;
  if ( !superBossEntity )
    sub_1BD36B4(0LL, method);
  if ( !EventSuperBossEntity__IsCleard(superBossEntity, 0LL) )
  {
    ActionExtensions__Call(this->fields.clickCallBack, 0LL);
  }
  else
  {
LABEL_6:
    v4 = Method_TitleInfoSuperBossStatusComponent_onClick__;
    if ( (*((_BYTE *)Method_TitleInfoSuperBossStatusComponent_onClick__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BD3470(Method_TitleInfoSuperBossStatusComponent_onClick__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BD343C(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 2, 0LL);
  }
}