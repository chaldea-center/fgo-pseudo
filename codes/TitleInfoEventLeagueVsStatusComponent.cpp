void TitleInfoEventLeagueVsStatusComponent___cctor(const MethodInfo *method)
{
  struct TitleInfoEventLeagueVsStatusComponent_StaticFields *static_fields; // x8

  if ( (byte_4C359C4 & 1) == 0 )
  {
    sub_1C32C20(&TitleInfoEventLeagueVsStatusComponent_TypeInfo);
    byte_4C359C4 = 1;
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

  if ( (byte_4C359C0 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_18000/*"clearAnimFinised"*/);
    byte_4C359C0 = 1;
  }
  if ( this->fields.clearAnimCallBack )
    v4 = (System_String_o *)StringLiteral_18000/*"clearAnimFinised"*/;
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

  if ( (byte_4C359C3 & 1) == 0 )
  {
    sub_1C32C20(&TitleInfoEventLeagueVsStatusComponent_TypeInfo);
    sub_1C32C20(&Method_UITweener_Begin_TweenAlpha___);
    byte_4C359C3 = 1;
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
                                      (const MethodInfo_3198D08 *)Method_UITweener_Begin_TweenAlpha___);
  if ( !Root )
LABEL_8:
    sub_1C32E7C(Root);
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

  if ( (byte_4C359C1 & 1) == 0 )
  {
    sub_1C32C20(&TitleInfoEventLeagueVsStatusComponent_TypeInfo);
    sub_1C32C20(&Method_UITweener_Begin_TweenAlpha___);
    sub_1C32C20(&Method_UITweener_Begin_TweenPosition___);
    byte_4C359C1 = 1;
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
                   (const MethodInfo_3198D08 *)Method_UITweener_Begin_TweenPosition___);
  v18 = *(_QWORD *)&this->fields.outPos.fields.x;
  if ( !Root )
    goto LABEL_9;
  v9 = Root;
  *((_DWORD *)Root + 34) = LODWORD(this->fields.outPos.fields.z);
  *((_QWORD *)Root + 16) = v18;
  z = this->fields.inPos.fields.z;
  v11 = *(_QWORD *)&this->fields.inPos.fields.x;
  *((_DWORD *)Root + 8) = 6;
  *((float *)Root + 37) = z;
  *(_QWORD *)(Root + 140) = v11;
  v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  *((_QWORD *)v9 + 10) = v12;
  sub_1C32BC4((CGThumbnailListItem_o *)(v9 + 80), (int32_t)v12, v13, v14);
  *((_QWORD *)v9 + 11) = callFinished;
  sub_1C32BC4((CGThumbnailListItem_o *)(v9 + 88), (int32_t)callFinished, v15, v16);
  Root = (char *)this->fields.Root;
  if ( !Root
    || (v17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Root, 0),
        (Root = (char *)UITweener__Begin_object_(
                          v17,
                          TitleInfoEventLeagueVsStatusComponent_TypeInfo->static_fields->FRAME_ANIM_DURATION,
                          (const MethodInfo_3198D08 *)Method_UITweener_Begin_TweenAlpha___)) == 0) )
  {
LABEL_9:
    sub_1C32E7C(Root);
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

  if ( (byte_4C359C2 & 1) == 0 )
  {
    sub_1C32C20(&TitleInfoEventLeagueVsStatusComponent_TypeInfo);
    sub_1C32C20(&Method_UITweener_Begin_TweenAlpha___);
    sub_1C32C20(&Method_UITweener_Begin_TweenPosition___);
    byte_4C359C2 = 1;
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
                   (const MethodInfo_3198D08 *)Method_UITweener_Begin_TweenPosition___);
  v18 = *(_QWORD *)&this->fields.inPos.fields.x;
  if ( !Root )
    goto LABEL_9;
  v9 = Root;
  *((_DWORD *)Root + 34) = LODWORD(this->fields.inPos.fields.z);
  *((_QWORD *)Root + 16) = v18;
  z = this->fields.outPos.fields.z;
  v11 = *(_QWORD *)&this->fields.outPos.fields.x;
  *((_DWORD *)Root + 8) = 2;
  *((float *)Root + 37) = z;
  *(_QWORD *)(Root + 140) = v11;
  v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  *((_QWORD *)v9 + 10) = v12;
  sub_1C32BC4((CGThumbnailListItem_o *)(v9 + 80), (int32_t)v12, v13, v14);
  *((_QWORD *)v9 + 11) = callFinished;
  sub_1C32BC4((CGThumbnailListItem_o *)(v9 + 88), (int32_t)callFinished, v15, v16);
  Root = (char *)this->fields.Root;
  if ( !Root
    || (v17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Root, 0),
        (Root = (char *)UITweener__Begin_object_(
                          v17,
                          TitleInfoEventLeagueVsStatusComponent_TypeInfo->static_fields->FRAME_ANIM_DURATION,
                          (const MethodInfo_3198D08 *)Method_UITweener_Begin_TweenAlpha___)) == 0) )
  {
LABEL_9:
    sub_1C32E7C(Root);
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

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C32E7C(0);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
}


void TitleInfoEventLeagueVsStatusComponent__SetEntryAnim(
        TitleInfoEventLeagueVsStatusComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  TitleInfoEventLeagueVsStatusComponent_c *v4; // x0
  float32x2_t *static_fields; // x8
  float32x2_t v6; // d0
  float v7; // s2
  float y; // [xsp+0h] [xbp-30h]
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C359BE & 1) == 0 )
  {
    sub_1C32C20(&TitleInfoEventLeagueVsStatusComponent_TypeInfo);
    sub_1C32C20(&StringLiteral_6084/*"EntryAnim"*/);
    byte_4C359BE = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_9;
  localPosition = UnityEngine_Transform__get_localPosition(transform, 0);
  this->fields.inPos.fields.x = 0.0;
  this->fields.inPos.fields.y = localPosition.fields.y;
  this->fields.inPos.fields.z = 0.0;
  v4 = TitleInfoEventLeagueVsStatusComponent_TypeInfo;
  if ( !TitleInfoEventLeagueVsStatusComponent_TypeInfo->_2.cctor_finished )
  {
    y = localPosition.fields.y;
    j_il2cpp_runtime_class_init_0(TitleInfoEventLeagueVsStatusComponent_TypeInfo);
    localPosition.fields.y = y;
    v4 = TitleInfoEventLeagueVsStatusComponent_TypeInfo;
  }
  static_fields = (float32x2_t *)v4->static_fields;
  v6.n64_u32[0] = 0;
  v6.n64_u32[1] = LODWORD(localPosition.fields.y);
  v7 = static_fields[1].n64_f32[0];
  *(float32x2_t *)&this->fields.outPos.fields.x = vadd_f32((float32x2_t)static_fields->n64_u64[0], v6);
  this->fields.outPos.fields.z = v7 + 0.0;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.outPos, 0),
        (transform = (UnityEngine_Transform_o *)this->fields.Root) == 0) )
  {
LABEL_9:
    sub_1C32E7C(transform);
  }
  ((void (__fastcall *)(UnityEngine_Transform_o *, _QWORD, float))transform->klass[1]._1.this_arg.data)(
    transform,
    *(_QWORD *)&transform->klass[1]._1.this_arg.bits,
    0.0);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6084/*"EntryAnim"*/,
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
  const MethodInfo *v7; // x2
  TitleInfoEventLeagueVsStatusComponent_c *v8; // x0
  float32x2_t *static_fields; // x8
  float32x2_t v10; // d0
  float v11; // s2
  float y; // [xsp+0h] [xbp-30h]
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C359BF & 1) == 0 )
  {
    sub_1C32C20(&TitleInfoEventLeagueVsStatusComponent_TypeInfo);
    sub_1C32C20(&StringLiteral_2272/*"AnimFrameOutEnd"*/);
    byte_4C359BF = 1;
  }
  this->fields.clearAnimCallBack = cb;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.clearAnimCallBack, (int32_t)cb, (int32_t)method, v3);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    sub_1C32E7C(0);
  localPosition = UnityEngine_Transform__get_localPosition(transform, 0);
  this->fields.inPos.fields.x = 0.0;
  this->fields.inPos.fields.y = localPosition.fields.y;
  this->fields.inPos.fields.z = 0.0;
  v8 = TitleInfoEventLeagueVsStatusComponent_TypeInfo;
  if ( !TitleInfoEventLeagueVsStatusComponent_TypeInfo->_2.cctor_finished )
  {
    y = localPosition.fields.y;
    j_il2cpp_runtime_class_init_0(TitleInfoEventLeagueVsStatusComponent_TypeInfo);
    localPosition.fields.y = y;
    v8 = TitleInfoEventLeagueVsStatusComponent_TypeInfo;
  }
  static_fields = (float32x2_t *)v8->static_fields;
  v10.n64_u32[0] = 0;
  v10.n64_u32[1] = LODWORD(localPosition.fields.y);
  v11 = static_fields[1].n64_f32[0];
  *(float32x2_t *)&this->fields.outPos.fields.x = vadd_f32((float32x2_t)static_fields->n64_u64[0], v10);
  this->fields.outPos.fields.z = v11 + 0.0;
  TitleInfoEventLeagueVsStatusComponent__FrameOut(this, (System_String_o *)StringLiteral_2272/*"AnimFrameOutEnd"*/, v7);
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
  Il2CppObject *MasterData_object; // x24
  Il2CppObject *v9; // x22
  struct UIWidget_o *Root; // x8
  unsigned __int8 v11; // w25
  Il2CppObject *v12; // x23
  int64_t Time; // x26
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  __int64 v17; // x5
  __int64 v18; // x6
  __int64 v19; // x7
  struct System_Int32_array *v20; // x8
  unsigned __int64 v21; // x28
  __int64 v22; // x26
  unsigned __int64 max_length_low; // x9
  struct System_Int32_array *group1; // x8
  int32_t id; // w2
  int32_t v26; // w3
  struct System_Int32_array *group2; // x8
  float v28; // s0
  struct System_Int32_array *v29; // x8
  int32_t v30; // w8
  struct System_Int32_array *v31; // x8
  __int64 v32; // x23
  double v33; // d2
  float v34; // s0
  float v35; // s1
  float v36; // s0
  struct System_Int32_array *v37; // x8
  int32_t v38; // w8
  int32_t v39; // w8
  Il2CppObject *v40; // x0
  __int64 *v41; // x8
  struct System_Int32_array *v42; // x8
  struct System_Int32_array *v43; // x8
  struct System_Int32_array *v44; // x8
  struct System_Int32_array *v45; // x8
  UISprite_o *statusName; // x21
  System_String_o *v47; // x22
  UISprite_o *title; // x21
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  __int64 v52; // x5
  __int64 v53; // x6
  __int64 v54; // x7
  Il2CppObject *v55; // x0
  System_String_o *v56; // x0
  UISprite_o *backGround; // x20
  __int64 v58; // x2
  __int64 v59; // x3
  __int64 v60; // x4
  __int64 v61; // x5
  __int64 v62; // x6
  __int64 v63; // x7
  Il2CppObject *v64; // x0
  System_String_o *v65; // x0
  unsigned __int64 v66; // x24
  __int64 v67; // x2
  __int64 v68; // x3
  __int64 v69; // x4
  __int64 v70; // x5
  __int64 v71; // x6
  __int64 v72; // x7
  Il2CppObject *v73; // x0
  struct System_Int32_array *v74; // x8
  int32_t v75; // [xsp+8h] [xbp-58h] BYREF
  int32_t v76; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4C359BD & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_EventPointGroupMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_QuestReleaseMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_TotalEventPointMaster___);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&StringLiteral_16109/*"_01"*/);
    sub_1C32C20(&StringLiteral_16111/*"_03"*/);
    sub_1C32C20(&StringLiteral_16112/*"_04"*/);
    sub_1C32C20(&StringLiteral_17017/*"balance"*/);
    sub_1C32C20(&StringLiteral_19307/*"event_vs_status_bg_"*/);
    sub_1C32C20(&StringLiteral_19306/*"event_vs_status_"*/);
    sub_1C32C20(&StringLiteral_16113/*"_05"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    sub_1C32C20(&StringLiteral_16110/*"_02"*/);
    sub_1C32C20(&StringLiteral_19308/*"event_vs_status_name_"*/);
    byte_4C359BD = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_TotalEventPointMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  v9 = DataManager__GetMasterData_object_(
         (DataManager_o *)Instance,
         (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventPointGroupMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
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
  v11 = Instance;
  ((void (__fastcall *)(struct UIWidget_o *, const MethodInfo *, float))Root->klass->vtable._8_set_alpha.methodPtr)(
    this->fields.Root,
    Root->klass->vtable._8_set_alpha.method,
    0.0);
  v12 = (Il2CppObject *)StringLiteral_1/*""*/;
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
    v26 = group1->m_Items[0];
    if ( (v11 & (eventPointEntity->fields.endedAt <= Time)) != 0 )
    {
      Instance = TotalEventPointMaster__IsGroupWin((TotalEventPointMaster_o *)MasterData_object, eventId, id, v26, 0);
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
      if ( v9 )
      {
        Instance = (__int64)EventPointGroupMaster__getEntity(
                              (EventPointGroupMaster_o *)v9,
                              eventId,
                              group2->m_Items[0],
                              0);
        if ( Instance )
        {
          v39 = *(_DWORD *)(Instance + 32);
          goto LABEL_44;
        }
      }
    }
    else
    {
      Instance = TotalEventPointMaster__GetPoint((TotalEventPointMaster_o *)MasterData_object, eventId, id, v26, 0);
      v31 = eventPointEntity->fields.group2;
      if ( !v31 )
        goto LABEL_18;
      if ( !LODWORD(v31->max_length) )
        goto LABEL_88;
      v32 = Instance;
      Instance = TotalEventPointMaster__GetPoint(
                   (TotalEventPointMaster_o *)MasterData_object,
                   eventId,
                   eventPointEntity->fields.id,
                   v31->m_Items[0],
                   0);
      v33 = (double)(Instance + v32);
      v34 = (double)v32 / v33;
      v35 = (double)Instance / v33;
      v36 = vabds_f32(v35, v34);
      if ( v36 >= 0.3 )
      {
        if ( v32 <= Instance )
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
        if ( v9 )
        {
          Instance = (__int64)EventPointGroupMaster__getEntity(
                                (EventPointGroupMaster_o *)v9,
                                eventId,
                                v42->m_Items[0],
                                0);
          if ( Instance )
          {
            v30 = *(_DWORD *)(Instance + 32);
            goto LABEL_60;
          }
        }
      }
      else
      {
        if ( v36 < 0.15 )
        {
          v12 = (Il2CppObject *)StringLiteral_17017/*"balance"*/;
          goto LABEL_72;
        }
        if ( v32 <= Instance )
        {
          v44 = eventPointEntity->fields.group2;
          if ( !v44 )
            goto LABEL_18;
        }
        else
        {
          v44 = eventPointEntity->fields.group1;
          if ( !v44 )
            goto LABEL_18;
        }
        if ( !LODWORD(v44->max_length) )
          goto LABEL_88;
        if ( v9 )
        {
          Instance = (__int64)EventPointGroupMaster__getEntity(
                                (EventPointGroupMaster_o *)v9,
                                eventId,
                                v44->m_Items[0],
                                0);
          if ( Instance )
          {
            v38 = *(_DWORD *)(Instance + 32);
            goto LABEL_70;
          }
        }
      }
    }
LABEL_18:
    sub_1C32E7C(Instance);
  }
  v20 = eventPointEntity->fields.group1;
  if ( !v20 )
    goto LABEL_18;
  v21 = 0;
  v22 = 0;
  while ( 1 )
  {
    max_length_low = LODWORD(v20->max_length);
    if ( (__int64)v21 >= (int)max_length_low )
      break;
    if ( v21 >= max_length_low )
      goto LABEL_88;
    if ( MasterData_object )
    {
      Instance = TotalEventPointMaster__GetPoint(
                   (TotalEventPointMaster_o *)MasterData_object,
                   eventId,
                   eventPointEntity->fields.id,
                   v20->m_Items[v21],
                   0);
      v20 = eventPointEntity->fields.group1;
      v22 += Instance;
      ++v21;
      if ( v20 )
        continue;
    }
    goto LABEL_18;
  }
  v28 = 1.0 - (double)v22 / (double)eventPointEntity->fields.normaTotalPoint;
  if ( v28 >= 0.75 )
  {
    v37 = eventPointEntity->fields.group2;
    if ( !v37 )
      goto LABEL_18;
    if ( !LODWORD(v37->max_length) )
      goto LABEL_88;
    v38 = v37->m_Items[0];
LABEL_70:
    v76 = v38;
    v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v76, v14, v15, v16, v17, v18, v19);
    v41 = &StringLiteral_16109/*"_01"*/;
    goto LABEL_71;
  }
  if ( v28 >= 0.5 )
  {
    v29 = eventPointEntity->fields.group2;
    if ( v29 )
    {
      if ( LODWORD(v29->max_length) )
      {
        v30 = v29->m_Items[0];
LABEL_60:
        v76 = v30;
        v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v76, v14, v15, v16, v17, v18, v19);
        v41 = &StringLiteral_16110/*"_02"*/;
        goto LABEL_71;
      }
LABEL_88:
      sub_1C32E84(Instance);
    }
    goto LABEL_18;
  }
  if ( v28 >= 0.25 )
  {
    v43 = eventPointEntity->fields.group2;
    if ( !v43 )
      goto LABEL_18;
    if ( !LODWORD(v43->max_length) )
      goto LABEL_88;
    v39 = v43->m_Items[0];
LABEL_44:
    v76 = v39;
    v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v76, v14, v15, v16, v17, v18, v19);
    v41 = &StringLiteral_16111/*"_03"*/;
