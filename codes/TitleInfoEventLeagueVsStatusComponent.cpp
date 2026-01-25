void TitleInfoEventLeagueVsStatusComponent___cctor(const MethodInfo *method)
{
  struct TitleInfoEventLeagueVsStatusComponent_StaticFields *static_fields; // x8

  if ( (byte_4CECF84 & 1) == 0 )
  {
    sub_1C7BAE8(&TitleInfoEventLeagueVsStatusComponent_TypeInfo);
    byte_4CECF84 = 1;
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

  if ( (byte_4CECF80 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_18094/*"clearAnimFinised"*/);
    byte_4CECF80 = 1;
  }
  if ( this->fields.clearAnimCallBack )
    v4 = (System_String_o *)StringLiteral_18094/*"clearAnimFinised"*/;
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

  if ( (byte_4CECF83 & 1) == 0 )
  {
    sub_1C7BAE8(&TitleInfoEventLeagueVsStatusComponent_TypeInfo);
    sub_1C7BAE8(&Method_UITweener_Begin_TweenAlpha___);
    byte_4CECF83 = 1;
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
                                      (const MethodInfo_3245DA8 *)Method_UITweener_Begin_TweenAlpha___);
  if ( !Root )
LABEL_8:
    sub_1C7BD40(Root, method);
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
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  UnityEngine_GameObject_o *v26; // x0
  __int64 v27; // [xsp+0h] [xbp-40h]

  if ( (byte_4CECF81 & 1) == 0 )
  {
    sub_1C7BAE8(&TitleInfoEventLeagueVsStatusComponent_TypeInfo);
    sub_1C7BAE8(&Method_UITweener_Begin_TweenAlpha___);
    sub_1C7BAE8(&Method_UITweener_Begin_TweenPosition___);
    byte_4CECF81 = 1;
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
                   (const MethodInfo_3245DA8 *)Method_UITweener_Begin_TweenPosition___);
  v27 = *(_QWORD *)&this->fields.outPos.fields.x;
  if ( !Root )
    goto LABEL_9;
  v10 = Root;
  *((_DWORD *)Root + 34) = LODWORD(this->fields.outPos.fields.z);
  *((_QWORD *)Root + 16) = v27;
  z = this->fields.inPos.fields.z;
  v12 = *(_QWORD *)&this->fields.inPos.fields.x;
  *((_DWORD *)Root + 8) = 6;
  *((float *)Root + 37) = z;
  *(_QWORD *)(Root + 140) = v12;
  v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  *((_QWORD *)v10 + 10) = v13;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v10 + 80), (int32_t)v13, v14, v15, v16, v17, v18, v19);
  *((_QWORD *)v10 + 11) = callFinished;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v10 + 88), (int32_t)callFinished, v20, v21, v22, v23, v24, v25);
  Root = (char *)this->fields.Root;
  if ( !Root
    || (v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Root, 0),
        (Root = (char *)UITweener__Begin_object_(
                          v26,
                          TitleInfoEventLeagueVsStatusComponent_TypeInfo->static_fields->FRAME_ANIM_DURATION,
                          (const MethodInfo_3245DA8 *)Method_UITweener_Begin_TweenAlpha___)) == 0) )
  {
LABEL_9:
    sub_1C7BD40(Root, v9);
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
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  UnityEngine_GameObject_o *v26; // x0
  __int64 v27; // [xsp+0h] [xbp-40h]

  if ( (byte_4CECF82 & 1) == 0 )
  {
    sub_1C7BAE8(&TitleInfoEventLeagueVsStatusComponent_TypeInfo);
    sub_1C7BAE8(&Method_UITweener_Begin_TweenAlpha___);
    sub_1C7BAE8(&Method_UITweener_Begin_TweenPosition___);
    byte_4CECF82 = 1;
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
                   (const MethodInfo_3245DA8 *)Method_UITweener_Begin_TweenPosition___);
  v27 = *(_QWORD *)&this->fields.inPos.fields.x;
  if ( !Root )
    goto LABEL_9;
  v10 = Root;
  *((_DWORD *)Root + 34) = LODWORD(this->fields.inPos.fields.z);
  *((_QWORD *)Root + 16) = v27;
  z = this->fields.outPos.fields.z;
  v12 = *(_QWORD *)&this->fields.outPos.fields.x;
  *((_DWORD *)Root + 8) = 2;
  *((float *)Root + 37) = z;
  *(_QWORD *)(Root + 140) = v12;
  v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  *((_QWORD *)v10 + 10) = v13;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v10 + 80), (int32_t)v13, v14, v15, v16, v17, v18, v19);
  *((_QWORD *)v10 + 11) = callFinished;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v10 + 88), (int32_t)callFinished, v20, v21, v22, v23, v24, v25);
  Root = (char *)this->fields.Root;
  if ( !Root
    || (v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Root, 0),
        (Root = (char *)UITweener__Begin_object_(
                          v26,
                          TitleInfoEventLeagueVsStatusComponent_TypeInfo->static_fields->FRAME_ANIM_DURATION,
                          (const MethodInfo_3245DA8 *)Method_UITweener_Begin_TweenAlpha___)) == 0) )
  {
LABEL_9:
    sub_1C7BD40(Root, v9);
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
    sub_1C7BD40(0, v3);
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

  if ( (byte_4CECF7E & 1) == 0 )
  {
    sub_1C7BAE8(&TitleInfoEventLeagueVsStatusComponent_TypeInfo);
    sub_1C7BAE8(&StringLiteral_6093/*"EntryAnim"*/);
    byte_4CECF7E = 1;
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
    sub_1C7BD40(transform, v4);
  }
  ((void (__fastcall *)(UnityEngine_Transform_o *, _QWORD, float))transform->klass[1]._1.this_arg.data)(
    transform,
    *(_QWORD *)&transform->klass[1]._1.this_arg.bits,
    0.0);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6093/*"EntryAnim"*/,
    TitleInfoEventLeagueVsStatusComponent_TypeInfo->static_fields->ENTRY_ANIM_DELAY
  + (float)(this->fields.inPos.fields.y / -500.0),
    0);
}


