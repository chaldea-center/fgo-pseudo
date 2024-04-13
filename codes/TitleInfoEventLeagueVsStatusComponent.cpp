void __fastcall TitleInfoEventLeagueVsStatusComponent___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  struct TitleInfoEventLeagueVsStatusComponent_StaticFields *static_fields; // x9
  TitleInfoEventLeagueVsStatusComponent_c *v5; // x8

  if ( (byte_42ECC03 & 1) == 0 )
  {
    sub_B5D5C4(&TitleInfoEventLeagueVsStatusComponent_TypeInfo, v1, v2, v3);
    byte_42ECC03 = 1;
  }
  static_fields = TitleInfoEventLeagueVsStatusComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->FRAME_ANIM_OUT_POS_DELTA.fields.x = 3263954944LL;
  static_fields->FRAME_ANIM_OUT_POS_DELTA.fields.z = 0.0;
  v5 = TitleInfoEventLeagueVsStatusComponent_TypeInfo;
  TitleInfoEventLeagueVsStatusComponent_TypeInfo->static_fields->FRAME_ANIM_DURATION = 0.3;
  v5->static_fields->ENTRY_ANIM_DELAY = 0.3;
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
  __int64 v3; // x3
  System_String_o *v5; // x1

  if ( (byte_42ECBFF & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_17680/*"clearAnimFinised"*/, (_DWORD)method, (_DWORD)v2, v3);
    byte_42ECBFF = 1;
  }
  if ( this[1].klass )
    v5 = (System_String_o *)StringLiteral_17680/*"clearAnimFinised"*/;
  else
    v5 = 0LL;
  TitleInfoEventLeagueVsStatusComponent__FrameIn(this, v5, v2);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Component_o *title; // x0
  UnityEngine_GameObject_o *gameObject; // x19
  TitleInfoEventLeagueVsStatusComponent_c *v10; // x8

  if ( (byte_42ECC02 & 1) == 0 )
  {
    sub_B5D5C4(&TitleInfoEventLeagueVsStatusComponent_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UITweener_Begin_TweenAlpha___, v5, v6, v7);
    byte_42ECC02 = 1;
  }
  title = (UnityEngine_Component_o *)this->fields.title;
  if ( !title )
    goto LABEL_9;
  gameObject = UnityEngine_Component__get_gameObject(title, 0LL);
  v10 = TitleInfoEventLeagueVsStatusComponent_TypeInfo;
  if ( (BYTE3(TitleInfoEventLeagueVsStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventLeagueVsStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventLeagueVsStatusComponent_TypeInfo);
    v10 = TitleInfoEventLeagueVsStatusComponent_TypeInfo;
  }
  title = (UnityEngine_Component_o *)UITweener__Begin_TweenWidth_(
                                       gameObject,
                                       v10->static_fields->FRAME_ANIM_DURATION,
                                       (const MethodInfo_1E72118 *)Method_UITweener_Begin_TweenAlpha___);
  if ( !title )
LABEL_9:
    sub_B5D69C(title, method);
  LODWORD(title[1].klass) = 2;
  title[5].klass = (UnityEngine_Component_c *)1065353216;
}


