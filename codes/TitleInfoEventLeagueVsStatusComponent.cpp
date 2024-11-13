void __fastcall TitleInfoEventLeagueVsStatusComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  struct TitleInfoEventLeagueVsStatusComponent_StaticFields *static_fields; // x8

  if ( (byte_4B14510 & 1) == 0 )
  {
    sub_1BCA7E0(&TitleInfoEventLeagueVsStatusComponent_TypeInfo, v1, v2);
    byte_4B14510 = 1;
  }
  static_fields = TitleInfoEventLeagueVsStatusComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->FRAME_ANIM_OUT_POS_DELTA.fields.x = 3263954944LL;
  static_fields->FRAME_ANIM_OUT_POS_DELTA.fields.z = 0.0;
  *(int32x2_t *)&TitleInfoEventLeagueVsStatusComponent_TypeInfo->static_fields->FRAME_ANIM_DURATION = vdup_n_s32(0x3E99999Au);
}


void __fastcall TitleInfoEventLeagueVsStatusComponent___ctor(
        TitleInfoEventLeagueVsStatusComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall TitleInfoEventLeagueVsStatusComponent__AnimFrameOutEnd(
        TitleInfoEventLeagueVsStatusComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *v4; // x1

  if ( (byte_4B1450C & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_18186/*"clearAnimFinised"*/, method, v2);
    byte_4B1450C = 1;
  }
  if ( this->fields.clearAnimCallBack )
    v4 = (System_String_o *)StringLiteral_18186/*"clearAnimFinised"*/;
  else
    v4 = 0LL;
  TitleInfoEventLeagueVsStatusComponent__FrameIn(this, v4, v2);
}


double __fastcall TitleInfoEventLeagueVsStatusComponent__ConvertPointToRate(
        TitleInfoEventLeagueVsStatusComponent_o *this,
        int64_t point,
        int64_t maxPoint,
        const MethodInfo *method)
{
  return (double)point / (double)maxPoint;
}


void __fastcall TitleInfoEventLeagueVsStatusComponent__Destroy(
        TitleInfoEventLeagueVsStatusComponent_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall TitleInfoEventLeagueVsStatusComponent__EntryAnim(
        TitleInfoEventLeagueVsStatusComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  TitleInfoEventLeagueVsStatusComponent__FrameIn(this, 0LL, v2);
}


void __fastcall TitleInfoEventLeagueVsStatusComponent__FadeOut(
        TitleInfoEventLeagueVsStatusComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Component_o *Root; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1
  TitleInfoEventLeagueVsStatusComponent_c *v9; // x8
  UnityEngine_GameObject_o *v10; // x19

  if ( (byte_4B1450F & 1) == 0 )
  {
    sub_1BCA7E0(&TitleInfoEventLeagueVsStatusComponent_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_UITweener_Begin_TweenAlpha___, v4, v5);
    byte_4B1450F = 1;
  }
  Root = (UnityEngine_Component_o *)this->fields.Root;
  if ( !Root )
    goto LABEL_8;
  gameObject = UnityEngine_Component__get_gameObject(Root, 0LL);
  v9 = TitleInfoEventLeagueVsStatusComponent_TypeInfo;
  v10 = gameObject;
  if ( !TitleInfoEventLeagueVsStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventLeagueVsStatusComponent_TypeInfo, v8);
    v9 = TitleInfoEventLeagueVsStatusComponent_TypeInfo;
  }
  Root = (UnityEngine_Component_o *)UITweener__Begin_object_(
                                      v10,
                                      v9->static_fields->FRAME_ANIM_DURATION,
                                      (const MethodInfo_2FC6528 *)Method_UITweener_Begin_TweenAlpha___);
  if ( !Root )
LABEL_8:
    sub_1BCAA3C(Root, method);
  LODWORD(Root[1].monitor) = 2;
  Root[5].monitor = (void *)1065353216;
}


void __fastcall TitleInfoEventLeagueVsStatusComponent__FrameIn(
        TitleInfoEventLeagueVsStatusComponent_o *this,
        System_String_o *callFinished,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v10; // x1
  TitleInfoEventLeagueVsStatusComponent_c *v11; // x8
  UnityEngine_GameObject_o *v12; // x21
  char *Root; // x0
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

  if ( (byte_4B1450D & 1) == 0 )
  {
    sub_1BCA7E0(&TitleInfoEventLeagueVsStatusComponent_TypeInfo, callFinished, method);
    sub_1BCA7E0(&Method_UITweener_Begin_TweenAlpha___, v5, v6);
    sub_1BCA7E0(&Method_UITweener_Begin_TweenPosition___, v7, v8);
    byte_4B1450D = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v11 = TitleInfoEventLeagueVsStatusComponent_TypeInfo;
  v12 = gameObject;
  if ( !TitleInfoEventLeagueVsStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventLeagueVsStatusComponent_TypeInfo, v10);
    v11 = TitleInfoEventLeagueVsStatusComponent_TypeInfo;
  }
  Root = (char *)UITweener__Begin_object_(
                   v12,
                   v11->static_fields->FRAME_ANIM_DURATION,
                   (const MethodInfo_2FC6528 *)Method_UITweener_Begin_TweenPosition___);
  v32 = *(_QWORD *)&this->fields.outPos.fields.x;
  if ( !Root )
    goto LABEL_9;
  v15 = Root;
  *((_DWORD *)Root + 34) = LODWORD(this->fields.outPos.fields.z);
  *((_QWORD *)Root + 16) = v32;
  z = this->fields.inPos.fields.z;
  v17 = *(_QWORD *)&this->fields.inPos.fields.x;
  *((_DWORD *)Root + 8) = 6;
  *((float *)Root + 37) = z;
  *(_QWORD *)(Root + 140) = v17;
  v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  *((_QWORD *)v15 + 10) = v18;
  sub_1BCA784((PartyOrganizationUtility_o *)(v15 + 80), (int64_t)v18, v19, v20, v21, v22, v23, v24);
  *((_QWORD *)v15 + 11) = callFinished;
  sub_1BCA784((PartyOrganizationUtility_o *)(v15 + 88), (int64_t)callFinished, v25, v26, v27, v28, v29, v30);
  Root = (char *)this->fields.Root;
  if ( !Root
    || (v31 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Root, 0LL),
        (Root = (char *)UITweener__Begin_object_(
                          v31,
                          TitleInfoEventLeagueVsStatusComponent_TypeInfo->static_fields->FRAME_ANIM_DURATION,
                          (const MethodInfo_2FC6528 *)Method_UITweener_Begin_TweenAlpha___)) == 0LL) )
  {
LABEL_9:
    sub_1BCAA3C(Root, v14);
  }
  *((_QWORD *)Root + 16) = 0x3F80000000000000LL;
  *((_DWORD *)Root + 8) = 6;
}


