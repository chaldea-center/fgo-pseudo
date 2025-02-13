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
    sub_1C22094(lfBtn, method);
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
    sub_1C22094(transform, v4);
  v6 = 0LL;
  while ( 1 )
  {
    max_length = bannerList->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
      sub_1C2209C(transform, v4);
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
    sub_1C22094(transform, v4);
  v6 = 0LL;
  while ( 1 )
  {
    max_length = bannerList->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
      sub_1C2209C(transform, v4);
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
    sub_1C2209C(this, method);
  v5 = &bannerList->obj.klass + idx;
  v6 = (UnityEngine_GameObject_o *)v5[4];
  if ( !v6
    || (this = (SetMoveBannerControll_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v5[4], 0LL)) == 0LL )
  {
LABEL_6:
    sub_1C22094(this, method);
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
      sub_1C22094(lfBtn, *(_QWORD *)&cnt);
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
  Il2CppObject *Component_object; // x0
  UnityEngine_Vector3_o v14; // 0:s1.4,4:s2.4,8:s3.4

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  v8 = this;
  if ( (byte_4BD7729 & 1) == 0 )
  {
    sub_1C21E38(&EventDelegate_Callback_TypeInfo);
    sub_1C21E38(&EventDelegate_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    this = (SetMoveBannerControll_o *)sub_1C21E38(&Method_SetMoveBannerControll_OnMoveFinish__);
    byte_4BD7729 = 1;
  }
  p_tp = (SetMoveBannerControll_o **)&v8->fields.tp;
  tp = v8->fields.tp;
  if ( !tp )
    goto LABEL_9;
  onFinished = tp->fields.onFinished;
  v12 = (EventDelegate_Callback_o *)sub_1C22084(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v12, (Il2CppObject *)v8, Method_SetMoveBannerControll_OnMoveFinish__, 0LL);
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  this = (SetMoveBannerControll_o *)EventDelegate__Set_47946052(onFinished, v12, 0LL);
  if ( !target
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             target,
                             (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___),
        *p_tp = (SetMoveBannerControll_o *)Component_object,
        sub_1C21DDC(&v8->fields.tp, Component_object),
        (this = *p_tp) == 0LL) )
  {
LABEL_9:
    sub_1C22094(this, target);
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL);
  v14.fields.x = x;
  v14.fields.y = y;
  v14.fields.z = z;
  TweenPosition__Begin(target, v8->fields.moveSpeed, v14, 0LL);
  ++v8->fields.idx;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SetMoveBannerControll__rePositionLeft(SetMoveBannerControll_o *this, const MethodInfo *method)
{
  SetMoveBannerControll_o *v2; // x19
  struct UnityEngine_GameObject_array *bannerList; // x8
  signed int v4; // w22
  SetMoveBannerControll_o **p_tp; // x20
  signed int max_length; // w9
  float v7; // s0
  int v8; // w9
  Il2CppClass **v9; // x8
  UnityEngine_GameObject_o *v10; // x21
  Il2CppObject *Component_object; // x0
  struct TweenPosition_o *tp; // x24
  float v13; // s0
  float v14; // s1
  float v15; // s2
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4BD772A & 1) == 0 )
  {
    this = (SetMoveBannerControll_o *)sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    byte_4BD772A = 1;
  }
  bannerList = v2->fields.bannerList;
  if ( !bannerList )
LABEL_19:
    sub_1C22094(this, method);
  v4 = 0;
  p_tp = (SetMoveBannerControll_o **)&v2->fields.tp;
  while ( 1 )
  {
    max_length = bannerList->max_length;
    if ( v4 >= max_length )
      break;
    if ( v4 >= (unsigned int)max_length )
      goto LABEL_21;
    this = (SetMoveBannerControll_o *)bannerList->m_Items[v4];
    if ( !this )
      goto LABEL_19;
    this = (SetMoveBannerControll_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
    if ( !this )
      goto LABEL_19;
    LODWORD(v7) = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
    bannerList = v2->fields.bannerList;
    if ( !bannerList )
      goto LABEL_19;
    v8 = bannerList->max_length;
    if ( v7 == (float)(v2->fields.moveLeftPos * (float)((float)v8 + -1.0)) )
    {
      if ( v4 >= (unsigned int)v8 )
LABEL_21:
        sub_1C2209C(this, method);
      v9 = &bannerList->obj.klass + v4;
      v10 = (UnityEngine_GameObject_o *)v9[4];
      if ( !v10 )
        goto LABEL_19;
      this = (SetMoveBannerControll_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v9[4], 0LL);
      if ( !this )
        goto LABEL_19;
      v16.fields.x = v2->fields.moveRightPos;
      v16.fields.y = 0.0;
      v16.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v16, 0LL);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           v10,
                           (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
      v2->fields.tp = (struct TweenPosition_o *)Component_object;
      sub_1C21DDC(&v2->fields.tp, Component_object);
      tp = v2->fields.tp;
      this = (SetMoveBannerControll_o *)UnityEngine_GameObject__get_transform(v10, 0LL);
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
      bannerList = v2->fields.bannerList;
    }
    ++v4;
    if ( !bannerList )
      goto LABEL_19;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SetMoveBannerControll__rePositionRight(SetMoveBannerControll_o *this, const MethodInfo *method)
{
  SetMoveBannerControll_o *v2; // x19
  struct UnityEngine_GameObject_array *bannerList; // x8
  signed int v4; // w22
  SetMoveBannerControll_o **p_tp; // x20
  signed int max_length; // w9
  float v7; // s0
  int v8; // w9
  Il2CppClass **v9; // x8
  UnityEngine_GameObject_o *v10; // x21
  Il2CppObject *Component_object; // x0
  struct TweenPosition_o *tp; // x24
  float v13; // s0
  float v14; // s1
  float v15; // s2
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4BD772B & 1) == 0 )
  {
    this = (SetMoveBannerControll_o *)sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    byte_4BD772B = 1;
  }
  bannerList = v2->fields.bannerList;
  if ( !bannerList )
LABEL_19:
    sub_1C22094(this, method);
  v4 = 0;
  p_tp = (SetMoveBannerControll_o **)&v2->fields.tp;
  while ( 1 )
  {
    max_length = bannerList->max_length;
    if ( v4 >= max_length )
      break;
    if ( v4 >= (unsigned int)max_length )
      goto LABEL_21;
    this = (SetMoveBannerControll_o *)bannerList->m_Items[v4];
    if ( !this )
      goto LABEL_19;
    this = (SetMoveBannerControll_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
    if ( !this )
      goto LABEL_19;
    LODWORD(v7) = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
    bannerList = v2->fields.bannerList;
    if ( !bannerList )
      goto LABEL_19;
    v8 = bannerList->max_length;
    if ( v7 == (float)(v2->fields.moveRightPos * (float)((float)v8 + -1.0)) )
    {
      if ( v4 >= (unsigned int)v8 )
LABEL_21:
        sub_1C2209C(this, method);
      v9 = &bannerList->obj.klass + v4;
      v10 = (UnityEngine_GameObject_o *)v9[4];
      if ( !v10 )
        goto LABEL_19;
      this = (SetMoveBannerControll_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v9[4], 0LL);
      if ( !this )
        goto LABEL_19;
      v16.fields.x = v2->fields.moveLeftPos;
      v16.fields.y = 0.0;
      v16.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v16, 0LL);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           v10,
                           (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
      v2->fields.tp = (struct TweenPosition_o *)Component_object;
      sub_1C21DDC(&v2->fields.tp, Component_object);
      tp = v2->fields.tp;
      this = (SetMoveBannerControll_o *)UnityEngine_GameObject__get_transform(v10, 0LL);
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
      bannerList = v2->fields.bannerList;
    }
    ++v4;
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
  System_Comparison_T__o *v6; // x21
  Il2CppObject *v7; // x22
  struct SetMoveBannerControll___c_StaticFields *static_fields; // x0
  __int64 size; // x20
  struct UnityEngine_GameObject_array *v10; // x0
  struct UnityEngine_GameObject_array **p_bannerList; // x21
  const MethodInfo *v12; // x2
  unsigned __int64 v13; // x26
  struct TweenPosition_o **p_tp; // x22
  __int64 v15; // x29
  UnityEngine_GameObject_o *bannerPb; // x24
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v18; // x24
  int v19; // s11
  float x; // s10
  float y; // s8
  float z; // s9
  float v23; // s11
  UnityEngine_Transform_o *v24; // x25
  Il2CppObject *Component_object; // x0
  struct TweenPosition_o *v26; // x25
  float v27; // s0
  float v28; // s1
  float v29; // s2
  struct UnityEngine_GameObject_array *v30; // x8
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BD7728 & 1) == 0 )
  {
    sub_1C21E38(&System_Comparison_EventEntity__TypeInfo);
    sub_1C21E38(&UnityEngine_GameObject___TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventEntity__Sort__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventEntity__get_Count__);
    sub_1C21E38(&Method_SetMoveBannerControll___c__setBanner_b__15_0__);
    sub_1C21E38(&SetMoveBannerControll___c_TypeInfo);
    sub_1C21E38(&StringLiteral_17347/*"banner_event_002"*/);
    byte_4BD7728 = 1;
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
    v6 = (System_Comparison_T__o *)sub_1C22084(System_Comparison_EventEntity__TypeInfo);
    System_Comparison_object____ctor(v6, v7, Method_SetMoveBannerControll___c__setBanner_b__15_0__, 0LL);
    static_fields = SetMoveBannerControll___c_TypeInfo->static_fields;
    static_fields->__9__15_0 = (struct System_Comparison_EventEntity__o *)v6;
    bannerPanel = (void *)sub_1C21DDC(&static_fields->__9__15_0, v6);
  }
  if ( !eventDataList )
    goto LABEL_35;
  System_Collections_Generic_List_object___Sort_56953720(
    (System_Collections_Generic_List_object__o *)eventDataList,
    v6,
    (const MethodInfo_3650B78 *)Method_System_Collections_Generic_List_EventEntity__Sort__);
  size = (unsigned int)eventDataList->fields._size;
  v10 = (struct UnityEngine_GameObject_array *)sub_1C21EE0(UnityEngine_GameObject___TypeInfo, (unsigned int)size);
  this->fields.bannerList = v10;
  p_bannerList = &this->fields.bannerList;
  sub_1C21DDC(&this->fields.bannerList, v10);
  if ( (int)size >= 1 )
  {
    v13 = 0LL;
    p_tp = &this->fields.tp;
    v15 = 32LL;
    while ( 1 )
    {
      bannerPanel = this->fields.bannerPanel;
      if ( !bannerPanel )
        break;
      bannerPb = this->fields.bannerPb;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)bannerPanel, 0LL);
      bannerPanel = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, bannerPb, transform, 0LL, 0LL);
      v18 = (UnityEngine_GameObject_o *)bannerPanel;
      if ( (v13 & 1) != 0 )
      {
        if ( !bannerPanel )
          break;
        bannerPanel = UnityEngine_GameObject__GetComponent_object_(
                        (UnityEngine_GameObject_o *)bannerPanel,
                        (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        if ( !bannerPanel )
          break;
        UISprite__set_spriteName((UISprite_o *)bannerPanel, (System_String_o *)StringLiteral_17347/*"banner_event_002"*/, 0LL);
      }
      else if ( !bannerPanel )
      {
        break;
      }
      bannerPanel = UnityEngine_GameObject__GetComponent_object_(
                      v18,
                      (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( !bannerPanel )
        break;
      if ( !this->fields.bannerPanel )
        break;
      v19 = *((_DWORD *)bannerPanel + 42);
      bannerPanel = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.bannerPanel, 0LL);
      if ( !bannerPanel )
        break;
      localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)bannerPanel, 0LL);
      x = localPosition.fields.x;
      y = localPosition.fields.y;
      z = localPosition.fields.z;
      bannerPanel = UnityEngine_GameObject__get_transform(v18, 0LL);
      if ( !bannerPanel )
        break;
      v23 = (float)v19;
      v32.fields.x = (float)((float)(int)v13 * v23) + x;
      v32.fields.y = y;
      v32.fields.z = z;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)bannerPanel, v32, 0LL);
      bannerPanel = UnityEngine_GameObject__get_transform(v18, 0LL);
      v24 = (UnityEngine_Transform_o *)bannerPanel;
      if ( !byte_4BD6BB6 )
      {
        bannerPanel = (void *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
        byte_4BD6BB6 = 1;
      }
      if ( !v24 )
        break;
      UnityEngine_Transform__set_localScale(v24, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           v18,
                           (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
      *p_tp = (struct TweenPosition_o *)Component_object;
      sub_1C21DDC(&this->fields.tp, Component_object);
      bannerPanel = *p_tp;
      if ( !*p_tp )
        break;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)bannerPanel, 0, 0LL);
      v26 = *p_tp;
      bannerPanel = UnityEngine_GameObject__get_transform(v18, 0LL);
      if ( !bannerPanel )
        break;
      *(UnityEngine_Vector3_o *)&v27 = UnityEngine_Transform__get_localPosition(
                                         (UnityEngine_Transform_o *)bannerPanel,
                                         0LL);
      if ( !v26 )
        break;
      v26->fields.from.fields.x = v27;
      v26->fields.from.fields.y = v28;
      v26->fields.from.fields.z = v29;
      v30 = *p_bannerList;
      if ( !*p_bannerList )
        break;
      if ( v13 >= v30->max_length )
        sub_1C2209C(bannerPanel, eventDataList);
      *(Il2CppClass **)((char *)&v30->obj.klass + v15) = (Il2CppClass *)v18;
      sub_1C21DDC((char *)v30 + v15, v18);
      ++v13;
      v15 += 8LL;
      if ( size == v13 )
        goto LABEL_34;
    }
LABEL_35:
    sub_1C22094(bannerPanel, eventDataList);
  }
  v23 = 0.0;
