void TitleInfoEventLeagueVsStatusComponent___cctor(const MethodInfo *method)
{
  struct TitleInfoEventLeagueVsStatusComponent_StaticFields *static_fields; // x8

  if ( (byte_4C54CCE & 1) == 0 )
  {
    sub_1C3E564(&TitleInfoEventLeagueVsStatusComponent_TypeInfo);
    byte_4C54CCE = 1;
  }
  static_fields = TitleInfoEventLeagueVsStatusComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->FRAME_ANIM_OUT_POS_DELTA.fields.x = 3263954944LL;
  static_fields->FRAME_ANIM_OUT_POS_DELTA.fields.z = 0.0;
  *(int32x2_t *)&TitleInfoEventLeagueVsStatusComponent_TypeInfo->static_fields->FRAME_ANIM_DURATION = vdup_n_s32(0x3E99999Au);
}


void TitleInfoEventLeagueVsStatusComponent___ctor(
        TitleInfoEventLeagueVsStatusComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void TitleInfoEventLeagueVsStatusComponent__AnimFrameOutEnd(
        TitleInfoEventLeagueVsStatusComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *v4; // x1

  if ( (byte_4C54CCA & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_18019/*"clearAnimFinised"*/);
    byte_4C54CCA = 1;
  }
  if ( this->fields.clearAnimCallBack )
    v4 = (System_String_o *)StringLiteral_18019/*"clearAnimFinised"*/;
  else
    v4 = 0;
  TitleInfoEventLeagueVsStatusComponent__FrameIn(this, v4, v2);
}


double TitleInfoEventLeagueVsStatusComponent__ConvertPointToRate(
        TitleInfoEventLeagueVsStatusComponent_o *this,
        int64_t point,
        int64_t maxPoint,
        const MethodInfo *method)
{
  return (double)point / (double)maxPoint;
}


void TitleInfoEventLeagueVsStatusComponent__Destroy(
        TitleInfoEventLeagueVsStatusComponent_o *this,
        const MethodInfo *method)
{
  ;
}


void TitleInfoEventLeagueVsStatusComponent__EntryAnim(
        TitleInfoEventLeagueVsStatusComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  TitleInfoEventLeagueVsStatusComponent__FrameIn(this, 0, v2);
}


void TitleInfoEventLeagueVsStatusComponent__FadeOut(
        TitleInfoEventLeagueVsStatusComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *Root; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  TitleInfoEventLeagueVsStatusComponent_c *v5; // x8
  UnityEngine_GameObject_o *v6; // x19

  if ( (byte_4C54CCD & 1) == 0 )
  {
    sub_1C3E564(&TitleInfoEventLeagueVsStatusComponent_TypeInfo);
    sub_1C3E564(&Method_UITweener_Begin_TweenAlpha___);
    byte_4C54CCD = 1;
  }
  Root = (UnityEngine_Component_o *)this->fields.Root;
  if ( !Root )
    goto LABEL_8;
  gameObject = UnityEngine_Component__get_gameObject(Root, 0);
  v5 = TitleInfoEventLeagueVsStatusComponent_TypeInfo;
  v6 = gameObject;
  if ( !TitleInfoEventLeagueVsStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventLeagueVsStatusComponent_TypeInfo);
    v5 = TitleInfoEventLeagueVsStatusComponent_TypeInfo;
  }
  Root = (UnityEngine_Component_o *)UITweener__Begin_object_(
                                      v6,
                                      v5->static_fields->FRAME_ANIM_DURATION,
                                      (const MethodInfo_31B54C4 *)Method_UITweener_Begin_TweenAlpha___);
  if ( !Root )
LABEL_8:
    sub_1C3E7C0(Root, method);
  LODWORD(Root[1].monitor) = 2;
  Root[5].monitor = (void *)1065353216;
}


