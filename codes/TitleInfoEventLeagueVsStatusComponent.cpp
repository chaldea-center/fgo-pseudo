void TitleInfoEventLeagueVsStatusComponent___cctor(const MethodInfo *method)
{
  struct TitleInfoEventLeagueVsStatusComponent_StaticFields *static_fields; // x8

  if ( (byte_4C253AC & 1) == 0 )
  {
    sub_1C2D490(&TitleInfoEventLeagueVsStatusComponent_TypeInfo);
    byte_4C253AC = 1;
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

  if ( (byte_4C253A8 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_17996/*"clearAnimFinised"*/);
    byte_4C253A8 = 1;
  }
  if ( this->fields.clearAnimCallBack )
    v4 = (System_String_o *)StringLiteral_17996/*"clearAnimFinised"*/;
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

  if ( (byte_4C253AB & 1) == 0 )
  {
    sub_1C2D490(&TitleInfoEventLeagueVsStatusComponent_TypeInfo);
    sub_1C2D490(&Method_UITweener_Begin_TweenAlpha___);
    byte_4C253AB = 1;
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
                                      (const MethodInfo_318A268 *)Method_UITweener_Begin_TweenAlpha___);
  if ( !Root )
LABEL_8:
    sub_1C2D6EC(Root, method);
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

  if ( (byte_4C253A9 & 1) == 0 )
  {
    sub_1C2D490(&TitleInfoEventLeagueVsStatusComponent_TypeInfo);
    sub_1C2D490(&Method_UITweener_Begin_TweenAlpha___);
    sub_1C2D490(&Method_UITweener_Begin_TweenPosition___);
    byte_4C253A9 = 1;
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
                   (const MethodInfo_318A268 *)Method_UITweener_Begin_TweenPosition___);
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
  sub_1C2D434((CGThumbnailListItem_o *)(v10 + 80), (int32_t)v13, v14, v15);
  *((_QWORD *)v10 + 11) = callFinished;
  sub_1C2D434((CGThumbnailListItem_o *)(v10 + 88), (int32_t)callFinished, v16, v17);
  Root = (char *)this->fields.Root;
  if ( !Root
    || (v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Root, 0),
        (Root = (char *)UITweener__Begin_object_(
                          v18,
                          TitleInfoEventLeagueVsStatusComponent_TypeInfo->static_fields->FRAME_ANIM_DURATION,
                          (const MethodInfo_318A268 *)Method_UITweener_Begin_TweenAlpha___)) == 0) )
  {
LABEL_9:
    sub_1C2D6EC(Root, v9);
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

  if ( (byte_4C253AA & 1) == 0 )
  {
    sub_1C2D490(&TitleInfoEventLeagueVsStatusComponent_TypeInfo);
    sub_1C2D490(&Method_UITweener_Begin_TweenAlpha___);
    sub_1C2D490(&Method_UITweener_Begin_TweenPosition___);
    byte_4C253AA = 1;
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
                   (const MethodInfo_318A268 *)Method_UITweener_Begin_TweenPosition___);
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
  sub_1C2D434((CGThumbnailListItem_o *)(v10 + 80), (int32_t)v13, v14, v15);
  *((_QWORD *)v10 + 11) = callFinished;
  sub_1C2D434((CGThumbnailListItem_o *)(v10 + 88), (int32_t)callFinished, v16, v17);
  Root = (char *)this->fields.Root;
  if ( !Root
    || (v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Root, 0),
        (Root = (char *)UITweener__Begin_object_(
                          v18,
                          TitleInfoEventLeagueVsStatusComponent_TypeInfo->static_fields->FRAME_ANIM_DURATION,
                          (const MethodInfo_318A268 *)Method_UITweener_Begin_TweenAlpha___)) == 0) )
  {
LABEL_9:
    sub_1C2D6EC(Root, v9);
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
    sub_1C2D6EC(0, v3);
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

  if ( (byte_4C253A6 & 1) == 0 )
  {
    sub_1C2D490(&TitleInfoEventLeagueVsStatusComponent_TypeInfo);
    sub_1C2D490(&StringLiteral_6076/*"EntryAnim"*/);
    byte_4C253A6 = 1;
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
    sub_1C2D6EC(transform, v4);
  }
  ((void (__fastcall *)(UnityEngine_Transform_o *, _QWORD, float))transform->klass[1]._1.this_arg.data)(
    transform,
    *(_QWORD *)&transform->klass[1]._1.this_arg.bits,
    0.0);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6076/*"EntryAnim"*/,
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

  if ( (byte_4C253A7 & 1) == 0 )
  {
    sub_1C2D490(&TitleInfoEventLeagueVsStatusComponent_TypeInfo);
    sub_1C2D490(&StringLiteral_2269/*"AnimFrameOutEnd"*/);
    byte_4C253A7 = 1;
  }
  this->fields.clearAnimCallBack = cb;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.clearAnimCallBack, (int32_t)cb, (int32_t)method, v3);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    sub_1C2D6EC(0, v7);
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
  TitleInfoEventLeagueVsStatusComponent__FrameOut(this, (System_String_o *)StringLiteral_2269/*"AnimFrameOutEnd"*/, v8);
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
  struct System_Int32_array *v18; // x8
  unsigned __int64 v19; // x28
  __int64 v20; // x26
  unsigned __int64 max_length_low; // x9
  struct System_Int32_array *group1; // x8
  int32_t id; // w2
  int32_t v24; // w3
  struct System_Int32_array *group2; // x8
  float v26; // s0
  struct System_Int32_array *v27; // x8
  int32_t v28; // w8
  struct System_Int32_array *v29; // x8
  __int64 v30; // x23
  double v31; // d2
  float v32; // s0
  float v33; // s1
  float v34; // s0
  struct System_Int32_array *v35; // x8
  int32_t v36; // w8
  int32_t v37; // w8
  Il2CppObject *v38; // x0
  __int64 *v39; // x8
  struct System_Int32_array *v40; // x8
  struct System_Int32_array *v41; // x8
  struct System_Int32_array *v42; // x8
  struct System_Int32_array *v43; // x8
  UISprite_o *statusName; // x21
  System_String_o *v45; // x22
  UISprite_o *title; // x21
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  Il2CppObject *v50; // x0
  System_String_o *v51; // x0
  UISprite_o *backGround; // x20
  __int64 v53; // x2
  __int64 v54; // x3
  __int64 v55; // x4
  Il2CppObject *v56; // x0
  System_String_o *v57; // x0
  unsigned __int64 v58; // x24
  __int64 v59; // x2
  __int64 v60; // x3
  __int64 v61; // x4
  Il2CppObject *v62; // x0
  struct System_Int32_array *v63; // x8
  int32_t v64; // [xsp+8h] [xbp-58h] BYREF
  int32_t v65; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4C253A5 & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_EventPointGroupMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_QuestReleaseMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_TotalEventPointMaster___);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&StringLiteral_16107/*"_01"*/);
    sub_1C2D490(&StringLiteral_16109/*"_03"*/);
    sub_1C2D490(&StringLiteral_16110/*"_04"*/);
    sub_1C2D490(&StringLiteral_17014/*"balance"*/);
    sub_1C2D490(&StringLiteral_19296/*"event_vs_status_bg_"*/);
    sub_1C2D490(&StringLiteral_19295/*"event_vs_status_"*/);
    sub_1C2D490(&StringLiteral_16111/*"_05"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    sub_1C2D490(&StringLiteral_16108/*"_02"*/);
    sub_1C2D490(&StringLiteral_19297/*"event_vs_status_name_"*/);
    byte_4C253A5 = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_TotalEventPointMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  v10 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventPointGroupMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
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
    v24 = group1->m_Items[0];
    if ( (v12 & (eventPointEntity->fields.endedAt <= Time)) != 0 )
    {
      Instance = TotalEventPointMaster__IsGroupWin((TotalEventPointMaster_o *)MasterData_object, eventId, id, v24, 0);
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
          v37 = *(_DWORD *)(Instance + 32);
          goto LABEL_44;
        }
      }
    }
    else
    {
      Instance = TotalEventPointMaster__GetPoint((TotalEventPointMaster_o *)MasterData_object, eventId, id, v24, 0);
      v29 = eventPointEntity->fields.group2;
      if ( !v29 )
        goto LABEL_18;
      if ( !LODWORD(v29->max_length) )
        goto LABEL_88;
      v30 = Instance;
      Instance = TotalEventPointMaster__GetPoint(
                   (TotalEventPointMaster_o *)MasterData_object,
                   eventId,
                   eventPointEntity->fields.id,
                   v29->m_Items[0],
                   0);
      v31 = (double)(Instance + v30);
      v32 = (double)v30 / v31;
      v33 = (double)Instance / v31;
      v34 = vabds_f32(v33, v32);
      if ( v34 >= 0.3 )
      {
        if ( v30 <= Instance )
        {
          v40 = eventPointEntity->fields.group2;
          if ( !v40 )
            goto LABEL_18;
        }
        else
        {
          v40 = eventPointEntity->fields.group1;
          if ( !v40 )
            goto LABEL_18;
        }
        if ( !LODWORD(v40->max_length) )
          goto LABEL_88;
        if ( v10 )
        {
          Instance = (__int64)EventPointGroupMaster__getEntity(
                                (EventPointGroupMaster_o *)v10,
                                eventId,
                                v40->m_Items[0],
                                0);
          if ( Instance )
          {
            v28 = *(_DWORD *)(Instance + 32);
            goto LABEL_60;
          }
        }
      }
      else
      {
        if ( v34 < 0.15 )
        {
          v13 = (Il2CppObject *)StringLiteral_17014/*"balance"*/;
          goto LABEL_72;
        }
        if ( v30 <= Instance )
        {
          v42 = eventPointEntity->fields.group2;
          if ( !v42 )
            goto LABEL_18;
        }
        else
        {
          v42 = eventPointEntity->fields.group1;
          if ( !v42 )
            goto LABEL_18;
        }
        if ( !LODWORD(v42->max_length) )
          goto LABEL_88;
        if ( v10 )
        {
          Instance = (__int64)EventPointGroupMaster__getEntity(
                                (EventPointGroupMaster_o *)v10,
                                eventId,
                                v42->m_Items[0],
                                0);
          if ( Instance )
          {
            v36 = *(_DWORD *)(Instance + 32);
            goto LABEL_70;
          }
        }
      }
    }
