void __fastcall TitleInfoEventLeagueVsStatusComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct TitleInfoEventLeagueVsStatusComponent_StaticFields *static_fields; // x9
  TitleInfoEventLeagueVsStatusComponent_c *v3; // x8

  if ( (byte_40FDFDC & 1) == 0 )
  {
    sub_B16FFC(&TitleInfoEventLeagueVsStatusComponent_TypeInfo, v1);
    byte_40FDFDC = 1;
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

  if ( (byte_40FDFD8 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_17395, method);
    byte_40FDFD8 = 1;
  }
  if ( this[1].klass )
    v4 = (System_String_o *)StringLiteral_17395;
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
  TweenWidth_o *v7; // x0

  if ( (byte_40FDFDB & 1) == 0 )
  {
    sub_B16FFC(&TitleInfoEventLeagueVsStatusComponent_TypeInfo, method);
    sub_B16FFC(&Method_UITweener_Begin_TweenAlpha___, v3);
    byte_40FDFDB = 1;
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
  v7 = UITweener__Begin_TweenWidth_(
         gameObject,
         v6->static_fields->FRAME_ANIM_DURATION,
         (const MethodInfo_2254D94 *)Method_UITweener_Begin_TweenAlpha___);
  if ( !v7 )
LABEL_9:
    sub_B170D4();
  v7->fields.style = 2;
  *(_QWORD *)&v7->fields.from = 1065353216LL;
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
  TweenWidth_o *v9; // x0
  int clearAnimCallBack_high; // w9
  TweenWidth_o *v11; // x21
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
  UnityEngine_Component_o *title; // x0
  UnityEngine_GameObject_o *v28; // x0
  TweenWidth_o *v29; // x0

  if ( (byte_40FDFD9 & 1) == 0 )
  {
    sub_B16FFC(&TitleInfoEventLeagueVsStatusComponent_TypeInfo, callFinished);
    sub_B16FFC(&Method_UITweener_Begin_TweenAlpha___, v5);
    sub_B16FFC(&Method_UITweener_Begin_TweenPosition___, v6);
    byte_40FDFD9 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v8 = TitleInfoEventLeagueVsStatusComponent_TypeInfo;
  if ( (BYTE3(TitleInfoEventLeagueVsStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventLeagueVsStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventLeagueVsStatusComponent_TypeInfo);
    v8 = TitleInfoEventLeagueVsStatusComponent_TypeInfo;
  }
  v9 = UITweener__Begin_TweenWidth_(
         gameObject,
         v8->static_fields->FRAME_ANIM_DURATION,
         (const MethodInfo_2254D94 *)Method_UITweener_Begin_TweenPosition___);
  if ( !v9 )
    goto LABEL_10;
  clearAnimCallBack_high = HIDWORD(this->fields.clearAnimCallBack);
  v11 = v9;
  *(_QWORD *)&v9->fields.from = *(_QWORD *)&this->fields.outPos.fields.z;
  *(_DWORD *)&v9->fields.updateTable = clearAnimCallBack_high;
  v12 = *(_QWORD *)&this->fields.inPos.fields.z;
  y = this->fields.outPos.fields.y;
  v9->fields.style = 6;
  *(_QWORD *)(&v9->fields.updateTable + 4) = v12;
  *((float *)&v9->fields.mWidget + 1) = y;
  v14 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v11->fields.eventReceiver = (struct UnityEngine_GameObject_o *)v14;
  sub_B16F98((BattleServantConfConponent_o *)&v11->fields.eventReceiver, v14, v15, v16, v17, v18, v19, v20);
  v11->fields.callWhenFinished = callFinished;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v11->fields.callWhenFinished,
    (System_Int32_array **)callFinished,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  title = (UnityEngine_Component_o *)this->fields.title;
  if ( !title
    || (v28 = UnityEngine_Component__get_gameObject(title, 0LL),
        (v29 = UITweener__Begin_TweenWidth_(
                 v28,
                 TitleInfoEventLeagueVsStatusComponent_TypeInfo->static_fields->FRAME_ANIM_DURATION,
                 (const MethodInfo_2254D94 *)Method_UITweener_Begin_TweenAlpha___)) == 0LL) )
  {
LABEL_10:
    sub_B170D4();
  }
  v29->fields.style = 6;
  *(_QWORD *)&v29->fields.from = 0x3F80000000000000LL;
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
  TweenWidth_o *v9; // x0
  float y; // w9
  TweenWidth_o *v11; // x21
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
  UnityEngine_Component_o *title; // x0
  UnityEngine_GameObject_o *v28; // x0
  TweenWidth_o *v29; // x0

  if ( (byte_40FDFDA & 1) == 0 )
  {
    sub_B16FFC(&TitleInfoEventLeagueVsStatusComponent_TypeInfo, callFinished);
    sub_B16FFC(&Method_UITweener_Begin_TweenAlpha___, v5);
    sub_B16FFC(&Method_UITweener_Begin_TweenPosition___, v6);
    byte_40FDFDA = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v8 = TitleInfoEventLeagueVsStatusComponent_TypeInfo;
  if ( (BYTE3(TitleInfoEventLeagueVsStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventLeagueVsStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventLeagueVsStatusComponent_TypeInfo);
    v8 = TitleInfoEventLeagueVsStatusComponent_TypeInfo;
  }
  v9 = UITweener__Begin_TweenWidth_(
         gameObject,
         v8->static_fields->FRAME_ANIM_DURATION,
         (const MethodInfo_2254D94 *)Method_UITweener_Begin_TweenPosition___);
  if ( !v9 )
    goto LABEL_10;
  y = this->fields.outPos.fields.y;
  v11 = v9;
  *(_QWORD *)&v9->fields.from = *(_QWORD *)&this->fields.inPos.fields.z;
  *(float *)&v9->fields.updateTable = y;
  v12 = *(_QWORD *)&this->fields.outPos.fields.z;
  clearAnimCallBack_high = HIDWORD(this->fields.clearAnimCallBack);
  v9->fields.style = 2;
  *(_QWORD *)(&v9->fields.updateTable + 4) = v12;
  HIDWORD(v9->fields.mWidget) = clearAnimCallBack_high;
  v14 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v11->fields.eventReceiver = (struct UnityEngine_GameObject_o *)v14;
  sub_B16F98((BattleServantConfConponent_o *)&v11->fields.eventReceiver, v14, v15, v16, v17, v18, v19, v20);
  v11->fields.callWhenFinished = callFinished;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v11->fields.callWhenFinished,
    (System_Int32_array **)callFinished,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  title = (UnityEngine_Component_o *)this->fields.title;
  if ( !title
    || (v28 = UnityEngine_Component__get_gameObject(title, 0LL),
        (v29 = UITweener__Begin_TweenWidth_(
                 v28,
                 TitleInfoEventLeagueVsStatusComponent_TypeInfo->static_fields->FRAME_ANIM_DURATION,
                 (const MethodInfo_2254D94 *)Method_UITweener_Begin_TweenAlpha___)) == 0LL) )
  {
LABEL_10:
    sub_B170D4();
  }
  v29->fields.style = 2;
  *(_QWORD *)&v29->fields.from = 1065353216LL;
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
    sub_B170D4();
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
  UnityEngine_Transform_o *v10; // x0
  struct UISprite_o *title; // x0
  float v12; // [xsp+0h] [xbp-20h]

  if ( (byte_40FDFD6 & 1) == 0 )
  {
    sub_B16FFC(&TitleInfoEventLeagueVsStatusComponent_TypeInfo, method);
    sub_B16FFC(&StringLiteral_6013, v3);
    byte_40FDFD6 = 1;
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
    v12 = v5;
    j_il2cpp_runtime_class_init_0(TitleInfoEventLeagueVsStatusComponent_TypeInfo);
    v5 = v12;
    v6 = TitleInfoEventLeagueVsStatusComponent_TypeInfo;
  }
  static_fields = (float32x2_t *)v6->static_fields;
  v8.n64_u32[0] = 0;
  v8.n64_f32[1] = v5;
  v9 = static_fields[1].n64_f32[0];
  *(float32x2_t *)&this->fields.outPos.fields.z = vadd_f32(v8, (float32x2_t)static_fields->n64_u64[0]);
  *((float *)&this->fields.clearAnimCallBack + 1) = v9 + 0.0;
  v10 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v10
    || (UnityEngine_Transform__set_localPosition(v10, *(UnityEngine_Vector3_o *)&this->fields.outPos.fields.z, 0LL),
        (title = this->fields.title) == 0LL) )
  {
LABEL_10:
    sub_B170D4();
  }
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer, float))title->klass->vtable._8_set_alpha.method)(
    title,
    title->klass->vtable._9_CalculateFinalAlpha.methodPtr,
    0.0);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6013,
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

  if ( (byte_40FDFD7 & 1) == 0 )
  {
    sub_B16FFC(&TitleInfoEventLeagueVsStatusComponent_TypeInfo, cb);
    sub_B16FFC(&StringLiteral_1966, v10);
    byte_40FDFD7 = 1;
  }
  this[1].klass = (TitleInfoEventLeagueVsStatusComponent_c *)cb;
  sub_B16F98(
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
    sub_B170D4();
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
  TitleInfoEventLeagueVsStatusComponent__FrameOut(this, (System_String_o *)StringLiteral_1966, v12);
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
  WebViewManager_o *Instance; // x0
  TotalEventPointMaster_o *MasterData_WarQuestSelectionMaster; // x24
  WebViewManager_o *v25; // x0
  EventPointGroupMaster_o *v26; // x22
  WebViewManager_o *v27; // x0
  QuestReleaseMaster_o *v28; // x0
  bool IsQuestOfResultBattleCleared; // w0
  struct UISprite_o *title; // x8
  bool v31; // w25
  Il2CppObject *v32; // x23
  int64_t Time; // x26
  __int64 isBossBattle; // x0
  __int64 v35; // x1
  __int64 v36; // x2
  struct System_Int32_array *group1; // x8
  unsigned __int64 v38; // x27
  __int64 v39; // x26
  unsigned __int64 max_length; // x9
  struct System_Int32_array *v41; // x8
  int32_t id; // w2
  int32_t v43; // w3
  struct System_Int32_array *v44; // x8
  float v45; // s0
  struct System_Int32_array *group2; // x8
  int32_t v47; // w8
  struct System_Int32_array *v48; // x8
  __int64 v49; // x23
  double v50; // d2
  float v51; // s0
  float v52; // s1
  float v53; // s0
  struct System_Int32_array *v54; // x8
  int32_t v55; // w8
  EventPointGroupEntity_o *v56; // x0
  int32_t v57; // w8
  Il2CppObject *v58; // x0
  __int64 *v59; // x8
  struct System_Int32_array *v60; // x8
  struct System_Int32_array *v61; // x8
  struct System_Int32_array *v62; // x8
  EventPointGroupEntity_o *v63; // x0
  struct System_Int32_array *v64; // x8
  EventPointGroupEntity_o *v65; // x0
  UISprite_o *v66; // x21
  System_String_o *v67; // x22
  UISprite_o *backGround; // x21
  Il2CppObject *v69; // x0
  System_String_o *v70; // x0
  UISprite_o *statusName; // x20
  Il2CppObject *v72; // x0
  System_String_o *v73; // x0
  unsigned __int64 v74; // x24
  EventPointGroupEntity_o *Entity; // x0
  Il2CppObject *v76; // x0
  struct System_Int32_array *v77; // x8
  int32_t v78; // [xsp+8h] [xbp-48h] BYREF
  int32_t iconId; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_40FDFD5 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, eventPointEntity);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventPointGroupMaster___, v7);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v8);
    sub_B16FFC(&Method_DataManager_GetMasterData_TotalEventPointMaster___, v9);
    sub_B16FFC(&int_TypeInfo, v10);
    sub_B16FFC(&NetworkManager_TypeInfo, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_B16FFC(&StringLiteral_15844, v13);
    sub_B16FFC(&StringLiteral_15846, v14);
    sub_B16FFC(&StringLiteral_15847, v15);
    sub_B16FFC(&StringLiteral_16532, v16);
    sub_B16FFC(&StringLiteral_18546, v17);
    sub_B16FFC(&StringLiteral_18545, v18);
    sub_B16FFC(&StringLiteral_15848, v19);
    sub_B16FFC(&StringLiteral_1, v20);
    sub_B16FFC(&StringLiteral_15845, v21);
    sub_B16FFC(&StringLiteral_18547, v22);
    byte_40FDFD5 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  MasterData_WarQuestSelectionMaster = (TotalEventPointMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    (DataManager_o *)Instance,
                                                                    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_TotalEventPointMaster___);
  v25 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v25 )
    goto LABEL_19;
  v26 = (EventPointGroupMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)v25,
                                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventPointGroupMaster___);
  v27 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v27 )
    goto LABEL_19;
  v28 = (QuestReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)v27,
                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  if ( !eventPointEntity )
    goto LABEL_19;
  if ( !v28 )
    goto LABEL_19;
  IsQuestOfResultBattleCleared = QuestReleaseMaster__IsQuestOfResultBattleCleared(
                                   v28,
                                   eventPointEntity->fields.id + 100 * eventPointEntity->fields.eventId,
                                   0LL);
  title = this->fields.title;
  if ( !title )
    goto LABEL_19;
  v31 = IsQuestOfResultBattleCleared;
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer, float))title->klass->vtable._8_set_alpha.method)(
    this->fields.title,
    title->klass->vtable._9_CalculateFinalAlpha.methodPtr,
    0.0);
  v32 = (Il2CppObject *)StringLiteral_1;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  isBossBattle = EventPointEntity__isBossBattle(eventPointEntity, 0LL);
  if ( (isBossBattle & 1) != 0 )
  {
    group1 = eventPointEntity->fields.group1;
    if ( !group1 )
      goto LABEL_19;
    v38 = 0LL;
    v39 = 0LL;
    while ( 1 )
    {
      max_length = group1->max_length;
      if ( (__int64)v38 >= (int)max_length )
        break;
      if ( v38 >= max_length )
        goto LABEL_90;
      if ( MasterData_WarQuestSelectionMaster )
      {
        isBossBattle = TotalEventPointMaster__GetPoint(
                         MasterData_WarQuestSelectionMaster,
                         eventId,
                         eventPointEntity->fields.id,
                         group1->m_Items[v38 + 1],
                         0LL);
        group1 = eventPointEntity->fields.group1;
        v39 += isBossBattle;
        ++v38;
        if ( group1 )
          continue;
      }
      goto LABEL_19;
    }
    v45 = 1.0 - (double)v39 / (double)eventPointEntity->fields.normaTotalPoint;
    if ( v45 < 0.75 )
    {
      if ( v45 >= 0.5 )
      {
        group2 = eventPointEntity->fields.group2;
        if ( group2 )
        {
          if ( group2->max_length )
          {
            v47 = group2->m_Items[1];
LABEL_61:
            iconId = v47;
            v58 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId);
            v59 = &StringLiteral_15845;
            goto LABEL_72;
          }
LABEL_90:
          sub_B17100(isBossBattle, v35, v36);
          sub_B170A0();
        }
        goto LABEL_19;
      }
      if ( v45 >= 0.25 )
      {
        v61 = eventPointEntity->fields.group2;
        if ( !v61 )
          goto LABEL_19;
        if ( !v61->max_length )
          goto LABEL_90;
        v57 = v61->m_Items[1];
LABEL_45:
        iconId = v57;
        v58 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId);
        v59 = &StringLiteral_15846;
LABEL_72:
        v32 = (Il2CppObject *)System_String__Concat(v58, (Il2CppObject *)*v59, 0LL);
        goto LABEL_73;
      }
      if ( v45 < 0.1 )
      {
        if ( v45 <= 0.0 && (v31 || v45 > 0.0) )
        {
          if ( (int)max_length < 1 )
            goto LABEL_73;
          v74 = 0LL;
          while ( v74 < (unsigned int)max_length )
          {
            if ( !v26 )
              goto LABEL_19;
            Entity = EventPointGroupMaster__getEntity(v26, eventId, group1->m_Items[v74 + 1], 0LL);
            if ( !Entity )
              goto LABEL_19;
            iconId = Entity->fields.iconId;
            v76 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId);
            isBossBattle = (__int64)System_String__Concat(v32, v76, 0LL);
            group1 = eventPointEntity->fields.group1;
            if ( !group1 )
              goto LABEL_19;
            LODWORD(max_length) = group1->max_length;
            ++v74;
            v32 = (Il2CppObject *)isBossBattle;
            if ( (__int64)v74 >= (int)max_length )
              goto LABEL_73;
          }
          goto LABEL_90;
        }
        v77 = eventPointEntity->fields.group2;
        if ( v77 )
        {
          if ( v77->max_length )
          {
            iconId = v77->m_Items[1];
            v58 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId);
            v59 = &StringLiteral_15848;
            goto LABEL_72;
          }
          goto LABEL_90;
        }
      }
      else
      {
        v64 = eventPointEntity->fields.group2;
        if ( v64 )
        {
          if ( v64->max_length )
          {
            iconId = v64->m_Items[1];
            v58 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId);
            v59 = &StringLiteral_15847;
            goto LABEL_72;
          }
          goto LABEL_90;
        }
      }
      goto LABEL_19;
    }
    v54 = eventPointEntity->fields.group2;
    if ( !v54 )
      goto LABEL_19;
    if ( !v54->max_length )
      goto LABEL_90;
    v55 = v54->m_Items[1];
