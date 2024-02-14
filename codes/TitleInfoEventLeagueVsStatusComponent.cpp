void __fastcall TitleInfoEventLeagueVsStatusComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct TitleInfoEventLeagueVsStatusComponent_StaticFields *static_fields; // x9
  TitleInfoEventLeagueVsStatusComponent_c *v3; // x8

  if ( (byte_421881E & 1) == 0 )
  {
    sub_B0D8A4(&TitleInfoEventLeagueVsStatusComponent_TypeInfo, v1);
    byte_421881E = 1;
  }
  static_fields = TitleInfoEventLeagueVsStatusComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->FRAME_ANIM_OUT_POS_DELTA.fields.x = 3263954944LL;
  static_fields->FRAME_ANIM_OUT_POS_DELTA.fields.z = 0.0;
  v3 = TitleInfoEventLeagueVsStatusComponent_TypeInfo;
  TitleInfoEventLeagueVsStatusComponent_TypeInfo->static_fields->FRAME_ANIM_DURATION = 0.3;
  v3->static_fields->ENTRY_ANIM_DELAY = 0.3;
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

  if ( (byte_421881A & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_17517/*"clearAnimFinised"*/, method);
    byte_421881A = 1;
  }
  if ( this[1].klass )
    v4 = (System_String_o *)StringLiteral_17517/*"clearAnimFinised"*/;
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
  UnityEngine_Component_o *title; // x0
  UnityEngine_GameObject_o *gameObject; // x19
  TitleInfoEventLeagueVsStatusComponent_c *v6; // x8

  if ( (byte_421881D & 1) == 0 )
  {
    sub_B0D8A4(&TitleInfoEventLeagueVsStatusComponent_TypeInfo, method);
    sub_B0D8A4(&Method_UITweener_Begin_TweenAlpha___, v3);
    byte_421881D = 1;
  }
  title = (UnityEngine_Component_o *)this->fields.title;
  if ( !title )
    goto LABEL_9;
  gameObject = UnityEngine_Component__get_gameObject(title, 0LL);
  v6 = TitleInfoEventLeagueVsStatusComponent_TypeInfo;
  if ( (BYTE3(TitleInfoEventLeagueVsStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventLeagueVsStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventLeagueVsStatusComponent_TypeInfo);
    v6 = TitleInfoEventLeagueVsStatusComponent_TypeInfo;
  }
  title = (UnityEngine_Component_o *)UITweener__Begin_TweenWidth_(
                                       gameObject,
                                       v6->static_fields->FRAME_ANIM_DURATION,
                                       (const MethodInfo_205679C *)Method_UITweener_Begin_TweenAlpha___);
  if ( !title )
LABEL_9:
    sub_B0D97C(title);
  LODWORD(title[1].klass) = 2;
  title[5].klass = (UnityEngine_Component_c *)1065353216;
}


void __fastcall TitleInfoEventLeagueVsStatusComponent__FrameIn(
        TitleInfoEventLeagueVsStatusComponent_o *this,
        System_String_o *callFinished,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_GameObject_o *gameObject; // x21
  TitleInfoEventLeagueVsStatusComponent_c *v8; // x8
  char *title; // x0
  int clearAnimCallBack_high; // w9
  char *v11; // x21
  __int64 v12; // x8
  float y; // w9
  System_Int32_array **v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  UnityEngine_GameObject_o *v27; // x0

  if ( (byte_421881B & 1) == 0 )
  {
    sub_B0D8A4(&TitleInfoEventLeagueVsStatusComponent_TypeInfo, callFinished);
    sub_B0D8A4(&Method_UITweener_Begin_TweenAlpha___, v5);
    sub_B0D8A4(&Method_UITweener_Begin_TweenPosition___, v6);
    byte_421881B = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v8 = TitleInfoEventLeagueVsStatusComponent_TypeInfo;
  if ( (BYTE3(TitleInfoEventLeagueVsStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventLeagueVsStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventLeagueVsStatusComponent_TypeInfo);
    v8 = TitleInfoEventLeagueVsStatusComponent_TypeInfo;
  }
  title = (char *)UITweener__Begin_TweenWidth_(
                    gameObject,
                    v8->static_fields->FRAME_ANIM_DURATION,
                    (const MethodInfo_205679C *)Method_UITweener_Begin_TweenPosition___);
  if ( !title )
    goto LABEL_10;
  clearAnimCallBack_high = HIDWORD(this->fields.clearAnimCallBack);
  v11 = title;
  *((_QWORD *)title + 15) = *(_QWORD *)&this->fields.outPos.fields.z;
  *((_DWORD *)title + 32) = clearAnimCallBack_high;
  v12 = *(_QWORD *)&this->fields.inPos.fields.z;
  y = this->fields.outPos.fields.y;
  *((_DWORD *)title + 6) = 6;
  *(_QWORD *)(title + 132) = v12;
  *((float *)title + 35) = y;
  v14 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  *((_QWORD *)v11 + 9) = v14;
  sub_B0D840((BattleServantConfConponent_o *)(v11 + 72), v14, v15, v16, v17, v18, v19, v20);
  *((_QWORD *)v11 + 10) = callFinished;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v11 + 80),
    (System_Int32_array **)callFinished,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  title = (char *)this->fields.title;
  if ( !title
    || (v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)title, 0LL),
        (title = (char *)UITweener__Begin_TweenWidth_(
                           v27,
                           TitleInfoEventLeagueVsStatusComponent_TypeInfo->static_fields->FRAME_ANIM_DURATION,
                           (const MethodInfo_205679C *)Method_UITweener_Begin_TweenAlpha___)) == 0LL) )
  {
LABEL_10:
    sub_B0D97C(title);
  }
  *((_DWORD *)title + 6) = 6;
  *((_QWORD *)title + 15) = 0x3F80000000000000LL;
}


