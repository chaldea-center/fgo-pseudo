void __fastcall ScoreRecordCardDialog___ctor(ScoreRecordCardDialog_o *this, const MethodInfo *method)
{
  this->fields.smallAnimationTime = 0.05;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ScoreRecordCardDialog__ActiveLargeObject(ScoreRecordCardDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *smallPanel; // x20
  __int64 v4; // x1
  struct UIPanel_o *v5; // x0
  UnityEngine_Object_o *largePanel; // x20

  if ( (byte_49BCF65 & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, method);
    byte_49BCF65 = 1;
  }
  smallPanel = (UnityEngine_Object_o *)this->fields.smallPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(smallPanel, 0LL, 0LL) )
  {
    v5 = this->fields.smallPanel;
    if ( !v5 )
      goto LABEL_14;
    ((void (__fastcall *)(struct UIPanel_o *, Il2CppMethodPointer, float))v5->klass->vtable._8_set_alpha.method)(
      v5,
      v5->klass->vtable._9_CalculateFinalAlpha.methodPtr,
      0.0);
  }
  largePanel = (UnityEngine_Object_o *)this->fields.largePanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(largePanel, 0LL, 0LL) )
  {
    v5 = this->fields.largePanel;
    if ( v5 )
    {
      ((void (__fastcall *)(struct UIPanel_o *, Il2CppMethodPointer, float))v5->klass->vtable._8_set_alpha.method)(
        v5,
        v5->klass->vtable._9_CalculateFinalAlpha.methodPtr,
        1.0);
      return;
    }
LABEL_14:
    sub_1B4D1EC(v5, v4);
  }
}


void __fastcall ScoreRecordCardDialog__ActiveSmallObject(ScoreRecordCardDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *smallPanel; // x20
  __int64 v4; // x1
  struct UIPanel_o *v5; // x0
  UnityEngine_Object_o *largePanel; // x20

  if ( (byte_49BCF64 & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, method);
    byte_49BCF64 = 1;
  }
  smallPanel = (UnityEngine_Object_o *)this->fields.smallPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(smallPanel, 0LL, 0LL) )
  {
    v5 = this->fields.smallPanel;
    if ( !v5 )
      goto LABEL_14;
    ((void (__fastcall *)(struct UIPanel_o *, Il2CppMethodPointer, float))v5->klass->vtable._8_set_alpha.method)(
      v5,
      v5->klass->vtable._9_CalculateFinalAlpha.methodPtr,
      1.0);
  }
  largePanel = (UnityEngine_Object_o *)this->fields.largePanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(largePanel, 0LL, 0LL) )
  {
    v5 = this->fields.largePanel;
    if ( v5 )
    {
      ((void (__fastcall *)(struct UIPanel_o *, Il2CppMethodPointer, float))v5->klass->vtable._8_set_alpha.method)(
        v5,
        v5->klass->vtable._9_CalculateFinalAlpha.methodPtr,
        0.0);
      return;
    }
LABEL_14:
    sub_1B4D1EC(v5, v4);
  }
}