void __fastcall TitleInfoEventLeagueVsStatusComponent__FrameIn(
        TitleInfoEventLeagueVsStatusComponent_o *this,
        System_String_o *callFinished,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  UnityEngine_GameObject_o *gameObject; // x21
  TitleInfoEventLeagueVsStatusComponent_c *v13; // x8
  char *title; // x0
  __int64 v15; // x1
  int clearAnimCallBack_high; // w9
  char *v17; // x21
  __int64 v18; // x8
  float y; // w9
  System_Int32_array **v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  UnityEngine_GameObject_o *v33; // x0

  if ( (byte_42ECC00 & 1) == 0 )
  {
    sub_B5D5C4(&TitleInfoEventLeagueVsStatusComponent_TypeInfo, (_DWORD)callFinished, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UITweener_Begin_TweenAlpha___, v6, v7, v8);
    sub_B5D5C4(&Method_UITweener_Begin_TweenPosition___, v9, v10, v11);
    byte_42ECC00 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v13 = TitleInfoEventLeagueVsStatusComponent_TypeInfo;
  if ( (BYTE3(TitleInfoEventLeagueVsStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventLeagueVsStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventLeagueVsStatusComponent_TypeInfo);
    v13 = TitleInfoEventLeagueVsStatusComponent_TypeInfo;
  }
  title = (char *)UITweener__Begin_TweenWidth_(
                    gameObject,
                    v13->static_fields->FRAME_ANIM_DURATION,
                    (const MethodInfo_1E72118 *)Method_UITweener_Begin_TweenPosition___);
  if ( !title )
    goto LABEL_10;
  clearAnimCallBack_high = HIDWORD(this->fields.clearAnimCallBack);
  v17 = title;
  *((_QWORD *)title + 15) = *(_QWORD *)&this->fields.outPos.fields.z;
  *((_DWORD *)title + 32) = clearAnimCallBack_high;
  v18 = *(_QWORD *)&this->fields.inPos.fields.z;
  y = this->fields.outPos.fields.y;
  *((_DWORD *)title + 6) = 6;
  *(_QWORD *)(title + 132) = v18;
  *((float *)title + 35) = y;
  v20 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  *((_QWORD *)v17 + 9) = v20;
  sub_B5D560((BattleServantConfConponent_o *)(v17 + 72), v20, v21, v22, v23, v24, v25, v26);
  *((_QWORD *)v17 + 10) = callFinished;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v17 + 80),
    (System_Int32_array **)callFinished,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  title = (char *)this->fields.title;
  if ( !title
    || (v33 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)title, 0LL),
        (title = (char *)UITweener__Begin_TweenWidth_(
                           v33,
                           TitleInfoEventLeagueVsStatusComponent_TypeInfo->static_fields->FRAME_ANIM_DURATION,
                           (const MethodInfo_1E72118 *)Method_UITweener_Begin_TweenAlpha___)) == 0LL) )
  {
LABEL_10:
    sub_B5D69C(title, v15);
  }
  *((_DWORD *)title + 6) = 6;
  *((_QWORD *)title + 15) = 0x3F80000000000000LL;
}


