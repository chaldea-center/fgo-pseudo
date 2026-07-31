void TitleInfoEventLeagueVsStatusComponent___cctor(const MethodInfo *method)
{
  struct TitleInfoEventLeagueVsStatusComponent_StaticFields *static_fields; // x8
  TitleInfoEventLeagueVsStatusComponent_c *v2; // x10

  if ( (byte_5936F30 & 1) == 0 )
  {
    sub_21FFC50(&TitleInfoEventLeagueVsStatusComponent_TypeInfo);
    byte_5936F30 = 1;
  }
  static_fields = TitleInfoEventLeagueVsStatusComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->FRAME_ANIM_OUT_POS_DELTA.fields.x = 3263954944LL;
  v2 = TitleInfoEventLeagueVsStatusComponent_TypeInfo;
  static_fields->FRAME_ANIM_OUT_POS_DELTA.fields.z = 0.0;
  *(int32x2_t *)&v2->static_fields->FRAME_ANIM_DURATION = vdup_n_s32(0x3E99999Au);
}


void TitleInfoEventLeagueVsStatusComponent___ctor(
        TitleInfoEventLeagueVsStatusComponent_o *this,
        const MethodInfo *method)
{
  TitleInfoEventInfoComponent___ctor((TitleInfoEventInfoComponent_o *)this, 0);
}


void TitleInfoEventLeagueVsStatusComponent__AnimFrameOutEnd(
        TitleInfoEventLeagueVsStatusComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *v4; // x1

  if ( (byte_5936F2C & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_18757/*"clearAnimFinised"*/);
    byte_5936F2C = 1;
  }
  if ( this->fields.clearAnimCallBack )
    v4 = (System_String_o *)StringLiteral_18757/*"clearAnimFinised"*/;
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
  __int64 v5; // x1
  __int64 v6; // x2
  TitleInfoEventLeagueVsStatusComponent_c *v7; // x8
  UnityEngine_GameObject_o *v8; // x19

  if ( (byte_5936F2F & 1) == 0 )
  {
    sub_21FFC50(&TitleInfoEventLeagueVsStatusComponent_TypeInfo);
    sub_21FFC50(&Method_UITweener_Begin_TweenAlpha___);
    byte_5936F2F = 1;
  }
  Root = (UnityEngine_Component_o *)this->fields.Root;
  if ( !Root )
    goto LABEL_8;
  gameObject = UnityEngine_Component__get_gameObject(Root, 0);
  v7 = TitleInfoEventLeagueVsStatusComponent_TypeInfo;
  v8 = gameObject;
  if ( !*(&TitleInfoEventLeagueVsStatusComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventLeagueVsStatusComponent_TypeInfo, v5, v6);
    v7 = TitleInfoEventLeagueVsStatusComponent_TypeInfo;
  }
  Root = (UnityEngine_Component_o *)UITweener__Begin_object_(
                                      v8,
                                      v7->static_fields->FRAME_ANIM_DURATION,
                                      (const MethodInfo_39D1264 *)Method_UITweener_Begin_TweenAlpha___);
  if ( !Root )
LABEL_8:
    sub_21FFECC(Root, method);
  LODWORD(Root[1].monitor) = 2;
  Root[5].monitor = (void *)1065353216;
}