void TitleInfoEventLeagueVsStatusComponent__FrameIn(
        TitleInfoEventLeagueVsStatusComponent_o *this,
        System_String_o *callFinished,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  TitleInfoEventLeagueVsStatusComponent_c *v6; // x8
  UnityEngine_GameObject_o *v7; // x21
  char *Root; // x0
  __int64 v9; // x1
  char *v10; // x21
  float z; // w8
  __int64 v12; // x9
  UnityEngine_GameObject_o *v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  UnityEngine_GameObject_o *v18; // x0
  __int64 v19; // [xsp+0h] [xbp-40h]

  if ( (byte_4C54CCB & 1) == 0 )
  {
    sub_1C3E564(&TitleInfoEventLeagueVsStatusComponent_TypeInfo);
    sub_1C3E564(&Method_UITweener_Begin_TweenAlpha___);
    sub_1C3E564(&Method_UITweener_Begin_TweenPosition___);
    byte_4C54CCB = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v6 = TitleInfoEventLeagueVsStatusComponent_TypeInfo;
  v7 = gameObject;
  if ( !TitleInfoEventLeagueVsStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventLeagueVsStatusComponent_TypeInfo);
    v6 = TitleInfoEventLeagueVsStatusComponent_TypeInfo;
  }
  Root = (char *)UITweener__Begin_object_(
                   v7,
                   v6->static_fields->FRAME_ANIM_DURATION,
                   (const MethodInfo_31B54C4 *)Method_UITweener_Begin_TweenPosition___);
  v19 = *(_QWORD *)&this->fields.outPos.fields.x;
  if ( !Root )
    goto LABEL_9;
  v10 = Root;
  *((_DWORD *)Root + 34) = LODWORD(this->fields.outPos.fields.z);
  *((_QWORD *)Root + 16) = v19;
  z = this->fields.inPos.fields.z;
  v12 = *(_QWORD *)&this->fields.inPos.fields.x;
  *((_DWORD *)Root + 8) = 6;
  *((float *)Root + 37) = z;
  *(_QWORD *)(Root + 140) = v12;
  v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  *((_QWORD *)v10 + 10) = v13;
  sub_1C3E508((CGThumbnailListItem_o *)(v10 + 80), (int32_t)v13, v14, v15);
  *((_QWORD *)v10 + 11) = callFinished;
  sub_1C3E508((CGThumbnailListItem_o *)(v10 + 88), (int32_t)callFinished, v16, v17);
  Root = (char *)this->fields.Root;
  if ( !Root
    || (v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Root, 0),
        (Root = (char *)UITweener__Begin_object_(
                          v18,
                          TitleInfoEventLeagueVsStatusComponent_TypeInfo->static_fields->FRAME_ANIM_DURATION,
                          (const MethodInfo_31B54C4 *)Method_UITweener_Begin_TweenAlpha___)) == 0) )
  {
LABEL_9:
    sub_1C3E7C0(Root, v9);
  }
  *((_QWORD *)Root + 16) = 0x3F80000000000000LL;
  *((_DWORD *)Root + 8) = 6;
}


void TitleInfoEventLeagueVsStatusComponent__FrameOut(
        TitleInfoEventLeagueVsStatusComponent_o *this,
        System_String_o *callFinished,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  TitleInfoEventLeagueVsStatusComponent_c *v6; // x8
  UnityEngine_GameObject_o *v7; // x21
  char *Root; // x0
  __int64 v9; // x1
  char *v10; // x21
  float z; // w8
  __int64 v12; // x9
  UnityEngine_GameObject_o *v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  UnityEngine_GameObject_o *v18; // x0
  __int64 v19; // [xsp+0h] [xbp-40h]

  if ( (byte_4C54CCC & 1) == 0 )
  {
    sub_1C3E564(&TitleInfoEventLeagueVsStatusComponent_TypeInfo);
    sub_1C3E564(&Method_UITweener_Begin_TweenAlpha___);
    sub_1C3E564(&Method_UITweener_Begin_TweenPosition___);
    byte_4C54CCC = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v6 = TitleInfoEventLeagueVsStatusComponent_TypeInfo;
  v7 = gameObject;
  if ( !TitleInfoEventLeagueVsStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventLeagueVsStatusComponent_TypeInfo);
    v6 = TitleInfoEventLeagueVsStatusComponent_TypeInfo;
  }
  Root = (char *)UITweener__Begin_object_(
                   v7,
                   v6->static_fields->FRAME_ANIM_DURATION,
                   (const MethodInfo_31B54C4 *)Method_UITweener_Begin_TweenPosition___);
  v19 = *(_QWORD *)&this->fields.inPos.fields.x;
  if ( !Root )
    goto LABEL_9;
  v10 = Root;
  *((_DWORD *)Root + 34) = LODWORD(this->fields.inPos.fields.z);
  *((_QWORD *)Root + 16) = v19;
  z = this->fields.outPos.fields.z;
  v12 = *(_QWORD *)&this->fields.outPos.fields.x;
  *((_DWORD *)Root + 8) = 2;
  *((float *)Root + 37) = z;
  *(_QWORD *)(Root + 140) = v12;
  v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  *((_QWORD *)v10 + 10) = v13;
  sub_1C3E508((CGThumbnailListItem_o *)(v10 + 80), (int32_t)v13, v14, v15);
  *((_QWORD *)v10 + 11) = callFinished;
  sub_1C3E508((CGThumbnailListItem_o *)(v10 + 88), (int32_t)callFinished, v16, v17);
  Root = (char *)this->fields.Root;
  if ( !Root
    || (v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Root, 0),
        (Root = (char *)UITweener__Begin_object_(
                          v18,
                          TitleInfoEventLeagueVsStatusComponent_TypeInfo->static_fields->FRAME_ANIM_DURATION,
                          (const MethodInfo_31B54C4 *)Method_UITweener_Begin_TweenAlpha___)) == 0) )
  {
LABEL_9:
    sub_1C3E7C0(Root, v9);
  }
  *((_QWORD *)Root + 16) = 1065353216;
  *((_DWORD *)Root + 8) = 2;
}