void __fastcall TitleInfoEventLeagueVsStatusComponent__FrameOut(
        TitleInfoEventLeagueVsStatusComponent_o *this,
        System_String_o *callFinished,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  UnityEngine_GameObject_o *gameObject; // x21
  TitleInfoEventLeagueVsStatusComponent_c *v13; // x8
  char *title; // x0
  __int64 v15; // x1
  float y; // w9
  char *v17; // x21
  __int64 v18; // x8
  int clearAnimCallBack_high; // w9
  System_Int32_array **v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  UnityEngine_GameObject_o *v33; // x0

  if ( (byte_42ECC01 & 1) == 0 )
  {
    sub_B5D5C4(&TitleInfoEventLeagueVsStatusComponent_TypeInfo, (_DWORD)callFinished, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UITweener_Begin_TweenAlpha___, v6, v7, v8);
    sub_B5D5C4(&Method_UITweener_Begin_TweenPosition___, v9, v10, v11);
    byte_42ECC01 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v13 = TitleInfoEventLeagueVsStatusComponent_TypeInfo;
  if ( (BYTE3(TitleInfoEventLeagueVsStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventLeagueVsStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventLeagueVsStatusComponent_TypeInfo);
    v13 = TitleInfoEventLeagueVsStatusComponent_TypeInfo;
  }
  title = (char *)UITweener__Begin_TweenWidth_(
                    gameObject,
                    v13->static_fields->FRAME_ANIM_DURATION,
                    (const MethodInfo_1E72118 *)Method_UITweener_Begin_TweenPosition___);
  if ( !title )
    goto LABEL_10;
  y = this->fields.outPos.fields.y;
  v17 = title;
  *((_QWORD *)title + 15) = *(_QWORD *)&this->fields.inPos.fields.z;
  *((float *)title + 32) = y;
  v18 = *(_QWORD *)&this->fields.outPos.fields.z;
  clearAnimCallBack_high = HIDWORD(this->fields.clearAnimCallBack);
  *((_DWORD *)title + 6) = 2;
  *(_QWORD *)(title + 132) = v18;
  *((_DWORD *)title + 35) = clearAnimCallBack_high;
  v20 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  *((_QWORD *)v17 + 9) = v20;
  sub_B5D560((BattleServantConfConponent_o *)(v17 + 72), v20, v21, v22, v23, v24, v25, v26);
  *((_QWORD *)v17 + 10) = callFinished;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v17 + 80),
    (System_Int32_array **)callFinished,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  title = (char *)this->fields.title;
  if ( !title
    || (v33 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)title, 0LL),
        (title = (char *)UITweener__Begin_TweenWidth_(
                           v33,
                           TitleInfoEventLeagueVsStatusComponent_TypeInfo->static_fields->FRAME_ANIM_DURATION,
                           (const MethodInfo_1E72118 *)Method_UITweener_Begin_TweenAlpha___)) == 0LL) )
  {
LABEL_10:
    sub_B5D69C(title, v15);
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
    sub_B5D69C(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventLeagueVsStatusComponent__SetEntryAnim(
        TitleInfoEventLeagueVsStatusComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Transform_o *transform; // x0
  __int64 v9; // x1
  float v10; // s1
  TitleInfoEventLeagueVsStatusComponent_c *v11; // x0
  float32x2_t *static_fields; // x8
  float32x2_t v13; // d0
  float v14; // s2
  float v15; // [xsp+0h] [xbp-20h]

  if ( (byte_42ECBFD & 1) == 0 )
  {
    sub_B5D5C4(&TitleInfoEventLeagueVsStatusComponent_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_6110/*"EntryAnim"*/, v5, v6, v7);
    byte_42ECBFD = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_10;
  *(UnityEngine_Vector3_o *)(&v10 - 1) = UnityEngine_Transform__get_localPosition(transform, 0LL);
  this->fields.inPos.fields.z = 0.0;
  this->fields.outPos.fields.x = v10;
  this->fields.outPos.fields.y = 0.0;
  v11 = TitleInfoEventLeagueVsStatusComponent_TypeInfo;
  if ( (BYTE3(TitleInfoEventLeagueVsStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventLeagueVsStatusComponent_TypeInfo->_2.cctor_finished )
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
  *(float32x2_t *)&this->fields.outPos.fields.z = vadd_f32(v13, (float32x2_t)static_fields->n64_u64[0]);
  *((float *)&this->fields.clearAnimCallBack + 1) = v14 + 0.0;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(
          transform,
          *(UnityEngine_Vector3_o *)&this->fields.outPos.fields.z,
          0LL),
        (transform = (UnityEngine_Transform_o *)this->fields.title) == 0LL) )
  {
LABEL_10:
    sub_B5D69C(transform, v9);
  }
  (*(void (__fastcall **)(UnityEngine_Transform_o *, Il2CppClass *, float))&transform->klass[1]._1.this_arg.bits)(
    transform,
    transform->klass[1]._1.element_class,
    0.0);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6110/*"EntryAnim"*/,
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  UnityEngine_Transform_o *transform; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x2
  float v16; // s1
  TitleInfoEventLeagueVsStatusComponent_c *v17; // x0
  float32x2_t *static_fields; // x8
  float32x2_t v19; // d0
  float v20; // s2
  float v21; // [xsp+0h] [xbp-30h]

  if ( (byte_42ECBFE & 1) == 0 )
  {
    sub_B5D5C4(&TitleInfoEventLeagueVsStatusComponent_TypeInfo, (_DWORD)cb, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_1999/*"AnimFrameOutEnd"*/, v10, v11, v12);
    byte_42ECBFE = 1;
  }
  this[1].klass = (TitleInfoEventLeagueVsStatusComponent_c *)cb;
  sub_B5D560(
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
    sub_B5D69C(0LL, v14);
  *(UnityEngine_Vector3_o *)(&v16 - 1) = UnityEngine_Transform__get_localPosition(transform, 0LL);
  this->fields.inPos.fields.z = 0.0;
  this->fields.outPos.fields.x = v16;
  this->fields.outPos.fields.y = 0.0;
  v17 = TitleInfoEventLeagueVsStatusComponent_TypeInfo;
  if ( (BYTE3(TitleInfoEventLeagueVsStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventLeagueVsStatusComponent_TypeInfo->_2.cctor_finished )
  {
    v21 = v16;
    j_il2cpp_runtime_class_init_0(TitleInfoEventLeagueVsStatusComponent_TypeInfo);
    v16 = v21;
    v17 = TitleInfoEventLeagueVsStatusComponent_TypeInfo;
  }
  static_fields = (float32x2_t *)v17->static_fields;
  v19.n64_u32[0] = 0;
  v19.n64_f32[1] = v16;
  v20 = static_fields[1].n64_f32[0];
  *(float32x2_t *)&this->fields.outPos.fields.z = vadd_f32(v19, (float32x2_t)static_fields->n64_u64[0]);
  *((float *)&this->fields.clearAnimCallBack + 1) = v20 + 0.0;
  TitleInfoEventLeagueVsStatusComponent__FrameOut(this, (System_String_o *)StringLiteral_1999/*"AnimFrameOutEnd"*/, v15);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  __int64 Instance; // x0
  __int64 v56; // x1
  TotalEventPointMaster_o *MasterData_WarQuestSelectionMaster; // x24
  EventPointGroupMaster_o *v58; // x22
  struct UISprite_o *title; // x8
  unsigned __int8 v60; // w25
  Il2CppObject *v61; // x23
  int64_t Time; // x26
  struct System_Int32_array *group1; // x8
  unsigned __int64 v64; // x27
  __int64 v65; // x26
  unsigned __int64 max_length; // x9
  struct System_Int32_array *v67; // x8
  int32_t id; // w2
  int32_t v69; // w3
  struct System_Int32_array *v70; // x8
  float v71; // s0
  struct System_Int32_array *group2; // x8
  int32_t v73; // w8
  struct System_Int32_array *v74; // x8
  __int64 v75; // x23
  double v76; // d2
  float v77; // s0
  float v78; // s1
  float v79; // s0
  struct System_Int32_array *v80; // x8
  int32_t v81; // w8
  int32_t v82; // w8
  Il2CppObject *v83; // x0
  __int64 *v84; // x8
  struct System_Int32_array *v85; // x8
  struct System_Int32_array *v86; // x8
  struct System_Int32_array *v87; // x8
  struct System_Int32_array *v88; // x8
  UISprite_o *v89; // x21
  System_String_o *v90; // x22
  UISprite_o *backGround; // x21
  Il2CppObject *v92; // x0
  System_String_o *v93; // x0
  UISprite_o *statusName; // x20
  Il2CppObject *v95; // x0
  System_String_o *v96; // x0
  unsigned __int64 v97; // x24
  Il2CppObject *v98; // x0
  struct System_Int32_array *v99; // x8
  __int64 v100; // x0
  int32_t v101; // [xsp+8h] [xbp-48h] BYREF
  int32_t v102; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_42ECBFC & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)eventPointEntity, eventId, method);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventPointGroupMaster___, v7, v8, v9);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v10, v11, v12);
    sub_B5D5C4(&Method_DataManager_GetMasterData_TotalEventPointMaster___, v13, v14, v15);
    sub_B5D5C4(&int_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&NetworkManager_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_16098/*"_01"*/, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_16100/*"_03"*/, v28, v29, v30);
    sub_B5D5C4(&StringLiteral_16101/*"_04"*/, v31, v32, v33);
    sub_B5D5C4(&StringLiteral_16796/*"balance"*/, v34, v35, v36);
    sub_B5D5C4(&StringLiteral_18847/*"event_vs_status_bg_"*/, v37, v38, v39);
    sub_B5D5C4(&StringLiteral_18846/*"event_vs_status_"*/, v40, v41, v42);
    sub_B5D5C4(&StringLiteral_16102/*"_05"*/, v43, v44, v45);
    sub_B5D5C4(&StringLiteral_1/*""*/, v46, v47, v48);
    sub_B5D5C4(&StringLiteral_16099/*"_02"*/, v49, v50, v51);
    sub_B5D5C4(&StringLiteral_18848/*"event_vs_status_name_"*/, v52, v53, v54);
    byte_42ECBFC = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  MasterData_WarQuestSelectionMaster = (TotalEventPointMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    (DataManager_o *)Instance,
                                                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_TotalEventPointMaster___);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  v58 = (EventPointGroupMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)Instance,
                                     (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventPointGroupMaster___);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
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
  v60 = Instance;
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer, float))title->klass->vtable._8_set_alpha.method)(
    this->fields.title,
    title->klass->vtable._9_CalculateFinalAlpha.methodPtr,
    0.0);
  v61 = (Il2CppObject *)StringLiteral_1/*""*/;
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
    v64 = 0LL;
    v65 = 0LL;
    while ( 1 )
    {
      max_length = group1->max_length;
      if ( (__int64)v64 >= (int)max_length )
        break;
      if ( v64 >= max_length )
        goto LABEL_90;
      if ( MasterData_WarQuestSelectionMaster )
      {
        Instance = TotalEventPointMaster__GetPoint(
                     MasterData_WarQuestSelectionMaster,
                     eventId,
                     eventPointEntity->fields.id,
                     group1->m_Items[v64 + 1],
                     0LL);
        group1 = eventPointEntity->fields.group1;
        v65 += Instance;
        ++v64;
        if ( group1 )
          continue;
      }
      goto LABEL_19;
    }
    v71 = 1.0 - (double)v65 / (double)eventPointEntity->fields.normaTotalPoint;
    if ( v71 < 0.75 )
    {
      if ( v71 >= 0.5 )
      {
        group2 = eventPointEntity->fields.group2;
        if ( group2 )
        {
          if ( group2->max_length )
          {
            v73 = group2->m_Items[1];
LABEL_61:
            v102 = v73;
            v83 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v102);
            v84 = &StringLiteral_16099/*"_02"*/;
            goto LABEL_72;
          }
LABEL_90:
          v100 = sub_B5D6C8(Instance);
          sub_B5D668(v100, 0LL);
        }
        goto LABEL_19;
      }
      if ( v71 >= 0.25 )
      {
        v86 = eventPointEntity->fields.group2;
        if ( !v86 )
          goto LABEL_19;
        if ( !v86->max_length )
          goto LABEL_90;
        v82 = v86->m_Items[1];
LABEL_45:
        v102 = v82;
        v83 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v102);
        v84 = &StringLiteral_16100/*"_03"*/;
