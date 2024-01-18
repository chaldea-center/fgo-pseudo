void __fastcall TitleInfoEventLeagueVsStatusComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct TitleInfoEventLeagueVsStatusComponent_StaticFields *static_fields; // x9
  TitleInfoEventLeagueVsStatusComponent_c *v3; // x8

  if ( (byte_418BA16 & 1) == 0 )
  {
    sub_B2C35C(&TitleInfoEventLeagueVsStatusComponent_TypeInfo, v1);
    byte_418BA16 = 1;
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

  if ( (byte_418BA12 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_17461/*"clearAnimFinised"*/, method);
    byte_418BA12 = 1;
  }
  if ( this[1].klass )
    v4 = (System_String_o *)StringLiteral_17461/*"clearAnimFinised"*/;
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

  if ( (byte_418BA15 & 1) == 0 )
  {
    sub_B2C35C(&TitleInfoEventLeagueVsStatusComponent_TypeInfo, method);
    sub_B2C35C(&Method_UITweener_Begin_TweenAlpha___, v3);
    byte_418BA15 = 1;
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
                                       (const MethodInfo_20A1B44 *)Method_UITweener_Begin_TweenAlpha___);
  if ( !title )
LABEL_9:
    sub_B2C434(title, method);
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
  __int64 v10; // x1
  int clearAnimCallBack_high; // w9
  char *v12; // x21
  __int64 v13; // x8
  float y; // w9
  System_Int32_array **v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  UnityEngine_GameObject_o *v28; // x0

  if ( (byte_418BA13 & 1) == 0 )
  {
    sub_B2C35C(&TitleInfoEventLeagueVsStatusComponent_TypeInfo, callFinished);
    sub_B2C35C(&Method_UITweener_Begin_TweenAlpha___, v5);
    sub_B2C35C(&Method_UITweener_Begin_TweenPosition___, v6);
    byte_418BA13 = 1;
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
                    (const MethodInfo_20A1B44 *)Method_UITweener_Begin_TweenPosition___);
  if ( !title )
    goto LABEL_10;
  clearAnimCallBack_high = HIDWORD(this->fields.clearAnimCallBack);
  v12 = title;
  *((_QWORD *)title + 15) = *(_QWORD *)&this->fields.outPos.fields.z;
  *((_DWORD *)title + 32) = clearAnimCallBack_high;
  v13 = *(_QWORD *)&this->fields.inPos.fields.z;
  y = this->fields.outPos.fields.y;
  *((_DWORD *)title + 6) = 6;
  *(_QWORD *)(title + 132) = v13;
  *((float *)title + 35) = y;
  v15 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  *((_QWORD *)v12 + 9) = v15;
  sub_B2C2F8((BattleServantConfConponent_o *)(v12 + 72), v15, v16, v17, v18, v19, v20, v21);
  *((_QWORD *)v12 + 10) = callFinished;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v12 + 80),
    (System_Int32_array **)callFinished,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  title = (char *)this->fields.title;
  if ( !title
    || (v28 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)title, 0LL),
        (title = (char *)UITweener__Begin_TweenWidth_(
                           v28,
                           TitleInfoEventLeagueVsStatusComponent_TypeInfo->static_fields->FRAME_ANIM_DURATION,
                           (const MethodInfo_20A1B44 *)Method_UITweener_Begin_TweenAlpha___)) == 0LL) )
  {
LABEL_10:
    sub_B2C434(title, v10);
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
  __int64 v10; // x1
  float y; // w9
  char *v12; // x21
  __int64 v13; // x8
  int clearAnimCallBack_high; // w9
  System_Int32_array **v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  UnityEngine_GameObject_o *v28; // x0

  if ( (byte_418BA14 & 1) == 0 )
  {
    sub_B2C35C(&TitleInfoEventLeagueVsStatusComponent_TypeInfo, callFinished);
    sub_B2C35C(&Method_UITweener_Begin_TweenAlpha___, v5);
    sub_B2C35C(&Method_UITweener_Begin_TweenPosition___, v6);
    byte_418BA14 = 1;
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
                    (const MethodInfo_20A1B44 *)Method_UITweener_Begin_TweenPosition___);
  if ( !title )
    goto LABEL_10;
  y = this->fields.outPos.fields.y;
  v12 = title;
  *((_QWORD *)title + 15) = *(_QWORD *)&this->fields.inPos.fields.z;
  *((float *)title + 32) = y;
  v13 = *(_QWORD *)&this->fields.outPos.fields.z;
  clearAnimCallBack_high = HIDWORD(this->fields.clearAnimCallBack);
  *((_DWORD *)title + 6) = 2;
  *(_QWORD *)(title + 132) = v13;
  *((_DWORD *)title + 35) = clearAnimCallBack_high;
  v15 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  *((_QWORD *)v12 + 9) = v15;
  sub_B2C2F8((BattleServantConfConponent_o *)(v12 + 72), v15, v16, v17, v18, v19, v20, v21);
  *((_QWORD *)v12 + 10) = callFinished;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v12 + 80),
    (System_Int32_array **)callFinished,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  title = (char *)this->fields.title;
  if ( !title
    || (v28 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)title, 0LL),
        (title = (char *)UITweener__Begin_TweenWidth_(
                           v28,
                           TitleInfoEventLeagueVsStatusComponent_TypeInfo->static_fields->FRAME_ANIM_DURATION,
                           (const MethodInfo_20A1B44 *)Method_UITweener_Begin_TweenAlpha___)) == 0LL) )
  {
LABEL_10:
    sub_B2C434(title, v10);
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
    sub_B2C434(0LL, v3);
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
  float v11; // [xsp+0h] [xbp-20h]

  if ( (byte_418BA10 & 1) == 0 )
  {
    sub_B2C35C(&TitleInfoEventLeagueVsStatusComponent_TypeInfo, method);
    sub_B2C35C(&StringLiteral_6031/*"EntryAnim"*/, v3);
    byte_418BA10 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_10;
  *(UnityEngine_Vector3_o *)(&v6 - 1) = UnityEngine_Transform__get_localPosition(transform, 0LL);
  this->fields.inPos.fields.z = 0.0;
  this->fields.outPos.fields.x = v6;
  this->fields.outPos.fields.y = 0.0;
  v7 = TitleInfoEventLeagueVsStatusComponent_TypeInfo;
  if ( (BYTE3(TitleInfoEventLeagueVsStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventLeagueVsStatusComponent_TypeInfo->_2.cctor_finished )
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
  *(float32x2_t *)&this->fields.outPos.fields.z = vadd_f32(v9, (float32x2_t)static_fields->n64_u64[0]);
  *((float *)&this->fields.clearAnimCallBack + 1) = v10 + 0.0;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(
          transform,
          *(UnityEngine_Vector3_o *)&this->fields.outPos.fields.z,
          0LL),
        (transform = (UnityEngine_Transform_o *)this->fields.title) == 0LL) )
  {
LABEL_10:
    sub_B2C434(transform, v5);
  }
  (*(void (__fastcall **)(UnityEngine_Transform_o *, Il2CppClass *, float))&transform->klass[1]._1.this_arg.bits)(
    transform,
    transform->klass[1]._1.element_class,
    0.0);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6031/*"EntryAnim"*/,
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
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  float v14; // s1
  TitleInfoEventLeagueVsStatusComponent_c *v15; // x0
  float32x2_t *static_fields; // x8
  float32x2_t v17; // d0
  float v18; // s2
  float v19; // [xsp+0h] [xbp-30h]

  if ( (byte_418BA11 & 1) == 0 )
  {
    sub_B2C35C(&TitleInfoEventLeagueVsStatusComponent_TypeInfo, cb);
    sub_B2C35C(&StringLiteral_1972/*"AnimFrameOutEnd"*/, v10);
    byte_418BA11 = 1;
  }
  this[1].klass = (TitleInfoEventLeagueVsStatusComponent_c *)cb;
  sub_B2C2F8(
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
    sub_B2C434(0LL, v12);
  *(UnityEngine_Vector3_o *)(&v14 - 1) = UnityEngine_Transform__get_localPosition(transform, 0LL);
  this->fields.inPos.fields.z = 0.0;
  this->fields.outPos.fields.x = v14;
  this->fields.outPos.fields.y = 0.0;
  v15 = TitleInfoEventLeagueVsStatusComponent_TypeInfo;
  if ( (BYTE3(TitleInfoEventLeagueVsStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventLeagueVsStatusComponent_TypeInfo->_2.cctor_finished )
  {
    v19 = v14;
    j_il2cpp_runtime_class_init_0(TitleInfoEventLeagueVsStatusComponent_TypeInfo);
    v14 = v19;
    v15 = TitleInfoEventLeagueVsStatusComponent_TypeInfo;
  }
  static_fields = (float32x2_t *)v15->static_fields;
  v17.n64_u32[0] = 0;
  v17.n64_f32[1] = v14;
  v18 = static_fields[1].n64_f32[0];
  *(float32x2_t *)&this->fields.outPos.fields.z = vadd_f32(v17, (float32x2_t)static_fields->n64_u64[0]);
  *((float *)&this->fields.clearAnimCallBack + 1) = v18 + 0.0;
  TitleInfoEventLeagueVsStatusComponent__FrameOut(this, (System_String_o *)StringLiteral_1972/*"AnimFrameOutEnd"*/, v13);
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
  __int64 v24; // x1
  TotalEventPointMaster_o *MasterData_WarQuestSelectionMaster; // x24
  EventPointGroupMaster_o *v26; // x22
  struct UISprite_o *title; // x8
  unsigned __int8 v28; // w25
  Il2CppObject *v29; // x23
  int64_t Time; // x26
  struct System_Int32_array *group1; // x8
  unsigned __int64 v32; // x27
  __int64 v33; // x26
  unsigned __int64 max_length; // x9
  struct System_Int32_array *v35; // x8
  int32_t id; // w2
  int32_t v37; // w3
  struct System_Int32_array *v38; // x8
  float v39; // s0
  struct System_Int32_array *group2; // x8
  int32_t v41; // w8
  struct System_Int32_array *v42; // x8
  __int64 v43; // x23
  double v44; // d2
  float v45; // s0
  float v46; // s1
  float v47; // s0
  struct System_Int32_array *v48; // x8
  int32_t v49; // w8
  int32_t v50; // w8
  Il2CppObject *v51; // x0
  __int64 *v52; // x8
  struct System_Int32_array *v53; // x8
  struct System_Int32_array *v54; // x8
  struct System_Int32_array *v55; // x8
  struct System_Int32_array *v56; // x8
  UISprite_o *v57; // x21
  System_String_o *v58; // x22
  UISprite_o *backGround; // x21
  Il2CppObject *v60; // x0
  System_String_o *v61; // x0
  UISprite_o *statusName; // x20
  Il2CppObject *v63; // x0
  System_String_o *v64; // x0
  unsigned __int64 v65; // x24
  Il2CppObject *v66; // x0
  struct System_Int32_array *v67; // x8
  __int64 v68; // x0
  int32_t v69; // [xsp+8h] [xbp-48h] BYREF
  int32_t v70; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_418BA0F & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, eventPointEntity);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventPointGroupMaster___, v7);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v8);
    sub_B2C35C(&Method_DataManager_GetMasterData_TotalEventPointMaster___, v9);
    sub_B2C35C(&int_TypeInfo, v10);
    sub_B2C35C(&NetworkManager_TypeInfo, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_B2C35C(&StringLiteral_15907/*"_01"*/, v13);
    sub_B2C35C(&StringLiteral_15909/*"_03"*/, v14);
    sub_B2C35C(&StringLiteral_15910/*"_04"*/, v15);
    sub_B2C35C(&StringLiteral_16596/*"balance"*/, v16);
    sub_B2C35C(&StringLiteral_18616/*"event_vs_status_bg_"*/, v17);
    sub_B2C35C(&StringLiteral_18615/*"event_vs_status_"*/, v18);
    sub_B2C35C(&StringLiteral_15911/*"_05"*/, v19);
    sub_B2C35C(&StringLiteral_1/*""*/, v20);
    sub_B2C35C(&StringLiteral_15908/*"_02"*/, v21);
    sub_B2C35C(&StringLiteral_18617/*"event_vs_status_name_"*/, v22);
    byte_418BA0F = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  MasterData_WarQuestSelectionMaster = (TotalEventPointMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    (DataManager_o *)Instance,
                                                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_TotalEventPointMaster___);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  v26 = (EventPointGroupMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)Instance,
                                     (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventPointGroupMaster___);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
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
  v28 = Instance;
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer, float))title->klass->vtable._8_set_alpha.method)(
    this->fields.title,
    title->klass->vtable._9_CalculateFinalAlpha.methodPtr,
    0.0);
  v29 = (Il2CppObject *)StringLiteral_1/*""*/;
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
    v32 = 0LL;
    v33 = 0LL;
    while ( 1 )
    {
      max_length = group1->max_length;
      if ( (__int64)v32 >= (int)max_length )
        break;
      if ( v32 >= max_length )
        goto LABEL_90;
      if ( MasterData_WarQuestSelectionMaster )
      {
        Instance = TotalEventPointMaster__GetPoint(
                     MasterData_WarQuestSelectionMaster,
                     eventId,
                     eventPointEntity->fields.id,
                     group1->m_Items[v32 + 1],
                     0LL);
        group1 = eventPointEntity->fields.group1;
        v33 += Instance;
        ++v32;
        if ( group1 )
          continue;
      }
      goto LABEL_19;
    }
    v39 = 1.0 - (double)v33 / (double)eventPointEntity->fields.normaTotalPoint;
    if ( v39 < 0.75 )
    {
      if ( v39 >= 0.5 )
      {
        group2 = eventPointEntity->fields.group2;
        if ( group2 )
        {
          if ( group2->max_length )
          {
            v41 = group2->m_Items[1];
LABEL_61:
            v70 = v41;
            v51 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v70);
            v52 = &StringLiteral_15908/*"_02"*/;
            goto LABEL_72;
          }
LABEL_90:
          v68 = sub_B2C460(Instance);
          sub_B2C400(v68, 0LL);
        }
        goto LABEL_19;
      }
      if ( v39 >= 0.25 )
      {
        v54 = eventPointEntity->fields.group2;
        if ( !v54 )
          goto LABEL_19;
        if ( !v54->max_length )
          goto LABEL_90;
        v50 = v54->m_Items[1];
LABEL_45:
        v70 = v50;
        v51 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v70);
        v52 = &StringLiteral_15909/*"_03"*/;
