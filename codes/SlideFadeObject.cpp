void SlideFadeObject___ctor(SlideFadeObject_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void SlideFadeObject__Awake(SlideFadeObject_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  UnityEngine_GameObject_o *transform; // x0
  __int64 v12; // x1
  Il2CppObject *v13; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  __int64 v20; // x1
  __int64 v21; // x2
  UnityEngine_Object_o *mPanel; // x21
  const MethodInfo *v23; // x1
  Il2CppObject *ComponentInChildren_object__58644924; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7

  if ( (byte_5934F23 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponentInChildren_UIPanel___);
    sub_21FFC50(&Method_GameObjectExtensions_SafeGetComponent_MoveObject___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5934F23 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_38852A8 *)Method_GameObjectExtensions_SafeGetComponent_MoveObject___);
  this->fields.mMoveObject = (struct MoveObject_o *)Component_object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mMoveObject,
    (int32_t)Component_object,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_10;
  v13 = UnityEngine_GameObject__GetComponent_object_(
          transform,
          (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
  this->fields.mPanel = (struct UIPanel_o *)v13;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.mPanel, (int32_t)v13, v14, v15, v16, v17, v18, v19);
  mPanel = (UnityEngine_Object_o *)this->fields.mPanel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20, v21);
  if ( UnityEngine_Object__op_Equality(mPanel, 0, 0) )
  {
    transform = (UnityEngine_GameObject_o *)CachableMonoBehaviour__get_transform((CachableMonoBehaviour_o *)this, v23);
    if ( transform )
    {
      ComponentInChildren_object__58644924 = UnityEngine_Component__GetComponentInChildren_object__58644924(
                                               (UnityEngine_Component_o *)transform,
                                               (const MethodInfo_37ED9BC *)Method_UnityEngine_Component_GetComponentInChildren_UIPanel___);
      this->fields.mPanel = (struct UIPanel_o *)ComponentInChildren_object__58644924;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.mPanel,
        (int32_t)ComponentInChildren_object__58644924,
        v25,
        v26,
        v27,
        v28,
        v29,
        v30);
      goto LABEL_9;
    }
LABEL_10:
    sub_21FFECC(transform, v12);
  }
LABEL_9:
  SlideFadeObject__Refresh(this, v23);
}


int32_t SlideFadeObject__GetSlideState(SlideFadeObject_o *this, const MethodInfo *method)
{
  return this->fields.mSlideState;
}


void SlideFadeObject__Refresh(SlideFadeObject_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v4; // x1
  int32_t width; // w20
  int32_t height; // w0
  float v7; // s0
  float v8; // s1
  bool v9; // nf
  float v10; // s0
  float y; // s2

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  this->fields.mInitPos = GameObjectExtensions__GetLocalPosition(gameObject, v4);
  width = UnityEngine_Screen__get_width(0);
  height = UnityEngine_Screen__get_height(0);
  this->fields.mLeftPos.fields.z = 0.0;
  *(_QWORD *)&this->fields.mRightPos.fields.z = 0;
  v7 = (float)width / (float)height;
  v8 = v7 * 576.0;
  v9 = v7 < 1.7778;
  v10 = 1024.0;
  y = this->fields.mInitPos.fields.y;
  if ( !v9 )
    v10 = v8;
  this->fields.mRightPos.fields.x = v10;
  this->fields.mRightPos.fields.y = y;
  this->fields.mLeftPos.fields.x = -v10;
  this->fields.mLeftPos.fields.y = y;
}


void SlideFadeObject__ResetPosition(SlideFadeObject_o *this, const MethodInfo *method)
{
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v6; // x1
  UnityEngine_Vector3_o v7; // 0:s0.4,4:s1.4,8:s2.4

  x = this->fields.mInitPos.fields.x;
  y = this->fields.mInitPos.fields.y;
  z = this->fields.mInitPos.fields.z;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v7.fields.x = x;
  v7.fields.y = y;
  v7.fields.z = z;
  GameObjectExtensions__SetLocalPosition(gameObject, v7, v6);
}


void SlideFadeObject__SetIsSortPos(SlideFadeObject_o *this, UnityEngine_Vector3_o pos, const MethodInfo *method)
{
  this->fields.sortPos = pos;
}