bool TitleInfoEventLeagueVsStatusComponent__IsDispPossible(
        TitleInfoEventLeagueVsStatusComponent_o *this,
        const MethodInfo *method)
{
  return 1;
}


bool TitleInfoEventLeagueVsStatusComponent__IsEventRaidBoss(
        TitleInfoEventLeagueVsStatusComponent_o *this,
        const MethodInfo *method)
{
  return 0;
}


void TitleInfoEventLeagueVsStatusComponent__OnDestroy(
        TitleInfoEventLeagueVsStatusComponent_o *this,
        const MethodInfo *method)
{
  ;
}


void TitleInfoEventLeagueVsStatusComponent__SetClearAnim(
        TitleInfoEventLeagueVsStatusComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C3E7C0(0, v3);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
}


void TitleInfoEventLeagueVsStatusComponent__SetEntryAnim(
        TitleInfoEventLeagueVsStatusComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  TitleInfoEventLeagueVsStatusComponent_c *v5; // x0
  float32x2_t *static_fields; // x8
  float32x2_t v7; // d0
  float v8; // s2
  float y; // [xsp+0h] [xbp-30h]
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C54CC8 & 1) == 0 )
  {
    sub_1C3E564(&TitleInfoEventLeagueVsStatusComponent_TypeInfo);
    sub_1C3E564(&StringLiteral_6085/*"EntryAnim"*/);
    byte_4C54CC8 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_9;
  localPosition = UnityEngine_Transform__get_localPosition(transform, 0);
  this->fields.inPos.fields.x = 0.0;
  this->fields.inPos.fields.y = localPosition.fields.y;
  this->fields.inPos.fields.z = 0.0;
  v5 = TitleInfoEventLeagueVsStatusComponent_TypeInfo;
  if ( !TitleInfoEventLeagueVsStatusComponent_TypeInfo->_2.cctor_finished )
  {
    y = localPosition.fields.y;
    j_il2cpp_runtime_class_init_0(TitleInfoEventLeagueVsStatusComponent_TypeInfo);
    localPosition.fields.y = y;
    v5 = TitleInfoEventLeagueVsStatusComponent_TypeInfo;
  }
  static_fields = (float32x2_t *)v5->static_fields;
  v7.n64_u32[0] = 0;
  v7.n64_u32[1] = LODWORD(localPosition.fields.y);
  v8 = static_fields[1].n64_f32[0];
  *(float32x2_t *)&this->fields.outPos.fields.x = vadd_f32((float32x2_t)static_fields->n64_u64[0], v7);
  this->fields.outPos.fields.z = v8 + 0.0;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.outPos, 0),
        (transform = (UnityEngine_Transform_o *)this->fields.Root) == 0) )
  {
LABEL_9:
    sub_1C3E7C0(transform, v4);
  }
  ((void (__fastcall *)(UnityEngine_Transform_o *, _QWORD, float))transform->klass[1]._1.this_arg.data)(
    transform,
    *(_QWORD *)&transform->klass[1]._1.this_arg.bits,
    0.0);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6085/*"EntryAnim"*/,
    TitleInfoEventLeagueVsStatusComponent_TypeInfo->static_fields->ENTRY_ANIM_DELAY
  + (float)(this->fields.inPos.fields.y / -500.0),
    0);
}