void TitleInfoEventLeagueVsStatusComponent__StartClearAnim(
        TitleInfoEventLeagueVsStatusComponent_o *this,
        System_Action_o *cb,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  UnityEngine_Transform_o *transform; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  TitleInfoEventLeagueVsStatusComponent_c *v13; // x0
  float32x2_t *static_fields; // x8
  float32x2_t v15; // d0
  float v16; // s2
  float y; // [xsp+0h] [xbp-30h]
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CECF7F & 1) == 0 )
  {
    sub_1C7BAE8(&TitleInfoEventLeagueVsStatusComponent_TypeInfo);
    sub_1C7BAE8(&StringLiteral_2271/*"AnimFrameOutEnd"*/);
    byte_4CECF7F = 1;
  }
  this->fields.clearAnimCallBack = cb;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.clearAnimCallBack,
    (int32_t)cb,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    sub_1C7BD40(0, v11);
  localPosition = UnityEngine_Transform__get_localPosition(transform, 0);
  this->fields.inPos.fields.x = 0.0;
  this->fields.inPos.fields.y = localPosition.fields.y;
  this->fields.inPos.fields.z = 0.0;
  v13 = TitleInfoEventLeagueVsStatusComponent_TypeInfo;
  if ( !TitleInfoEventLeagueVsStatusComponent_TypeInfo->_2.cctor_finished )
  {
    y = localPosition.fields.y;
    j_il2cpp_runtime_class_init_0(TitleInfoEventLeagueVsStatusComponent_TypeInfo);
    localPosition.fields.y = y;
    v13 = TitleInfoEventLeagueVsStatusComponent_TypeInfo;
  }
  static_fields = (float32x2_t *)v13->static_fields;
  v15.n64_u32[0] = 0;
  v15.n64_u32[1] = LODWORD(localPosition.fields.y);
  v16 = static_fields[1].n64_f32[0];
  *(float32x2_t *)&this->fields.outPos.fields.x = vadd_f32((float32x2_t)static_fields->n64_u64[0], v15);
  this->fields.outPos.fields.z = v16 + 0.0;
  TitleInfoEventLeagueVsStatusComponent__FrameOut(this, (System_String_o *)StringLiteral_2271/*"AnimFrameOutEnd"*/, v12);
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
  struct System_Int32_array *v15; // x8
  unsigned __int64 v16; // x28
  __int64 v17; // x26
  unsigned __int64 max_length_low; // x9
  struct System_Int32_array *group1; // x8
  int32_t id; // w2
  int32_t v21; // w3
  struct System_Int32_array *group2; // x8
  float v23; // s0
  struct System_Int32_array *v24; // x8
  int32_t v25; // w8
  struct System_Int32_array *v26; // x8
  __int64 v27; // x23
  double v28; // d2
  float v29; // s0
  float v30; // s1
  float v31; // s0
  struct System_Int32_array *v32; // x8
  int32_t v33; // w8
  int32_t v34; // w8
  Il2CppObject *v35; // x0
  __int64 *v36; // x8
  struct System_Int32_array *v37; // x8
  struct System_Int32_array *v38; // x8
  struct System_Int32_array *v39; // x8
  struct System_Int32_array *v40; // x8
  UISprite_o *statusName; // x21
  System_String_o *v42; // x22
  UISprite_o *title; // x21
  Il2CppObject *v44; // x0
  System_String_o *v45; // x0
  UISprite_o *backGround; // x20
  Il2CppObject *v47; // x0
  System_String_o *v48; // x0
  unsigned __int64 v49; // x24
  Il2CppObject *v50; // x0
  struct System_Int32_array *v51; // x8
  int32_t v52; // [xsp+8h] [xbp-58h] BYREF
  int32_t v53; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4CECF7D & 1) == 0 )
  {
    sub_1C7BAE8(&AtlasManager_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_EventPointGroupMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_QuestReleaseMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_TotalEventPointMaster___);
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&StringLiteral_16167/*"_01"*/);
    sub_1C7BAE8(&StringLiteral_16169/*"_03"*/);
    sub_1C7BAE8(&StringLiteral_16170/*"_04"*/);
    sub_1C7BAE8(&StringLiteral_17099/*"balance"*/);
    sub_1C7BAE8(&StringLiteral_19451/*"event_vs_status_bg_"*/);
    sub_1C7BAE8(&StringLiteral_19450/*"event_vs_status_"*/);
    sub_1C7BAE8(&StringLiteral_16171/*"_05"*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    sub_1C7BAE8(&StringLiteral_16168/*"_02"*/);
    sub_1C7BAE8(&StringLiteral_19452/*"event_vs_status_name_"*/);
    byte_4CECF7D = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_TotalEventPointMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  v10 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_EventPointGroupMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
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
    v21 = group1->m_Items[0];
    if ( (v12 & (eventPointEntity->fields.endedAt <= Time)) != 0 )
    {
      Instance = TotalEventPointMaster__IsGroupWin((TotalEventPointMaster_o *)MasterData_object, eventId, id, v21, 0);
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
          v34 = *(_DWORD *)(Instance + 32);
          goto LABEL_44;
        }
      }
    }
    else
    {
      Instance = TotalEventPointMaster__GetPoint((TotalEventPointMaster_o *)MasterData_object, eventId, id, v21, 0);
      v26 = eventPointEntity->fields.group2;
      if ( !v26 )
        goto LABEL_18;
      if ( !LODWORD(v26->max_length) )
        goto LABEL_88;
      v27 = Instance;
      Instance = TotalEventPointMaster__GetPoint(
                   (TotalEventPointMaster_o *)MasterData_object,
                   eventId,
                   eventPointEntity->fields.id,
                   v26->m_Items[0],
                   0);
      v28 = (double)(Instance + v27);
      v29 = (double)v27 / v28;
      v30 = (double)Instance / v28;
      v31 = vabds_f32(v30, v29);
      if ( v31 >= 0.3 )
      {
        if ( v27 <= Instance )
        {
          v37 = eventPointEntity->fields.group2;
          if ( !v37 )
            goto LABEL_18;
        }
        else
        {
          v37 = eventPointEntity->fields.group1;
          if ( !v37 )
            goto LABEL_18;
        }
        if ( !LODWORD(v37->max_length) )
          goto LABEL_88;
        if ( v10 )
        {
          Instance = (__int64)EventPointGroupMaster__getEntity(
                                (EventPointGroupMaster_o *)v10,
                                eventId,
                                v37->m_Items[0],
                                0);
          if ( Instance )
          {
            v25 = *(_DWORD *)(Instance + 32);
            goto LABEL_60;
          }
        }
      }
      else
      {
        if ( v31 < 0.15 )
        {
          v13 = (Il2CppObject *)StringLiteral_17099/*"balance"*/;
          goto LABEL_72;
        }
        if ( v27 <= Instance )
        {
          v39 = eventPointEntity->fields.group2;
          if ( !v39 )
            goto LABEL_18;
        }
        else
        {
          v39 = eventPointEntity->fields.group1;
          if ( !v39 )
            goto LABEL_18;
        }
        if ( !LODWORD(v39->max_length) )
          goto LABEL_88;
        if ( v10 )
        {
          Instance = (__int64)EventPointGroupMaster__getEntity(
                                (EventPointGroupMaster_o *)v10,
                                eventId,
                                v39->m_Items[0],
                                0);
          if ( Instance )
          {
            v33 = *(_DWORD *)(Instance + 32);
            goto LABEL_70;
          }
        }
      }
    }
