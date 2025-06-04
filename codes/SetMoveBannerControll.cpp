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
    sub_1BC3264(lfBtn, method);
  UnityEngine_Behaviour__set_enabled(lfBtn, 1, 0LL);
}


void __fastcall SetMoveBannerControll__OnMoveLeft(SetMoveBannerControll_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  struct UnityEngine_GameObject_array *bannerList; // x8
  __int64 v7; // x21
  int max_length; // w9
  Il2CppClass **v9; // x8
  UnityEngine_GameObject_o *v10; // x20
  const MethodInfo *v11; // x2
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  SetMoveBannerControll__rePositionLeft(this, method);
  bannerList = this->fields.bannerList;
  if ( !bannerList )
LABEL_8:
    sub_1BC3264(transform, v4);
  v7 = 0LL;
  while ( 1 )
  {
    max_length = bannerList->max_length;
    if ( (int)v7 >= max_length )
      break;
    if ( (unsigned int)v7 >= max_length )
      sub_1BC326C(transform, v4, v5);
    v9 = &bannerList->obj.klass + v7;
    v10 = (UnityEngine_GameObject_o *)v9[4];
    if ( v10 )
    {
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v9[4], 0LL);
      if ( transform )
      {
        localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
        localPosition.fields.x = localPosition.fields.x + this->fields.moveLeftPos;
        SetMoveBannerControll__moveBanner(this, v10, localPosition, v11);
        bannerList = this->fields.bannerList;
        ++v7;
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
  __int64 v5; // x2
  struct UnityEngine_GameObject_array *bannerList; // x8
  __int64 v7; // x21
  int max_length; // w9
  Il2CppClass **v9; // x8
  UnityEngine_GameObject_o *v10; // x20
  const MethodInfo *v11; // x2
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  SetMoveBannerControll__rePositionRight(this, method);
  bannerList = this->fields.bannerList;
  if ( !bannerList )
LABEL_8:
    sub_1BC3264(transform, v4);
  v7 = 0LL;
  while ( 1 )
  {
    max_length = bannerList->max_length;
    if ( (int)v7 >= max_length )
      break;
    if ( (unsigned int)v7 >= max_length )
      sub_1BC326C(transform, v4, v5);
    v9 = &bannerList->obj.klass + v7;
    v10 = (UnityEngine_GameObject_o *)v9[4];
    if ( v10 )
    {
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v9[4], 0LL);
      if ( transform )
      {
        localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
        localPosition.fields.x = localPosition.fields.x + this->fields.moveRightPos;
        SetMoveBannerControll__moveBanner(this, v10, localPosition, v11);
        bannerList = this->fields.bannerList;
        ++v7;
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
  __int64 v2; // x2
  struct UnityEngine_GameObject_array *bannerList; // x8
  __int64 idx; // x9
  SetMoveBannerControll_o *v5; // x19
  Il2CppClass **v6; // x8
  UnityEngine_GameObject_o *v7; // x20
  const MethodInfo *v8; // x2
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  bannerList = this->fields.bannerList;
  if ( !bannerList )
    goto LABEL_6;
  idx = this->fields.idx;
  v5 = this;
  if ( (unsigned int)idx >= bannerList->max_length )
    sub_1BC326C(this, method, v2);
  v6 = &bannerList->obj.klass + idx;
  v7 = (UnityEngine_GameObject_o *)v6[4];
  if ( !v7
    || (this = (SetMoveBannerControll_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v6[4], 0LL)) == 0LL )
  {
LABEL_6:
    sub_1BC3264(this, method);
  }
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  localPosition.fields.x = localPosition.fields.x + v5->fields.moveLeftPos;
  SetMoveBannerControll__moveBanner(v5, v7, localPosition, v8);
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
      sub_1BC3264(lfBtn, *(_QWORD *)&cnt);
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
  UnityEngine_Vector3_o v16; // 0:s1.4,4:s2.4,8:s3.4

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  v8 = this;
  if ( (byte_4AFCF3E & 1) == 0 )
  {
    sub_1BC3008(&EventDelegate_Callback_TypeInfo, target);
    sub_1BC3008(&EventDelegate_TypeInfo, v9);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, v10);
    this = (SetMoveBannerControll_o *)sub_1BC3008(&Method_SetMoveBannerControll_OnMoveFinish__, v11);
    byte_4AFCF3E = 1;
  }
  p_tp = (SetMoveBannerControll_o **)&v8->fields.tp;
  tp = v8->fields.tp;
  if ( !tp )
    goto LABEL_9;
  onFinished = tp->fields.onFinished;
  v15 = (EventDelegate_Callback_o *)sub_1BC3254(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v15, (Il2CppObject *)v8, Method_SetMoveBannerControll_OnMoveFinish__, 0LL);
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  this = (SetMoveBannerControll_o *)EventDelegate__Set_48350136(onFinished, v15, 0LL);
  if ( !target
    || (*p_tp = (SetMoveBannerControll_o *)UnityEngine_GameObject__GetComponent_object_(
                                             target,
                                             (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___),
        sub_1BC2FAC(&v8->fields.tp),
        (this = *p_tp) == 0LL) )
  {
LABEL_9:
    sub_1BC3264(this, target);
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL);
  v16.fields.x = x;
  v16.fields.y = y;
  v16.fields.z = z;
  TweenPosition__Begin(target, v8->fields.moveSpeed, v16, 0LL);
  ++v8->fields.idx;
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
  struct TweenPosition_o *tp; // x24
  float v13; // s0
  float v14; // s1
  float v15; // s2
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4

  v3 = this;
  if ( (byte_4AFCF3F & 1) == 0 )
  {
    this = (SetMoveBannerControll_o *)sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, method);
    byte_4AFCF3F = 1;
  }
  bannerList = v3->fields.bannerList;
  if ( !bannerList )
LABEL_19:
    sub_1BC3264(this, method);
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
        sub_1BC326C(this, method, v2);
      v10 = &bannerList->obj.klass + v5;
      v11 = (UnityEngine_GameObject_o *)v10[4];
      if ( !v11 )
        goto LABEL_19;
      this = (SetMoveBannerControll_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v10[4], 0LL);
      if ( !this )
        goto LABEL_19;
      v16.fields.x = v3->fields.moveRightPos;
      v16.fields.y = 0.0;
      v16.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v16, 0LL);
      v3->fields.tp = (struct TweenPosition_o *)UnityEngine_GameObject__GetComponent_object_(
                                                  v11,
                                                  (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
      sub_1BC2FAC(&v3->fields.tp);
      tp = v3->fields.tp;
      this = (SetMoveBannerControll_o *)UnityEngine_GameObject__get_transform(v11, 0LL);
      if ( !this )
        goto LABEL_19;
      *(UnityEngine_Vector3_o *)&v13 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
      if ( !tp )
        goto LABEL_19;
      tp->fields.from.fields.x = v13;
      tp->fields.from.fields.y = v14;
      tp->fields.from.fields.z = v15;
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
  struct TweenPosition_o *tp; // x24
  float v13; // s0
  float v14; // s1
  float v15; // s2
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4

  v3 = this;
  if ( (byte_4AFCF40 & 1) == 0 )
  {
    this = (SetMoveBannerControll_o *)sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, method);
    byte_4AFCF40 = 1;
  }
  bannerList = v3->fields.bannerList;
  if ( !bannerList )
LABEL_19:
    sub_1BC3264(this, method);
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
        sub_1BC326C(this, method, v2);
      v10 = &bannerList->obj.klass + v5;
      v11 = (UnityEngine_GameObject_o *)v10[4];
      if ( !v11 )
        goto LABEL_19;
      this = (SetMoveBannerControll_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v10[4], 0LL);
      if ( !this )
        goto LABEL_19;
      v16.fields.x = v3->fields.moveLeftPos;
      v16.fields.y = 0.0;
      v16.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v16, 0LL);
      v3->fields.tp = (struct TweenPosition_o *)UnityEngine_GameObject__GetComponent_object_(
                                                  v11,
                                                  (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
      sub_1BC2FAC(&v3->fields.tp);
      tp = v3->fields.tp;
      this = (SetMoveBannerControll_o *)UnityEngine_GameObject__get_transform(v11, 0LL);
      if ( !this )
        goto LABEL_19;
      *(UnityEngine_Vector3_o *)&v13 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
      if ( !tp )
        goto LABEL_19;
      tp->fields.from.fields.x = v13;
      tp->fields.from.fields.y = v14;
      tp->fields.from.fields.z = v15;
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 bannerPanel; // x0
  System_Comparison_T__o *v14; // x21
  Il2CppObject *v15; // x22
  struct SetMoveBannerControll___c_StaticFields *static_fields; // x0
  __int64 size; // x20
  struct UnityEngine_GameObject_array **p_bannerList; // x21
  const MethodInfo *v19; // x2
  unsigned __int64 v20; // x26
  struct TweenPosition_o **p_tp; // x22
  __int64 v22; // x29
  UnityEngine_GameObject_o *bannerPb; // x24
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v25; // x24
  int v26; // s11
  float x; // s10
  float y; // s8
  float z; // s9
  float v30; // s11
  UnityEngine_Transform_o *v31; // x25
  struct TweenPosition_o *v32; // x25
  __int64 v33; // x2
  float v34; // s0
  float v35; // s1
  float v36; // s2
  struct UnityEngine_GameObject_array *v37; // x8
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4AFCF3D & 1) == 0 )
  {
    sub_1BC3008(&System_Comparison_EventEntity__TypeInfo, eventDataList);
    sub_1BC3008(&UnityEngine_GameObject___TypeInfo, v5);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, v6);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventEntity__Sort__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventEntity__get_Count__, v9);
    sub_1BC3008(&Method_SetMoveBannerControll___c__setBanner_b__15_0__, v10);
    sub_1BC3008(&SetMoveBannerControll___c_TypeInfo, v11);
    sub_1BC3008(&StringLiteral_16877/*"banner_event_002"*/, v12);
    byte_4AFCF3D = 1;
  }
  bannerPanel = (__int64)SetMoveBannerControll___c_TypeInfo;
  if ( !SetMoveBannerControll___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SetMoveBannerControll___c_TypeInfo);
    bannerPanel = (__int64)SetMoveBannerControll___c_TypeInfo;
  }
  v14 = *(System_Comparison_T__o **)(*(_QWORD *)(bannerPanel + 184) + 8LL);
  if ( !v14 )
  {
    if ( !*(_DWORD *)(bannerPanel + 224) )
    {
      j_il2cpp_runtime_class_init_0(bannerPanel);
      bannerPanel = (__int64)SetMoveBannerControll___c_TypeInfo;
    }
    v15 = **(Il2CppObject ***)(bannerPanel + 184);
    v14 = (System_Comparison_T__o *)sub_1BC3254(System_Comparison_EventEntity__TypeInfo);
    System_Comparison_object____ctor(v14, v15, Method_SetMoveBannerControll___c__setBanner_b__15_0__, 0LL);
    static_fields = SetMoveBannerControll___c_TypeInfo->static_fields;
    static_fields->__9__15_0 = (struct System_Comparison_EventEntity__o *)v14;
    bannerPanel = sub_1BC2FAC(&static_fields->__9__15_0);
  }
  if ( !eventDataList )
    goto LABEL_35;
  System_Collections_Generic_List_object___Sort_57288964(
    (System_Collections_Generic_List_object__o *)eventDataList,
    v14,
    (const MethodInfo_36A2904 *)Method_System_Collections_Generic_List_EventEntity__Sort__);
  size = (unsigned int)eventDataList->fields._size;
  this->fields.bannerList = (struct UnityEngine_GameObject_array *)sub_1BC30B0(
                                                                     UnityEngine_GameObject___TypeInfo,
                                                                     (unsigned int)size);
  p_bannerList = &this->fields.bannerList;
  sub_1BC2FAC(&this->fields.bannerList);
  if ( (int)size >= 1 )
  {
    v20 = 0LL;
    p_tp = &this->fields.tp;
    v22 = 32LL;
    while ( 1 )
    {
      bannerPanel = (__int64)this->fields.bannerPanel;
      if ( !bannerPanel )
        break;
      bannerPb = this->fields.bannerPb;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)bannerPanel, 0LL);
      bannerPanel = (__int64)BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, bannerPb, transform, 0LL, 0LL);
      v25 = (UnityEngine_GameObject_o *)bannerPanel;
      if ( (v20 & 1) != 0 )
      {
        if ( !bannerPanel )
          break;
        bannerPanel = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)bannerPanel,
                                 (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        if ( !bannerPanel )
          break;
        UISprite__set_spriteName((UISprite_o *)bannerPanel, (System_String_o *)StringLiteral_16877/*"banner_event_002"*/, 0LL);
      }
      else if ( !bannerPanel )
      {
        break;
      }
      bannerPanel = (__int64)UnityEngine_GameObject__GetComponent_object_(
                               v25,
                               (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( !bannerPanel )
        break;
      if ( !this->fields.bannerPanel )
        break;
      v26 = *(_DWORD *)(bannerPanel + 168);
      bannerPanel = (__int64)UnityEngine_Component__get_transform(
                               (UnityEngine_Component_o *)this->fields.bannerPanel,
                               0LL);
      if ( !bannerPanel )
        break;
      localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)bannerPanel, 0LL);
      x = localPosition.fields.x;
      y = localPosition.fields.y;
      z = localPosition.fields.z;
      bannerPanel = (__int64)UnityEngine_GameObject__get_transform(v25, 0LL);
      if ( !bannerPanel )
        break;
      v30 = (float)v26;
      v39.fields.x = (float)((float)(int)v20 * v30) + x;
      v39.fields.y = y;
      v39.fields.z = z;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)bannerPanel, v39, 0LL);
      bannerPanel = (__int64)UnityEngine_GameObject__get_transform(v25, 0LL);
      v31 = (UnityEngine_Transform_o *)bannerPanel;
      if ( !byte_4AFBDB6 )
      {
        bannerPanel = sub_1BC3008(&UnityEngine_Vector3_TypeInfo, eventDataList);
        byte_4AFBDB6 = 1;
      }
      if ( !v31 )
        break;
      UnityEngine_Transform__set_localScale(v31, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
      *p_tp = (struct TweenPosition_o *)UnityEngine_GameObject__GetComponent_object_(
                                          v25,
                                          (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
      sub_1BC2FAC(&this->fields.tp);
      bannerPanel = (__int64)*p_tp;
      if ( !*p_tp )
        break;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)bannerPanel, 0, 0LL);
      v32 = *p_tp;
      bannerPanel = (__int64)UnityEngine_GameObject__get_transform(v25, 0LL);
      if ( !bannerPanel )
        break;
      *(UnityEngine_Vector3_o *)&v34 = UnityEngine_Transform__get_localPosition(
                                         (UnityEngine_Transform_o *)bannerPanel,
                                         0LL);
      if ( !v32 )
        break;
      v32->fields.from.fields.x = v34;
      v32->fields.from.fields.y = v35;
      v32->fields.from.fields.z = v36;
      v37 = *p_bannerList;
      if ( !*p_bannerList )
        break;
      if ( v20 >= v37->max_length )
        sub_1BC326C(bannerPanel, eventDataList, v33);
      *(Il2CppClass **)((char *)&v37->obj.klass + v22) = (Il2CppClass *)v25;
      sub_1BC2FAC((char *)v37 + v22);
      ++v20;
      v22 += 8LL;
      if ( size == v20 )
        goto LABEL_34;
    }
