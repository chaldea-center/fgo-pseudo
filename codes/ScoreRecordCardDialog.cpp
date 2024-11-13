void __fastcall ScoreRecordCardDialog___ctor(ScoreRecordCardDialog_o *this, const MethodInfo *method)
{
  this->fields.smallAnimationTime = 0.05;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ScoreRecordCardDialog__ActiveLargeObject(ScoreRecordCardDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *smallPanel; // x20
  __int64 v5; // x1
  struct UIPanel_o *v6; // x0
  UnityEngine_Object_o *largePanel; // x20

  if ( (byte_4B181AB & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B181AB = 1;
  }
  smallPanel = (UnityEngine_Object_o *)this->fields.smallPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(smallPanel, 0LL, 0LL) )
  {
    v6 = this->fields.smallPanel;
    if ( !v6 )
      goto LABEL_14;
    ((void (__fastcall *)(struct UIPanel_o *, Il2CppMethodPointer, float))v6->klass->vtable._8_set_alpha.method)(
      v6,
      v6->klass->vtable._9_CalculateFinalAlpha.methodPtr,
      0.0);
  }
  largePanel = (UnityEngine_Object_o *)this->fields.largePanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( UnityEngine_Object__op_Inequality(largePanel, 0LL, 0LL) )
  {
    v6 = this->fields.largePanel;
    if ( v6 )
    {
      ((void (__fastcall *)(struct UIPanel_o *, Il2CppMethodPointer, float))v6->klass->vtable._8_set_alpha.method)(
        v6,
        v6->klass->vtable._9_CalculateFinalAlpha.methodPtr,
        1.0);
      return;
    }
LABEL_14:
    sub_1BCAA3C(v6, v5);
  }
}


void __fastcall ScoreRecordCardDialog__ActiveSmallObject(ScoreRecordCardDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *smallPanel; // x20
  __int64 v5; // x1
  struct UIPanel_o *v6; // x0
  UnityEngine_Object_o *largePanel; // x20

  if ( (byte_4B181AA & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B181AA = 1;
  }
  smallPanel = (UnityEngine_Object_o *)this->fields.smallPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(smallPanel, 0LL, 0LL) )
  {
    v6 = this->fields.smallPanel;
    if ( !v6 )
      goto LABEL_14;
    ((void (__fastcall *)(struct UIPanel_o *, Il2CppMethodPointer, float))v6->klass->vtable._8_set_alpha.method)(
      v6,
      v6->klass->vtable._9_CalculateFinalAlpha.methodPtr,
      1.0);
  }
  largePanel = (UnityEngine_Object_o *)this->fields.largePanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( UnityEngine_Object__op_Inequality(largePanel, 0LL, 0LL) )
  {
    v6 = this->fields.largePanel;
    if ( v6 )
    {
      ((void (__fastcall *)(struct UIPanel_o *, Il2CppMethodPointer, float))v6->klass->vtable._8_set_alpha.method)(
        v6,
        v6->klass->vtable._9_CalculateFinalAlpha.methodPtr,
        0.0);
      return;
    }
LABEL_14:
    sub_1BCAA3C(v6, v5);
  }
}


void __fastcall ScoreRecordCardDialog__OnClose(ScoreRecordCardDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Object_o *closeBtn; // x20
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  System_Action_o *v16; // x20
  const MethodInfo *v17; // x3

  if ( (byte_4B181A8 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_ScoreRecordCardDialog_OnClose__, v6, v7);
    sub_1BCA7E0(&Method_ScoreRecordCardDialog__OnClose_b__11_0__, v8, v9);
    byte_4B181A8 = 1;
  }
  if ( this->fields.canTap )
  {
    this->fields.canTap = 0;
    closeBtn = (UnityEngine_Object_o *)this->fields.closeBtn;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( UnityEngine_Object__op_Inequality(closeBtn, 0LL, 0LL) )
      AndroidBackKeyManager__RemoveBackBtn(this->fields.closeBtn, 0LL);
    v11 = Method_ScoreRecordCardDialog_OnClose__;
    if ( (*((_BYTE *)Method_ScoreRecordCardDialog_OnClose__ + 83) & 2) != 0 )
      v11 = (_QWORD *)sub_1BCA7F8(Method_ScoreRecordCardDialog_OnClose__);
    v12 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v11, v11[4]);
    OverwriteAssetSoundName__PlaySystemSe(v12, 1, 0LL);
    v16 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v13, v14, v15);
    System_Action___ctor(v16, (Il2CppObject *)this, Method_ScoreRecordCardDialog__OnClose_b__11_0__, 0LL);
    ScoreRecordCardDialog__PlayAnimation(this, 1, v16, v17);
  }
}


