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
    sub_B5D69C(lfBtn, method);
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
    sub_B5D69C(transform, v4);
  v6 = 0LL;
  while ( 1 )
  {
    max_length = bannerList->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
    {
      v11 = sub_B5D6C8(transform);
      sub_B5D668(v11, 0LL);
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
    sub_B5D69C(transform, v4);
  v6 = 0LL;
  while ( 1 )
  {
    max_length = bannerList->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
    {
      v11 = sub_B5D6C8(transform);
      sub_B5D668(v11, 0LL);
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
    v8 = sub_B5D6C8(this);
    sub_B5D668(v8, 0LL);
  }
  v5 = &bannerList->obj.klass + idx;
  v6 = (UnityEngine_GameObject_o *)v5[4];
  if ( !v6
    || (this = (SetMoveBannerControll_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v5[4], 0LL)) == 0LL )
  {
LABEL_6:
    sub_B5D69C(this, method);
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
      sub_B5D69C(lfBtn, *(_QWORD *)&cnt);
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
  __int64 v4; // x3
  float z; // s8
  float y; // s9
  float x; // s10
  SetMoveBannerControll_o *v9; // x19
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  struct TweenPosition_o *tp; // x8
  SetMoveBannerControll_o **p_tp; // x21
  System_Collections_Generic_List_EventDelegate__o *onFinished; // x22
  EventDelegate_Callback_o *v22; // x23
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  UnityEngine_Vector3_o v30; // 0:s1.4,4:s2.4,8:s3.4

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  v9 = this;
  if ( (byte_42EBA80 & 1) == 0 )
  {
    sub_B5D5C4(&EventDelegate_Callback_TypeInfo, (_DWORD)target, (_DWORD)method, v4);
    sub_B5D5C4(&EventDelegate_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, v13, v14, v15);
    this = (SetMoveBannerControll_o *)sub_B5D5C4(&Method_SetMoveBannerControll_OnMoveFinish__, v16, v17, v18);
    byte_42EBA80 = 1;
  }
  p_tp = (SetMoveBannerControll_o **)&v9->fields.tp;
  tp = v9->fields.tp;
  if ( !tp )
    goto LABEL_10;
  onFinished = tp->fields.onFinished;
  v22 = (EventDelegate_Callback_o *)sub_B5D694(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v22, (Il2CppObject *)v9, Method_SetMoveBannerControll_OnMoveFinish__, 0LL);
  if ( (BYTE3(EventDelegate_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventDelegate_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  }
  this = (SetMoveBannerControll_o *)EventDelegate__Set_29826436(onFinished, v22, 0LL);
  if ( !target
    || (Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                           target,
                                                           (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___),
        *p_tp = (SetMoveBannerControll_o *)Component_srcLineSprite,
        sub_B5D560(
          (BattleServantConfConponent_o *)&v9->fields.tp,
          Component_srcLineSprite,
          v24,
          v25,
          v26,
          v27,
          v28,
          v29),
        (this = *p_tp) == 0LL) )
  {
LABEL_10:
    sub_B5D69C(this, target);
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL);
  v30.fields.x = x;
  v30.fields.y = y;
  v30.fields.z = z;
  TweenPosition__Begin(target, v9->fields.moveSpeed, v30, 0LL);
  ++v9->fields.idx;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SetMoveBannerControll__rePositionLeft(SetMoveBannerControll_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  SetMoveBannerControll_o *v4; // x19
  struct UnityEngine_GameObject_array *bannerList; // x8
  SetMoveBannerControll_o **p_tp; // x20
  __int64 v7; // x22
  int max_length; // w9
  unsigned int v9; // w21
  float v10; // s0
  int v11; // w9
  UnityEngine_GameObject_o *v12; // x21
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct TweenPosition_o *tp; // x24
  float v21; // s0
  float v22; // s1
  float v23; // s2
  __int64 v24; // x0
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_42EBA81 & 1) == 0 )
  {
    this = (SetMoveBannerControll_o *)sub_B5D5C4(
                                        &Method_UnityEngine_GameObject_GetComponent_TweenPosition___,
                                        (_DWORD)method,
                                        v2,
                                        v3);
    byte_42EBA81 = 1;
  }
  bannerList = v4->fields.bannerList;
  if ( !bannerList )
LABEL_19:
    sub_B5D69C(this, method);
  p_tp = (SetMoveBannerControll_o **)&v4->fields.tp;
  v7 = 4LL;
  while ( 1 )
  {
    max_length = bannerList->max_length;
    v9 = v7 - 4;
    if ( (int)v7 - 4 >= max_length )
      break;
    if ( v9 >= max_length )
      goto LABEL_21;
    this = (SetMoveBannerControll_o *)*((_QWORD *)&bannerList->obj.klass + v7);
    if ( !this )
      goto LABEL_19;
    this = (SetMoveBannerControll_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
    if ( !this )
      goto LABEL_19;
    LODWORD(v10) = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
    bannerList = v4->fields.bannerList;
    if ( !bannerList )
      goto LABEL_19;
    v11 = bannerList->max_length;
    if ( v10 == (float)(v4->fields.moveLeftPos * (float)((float)v11 + -1.0)) )
    {
      if ( v9 >= v11 )
      {
LABEL_21:
        v24 = sub_B5D6C8(this);
        sub_B5D668(v24, 0LL);
      }
      v12 = (UnityEngine_GameObject_o *)*((_QWORD *)&bannerList->obj.klass + v7);
      if ( !v12 )
        goto LABEL_19;
      this = (SetMoveBannerControll_o *)UnityEngine_GameObject__get_transform(
                                          *((UnityEngine_GameObject_o **)&bannerList->obj.klass + v7),
                                          0LL);
      if ( !this )
        goto LABEL_19;
      v25.fields.x = v4->fields.moveRightPos;
      v25.fields.y = 0.0;
      v25.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v25, 0LL);
      Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         v12,
                                                         (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
      v4->fields.tp = (struct TweenPosition_o *)Component_srcLineSprite;
      sub_B5D560((BattleServantConfConponent_o *)&v4->fields.tp, Component_srcLineSprite, v14, v15, v16, v17, v18, v19);
      tp = v4->fields.tp;
      this = (SetMoveBannerControll_o *)UnityEngine_GameObject__get_transform(v12, 0LL);
      if ( !this )
        goto LABEL_19;
      *(UnityEngine_Vector3_o *)&v21 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
      if ( !tp )
        goto LABEL_19;
      tp->fields.from.fields.x = v21;
      tp->fields.from.fields.y = v22;
      tp->fields.from.fields.z = v23;
      this = *p_tp;
      if ( !*p_tp )
        goto LABEL_19;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
      bannerList = v4->fields.bannerList;
    }
    ++v7;
    if ( !bannerList )
      goto LABEL_19;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SetMoveBannerControll__rePositionRight(SetMoveBannerControll_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  SetMoveBannerControll_o *v4; // x19
  struct UnityEngine_GameObject_array *bannerList; // x8
  SetMoveBannerControll_o **p_tp; // x20
  __int64 v7; // x22
  int max_length; // w9
  unsigned int v9; // w21
  float v10; // s0
  int v11; // w9
  UnityEngine_GameObject_o *v12; // x21
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct TweenPosition_o *tp; // x24
  float v21; // s0
  float v22; // s1
  float v23; // s2
  __int64 v24; // x0
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_42EBA82 & 1) == 0 )
  {
    this = (SetMoveBannerControll_o *)sub_B5D5C4(
                                        &Method_UnityEngine_GameObject_GetComponent_TweenPosition___,
                                        (_DWORD)method,
                                        v2,
                                        v3);
    byte_42EBA82 = 1;
  }
  bannerList = v4->fields.bannerList;
  if ( !bannerList )
LABEL_19:
    sub_B5D69C(this, method);
  p_tp = (SetMoveBannerControll_o **)&v4->fields.tp;
  v7 = 4LL;
  while ( 1 )
  {
    max_length = bannerList->max_length;
    v9 = v7 - 4;
    if ( (int)v7 - 4 >= max_length )
      break;
    if ( v9 >= max_length )
      goto LABEL_21;
    this = (SetMoveBannerControll_o *)*((_QWORD *)&bannerList->obj.klass + v7);
    if ( !this )
      goto LABEL_19;
    this = (SetMoveBannerControll_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
    if ( !this )
      goto LABEL_19;
    LODWORD(v10) = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
    bannerList = v4->fields.bannerList;
    if ( !bannerList )
      goto LABEL_19;
    v11 = bannerList->max_length;
    if ( v10 == (float)(v4->fields.moveRightPos * (float)((float)v11 + -1.0)) )
    {
      if ( v9 >= v11 )
      {
LABEL_21:
        v24 = sub_B5D6C8(this);
        sub_B5D668(v24, 0LL);
      }
      v12 = (UnityEngine_GameObject_o *)*((_QWORD *)&bannerList->obj.klass + v7);
      if ( !v12 )
        goto LABEL_19;
      this = (SetMoveBannerControll_o *)UnityEngine_GameObject__get_transform(
                                          *((UnityEngine_GameObject_o **)&bannerList->obj.klass + v7),
                                          0LL);
      if ( !this )
        goto LABEL_19;
      v25.fields.x = v4->fields.moveLeftPos;
      v25.fields.y = 0.0;
      v25.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v25, 0LL);
      Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         v12,
                                                         (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
      v4->fields.tp = (struct TweenPosition_o *)Component_srcLineSprite;
      sub_B5D560((BattleServantConfConponent_o *)&v4->fields.tp, Component_srcLineSprite, v14, v15, v16, v17, v18, v19);
      tp = v4->fields.tp;
      this = (SetMoveBannerControll_o *)UnityEngine_GameObject__get_transform(v12, 0LL);
      if ( !this )
        goto LABEL_19;
      *(UnityEngine_Vector3_o *)&v21 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
      if ( !tp )
        goto LABEL_19;
      tp->fields.from.fields.x = v21;
      tp->fields.from.fields.y = v22;
      tp->fields.from.fields.z = v23;
      this = *p_tp;
      if ( !*p_tp )
        goto LABEL_19;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
      bannerList = v4->fields.bannerList;
    }
    ++v7;
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  void *bannerPanel; // x0
  struct SetMoveBannerControll___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__15_0; // x21
  Il2CppObject *v36; // x22
  struct SetMoveBannerControll___c_StaticFields *v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  int32_t size; // w22
  signed __int64 v45; // x20
  struct UnityEngine_GameObject_array *v46; // x0
  struct UnityEngine_GameObject_array **p_bannerList; // x21
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  const MethodInfo *v54; // x2
  unsigned __int64 v55; // x25
  struct TweenPosition_o **p_tp; // x22
  __int64 v57; // x26
  UnityEngine_GameObject_o *bannerPb; // x23
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v60; // x23
  int v61; // s11
  float x; // s10
  float y; // s8
  float z; // s9
  float v65; // s11
  UnityEngine_Transform_o *v66; // x24
  int v67; // s0
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  struct TweenPosition_o *v77; // x24
  float v78; // s0
  float v79; // s1
  float v80; // s2
  unsigned int *v81; // x24
  __int64 v82; // x0
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  __int64 v89; // x0
  __int64 v90; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v92; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42EBA7F & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Comparison_EventEntity___ctor__, (_DWORD)eventDataList, (_DWORD)method, v3);
    sub_B5D5C4(&System_Comparison_EventEntity__TypeInfo, v6, v7, v8);
    sub_B5D5C4(&UnityEngine_GameObject___TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, v12, v13, v14);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventEntity__Sort__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventEntity__get_Count__, v21, v22, v23);
    sub_B5D5C4(&Method_SetMoveBannerControll___c__setBanner_b__15_0__, v24, v25, v26);
    sub_B5D5C4(&SetMoveBannerControll___c_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_16802/*"banner_event_002"*/, v30, v31, v32);
    byte_42EBA7F = 1;
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
    v36 = (Il2CppObject *)static_fields->__9;
    _9__15_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_EventEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__15_0,
      v36,
      Method_SetMoveBannerControll___c__setBanner_b__15_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_EventEntity___ctor__);
    v37 = SetMoveBannerControll___c_TypeInfo->static_fields;
    v37->__9__15_0 = (struct System_Comparison_EventEntity__o *)_9__15_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v37->__9__15_0,
      (System_Int32_array **)_9__15_0,
      v38,
      v39,
      v40,
      v41,
      v42,
      v43);
  }
  if ( !eventDataList )
    goto LABEL_36;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)eventDataList,
    (System_Comparison_T__o *)_9__15_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_EventEntity__Sort__);
  size = eventDataList->fields._size;
  v45 = size;
  v46 = (struct UnityEngine_GameObject_array *)sub_B5D5DC(UnityEngine_GameObject___TypeInfo, (unsigned int)size);
  this->fields.bannerList = v46;
  p_bannerList = &this->fields.bannerList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.bannerList,
    (System_Int32_array **)v46,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  if ( size >= 1 )
  {
    v55 = 0LL;
    p_tp = &this->fields.tp;
    v57 = 8LL;
    while ( 1 )
    {
      bannerPanel = this->fields.bannerPanel;
      if ( !bannerPanel )
        break;
      bannerPb = this->fields.bannerPb;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)bannerPanel, 0LL);
      bannerPanel = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, bannerPb, transform, 0LL, 0LL);
      v60 = (UnityEngine_GameObject_o *)bannerPanel;
      if ( (v55 & 1) != 0 )
      {
        if ( !bannerPanel )
          break;
        bannerPanel = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                        (UnityEngine_GameObject_o *)bannerPanel,
                        (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        if ( !bannerPanel )
          break;
        UISprite__set_spriteName((UISprite_o *)bannerPanel, (System_String_o *)StringLiteral_16802/*"banner_event_002"*/, 0LL);
      }
      else if ( !bannerPanel )
      {
        break;
      }
      bannerPanel = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                      v60,
                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( !bannerPanel )
        break;
      if ( !this->fields.bannerPanel )
        break;
      v61 = *((_DWORD *)bannerPanel + 40);
      bannerPanel = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.bannerPanel, 0LL);
      if ( !bannerPanel )
        break;
      localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)bannerPanel, 0LL);
      x = localPosition.fields.x;
      y = localPosition.fields.y;
      z = localPosition.fields.z;
      bannerPanel = UnityEngine_GameObject__get_transform(v60, 0LL);
      if ( !bannerPanel )
        break;
      v65 = (float)v61;
      v92.fields.x = (float)((float)(int)v55 * v65) + x;
      v92.fields.y = y;
      v92.fields.z = z;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)bannerPanel, v92, 0LL);
      v66 = UnityEngine_GameObject__get_transform(v60, 0LL);
      *(UnityEngine_Vector3_o *)&v67 = UnityEngine_Vector3__get_one(0LL);
      if ( !v66 )
        break;
      UnityEngine_Transform__set_localScale(v66, *(UnityEngine_Vector3_o *)&v67, 0LL);
      Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         v60,
                                                         (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
      *p_tp = (struct TweenPosition_o *)Component_srcLineSprite;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.tp,
        Component_srcLineSprite,
        v71,
        v72,
        v73,
        v74,
        v75,
        v76);
      bannerPanel = *p_tp;
      if ( !*p_tp )
        break;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)bannerPanel, 0, 0LL);
      v77 = *p_tp;
      bannerPanel = UnityEngine_GameObject__get_transform(v60, 0LL);
      if ( !bannerPanel )
        break;
      *(UnityEngine_Vector3_o *)&v78 = UnityEngine_Transform__get_localPosition(
                                         (UnityEngine_Transform_o *)bannerPanel,
                                         0LL);
      if ( !v77 )
        break;
      v77->fields.from.fields.x = v78;
      v77->fields.from.fields.y = v79;
      v77->fields.from.fields.z = v80;
      v81 = (unsigned int *)*p_bannerList;
      if ( !*p_bannerList )
        break;
      v82 = sub_B5D684(v60, *(_QWORD *)(*(_QWORD *)v81 + 64LL));
      if ( !v82 )
      {
        v89 = sub_B5D6BC(0LL);
        sub_B5D668(v89, 0LL);
      }
      if ( v55 >= v81[6] )
      {
        v90 = sub_B5D6C8(v82);
        sub_B5D668(v90, 0LL);
      }
      *(_QWORD *)&v81[v57] = v60;
      sub_B5D560((BattleServantConfConponent_o *)&v81[v57], (System_Int32_array **)v60, v83, v84, v85, v86, v87, v88);
      ++v55;
      v57 += 2LL;
      if ( (__int64)v55 >= v45 )
        goto LABEL_35;
    }
