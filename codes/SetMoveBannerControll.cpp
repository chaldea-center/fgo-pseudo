void __fastcall SetMoveBannerControll___ctor(SetMoveBannerControll_o *this, const MethodInfo *method)
{
  this->fields.moveSpeed = 0.2;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall SetMoveBannerControll__OnClickLeftBtn(SetMoveBannerControll_o *this, const MethodInfo *method)
{
  this->fields.isClickLf = 1;
  SetMoveBannerControll__buildMoveBanner(this, method);
}


void __fastcall SetMoveBannerControll__OnClickRightBtn(SetMoveBannerControll_o *this, const MethodInfo *method)
{
  this->fields.isClickRh = 1;
  SetMoveBannerControll__buildMoveBanner(this, method);
}


void __fastcall SetMoveBannerControll__OnMoveFinish(SetMoveBannerControll_o *this, const MethodInfo *method)
{
  UnityEngine_Behaviour_o *lfBtn; // x0

  lfBtn = (UnityEngine_Behaviour_o *)this->fields.lfBtn;
  if ( !lfBtn )
    goto LABEL_9;
  if ( (((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, const char *))lfBtn->klass[1]._1.gc_desc)(
          lfBtn,
          lfBtn->klass[1]._1.name) & 1) == 0 )
  {
    lfBtn = (UnityEngine_Behaviour_o *)this->fields.lfBtn;
    if ( !lfBtn )
      goto LABEL_9;
    UnityEngine_Behaviour__set_enabled(lfBtn, 1, 0LL);
  }
  lfBtn = (UnityEngine_Behaviour_o *)this->fields.rgBtn;
  if ( !lfBtn )
    goto LABEL_9;
  if ( (((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, const char *))lfBtn->klass[1]._1.gc_desc)(
          lfBtn,
          lfBtn->klass[1]._1.name) & 1) != 0 )
    return;
  lfBtn = (UnityEngine_Behaviour_o *)this->fields.rgBtn;
  if ( !lfBtn )
LABEL_9:
    sub_B7769C(lfBtn, method);
  UnityEngine_Behaviour__set_enabled(lfBtn, 1, 0LL);
}


void __fastcall SetMoveBannerControll__OnMoveLeft(SetMoveBannerControll_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  struct UnityEngine_GameObject_array *bannerList; // x8
  __int64 v6; // x21
  int max_length; // w9
  Il2CppClass **v8; // x8
  UnityEngine_GameObject_o *v9; // x20
  const MethodInfo *v10; // x2
  __int64 v11; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  SetMoveBannerControll__rePositionLeft(this, method);
  bannerList = this->fields.bannerList;
  if ( !bannerList )
LABEL_8:
    sub_B7769C(transform, v4);
  v6 = 0LL;
  while ( 1 )
  {
    max_length = bannerList->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
    {
      v11 = sub_B776C8(transform);
      sub_B77668(v11, 0LL);
    }
    v8 = &bannerList->obj.klass + v6;
    v9 = (UnityEngine_GameObject_o *)v8[4];
    if ( v9 )
    {
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v8[4], 0LL);
      if ( transform )
      {
        localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
        localPosition.fields.x = localPosition.fields.x + this->fields.moveLeftPos;
        SetMoveBannerControll__moveBanner(this, v9, localPosition, v10);
        bannerList = this->fields.bannerList;
        ++v6;
        if ( bannerList )
          continue;
      }
    }
    goto LABEL_8;
  }
  this->fields.isClickLf = 0;
}


void __fastcall SetMoveBannerControll__OnMoveRight(SetMoveBannerControll_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  struct UnityEngine_GameObject_array *bannerList; // x8
  __int64 v6; // x21
  int max_length; // w9
  Il2CppClass **v8; // x8
  UnityEngine_GameObject_o *v9; // x20
  const MethodInfo *v10; // x2
  __int64 v11; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  SetMoveBannerControll__rePositionRight(this, method);
  bannerList = this->fields.bannerList;
  if ( !bannerList )
LABEL_8:
    sub_B7769C(transform, v4);
  v6 = 0LL;
  while ( 1 )
  {
    max_length = bannerList->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
    {
      v11 = sub_B776C8(transform);
      sub_B77668(v11, 0LL);
    }
    v8 = &bannerList->obj.klass + v6;
    v9 = (UnityEngine_GameObject_o *)v8[4];
    if ( v9 )
    {
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v8[4], 0LL);
      if ( transform )
      {
        localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
        localPosition.fields.x = localPosition.fields.x + this->fields.moveRightPos;
        SetMoveBannerControll__moveBanner(this, v9, localPosition, v10);
        bannerList = this->fields.bannerList;
        ++v6;
        if ( bannerList )
          continue;
      }
    }
    goto LABEL_8;
  }
  this->fields.isClickRh = 0;
}


