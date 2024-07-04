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
    sub_1B00F28(lfBtn, method);
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
    sub_1B00F28(transform, v4);
  v6 = 0LL;
  while ( 1 )
  {
    max_length = bannerList->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
      sub_1B00F30(transform, v4);
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
    sub_1B00F28(transform, v4);
  v6 = 0LL;
  while ( 1 )
  {
    max_length = bannerList->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
      sub_1B00F30(transform, v4);
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
    sub_1B00F30(this, method);
  v5 = &bannerList->obj.klass + idx;
  v6 = (UnityEngine_GameObject_o *)v5[4];
  if ( !v6
    || (this = (SetMoveBannerControll_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v5[4], 0LL)) == 0LL )
  {
LABEL_6:
    sub_1B00F28(this, method);
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
      sub_1B00F28(lfBtn, *(_QWORD *)&cnt);
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
  Il2CppObject *Component_object; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  UnityEngine_Vector3_o v19; // 0:s1.4,4:s2.4,8:s3.4

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  v8 = this;
  if ( (byte_48E6BEF & 1) == 0 )
  {
    sub_1B00CCC(&EventDelegate_Callback_TypeInfo, target);
    sub_1B00CCC(&EventDelegate_TypeInfo, v9);
    sub_1B00CCC(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, v10);
    this = (SetMoveBannerControll_o *)sub_1B00CCC(&Method_SetMoveBannerControll_OnMoveFinish__, v11);
    byte_48E6BEF = 1;
  }
  p_tp = (SetMoveBannerControll_o **)&v8->fields.tp;
  tp = v8->fields.tp;
  if ( !tp )
    goto LABEL_9;
  onFinished = tp->fields.onFinished;
  v15 = (EventDelegate_Callback_o *)sub_1B00F18(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v15, (Il2CppObject *)v8, Method_SetMoveBannerControll_OnMoveFinish__, 0LL);
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  this = (SetMoveBannerControll_o *)EventDelegate__Set_45634652(onFinished, v15, 0LL);
  if ( !target
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             target,
                             (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___),
        *p_tp = (SetMoveBannerControll_o *)Component_object,
        sub_1B00C70((ServantStatusBattleListViewItem_o *)&v8->fields.tp, (int32_t)Component_object, v17, v18),
        (this = *p_tp) == 0LL) )
  {
LABEL_9:
    sub_1B00F28(this, target);
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL);
  v19.fields.x = x;
  v19.fields.y = y;
  v19.fields.z = z;
  TweenPosition__Begin(target, v8->fields.moveSpeed, v19, 0LL);
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
  int32_t v12; // w2
  int32_t v13; // w3
  struct TweenPosition_o *tp; // x24
  float v15; // s0
  float v16; // s1
  float v17; // s2
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_48E6BF0 & 1) == 0 )
  {
    this = (SetMoveBannerControll_o *)sub_1B00CCC(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, method);
    byte_48E6BF0 = 1;
  }
  bannerList = v2->fields.bannerList;
  if ( !bannerList )
LABEL_19:
    sub_1B00F28(this, method);
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
        sub_1B00F30(this, method);
      v9 = &bannerList->obj.klass + v4;
      v10 = (UnityEngine_GameObject_o *)v9[4];
      if ( !v10 )
        goto LABEL_19;
      this = (SetMoveBannerControll_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v9[4], 0LL);
      if ( !this )
        goto LABEL_19;
      v18.fields.x = v2->fields.moveRightPos;
      v18.fields.y = 0.0;
      v18.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v18, 0LL);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           v10,
                           (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
      v2->fields.tp = (struct TweenPosition_o *)Component_object;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&v2->fields.tp, (int32_t)Component_object, v12, v13);
      tp = v2->fields.tp;
      this = (SetMoveBannerControll_o *)UnityEngine_GameObject__get_transform(v10, 0LL);
      if ( !this )
        goto LABEL_19;
      *(UnityEngine_Vector3_o *)&v15 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
      if ( !tp )
        goto LABEL_19;
      tp->fields.from.fields.x = v15;
      tp->fields.from.fields.y = v16;
      tp->fields.from.fields.z = v17;
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
  int32_t v12; // w2
  int32_t v13; // w3
  struct TweenPosition_o *tp; // x24
  float v15; // s0
  float v16; // s1
  float v17; // s2
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_48E6BF1 & 1) == 0 )
  {
    this = (SetMoveBannerControll_o *)sub_1B00CCC(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, method);
    byte_48E6BF1 = 1;
  }
  bannerList = v2->fields.bannerList;
  if ( !bannerList )