LABEL_36:
    sub_B5D69C(bannerPanel, eventDataList);
  }
  v65 = 0.0;
LABEL_35:
  this->fields.moveLeftPos = -v65;
  this->fields.moveRightPos = v65;
  SetMoveBannerControll__initEnableBtn(this, v45, v54);
}


void __fastcall SetMoveBannerControll__setEnabledBtn(SetMoveBannerControll_o *this, const MethodInfo *method)
{
  UnityEngine_Behaviour_o *lfBtn; // x0

  lfBtn = (UnityEngine_Behaviour_o *)this->fields.lfBtn;
  if ( !lfBtn
    || (UnityEngine_Behaviour__set_enabled(lfBtn, 0, 0LL), (lfBtn = (UnityEngine_Behaviour_o *)this->fields.rgBtn) == 0LL) )
  {
    sub_B5D69C(lfBtn, method);
  }
  UnityEngine_Behaviour__set_enabled(lfBtn, 0, 0LL);
}


void __fastcall SetMoveBannerControll___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct SetMoveBannerControll___c_StaticFields *static_fields; // x0

  if ( (byte_42E5DB7 & 1) == 0 )
  {
    sub_B5D5C4(&SetMoveBannerControll___c_TypeInfo, v1, v2, v3);
    byte_42E5DB7 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(SetMoveBannerControll___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = SetMoveBannerControll___c_TypeInfo->static_fields;
  static_fields->__9 = (struct SetMoveBannerControll___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, a);
  return b->fields.bannerPriority - a->fields.bannerPriority;
}