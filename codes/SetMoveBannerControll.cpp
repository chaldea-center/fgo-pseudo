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
    sub_1BCAA3C(lfBtn, method);
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
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  SetMoveBannerControll__rePositionLeft(this, method);
  bannerList = this->fields.bannerList;
  if ( !bannerList )
LABEL_8:
    sub_1BCAA3C(transform, v4);
  v6 = 0LL;
  while ( 1 )
  {
    max_length = bannerList->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
      sub_1BCAA44(transform, v4);
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
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  SetMoveBannerControll__rePositionRight(this, method);
  bannerList = this->fields.bannerList;
  if ( !bannerList )
LABEL_8:
    sub_1BCAA3C(transform, v4);
  v6 = 0LL;
  while ( 1 )
  {
    max_length = bannerList->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
      sub_1BCAA44(transform, v4);
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
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  bannerList = this->fields.bannerList;
  if ( !bannerList )
    goto LABEL_6;
  idx = this->fields.idx;
  v4 = this;
  if ( (unsigned int)idx >= bannerList->max_length )
    sub_1BCAA44(this, method);
  v5 = &bannerList->obj.klass + idx;
  v6 = (UnityEngine_GameObject_o *)v5[4];
  if ( !v6
    || (this = (SetMoveBannerControll_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v5[4], 0LL)) == 0LL )
  {
LABEL_6:
    sub_1BCAA3C(this, method);
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
      sub_1BCAA3C(lfBtn, *(_QWORD *)&cnt);
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
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  struct TweenPosition_o *tp; // x8
  SetMoveBannerControll_o **p_tp; // x21
  System_Collections_Generic_List_EventDelegate__o *onFinished; // x22
  EventDelegate_Callback_o *v19; // x23
  __int64 v20; // x1
  Il2CppObject *Component_object; // x0
  UnityEngine_Vector3_o v22; // 0:s1.4,4:s2.4,8:s3.4

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  v9 = this;
  if ( (byte_4B114EE & 1) == 0 )
  {
    sub_1BCA7E0(&EventDelegate_Callback_TypeInfo, target, method);
    sub_1BCA7E0(&EventDelegate_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, v12, v13);
    this = (SetMoveBannerControll_o *)sub_1BCA7E0(&Method_SetMoveBannerControll_OnMoveFinish__, v14, v15);
    byte_4B114EE = 1;
  }
  p_tp = (SetMoveBannerControll_o **)&v9->fields.tp;
  tp = v9->fields.tp;
  if ( !tp )
    goto LABEL_9;
  onFinished = tp->fields.onFinished;
  v19 = (EventDelegate_Callback_o *)sub_1BCAA2C(EventDelegate_Callback_TypeInfo, target, method, v4);
  EventDelegate_Callback___ctor(v19, (Il2CppObject *)v9, Method_SetMoveBannerControll_OnMoveFinish__, 0LL);
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, v20);
  this = (SetMoveBannerControll_o *)EventDelegate__Set_47333340(onFinished, v19, 0LL);
  if ( !target
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             target,
                             (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___),
        *p_tp = (SetMoveBannerControll_o *)Component_object,
        sub_1BCA784(&v9->fields.tp, Component_object),
        (this = *p_tp) == 0LL) )
  {
LABEL_9:
    sub_1BCAA3C(this, target);
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL);
  v22.fields.x = x;
  v22.fields.y = y;
  v22.fields.z = z;
  TweenPosition__Begin(target, v9->fields.moveSpeed, v22, 0LL);
  ++v9->fields.idx;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SetMoveBannerControll__rePositionLeft(SetMoveBannerControll_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  SetMoveBannerControll_o *v3; // x19
  struct UnityEngine_GameObject_array *bannerList; // x8
  signed int v5; // w22
  SetMoveBannerControll_o **p_tp; // x20
  signed int max_length; // w9
  float v8; // s0
  int v9; // w9
  Il2CppClass **v10; // x8
  UnityEngine_GameObject_o *v11; // x21
  Il2CppObject *Component_object; // x0
  struct TweenPosition_o *tp; // x24
  float v14; // s0
  float v15; // s1
  float v16; // s2
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4

  v3 = this;
  if ( (byte_4B114EF & 1) == 0 )
  {
    this = (SetMoveBannerControll_o *)sub_1BCA7E0(
                                        &Method_UnityEngine_GameObject_GetComponent_TweenPosition___,
                                        method,
                                        v2);
    byte_4B114EF = 1;
  }
  bannerList = v3->fields.bannerList;
  if ( !bannerList )
LABEL_19:
    sub_1BCAA3C(this, method);
  v5 = 0;
  p_tp = (SetMoveBannerControll_o **)&v3->fields.tp;
  while ( 1 )
  {
    max_length = bannerList->max_length;
    if ( v5 >= max_length )
      break;
    if ( v5 >= (unsigned int)max_length )
      goto LABEL_21;
    this = (SetMoveBannerControll_o *)bannerList->m_Items[v5];
    if ( !this )
      goto LABEL_19;
    this = (SetMoveBannerControll_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
    if ( !this )
      goto LABEL_19;
    LODWORD(v8) = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
    bannerList = v3->fields.bannerList;
    if ( !bannerList )
      goto LABEL_19;
    v9 = bannerList->max_length;
    if ( v8 == (float)(v3->fields.moveLeftPos * (float)((float)v9 + -1.0)) )
    {
      if ( v5 >= (unsigned int)v9 )
LABEL_21:
        sub_1BCAA44(this, method);
      v10 = &bannerList->obj.klass + v5;
      v11 = (UnityEngine_GameObject_o *)v10[4];
      if ( !v11 )
        goto LABEL_19;
      this = (SetMoveBannerControll_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v10[4], 0LL);
      if ( !this )
        goto LABEL_19;
      v17.fields.x = v3->fields.moveRightPos;
      v17.fields.y = 0.0;
      v17.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v17, 0LL);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           v11,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
      v3->fields.tp = (struct TweenPosition_o *)Component_object;
      sub_1BCA784(&v3->fields.tp, Component_object);
      tp = v3->fields.tp;
      this = (SetMoveBannerControll_o *)UnityEngine_GameObject__get_transform(v11, 0LL);
      if ( !this )
        goto LABEL_19;
      *(UnityEngine_Vector3_o *)&v14 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
      if ( !tp )
        goto LABEL_19;
      tp->fields.from.fields.x = v14;
      tp->fields.from.fields.y = v15;
      tp->fields.from.fields.z = v16;
      this = *p_tp;
      if ( !*p_tp )
        goto LABEL_19;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
      bannerList = v3->fields.bannerList;
    }
    ++v5;
    if ( !bannerList )
      goto LABEL_19;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SetMoveBannerControll__rePositionRight(SetMoveBannerControll_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  SetMoveBannerControll_o *v3; // x19
  struct UnityEngine_GameObject_array *bannerList; // x8
  signed int v5; // w22
  SetMoveBannerControll_o **p_tp; // x20
  signed int max_length; // w9
  float v8; // s0
  int v9; // w9
  Il2CppClass **v10; // x8
  UnityEngine_GameObject_o *v11; // x21
  Il2CppObject *Component_object; // x0
  struct TweenPosition_o *tp; // x24
  float v14; // s0
  float v15; // s1
  float v16; // s2
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4

  v3 = this;
  if ( (byte_4B114F0 & 1) == 0 )
  {
    this = (SetMoveBannerControll_o *)sub_1BCA7E0(
                                        &Method_UnityEngine_GameObject_GetComponent_TweenPosition___,
                                        method,
                                        v2);
    byte_4B114F0 = 1;
  }
  bannerList = v3->fields.bannerList;
  if ( !bannerList )
LABEL_19:
    sub_1BCAA3C(this, method);
  v5 = 0;
  p_tp = (SetMoveBannerControll_o **)&v3->fields.tp;
  while ( 1 )
  {
    max_length = bannerList->max_length;
    if ( v5 >= max_length )
      break;
    if ( v5 >= (unsigned int)max_length )
      goto LABEL_21;
    this = (SetMoveBannerControll_o *)bannerList->m_Items[v5];
    if ( !this )
      goto LABEL_19;
    this = (SetMoveBannerControll_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
    if ( !this )
      goto LABEL_19;
    LODWORD(v8) = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
    bannerList = v3->fields.bannerList;
    if ( !bannerList )
      goto LABEL_19;
    v9 = bannerList->max_length;
    if ( v8 == (float)(v3->fields.moveRightPos * (float)((float)v9 + -1.0)) )
    {
      if ( v5 >= (unsigned int)v9 )
LABEL_21:
        sub_1BCAA44(this, method);
      v10 = &bannerList->obj.klass + v5;
      v11 = (UnityEngine_GameObject_o *)v10[4];
      if ( !v11 )
        goto LABEL_19;
      this = (SetMoveBannerControll_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v10[4], 0LL);
      if ( !this )
        goto LABEL_19;
      v17.fields.x = v3->fields.moveLeftPos;
      v17.fields.y = 0.0;
      v17.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v17, 0LL);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           v11,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
      v3->fields.tp = (struct TweenPosition_o *)Component_object;
      sub_1BCA784(&v3->fields.tp, Component_object);
      tp = v3->fields.tp;
      this = (SetMoveBannerControll_o *)UnityEngine_GameObject__get_transform(v11, 0LL);
      if ( !this )
        goto LABEL_19;
      *(UnityEngine_Vector3_o *)&v14 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
      if ( !tp )
        goto LABEL_19;
      tp->fields.from.fields.x = v14;
      tp->fields.from.fields.y = v15;
      tp->fields.from.fields.z = v16;
      this = *p_tp;
      if ( !*p_tp )
        goto LABEL_19;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
      bannerList = v3->fields.bannerList;
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
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 bannerPanel; // x0
  System_Comparison_T__o *v23; // x21
  Il2CppObject *v24; // x22
  struct SetMoveBannerControll___c_StaticFields *static_fields; // x0
  __int64 size; // x20
  struct UnityEngine_GameObject_array *v27; // x0
  struct UnityEngine_GameObject_array **p_bannerList; // x21
  const MethodInfo *v29; // x2
  unsigned __int64 v30; // x26
  struct TweenPosition_o **p_tp; // x22
  __int64 v32; // x29
  UnityEngine_GameObject_o *bannerPb; // x24
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v35; // x24
  int v36; // s11
  float x; // s10
  float y; // s8
  float z; // s9
  float v40; // s11
  __int64 v41; // x2
  UnityEngine_Transform_o *v42; // x25
  Il2CppObject *Component_object; // x0
  struct TweenPosition_o *v44; // x25
  float v45; // s0
  float v46; // s1
  float v47; // s2
  struct UnityEngine_GameObject_array *v48; // x8
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B114ED & 1) == 0 )
  {
    sub_1BCA7E0(&System_Comparison_EventEntity__TypeInfo, eventDataList, method);
    sub_1BCA7E0(&UnityEngine_GameObject___TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, v8, v9);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventEntity__Sort__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventEntity__get_Count__, v14, v15);
    sub_1BCA7E0(&Method_SetMoveBannerControll___c__setBanner_b__15_0__, v16, v17);
    sub_1BCA7E0(&SetMoveBannerControll___c_TypeInfo, v18, v19);
    sub_1BCA7E0(&StringLiteral_17233/*"banner_event_002"*/, v20, v21);
    byte_4B114ED = 1;
  }
  bannerPanel = (__int64)SetMoveBannerControll___c_TypeInfo;
  if ( !SetMoveBannerControll___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SetMoveBannerControll___c_TypeInfo, eventDataList);
    bannerPanel = (__int64)SetMoveBannerControll___c_TypeInfo;
  }
  v23 = *(System_Comparison_T__o **)(*(_QWORD *)(bannerPanel + 184) + 8LL);
  if ( !v23 )
  {
    if ( !*(_DWORD *)(bannerPanel + 224) )
    {
      j_il2cpp_runtime_class_init_0(bannerPanel, eventDataList);
      bannerPanel = (__int64)SetMoveBannerControll___c_TypeInfo;
    }
    v24 = **(Il2CppObject ***)(bannerPanel + 184);
    v23 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_EventEntity__TypeInfo, eventDataList, method, v3);
    System_Comparison_object____ctor(v23, v24, Method_SetMoveBannerControll___c__setBanner_b__15_0__, 0LL);
    static_fields = SetMoveBannerControll___c_TypeInfo->static_fields;
    static_fields->__9__15_0 = (struct System_Comparison_EventEntity__o *)v23;
    bannerPanel = sub_1BCA784(&static_fields->__9__15_0, v23);
  }
  if ( !eventDataList )
    goto LABEL_35;
  System_Collections_Generic_List_object___Sort_56244000(
    (System_Collections_Generic_List_object__o *)eventDataList,
    v23,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_EventEntity__Sort__);
  size = (unsigned int)eventDataList->fields._size;
  v27 = (struct UnityEngine_GameObject_array *)sub_1BCA888(UnityEngine_GameObject___TypeInfo, (unsigned int)size);
  this->fields.bannerList = v27;
  p_bannerList = &this->fields.bannerList;
  sub_1BCA784(&this->fields.bannerList, v27);
  if ( (int)size >= 1 )
  {
    v30 = 0LL;
    p_tp = &this->fields.tp;
    v32 = 32LL;
    while ( 1 )
    {
      bannerPanel = (__int64)this->fields.bannerPanel;
      if ( !bannerPanel )
        break;
      bannerPb = this->fields.bannerPb;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)bannerPanel, 0LL);
      bannerPanel = (__int64)BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, bannerPb, transform, 0LL, 0LL);
      v35 = (UnityEngine_GameObject_o *)bannerPanel;
      if ( (v30 & 1) != 0 )
      {
        if ( !bannerPanel )
          break;
        bannerPanel = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)bannerPanel,
                                 (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        if ( !bannerPanel )
          break;
        UISprite__set_spriteName((UISprite_o *)bannerPanel, (System_String_o *)StringLiteral_17233/*"banner_event_002"*/, 0LL);
      }
      else if ( !bannerPanel )
      {
        break;
      }
      bannerPanel = (__int64)UnityEngine_GameObject__GetComponent_object_(
                               v35,
                               (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( !bannerPanel )
        break;
      if ( !this->fields.bannerPanel )
        break;
      v36 = *(_DWORD *)(bannerPanel + 168);
      bannerPanel = (__int64)UnityEngine_Component__get_transform(
                               (UnityEngine_Component_o *)this->fields.bannerPanel,
                               0LL);
      if ( !bannerPanel )
        break;
      localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)bannerPanel, 0LL);
      x = localPosition.fields.x;
      y = localPosition.fields.y;
      z = localPosition.fields.z;
      bannerPanel = (__int64)UnityEngine_GameObject__get_transform(v35, 0LL);
      if ( !bannerPanel )
        break;
      v40 = (float)v36;
      v50.fields.x = (float)((float)(int)v30 * v40) + x;
      v50.fields.y = y;
      v50.fields.z = z;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)bannerPanel, v50, 0LL);
      bannerPanel = (__int64)UnityEngine_GameObject__get_transform(v35, 0LL);
      v42 = (UnityEngine_Transform_o *)bannerPanel;
      if ( !byte_4B109C6 )
      {
        bannerPanel = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, eventDataList, v41);
        byte_4B109C6 = 1;
      }
      if ( !v42 )
        break;
      UnityEngine_Transform__set_localScale(v42, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           v35,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
      *p_tp = (struct TweenPosition_o *)Component_object;
      sub_1BCA784(&this->fields.tp, Component_object);
      bannerPanel = (__int64)*p_tp;
      if ( !*p_tp )
        break;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)bannerPanel, 0, 0LL);
      v44 = *p_tp;
      bannerPanel = (__int64)UnityEngine_GameObject__get_transform(v35, 0LL);
      if ( !bannerPanel )
        break;
      *(UnityEngine_Vector3_o *)&v45 = UnityEngine_Transform__get_localPosition(
                                         (UnityEngine_Transform_o *)bannerPanel,
                                         0LL);
      if ( !v44 )
        break;
      v44->fields.from.fields.x = v45;
      v44->fields.from.fields.y = v46;
      v44->fields.from.fields.z = v47;
      v48 = *p_bannerList;
      if ( !*p_bannerList )
        break;
      if ( v30 >= v48->max_length )
        sub_1BCAA44(bannerPanel, eventDataList);
      *(Il2CppClass **)((char *)&v48->obj.klass + v32) = (Il2CppClass *)v35;
      sub_1BCA784((char *)v48 + v32, v35);
      ++v30;
      v32 += 8LL;
      if ( size == v30 )
        goto LABEL_34;
    }