void TitleInfoEventLeagueVsStatusComponent__FrameIn(
        TitleInfoEventLeagueVsStatusComponent_o *this,
        System_String_o *callFinished,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  TitleInfoEventLeagueVsStatusComponent_c *v8; // x8
  UnityEngine_GameObject_o *v9; // x21
  char *Root; // x0
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

  if ( (byte_5936F2D & 1) == 0 )
  {
    sub_21FFC50(&TitleInfoEventLeagueVsStatusComponent_TypeInfo);
    sub_21FFC50(&Method_UITweener_Begin_TweenAlpha___);
    sub_21FFC50(&Method_UITweener_Begin_TweenPosition___);
    byte_5936F2D = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v8 = TitleInfoEventLeagueVsStatusComponent_TypeInfo;
  v9 = gameObject;
  if ( !*(&TitleInfoEventLeagueVsStatusComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventLeagueVsStatusComponent_TypeInfo, v6, v7);
    v8 = TitleInfoEventLeagueVsStatusComponent_TypeInfo;
  }
  Root = (char *)UITweener__Begin_object_(
                   v9,
                   v8->static_fields->FRAME_ANIM_DURATION,
                   (const MethodInfo_39D1264 *)Method_UITweener_Begin_TweenPosition___);
  if ( !Root )
    goto LABEL_9;
  v12 = *(_QWORD *)&this->fields.outPos.fields.x;
  v13 = Root;
  *((_DWORD *)Root + 34) = LODWORD(this->fields.outPos.fields.z);
  *((_QWORD *)Root + 16) = v12;
  v14 = *(_QWORD *)&this->fields.inPos.fields.x;
  *((_DWORD *)Root + 37) = LODWORD(this->fields.inPos.fields.z);
  *(_QWORD *)(Root + 140) = v14;
  *((_DWORD *)Root + 8) = 6;
  v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  *((_QWORD *)v13 + 10) = v15;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v13 + 80), (int32_t)v15, v16, v17, v18, v19, v20, v21);
  *((_QWORD *)v13 + 11) = callFinished;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v13 + 88), (int32_t)callFinished, v22, v23, v24, v25, v26, v27);
  Root = (char *)this->fields.Root;
  if ( !Root
    || (v28 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Root, 0),
        (Root = (char *)UITweener__Begin_object_(
                          v28,
                          TitleInfoEventLeagueVsStatusComponent_TypeInfo->static_fields->FRAME_ANIM_DURATION,
                          (const MethodInfo_39D1264 *)Method_UITweener_Begin_TweenAlpha___)) == 0) )
  {
LABEL_9:
    sub_21FFECC(Root, v11);
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
  __int64 v6; // x1
  __int64 v7; // x2
  TitleInfoEventLeagueVsStatusComponent_c *v8; // x8
  UnityEngine_GameObject_o *v9; // x21
  char *Root; // x0
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

  if ( (byte_5936F2E & 1) == 0 )
  {
    sub_21FFC50(&TitleInfoEventLeagueVsStatusComponent_TypeInfo);
    sub_21FFC50(&Method_UITweener_Begin_TweenAlpha___);
    sub_21FFC50(&Method_UITweener_Begin_TweenPosition___);
    byte_5936F2E = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v8 = TitleInfoEventLeagueVsStatusComponent_TypeInfo;
  v9 = gameObject;
  if ( !*(&TitleInfoEventLeagueVsStatusComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventLeagueVsStatusComponent_TypeInfo, v6, v7);
    v8 = TitleInfoEventLeagueVsStatusComponent_TypeInfo;
  }
  Root = (char *)UITweener__Begin_object_(
                   v9,
                   v8->static_fields->FRAME_ANIM_DURATION,
                   (const MethodInfo_39D1264 *)Method_UITweener_Begin_TweenPosition___);
  if ( !Root )
    goto LABEL_9;
  v12 = *(_QWORD *)&this->fields.inPos.fields.x;
  v13 = Root;
  *((_DWORD *)Root + 34) = LODWORD(this->fields.inPos.fields.z);
  *((_QWORD *)Root + 16) = v12;
  v14 = *(_QWORD *)&this->fields.outPos.fields.x;
  *((_DWORD *)Root + 37) = LODWORD(this->fields.outPos.fields.z);
  *(_QWORD *)(Root + 140) = v14;
  *((_DWORD *)Root + 8) = 2;
  v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  *((_QWORD *)v13 + 10) = v15;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v13 + 80), (int32_t)v15, v16, v17, v18, v19, v20, v21);
  *((_QWORD *)v13 + 11) = callFinished;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v13 + 88), (int32_t)callFinished, v22, v23, v24, v25, v26, v27);
  Root = (char *)this->fields.Root;
  if ( !Root
    || (v28 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Root, 0),
        (Root = (char *)UITweener__Begin_object_(
                          v28,
                          TitleInfoEventLeagueVsStatusComponent_TypeInfo->static_fields->FRAME_ANIM_DURATION,
                          (const MethodInfo_39D1264 *)Method_UITweener_Begin_TweenAlpha___)) == 0) )
  {
LABEL_9:
    sub_21FFECC(Root, v11);
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
    sub_21FFECC(0, v3);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
}


