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

  if ( (byte_4BDE5B7 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDE5B7 = 1;
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
    sub_1C22094(v5, v4);
  }
}


void __fastcall ScoreRecordCardDialog__ActiveSmallObject(ScoreRecordCardDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *smallPanel; // x20
  __int64 v4; // x1
  struct UIPanel_o *v5; // x0
  UnityEngine_Object_o *largePanel; // x20

  if ( (byte_4BDE5B6 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDE5B6 = 1;
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
    sub_1C22094(v5, v4);
  }
}


void __fastcall ScoreRecordCardDialog__OnClose(ScoreRecordCardDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *closeBtn; // x20
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  System_Action_o *v6; // x20
  const MethodInfo *v7; // x3

  if ( (byte_4BDE5B4 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_ScoreRecordCardDialog_OnClose__);
    sub_1C21E38(&Method_ScoreRecordCardDialog__OnClose_b__11_0__);
    byte_4BDE5B4 = 1;
  }
  if ( this->fields.canTap )
  {
    this->fields.canTap = 0;
    closeBtn = (UnityEngine_Object_o *)this->fields.closeBtn;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(closeBtn, 0LL, 0LL) )
      AndroidBackKeyManager__RemoveBackBtn(this->fields.closeBtn, 0LL);
    v4 = Method_ScoreRecordCardDialog_OnClose__;
    if ( (*((_BYTE *)Method_ScoreRecordCardDialog_OnClose__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C21E50(Method_ScoreRecordCardDialog_OnClose__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0, 0LL);
    v6 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_ScoreRecordCardDialog__OnClose_b__11_0__, 0LL);
    ScoreRecordCardDialog__PlayAnimation(this, 1, v6, v7);
  }
}


void __fastcall ScoreRecordCardDialog__Open(ScoreRecordCardDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  System_Action_o *v5; // x20
  const MethodInfo *v6; // x3

  if ( (byte_4BDE5B2 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_ScoreRecordCardDialog__Open_b__9_0__);
    byte_4BDE5B2 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1C22094(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  v5 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_ScoreRecordCardDialog__Open_b__9_0__, 0LL);
  ScoreRecordCardDialog__PlayAnimation(this, 0, v5, v6);
}


void __fastcall ScoreRecordCardDialog__PlayAnimation(
        ScoreRecordCardDialog_o *this,
        int32_t animationType,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  System_Collections_IEnumerator_o *delayActionCoroutine; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  struct ScaleAnimationComponent_o *scaleAnimation; // x8
  float v24; // s0
  float animationTime; // s1
  struct MoveAnimationComponent_o *moveAnimation; // x8
  float v27; // s8
  float smallAnimationTime; // s9
  System_Action_o *v29; // x23
  float v30; // s0
  float v31; // s8
  struct System_Collections_IEnumerator_o *v32; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  struct ScaleAnimationComponent_o *v45; // x23
  int64_t v46; // x22
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  struct MoveAnimationComponent_o *v53; // x20
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  System_Action_o *v60; // x20
  __int64 v61; // x22
  __int64 v62; // x8
  unsigned __int64 v63; // x23
  UnityEngine_Object_o *v64; // x21
  __int64 v65; // x0

  if ( (byte_4BDE5B5 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_ScoreRecordCardDialog_ActiveLargeObject__);
    sub_1C21E38(&Method_ScoreRecordCardDialog_ActiveSmallObject__);
    sub_1C21E38(&TweenAnimationComponent___TypeInfo);
    sub_1C21E38(&Method_ScoreRecordCardDialog___c__DisplayClass12_0__PlayAnimation_b__0__);
    sub_1C21E38(&ScoreRecordCardDialog___c__DisplayClass12_0_TypeInfo);
    byte_4BDE5B5 = 1;
  }
  v7 = sub_1C22084(ScoreRecordCardDialog___c__DisplayClass12_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_36;
  *(_QWORD *)(v7 + 32) = callback;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 32), (int64_t)callback, v10, v11, v12, v13, v14, v15);
  delayActionCoroutine = this->fields.delayActionCoroutine;
  if ( delayActionCoroutine )
  {
    UnityEngine_MonoBehaviour__StopCoroutine((UnityEngine_MonoBehaviour_o *)this, delayActionCoroutine, 0LL);
    this->fields.delayActionCoroutine = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.delayActionCoroutine, 0LL, v17, v18, v19, v20, v21, v22);
  }
  if ( animationType )
  {
    scaleAnimation = this->fields.scaleAnimation;
    v24 = 0.0;
    animationTime = 0.0;
    if ( scaleAnimation )
      animationTime = scaleAnimation->fields.animationTime;
    moveAnimation = this->fields.moveAnimation;
    if ( moveAnimation )
      v24 = moveAnimation->fields.animationTime;
    v27 = animationTime <= v24 ? v24 : animationTime;
    ScoreRecordCardDialog__ActiveLargeObject(this, (const MethodInfo *)delayActionCoroutine);
    smallAnimationTime = this->fields.smallAnimationTime;
    v29 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(v29, (Il2CppObject *)this, Method_ScoreRecordCardDialog_ActiveSmallObject__, 0LL);
    v30 = v27 - smallAnimationTime;
  }
  else
  {
    ScoreRecordCardDialog__ActiveSmallObject(this, (const MethodInfo *)delayActionCoroutine);
    v31 = this->fields.smallAnimationTime;
    v29 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(v29, (Il2CppObject *)this, Method_ScoreRecordCardDialog_ActiveLargeObject__, 0LL);
    v30 = v31;
  }
  v32 = BasicHelper__DelayCall(v30, v29, 1, 0LL);
  this->fields.delayActionCoroutine = v32;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.delayActionCoroutine,
    (int64_t)v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  UnityEngine_MonoBehaviour__StartCoroutine_70854884(
    (UnityEngine_MonoBehaviour_o *)this,
    this->fields.delayActionCoroutine,
    0LL);
  v8 = sub_1C21EE0(TweenAnimationComponent___TypeInfo, 2LL);
  if ( !v8 )
    goto LABEL_36;
  v45 = this->fields.scaleAnimation;
  v46 = v8;
  if ( v45 )
  {
    v8 = sub_1C21F74(this->fields.scaleAnimation, *(_QWORD *)(*(_QWORD *)v8 + 64LL));
    if ( !v8 )
      goto LABEL_37;
  }
  if ( !*(_DWORD *)(v46 + 24) )
    goto LABEL_35;
  *(_QWORD *)(v46 + 32) = v45;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v46 + 32), (int64_t)v45, v39, v40, v41, v42, v43, v44);
  v53 = this->fields.moveAnimation;
  if ( v53 )
  {
    v8 = sub_1C21F74(v53, *(_QWORD *)(*(_QWORD *)v46 + 64LL));
    if ( !v8 )
    {
LABEL_37:
      v65 = sub_1C220B8(v8);
      sub_1C21F60(v65, 0LL);
    }
  }
  if ( *(_DWORD *)(v46 + 24) <= 1u )
