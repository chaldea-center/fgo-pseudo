void ScoreRecordCardDialog___ctor(ScoreRecordCardDialog_o *this, const MethodInfo *method)
{
  this->fields.smallAnimationTime = 0.05;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ScoreRecordCardDialog__ActiveLargeObject(ScoreRecordCardDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *smallPanel; // x20
  struct UIPanel_o *v4; // x0
  UnityEngine_Object_o *largePanel; // x20

  if ( (byte_4C3989F & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3989F = 1;
  }
  smallPanel = (UnityEngine_Object_o *)this->fields.smallPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(smallPanel, 0, 0) )
  {
    v4 = this->fields.smallPanel;
    if ( !v4 )
      goto LABEL_14;
    ((void (__fastcall *)(struct UIPanel_o *, const MethodInfo *, float))v4->klass->vtable._8_set_alpha.methodPtr)(
      v4,
      v4->klass->vtable._8_set_alpha.method,
      0.0);
  }
  largePanel = (UnityEngine_Object_o *)this->fields.largePanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(largePanel, 0, 0) )
  {
    v4 = this->fields.largePanel;
    if ( v4 )
    {
      ((void (__fastcall *)(struct UIPanel_o *, const MethodInfo *, float))v4->klass->vtable._8_set_alpha.methodPtr)(
        v4,
        v4->klass->vtable._8_set_alpha.method,
        1.0);
      return;
    }
LABEL_14:
    sub_1C32E7C(v4);
  }
}


void ScoreRecordCardDialog__ActiveSmallObject(ScoreRecordCardDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *smallPanel; // x20
  struct UIPanel_o *v4; // x0
  UnityEngine_Object_o *largePanel; // x20

  if ( (byte_4C3989E & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3989E = 1;
  }
  smallPanel = (UnityEngine_Object_o *)this->fields.smallPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(smallPanel, 0, 0) )
  {
    v4 = this->fields.smallPanel;
    if ( !v4 )
      goto LABEL_14;
    ((void (__fastcall *)(struct UIPanel_o *, const MethodInfo *, float))v4->klass->vtable._8_set_alpha.methodPtr)(
      v4,
      v4->klass->vtable._8_set_alpha.method,
      1.0);
  }
  largePanel = (UnityEngine_Object_o *)this->fields.largePanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(largePanel, 0, 0) )
  {
    v4 = this->fields.largePanel;
    if ( v4 )
    {
      ((void (__fastcall *)(struct UIPanel_o *, const MethodInfo *, float))v4->klass->vtable._8_set_alpha.methodPtr)(
        v4,
        v4->klass->vtable._8_set_alpha.method,
        0.0);
      return;
    }
LABEL_14:
    sub_1C32E7C(v4);
  }
}