LABEL_19:
    sub_1B00F28(this, method);
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
        sub_1B00F30(this, method);
      v9 = &bannerList->obj.klass + v4;
      v10 = (UnityEngine_GameObject_o *)v9[4];
      if ( !v10 )
        goto LABEL_19;
      this = (SetMoveBannerControll_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v9[4], 0LL);
      if ( !this )
        goto LABEL_19;
      v18.fields.x = v2->fields.moveLeftPos;
      v18.fields.y = 0.0;
      v18.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v18, 0LL);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           v10,
                           (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
      v2->fields.tp = (struct TweenPosition_o *)Component_object;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&v2->fields.tp, (int32_t)Component_object, v12, v13);
      tp = v2->fields.tp;
      this = (SetMoveBannerControll_o *)UnityEngine_GameObject__get_transform(v10, 0LL);
      if ( !this )
        goto LABEL_19;
      *(UnityEngine_Vector3_o *)&v15 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
      if ( !tp )
        goto LABEL_19;
      tp->fields.from.fields.x = v15;
      tp->fields.from.fields.y = v16;
      tp->fields.from.fields.z = v17;
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
  int32_t v17; // w2
  int32_t v18; // w3
  __int64 size; // x20
  struct UnityEngine_GameObject_array *v20; // x0
  struct UnityEngine_GameObject_array **p_bannerList; // x21
  int32_t v22; // w2
  int32_t v23; // w3
  const MethodInfo *v24; // x2
  unsigned __int64 v25; // x26
  struct TweenPosition_o **p_tp; // x22
  __int64 v27; // x29
  UnityEngine_GameObject_o *bannerPb; // x24
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v30; // x24
  int v31; // s11
  float x; // s10
  float y; // s8
  float z; // s9
  float v35; // s11
  UnityEngine_Transform_o *v36; // x25
  Il2CppObject *Component_object; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  struct TweenPosition_o *v40; // x25
  int32_t v41; // w2
  int32_t v42; // w3
  float v43; // s0
  float v44; // s1
  float v45; // s2
  struct UnityEngine_GameObject_array *v46; // x8
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v48; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_48E6BEE & 1) == 0 )
  {
    sub_1B00CCC(&System_Comparison_EventEntity__TypeInfo, eventDataList);
    sub_1B00CCC(&UnityEngine_GameObject___TypeInfo, v5);
    sub_1B00CCC(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, v6);
    sub_1B00CCC(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_EventEntity__Sort__, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_List_EventEntity__get_Count__, v9);
    sub_1B00CCC(&Method_SetMoveBannerControll___c__setBanner_b__15_0__, v10);
    sub_1B00CCC(&SetMoveBannerControll___c_TypeInfo, v11);
    sub_1B00CCC(&StringLiteral_16828/*"banner_event_002"*/, v12);
    byte_48E6BEE = 1;
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
    v14 = (System_Comparison_T__o *)sub_1B00F18(System_Comparison_EventEntity__TypeInfo);
    System_Comparison_object____ctor(v14, v15, Method_SetMoveBannerControll___c__setBanner_b__15_0__, 0LL);
    static_fields = SetMoveBannerControll___c_TypeInfo->static_fields;
    static_fields->__9__15_0 = (struct System_Comparison_EventEntity__o *)v14;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->__9__15_0, (int32_t)v14, v17, v18);
  }
  if ( !eventDataList )
    goto LABEL_35;
  System_Collections_Generic_List_object___Sort_54277268(
    (System_Collections_Generic_List_object__o *)eventDataList,
    v14,
    (const MethodInfo_33C3494 *)Method_System_Collections_Generic_List_EventEntity__Sort__);
  size = (unsigned int)eventDataList->fields._size;
  v20 = (struct UnityEngine_GameObject_array *)sub_1B00D74(UnityEngine_GameObject___TypeInfo, (unsigned int)size);
  this->fields.bannerList = v20;
  p_bannerList = &this->fields.bannerList;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.bannerList, (int32_t)v20, v22, v23);
  if ( (int)size >= 1 )
  {
    v25 = 0LL;
    p_tp = &this->fields.tp;
    v27 = 32LL;
    while ( 1 )
    {
      bannerPanel = (__int64)this->fields.bannerPanel;
      if ( !bannerPanel )
        break;
      bannerPb = this->fields.bannerPb;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)bannerPanel, 0LL);
      bannerPanel = (__int64)BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, bannerPb, transform, 0LL, 0LL);
      v30 = (UnityEngine_GameObject_o *)bannerPanel;
      if ( (v25 & 1) != 0 )
      {
        if ( !bannerPanel )
          break;
        bannerPanel = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)bannerPanel,
                                 (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        if ( !bannerPanel )
          break;
        UISprite__set_spriteName((UISprite_o *)bannerPanel, (System_String_o *)StringLiteral_16828/*"banner_event_002"*/, 0LL);
      }
      else if ( !bannerPanel )
      {
        break;
      }
      bannerPanel = (__int64)UnityEngine_GameObject__GetComponent_object_(
                               v30,
                               (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( !bannerPanel )
        break;
      if ( !this->fields.bannerPanel )
        break;
      v31 = *(_DWORD *)(bannerPanel + 168);
      bannerPanel = (__int64)UnityEngine_Component__get_transform(
                               (UnityEngine_Component_o *)this->fields.bannerPanel,
                               0LL);
      if ( !bannerPanel )
        break;
      localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)bannerPanel, 0LL);
      x = localPosition.fields.x;
      y = localPosition.fields.y;
      z = localPosition.fields.z;
      bannerPanel = (__int64)UnityEngine_GameObject__get_transform(v30, 0LL);
      if ( !bannerPanel )
        break;
      v35 = (float)v31;
      v48.fields.x = (float)((float)(int)v25 * v35) + x;
      v48.fields.y = y;
      v48.fields.z = z;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)bannerPanel, v48, 0LL);
      bannerPanel = (__int64)UnityEngine_GameObject__get_transform(v30, 0LL);
      v36 = (UnityEngine_Transform_o *)bannerPanel;
      if ( !byte_48DD9F6 )
      {
        bannerPanel = sub_1B00CCC(&UnityEngine_Vector3_TypeInfo, eventDataList);
        byte_48DD9F6 = 1;
      }
      if ( !v36 )
        break;
      UnityEngine_Transform__set_localScale(v36, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           v30,
                           (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
      *p_tp = (struct TweenPosition_o *)Component_object;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.tp, (int32_t)Component_object, v38, v39);
      bannerPanel = (__int64)*p_tp;
      if ( !*p_tp )
        break;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)bannerPanel, 0, 0LL);
      v40 = *p_tp;
      bannerPanel = (__int64)UnityEngine_GameObject__get_transform(v30, 0LL);
      if ( !bannerPanel )
        break;
      *(UnityEngine_Vector3_o *)&v43 = UnityEngine_Transform__get_localPosition(
                                         (UnityEngine_Transform_o *)bannerPanel,
                                         0LL);
      if ( !v40 )
        break;
      v40->fields.from.fields.x = v43;
      v40->fields.from.fields.y = v44;
      v40->fields.from.fields.z = v45;
      v46 = *p_bannerList;
      if ( !*p_bannerList )
        break;
      if ( v25 >= v46->max_length )
        sub_1B00F30(bannerPanel, eventDataList);
      *(Il2CppClass **)((char *)&v46->obj.klass + v27) = (Il2CppClass *)v30;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)((char *)v46 + v27), (int32_t)v30, v41, v42);
      ++v25;
      v27 += 8LL;
      if ( size == v25 )
        goto LABEL_34;
    }
