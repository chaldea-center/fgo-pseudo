void SlideFadeObject___ctor(SlideFadeObject_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void SlideFadeObject__Awake(SlideFadeObject_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  UnityEngine_GameObject_o *transform; // x0
  __int64 v12; // x1
  Il2CppObject *v13; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  UnityEngine_Object_o *mPanel; // x21
  const MethodInfo *v21; // x1
  Il2CppObject *ComponentInChildren_object__51981160; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7

  if ( (byte_4D29207 & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_Component_GetComponentInChildren_UIPanel___);
    sub_1C94098(&Method_GameObjectExtensions_SafeGetComponent_MoveObject___);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D29207 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_31F6278 *)Method_GameObjectExtensions_SafeGetComponent_MoveObject___);
  this->fields.mMoveObject = (struct MoveObject_o *)Component_object;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.mMoveObject,
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
          (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
  this->fields.mPanel = (struct UIPanel_o *)v13;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.mPanel, (int32_t)v13, v14, v15, v16, v17, v18, v19);
  mPanel = (UnityEngine_Object_o *)this->fields.mPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mPanel, 0, 0) )
  {
    transform = (UnityEngine_GameObject_o *)CachableMonoBehaviour__get_transform((CachableMonoBehaviour_o *)this, v21);
    if ( transform )
    {
      ComponentInChildren_object__51981160 = UnityEngine_Component__GetComponentInChildren_object__51981160(
                                               (UnityEngine_Component_o *)transform,
                                               (const MethodInfo_3192B68 *)Method_UnityEngine_Component_GetComponentInChildren_UIPanel___);
      this->fields.mPanel = (struct UIPanel_o *)ComponentInChildren_object__51981160;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&this->fields.mPanel,
        (int32_t)ComponentInChildren_object__51981160,
        v23,
        v24,
        v25,
        v26,
        v27,
        v28);
      goto LABEL_9;
    }
LABEL_10:
    sub_1C942F0(transform, v12);
  }
LABEL_9:
  SlideFadeObject__Refresh(this, v21);
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
  float v6; // s0
  float y; // s1
  bool v8; // nf
  float v9; // s0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  this->fields.mInitPos = GameObjectExtensions__GetLocalPosition(gameObject, v4);
  width = UnityEngine_Screen__get_width(0);
  v6 = (float)width / (float)UnityEngine_Screen__get_height(0);
  y = this->fields.mInitPos.fields.y;
  v8 = v6 < 1.7778;
  v9 = v6 * 576.0;
  if ( v8 )
    v9 = 1024.0;
  this->fields.mLeftPos.fields.z = 0.0;
  this->fields.mRightPos.fields.x = v9;
  this->fields.mRightPos.fields.y = y;
  this->fields.mLeftPos.fields.x = -v9;
  this->fields.mLeftPos.fields.y = y;
  *(_QWORD *)&this->fields.mRightPos.fields.z = 0;
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
    sub_1C942F0(this, method);
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
  __int64 v7; // x10
  __int64 v8; // x9
  UnityEngine_Vector3_o v11; // 0:s0.4,4:s1.4,8:s2.4

  v6 = 96;
  v7 = 92;
  if ( !style )
    v6 = 108;
  v8 = 88;
  if ( !style )
  {
    v7 = 104;
    v8 = 100;
  }
  v11.fields.y = *(float *)((char *)&this->klass + v7);
  v11.fields.z = *(float *)((char *)&this->klass + v6);
  v11.fields.x = *(float *)((char *)&this->klass + v8);
  SlideFadeObject__SlideIn_36813840(this, v11, time, delay, endAct, (const MethodInfo *)endAct);
}