LABEL_34:
  this->fields.moveLeftPos = -v23;
  this->fields.moveRightPos = v23;
  SetMoveBannerControll__initEnableBtn(this, size, v12);
}


void __fastcall SetMoveBannerControll__setEnabledBtn(SetMoveBannerControll_o *this, const MethodInfo *method)
{
  UnityEngine_Behaviour_o *lfBtn; // x0

  lfBtn = (UnityEngine_Behaviour_o *)this->fields.lfBtn;
  if ( !lfBtn
    || (UnityEngine_Behaviour__set_enabled(lfBtn, 0, 0LL), (lfBtn = (UnityEngine_Behaviour_o *)this->fields.rgBtn) == 0LL) )
  {
    sub_1C22094(lfBtn, method);
  }
  UnityEngine_Behaviour__set_enabled(lfBtn, 0, 0LL);
}


void __fastcall SetMoveBannerControll___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4BD772C & 1) == 0 )
  {
    sub_1C21E38(&SetMoveBannerControll___c_TypeInfo);
    byte_4BD772C = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(SetMoveBannerControll___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  SetMoveBannerControll___c_TypeInfo->static_fields->__9 = (struct SetMoveBannerControll___c_o *)v1;
  sub_1C21DDC(SetMoveBannerControll___c_TypeInfo->static_fields, v1);
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
    sub_1C22094(this, a);
  return b->fields.bannerPriority - a->fields.bannerPriority;
}