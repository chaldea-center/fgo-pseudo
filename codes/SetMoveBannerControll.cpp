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
    sub_B2C434(lfBtn, method);
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
    sub_B2C434(transform, v4);
  v6 = 0LL;
  while ( 1 )
  {
    max_length = bannerList->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
    {
      v11 = sub_B2C460(transform);
      sub_B2C400(v11, 0LL);
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
    sub_B2C434(transform, v4);
  v6 = 0LL;
  while ( 1 )
  {
    max_length = bannerList->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
    {
      v11 = sub_B2C460(transform);
      sub_B2C400(v11, 0LL);
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
    v8 = sub_B2C460(this);
    sub_B2C400(v8, 0LL);
  }
  v5 = &bannerList->obj.klass + idx;
  v6 = (UnityEngine_GameObject_o *)v5[4];
  if ( !v6
    || (this = (SetMoveBannerControll_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v5[4], 0LL)) == 0LL )
  {
LABEL_6:
    sub_B2C434(this, method);
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
      sub_B2C434(lfBtn, *(_QWORD *)&cnt);
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct TweenPosition_o *tp; // x8
  SetMoveBannerControll_o **p_tp; // x21
  System_Collections_Generic_List_EventDelegate__o *onFinished; // x22
  EventDelegate_Callback_o *v15; // x23
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  UnityEngine_Vector3_o v23; // 0:s1.4,4:s2.4,8:s3.4

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  v8 = this;
  if ( (byte_418B973 & 1) == 0 )
  {
    sub_B2C35C(&EventDelegate_Callback_TypeInfo, target);
    sub_B2C35C(&EventDelegate_TypeInfo, v9);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, v10);
    this = (SetMoveBannerControll_o *)sub_B2C35C(&Method_SetMoveBannerControll_OnMoveFinish__, v11);
    byte_418B973 = 1;
  }
  p_tp = (SetMoveBannerControll_o **)&v8->fields.tp;
  tp = v8->fields.tp;
  if ( !tp )
    goto LABEL_10;
  onFinished = tp->fields.onFinished;
  v15 = (EventDelegate_Callback_o *)sub_B2C42C(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v15, (Il2CppObject *)v8, Method_SetMoveBannerControll_OnMoveFinish__, 0LL);
  if ( (BYTE3(EventDelegate_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventDelegate_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  }
  this = (SetMoveBannerControll_o *)EventDelegate__Set_29727552(onFinished, v15, 0LL);
  if ( !target
    || (Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                           target,
                                                           (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___),
        *p_tp = (SetMoveBannerControll_o *)Component_srcLineSprite,
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v8->fields.tp,
          Component_srcLineSprite,
          v17,
          v18,
          v19,
          v20,
          v21,
          v22),
        (this = *p_tp) == 0LL) )
  {
LABEL_10:
    sub_B2C434(this, target);
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL);
  v23.fields.x = x;
  v23.fields.y = y;
  v23.fields.z = z;
  TweenPosition__Begin(target, v8->fields.moveSpeed, v23, 0LL);
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
  if ( (byte_418B974 & 1) == 0 )
  {
    this = (SetMoveBannerControll_o *)sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, method);
    byte_418B974 = 1;
  }
  bannerList = v2->fields.bannerList;
  if ( !bannerList )
LABEL_19:
    sub_B2C434(this, method);
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
        v22 = sub_B2C460(this);
        sub_B2C400(v22, 0LL);
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
                                                         (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
      v2->fields.tp = (struct TweenPosition_o *)Component_srcLineSprite;
      sub_B2C2F8((BattleServantConfConponent_o *)&v2->fields.tp, Component_srcLineSprite, v12, v13, v14, v15, v16, v17);
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
  if ( (byte_418B975 & 1) == 0 )
  {
    this = (SetMoveBannerControll_o *)sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, method);
    byte_418B975 = 1;
  }
  bannerList = v2->fields.bannerList;
  if ( !bannerList )
LABEL_19:
    sub_B2C434(this, method);
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
        v22 = sub_B2C460(this);
        sub_B2C400(v22, 0LL);
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
                                                         (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
      v2->fields.tp = (struct TweenPosition_o *)Component_srcLineSprite;
      sub_B2C2F8((BattleServantConfConponent_o *)&v2->fields.tp, Component_srcLineSprite, v12, v13, v14, v15, v16, v17);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  void *bannerPanel; // x0
  struct SetMoveBannerControll___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__15_0; // x21
  Il2CppObject *v17; // x22
  struct SetMoveBannerControll___c_StaticFields *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  int32_t size; // w22
  signed __int64 v26; // x20
  struct UnityEngine_GameObject_array *v27; // x0
  struct UnityEngine_GameObject_array **p_bannerList; // x21
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  const MethodInfo *v35; // x2
  unsigned __int64 v36; // x25
  struct TweenPosition_o **p_tp; // x22
  __int64 v38; // x26
  UnityEngine_GameObject_o *bannerPb; // x23
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v41; // x23
  int v42; // s11
  float x; // s10
  float y; // s8
  float z; // s9
  float v46; // s11
  UnityEngine_Transform_o *v47; // x24
  int v48; // s0
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  struct TweenPosition_o *v58; // x24
  float v59; // s0
  float v60; // s1
  float v61; // s2
  unsigned int *v62; // x24
  __int64 v63; // x0
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  __int64 v70; // x0
  __int64 v71; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v73; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_418B972 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Comparison_EventEntity___ctor__, eventDataList);
    sub_B2C35C(&System_Comparison_EventEntity__TypeInfo, v5);
    sub_B2C35C(&UnityEngine_GameObject___TypeInfo, v6);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, v7);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventEntity__Sort__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventEntity__get_Count__, v10);
    sub_B2C35C(&Method_SetMoveBannerControll___c__setBanner_b__15_0__, v11);
    sub_B2C35C(&SetMoveBannerControll___c_TypeInfo, v12);
    sub_B2C35C(&StringLiteral_16602/*"banner_event_002"*/, v13);
    byte_418B972 = 1;
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
    v17 = (Il2CppObject *)static_fields->__9;
    _9__15_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_EventEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__15_0,
      v17,
      Method_SetMoveBannerControll___c__setBanner_b__15_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_EventEntity___ctor__);
    v18 = SetMoveBannerControll___c_TypeInfo->static_fields;
    v18->__9__15_0 = (struct System_Comparison_EventEntity__o *)_9__15_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v18->__9__15_0,
      (System_Int32_array **)_9__15_0,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
  }
  if ( !eventDataList )
    goto LABEL_36;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)eventDataList,
    (System_Comparison_T__o *)_9__15_0,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_EventEntity__Sort__);
  size = eventDataList->fields._size;
  v26 = size;
  v27 = (struct UnityEngine_GameObject_array *)sub_B2C374(UnityEngine_GameObject___TypeInfo, (unsigned int)size);
  this->fields.bannerList = v27;
  p_bannerList = &this->fields.bannerList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.bannerList,
    (System_Int32_array **)v27,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  if ( size >= 1 )
  {
    v36 = 0LL;
    p_tp = &this->fields.tp;
    v38 = 8LL;
    while ( 1 )
    {
      bannerPanel = this->fields.bannerPanel;
      if ( !bannerPanel )
        break;
      bannerPb = this->fields.bannerPb;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)bannerPanel, 0LL);
      bannerPanel = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, bannerPb, transform, 0LL, 0LL);
      v41 = (UnityEngine_GameObject_o *)bannerPanel;
      if ( (v36 & 1) != 0 )
      {
        if ( !bannerPanel )
          break;
        bannerPanel = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                        (UnityEngine_GameObject_o *)bannerPanel,
                        (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        if ( !bannerPanel )
          break;
        UISprite__set_spriteName((UISprite_o *)bannerPanel, (System_String_o *)StringLiteral_16602/*"banner_event_002"*/, 0LL);
      }
      else if ( !bannerPanel )
      {
        break;
      }
      bannerPanel = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                      v41,
                      (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( !bannerPanel )
        break;
      if ( !this->fields.bannerPanel )
        break;
      v42 = *((_DWORD *)bannerPanel + 40);
      bannerPanel = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.bannerPanel, 0LL);
      if ( !bannerPanel )
        break;
      localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)bannerPanel, 0LL);
      x = localPosition.fields.x;
      y = localPosition.fields.y;
      z = localPosition.fields.z;
      bannerPanel = UnityEngine_GameObject__get_transform(v41, 0LL);
      if ( !bannerPanel )
        break;
      v46 = (float)v42;
      v73.fields.x = (float)((float)(int)v36 * v46) + x;
      v73.fields.y = y;
      v73.fields.z = z;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)bannerPanel, v73, 0LL);
      v47 = UnityEngine_GameObject__get_transform(v41, 0LL);
      *(UnityEngine_Vector3_o *)&v48 = UnityEngine_Vector3__get_one(0LL);
      if ( !v47 )
        break;
      UnityEngine_Transform__set_localScale(v47, *(UnityEngine_Vector3_o *)&v48, 0LL);
      Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         v41,
                                                         (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
      *p_tp = (struct TweenPosition_o *)Component_srcLineSprite;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.tp,
        Component_srcLineSprite,
        v52,
        v53,
        v54,
        v55,
        v56,
        v57);
      bannerPanel = *p_tp;
      if ( !*p_tp )
        break;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)bannerPanel, 0, 0LL);
      v58 = *p_tp;
      bannerPanel = UnityEngine_GameObject__get_transform(v41, 0LL);
      if ( !bannerPanel )
        break;
      *(UnityEngine_Vector3_o *)&v59 = UnityEngine_Transform__get_localPosition(
                                         (UnityEngine_Transform_o *)bannerPanel,
                                         0LL);
      if ( !v58 )
        break;
      v58->fields.from.fields.x = v59;
      v58->fields.from.fields.y = v60;
      v58->fields.from.fields.z = v61;
      v62 = (unsigned int *)*p_bannerList;
      if ( !*p_bannerList )
        break;
      v63 = sub_B2C41C(v41, *(_QWORD *)(*(_QWORD *)v62 + 64LL));
      if ( !v63 )
      {
        v70 = sub_B2C454(0LL);
        sub_B2C400(v70, 0LL);
      }
      if ( v36 >= v62[6] )
      {
        v71 = sub_B2C460(v63);
        sub_B2C400(v71, 0LL);
      }
      *(_QWORD *)&v62[v38] = v41;
      sub_B2C2F8((BattleServantConfConponent_o *)&v62[v38], (System_Int32_array **)v41, v64, v65, v66, v67, v68, v69);
      ++v36;
      v38 += 2LL;
      if ( (__int64)v36 >= v26 )
        goto LABEL_35;
    }
