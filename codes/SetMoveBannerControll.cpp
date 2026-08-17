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
    sub_2213CDC(lfBtn, method);
  UnityEngine_Behaviour__set_enabled(lfBtn, 1, 0);
}


void SetMoveBannerControll__OnMoveLeft(SetMoveBannerControll_o *this, const MethodInfo *method)
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
    sub_2213CDC(transform, v4);
  v6 = 0;
  while ( 1 )
  {
    max_length = bannerList->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
      sub_2213CE4(transform);
    v8 = &bannerList->obj.klass + v6;
    v9 = (UnityEngine_GameObject_o *)v8[4];
    if ( v9 )
    {
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v8[4], 0);
      if ( transform )
      {
        localPosition = UnityEngine_Transform__get_localPosition(transform, 0);
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


void SetMoveBannerControll__OnMoveRight(SetMoveBannerControll_o *this, const MethodInfo *method)
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
    sub_2213CDC(transform, v4);
  v6 = 0;
  while ( 1 )
  {
    max_length = bannerList->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
      sub_2213CE4(transform);
    v8 = &bannerList->obj.klass + v6;
    v9 = (UnityEngine_GameObject_o *)v8[4];
    if ( v9 )
    {
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v8[4], 0);
      if ( transform )
      {
        localPosition = UnityEngine_Transform__get_localPosition(transform, 0);
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


void SetMoveBannerControll__autoMoveLeft(SetMoveBannerControll_o *this, const MethodInfo *method)
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
  if ( (unsigned int)idx >= LODWORD(bannerList->max_length) )
    sub_2213CE4(this);
  v5 = &bannerList->obj.klass + idx;
  v6 = (UnityEngine_GameObject_o *)v5[4];
  if ( !v6
    || (this = (SetMoveBannerControll_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v5[4], 0)) == 0 )
  {
LABEL_6:
    sub_2213CDC(this, method);
  }
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  localPosition.fields.x = localPosition.fields.x + v4->fields.moveLeftPos;
  SetMoveBannerControll__moveBanner(v4, v6, localPosition, v7);
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
      sub_2213CDC(lfBtn, *(_QWORD *)&cnt);
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
  __int64 v13; // x1
  __int64 v14; // x2
  Il2CppObject *Component_object; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  UnityEngine_Vector3_o v22; // 0:s1.4,4:s2.4,8:s3.4

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  v8 = this;
  if ( (byte_596B3A3 & 1) == 0 )
  {
    sub_2213A60(&EventDelegate_Callback_TypeInfo);
    sub_2213A60(&EventDelegate_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    this = (SetMoveBannerControll_o *)sub_2213A60(&Method_SetMoveBannerControll_OnMoveFinish__);
    byte_596B3A3 = 1;
  }
  p_tp = (SetMoveBannerControll_o **)&v8->fields.tp;
  tp = v8->fields.tp;
  if ( !tp )
    goto LABEL_9;
  onFinished = tp->fields.onFinished;
  v12 = (EventDelegate_Callback_o *)sub_2213CCC(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v12, (Il2CppObject *)v8, Method_SetMoveBannerControll_OnMoveFinish__, 0);
  if ( !*(&EventDelegate_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, v13, v14);
  this = (SetMoveBannerControll_o *)EventDelegate__Set_56322328(onFinished, v12, 0);
  if ( !target
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             target,
                             (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___),
        *p_tp = (SetMoveBannerControll_o *)Component_object,
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v8->fields.tp,
          (int32_t)Component_object,
          v16,
          v17,
          v18,
          v19,
          v20,
          v21),
        (this = *p_tp) == 0) )
  {
LABEL_9:
    sub_2213CDC(this, target);
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0);
  v22.fields.x = x;
  v22.fields.y = y;
  v22.fields.z = z;
  TweenPosition__Begin(target, v8->fields.moveSpeed, v22, 0);
  ++v8->fields.idx;
}


void SetMoveBannerControll__rePositionLeft(SetMoveBannerControll_o *this, const MethodInfo *method)
{
  SetMoveBannerControll_o *v2; // x19
  struct UnityEngine_GameObject_array *bannerList; // x8
  signed int v4; // w22
  signed int max_length; // w9
  float v6; // s0
  int v7; // w9
  Il2CppClass **v8; // x8
  UnityEngine_GameObject_o *v9; // x20
  Il2CppObject *Component_object; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct TweenPosition_o *tp; // x23
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_596B3A4 & 1) == 0 )
  {
    this = (SetMoveBannerControll_o *)sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    byte_596B3A4 = 1;
  }
  bannerList = v2->fields.bannerList;
  if ( !bannerList )
LABEL_19:
    sub_2213CDC(this, method);
  v4 = 0;
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
    this = (SetMoveBannerControll_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
    if ( !this )
      goto LABEL_19;
    LODWORD(v6) = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
    bannerList = v2->fields.bannerList;
    if ( !bannerList )
      goto LABEL_19;
    v7 = bannerList->max_length;
    if ( v6 == (float)(v2->fields.moveLeftPos * (float)((float)v7 + -1.0)) )
    {
      if ( v4 >= (unsigned int)v7 )
LABEL_21:
        sub_2213CE4(this);
      v8 = &bannerList->obj.klass + v4;
      v9 = (UnityEngine_GameObject_o *)v8[4];
      if ( !v9 )
        goto LABEL_19;
      this = (SetMoveBannerControll_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v8[4], 0);
      if ( !this )
        goto LABEL_19;
      v18.fields.y = 0.0;
      v18.fields.z = 0.0;
      v18.fields.x = v2->fields.moveRightPos;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v18, 0);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           v9,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
      v2->fields.tp = (struct TweenPosition_o *)Component_object;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v2->fields.tp,
        (int32_t)Component_object,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16);
      tp = v2->fields.tp;
      this = (SetMoveBannerControll_o *)UnityEngine_GameObject__get_transform(v9, 0);
      if ( !this )
        goto LABEL_19;
      localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
      if ( !tp )
        goto LABEL_19;
      tp->fields.from = localPosition;
      this = (SetMoveBannerControll_o *)v2->fields.tp;
      if ( !this )
        goto LABEL_19;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
      bannerList = v2->fields.bannerList;
    }
    ++v4;
    if ( !bannerList )
      goto LABEL_19;
  }
}