LABEL_71:
    v12 = (Il2CppObject *)System_String__Concat(v40, (Il2CppObject *)*v41, 0);
    goto LABEL_72;
  }
  if ( v28 >= 0.1 )
  {
    v45 = eventPointEntity->fields.group2;
    if ( v45 )
    {
      if ( LODWORD(v45->max_length) )
      {
        v76 = v45->m_Items[0];
        v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v76, v14, v15, v16, v17, v18, v19);
        v41 = &StringLiteral_16112/*"_04"*/;
        goto LABEL_71;
      }
      goto LABEL_88;
    }
    goto LABEL_18;
  }
  if ( v28 < 0.1 && v28 > 0.0 || !(v11 & 1 | (v28 > 0.0)) )
  {
    v74 = eventPointEntity->fields.group2;
    if ( v74 )
    {
      if ( LODWORD(v74->max_length) )
      {
        v76 = v74->m_Items[0];
        v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v76, v14, v15, v16, v17, v18, v19);
        v41 = &StringLiteral_16113/*"_05"*/;
        goto LABEL_71;
      }
      goto LABEL_88;
    }
    goto LABEL_18;
  }
  if ( (int)max_length_low >= 1 )
  {
    v66 = 0;
    while ( v66 < (unsigned int)max_length_low )
    {
      if ( !v9 )
        goto LABEL_18;
      Instance = (__int64)EventPointGroupMaster__getEntity((EventPointGroupMaster_o *)v9, eventId, v20->m_Items[v66], 0);
      if ( !Instance )
        goto LABEL_18;
      v76 = *(_DWORD *)(Instance + 32);
      v73 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v76, v67, v68, v69, v70, v71, v72);
      Instance = (__int64)System_String__Concat(v12, v73, 0);
      v20 = eventPointEntity->fields.group1;
      if ( !v20 )
        goto LABEL_18;
      LODWORD(max_length_low) = v20->max_length;
      ++v66;
      v12 = (Il2CppObject *)Instance;
      if ( (__int64)v66 >= (int)max_length_low )
        goto LABEL_72;
    }
    goto LABEL_88;
  }
LABEL_72:
  statusName = this->fields.statusName;
  v47 = System_String__Concat_63518544((System_String_o *)StringLiteral_19306/*"event_vs_status_"*/, (System_String_o *)v12, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(statusName, v47, 0);
  title = this->fields.title;
  v76 = eventPointEntity->fields.id;
  v55 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v76, v49, v50, v51, v52, v53, v54);
  v56 = System_String__Concat((Il2CppObject *)StringLiteral_19308/*"event_vs_status_name_"*/, v55, 0);
  AtlasManager__SetEventUI(title, v56, 0);
  backGround = this->fields.backGround;
  v75 = eventPointEntity->fields.id;
  v64 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v75, v58, v59, v60, v61, v62, v63);
  v65 = System_String__Concat((Il2CppObject *)StringLiteral_19307/*"event_vs_status_bg_"*/, v64, 0);
  AtlasManager__SetEventUI(backGround, v65, 0);
}