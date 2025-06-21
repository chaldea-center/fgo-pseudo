void __fastcall TitleInfoEventLeagueVsStatusComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct TitleInfoEventLeagueVsStatusComponent_StaticFields *static_fields; // x8

  if ( (byte_4B1A7D9 & 1) == 0 )
  {
    sub_1BCAFF8(&TitleInfoEventLeagueVsStatusComponent_TypeInfo, v1);
    byte_4B1A7D9 = 1;
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

  if ( (byte_4B1A7D5 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_17850/*"clearAnimFinised"*/, method);
    byte_4B1A7D5 = 1;
  }
  if ( this->fields.clearAnimCallBack )
    v4 = (System_String_o *)StringLiteral_17850/*"clearAnimFinised"*/;
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
  __int64 v3; // x1
  UnityEngine_Component_o *Root; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  TitleInfoEventLeagueVsStatusComponent_c *v6; // x8
  UnityEngine_GameObject_o *v7; // x19

  if ( (byte_4B1A7D8 & 1) == 0 )
  {
    sub_1BCAFF8(&TitleInfoEventLeagueVsStatusComponent_TypeInfo, method);
    sub_1BCAFF8(&Method_UITweener_Begin_TweenAlpha___, v3);
    byte_4B1A7D8 = 1;
  }
  Root = (UnityEngine_Component_o *)this->fields.Root;
  if ( !Root )
    goto LABEL_8;
  gameObject = UnityEngine_Component__get_gameObject(Root, 0LL);
  v6 = TitleInfoEventLeagueVsStatusComponent_TypeInfo;
  v7 = gameObject;
  if ( !TitleInfoEventLeagueVsStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventLeagueVsStatusComponent_TypeInfo);
    v6 = TitleInfoEventLeagueVsStatusComponent_TypeInfo;
  }
  Root = (UnityEngine_Component_o *)UITweener__Begin_object_(
                                      v7,
                                      v6->static_fields->FRAME_ANIM_DURATION,
                                      (const MethodInfo_30D2A08 *)Method_UITweener_Begin_TweenAlpha___);
  if ( !Root )
LABEL_8:
    sub_1BCB254(Root, method);
  LODWORD(Root[1].monitor) = 2;
  Root[5].monitor = (void *)1065353216;
}


