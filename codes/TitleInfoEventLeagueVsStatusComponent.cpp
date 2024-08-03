void __fastcall TitleInfoEventLeagueVsStatusComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct TitleInfoEventLeagueVsStatusComponent_StaticFields *static_fields; // x8

  if ( (byte_49FA4FF & 1) == 0 )
  {
    sub_1B640C8(&TitleInfoEventLeagueVsStatusComponent_TypeInfo, v1);
    byte_49FA4FF = 1;
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

  if ( (byte_49FA4FB & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_17934/*"clearAnimFinised"*/, method);
    byte_49FA4FB = 1;
  }
  if ( this->fields.clearAnimCallBack )
    v4 = (System_String_o *)StringLiteral_17934/*"clearAnimFinised"*/;
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

  if ( (byte_49FA4FE & 1) == 0 )
  {
    sub_1B640C8(&TitleInfoEventLeagueVsStatusComponent_TypeInfo, method);
    sub_1B640C8(&Method_UITweener_Begin_TweenAlpha___, v3);
    byte_49FA4FE = 1;
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
                                      (const MethodInfo_2EEADCC *)Method_UITweener_Begin_TweenAlpha___);
  if ( !Root )
LABEL_8:
    sub_1B64324(Root);
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
  char *v11; // x21
  float z; // w8
  __int64 v13; // x9
  UnityEngine_GameObject_o *v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w2
  int32_t v18; // w3
  UnityEngine_GameObject_o *v19; // x0
  __int64 v20; // [xsp+0h] [xbp-40h]

  if ( (byte_49FA4FC & 1) == 0 )
  {
    sub_1B640C8(&TitleInfoEventLeagueVsStatusComponent_TypeInfo, callFinished);
    sub_1B640C8(&Method_UITweener_Begin_TweenAlpha___, v5);
    sub_1B640C8(&Method_UITweener_Begin_TweenPosition___, v6);
    byte_49FA4FC = 1;
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
                   (const MethodInfo_2EEADCC *)Method_UITweener_Begin_TweenPosition___);
  v20 = *(_QWORD *)&this->fields.outPos.fields.x;
  if ( !Root )
    goto LABEL_9;
  v11 = Root;
  *((_DWORD *)Root + 34) = LODWORD(this->fields.outPos.fields.z);
  *((_QWORD *)Root + 16) = v20;
  z = this->fields.inPos.fields.z;
  v13 = *(_QWORD *)&this->fields.inPos.fields.x;
  *((_DWORD *)Root + 8) = 6;
  *((float *)Root + 37) = z;
  *(_QWORD *)(Root + 140) = v13;
  v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  *((_QWORD *)v11 + 10) = v14;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v11 + 80), (int32_t)v14, v15, v16);
  *((_QWORD *)v11 + 11) = callFinished;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v11 + 88), (int32_t)callFinished, v17, v18);
  Root = (char *)this->fields.Root;
  if ( !Root
    || (v19 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Root, 0LL),
        (Root = (char *)UITweener__Begin_object_(
                          v19,
                          TitleInfoEventLeagueVsStatusComponent_TypeInfo->static_fields->FRAME_ANIM_DURATION,
                          (const MethodInfo_2EEADCC *)Method_UITweener_Begin_TweenAlpha___)) == 0LL) )
  {
LABEL_9:
    sub_1B64324(Root);
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
  char *v11; // x21
  float z; // w8
  __int64 v13; // x9
  UnityEngine_GameObject_o *v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w2
  int32_t v18; // w3
  UnityEngine_GameObject_o *v19; // x0
  __int64 v20; // [xsp+0h] [xbp-40h]

  if ( (byte_49FA4FD & 1) == 0 )
  {
    sub_1B640C8(&TitleInfoEventLeagueVsStatusComponent_TypeInfo, callFinished);
    sub_1B640C8(&Method_UITweener_Begin_TweenAlpha___, v5);
    sub_1B640C8(&Method_UITweener_Begin_TweenPosition___, v6);
    byte_49FA4FD = 1;
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
                   (const MethodInfo_2EEADCC *)Method_UITweener_Begin_TweenPosition___);
  v20 = *(_QWORD *)&this->fields.inPos.fields.x;
  if ( !Root )
    goto LABEL_9;
  v11 = Root;
  *((_DWORD *)Root + 34) = LODWORD(this->fields.inPos.fields.z);
  *((_QWORD *)Root + 16) = v20;
  z = this->fields.outPos.fields.z;
  v13 = *(_QWORD *)&this->fields.outPos.fields.x;
  *((_DWORD *)Root + 8) = 2;
  *((float *)Root + 37) = z;
  *(_QWORD *)(Root + 140) = v13;
  v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  *((_QWORD *)v11 + 10) = v14;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v11 + 80), (int32_t)v14, v15, v16);
  *((_QWORD *)v11 + 11) = callFinished;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v11 + 88), (int32_t)callFinished, v17, v18);
  Root = (char *)this->fields.Root;
  if ( !Root
    || (v19 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Root, 0LL),
        (Root = (char *)UITweener__Begin_object_(
                          v19,
                          TitleInfoEventLeagueVsStatusComponent_TypeInfo->static_fields->FRAME_ANIM_DURATION,
                          (const MethodInfo_2EEADCC *)Method_UITweener_Begin_TweenAlpha___)) == 0LL) )
  {
LABEL_9:
    sub_1B64324(Root);
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

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B64324(0LL);
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
  float v10; // [xsp+0h] [xbp-30h]

  if ( (byte_49FA4F9 & 1) == 0 )
  {
    sub_1B640C8(&TitleInfoEventLeagueVsStatusComponent_TypeInfo, method);
    sub_1B640C8(&StringLiteral_6019/*"EntryAnim"*/, v3);
    byte_49FA4F9 = 1;
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
    sub_1B64324(transform);
  }
  (*(void (__fastcall **)(UnityEngine_Transform_o *, Il2CppClass *, float))&transform->klass[1]._1.this_arg.bits)(
    transform,
    transform->klass[1]._1.element_class,
    0.0);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6019/*"EntryAnim"*/,
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
  __int64 v6; // x1
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v8; // x2
  float v9; // s1
  TitleInfoEventLeagueVsStatusComponent_c *v10; // x0
  float32x2_t *static_fields; // x8
  float32x2_t v12; // d0
  float v13; // s2
  float v14; // [xsp+0h] [xbp-30h]

  if ( (byte_49FA4FA & 1) == 0 )
  {
    sub_1B640C8(&TitleInfoEventLeagueVsStatusComponent_TypeInfo, cb);
    sub_1B640C8(&StringLiteral_2370/*"AnimFrameOutEnd"*/, v6);
    byte_49FA4FA = 1;
  }
  this->fields.clearAnimCallBack = cb;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.clearAnimCallBack, (int32_t)cb, (int32_t)method, v3);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_1B64324(0LL);
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
  TitleInfoEventLeagueVsStatusComponent__FrameOut(this, (System_String_o *)StringLiteral_2370/*"AnimFrameOutEnd"*/, v8);
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
  Il2CppObject *MasterData_object; // x24
  Il2CppObject *v25; // x22
  struct UIWidget_o *Root; // x8
  unsigned __int8 v27; // w25
  Il2CppObject *v28; // x23
  int64_t Time; // x26
  __int64 v30; // x1
  struct System_Int32_array *v31; // x8
  unsigned __int64 v32; // x28
  __int64 v33; // x26
  unsigned __int64 max_length; // x9
  struct System_Int32_array *group1; // x8
  int32_t id; // w2
  int32_t v37; // w3
  struct System_Int32_array *group2; // x8
  float v39; // s0
  struct System_Int32_array *v40; // x8
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
  UISprite_o *statusName; // x21
  System_String_o *v58; // x22
  UISprite_o *title; // x21
  Il2CppObject *v60; // x0
  System_String_o *v61; // x0
  UISprite_o *backGround; // x20
  Il2CppObject *v63; // x0
  System_String_o *v64; // x0
  unsigned __int64 v65; // x24
  Il2CppObject *v66; // x0
  struct System_Int32_array *v67; // x8
  int32_t v68; // [xsp+8h] [xbp-58h] BYREF
  int32_t v69; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_49FA4F8 & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, eventPointEntity);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventPointGroupMaster___, v7);
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v8);
    sub_1B640C8(&Method_DataManager_GetMasterData_TotalEventPointMaster___, v9);
    sub_1B640C8(&int_TypeInfo, v10);
    sub_1B640C8(&NetworkManager_TypeInfo, v11);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1B640C8(&StringLiteral_16056/*"_01"*/, v13);
    sub_1B640C8(&StringLiteral_16058/*"_03"*/, v14);
    sub_1B640C8(&StringLiteral_16059/*"_04"*/, v15);
    sub_1B640C8(&StringLiteral_16987/*"balance"*/, v16);
    sub_1B640C8(&StringLiteral_19212/*"event_vs_status_bg_"*/, v17);
    sub_1B640C8(&StringLiteral_19211/*"event_vs_status_"*/, v18);
    sub_1B640C8(&StringLiteral_16060/*"_05"*/, v19);
    sub_1B640C8(&StringLiteral_1/*""*/, v20);
    sub_1B640C8(&StringLiteral_16057/*"_02"*/, v21);
    sub_1B640C8(&StringLiteral_19213/*"event_vs_status_name_"*/, v22);
    byte_49FA4F8 = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_TotalEventPointMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  v25 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventPointGroupMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
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
  v27 = Instance;
  ((void (__fastcall *)(struct UIWidget_o *, Il2CppMethodPointer, float))Root->klass->vtable._8_set_alpha.method)(
    this->fields.Root,
    Root->klass->vtable._9_CalculateFinalAlpha.methodPtr,
    0.0);
  v28 = (Il2CppObject *)StringLiteral_1/*""*/;
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
    v37 = group1->m_Items[1];
    if ( (v27 & (eventPointEntity->fields.endedAt <= Time)) != 0 )
    {
      Instance = TotalEventPointMaster__IsGroupWin((TotalEventPointMaster_o *)MasterData_object, eventId, id, v37, 0LL);
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
      if ( v25 )
      {
        Instance = (__int64)EventPointGroupMaster__getEntity(
                              (EventPointGroupMaster_o *)v25,
                              eventId,
                              group2->m_Items[1],
                              0LL);
        if ( Instance )
        {
          v50 = *(_DWORD *)(Instance + 32);
          goto LABEL_44;
        }
      }
    }
    else
    {
      Instance = TotalEventPointMaster__GetPoint((TotalEventPointMaster_o *)MasterData_object, eventId, id, v37, 0LL);
      v42 = eventPointEntity->fields.group2;
      if ( !v42 )
        goto LABEL_18;
      if ( !v42->max_length )
        goto LABEL_88;
      v43 = Instance;
      Instance = TotalEventPointMaster__GetPoint(
                   (TotalEventPointMaster_o *)MasterData_object,
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
            goto LABEL_18;
        }
        else
        {
          v53 = eventPointEntity->fields.group1;
          if ( !v53 )
            goto LABEL_18;
        }
        if ( !v53->max_length )
          goto LABEL_88;
        if ( v25 )
        {
          Instance = (__int64)EventPointGroupMaster__getEntity(
                                (EventPointGroupMaster_o *)v25,
                                eventId,
                                v53->m_Items[1],
                                0LL);
          if ( Instance )
          {
            v41 = *(_DWORD *)(Instance + 32);
            goto LABEL_60;
          }
        }
      }
      else
      {
        if ( v47 < 0.15 )
        {
          v28 = (Il2CppObject *)StringLiteral_16987/*"balance"*/;
          goto LABEL_72;
        }
        if ( v43 <= Instance )
        {
          v55 = eventPointEntity->fields.group2;
          if ( !v55 )
            goto LABEL_18;
        }
        else
        {
          v55 = eventPointEntity->fields.group1;
          if ( !v55 )
            goto LABEL_18;
        }
        if ( !v55->max_length )
          goto LABEL_88;
        if ( v25 )
        {
          Instance = (__int64)EventPointGroupMaster__getEntity(
                                (EventPointGroupMaster_o *)v25,
                                eventId,
                                v55->m_Items[1],
                                0LL);
          if ( Instance )
          {
            v49 = *(_DWORD *)(Instance + 32);
            goto LABEL_70;
          }
        }
      }
    }