void TitleInfoEventLeagueVsStatusComponent__StartClearAnim(
        TitleInfoEventLeagueVsStatusComponent_o *this,
        System_Action_o *cb,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  UnityEngine_Transform_o *transform; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  TitleInfoEventLeagueVsStatusComponent_c *v9; // x0
  float32x2_t *static_fields; // x8
  float32x2_t v11; // d0
  float v12; // s2
  float y; // [xsp+0h] [xbp-30h]
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C54CC9 & 1) == 0 )
  {
    sub_1C3E564(&TitleInfoEventLeagueVsStatusComponent_TypeInfo);
    sub_1C3E564(&StringLiteral_2272/*"AnimFrameOutEnd"*/);
    byte_4C54CC9 = 1;
  }
  this->fields.clearAnimCallBack = cb;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.clearAnimCallBack, (int32_t)cb, (int32_t)method, v3);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    sub_1C3E7C0(0, v7);
  localPosition = UnityEngine_Transform__get_localPosition(transform, 0);
  this->fields.inPos.fields.x = 0.0;
  this->fields.inPos.fields.y = localPosition.fields.y;
  this->fields.inPos.fields.z = 0.0;
  v9 = TitleInfoEventLeagueVsStatusComponent_TypeInfo;
  if ( !TitleInfoEventLeagueVsStatusComponent_TypeInfo->_2.cctor_finished )
  {
    y = localPosition.fields.y;
    j_il2cpp_runtime_class_init_0(TitleInfoEventLeagueVsStatusComponent_TypeInfo);
    localPosition.fields.y = y;
    v9 = TitleInfoEventLeagueVsStatusComponent_TypeInfo;
  }
  static_fields = (float32x2_t *)v9->static_fields;
  v11.n64_u32[0] = 0;
  v11.n64_u32[1] = LODWORD(localPosition.fields.y);
  v12 = static_fields[1].n64_f32[0];
  *(float32x2_t *)&this->fields.outPos.fields.x = vadd_f32((float32x2_t)static_fields->n64_u64[0], v11);
  this->fields.outPos.fields.z = v12 + 0.0;
  TitleInfoEventLeagueVsStatusComponent__FrameOut(this, (System_String_o *)StringLiteral_2272/*"AnimFrameOutEnd"*/, v8);
}


void TitleInfoEventLeagueVsStatusComponent__UpdateDisp(
        TitleInfoEventLeagueVsStatusComponent_o *this,
        const MethodInfo *method)
{
  ;
}


void TitleInfoEventLeagueVsStatusComponent__clearAnimFinised(
        TitleInfoEventLeagueVsStatusComponent_o *this,
        const MethodInfo *method)
{
  System_Action_o *clearAnimCallBack; // x0

  clearAnimCallBack = this->fields.clearAnimCallBack;
  if ( clearAnimCallBack )
    ActionExtensions__Call(clearAnimCallBack, 0);
}


