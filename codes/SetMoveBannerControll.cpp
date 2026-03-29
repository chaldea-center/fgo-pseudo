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
    sub_1C93D2C(lfBtn, method);
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
  UnityEngine_Vector3_o localPosition; // 0:kr00_12.12
  UnityEngine_Vector3_o v12; // 0:s0.4,4:s1.4,8:s2.4

  SetMoveBannerControll__rePositionLeft(this, method);
  bannerList = this->fields.bannerList;
  if ( !bannerList )
LABEL_8:
    sub_1C93D2C(transform, v4);
  v6 = 0;
  while ( 1 )
  {
    max_length = bannerList->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
      sub_1C93D34(transform);
    v8 = &bannerList->obj.klass + v6;
    v9 = (UnityEngine_GameObject_o *)v8[4];
    if ( v9 )
    {
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v8[4], 0);
      if ( transform )
      {
        localPosition = UnityEngine_Transform__get_localPosition(transform, 0);
        v12.fields.y = localPosition.fields.y;
        v12.fields.z = localPosition.fields.z;
        v12.fields.x = localPosition.fields.x + this->fields.moveLeftPos;
        SetMoveBannerControll__moveBanner(this, v9, v12, v10);
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
  UnityEngine_Vector3_o localPosition; // 0:kr00_12.12
  UnityEngine_Vector3_o v12; // 0:s0.4,4:s1.4,8:s2.4

  SetMoveBannerControll__rePositionRight(this, method);
  bannerList = this->fields.bannerList;
  if ( !bannerList )
LABEL_8:
    sub_1C93D2C(transform, v4);
  v6 = 0;
  while ( 1 )
  {
    max_length = bannerList->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
      sub_1C93D34(transform);
    v8 = &bannerList->obj.klass + v6;
    v9 = (UnityEngine_GameObject_o *)v8[4];
    if ( v9 )
    {
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v8[4], 0);
      if ( transform )
      {
        localPosition = UnityEngine_Transform__get_localPosition(transform, 0);
        v12.fields.y = localPosition.fields.y;
        v12.fields.z = localPosition.fields.z;
        v12.fields.x = localPosition.fields.x + this->fields.moveRightPos;
        SetMoveBannerControll__moveBanner(this, v9, v12, v10);
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
  UnityEngine_Vector3_o localPosition; // 0:kr00_12.12
  UnityEngine_Vector3_o v9; // 0:s0.4,4:s1.4,8:s2.4

  bannerList = this->fields.bannerList;
  if ( !bannerList )
    goto LABEL_6;
  idx = this->fields.idx;
  v4 = this;
  if ( (unsigned int)idx >= LODWORD(bannerList->max_length) )
    sub_1C93D34(this);
  v5 = &bannerList->obj.klass + idx;
  v6 = (UnityEngine_GameObject_o *)v5[4];
  if ( !v6
    || (this = (SetMoveBannerControll_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v5[4], 0)) == 0 )
  {
LABEL_6:
    sub_1C93D2C(this, method);
  }
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  v9.fields.y = localPosition.fields.y;
  v9.fields.z = localPosition.fields.z;
  v9.fields.x = localPosition.fields.x + v4->fields.moveLeftPos;
  SetMoveBannerControll__moveBanner(v4, v6, v9, v7);
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
      sub_1C93D2C(lfBtn, *(_QWORD *)&cnt);
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
  Il2CppObject *Component_object; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  UnityEngine_Vector3_o v20; // 0:s1.4,4:s2.4,8:s3.4

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  v8 = this;
  if ( (byte_4D2B681 & 1) == 0 )
  {
    sub_1C93AD4(&EventDelegate_Callback_TypeInfo);
    sub_1C93AD4(&EventDelegate_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    this = (SetMoveBannerControll_o *)sub_1C93AD4(&Method_SetMoveBannerControll_OnMoveFinish__);
    byte_4D2B681 = 1;
  }
  p_tp = (SetMoveBannerControll_o **)&v8->fields.tp;
  tp = v8->fields.tp;
  if ( !tp )
    goto LABEL_9;
  onFinished = tp->fields.onFinished;
  v12 = (EventDelegate_Callback_o *)sub_1C93D20(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v12, (Il2CppObject *)v8, Method_SetMoveBannerControll_OnMoveFinish__, 0);
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  this = (SetMoveBannerControll_o *)EventDelegate__Set_49981852(onFinished, v12, 0);
  if ( !target
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             target,
                             (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___),
        *p_tp = (SetMoveBannerControll_o *)Component_object,
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&v8->fields.tp,
          (int32_t)Component_object,
          v14,
          v15,
          v16,
          v17,
          v18,
          v19),
        (this = *p_tp) == 0) )
  {
LABEL_9:
    sub_1C93D2C(this, target);
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0);
  v20.fields.x = x;
  v20.fields.y = y;
  v20.fields.z = z;
  TweenPosition__Begin(target, v8->fields.moveSpeed, v20, 0);
  ++v8->fields.idx;
}


void SetMoveBannerControll__rePositionLeft(SetMoveBannerControll_o *this, const MethodInfo *method)
{
  SetMoveBannerControll_o *v2; // x19
  struct UnityEngine_GameObject_array *bannerList; // x8
  signed int v4; // w22
  SetMoveBannerControll_o **p_tp; // x20
  signed int max_length; // w9
  int v7; // w9
  Il2CppClass **v8; // x8
  UnityEngine_GameObject_o *v9; // x21
  Il2CppObject *Component_object; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct TweenPosition_o *tp; // x24
  float v18; // s0
  UnityEngine_Vector3_o localPosition; // 0:kr14_12.12
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4D2B682 & 1) == 0 )
  {
    this = (SetMoveBannerControll_o *)sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    byte_4D2B682 = 1;
  }
  bannerList = v2->fields.bannerList;
  if ( !bannerList )
LABEL_19:
    sub_1C93D2C(this, method);
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
    this = (SetMoveBannerControll_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
    if ( !this )
      goto LABEL_19;
    LODWORD(v18) = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
    bannerList = v2->fields.bannerList;
    if ( !bannerList )
      goto LABEL_19;
    v7 = bannerList->max_length;
    if ( v18 == (float)(v2->fields.moveLeftPos * (float)((float)v7 + -1.0)) )
    {
      if ( v4 >= (unsigned int)v7 )
LABEL_21:
        sub_1C93D34(this);
      v8 = &bannerList->obj.klass + v4;
      v9 = (UnityEngine_GameObject_o *)v8[4];
      if ( !v9 )
        goto LABEL_19;
      this = (SetMoveBannerControll_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v8[4], 0);
      if ( !this )
        goto LABEL_19;
      v20.fields.x = v2->fields.moveRightPos;
      v20.fields.y = 0.0;
      v20.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v20, 0);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           v9,
                           (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
      v2->fields.tp = (struct TweenPosition_o *)Component_object;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&v2->fields.tp,
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
      this = *p_tp;
      if ( !*p_tp )
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
  SetMoveBannerControll_o **p_tp; // x20
  signed int max_length; // w9
  int v7; // w9
  Il2CppClass **v8; // x8
  UnityEngine_GameObject_o *v9; // x21
  Il2CppObject *Component_object; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct TweenPosition_o *tp; // x24
  float v18; // s0
  UnityEngine_Vector3_o localPosition; // 0:kr14_12.12
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4D2B683 & 1) == 0 )
  {
    this = (SetMoveBannerControll_o *)sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    byte_4D2B683 = 1;
  }
  bannerList = v2->fields.bannerList;
  if ( !bannerList )
LABEL_19:
    sub_1C93D2C(this, method);
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
    this = (SetMoveBannerControll_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
    if ( !this )
      goto LABEL_19;
    LODWORD(v18) = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
    bannerList = v2->fields.bannerList;
    if ( !bannerList )
      goto LABEL_19;
    v7 = bannerList->max_length;
    if ( v18 == (float)(v2->fields.moveRightPos * (float)((float)v7 + -1.0)) )
    {
      if ( v4 >= (unsigned int)v7 )
LABEL_21:
        sub_1C93D34(this);
      v8 = &bannerList->obj.klass + v4;
      v9 = (UnityEngine_GameObject_o *)v8[4];
      if ( !v9 )
        goto LABEL_19;
      this = (SetMoveBannerControll_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v8[4], 0);
      if ( !this )
        goto LABEL_19;
      v20.fields.x = v2->fields.moveLeftPos;
      v20.fields.y = 0.0;
      v20.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v20, 0);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           v9,
                           (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
      v2->fields.tp = (struct TweenPosition_o *)Component_object;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&v2->fields.tp,
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
      this = *p_tp;
      if ( !*p_tp )
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
  __int64 bannerPanel; // x0
  System_Comparison_T__o *v6; // x21
  Il2CppObject *v7; // x22
  struct SetMoveBannerControll___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  __int64 size; // x20
  struct UnityEngine_GameObject_array *v16; // x0
  struct UnityEngine_GameObject_array **p_bannerList; // x21
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  const MethodInfo *v24; // x2
  unsigned __int64 v25; // x26
  struct TweenPosition_o **p_tp; // x22
  __int64 v27; // x29
  UnityEngine_GameObject_o *bannerPb; // x24
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v30; // x24
  int v31; // s11
  float v32; // s11
  UnityEngine_Transform_o *v33; // x25
  Il2CppObject *Component_object; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  struct TweenPosition_o *v41; // x25
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  struct UnityEngine_GameObject_array *v48; // x8
  UnityEngine_Vector3_o localPosition; // 0:kr00_12.12
  UnityEngine_Vector3_o v50; // 0:kr14_12.12
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D2B680 & 1) == 0 )
  {
    sub_1C93AD4(&System_Comparison_EventEntity__TypeInfo);
    sub_1C93AD4(&UnityEngine_GameObject___TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventEntity__Sort__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventEntity__get_Count__);
    sub_1C93AD4(&Method_SetMoveBannerControll___c__setBanner_b__15_0__);
    sub_1C93AD4(&SetMoveBannerControll___c_TypeInfo);
    sub_1C93AD4(&StringLiteral_17150/*"banner_event_002"*/);
    byte_4D2B680 = 1;
  }
  bannerPanel = (__int64)SetMoveBannerControll___c_TypeInfo;
  if ( !SetMoveBannerControll___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SetMoveBannerControll___c_TypeInfo);
    bannerPanel = (__int64)SetMoveBannerControll___c_TypeInfo;
  }
  v6 = *(System_Comparison_T__o **)(*(_QWORD *)(bannerPanel + 184) + 8LL);
  if ( !v6 )
  {
    if ( !*(_DWORD *)(bannerPanel + 224) )
    {
      j_il2cpp_runtime_class_init_0(bannerPanel);
      bannerPanel = (__int64)SetMoveBannerControll___c_TypeInfo;
    }
    v7 = **(Il2CppObject ***)(bannerPanel + 184);
    v6 = (System_Comparison_T__o *)sub_1C93D20(System_Comparison_EventEntity__TypeInfo);
    System_Comparison_object____ctor(v6, v7, Method_SetMoveBannerControll___c__setBanner_b__15_0__, 0);
    static_fields = SetMoveBannerControll___c_TypeInfo->static_fields;
    static_fields->__9__15_0 = (struct System_Comparison_EventEntity__o *)v6;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->__9__15_0, (int32_t)v6, v9, v10, v11, v12, v13, v14);
  }
  if ( !eventDataList )
    goto LABEL_35;
  System_Collections_Generic_List_object___Sort_59225184(
    (System_Collections_Generic_List_object__o *)eventDataList,
    v6,
    (const MethodInfo_387B460 *)Method_System_Collections_Generic_List_EventEntity__Sort__);
  size = (unsigned int)eventDataList->fields._size;
  v16 = (struct UnityEngine_GameObject_array *)sub_1C93B7C(UnityEngine_GameObject___TypeInfo, (unsigned int)size);
  this->fields.bannerList = v16;
  p_bannerList = &this->fields.bannerList;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.bannerList, (int32_t)v16, v18, v19, v20, v21, v22, v23);
  if ( (int)size >= 1 )
  {
    v25 = 0;
    p_tp = &this->fields.tp;
    v27 = 32;
    while ( 1 )
    {
      bannerPanel = (__int64)this->fields.bannerPanel;
      if ( !bannerPanel )
        break;
      bannerPb = this->fields.bannerPb;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)bannerPanel, 0);
      bannerPanel = (__int64)BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, bannerPb, transform, 0, 0);
      v30 = (UnityEngine_GameObject_o *)bannerPanel;
      if ( (v25 & 1) != 0 )
      {
        if ( !bannerPanel )
          break;
        bannerPanel = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)bannerPanel,
                                 (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        if ( !bannerPanel )
          break;
        UISprite__set_spriteName((UISprite_o *)bannerPanel, (System_String_o *)StringLiteral_17150/*"banner_event_002"*/, 0);
      }
      else if ( !bannerPanel )
      {
        break;
      }
      bannerPanel = (__int64)UnityEngine_GameObject__GetComponent_object_(
                               v30,
                               (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( !bannerPanel )
        break;
      if ( !this->fields.bannerPanel )
        break;
      v31 = *(_DWORD *)(bannerPanel + 168);
      bannerPanel = (__int64)UnityEngine_Component__get_transform(
                               (UnityEngine_Component_o *)this->fields.bannerPanel,
                               0);
      if ( !bannerPanel )
        break;
      localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)bannerPanel, 0);
      bannerPanel = (__int64)UnityEngine_GameObject__get_transform(v30, 0);
      if ( !bannerPanel )
        break;
      v32 = (float)v31;
      v51.fields.x = (float)((float)(int)v25 * v32) + localPosition.fields.x;
      v51.fields.y = localPosition.fields.y;
      v51.fields.z = localPosition.fields.z;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)bannerPanel, v51, 0);
      bannerPanel = (__int64)UnityEngine_GameObject__get_transform(v30, 0);
      v33 = (UnityEngine_Transform_o *)bannerPanel;
      if ( !byte_4D2A13E )
      {
        bannerPanel = sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
        byte_4D2A13E = 1;
      }
      if ( !v33 )
        break;
      UnityEngine_Transform__set_localScale(v33, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           v30,
                           (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
      *p_tp = (struct TweenPosition_o *)Component_object;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&this->fields.tp,
        (int32_t)Component_object,
        v35,
        v36,
        v37,
        v38,
        v39,
        v40);
      bannerPanel = (__int64)*p_tp;
      if ( !*p_tp )
        break;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)bannerPanel, 0, 0);
      v41 = *p_tp;
      bannerPanel = (__int64)UnityEngine_GameObject__get_transform(v30, 0);
      if ( !bannerPanel )
        break;
      v50 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)bannerPanel, 0);
      if ( !v41 )
        break;
      v41->fields.from = v50;
      v48 = *p_bannerList;
      if ( !*p_bannerList )
        break;
      if ( v25 >= LODWORD(v48->max_length) )
        sub_1C93D34(bannerPanel);
      *(Il2CppClass **)((char *)&v48->obj.klass + v27) = (Il2CppClass *)v30;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)((char *)v48 + v27), (int32_t)v30, v42, v43, v44, v45, v46, v47);
      ++v25;
      v27 += 8;
      if ( size == v25 )
        goto LABEL_34;
    }