void __fastcall SetMoveBannerControll__autoMoveLeft(SetMoveBannerControll_o *this, const MethodInfo *method)
{
  struct UnityEngine_GameObject_array *bannerList; // x8
  __int64 idx; // x9
  SetMoveBannerControll_o *v4; // x19
  Il2CppClass **v5; // x8
  UnityEngine_GameObject_o *v6; // x20
  const MethodInfo *v7; // x2
  __int64 v8; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  bannerList = this->fields.bannerList;
  if ( !bannerList )
    goto LABEL_6;
  idx = this->fields.idx;
  v4 = this;
  if ( (unsigned int)idx >= bannerList->max_length )
  {
    v8 = sub_B776C8(this);
    sub_B77668(v8, 0LL);
  }
  v5 = &bannerList->obj.klass + idx;
  v6 = (UnityEngine_GameObject_o *)v5[4];
  if ( !v6
    || (this = (SetMoveBannerControll_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v5[4], 0LL)) == 0LL )
  {
LABEL_6:
    sub_B7769C(this, method);
  }
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  localPosition.fields.x = localPosition.fields.x + v4->fields.moveLeftPos;
  SetMoveBannerControll__moveBanner(v4, v6, localPosition, v7);
}


void __fastcall SetMoveBannerControll__buildMoveBanner(SetMoveBannerControll_o *this, const MethodInfo *method)
{
  if ( this->fields.isClickLf )
    SetMoveBannerControll__OnMoveLeft(this, method);
  if ( this->fields.isClickRh )
    SetMoveBannerControll__OnMoveRight(this, method);
  SetMoveBannerControll__setEnabledBtn(this, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SetMoveBannerControll__initEnableBtn(
        SetMoveBannerControll_o *this,
        int32_t cnt,
        const MethodInfo *method)
{
  UnityEngine_Component_o *lfBtn; // x0

  if ( cnt <= 1 )
  {
    lfBtn = (UnityEngine_Component_o *)this->fields.lfBtn;
    if ( !lfBtn
      || (lfBtn = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(lfBtn, 0LL)) == 0LL
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lfBtn, 0, 0LL),
          (lfBtn = (UnityEngine_Component_o *)this->fields.rgBtn) == 0LL)
      || (lfBtn = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(lfBtn, 0LL)) == 0LL )
    {
      sub_B7769C(lfBtn, *(_QWORD *)&cnt);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lfBtn, 0, 0LL);
  }
}