LABEL_35:
    sub_1BC3264(bannerPanel, eventDataList);
  }
  v30 = 0.0;
LABEL_34:
  this->fields.moveLeftPos = -v30;
  this->fields.moveRightPos = v30;
  SetMoveBannerControll__initEnableBtn(this, size, v19);
}


void __fastcall SetMoveBannerControll__setEnabledBtn(SetMoveBannerControll_o *this, const MethodInfo *method)
{
  UnityEngine_Behaviour_o *lfBtn; // x0

  lfBtn = (UnityEngine_Behaviour_o *)this->fields.lfBtn;
  if ( !lfBtn
    || (UnityEngine_Behaviour__set_enabled(lfBtn, 0, 0LL), (lfBtn = (UnityEngine_Behaviour_o *)this->fields.rgBtn) == 0LL) )
  {
    sub_1BC3264(lfBtn, method);
  }
  UnityEngine_Behaviour__set_enabled(lfBtn, 0, 0LL);
}


void __fastcall SetMoveBannerControll___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19

  if ( (byte_4AFCF41 & 1) == 0 )
  {
    sub_1BC3008(&SetMoveBannerControll___c_TypeInfo, v1);
    byte_4AFCF41 = 1;
  }
  v2 = (Il2CppObject *)sub_1BC3254(SetMoveBannerControll___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  SetMoveBannerControll___c_TypeInfo->static_fields->__9 = (struct SetMoveBannerControll___c_o *)v2;
  sub_1BC2FAC(SetMoveBannerControll___c_TypeInfo->static_fields);
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
    sub_1BC3264(this, a);
  return b->fields.bannerPriority - a->fields.bannerPriority;
}