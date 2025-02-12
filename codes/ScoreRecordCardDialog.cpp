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

  if ( (byte_4BC9B0B & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, method);
    byte_4BC9B0B = 1;
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
    sub_1C1AE30(v5, v4);
  }
}


void __fastcall ScoreRecordCardDialog__ActiveSmallObject(ScoreRecordCardDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *smallPanel; // x20
  __int64 v4; // x1
  struct UIPanel_o *v5; // x0
  UnityEngine_Object_o *largePanel; // x20

  if ( (byte_4BC9B0A & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, method);
    byte_4BC9B0A = 1;
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
    sub_1C1AE30(v5, v4);
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

  if ( (byte_4BC9B08 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, method);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v3);
    sub_1C1ABD4(&Method_ScoreRecordCardDialog_OnClose__, v4);
    sub_1C1ABD4(&Method_ScoreRecordCardDialog__OnClose_b__11_0__, v5);
    byte_4BC9B08 = 1;
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
      v7 = (_QWORD *)sub_1C1ABEC(Method_ScoreRecordCardDialog_OnClose__);
    v8 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 1, 0, 0LL);
    v9 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
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

  if ( (byte_4BC9B06 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, method);
    sub_1C1ABD4(&Method_ScoreRecordCardDialog__Open_b__9_0__, v3);
    byte_4BC9B06 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1C1AE30(0LL, v5);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  v6 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
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
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  System_Collections_IEnumerator_o *delayActionCoroutine; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  struct ScaleAnimationComponent_o *scaleAnimation; // x8
  float v30; // s0
  float animationTime; // s1
  struct MoveAnimationComponent_o *moveAnimation; // x8
  float v33; // s8
  float smallAnimationTime; // s9
  System_Action_o *v35; // x23
  float v36; // s0
  float v37; // s8
  struct System_Collections_IEnumerator_o *v38; // x0
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  struct ScaleAnimationComponent_o *v51; // x23
  int64_t v52; // x22
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  struct MoveAnimationComponent_o *v59; // x20
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  System_Action_o *v66; // x20
  __int64 v67; // x22
  __int64 v68; // x8
  unsigned __int64 v69; // x23
  UnityEngine_Object_o *v70; // x21
  __int64 v71; // x0

  if ( (byte_4BC9B09 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, *(_QWORD *)&animationType);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v7);
    sub_1C1ABD4(&Method_ScoreRecordCardDialog_ActiveLargeObject__, v8);
    sub_1C1ABD4(&Method_ScoreRecordCardDialog_ActiveSmallObject__, v9);
    sub_1C1ABD4(&TweenAnimationComponent___TypeInfo, v10);
    sub_1C1ABD4(&Method_ScoreRecordCardDialog___c__DisplayClass12_0__PlayAnimation_b__0__, v11);
    sub_1C1ABD4(&ScoreRecordCardDialog___c__DisplayClass12_0_TypeInfo, v12);
    byte_4BC9B09 = 1;
  }
  v13 = sub_1C1AE20(ScoreRecordCardDialog___c__DisplayClass12_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_36;
  *(_QWORD *)(v13 + 32) = callback;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v13 + 32), (int64_t)callback, v16, v17, v18, v19, v20, v21);
  delayActionCoroutine = this->fields.delayActionCoroutine;
  if ( delayActionCoroutine )
  {
    UnityEngine_MonoBehaviour__StopCoroutine((UnityEngine_MonoBehaviour_o *)this, delayActionCoroutine, 0LL);
    this->fields.delayActionCoroutine = 0LL;
    sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.delayActionCoroutine, 0LL, v23, v24, v25, v26, v27, v28);
  }
  if ( animationType )
  {
    scaleAnimation = this->fields.scaleAnimation;
    v30 = 0.0;
    animationTime = 0.0;
    if ( scaleAnimation )
      animationTime = scaleAnimation->fields.animationTime;
    moveAnimation = this->fields.moveAnimation;
    if ( moveAnimation )
      v30 = moveAnimation->fields.animationTime;
    v33 = animationTime <= v30 ? v30 : animationTime;
    ScoreRecordCardDialog__ActiveLargeObject(this, (const MethodInfo *)delayActionCoroutine);
    smallAnimationTime = this->fields.smallAnimationTime;
    v35 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
    System_Action___ctor(v35, (Il2CppObject *)this, Method_ScoreRecordCardDialog_ActiveSmallObject__, 0LL);
    v36 = v33 - smallAnimationTime;
  }
  else
  {
    ScoreRecordCardDialog__ActiveSmallObject(this, (const MethodInfo *)delayActionCoroutine);
    v37 = this->fields.smallAnimationTime;
    v35 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
    System_Action___ctor(v35, (Il2CppObject *)this, Method_ScoreRecordCardDialog_ActiveLargeObject__, 0LL);
    v36 = v37;
  }
  v38 = BasicHelper__DelayCall(v36, v35, 1, 0LL);
  this->fields.delayActionCoroutine = v38;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.delayActionCoroutine,
    (int64_t)v38,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  UnityEngine_MonoBehaviour__StartCoroutine_70779684(
    (UnityEngine_MonoBehaviour_o *)this,
    this->fields.delayActionCoroutine,
    0LL);
  v14 = sub_1C1AC7C(TweenAnimationComponent___TypeInfo, 2LL);
  if ( !v14 )
    goto LABEL_36;
  v51 = this->fields.scaleAnimation;
  v52 = v14;
  if ( v51 )
  {
    v14 = sub_1C1AD10(this->fields.scaleAnimation, *(_QWORD *)(*(_QWORD *)v14 + 64LL));
    if ( !v14 )
      goto LABEL_37;
  }
  if ( !*(_DWORD *)(v52 + 24) )
    goto LABEL_35;
  *(_QWORD *)(v52 + 32) = v51;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v52 + 32), (int64_t)v51, v45, v46, v47, v48, v49, v50);
  v59 = this->fields.moveAnimation;
  if ( v59 )
  {
    v14 = sub_1C1AD10(v59, *(_QWORD *)(*(_QWORD *)v52 + 64LL));
    if ( !v14 )
    {
LABEL_37:
      v71 = sub_1C1AE54(v14);
      sub_1C1ACFC(v71, 0LL);
    }
  }
  if ( *(_DWORD *)(v52 + 24) <= 1u )