LABEL_35:
    sub_1B00F28(bannerPanel, eventDataList);
  }
  v35 = 0.0;
LABEL_34:
  this->fields.moveLeftPos = -v35;
  this->fields.moveRightPos = v35;
  SetMoveBannerControll__initEnableBtn(this, size, v24);
}


void __fastcall SetMoveBannerControll__setEnabledBtn(SetMoveBannerControll_o *this, const MethodInfo *method)
{
  UnityEngine_Behaviour_o *lfBtn; // x0

  lfBtn = (UnityEngine_Behaviour_o *)this->fields.lfBtn;
  if ( !lfBtn
    || (UnityEngine_Behaviour__set_enabled(lfBtn, 0, 0LL), (lfBtn = (UnityEngine_Behaviour_o *)this->fields.rgBtn) == 0LL) )
  {
    sub_1B00F28(lfBtn, method);
  }
  UnityEngine_Behaviour__set_enabled(lfBtn, 0, 0LL);
}


void __fastcall SetMoveBannerControll___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_48E6BF2 & 1) == 0 )
  {
    sub_1B00CCC(&SetMoveBannerControll___c_TypeInfo, v1);
    byte_48E6BF2 = 1;
  }
  v2 = (Il2CppObject *)sub_1B00F18(SetMoveBannerControll___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  SetMoveBannerControll___c_TypeInfo->static_fields->__9 = (struct SetMoveBannerControll___c_o *)v2;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)SetMoveBannerControll___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
    sub_1B00F28(this, a);
  return b->fields.bannerPriority - a->fields.bannerPriority;
}