void SetMoveBannerControll__rePositionRight(SetMoveBannerControll_o *this, const MethodInfo *method)
{
  SetMoveBannerControll_o *v2; // x19
  struct UnityEngine_GameObject_array *bannerList; // x8
  signed int v4; // w22
  signed int max_length; // w9
  float v6; // s0
  int v7; // w9
  Il2CppClass **v8; // x8
  UnityEngine_GameObject_o *v9; // x20
  Il2CppObject *Component_object; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct TweenPosition_o *tp; // x23
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_596B3A5 & 1) == 0 )
  {
    this = (SetMoveBannerControll_o *)sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    byte_596B3A5 = 1;
  }
  bannerList = v2->fields.bannerList;
  if ( !bannerList )
LABEL_19:
    sub_2213CDC(this, method);
  v4 = 0;
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
    this = (SetMoveBannerControll_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
    if ( !this )
      goto LABEL_19;
    LODWORD(v6) = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
    bannerList = v2->fields.bannerList;
    if ( !bannerList )
      goto LABEL_19;
    v7 = bannerList->max_length;
    if ( v6 == (float)(v2->fields.moveRightPos * (float)((float)v7 + -1.0)) )
    {
      if ( v4 >= (unsigned int)v7 )
LABEL_21:
        sub_2213CE4(this);
      v8 = &bannerList->obj.klass + v4;
      v9 = (UnityEngine_GameObject_o *)v8[4];
      if ( !v9 )
        goto LABEL_19;
      this = (SetMoveBannerControll_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v8[4], 0);
      if ( !this )
        goto LABEL_19;
      v18.fields.y = 0.0;
      v18.fields.z = 0.0;
      v18.fields.x = v2->fields.moveLeftPos;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v18, 0);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           v9,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
      v2->fields.tp = (struct TweenPosition_o *)Component_object;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v2->fields.tp,
        (int32_t)Component_object,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16);
      tp = v2->fields.tp;
      this = (SetMoveBannerControll_o *)UnityEngine_GameObject__get_transform(v9, 0);
      if ( !this )
        goto LABEL_19;
      localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
      if ( !tp )
        goto LABEL_19;
      tp->fields.from = localPosition;
      this = (SetMoveBannerControll_o *)v2->fields.tp;
      if ( !this )
        goto LABEL_19;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
      bannerList = v2->fields.bannerList;
    }
    ++v4;
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
  struct SetMoveBannerControll___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__15_0; // x21
  Il2CppObject *v8; // x22
  struct SetMoveBannerControll___c_StaticFields *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  __int64 size; // x20
  struct UnityEngine_GameObject_array *v17; // x0
  struct UnityEngine_GameObject_array **p_bannerList; // x21
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  const MethodInfo *v25; // x2
  unsigned __int64 v26; // x25
  __int64 v27; // x29
  UnityEngine_GameObject_o *bannerPb; // x23
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v30; // x23
  int v31; // s11
  float x; // s10
  float y; // s8
  float z; // s9
  float v35; // s11
  UnityEngine_Transform_o *v36; // x24
  Il2CppObject *Component_object; // x0
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  struct TweenPosition_o *tp; // x24
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  struct UnityEngine_GameObject_array *v51; // x8
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v53; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v54; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596B3A2 & 1) == 0 )
  {
    sub_2213A60(&System_Comparison_EventEntity__TypeInfo);
    sub_2213A60(&UnityEngine_GameObject___TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_2213A60(&Method_System_Collections_Generic_List_EventEntity__Sort__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventEntity__get_Count__);
    sub_2213A60(&Method_SetMoveBannerControll___c__setBanner_b__15_0__);
    sub_2213A60(&SetMoveBannerControll___c_TypeInfo);
    sub_2213A60(&StringLiteral_17752/*"banner_event_002"*/);
    byte_596B3A2 = 1;
  }
  bannerPanel = SetMoveBannerControll___c_TypeInfo;
  if ( !*(&SetMoveBannerControll___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SetMoveBannerControll___c_TypeInfo, eventDataList, method);
    bannerPanel = SetMoveBannerControll___c_TypeInfo;
  }
  static_fields = (struct SetMoveBannerControll___c_StaticFields *)*((_QWORD *)bannerPanel + 23);
  _9__15_0 = (System_Comparison_T__o *)static_fields->__9__15_0;
  if ( !_9__15_0 )
  {
    if ( !*((_DWORD *)bannerPanel + 57) )
    {
      j_il2cpp_runtime_class_init_0(bannerPanel, eventDataList, method);
      static_fields = SetMoveBannerControll___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__15_0 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_EventEntity__TypeInfo);
    System_Comparison_object____ctor(_9__15_0, v8, Method_SetMoveBannerControll___c__setBanner_b__15_0__, 0);
    v9 = SetMoveBannerControll___c_TypeInfo->static_fields;
    v9->__9__15_0 = (struct System_Comparison_EventEntity__o *)_9__15_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v9->__9__15_0, (int32_t)_9__15_0, v10, v11, v12, v13, v14, v15);
  }
  if ( !eventDataList )
    goto LABEL_34;
  System_Collections_Generic_List_object___Sort_71849708(
    (System_Collections_Generic_List_object__o *)eventDataList,
    _9__15_0,
    (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_EventEntity__Sort__);
  size = (unsigned int)eventDataList->fields._size;
  v17 = (struct UnityEngine_GameObject_array *)sub_2213B20(UnityEngine_GameObject___TypeInfo, (unsigned int)size);
  this->fields.bannerList = v17;
  p_bannerList = &this->fields.bannerList;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.bannerList, (int32_t)v17, v19, v20, v21, v22, v23, v24);
  if ( (int)size >= 1 )
  {
    v26 = 0;
    v27 = 32;
    while ( 1 )
    {
      bannerPanel = this->fields.bannerPanel;
      if ( !bannerPanel )
        break;
      bannerPb = this->fields.bannerPb;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)bannerPanel, 0);
      bannerPanel = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, bannerPb, transform, 0, 0);
      v30 = (UnityEngine_GameObject_o *)bannerPanel;
      if ( (v26 & 0x80000001) == 1 )
      {
        if ( !bannerPanel )
          break;
        bannerPanel = UnityEngine_GameObject__GetComponent_object_(
                        (UnityEngine_GameObject_o *)bannerPanel,
                        (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        if ( !bannerPanel )
          break;
        UISprite__set_spriteName((UISprite_o *)bannerPanel, (System_String_o *)StringLiteral_17752/*"banner_event_002"*/, 0);
      }
      else if ( !bannerPanel )
      {
        break;
      }
      bannerPanel = UnityEngine_GameObject__GetComponent_object_(
                      v30,
                      (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( !bannerPanel )
        break;
      if ( !this->fields.bannerPanel )
        break;
      v31 = *((_DWORD *)bannerPanel + 42);
      bannerPanel = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.bannerPanel, 0);
      if ( !bannerPanel )
        break;
      localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)bannerPanel, 0);
      x = localPosition.fields.x;
      y = localPosition.fields.y;
      z = localPosition.fields.z;
      bannerPanel = UnityEngine_GameObject__get_transform(v30, 0);
      if ( !bannerPanel )
        break;
      v35 = (float)v31;
      v53.fields.y = y;
      v53.fields.z = z;
      v53.fields.x = (float)((float)(int)v26 * v35) + x;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)bannerPanel, v53, 0);
      bannerPanel = UnityEngine_GameObject__get_transform(v30, 0);
      v36 = (UnityEngine_Transform_o *)bannerPanel;
      if ( !byte_5969AE5 )
      {
        bannerPanel = (void *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
        byte_5969AE5 = 1;
      }
      if ( !v36 )
        break;
      UnityEngine_Transform__set_localScale(v36, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           v30,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
      this->fields.tp = (struct TweenPosition_o *)Component_object;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.tp,
        (int32_t)Component_object,
        v38,
        v39,
        v40,
        v41,
        v42,
        v43);
      bannerPanel = this->fields.tp;
      if ( !bannerPanel )
        break;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)bannerPanel, 0, 0);
      tp = this->fields.tp;
      bannerPanel = UnityEngine_GameObject__get_transform(v30, 0);
      if ( !bannerPanel )
        break;
      v54 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)bannerPanel, 0);
      if ( !tp )
        break;
      tp->fields.from = v54;
      v51 = *p_bannerList;
      if ( !*p_bannerList )
        break;
      if ( v26 >= LODWORD(v51->max_length) )
        sub_2213CE4(bannerPanel);
      *(Il2CppClass **)((char *)&v51->obj.klass + v27) = (Il2CppClass *)v30;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)((char *)v51 + v27), (int32_t)v30, v45, v46, v47, v48, v49, v50);
      ++v26;
      v27 += 8;
      if ( size == v26 )
        goto LABEL_33;
    }