void SlideFadeObject__SetPosition(SlideFadeObject_o *this, UnityEngine_Vector3_o pos, const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v7; // x1
  UnityEngine_Vector3_o v8; // 0:s0.4,4:s1.4,8:s2.4

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v8.fields.y = y;
  v8.fields.z = z;
  v8.fields.x = x;
  GameObjectExtensions__SetLocalPosition(gameObject, v8, v7);
}


void SlideFadeObject__Skip(SlideFadeObject_o *this, const MethodInfo *method)
{
  struct MoveObject_o *mMoveObject; // x8

  mMoveObject = this->fields.mMoveObject;
  if ( !mMoveObject )
    sub_21FFECC(this, method);
  mMoveObject->fields.mIsSkip = 1;
}


void SlideFadeObject__SlideIn(
        SlideFadeObject_o *this,
        int32_t style,
        float time,
        float delay,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  __int64 v6; // x8
  __int64 v8; // x9
  __int64 v9; // x10
  UnityEngine_Vector3_o v11; // 0:s0.4,4:s1.4,8:s2.4

  v6 = 96;
  if ( style )
  {
    v8 = 92;
  }
  else
  {
    v6 = 108;
    v8 = 104;
  }
  if ( style )
    v9 = 88;
  else
    v9 = 100;
  v11.fields.y = *(float *)((char *)&this->klass + v8);
  v11.fields.z = *(float *)((char *)&this->klass + v6);
  v11.fields.x = *(float *)((char *)&this->klass + v9);
  SlideFadeObject__SlideIn_42891148(this, v11, time, delay, endAct, (const MethodInfo *)endAct);
}


void SlideFadeObject__SlideIn_42891148(
        SlideFadeObject_o *this,
        UnityEngine_Vector3_o startPos,
        float time,
        float delay,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  float z; // s10
  float y; // s11
  float x; // s12
  __int64 v13; // x20
  __int64 v14; // x0
  __int64 v15; // x1
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v29; // x1
  float v30; // s13
  float v31; // s14
  MoveObject_o *mMoveObject; // x21
  float v33; // s15
  System_Action_o *v34; // x19
  System_Action_o *v35; // x22
  const MethodInfo *v36; // x4
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v39; // 0:s3.4,4:s4.4,8:s5.4

  z = startPos.fields.z;
  y = startPos.fields.y;
  x = startPos.fields.x;
  if ( (byte_5934F24 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SlideFadeObject___c__DisplayClass18_0__SlideIn_b__0__);
    sub_21FFC50(&Method_SlideFadeObject___c__DisplayClass18_0__SlideIn_b__1__);
    sub_21FFC50(&SlideFadeObject___c__DisplayClass18_0_TypeInfo);
    byte_5934F24 = 1;
  }
  v13 = sub_21FFEBC(SlideFadeObject___c__DisplayClass18_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0);
  if ( !v13 )
    goto LABEL_6;
  *(_QWORD *)(v13 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v13 + 16), (int32_t)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v13 + 24) = endAct;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v13 + 24), (int32_t)endAct, v22, v23, v24, v25, v26, v27);
  this->fields.mSlideState = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v37.fields.x = x;
  v37.fields.y = y;
  v37.fields.z = z;
  GameObjectExtensions__SetLocalPosition(gameObject, v37, v29);
  v30 = this->fields.mInitPos.fields.x;
  v31 = this->fields.mInitPos.fields.y;
  mMoveObject = this->fields.mMoveObject;
  v33 = this->fields.mInitPos.fields.z;
  v34 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v34, (Il2CppObject *)v13, Method_SlideFadeObject___c__DisplayClass18_0__SlideIn_b__0__, 0);
  v35 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v35, (Il2CppObject *)v13, Method_SlideFadeObject___c__DisplayClass18_0__SlideIn_b__1__, 0);
  if ( !mMoveObject )
LABEL_6:
    sub_21FFECC(v14, v15);
  v38.fields.x = x;
  v38.fields.y = y;
  v38.fields.z = z;
  v39.fields.x = v30;
  v39.fields.y = v31;
  v39.fields.z = v33;
  MoveObject__Play(mMoveObject, v38, v39, time, v34, v35, delay, 17, v36);
}