LABEL_35:
    sub_1C93D2C(bannerPanel, eventDataList);
  }
  v32 = 0.0;
LABEL_34:
  this->fields.moveLeftPos = -v32;
  this->fields.moveRightPos = v32;
  SetMoveBannerControll__initEnableBtn(this, size, v24);
}


void SetMoveBannerControll__setEnabledBtn(SetMoveBannerControll_o *this, const MethodInfo *method)
{
  UnityEngine_Behaviour_o *lfBtn; // x0

  lfBtn = (UnityEngine_Behaviour_o *)this->fields.lfBtn;
  if ( !lfBtn
    || (UnityEngine_Behaviour__set_enabled(lfBtn, 0, 0), (lfBtn = (UnityEngine_Behaviour_o *)this->fields.rgBtn) == 0) )
  {
    sub_1C93D2C(lfBtn, method);
  }
  UnityEngine_Behaviour__set_enabled(lfBtn, 0, 0);
}


void SetMoveBannerControll___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2B684 & 1) == 0 )
  {
    sub_1C93AD4(&SetMoveBannerControll___c_TypeInfo);
    byte_4D2B684 = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(SetMoveBannerControll___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SetMoveBannerControll___c_TypeInfo->static_fields->__9 = (struct SetMoveBannerControll___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)SetMoveBannerControll___c_TypeInfo->static_fields,
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
    sub_1C93D2C(this, a);
  return b->fields.bannerPriority - a->fields.bannerPriority;
}