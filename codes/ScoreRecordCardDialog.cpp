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

  if ( (byte_5973073 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973073 = 1;
  }
  smallPanel = (UnityEngine_Object_o *)this->fields.smallPanel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(smallPanel, 0, 0) )
  {
    v5 = this->fields.smallPanel;
    if ( !v5 )
      goto LABEL_14;
    ((void (__fastcall *)(struct UIPanel_o *, const MethodInfo *, double))v5->klass->vtable._8_set_alpha.methodPtr)(
      v5,
      v5->klass->vtable._8_set_alpha.method,
      0.0);
  }
  largePanel = (UnityEngine_Object_o *)this->fields.largePanel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
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
    sub_2213CDC(v5, v4);
  }
}


void ScoreRecordCardDialog__ActiveSmallObject(ScoreRecordCardDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *smallPanel; // x20
  __int64 v4; // x1
  struct UIPanel_o *v5; // x0
  UnityEngine_Object_o *largePanel; // x20

  if ( (byte_5973072 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973072 = 1;
  }
  smallPanel = (UnityEngine_Object_o *)this->fields.smallPanel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  if ( UnityEngine_Object__op_Inequality(largePanel, 0, 0) )
  {
    v5 = this->fields.largePanel;
    if ( v5 )
    {
      ((void (__fastcall *)(struct UIPanel_o *, const MethodInfo *, double))v5->klass->vtable._8_set_alpha.methodPtr)(
        v5,
        v5->klass->vtable._8_set_alpha.method,
        0.0);
      return;
    }
LABEL_14:
    sub_2213CDC(v5, v4);
  }
}


void ScoreRecordCardDialog__OnClose(ScoreRecordCardDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *closeBtn; // x20
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  System_Action_o *v6; // x20
  const MethodInfo *v7; // x3

  if ( (byte_5973070 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_ScoreRecordCardDialog_OnClose__);
    sub_2213A60(&Method_ScoreRecordCardDialog__OnClose_b__11_0__);
    byte_5973070 = 1;
  }
  if ( this->fields.canTap )
  {
    closeBtn = (UnityEngine_Object_o *)this->fields.closeBtn;
    this->fields.canTap = 0;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( UnityEngine_Object__op_Inequality(closeBtn, 0, 0) )
      AndroidBackKeyManager__RemoveBackBtn(this->fields.closeBtn, 0);
    v4 = Method_ScoreRecordCardDialog_OnClose__;
    if ( (*((_BYTE *)Method_ScoreRecordCardDialog_OnClose__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_2213A78(Method_ScoreRecordCardDialog_OnClose__);
    v5 = (System_Reflection_MethodBase_o *)sub_2213A44(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0, 0);
    v6 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
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

  if ( (byte_597306E & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ScoreRecordCardDialog__Open_b__9_0__);
    byte_597306E = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_2213CDC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  v5 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_ScoreRecordCardDialog__Open_b__9_0__, 0);
  ScoreRecordCardDialog__PlayAnimation(this, 0, v5, v6);
}


void ScoreRecordCardDialog__PlayAnimation(
        ScoreRecordCardDialog_o *this,
        int32_t animationType,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_Collections_IEnumerator_o *delayActionCoroutine; // x1
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  float v23; // s0
  float animationTime; // s1
  struct ScaleAnimationComponent_o *scaleAnimation; // x8
  struct MoveAnimationComponent_o *moveAnimation; // x8
  float v27; // s8
  float smallAnimationTime; // s9
  System_Action_o *v29; // x23
  float v30; // s0
  float v31; // s8
  struct System_Collections_IEnumerator_o *v32; // x0
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  struct ScaleAnimationComponent_o *v45; // x23
  __int64 v46; // x22
  __int64 v47; // x1
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  struct MoveAnimationComponent_o *v54; // x21
  System_String_o *v55; // x2
  System_String_o *v56; // x3
  int32_t v57; // w4
  int32_t v58; // w5
  bool v59; // w6
  bool v60; // w7
  System_Action_c *v61; // x0
  System_Action_o *v62; // x21
  __int64 v63; // x22
  __int64 v64; // x8
  unsigned __int64 v65; // x23
  UnityEngine_Object_o *v66; // x20
  __int64 v67; // x0

  if ( (byte_5973071 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_ScoreRecordCardDialog_ActiveLargeObject__);
    sub_2213A60(&Method_ScoreRecordCardDialog_ActiveSmallObject__);
    sub_2213A60(&TweenAnimationComponent___TypeInfo);
    sub_2213A60(&Method_ScoreRecordCardDialog___c__DisplayClass12_0__PlayAnimation_b__0__);
    sub_2213A60(&ScoreRecordCardDialog___c__DisplayClass12_0_TypeInfo);
    byte_5973071 = 1;
  }
  v7 = sub_2213CCC(ScoreRecordCardDialog___c__DisplayClass12_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_36;
  *(_QWORD *)(v7 + 32) = callback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 32), (int32_t)callback, v10, v11, v12, v13, v14, v15);
  delayActionCoroutine = this->fields.delayActionCoroutine;
  if ( delayActionCoroutine )
  {
    UnityEngine_MonoBehaviour__StopCoroutine((UnityEngine_MonoBehaviour_o *)this, delayActionCoroutine, 0);
    this->fields.delayActionCoroutine = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.delayActionCoroutine, 0, v17, v18, v19, v20, v21, v22);
  }
  if ( animationType )
  {
    v23 = 0.0;
    animationTime = 0.0;
    scaleAnimation = this->fields.scaleAnimation;
    if ( scaleAnimation )
      animationTime = scaleAnimation->fields.animationTime;
    moveAnimation = this->fields.moveAnimation;
    if ( moveAnimation )
      v23 = moveAnimation->fields.animationTime;
    v27 = animationTime <= v23 ? v23 : animationTime;
    ScoreRecordCardDialog__ActiveLargeObject(this, (const MethodInfo *)delayActionCoroutine);
    smallAnimationTime = this->fields.smallAnimationTime;
    v29 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v29, (Il2CppObject *)this, Method_ScoreRecordCardDialog_ActiveSmallObject__, 0);
    v30 = v27 - smallAnimationTime;
  }
  else
  {
    ScoreRecordCardDialog__ActiveSmallObject(this, (const MethodInfo *)delayActionCoroutine);
    v31 = this->fields.smallAnimationTime;
    v29 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v29, (Il2CppObject *)this, Method_ScoreRecordCardDialog_ActiveLargeObject__, 0);
    v30 = v31;
  }
  v32 = BasicHelper__DelayCall(v30, v29, 1, 0);
  this->fields.delayActionCoroutine = v32;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.delayActionCoroutine,
    (int32_t)v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  UnityEngine_MonoBehaviour__StartCoroutine_83444756(
    (UnityEngine_MonoBehaviour_o *)this,
    this->fields.delayActionCoroutine,
    0);
  v8 = sub_2213B20(TweenAnimationComponent___TypeInfo, 2);
  if ( !v8 )
    goto LABEL_36;
  v45 = this->fields.scaleAnimation;
  v46 = v8;
  if ( v45 )
  {
    v8 = sub_2213BB4(this->fields.scaleAnimation, *(_QWORD *)(*(_QWORD *)v8 + 64LL));
    if ( !v8 )
      goto LABEL_37;
  }
  if ( !*(_DWORD *)(v46 + 24) )
    goto LABEL_35;
  *(_QWORD *)(v46 + 32) = v45;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v46 + 32), (int32_t)v45, v39, v40, v41, v42, v43, v44);
  v54 = this->fields.moveAnimation;
  if ( v54 )
  {
    v8 = sub_2213BB4(v54, *(_QWORD *)(*(_QWORD *)v46 + 64LL));
    if ( !v8 )
    {
LABEL_37:
      v67 = sub_2213D00(v8, v47);
      sub_2213BA0(v67, 0);
    }
  }
  if ( (*(_DWORD *)(v46 + 24) & 0xFFFFFFFE) == 0 )