void SlideFadeObject__SlideIn_42891556(
        SlideFadeObject_o *this,
        float out_pos_ofs_x,
        float time,
        float delay,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  UnityEngine_Vector3_o v8; // 0:s0.4,4:s1.4,8:s2.4

  v8.fields.x = this->fields.mInitPos.fields.x + out_pos_ofs_x;
  v8.fields.y = this->fields.mInitPos.fields.y;
  v8.fields.z = this->fields.mInitPos.fields.z;
  SlideFadeObject__SlideIn_42891148(this, v8, time, delay, endAct, method);
}


void SlideFadeObject__SlideOut(
        SlideFadeObject_o *this,
        int32_t style,
        float time,
        float delay,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  __int64 v6; // x8
  __int64 v8; // x9
  __int64 v9; // x10
  UnityEngine_Vector3_o v11; // 0:s0.4,4:s1.4,8:s2.4

  v6 = 96;
  if ( style == 1 )
  {
    v6 = 108;
    v8 = 104;
  }
  else
  {
    v8 = 92;
  }
  if ( style == 1 )
    v9 = 100;
  else
    v9 = 88;
  v11.fields.y = *(float *)((char *)&this->klass + v8);
  v11.fields.z = *(float *)((char *)&this->klass + v6);
  v11.fields.x = *(float *)((char *)&this->klass + v9);
  SlideFadeObject__SlideOut_42892120(this, v11, time, delay, endAct, (const MethodInfo *)endAct);
}


void SlideFadeObject__SlideOut_42892120(
        SlideFadeObject_o *this,
        UnityEngine_Vector3_o endPos,
        float time,
        float delay,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  float z; // s10
  float y; // s11
  float x; // s12
  __int64 v13; // x21
  __int64 v14; // x0
  __int64 v15; // x1
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  float v28; // s13
  float v29; // s14
  System_Action_c *v30; // x0
  MoveObject_o *mMoveObject; // x20
  float v32; // s15
  System_Action_o *v33; // x19
  System_Action_o *v34; // x22
  const MethodInfo *v35; // x4
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v37; // 0:s3.4,4:s4.4,8:s5.4

  z = endPos.fields.z;
  y = endPos.fields.y;
  x = endPos.fields.x;
  if ( (byte_5934F26 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SlideFadeObject___c__DisplayClass22_0__SlideOut_b__0__);
    sub_21FFC50(&Method_SlideFadeObject___c__DisplayClass22_0__SlideOut_b__1__);
    sub_21FFC50(&SlideFadeObject___c__DisplayClass22_0_TypeInfo);
    byte_5934F26 = 1;
  }
  v13 = sub_21FFEBC(SlideFadeObject___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0);
  if ( !v13 )
    goto LABEL_6;
  *(_QWORD *)(v13 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v13 + 16), (int32_t)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v13 + 24) = endAct;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v13 + 24), (int32_t)endAct, v22, v23, v24, v25, v26, v27);
  v28 = this->fields.mInitPos.fields.x;
  v29 = this->fields.mInitPos.fields.y;
  v30 = System_Action_TypeInfo;
  mMoveObject = this->fields.mMoveObject;
  v32 = this->fields.mInitPos.fields.z;
  this->fields.mSlideState = 0;
  v33 = (System_Action_o *)sub_21FFEBC(v30);
  System_Action___ctor(v33, (Il2CppObject *)v13, Method_SlideFadeObject___c__DisplayClass22_0__SlideOut_b__0__, 0);
  v34 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v34, (Il2CppObject *)v13, Method_SlideFadeObject___c__DisplayClass22_0__SlideOut_b__1__, 0);
  if ( !mMoveObject )
LABEL_6:
    sub_21FFECC(v14, v15);
  v36.fields.x = v28;
  v37.fields.x = x;
  v37.fields.y = y;
  v37.fields.z = z;
  v36.fields.y = v29;
  v36.fields.z = v32;
  MoveObject__Play(mMoveObject, v36, v37, time, v33, v34, delay, 17, v35);
}


void SlideFadeObject__SlideOut_42892500(
        SlideFadeObject_o *this,
        float out_pos_ofs_x,
        float time,
        float delay,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  UnityEngine_Vector3_o v8; // 0:s0.4,4:s1.4,8:s2.4

  v8.fields.x = this->fields.mInitPos.fields.x + out_pos_ofs_x;
  v8.fields.y = this->fields.mInitPos.fields.y;
  v8.fields.z = this->fields.mInitPos.fields.z;
  SlideFadeObject__SlideOut_42892120(this, v8, time, delay, endAct, method);
}


