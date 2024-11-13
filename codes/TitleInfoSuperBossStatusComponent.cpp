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
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  int64_t v12; // x1
  struct TitleInfoSuperBossStatusComponent_StaticFields *static_fields; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  TitleInfoSuperBossStatusComponent_c *v20; // x8
  struct TitleInfoSuperBossStatusComponent_StaticFields *v21; // x9

  if ( (byte_4B14D0C & 1) == 0 )
  {
    sub_1BCA7E0(&TitleInfoSuperBossStatusComponent_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_19469/*"event_superboss_status_win_"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_19468/*"event_superboss_status_battle_"*/, v10, v11);
    byte_4B14D0C = 1;
  }
  TitleInfoSuperBossStatusComponent_TypeInfo->static_fields->SUPERBOSS_ICON_SPNAME_PREFIX_BATTLE = (struct System_String_o *)StringLiteral_19468/*"event_superboss_status_battle_"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)TitleInfoSuperBossStatusComponent_TypeInfo->static_fields,
    StringLiteral_19468/*"event_superboss_status_battle_"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v12 = StringLiteral_19469/*"event_superboss_status_win_"*/;
  static_fields = TitleInfoSuperBossStatusComponent_TypeInfo->static_fields;
  static_fields->SUPERBOSS_ICON_SPNAME_PREFIX_WIN = (struct System_String_o *)StringLiteral_19469/*"event_superboss_status_win_"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&static_fields->SUPERBOSS_ICON_SPNAME_PREFIX_WIN,
    v12,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v20 = TitleInfoSuperBossStatusComponent_TypeInfo;
  v21 = TitleInfoSuperBossStatusComponent_TypeInfo->static_fields;
  *(_QWORD *)&v21->FRAME_ANIM_OUT_POS_DELTA.fields.x = 3263954944LL;
  v21->FRAME_ANIM_OUT_POS_DELTA.fields.z = 0.0;
  *(_QWORD *)&v20->static_fields->FRAME_ANIM_DURATION = 0x3F0000003E99999ALL;
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
  __int64 v2; // x2
  TitleInfoSuperBossStatusComponent_c *v4; // x0
  struct EventSuperBossEntity_o *superBossEntity; // x8
  System_String_o *SUPERBOSS_ICON_SPNAME_PREFIX_WIN; // x20
  System_String_o *v7; // x0
  System_String_o *v8; // x0
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x2

  if ( (byte_4B14D09 & 1) == 0 )
  {
    sub_1BCA7E0(&TitleInfoSuperBossStatusComponent_TypeInfo, method, v2);
    byte_4B14D09 = 1;
  }
  v4 = TitleInfoSuperBossStatusComponent_TypeInfo;
  if ( !TitleInfoSuperBossStatusComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossStatusComponent_TypeInfo, method);
  superBossEntity = this->fields.superBossEntity;
  if ( !superBossEntity )
    sub_1BCAA3C(v4, method);
  SUPERBOSS_ICON_SPNAME_PREFIX_WIN = TitleInfoSuperBossStatusComponent_TypeInfo->static_fields->SUPERBOSS_ICON_SPNAME_PREFIX_WIN;
  v7 = System_Int32__ToString((int)superBossEntity + 56, 0LL);
  v8 = System_String__Concat_62401220(SUPERBOSS_ICON_SPNAME_PREFIX_WIN, v7, 0LL);
  TitleInfoSuperBossStatusComponent__SetBossIcon(this, v8, v9);
  TitleInfoSuperBossStatusComponent__FrameIn(this, 0LL, v10);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v10; // x1
  TitleInfoSuperBossStatusComponent_c *v11; // x8
  UnityEngine_GameObject_o *v12; // x21
  char *superBossIconSp; // x0
  __int64 v14; // x1
  char *v15; // x21
  float z; // w8
  __int64 v17; // x9
  UnityEngine_GameObject_o *v18; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  UnityEngine_GameObject_o *v31; // x0
  __int64 v32; // [xsp+0h] [xbp-40h]

  if ( (byte_4B14D0A & 1) == 0 )
  {
    sub_1BCA7E0(&TitleInfoSuperBossStatusComponent_TypeInfo, callFinished, method);
    sub_1BCA7E0(&Method_UITweener_Begin_TweenAlpha___, v5, v6);
    sub_1BCA7E0(&Method_UITweener_Begin_TweenPosition___, v7, v8);
    byte_4B14D0A = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v11 = TitleInfoSuperBossStatusComponent_TypeInfo;
  v12 = gameObject;
  if ( !TitleInfoSuperBossStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossStatusComponent_TypeInfo, v10);
    v11 = TitleInfoSuperBossStatusComponent_TypeInfo;
  }
  superBossIconSp = (char *)UITweener__Begin_object_(
                              v12,
                              v11->static_fields->FRAME_ANIM_DURATION,
                              (const MethodInfo_2FC6528 *)Method_UITweener_Begin_TweenPosition___);
  v32 = *(_QWORD *)&this->fields.outPos.fields.x;
  if ( !superBossIconSp )
    goto LABEL_9;
  v15 = superBossIconSp;
  *((_DWORD *)superBossIconSp + 34) = LODWORD(this->fields.outPos.fields.z);
  *((_QWORD *)superBossIconSp + 16) = v32;
  z = this->fields.inPos.fields.z;
  v17 = *(_QWORD *)&this->fields.inPos.fields.x;
  *((_DWORD *)superBossIconSp + 8) = 6;
  *((float *)superBossIconSp + 37) = z;
  *(_QWORD *)(superBossIconSp + 140) = v17;
  v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  *((_QWORD *)v15 + 10) = v18;
  sub_1BCA784((PartyOrganizationUtility_o *)(v15 + 80), (int64_t)v18, v19, v20, v21, v22, v23, v24);
  *((_QWORD *)v15 + 11) = callFinished;
  sub_1BCA784((PartyOrganizationUtility_o *)(v15 + 88), (int64_t)callFinished, v25, v26, v27, v28, v29, v30);
  superBossIconSp = (char *)this->fields.superBossIconSp;
  if ( !superBossIconSp
    || (v31 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)superBossIconSp, 0LL),
        (superBossIconSp = (char *)UITweener__Begin_object_(
                                     v31,
                                     TitleInfoSuperBossStatusComponent_TypeInfo->static_fields->FRAME_ANIM_DURATION,
                                     (const MethodInfo_2FC6528 *)Method_UITweener_Begin_TweenAlpha___)) == 0LL) )
  {
LABEL_9:
    sub_1BCAA3C(superBossIconSp, v14);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v10; // x1
  TitleInfoSuperBossStatusComponent_c *v11; // x8
  UnityEngine_GameObject_o *v12; // x21
  char *superBossIconSp; // x0
  __int64 v14; // x1
  char *v15; // x21
  float z; // w8
  __int64 v17; // x9
  UnityEngine_GameObject_o *v18; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  UnityEngine_GameObject_o *v31; // x0
  __int64 v32; // [xsp+0h] [xbp-40h]

  if ( (byte_4B14D0B & 1) == 0 )
  {
    sub_1BCA7E0(&TitleInfoSuperBossStatusComponent_TypeInfo, callFinished, method);
    sub_1BCA7E0(&Method_UITweener_Begin_TweenAlpha___, v5, v6);
    sub_1BCA7E0(&Method_UITweener_Begin_TweenPosition___, v7, v8);
    byte_4B14D0B = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v11 = TitleInfoSuperBossStatusComponent_TypeInfo;
  v12 = gameObject;
  if ( !TitleInfoSuperBossStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossStatusComponent_TypeInfo, v10);
    v11 = TitleInfoSuperBossStatusComponent_TypeInfo;
  }
  superBossIconSp = (char *)UITweener__Begin_object_(
                              v12,
                              v11->static_fields->FRAME_ANIM_DURATION,
                              (const MethodInfo_2FC6528 *)Method_UITweener_Begin_TweenPosition___);
  v32 = *(_QWORD *)&this->fields.inPos.fields.x;
  if ( !superBossIconSp )
    goto LABEL_9;
  v15 = superBossIconSp;
  *((_DWORD *)superBossIconSp + 34) = LODWORD(this->fields.inPos.fields.z);
  *((_QWORD *)superBossIconSp + 16) = v32;
  z = this->fields.outPos.fields.z;
  v17 = *(_QWORD *)&this->fields.outPos.fields.x;
  *((_DWORD *)superBossIconSp + 8) = 2;
  *((float *)superBossIconSp + 37) = z;
  *(_QWORD *)(superBossIconSp + 140) = v17;
  v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  *((_QWORD *)v15 + 10) = v18;
  sub_1BCA784((PartyOrganizationUtility_o *)(v15 + 80), (int64_t)v18, v19, v20, v21, v22, v23, v24);
  *((_QWORD *)v15 + 11) = callFinished;
  sub_1BCA784((PartyOrganizationUtility_o *)(v15 + 88), (int64_t)callFinished, v25, v26, v27, v28, v29, v30);
  superBossIconSp = (char *)this->fields.superBossIconSp;
  if ( !superBossIconSp
    || (v31 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)superBossIconSp, 0LL),
        (superBossIconSp = (char *)UITweener__Begin_object_(
                                     v31,
                                     TitleInfoSuperBossStatusComponent_TypeInfo->static_fields->FRAME_ANIM_DURATION,
                                     (const MethodInfo_2FC6528 *)Method_UITweener_Begin_TweenAlpha___)) == 0LL) )
  {
LABEL_9:
    sub_1BCAA3C(superBossIconSp, v14);
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

  if ( (byte_4B14D03 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, spName, method);
    byte_4B14D03 = 1;
  }
  superBossIconSp = this->fields.superBossIconSp;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, spName);
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
    sub_1BCAA3C(v6, v7);
  }
}


void __fastcall TitleInfoSuperBossStatusComponent__SetClearAnim(
        TitleInfoSuperBossStatusComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1
  struct EventSuperBossEntity_o *superBossEntity; // x8
  System_String_o *SUPERBOSS_ICON_SPNAME_PREFIX_BATTLE; // x20
  System_String_o *v8; // x0
  System_String_o *v9; // x1
  const MethodInfo *v10; // x2

  if ( (byte_4B14D07 & 1) == 0 )
  {
    sub_1BCA7E0(&TitleInfoSuperBossStatusComponent_TypeInfo, method, v2);
    byte_4B14D07 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_8;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = (UnityEngine_GameObject_o *)TitleInfoSuperBossStatusComponent_TypeInfo;
  if ( !TitleInfoSuperBossStatusComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossStatusComponent_TypeInfo, v5);
  superBossEntity = this->fields.superBossEntity;
  if ( !superBossEntity )
LABEL_8:
    sub_1BCAA3C(gameObject, v5);
  SUPERBOSS_ICON_SPNAME_PREFIX_BATTLE = TitleInfoSuperBossStatusComponent_TypeInfo->static_fields->SUPERBOSS_ICON_SPNAME_PREFIX_BATTLE;
  v8 = System_Int32__ToString((int)superBossEntity + 56, 0LL);
  v9 = System_String__Concat_62401220(SUPERBOSS_ICON_SPNAME_PREFIX_BATTLE, v8, 0LL);
  TitleInfoSuperBossStatusComponent__SetBossIcon(this, v9, v10);
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
  sub_1BCA784(
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Transform_o *transform; // x0
  __int64 v7; // x1
  __int64 v8; // x1
  float v9; // s1
  float offsetY; // s0
  float v11; // s4
  TitleInfoSuperBossStatusComponent_c *v12; // x0
  float32x2_t *static_fields; // x8
  float32x2_t v14; // d0
  float v15; // s2
  float v16; // [xsp+0h] [xbp-30h]

  if ( (byte_4B14D06 & 1) == 0 )
  {
    sub_1BCA7E0(&TitleInfoSuperBossStatusComponent_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_6160/*"EntryAnim"*/, v4, v5);
    byte_4B14D06 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_9;
  *(UnityEngine_Vector3_o *)(&v9 - 1) = UnityEngine_Transform__get_localPosition(transform, 0LL);
  offsetY = this->fields.offsetY;
  this->fields.inPos.fields.x = 0.0;
  this->fields.inPos.fields.z = 0.0;
  v11 = v9 + offsetY;
  this->fields.inPos.fields.y = v9 + offsetY;
  v12 = TitleInfoSuperBossStatusComponent_TypeInfo;
  if ( !TitleInfoSuperBossStatusComponent_TypeInfo->_2.cctor_finished )
  {
    v16 = v9 + offsetY;
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossStatusComponent_TypeInfo, v8);
    v11 = v16;
    v12 = TitleInfoSuperBossStatusComponent_TypeInfo;
  }
  static_fields = (float32x2_t *)v12->static_fields;
  v14.n64_u32[0] = 0;
  v14.n64_f32[1] = v11;
  v15 = static_fields[3].n64_f32[0];
  *(float32x2_t *)&this->fields.outPos.fields.x = vadd_f32(static_fields[2], v14);
  this->fields.outPos.fields.z = v15 + 0.0;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.outPos, 0LL),
        (transform = (UnityEngine_Transform_o *)this->fields.superBossIconSp) == 0LL) )
  {
LABEL_9:
    sub_1BCAA3C(transform, v7);
  }
  (*(void (__fastcall **)(UnityEngine_Transform_o *, Il2CppClass *, float))&transform->klass[1]._1.this_arg.bits)(
    transform,
    transform->klass[1]._1.element_class,
    0.0);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6160/*"EntryAnim"*/,
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
  sub_1BCA784(
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
    sub_1BCAA3C(gameObject, v13);
  }
  v16 = (System_String_o *)gameObject;
  v17 = System_Int32__ToString((int)v15 + 20, 0LL);
  v18 = System_String__Concat_62401220(v16, v17, 0LL);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Transform_o *transform; // x0
  __int64 v7; // x1
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  float v10; // s1
  float offsetY; // s0
  float v12; // s4
  TitleInfoSuperBossStatusComponent_c *v13; // x0
  float32x2_t *static_fields; // x8
  float32x2_t v15; // d0
  float v16; // s2
  float v17; // [xsp+0h] [xbp-30h]

  if ( (byte_4B14D08 & 1) == 0 )
  {
    sub_1BCA7E0(&TitleInfoSuperBossStatusComponent_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_2392/*"AnimFrameOutEnd"*/, v4, v5);
    byte_4B14D08 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_1BCAA3C(0LL, v7);
  *(UnityEngine_Vector3_o *)(&v10 - 1) = UnityEngine_Transform__get_localPosition(transform, 0LL);
  offsetY = this->fields.offsetY;
  this->fields.inPos.fields.x = 0.0;
  this->fields.inPos.fields.z = 0.0;
  v12 = v10 + offsetY;
  this->fields.inPos.fields.y = v10 + offsetY;
  v13 = TitleInfoSuperBossStatusComponent_TypeInfo;
  if ( !TitleInfoSuperBossStatusComponent_TypeInfo->_2.cctor_finished )
  {
    v17 = v10 + offsetY;
    j_il2cpp_runtime_class_init_0(TitleInfoSuperBossStatusComponent_TypeInfo, v8);
    v12 = v17;
    v13 = TitleInfoSuperBossStatusComponent_TypeInfo;
  }
  static_fields = (float32x2_t *)v13->static_fields;
  v15.n64_u32[0] = 0;
  v15.n64_f32[1] = v12;
  v16 = static_fields[3].n64_f32[0];
  *(float32x2_t *)&this->fields.outPos.fields.x = vadd_f32(static_fields[2], v15);
  this->fields.outPos.fields.z = v16 + 0.0;
  TitleInfoSuperBossStatusComponent__FrameOut(this, (System_String_o *)StringLiteral_2392/*"AnimFrameOutEnd"*/, v9);
}