void __fastcall SetMoveBannerControll__initSetBanner(
        SetMoveBannerControll_o *this,
        System_Int32_array *bannerIds,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SetMoveBannerControll__moveBanner(
        SetMoveBannerControll_o *this,
        UnityEngine_GameObject_o *target,
        UnityEngine_Vector3_o pos,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  SetMoveBannerControll_o *v8; // x19
  struct TweenPosition_o *tp; // x8
  SetMoveBannerControll_o **p_tp; // x21
  System_Collections_Generic_List_EventDelegate__o *onFinished; // x22
  EventDelegate_Callback_o *v12; // x23
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  UnityEngine_Vector3_o v20; // 0:s1.4,4:s2.4,8:s3.4

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  v8 = this;
  if ( (byte_438DA7C & 1) == 0 )
  {
    sub_B775C4(&EventDelegate_Callback_TypeInfo);
    sub_B775C4(&EventDelegate_TypeInfo);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    this = (SetMoveBannerControll_o *)sub_B775C4(&Method_SetMoveBannerControll_OnMoveFinish__);
    byte_438DA7C = 1;
  }
  p_tp = (SetMoveBannerControll_o **)&v8->fields.tp;
  tp = v8->fields.tp;
  if ( !tp )
    goto LABEL_10;
  onFinished = tp->fields.onFinished;
  v12 = (EventDelegate_Callback_o *)sub_B77694(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v12, (Il2CppObject *)v8, Method_SetMoveBannerControll_OnMoveFinish__, 0LL);
  if ( (BYTE3(EventDelegate_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventDelegate_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  }
  this = (SetMoveBannerControll_o *)EventDelegate__Set_30349648(onFinished, v12, 0LL);
  if ( !target
    || (Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                           target,
                                                           (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___),
        *p_tp = (SetMoveBannerControll_o *)Component_srcLineSprite,
        sub_B77560(
          (BattleServantConfConponent_o *)&v8->fields.tp,
          Component_srcLineSprite,
          v14,
          v15,
          v16,
          v17,
          v18,
          v19),
        (this = *p_tp) == 0LL) )
  {
LABEL_10:
    sub_B7769C(this, target);
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL);
  v20.fields.x = x;
  v20.fields.y = y;
  v20.fields.z = z;
  TweenPosition__Begin(target, v8->fields.moveSpeed, v20, 0LL);
  ++v8->fields.idx;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SetMoveBannerControll__rePositionLeft(SetMoveBannerControll_o *this, const MethodInfo *method)
{
  SetMoveBannerControll_o *v2; // x19
  struct UnityEngine_GameObject_array *bannerList; // x8
  SetMoveBannerControll_o **p_tp; // x20
  __int64 v5; // x22
  int max_length; // w9
  unsigned int v7; // w21
  float v8; // s0
  int v9; // w9
  UnityEngine_GameObject_o *v10; // x21
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct TweenPosition_o *tp; // x24
  float v19; // s0
  float v20; // s1
  float v21; // s2
  __int64 v22; // x0
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_438DA7D & 1) == 0 )
  {
    this = (SetMoveBannerControll_o *)sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    byte_438DA7D = 1;
  }
  bannerList = v2->fields.bannerList;
  if ( !bannerList )
LABEL_19:
    sub_B7769C(this, method);
  p_tp = (SetMoveBannerControll_o **)&v2->fields.tp;
  v5 = 4LL;
  while ( 1 )
  {
    max_length = bannerList->max_length;
    v7 = v5 - 4;
    if ( (int)v5 - 4 >= max_length )
      break;
    if ( v7 >= max_length )
      goto LABEL_21;
    this = (SetMoveBannerControll_o *)*((_QWORD *)&bannerList->obj.klass + v5);
    if ( !this )
      goto LABEL_19;
    this = (SetMoveBannerControll_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
    if ( !this )
      goto LABEL_19;
    LODWORD(v8) = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
    bannerList = v2->fields.bannerList;
    if ( !bannerList )
      goto LABEL_19;
    v9 = bannerList->max_length;
    if ( v8 == (float)(v2->fields.moveLeftPos * (float)((float)v9 + -1.0)) )
    {
      if ( v7 >= v9 )
      {
LABEL_21:
        v22 = sub_B776C8(this);
        sub_B77668(v22, 0LL);
      }
      v10 = (UnityEngine_GameObject_o *)*((_QWORD *)&bannerList->obj.klass + v5);
      if ( !v10 )
        goto LABEL_19;
      this = (SetMoveBannerControll_o *)UnityEngine_GameObject__get_transform(
                                          *((UnityEngine_GameObject_o **)&bannerList->obj.klass + v5),
                                          0LL);
      if ( !this )
        goto LABEL_19;
      v23.fields.x = v2->fields.moveRightPos;
      v23.fields.y = 0.0;
      v23.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v23, 0LL);
      Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         v10,
                                                         (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
      v2->fields.tp = (struct TweenPosition_o *)Component_srcLineSprite;
      sub_B77560((BattleServantConfConponent_o *)&v2->fields.tp, Component_srcLineSprite, v12, v13, v14, v15, v16, v17);
      tp = v2->fields.tp;
      this = (SetMoveBannerControll_o *)UnityEngine_GameObject__get_transform(v10, 0LL);
      if ( !this )
        goto LABEL_19;
      *(UnityEngine_Vector3_o *)&v19 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
      if ( !tp )
        goto LABEL_19;
      tp->fields.from.fields.x = v19;
      tp->fields.from.fields.y = v20;
      tp->fields.from.fields.z = v21;
      this = *p_tp;
      if ( !*p_tp )
        goto LABEL_19;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
      bannerList = v2->fields.bannerList;
    }
    ++v5;
    if ( !bannerList )
      goto LABEL_19;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SetMoveBannerControll__rePositionRight(SetMoveBannerControll_o *this, const MethodInfo *method)
{
  SetMoveBannerControll_o *v2; // x19
  struct UnityEngine_GameObject_array *bannerList; // x8
  SetMoveBannerControll_o **p_tp; // x20
  __int64 v5; // x22
  int max_length; // w9
  unsigned int v7; // w21
  float v8; // s0
  int v9; // w9
  UnityEngine_GameObject_o *v10; // x21
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct TweenPosition_o *tp; // x24
  float v19; // s0
  float v20; // s1
  float v21; // s2
  __int64 v22; // x0
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_438DA7E & 1) == 0 )
  {
    this = (SetMoveBannerControll_o *)sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    byte_438DA7E = 1;
  }
  bannerList = v2->fields.bannerList;
  if ( !bannerList )
LABEL_19:
    sub_B7769C(this, method);
  p_tp = (SetMoveBannerControll_o **)&v2->fields.tp;
  v5 = 4LL;
  while ( 1 )
  {
    max_length = bannerList->max_length;
    v7 = v5 - 4;
    if ( (int)v5 - 4 >= max_length )
      break;
    if ( v7 >= max_length )
      goto LABEL_21;
    this = (SetMoveBannerControll_o *)*((_QWORD *)&bannerList->obj.klass + v5);
    if ( !this )
      goto LABEL_19;
    this = (SetMoveBannerControll_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
    if ( !this )
      goto LABEL_19;
    LODWORD(v8) = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
    bannerList = v2->fields.bannerList;
    if ( !bannerList )
      goto LABEL_19;
    v9 = bannerList->max_length;
    if ( v8 == (float)(v2->fields.moveRightPos * (float)((float)v9 + -1.0)) )
    {
      if ( v7 >= v9 )
      {
LABEL_21:
        v22 = sub_B776C8(this);
        sub_B77668(v22, 0LL);
      }
      v10 = (UnityEngine_GameObject_o *)*((_QWORD *)&bannerList->obj.klass + v5);
      if ( !v10 )
        goto LABEL_19;
      this = (SetMoveBannerControll_o *)UnityEngine_GameObject__get_transform(
                                          *((UnityEngine_GameObject_o **)&bannerList->obj.klass + v5),
                                          0LL);
      if ( !this )
        goto LABEL_19;
      v23.fields.x = v2->fields.moveLeftPos;
      v23.fields.y = 0.0;
      v23.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v23, 0LL);
      Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         v10,
                                                         (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
      v2->fields.tp = (struct TweenPosition_o *)Component_srcLineSprite;
      sub_B77560((BattleServantConfConponent_o *)&v2->fields.tp, Component_srcLineSprite, v12, v13, v14, v15, v16, v17);
      tp = v2->fields.tp;
      this = (SetMoveBannerControll_o *)UnityEngine_GameObject__get_transform(v10, 0LL);
      if ( !this )
        goto LABEL_19;
      *(UnityEngine_Vector3_o *)&v19 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
      if ( !tp )
        goto LABEL_19;
      tp->fields.from.fields.x = v19;
      tp->fields.from.fields.y = v20;
      tp->fields.from.fields.z = v21;
      this = *p_tp;
      if ( !*p_tp )
        goto LABEL_19;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
      bannerList = v2->fields.bannerList;
    }
    ++v5;
    if ( !bannerList )
      goto LABEL_19;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SetMoveBannerControll__setBanner(
        SetMoveBannerControll_o *this,
        System_Collections_Generic_List_EventEntity__o *eventDataList,
        const MethodInfo *method)
{
  void *bannerPanel; // x0
  struct SetMoveBannerControll___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__15_0; // x21
  Il2CppObject *v8; // x22
  struct SetMoveBannerControll___c_StaticFields *v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  int32_t size; // w22
  signed __int64 v17; // x20
  struct UnityEngine_GameObject_array *v18; // x0
  struct UnityEngine_GameObject_array **p_bannerList; // x21
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  const MethodInfo *v26; // x2
  unsigned __int64 v27; // x25
  struct TweenPosition_o **p_tp; // x22
  __int64 v29; // x26
  UnityEngine_GameObject_o *bannerPb; // x23
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v32; // x23
  int v33; // s11
  float x; // s10
  float y; // s8
  float z; // s9
  float v37; // s11
  UnityEngine_Transform_o *v38; // x24
  int v39; // s0
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  struct TweenPosition_o *v49; // x24
  float v50; // s0
  float v51; // s1
  float v52; // s2
  unsigned int *v53; // x24
  __int64 v54; // x0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  __int64 v61; // x0
  __int64 v62; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v64; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_438DA7B & 1) == 0 )
  {
    sub_B775C4(&Method_System_Comparison_EventEntity___ctor__);
    sub_B775C4(&System_Comparison_EventEntity__TypeInfo);
    sub_B775C4(&UnityEngine_GameObject___TypeInfo);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_B775C4(&Method_System_Collections_Generic_List_EventEntity__Sort__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventEntity__get_Count__);
    sub_B775C4(&Method_SetMoveBannerControll___c__setBanner_b__15_0__);
    sub_B775C4(&SetMoveBannerControll___c_TypeInfo);
    sub_B775C4(&StringLiteral_16928/*"banner_event_002"*/);
    byte_438DA7B = 1;
  }
  bannerPanel = SetMoveBannerControll___c_TypeInfo;
  if ( (BYTE3(SetMoveBannerControll___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SetMoveBannerControll___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SetMoveBannerControll___c_TypeInfo);
    bannerPanel = SetMoveBannerControll___c_TypeInfo;
  }
  static_fields = (struct SetMoveBannerControll___c_StaticFields *)*((_QWORD *)bannerPanel + 23);
  _9__15_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__15_0;
  if ( !_9__15_0 )
  {
    if ( (*((_BYTE *)bannerPanel + 307) & 4) != 0 && !*((_DWORD *)bannerPanel + 56) )
    {
      j_il2cpp_runtime_class_init_0(bannerPanel);
      static_fields = SetMoveBannerControll___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__15_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B77694(System_Comparison_EventEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__15_0,
      v8,
      Method_SetMoveBannerControll___c__setBanner_b__15_0__,
      (const MethodInfo_2B42C0C *)Method_System_Comparison_EventEntity___ctor__);
    v9 = SetMoveBannerControll___c_TypeInfo->static_fields;
    v9->__9__15_0 = (struct System_Comparison_EventEntity__o *)_9__15_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v9->__9__15_0,
      (System_Int32_array **)_9__15_0,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  if ( !eventDataList )
    goto LABEL_36;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)eventDataList,
    (System_Comparison_T__o *)_9__15_0,
    (const MethodInfo_3055374 *)Method_System_Collections_Generic_List_EventEntity__Sort__);
  size = eventDataList->fields._size;
  v17 = size;
  v18 = (struct UnityEngine_GameObject_array *)sub_B775DC(UnityEngine_GameObject___TypeInfo, (unsigned int)size);
  this->fields.bannerList = v18;
  p_bannerList = &this->fields.bannerList;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.bannerList,
    (System_Int32_array **)v18,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  if ( size >= 1 )
  {
    v27 = 0LL;
    p_tp = &this->fields.tp;
    v29 = 8LL;
    while ( 1 )
    {
      bannerPanel = this->fields.bannerPanel;
      if ( !bannerPanel )
        break;
      bannerPb = this->fields.bannerPb;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)bannerPanel, 0LL);
      bannerPanel = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, bannerPb, transform, 0LL, 0LL);
      v32 = (UnityEngine_GameObject_o *)bannerPanel;
      if ( (v27 & 1) != 0 )
      {
        if ( !bannerPanel )
          break;
        bannerPanel = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                        (UnityEngine_GameObject_o *)bannerPanel,
                        (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        if ( !bannerPanel )
          break;
        UISprite__set_spriteName((UISprite_o *)bannerPanel, (System_String_o *)StringLiteral_16928/*"banner_event_002"*/, 0LL);
      }
      else if ( !bannerPanel )
      {
        break;
      }
      bannerPanel = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                      v32,
                      (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( !bannerPanel )
        break;
      if ( !this->fields.bannerPanel )
        break;
      v33 = *((_DWORD *)bannerPanel + 40);
      bannerPanel = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.bannerPanel, 0LL);
      if ( !bannerPanel )
        break;
      localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)bannerPanel, 0LL);
      x = localPosition.fields.x;
      y = localPosition.fields.y;
      z = localPosition.fields.z;
      bannerPanel = UnityEngine_GameObject__get_transform(v32, 0LL);
      if ( !bannerPanel )
        break;
      v37 = (float)v33;
      v64.fields.x = (float)((float)(int)v27 * v37) + x;
      v64.fields.y = y;
      v64.fields.z = z;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)bannerPanel, v64, 0LL);
      v38 = UnityEngine_GameObject__get_transform(v32, 0LL);
      *(UnityEngine_Vector3_o *)&v39 = UnityEngine_Vector3__get_one(0LL);
      if ( !v38 )
        break;
      UnityEngine_Transform__set_localScale(v38, *(UnityEngine_Vector3_o *)&v39, 0LL);
      Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         v32,
                                                         (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
      *p_tp = (struct TweenPosition_o *)Component_srcLineSprite;
      sub_B77560(
        (BattleServantConfConponent_o *)&this->fields.tp,
        Component_srcLineSprite,
        v43,
        v44,
        v45,
        v46,
        v47,
        v48);
      bannerPanel = *p_tp;
      if ( !*p_tp )
        break;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)bannerPanel, 0, 0LL);
      v49 = *p_tp;
      bannerPanel = UnityEngine_GameObject__get_transform(v32, 0LL);
      if ( !bannerPanel )
        break;
      *(UnityEngine_Vector3_o *)&v50 = UnityEngine_Transform__get_localPosition(
                                         (UnityEngine_Transform_o *)bannerPanel,
                                         0LL);
      if ( !v49 )
        break;
      v49->fields.from.fields.x = v50;
      v49->fields.from.fields.y = v51;
      v49->fields.from.fields.z = v52;
      v53 = (unsigned int *)*p_bannerList;
      if ( !*p_bannerList )
        break;
      v54 = sub_B77684(v32, *(_QWORD *)(*(_QWORD *)v53 + 64LL));
      if ( !v54 )
      {
        v61 = sub_B776BC(0LL);
        sub_B77668(v61, 0LL);
      }
      if ( v27 >= v53[6] )
      {
        v62 = sub_B776C8(v54);
        sub_B77668(v62, 0LL);
      }
      *(_QWORD *)&v53[v29] = v32;
      sub_B77560((BattleServantConfConponent_o *)&v53[v29], (System_Int32_array **)v32, v55, v56, v57, v58, v59, v60);
      ++v27;
      v29 += 2LL;
      if ( (__int64)v27 >= v17 )
        goto LABEL_35;
    }