void ScoreRecordCardDialog__OnClose(ScoreRecordCardDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *closeBtn; // x20
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  System_Action_o *v6; // x20
  const MethodInfo *v7; // x3

  if ( (byte_4C3989C & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_ScoreRecordCardDialog_OnClose__);
    sub_1C32C20(&Method_ScoreRecordCardDialog__OnClose_b__11_0__);
    byte_4C3989C = 1;
  }
  if ( this->fields.canTap )
  {
    this->fields.canTap = 0;
    closeBtn = (UnityEngine_Object_o *)this->fields.closeBtn;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(closeBtn, 0, 0) )
      AndroidBackKeyManager__RemoveBackBtn(this->fields.closeBtn, 0);
    v4 = Method_ScoreRecordCardDialog_OnClose__;
    if ( (*((_BYTE *)Method_ScoreRecordCardDialog_OnClose__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C32C38(Method_ScoreRecordCardDialog_OnClose__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C32C04(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0, 0);
    v6 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_ScoreRecordCardDialog__OnClose_b__11_0__, 0);
    ScoreRecordCardDialog__PlayAnimation(this, 1, v6, v7);
  }
}


void ScoreRecordCardDialog__Open(ScoreRecordCardDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  System_Action_o *v4; // x20
  const MethodInfo *v5; // x3

  if ( (byte_4C3989A & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_ScoreRecordCardDialog__Open_b__9_0__);
    byte_4C3989A = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C32E7C(0);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  v4 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_ScoreRecordCardDialog__Open_b__9_0__, 0);
  ScoreRecordCardDialog__PlayAnimation(this, 0, v4, v5);
}


void ScoreRecordCardDialog__PlayAnimation(
        ScoreRecordCardDialog_o *this,
        int32_t animationType,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x21
  __int64 v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Collections_IEnumerator_o *delayActionCoroutine; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct ScaleAnimationComponent_o *scaleAnimation; // x8
  float v15; // s0
  float animationTime; // s1
  struct MoveAnimationComponent_o *moveAnimation; // x8
  float v18; // s8
  float smallAnimationTime; // s9
  System_Action_o *v20; // x23
  float v21; // s0
  float v22; // s8
  struct System_Collections_IEnumerator_o *v23; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  struct ScaleAnimationComponent_o *v28; // x23
  __int64 v29; // x22
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  struct MoveAnimationComponent_o *v32; // x20
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  System_Action_o *v35; // x20
  __int64 v36; // x22
  __int64 v37; // x8
  unsigned __int64 v38; // x23
  UnityEngine_Object_o *v39; // x21
  __int64 v40; // x0

  if ( (byte_4C3989D & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_ScoreRecordCardDialog_ActiveLargeObject__);
    sub_1C32C20(&Method_ScoreRecordCardDialog_ActiveSmallObject__);
    sub_1C32C20(&TweenAnimationComponent___TypeInfo);
    sub_1C32C20(&Method_ScoreRecordCardDialog___c__DisplayClass12_0__PlayAnimation_b__0__);
    sub_1C32C20(&ScoreRecordCardDialog___c__DisplayClass12_0_TypeInfo);
    byte_4C3989D = 1;
  }
  v7 = sub_1C32E6C(ScoreRecordCardDialog___c__DisplayClass12_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_36;
  *(_QWORD *)(v7 + 32) = callback;
  sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 32), (int32_t)callback, v9, v10);
  delayActionCoroutine = this->fields.delayActionCoroutine;
  if ( delayActionCoroutine )
  {
    UnityEngine_MonoBehaviour__StopCoroutine((UnityEngine_MonoBehaviour_o *)this, delayActionCoroutine, 0);
    this->fields.delayActionCoroutine = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.delayActionCoroutine, 0, v12, v13);
  }
  if ( animationType )
  {
    scaleAnimation = this->fields.scaleAnimation;
    v15 = 0.0;
    animationTime = 0.0;
    if ( scaleAnimation )
      animationTime = scaleAnimation->fields.animationTime;
    moveAnimation = this->fields.moveAnimation;
    if ( moveAnimation )
      v15 = moveAnimation->fields.animationTime;
    v18 = animationTime <= v15 ? v15 : animationTime;
    ScoreRecordCardDialog__ActiveLargeObject(this, (const MethodInfo *)delayActionCoroutine);
    smallAnimationTime = this->fields.smallAnimationTime;
    v20 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(v20, (Il2CppObject *)this, Method_ScoreRecordCardDialog_ActiveSmallObject__, 0);
    v21 = v18 - smallAnimationTime;
  }
  else
  {
    ScoreRecordCardDialog__ActiveSmallObject(this, (const MethodInfo *)delayActionCoroutine);
    v22 = this->fields.smallAnimationTime;
    v20 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(v20, (Il2CppObject *)this, Method_ScoreRecordCardDialog_ActiveLargeObject__, 0);
    v21 = v22;
  }
  v23 = BasicHelper__DelayCall(v21, v20, 1, 0);
  this->fields.delayActionCoroutine = v23;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.delayActionCoroutine, (int32_t)v23, v24, v25);
  UnityEngine_MonoBehaviour__StartCoroutine_71209212(
    (UnityEngine_MonoBehaviour_o *)this,
    this->fields.delayActionCoroutine,
    0);
  v8 = sub_1C32CC8(TweenAnimationComponent___TypeInfo, 2);
  if ( !v8 )
    goto LABEL_36;
  v28 = this->fields.scaleAnimation;
  v29 = v8;
  if ( v28 )
  {
    v8 = sub_1C32D5C(this->fields.scaleAnimation, *(_QWORD *)(*(_QWORD *)v8 + 64LL));
    if ( !v8 )
      goto LABEL_37;
  }
  if ( !*(_DWORD *)(v29 + 24) )
    goto LABEL_35;
  *(_QWORD *)(v29 + 32) = v28;
  sub_1C32BC4((CGThumbnailListItem_o *)(v29 + 32), (int32_t)v28, v26, v27);
  v32 = this->fields.moveAnimation;
  if ( v32 )
  {
    v8 = sub_1C32D5C(v32, *(_QWORD *)(*(_QWORD *)v29 + 64LL));
    if ( !v8 )
    {
LABEL_37:
      v40 = sub_1C32EA0(v8);
      sub_1C32D48(v40, 0);
    }
  }
  if ( *(_DWORD *)(v29 + 24) <= 1u )