LABEL_34:
    sub_2213CDC(bannerPanel, eventDataList);
  }
  v35 = 0.0;
LABEL_33:
  this->fields.moveLeftPos = -v35;
  this->fields.moveRightPos = v35;
  SetMoveBannerControll__initEnableBtn(this, size, v25);
}


void SetMoveBannerControll__setEnabledBtn(SetMoveBannerControll_o *this, const MethodInfo *method)
{
  UnityEngine_Behaviour_o *lfBtn; // x0

  lfBtn = (UnityEngine_Behaviour_o *)this->fields.lfBtn;
  if ( !lfBtn
    || (UnityEngine_Behaviour__set_enabled(lfBtn, 0, 0), (lfBtn = (UnityEngine_Behaviour_o *)this->fields.rgBtn) == 0) )
  {
    sub_2213CDC(lfBtn, method);
  }
  UnityEngine_Behaviour__set_enabled(lfBtn, 0, 0);
}


void SetMoveBannerControll___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596B3A6 & 1) == 0 )
  {
    sub_2213A60(&SetMoveBannerControll___c_TypeInfo);
    byte_596B3A6 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(SetMoveBannerControll___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SetMoveBannerControll___c_TypeInfo->static_fields->__9 = (struct SetMoveBannerControll___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)SetMoveBannerControll___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_2213CDC(this, a);
  return b->fields.bannerPriority - a->fields.bannerPriority;
}