void __fastcall TitleInfoEventLeagueVsStatusComponent__FrameOut(
        TitleInfoEventLeagueVsStatusComponent_o *this,
        System_String_o *callFinished,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v10; // x1
  TitleInfoEventLeagueVsStatusComponent_c *v11; // x8
  UnityEngine_GameObject_o *v12; // x21
  char *Root; // x0
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

  if ( (byte_4B1450E & 1) == 0 )
  {
    sub_1BCA7E0(&TitleInfoEventLeagueVsStatusComponent_TypeInfo, callFinished, method);
    sub_1BCA7E0(&Method_UITweener_Begin_TweenAlpha___, v5, v6);
    sub_1BCA7E0(&Method_UITweener_Begin_TweenPosition___, v7, v8);
    byte_4B1450E = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v11 = TitleInfoEventLeagueVsStatusComponent_TypeInfo;
  v12 = gameObject;
  if ( !TitleInfoEventLeagueVsStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventLeagueVsStatusComponent_TypeInfo, v10);
    v11 = TitleInfoEventLeagueVsStatusComponent_TypeInfo;
  }
  Root = (char *)UITweener__Begin_object_(
                   v12,
                   v11->static_fields->FRAME_ANIM_DURATION,
                   (const MethodInfo_2FC6528 *)Method_UITweener_Begin_TweenPosition___);
  v32 = *(_QWORD *)&this->fields.inPos.fields.x;
  if ( !Root )
    goto LABEL_9;
  v15 = Root;
  *((_DWORD *)Root + 34) = LODWORD(this->fields.inPos.fields.z);
  *((_QWORD *)Root + 16) = v32;
  z = this->fields.outPos.fields.z;
  v17 = *(_QWORD *)&this->fields.outPos.fields.x;
  *((_DWORD *)Root + 8) = 2;
  *((float *)Root + 37) = z;
  *(_QWORD *)(Root + 140) = v17;
  v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  *((_QWORD *)v15 + 10) = v18;
  sub_1BCA784((PartyOrganizationUtility_o *)(v15 + 80), (int64_t)v18, v19, v20, v21, v22, v23, v24);
  *((_QWORD *)v15 + 11) = callFinished;
  sub_1BCA784((PartyOrganizationUtility_o *)(v15 + 88), (int64_t)callFinished, v25, v26, v27, v28, v29, v30);
  Root = (char *)this->fields.Root;
  if ( !Root
    || (v31 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Root, 0LL),
        (Root = (char *)UITweener__Begin_object_(
                          v31,
                          TitleInfoEventLeagueVsStatusComponent_TypeInfo->static_fields->FRAME_ANIM_DURATION,
                          (const MethodInfo_2FC6528 *)Method_UITweener_Begin_TweenAlpha___)) == 0LL) )
  {
LABEL_9:
    sub_1BCAA3C(Root, v14);
  }
  *((_QWORD *)Root + 16) = 1065353216LL;
  *((_DWORD *)Root + 8) = 2;
}