LABEL_18:
    sub_1C2D6EC(Instance, v8);
  }
  v18 = eventPointEntity->fields.group1;
  if ( !v18 )
    goto LABEL_18;
  v19 = 0;
  v20 = 0;
  while ( 1 )
  {
    max_length_low = LODWORD(v18->max_length);
    if ( (__int64)v19 >= (int)max_length_low )
      break;
    if ( v19 >= max_length_low )
      goto LABEL_88;
    if ( MasterData_object )
    {
      Instance = TotalEventPointMaster__GetPoint(
                   (TotalEventPointMaster_o *)MasterData_object,
                   eventId,
                   eventPointEntity->fields.id,
                   v18->m_Items[v19],
                   0);
      v18 = eventPointEntity->fields.group1;
      v20 += Instance;
      ++v19;
      if ( v18 )
        continue;
    }
    goto LABEL_18;
  }
  v26 = 1.0 - (double)v20 / (double)eventPointEntity->fields.normaTotalPoint;
  if ( v26 >= 0.75 )
  {
    v35 = eventPointEntity->fields.group2;
    if ( !v35 )
      goto LABEL_18;
    if ( !LODWORD(v35->max_length) )
      goto LABEL_88;
    v36 = v35->m_Items[0];
LABEL_70:
    v65 = v36;
    v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v65, v15, v16, v17);
    v39 = &StringLiteral_16107/*"_01"*/;
    goto LABEL_71;
  }
  if ( v26 >= 0.5 )
  {
    v27 = eventPointEntity->fields.group2;
    if ( v27 )
    {
      if ( LODWORD(v27->max_length) )
      {
        v28 = v27->m_Items[0];
LABEL_60:
        v65 = v28;
        v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v65, v15, v16, v17);
        v39 = &StringLiteral_16108/*"_02"*/;
        goto LABEL_71;
      }
LABEL_88:
      sub_1C2D6F4(Instance, v8, v15);
    }
    goto LABEL_18;
  }
  if ( v26 >= 0.25 )
  {
    v41 = eventPointEntity->fields.group2;
    if ( !v41 )
      goto LABEL_18;
    if ( !LODWORD(v41->max_length) )
      goto LABEL_88;
    v37 = v41->m_Items[0];
LABEL_44:
    v65 = v37;
    v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v65, v15, v16, v17);
    v39 = &StringLiteral_16109/*"_03"*/;