void __fastcall TitleInfoEventLeagueVsStatusComponent__FrameOut(
        TitleInfoEventLeagueVsStatusComponent_o *this,
        System_String_o *callFinished,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_GameObject_o *gameObject; // x21
  TitleInfoEventLeagueVsStatusComponent_c *v8; // x8
  char *title; // x0
  float y; // w9
  char *v11; // x21
  __int64 v12; // x8
  int clearAnimCallBack_high; // w9
  System_Int32_array **v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  UnityEngine_GameObject_o *v27; // x0

  if ( (byte_421881C & 1) == 0 )
  {
    sub_B0D8A4(&TitleInfoEventLeagueVsStatusComponent_TypeInfo, callFinished);
    sub_B0D8A4(&Method_UITweener_Begin_TweenAlpha___, v5);
    sub_B0D8A4(&Method_UITweener_Begin_TweenPosition___, v6);
    byte_421881C = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v8 = TitleInfoEventLeagueVsStatusComponent_TypeInfo;
  if ( (BYTE3(TitleInfoEventLeagueVsStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventLeagueVsStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventLeagueVsStatusComponent_TypeInfo);
    v8 = TitleInfoEventLeagueVsStatusComponent_TypeInfo;
  }
  title = (char *)UITweener__Begin_TweenWidth_(
                    gameObject,
                    v8->static_fields->FRAME_ANIM_DURATION,
                    (const MethodInfo_205679C *)Method_UITweener_Begin_TweenPosition___);
  if ( !title )
    goto LABEL_10;
  y = this->fields.outPos.fields.y;
  v11 = title;
  *((_QWORD *)title + 15) = *(_QWORD *)&this->fields.inPos.fields.z;
  *((float *)title + 32) = y;
  v12 = *(_QWORD *)&this->fields.outPos.fields.z;
  clearAnimCallBack_high = HIDWORD(this->fields.clearAnimCallBack);
  *((_DWORD *)title + 6) = 2;
  *(_QWORD *)(title + 132) = v12;
  *((_DWORD *)title + 35) = clearAnimCallBack_high;
  v14 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  *((_QWORD *)v11 + 9) = v14;
  sub_B0D840((BattleServantConfConponent_o *)(v11 + 72), v14, v15, v16, v17, v18, v19, v20);
  *((_QWORD *)v11 + 10) = callFinished;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v11 + 80),
    (System_Int32_array **)callFinished,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  title = (char *)this->fields.title;
  if ( !title
    || (v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)title, 0LL),
        (title = (char *)UITweener__Begin_TweenWidth_(
                           v27,
                           TitleInfoEventLeagueVsStatusComponent_TypeInfo->static_fields->FRAME_ANIM_DURATION,
                           (const MethodInfo_205679C *)Method_UITweener_Begin_TweenAlpha___)) == 0LL) )
  {
LABEL_10:
    sub_B0D97C(title);
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

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B0D97C(0LL);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventLeagueVsStatusComponent__SetEntryAnim(
        TitleInfoEventLeagueVsStatusComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Transform_o *transform; // x0
  float v5; // s1
  TitleInfoEventLeagueVsStatusComponent_c *v6; // x0
  float32x2_t *static_fields; // x8
  float32x2_t v8; // d0
  float v9; // s2
  float v10; // [xsp+0h] [xbp-20h]

  if ( (byte_4218818 & 1) == 0 )
  {
    sub_B0D8A4(&TitleInfoEventLeagueVsStatusComponent_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_6048/*"EntryAnim"*/, v3);
    byte_4218818 = 1;
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
    sub_B0D97C(transform);
  }
  (*(void (__fastcall **)(UnityEngine_Transform_o *, Il2CppClass *, float))&transform->klass[1]._1.this_arg.bits)(
    transform,
    transform->klass[1]._1.element_class,
    0.0);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6048/*"EntryAnim"*/,
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
  __int64 v10; // x1
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v12; // x2
  float v13; // s1
  TitleInfoEventLeagueVsStatusComponent_c *v14; // x0
  float32x2_t *static_fields; // x8
  float32x2_t v16; // d0
  float v17; // s2
  float v18; // [xsp+0h] [xbp-30h]

  if ( (byte_4218819 & 1) == 0 )
  {
    sub_B0D8A4(&TitleInfoEventLeagueVsStatusComponent_TypeInfo, cb);
    sub_B0D8A4(&StringLiteral_1980/*"AnimFrameOutEnd"*/, v10);
    byte_4218819 = 1;
  }
  this[1].klass = (TitleInfoEventLeagueVsStatusComponent_c *)cb;
  sub_B0D840(
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
    sub_B0D97C(0LL);
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
  TitleInfoEventLeagueVsStatusComponent__FrameOut(this, (System_String_o *)StringLiteral_1980/*"AnimFrameOutEnd"*/, v12);
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
  TotalEventPointMaster_o *MasterData_WarQuestSelectionMaster; // x24
  EventPointGroupMaster_o *v25; // x22
  struct UISprite_o *title; // x8
  unsigned __int8 v27; // w25
  Il2CppObject *v28; // x23
  int64_t Time; // x26
  struct System_Int32_array *group1; // x8
  unsigned __int64 v31; // x27
  __int64 v32; // x26
  unsigned __int64 max_length; // x9
  struct System_Int32_array *v34; // x8
  int32_t id; // w2
  int32_t v36; // w3
  struct System_Int32_array *v37; // x8
  float v38; // s0
  struct System_Int32_array *group2; // x8
  int32_t v40; // w8
  struct System_Int32_array *v41; // x8
  __int64 v42; // x23
  double v43; // d2
  float v44; // s0
  float v45; // s1
  float v46; // s0
  struct System_Int32_array *v47; // x8
  int32_t v48; // w8
  int32_t v49; // w8
  Il2CppObject *v50; // x0
  __int64 *v51; // x8
  struct System_Int32_array *v52; // x8
  struct System_Int32_array *v53; // x8
  struct System_Int32_array *v54; // x8
  struct System_Int32_array *v55; // x8
  UISprite_o *v56; // x21
  System_String_o *v57; // x22
  UISprite_o *backGround; // x21
  Il2CppObject *v59; // x0
  System_String_o *v60; // x0
  UISprite_o *statusName; // x20
  Il2CppObject *v62; // x0
  System_String_o *v63; // x0
  unsigned __int64 v64; // x24
  Il2CppObject *v65; // x0
  struct System_Int32_array *v66; // x8
  __int64 v67; // x0
  int32_t v68; // [xsp+8h] [xbp-48h] BYREF
  int32_t v69; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4218817 & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, eventPointEntity);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventPointGroupMaster___, v7);
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v8);
    sub_B0D8A4(&Method_DataManager_GetMasterData_TotalEventPointMaster___, v9);
    sub_B0D8A4(&int_TypeInfo, v10);
    sub_B0D8A4(&NetworkManager_TypeInfo, v11);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_B0D8A4(&StringLiteral_15954/*"_01"*/, v13);
    sub_B0D8A4(&StringLiteral_15956/*"_03"*/, v14);
    sub_B0D8A4(&StringLiteral_15957/*"_04"*/, v15);
    sub_B0D8A4(&StringLiteral_16645/*"balance"*/, v16);
    sub_B0D8A4(&StringLiteral_18674/*"event_vs_status_bg_"*/, v17);
    sub_B0D8A4(&StringLiteral_18673/*"event_vs_status_"*/, v18);
    sub_B0D8A4(&StringLiteral_15958/*"_05"*/, v19);
    sub_B0D8A4(&StringLiteral_1/*""*/, v20);
    sub_B0D8A4(&StringLiteral_15955/*"_02"*/, v21);
    sub_B0D8A4(&StringLiteral_18675/*"event_vs_status_name_"*/, v22);
    byte_4218817 = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  MasterData_WarQuestSelectionMaster = (TotalEventPointMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    (DataManager_o *)Instance,
                                                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_TotalEventPointMaster___);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  v25 = (EventPointGroupMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)Instance,
                                     (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventPointGroupMaster___);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
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
  v27 = Instance;
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer, float))title->klass->vtable._8_set_alpha.method)(
    this->fields.title,
    title->klass->vtable._9_CalculateFinalAlpha.methodPtr,
    0.0);
  v28 = (Il2CppObject *)StringLiteral_1/*""*/;
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
    v31 = 0LL;
    v32 = 0LL;
    while ( 1 )
    {
      max_length = group1->max_length;
      if ( (__int64)v31 >= (int)max_length )
        break;
      if ( v31 >= max_length )
        goto LABEL_90;
      if ( MasterData_WarQuestSelectionMaster )
      {
        Instance = TotalEventPointMaster__GetPoint(
                     MasterData_WarQuestSelectionMaster,
                     eventId,
                     eventPointEntity->fields.id,
                     group1->m_Items[v31 + 1],
                     0LL);
        group1 = eventPointEntity->fields.group1;
        v32 += Instance;
        ++v31;
        if ( group1 )
          continue;
      }
      goto LABEL_19;
    }
    v38 = 1.0 - (double)v32 / (double)eventPointEntity->fields.normaTotalPoint;
    if ( v38 < 0.75 )
    {
      if ( v38 >= 0.5 )
      {
        group2 = eventPointEntity->fields.group2;
        if ( group2 )
        {
          if ( group2->max_length )
          {
            v40 = group2->m_Items[1];
LABEL_61:
            v69 = v40;
            v50 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v69);
            v51 = &StringLiteral_15955/*"_02"*/;
            goto LABEL_72;
          }
LABEL_90:
          v67 = sub_B0D9A8(Instance);
          sub_B0D948(v67, 0LL);
        }
        goto LABEL_19;
      }
      if ( v38 >= 0.25 )
      {
        v53 = eventPointEntity->fields.group2;
        if ( !v53 )
          goto LABEL_19;
        if ( !v53->max_length )
          goto LABEL_90;
        v49 = v53->m_Items[1];
LABEL_45:
        v69 = v49;
        v50 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v69);
        v51 = &StringLiteral_15956/*"_03"*/;