void __fastcall ScoreRecordCardDialog__OnClose(ScoreRecordCardDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Object_o *closeBtn; // x20
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  System_Action_o *v9; // x20
  const MethodInfo *v10; // x3

  if ( (byte_49BCF62 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v3);
    sub_1B4CF90(&Method_ScoreRecordCardDialog_OnClose__, v4);
    sub_1B4CF90(&Method_ScoreRecordCardDialog__OnClose_b__11_0__, v5);
    byte_49BCF62 = 1;
  }
  if ( this->fields.canTap )
  {
    this->fields.canTap = 0;
    closeBtn = (UnityEngine_Object_o *)this->fields.closeBtn;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(closeBtn, 0LL, 0LL) )
      AndroidBackKeyManager__RemoveBackBtn(this->fields.closeBtn, 0LL);
    v7 = Method_ScoreRecordCardDialog_OnClose__;
    if ( (*((_BYTE *)Method_ScoreRecordCardDialog_OnClose__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1B4CFA8(Method_ScoreRecordCardDialog_OnClose__);
    v8 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 1, 0, 0LL);
    v9 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
    System_Action___ctor(v9, (Il2CppObject *)this, Method_ScoreRecordCardDialog__OnClose_b__11_0__, 0LL);
    ScoreRecordCardDialog__PlayAnimation(this, 1, v9, v10);
  }
}


void __fastcall ScoreRecordCardDialog__Open(ScoreRecordCardDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1
  System_Action_o *v6; // x20
  const MethodInfo *v7; // x3

  if ( (byte_49BCF60 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&Method_ScoreRecordCardDialog__Open_b__9_0__, v3);
    byte_49BCF60 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B4D1EC(0LL, v5);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  v6 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_ScoreRecordCardDialog__Open_b__9_0__, 0LL);
  ScoreRecordCardDialog__PlayAnimation(this, 0, v6, v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScoreRecordCardDialog__PlayAnimation(
        ScoreRecordCardDialog_o *this,
        int32_t animationType,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x21
  __int64 v14; // x0
  __int64 v15; // x1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Collections_IEnumerator_o *delayActionCoroutine; // x1
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  struct ScaleAnimationComponent_o *scaleAnimation; // x8
  float v22; // s0
  float animationTime; // s1
  struct MoveAnimationComponent_o *moveAnimation; // x8
  float v25; // s8
  float smallAnimationTime; // s9
  System_Action_o *v27; // x23
  float v28; // s0
  float v29; // s8
  struct System_Collections_IEnumerator_o *v30; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  struct ScaleAnimationComponent_o *v35; // x23
  __int64 v36; // x22
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  struct MoveAnimationComponent_o *v39; // x20
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  System_Action_o *v42; // x20
  __int64 v43; // x22
  __int64 v44; // x8
  unsigned __int64 v45; // x23
  UnityEngine_Object_o *v46; // x21
  __int64 v47; // x0

  if ( (byte_49BCF63 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, *(_QWORD *)&animationType);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v7);
    sub_1B4CF90(&Method_ScoreRecordCardDialog_ActiveLargeObject__, v8);
    sub_1B4CF90(&Method_ScoreRecordCardDialog_ActiveSmallObject__, v9);
    sub_1B4CF90(&TweenAnimationComponent___TypeInfo, v10);
    sub_1B4CF90(&Method_ScoreRecordCardDialog___c__DisplayClass12_0__PlayAnimation_b__0__, v11);
    sub_1B4CF90(&ScoreRecordCardDialog___c__DisplayClass12_0_TypeInfo, v12);
    byte_49BCF63 = 1;
  }
  v13 = sub_1B4D1DC(ScoreRecordCardDialog___c__DisplayClass12_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_36;
  *(_QWORD *)(v13 + 32) = callback;
  sub_1B4CF34((CGThumbnailListItem_o *)(v13 + 32), (int32_t)callback, v16, v17);
  delayActionCoroutine = this->fields.delayActionCoroutine;
  if ( delayActionCoroutine )
  {
    UnityEngine_MonoBehaviour__StopCoroutine((UnityEngine_MonoBehaviour_o *)this, delayActionCoroutine, 0LL);
    this->fields.delayActionCoroutine = 0LL;
    sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.delayActionCoroutine, 0, v19, v20);
  }
  if ( animationType )
  {
    scaleAnimation = this->fields.scaleAnimation;
    v22 = 0.0;
    animationTime = 0.0;
    if ( scaleAnimation )
      animationTime = scaleAnimation->fields.animationTime;
    moveAnimation = this->fields.moveAnimation;
    if ( moveAnimation )
      v22 = moveAnimation->fields.animationTime;
    v25 = animationTime <= v22 ? v22 : animationTime;
    ScoreRecordCardDialog__ActiveLargeObject(this, (const MethodInfo *)delayActionCoroutine);
    smallAnimationTime = this->fields.smallAnimationTime;
    v27 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
    System_Action___ctor(v27, (Il2CppObject *)this, Method_ScoreRecordCardDialog_ActiveSmallObject__, 0LL);
    v28 = v25 - smallAnimationTime;
  }
  else
  {
    ScoreRecordCardDialog__ActiveSmallObject(this, (const MethodInfo *)delayActionCoroutine);
    v29 = this->fields.smallAnimationTime;
    v27 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
    System_Action___ctor(v27, (Il2CppObject *)this, Method_ScoreRecordCardDialog_ActiveLargeObject__, 0LL);
    v28 = v29;
  }
  v30 = BasicHelper__DelayCall(v28, v27, 1, 0LL);
  this->fields.delayActionCoroutine = v30;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.delayActionCoroutine, (int32_t)v30, v31, v32);
  UnityEngine_MonoBehaviour__StartCoroutine_68789728(
    (UnityEngine_MonoBehaviour_o *)this,
    this->fields.delayActionCoroutine,
    0LL);
  v14 = sub_1B4D038(TweenAnimationComponent___TypeInfo, 2LL);
  if ( !v14 )
    goto LABEL_36;
  v35 = this->fields.scaleAnimation;
  v36 = v14;
  if ( v35 )
  {
    v14 = sub_1B4D0CC(this->fields.scaleAnimation, *(_QWORD *)(*(_QWORD *)v14 + 64LL));
    if ( !v14 )
      goto LABEL_37;
  }
  if ( !*(_DWORD *)(v36 + 24) )
    goto LABEL_35;
  *(_QWORD *)(v36 + 32) = v35;
  sub_1B4CF34((CGThumbnailListItem_o *)(v36 + 32), (int32_t)v35, v33, v34);
  v39 = this->fields.moveAnimation;
  if ( v39 )
  {
    v14 = sub_1B4D0CC(v39, *(_QWORD *)(*(_QWORD *)v36 + 64LL));
    if ( !v14 )
    {
LABEL_37:
      v47 = sub_1B4D210(v14);
      sub_1B4D0B8(v47, 0LL);
    }
  }
  if ( *(_DWORD *)(v36 + 24) <= 1u )
LABEL_35:
    sub_1B4D1F4(v14, v15);
  *(_QWORD *)(v36 + 40) = v39;
  sub_1B4CF34((CGThumbnailListItem_o *)(v36 + 40), (int32_t)v39, v37, v38);
  *(_QWORD *)(v13 + 24) = v36;
  sub_1B4CF34((CGThumbnailListItem_o *)(v13 + 24), v36, v40, v41);
  *(_DWORD *)(v13 + 16) = 0;
  v42 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(
    v42,
    (Il2CppObject *)v13,
    Method_ScoreRecordCardDialog___c__DisplayClass12_0__PlayAnimation_b__0__,
    0LL);
  v43 = *(_QWORD *)(v13 + 24);
  if ( !v43 )
LABEL_36:
    sub_1B4D1EC(v14, v15);
  v44 = *(_QWORD *)(v43 + 24);
  if ( (int)v44 >= 1 )
  {
    v45 = 0LL;
    while ( v45 < (unsigned int)v44 )
    {
      v46 = *(UnityEngine_Object_o **)(v43 + 32 + 8 * v45);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v14 = UnityEngine_Object__op_Equality(v46, 0LL, 0LL);
      if ( (v14 & 1) != 0 )
      {
        ActionExtensions__Call(v42, 0LL);
      }
      else
      {
        if ( !v46 )
          goto LABEL_36;
        v14 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, _QWORD, System_Action_o *, const char *))v46->klass[1]._1.gc_desc)(
                v46,
                (unsigned int)animationType,
                v42,
                v46->klass[1]._1.name);
      }
      LODWORD(v44) = *(_DWORD *)(v43 + 24);
      if ( (__int64)++v45 >= (int)v44 )
        return;
    }
    goto LABEL_35;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScoreRecordCardDialog__Setup(
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
  if ( (byte_49BCF61 & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, inOnClosed);
    byte_49BCF61 = 1;
  }
  closeBtn = (UnityEngine_Object_o *)this->fields.closeBtn;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(closeBtn, 0LL, 0LL) )
    AndroidBackKeyManager__AddBackBtn(this->fields.closeBtn, 0LL);
  this->fields.canTap = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B4D1EC(0LL, v11);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.onClosed = inOnClosed;
  p_onClosed = &this->fields.onClosed;
  sub_1B4CF34((CGThumbnailListItem_o *)p_onClosed, (int32_t)inOnClosed, v13, v14);
  v15 = (MoveAnimationComponent_o *)*(p_onClosed - 5);
  if ( v15 )
  {
    v16.fields.y = y;
    v16.fields.z = z;
    v16.fields.x = x;
    MoveAnimationComponent__SetBeginWorldPosition(v15, v16, 0LL);
  }
}