LABEL_72:
        v29 = (Il2CppObject *)System_String__Concat(v51, (Il2CppObject *)*v52, 0LL);
        goto LABEL_73;
      }
      if ( v39 < 0.1 )
      {
        if ( v39 <= 0.0 && v28 & 1 | (v39 > 0.0) )
        {
          if ( (int)max_length < 1 )
            goto LABEL_73;
          v65 = 0LL;
          while ( v65 < (unsigned int)max_length )
          {
            if ( !v26 )
              goto LABEL_19;
            Instance = (__int64)EventPointGroupMaster__getEntity(v26, eventId, group1->m_Items[v65 + 1], 0LL);
            if ( !Instance )
              goto LABEL_19;
            v70 = *(_DWORD *)(Instance + 32);
            v66 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v70);
            Instance = (__int64)System_String__Concat(v29, v66, 0LL);
            group1 = eventPointEntity->fields.group1;
            if ( !group1 )
              goto LABEL_19;
            LODWORD(max_length) = group1->max_length;
            ++v65;
            v29 = (Il2CppObject *)Instance;
            if ( (__int64)v65 >= (int)max_length )
              goto LABEL_73;
          }
          goto LABEL_90;
        }
        v67 = eventPointEntity->fields.group2;
        if ( v67 )
        {
          if ( v67->max_length )
          {
            v70 = v67->m_Items[1];
            v51 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v70);
            v52 = &StringLiteral_15911/*"_05"*/;
            goto LABEL_72;
          }
          goto LABEL_90;
        }
      }
      else
      {
        v56 = eventPointEntity->fields.group2;
        if ( v56 )
        {
          if ( v56->max_length )
          {
            v70 = v56->m_Items[1];
            v51 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v70);
            v52 = &StringLiteral_15910/*"_04"*/;
            goto LABEL_72;
          }
          goto LABEL_90;
        }
      }
      goto LABEL_19;
    }
    v48 = eventPointEntity->fields.group2;
    if ( !v48 )
      goto LABEL_19;
    if ( !v48->max_length )
      goto LABEL_90;
    v49 = v48->m_Items[1];