void TitleInfoEventLeagueVsStatusComponent__SetEntryAnim(
        TitleInfoEventLeagueVsStatusComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  TitleInfoEventLeagueVsStatusComponent_c *v7; // x0
  float32x2_t v8; // d0
  float32x2_t *static_fields; // x8
  float v10; // s3
  float y; // [xsp+0h] [xbp-30h]
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5936F2A & 1) == 0 )
  {
    sub_21FFC50(&TitleInfoEventLeagueVsStatusComponent_TypeInfo);
    sub_21FFC50(&StringLiteral_6330/*"EntryAnim"*/);
    byte_5936F2A = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_9;
  localPosition = UnityEngine_Transform__get_localPosition(transform, 0);
  v7 = TitleInfoEventLeagueVsStatusComponent_TypeInfo;
  this->fields.inPos.fields.x = 0.0;
  this->fields.inPos.fields.y = localPosition.fields.y;
  this->fields.inPos.fields.z = 0.0;
  if ( !*(&v7->_2.cctor_finished + 1) )
  {
    y = localPosition.fields.y;
    j_il2cpp_runtime_class_init_0(v7, v5, v6);
    localPosition.fields.y = y;
    v7 = TitleInfoEventLeagueVsStatusComponent_TypeInfo;
  }
  v8.n64_u32[0] = 0;
  static_fields = (float32x2_t *)v7->static_fields;
  v10 = static_fields[1].n64_f32[0];
  v8.n64_u32[1] = LODWORD(localPosition.fields.y);
  *(float32x2_t *)&this->fields.outPos.fields.x = vadd_f32(v8, (float32x2_t)static_fields->n64_u64[0]);
  this->fields.outPos.fields.z = v10 + 0.0;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.outPos, 0),
        (transform = (UnityEngine_Transform_o *)this->fields.Root) == 0) )
  {
LABEL_9:
    sub_21FFECC(transform, v4);
  }
  ((void (__fastcall *)(UnityEngine_Transform_o *, _QWORD, double))transform->klass[1]._1.this_arg.data)(
    transform,
    *(_QWORD *)&transform->klass[1]._1.this_arg.bits,
    0.0);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6330/*"EntryAnim"*/,
    TitleInfoEventLeagueVsStatusComponent_TypeInfo->static_fields->ENTRY_ANIM_DELAY
  + (float)(this->fields.inPos.fields.y / -500.0),
    0);
}