LABEL_35:
    sub_1C2209C(v8, v9);
  *(_QWORD *)(v46 + 40) = v53;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v46 + 40), (int64_t)v53, v47, v48, v49, v50, v51, v52);
  *(_QWORD *)(v7 + 24) = v46;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 24), v46, v54, v55, v56, v57, v58, v59);
  *(_DWORD *)(v7 + 16) = 0;
  v60 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(
    v60,
    (Il2CppObject *)v7,
    Method_ScoreRecordCardDialog___c__DisplayClass12_0__PlayAnimation_b__0__,
    0LL);
  v61 = *(_QWORD *)(v7 + 24);
  if ( !v61 )
LABEL_36:
    sub_1C22094(v8, v9);
  v62 = *(_QWORD *)(v61 + 24);
  if ( (int)v62 >= 1 )
  {
    v63 = 0LL;
    while ( v63 < (unsigned int)v62 )
    {
      v64 = *(UnityEngine_Object_o **)(v61 + 32 + 8 * v63);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v8 = UnityEngine_Object__op_Equality(v64, 0LL, 0LL);
      if ( (v8 & 1) != 0 )
      {
        ActionExtensions__Call(v60, 0LL);
      }
      else
      {
        if ( !v64 )
          goto LABEL_36;
        v8 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, _QWORD, System_Action_o *, const char *))v64->klass[1]._1.gc_desc)(
               v64,
               (unsigned int)animationType,
               v60,
               v64->klass[1]._1.name);
      }
      LODWORD(v62) = *(_DWORD *)(v61 + 24);
      if ( (__int64)++v63 >= (int)v62 )
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
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  MoveAnimationComponent_o *v19; // x0
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4

  z = position.fields.z;
  y = position.fields.y;
  x = position.fields.x;
  if ( (byte_4BDE5B3 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDE5B3 = 1;
  }
  closeBtn = (UnityEngine_Object_o *)this->fields.closeBtn;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(closeBtn, 0LL, 0LL) )
    AndroidBackKeyManager__AddBackBtn(this->fields.closeBtn, 0LL);
  this->fields.canTap = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1C22094(0LL, v11);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.onClosed = inOnClosed;
  p_onClosed = &this->fields.onClosed;
  sub_1C21DDC((PartyOrganizationUtility_o *)p_onClosed, (int64_t)inOnClosed, v13, v14, v15, v16, v17, v18);
  v19 = (MoveAnimationComponent_o *)*(p_onClosed - 5);
  if ( v19 )
  {
    v20.fields.y = y;
    v20.fields.z = z;
    v20.fields.x = x;
    MoveAnimationComponent__SetBeginWorldPosition(v19, v20, 0LL);
  }
}


void __fastcall ScoreRecordCardDialog___OnClose_b__11_0(ScoreRecordCardDialog_o *this, const MethodInfo *method)
{
  PartyOrganizationUtility_o *p_onClosed; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  p_onClosed = (PartyOrganizationUtility_o *)&this->fields.onClosed;
  ActionExtensions__Call(this->fields.onClosed, 0LL);
  p_onClosed->klass = 0LL;
  sub_1C21DDC(p_onClosed, 0LL, v3, v4, v5, v6, v7, v8);
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
    sub_1C22094(this, method);
  if ( v3 >= (signed int)animationComponents->max_length )
    ActionExtensions__Call(this->fields.callback, 0LL);
}