void __fastcall TitleInfoEventLeagueVsStatusComponent__FrameIn(
        TitleInfoEventLeagueVsStatusComponent_o *this,
        System_String_o *callFinished,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  TitleInfoEventLeagueVsStatusComponent_c *v8; // x8
  UnityEngine_GameObject_o *v9; // x21
  char *Root; // x0
  __int64 v11; // x1
  char *v12; // x21
  float z; // w8
  __int64 v14; // x9
  UnityEngine_GameObject_o *v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  UnityEngine_GameObject_o *v20; // x0
  __int64 v21; // [xsp+0h] [xbp-40h]

  if ( (byte_4B1A7D6 & 1) == 0 )
  {
    sub_1BCAFF8(&TitleInfoEventLeagueVsStatusComponent_TypeInfo, callFinished);
    sub_1BCAFF8(&Method_UITweener_Begin_TweenAlpha___, v5);
    sub_1BCAFF8(&Method_UITweener_Begin_TweenPosition___, v6);
    byte_4B1A7D6 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v8 = TitleInfoEventLeagueVsStatusComponent_TypeInfo;
  v9 = gameObject;
  if ( !TitleInfoEventLeagueVsStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventLeagueVsStatusComponent_TypeInfo);
    v8 = TitleInfoEventLeagueVsStatusComponent_TypeInfo;
  }
  Root = (char *)UITweener__Begin_object_(
                   v9,
                   v8->static_fields->FRAME_ANIM_DURATION,
                   (const MethodInfo_30D2A08 *)Method_UITweener_Begin_TweenPosition___);
  v21 = *(_QWORD *)&this->fields.outPos.fields.x;
  if ( !Root )
    goto LABEL_9;
  v12 = Root;
  *((_DWORD *)Root + 34) = LODWORD(this->fields.outPos.fields.z);
  *((_QWORD *)Root + 16) = v21;
  z = this->fields.inPos.fields.z;
  v14 = *(_QWORD *)&this->fields.inPos.fields.x;
  *((_DWORD *)Root + 8) = 6;
  *((float *)Root + 37) = z;
  *(_QWORD *)(Root + 140) = v14;
  v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  *((_QWORD *)v12 + 10) = v15;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v12 + 80), (int32_t)v15, v16, v17);
  *((_QWORD *)v12 + 11) = callFinished;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v12 + 88), (int32_t)callFinished, v18, v19);
  Root = (char *)this->fields.Root;
  if ( !Root
    || (v20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Root, 0LL),
        (Root = (char *)UITweener__Begin_object_(
                          v20,
                          TitleInfoEventLeagueVsStatusComponent_TypeInfo->static_fields->FRAME_ANIM_DURATION,
                          (const MethodInfo_30D2A08 *)Method_UITweener_Begin_TweenAlpha___)) == 0LL) )
  {
LABEL_9:
    sub_1BCB254(Root, v11);
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
  __int64 v6; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  TitleInfoEventLeagueVsStatusComponent_c *v8; // x8
  UnityEngine_GameObject_o *v9; // x21
  char *Root; // x0
  __int64 v11; // x1
  char *v12; // x21
  float z; // w8
  __int64 v14; // x9
  UnityEngine_GameObject_o *v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  UnityEngine_GameObject_o *v20; // x0
  __int64 v21; // [xsp+0h] [xbp-40h]

  if ( (byte_4B1A7D7 & 1) == 0 )
  {
    sub_1BCAFF8(&TitleInfoEventLeagueVsStatusComponent_TypeInfo, callFinished);
    sub_1BCAFF8(&Method_UITweener_Begin_TweenAlpha___, v5);
    sub_1BCAFF8(&Method_UITweener_Begin_TweenPosition___, v6);
    byte_4B1A7D7 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v8 = TitleInfoEventLeagueVsStatusComponent_TypeInfo;
  v9 = gameObject;
  if ( !TitleInfoEventLeagueVsStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventLeagueVsStatusComponent_TypeInfo);
    v8 = TitleInfoEventLeagueVsStatusComponent_TypeInfo;
  }
  Root = (char *)UITweener__Begin_object_(
                   v9,
                   v8->static_fields->FRAME_ANIM_DURATION,
                   (const MethodInfo_30D2A08 *)Method_UITweener_Begin_TweenPosition___);
  v21 = *(_QWORD *)&this->fields.inPos.fields.x;
  if ( !Root )
    goto LABEL_9;
  v12 = Root;
  *((_DWORD *)Root + 34) = LODWORD(this->fields.inPos.fields.z);
  *((_QWORD *)Root + 16) = v21;
  z = this->fields.outPos.fields.z;
  v14 = *(_QWORD *)&this->fields.outPos.fields.x;
  *((_DWORD *)Root + 8) = 2;
  *((float *)Root + 37) = z;
  *(_QWORD *)(Root + 140) = v14;
  v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  *((_QWORD *)v12 + 10) = v15;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v12 + 80), (int32_t)v15, v16, v17);
  *((_QWORD *)v12 + 11) = callFinished;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v12 + 88), (int32_t)callFinished, v18, v19);
  Root = (char *)this->fields.Root;
  if ( !Root
    || (v20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Root, 0LL),
        (Root = (char *)UITweener__Begin_object_(
                          v20,
                          TitleInfoEventLeagueVsStatusComponent_TypeInfo->static_fields->FRAME_ANIM_DURATION,
                          (const MethodInfo_30D2A08 *)Method_UITweener_Begin_TweenAlpha___)) == 0LL) )
  {
LABEL_9:
    sub_1BCB254(Root, v11);
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
    sub_1BCB254(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventLeagueVsStatusComponent__SetEntryAnim(
        TitleInfoEventLeagueVsStatusComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Transform_o *transform; // x0
  __int64 v5; // x1
  float v6; // s1
  TitleInfoEventLeagueVsStatusComponent_c *v7; // x0
  float32x2_t *static_fields; // x8
  float32x2_t v9; // d0
  float v10; // s2
  float v11; // [xsp+0h] [xbp-30h]

  if ( (byte_4B1A7D3 & 1) == 0 )
  {
    sub_1BCAFF8(&TitleInfoEventLeagueVsStatusComponent_TypeInfo, method);
    sub_1BCAFF8(&StringLiteral_6033/*"EntryAnim"*/, v3);
    byte_4B1A7D3 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_9;
  *(UnityEngine_Vector3_o *)(&v6 - 1) = UnityEngine_Transform__get_localPosition(transform, 0LL);
  this->fields.inPos.fields.x = 0.0;
  this->fields.inPos.fields.y = v6;
  this->fields.inPos.fields.z = 0.0;
  v7 = TitleInfoEventLeagueVsStatusComponent_TypeInfo;
  if ( !TitleInfoEventLeagueVsStatusComponent_TypeInfo->_2.cctor_finished )
  {
    v11 = v6;
    j_il2cpp_runtime_class_init_0(TitleInfoEventLeagueVsStatusComponent_TypeInfo);
    v6 = v11;
    v7 = TitleInfoEventLeagueVsStatusComponent_TypeInfo;
  }
  static_fields = (float32x2_t *)v7->static_fields;
  v9.n64_u32[0] = 0;
  v9.n64_f32[1] = v6;
  v10 = static_fields[1].n64_f32[0];
  *(float32x2_t *)&this->fields.outPos.fields.x = vadd_f32((float32x2_t)static_fields->n64_u64[0], v9);
  this->fields.outPos.fields.z = v10 + 0.0;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.outPos, 0LL),
        (transform = (UnityEngine_Transform_o *)this->fields.Root) == 0LL) )
  {
LABEL_9:
    sub_1BCB254(transform, v5);
  }
  (*(void (__fastcall **)(UnityEngine_Transform_o *, Il2CppClass *, float))&transform->klass[1]._1.this_arg.bits)(
    transform,
    transform->klass[1]._1.element_class,
    0.0);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6033/*"EntryAnim"*/,
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
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  UnityEngine_Transform_o *transform; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  float v10; // s1
  TitleInfoEventLeagueVsStatusComponent_c *v11; // x0
  float32x2_t *static_fields; // x8
  float32x2_t v13; // d0
  float v14; // s2
  float v15; // [xsp+0h] [xbp-30h]

  if ( (byte_4B1A7D4 & 1) == 0 )
  {
    sub_1BCAFF8(&TitleInfoEventLeagueVsStatusComponent_TypeInfo, cb);
    sub_1BCAFF8(&StringLiteral_2258/*"AnimFrameOutEnd"*/, v6);
    byte_4B1A7D4 = 1;
  }
  this->fields.clearAnimCallBack = cb;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.clearAnimCallBack, (int32_t)cb, (int32_t)method, v3);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_1BCB254(0LL, v8);
  *(UnityEngine_Vector3_o *)(&v10 - 1) = UnityEngine_Transform__get_localPosition(transform, 0LL);
  this->fields.inPos.fields.x = 0.0;
  this->fields.inPos.fields.y = v10;
  this->fields.inPos.fields.z = 0.0;
  v11 = TitleInfoEventLeagueVsStatusComponent_TypeInfo;
  if ( !TitleInfoEventLeagueVsStatusComponent_TypeInfo->_2.cctor_finished )
  {
    v15 = v10;
    j_il2cpp_runtime_class_init_0(TitleInfoEventLeagueVsStatusComponent_TypeInfo);
    v10 = v15;
    v11 = TitleInfoEventLeagueVsStatusComponent_TypeInfo;
  }
  static_fields = (float32x2_t *)v11->static_fields;
  v13.n64_u32[0] = 0;
  v13.n64_f32[1] = v10;
  v14 = static_fields[1].n64_f32[0];
  *(float32x2_t *)&this->fields.outPos.fields.x = vadd_f32((float32x2_t)static_fields->n64_u64[0], v13);
  this->fields.outPos.fields.z = v14 + 0.0;
  TitleInfoEventLeagueVsStatusComponent__FrameOut(this, (System_String_o *)StringLiteral_2258/*"AnimFrameOutEnd"*/, v9);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 Instance; // x0
  __int64 v24; // x1
  Il2CppObject *MasterData_object; // x24
  Il2CppObject *v26; // x22
  struct UIWidget_o *Root; // x8
  unsigned __int8 v28; // w25
  Il2CppObject *v29; // x23
  int64_t Time; // x26
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  struct System_Int32_array *v34; // x8
  unsigned __int64 v35; // x28
  __int64 v36; // x26
  unsigned __int64 max_length; // x9
  struct System_Int32_array *group1; // x8
  int32_t id; // w2
  int32_t v40; // w3
  struct System_Int32_array *group2; // x8
  float v42; // s0
  struct System_Int32_array *v43; // x8
  int32_t v44; // w8
  struct System_Int32_array *v45; // x8
  __int64 v46; // x23
  double v47; // d2
  float v48; // s0
  float v49; // s1
  float v50; // s0
  struct System_Int32_array *v51; // x8
  int32_t v52; // w8
  int32_t v53; // w8
  Il2CppObject *v54; // x0
  __int64 *v55; // x8
  struct System_Int32_array *v56; // x8
  struct System_Int32_array *v57; // x8
  struct System_Int32_array *v58; // x8
  struct System_Int32_array *v59; // x8
  UISprite_o *statusName; // x21
  System_String_o *v61; // x22
  UISprite_o *title; // x21
  __int64 v63; // x2
  __int64 v64; // x3
  __int64 v65; // x4
  Il2CppObject *v66; // x0
  System_String_o *v67; // x0
  UISprite_o *backGround; // x20
  __int64 v69; // x2
  __int64 v70; // x3
  __int64 v71; // x4
  Il2CppObject *v72; // x0
  System_String_o *v73; // x0
  unsigned __int64 v74; // x24
  __int64 v75; // x2
  __int64 v76; // x3
  __int64 v77; // x4
  Il2CppObject *v78; // x0
  struct System_Int32_array *v79; // x8
  int32_t v80; // [xsp+8h] [xbp-58h] BYREF
  int32_t v81; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4B1A7D2 & 1) == 0 )
  {
    sub_1BCAFF8(&AtlasManager_TypeInfo, eventPointEntity);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventPointGroupMaster___, v7);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v8);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_TotalEventPointMaster___, v9);
    sub_1BCAFF8(&int_TypeInfo, v10);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v11);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1BCAFF8(&StringLiteral_15975/*"_01"*/, v13);
    sub_1BCAFF8(&StringLiteral_15977/*"_03"*/, v14);
    sub_1BCAFF8(&StringLiteral_15978/*"_04"*/, v15);
    sub_1BCAFF8(&StringLiteral_16881/*"balance"*/, v16);
    sub_1BCAFF8(&StringLiteral_19138/*"event_vs_status_bg_"*/, v17);
    sub_1BCAFF8(&StringLiteral_19137/*"event_vs_status_"*/, v18);
    sub_1BCAFF8(&StringLiteral_15979/*"_05"*/, v19);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v20);
    sub_1BCAFF8(&StringLiteral_15976/*"_02"*/, v21);
    sub_1BCAFF8(&StringLiteral_19139/*"event_vs_status_name_"*/, v22);
    byte_4B1A7D2 = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_TotalEventPointMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  v26 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventPointGroupMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
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
  v28 = Instance;
  ((void (__fastcall *)(struct UIWidget_o *, Il2CppMethodPointer, float))Root->klass->vtable._8_set_alpha.method)(
    this->fields.Root,
    Root->klass->vtable._9_CalculateFinalAlpha.methodPtr,
    0.0);
  v29 = (Il2CppObject *)StringLiteral_1/*""*/;
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
    v40 = group1->m_Items[1];
    if ( (v28 & (eventPointEntity->fields.endedAt <= Time)) != 0 )
    {
      Instance = TotalEventPointMaster__IsGroupWin((TotalEventPointMaster_o *)MasterData_object, eventId, id, v40, 0LL);
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
      if ( v26 )
      {
        Instance = (__int64)EventPointGroupMaster__getEntity(
                              (EventPointGroupMaster_o *)v26,
                              eventId,
                              group2->m_Items[1],
                              0LL);
        if ( Instance )
        {
          v53 = *(_DWORD *)(Instance + 32);
          goto LABEL_44;
        }
      }
    }
    else
    {
      Instance = TotalEventPointMaster__GetPoint((TotalEventPointMaster_o *)MasterData_object, eventId, id, v40, 0LL);
      v45 = eventPointEntity->fields.group2;
      if ( !v45 )
        goto LABEL_18;
      if ( !v45->max_length )
        goto LABEL_88;
      v46 = Instance;
      Instance = TotalEventPointMaster__GetPoint(
                   (TotalEventPointMaster_o *)MasterData_object,
                   eventId,
                   eventPointEntity->fields.id,
                   v45->m_Items[1],
                   0LL);
      v47 = (double)(Instance + v46);
      v48 = (double)v46 / v47;
      v49 = (double)Instance / v47;
      v50 = vabds_f32(v49, v48);
      if ( v50 >= 0.3 )
      {
        if ( v46 <= Instance )
        {
          v56 = eventPointEntity->fields.group2;
          if ( !v56 )
            goto LABEL_18;
        }
        else
        {
          v56 = eventPointEntity->fields.group1;
          if ( !v56 )
            goto LABEL_18;
        }
        if ( !v56->max_length )
          goto LABEL_88;
        if ( v26 )
        {
          Instance = (__int64)EventPointGroupMaster__getEntity(
                                (EventPointGroupMaster_o *)v26,
                                eventId,
                                v56->m_Items[1],
                                0LL);
          if ( Instance )
          {
            v44 = *(_DWORD *)(Instance + 32);
            goto LABEL_60;
          }
        }
      }
      else
      {
        if ( v50 < 0.15 )
        {
          v29 = (Il2CppObject *)StringLiteral_16881/*"balance"*/;
          goto LABEL_72;
        }
        if ( v46 <= Instance )
        {
          v58 = eventPointEntity->fields.group2;
          if ( !v58 )
            goto LABEL_18;
        }
        else
        {
          v58 = eventPointEntity->fields.group1;
          if ( !v58 )
            goto LABEL_18;
        }
        if ( !v58->max_length )
          goto LABEL_88;
        if ( v26 )
        {
          Instance = (__int64)EventPointGroupMaster__getEntity(
                                (EventPointGroupMaster_o *)v26,
                                eventId,
                                v58->m_Items[1],
                                0LL);
          if ( Instance )
          {
            v52 = *(_DWORD *)(Instance + 32);
            goto LABEL_70;
          }
        }
      }
    }
