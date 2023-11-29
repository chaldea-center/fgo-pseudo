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
  struct UIButton_o *lfBtn; // x0
  UnityEngine_Behaviour_o *v4; // x0
  struct UIButton_o *rgBtn; // x0
  UnityEngine_Behaviour_o *v6; // x0

  lfBtn = this->fields.lfBtn;
  if ( !lfBtn )
    goto LABEL_9;
  if ( (((__int64 (__fastcall *)(struct UIButton_o *, Il2CppMethodPointer))lfBtn->klass->vtable._4_get_isEnabled.method)(
          lfBtn,
          lfBtn->klass->vtable._5_set_isEnabled.methodPtr) & 1) == 0 )
  {
    v4 = (UnityEngine_Behaviour_o *)this->fields.lfBtn;
    if ( !v4 )
      goto LABEL_9;
    UnityEngine_Behaviour__set_enabled(v4, 1, 0LL);
  }
  rgBtn = this->fields.rgBtn;
  if ( !rgBtn )
    goto LABEL_9;
  if ( (((__int64 (__fastcall *)(struct UIButton_o *, Il2CppMethodPointer))rgBtn->klass->vtable._4_get_isEnabled.method)(
          rgBtn,
          rgBtn->klass->vtable._5_set_isEnabled.methodPtr) & 1) != 0 )
    return;
  v6 = (UnityEngine_Behaviour_o *)this->fields.rgBtn;
  if ( !v6 )
LABEL_9:
    sub_B170D4();
  UnityEngine_Behaviour__set_enabled(v6, 1, 0LL);
}