LABEL_36:
    sub_B7769C(bannerPanel, eventDataList);
  }
  v37 = 0.0;
LABEL_35:
  this->fields.moveLeftPos = -v37;
  this->fields.moveRightPos = v37;
  SetMoveBannerControll__initEnableBtn(this, v17, v26);
}


void __fastcall SetMoveBannerControll__setEnabledBtn(SetMoveBannerControll_o *this, const MethodInfo *method)
{
  UnityEngine_Behaviour_o *lfBtn; // x0

  lfBtn = (UnityEngine_Behaviour_o *)this->fields.lfBtn;
  if ( !lfBtn
    || (UnityEngine_Behaviour__set_enabled(lfBtn, 0, 0LL), (lfBtn = (UnityEngine_Behaviour_o *)this->fields.rgBtn) == 0LL) )
  {
    sub_B7769C(lfBtn, method);
  }
  UnityEngine_Behaviour__set_enabled(lfBtn, 0, 0LL);
}


void __fastcall SetMoveBannerControll___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_4388E6A & 1) == 0 )
  {
    sub_B775C4(&SetMoveBannerControll___c_TypeInfo);
    byte_4388E6A = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(SetMoveBannerControll___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)SetMoveBannerControll___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B77560(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
}


void __fastcall SetMoveBannerControll___c___ctor(SetMoveBannerControll___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall SetMoveBannerControll___c___setBanner_b__15_0(
        SetMoveBannerControll___c_o *this,
        EventEntity_o *a,
        EventEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B7769C(this, a);
  return b->fields.bannerPriority - a->fields.bannerPriority;
}