LABEL_18:
    sub_1C7BD40(Instance, v8);
  }
  v15 = eventPointEntity->fields.group1;
  if ( !v15 )
    goto LABEL_18;
  v16 = 0;
  v17 = 0;
  while ( 1 )
  {
    max_length_low = LODWORD(v15->max_length);
    if ( (__int64)v16 >= (int)max_length_low )
      break;
    if ( v16 >= max_length_low )
      goto LABEL_88;
    if ( MasterData_object )
    {
      Instance = TotalEventPointMaster__GetPoint(
                   (TotalEventPointMaster_o *)MasterData_object,
                   eventId,
                   eventPointEntity->fields.id,
                   v15->m_Items[v16],
                   0);
      v15 = eventPointEntity->fields.group1;
      v17 += Instance;
      ++v16;
      if ( v15 )
        continue;
    }
    goto LABEL_18;
  }
  v23 = 1.0 - (double)v17 / (double)eventPointEntity->fields.normaTotalPoint;
  if ( v23 >= 0.75 )
  {
    v32 = eventPointEntity->fields.group2;
    if ( !v32 )
      goto LABEL_18;
    if ( !LODWORD(v32->max_length) )
      goto LABEL_88;
    v33 = v32->m_Items[0];
LABEL_70:
    v53 = v33;
    v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v53);
    v36 = &StringLiteral_16167/*"_01"*/;
    goto LABEL_71;
  }
  if ( v23 >= 0.5 )
  {
    v24 = eventPointEntity->fields.group2;
    if ( v24 )
    {
      if ( LODWORD(v24->max_length) )
      {
        v25 = v24->m_Items[0];
LABEL_60:
        v53 = v25;
        v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v53);
        v36 = &StringLiteral_16168/*"_02"*/;
        goto LABEL_71;
      }
LABEL_88:
      sub_1C7BD48(Instance);
    }
    goto LABEL_18;
  }
  if ( v23 >= 0.25 )
  {
    v38 = eventPointEntity->fields.group2;
    if ( !v38 )
      goto LABEL_18;
    if ( !LODWORD(v38->max_length) )
      goto LABEL_88;
    v34 = v38->m_Items[0];
LABEL_44:
    v53 = v34;
    v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v53);
    v36 = &StringLiteral_16169/*"_03"*/;
