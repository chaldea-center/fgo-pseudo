void __fastcall TitleInfoEventLeagueVsStatusComponent___cctor(const MethodInfo *method)
{
  struct TitleInfoEventLeagueVsStatusComponent_StaticFields *static_fields; // x9
  TitleInfoEventLeagueVsStatusComponent_c *v2; // x8

  if ( (byte_438F74B & 1) == 0 )
  {
    sub_B775C4(&TitleInfoEventLeagueVsStatusComponent_TypeInfo);
    byte_438F74B = 1;
  }
  static_fields = TitleInfoEventLeagueVsStatusComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->FRAME_ANIM_OUT_POS_DELTA.fields.x = 3263954944LL;
  static_fields->FRAME_ANIM_OUT_POS_DELTA.fields.z = 0.0;
  v2 = TitleInfoEventLeagueVsStatusComponent_TypeInfo;
  TitleInfoEventLeagueVsStatusComponent_TypeInfo->static_fields->FRAME_ANIM_DURATION = 0.3;
  v2->static_fields->ENTRY_ANIM_DELAY = 0.3;
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

  if ( (byte_438F747 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_17810/*"clearAnimFinised"*/);
    byte_438F747 = 1;
  }
  if ( this[1].klass )
    v4 = (System_String_o *)StringLiteral_17810/*"clearAnimFinised"*/;
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
  UnityEngine_Component_o *title; // x0
  UnityEngine_GameObject_o *gameObject; // x19
  TitleInfoEventLeagueVsStatusComponent_c *v5; // x8

  if ( (byte_438F74A & 1) == 0 )
  {
    sub_B775C4(&TitleInfoEventLeagueVsStatusComponent_TypeInfo);
    sub_B775C4(&Method_UITweener_Begin_TweenAlpha___);
    byte_438F74A = 1;
  }
  title = (UnityEngine_Component_o *)this->fields.title;
  if ( !title )
    goto LABEL_9;
  gameObject = UnityEngine_Component__get_gameObject(title, 0LL);
  v5 = TitleInfoEventLeagueVsStatusComponent_TypeInfo;
  if ( (BYTE3(TitleInfoEventLeagueVsStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventLeagueVsStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventLeagueVsStatusComponent_TypeInfo);
    v5 = TitleInfoEventLeagueVsStatusComponent_TypeInfo;
  }
  title = (UnityEngine_Component_o *)UITweener__Begin_TweenWidth_(
                                       gameObject,
                                       v5->static_fields->FRAME_ANIM_DURATION,
                                       (const MethodInfo_1E05754 *)Method_UITweener_Begin_TweenAlpha___);
  if ( !title )
LABEL_9:
    sub_B7769C(title, method);
  LODWORD(title[1].klass) = 2;
  title[5].klass = (UnityEngine_Component_c *)1065353216;
}


void __fastcall TitleInfoEventLeagueVsStatusComponent__FrameIn(
        TitleInfoEventLeagueVsStatusComponent_o *this,
        System_String_o *callFinished,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x21
  TitleInfoEventLeagueVsStatusComponent_c *v6; // x8
  char *title; // x0
  __int64 v8; // x1
  int clearAnimCallBack_high; // w9
  char *v10; // x21
  __int64 v11; // x8
  float y; // w9
  System_Int32_array **v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  UnityEngine_GameObject_o *v26; // x0

  if ( (byte_438F748 & 1) == 0 )
  {
    sub_B775C4(&TitleInfoEventLeagueVsStatusComponent_TypeInfo);
    sub_B775C4(&Method_UITweener_Begin_TweenAlpha___);
    sub_B775C4(&Method_UITweener_Begin_TweenPosition___);
    byte_438F748 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v6 = TitleInfoEventLeagueVsStatusComponent_TypeInfo;
  if ( (BYTE3(TitleInfoEventLeagueVsStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventLeagueVsStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventLeagueVsStatusComponent_TypeInfo);
    v6 = TitleInfoEventLeagueVsStatusComponent_TypeInfo;
  }
  title = (char *)UITweener__Begin_TweenWidth_(
                    gameObject,
                    v6->static_fields->FRAME_ANIM_DURATION,
                    (const MethodInfo_1E05754 *)Method_UITweener_Begin_TweenPosition___);
  if ( !title )
    goto LABEL_10;
  clearAnimCallBack_high = HIDWORD(this->fields.clearAnimCallBack);
  v10 = title;
  *((_QWORD *)title + 15) = *(_QWORD *)&this->fields.outPos.fields.z;
  *((_DWORD *)title + 32) = clearAnimCallBack_high;
  v11 = *(_QWORD *)&this->fields.inPos.fields.z;
  y = this->fields.outPos.fields.y;
  *((_DWORD *)title + 6) = 6;
  *(_QWORD *)(title + 132) = v11;
  *((float *)title + 35) = y;
  v13 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  *((_QWORD *)v10 + 9) = v13;
  sub_B77560((BattleServantConfConponent_o *)(v10 + 72), v13, v14, v15, v16, v17, v18, v19);
  *((_QWORD *)v10 + 10) = callFinished;
  sub_B77560(
    (BattleServantConfConponent_o *)(v10 + 80),
    (System_Int32_array **)callFinished,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  title = (char *)this->fields.title;
  if ( !title
    || (v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)title, 0LL),
        (title = (char *)UITweener__Begin_TweenWidth_(
                           v26,
                           TitleInfoEventLeagueVsStatusComponent_TypeInfo->static_fields->FRAME_ANIM_DURATION,
                           (const MethodInfo_1E05754 *)Method_UITweener_Begin_TweenAlpha___)) == 0LL) )
  {
LABEL_10:
    sub_B7769C(title, v8);
  }
  *((_DWORD *)title + 6) = 6;
  *((_QWORD *)title + 15) = 0x3F80000000000000LL;
}


void __fastcall TitleInfoEventLeagueVsStatusComponent__FrameOut(
        TitleInfoEventLeagueVsStatusComponent_o *this,
        System_String_o *callFinished,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x21
  TitleInfoEventLeagueVsStatusComponent_c *v6; // x8
  char *title; // x0
  __int64 v8; // x1
  float y; // w9
  char *v10; // x21
  __int64 v11; // x8
  int clearAnimCallBack_high; // w9
  System_Int32_array **v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  UnityEngine_GameObject_o *v26; // x0

  if ( (byte_438F749 & 1) == 0 )
  {
    sub_B775C4(&TitleInfoEventLeagueVsStatusComponent_TypeInfo);
    sub_B775C4(&Method_UITweener_Begin_TweenAlpha___);
    sub_B775C4(&Method_UITweener_Begin_TweenPosition___);
    byte_438F749 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v6 = TitleInfoEventLeagueVsStatusComponent_TypeInfo;
  if ( (BYTE3(TitleInfoEventLeagueVsStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventLeagueVsStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventLeagueVsStatusComponent_TypeInfo);
    v6 = TitleInfoEventLeagueVsStatusComponent_TypeInfo;
  }
  title = (char *)UITweener__Begin_TweenWidth_(
                    gameObject,
                    v6->static_fields->FRAME_ANIM_DURATION,
                    (const MethodInfo_1E05754 *)Method_UITweener_Begin_TweenPosition___);
  if ( !title )
    goto LABEL_10;
  y = this->fields.outPos.fields.y;
  v10 = title;
  *((_QWORD *)title + 15) = *(_QWORD *)&this->fields.inPos.fields.z;
  *((float *)title + 32) = y;
  v11 = *(_QWORD *)&this->fields.outPos.fields.z;
  clearAnimCallBack_high = HIDWORD(this->fields.clearAnimCallBack);
  *((_DWORD *)title + 6) = 2;
  *(_QWORD *)(title + 132) = v11;
  *((_DWORD *)title + 35) = clearAnimCallBack_high;
  v13 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  *((_QWORD *)v10 + 9) = v13;
  sub_B77560((BattleServantConfConponent_o *)(v10 + 72), v13, v14, v15, v16, v17, v18, v19);
  *((_QWORD *)v10 + 10) = callFinished;
  sub_B77560(
    (BattleServantConfConponent_o *)(v10 + 80),
    (System_Int32_array **)callFinished,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  title = (char *)this->fields.title;
  if ( !title
    || (v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)title, 0LL),
        (title = (char *)UITweener__Begin_TweenWidth_(
                           v26,
                           TitleInfoEventLeagueVsStatusComponent_TypeInfo->static_fields->FRAME_ANIM_DURATION,
                           (const MethodInfo_1E05754 *)Method_UITweener_Begin_TweenAlpha___)) == 0LL) )
  {
LABEL_10:
    sub_B7769C(title, v8);
  }
  *((_DWORD *)title + 6) = 2;
  *((_QWORD *)title + 15) = 1065353216LL;
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
    sub_B7769C(0LL, v3);
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
  float v10; // [xsp+0h] [xbp-20h]

  if ( (byte_438F745 & 1) == 0 )
  {
    sub_B775C4(&TitleInfoEventLeagueVsStatusComponent_TypeInfo);
    sub_B775C4(&StringLiteral_6179/*"EntryAnim"*/);
    byte_438F745 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_10;
  *(UnityEngine_Vector3_o *)(&v5 - 1) = UnityEngine_Transform__get_localPosition(transform, 0LL);
  this->fields.inPos.fields.z = 0.0;
  this->fields.outPos.fields.x = v5;
  this->fields.outPos.fields.y = 0.0;
  v6 = TitleInfoEventLeagueVsStatusComponent_TypeInfo;
  if ( (BYTE3(TitleInfoEventLeagueVsStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventLeagueVsStatusComponent_TypeInfo->_2.cctor_finished )
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
  *(float32x2_t *)&this->fields.outPos.fields.z = vadd_f32(v8, (float32x2_t)static_fields->n64_u64[0]);
  *((float *)&this->fields.clearAnimCallBack + 1) = v9 + 0.0;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(
          transform,
          *(UnityEngine_Vector3_o *)&this->fields.outPos.fields.z,
          0LL),
        (transform = (UnityEngine_Transform_o *)this->fields.title) == 0LL) )
  {
LABEL_10:
    sub_B7769C(transform, v4);
  }
  (*(void (__fastcall **)(UnityEngine_Transform_o *, Il2CppClass *, float))&transform->klass[1]._1.this_arg.bits)(
    transform,
    transform->klass[1]._1.element_class,
    0.0);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6179/*"EntryAnim"*/,
    TitleInfoEventLeagueVsStatusComponent_TypeInfo->static_fields->ENTRY_ANIM_DELAY
  + (float)(this->fields.outPos.fields.x / -500.0),
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventLeagueVsStatusComponent__StartClearAnim(
        TitleInfoEventLeagueVsStatusComponent_o *this,
        System_Action_o *cb,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  UnityEngine_Transform_o *transform; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  float v13; // s1
  TitleInfoEventLeagueVsStatusComponent_c *v14; // x0
  float32x2_t *static_fields; // x8
  float32x2_t v16; // d0
  float v17; // s2
  float v18; // [xsp+0h] [xbp-30h]

  if ( (byte_438F746 & 1) == 0 )
  {
    sub_B775C4(&TitleInfoEventLeagueVsStatusComponent_TypeInfo);
    sub_B775C4(&StringLiteral_2050/*"AnimFrameOutEnd"*/);
    byte_438F746 = 1;
  }
  this[1].klass = (TitleInfoEventLeagueVsStatusComponent_c *)cb;
  sub_B77560(
    (BattleServantConfConponent_o *)&this[1],
    (System_Int32_array **)cb,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_B7769C(0LL, v11);
  *(UnityEngine_Vector3_o *)(&v13 - 1) = UnityEngine_Transform__get_localPosition(transform, 0LL);
  this->fields.inPos.fields.z = 0.0;
  this->fields.outPos.fields.x = v13;
  this->fields.outPos.fields.y = 0.0;
  v14 = TitleInfoEventLeagueVsStatusComponent_TypeInfo;
  if ( (BYTE3(TitleInfoEventLeagueVsStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventLeagueVsStatusComponent_TypeInfo->_2.cctor_finished )
  {
    v18 = v13;
    j_il2cpp_runtime_class_init_0(TitleInfoEventLeagueVsStatusComponent_TypeInfo);
    v13 = v18;
    v14 = TitleInfoEventLeagueVsStatusComponent_TypeInfo;
  }
  static_fields = (float32x2_t *)v14->static_fields;
  v16.n64_u32[0] = 0;
  v16.n64_f32[1] = v13;
  v17 = static_fields[1].n64_f32[0];
  *(float32x2_t *)&this->fields.outPos.fields.z = vadd_f32(v16, (float32x2_t)static_fields->n64_u64[0]);
  *((float *)&this->fields.clearAnimCallBack + 1) = v17 + 0.0;
  TitleInfoEventLeagueVsStatusComponent__FrameOut(this, (System_String_o *)StringLiteral_2050/*"AnimFrameOutEnd"*/, v12);
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
  System_Action_o *klass; // x0

  klass = (System_Action_o *)this[1].klass;
  if ( klass )
    ActionExtensions__Call(klass, 0LL);
}


void __fastcall TitleInfoEventLeagueVsStatusComponent__setup(
        TitleInfoEventLeagueVsStatusComponent_o *this,
        EventPointEntity_o *eventPointEntity,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 Instance; // x0
  __int64 v8; // x1
  TotalEventPointMaster_o *MasterData_WarQuestSelectionMaster; // x24
  EventPointGroupMaster_o *v10; // x22
  struct UISprite_o *title; // x8
  unsigned __int8 v12; // w25
  Il2CppObject *v13; // x23
  int64_t Time; // x26
  __int64 v15; // x2
  struct System_Int32_array *group1; // x8
  unsigned __int64 v17; // x27
  __int64 v18; // x26
  unsigned __int64 max_length; // x9
  struct System_Int32_array *v20; // x8
  int32_t id; // w2
  int32_t v22; // w3
  struct System_Int32_array *v23; // x8
  float v24; // s0
  struct System_Int32_array *group2; // x8
  int32_t v26; // w8
  struct System_Int32_array *v27; // x8
  __int64 v28; // x23
  double v29; // d2
  float v30; // s0
  float v31; // s1
  float v32; // s0
  struct System_Int32_array *v33; // x8
  int32_t v34; // w8
  int32_t v35; // w8
  Il2CppObject *v36; // x0
  __int64 *v37; // x8
  struct System_Int32_array *v38; // x8
  struct System_Int32_array *v39; // x8
  struct System_Int32_array *v40; // x8
  struct System_Int32_array *v41; // x8
  UISprite_o *v42; // x21
  System_String_o *v43; // x22
  UISprite_o *backGround; // x21
  __int64 v45; // x2
  Il2CppObject *v46; // x0
  System_String_o *v47; // x0
  UISprite_o *statusName; // x20
  __int64 v49; // x2
  Il2CppObject *v50; // x0
  System_String_o *v51; // x0
  unsigned __int64 v52; // x24
  __int64 v53; // x2
  Il2CppObject *v54; // x0
  struct System_Int32_array *v55; // x8
  __int64 v56; // x0
  int32_t v57; // [xsp+8h] [xbp-48h] BYREF
  int32_t v58; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_438F744 & 1) == 0 )
  {
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_EventPointGroupMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_QuestReleaseMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_TotalEventPointMaster___);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&StringLiteral_16199/*"_01"*/);
    sub_B775C4(&StringLiteral_16201/*"_03"*/);
    sub_B775C4(&StringLiteral_16202/*"_04"*/);
    sub_B775C4(&StringLiteral_16922/*"balance"*/);
    sub_B775C4(&StringLiteral_18985/*"event_vs_status_bg_"*/);
    sub_B775C4(&StringLiteral_18984/*"event_vs_status_"*/);
    sub_B775C4(&StringLiteral_16203/*"_05"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    sub_B775C4(&StringLiteral_16200/*"_02"*/);
    sub_B775C4(&StringLiteral_18986/*"event_vs_status_name_"*/);
    byte_438F744 = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  MasterData_WarQuestSelectionMaster = (TotalEventPointMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    (DataManager_o *)Instance,
                                                                    (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_TotalEventPointMaster___);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  v10 = (EventPointGroupMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)Instance,
                                     (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventPointGroupMaster___);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  if ( !eventPointEntity )
    goto LABEL_19;
  if ( !Instance )
    goto LABEL_19;
  Instance = QuestReleaseMaster__IsQuestOfResultBattleCleared(
               (QuestReleaseMaster_o *)Instance,
               eventPointEntity->fields.id + 100 * eventPointEntity->fields.eventId,
               0LL);
  title = this->fields.title;
  if ( !title )
    goto LABEL_19;
  v12 = Instance;
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer, float))title->klass->vtable._8_set_alpha.method)(
    this->fields.title,
    title->klass->vtable._9_CalculateFinalAlpha.methodPtr,
    0.0);
  v13 = (Il2CppObject *)StringLiteral_1/*""*/;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  Instance = EventPointEntity__isBossBattle(eventPointEntity, 0LL);
  if ( (Instance & 1) != 0 )
  {
    group1 = eventPointEntity->fields.group1;
    if ( !group1 )
      goto LABEL_19;
    v17 = 0LL;
    v18 = 0LL;
    while ( 1 )
    {
      max_length = group1->max_length;
      if ( (__int64)v17 >= (int)max_length )
        break;
      if ( v17 >= max_length )
        goto LABEL_90;
      if ( MasterData_WarQuestSelectionMaster )
      {
        Instance = TotalEventPointMaster__GetPoint(
                     MasterData_WarQuestSelectionMaster,
                     eventId,
                     eventPointEntity->fields.id,
                     group1->m_Items[v17 + 1],
                     0LL);
        group1 = eventPointEntity->fields.group1;
        v18 += Instance;
        ++v17;
        if ( group1 )
          continue;
      }
      goto LABEL_19;
    }
    v24 = 1.0 - (double)v18 / (double)eventPointEntity->fields.normaTotalPoint;
    if ( v24 < 0.75 )
    {
      if ( v24 >= 0.5 )
      {
        group2 = eventPointEntity->fields.group2;
        if ( group2 )
        {
          if ( group2->max_length )
          {
            v26 = group2->m_Items[1];
LABEL_61:
            v58 = v26;
            v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v58, v15);
            v37 = &StringLiteral_16200/*"_02"*/;
            goto LABEL_72;
          }
LABEL_90:
          v56 = sub_B776C8(Instance);
          sub_B77668(v56, 0LL);
        }
        goto LABEL_19;
      }
      if ( v24 >= 0.25 )
      {
        v39 = eventPointEntity->fields.group2;
        if ( !v39 )
          goto LABEL_19;
        if ( !v39->max_length )
          goto LABEL_90;
        v35 = v39->m_Items[1];
LABEL_45:
        v58 = v35;
        v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v58, v15);
        v37 = &StringLiteral_16201/*"_03"*/;
LABEL_72:
        v13 = (Il2CppObject *)System_String__Concat(v36, (Il2CppObject *)*v37, 0LL);
        goto LABEL_73;
      }
      if ( v24 < 0.1 )
      {
        if ( v24 <= 0.0 && v12 & 1 | (v24 > 0.0) )
        {
          if ( (int)max_length < 1 )
            goto LABEL_73;
          v52 = 0LL;
          while ( v52 < (unsigned int)max_length )
          {
            if ( !v10 )
              goto LABEL_19;
            Instance = (__int64)EventPointGroupMaster__getEntity(v10, eventId, group1->m_Items[v52 + 1], 0LL);
            if ( !Instance )
              goto LABEL_19;
            v58 = *(_DWORD *)(Instance + 32);
            v54 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v58, v53);
            Instance = (__int64)System_String__Concat(v13, v54, 0LL);
            group1 = eventPointEntity->fields.group1;
            if ( !group1 )
              goto LABEL_19;
            LODWORD(max_length) = group1->max_length;
            ++v52;
            v13 = (Il2CppObject *)Instance;
            if ( (__int64)v52 >= (int)max_length )
              goto LABEL_73;
          }
          goto LABEL_90;
        }
        v55 = eventPointEntity->fields.group2;
        if ( v55 )
        {
          if ( v55->max_length )
          {
            v58 = v55->m_Items[1];
            v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v58, v15);
            v37 = &StringLiteral_16203/*"_05"*/;
            goto LABEL_72;
          }
          goto LABEL_90;
        }
      }
      else
      {
        v41 = eventPointEntity->fields.group2;
        if ( v41 )
        {
          if ( v41->max_length )
          {
            v58 = v41->m_Items[1];
            v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v58, v15);
            v37 = &StringLiteral_16202/*"_04"*/;
            goto LABEL_72;
          }
          goto LABEL_90;
        }
      }
      goto LABEL_19;
    }
    v33 = eventPointEntity->fields.group2;
    if ( !v33 )
      goto LABEL_19;
    if ( !v33->max_length )
      goto LABEL_90;
    v34 = v33->m_Items[1];