void SlideFadeObject__SlideIn_36813840(
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
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v29; // x1
  MoveObject_o *mMoveObject; // x21
  float v31; // s13
  float v32; // s14
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
  if ( (byte_4D29208 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_SlideFadeObject___c__DisplayClass18_0__SlideIn_b__0__);
    sub_1C94098(&Method_SlideFadeObject___c__DisplayClass18_0__SlideIn_b__1__);
    sub_1C94098(&SlideFadeObject___c__DisplayClass18_0_TypeInfo);
    byte_4D29208 = 1;
  }
  v13 = sub_1C942E4(SlideFadeObject___c__DisplayClass18_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0);
  if ( !v13 )
    goto LABEL_6;
  *(_QWORD *)(v13 + 16) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v13 + 16), (int32_t)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v13 + 24) = endAct;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v13 + 24), (int32_t)endAct, v22, v23, v24, v25, v26, v27);
  this->fields.mSlideState = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v37.fields.x = x;
  v37.fields.y = y;
  v37.fields.z = z;
  GameObjectExtensions__SetLocalPosition(gameObject, v37, v29);
  mMoveObject = this->fields.mMoveObject;
  v31 = this->fields.mInitPos.fields.x;
  v32 = this->fields.mInitPos.fields.y;
  v33 = this->fields.mInitPos.fields.z;
  v34 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v34, (Il2CppObject *)v13, Method_SlideFadeObject___c__DisplayClass18_0__SlideIn_b__0__, 0);
  v35 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v35, (Il2CppObject *)v13, Method_SlideFadeObject___c__DisplayClass18_0__SlideIn_b__1__, 0);
  if ( !mMoveObject )
LABEL_6:
    sub_1C942F0(v14, v15);
  v38.fields.x = x;
  v38.fields.y = y;
  v38.fields.z = z;
  v39.fields.x = v31;
  v39.fields.y = v32;
  v39.fields.z = v33;
  MoveObject__Play(mMoveObject, v38, v39, time, v34, v35, delay, 17, v36);
}


void SlideFadeObject__SlideIn_36814248(
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
  v8.fields.y = this->fields.mInitPos.fields.y;
  SlideFadeObject__SlideIn_36813840(this, v8, time, delay, endAct, method);
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
  __int64 v7; // x10
  __int64 v8; // x9
  UnityEngine_Vector3_o v11; // 0:s0.4,4:s1.4,8:s2.4

  v6 = 96;
  v7 = 92;
  if ( style == 1 )
    v6 = 108;
  v8 = 88;
  if ( style == 1 )
  {
    v7 = 104;
    v8 = 100;
  }
  v11.fields.y = *(float *)((char *)&this->klass + v7);
  v11.fields.z = *(float *)((char *)&this->klass + v6);
  v11.fields.x = *(float *)((char *)&this->klass + v8);
  SlideFadeObject__SlideOut_36814812(this, v11, time, delay, endAct, (const MethodInfo *)endAct);
}


void SlideFadeObject__SlideOut_36814812(
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
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  MoveObject_o *mMoveObject; // x20
  float v29; // s13
  float v30; // s14
  float v31; // s15
  System_Action_o *v32; // x19
  System_Action_o *v33; // x22
  const MethodInfo *v34; // x4
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v36; // 0:s3.4,4:s4.4,8:s5.4

  z = endPos.fields.z;
  y = endPos.fields.y;
  x = endPos.fields.x;
  if ( (byte_4D2920A & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_SlideFadeObject___c__DisplayClass22_0__SlideOut_b__0__);
    sub_1C94098(&Method_SlideFadeObject___c__DisplayClass22_0__SlideOut_b__1__);
    sub_1C94098(&SlideFadeObject___c__DisplayClass22_0_TypeInfo);
    byte_4D2920A = 1;
  }
  v13 = sub_1C942E4(SlideFadeObject___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0);
  if ( !v13 )
    goto LABEL_6;
  *(_QWORD *)(v13 + 16) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v13 + 16), (int32_t)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v13 + 24) = endAct;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v13 + 24), (int32_t)endAct, v22, v23, v24, v25, v26, v27);
  this->fields.mSlideState = 0;
  mMoveObject = this->fields.mMoveObject;
  v29 = this->fields.mInitPos.fields.x;
  v30 = this->fields.mInitPos.fields.y;
  v31 = this->fields.mInitPos.fields.z;
  v32 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v32, (Il2CppObject *)v13, Method_SlideFadeObject___c__DisplayClass22_0__SlideOut_b__0__, 0);
  v33 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v33, (Il2CppObject *)v13, Method_SlideFadeObject___c__DisplayClass22_0__SlideOut_b__1__, 0);
  if ( !mMoveObject )