LABEL_35:
    sub_1BCAA3C(bannerPanel, eventDataList);
  }
  v40 = 0.0;
LABEL_34:
  this->fields.moveLeftPos = -v40;
  this->fields.moveRightPos = v40;
  SetMoveBannerControll__initEnableBtn(this, size, v29);
}


void __fastcall SetMoveBannerControll__setEnabledBtn(SetMoveBannerControll_o *this, const MethodInfo *method)
{
  UnityEngine_Behaviour_o *lfBtn; // x0

  lfBtn = (UnityEngine_Behaviour_o *)this->fields.lfBtn;
  if ( !lfBtn
    || (UnityEngine_Behaviour__set_enabled(lfBtn, 0, 0LL), (lfBtn = (UnityEngine_Behaviour_o *)this->fields.rgBtn) == 0LL) )
  {
    sub_1BCAA3C(lfBtn, method);
  }
  UnityEngine_Behaviour__set_enabled(lfBtn, 0, 0LL);
}


void __fastcall SetMoveBannerControll___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19

  if ( (byte_4B114F1 & 1) == 0 )
  {
    sub_1BCA7E0(&SetMoveBannerControll___c_TypeInfo, v1, v2);
    byte_4B114F1 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(SetMoveBannerControll___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  SetMoveBannerControll___c_TypeInfo->static_fields->__9 = (struct SetMoveBannerControll___c_o *)v4;
  sub_1BCA784(SetMoveBannerControll___c_TypeInfo->static_fields, v4);
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
    sub_1BCAA3C(this, a);
  return b->fields.bannerPriority - a->fields.bannerPriority;
}