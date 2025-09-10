void SetMoveBannerControll___ctor(SetMoveBannerControll_o *this, const MethodInfo *method)
{
  this->fields.moveSpeed = 0.2;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void SetMoveBannerControll__OnClickLeftBtn(SetMoveBannerControll_o *this, const MethodInfo *method)
{
  this->fields.isClickLf = 1;
  SetMoveBannerControll__buildMoveBanner(this, method);
}


void SetMoveBannerControll__OnClickRightBtn(SetMoveBannerControll_o *this, const MethodInfo *method)
{
  this->fields.isClickRh = 1;
  SetMoveBannerControll__buildMoveBanner(this, method);
}


void SetMoveBannerControll__OnMoveFinish(SetMoveBannerControll_o *this, const MethodInfo *method)
{
  UnityEngine_Behaviour_o *lfBtn; // x0

  lfBtn = (UnityEngine_Behaviour_o *)this->fields.lfBtn;
  if ( !lfBtn )
    goto LABEL_9;
  if ( (((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, void *))lfBtn->klass[1]._1.image)(
          lfBtn,
          lfBtn->klass[1]._1.gc_desc)
      & 1) == 0 )
  {
    lfBtn = (UnityEngine_Behaviour_o *)this->fields.lfBtn;
    if ( !lfBtn )
      goto LABEL_9;
    UnityEngine_Behaviour__set_enabled(lfBtn, 1, 0);
  }
  lfBtn = (UnityEngine_Behaviour_o *)this->fields.rgBtn;
  if ( !lfBtn )
    goto LABEL_9;
  if ( (((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, void *))lfBtn->klass[1]._1.image)(
          lfBtn,
          lfBtn->klass[1]._1.gc_desc)
      & 1) != 0 )
    return;
  lfBtn = (UnityEngine_Behaviour_o *)this->fields.rgBtn;
  if ( !lfBtn )
LABEL_9:
    sub_1C2D6EC(lfBtn, method);
  UnityEngine_Behaviour__set_enabled(lfBtn, 1, 0);
}