LABEL_71:
    iconId = v55;
    v58 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId);
    v59 = &StringLiteral_15844;
    goto LABEL_72;
  }
  v41 = eventPointEntity->fields.group1;
  if ( !v41 )
    goto LABEL_19;
  if ( !v41->max_length )
    goto LABEL_90;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_19;
  id = eventPointEntity->fields.id;
  v43 = v41->m_Items[1];
  if ( v31 && eventPointEntity->fields.endedAt <= Time )
  {
    isBossBattle = TotalEventPointMaster__IsGroupWin(MasterData_WarQuestSelectionMaster, eventId, id, v43, 0LL);
    if ( (isBossBattle & 1) != 0 )
    {
      v44 = eventPointEntity->fields.group1;
      if ( !v44 )
        goto LABEL_19;
    }
    else
    {
      v44 = eventPointEntity->fields.group2;
      if ( !v44 )
        goto LABEL_19;
    }
    if ( !v44->max_length )
      goto LABEL_90;
    if ( v26 )
    {
      v56 = EventPointGroupMaster__getEntity(v26, eventId, v44->m_Items[1], 0LL);
      if ( v56 )
      {
        v57 = v56->fields.iconId;
        goto LABEL_45;
      }
    }
LABEL_19:
    sub_B170D4();
  }
  isBossBattle = TotalEventPointMaster__GetPoint(MasterData_WarQuestSelectionMaster, eventId, id, v43, 0LL);
  v48 = eventPointEntity->fields.group2;
  if ( !v48 )
    goto LABEL_19;
  if ( !v48->max_length )
    goto LABEL_90;
  v49 = isBossBattle;
  isBossBattle = TotalEventPointMaster__GetPoint(
                   MasterData_WarQuestSelectionMaster,
                   eventId,
                   eventPointEntity->fields.id,
                   v48->m_Items[1],
                   0LL);
  v50 = (double)(isBossBattle + v49);
  v51 = (double)v49 / v50;
  v52 = (double)isBossBattle / v50;
  v53 = vabds_f32(v52, v51);
  if ( v53 >= 0.3 )
  {
    if ( v49 <= isBossBattle )
    {
      v60 = eventPointEntity->fields.group2;
      if ( !v60 )
        goto LABEL_19;
    }
    else
    {
      v60 = eventPointEntity->fields.group1;
      if ( !v60 )
        goto LABEL_19;
    }
    if ( !v60->max_length )
      goto LABEL_90;
    if ( v26 )
    {
      v63 = EventPointGroupMaster__getEntity(v26, eventId, v60->m_Items[1], 0LL);
      if ( v63 )
      {
        v47 = v63->fields.iconId;
        goto LABEL_61;
      }
    }
    goto LABEL_19;
  }
  if ( v53 >= 0.15 )
  {
    if ( v49 <= isBossBattle )
    {
      v62 = eventPointEntity->fields.group2;
      if ( !v62 )
        goto LABEL_19;
    }
    else
    {
      v62 = eventPointEntity->fields.group1;
      if ( !v62 )
        goto LABEL_19;
    }
    if ( !v62->max_length )
      goto LABEL_90;
    if ( !v26 )
      goto LABEL_19;
    v65 = EventPointGroupMaster__getEntity(v26, eventId, v62->m_Items[1], 0LL);
    if ( !v65 )
      goto LABEL_19;
    v55 = v65->fields.iconId;
    goto LABEL_71;
  }
  v32 = (Il2CppObject *)StringLiteral_16532;
LABEL_73:
  v66 = *(UISprite_o **)&this->fields.inPos.fields.x;
  v67 = System_String__Concat_43743732((System_String_o *)StringLiteral_18545, (System_String_o *)v32, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(v66, v67, 0LL);
  backGround = this->fields.backGround;
  iconId = eventPointEntity->fields.id;
  v69 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId);
  v70 = System_String__Concat((Il2CppObject *)StringLiteral_18547, v69, 0LL);
  AtlasManager__SetEventUI(backGround, v70, 0LL);
  statusName = this->fields.statusName;
  v78 = eventPointEntity->fields.id;
  v72 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v78);
  v73 = System_String__Concat((Il2CppObject *)StringLiteral_18546, v72, 0LL);
  AtlasManager__SetEventUI(statusName, v73, 0LL);
}