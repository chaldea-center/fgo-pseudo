void ScoreRecordCardDialog___ctor(ScoreRecordCardDialog_o *this, const MethodInfo *method)
{
  this->fields.smallAnimationTime = 0.05;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ScoreRecordCardDialog__ActiveLargeObject(ScoreRecordCardDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *smallPanel; // x20
  __int64 v4; // x1
  struct UIPanel_o *v5; // x0
  UnityEngine_Object_o *largePanel; // x20

  if ( (byte_4C58C65 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C58C65 = 1;
  }
  smallPanel = (UnityEngine_Object_o *)this->fields.smallPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(smallPanel, 0, 0) )
  {
    v5 = this->fields.smallPanel;
    if ( !v5 )
      goto LABEL_14;
    ((void (__fastcall *)(struct UIPanel_o *, const MethodInfo *, float))v5->klass->vtable._8_set_alpha.methodPtr)(
      v5,
      v5->klass->vtable._8_set_alpha.method,
      0.0);
  }
  largePanel = (UnityEngine_Object_o *)this->fields.largePanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(largePanel, 0, 0) )
  {
    v5 = this->fields.largePanel;
    if ( v5 )
    {
      ((void (__fastcall *)(struct UIPanel_o *, const MethodInfo *, float))v5->klass->vtable._8_set_alpha.methodPtr)(
        v5,
        v5->klass->vtable._8_set_alpha.method,
        1.0);
      return;
    }
LABEL_14:
    sub_1C3E7C0(v5, v4);
  }
}


void ScoreRecordCardDialog__ActiveSmallObject(ScoreRecordCardDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *smallPanel; // x20
  __int64 v4; // x1
  struct UIPanel_o *v5; // x0
  UnityEngine_Object_o *largePanel; // x20

  if ( (byte_4C58C64 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C58C64 = 1;
  }
  smallPanel = (UnityEngine_Object_o *)this->fields.smallPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(smallPanel, 0, 0) )
  {
    v5 = this->fields.smallPanel;
    if ( !v5 )
      goto LABEL_14;
    ((void (__fastcall *)(struct UIPanel_o *, const MethodInfo *, float))v5->klass->vtable._8_set_alpha.methodPtr)(
      v5,
      v5->klass->vtable._8_set_alpha.method,
      1.0);
  }
  largePanel = (UnityEngine_Object_o *)this->fields.largePanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(largePanel, 0, 0) )
  {
    v5 = this->fields.largePanel;
    if ( v5 )
    {
      ((void (__fastcall *)(struct UIPanel_o *, const MethodInfo *, float))v5->klass->vtable._8_set_alpha.methodPtr)(
        v5,
        v5->klass->vtable._8_set_alpha.method,
        0.0);
      return;
    }
LABEL_14:
    sub_1C3E7C0(v5, v4);
  }
}


void ScoreRecordCardDialog__OnClose(ScoreRecordCardDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *closeBtn; // x20
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  System_Action_o *v6; // x20
  const MethodInfo *v7; // x3

  if ( (byte_4C58C62 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_ScoreRecordCardDialog_OnClose__);
    sub_1C3E564(&Method_ScoreRecordCardDialog__OnClose_b__11_0__);
    byte_4C58C62 = 1;
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
      v4 = (_QWORD *)sub_1C3E57C(Method_ScoreRecordCardDialog_OnClose__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C3E548(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0, 0);
    v6 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_ScoreRecordCardDialog__OnClose_b__11_0__, 0);
    ScoreRecordCardDialog__PlayAnimation(this, 1, v6, v7);
  }
}


