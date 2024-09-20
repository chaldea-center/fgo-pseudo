void __fastcall TitleInfoEventLeagueVsStatusComponent___cctor(const MethodInfo *method)
{
  struct TitleInfoEventLeagueVsStatusComponent_StaticFields *static_fields; // x8

  if ( (byte_4A5908B & 1) == 0 )
  {
    sub_1B885B0(&TitleInfoEventLeagueVsStatusComponent_TypeInfo);
    byte_4A5908B = 1;
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

  if ( (byte_4A59087 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_18004/*"clearAnimFinised"*/);
    byte_4A59087 = 1;
  }
  if ( this->fields.clearAnimCallBack )
    v4 = (System_String_o *)StringLiteral_18004/*"clearAnimFinised"*/;
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
  UnityEngine_Component_o *Root; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  TitleInfoEventLeagueVsStatusComponent_c *v5; // x8
  UnityEngine_GameObject_o *v6; // x19

  if ( (byte_4A5908A & 1) == 0 )
  {
    sub_1B885B0(&TitleInfoEventLeagueVsStatusComponent_TypeInfo);
    sub_1B885B0(&Method_UITweener_Begin_TweenAlpha___);
    byte_4A5908A = 1;
  }
  Root = (UnityEngine_Component_o *)this->fields.Root;
  if ( !Root )
    goto LABEL_8;
  gameObject = UnityEngine_Component__get_gameObject(Root, 0LL);
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
                                      (const MethodInfo_2F31F60 *)Method_UITweener_Begin_TweenAlpha___);
  if ( !Root )
LABEL_8:
    sub_1B8880C(Root, method);
  LODWORD(Root[1].monitor) = 2;
  Root[5].monitor = (void *)1065353216;
}


void __fastcall TitleInfoEventLeagueVsStatusComponent__FrameIn(
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
  int32_t v16; // w2
  int32_t v17; // w3
  UnityEngine_GameObject_o *v18; // x0
  __int64 v19; // [xsp+0h] [xbp-40h]

  if ( (byte_4A59088 & 1) == 0 )
  {
    sub_1B885B0(&TitleInfoEventLeagueVsStatusComponent_TypeInfo);
    sub_1B885B0(&Method_UITweener_Begin_TweenAlpha___);
    sub_1B885B0(&Method_UITweener_Begin_TweenPosition___);
    byte_4A59088 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
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
                   (const MethodInfo_2F31F60 *)Method_UITweener_Begin_TweenPosition___);
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
  v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  *((_QWORD *)v10 + 10) = v13;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v10 + 80), (int32_t)v13, v14, v15);
  *((_QWORD *)v10 + 11) = callFinished;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v10 + 88), (int32_t)callFinished, v16, v17);
  Root = (char *)this->fields.Root;
  if ( !Root
    || (v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Root, 0LL),
        (Root = (char *)UITweener__Begin_object_(
                          v18,
                          TitleInfoEventLeagueVsStatusComponent_TypeInfo->static_fields->FRAME_ANIM_DURATION,
                          (const MethodInfo_2F31F60 *)Method_UITweener_Begin_TweenAlpha___)) == 0LL) )
  {
LABEL_9:
    sub_1B8880C(Root, v9);
  }
  *((_QWORD *)Root + 16) = 0x3F80000000000000LL;
  *((_DWORD *)Root + 8) = 6;
}