LABEL_72:
        v61 = (Il2CppObject *)System_String__Concat(v83, (Il2CppObject *)*v84, 0LL);
        goto LABEL_73;
      }
      if ( v71 < 0.1 )
      {
        if ( v71 <= 0.0 && v60 & 1 | (v71 > 0.0) )
        {
          if ( (int)max_length < 1 )
            goto LABEL_73;
          v97 = 0LL;
          while ( v97 < (unsigned int)max_length )
          {
            if ( !v58 )
              goto LABEL_19;
            Instance = (__int64)EventPointGroupMaster__getEntity(v58, eventId, group1->m_Items[v97 + 1], 0LL);
            if ( !Instance )
              goto LABEL_19;
            v102 = *(_DWORD *)(Instance + 32);
            v98 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v102);
            Instance = (__int64)System_String__Concat(v61, v98, 0LL);
            group1 = eventPointEntity->fields.group1;
            if ( !group1 )
              goto LABEL_19;
            LODWORD(max_length) = group1->max_length;
            ++v97;
            v61 = (Il2CppObject *)Instance;
            if ( (__int64)v97 >= (int)max_length )
              goto LABEL_73;
          }
          goto LABEL_90;
        }
        v99 = eventPointEntity->fields.group2;
        if ( v99 )
        {
          if ( v99->max_length )
          {
            v102 = v99->m_Items[1];
            v83 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v102);
            v84 = &StringLiteral_16102/*"_05"*/;
            goto LABEL_72;
          }
          goto LABEL_90;
        }
      }
      else
      {
        v88 = eventPointEntity->fields.group2;
        if ( v88 )
        {
          if ( v88->max_length )
          {
            v102 = v88->m_Items[1];
            v83 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v102);
            v84 = &StringLiteral_16101/*"_04"*/;
            goto LABEL_72;
          }
          goto LABEL_90;
        }
      }
      goto LABEL_19;
    }
    v80 = eventPointEntity->fields.group2;
    if ( !v80 )
      goto LABEL_19;
    if ( !v80->max_length )
      goto LABEL_90;
    v81 = v80->m_Items[1];