LABEL_6:
    sub_1C942F0(v14, v15);
  v35.fields.x = v29;
  v36.fields.x = x;
  v36.fields.y = y;
  v36.fields.z = z;
  v35.fields.y = v30;
  v35.fields.z = v31;
  MoveObject__Play(mMoveObject, v35, v36, time, v32, v33, delay, 17, v34);
}


void SlideFadeObject__SlideOut_36815192(
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
  v8.fields.y = this->fields.mInitPos.fields.y;
  SlideFadeObject__SlideOut_36814812(this, v8, time, delay, endAct, method);
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
  SlideFadeObject__SlideSortIn_36814312(this, v8, time, delay, endAct, method);
}


void SlideFadeObject__SlideSortIn_36814312(
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
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v29; // x1
  MoveObject_o *mMoveObject; // x21
  float v31; // s13
  float v32; // s14
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
  if ( (byte_4D29209 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_SlideFadeObject___c__DisplayClass19_0__SlideSortIn_b__0__);
    sub_1C94098(&Method_SlideFadeObject___c__DisplayClass19_0__SlideSortIn_b__1__);
    sub_1C94098(&SlideFadeObject___c__DisplayClass19_0_TypeInfo);
    byte_4D29209 = 1;
  }
  v13 = sub_1C942E4(SlideFadeObject___c__DisplayClass19_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0);
  if ( !v13 )
    goto LABEL_6;
  *(_QWORD *)(v13 + 16) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v13 + 16), (int32_t)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v13 + 24) = endAct;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v13 + 24), (int32_t)endAct, v22, v23, v24, v25, v26, v27);
  this->fields.mSlideState = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v37.fields.x = x;
  v37.fields.y = y;
  v37.fields.z = z;
  GameObjectExtensions__SetLocalPosition(gameObject, v37, v29);
  mMoveObject = this->fields.mMoveObject;
  v31 = this->fields.sortPos.fields.x;
  v32 = this->fields.sortPos.fields.y;
  v33 = this->fields.sortPos.fields.z;
  v34 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v34, (Il2CppObject *)v13, Method_SlideFadeObject___c__DisplayClass19_0__SlideSortIn_b__0__, 0);
  v35 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v35, (Il2CppObject *)v13, Method_SlideFadeObject___c__DisplayClass19_0__SlideSortIn_b__1__, 0);
  if ( !mMoveObject )