LABEL_35:
    sub_1C1AE38(v14, v15);
  *(_QWORD *)(v52 + 40) = v59;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v52 + 40), (int64_t)v59, v53, v54, v55, v56, v57, v58);
  *(_QWORD *)(v13 + 24) = v52;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v13 + 24), v52, v60, v61, v62, v63, v64, v65);
  *(_DWORD *)(v13 + 16) = 0;
  v66 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
  System_Action___ctor(
    v66,
    (Il2CppObject *)v13,
    Method_ScoreRecordCardDialog___c__DisplayClass12_0__PlayAnimation_b__0__,
    0LL);
  v67 = *(_QWORD *)(v13 + 24);
  if ( !v67 )
LABEL_36:
    sub_1C1AE30(v14, v15);
  v68 = *(_QWORD *)(v67 + 24);
  if ( (int)v68 >= 1 )
  {
    v69 = 0LL;
    while ( v69 < (unsigned int)v68 )
    {
      v70 = *(UnityEngine_Object_o **)(v67 + 32 + 8 * v69);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v14 = UnityEngine_Object__op_Equality(v70, 0LL, 0LL);
      if ( (v14 & 1) != 0 )
      {
        ActionExtensions__Call(v66, 0LL);
      }
      else
      {
        if ( !v70 )
          goto LABEL_36;
        v14 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, _QWORD, System_Action_o *, const char *))v70->klass[1]._1.gc_desc)(
                v70,
                (unsigned int)animationType,
                v66,
                v70->klass[1]._1.name);
      }
      LODWORD(v68) = *(_DWORD *)(v67 + 24);
      if ( (__int64)++v69 >= (int)v68 )
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
  if ( (byte_4BC9B07 & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, inOnClosed);
    byte_4BC9B07 = 1;
  }
  closeBtn = (UnityEngine_Object_o *)this->fields.closeBtn;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(closeBtn, 0LL, 0LL) )
    AndroidBackKeyManager__AddBackBtn(this->fields.closeBtn, 0LL);
  this->fields.canTap = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1C1AE30(0LL, v11);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.onClosed = inOnClosed;
  p_onClosed = &this->fields.onClosed;
  sub_1C1AB78((PartyOrganizationUtility_o *)p_onClosed, (int64_t)inOnClosed, v13, v14, v15, v16, v17, v18);
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
  sub_1C1AB78(p_onClosed, 0LL, v3, v4, v5, v6, v7, v8);
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
    sub_1C1AE30(this, method);
  if ( v3 >= (signed int)animationComponents->max_length )
    ActionExtensions__Call(this->fields.callback, 0LL);
}