void SlideFadeObject__SlideSortIn(
        SlideFadeObject_o *this,
        float out_pos_ofs_x,
        float time,
        float delay,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  UnityEngine_Vector3_o v8; // 0:s0.4,4:s1.4,8:s2.4

  v8.fields.z = this->fields.mInitPos.fields.z;
  v8.fields.x = this->fields.mInitPos.fields.x + out_pos_ofs_x;
  v8.fields.y = -80.0;
  SlideFadeObject__SlideSortIn_42891620(this, v8, time, delay, endAct, method);
}


void SlideFadeObject__SlideSortIn_42891620(
        SlideFadeObject_o *this,
        UnityEngine_Vector3_o startPos,
        float time,
        float delay,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  float z; // s10
  float y; // s11
  float x; // s12
  __int64 v13; // x20
  __int64 v14; // x0
  __int64 v15; // x1
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v29; // x1
  float v30; // s13
  float v31; // s14
  MoveObject_o *mMoveObject; // x21
  float v33; // s15
  System_Action_o *v34; // x19
  System_Action_o *v35; // x22
  const MethodInfo *v36; // x4
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v39; // 0:s3.4,4:s4.4,8:s5.4

  z = startPos.fields.z;
  y = startPos.fields.y;
  x = startPos.fields.x;
  if ( (byte_5934F25 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SlideFadeObject___c__DisplayClass19_0__SlideSortIn_b__0__);
    sub_21FFC50(&Method_SlideFadeObject___c__DisplayClass19_0__SlideSortIn_b__1__);
    sub_21FFC50(&SlideFadeObject___c__DisplayClass19_0_TypeInfo);
    byte_5934F25 = 1;
  }
  v13 = sub_21FFEBC(SlideFadeObject___c__DisplayClass19_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0);
  if ( !v13 )
    goto LABEL_6;
  *(_QWORD *)(v13 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v13 + 16), (int32_t)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v13 + 24) = endAct;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v13 + 24), (int32_t)endAct, v22, v23, v24, v25, v26, v27);
  this->fields.mSlideState = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v37.fields.x = x;
  v37.fields.y = y;
  v37.fields.z = z;
  GameObjectExtensions__SetLocalPosition(gameObject, v37, v29);
  v30 = this->fields.sortPos.fields.x;
  v31 = this->fields.sortPos.fields.y;
  mMoveObject = this->fields.mMoveObject;
  v33 = this->fields.sortPos.fields.z;
  v34 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v34, (Il2CppObject *)v13, Method_SlideFadeObject___c__DisplayClass19_0__SlideSortIn_b__0__, 0);
  v35 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v35, (Il2CppObject *)v13, Method_SlideFadeObject___c__DisplayClass19_0__SlideSortIn_b__1__, 0);
  if ( !mMoveObject )
LABEL_6:
    sub_21FFECC(v14, v15);
  v38.fields.x = x;
  v38.fields.y = y;
  v38.fields.z = z;
  v39.fields.x = v30;
  v39.fields.y = v31;
  v39.fields.z = v33;
  MoveObject__Play(mMoveObject, v38, v39, time, v34, v35, delay, 17, v36);
}