LABEL_36:
    sub_B2C434(bannerPanel, eventDataList);
  }
  v46 = 0.0;
LABEL_35:
  this->fields.moveLeftPos = -v46;
  this->fields.moveRightPos = v46;
  SetMoveBannerControll__initEnableBtn(this, v26, v35);
}


void __fastcall SetMoveBannerControll__setEnabledBtn(SetMoveBannerControll_o *this, const MethodInfo *method)
{
  UnityEngine_Behaviour_o *lfBtn; // x0

  lfBtn = (UnityEngine_Behaviour_o *)this->fields.lfBtn;
  if ( !lfBtn
    || (UnityEngine_Behaviour__set_enabled(lfBtn, 0, 0LL), (lfBtn = (UnityEngine_Behaviour_o *)this->fields.rgBtn) == 0LL) )
  {
    sub_B2C434(lfBtn, method);
  }
  UnityEngine_Behaviour__set_enabled(lfBtn, 0, 0LL);
}


void __fastcall SetMoveBannerControll___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct SetMoveBannerControll___c_StaticFields *static_fields; // x0

  if ( (byte_418543C & 1) == 0 )
  {
    sub_B2C35C(&SetMoveBannerControll___c_TypeInfo, v1);
    byte_418543C = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(SetMoveBannerControll___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = SetMoveBannerControll___c_TypeInfo->static_fields;
  static_fields->__9 = (struct SetMoveBannerControll___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, a);
  return b->fields.bannerPriority - a->fields.bannerPriority;
}