LABEL_71:
    v13 = (Il2CppObject *)System_String__Concat(v38, (Il2CppObject *)*v39, 0);
    goto LABEL_72;
  }
  if ( v26 >= 0.1 )
  {
    v43 = eventPointEntity->fields.group2;
    if ( v43 )
    {
      if ( LODWORD(v43->max_length) )
      {
        v65 = v43->m_Items[0];
        v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v65, v15, v16, v17);
        v39 = &StringLiteral_16110/*"_04"*/;
        goto LABEL_71;
      }
      goto LABEL_88;
    }
    goto LABEL_18;
  }
  if ( v26 < 0.1 && v26 > 0.0 || !(v12 & 1 | (v26 > 0.0)) )
  {
    v63 = eventPointEntity->fields.group2;
    if ( v63 )
    {
      if ( LODWORD(v63->max_length) )
      {
        v65 = v63->m_Items[0];
        v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v65, v15, v16, v17);
        v39 = &StringLiteral_16111/*"_05"*/;
        goto LABEL_71;
      }
      goto LABEL_88;
    }
    goto LABEL_18;
  }
  if ( (int)max_length_low >= 1 )
  {
    v58 = 0;
    while ( v58 < (unsigned int)max_length_low )
    {
      if ( !v10 )
        goto LABEL_18;
      Instance = (__int64)EventPointGroupMaster__getEntity(
                            (EventPointGroupMaster_o *)v10,
                            eventId,
                            v18->m_Items[v58],
                            0);
      if ( !Instance )
        goto LABEL_18;
      v65 = *(_DWORD *)(Instance + 32);
      v62 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v65, v59, v60, v61);
      Instance = (__int64)System_String__Concat(v13, v62, 0);
      v18 = eventPointEntity->fields.group1;
      if ( !v18 )
        goto LABEL_18;
      LODWORD(max_length_low) = v18->max_length;
      ++v58;
      v13 = (Il2CppObject *)Instance;
      if ( (__int64)v58 >= (int)max_length_low )
        goto LABEL_72;
    }
    goto LABEL_88;
  }
LABEL_72:
  statusName = this->fields.statusName;
  v45 = System_String__Concat_63457864((System_String_o *)StringLiteral_19295/*"event_vs_status_"*/, (System_String_o *)v13, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(statusName, v45, 0);
  title = this->fields.title;
  v65 = eventPointEntity->fields.id;
  v50 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v65, v47, v48, v49);
  v51 = System_String__Concat((Il2CppObject *)StringLiteral_19297/*"event_vs_status_name_"*/, v50, 0);
  AtlasManager__SetEventUI(title, v51, 0);
  backGround = this->fields.backGround;
  v64 = eventPointEntity->fields.id;
  v56 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v64, v53, v54, v55);
  v57 = System_String__Concat((Il2CppObject *)StringLiteral_19296/*"event_vs_status_bg_"*/, v56, 0);
  AtlasManager__SetEventUI(backGround, v57, 0);
}