void TitleInfoEventLeagueVsStatusComponent__setup(
        TitleInfoEventLeagueVsStatusComponent_o *this,
        EventPointEntity_o *eventPointEntity,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 Instance; // x0
  __int64 v8; // x1
  Il2CppObject *MasterData_object; // x24
  Il2CppObject *v10; // x22
  struct UIWidget_o *Root; // x8
  unsigned __int8 v12; // w25
  Il2CppObject *v13; // x23
  int64_t Time; // x26
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  __int64 v18; // x5
  __int64 v19; // x6
  __int64 v20; // x7
  struct System_Int32_array *v21; // x8
  unsigned __int64 v22; // x28
  __int64 v23; // x26
  unsigned __int64 max_length_low; // x9
  struct System_Int32_array *group1; // x8
  int32_t id; // w2
  int32_t v27; // w3
  struct System_Int32_array *group2; // x8
  float v29; // s0
  struct System_Int32_array *v30; // x8
  int32_t v31; // w8
  struct System_Int32_array *v32; // x8
  __int64 v33; // x23
  double v34; // d2
  float v35; // s0
  float v36; // s1
  float v37; // s0
  struct System_Int32_array *v38; // x8
  int32_t v39; // w8
  int32_t v40; // w8
  Il2CppObject *v41; // x0
  __int64 *v42; // x8
  struct System_Int32_array *v43; // x8
  struct System_Int32_array *v44; // x8
  struct System_Int32_array *v45; // x8
  struct System_Int32_array *v46; // x8
  UISprite_o *statusName; // x21
  System_String_o *v48; // x22
  UISprite_o *title; // x21
  __int64 v50; // x2
  __int64 v51; // x3
  __int64 v52; // x4
  __int64 v53; // x5
  __int64 v54; // x6
  __int64 v55; // x7
  Il2CppObject *v56; // x0
  System_String_o *v57; // x0
  UISprite_o *backGround; // x20
  __int64 v59; // x2
  __int64 v60; // x3
  __int64 v61; // x4
  __int64 v62; // x5
  __int64 v63; // x6
  __int64 v64; // x7
  Il2CppObject *v65; // x0
  System_String_o *v66; // x0
  unsigned __int64 v67; // x24
  __int64 v68; // x2
  __int64 v69; // x3
  __int64 v70; // x4
  __int64 v71; // x5
  __int64 v72; // x6
  __int64 v73; // x7
  Il2CppObject *v74; // x0
  struct System_Int32_array *v75; // x8
  int32_t v76; // [xsp+8h] [xbp-58h] BYREF
  int32_t v77; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4C54CC7 & 1) == 0 )
  {
    sub_1C3E564(&AtlasManager_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_EventPointGroupMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_QuestReleaseMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_TotalEventPointMaster___);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&StringLiteral_16121/*"_01"*/);
    sub_1C3E564(&StringLiteral_16123/*"_03"*/);
    sub_1C3E564(&StringLiteral_16124/*"_04"*/);
    sub_1C3E564(&StringLiteral_17035/*"balance"*/);
    sub_1C3E564(&StringLiteral_19328/*"event_vs_status_bg_"*/);
    sub_1C3E564(&StringLiteral_19327/*"event_vs_status_"*/);
    sub_1C3E564(&StringLiteral_16125/*"_05"*/);
    sub_1C3E564(&StringLiteral_1/*""*/);
    sub_1C3E564(&StringLiteral_16122/*"_02"*/);
    sub_1C3E564(&StringLiteral_19329/*"event_vs_status_name_"*/);
    byte_4C54CC7 = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_TotalEventPointMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  v10 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_EventPointGroupMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  if ( !eventPointEntity )
    goto LABEL_18;
  if ( !Instance )
    goto LABEL_18;
  Instance = QuestReleaseMaster__IsQuestOfResultBattleCleared(
               (QuestReleaseMaster_o *)Instance,
               eventPointEntity->fields.id + 100 * eventPointEntity->fields.eventId,
               0);
  Root = this->fields.Root;
  if ( !Root )
    goto LABEL_18;
  v12 = Instance;
  ((void (__fastcall *)(struct UIWidget_o *, const MethodInfo *, float))Root->klass->vtable._8_set_alpha.methodPtr)(
    this->fields.Root,
    Root->klass->vtable._8_set_alpha.method,
    0.0);
  v13 = (Il2CppObject *)StringLiteral_1/*""*/;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  Instance = EventPointEntity__isBossBattle(eventPointEntity, 0);
  if ( (Instance & 1) == 0 )
  {
    group1 = eventPointEntity->fields.group1;
    if ( !group1 )
      goto LABEL_18;
    if ( !LODWORD(group1->max_length) )
      goto LABEL_88;
    if ( !MasterData_object )
      goto LABEL_18;
    id = eventPointEntity->fields.id;
    v27 = group1->m_Items[0];
    if ( (v12 & (eventPointEntity->fields.endedAt <= Time)) != 0 )
    {
      Instance = TotalEventPointMaster__IsGroupWin((TotalEventPointMaster_o *)MasterData_object, eventId, id, v27, 0);
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
      if ( !LODWORD(group2->max_length) )
        goto LABEL_88;
      if ( v10 )
      {
        Instance = (__int64)EventPointGroupMaster__getEntity(
                              (EventPointGroupMaster_o *)v10,
                              eventId,
                              group2->m_Items[0],
                              0);
        if ( Instance )
        {
          v40 = *(_DWORD *)(Instance + 32);
          goto LABEL_44;
        }
      }
    }
    else
    {
      Instance = TotalEventPointMaster__GetPoint((TotalEventPointMaster_o *)MasterData_object, eventId, id, v27, 0);
      v32 = eventPointEntity->fields.group2;
      if ( !v32 )
        goto LABEL_18;
      if ( !LODWORD(v32->max_length) )
        goto LABEL_88;
      v33 = Instance;
      Instance = TotalEventPointMaster__GetPoint(
                   (TotalEventPointMaster_o *)MasterData_object,
                   eventId,
                   eventPointEntity->fields.id,
                   v32->m_Items[0],
                   0);
      v34 = (double)(Instance + v33);
      v35 = (double)v33 / v34;
      v36 = (double)Instance / v34;
      v37 = vabds_f32(v36, v35);
      if ( v37 >= 0.3 )
      {
        if ( v33 <= Instance )
        {
          v43 = eventPointEntity->fields.group2;
          if ( !v43 )
            goto LABEL_18;
        }
        else
        {
          v43 = eventPointEntity->fields.group1;
          if ( !v43 )
            goto LABEL_18;
        }
        if ( !LODWORD(v43->max_length) )
          goto LABEL_88;
        if ( v10 )
        {
          Instance = (__int64)EventPointGroupMaster__getEntity(
                                (EventPointGroupMaster_o *)v10,
                                eventId,
                                v43->m_Items[0],
                                0);
          if ( Instance )
          {
            v31 = *(_DWORD *)(Instance + 32);
            goto LABEL_60;
          }
        }
      }
      else
      {
        if ( v37 < 0.15 )
        {
          v13 = (Il2CppObject *)StringLiteral_17035/*"balance"*/;
          goto LABEL_72;
        }
        if ( v33 <= Instance )
        {
          v45 = eventPointEntity->fields.group2;
          if ( !v45 )
            goto LABEL_18;
        }
        else
        {
          v45 = eventPointEntity->fields.group1;
          if ( !v45 )
            goto LABEL_18;
        }
        if ( !LODWORD(v45->max_length) )
          goto LABEL_88;
        if ( v10 )
        {
          Instance = (__int64)EventPointGroupMaster__getEntity(
                                (EventPointGroupMaster_o *)v10,
                                eventId,
                                v45->m_Items[0],
                                0);
          if ( Instance )
          {
            v39 = *(_DWORD *)(Instance + 32);
            goto LABEL_70;
          }
        }
      }
    }
LABEL_18:
    sub_1C3E7C0(Instance, v8);
  }
  v21 = eventPointEntity->fields.group1;
  if ( !v21 )
    goto LABEL_18;
  v22 = 0;
  v23 = 0;
  while ( 1 )
  {
    max_length_low = LODWORD(v21->max_length);
    if ( (__int64)v22 >= (int)max_length_low )
      break;
    if ( v22 >= max_length_low )
      goto LABEL_88;
    if ( MasterData_object )
    {
      Instance = TotalEventPointMaster__GetPoint(
                   (TotalEventPointMaster_o *)MasterData_object,
                   eventId,
                   eventPointEntity->fields.id,
                   v21->m_Items[v22],
                   0);
      v21 = eventPointEntity->fields.group1;
      v23 += Instance;
      ++v22;
      if ( v21 )
        continue;
    }
    goto LABEL_18;
  }
  v29 = 1.0 - (double)v23 / (double)eventPointEntity->fields.normaTotalPoint;
  if ( v29 >= 0.75 )
  {
    v38 = eventPointEntity->fields.group2;
    if ( !v38 )
      goto LABEL_18;
    if ( !LODWORD(v38->max_length) )
      goto LABEL_88;
    v39 = v38->m_Items[0];
LABEL_70:
    v77 = v39;
    v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v77, v15, v16, v17, v18, v19, v20);
    v42 = &StringLiteral_16121/*"_01"*/;
    goto LABEL_71;
  }
  if ( v29 >= 0.5 )
  {
    v30 = eventPointEntity->fields.group2;
    if ( v30 )
    {
      if ( LODWORD(v30->max_length) )
      {
        v31 = v30->m_Items[0];
LABEL_60:
        v77 = v31;
        v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v77, v15, v16, v17, v18, v19, v20);
        v42 = &StringLiteral_16122/*"_02"*/;
        goto LABEL_71;
      }
LABEL_88:
      sub_1C3E7C8(Instance, v8);
    }
    goto LABEL_18;
  }
  if ( v29 >= 0.25 )
  {
    v44 = eventPointEntity->fields.group2;
    if ( !v44 )
      goto LABEL_18;
    if ( !LODWORD(v44->max_length) )
      goto LABEL_88;
    v40 = v44->m_Items[0];
LABEL_44:
    v77 = v40;
    v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v77, v15, v16, v17, v18, v19, v20);
    v42 = &StringLiteral_16123/*"_03"*/;