void __fastcall ScoreRecordCardDialog___OnClose_b__11_0(ScoreRecordCardDialog_o *this, const MethodInfo *method)
{
  CGThumbnailListItem_o *p_onClosed; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  p_onClosed = (CGThumbnailListItem_o *)&this->fields.onClosed;
  ActionExtensions__Call(this->fields.onClosed, 0LL);
  p_onClosed->klass = 0LL;
  sub_1B4CF34(p_onClosed, 0, v3, v4);
}


void __fastcall ScoreRecordCardDialog___Open_b__9_0(ScoreRecordCardDialog_o *this, const MethodInfo *method)
{
  this->fields.canTap = 1;
}


void __fastcall ScoreRecordCardDialog___c__DisplayClass12_0___ctor(
        ScoreRecordCardDialog___c__DisplayClass12_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ScoreRecordCardDialog___c__DisplayClass12_0___PlayAnimation_b__0(
        ScoreRecordCardDialog___c__DisplayClass12_0_o *this,
        const MethodInfo *method)
{
  struct TweenAnimationComponent_array *animationComponents; // x9
  int32_t v3; // w8

  animationComponents = this->fields.animationComponents;
  v3 = this->fields.index + 1;
  this->fields.index = v3;
  if ( !animationComponents )
    sub_1B4D1EC(this, method);
  if ( v3 >= (signed int)animationComponents->max_length )
    ActionExtensions__Call(this->fields.callback, 0LL);
}