LABEL_35:
    sub_1C32E84(v8);
  *(_QWORD *)(v29 + 40) = v32;
  sub_1C32BC4((CGThumbnailListItem_o *)(v29 + 40), (int32_t)v32, v30, v31);
  *(_QWORD *)(v7 + 24) = v29;
  sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 24), v29, v33, v34);
  *(_DWORD *)(v7 + 16) = 0;
  v35 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(
    v35,
    (Il2CppObject *)v7,
    Method_ScoreRecordCardDialog___c__DisplayClass12_0__PlayAnimation_b__0__,
    0);
  v36 = *(_QWORD *)(v7 + 24);
  if ( !v36 )
LABEL_36:
    sub_1C32E7C(v8);
  v37 = *(_QWORD *)(v36 + 24);
  if ( (int)v37 >= 1 )
  {
    v38 = 0;
    while ( v38 < (unsigned int)v37 )
    {
      v39 = *(UnityEngine_Object_o **)(v36 + 32 + 8 * v38);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v8 = UnityEngine_Object__op_Equality(v39, 0, 0);
      if ( (v8 & 1) != 0 )
      {
        ActionExtensions__Call(v35, 0);
      }
      else
      {
        if ( !v39 )
          goto LABEL_36;
        v8 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, _QWORD, System_Action_o *, void *))v39->klass[1]._1.image)(
               v39,
               (unsigned int)animationType,
               v35,
               v39->klass[1]._1.gc_desc);
      }
      LODWORD(v37) = *(_DWORD *)(v36 + 24);
      if ( (__int64)++v38 >= (int)v37 )
        return;
    }
    goto LABEL_35;
  }
}


void ScoreRecordCardDialog__Setup(
        ScoreRecordCardDialog_o *this,
        UnityEngine_Vector3_o position,
        System_Action_o *inOnClosed,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  UnityEngine_Object_o *closeBtn; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  struct System_Action_o **p_onClosed; // x20
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  MoveAnimationComponent_o *v14; // x0
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4

  z = position.fields.z;
  y = position.fields.y;
  x = position.fields.x;
  if ( (byte_4C3989B & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3989B = 1;
  }
  closeBtn = (UnityEngine_Object_o *)this->fields.closeBtn;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(closeBtn, 0, 0) )
    AndroidBackKeyManager__AddBackBtn(this->fields.closeBtn, 0);
  this->fields.canTap = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C32E7C(0);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  this->fields.onClosed = inOnClosed;
  p_onClosed = &this->fields.onClosed;
  sub_1C32BC4((CGThumbnailListItem_o *)p_onClosed, (int32_t)inOnClosed, v12, v13);
  v14 = (MoveAnimationComponent_o *)*(p_onClosed - 5);
  if ( v14 )
  {
    v15.fields.y = y;
    v15.fields.z = z;
    v15.fields.x = x;
    MoveAnimationComponent__SetBeginWorldPosition(v14, v15, 0);
  }
}


void ScoreRecordCardDialog___OnClose_b__11_0(ScoreRecordCardDialog_o *this, const MethodInfo *method)
{
  CGThumbnailListItem_o *p_onClosed; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  p_onClosed = (CGThumbnailListItem_o *)&this->fields.onClosed;
  ActionExtensions__Call(this->fields.onClosed, 0);
  p_onClosed->klass = 0;
  sub_1C32BC4(p_onClosed, 0, v3, v4);
}


void ScoreRecordCardDialog___Open_b__9_0(ScoreRecordCardDialog_o *this, const MethodInfo *method)
{
  this->fields.canTap = 1;
}


void ScoreRecordCardDialog___c__DisplayClass12_0___ctor(
        ScoreRecordCardDialog___c__DisplayClass12_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ScoreRecordCardDialog___c__DisplayClass12_0___PlayAnimation_b__0(
        ScoreRecordCardDialog___c__DisplayClass12_0_o *this,
        const MethodInfo *method)
{
  struct TweenAnimationComponent_array *animationComponents; // x9
  int32_t v3; // w8

  animationComponents = this->fields.animationComponents;
  v3 = this->fields.index + 1;
  this->fields.index = v3;
  if ( !animationComponents )
    sub_1C32E7C(this);
  if ( v3 >= SLODWORD(animationComponents->max_length) )
    ActionExtensions__Call(this->fields.callback, 0);
}