LABEL_71:
    v58 = v34;
    v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v58, v15);
    v37 = &StringLiteral_16199/*"_01"*/;
    goto LABEL_72;
  }
  v20 = eventPointEntity->fields.group1;
  if ( !v20 )
    goto LABEL_19;
  if ( !v20->max_length )
    goto LABEL_90;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_19;
  id = eventPointEntity->fields.id;
  v22 = v20->m_Items[1];
  if ( (v12 & (eventPointEntity->fields.endedAt <= Time)) != 0 )
  {
    Instance = TotalEventPointMaster__IsGroupWin(MasterData_WarQuestSelectionMaster, eventId, id, v22, 0LL);
    if ( (Instance & 1) != 0 )
    {
      v23 = eventPointEntity->fields.group1;
      if ( !v23 )
        goto LABEL_19;
    }
    else
    {
      v23 = eventPointEntity->fields.group2;
      if ( !v23 )
        goto LABEL_19;
    }
    if ( !v23->max_length )
      goto LABEL_90;
    if ( v10 )
    {
      Instance = (__int64)EventPointGroupMaster__getEntity(v10, eventId, v23->m_Items[1], 0LL);
      if ( Instance )
      {
        v35 = *(_DWORD *)(Instance + 32);
        goto LABEL_45;
      }
    }
LABEL_19:
    sub_B7769C(Instance, v8);
  }
  Instance = TotalEventPointMaster__GetPoint(MasterData_WarQuestSelectionMaster, eventId, id, v22, 0LL);
  v27 = eventPointEntity->fields.group2;
  if ( !v27 )
    goto LABEL_19;
  if ( !v27->max_length )
    goto LABEL_90;
  v28 = Instance;
  Instance = TotalEventPointMaster__GetPoint(
               MasterData_WarQuestSelectionMaster,
               eventId,
               eventPointEntity->fields.id,
               v27->m_Items[1],
               0LL);
  v29 = (double)(Instance + v28);
  v30 = (double)v28 / v29;
  v31 = (double)Instance / v29;
  v32 = vabds_f32(v31, v30);
  if ( v32 >= 0.3 )
  {
    if ( v28 <= Instance )
    {
      v38 = eventPointEntity->fields.group2;
      if ( !v38 )
        goto LABEL_19;
    }
    else
    {
      v38 = eventPointEntity->fields.group1;
      if ( !v38 )
        goto LABEL_19;
    }
    if ( !v38->max_length )
      goto LABEL_90;
    if ( v10 )
    {
      Instance = (__int64)EventPointGroupMaster__getEntity(v10, eventId, v38->m_Items[1], 0LL);
      if ( Instance )
      {
        v26 = *(_DWORD *)(Instance + 32);
        goto LABEL_61;
      }
    }
    goto LABEL_19;
  }
  if ( v32 >= 0.15 )
  {
    if ( v28 <= Instance )
    {
      v40 = eventPointEntity->fields.group2;
      if ( !v40 )
        goto LABEL_19;
    }
    else
    {
      v40 = eventPointEntity->fields.group1;
      if ( !v40 )
        goto LABEL_19;
    }
    if ( !v40->max_length )
      goto LABEL_90;
    if ( !v10 )
      goto LABEL_19;
    Instance = (__int64)EventPointGroupMaster__getEntity(v10, eventId, v40->m_Items[1], 0LL);
    if ( !Instance )
      goto LABEL_19;
    v34 = *(_DWORD *)(Instance + 32);
    goto LABEL_71;
  }
  v13 = (Il2CppObject *)StringLiteral_16922/*"balance"*/;
LABEL_73:
  v42 = *(UISprite_o **)&this->fields.inPos.fields.x;
  v43 = System_String__Concat_44901936((System_String_o *)StringLiteral_18984/*"event_vs_status_"*/, (System_String_o *)v13, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(v42, v43, 0LL);
  backGround = this->fields.backGround;
  v58 = eventPointEntity->fields.id;
  v46 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v58, v45);
  v47 = System_String__Concat((Il2CppObject *)StringLiteral_18986/*"event_vs_status_name_"*/, v46, 0LL);
  AtlasManager__SetEventUI(backGround, v47, 0LL);
  statusName = this->fields.statusName;
  v57 = eventPointEntity->fields.id;
  v50 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v57, v49);
  v51 = System_String__Concat((Il2CppObject *)StringLiteral_18985/*"event_vs_status_bg_"*/, v50, 0LL);
  AtlasManager__SetEventUI(statusName, v51, 0LL);
}