UnityEngine_Vector3_o SlideFadeObject__get_InitPosition(SlideFadeObject_o *this, const MethodInfo *method)
{
  float x; // s0
  float y; // s1
  float z; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  x = this->fields.mInitPos.fields.x;
  y = this->fields.mInitPos.fields.y;
  z = this->fields.mInitPos.fields.z;
  result.fields.z = z;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


void SlideFadeObject___c__DisplayClass18_0___ctor(
        SlideFadeObject___c__DisplayClass18_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SlideFadeObject___c__DisplayClass18_0___SlideIn_b__0(
        SlideFadeObject___c__DisplayClass18_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *_4__this; // x0
  struct SlideFadeObject_o *v4; // x8
  struct MoveObject_o *mMoveObject; // x8
  __int64 v6; // x2
  struct SlideFadeObject_o *v7; // x8
  UnityEngine_Object_o *mPanel; // x20
  struct SlideFadeObject_o *v9; // x8

  if ( (byte_5934F27 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5934F27 = 1;
  }
  _4__this = (UnityEngine_Component_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  _4__this = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(_4__this, 0);
  v4 = this->fields.__4__this;
  if ( !v4 )
    goto LABEL_14;
  mMoveObject = v4->fields.mMoveObject;
  if ( !mMoveObject )
    goto LABEL_14;
  GameObjectExtensions__SetLocalPositionX(
    (UnityEngine_GameObject_o *)_4__this,
    mMoveObject->fields.mNow.fields.x,
    method);
  v7 = this->fields.__4__this;
  if ( !v7 )
    goto LABEL_14;
  mPanel = (UnityEngine_Object_o *)v7->fields.mPanel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v6);
  _4__this = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(mPanel, 0, 0);
  if ( ((unsigned __int8)_4__this & 1) != 0 )
  {
    v9 = this->fields.__4__this;
    if ( v9 )
    {
      _4__this = (UnityEngine_Component_o *)v9->fields.mPanel;
      if ( _4__this )
      {
        ((void (__fastcall *)(UnityEngine_Component_o *, __int64, void *))_4__this->klass[1]._1.fields)(
          _4__this,
          1,
          _4__this->klass[1]._1.events);
        return;
      }
    }
LABEL_14:
    sub_21FFECC(_4__this, method);
  }
}


void SlideFadeObject___c__DisplayClass18_0___SlideIn_b__1(
        SlideFadeObject___c__DisplayClass18_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  SlideFadeObject___c__DisplayClass18_0_o *v3; // x19
  struct SlideFadeObject_o *_4__this; // x8
  UnityEngine_Object_o *mPanel; // x20
  struct SlideFadeObject_o *v6; // x8

  v3 = this;
  if ( (byte_5934F28 & 1) == 0 )
  {
    this = (SlideFadeObject___c__DisplayClass18_0_o *)sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5934F28 = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  mPanel = (UnityEngine_Object_o *)_4__this->fields.mPanel;
  _4__this->fields.mSlideState = 1;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  this = (SlideFadeObject___c__DisplayClass18_0_o *)UnityEngine_Object__op_Inequality(mPanel, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v6 = v3->fields.__4__this;
    if ( v6 )
    {
      this = (SlideFadeObject___c__DisplayClass18_0_o *)v6->fields.mPanel;
      if ( this )
      {
        ((void (__fastcall *)(SlideFadeObject___c__DisplayClass18_0_o *, __int64, void *))this->klass[1]._1.fields)(
          this,
          1,
          this->klass[1]._1.events);
        goto LABEL_10;
      }
    }
LABEL_11:
    sub_21FFECC(this, method);
  }
LABEL_10:
  ActionExtensions__Call(v3->fields.endAct, 0);
}


void SlideFadeObject___c__DisplayClass19_0___ctor(
        SlideFadeObject___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SlideFadeObject___c__DisplayClass19_0___SlideSortIn_b__0(
        SlideFadeObject___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *_4__this; // x0
  struct SlideFadeObject_o *v4; // x8
  struct MoveObject_o *mMoveObject; // x8
  struct SlideFadeObject_o *v6; // x8
  struct MoveObject_o *v7; // x8
  __int64 v8; // x2
  struct SlideFadeObject_o *v9; // x8
  UnityEngine_Object_o *mPanel; // x20
  struct SlideFadeObject_o *v11; // x8

  if ( (byte_5934F29 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5934F29 = 1;
  }
  _4__this = (UnityEngine_Component_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_17;
  _4__this = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(_4__this, 0);
  v4 = this->fields.__4__this;
  if ( !v4 )
    goto LABEL_17;
  mMoveObject = v4->fields.mMoveObject;
  if ( !mMoveObject )
    goto LABEL_17;
  GameObjectExtensions__SetLocalPositionX(
    (UnityEngine_GameObject_o *)_4__this,
    mMoveObject->fields.mNow.fields.x,
    method);
  _4__this = (UnityEngine_Component_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_17;
  _4__this = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(_4__this, 0);
  v6 = this->fields.__4__this;
  if ( !v6 )
    goto LABEL_17;
  v7 = v6->fields.mMoveObject;
  if ( !v7 )
    goto LABEL_17;
  GameObjectExtensions__SetLocalPositionY((UnityEngine_GameObject_o *)_4__this, v7->fields.mNow.fields.y, method);
  v9 = this->fields.__4__this;
  if ( !v9 )
    goto LABEL_17;
  mPanel = (UnityEngine_Object_o *)v9->fields.mPanel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v8);
  _4__this = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(mPanel, 0, 0);
  if ( ((unsigned __int8)_4__this & 1) != 0 )
  {
    v11 = this->fields.__4__this;
    if ( v11 )
    {
      _4__this = (UnityEngine_Component_o *)v11->fields.mPanel;
      if ( _4__this )
      {
        ((void (__fastcall *)(UnityEngine_Component_o *, __int64, void *))_4__this->klass[1]._1.fields)(
          _4__this,
          1,
          _4__this->klass[1]._1.events);
        return;
      }
    }
LABEL_17:
    sub_21FFECC(_4__this, method);
  }
}


void SlideFadeObject___c__DisplayClass19_0___SlideSortIn_b__1(
        SlideFadeObject___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  SlideFadeObject___c__DisplayClass19_0_o *v3; // x19
  struct SlideFadeObject_o *_4__this; // x8
  UnityEngine_Object_o *mPanel; // x20
  struct SlideFadeObject_o *v6; // x8

  v3 = this;
  if ( (byte_5934F2A & 1) == 0 )
  {
    this = (SlideFadeObject___c__DisplayClass19_0_o *)sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5934F2A = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  mPanel = (UnityEngine_Object_o *)_4__this->fields.mPanel;
  _4__this->fields.mSlideState = 1;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  this = (SlideFadeObject___c__DisplayClass19_0_o *)UnityEngine_Object__op_Inequality(mPanel, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v6 = v3->fields.__4__this;
    if ( v6 )
    {
      this = (SlideFadeObject___c__DisplayClass19_0_o *)v6->fields.mPanel;
      if ( this )
      {
        ((void (__fastcall *)(SlideFadeObject___c__DisplayClass19_0_o *, __int64, void *))this->klass[1]._1.fields)(
          this,
          1,
          this->klass[1]._1.events);
        goto LABEL_10;
      }
    }
LABEL_11:
    sub_21FFECC(this, method);
  }
LABEL_10:
  ActionExtensions__Call(v3->fields.endAct, 0);
}


void SlideFadeObject___c__DisplayClass22_0___ctor(
        SlideFadeObject___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SlideFadeObject___c__DisplayClass22_0___SlideOut_b__0(
        SlideFadeObject___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *_4__this; // x0
  struct SlideFadeObject_o *v4; // x8
  struct MoveObject_o *mMoveObject; // x8
  __int64 v6; // x2
  struct SlideFadeObject_o *v7; // x8
  UnityEngine_Object_o *mPanel; // x20
  struct SlideFadeObject_o *v9; // x8

  if ( (byte_5934F2B & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5934F2B = 1;
  }
  _4__this = (UnityEngine_Component_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  _4__this = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(_4__this, 0);
  v4 = this->fields.__4__this;
  if ( !v4 )
    goto LABEL_14;
  mMoveObject = v4->fields.mMoveObject;
  if ( !mMoveObject )
    goto LABEL_14;
  GameObjectExtensions__SetLocalPositionX(
    (UnityEngine_GameObject_o *)_4__this,
    mMoveObject->fields.mNow.fields.x,
    method);
  v7 = this->fields.__4__this;
  if ( !v7 )
    goto LABEL_14;
  mPanel = (UnityEngine_Object_o *)v7->fields.mPanel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v6);
  _4__this = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(mPanel, 0, 0);
  if ( ((unsigned __int8)_4__this & 1) != 0 )
  {
    v9 = this->fields.__4__this;
    if ( v9 )
    {
      _4__this = (UnityEngine_Component_o *)v9->fields.mPanel;
      if ( _4__this )
      {
        ((void (__fastcall *)(UnityEngine_Component_o *, __int64, void *))_4__this->klass[1]._1.fields)(
          _4__this,
          1,
          _4__this->klass[1]._1.events);
        return;
      }
    }
LABEL_14:
    sub_21FFECC(_4__this, method);
  }
}


void SlideFadeObject___c__DisplayClass22_0___SlideOut_b__1(
        SlideFadeObject___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  struct SlideFadeObject_o *_4__this; // x8
  System_Action_o *endAct; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_21FFECC(this, method);
  endAct = this->fields.endAct;
  _4__this->fields.mSlideState = 2;
  ActionExtensions__Call(endAct, 0);
}