void __fastcall TitleInfoEventLeagueVsStatusComponent__FrameOut(
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
  int32_t v16; // w2
  int32_t v17; // w3
  UnityEngine_GameObject_o *v18; // x0
  __int64 v19; // [xsp+0h] [xbp-40h]

  if ( (byte_4A59089 & 1) == 0 )
  {
    sub_1B885B0(&TitleInfoEventLeagueVsStatusComponent_TypeInfo);
    sub_1B885B0(&Method_UITweener_Begin_TweenAlpha___);
    sub_1B885B0(&Method_UITweener_Begin_TweenPosition___);
    byte_4A59089 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
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
                   (const MethodInfo_2F31F60 *)Method_UITweener_Begin_TweenPosition___);
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
  v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  *((_QWORD *)v10 + 10) = v13;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v10 + 80), (int32_t)v13, v14, v15);
  *((_QWORD *)v10 + 11) = callFinished;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v10 + 88), (int32_t)callFinished, v16, v17);
  Root = (char *)this->fields.Root;
  if ( !Root
    || (v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Root, 0LL),
        (Root = (char *)UITweener__Begin_object_(
                          v18,
                          TitleInfoEventLeagueVsStatusComponent_TypeInfo->static_fields->FRAME_ANIM_DURATION,
                          (const MethodInfo_2F31F60 *)Method_UITweener_Begin_TweenAlpha___)) == 0LL) )
  {
LABEL_9:
    sub_1B8880C(Root, v9);
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
    sub_1B8880C(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventLeagueVsStatusComponent__SetEntryAnim(
        TitleInfoEventLeagueVsStatusComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  float v5; // s1
  TitleInfoEventLeagueVsStatusComponent_c *v6; // x0
  float32x2_t *static_fields; // x8
  float32x2_t v8; // d0
  float v9; // s2
  float v10; // [xsp+0h] [xbp-30h]

  if ( (byte_4A59085 & 1) == 0 )
  {
    sub_1B885B0(&TitleInfoEventLeagueVsStatusComponent_TypeInfo);
    sub_1B885B0(&StringLiteral_6046/*"EntryAnim"*/);
    byte_4A59085 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_9;
  *(UnityEngine_Vector3_o *)(&v5 - 1) = UnityEngine_Transform__get_localPosition(transform, 0LL);
  this->fields.inPos.fields.x = 0.0;
  this->fields.inPos.fields.y = v5;
  this->fields.inPos.fields.z = 0.0;
  v6 = TitleInfoEventLeagueVsStatusComponent_TypeInfo;
  if ( !TitleInfoEventLeagueVsStatusComponent_TypeInfo->_2.cctor_finished )
  {
    v10 = v5;
    j_il2cpp_runtime_class_init_0(TitleInfoEventLeagueVsStatusComponent_TypeInfo);
    v5 = v10;
    v6 = TitleInfoEventLeagueVsStatusComponent_TypeInfo;
  }
  static_fields = (float32x2_t *)v6->static_fields;
  v8.n64_u32[0] = 0;
  v8.n64_f32[1] = v5;
  v9 = static_fields[1].n64_f32[0];
  *(float32x2_t *)&this->fields.outPos.fields.x = vadd_f32((float32x2_t)static_fields->n64_u64[0], v8);
  this->fields.outPos.fields.z = v9 + 0.0;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.outPos, 0LL),
        (transform = (UnityEngine_Transform_o *)this->fields.Root) == 0LL) )
  {
LABEL_9:
    sub_1B8880C(transform, v4);
  }
  (*(void (__fastcall **)(UnityEngine_Transform_o *, Il2CppClass *, float))&transform->klass[1]._1.this_arg.bits)(
    transform,
    transform->klass[1]._1.element_class,
    0.0);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6046/*"EntryAnim"*/,
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
  UnityEngine_Transform_o *transform; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  float v9; // s1
  TitleInfoEventLeagueVsStatusComponent_c *v10; // x0
  float32x2_t *static_fields; // x8
  float32x2_t v12; // d0
  float v13; // s2
  float v14; // [xsp+0h] [xbp-30h]

  if ( (byte_4A59086 & 1) == 0 )
  {
    sub_1B885B0(&TitleInfoEventLeagueVsStatusComponent_TypeInfo);
    sub_1B885B0(&StringLiteral_2372/*"AnimFrameOutEnd"*/);
    byte_4A59086 = 1;
  }
  this->fields.clearAnimCallBack = cb;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.clearAnimCallBack, (int32_t)cb, (int32_t)method, v3);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_1B8880C(0LL, v7);
  *(UnityEngine_Vector3_o *)(&v9 - 1) = UnityEngine_Transform__get_localPosition(transform, 0LL);
  this->fields.inPos.fields.x = 0.0;
  this->fields.inPos.fields.y = v9;
  this->fields.inPos.fields.z = 0.0;
  v10 = TitleInfoEventLeagueVsStatusComponent_TypeInfo;
  if ( !TitleInfoEventLeagueVsStatusComponent_TypeInfo->_2.cctor_finished )
  {
    v14 = v9;
    j_il2cpp_runtime_class_init_0(TitleInfoEventLeagueVsStatusComponent_TypeInfo);
    v9 = v14;
    v10 = TitleInfoEventLeagueVsStatusComponent_TypeInfo;
  }
  static_fields = (float32x2_t *)v10->static_fields;
  v12.n64_u32[0] = 0;
  v12.n64_f32[1] = v9;
  v13 = static_fields[1].n64_f32[0];
  *(float32x2_t *)&this->fields.outPos.fields.x = vadd_f32((float32x2_t)static_fields->n64_u64[0], v12);
  this->fields.outPos.fields.z = v13 + 0.0;
  TitleInfoEventLeagueVsStatusComponent__FrameOut(this, (System_String_o *)StringLiteral_2372/*"AnimFrameOutEnd"*/, v8);
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