void __fastcall ScoreRecordCardDialog__Open(ScoreRecordCardDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  System_Action_o *v11; // x20
  const MethodInfo *v12; // x3

  if ( (byte_4B181A6 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_ScoreRecordCardDialog__Open_b__9_0__, v4, v5);
    byte_4B181A6 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(0LL, v7);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  v11 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v8, v9, v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_ScoreRecordCardDialog__Open_b__9_0__, 0LL);
  ScoreRecordCardDialog__PlayAnimation(this, 0, v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScoreRecordCardDialog__PlayAnimation(
        ScoreRecordCardDialog_o *this,
        int32_t animationType,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x21
  __int64 v20; // x0
  __int64 v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  System_Collections_IEnumerator_o *delayActionCoroutine; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  struct ScaleAnimationComponent_o *scaleAnimation; // x8
  float v36; // s0
  float animationTime; // s1
  struct MoveAnimationComponent_o *moveAnimation; // x8
  float v39; // s8
  float smallAnimationTime; // s9
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  System_Action_o *v44; // x23
  float v45; // s0
  float v46; // s8
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  struct System_Collections_IEnumerator_o *v50; // x0
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  struct ScaleAnimationComponent_o *v63; // x23
  int64_t v64; // x22
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  struct MoveAnimationComponent_o *v71; // x20
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  __int64 v78; // x1
  __int64 v79; // x2
  __int64 v80; // x3
  System_Action_o *v81; // x20
  __int64 v82; // x22
  __int64 v83; // x8
  unsigned __int64 v84; // x23
  UnityEngine_Object_o *v85; // x21
  __int64 v86; // x0

  if ( (byte_4B181A9 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&animationType, callback);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_ScoreRecordCardDialog_ActiveLargeObject__, v9, v10);
    sub_1BCA7E0(&Method_ScoreRecordCardDialog_ActiveSmallObject__, v11, v12);
    sub_1BCA7E0(&TweenAnimationComponent___TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_ScoreRecordCardDialog___c__DisplayClass12_0__PlayAnimation_b__0__, v15, v16);
    sub_1BCA7E0(&ScoreRecordCardDialog___c__DisplayClass12_0_TypeInfo, v17, v18);
    byte_4B181A9 = 1;
  }
  v19 = sub_1BCAA2C(ScoreRecordCardDialog___c__DisplayClass12_0_TypeInfo, *(_QWORD *)&animationType, callback, method);
  System_Object___ctor((Il2CppObject *)v19, 0LL);
  if ( !v19 )
    goto LABEL_36;
  *(_QWORD *)(v19 + 32) = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v19 + 32), (int64_t)callback, v22, v23, v24, v25, v26, v27);
  delayActionCoroutine = this->fields.delayActionCoroutine;
  if ( delayActionCoroutine )
  {
    UnityEngine_MonoBehaviour__StopCoroutine((UnityEngine_MonoBehaviour_o *)this, delayActionCoroutine, 0LL);
    this->fields.delayActionCoroutine = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.delayActionCoroutine, 0LL, v29, v30, v31, v32, v33, v34);
  }
  if ( animationType )
  {
    scaleAnimation = this->fields.scaleAnimation;
    v36 = 0.0;
    animationTime = 0.0;
    if ( scaleAnimation )
      animationTime = scaleAnimation->fields.animationTime;
    moveAnimation = this->fields.moveAnimation;
    if ( moveAnimation )
      v36 = moveAnimation->fields.animationTime;
    v39 = animationTime <= v36 ? v36 : animationTime;
    ScoreRecordCardDialog__ActiveLargeObject(this, (const MethodInfo *)delayActionCoroutine);
    smallAnimationTime = this->fields.smallAnimationTime;
    v44 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v41, v42, v43);
    System_Action___ctor(v44, (Il2CppObject *)this, Method_ScoreRecordCardDialog_ActiveSmallObject__, 0LL);
    v45 = v39 - smallAnimationTime;
  }
  else
  {
    ScoreRecordCardDialog__ActiveSmallObject(this, (const MethodInfo *)delayActionCoroutine);
    v46 = this->fields.smallAnimationTime;
    v44 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v47, v48, v49);
    System_Action___ctor(v44, (Il2CppObject *)this, Method_ScoreRecordCardDialog_ActiveLargeObject__, 0LL);
    v45 = v46;
  }
  v50 = BasicHelper__DelayCall(v45, v44, 1, 0LL);
  this->fields.delayActionCoroutine = v50;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.delayActionCoroutine,
    (int64_t)v50,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
  UnityEngine_MonoBehaviour__StartCoroutine_70139516(
    (UnityEngine_MonoBehaviour_o *)this,
    this->fields.delayActionCoroutine,
    0LL);
  v20 = sub_1BCA888(TweenAnimationComponent___TypeInfo, 2LL);
  if ( !v20 )
    goto LABEL_36;
  v63 = this->fields.scaleAnimation;
  v64 = v20;
  if ( v63 )
  {
    v20 = sub_1BCA91C(this->fields.scaleAnimation, *(_QWORD *)(*(_QWORD *)v20 + 64LL));
    if ( !v20 )
      goto LABEL_37;
  }
  if ( !*(_DWORD *)(v64 + 24) )
    goto LABEL_35;
  *(_QWORD *)(v64 + 32) = v63;
  sub_1BCA784((PartyOrganizationUtility_o *)(v64 + 32), (int64_t)v63, v57, v58, v59, v60, v61, v62);
  v71 = this->fields.moveAnimation;
  if ( v71 )
  {
    v20 = sub_1BCA91C(v71, *(_QWORD *)(*(_QWORD *)v64 + 64LL));
    if ( !v20 )
    {
LABEL_37:
      v86 = sub_1BCAA60(v20);
      sub_1BCA908(v86, 0LL);
    }
  }
  if ( *(_DWORD *)(v64 + 24) <= 1u )