void SetMoveBannerControll__OnMoveLeft(SetMoveBannerControll_o *this, const MethodInfo *method)
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
    sub_1C2D6EC(transform, v4);
  v7 = 0;
  while ( 1 )
  {
    max_length = bannerList->max_length;
    if ( (int)v7 >= max_length )
      break;
    if ( (unsigned int)v7 >= max_length )
      sub_1C2D6F4(transform, v4, v5);
    v9 = &bannerList->obj.klass + v7;
    v10 = (UnityEngine_GameObject_o *)v9[4];
    if ( v10 )
    {
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v9[4], 0);
      if ( transform )
      {
        localPosition = UnityEngine_Transform__get_localPosition(transform, 0);
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


void SetMoveBannerControll__OnMoveRight(SetMoveBannerControll_o *this, const MethodInfo *method)
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
    sub_1C2D6EC(transform, v4);
  v7 = 0;
  while ( 1 )
  {
    max_length = bannerList->max_length;
    if ( (int)v7 >= max_length )
      break;
    if ( (unsigned int)v7 >= max_length )
      sub_1C2D6F4(transform, v4, v5);
    v9 = &bannerList->obj.klass + v7;
    v10 = (UnityEngine_GameObject_o *)v9[4];
    if ( v10 )
    {
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v9[4], 0);
      if ( transform )
      {
        localPosition = UnityEngine_Transform__get_localPosition(transform, 0);
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


void SetMoveBannerControll__autoMoveLeft(SetMoveBannerControll_o *this, const MethodInfo *method)
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
  if ( (unsigned int)idx >= LODWORD(bannerList->max_length) )
    sub_1C2D6F4(this, method, v2);
  v6 = &bannerList->obj.klass + idx;
  v7 = (UnityEngine_GameObject_o *)v6[4];
  if ( !v7
    || (this = (SetMoveBannerControll_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v6[4], 0)) == 0 )
  {
LABEL_6:
    sub_1C2D6EC(this, method);
  }
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  localPosition.fields.x = localPosition.fields.x + v5->fields.moveLeftPos;
  SetMoveBannerControll__moveBanner(v5, v7, localPosition, v8);
}


void SetMoveBannerControll__buildMoveBanner(SetMoveBannerControll_o *this, const MethodInfo *method)
{
  if ( this->fields.isClickLf )
    SetMoveBannerControll__OnMoveLeft(this, method);
  if ( this->fields.isClickRh )
    SetMoveBannerControll__OnMoveRight(this, method);
  SetMoveBannerControll__setEnabledBtn(this, method);
}


// local variable allocation has failed, the output may be wrong!
void SetMoveBannerControll__initEnableBtn(SetMoveBannerControll_o *this, int32_t cnt, const MethodInfo *method)
{
  UnityEngine_Component_o *lfBtn; // x0

  if ( cnt <= 1 )
  {
    lfBtn = (UnityEngine_Component_o *)this->fields.lfBtn;
    if ( !lfBtn
      || (lfBtn = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(lfBtn, 0)) == 0
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lfBtn, 0, 0),
          (lfBtn = (UnityEngine_Component_o *)this->fields.rgBtn) == 0)
      || (lfBtn = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(lfBtn, 0)) == 0 )
    {
      sub_1C2D6EC(lfBtn, *(_QWORD *)&cnt);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lfBtn, 0, 0);
  }
}


void SetMoveBannerControll__initSetBanner(
        SetMoveBannerControll_o *this,
        System_Int32_array *bannerIds,
        const MethodInfo *method)
{
  ;
}


void SetMoveBannerControll__moveBanner(
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
  UnityEngine_Vector3_o v13; // 0:s1.4,4:s2.4,8:s3.4

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  v8 = this;
  if ( (byte_4C2214E & 1) == 0 )
  {
    sub_1C2D490(&EventDelegate_Callback_TypeInfo);
    sub_1C2D490(&EventDelegate_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    this = (SetMoveBannerControll_o *)sub_1C2D490(&Method_SetMoveBannerControll_OnMoveFinish__);
    byte_4C2214E = 1;
  }
  p_tp = (SetMoveBannerControll_o **)&v8->fields.tp;
  tp = v8->fields.tp;
  if ( !tp )
    goto LABEL_9;
  onFinished = tp->fields.onFinished;
  v12 = (EventDelegate_Callback_o *)sub_1C2D6DC(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v12, (Il2CppObject *)v8, Method_SetMoveBannerControll_OnMoveFinish__, 0);
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  this = (SetMoveBannerControll_o *)EventDelegate__Set_49155444(onFinished, v12, 0);
  if ( !target
    || (*p_tp = (SetMoveBannerControll_o *)UnityEngine_GameObject__GetComponent_object_(
                                             target,
                                             (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___),
        sub_1C2D434(&v8->fields.tp),
        (this = *p_tp) == 0) )
  {
LABEL_9:
    sub_1C2D6EC(this, target);
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0);
  v13.fields.x = x;
  v13.fields.y = y;
  v13.fields.z = z;
  TweenPosition__Begin(target, v8->fields.moveSpeed, v13, 0);
  ++v8->fields.idx;
}


void SetMoveBannerControll__rePositionLeft(SetMoveBannerControll_o *this, const MethodInfo *method)
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
  UnityEngine_Vector3_o v13; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  v3 = this;
  if ( (byte_4C2214F & 1) == 0 )
  {
    this = (SetMoveBannerControll_o *)sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    byte_4C2214F = 1;
  }
  bannerList = v3->fields.bannerList;
  if ( !bannerList )
LABEL_19:
    sub_1C2D6EC(this, method);
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
    this = (SetMoveBannerControll_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
    if ( !this )
      goto LABEL_19;
    LODWORD(v8) = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
    bannerList = v3->fields.bannerList;
    if ( !bannerList )
      goto LABEL_19;
    v9 = bannerList->max_length;
    if ( v8 == (float)(v3->fields.moveLeftPos * (float)((float)v9 + -1.0)) )
    {
      if ( v5 >= (unsigned int)v9 )
LABEL_21:
        sub_1C2D6F4(this, method, v2);
      v10 = &bannerList->obj.klass + v5;
      v11 = (UnityEngine_GameObject_o *)v10[4];
      if ( !v11 )
        goto LABEL_19;
      this = (SetMoveBannerControll_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v10[4], 0);
      if ( !this )
        goto LABEL_19;
      v13.fields.x = v3->fields.moveRightPos;
      v13.fields.y = 0.0;
      v13.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v13, 0);
      v3->fields.tp = (struct TweenPosition_o *)UnityEngine_GameObject__GetComponent_object_(
                                                  v11,
                                                  (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
      sub_1C2D434(&v3->fields.tp);
      tp = v3->fields.tp;
      this = (SetMoveBannerControll_o *)UnityEngine_GameObject__get_transform(v11, 0);
      if ( !this )
        goto LABEL_19;
      localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
      if ( !tp )
        goto LABEL_19;
      tp->fields.from = localPosition;
      this = *p_tp;
      if ( !*p_tp )
        goto LABEL_19;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
      bannerList = v3->fields.bannerList;
    }
    ++v5;
    if ( !bannerList )
      goto LABEL_19;
  }
}


void SetMoveBannerControll__rePositionRight(SetMoveBannerControll_o *this, const MethodInfo *method)
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
  UnityEngine_Vector3_o v13; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  v3 = this;
  if ( (byte_4C22150 & 1) == 0 )
  {
    this = (SetMoveBannerControll_o *)sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    byte_4C22150 = 1;
  }
  bannerList = v3->fields.bannerList;
  if ( !bannerList )
LABEL_19:
    sub_1C2D6EC(this, method);
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
    this = (SetMoveBannerControll_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
    if ( !this )
      goto LABEL_19;
    LODWORD(v8) = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
    bannerList = v3->fields.bannerList;
    if ( !bannerList )
      goto LABEL_19;
    v9 = bannerList->max_length;
    if ( v8 == (float)(v3->fields.moveRightPos * (float)((float)v9 + -1.0)) )
    {
      if ( v5 >= (unsigned int)v9 )
LABEL_21:
        sub_1C2D6F4(this, method, v2);
      v10 = &bannerList->obj.klass + v5;
      v11 = (UnityEngine_GameObject_o *)v10[4];
      if ( !v11 )
        goto LABEL_19;
      this = (SetMoveBannerControll_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v10[4], 0);
      if ( !this )
        goto LABEL_19;
      v13.fields.x = v3->fields.moveLeftPos;
      v13.fields.y = 0.0;
      v13.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v13, 0);
      v3->fields.tp = (struct TweenPosition_o *)UnityEngine_GameObject__GetComponent_object_(
                                                  v11,
                                                  (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
      sub_1C2D434(&v3->fields.tp);
      tp = v3->fields.tp;
      this = (SetMoveBannerControll_o *)UnityEngine_GameObject__get_transform(v11, 0);
      if ( !this )
        goto LABEL_19;
      localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
      if ( !tp )
        goto LABEL_19;
      tp->fields.from = localPosition;
      this = *p_tp;
      if ( !*p_tp )
        goto LABEL_19;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
      bannerList = v3->fields.bannerList;
    }
    ++v5;
    if ( !bannerList )
      goto LABEL_19;
  }
}


void SetMoveBannerControll__setBanner(
        SetMoveBannerControll_o *this,
        System_Collections_Generic_List_EventEntity__o *eventDataList,
        const MethodInfo *method)
{
  void *bannerPanel; // x0
  System_Comparison_T__o *v6; // x21
  Il2CppObject *v7; // x22
  struct SetMoveBannerControll___c_StaticFields *static_fields; // x0
  __int64 size; // x20
  struct UnityEngine_GameObject_array **p_bannerList; // x21
  const MethodInfo *v11; // x2
  unsigned __int64 v12; // x26
  struct TweenPosition_o **p_tp; // x22
  __int64 v14; // x29
  UnityEngine_GameObject_o *bannerPb; // x24
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v17; // x24
  int v18; // s11
  float x; // s10
  float y; // s8
  float z; // s9
  float v22; // s11
  UnityEngine_Transform_o *v23; // x25
  struct TweenPosition_o *v24; // x25
  __int64 v25; // x2
  struct UnityEngine_GameObject_array *v26; // x8
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C2214D & 1) == 0 )
  {
    sub_1C2D490(&System_Comparison_EventEntity__TypeInfo);
    sub_1C2D490(&UnityEngine_GameObject___TypeInfo);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventEntity__Sort__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventEntity__get_Count__);
    sub_1C2D490(&Method_SetMoveBannerControll___c__setBanner_b__15_0__);
    sub_1C2D490(&SetMoveBannerControll___c_TypeInfo);
    sub_1C2D490(&StringLiteral_17021/*"banner_event_002"*/);
    byte_4C2214D = 1;
  }
  bannerPanel = SetMoveBannerControll___c_TypeInfo;
  if ( !SetMoveBannerControll___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SetMoveBannerControll___c_TypeInfo);
    bannerPanel = SetMoveBannerControll___c_TypeInfo;
  }
  v6 = *(System_Comparison_T__o **)(*((_QWORD *)bannerPanel + 23) + 8LL);
  if ( !v6 )
  {
    if ( !*((_DWORD *)bannerPanel + 56) )
    {
      j_il2cpp_runtime_class_init_0(bannerPanel);
      bannerPanel = SetMoveBannerControll___c_TypeInfo;
    }
    v7 = (Il2CppObject *)**((_QWORD **)bannerPanel + 23);
    v6 = (System_Comparison_T__o *)sub_1C2D6DC(System_Comparison_EventEntity__TypeInfo);
    System_Comparison_object____ctor(v6, v7, Method_SetMoveBannerControll___c__setBanner_b__15_0__, 0);
    static_fields = SetMoveBannerControll___c_TypeInfo->static_fields;
    static_fields->__9__15_0 = (struct System_Comparison_EventEntity__o *)v6;
    bannerPanel = (void *)sub_1C2D434(&static_fields->__9__15_0);
  }
  if ( !eventDataList )
    goto LABEL_35;
  System_Collections_Generic_List_object___Sort_58242632(
    (System_Collections_Generic_List_object__o *)eventDataList,
    v6,
    (const MethodInfo_378B648 *)Method_System_Collections_Generic_List_EventEntity__Sort__);
  size = (unsigned int)eventDataList->fields._size;
  this->fields.bannerList = (struct UnityEngine_GameObject_array *)sub_1C2D538(
                                                                     UnityEngine_GameObject___TypeInfo,
                                                                     (unsigned int)size);
  p_bannerList = &this->fields.bannerList;
  sub_1C2D434(&this->fields.bannerList);
  if ( (int)size >= 1 )
  {
    v12 = 0;
    p_tp = &this->fields.tp;
    v14 = 32;
    while ( 1 )
    {
      bannerPanel = this->fields.bannerPanel;
      if ( !bannerPanel )
        break;
      bannerPb = this->fields.bannerPb;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)bannerPanel, 0);
      bannerPanel = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, bannerPb, transform, 0, 0);
      v17 = (UnityEngine_GameObject_o *)bannerPanel;
      if ( (v12 & 1) != 0 )
      {
        if ( !bannerPanel )
          break;
        bannerPanel = UnityEngine_GameObject__GetComponent_object_(
                        (UnityEngine_GameObject_o *)bannerPanel,
                        (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        if ( !bannerPanel )
          break;
        UISprite__set_spriteName((UISprite_o *)bannerPanel, (System_String_o *)StringLiteral_17021/*"banner_event_002"*/, 0);
      }
      else if ( !bannerPanel )
      {
        break;
      }
      bannerPanel = UnityEngine_GameObject__GetComponent_object_(
                      v17,
                      (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( !bannerPanel )
        break;
      if ( !this->fields.bannerPanel )
        break;
      v18 = *((_DWORD *)bannerPanel + 42);
      bannerPanel = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.bannerPanel, 0);
      if ( !bannerPanel )
        break;
      localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)bannerPanel, 0);
      x = localPosition.fields.x;
      y = localPosition.fields.y;
      z = localPosition.fields.z;
      bannerPanel = UnityEngine_GameObject__get_transform(v17, 0);
      if ( !bannerPanel )
        break;
      v22 = (float)v18;
      v28.fields.x = (float)((float)(int)v12 * v22) + x;
      v28.fields.y = y;
      v28.fields.z = z;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)bannerPanel, v28, 0);
      bannerPanel = UnityEngine_GameObject__get_transform(v17, 0);
      v23 = (UnityEngine_Transform_o *)bannerPanel;
      if ( !byte_4C20DA6 )
      {
        bannerPanel = (void *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
        byte_4C20DA6 = 1;
      }
      if ( !v23 )
        break;
      UnityEngine_Transform__set_localScale(v23, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
      *p_tp = (struct TweenPosition_o *)UnityEngine_GameObject__GetComponent_object_(
                                          v17,
                                          (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
      sub_1C2D434(&this->fields.tp);
      bannerPanel = *p_tp;
      if ( !*p_tp )
        break;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)bannerPanel, 0, 0);
      v24 = *p_tp;
      bannerPanel = UnityEngine_GameObject__get_transform(v17, 0);
      if ( !bannerPanel )
        break;
      v29 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)bannerPanel, 0);
      if ( !v24 )
        break;
      v24->fields.from = v29;
      v26 = *p_bannerList;
      if ( !*p_bannerList )
        break;
      if ( v12 >= LODWORD(v26->max_length) )
        sub_1C2D6F4(bannerPanel, eventDataList, v25);
      *(Il2CppClass **)((char *)&v26->obj.klass + v14) = (Il2CppClass *)v17;
      sub_1C2D434((char *)v26 + v14);
      ++v12;
      v14 += 8;
      if ( size == v12 )
        goto LABEL_34;
    }