LABEL_71:
    v13 = (Il2CppObject *)System_String__Concat(v35, (Il2CppObject *)*v36, 0);
    goto LABEL_72;
  }
  if ( v23 >= 0.1 )
  {
    v40 = eventPointEntity->fields.group2;
    if ( v40 )
    {
      if ( LODWORD(v40->max_length) )
      {
        v53 = v40->m_Items[0];
        v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v53);
        v36 = &StringLiteral_16170/*"_04"*/;
        goto LABEL_71;
      }
      goto LABEL_88;
    }
    goto LABEL_18;
  }
  if ( v23 < 0.1 && v23 > 0.0 || !(v12 & 1 | (v23 > 0.0)) )
  {
    v51 = eventPointEntity->fields.group2;
    if ( v51 )
    {
      if ( LODWORD(v51->max_length) )
      {
        v53 = v51->m_Items[0];
        v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v53);
        v36 = &StringLiteral_16171/*"_05"*/;
        goto LABEL_71;
      }
      goto LABEL_88;
    }
    goto LABEL_18;
  }
  if ( (int)max_length_low >= 1 )
  {
    v49 = 0;
    while ( v49 < (unsigned int)max_length_low )
    {
      if ( !v10 )
        goto LABEL_18;
      Instance = (__int64)EventPointGroupMaster__getEntity(
                            (EventPointGroupMaster_o *)v10,
                            eventId,
                            v15->m_Items[v49],
                            0);
      if ( !Instance )
        goto LABEL_18;
      v53 = *(_DWORD *)(Instance + 32);
      v50 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v53);
      Instance = (__int64)System_String__Concat(v13, v50, 0);
      v15 = eventPointEntity->fields.group1;
      if ( !v15 )
        goto LABEL_18;
      LODWORD(max_length_low) = v15->max_length;
      ++v49;
      v13 = (Il2CppObject *)Instance;
      if ( (__int64)v49 >= (int)max_length_low )
        goto LABEL_72;
    }
    goto LABEL_88;
  }
LABEL_72:
  statusName = this->fields.statusName;
  v42 = System_String__Concat_64176912((System_String_o *)StringLiteral_19450/*"event_vs_status_"*/, (System_String_o *)v13, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(statusName, v42, 0);
  title = this->fields.title;
  v53 = eventPointEntity->fields.id;
  v44 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v53);
  v45 = System_String__Concat((Il2CppObject *)StringLiteral_19452/*"event_vs_status_name_"*/, v44, 0);
  AtlasManager__SetEventUI(title, v45, 0);
  backGround = this->fields.backGround;
  v52 = eventPointEntity->fields.id;
  v47 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v52);
  v48 = System_String__Concat((Il2CppObject *)StringLiteral_19451/*"event_vs_status_bg_"*/, v47, 0);
  AtlasManager__SetEventUI(backGround, v48, 0);
}