LABEL_71:
    v70 = v49;
    v51 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v70);
    v52 = &StringLiteral_15907/*"_01"*/;
    goto LABEL_72;
  }
  v35 = eventPointEntity->fields.group1;
  if ( !v35 )
    goto LABEL_19;
  if ( !v35->max_length )
    goto LABEL_90;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_19;
  id = eventPointEntity->fields.id;
  v37 = v35->m_Items[1];
  if ( (v28 & (eventPointEntity->fields.endedAt <= Time)) != 0 )
  {
    Instance = TotalEventPointMaster__IsGroupWin(MasterData_WarQuestSelectionMaster, eventId, id, v37, 0LL);
    if ( (Instance & 1) != 0 )
    {
      v38 = eventPointEntity->fields.group1;
      if ( !v38 )
        goto LABEL_19;
    }
    else
    {
      v38 = eventPointEntity->fields.group2;
      if ( !v38 )
        goto LABEL_19;
    }
    if ( !v38->max_length )
      goto LABEL_90;
    if ( v26 )
    {
      Instance = (__int64)EventPointGroupMaster__getEntity(v26, eventId, v38->m_Items[1], 0LL);
      if ( Instance )
      {
        v50 = *(_DWORD *)(Instance + 32);
        goto LABEL_45;
      }
    }
LABEL_19:
    sub_B2C434(Instance, v24);
  }
  Instance = TotalEventPointMaster__GetPoint(MasterData_WarQuestSelectionMaster, eventId, id, v37, 0LL);
  v42 = eventPointEntity->fields.group2;
  if ( !v42 )
    goto LABEL_19;
  if ( !v42->max_length )
    goto LABEL_90;
  v43 = Instance;
  Instance = TotalEventPointMaster__GetPoint(
               MasterData_WarQuestSelectionMaster,
               eventId,
               eventPointEntity->fields.id,
               v42->m_Items[1],
               0LL);
  v44 = (double)(Instance + v43);
  v45 = (double)v43 / v44;
  v46 = (double)Instance / v44;
  v47 = vabds_f32(v46, v45);
  if ( v47 >= 0.3 )
  {
    if ( v43 <= Instance )
    {
      v53 = eventPointEntity->fields.group2;
      if ( !v53 )
        goto LABEL_19;
    }
    else
    {
      v53 = eventPointEntity->fields.group1;
      if ( !v53 )
        goto LABEL_19;
    }
    if ( !v53->max_length )
      goto LABEL_90;
    if ( v26 )
    {
      Instance = (__int64)EventPointGroupMaster__getEntity(v26, eventId, v53->m_Items[1], 0LL);
      if ( Instance )
      {
        v41 = *(_DWORD *)(Instance + 32);
        goto LABEL_61;
      }
    }
    goto LABEL_19;
  }
  if ( v47 >= 0.15 )
  {
    if ( v43 <= Instance )
    {
      v55 = eventPointEntity->fields.group2;
      if ( !v55 )
        goto LABEL_19;
    }
    else
    {
      v55 = eventPointEntity->fields.group1;
      if ( !v55 )
        goto LABEL_19;
    }
    if ( !v55->max_length )
      goto LABEL_90;
    if ( !v26 )
      goto LABEL_19;
    Instance = (__int64)EventPointGroupMaster__getEntity(v26, eventId, v55->m_Items[1], 0LL);
    if ( !Instance )
      goto LABEL_19;
    v49 = *(_DWORD *)(Instance + 32);
    goto LABEL_71;
  }
  v29 = (Il2CppObject *)StringLiteral_16596/*"balance"*/;
LABEL_73:
  v57 = *(UISprite_o **)&this->fields.inPos.fields.x;
  v58 = System_String__Concat_44305532((System_String_o *)StringLiteral_18615/*"event_vs_status_"*/, (System_String_o *)v29, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(v57, v58, 0LL);
  backGround = this->fields.backGround;
  v70 = eventPointEntity->fields.id;
  v60 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v70);
  v61 = System_String__Concat((Il2CppObject *)StringLiteral_18617/*"event_vs_status_name_"*/, v60, 0LL);
  AtlasManager__SetEventUI(backGround, v61, 0LL);
  statusName = this->fields.statusName;
  v69 = eventPointEntity->fields.id;
  v63 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v69);
  v64 = System_String__Concat((Il2CppObject *)StringLiteral_18616/*"event_vs_status_bg_"*/, v63, 0LL);
  AtlasManager__SetEventUI(statusName, v64, 0LL);
}