LABEL_35:
    sub_1C2D6EC(bannerPanel, eventDataList);
  }
  v22 = 0.0;
LABEL_34:
  this->fields.moveLeftPos = -v22;
  this->fields.moveRightPos = v22;
  SetMoveBannerControll__initEnableBtn(this, size, v11);
}


void SetMoveBannerControll__setEnabledBtn(SetMoveBannerControll_o *this, const MethodInfo *method)
{
  UnityEngine_Behaviour_o *lfBtn; // x0

  lfBtn = (UnityEngine_Behaviour_o *)this->fields.lfBtn;
  if ( !lfBtn
    || (UnityEngine_Behaviour__set_enabled(lfBtn, 0, 0), (lfBtn = (UnityEngine_Behaviour_o *)this->fields.rgBtn) == 0) )
  {
    sub_1C2D6EC(lfBtn, method);
  }
  UnityEngine_Behaviour__set_enabled(lfBtn, 0, 0);
}


void SetMoveBannerControll___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4C22151 & 1) == 0 )
  {
    sub_1C2D490(&SetMoveBannerControll___c_TypeInfo);
    byte_4C22151 = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(SetMoveBannerControll___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SetMoveBannerControll___c_TypeInfo->static_fields->__9 = (struct SetMoveBannerControll___c_o *)v1;
  sub_1C2D434(SetMoveBannerControll___c_TypeInfo->static_fields);
}


void SetMoveBannerControll___c___ctor(SetMoveBannerControll___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t SetMoveBannerControll___c___setBanner_b__15_0(
        SetMoveBannerControll___c_o *this,
        EventEntity_o *a,
        EventEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C2D6EC(this, a);
  return b->fields.bannerPriority - a->fields.bannerPriority;
}