LABEL_71:
    v102 = v81;
    v83 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v102);
    v84 = &StringLiteral_16098/*"_01"*/;
    goto LABEL_72;
  }
  v67 = eventPointEntity->fields.group1;
  if ( !v67 )
    goto LABEL_19;
  if ( !v67->max_length )
    goto LABEL_90;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_19;
  id = eventPointEntity->fields.id;
  v69 = v67->m_Items[1];
  if ( (v60 & (eventPointEntity->fields.endedAt <= Time)) != 0 )
  {
    Instance = TotalEventPointMaster__IsGroupWin(MasterData_WarQuestSelectionMaster, eventId, id, v69, 0LL);
    if ( (Instance & 1) != 0 )
    {
      v70 = eventPointEntity->fields.group1;
      if ( !v70 )
        goto LABEL_19;
    }
    else
    {
      v70 = eventPointEntity->fields.group2;
      if ( !v70 )
        goto LABEL_19;
    }
    if ( !v70->max_length )
      goto LABEL_90;
    if ( v58 )
    {
      Instance = (__int64)EventPointGroupMaster__getEntity(v58, eventId, v70->m_Items[1], 0LL);
      if ( Instance )
      {
        v82 = *(_DWORD *)(Instance + 32);
        goto LABEL_45;
      }
    }
LABEL_19:
    sub_B5D69C(Instance, v56);
  }
  Instance = TotalEventPointMaster__GetPoint(MasterData_WarQuestSelectionMaster, eventId, id, v69, 0LL);
  v74 = eventPointEntity->fields.group2;
  if ( !v74 )
    goto LABEL_19;
  if ( !v74->max_length )
    goto LABEL_90;
  v75 = Instance;
  Instance = TotalEventPointMaster__GetPoint(
               MasterData_WarQuestSelectionMaster,
               eventId,
               eventPointEntity->fields.id,
               v74->m_Items[1],
               0LL);
  v76 = (double)(Instance + v75);
  v77 = (double)v75 / v76;
  v78 = (double)Instance / v76;
  v79 = vabds_f32(v78, v77);
  if ( v79 >= 0.3 )
  {
    if ( v75 <= Instance )
    {
      v85 = eventPointEntity->fields.group2;
      if ( !v85 )
        goto LABEL_19;
    }
    else
    {
      v85 = eventPointEntity->fields.group1;
      if ( !v85 )
        goto LABEL_19;
    }
    if ( !v85->max_length )
      goto LABEL_90;
    if ( v58 )
    {
      Instance = (__int64)EventPointGroupMaster__getEntity(v58, eventId, v85->m_Items[1], 0LL);
      if ( Instance )
      {
        v73 = *(_DWORD *)(Instance + 32);
        goto LABEL_61;
      }
    }
    goto LABEL_19;
  }
  if ( v79 >= 0.15 )
  {
    if ( v75 <= Instance )
    {
      v87 = eventPointEntity->fields.group2;
      if ( !v87 )
        goto LABEL_19;
    }
    else
    {
      v87 = eventPointEntity->fields.group1;
      if ( !v87 )
        goto LABEL_19;
    }
    if ( !v87->max_length )
      goto LABEL_90;
    if ( !v58 )
      goto LABEL_19;
    Instance = (__int64)EventPointGroupMaster__getEntity(v58, eventId, v87->m_Items[1], 0LL);
    if ( !Instance )
      goto LABEL_19;
    v81 = *(_DWORD *)(Instance + 32);
    goto LABEL_71;
  }
  v61 = (Il2CppObject *)StringLiteral_16796/*"balance"*/;
LABEL_73:
  v89 = *(UISprite_o **)&this->fields.inPos.fields.x;
  v90 = System_String__Concat_44577788((System_String_o *)StringLiteral_18846/*"event_vs_status_"*/, (System_String_o *)v61, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(v89, v90, 0LL);
  backGround = this->fields.backGround;
  v102 = eventPointEntity->fields.id;
  v92 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v102);
  v93 = System_String__Concat((Il2CppObject *)StringLiteral_18848/*"event_vs_status_name_"*/, v92, 0LL);
  AtlasManager__SetEventUI(backGround, v93, 0LL);
  statusName = this->fields.statusName;
  v101 = eventPointEntity->fields.id;
  v95 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v101);
  v96 = System_String__Concat((Il2CppObject *)StringLiteral_18847/*"event_vs_status_bg_"*/, v95, 0LL);
  AtlasManager__SetEventUI(statusName, v96, 0LL);
}