void ScoreRecordCardDialog__Open(ScoreRecordCardDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  System_Action_o *v5; // x20
  const MethodInfo *v6; // x3

  if ( (byte_4C58C60 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_ScoreRecordCardDialog__Open_b__9_0__);
    byte_4C58C60 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C3E7C0(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  v5 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_ScoreRecordCardDialog__Open_b__9_0__, 0);
  ScoreRecordCardDialog__PlayAnimation(this, 0, v5, v6);
}


void ScoreRecordCardDialog__PlayAnimation(
        ScoreRecordCardDialog_o *this,
        int32_t animationType,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Collections_IEnumerator_o *delayActionCoroutine; // x1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct ScaleAnimationComponent_o *scaleAnimation; // x8
  float v16; // s0
  float animationTime; // s1
  struct MoveAnimationComponent_o *moveAnimation; // x8
  float v19; // s8
  float smallAnimationTime; // s9
  System_Action_o *v21; // x23
  float v22; // s0
  float v23; // s8
  struct System_Collections_IEnumerator_o *v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  struct ScaleAnimationComponent_o *v29; // x23
  __int64 v30; // x22
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  struct MoveAnimationComponent_o *v33; // x20
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  System_Action_o *v36; // x20
  __int64 v37; // x22
  __int64 v38; // x8
  unsigned __int64 v39; // x23
  UnityEngine_Object_o *v40; // x21
  __int64 v41; // x0

  if ( (byte_4C58C63 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_ScoreRecordCardDialog_ActiveLargeObject__);
    sub_1C3E564(&Method_ScoreRecordCardDialog_ActiveSmallObject__);
    sub_1C3E564(&TweenAnimationComponent___TypeInfo);
    sub_1C3E564(&Method_ScoreRecordCardDialog___c__DisplayClass12_0__PlayAnimation_b__0__);
    sub_1C3E564(&ScoreRecordCardDialog___c__DisplayClass12_0_TypeInfo);
    byte_4C58C63 = 1;
  }
  v7 = sub_1C3E7B0(ScoreRecordCardDialog___c__DisplayClass12_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_36;
  *(_QWORD *)(v7 + 32) = callback;
  sub_1C3E508((CGThumbnailListItem_o *)(v7 + 32), (int32_t)callback, v10, v11);
  delayActionCoroutine = this->fields.delayActionCoroutine;
  if ( delayActionCoroutine )
  {
    UnityEngine_MonoBehaviour__StopCoroutine((UnityEngine_MonoBehaviour_o *)this, delayActionCoroutine, 0);
    this->fields.delayActionCoroutine = 0;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.delayActionCoroutine, 0, v13, v14);
  }
  if ( animationType )
  {
    scaleAnimation = this->fields.scaleAnimation;
    v16 = 0.0;
    animationTime = 0.0;
    if ( scaleAnimation )
      animationTime = scaleAnimation->fields.animationTime;
    moveAnimation = this->fields.moveAnimation;
    if ( moveAnimation )
      v16 = moveAnimation->fields.animationTime;
    v19 = animationTime <= v16 ? v16 : animationTime;
    ScoreRecordCardDialog__ActiveLargeObject(this, (const MethodInfo *)delayActionCoroutine);
    smallAnimationTime = this->fields.smallAnimationTime;
    v21 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
    System_Action___ctor(v21, (Il2CppObject *)this, Method_ScoreRecordCardDialog_ActiveSmallObject__, 0);
    v22 = v19 - smallAnimationTime;
  }
  else
  {
    ScoreRecordCardDialog__ActiveSmallObject(this, (const MethodInfo *)delayActionCoroutine);
    v23 = this->fields.smallAnimationTime;
    v21 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
    System_Action___ctor(v21, (Il2CppObject *)this, Method_ScoreRecordCardDialog_ActiveLargeObject__, 0);
    v22 = v23;
  }
  v24 = BasicHelper__DelayCall(v22, v21, 1, 0);
  this->fields.delayActionCoroutine = v24;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.delayActionCoroutine, (int32_t)v24, v25, v26);
  UnityEngine_MonoBehaviour__StartCoroutine_71327136(
    (UnityEngine_MonoBehaviour_o *)this,
    this->fields.delayActionCoroutine,
    0);
  v8 = sub_1C3E60C(TweenAnimationComponent___TypeInfo, 2);
  if ( !v8 )
    goto LABEL_36;
  v29 = this->fields.scaleAnimation;
  v30 = v8;
  if ( v29 )
  {
    v8 = sub_1C3E6A0(this->fields.scaleAnimation, *(_QWORD *)(*(_QWORD *)v8 + 64LL));
    if ( !v8 )
      goto LABEL_37;
  }
  if ( !*(_DWORD *)(v30 + 24) )
    goto LABEL_35;
  *(_QWORD *)(v30 + 32) = v29;
  sub_1C3E508((CGThumbnailListItem_o *)(v30 + 32), (int32_t)v29, v27, v28);
  v33 = this->fields.moveAnimation;
  if ( v33 )
  {
    v8 = sub_1C3E6A0(v33, *(_QWORD *)(*(_QWORD *)v30 + 64LL));
    if ( !v8 )
    {
LABEL_37:
      v41 = sub_1C3E7E4(v8);
      sub_1C3E68C(v41, 0);
    }
  }
  if ( *(_DWORD *)(v30 + 24) <= 1u )
LABEL_35:
    sub_1C3E7C8(v8, v9);
  *(_QWORD *)(v30 + 40) = v33;
  sub_1C3E508((CGThumbnailListItem_o *)(v30 + 40), (int32_t)v33, v31, v32);
  *(_QWORD *)(v7 + 24) = v30;
  sub_1C3E508((CGThumbnailListItem_o *)(v7 + 24), v30, v34, v35);
  *(_DWORD *)(v7 + 16) = 0;
  v36 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(
    v36,
    (Il2CppObject *)v7,
    Method_ScoreRecordCardDialog___c__DisplayClass12_0__PlayAnimation_b__0__,
    0);
  v37 = *(_QWORD *)(v7 + 24);
  if ( !v37 )
LABEL_36:
    sub_1C3E7C0(v8, v9);
  v38 = *(_QWORD *)(v37 + 24);
  if ( (int)v38 >= 1 )
  {
    v39 = 0;
    while ( v39 < (unsigned int)v38 )
    {
      v40 = *(UnityEngine_Object_o **)(v37 + 32 + 8 * v39);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v8 = UnityEngine_Object__op_Equality(v40, 0, 0);
      if ( (v8 & 1) != 0 )
      {
        ActionExtensions__Call(v36, 0);
      }
      else
      {
        if ( !v40 )
          goto LABEL_36;
        v8 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, _QWORD, System_Action_o *, void *))v40->klass[1]._1.image)(
               v40,
               (unsigned int)animationType,
               v36,
               v40->klass[1]._1.gc_desc);
      }
      LODWORD(v38) = *(_DWORD *)(v37 + 24);
      if ( (__int64)++v39 >= (int)v38 )
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
  __int64 v11; // x1
  struct System_Action_o **p_onClosed; // x20
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  MoveAnimationComponent_o *v15; // x0
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4

  z = position.fields.z;
  y = position.fields.y;
  x = position.fields.x;
  if ( (byte_4C58C61 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C58C61 = 1;
  }
  closeBtn = (UnityEngine_Object_o *)this->fields.closeBtn;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(closeBtn, 0, 0) )
    AndroidBackKeyManager__AddBackBtn(this->fields.closeBtn, 0);
  this->fields.canTap = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C3E7C0(0, v11);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  this->fields.onClosed = inOnClosed;
  p_onClosed = &this->fields.onClosed;
  sub_1C3E508((CGThumbnailListItem_o *)p_onClosed, (int32_t)inOnClosed, v13, v14);
  v15 = (MoveAnimationComponent_o *)*(p_onClosed - 5);
  if ( v15 )
  {
    v16.fields.y = y;
    v16.fields.z = z;
    v16.fields.x = x;
    MoveAnimationComponent__SetBeginWorldPosition(v15, v16, 0);
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
  sub_1C3E508(p_onClosed, 0, v3, v4);
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
    sub_1C3E7C0(this, method);
  if ( v3 >= SLODWORD(animationComponents->max_length) )
    ActionExtensions__Call(this->fields.callback, 0);
}