LABEL_18:
    sub_1B64324(Instance);
  }
  v31 = eventPointEntity->fields.group1;
  if ( !v31 )
    goto LABEL_18;
  v32 = 0LL;
  v33 = 0LL;
  while ( 1 )
  {
    max_length = v31->max_length;
    if ( (__int64)v32 >= (int)max_length )
      break;
    if ( v32 >= max_length )
      goto LABEL_88;
    if ( MasterData_object )
    {
      Instance = TotalEventPointMaster__GetPoint(
                   (TotalEventPointMaster_o *)MasterData_object,
                   eventId,
                   eventPointEntity->fields.id,
                   v31->m_Items[v32 + 1],
                   0LL);
      v31 = eventPointEntity->fields.group1;
      v33 += Instance;
      ++v32;
      if ( v31 )
        continue;
    }
    goto LABEL_18;
  }
  v39 = 1.0 - (double)v33 / (double)eventPointEntity->fields.normaTotalPoint;
  if ( v39 >= 0.75 )
  {
    v48 = eventPointEntity->fields.group2;
    if ( !v48 )
      goto LABEL_18;
    if ( !v48->max_length )
      goto LABEL_88;
    v49 = v48->m_Items[1];
LABEL_70:
    v69 = v49;
    v51 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v69);
    v52 = &StringLiteral_16056/*"_01"*/;
    goto LABEL_71;
  }
  if ( v39 >= 0.5 )
  {
    v40 = eventPointEntity->fields.group2;
    if ( v40 )
    {
      if ( v40->max_length )
      {
        v41 = v40->m_Items[1];
LABEL_60:
        v69 = v41;
        v51 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v69);
        v52 = &StringLiteral_16057/*"_02"*/;
        goto LABEL_71;
      }
LABEL_88:
      sub_1B6432C(Instance, v30);
    }
    goto LABEL_18;
  }
  if ( v39 >= 0.25 )
  {
    v54 = eventPointEntity->fields.group2;
    if ( !v54 )
      goto LABEL_18;
    if ( !v54->max_length )
      goto LABEL_88;
    v50 = v54->m_Items[1];
LABEL_44:
    v69 = v50;
    v51 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v69);
    v52 = &StringLiteral_16058/*"_03"*/;