LABEL_35:
    sub_1BCAA44(v20, v21);
  *(_QWORD *)(v64 + 40) = v71;
  sub_1BCA784((PartyOrganizationUtility_o *)(v64 + 40), (int64_t)v71, v65, v66, v67, v68, v69, v70);
  *(_QWORD *)(v19 + 24) = v64;
  sub_1BCA784((PartyOrganizationUtility_o *)(v19 + 24), v64, v72, v73, v74, v75, v76, v77);
  *(_DWORD *)(v19 + 16) = 0;
  v81 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v78, v79, v80);
  System_Action___ctor(
    v81,
    (Il2CppObject *)v19,
    Method_ScoreRecordCardDialog___c__DisplayClass12_0__PlayAnimation_b__0__,
    0LL);
  v82 = *(_QWORD *)(v19 + 24);
  if ( !v82 )
LABEL_36:
    sub_1BCAA3C(v20, v21);
  v83 = *(_QWORD *)(v82 + 24);
  if ( (int)v83 >= 1 )
  {
    v84 = 0LL;
    while ( v84 < (unsigned int)v83 )
    {
      v85 = *(UnityEngine_Object_o **)(v82 + 32 + 8 * v84);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
      v20 = UnityEngine_Object__op_Equality(v85, 0LL, 0LL);
      if ( (v20 & 1) != 0 )
      {
        ActionExtensions__Call(v81, 0LL);
      }
      else
      {
        if ( !v85 )
          goto LABEL_36;
        v20 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, _QWORD, System_Action_o *, const char *))v85->klass[1]._1.gc_desc)(
                v85,
                (unsigned int)animationType,
                v81,
                v85->klass[1]._1.name);
      }
      LODWORD(v83) = *(_DWORD *)(v82 + 24);
      if ( (__int64)++v84 >= (int)v83 )
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
  if ( (byte_4B181A7 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, inOnClosed, method);
    byte_4B181A7 = 1;
  }
  closeBtn = (UnityEngine_Object_o *)this->fields.closeBtn;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, inOnClosed);
  if ( UnityEngine_Object__op_Inequality(closeBtn, 0LL, 0LL) )
    AndroidBackKeyManager__AddBackBtn(this->fields.closeBtn, 0LL);
  this->fields.canTap = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(0LL, v11);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.onClosed = inOnClosed;
  p_onClosed = &this->fields.onClosed;
  sub_1BCA784((PartyOrganizationUtility_o *)p_onClosed, (int64_t)inOnClosed, v13, v14, v15, v16, v17, v18);
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
  sub_1BCA784(p_onClosed, 0LL, v3, v4, v5, v6, v7, v8);
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
    sub_1BCAA3C(this, method);
  if ( v3 >= (signed int)animationComponents->max_length )
    ActionExtensions__Call(this->fields.callback, 0LL);
}