LABEL_72:
        v28 = (Il2CppObject *)System_String__Concat(v50, (Il2CppObject *)*v51, 0LL);
        goto LABEL_73;
      }
      if ( v38 < 0.1 )
      {
        if ( v38 <= 0.0 && v27 & 1 | (v38 > 0.0) )
        {
          if ( (int)max_length < 1 )
            goto LABEL_73;
          v64 = 0LL;
          while ( v64 < (unsigned int)max_length )
          {
            if ( !v25 )
              goto LABEL_19;
            Instance = (__int64)EventPointGroupMaster__getEntity(v25, eventId, group1->m_Items[v64 + 1], 0LL);
            if ( !Instance )
              goto LABEL_19;
            v69 = *(_DWORD *)(Instance + 32);
            v65 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v69);
            Instance = (__int64)System_String__Concat(v28, v65, 0LL);
            group1 = eventPointEntity->fields.group1;
            if ( !group1 )
              goto LABEL_19;
            LODWORD(max_length) = group1->max_length;
            ++v64;
            v28 = (Il2CppObject *)Instance;
            if ( (__int64)v64 >= (int)max_length )
              goto LABEL_73;
          }
          goto LABEL_90;
        }
        v66 = eventPointEntity->fields.group2;
        if ( v66 )
        {
          if ( v66->max_length )
          {
            v69 = v66->m_Items[1];
            v50 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v69);
            v51 = &StringLiteral_15958/*"_05"*/;
            goto LABEL_72;
          }
          goto LABEL_90;
        }
      }
      else
      {
        v55 = eventPointEntity->fields.group2;
        if ( v55 )
        {
          if ( v55->max_length )
          {
            v69 = v55->m_Items[1];
            v50 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v69);
            v51 = &StringLiteral_15957/*"_04"*/;
            goto LABEL_72;
          }
          goto LABEL_90;
        }
      }
      goto LABEL_19;
    }
    v47 = eventPointEntity->fields.group2;
    if ( !v47 )
      goto LABEL_19;
    if ( !v47->max_length )
      goto LABEL_90;
    v48 = v47->m_Items[1];