void TitleInfoEventLeagueVsStatusComponent__StartClearAnim(
        TitleInfoEventLeagueVsStatusComponent_o *this,
        System_Action_o *cb,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  UnityEngine_Transform_o *transform; // x0
  __int64 v11; // x1
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  TitleInfoEventLeagueVsStatusComponent_c *v14; // x0
  float32x2_t v15; // d0
  float32x2_t *static_fields; // x8
  System_String_o *v17; // x1
  float v18; // s3
  float y; // [xsp+0h] [xbp-30h]
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5936F2B & 1) == 0 )
  {
    sub_21FFC50(&TitleInfoEventLeagueVsStatusComponent_TypeInfo);
    sub_21FFC50(&StringLiteral_2377/*"AnimFrameOutEnd"*/);
    byte_5936F2B = 1;
  }
  this->fields.clearAnimCallBack = cb;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.clearAnimCallBack,
    (int32_t)cb,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    sub_21FFECC(0, v11);
  localPosition = UnityEngine_Transform__get_localPosition(transform, 0);
  v14 = TitleInfoEventLeagueVsStatusComponent_TypeInfo;
  this->fields.inPos.fields.x = 0.0;
  this->fields.inPos.fields.y = localPosition.fields.y;
  this->fields.inPos.fields.z = 0.0;
  if ( !*(&v14->_2.cctor_finished + 1) )
  {
    y = localPosition.fields.y;
    j_il2cpp_runtime_class_init_0(v14, v12, v13);
    localPosition.fields.y = y;
    v14 = TitleInfoEventLeagueVsStatusComponent_TypeInfo;
  }
  v15.n64_u32[0] = 0;
  static_fields = (float32x2_t *)v14->static_fields;
  v17 = (System_String_o *)StringLiteral_2377/*"AnimFrameOutEnd"*/;
  v18 = static_fields[1].n64_f32[0];
  v15.n64_u32[1] = LODWORD(localPosition.fields.y);
  *(float32x2_t *)&this->fields.outPos.fields.x = vadd_f32(v15, (float32x2_t)static_fields->n64_u64[0]);
  this->fields.outPos.fields.z = v18 + 0.0;
  TitleInfoEventLeagueVsStatusComponent__FrameOut(this, v17, v13);
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
  char v12; // w25
  __int64 v13; // x1
  __int64 v14; // x2
  Il2CppObject *v15; // x23
  int64_t Time; // x26
  struct System_Int32_array *v17; // x8
  unsigned __int64 v18; // x28
  __int64 v19; // x26
  unsigned __int64 max_length_low; // x9
  int32_t id; // w2
  struct System_Int32_array *group1; // x8
  struct System_Int32_array *v23; // x8
  float v24; // s0
  struct System_Int32_array *v25; // x8
  Il2CppObject *v26; // x0
  __int64 *v27; // x8
  struct System_Int32_array *group2; // x8
  __int64 v29; // x23
  double v30; // d1
  float v31; // s0
  float v32; // s0
  struct System_Int32_array *v33; // x8
  int32_t v34; // w8
  int32_t v35; // w8
  struct System_Int32_array *v36; // x8
  struct System_Int32_array *v37; // x8
  int32_t v38; // w8
  struct System_Int32_array *v39; // x8
  struct System_Int32_array *v40; // x8
  UISprite_o *statusName; // x21
  __int64 v42; // x1
  __int64 v43; // x2
  System_String_o *v44; // x22
  UISprite_o *title; // x21
  Il2CppObject *v46; // x0
  System_String_o *v47; // x0
  int32_t v48; // w8
  UISprite_o *backGround; // x19
  Il2CppObject *v50; // x0
  System_String_o *v51; // x0
  bool v53; // w10
  unsigned __int64 v54; // x24
  unsigned __int64 v55; // x9
  Il2CppObject *v56; // x0
  struct System_Int32_array *v57; // x8
  int32_t v58; // [xsp+8h] [xbp-58h] BYREF
  int32_t v59; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_5936F29 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_EventPointGroupMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_QuestReleaseMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_TotalEventPointMaster___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&StringLiteral_16716/*"_01"*/);
    sub_21FFC50(&StringLiteral_16718/*"_03"*/);
    sub_21FFC50(&StringLiteral_16719/*"_04"*/);
    sub_21FFC50(&StringLiteral_17707/*"balance"*/);
    sub_21FFC50(&StringLiteral_20160/*"event_vs_status_bg_"*/);
    sub_21FFC50(&StringLiteral_20159/*"event_vs_status_"*/);
    sub_21FFC50(&StringLiteral_16720/*"_05"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    sub_21FFC50(&StringLiteral_16717/*"_02"*/);
    sub_21FFC50(&StringLiteral_20161/*"event_vs_status_name_"*/);
    byte_5936F29 = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_TotalEventPointMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  v10 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventPointGroupMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
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
  ((void (__fastcall *)(struct UIWidget_o *__return_ptr, struct UIWidget_o *, const MethodInfo *, double))Root->klass->vtable._8_set_alpha.methodPtr)(
    Root,
    this->fields.Root,
    Root->klass->vtable._8_set_alpha.method,
    0.0);
  v15 = (Il2CppObject *)StringLiteral_1/*""*/;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v13, v14);
  Time = NetworkManager__getTime(0);
  Instance = EventPointEntity__isBossBattle(eventPointEntity, 0);
  if ( (Instance & 1) == 0 )
  {
    id = eventPointEntity->fields.id;
    group1 = eventPointEntity->fields.group1;
    if ( eventPointEntity->fields.endedAt > Time || (v12 & 1) == 0 )
    {
      if ( !group1 )
        goto LABEL_18;
      if ( !LODWORD(group1->max_length) )
        goto LABEL_96;
      if ( !MasterData_object )
        goto LABEL_18;
      Instance = TotalEventPointMaster__GetPoint(
                   (TotalEventPointMaster_o *)MasterData_object,
                   eventId,
                   id,
                   group1->m_Items[0],
                   0);
      group2 = eventPointEntity->fields.group2;
      if ( !group2 )
        goto LABEL_18;
      if ( !LODWORD(group2->max_length) )
        goto LABEL_96;
      v29 = Instance;
      Instance = TotalEventPointMaster__GetPoint(
                   (TotalEventPointMaster_o *)MasterData_object,
                   eventId,
                   eventPointEntity->fields.id,
                   group2->m_Items[0],
                   0);
      v30 = (double)(Instance + v29);
      v31 = (double)v29 / v30;
      *(float *)&v30 = (double)Instance / v30;
      v32 = vabds_f32(*(float *)&v30, v31);
      if ( v32 >= 0.3 )
      {
        if ( v29 <= Instance )
        {
          v36 = eventPointEntity->fields.group2;
          if ( !v36 )
            goto LABEL_18;
        }
        else
        {
          v36 = eventPointEntity->fields.group1;
          if ( !v36 )
            goto LABEL_18;
        }
        if ( !LODWORD(v36->max_length) )
          goto LABEL_96;
        if ( v10 )
        {
          Instance = (__int64)EventPointGroupMaster__getEntity(
                                (EventPointGroupMaster_o *)v10,
                                eventId,
                                v36->m_Items[0],
                                0);
          if ( Instance )
          {
            v38 = *(_DWORD *)(Instance + 32);
            goto LABEL_64;
          }
        }
      }
      else
      {
        if ( v32 < 0.15 )
        {
          v15 = (Il2CppObject *)StringLiteral_17707/*"balance"*/;
          goto LABEL_75;
        }
        if ( v29 <= Instance )
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
          goto LABEL_96;
        if ( v10 )
        {
          Instance = (__int64)EventPointGroupMaster__getEntity(
                                (EventPointGroupMaster_o *)v10,
                                eventId,
                                v39->m_Items[0],
                                0);
          if ( Instance )
          {
            v34 = *(_DWORD *)(Instance + 32);
            goto LABEL_73;
          }
        }
      }
    }
    else if ( group1 )
    {
      if ( !LODWORD(group1->max_length) )
        goto LABEL_96;
      if ( MasterData_object )
      {
        Instance = TotalEventPointMaster__IsGroupWin(
                     (TotalEventPointMaster_o *)MasterData_object,
                     eventId,
                     id,
                     group1->m_Items[0],
                     0);
        if ( (Instance & 1) != 0 )
        {
          v23 = eventPointEntity->fields.group1;
          if ( !v23 )
            goto LABEL_18;
        }
        else
        {
          v23 = eventPointEntity->fields.group2;
          if ( !v23 )
            goto LABEL_18;
        }
        if ( !LODWORD(v23->max_length) )
          goto LABEL_96;
        if ( v10 )
        {
          Instance = (__int64)EventPointGroupMaster__getEntity(
                                (EventPointGroupMaster_o *)v10,
                                eventId,
                                v23->m_Items[0],
                                0);
          if ( Instance )
          {
            v35 = *(_DWORD *)(Instance + 32);
            goto LABEL_49;
          }
        }
      }
    }
LABEL_18:
    sub_21FFECC(Instance, v8);
  }
  v17 = eventPointEntity->fields.group1;
  if ( !v17 )
    goto LABEL_18;
  v18 = 0;
  v19 = 0;
  while ( 1 )
  {
    max_length_low = LODWORD(v17->max_length);
    if ( (__int64)v18 >= (int)max_length_low )
      break;
    if ( v18 >= max_length_low )
      goto LABEL_96;
    if ( MasterData_object )
    {
      Instance = TotalEventPointMaster__GetPoint(
                   (TotalEventPointMaster_o *)MasterData_object,
                   eventId,
                   eventPointEntity->fields.id,
                   v17->m_Items[v18],
                   0);
      v17 = eventPointEntity->fields.group1;
      v19 += Instance;
      ++v18;
      if ( v17 )
        continue;
    }
    goto LABEL_18;
  }
  v24 = 1.0 - (double)v19 / (double)eventPointEntity->fields.normaTotalPoint;
  if ( v24 >= 0.75 )
  {
    v33 = eventPointEntity->fields.group2;
    if ( !v33 )
      goto LABEL_18;
    if ( !LODWORD(v33->max_length) )
      goto LABEL_96;
    v34 = v33->m_Items[0];
LABEL_73:
    v59 = v34;
    v26 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v59);
    v27 = &StringLiteral_16716/*"_01"*/;
    goto LABEL_74;
  }
  if ( v24 >= 0.5 )
  {
    v37 = eventPointEntity->fields.group2;
    if ( !v37 )
      goto LABEL_18;
    if ( !LODWORD(v37->max_length) )
      goto LABEL_96;
    v38 = v37->m_Items[0];
LABEL_64:
    v59 = v38;
    v26 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v59);
    v27 = &StringLiteral_16717/*"_02"*/;
    goto LABEL_74;
  }
  if ( v24 >= 0.25 )
  {
    v40 = eventPointEntity->fields.group2;
    if ( !v40 )
      goto LABEL_18;
    if ( !LODWORD(v40->max_length) )
      goto LABEL_96;
    v35 = v40->m_Items[0];
LABEL_49:
    v59 = v35;
    v26 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v59);
    v27 = &StringLiteral_16718/*"_03"*/;
    goto LABEL_74;
  }
  if ( v24 >= 0.1 )
  {
    v25 = eventPointEntity->fields.group2;
    if ( v25 )
    {
      if ( LODWORD(v25->max_length) )
      {
        v59 = v25->m_Items[0];
        v26 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v59);
        v27 = &StringLiteral_16719/*"_04"*/;
LABEL_74:
        v15 = (Il2CppObject *)System_String__Concat(v26, (Il2CppObject *)*v27, 0);
        goto LABEL_75;
      }
LABEL_96:
      sub_21FFED4(Instance);
    }
    goto LABEL_18;
  }
  v53 = v24 > 0.0 && v24 < 0.1;
  if ( v53 || !((v24 > 0.0) | v12 & 1) )
  {
    v57 = eventPointEntity->fields.group2;
    if ( v57 )
    {
      if ( LODWORD(v57->max_length) )
      {
        v59 = v57->m_Items[0];
        v26 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v59);
        v27 = &StringLiteral_16720/*"_05"*/;
        goto LABEL_74;
      }
      goto LABEL_96;
    }
    goto LABEL_18;
  }
  v54 = 0;
  while ( 1 )
  {
    v55 = LODWORD(v17->max_length);
    if ( (__int64)v54 >= (int)v55 )
      break;
    if ( v54 >= v55 )
      goto LABEL_96;
    if ( v10 )
    {
      Instance = (__int64)EventPointGroupMaster__getEntity(
                            (EventPointGroupMaster_o *)v10,
                            eventId,
                            v17->m_Items[v54],
                            0);
      if ( Instance )
      {
        v59 = *(_DWORD *)(Instance + 32);
        v56 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v59);
        Instance = (__int64)System_String__Concat(v15, v56, 0);
        v17 = eventPointEntity->fields.group1;
        v15 = (Il2CppObject *)Instance;
        ++v54;
        if ( v17 )
          continue;
      }
    }
    goto LABEL_18;
  }
LABEL_75:
  statusName = this->fields.statusName;
  v44 = System_String__Concat_75438412((System_String_o *)StringLiteral_20159/*"event_vs_status_"*/, (System_String_o *)v15, 0);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v42, v43);
  AtlasManager__SetEventUI(statusName, v44, 0);
  title = this->fields.title;
  v59 = eventPointEntity->fields.id;
  v46 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v59);
  v47 = System_String__Concat((Il2CppObject *)StringLiteral_20161/*"event_vs_status_name_"*/, v46, 0);
  AtlasManager__SetEventUI(title, v47, 0);
  v48 = eventPointEntity->fields.id;
  backGround = this->fields.backGround;
  v58 = v48;
  v50 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v58);
  v51 = System_String__Concat((Il2CppObject *)StringLiteral_20160/*"event_vs_status_bg_"*/, v50, 0);
  AtlasManager__SetEventUI(backGround, v51, 0);
}