LABEL_35:
    sub_2213CE4(v8);
  *(_QWORD *)(v46 + 40) = v54;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v46 + 40), (int32_t)v54, v48, v49, v50, v51, v52, v53);
  *(_QWORD *)(v7 + 24) = v46;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 24), v46, v55, v56, v57, v58, v59, v60);
  v61 = System_Action_TypeInfo;
  *(_DWORD *)(v7 + 16) = 0;
  v62 = (System_Action_o *)sub_2213CCC(v61);
  System_Action___ctor(
    v62,
    (Il2CppObject *)v7,
    Method_ScoreRecordCardDialog___c__DisplayClass12_0__PlayAnimation_b__0__,
    0);
  v63 = *(_QWORD *)(v7 + 24);
  if ( !v63 )
LABEL_36:
    sub_2213CDC(v8, v9);
  v64 = *(_QWORD *)(v63 + 24);
  if ( (int)v64 >= 1 )
  {
    v65 = 0;
    while ( v65 < (unsigned int)v64 )
    {
      v66 = *(UnityEngine_Object_o **)(v63 + 32 + 8 * v65);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
      v8 = UnityEngine_Object__op_Equality(v66, 0, 0);
      if ( (v8 & 1) != 0 )
      {
        ActionExtensions__Call(v62, 0);
      }
      else
      {
        if ( !v66 )
          goto LABEL_36;
        v8 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, _QWORD, System_Action_o *, void *))v66->klass[1]._1.image)(
               v66,
               (unsigned int)animationType,
               v62,
               v66->klass[1]._1.gc_desc);
      }
      LODWORD(v64) = *(_DWORD *)(v63 + 24);
      if ( (__int64)++v65 >= (int)v64 )
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
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  MoveAnimationComponent_o *v19; // x0
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4

  z = position.fields.z;
  y = position.fields.y;
  x = position.fields.x;
  if ( (byte_597306F & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597306F = 1;
  }
  closeBtn = (UnityEngine_Object_o *)this->fields.closeBtn;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, inOnClosed);
  if ( UnityEngine_Object__op_Inequality(closeBtn, 0, 0) )
    AndroidBackKeyManager__AddBackBtn(this->fields.closeBtn, 0);
  this->fields.canTap = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_2213CDC(0, v11);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  this->fields.onClosed = inOnClosed;
  p_onClosed = &this->fields.onClosed;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p_onClosed, (int32_t)inOnClosed, v13, v14, v15, v16, v17, v18);
  v19 = (MoveAnimationComponent_o *)*(p_onClosed - 5);
  if ( v19 )
  {
    v20.fields.y = y;
    v20.fields.z = z;
    v20.fields.x = x;
    MoveAnimationComponent__SetBeginWorldPosition(v19, v20, 0);
  }
}


void ScoreRecordCardDialog___OnClose_b__11_0(ScoreRecordCardDialog_o *this, const MethodInfo *method)
{
  MissionNaviTransitionBoardItem_o *p_onClosed; // x19
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7

  p_onClosed = (MissionNaviTransitionBoardItem_o *)&this->fields.onClosed;
  ActionExtensions__Call(this->fields.onClosed, 0);
  p_onClosed->klass = 0;
  sub_2213A04(p_onClosed, 0, v3, v4, v5, v6, v7, v8);
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
    sub_2213CDC(this, method);
  if ( v3 >= SLODWORD(animationComponents->max_length) )
    ActionExtensions__Call(this->fields.callback, 0);
}