LABEL_71:
    v69 = v48;
    v50 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v69);
    v51 = &StringLiteral_15954/*"_01"*/;
    goto LABEL_72;
  }
  v34 = eventPointEntity->fields.group1;
  if ( !v34 )
    goto LABEL_19;
  if ( !v34->max_length )
    goto LABEL_90;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_19;
  id = eventPointEntity->fields.id;
  v36 = v34->m_Items[1];
  if ( (v27 & (eventPointEntity->fields.endedAt <= Time)) != 0 )
  {
    Instance = TotalEventPointMaster__IsGroupWin(MasterData_WarQuestSelectionMaster, eventId, id, v36, 0LL);
    if ( (Instance & 1) != 0 )
    {
      v37 = eventPointEntity->fields.group1;
      if ( !v37 )
        goto LABEL_19;
    }
    else
    {
      v37 = eventPointEntity->fields.group2;
      if ( !v37 )
        goto LABEL_19;
    }
    if ( !v37->max_length )
      goto LABEL_90;
    if ( v25 )
    {
      Instance = (__int64)EventPointGroupMaster__getEntity(v25, eventId, v37->m_Items[1], 0LL);
      if ( Instance )
      {
        v49 = *(_DWORD *)(Instance + 32);
        goto LABEL_45;
      }
    }
LABEL_19:
    sub_B0D97C(Instance);
  }
  Instance = TotalEventPointMaster__GetPoint(MasterData_WarQuestSelectionMaster, eventId, id, v36, 0LL);
  v41 = eventPointEntity->fields.group2;
  if ( !v41 )
    goto LABEL_19;
  if ( !v41->max_length )
    goto LABEL_90;
  v42 = Instance;
  Instance = TotalEventPointMaster__GetPoint(
               MasterData_WarQuestSelectionMaster,
               eventId,
               eventPointEntity->fields.id,
               v41->m_Items[1],
               0LL);
  v43 = (double)(Instance + v42);
  v44 = (double)v42 / v43;
  v45 = (double)Instance / v43;
  v46 = vabds_f32(v45, v44);
  if ( v46 >= 0.3 )
  {
    if ( v42 <= Instance )
    {
      v52 = eventPointEntity->fields.group2;
      if ( !v52 )
        goto LABEL_19;
    }
    else
    {
      v52 = eventPointEntity->fields.group1;
      if ( !v52 )
        goto LABEL_19;
    }
    if ( !v52->max_length )
      goto LABEL_90;
    if ( v25 )
    {
      Instance = (__int64)EventPointGroupMaster__getEntity(v25, eventId, v52->m_Items[1], 0LL);
      if ( Instance )
      {
        v40 = *(_DWORD *)(Instance + 32);
        goto LABEL_61;
      }
    }
    goto LABEL_19;
  }
  if ( v46 >= 0.15 )
  {
    if ( v42 <= Instance )
    {
      v54 = eventPointEntity->fields.group2;
      if ( !v54 )
        goto LABEL_19;
    }
    else
    {
      v54 = eventPointEntity->fields.group1;
      if ( !v54 )
        goto LABEL_19;
    }
    if ( !v54->max_length )
      goto LABEL_90;
    if ( !v25 )
      goto LABEL_19;
    Instance = (__int64)EventPointGroupMaster__getEntity(v25, eventId, v54->m_Items[1], 0LL);
    if ( !Instance )
      goto LABEL_19;
    v48 = *(_DWORD *)(Instance + 32);
    goto LABEL_71;
  }
  v28 = (Il2CppObject *)StringLiteral_16645/*"balance"*/;
LABEL_73:
  v56 = *(UISprite_o **)&this->fields.inPos.fields.x;
  v57 = System_String__Concat_43849904((System_String_o *)StringLiteral_18673/*"event_vs_status_"*/, (System_String_o *)v28, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(v56, v57, 0LL);
  backGround = this->fields.backGround;
  v69 = eventPointEntity->fields.id;
  v59 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v69);
  v60 = System_String__Concat((Il2CppObject *)StringLiteral_18675/*"event_vs_status_name_"*/, v59, 0LL);
  AtlasManager__SetEventUI(backGround, v60, 0LL);
  statusName = this->fields.statusName;
  v68 = eventPointEntity->fields.id;
  v62 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v68);
  v63 = System_String__Concat((Il2CppObject *)StringLiteral_18674/*"event_vs_status_bg_"*/, v62, 0LL);
  AtlasManager__SetEventUI(statusName, v63, 0LL);
}