void __fastcall TitleInfoEventLeagueVsStatusComponent__setup(
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
  unsigned __int64 max_length; // x9
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

  if ( (byte_4A59084 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventPointGroupMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestReleaseMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_TotalEventPointMaster___);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_16125/*"_01"*/);
    sub_1B885B0(&StringLiteral_16127/*"_03"*/);
    sub_1B885B0(&StringLiteral_16128/*"_04"*/);
    sub_1B885B0(&StringLiteral_17055/*"balance"*/);
    sub_1B885B0(&StringLiteral_19289/*"event_vs_status_bg_"*/);
    sub_1B885B0(&StringLiteral_19288/*"event_vs_status_"*/);
    sub_1B885B0(&StringLiteral_16129/*"_05"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_16126/*"_02"*/);
    sub_1B885B0(&StringLiteral_19290/*"event_vs_status_name_"*/);
    byte_4A59084 = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_TotalEventPointMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  v10 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventPointGroupMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
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
  v12 = Instance;
  ((void (__fastcall *)(struct UIWidget_o *, Il2CppMethodPointer, float))Root->klass->vtable._8_set_alpha.method)(
    this->fields.Root,
    Root->klass->vtable._9_CalculateFinalAlpha.methodPtr,
    0.0);
  v13 = (Il2CppObject *)StringLiteral_1/*""*/;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
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
    v24 = group1->m_Items[1];
    if ( (v12 & (eventPointEntity->fields.endedAt <= Time)) != 0 )
    {
      Instance = TotalEventPointMaster__IsGroupWin((TotalEventPointMaster_o *)MasterData_object, eventId, id, v24, 0LL);
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
      if ( v10 )
      {
        Instance = (__int64)EventPointGroupMaster__getEntity(
                              (EventPointGroupMaster_o *)v10,
                              eventId,
                              group2->m_Items[1],
                              0LL);
        if ( Instance )
        {
          v37 = *(_DWORD *)(Instance + 32);
          goto LABEL_44;
        }
      }
    }
    else
    {
      Instance = TotalEventPointMaster__GetPoint((TotalEventPointMaster_o *)MasterData_object, eventId, id, v24, 0LL);
      v29 = eventPointEntity->fields.group2;
      if ( !v29 )
        goto LABEL_18;
      if ( !v29->max_length )
        goto LABEL_88;
      v30 = Instance;
      Instance = TotalEventPointMaster__GetPoint(
                   (TotalEventPointMaster_o *)MasterData_object,
                   eventId,
                   eventPointEntity->fields.id,
                   v29->m_Items[1],
                   0LL);
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
        if ( !v40->max_length )
          goto LABEL_88;
        if ( v10 )
        {
          Instance = (__int64)EventPointGroupMaster__getEntity(
                                (EventPointGroupMaster_o *)v10,
                                eventId,
                                v40->m_Items[1],
                                0LL);
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
          v13 = (Il2CppObject *)StringLiteral_17055/*"balance"*/;
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
        if ( !v42->max_length )
          goto LABEL_88;
        if ( v10 )
        {
          Instance = (__int64)EventPointGroupMaster__getEntity(
                                (EventPointGroupMaster_o *)v10,
                                eventId,
                                v42->m_Items[1],
                                0LL);
          if ( Instance )
          {
            v36 = *(_DWORD *)(Instance + 32);
            goto LABEL_70;
          }
        }
      }
    }
LABEL_18:
    sub_1B8880C(Instance, v8);
  }
  v18 = eventPointEntity->fields.group1;
  if ( !v18 )
    goto LABEL_18;
  v19 = 0LL;
  v20 = 0LL;
  while ( 1 )
  {
    max_length = v18->max_length;
    if ( (__int64)v19 >= (int)max_length )
      break;
    if ( v19 >= max_length )
      goto LABEL_88;
    if ( MasterData_object )
    {
      Instance = TotalEventPointMaster__GetPoint(
                   (TotalEventPointMaster_o *)MasterData_object,
                   eventId,
                   eventPointEntity->fields.id,
                   v18->m_Items[v19 + 1],
                   0LL);
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
    if ( !v35->max_length )
      goto LABEL_88;
    v36 = v35->m_Items[1];
LABEL_70:
    v65 = v36;
    v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v65, v15, v16, v17);
    v39 = &StringLiteral_16125/*"_01"*/;
    goto LABEL_71;
  }
  if ( v26 >= 0.5 )
  {
    v27 = eventPointEntity->fields.group2;
    if ( v27 )
    {
      if ( v27->max_length )
      {
        v28 = v27->m_Items[1];
LABEL_60:
        v65 = v28;
        v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v65, v15, v16, v17);
        v39 = &StringLiteral_16126/*"_02"*/;
        goto LABEL_71;
      }
LABEL_88:
      sub_1B88814(Instance, v8);
    }
    goto LABEL_18;
  }
  if ( v26 >= 0.25 )
  {
    v41 = eventPointEntity->fields.group2;
    if ( !v41 )
      goto LABEL_18;
    if ( !v41->max_length )
      goto LABEL_88;
    v37 = v41->m_Items[1];
LABEL_44:
    v65 = v37;
    v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v65, v15, v16, v17);
    v39 = &StringLiteral_16127/*"_03"*/;