LABEL_71:
    v13 = (Il2CppObject *)System_String__Concat(v41, (Il2CppObject *)*v42, 0);
    goto LABEL_72;
  }
  if ( v29 >= 0.1 )
  {
    v46 = eventPointEntity->fields.group2;
    if ( v46 )
    {
      if ( LODWORD(v46->max_length) )
      {
        v77 = v46->m_Items[0];
        v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v77, v15, v16, v17, v18, v19, v20);
        v42 = &StringLiteral_16124/*"_04"*/;
        goto LABEL_71;
      }
      goto LABEL_88;
    }
    goto LABEL_18;
  }
  if ( v29 < 0.1 && v29 > 0.0 || !(v12 & 1 | (v29 > 0.0)) )
  {
    v75 = eventPointEntity->fields.group2;
    if ( v75 )
    {
      if ( LODWORD(v75->max_length) )
      {
        v77 = v75->m_Items[0];
        v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v77, v15, v16, v17, v18, v19, v20);
        v42 = &StringLiteral_16125/*"_05"*/;
        goto LABEL_71;
      }
      goto LABEL_88;
    }
    goto LABEL_18;
  }
  if ( (int)max_length_low >= 1 )
  {
    v67 = 0;
    while ( v67 < (unsigned int)max_length_low )
    {
      if ( !v10 )
        goto LABEL_18;
      Instance = (__int64)EventPointGroupMaster__getEntity(
                            (EventPointGroupMaster_o *)v10,
                            eventId,
                            v21->m_Items[v67],
                            0);
      if ( !Instance )
        goto LABEL_18;
      v77 = *(_DWORD *)(Instance + 32);
      v74 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v77, v68, v69, v70, v71, v72, v73);
      Instance = (__int64)System_String__Concat(v13, v74, 0);
      v21 = eventPointEntity->fields.group1;
      if ( !v21 )
        goto LABEL_18;
      LODWORD(max_length_low) = v21->max_length;
      ++v67;
      v13 = (Il2CppObject *)Instance;
      if ( (__int64)v67 >= (int)max_length_low )
        goto LABEL_72;
    }
    goto LABEL_88;
  }
LABEL_72:
  statusName = this->fields.statusName;
  v48 = System_String__Concat_63636468((System_String_o *)StringLiteral_19327/*"event_vs_status_"*/, (System_String_o *)v13, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(statusName, v48, 0);
  title = this->fields.title;
  v77 = eventPointEntity->fields.id;
  v56 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v77, v50, v51, v52, v53, v54, v55);
  v57 = System_String__Concat((Il2CppObject *)StringLiteral_19329/*"event_vs_status_name_"*/, v56, 0);
  AtlasManager__SetEventUI(title, v57, 0);
  backGround = this->fields.backGround;
  v76 = eventPointEntity->fields.id;
  v65 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v76, v59, v60, v61, v62, v63, v64);
  v66 = System_String__Concat((Il2CppObject *)StringLiteral_19328/*"event_vs_status_bg_"*/, v65, 0);
  AtlasManager__SetEventUI(backGround, v66, 0);
}