LABEL_18:
    sub_1BCB254(Instance, v24);
  }
  v34 = eventPointEntity->fields.group1;
  if ( !v34 )
    goto LABEL_18;
  v35 = 0LL;
  v36 = 0LL;
  while ( 1 )
  {
    max_length = v34->max_length;
    if ( (__int64)v35 >= (int)max_length )
      break;
    if ( v35 >= max_length )
      goto LABEL_88;
    if ( MasterData_object )
    {
      Instance = TotalEventPointMaster__GetPoint(
                   (TotalEventPointMaster_o *)MasterData_object,
                   eventId,
                   eventPointEntity->fields.id,
                   v34->m_Items[v35 + 1],
                   0LL);
      v34 = eventPointEntity->fields.group1;
      v36 += Instance;
      ++v35;
      if ( v34 )
        continue;
    }
    goto LABEL_18;
  }
  v42 = 1.0 - (double)v36 / (double)eventPointEntity->fields.normaTotalPoint;
  if ( v42 >= 0.75 )
  {
    v51 = eventPointEntity->fields.group2;
    if ( !v51 )
      goto LABEL_18;
    if ( !v51->max_length )
      goto LABEL_88;
    v52 = v51->m_Items[1];
LABEL_70:
    v81 = v52;
    v54 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v81, v31, v32, v33);
    v55 = &StringLiteral_15975/*"_01"*/;
    goto LABEL_71;
  }
  if ( v42 >= 0.5 )
  {
    v43 = eventPointEntity->fields.group2;
    if ( v43 )
    {
      if ( v43->max_length )
      {
        v44 = v43->m_Items[1];
LABEL_60:
        v81 = v44;
        v54 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v81, v31, v32, v33);
        v55 = &StringLiteral_15976/*"_02"*/;
        goto LABEL_71;
      }
LABEL_88:
      sub_1BCB25C(Instance, v24, v31);
    }
    goto LABEL_18;
  }
  if ( v42 >= 0.25 )
  {
    v57 = eventPointEntity->fields.group2;
    if ( !v57 )
      goto LABEL_18;
    if ( !v57->max_length )
      goto LABEL_88;
    v53 = v57->m_Items[1];
LABEL_44:
    v81 = v53;
    v54 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v81, v31, v32, v33);
    v55 = &StringLiteral_15977/*"_03"*/;