LABEL_71:
    v13 = (Il2CppObject *)System_String__Concat(v38, (Il2CppObject *)*v39, 0LL);
    goto LABEL_72;
  }
  if ( v26 >= 0.1 )
  {
    v43 = eventPointEntity->fields.group2;
    if ( v43 )
    {
      if ( v43->max_length )
      {
        v65 = v43->m_Items[1];
        v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v65, v15, v16, v17);
        v39 = &StringLiteral_16128/*"_04"*/;
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
      if ( v63->max_length )
      {
        v65 = v63->m_Items[1];
        v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v65, v15, v16, v17);
        v39 = &StringLiteral_16129/*"_05"*/;
        goto LABEL_71;
      }
      goto LABEL_88;
    }
    goto LABEL_18;
  }
  if ( (int)max_length >= 1 )
  {
    v58 = 0LL;
    while ( v58 < (unsigned int)max_length )
    {
      if ( !v10 )
        goto LABEL_18;
      Instance = (__int64)EventPointGroupMaster__getEntity(
                            (EventPointGroupMaster_o *)v10,
                            eventId,
                            v18->m_Items[v58 + 1],
                            0LL);
      if ( !Instance )
        goto LABEL_18;
      v65 = *(_DWORD *)(Instance + 32);
      v62 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v65, v59, v60, v61);
      Instance = (__int64)System_String__Concat(v13, v62, 0LL);
      v18 = eventPointEntity->fields.group1;
      if ( !v18 )
        goto LABEL_18;
      LODWORD(max_length) = v18->max_length;
      ++v58;
      v13 = (Il2CppObject *)Instance;
      if ( (__int64)v58 >= (int)max_length )
        goto LABEL_72;
    }
    goto LABEL_88;
  }
LABEL_72:
  statusName = this->fields.statusName;
  v45 = System_String__Concat_61707032((System_String_o *)StringLiteral_19288/*"event_vs_status_"*/, (System_String_o *)v13, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(statusName, v45, 0LL);
  title = this->fields.title;
  v65 = eventPointEntity->fields.id;
  v50 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v65, v47, v48, v49);
  v51 = System_String__Concat((Il2CppObject *)StringLiteral_19290/*"event_vs_status_name_"*/, v50, 0LL);
  AtlasManager__SetEventUI(title, v51, 0LL);
  backGround = this->fields.backGround;
  v64 = eventPointEntity->fields.id;
  v56 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v64, v53, v54, v55);
  v57 = System_String__Concat((Il2CppObject *)StringLiteral_19289/*"event_vs_status_bg_"*/, v56, 0LL);
  AtlasManager__SetEventUI(backGround, v57, 0LL);
}