LABEL_71:
    v28 = (Il2CppObject *)System_String__Concat(v51, (Il2CppObject *)*v52, 0LL);
    goto LABEL_72;
  }
  if ( v39 >= 0.1 )
  {
    v56 = eventPointEntity->fields.group2;
    if ( v56 )
    {
      if ( v56->max_length )
      {
        v69 = v56->m_Items[1];
        v51 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v69);
        v52 = &StringLiteral_16059/*"_04"*/;
        goto LABEL_71;
      }
      goto LABEL_88;
    }
    goto LABEL_18;
  }
  if ( v39 < 0.1 && v39 > 0.0 || !(v27 & 1 | (v39 > 0.0)) )
  {
    v67 = eventPointEntity->fields.group2;
    if ( v67 )
    {
      if ( v67->max_length )
      {
        v69 = v67->m_Items[1];
        v51 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v69);
        v52 = &StringLiteral_16060/*"_05"*/;
        goto LABEL_71;
      }
      goto LABEL_88;
    }
    goto LABEL_18;
  }
  if ( (int)max_length >= 1 )
  {
    v65 = 0LL;
    while ( v65 < (unsigned int)max_length )
    {
      if ( !v25 )
        goto LABEL_18;
      Instance = (__int64)EventPointGroupMaster__getEntity(
                            (EventPointGroupMaster_o *)v25,
                            eventId,
                            v31->m_Items[v65 + 1],
                            0LL);
      if ( !Instance )
        goto LABEL_18;
      v69 = *(_DWORD *)(Instance + 32);
      v66 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v69);
      Instance = (__int64)System_String__Concat(v28, v66, 0LL);
      v31 = eventPointEntity->fields.group1;
      if ( !v31 )
        goto LABEL_18;
      LODWORD(max_length) = v31->max_length;
      ++v65;
      v28 = (Il2CppObject *)Instance;
      if ( (__int64)v65 >= (int)max_length )
        goto LABEL_72;
    }
    goto LABEL_88;
  }
LABEL_72:
  statusName = this->fields.statusName;
  v58 = System_String__Concat_61375396((System_String_o *)StringLiteral_19211/*"event_vs_status_"*/, (System_String_o *)v28, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(statusName, v58, 0LL);
  title = this->fields.title;
  v69 = eventPointEntity->fields.id;
  v60 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v69);
  v61 = System_String__Concat((Il2CppObject *)StringLiteral_19213/*"event_vs_status_name_"*/, v60, 0LL);
  AtlasManager__SetEventUI(title, v61, 0LL);
  backGround = this->fields.backGround;
  v68 = eventPointEntity->fields.id;
  v63 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v68);
  v64 = System_String__Concat((Il2CppObject *)StringLiteral_19212/*"event_vs_status_bg_"*/, v63, 0LL);
  AtlasManager__SetEventUI(backGround, v64, 0LL);
}