bool __fastcall TitleInfoEventLeagueVsStatusComponent__IsDispPossible(
        TitleInfoEventLeagueVsStatusComponent_o *this,
        const MethodInfo *method)
{
  return 1;
}


bool __fastcall TitleInfoEventLeagueVsStatusComponent__IsEventRaidBoss(
        TitleInfoEventLeagueVsStatusComponent_o *this,
        const MethodInfo *method)
{
  return 0;
}


void __fastcall TitleInfoEventLeagueVsStatusComponent__OnDestroy(
        TitleInfoEventLeagueVsStatusComponent_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall TitleInfoEventLeagueVsStatusComponent__SetClearAnim(
        TitleInfoEventLeagueVsStatusComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventLeagueVsStatusComponent__SetEntryAnim(
        TitleInfoEventLeagueVsStatusComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Transform_o *transform; // x0
  __int64 v7; // x1
  __int64 v8; // x1
  float v9; // s1
  TitleInfoEventLeagueVsStatusComponent_c *v10; // x0
  float32x2_t *static_fields; // x8
  float32x2_t v12; // d0
  float v13; // s2
  float v14; // [xsp+0h] [xbp-30h]

  if ( (byte_4B1450A & 1) == 0 )
  {
    sub_1BCA7E0(&TitleInfoEventLeagueVsStatusComponent_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_6160/*"EntryAnim"*/, v4, v5);
    byte_4B1450A = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_9;
  *(UnityEngine_Vector3_o *)(&v9 - 1) = UnityEngine_Transform__get_localPosition(transform, 0LL);
  this->fields.inPos.fields.x = 0.0;
  this->fields.inPos.fields.y = v9;
  this->fields.inPos.fields.z = 0.0;
  v10 = TitleInfoEventLeagueVsStatusComponent_TypeInfo;
  if ( !TitleInfoEventLeagueVsStatusComponent_TypeInfo->_2.cctor_finished )
  {
    v14 = v9;
    j_il2cpp_runtime_class_init_0(TitleInfoEventLeagueVsStatusComponent_TypeInfo, v8);
    v9 = v14;
    v10 = TitleInfoEventLeagueVsStatusComponent_TypeInfo;
  }
  static_fields = (float32x2_t *)v10->static_fields;
  v12.n64_u32[0] = 0;
  v12.n64_f32[1] = v9;
  v13 = static_fields[1].n64_f32[0];
  *(float32x2_t *)&this->fields.outPos.fields.x = vadd_f32((float32x2_t)static_fields->n64_u64[0], v12);
  this->fields.outPos.fields.z = v13 + 0.0;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.outPos, 0LL),
        (transform = (UnityEngine_Transform_o *)this->fields.Root) == 0LL) )
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
    TitleInfoEventLeagueVsStatusComponent_TypeInfo->static_fields->ENTRY_ANIM_DELAY
  + (float)(this->fields.inPos.fields.y / -500.0),
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventLeagueVsStatusComponent__StartClearAnim(
        TitleInfoEventLeagueVsStatusComponent_o *this,
        System_Action_o *cb,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x2
  UnityEngine_Transform_o *transform; // x0
  __int64 v13; // x1
  __int64 v14; // x1
  const MethodInfo *v15; // x2
  float v16; // s1
  TitleInfoEventLeagueVsStatusComponent_c *v17; // x0
  float32x2_t *static_fields; // x8
  float32x2_t v19; // d0
  float v20; // s2
  float v21; // [xsp+0h] [xbp-30h]

  if ( (byte_4B1450B & 1) == 0 )
  {
    sub_1BCA7E0(&TitleInfoEventLeagueVsStatusComponent_TypeInfo, cb, method);
    sub_1BCA7E0(&StringLiteral_2392/*"AnimFrameOutEnd"*/, v10, v11);
    byte_4B1450B = 1;
  }
  this->fields.clearAnimCallBack = cb;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.clearAnimCallBack,
    (int64_t)cb,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_1BCAA3C(0LL, v13);
  *(UnityEngine_Vector3_o *)(&v16 - 1) = UnityEngine_Transform__get_localPosition(transform, 0LL);
  this->fields.inPos.fields.x = 0.0;
  this->fields.inPos.fields.y = v16;
  this->fields.inPos.fields.z = 0.0;
  v17 = TitleInfoEventLeagueVsStatusComponent_TypeInfo;
  if ( !TitleInfoEventLeagueVsStatusComponent_TypeInfo->_2.cctor_finished )
  {
    v21 = v16;
    j_il2cpp_runtime_class_init_0(TitleInfoEventLeagueVsStatusComponent_TypeInfo, v14);
    v16 = v21;
    v17 = TitleInfoEventLeagueVsStatusComponent_TypeInfo;
  }
  static_fields = (float32x2_t *)v17->static_fields;
  v19.n64_u32[0] = 0;
  v19.n64_f32[1] = v16;
  v20 = static_fields[1].n64_f32[0];
  *(float32x2_t *)&this->fields.outPos.fields.x = vadd_f32((float32x2_t)static_fields->n64_u64[0], v19);
  this->fields.outPos.fields.z = v20 + 0.0;
  TitleInfoEventLeagueVsStatusComponent__FrameOut(this, (System_String_o *)StringLiteral_2392/*"AnimFrameOutEnd"*/, v15);
}


void __fastcall TitleInfoEventLeagueVsStatusComponent__UpdateDisp(
        TitleInfoEventLeagueVsStatusComponent_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall TitleInfoEventLeagueVsStatusComponent__clearAnimFinised(
        TitleInfoEventLeagueVsStatusComponent_o *this,
        const MethodInfo *method)
{
  System_Action_o *clearAnimCallBack; // x0

  clearAnimCallBack = this->fields.clearAnimCallBack;
  if ( clearAnimCallBack )
    ActionExtensions__Call(clearAnimCallBack, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventLeagueVsStatusComponent__setup(
        TitleInfoEventLeagueVsStatusComponent_o *this,
        EventPointEntity_o *eventPointEntity,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 Instance; // x0
  __int64 v40; // x1
  Il2CppObject *MasterData_object; // x24
  Il2CppObject *v42; // x22
  struct UIWidget_o *Root; // x8
  unsigned __int8 v44; // w25
  __int64 v45; // x1
  Il2CppObject *v46; // x23
  int64_t Time; // x26
  struct System_Int32_array *v48; // x8
  unsigned __int64 v49; // x28
  __int64 v50; // x26
  unsigned __int64 max_length; // x9
  struct System_Int32_array *group1; // x8
  int32_t id; // w2
  int32_t v54; // w3
  struct System_Int32_array *group2; // x8
  float v56; // s0
  struct System_Int32_array *v57; // x8
  int32_t v58; // w8
  struct System_Int32_array *v59; // x8
  __int64 v60; // x23
  double v61; // d2
  float v62; // s0
  float v63; // s1
  float v64; // s0
  struct System_Int32_array *v65; // x8
  int32_t v66; // w8
  int32_t v67; // w8
  Il2CppObject *v68; // x0
  __int64 *v69; // x8
  struct System_Int32_array *v70; // x8
  struct System_Int32_array *v71; // x8
  struct System_Int32_array *v72; // x8
  struct System_Int32_array *v73; // x8
  UISprite_o *statusName; // x21
  __int64 v75; // x1
  System_String_o *v76; // x22
  UISprite_o *title; // x21
  Il2CppObject *v78; // x0
  System_String_o *v79; // x0
  UISprite_o *backGround; // x20
  Il2CppObject *v81; // x0
  System_String_o *v82; // x0
  unsigned __int64 v83; // x24
  Il2CppObject *v84; // x0
  struct System_Int32_array *v85; // x8
  int32_t v86; // [xsp+8h] [xbp-58h] BYREF
  int32_t v87; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4B14509 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, eventPointEntity, *(_QWORD *)&eventId);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventPointGroupMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_TotalEventPointMaster___, v11, v12);
    sub_1BCA7E0(&int_TypeInfo, v13, v14);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18);
    sub_1BCA7E0(&StringLiteral_16292/*"_01"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_16294/*"_03"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_16295/*"_04"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_17226/*"balance"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_19490/*"event_vs_status_bg_"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_19489/*"event_vs_status_"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_16296/*"_05"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_16293/*"_02"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_19491/*"event_vs_status_name_"*/, v37, v38);
    byte_4B14509 = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_TotalEventPointMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  v42 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventPointGroupMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  if ( !eventPointEntity )
    goto LABEL_18;
  if ( !Instance )
    goto LABEL_18;
  Instance = QuestReleaseMaster__IsQuestOfResultBattleCleared(
               (QuestReleaseMaster_o *)Instance,
               eventPointEntity->fields.id + 100 * eventPointEntity->fields.eventId,
               0LL);
  Root = this->fields.Root;
  if ( !Root )
    goto LABEL_18;
  v44 = Instance;
  ((void (__fastcall *)(struct UIWidget_o *, Il2CppMethodPointer, float))Root->klass->vtable._8_set_alpha.method)(
    this->fields.Root,
    Root->klass->vtable._9_CalculateFinalAlpha.methodPtr,
    0.0);
  v46 = (Il2CppObject *)StringLiteral_1/*""*/;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v45);
  Time = NetworkManager__getTime(0LL);
  Instance = EventPointEntity__isBossBattle(eventPointEntity, 0LL);
  if ( (Instance & 1) == 0 )
  {
    group1 = eventPointEntity->fields.group1;
    if ( !group1 )
      goto LABEL_18;
    if ( !group1->max_length )
      goto LABEL_88;
    if ( !MasterData_object )
      goto LABEL_18;
    id = eventPointEntity->fields.id;
    v54 = group1->m_Items[1];
    if ( (v44 & (eventPointEntity->fields.endedAt <= Time)) != 0 )
    {
      Instance = TotalEventPointMaster__IsGroupWin((TotalEventPointMaster_o *)MasterData_object, eventId, id, v54, 0LL);
      if ( (Instance & 1) != 0 )
      {
        group2 = eventPointEntity->fields.group1;
        if ( !group2 )
          goto LABEL_18;
      }
      else
      {
        group2 = eventPointEntity->fields.group2;
        if ( !group2 )
          goto LABEL_18;
      }
      if ( !group2->max_length )
        goto LABEL_88;
      if ( v42 )
      {
        Instance = (__int64)EventPointGroupMaster__getEntity(
                              (EventPointGroupMaster_o *)v42,
                              eventId,
                              group2->m_Items[1],
                              0LL);
        if ( Instance )
        {
          v67 = *(_DWORD *)(Instance + 32);
          goto LABEL_44;
        }
      }
    }
    else
    {
      Instance = TotalEventPointMaster__GetPoint((TotalEventPointMaster_o *)MasterData_object, eventId, id, v54, 0LL);
      v59 = eventPointEntity->fields.group2;
      if ( !v59 )
        goto LABEL_18;
      if ( !v59->max_length )
        goto LABEL_88;
      v60 = Instance;
      Instance = TotalEventPointMaster__GetPoint(
                   (TotalEventPointMaster_o *)MasterData_object,
                   eventId,
                   eventPointEntity->fields.id,
                   v59->m_Items[1],
                   0LL);
      v61 = (double)(Instance + v60);
      v62 = (double)v60 / v61;
      v63 = (double)Instance / v61;
      v64 = vabds_f32(v63, v62);
      if ( v64 >= 0.3 )
      {
        if ( v60 <= Instance )
        {
          v70 = eventPointEntity->fields.group2;
          if ( !v70 )
            goto LABEL_18;
        }
        else
        {
          v70 = eventPointEntity->fields.group1;
          if ( !v70 )
            goto LABEL_18;
        }
        if ( !v70->max_length )
          goto LABEL_88;
        if ( v42 )
        {
          Instance = (__int64)EventPointGroupMaster__getEntity(
                                (EventPointGroupMaster_o *)v42,
                                eventId,
                                v70->m_Items[1],
                                0LL);
          if ( Instance )
          {
            v58 = *(_DWORD *)(Instance + 32);
            goto LABEL_60;
          }
        }
      }
      else
      {
        if ( v64 < 0.15 )
        {
          v46 = (Il2CppObject *)StringLiteral_17226/*"balance"*/;
          goto LABEL_72;
        }
        if ( v60 <= Instance )
        {
          v72 = eventPointEntity->fields.group2;
          if ( !v72 )
            goto LABEL_18;
        }
        else
        {
          v72 = eventPointEntity->fields.group1;
          if ( !v72 )
            goto LABEL_18;
        }
        if ( !v72->max_length )
          goto LABEL_88;
        if ( v42 )
        {
          Instance = (__int64)EventPointGroupMaster__getEntity(
                                (EventPointGroupMaster_o *)v42,
                                eventId,
                                v72->m_Items[1],
                                0LL);
          if ( Instance )
          {
            v66 = *(_DWORD *)(Instance + 32);
            goto LABEL_70;
          }
        }
      }
    }
LABEL_18:
    sub_1BCAA3C(Instance, v40);
  }
  v48 = eventPointEntity->fields.group1;
  if ( !v48 )
    goto LABEL_18;
  v49 = 0LL;
  v50 = 0LL;
  while ( 1 )
  {
    max_length = v48->max_length;
    if ( (__int64)v49 >= (int)max_length )
      break;
    if ( v49 >= max_length )
      goto LABEL_88;
    if ( MasterData_object )
    {
      Instance = TotalEventPointMaster__GetPoint(
                   (TotalEventPointMaster_o *)MasterData_object,
                   eventId,
                   eventPointEntity->fields.id,
                   v48->m_Items[v49 + 1],
                   0LL);
      v48 = eventPointEntity->fields.group1;
      v50 += Instance;
      ++v49;
      if ( v48 )
        continue;
    }
    goto LABEL_18;
  }
  v56 = 1.0 - (double)v50 / (double)eventPointEntity->fields.normaTotalPoint;
  if ( v56 >= 0.75 )
  {
    v65 = eventPointEntity->fields.group2;
    if ( !v65 )
      goto LABEL_18;
    if ( !v65->max_length )
      goto LABEL_88;
    v66 = v65->m_Items[1];
LABEL_70:
    v87 = v66;
    v68 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v87);
    v69 = &StringLiteral_16292/*"_01"*/;
    goto LABEL_71;
  }
  if ( v56 >= 0.5 )
  {
    v57 = eventPointEntity->fields.group2;
    if ( v57 )
    {
      if ( v57->max_length )
      {
        v58 = v57->m_Items[1];
LABEL_60:
        v87 = v58;
        v68 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v87);
        v69 = &StringLiteral_16293/*"_02"*/;
        goto LABEL_71;
      }
LABEL_88:
      sub_1BCAA44(Instance, v40);
    }
    goto LABEL_18;
  }
  if ( v56 >= 0.25 )
  {
    v71 = eventPointEntity->fields.group2;
    if ( !v71 )
      goto LABEL_18;
    if ( !v71->max_length )
      goto LABEL_88;
    v67 = v71->m_Items[1];
LABEL_44:
    v87 = v67;
    v68 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v87);
    v69 = &StringLiteral_16294/*"_03"*/;