LABEL_6:
    sub_1C942F0(v14, v15);
  v38.fields.x = x;
  v38.fields.y = y;
  v38.fields.z = z;
  v39.fields.x = v31;
  v39.fields.y = v32;
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
  struct SlideFadeObject_o *v6; // x8
  UnityEngine_Object_o *mPanel; // x20
  struct SlideFadeObject_o *v8; // x8

  if ( (byte_4D2920B & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2920B = 1;
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
  v6 = this->fields.__4__this;
  if ( !v6 )
    goto LABEL_14;
  mPanel = (UnityEngine_Object_o *)v6->fields.mPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  _4__this = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(mPanel, 0, 0);
  if ( ((unsigned __int8)_4__this & 1) != 0 )
  {
    v8 = this->fields.__4__this;
    if ( v8 )
    {
      _4__this = (UnityEngine_Component_o *)v8->fields.mPanel;
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
    sub_1C942F0(_4__this, method);
  }
}


void SlideFadeObject___c__DisplayClass18_0___SlideIn_b__1(
        SlideFadeObject___c__DisplayClass18_0_o *this,
        const MethodInfo *method)
{
  SlideFadeObject___c__DisplayClass18_0_o *v2; // x19
  struct SlideFadeObject_o *_4__this; // x8
  UnityEngine_Object_o *mPanel; // x20
  struct SlideFadeObject_o *v5; // x8

  v2 = this;
  if ( (byte_4D2920C & 1) == 0 )
  {
    this = (SlideFadeObject___c__DisplayClass18_0_o *)sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2920C = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  _4__this->fields.mSlideState = 1;
  mPanel = (UnityEngine_Object_o *)_4__this->fields.mPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (SlideFadeObject___c__DisplayClass18_0_o *)UnityEngine_Object__op_Inequality(mPanel, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v5 = v2->fields.__4__this;
    if ( v5 )
    {
      this = (SlideFadeObject___c__DisplayClass18_0_o *)v5->fields.mPanel;
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
    sub_1C942F0(this, method);
  }
LABEL_10:
  ActionExtensions__Call(v2->fields.endAct, 0);
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
  struct SlideFadeObject_o *v8; // x8
  UnityEngine_Object_o *mPanel; // x20
  struct SlideFadeObject_o *v10; // x8

  if ( (byte_4D2920D & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2920D = 1;
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
  v8 = this->fields.__4__this;
  if ( !v8 )
    goto LABEL_17;
  mPanel = (UnityEngine_Object_o *)v8->fields.mPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  _4__this = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(mPanel, 0, 0);
  if ( ((unsigned __int8)_4__this & 1) != 0 )
  {
    v10 = this->fields.__4__this;
    if ( v10 )
    {
      _4__this = (UnityEngine_Component_o *)v10->fields.mPanel;
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
    sub_1C942F0(_4__this, method);
  }
}


void SlideFadeObject___c__DisplayClass19_0___SlideSortIn_b__1(
        SlideFadeObject___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  SlideFadeObject___c__DisplayClass19_0_o *v2; // x19
  struct SlideFadeObject_o *_4__this; // x8
  UnityEngine_Object_o *mPanel; // x20
  struct SlideFadeObject_o *v5; // x8

  v2 = this;
  if ( (byte_4D2920E & 1) == 0 )
  {
    this = (SlideFadeObject___c__DisplayClass19_0_o *)sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2920E = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  _4__this->fields.mSlideState = 1;
  mPanel = (UnityEngine_Object_o *)_4__this->fields.mPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (SlideFadeObject___c__DisplayClass19_0_o *)UnityEngine_Object__op_Inequality(mPanel, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v5 = v2->fields.__4__this;
    if ( v5 )
    {
      this = (SlideFadeObject___c__DisplayClass19_0_o *)v5->fields.mPanel;
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
    sub_1C942F0(this, method);
  }
LABEL_10:
  ActionExtensions__Call(v2->fields.endAct, 0);
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
  struct SlideFadeObject_o *v6; // x8
  UnityEngine_Object_o *mPanel; // x20
  struct SlideFadeObject_o *v8; // x8

  if ( (byte_4D2920F & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2920F = 1;
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
  v6 = this->fields.__4__this;
  if ( !v6 )
    goto LABEL_14;
  mPanel = (UnityEngine_Object_o *)v6->fields.mPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  _4__this = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(mPanel, 0, 0);
  if ( ((unsigned __int8)_4__this & 1) != 0 )
  {
    v8 = this->fields.__4__this;
    if ( v8 )
    {
      _4__this = (UnityEngine_Component_o *)v8->fields.mPanel;
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
    sub_1C942F0(_4__this, method);
  }
}


void SlideFadeObject___c__DisplayClass22_0___SlideOut_b__1(
        SlideFadeObject___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  struct SlideFadeObject_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C942F0(this, method);
  _4__this->fields.mSlideState = 2;
  ActionExtensions__Call(this->fields.endAct, 0);
}