void __fastcall SetMoveBannerControll__OnMoveLeft(SetMoveBannerControll_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  struct UnityEngine_GameObject_array *bannerList; // x8
  __int64 v7; // x21
  int max_length; // w9
  Il2CppClass **v9; // x8
  UnityEngine_GameObject_o *v10; // x20
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v12; // x2
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  SetMoveBannerControll__rePositionLeft(this, method);
  bannerList = this->fields.bannerList;
  if ( !bannerList )
LABEL_8:
    sub_B170D4();
  v7 = 0LL;
  while ( 1 )
  {
    max_length = bannerList->max_length;
    if ( (int)v7 >= max_length )
      break;
    if ( (unsigned int)v7 >= max_length )
    {
      sub_B17100(v3, v4, v5);
      sub_B170A0();
    }
    v9 = &bannerList->obj.klass + v7;
    v10 = (UnityEngine_GameObject_o *)v9[4];
    if ( v10 )
    {
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v9[4], 0LL);
      if ( transform )
      {
        localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
        localPosition.fields.x = localPosition.fields.x + this->fields.moveLeftPos;
        SetMoveBannerControll__moveBanner(this, v10, localPosition, v12);
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
  __int64 v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  struct UnityEngine_GameObject_array *bannerList; // x8
  __int64 v7; // x21
  int max_length; // w9
  Il2CppClass **v9; // x8
  UnityEngine_GameObject_o *v10; // x20
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v12; // x2
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  SetMoveBannerControll__rePositionRight(this, method);
  bannerList = this->fields.bannerList;
  if ( !bannerList )
LABEL_8:
    sub_B170D4();
  v7 = 0LL;
  while ( 1 )
  {
    max_length = bannerList->max_length;
    if ( (int)v7 >= max_length )
      break;
    if ( (unsigned int)v7 >= max_length )
    {
      sub_B17100(v3, v4, v5);
      sub_B170A0();
    }
    v9 = &bannerList->obj.klass + v7;
    v10 = (UnityEngine_GameObject_o *)v9[4];
    if ( v10 )
    {
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v9[4], 0LL);
      if ( transform )
      {
        localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
        localPosition.fields.x = localPosition.fields.x + this->fields.moveRightPos;
        SetMoveBannerControll__moveBanner(this, v10, localPosition, v12);
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
  Il2CppClass **v6; // x8
  UnityEngine_GameObject_o *v7; // x20
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v9; // x2
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  bannerList = this->fields.bannerList;
  if ( !bannerList )
    goto LABEL_6;
  idx = this->fields.idx;
  if ( (unsigned int)idx >= bannerList->max_length )
  {
    sub_B17100(this, method, v2);
    sub_B170A0();
  }
  v6 = &bannerList->obj.klass + idx;
  v7 = (UnityEngine_GameObject_o *)v6[4];
  if ( !v7 || (transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v6[4], 0LL)) == 0LL )
LABEL_6:
    sub_B170D4();
  localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
  localPosition.fields.x = localPosition.fields.x + this->fields.moveLeftPos;
  SetMoveBannerControll__moveBanner(this, v7, localPosition, v9);
}


void __fastcall SetMoveBannerControll__buildMoveBanner(SetMoveBannerControll_o *this, const MethodInfo *method)
{
  if ( this->fields.isClickLf )
    SetMoveBannerControll__OnMoveLeft(this, method);
  if ( this->fields.isClickRh )
    SetMoveBannerControll__OnMoveRight(this, method);
  SetMoveBannerControll__setEnabledBtn(this, method);
}


void __fastcall SetMoveBannerControll__initEnableBtn(
        SetMoveBannerControll_o *this,
        int32_t cnt,
        const MethodInfo *method)
{
  UnityEngine_Component_o *lfBtn; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *rgBtn; // x0
  UnityEngine_GameObject_o *v7; // x0

  if ( cnt <= 1 )
  {
    lfBtn = (UnityEngine_Component_o *)this->fields.lfBtn;
    if ( !lfBtn
      || (gameObject = UnityEngine_Component__get_gameObject(lfBtn, 0LL)) == 0LL
      || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL),
          (rgBtn = (UnityEngine_Component_o *)this->fields.rgBtn) == 0LL)
      || (v7 = UnityEngine_Component__get_gameObject(rgBtn, 0LL)) == 0LL )
    {
      sub_B170D4();
    }
    UnityEngine_GameObject__SetActive(v7, 0, 0LL);
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
  __int64 v5; // x4
  float z; // s8
  float y; // s9
  float x; // s10
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  struct TweenPosition_o *tp; // x8
  UnityEngine_Behaviour_o **p_tp; // x21
  System_Collections_Generic_List_EventDelegate__o *onFinished; // x22
  EventDelegate_Callback_o *v17; // x23
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  UnityEngine_Vector3_o v25; // 0:s1.4,4:s2.4,8:s3.4

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_40FC3D0 & 1) == 0 )
  {
    sub_B16FFC(&EventDelegate_Callback_TypeInfo, target);
    sub_B16FFC(&EventDelegate_TypeInfo, v11);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, v12);
    sub_B16FFC(&Method_SetMoveBannerControll_OnMoveFinish__, v13);
    byte_40FC3D0 = 1;
  }
  p_tp = (UnityEngine_Behaviour_o **)&this->fields.tp;
  tp = this->fields.tp;
  if ( !tp )
    goto LABEL_10;
  onFinished = tp->fields.onFinished;
  v17 = (EventDelegate_Callback_o *)sub_B170CC(EventDelegate_Callback_TypeInfo, target, method, v4, v5);
  EventDelegate_Callback___ctor(v17, (Il2CppObject *)this, Method_SetMoveBannerControll_OnMoveFinish__, 0LL);
  if ( (BYTE3(EventDelegate_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventDelegate_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  }
  EventDelegate__Set_29416612(onFinished, v17, 0LL);
  if ( !target
    || (Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                           target,
                                                           (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___),
        *p_tp = (UnityEngine_Behaviour_o *)Component_srcLineSprite,
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.tp,
          Component_srcLineSprite,
          v19,
          v20,
          v21,
          v22,
          v23,
          v24),
        !*p_tp) )
  {
LABEL_10:
    sub_B170D4();
  }
  UnityEngine_Behaviour__set_enabled(*p_tp, 1, 0LL);
  v25.fields.x = x;
  v25.fields.y = y;
  v25.fields.z = z;
  TweenPosition__Begin(target, this->fields.moveSpeed, v25, 0LL);
  ++this->fields.idx;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SetMoveBannerControll__rePositionLeft(SetMoveBannerControll_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  SetMoveBannerControll_o *v3; // x19
  struct UnityEngine_GameObject_array *bannerList; // x8
  UnityEngine_Behaviour_o **p_tp; // x20
  __int64 v6; // x22
  int max_length; // w9
  unsigned int v8; // w21
  UnityEngine_GameObject_o *v9; // x0
  UnityEngine_Transform_o *transform; // x0
  float v11; // s0
  int v12; // w9
  UnityEngine_GameObject_o *v13; // x21
  UnityEngine_Transform_o *v14; // x0
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct TweenPosition_o *tp; // x24
  UnityEngine_Transform_o *v23; // x0
  float v24; // s0
  float v25; // s1
  float v26; // s2
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4

  v3 = this;
  if ( (byte_40FC3D1 & 1) == 0 )
  {
    this = (SetMoveBannerControll_o *)sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, method);
    byte_40FC3D1 = 1;
  }
  bannerList = v3->fields.bannerList;
  if ( !bannerList )
LABEL_19:
    sub_B170D4();
  p_tp = (UnityEngine_Behaviour_o **)&v3->fields.tp;
  v6 = 4LL;
  while ( 1 )
  {
    max_length = bannerList->max_length;
    v8 = v6 - 4;
    if ( (int)v6 - 4 >= max_length )
      break;
    if ( v8 >= max_length )
      goto LABEL_21;
    v9 = (UnityEngine_GameObject_o *)*((_QWORD *)&bannerList->obj.klass + v6);
    if ( !v9 )
      goto LABEL_19;
    transform = UnityEngine_GameObject__get_transform(v9, 0LL);
    if ( !transform )
      goto LABEL_19;
    LODWORD(v11) = (unsigned int)UnityEngine_Transform__get_localPosition(transform, 0LL);
    bannerList = v3->fields.bannerList;
    if ( !bannerList )
      goto LABEL_19;
    v12 = bannerList->max_length;
    if ( v11 == (float)(v3->fields.moveLeftPos * (float)((float)v12 + -1.0)) )
    {
      if ( v8 >= v12 )
      {
LABEL_21:
        sub_B17100(this, method, v2);
        sub_B170A0();
      }
      v13 = (UnityEngine_GameObject_o *)*((_QWORD *)&bannerList->obj.klass + v6);
      if ( !v13 )
        goto LABEL_19;
      v14 = UnityEngine_GameObject__get_transform(*((UnityEngine_GameObject_o **)&bannerList->obj.klass + v6), 0LL);
      if ( !v14 )
        goto LABEL_19;
      v27.fields.x = v3->fields.moveRightPos;
      v27.fields.y = 0.0;
      v27.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition(v14, v27, 0LL);
      Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         v13,
                                                         (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
      v3->fields.tp = (struct TweenPosition_o *)Component_srcLineSprite;
      sub_B16F98((BattleServantConfConponent_o *)&v3->fields.tp, Component_srcLineSprite, v16, v17, v18, v19, v20, v21);
      tp = v3->fields.tp;
      v23 = UnityEngine_GameObject__get_transform(v13, 0LL);
      if ( !v23 )
        goto LABEL_19;
      *(UnityEngine_Vector3_o *)&v24 = UnityEngine_Transform__get_localPosition(v23, 0LL);
      if ( !tp )
        goto LABEL_19;
      tp->fields.from.fields.x = v24;
      tp->fields.from.fields.y = v25;
      tp->fields.from.fields.z = v26;
      if ( !*p_tp )
        goto LABEL_19;
      UnityEngine_Behaviour__set_enabled(*p_tp, 0, 0LL);
      bannerList = v3->fields.bannerList;
    }
    ++v6;
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
  UnityEngine_Behaviour_o **p_tp; // x20
  __int64 v6; // x22
  int max_length; // w9
  unsigned int v8; // w21
  UnityEngine_GameObject_o *v9; // x0
  UnityEngine_Transform_o *transform; // x0
  float v11; // s0
  int v12; // w9
  UnityEngine_GameObject_o *v13; // x21
  UnityEngine_Transform_o *v14; // x0
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct TweenPosition_o *tp; // x24
  UnityEngine_Transform_o *v23; // x0
  float v24; // s0
  float v25; // s1
  float v26; // s2
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4

  v3 = this;
  if ( (byte_40FC3D2 & 1) == 0 )
  {
    this = (SetMoveBannerControll_o *)sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, method);
    byte_40FC3D2 = 1;
  }
  bannerList = v3->fields.bannerList;
  if ( !bannerList )
LABEL_19:
    sub_B170D4();
  p_tp = (UnityEngine_Behaviour_o **)&v3->fields.tp;
  v6 = 4LL;
  while ( 1 )
  {
    max_length = bannerList->max_length;
    v8 = v6 - 4;
    if ( (int)v6 - 4 >= max_length )
      break;
    if ( v8 >= max_length )
      goto LABEL_21;
    v9 = (UnityEngine_GameObject_o *)*((_QWORD *)&bannerList->obj.klass + v6);
    if ( !v9 )
      goto LABEL_19;
    transform = UnityEngine_GameObject__get_transform(v9, 0LL);
    if ( !transform )
      goto LABEL_19;
    LODWORD(v11) = (unsigned int)UnityEngine_Transform__get_localPosition(transform, 0LL);
    bannerList = v3->fields.bannerList;
    if ( !bannerList )
      goto LABEL_19;
    v12 = bannerList->max_length;
    if ( v11 == (float)(v3->fields.moveRightPos * (float)((float)v12 + -1.0)) )
    {
      if ( v8 >= v12 )
      {
LABEL_21:
        sub_B17100(this, method, v2);
        sub_B170A0();
      }
      v13 = (UnityEngine_GameObject_o *)*((_QWORD *)&bannerList->obj.klass + v6);
      if ( !v13 )
        goto LABEL_19;
      v14 = UnityEngine_GameObject__get_transform(*((UnityEngine_GameObject_o **)&bannerList->obj.klass + v6), 0LL);
      if ( !v14 )
        goto LABEL_19;
      v27.fields.x = v3->fields.moveLeftPos;
      v27.fields.y = 0.0;
      v27.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition(v14, v27, 0LL);
      Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         v13,
                                                         (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
      v3->fields.tp = (struct TweenPosition_o *)Component_srcLineSprite;
      sub_B16F98((BattleServantConfConponent_o *)&v3->fields.tp, Component_srcLineSprite, v16, v17, v18, v19, v20, v21);
      tp = v3->fields.tp;
      v23 = UnityEngine_GameObject__get_transform(v13, 0LL);
      if ( !v23 )
        goto LABEL_19;
      *(UnityEngine_Vector3_o *)&v24 = UnityEngine_Transform__get_localPosition(v23, 0LL);
      if ( !tp )
        goto LABEL_19;
      tp->fields.from.fields.x = v24;
      tp->fields.from.fields.y = v25;
      tp->fields.from.fields.z = v26;
      if ( !*p_tp )
        goto LABEL_19;
      UnityEngine_Behaviour__set_enabled(*p_tp, 0, 0LL);
      bannerList = v3->fields.bannerList;
    }
    ++v6;
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
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  SetMoveBannerControll___c_c *v16; // x0
  struct SetMoveBannerControll___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__15_0; // x21
  Il2CppObject *v19; // x22
  struct SetMoveBannerControll___c_StaticFields *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  int32_t size; // w22
  signed __int64 v28; // x20
  __int64 v29; // x2
  struct UnityEngine_GameObject_array *v30; // x0
  struct UnityEngine_GameObject_array **p_bannerList; // x21
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  const MethodInfo *v38; // x2
  unsigned __int64 v39; // x25
  UnityEngine_Behaviour_o **p_tp; // x22
  __int64 v41; // x26
  UnityEngine_Component_o *bannerPanel; // x0
  UnityEngine_GameObject_o *bannerPb; // x23
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *Object; // x0
  UnityEngine_GameObject_o *v46; // x23
  UISprite_o *Component_srcLineSprite; // x0
  srcLineSprite_o *v48; // x0
  int mFSM; // s11
  UnityEngine_Transform_o *v50; // x0
  float x; // s10
  float y; // s8
  float z; // s9
  UnityEngine_Transform_o *v54; // x0
  float v55; // s11
  UnityEngine_Transform_o *v56; // x24
  int v57; // s0
  System_Int32_array **v60; // x0
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  UnityEngine_Behaviour_o *v67; // x24
  UnityEngine_Transform_o *v68; // x0
  int v69; // s0
  int v70; // s1
  int v71; // s2
  unsigned int *v72; // x24
  __int64 v73; // x0
  __int64 v74; // x1
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v82; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FC3CF & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Comparison_EventEntity___ctor__, eventDataList);
    sub_B16FFC(&System_Comparison_EventEntity__TypeInfo, v7);
    sub_B16FFC(&UnityEngine_GameObject___TypeInfo, v8);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, v9);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventEntity__Sort__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventEntity__get_Count__, v12);
    sub_B16FFC(&Method_SetMoveBannerControll___c__setBanner_b__15_0__, v13);
    sub_B16FFC(&SetMoveBannerControll___c_TypeInfo, v14);
    sub_B16FFC(&StringLiteral_16538, v15);
    byte_40FC3CF = 1;
  }
  v16 = SetMoveBannerControll___c_TypeInfo;
  if ( (BYTE3(SetMoveBannerControll___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SetMoveBannerControll___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SetMoveBannerControll___c_TypeInfo);
    v16 = SetMoveBannerControll___c_TypeInfo;
  }
  static_fields = v16->static_fields;
  _9__15_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__15_0;
  if ( !_9__15_0 )
  {
    if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      static_fields = SetMoveBannerControll___c_TypeInfo->static_fields;
    }
    v19 = (Il2CppObject *)static_fields->__9;
    _9__15_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                           System_Comparison_EventEntity__TypeInfo,
                                                                           eventDataList,
                                                                           method,
                                                                           v3,
                                                                           v4);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__15_0,
      v19,
      Method_SetMoveBannerControll___c__setBanner_b__15_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_EventEntity___ctor__);
    v20 = SetMoveBannerControll___c_TypeInfo->static_fields;
    v20->__9__15_0 = (struct System_Comparison_EventEntity__o *)_9__15_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v20->__9__15_0,
      (System_Int32_array **)_9__15_0,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
  }
  if ( !eventDataList )
    goto LABEL_36;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)eventDataList,
    (System_Comparison_T__o *)_9__15_0,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_EventEntity__Sort__);
  size = eventDataList->fields._size;
  v28 = size;
  v30 = (struct UnityEngine_GameObject_array *)sub_B17014(UnityEngine_GameObject___TypeInfo, (unsigned int)size, v29);
  this->fields.bannerList = v30;
  p_bannerList = &this->fields.bannerList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.bannerList,
    (System_Int32_array **)v30,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  if ( size >= 1 )
  {
    v39 = 0LL;
    p_tp = (UnityEngine_Behaviour_o **)&this->fields.tp;
    v41 = 8LL;
    while ( 1 )
    {
      bannerPanel = (UnityEngine_Component_o *)this->fields.bannerPanel;
      if ( !bannerPanel )
        break;
      bannerPb = this->fields.bannerPb;
      transform = UnityEngine_Component__get_transform(bannerPanel, 0LL);
      Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, bannerPb, transform, 0LL, 0LL);
      v46 = Object;
      if ( (v39 & 1) != 0 )
      {
        if ( !Object )
          break;
        Component_srcLineSprite = (UISprite_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                  Object,
                                                  (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        if ( !Component_srcLineSprite )
          break;
        UISprite__set_spriteName(Component_srcLineSprite, (System_String_o *)StringLiteral_16538, 0LL);
      }
      else if ( !Object )
      {
        break;
      }
      v48 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
              v46,
              (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( !v48 )
        break;
      if ( !this->fields.bannerPanel )
        break;
      mFSM = (int)v48[1].fields.mFSM;
      v50 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.bannerPanel, 0LL);
      if ( !v50 )
        break;
      localPosition = UnityEngine_Transform__get_localPosition(v50, 0LL);
      x = localPosition.fields.x;
      y = localPosition.fields.y;
      z = localPosition.fields.z;
      v54 = UnityEngine_GameObject__get_transform(v46, 0LL);
      if ( !v54 )
        break;
      v55 = (float)mFSM;
      v82.fields.x = (float)((float)(int)v39 * v55) + x;
      v82.fields.y = y;
      v82.fields.z = z;
      UnityEngine_Transform__set_localPosition(v54, v82, 0LL);
      v56 = UnityEngine_GameObject__get_transform(v46, 0LL);
      *(UnityEngine_Vector3_o *)&v57 = UnityEngine_Vector3__get_one(0LL);
      if ( !v56 )
        break;
      UnityEngine_Transform__set_localScale(v56, *(UnityEngine_Vector3_o *)&v57, 0LL);
      v60 = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                     v46,
                                     (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
      *p_tp = (UnityEngine_Behaviour_o *)v60;
      sub_B16F98((BattleServantConfConponent_o *)&this->fields.tp, v60, v61, v62, v63, v64, v65, v66);
      if ( !*p_tp )
        break;
      UnityEngine_Behaviour__set_enabled(*p_tp, 0, 0LL);
      v67 = *p_tp;
      v68 = UnityEngine_GameObject__get_transform(v46, 0LL);
      if ( !v68 )
        break;
      *(UnityEngine_Vector3_o *)&v69 = UnityEngine_Transform__get_localPosition(v68, 0LL);
      if ( !v67 )
        break;
      LODWORD(v67[5].klass) = v69;
      HIDWORD(v67[5].klass) = v70;
      LODWORD(v67[5].monitor) = v71;
      v72 = (unsigned int *)*p_bannerList;
      if ( !*p_bannerList )
        break;
      v73 = sub_B170BC(v46, *(_QWORD *)(*(_QWORD *)v72 + 64LL));
      if ( !v73 )
      {
        sub_B170F4(0LL);
        sub_B170A0();
      }
      if ( v39 >= v72[6] )
      {
        sub_B17100(v73, v74, v75);
        sub_B170A0();
      }
      *(_QWORD *)&v72[v41] = v46;
      sub_B16F98((BattleServantConfConponent_o *)&v72[v41], (System_Int32_array **)v46, v75, v76, v77, v78, v79, v80);
      ++v39;
      v41 += 2LL;
      if ( (__int64)v39 >= v28 )
        goto LABEL_35;
    }
LABEL_36:
    sub_B170D4();
  }
  v55 = 0.0;
LABEL_35:
  this->fields.moveLeftPos = -v55;
  this->fields.moveRightPos = v55;
  SetMoveBannerControll__initEnableBtn(this, v28, v38);
}


void __fastcall SetMoveBannerControll__setEnabledBtn(SetMoveBannerControll_o *this, const MethodInfo *method)
{
  UnityEngine_Behaviour_o *lfBtn; // x0
  UnityEngine_Behaviour_o *rgBtn; // x0

  lfBtn = (UnityEngine_Behaviour_o *)this->fields.lfBtn;
  if ( !lfBtn
    || (UnityEngine_Behaviour__set_enabled(lfBtn, 0, 0LL), (rgBtn = (UnityEngine_Behaviour_o *)this->fields.rgBtn) == 0LL) )
  {
    sub_B170D4();
  }
  UnityEngine_Behaviour__set_enabled(rgBtn, 0, 0LL);
}


void __fastcall SetMoveBannerControll___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F7680 & 1) == 0 )
  {
    sub_B16FFC(&SetMoveBannerControll___c_TypeInfo, v1);
    byte_40F7680 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(SetMoveBannerControll___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)SetMoveBannerControll___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
  return b->fields.bannerPriority - a->fields.bannerPriority;
}