LABEL_71:
    v29 = (Il2CppObject *)System_String__Concat(v54, (Il2CppObject *)*v55, 0LL);
    goto LABEL_72;
  }
  if ( v42 >= 0.1 )
  {
    v59 = eventPointEntity->fields.group2;
    if ( v59 )
    {
      if ( v59->max_length )
      {
        v81 = v59->m_Items[1];
        v54 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v81, v31, v32, v33);
        v55 = &StringLiteral_15978/*"_04"*/;
        goto LABEL_71;
      }
      goto LABEL_88;
    }
    goto LABEL_18;
  }
  if ( v42 < 0.1 && v42 > 0.0 || !(v28 & 1 | (v42 > 0.0)) )
  {
    v79 = eventPointEntity->fields.group2;
    if ( v79 )
    {
      if ( v79->max_length )
      {
        v81 = v79->m_Items[1];
        v54 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v81, v31, v32, v33);
        v55 = &StringLiteral_15979/*"_05"*/;
        goto LABEL_71;
      }
      goto LABEL_88;
    }
    goto LABEL_18;
  }
  if ( (int)max_length >= 1 )
  {
    v74 = 0LL;
    while ( v74 < (unsigned int)max_length )
    {
      if ( !v26 )
        goto LABEL_18;
      Instance = (__int64)EventPointGroupMaster__getEntity(
                            (EventPointGroupMaster_o *)v26,
                            eventId,
                            v34->m_Items[v74 + 1],
                            0LL);
      if ( !Instance )
        goto LABEL_18;
      v81 = *(_DWORD *)(Instance + 32);
      v78 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v81, v75, v76, v77);
      Instance = (__int64)System_String__Concat(v29, v78, 0LL);
      v34 = eventPointEntity->fields.group1;
      if ( !v34 )
        goto LABEL_18;
      LODWORD(max_length) = v34->max_length;
      ++v74;
      v29 = (Il2CppObject *)Instance;
      if ( (__int64)v74 >= (int)max_length )
        goto LABEL_72;
    }
    goto LABEL_88;
  }
LABEL_72:
  statusName = this->fields.statusName;
  v61 = System_String__Concat_62450424((System_String_o *)StringLiteral_19137/*"event_vs_status_"*/, (System_String_o *)v29, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(statusName, v61, 0LL);
  title = this->fields.title;
  v81 = eventPointEntity->fields.id;
  v66 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v81, v63, v64, v65);
  v67 = System_String__Concat((Il2CppObject *)StringLiteral_19139/*"event_vs_status_name_"*/, v66, 0LL);
  AtlasManager__SetEventUI(title, v67, 0LL);
  backGround = this->fields.backGround;
  v80 = eventPointEntity->fields.id;
  v72 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v80, v69, v70, v71);
  v73 = System_String__Concat((Il2CppObject *)StringLiteral_19138/*"event_vs_status_bg_"*/, v72, 0LL);
  AtlasManager__SetEventUI(backGround, v73, 0LL);
}