void __fastcall TitleInfoSuperBossStatusComponent__UpdateDisp(
        TitleInfoSuperBossStatusComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  EventSuperBossEntity_o *superBossEntity; // x0
  bool IsEncounted; // w20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1
  char v8; // w20
  TitleInfoSuperBossStatusComponent_c *v9; // x8
  struct EventSuperBossEntity_o *v10; // x9
  System_String_o **p_SUPERBOSS_ICON_SPNAME_PREFIX_BATTLE; // x8
  System_String_o *v12; // x20
  System_String_o *v13; // x0
  System_String_o *v14; // x0
  const MethodInfo *v15; // x2
  UnityEngine_Collider_o *boxCollider; // x20
  struct UISprite_o *superBossIconSp; // x8
  struct UISprite_o *v18; // x8
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B14D04 & 1) == 0 )
  {
    sub_1BCA7E0(&TitleInfoSuperBossStatusComponent_TypeInfo, method, v2);
    byte_4B14D04 = 1;
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
        v8 = (char)gameObject;
        v9 = TitleInfoSuperBossStatusComponent_TypeInfo;
        if ( !TitleInfoSuperBossStatusComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TitleInfoSuperBossStatusComponent_TypeInfo, v7);
          v9 = TitleInfoSuperBossStatusComponent_TypeInfo;
        }
        v10 = this->fields.superBossEntity;
        if ( v10 )
        {
          p_SUPERBOSS_ICON_SPNAME_PREFIX_BATTLE = &v9->static_fields->SUPERBOSS_ICON_SPNAME_PREFIX_BATTLE;
          if ( (v8 & 1) != 0 )
            ++p_SUPERBOSS_ICON_SPNAME_PREFIX_BATTLE;
          v12 = *p_SUPERBOSS_ICON_SPNAME_PREFIX_BATTLE;
          v13 = System_Int32__ToString((int)v10 + 56, 0LL);
          v14 = System_String__Concat_62401220(v12, v13, 0LL);
          TitleInfoSuperBossStatusComponent__SetBossIcon(this, v14, v15);
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
                  v19.fields.z = 0.0;
                  v19.fields.x = (float)superBossIconSp->fields.mWidth * 0.5;
                  v19.fields.y = 0.0;
                  UnityEngine_BoxCollider__set_center((UnityEngine_BoxCollider_o *)gameObject, v19, 0LL);
                  v18 = this->fields.superBossIconSp;
                  if ( v18 )
                  {
                    gameObject = (UnityEngine_GameObject_o *)this->fields.boxCollider;
                    if ( gameObject )
                    {
                      v20.fields.y = (float)v18->fields.mHeight;
                      v20.fields.x = (float)v18->fields.mWidth;
                      v20.fields.z = 0.0;
                      UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)gameObject, v20, 0LL);
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
      sub_1BCAA3C(gameObject, v7);
    }
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  }
}


void __fastcall TitleInfoSuperBossStatusComponent__onClick(
        TitleInfoSuperBossStatusComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  EventSuperBossEntity_o *superBossEntity; // x0
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0

  if ( (byte_4B14D05 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_TitleInfoSuperBossStatusComponent_onClick__, method, v2);
    byte_4B14D05 = 1;
  }
  if ( !this->fields.clickCallBack )
    goto LABEL_6;
  superBossEntity = this->fields.superBossEntity;
  if ( !superBossEntity )
    sub_1BCAA3C(0LL, method);
  if ( !EventSuperBossEntity__IsCleard(superBossEntity, 0LL) )
  {
    ActionExtensions__Call(this->fields.clickCallBack, 0LL);
  }
  else
  {
LABEL_6:
    v5 = Method_TitleInfoSuperBossStatusComponent_onClick__;
    if ( (*((_BYTE *)Method_TitleInfoSuperBossStatusComponent_onClick__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BCA7F8(Method_TitleInfoSuperBossStatusComponent_onClick__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 2, 0LL);
  }
}