LABEL_71:
    v46 = (Il2CppObject *)System_String__Concat(v68, (Il2CppObject *)*v69, 0LL);
    goto LABEL_72;
  }
  if ( v56 >= 0.1 )
  {
    v73 = eventPointEntity->fields.group2;
    if ( v73 )
    {
      if ( v73->max_length )
      {
        v87 = v73->m_Items[1];
        v68 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v87);
        v69 = &StringLiteral_16295/*"_04"*/;
        goto LABEL_71;
      }
      goto LABEL_88;
    }
    goto LABEL_18;
  }
  if ( v56 < 0.1 && v56 > 0.0 || !(v44 & 1 | (v56 > 0.0)) )
  {
    v85 = eventPointEntity->fields.group2;
    if ( v85 )
    {
      if ( v85->max_length )
      {
        v87 = v85->m_Items[1];
        v68 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v87);
        v69 = &StringLiteral_16296/*"_05"*/;
        goto LABEL_71;
      }
      goto LABEL_88;
    }
    goto LABEL_18;
  }
  if ( (int)max_length >= 1 )
  {
    v83 = 0LL;
    while ( v83 < (unsigned int)max_length )
    {
      if ( !v42 )
        goto LABEL_18;
      Instance = (__int64)EventPointGroupMaster__getEntity(
                            (EventPointGroupMaster_o *)v42,
                            eventId,
                            v48->m_Items[v83 + 1],
                            0LL);
      if ( !Instance )
        goto LABEL_18;
      v87 = *(_DWORD *)(Instance + 32);
      v84 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v87);
      Instance = (__int64)System_String__Concat(v46, v84, 0LL);
      v48 = eventPointEntity->fields.group1;
      if ( !v48 )
        goto LABEL_18;
      LODWORD(max_length) = v48->max_length;
      ++v83;
      v46 = (Il2CppObject *)Instance;
      if ( (__int64)v83 >= (int)max_length )
        goto LABEL_72;
    }
    goto LABEL_88;
  }
LABEL_72:
  statusName = this->fields.statusName;
  v76 = System_String__Concat_62401220((System_String_o *)StringLiteral_19489/*"event_vs_status_"*/, (System_String_o *)v46, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v75);
  AtlasManager__SetEventUI(statusName, v76, 0LL);
  title = this->fields.title;
  v87 = eventPointEntity->fields.id;
  v78 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v87);
  v79 = System_String__Concat((Il2CppObject *)StringLiteral_19491/*"event_vs_status_name_"*/, v78, 0LL);
  AtlasManager__SetEventUI(title, v79, 0LL);
  backGround = this->fields.backGround;
  v86 = eventPointEntity->fields.id;
  v81 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v86);
  v82 = System_String__Concat((Il2CppObject *)StringLiteral_19490/*"event_vs_status_bg_"*/, v81, 0LL);
  AtlasManager__SetEventUI(backGround, v82, 0LL);
}