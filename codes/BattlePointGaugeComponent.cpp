void BattlePointGaugeComponent___cctor(const MethodInfo *method)
{
  struct BattlePointGaugeComponent_StaticFields *static_fields; // x8
  BattlePointGaugeComponent_c *v2; // x9
  struct BattlePointGaugeComponent_StaticFields *v3; // x8

  if ( (byte_5974152 & 1) == 0 )
  {
    sub_2213A60(&BattlePointGaugeComponent_TypeInfo);
    byte_5974152 = 1;
  }
  static_fields = BattlePointGaugeComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->OpenBarPosition.fields.x = 0;
  v2 = BattlePointGaugeComponent_TypeInfo;
  static_fields->OpenBarPosition.fields.z = 0.0;
  v3 = v2->static_fields;
  *(_QWORD *)&v3->CloseBarPosition.fields.x = 0xC228000000000000LL;
  v3->CloseBarPosition.fields.z = 0.0;
}


void BattlePointGaugeComponent___ctor(BattlePointGaugeComponent_o *this, const MethodInfo *method)
{
  this->fields.lastStepUpEffectIdInTween = -1;
  *(_QWORD *)&this->fields.currentMaxValueCache = 0x8000000080000000LL;
  *(_QWORD *)&this->fields.firstPhaseInTween = -1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BattlePointGaugeComponent__ApplyBarStateImmediately(BattlePointGaugeComponent_o *this, const MethodInfo *method)
{
  long double v2; // q0
  UnityEngine_Component_o *bar; // x0
  BattlePointGaugeComponent_c *v5; // x8
  _BOOL4 isOpened; // w10
  UnityEngine_Transform_o *v7; // x19
  int v8; // w9
  float *p_x; // x8
  float *p_y; // x9
  float *p_z; // x10
  struct BattlePointGaugeComponent_StaticFields *static_fields; // x10
  UnityEngine_Vector3_o v13; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5974149 & 1) == 0 )
  {
    sub_2213A60(&BattlePointGaugeComponent_TypeInfo);
    byte_5974149 = 1;
  }
  bar = (UnityEngine_Component_o *)this->fields.bar;
  if ( !bar )
    goto LABEL_15;
  *(_QWORD *)&v2 = 0;
  if ( this->fields.isOpened )
    *(float *)&v2 = 1.0;
  ((void (__fastcall *)(long double))bar->klass[1]._1.element_class)(v2);
  bar = (UnityEngine_Component_o *)this->fields.bar;
  if ( !bar )
    goto LABEL_15;
  bar = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bar, 0);
  v5 = BattlePointGaugeComponent_TypeInfo;
  isOpened = this->fields.isOpened;
  v7 = (UnityEngine_Transform_o *)bar;
  v8 = *(&BattlePointGaugeComponent_TypeInfo->_2.cctor_finished + 1);
  if ( isOpened )
  {
    if ( !v8 )
    {
      j_il2cpp_runtime_class_init_0(BattlePointGaugeComponent_TypeInfo, method);
      v5 = BattlePointGaugeComponent_TypeInfo;
    }
    p_x = &v5->static_fields->OpenBarPosition.fields.x;
    p_y = p_x + 1;
    p_z = p_x + 2;
    if ( v7 )
      goto LABEL_11;
LABEL_15:
    sub_2213CDC(bar, method);
  }
  if ( !v8 )
  {
    j_il2cpp_runtime_class_init_0(BattlePointGaugeComponent_TypeInfo, method);
    v5 = BattlePointGaugeComponent_TypeInfo;
  }
  static_fields = v5->static_fields;
  p_x = &static_fields->CloseBarPosition.fields.x;
  p_y = &static_fields->CloseBarPosition.fields.y;
  p_z = &static_fields->CloseBarPosition.fields.z;
  if ( !v7 )
    goto LABEL_15;
LABEL_11:
  v13.fields.x = *p_x;
  v13.fields.z = *p_z;
  v13.fields.y = *p_y;
  UnityEngine_Transform__set_localPosition(v7, v13, 0);
}


void BattlePointGaugeComponent__ApplyGaugeVisibleStateImmediately(
        BattlePointGaugeComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *barMaskPanel; // x0
  float v4; // s8
  const MethodInfo *v5; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  UnityEngine_GameObject_o *v7; // x0
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1
  UnityEngine_GameObject_o *v10; // x20
  BattlePointGaugeComponent_c *v11; // x8
  _BOOL4 isOpened; // w10
  UnityEngine_Transform_o *v13; // x19
  int v14; // w9
  float *p_x; // x8
  float *p_y; // x9
  float *p_z; // x10
  struct BattlePointGaugeComponent_StaticFields *static_fields; // x10
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_597414A & 1) == 0 )
  {
    sub_2213A60(&BattlePointGaugeComponent_TypeInfo);
    byte_597414A = 1;
  }
  barMaskPanel = (UnityEngine_Component_o *)this->fields.barMaskPanel;
  if ( this->fields.isDisplayTarget )
    v4 = 1.0;
  else
    v4 = 0.0;
  if ( !barMaskPanel )
    goto LABEL_24;
  gameObject = UnityEngine_Component__get_gameObject(barMaskPanel, 0);
  if ( !*(&BattlePointGaugeComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattlePointGaugeComponent_TypeInfo, v5);
  BattlePointGaugeComponent__BeginTweenAlpha(gameObject, 0.0, v4, v5);
  barMaskPanel = (UnityEngine_Component_o *)this->fields.battlePointPanel;
  if ( !barMaskPanel )
    goto LABEL_24;
  v7 = UnityEngine_Component__get_gameObject(barMaskPanel, 0);
  BattlePointGaugeComponent__BeginTweenAlpha(v7, 0.0, v4, v8);
  if ( this->fields.isDisplayTarget )
  {
    BattlePointGaugeComponent__ApplyBarStateImmediately(this, method);
    return;
  }
  barMaskPanel = (UnityEngine_Component_o *)this->fields.bar;
  if ( !barMaskPanel )
    goto LABEL_24;
  v10 = UnityEngine_Component__get_gameObject(barMaskPanel, 0);
  if ( !*(&BattlePointGaugeComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattlePointGaugeComponent_TypeInfo, v9);
  BattlePointGaugeComponent__BeginTweenAlpha(v10, 0.0, 0.0, v9);
  barMaskPanel = (UnityEngine_Component_o *)this->fields.bar;
  if ( !barMaskPanel )
    goto LABEL_24;
  barMaskPanel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(barMaskPanel, 0);
  v11 = BattlePointGaugeComponent_TypeInfo;
  isOpened = this->fields.isOpened;
  v13 = (UnityEngine_Transform_o *)barMaskPanel;
  v14 = *(&BattlePointGaugeComponent_TypeInfo->_2.cctor_finished + 1);
  if ( !isOpened )
  {
    if ( !v14 )
    {
      j_il2cpp_runtime_class_init_0(BattlePointGaugeComponent_TypeInfo, method);
      v11 = BattlePointGaugeComponent_TypeInfo;
    }
    static_fields = v11->static_fields;
    p_x = &static_fields->CloseBarPosition.fields.x;
    p_y = &static_fields->CloseBarPosition.fields.y;
    p_z = &static_fields->CloseBarPosition.fields.z;
    if ( v13 )
      goto LABEL_20;
LABEL_24:
    sub_2213CDC(barMaskPanel, method);
  }
  if ( !v14 )
  {
    j_il2cpp_runtime_class_init_0(BattlePointGaugeComponent_TypeInfo, method);
    v11 = BattlePointGaugeComponent_TypeInfo;
  }
  p_x = &v11->static_fields->OpenBarPosition.fields.x;
  p_y = p_x + 1;
  p_z = p_x + 2;
  if ( !v13 )
    goto LABEL_24;
LABEL_20:
  v19.fields.x = *p_x;
  v19.fields.z = *p_z;
  v19.fields.y = *p_y;
  UnityEngine_Transform__set_localPosition(v13, v19, 0);
}


void BattlePointGaugeComponent__ApplyPhaseSpriteName(
        BattlePointGaugeComponent_o *this,
        int32_t phaseValue,
        const MethodInfo *method)
{
  UISprite_o *phase; // x19
  System_String_o *v4; // x0
  __int64 v5; // x1

  phase = this->fields.phase;
  v4 = (System_String_o *)((__int64 (__fastcall *)(BattlePointGaugeComponent_o *, int32_t, const MethodInfo *))this->klass->vtable._13_GetPhaseSpriteName.methodPtr)(
                            this,
                            phaseValue,
                            this->klass->vtable._13_GetPhaseSpriteName.method);
  if ( !phase )
    sub_2213CDC(v4, v5);
  UISprite__set_spriteName(phase, v4, 0);
}


void BattlePointGaugeComponent__BeginTweenAlpha(
        UnityEngine_GameObject_o *go,
        float duration,
        float targetAlpha,
        const MethodInfo *method)
{
  _BOOL8 v7; // x0
  __int64 v8; // x1
  __int64 v9; // x1
  Il2CppObject *Component_object; // x20

  if ( (byte_597414C & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597414C = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)go, 0, 0);
  if ( !v7 )
  {
    if ( !go )
      goto LABEL_13;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         go,
                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
    v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0);
    if ( v7 )
    {
      TweenAlpha__Begin(go, duration, targetAlpha, 0);
      return;
    }
    if ( !Component_object )
LABEL_13:
      sub_2213CDC(v7, v8);
    *(float *)&Component_object[8].klass = TweenAlpha__get_value((TweenAlpha_o *)Component_object, 0);
    *((float *)&Component_object[8].klass + 1) = targetAlpha;
    *(float *)&Component_object[3].monitor = duration;
    UITweener__ResetToBeginning((UITweener_o *)Component_object, 0);
    UITweener__PlayForward((UITweener_o *)Component_object, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void BattlePointGaugeComponent__FadeGaugeVisibleState(
        BattlePointGaugeComponent_o *this,
        bool visible,
        float duration,
        const MethodInfo *method)
{
  bool v7; // w21
  UnityEngine_Component_o *barMaskPanel; // x0
  const MethodInfo *v9; // x1
  UnityEngine_GameObject_o *gameObject; // x21
  float v11; // s9
  const MethodInfo *v12; // x1
  UnityEngine_GameObject_o *v13; // x21
  float v14; // s9
  const MethodInfo *v15; // x1
  UnityEngine_GameObject_o *v16; // x21
  BattlePointGaugeComponent_c *v17; // x8
  _BOOL4 isOpened; // w10
  UnityEngine_Transform_o *v19; // x19
  int v20; // w9
  float *p_x; // x8
  float *p_y; // x9
  float *p_z; // x10
  struct BattlePointGaugeComponent_StaticFields *static_fields; // x10
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4

  v7 = visible;
  if ( (byte_597414B & 1) == 0 )
  {
    sub_2213A60(&BattlePointGaugeComponent_TypeInfo);
    byte_597414B = 1;
  }
  barMaskPanel = (UnityEngine_Component_o *)this->fields.barMaskPanel;
  this->fields.isDisplayTarget = v7;
  if ( !barMaskPanel )
    goto LABEL_30;
  gameObject = UnityEngine_Component__get_gameObject(barMaskPanel, 0);
  if ( visible )
    v11 = 1.0;
  else
    v11 = 0.0;
  if ( !*(&BattlePointGaugeComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattlePointGaugeComponent_TypeInfo, v9);
  BattlePointGaugeComponent__BeginTweenAlpha(gameObject, duration, v11, v9);
  barMaskPanel = (UnityEngine_Component_o *)this->fields.battlePointPanel;
  if ( !barMaskPanel )
    goto LABEL_30;
  v13 = UnityEngine_Component__get_gameObject(barMaskPanel, 0);
  if ( !*(&BattlePointGaugeComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattlePointGaugeComponent_TypeInfo, v12);
  BattlePointGaugeComponent__BeginTweenAlpha(v13, duration, v11, v12);
  barMaskPanel = (UnityEngine_Component_o *)this->fields.bar;
  if ( !barMaskPanel )
    goto LABEL_30;
  v14 = 0.0;
  v16 = UnityEngine_Component__get_gameObject(barMaskPanel, 0);
  if ( visible )
  {
    if ( this->fields.isOpened )
      v14 = 1.0;
    else
      v14 = 0.0;
  }
  if ( !*(&BattlePointGaugeComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattlePointGaugeComponent_TypeInfo, v15);
  BattlePointGaugeComponent__BeginTweenAlpha(v16, duration, v14, v15);
  if ( visible )
  {
    barMaskPanel = (UnityEngine_Component_o *)this->fields.bar;
    if ( barMaskPanel )
    {
      barMaskPanel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(barMaskPanel, 0);
      v17 = BattlePointGaugeComponent_TypeInfo;
      isOpened = this->fields.isOpened;
      v19 = (UnityEngine_Transform_o *)barMaskPanel;
      v20 = *(&BattlePointGaugeComponent_TypeInfo->_2.cctor_finished + 1);
      if ( isOpened )
      {
        if ( !v20 )
        {
          j_il2cpp_runtime_class_init_0(BattlePointGaugeComponent_TypeInfo, visible);
          v17 = BattlePointGaugeComponent_TypeInfo;
        }
        p_x = &v17->static_fields->OpenBarPosition.fields.x;
        p_y = p_x + 1;
        p_z = p_x + 2;
        if ( v19 )
        {
LABEL_25:
          v25.fields.x = *p_x;
          v25.fields.y = *p_y;
          v25.fields.z = *p_z;
          UnityEngine_Transform__set_localPosition(v19, v25, 0);
          return;
        }
      }
      else
      {
        if ( !v20 )
        {
          j_il2cpp_runtime_class_init_0(BattlePointGaugeComponent_TypeInfo, visible);
          v17 = BattlePointGaugeComponent_TypeInfo;
        }
        static_fields = v17->static_fields;
        p_x = &static_fields->CloseBarPosition.fields.x;
        p_y = &static_fields->CloseBarPosition.fields.y;
        p_z = &static_fields->CloseBarPosition.fields.z;
        if ( v19 )
          goto LABEL_25;
      }
    }
LABEL_30:
    sub_2213CDC(barMaskPanel, visible);
  }
}


int32_t BattlePointGaugeComponent__GetBattlePointId(BattlePointGaugeComponent_o *this, const MethodInfo *method)
{
  return this->fields.battlePointId;
}


// local variable allocation has failed, the output may be wrong!
int32_t BattlePointGaugeComponent__GetPhaseContextValue(
        BattlePointGaugeComponent_o *this,
        int32_t currentPointValue,
        int32_t currentMaxValue,
        const MethodInfo *method)
{
  BattlePointPhaseMaster_o *battlePointPhaseMaster; // x0

  battlePointPhaseMaster = this->fields.battlePointPhaseMaster;
  if ( !battlePointPhaseMaster )
    sub_2213CDC(0, *(_QWORD *)&currentPointValue);
  return BattlePointPhaseMaster__GetContextValue(
           battlePointPhaseMaster,
           currentPointValue,
           currentMaxValue,
           this->fields.isAsPercentage,
           0);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *BattlePointGaugeComponent__GetPhaseSpriteName(
        BattlePointGaugeComponent_o *this,
        int32_t phaseValue,
        const MethodInfo *method)
{
  BattlePointGaugeSetting_o *setting; // x0

  setting = this->fields.setting;
  if ( !setting )
    sub_2213CDC(0, *(_QWORD *)&phaseValue);
  return BattlePointGaugeSetting__GetPhaseSpriteName(setting, phaseValue, method);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *BattlePointGaugeComponent__GetPointEffectPrefab(
        BattlePointGaugeComponent_o *this,
        int32_t currentPointValue,
        const MethodInfo *method)
{
  struct BattlePointGaugeSetting_o *setting; // x8
  struct BattlePointGaugeSetting_EffectSection_o *effect; // x8

  setting = this->fields.setting;
  if ( !setting || (effect = setting->fields.effect) == 0 )
    sub_2213CDC(this, *(_QWORD *)&currentPointValue);
  return effect->fields.pointEffectPrefab;
}


float BattlePointGaugeComponent__GetPointEffectSequenceInterval(
        BattlePointGaugeComponent_o *this,
        int32_t effectCount,
        const MethodInfo *method)
{
  return 0.0;
}


float BattlePointGaugeComponent__GetPointEffectSequencePlayTime(
        BattlePointGaugeComponent_o *this,
        int32_t effectCount,
        float interval,
        const MethodInfo *method)
{
  float result; // s0

  result = (float)(effectCount - 1) * interval;
  if ( effectCount < 1 )
    return 0.0;
  return result;
}


void BattlePointGaugeComponent__HideGauge(BattlePointGaugeComponent_o *this, float duration, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  BattlePointGaugeComponent__FadeGaugeVisibleState(this, 0, duration, v3);
}


void BattlePointGaugeComponent__HideGaugeImmediately(BattlePointGaugeComponent_o *this, const MethodInfo *method)
{
  this->fields.isDisplayTarget = 0;
  BattlePointGaugeComponent__ApplyGaugeVisibleStateImmediately(this, method);
}


void BattlePointGaugeComponent__Init(
        BattlePointGaugeComponent_o *this,
        int32_t inBattlePointId,
        const MethodInfo *method)
{
  BattlePointGaugeComponent_c *klass; // x8
  __int64 v6; // x1
  Il2CppObject *Master_object; // x0
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x1
  UnityEngine_Component_o *phase; // x0
  Il2CppObject *Component_object; // x0
  struct UnityEngine_Animation_o **p_phaseAnimationComponent; // x20
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  __int64 v25; // x1
  UnityEngine_Object_o *phaseAnimationComponent; // x21
  System_Collections_IEnumerator_o *Enumerator; // x0
  __int64 v28; // x1
  System_Collections_IEnumerator_c *v29; // x8
  System_Collections_IEnumerator_o *v30; // x20
  __int64 v31; // x9
  int32_t *p_offset; // x10
  __int64 v33; // x0
  __int64 v34; // x0
  __int64 v35; // x1
  System_Collections_IEnumerator_o *v36; // x20
  System_Collections_IEnumerator_c *v37; // x8
  __int64 v38; // x9
  System_Collections_IEnumerator_c **v39; // x10
  __int64 v40; // x0
  UnityEngine_AnimationState_o *v41; // x0
  __int64 v42; // x1
  __int64 v43; // x2
  struct System_String_o *name; // x0
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  __int64 v51; // x0
  __int64 v52; // x8
  __int64 v53; // x21
  __int64 v54; // x9
  int *v55; // x10
  __int64 v56; // x0
  UnityEngine_Object_o *step; // x20
  Il2CppObject *v58; // x0
  struct UnityEngine_Animation_o **p_stepAnimationComponent; // x20
  System_String_o *v60; // x2
  System_String_o *v61; // x3
  int32_t v62; // w4
  int32_t v63; // w5
  bool v64; // w6
  bool v65; // w7
  __int64 v66; // x1
  UnityEngine_Object_o *stepAnimationComponent; // x21
  System_Collections_IEnumerator_o *v68; // x0
  __int64 v69; // x1
  System_Collections_IEnumerator_c *v70; // x8
  System_Collections_IEnumerator_o *v71; // x20
  __int64 v72; // x9
  int32_t *v73; // x10
  __int64 v74; // x0
  __int64 v75; // x0
  __int64 v76; // x1
  System_Collections_IEnumerator_o *v77; // x20
  System_Collections_IEnumerator_c *v78; // x8
  __int64 v79; // x9
  System_Collections_IEnumerator_c **v80; // x10
  __int64 v81; // x0
  UnityEngine_AnimationState_o *v82; // x0
  __int64 v83; // x1
  __int64 v84; // x2
  struct System_String_o *v85; // x0
  System_String_o *v86; // x2
  System_String_o *v87; // x3
  int32_t v88; // w4
  int32_t v89; // w5
  bool v90; // w6
  bool v91; // w7
  __int64 v92; // x20
  System_Collections_IEnumerator_o **v93; // x8
  __int64 *v94; // x24
  __int64 v95; // x0
  __int64 v96; // x8
  __int64 v97; // x21
  __int64 v98; // x9
  int *v99; // x10
  __int64 v100; // x0
  Il2CppObject *v101; // x0
  bool IsAsPercentage; // w8
  void *v103; // x0
  int v104; // w1
  __int64 v105; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_IEnumerator_o **v106; // [xsp+10h] [xbp-70h]
  __int64 *v107; // [xsp+18h] [xbp-68h]
  __int64 v108; // [xsp+20h] [xbp-60h] BYREF
  System_Collections_IEnumerator_o *v109; // [xsp+28h] [xbp-58h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-48h] BYREF

  if ( (byte_5974142 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_AnimationState_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Animation___);
    sub_2213A60(&Method_DataManager_GetMaster_BattlePointMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_BattlePointPhaseMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_BattlePointMaster__BattlePointEntity__int__TryGetEntity__);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974142 = 1;
  }
  entity = 0;
  klass = this->klass;
  v109 = 0;
  v108 = 0;
  ((void (__fastcall *)(BattlePointGaugeComponent_o *, const MethodInfo *, const MethodInfo *))klass->vtable._6_ValidateSerializedField.methodPtr)(
    this,
    klass->vtable._6_ValidateSerializedField.method,
    method);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v6);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_BattlePointPhaseMaster___);
  this->fields.battlePointPhaseMaster = (struct BattlePointPhaseMaster_o *)Master_object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.battlePointPhaseMaster,
    (int32_t)Master_object,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  this->fields.battlePointId = inBattlePointId;
  BattlePointGaugeComponent__StartClose(this, 1, v14);
  phase = (UnityEngine_Component_o *)this->fields.phase;
  if ( !phase )
    goto LABEL_80;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       phase,
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Animation___);
  this->fields.phaseAnimationComponent = (struct UnityEngine_Animation_o *)Component_object;
  p_phaseAnimationComponent = &this->fields.phaseAnimationComponent;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.phaseAnimationComponent,
    (int32_t)Component_object,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  phaseAnimationComponent = (UnityEngine_Object_o *)this->fields.phaseAnimationComponent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25);
  if ( UnityEngine_Object__op_Inequality(phaseAnimationComponent, 0, 0) )
  {
    phase = (UnityEngine_Component_o *)*p_phaseAnimationComponent;
    if ( !*p_phaseAnimationComponent )
      goto LABEL_80;
    Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)phase, 0);
    v109 = Enumerator;
    v105 = 0;
    v106 = &v109;
    v107 = &v108;
    if ( !Enumerator )
      sub_2213CDC(0, v28);
    v29 = Enumerator->klass;
    v30 = Enumerator;
    v31 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &v29->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v31;
        p_offset += 4;
        if ( !v31 )
          goto LABEL_15;
      }
      v33 = (__int64)&v29->vtable[*p_offset];
    }
    else
    {
LABEL_15:
      v33 = sub_224BC3C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v34 = (*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v33)(v30, *(_QWORD *)(v33 + 8));
    if ( (v34 & 1) != 0 )
    {
      v36 = v109;
      if ( !v109 )
        sub_2213CDC(v34, v35);
      v37 = v109->klass;
      v38 = *(unsigned __int16 *)&v109->klass->_2.rank;
      if ( *(_WORD *)&v109->klass->_2.rank )
      {
        v39 = (System_Collections_IEnumerator_c **)&v37->_1.interfaceOffsets->offset;
        while ( *(v39 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v38;
          v39 += 2;
          if ( !v38 )
            goto LABEL_23;
        }
        v40 = (__int64)&v37->vtable[*(_DWORD *)v39 + 1];
      }
      else
      {
LABEL_23:
        v40 = sub_224BC3C(v109, System_Collections_IEnumerator_TypeInfo, 1);
      }
      v41 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v40)(
                                              v36,
                                              *(_QWORD *)(v40 + 8));
      if ( !v41 )
        sub_2213CDC(0, v42);
      if ( v41->klass != UnityEngine_AnimationState_TypeInfo )
      {
        sub_221405C(v41, UnityEngine_AnimationState_TypeInfo, v43);
        goto LABEL_87;
      }
      name = UnityEngine_AnimationState__get_name(v41, 0);
      this->fields.phaseAnimationName = name;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.phaseAnimationName,
        (int32_t)name,
        v45,
        v46,
        v47,
        v48,
        v49,
        v50);
    }
    v51 = sub_2213BB4(v109, System_IDisposable_TypeInfo);
    v108 = v51;
    if ( v51 )
    {
      v52 = *(_QWORD *)v51;
      v53 = v51;
      v54 = *(unsigned __int16 *)(*(_QWORD *)v51 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v51 + 302LL) )
      {
        v55 = (int *)(*(_QWORD *)(v52 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v55 - 1) != System_IDisposable_TypeInfo )
        {
          --v54;
          v55 += 4;
          if ( !v54 )
            goto LABEL_33;
        }
        v56 = v52 + 16LL * *v55 + 312;
      }
      else
      {
LABEL_33:
        v56 = sub_224BC3C(v51, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v56)(v53, *(_QWORD *)(v56 + 8));
    }
  }
  step = (UnityEngine_Object_o *)this->fields.step;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
  if ( UnityEngine_Object__op_Inequality(step, 0, 0) )
  {
    phase = (UnityEngine_Component_o *)this->fields.step;
    if ( !phase )
      goto LABEL_80;
    v58 = UnityEngine_Component__GetComponent_object_(
            phase,
            (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Animation___);
    this->fields.stepAnimationComponent = (struct UnityEngine_Animation_o *)v58;
    p_stepAnimationComponent = &this->fields.stepAnimationComponent;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.stepAnimationComponent,
      (int32_t)v58,
      v60,
      v61,
      v62,
      v63,
      v64,
      v65);
    stepAnimationComponent = (UnityEngine_Object_o *)this->fields.stepAnimationComponent;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v66);
    if ( UnityEngine_Object__op_Inequality(stepAnimationComponent, 0, 0) )
    {
      phase = (UnityEngine_Component_o *)*p_stepAnimationComponent;
      if ( !*p_stepAnimationComponent )
        goto LABEL_80;
      v68 = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)phase, 0);
      v109 = v68;
      v105 = 0;
      v106 = &v109;
      v107 = &v108;
      if ( !v68 )
        sub_2213CDC(0, v69);
      v70 = v68->klass;
      v71 = v68;
      v72 = *(unsigned __int16 *)&v68->klass->_2.rank;
      if ( *(_WORD *)&v68->klass->_2.rank )
      {
        v73 = &v70->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)v73 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v72;
          v73 += 4;
          if ( !v72 )
            goto LABEL_49;
        }
        v74 = (__int64)&v70->vtable[*v73];
      }
      else
      {
LABEL_49:
        v74 = sub_224BC3C(v68, System_Collections_IEnumerator_TypeInfo, 0);
      }
      v75 = (*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v74)(v71, *(_QWORD *)(v74 + 8));
      if ( (v75 & 1) == 0 )
        goto LABEL_62;
      v77 = v109;
      if ( v109 )
      {
        v78 = v109->klass;
        v79 = *(unsigned __int16 *)&v109->klass->_2.rank;
        if ( *(_WORD *)&v109->klass->_2.rank )
        {
          v80 = (System_Collections_IEnumerator_c **)&v78->_1.interfaceOffsets->offset;
          while ( *(v80 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v79;
            v80 += 2;
            if ( !v79 )
              goto LABEL_57;
          }
          v81 = (__int64)&v78->vtable[*(_DWORD *)v80 + 1];
        }
        else
        {
LABEL_57:
          v81 = sub_224BC3C(v109, System_Collections_IEnumerator_TypeInfo, 1);
        }
        v82 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v81)(
                                                v77,
                                                *(_QWORD *)(v81 + 8));
        if ( !v82 )
          sub_2213CDC(0, v83);
        if ( v82->klass != UnityEngine_AnimationState_TypeInfo )
        {
          sub_221405C(v82, UnityEngine_AnimationState_TypeInfo, v84);
          if ( v104 != 1 )
          {
            sub_1FF99DC(&v105);
            sub_230112C();
          }
          v92 = *(_QWORD *)__cxa_begin_catch(v103);
          v105 = v92;
          __cxa_end_catch();
          v93 = v106;
          v94 = v107;
          goto LABEL_63;
        }
        v85 = UnityEngine_AnimationState__get_name(v82, 0);
        this->fields.stepAnimationName = v85;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.stepAnimationName,
          (int32_t)v85,
          v86,
          v87,
          v88,
          v89,
          v90,
          v91);
LABEL_62:
        v92 = 0;
        v93 = &v109;
        v94 = &v108;
LABEL_63:
        v95 = sub_2213BB4(*v93, System_IDisposable_TypeInfo);
        *v94 = v95;
        if ( v95 )
        {
          v96 = *(_QWORD *)v95;
          v97 = v95;
          v98 = *(unsigned __int16 *)(*(_QWORD *)v95 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v95 + 302LL) )
          {
            v99 = (int *)(*(_QWORD *)(v96 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v99 - 1) != System_IDisposable_TypeInfo )
            {
              --v98;
              v99 += 4;
              if ( !v98 )
                goto LABEL_68;
            }
            v100 = v96 + 16LL * *v99 + 312;
          }
          else
          {
LABEL_68:
            v100 = sub_224BC3C(v95, System_IDisposable_TypeInfo, 0);
          }
          (*(void (__fastcall **)(__int64, _QWORD))v100)(v97, *(_QWORD *)(v100 + 8));
        }
        if ( v92 )
          sub_2213CD4(v92);
        goto LABEL_72;
      }
LABEL_87:
      sub_2213CDC(v75, v76);
    }
  }
LABEL_72:
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v15);
  v101 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_BattlePointMaster___);
  if ( !v101
    || !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)v101,
          &entity,
          this->fields.battlePointId,
          (const MethodInfo_3F10B80 *)Method_DataMasterBase_BattlePointMaster__BattlePointEntity__int__TryGetEntity__) )
  {
    IsAsPercentage = 0;
    goto LABEL_79;
  }
  phase = (UnityEngine_Component_o *)entity;
  if ( !entity )
LABEL_80:
    sub_2213CDC(phase, v15);
  IsAsPercentage = BattlePointEntity__IsAsPercentage((BattlePointEntity_o *)entity, 0);
LABEL_79:
  this->fields.isAsPercentage = IsAsPercentage;
  *(_WORD *)&this->fields.isOpened = 0;
  BattlePointGaugeComponent__ApplyGaugeVisibleStateImmediately(this, v15);
}


void BattlePointGaugeComponent__InstantiatePointEffect(
        BattlePointGaugeComponent_o *this,
        UnityEngine_GameObject_o *prefab,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Transform_o *pointEffectRootTransform; // x21
  Il2CppObject *v7; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_Object_o *parent; // x21
  UnityEngine_Transform_o *v12; // x21
  UnityEngine_Transform_o *v13; // x8
  UnityEngine_Transform_o *v14; // x19
  __int64 v15; // x1
  Il2CppObject *Component_object; // x19

  if ( (byte_5974150 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject____91801432);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974150 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, prefab);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)prefab, 0, 0) )
  {
    pointEffectRootTransform = this->fields.pointEffectRootTransform;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
    v7 = UnityEngine_Object__Instantiate_object__59717116(
           (Il2CppObject *)prefab,
           pointEffectRootTransform,
           (const MethodInfo_38F35FC *)Method_UnityEngine_Object_Instantiate_GameObject____91801432);
    transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v7, 0, 0);
    if ( ((unsigned __int8)transform & 1) == 0 )
    {
      if ( !this->fields.isPointEffectAttachSibling )
        goto LABEL_20;
      transform = this->fields.pointEffectRootTransform;
      if ( !transform )
        goto LABEL_27;
      parent = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent(transform, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
      transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(parent, 0, 0);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        transform = this->fields.pointEffectRootTransform;
        if ( !transform )
          goto LABEL_27;
        transform = UnityEngine_Transform__get_parent(transform, 0);
        if ( !v7 )
          goto LABEL_27;
        v12 = transform;
        transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v7, 0);
        if ( !transform )
          goto LABEL_27;
        UnityEngine_Transform__SetParent_83492444(transform, v12, 1, 0);
        transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v7, 0);
        v13 = this->fields.pointEffectRootTransform;
        if ( !v13 )
          goto LABEL_27;
        v14 = transform;
        transform = (UnityEngine_Transform_o *)UnityEngine_Transform__GetSiblingIndex(v13, 0);
        if ( !v14 )
          goto LABEL_27;
        UnityEngine_Transform__SetSiblingIndex(v14, (_DWORD)transform + 1, 0);
      }
      else
      {
LABEL_20:
        if ( !v7 )
          goto LABEL_27;
      }
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v7,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
      transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality(
                                               (UnityEngine_Object_o *)Component_object,
                                               0,
                                               0);
      if ( ((unsigned __int8)transform & 1) != 0 )
        return;
      if ( Component_object )
      {
        CommonEffectComponent__Init((CommonEffectComponent_o *)Component_object, 0, 0, 0);
        return;
      }
LABEL_27:
      sub_2213CDC(transform, v9);
    }
  }
}


bool BattlePointGaugeComponent__IsStepAnimationIgnoredPhase(
        BattlePointGaugeComponent_o *this,
        int32_t phaseValue,
        const MethodInfo *method)
{
  struct System_Int32_array *ignoreStepAnimationPhases; // x8
  int max_length; // w9
  bool v5; // vf
  int v6; // w9
  int32_t *m_Items; // x8
  int v8; // t1
  bool result; // w0

  ignoreStepAnimationPhases = this->fields.ignoreStepAnimationPhases;
  if ( !ignoreStepAnimationPhases )
    return 0;
  max_length = ignoreStepAnimationPhases->max_length;
  v5 = __OFSUB__(max_length, 1);
  v6 = max_length - 1;
  if ( v6 < 0 != v5 )
    return 0;
  m_Items = ignoreStepAnimationPhases->m_Items;
  do
  {
    v8 = *m_Items++;
    result = v8 == phaseValue;
    if ( v8 == phaseValue )
      break;
  }
  while ( v6-- );
  return result;
}


void BattlePointGaugeComponent__OnCompleteGaugeValue(
        BattlePointGaugeComponent_o *this,
        int32_t currentPointValue,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  int32_t currentMaxValueCache; // w2
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x4
  __int64 v10; // x1
  BattlePointPhaseMaster_o *battlePointPhaseMaster; // x0
  const MethodInfo *v12; // x2
  BattlePointPhaseEntity_o *oldEntity; // [xsp+8h] [xbp-28h] BYREF
  BattlePointPhaseEntity_o *entity; // [xsp+18h] [xbp-18h] BYREF

  currentMaxValueCache = this->fields.currentMaxValueCache;
  oldEntity = 0;
  if ( BattlePointGaugeComponent__TryGetPhaseEntity(this, currentPointValue, currentMaxValueCache, &entity, v3) )
  {
    if ( (((__int64 (__fastcall *)(BattlePointGaugeComponent_o *, const MethodInfo *))this->klass->vtable._4_get_PlayFinalPhaseAnimationAtPointEffectStart.methodPtr)(
            this,
            this->klass->vtable._4_get_PlayFinalPhaseAnimationAtPointEffectStart.method)
        & 1) != 0
      || !BattlePointGaugeComponent__TryGetPhaseEntity(
            this,
            this->fields.beforePointValue,
            this->fields.beforeMaxValue,
            &oldEntity,
            v9) )
    {
      goto LABEL_8;
    }
    battlePointPhaseMaster = this->fields.battlePointPhaseMaster;
    if ( battlePointPhaseMaster )
    {
      battlePointPhaseMaster = (BattlePointPhaseMaster_o *)BattlePointPhaseMaster__IsEffectIdChanged_48808148(
                                                             battlePointPhaseMaster,
                                                             oldEntity,
                                                             entity,
                                                             0);
      if ( ((unsigned __int8)battlePointPhaseMaster & 1) == 0 )
      {
LABEL_8:
        BattlePointGaugeComponent__UpdateBattlePointImmediately_54708680(
          this,
          currentPointValue,
          this->fields.currentMaxValueCache,
          v8);
        goto LABEL_9;
      }
      if ( entity )
      {
        BattlePointGaugeComponent__ShowStepUpEffect(this, entity->fields.effectId, v12);
        goto LABEL_8;
      }
    }
    sub_2213CDC(battlePointPhaseMaster, v10);
  }
LABEL_9:
  BattlePointGaugeComponent__StopPointEffectCoroutines(this, v7);
  this->fields.lastStepUpEffectIdInTween = -1;
  *(_QWORD *)&this->fields.firstPhaseInTween = -1;
}


// attributes: thunk
void BattlePointGaugeComponent__OnDisable(BattlePointGaugeComponent_o *this, const MethodInfo *method)
{
  BattlePointGaugeComponent__StopPointEffectCoroutines(this, method);
}


// local variable allocation has failed, the output may be wrong!
void BattlePointGaugeComponent__PlayPhaseAnimation(
        BattlePointGaugeComponent_o *this,
        int32_t phaseValue,
        const MethodInfo *method)
{
  struct System_Int32_array *ignoreStepAnimationPhases; // x9
  __int64 max_length; // x8
  int32_t *m_Items; // x9
  int v8; // t1
  UnityEngine_Object_o *stepAnimationComponent; // x20
  UnityEngine_Animation_o *v10; // x0
  UnityEngine_Object_o *phaseAnimationComponent; // x20

  if ( (byte_5974144 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974144 = 1;
  }
  ignoreStepAnimationPhases = this->fields.ignoreStepAnimationPhases;
  if ( ignoreStepAnimationPhases && (int)ignoreStepAnimationPhases->max_length >= 1 )
  {
    max_length = (unsigned int)ignoreStepAnimationPhases->max_length;
    m_Items = ignoreStepAnimationPhases->m_Items;
    while ( 1 )
    {
      v8 = *m_Items++;
      if ( v8 == phaseValue )
        break;
      if ( !--max_length )
        goto LABEL_8;
    }
  }
  else
  {
LABEL_8:
    stepAnimationComponent = (UnityEngine_Object_o *)this->fields.stepAnimationComponent;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&phaseValue);
    if ( UnityEngine_Object__op_Inequality(stepAnimationComponent, 0, 0)
      && !System_String__IsNullOrEmpty(this->fields.stepAnimationName, 0) )
    {
      v10 = this->fields.stepAnimationComponent;
      if ( !v10 )
        goto LABEL_29;
      if ( UnityEngine_Animation__get_isPlaying(v10, 0) )
      {
        v10 = this->fields.stepAnimationComponent;
        if ( !v10 )
          goto LABEL_29;
        UnityEngine_Animation__Stop(v10, 0);
      }
      v10 = this->fields.stepAnimationComponent;
      if ( !v10 )
        goto LABEL_29;
      UnityEngine_Animation__Play_83078544(v10, this->fields.stepAnimationName, 0);
    }
  }
  phaseAnimationComponent = (UnityEngine_Object_o *)this->fields.phaseAnimationComponent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&phaseValue);
  if ( !UnityEngine_Object__op_Equality(phaseAnimationComponent, 0, 0)
    && !System_String__IsNullOrEmpty(this->fields.phaseAnimationName, 0) )
  {
    v10 = this->fields.phaseAnimationComponent;
    if ( !v10 )
      goto LABEL_29;
    if ( UnityEngine_Animation__get_isPlaying(v10, 0) )
    {
      v10 = this->fields.phaseAnimationComponent;
      if ( !v10 )
        goto LABEL_29;
      UnityEngine_Animation__Stop(v10, 0);
    }
    v10 = this->fields.phaseAnimationComponent;
    if ( v10 )
    {
      UnityEngine_Animation__Play_83078544(v10, this->fields.phaseAnimationName, 0);
      return;
    }
LABEL_29:
    sub_2213CDC(v10, *(_QWORD *)&phaseValue);
  }
}


System_Collections_IEnumerator_o *BattlePointGaugeComponent__PlayPointEffectSequence(
        BattlePointGaugeComponent_o *this,
        System_Collections_Generic_List_GameObject__o *effectPrefabs,
        float interval,
        const MethodInfo *method)
{
  __int64 v7; // x21
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_Collections_IEnumerator_o *result; // x0

  if ( (byte_597414F & 1) == 0 )
  {
    sub_2213A60(&BattlePointGaugeComponent__PlayPointEffectSequence_d__79_TypeInfo);
    byte_597414F = 1;
  }
  v7 = sub_2213CCC(BattlePointGaugeComponent__PlayPointEffectSequence_d__79_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 32), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v7 + 40) = effectPrefabs;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 40), (int32_t)effectPrefabs, v14, v15, v16, v17, v18, v19);
  result = (System_Collections_IEnumerator_o *)v7;
  *(float *)(v7 + 48) = interval;
  return result;
}


void BattlePointGaugeComponent__PlayPointUpPhaseSe(
        BattlePointGaugeComponent_o *this,
        int32_t phaseValue,
        const MethodInfo *method)
{
  ;
}


System_Collections_IEnumerator_o *BattlePointGaugeComponent__PlaySeInEffectTiming(
        System_String_o *seName,
        int32_t effectNum,
        float waitSecond,
        const MethodInfo *method)
{
  __int64 v7; // x21
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_Collections_IEnumerator_o *result; // x0

  if ( (byte_5974147 & 1) == 0 )
  {
    sub_2213A60(&BattlePointGaugeComponent__PlaySeInEffectTiming_d__56_TypeInfo);
    byte_5974147 = 1;
  }
  v7 = sub_2213CCC(BattlePointGaugeComponent__PlaySeInEffectTiming_d__56_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = seName;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 32), (int32_t)seName, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v7 + 40) = effectNum;
  result = (System_Collections_IEnumerator_o *)v7;
  *(float *)(v7 + 44) = waitSecond;
  return result;
}


void BattlePointGaugeComponent__ResetPointEffectState(BattlePointGaugeComponent_o *this, const MethodInfo *method)
{
  BattlePointGaugeComponent__StopPointEffectCoroutines(this, method);
  this->fields.lastStepUpEffectIdInTween = -1;
  *(_QWORD *)&this->fields.firstPhaseInTween = -1;
}


void BattlePointGaugeComponent__SetOpenedState(
        BattlePointGaugeComponent_o *this,
        bool opened,
        const MethodInfo *method)
{
  this->fields.isOpened = opened;
}


void BattlePointGaugeComponent__ShowAddedPointEffect(
        BattlePointGaugeComponent_o *this,
        int32_t currentPointValue,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  int32_t beforePointValue; // w8
  int32_t currentMaxValueCache; // w2
  const MethodInfo *v8; // x4
  const MethodInfo *v9; // x3
  __int64 setting; // x0
  struct BattlePointPhaseEntity_o *v11; // x1
  struct BattlePointPhaseEntity_o *beforeEntity; // x8
  BattlePointGaugeComponent_c *klass; // x9
  UISprite_o *phase; // x20
  __int64 v15; // x1
  UnityEngine_Object_o *step; // x20
  const MethodInfo *v17; // x2
  UISprite_o *v18; // x20
  const MethodInfo *v19; // x2
  int32_t PhaseContextValue; // w22
  const MethodInfo *v21; // x3
  int32_t v22; // w9
  int32_t v23; // w10
  int v24; // w21
  bool v25; // vf
  int v26; // w9
  int v27; // w23
  struct BattlePointGaugeSetting_o *v28; // x9
  struct BattlePointGaugeSetting_EffectSection_o *effect; // x9
  int EffectNum; // w21
  struct BattlePointGaugeSetting_o *v31; // x8
  struct BattlePointGaugeSetting_EffectSection_o *v32; // x8
  struct BattlePointPhaseEntity_o *beforeNextEntity; // x8
  struct BattlePointGaugeSetting_o *v34; // x9
  struct BattlePointGaugeSetting_EffectSection_o *v35; // x9
  struct BattlePointGaugeSetting_o *v36; // x8
  struct BattlePointGaugeSetting_EffectSection_o *v37; // x9
  __int64 v38; // x1
  Il2CppObject *v39; // x23
  UnityEngine_Transform_o *pointEffectRootTransform; // x22
  Il2CppObject *v41; // x22
  __int64 v42; // x1
  UnityEngine_Object_o *parent; // x23
  UnityEngine_Transform_o *v44; // x23
  UnityEngine_Transform_o *v45; // x23
  Il2CppObject *ComponentInChildren_object__59470360; // x23
  __int64 v47; // x1
  Il2CppObject *Component_object; // x22
  __int64 v49; // x1
  struct BattlePointGaugeSetting_o *v50; // x8
  struct BattlePointGaugeSetting_EffectSection_o *v51; // x8
  int32_t pointEffectSpeedUpBorderEffectNum; // w23
  float pointEffectSpeedUpCoefficient; // s8
  float v54; // s0
  UnityEngine_ParticleSystem_MainModule_o v55; // x0
  float v56; // s8
  UnityEngine_ParticleSystem_EmissionModule_o v57; // x0
  UnityEngine_ParticleSystem_EmissionModule_o v58; // x0
  float repeatInterval; // s9
  UnityEngine_ParticleSystem_EmissionModule_o v60; // x0
  struct BattlePointPhaseEntity_o *v61; // x8
  int32_t v62; // w8
  UnityEngine_GameObject_o *gameObject; // x22
  System_Object_array *v64; // x23
  __int64 v65; // x24
  __int64 v66; // x24
  __int64 v67; // x20
  __int64 v68; // x20
  __int64 v69; // x1
  System_Collections_Hashtable_o *v70; // x0
  const MethodInfo *v71; // x2
  struct BattlePointGaugeSetting_o *v72; // x8
  struct BattlePointGaugeSetting_EffectSection_o *v73; // x8
  System_String_o *effectSeName; // x20
  System_Collections_IEnumerator_o *v75; // x0
  struct UnityEngine_Coroutine_o *started; // x0
  System_String_o *v77; // x2
  System_String_o *v78; // x3
  int32_t v79; // w4
  int32_t v80; // w5
  bool v81; // w6
  bool v82; // w7
  float v83; // [xsp+4h] [xbp-12Ch] BYREF
  int32_t v84; // [xsp+8h] [xbp-128h] BYREF
  int32_t v85; // [xsp+Ch] [xbp-124h] BYREF
  UnityEngine_ParticleSystem_Burst_o v86; // [xsp+10h] [xbp-120h] BYREF
  UnityEngine_ParticleSystem_Burst_o v87; // [xsp+48h] [xbp-E8h] BYREF
  UnityEngine_ParticleSystem_Burst_o v88; // [xsp+80h] [xbp-B0h] BYREF
  __int64 v89; // [xsp+B8h] [xbp-78h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+C0h] [xbp-70h] BYREF
  BattlePointPhaseEntity_o *entity; // [xsp+C8h] [xbp-68h] BYREF

  if ( (byte_5974146 & 1) == 0 )
  {
    sub_2213A60(&BattlePointGaugeComponent_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponentInChildren_ParticleSystem____91782984);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    sub_2213A60(&System_MathF_TypeInfo);
    sub_2213A60(&object___TypeInfo);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject____91801432);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_20622/*"from"*/);
    sub_2213A60(&StringLiteral_15796/*"UpdateGaugeValue"*/);
    sub_2213A60(&StringLiteral_25366/*"time"*/);
    sub_2213A60(&StringLiteral_23566/*"oncompleteparams"*/);
    sub_2213A60(&StringLiteral_23573/*"onupdate"*/);
    sub_2213A60(&StringLiteral_10282/*"OnCompleteGaugeValue"*/);
    sub_2213A60(&StringLiteral_25406/*"to"*/);
    sub_2213A60(&StringLiteral_23565/*"oncomplete"*/);
    sub_2213A60(&iTween_TypeInfo);
    byte_5974146 = 1;
  }
  beforePointValue = this->fields.beforePointValue;
  m_ParticleSystem = 0;
  entity = 0;
  v89 = 0;
  memset(&v88, 0, sizeof(v88));
  if ( beforePointValue < currentPointValue && !this->fields.isPointEffectSequencePlaying )
  {
    currentMaxValueCache = this->fields.currentMaxValueCache;
    this->fields.isStepAnimationPlayedForCurrentPointUp = 0;
    if ( BattlePointGaugeComponent__TryGetPhaseEntity(this, currentPointValue, currentMaxValueCache, &entity, v3) )
    {
      if ( BattlePointGaugeComponent__TryStartPointEffectSequence(
             this,
             this->fields.beforePointValue,
             currentPointValue,
             this->fields.currentMaxValueCache,
             v8) )
      {
        setting = ((__int64 (__fastcall *)(BattlePointGaugeComponent_o *, const MethodInfo *))this->klass->vtable._4_get_PlayFinalPhaseAnimationAtPointEffectStart.methodPtr)(
                    this,
                    this->klass->vtable._4_get_PlayFinalPhaseAnimationAtPointEffectStart.method);
        if ( (setting & 1) != 0 )
        {
          beforeEntity = this->fields.beforeEntity;
          if ( !beforeEntity || !entity )
            goto LABEL_83;
          if ( beforeEntity->fields.phase != entity->fields.phase )
          {
            klass = this->klass;
            phase = this->fields.phase;
            this->fields.isStepAnimationPlayedForCurrentPointUp = 1;
            setting = ((__int64 (__fastcall *)(BattlePointGaugeComponent_o *))klass->vtable._13_GetPhaseSpriteName.methodPtr)(this);
            if ( !phase )
              goto LABEL_83;
            UISprite__set_spriteName(phase, (System_String_o *)setting, 0);
            step = (UnityEngine_Object_o *)this->fields.step;
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
            setting = UnityEngine_Object__op_Inequality(step, 0, 0);
            if ( (setting & 1) != 0 )
            {
              if ( !entity )
                goto LABEL_83;
              setting = (__int64)this->fields.setting;
              if ( !setting )
                goto LABEL_83;
              v18 = this->fields.step;
              setting = (__int64)BattlePointGaugeSetting__GetStepSpriteName(
                                   (BattlePointGaugeSetting_o *)setting,
                                   entity->fields.effectId,
                                   v17);
              if ( !v18 )
                goto LABEL_83;
              UISprite__set_spriteName(v18, (System_String_o *)setting, 0);
            }
            if ( entity )
            {
              setting = ((__int64 (__fastcall *)(BattlePointGaugeComponent_o *, _QWORD, const MethodInfo *))this->klass->vtable._5_PlayPointUpPhaseSe.methodPtr)(
                          this,
                          (unsigned int)entity->fields.phase,
                          this->klass->vtable._5_PlayPointUpPhaseSe.method);
              if ( entity )
              {
                BattlePointGaugeComponent__PlayPhaseAnimation(this, entity->fields.phase, v19);
                return;
              }
            }
LABEL_83:
            sub_2213CDC(setting, v11);
          }
        }
      }
      else
      {
        PhaseContextValue = BattlePointGaugeComponent__GetPhaseContextValue(
                              this,
                              this->fields.beforePointValue,
                              this->fields.beforeMaxValue,
                              v9);
        setting = BattlePointGaugeComponent__GetPhaseContextValue(
                    this,
                    currentPointValue,
                    this->fields.currentMaxValueCache,
                    v21);
        v11 = this->fields.beforeEntity;
        if ( !v11 || !entity )
          goto LABEL_83;
        v22 = v11->fields.phase;
        v23 = entity->fields.phase;
        v24 = setting;
        v25 = __OFSUB__(v23, v22);
        v26 = v23 - v22;
        if ( (v26 < 0) ^ v25 | (v26 == 0) )
        {
          v28 = this->fields.setting;
          if ( !v28 )
            goto LABEL_83;
          effect = v28->fields.effect;
          if ( !effect )
            goto LABEL_83;
          setting = (__int64)this->fields.battlePointPhaseMaster;
          if ( !setting )
            goto LABEL_83;
          EffectNum = BattlePointPhaseMaster__GetEffectNum(
                        (BattlePointPhaseMaster_o *)setting,
                        entity,
                        v24 - PhaseContextValue,
                        effect->fields.effectNumPerPhase,
                        0);
        }
        else
        {
          if ( v26 >= 2 )
          {
            v31 = this->fields.setting;
            if ( !v31 )
              goto LABEL_83;
            v32 = v31->fields.effect;
            if ( !v32 )
              goto LABEL_83;
            v27 = v32->fields.effectNumPerPhase * (v26 - 1);
          }
          else
          {
            v27 = 0;
          }
          beforeNextEntity = this->fields.beforeNextEntity;
          if ( !beforeNextEntity )
            goto LABEL_83;
          v34 = this->fields.setting;
          if ( !v34 )
            goto LABEL_83;
          v35 = v34->fields.effect;
          if ( !v35 )
            goto LABEL_83;
          setting = (__int64)this->fields.battlePointPhaseMaster;
          if ( !setting )
            goto LABEL_83;
          setting = BattlePointPhaseMaster__GetEffectNum(
                      (BattlePointPhaseMaster_o *)setting,
                      v11,
                      beforeNextEntity->fields.value - PhaseContextValue,
                      v35->fields.effectNumPerPhase,
                      0);
          v11 = entity;
          if ( !entity )
            goto LABEL_83;
          v36 = this->fields.setting;
          if ( !v36 )
            goto LABEL_83;
          v37 = v36->fields.effect;
          if ( !v37 || !this->fields.battlePointPhaseMaster )
            goto LABEL_83;
          EffectNum = setting
                    + v27
                    + BattlePointPhaseMaster__GetEffectNum(
                        this->fields.battlePointPhaseMaster,
                        entity,
                        v24 - entity->fields.value,
                        v37->fields.effectNumPerPhase,
                        0);
        }
        v39 = (Il2CppObject *)((__int64 (__fastcall *)(BattlePointGaugeComponent_o *, _QWORD, const MethodInfo *))this->klass->vtable._14_GetPointEffectPrefab.methodPtr)(
                                this,
                                (unsigned int)currentPointValue,
                                this->klass->vtable._14_GetPointEffectPrefab.method);
        pointEffectRootTransform = this->fields.pointEffectRootTransform;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v38);
        v41 = UnityEngine_Object__Instantiate_object__59717116(
                v39,
                pointEffectRootTransform,
                (const MethodInfo_38F35FC *)Method_UnityEngine_Object_Instantiate_GameObject____91801432);
        setting = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v41, 0, 0);
        if ( (setting & 1) == 0 )
        {
          if ( !this->fields.isPointEffectAttachSibling )
            goto LABEL_57;
          setting = (__int64)this->fields.pointEffectRootTransform;
          if ( !setting )
            goto LABEL_83;
          parent = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)setting, 0);
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v42);
          setting = UnityEngine_Object__op_Inequality(parent, 0, 0);
          if ( (setting & 1) != 0 )
          {
            setting = (__int64)this->fields.pointEffectRootTransform;
            if ( !setting )
              goto LABEL_83;
            setting = (__int64)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)setting, 0);
            if ( !v41 )
              goto LABEL_83;
            v44 = (UnityEngine_Transform_o *)setting;
            setting = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v41, 0);
            if ( !setting )
              goto LABEL_83;
            UnityEngine_Transform__SetParent_83492444((UnityEngine_Transform_o *)setting, v44, 1, 0);
            setting = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v41, 0);
            if ( !this->fields.pointEffectRootTransform )
              goto LABEL_83;
            v45 = (UnityEngine_Transform_o *)setting;
            setting = UnityEngine_Transform__GetSiblingIndex(this->fields.pointEffectRootTransform, 0);
            if ( !v45 )
              goto LABEL_83;
            UnityEngine_Transform__SetSiblingIndex(v45, setting + 1, 0);
          }
          else
          {
LABEL_57:
            if ( !v41 )
              goto LABEL_83;
          }
          ComponentInChildren_object__59470360 = UnityEngine_GameObject__GetComponentInChildren_object__59470360(
                                                   (UnityEngine_GameObject_o *)v41,
                                                   1,
                                                   (const MethodInfo_38B7218 *)Method_UnityEngine_GameObject_GetComponentInChildren_ParticleSystem____91782984);
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)v41,
                               (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v47);
          if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)ComponentInChildren_object__59470360, 0, 0) )
          {
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v49);
            setting = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0);
            if ( (setting & 1) == 0 )
            {
              if ( !Component_object )
                goto LABEL_83;
              CommonEffectComponent__Init((CommonEffectComponent_o *)Component_object, 0, 1, 0);
              if ( !ComponentInChildren_object__59470360 )
                goto LABEL_83;
              m_ParticleSystem = UnityEngine_ParticleSystem__get_main(
                                   (UnityEngine_ParticleSystem_o *)ComponentInChildren_object__59470360,
                                   0).fields.m_ParticleSystem;
              setting = (__int64)UnityEngine_ParticleSystem__get_emission(
                                   (UnityEngine_ParticleSystem_o *)ComponentInChildren_object__59470360,
                                   0).fields.m_ParticleSystem;
              v50 = this->fields.setting;
              v89 = setting;
              if ( !v50 )
                goto LABEL_83;
              v51 = v50->fields.effect;
              if ( !v51 )
                goto LABEL_83;
              pointEffectSpeedUpBorderEffectNum = v51->fields.pointEffectSpeedUpBorderEffectNum;
              pointEffectSpeedUpCoefficient = v51->fields.pointEffectSpeedUpCoefficient;
              if ( !*(&System_MathF_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(System_MathF_TypeInfo, v11);
              v54 = sub_343DAF4(
                      0,
                      1.0,
                      (float)(pointEffectSpeedUpCoefficient * (float)(EffectNum - pointEffectSpeedUpBorderEffectNum))
                    + 1.0);
              v55.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
              v56 = v54;
              UnityEngine_ParticleSystem_MainModule__set_simulationSpeed(v55, v54, 0);
              v57.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v89;
              if ( UnityEngine_ParticleSystem_EmissionModule__get_burstCount(v57, 0) < 1 )
              {
                repeatInterval = 0.0;
              }
              else
              {
                v58.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v89;
                UnityEngine_ParticleSystem_EmissionModule__GetBurst(&v87, v58, 0, 0);
                v88 = v87;
                repeatInterval = UnityEngine_ParticleSystem_Burst__get_repeatInterval(&v88, 0);
                UnityEngine_ParticleSystem_Burst__set_cycleCount(&v88, EffectNum, 0);
                v60.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v89;
                v86 = v88;
                UnityEngine_ParticleSystem_EmissionModule__SetBurst(v60, 0, &v86, 0);
              }
              CommonEffectComponent__Resume((CommonEffectComponent_o *)Component_object, 0, 0);
              v61 = this->fields.beforeEntity;
              if ( !v61 )
                goto LABEL_83;
              v62 = v61->fields.phase;
              this->fields.lastStepUpEffectIdInTween = -1;
              this->fields.firstPhaseInTween = v62;
              gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
              setting = sub_2213B20(object___TypeInfo, 12);
              if ( !setting )
                goto LABEL_83;
              v64 = (System_Object_array *)setting;
              sub_1FFE8F8(setting, StringLiteral_20622/*"from"*/);
              sub_1FFE2C4(v64, 0, StringLiteral_20622/*"from"*/);
              LODWORD(v87.fields.m_Time) = this->fields.beforePointValue;
              v65 = j_il2cpp_value_box_0(qword_5984348, &v87);
              sub_1FFE8F8(v64, v65);
              sub_1FFE2C4(v64, 1, v65);
              sub_1FFE8F8(v64, StringLiteral_25406/*"to"*/);
              sub_1FFE2C4(v64, 2, StringLiteral_25406/*"to"*/);
              v85 = currentPointValue;
              v66 = j_il2cpp_value_box_0(qword_5984348, &v85);
              sub_1FFE8F8(v64, v66);
              sub_1FFE2C4(v64, 3, v66);
              sub_1FFE8F8(v64, StringLiteral_23573/*"onupdate"*/);
              sub_1FFE2C4(v64, 4, StringLiteral_23573/*"onupdate"*/);
              sub_1FFE8F8(v64, StringLiteral_15796/*"UpdateGaugeValue"*/);
              sub_1FFE2C4(v64, 5, StringLiteral_15796/*"UpdateGaugeValue"*/);
              sub_1FFE8F8(v64, StringLiteral_23565/*"oncomplete"*/);
              sub_1FFE2C4(v64, 6, StringLiteral_23565/*"oncomplete"*/);
              sub_1FFE8F8(v64, StringLiteral_10282/*"OnCompleteGaugeValue"*/);
              sub_1FFE2C4(v64, 7, StringLiteral_10282/*"OnCompleteGaugeValue"*/);
              sub_1FFE8F8(v64, StringLiteral_23566/*"oncompleteparams"*/);
              sub_1FFE2C4(v64, 8, StringLiteral_23566/*"oncompleteparams"*/);
              v84 = currentPointValue;
              v67 = j_il2cpp_value_box_0(qword_5984348, &v84);
              sub_1FFE8F8(v64, v67);
              sub_1FFE2C4(v64, 9, v67);
              sub_1FFE8F8(v64, StringLiteral_25366/*"time"*/);
              sub_1FFE2C4(v64, 10, StringLiteral_25366/*"time"*/);
              v83 = (float)(repeatInterval * (float)EffectNum) / v56;
              v68 = j_il2cpp_value_box_0(qword_5984378, &v83);
              sub_1FFE8F8(v64, v68);
              sub_1FFE2C4(v64, 11, v68);
              if ( !*(&iTween_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v69);
              v70 = iTween__Hash(v64, 0);
              iTween__ValueTo(gameObject, v70, 0);
              v72 = this->fields.setting;
              if ( !v72 )
                goto LABEL_83;
              v73 = v72->fields.effect;
              if ( !v73 )
                goto LABEL_83;
              effectSeName = v73->fields.effectSeName;
              if ( !*(&BattlePointGaugeComponent_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(BattlePointGaugeComponent_TypeInfo, v11);
              v75 = BattlePointGaugeComponent__PlaySeInEffectTiming(effectSeName, EffectNum, repeatInterval / v56, v71);
              started = UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, v75, 0);
              this->fields.pointEffectSeCoroutine = started;
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)&this->fields.pointEffectSeCoroutine,
                (int32_t)started,
                v77,
                v78,
                v79,
                v80,
                v81,
                v82);
            }
          }
        }
      }
    }
  }
}


void BattlePointGaugeComponent__ShowGauge(BattlePointGaugeComponent_o *this, float duration, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  BattlePointGaugeComponent__FadeGaugeVisibleState(this, 1, duration, v3);
}


void BattlePointGaugeComponent__ShowGaugeImmediately(BattlePointGaugeComponent_o *this, const MethodInfo *method)
{
  this->fields.isDisplayTarget = 1;
  BattlePointGaugeComponent__ApplyGaugeVisibleStateImmediately(this, method);
}


void BattlePointGaugeComponent__ShowStepUpEffect(
        BattlePointGaugeComponent_o *this,
        int32_t effectId,
        const MethodInfo *method)
{
  __int64 v5; // x19
  BattlePointGaugeSetting_o *setting; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  const MethodInfo *v14; // x3
  int32_t lastStepUpEffectIdInTween; // w8
  __int64 v16; // x1
  Il2CppObject *v17; // x21
  UnityEngine_Transform_o *stepUpEffectRootTransform; // x22
  UnityEngine_Object_c *v19; // x0
  Il2CppObject *v20; // x20
  __int64 v21; // x1
  Il2CppObject *Component_object; // x20
  System_Action_object__o *v23; // x21
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  UnityEngine_GameObject_o *effectPrefab; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_5974148 & 1) == 0 )
  {
    sub_2213A60(&System_Action_string__TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject____91801432);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_BattlePointGaugeComponent___c__DisplayClass57_0__ShowStepUpEffect_b__0__);
    sub_2213A60(&BattlePointGaugeComponent___c__DisplayClass57_0_TypeInfo);
    byte_5974148 = 1;
  }
  effectPrefab = 0;
  v5 = sub_2213CCC(BattlePointGaugeComponent___c__DisplayClass57_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_17;
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  lastStepUpEffectIdInTween = this->fields.lastStepUpEffectIdInTween;
  *(_DWORD *)(v5 + 24) = effectId;
  if ( lastStepUpEffectIdInTween == effectId )
    return;
  setting = this->fields.setting;
  if ( !setting )
    goto LABEL_17;
  if ( BattlePointGaugeSetting__TryGetStepUpEffect(setting, effectId, &effectPrefab, v14) )
  {
    v17 = (Il2CppObject *)effectPrefab;
    stepUpEffectRootTransform = this->fields.stepUpEffectRootTransform;
    v19 = UnityEngine_Object_TypeInfo;
    this->fields.lastStepUpEffectIdInTween = *(_DWORD *)(v5 + 24);
    if ( !*(&v19->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v19, v16);
    v20 = UnityEngine_Object__Instantiate_object__59717116(
            v17,
            stepUpEffectRootTransform,
            (const MethodInfo_38F35FC *)Method_UnityEngine_Object_Instantiate_GameObject____91801432);
    setting = (BattlePointGaugeSetting_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v20, 0, 0);
    if ( ((unsigned __int8)setting & 1) == 0 )
    {
      if ( !v20 )
        goto LABEL_17;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v20,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
      {
        v23 = (System_Action_object__o *)sub_2213CCC(System_Action_string__TypeInfo);
        System_Action_object____ctor(
          v23,
          (Il2CppObject *)v5,
          Method_BattlePointGaugeComponent___c__DisplayClass57_0__ShowStepUpEffect_b__0__,
          0);
        if ( Component_object )
        {
          Component_object[12].klass = (Il2CppClass *)v23;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&Component_object[12],
            (int32_t)v23,
            v24,
            v25,
            v26,
            v27,
            v28,
            v29);
          CommonEffectComponent__Init((CommonEffectComponent_o *)Component_object, 0, 0, 0);
          return;
        }
LABEL_17:
        sub_2213CDC(setting, v7);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void BattlePointGaugeComponent__StartClose(
        BattlePointGaugeComponent_o *this,
        bool immediately,
        const MethodInfo *method)
{
  UIPanel_o *barMaskPanel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1
  UnityEngine_GameObject_o *v8; // x19
  BattlePointGaugeComponent_c *v9; // x8

  if ( (byte_5974140 & 1) == 0 )
  {
    sub_2213A60(&BattlePointGaugeComponent_TypeInfo);
    byte_5974140 = 1;
  }
  barMaskPanel = this->fields.barMaskPanel;
  this->fields.isOpened = 0;
  if ( !barMaskPanel )
    goto LABEL_14;
  UIPanel__set_depth(barMaskPanel, 2, 0);
  barMaskPanel = this->fields.battlePointPanel;
  if ( !barMaskPanel )
    goto LABEL_14;
  UIPanel__set_depth(barMaskPanel, 3, 0);
  if ( !this->fields.isDisplayTarget )
  {
    BattlePointGaugeComponent__ApplyGaugeVisibleStateImmediately(this, (const MethodInfo *)immediately);
    return;
  }
  if ( immediately )
  {
    BattlePointGaugeComponent__ApplyBarStateImmediately(this, (const MethodInfo *)immediately);
    return;
  }
  barMaskPanel = (UIPanel_o *)this->fields.bar;
  if ( !barMaskPanel
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)barMaskPanel, 0),
        TweenAlpha__Begin(gameObject, 0.4, 0.0, 0),
        (barMaskPanel = (UIPanel_o *)this->fields.bar) == 0) )
  {
LABEL_14:
    sub_2213CDC(barMaskPanel, immediately);
  }
  v8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)barMaskPanel, 0);
  v9 = BattlePointGaugeComponent_TypeInfo;
  if ( !*(&BattlePointGaugeComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattlePointGaugeComponent_TypeInfo, v7);
    v9 = BattlePointGaugeComponent_TypeInfo;
  }
  TweenPosition__Begin(v8, 0.3, v9->static_fields->CloseBarPosition, 0);
}


void BattlePointGaugeComponent__StartOpen(BattlePointGaugeComponent_o *this, const MethodInfo *method)
{
  UIPanel_o *barMaskPanel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v5; // x0
  __int64 v6; // x1
  BattlePointGaugeComponent_c *v7; // x8
  UnityEngine_GameObject_o *v8; // x19

  if ( (byte_5974141 & 1) == 0 )
  {
    sub_2213A60(&BattlePointGaugeComponent_TypeInfo);
    byte_5974141 = 1;
  }
  barMaskPanel = this->fields.barMaskPanel;
  this->fields.isOpened = 1;
  if ( !barMaskPanel )
    goto LABEL_12;
  UIPanel__set_depth(barMaskPanel, 6, 0);
  barMaskPanel = this->fields.battlePointPanel;
  if ( !barMaskPanel )
    goto LABEL_12;
  UIPanel__set_depth(barMaskPanel, 7, 0);
  if ( !this->fields.isDisplayTarget )
  {
    BattlePointGaugeComponent__ApplyGaugeVisibleStateImmediately(this, method);
    return;
  }
  barMaskPanel = (UIPanel_o *)this->fields.bar;
  if ( !barMaskPanel
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)barMaskPanel, 0),
        TweenAlpha__Begin(gameObject, 0.4, 1.0, 0),
        (barMaskPanel = (UIPanel_o *)this->fields.bar) == 0) )
  {
LABEL_12:
    sub_2213CDC(barMaskPanel, method);
  }
  v5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)barMaskPanel, 0);
  v7 = BattlePointGaugeComponent_TypeInfo;
  v8 = v5;
  if ( !*(&BattlePointGaugeComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattlePointGaugeComponent_TypeInfo, v6);
    v7 = BattlePointGaugeComponent_TypeInfo;
  }
  TweenPosition__Begin(v8, 0.3, v7->static_fields->OpenBarPosition, 0);
}


void BattlePointGaugeComponent__StopPointEffectCoroutines(BattlePointGaugeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Coroutine_o *pointEffectSequenceCoroutine; // x1
  struct UnityEngine_Coroutine_o **p_pointEffectSequenceCoroutine; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  UnityEngine_Coroutine_o *pointEffectSeCoroutine; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  p_pointEffectSequenceCoroutine = &this->fields.pointEffectSequenceCoroutine;
  pointEffectSequenceCoroutine = this->fields.pointEffectSequenceCoroutine;
  if ( pointEffectSequenceCoroutine )
  {
    UnityEngine_MonoBehaviour__StopCoroutine_83445360(
      (UnityEngine_MonoBehaviour_o *)this,
      pointEffectSequenceCoroutine,
      0);
    this->fields.pointEffectSequenceCoroutine = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)p_pointEffectSequenceCoroutine, 0, v5, v6, v7, v8, v9, v10);
  }
  pointEffectSeCoroutine = this->fields.pointEffectSeCoroutine;
  if ( pointEffectSeCoroutine )
  {
    UnityEngine_MonoBehaviour__StopCoroutine_83445360((UnityEngine_MonoBehaviour_o *)this, pointEffectSeCoroutine, 0);
    this->fields.pointEffectSeCoroutine = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.pointEffectSeCoroutine,
      0,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
  *(_WORD *)&this->fields.isPointEffectSequencePlaying = 0;
}


void BattlePointGaugeComponent__StopTweenAndApplyBattlePointImmediately(
        BattlePointGaugeComponent_o *this,
        int32_t value,
        int32_t currentMaxValue,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UnityEngine_GameObject_o *gameObject; // x22
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x3

  if ( (byte_5974151 & 1) == 0 )
  {
    sub_2213A60(&iTween_TypeInfo);
    byte_5974151 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !*(&iTween_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v7);
  iTween__Stop_75402912(gameObject, 0);
  BattlePointGaugeComponent__StopPointEffectCoroutines(this, v9);
  this->fields.lastStepUpEffectIdInTween = -1;
  *(_QWORD *)&this->fields.firstPhaseInTween = -1;
  BattlePointGaugeComponent__UpdateBattlePointImmediately_54708680(this, value, currentMaxValue, v10);
}


// local variable allocation has failed, the output may be wrong!
bool BattlePointGaugeComponent__TryGetPhaseEntity(
        BattlePointGaugeComponent_o *this,
        int32_t currentPointValue,
        int32_t currentMaxValue,
        BattlePointPhaseEntity_o **entity,
        const MethodInfo *method)
{
  BattlePointPhaseMaster_o *battlePointPhaseMaster; // x0

  battlePointPhaseMaster = this->fields.battlePointPhaseMaster;
  if ( currentMaxValue >= 1 )
  {
    if ( battlePointPhaseMaster )
      return BattlePointPhaseMaster__TryGetEntityByContext(
               battlePointPhaseMaster,
               this->fields.battlePointId,
               currentPointValue,
               currentMaxValue,
               this->fields.isAsPercentage,
               entity,
               0);
LABEL_6:
    sub_2213CDC(battlePointPhaseMaster, *(_QWORD *)&currentPointValue);
  }
  if ( !battlePointPhaseMaster )
    goto LABEL_6;
  return BattlePointPhaseMaster__TryGetEntityByValue(
           battlePointPhaseMaster,
           this->fields.battlePointId,
           currentPointValue,
           entity,
           0);
}


// local variable allocation has failed, the output may be wrong!
bool BattlePointGaugeComponent__TryGetPointEffectPrefabSequence(
        BattlePointGaugeComponent_o *this,
        int32_t startPointValue,
        int32_t currentPointValue,
        int32_t currentMaxValue,
        System_Collections_Generic_List_GameObject__o *effectPrefabs,
        const MethodInfo *method)
{
  int size; // w2
  int32_t v8; // w8

  if ( (byte_597414E & 1) == 0 )
  {
    this = (BattlePointGaugeComponent_o *)sub_2213A60(&Method_System_Collections_Generic_List_GameObject__Clear__);
    byte_597414E = 1;
  }
  if ( !effectPrefabs )
    sub_2213CDC(this, *(_QWORD *)&startPointValue);
  size = effectPrefabs->fields._size;
  v8 = effectPrefabs->fields._version + 1;
  effectPrefabs->fields._size = 0;
  effectPrefabs->fields._version = v8;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)effectPrefabs->fields._items, 0, size, 0);
  return 0;
}


bool BattlePointGaugeComponent__TryStartPointEffectSequence(
        BattlePointGaugeComponent_o *this,
        int32_t startPointValue,
        int32_t currentPointValue,
        int32_t currentMaxValue,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  BattlePointGaugeComponent_c *klass; // x8
  float v13; // s8
  const MethodInfo *v14; // x2
  int v15; // s0
  struct BattlePointPhaseEntity_o *beforeEntity; // x8
  int v17; // s9
  System_Collections_IEnumerator_o *v18; // x0
  struct UnityEngine_Coroutine_o *started; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  UnityEngine_GameObject_o *gameObject; // x22
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  System_Object_array *v33; // x23
  __int64 v34; // x0
  __int64 v35; // x1
  int32_t v36; // w1
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  Il2CppObject *v43; // x24
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  int32_t v50; // w1
  System_String_o *v51; // x2
  System_String_o *v52; // x3
  int32_t v53; // w4
  int32_t v54; // w5
  bool v55; // w6
  bool v56; // w7
  Il2CppObject *v57; // x24
  System_String_o *v58; // x2
  System_String_o *v59; // x3
  int32_t v60; // w4
  int32_t v61; // w5
  bool v62; // w6
  bool v63; // w7
  int32_t v64; // w1
  System_String_o *v65; // x2
  System_String_o *v66; // x3
  int32_t v67; // w4
  int32_t v68; // w5
  bool v69; // w6
  bool v70; // w7
  int32_t v71; // w1
  System_String_o *v72; // x2
  System_String_o *v73; // x3
  int32_t v74; // w4
  int32_t v75; // w5
  bool v76; // w6
  bool v77; // w7
  int32_t v78; // w1
  System_String_o *v79; // x2
  System_String_o *v80; // x3
  int32_t v81; // w4
  int32_t v82; // w5
  bool v83; // w6
  bool v84; // w7
  int32_t v85; // w1
  System_String_o *v86; // x2
  System_String_o *v87; // x3
  int32_t v88; // w4
  int32_t v89; // w5
  bool v90; // w6
  bool v91; // w7
  int32_t v92; // w1
  System_String_o *v93; // x2
  System_String_o *v94; // x3
  int32_t v95; // w4
  int32_t v96; // w5
  bool v97; // w6
  bool v98; // w7
  Il2CppObject *v99; // x21
  System_String_o *v100; // x2
  System_String_o *v101; // x3
  int32_t v102; // w4
  int32_t v103; // w5
  bool v104; // w6
  bool v105; // w7
  int32_t v106; // w1
  System_String_o *v107; // x2
  System_String_o *v108; // x3
  int32_t v109; // w4
  int32_t v110; // w5
  bool v111; // w6
  bool v112; // w7
  Il2CppObject *v113; // x21
  __int64 v114; // x1
  System_Collections_Hashtable_o *v115; // x0
  const MethodInfo *v116; // x2
  struct BattlePointGaugeSetting_o *setting; // x8
  struct BattlePointGaugeSetting_EffectSection_o *effect; // x8
  System_String_o *effectSeName; // x21
  int32_t size; // w20
  System_Collections_IEnumerator_o *v121; // x0
  struct UnityEngine_Coroutine_o *v122; // x0
  System_String_o *v123; // x2
  System_String_o *v124; // x3
  int32_t v125; // w4
  int32_t v126; // w5
  bool v127; // w6
  bool v128; // w7
  __int64 v130; // x0
  int v131; // [xsp+0h] [xbp-60h] BYREF
  int32_t v132; // [xsp+4h] [xbp-5Ch] BYREF
  int32_t v133; // [xsp+8h] [xbp-58h] BYREF
  int32_t beforePointValue; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_597414D & 1) == 0 )
  {
    sub_2213A60(&BattlePointGaugeComponent_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_2213A60(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_2213A60(&object___TypeInfo);
    sub_2213A60(&StringLiteral_20622/*"from"*/);
    sub_2213A60(&StringLiteral_15796/*"UpdateGaugeValue"*/);
    sub_2213A60(&StringLiteral_25366/*"time"*/);
    sub_2213A60(&StringLiteral_23566/*"oncompleteparams"*/);
    sub_2213A60(&StringLiteral_23573/*"onupdate"*/);
    sub_2213A60(&StringLiteral_10282/*"OnCompleteGaugeValue"*/);
    sub_2213A60(&StringLiteral_25406/*"to"*/);
    sub_2213A60(&StringLiteral_23565/*"oncomplete"*/);
    sub_2213A60(&iTween_TypeInfo);
    byte_597414D = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
  v10 = ((__int64 (__fastcall *)(BattlePointGaugeComponent_o *, _QWORD, _QWORD, _QWORD, System_Collections_Generic_List_object__o *, const MethodInfo *))this->klass->vtable._15_TryGetPointEffectPrefabSequence.methodPtr)(
          this,
          (unsigned int)startPointValue,
          (unsigned int)currentPointValue,
          (unsigned int)currentMaxValue,
          v9,
          this->klass->vtable._15_TryGetPointEffectPrefabSequence.method);
  if ( (v10 & 1) == 0 )
    return 0;
  if ( !v9 )
    goto LABEL_54;
  if ( v9->fields._size < 1 )
    return 0;
  klass = this->klass;
  this->fields.isPointEffectSequencePlaying = 1;
  v13 = ((float (__fastcall *)(BattlePointGaugeComponent_o *))klass->vtable._16_GetPointEffectSequenceInterval.methodPtr)(this);
  v10 = ((__int64 (__fastcall *)(BattlePointGaugeComponent_o *, _QWORD, const MethodInfo *))this->klass->vtable._17_GetPointEffectSequencePlayTime.methodPtr)(
          this,
          (unsigned int)v9->fields._size,
          this->klass->vtable._17_GetPointEffectSequencePlayTime.method);
  beforeEntity = this->fields.beforeEntity;
  if ( !beforeEntity )
    goto LABEL_54;
  v17 = v15;
  this->fields.firstPhaseInTween = beforeEntity->fields.phase;
  this->fields.lastStepUpEffectIdInTween = -1;
  v18 = BattlePointGaugeComponent__PlayPointEffectSequence(
          this,
          (System_Collections_Generic_List_GameObject__o *)v9,
          v13,
          v14);
  started = UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, v18, 0);
  this->fields.pointEffectSequenceCoroutine = started;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.pointEffectSequenceCoroutine,
    (int32_t)started,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v10 = sub_2213B20(object___TypeInfo, 12);
  if ( !v10 )
LABEL_54:
    sub_2213CDC(v10, v11);
  v33 = (System_Object_array *)v10;
  v34 = StringLiteral_20622/*"from"*/;
  if ( StringLiteral_20622/*"from"*/ )
  {
    v34 = sub_2213BB4(StringLiteral_20622/*"from"*/, v33->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_53;
  }
  if ( !LODWORD(v33->max_length) )
    goto LABEL_52;
  v36 = StringLiteral_20622/*"from"*/;
  v33->m_Items[0] = (Il2CppObject *)StringLiteral_20622/*"from"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v33->m_Items, v36, v27, v28, v29, v30, v31, v32);
  beforePointValue = this->fields.beforePointValue;
  v34 = j_il2cpp_value_box_0(qword_5984348, &beforePointValue);
  v43 = (Il2CppObject *)v34;
  if ( v34 )
  {
    v34 = sub_2213BB4(v34, v33->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_53;
  }
  if ( (v33->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_52;
  v33->m_Items[1] = v43;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v33->m_Items[1], (int32_t)v43, v37, v38, v39, v40, v41, v42);
  v34 = StringLiteral_25406/*"to"*/;
  if ( StringLiteral_25406/*"to"*/ )
  {
    v34 = sub_2213BB4(StringLiteral_25406/*"to"*/, v33->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_53;
  }
  if ( LODWORD(v33->max_length) <= 2 )
    goto LABEL_52;
  v50 = StringLiteral_25406/*"to"*/;
  v33->m_Items[2] = (Il2CppObject *)StringLiteral_25406/*"to"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v33->m_Items[2], v50, v44, v45, v46, v47, v48, v49);
  v133 = currentPointValue;
  v34 = j_il2cpp_value_box_0(qword_5984348, &v133);
  v57 = (Il2CppObject *)v34;
  if ( v34 )
  {
    v34 = sub_2213BB4(v34, v33->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_53;
  }
  if ( (v33->max_length & 0xFFFFFFFC) == 0 )
    goto LABEL_52;
  v33->m_Items[3] = v57;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v33->m_Items[3], (int32_t)v57, v51, v52, v53, v54, v55, v56);
  v34 = StringLiteral_23573/*"onupdate"*/;
  if ( StringLiteral_23573/*"onupdate"*/ )
  {
    v34 = sub_2213BB4(StringLiteral_23573/*"onupdate"*/, v33->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_53;
  }
  if ( LODWORD(v33->max_length) <= 4 )
    goto LABEL_52;
  v64 = StringLiteral_23573/*"onupdate"*/;
  v33->m_Items[4] = (Il2CppObject *)StringLiteral_23573/*"onupdate"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v33->m_Items[4], v64, v58, v59, v60, v61, v62, v63);
  v34 = StringLiteral_15796/*"UpdateGaugeValue"*/;
  if ( StringLiteral_15796/*"UpdateGaugeValue"*/ )
  {
    v34 = sub_2213BB4(StringLiteral_15796/*"UpdateGaugeValue"*/, v33->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_53;
  }
  if ( LODWORD(v33->max_length) <= 5 )
    goto LABEL_52;
  v71 = StringLiteral_15796/*"UpdateGaugeValue"*/;
  v33->m_Items[5] = (Il2CppObject *)StringLiteral_15796/*"UpdateGaugeValue"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v33->m_Items[5], v71, v65, v66, v67, v68, v69, v70);
  v34 = StringLiteral_23565/*"oncomplete"*/;
  if ( StringLiteral_23565/*"oncomplete"*/ )
  {
    v34 = sub_2213BB4(StringLiteral_23565/*"oncomplete"*/, v33->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_53;
  }
  if ( LODWORD(v33->max_length) <= 6 )
    goto LABEL_52;
  v78 = StringLiteral_23565/*"oncomplete"*/;
  v33->m_Items[6] = (Il2CppObject *)StringLiteral_23565/*"oncomplete"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v33->m_Items[6], v78, v72, v73, v74, v75, v76, v77);
  v34 = StringLiteral_10282/*"OnCompleteGaugeValue"*/;
  if ( StringLiteral_10282/*"OnCompleteGaugeValue"*/ )
  {
    v34 = sub_2213BB4(StringLiteral_10282/*"OnCompleteGaugeValue"*/, v33->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_53;
  }
  if ( (v33->max_length & 0xFFFFFFF8) == 0 )
    goto LABEL_52;
  v85 = StringLiteral_10282/*"OnCompleteGaugeValue"*/;
  v33->m_Items[7] = (Il2CppObject *)StringLiteral_10282/*"OnCompleteGaugeValue"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v33->m_Items[7], v85, v79, v80, v81, v82, v83, v84);
  v34 = StringLiteral_23566/*"oncompleteparams"*/;
  if ( StringLiteral_23566/*"oncompleteparams"*/ )
  {
    v34 = sub_2213BB4(StringLiteral_23566/*"oncompleteparams"*/, v33->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_53;
  }
  if ( LODWORD(v33->max_length) <= 8 )
    goto LABEL_52;
  v92 = StringLiteral_23566/*"oncompleteparams"*/;
  v33->m_Items[8] = (Il2CppObject *)StringLiteral_23566/*"oncompleteparams"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v33->m_Items[8], v92, v86, v87, v88, v89, v90, v91);
  v132 = currentPointValue;
  v34 = j_il2cpp_value_box_0(qword_5984348, &v132);
  v99 = (Il2CppObject *)v34;
  if ( v34 )
  {
    v34 = sub_2213BB4(v34, v33->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_53;
  }
  if ( LODWORD(v33->max_length) <= 9 )
    goto LABEL_52;
  v33->m_Items[9] = v99;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v33->m_Items[9], (int32_t)v99, v93, v94, v95, v96, v97, v98);
  v34 = StringLiteral_25366/*"time"*/;
  if ( StringLiteral_25366/*"time"*/ )
  {
    v34 = sub_2213BB4(StringLiteral_25366/*"time"*/, v33->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_53;
  }
  if ( LODWORD(v33->max_length) <= 0xA )
    goto LABEL_52;
  v106 = StringLiteral_25366/*"time"*/;
  v33->m_Items[10] = (Il2CppObject *)StringLiteral_25366/*"time"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v33->m_Items[10], v106, v100, v101, v102, v103, v104, v105);
  v131 = v17;
  v34 = j_il2cpp_value_box_0(qword_5984378, &v131);
  v113 = (Il2CppObject *)v34;
  if ( v34 )
  {
    v34 = sub_2213BB4(v34, v33->obj.klass->_1.element_class);
    if ( !v34 )
    {
LABEL_53:
      v130 = sub_2213D00(v34, v35);
      sub_2213BA0(v130, 0);
    }
  }
  if ( LODWORD(v33->max_length) <= 0xB )
LABEL_52:
    sub_2213CE4(v34);
  v33->m_Items[11] = v113;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v33->m_Items[11], (int32_t)v113, v107, v108, v109, v110, v111, v112);
  if ( !*(&iTween_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v114);
  v115 = iTween__Hash(v33, 0);
  iTween__ValueTo(gameObject, v115, 0);
  setting = this->fields.setting;
  if ( !setting )
    goto LABEL_54;
  effect = setting->fields.effect;
  if ( !effect )
    goto LABEL_54;
  effectSeName = effect->fields.effectSeName;
  size = v9->fields._size;
  if ( !*(&BattlePointGaugeComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattlePointGaugeComponent_TypeInfo, v11);
  v121 = BattlePointGaugeComponent__PlaySeInEffectTiming(effectSeName, size, v13, v116);
  v122 = UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, v121, 0);
  this->fields.pointEffectSeCoroutine = v122;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.pointEffectSeCoroutine,
    (int32_t)v122,
    v123,
    v124,
    v125,
    v126,
    v127,
    v128);
  return 1;
}


void BattlePointGaugeComponent__UpdateBattlePoint(
        BattlePointGaugeComponent_o *this,
        int32_t value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  BattlePointGaugeComponent__UpdateBattlePoint_54709960(this, value, this->fields.currentMaxValueCache, v3);
}


void BattlePointGaugeComponent__UpdateBattlePointImmediately(
        BattlePointGaugeComponent_o *this,
        int32_t currentPointValue,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  BattlePointGaugeComponent__UpdateBattlePointImmediately_54708680(
    this,
    currentPointValue,
    this->fields.currentMaxValueCache,
    v3);
}


void BattlePointGaugeComponent__UpdateBattlePointImmediately_54708680(
        BattlePointGaugeComponent_o *this,
        int32_t currentPointValue,
        int32_t currentMaxValue,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  int32_t v8; // w2
  __int64 PhaseEntity; // x0
  BattlePointPhaseEntity_o *v10; // x1
  int32_t currentMaxValueCache; // w9
  BattlePointPhaseEntity_o *v12; // x8
  UISprite_o *phase; // x21
  const MethodInfo *v14; // x2
  int32_t firstPhaseInTween; // w8
  int32_t v16; // w1
  UnityEngine_Object_o *step; // x21
  const MethodInfo *v18; // x2
  UISprite_o *v19; // x21
  BattlePointGaugeComponent_c *klass; // x8
  __int64 v21; // x3
  __int64 v22; // x1
  UnityEngine_Object_o *gaugeFrontProgressBar; // x21
  const MethodInfo *v24; // x3
  int v25; // w9
  int v26; // w11
  float v27; // s0
  int v28; // w20
  BattlePointPhaseEntity_o *v29; // [xsp+8h] [xbp-38h] BYREF
  BattlePointPhaseEntity_o *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_5974143 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974143 = 1;
  }
  v8 = currentMaxValue & ~(currentMaxValue >> 31);
  entity = 0;
  v29 = 0;
  this->fields.currentMaxValueCache = v8;
  PhaseEntity = BattlePointGaugeComponent__TryGetPhaseEntity(this, currentPointValue, v8, &entity, v4);
  if ( (PhaseEntity & 1) != 0 )
  {
    currentMaxValueCache = this->fields.currentMaxValueCache;
    v12 = entity;
    this->fields.beforePointValue = currentPointValue;
    this->fields.beforeMaxValue = currentMaxValueCache;
    if ( !v12 )
      goto LABEL_39;
    phase = this->fields.phase;
    PhaseEntity = ((__int64 (__fastcall *)(BattlePointGaugeComponent_o *, _QWORD, const MethodInfo *))this->klass->vtable._13_GetPhaseSpriteName.methodPtr)(
                    this,
                    *(unsigned int *)((char *)&dword_14 + (_QWORD)v12),
                    this->klass->vtable._13_GetPhaseSpriteName.method);
    if ( !phase )
      goto LABEL_39;
    UISprite__set_spriteName(phase, (System_String_o *)PhaseEntity, 0);
    PhaseEntity = ((__int64 (__fastcall *)(BattlePointGaugeComponent_o *, const MethodInfo *))this->klass->vtable._4_get_PlayFinalPhaseAnimationAtPointEffectStart.methodPtr)(
                    this,
                    this->klass->vtable._4_get_PlayFinalPhaseAnimationAtPointEffectStart.method);
    if ( (PhaseEntity & 1) == 0 || !this->fields.isStepAnimationPlayedForCurrentPointUp )
    {
      firstPhaseInTween = this->fields.firstPhaseInTween;
      if ( firstPhaseInTween != -1 )
      {
        if ( !entity )
          goto LABEL_39;
        v16 = *(int *)((char *)&dword_14 + (_QWORD)entity);
        if ( firstPhaseInTween != v16 && this->fields.lastUpPhaseInTween != v16 )
          BattlePointGaugeComponent__PlayPhaseAnimation(this, v16, v14);
      }
    }
    v10 = entity;
    *(_QWORD *)&this->fields.firstPhaseInTween = -1;
    if ( !v10 )
LABEL_39:
      sub_2213CDC(PhaseEntity, v10);
    if ( this->fields.lastStepUpEffectIdInTween != *(_DWORD *)((char *)&qword_28 + (_QWORD)v10) )
    {
      step = (UnityEngine_Object_o *)this->fields.step;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
      PhaseEntity = UnityEngine_Object__op_Inequality(step, 0, 0);
      v10 = entity;
      if ( (PhaseEntity & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_39;
        PhaseEntity = (__int64)this->fields.setting;
        if ( !PhaseEntity )
          goto LABEL_39;
        v19 = this->fields.step;
        PhaseEntity = (__int64)BattlePointGaugeSetting__GetStepSpriteName(
                                 (BattlePointGaugeSetting_o *)PhaseEntity,
                                 *(_DWORD *)((char *)&qword_28 + (_QWORD)entity),
                                 v18);
        if ( !v19 )
          goto LABEL_39;
        UISprite__set_spriteName(v19, (System_String_o *)PhaseEntity, 0);
        v10 = entity;
      }
    }
    klass = this->klass;
    v21 = (unsigned int)this->fields.currentMaxValueCache;
    this->fields.lastStepUpEffectIdInTween = -1;
    ((void (__fastcall *)(BattlePointGaugeComponent_o *, BattlePointPhaseEntity_o *, _QWORD, __int64, const MethodInfo *))klass->vtable._8_UpdateProgressGauge.methodPtr)(
      this,
      v10,
      (unsigned int)currentPointValue,
      v21,
      klass->vtable._8_UpdateProgressGauge.method);
    gaugeFrontProgressBar = (UnityEngine_Object_o *)this->fields.gaugeFrontProgressBar;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
    PhaseEntity = UnityEngine_Object__op_Equality(gaugeFrontProgressBar, 0, 0);
    if ( (PhaseEntity & 1) == 0 )
    {
      if ( entity )
      {
        PhaseEntity = (__int64)this->fields.battlePointPhaseMaster;
        if ( PhaseEntity )
        {
          PhaseEntity = BattlePointPhaseMaster__TryGetEntity(
                          (BattlePointPhaseMaster_o *)PhaseEntity,
                          &v29,
                          this->fields.battlePointId,
                          *(int *)((char *)&dword_14 + (_QWORD)entity) + 1,
                          0);
          if ( (PhaseEntity & 1) != 0 )
          {
            PhaseEntity = BattlePointGaugeComponent__GetPhaseContextValue(
                            this,
                            currentPointValue,
                            this->fields.currentMaxValueCache,
                            v24);
            if ( entity && v29 && this->fields.gaugeFrontProgressBar )
            {
              v25 = *(_DWORD *)((char *)off_18 + (_QWORD)entity);
              v26 = PhaseEntity - v25;
              PhaseEntity = (__int64)this->fields.gaugeFrontProgressBar;
              v27 = (float)v26 / (float)(v29->fields.value - v25);
LABEL_37:
              UIProgressBar__set_value((UIProgressBar_o *)PhaseEntity, v27, 0);
              return;
            }
          }
          else if ( entity )
          {
            PhaseEntity = (__int64)this->fields.battlePointPhaseMaster;
            if ( PhaseEntity )
            {
              v28 = *(int *)((char *)&dword_14 + (_QWORD)entity);
              if ( v28 != BattlePointPhaseMaster__GetMaxPhase(
                            (BattlePointPhaseMaster_o *)PhaseEntity,
                            this->fields.battlePointId,
                            0) )
                return;
              PhaseEntity = (__int64)this->fields.gaugeFrontProgressBar;
              if ( PhaseEntity )
              {
                v27 = 1.0;
                goto LABEL_37;
              }
            }
          }
        }
      }
      goto LABEL_39;
    }
  }
}


void BattlePointGaugeComponent__UpdateBattlePoint_54709960(
        BattlePointGaugeComponent_o *this,
        int32_t value,
        int32_t currentMaxValue,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  int32_t v6; // w8
  int32_t beforePointValue; // w1
  int32_t beforeMaxValue; // w2
  const MethodInfo *v10; // x3
  int32_t PhaseContextValue; // w21
  const MethodInfo *v12; // x3
  BattlePointPhaseMaster_o *battlePointPhaseMaster; // x0
  __int64 v14; // x1
  int32_t currentMaxValueCache; // w2
  struct BattlePointPhaseEntity_o *beforeEntity; // x8
  const MethodInfo *v17; // x2

  v6 = currentMaxValue & ~(currentMaxValue >> 31);
  beforePointValue = this->fields.beforePointValue;
  beforeMaxValue = this->fields.beforeMaxValue;
  this->fields.currentMaxValueCache = v6;
  if ( !BattlePointGaugeComponent__TryGetPhaseEntity(
          this,
          beforePointValue,
          beforeMaxValue,
          &this->fields.beforeEntity,
          v4) )
  {
    currentMaxValueCache = this->fields.currentMaxValueCache;
    goto LABEL_8;
  }
  PhaseContextValue = BattlePointGaugeComponent__GetPhaseContextValue(
                        this,
                        this->fields.beforePointValue,
                        this->fields.beforeMaxValue,
                        v10);
  battlePointPhaseMaster = (BattlePointPhaseMaster_o *)BattlePointGaugeComponent__GetPhaseContextValue(
                                                         this,
                                                         value,
                                                         this->fields.currentMaxValueCache,
                                                         v12);
  currentMaxValueCache = this->fields.currentMaxValueCache;
  if ( (int)battlePointPhaseMaster <= PhaseContextValue )
  {
LABEL_8:
    BattlePointGaugeComponent__StopTweenAndApplyBattlePointImmediately(this, value, currentMaxValueCache, v10);
    return;
  }
  beforeEntity = this->fields.beforeEntity;
  this->fields.beforeMaxValue = currentMaxValueCache;
  if ( !beforeEntity || (battlePointPhaseMaster = this->fields.battlePointPhaseMaster) == 0 )
    sub_2213CDC(battlePointPhaseMaster, v14);
  if ( BattlePointPhaseMaster__TryGetEntity(
         battlePointPhaseMaster,
         &this->fields.beforeNextEntity,
         this->fields.battlePointId,
         beforeEntity->fields.phase + 1,
         0) )
  {
    BattlePointGaugeComponent__ShowAddedPointEffect(this, value, v17);
  }
}


void BattlePointGaugeComponent__UpdateGaugeValue(
        BattlePointGaugeComponent_o *this,
        int32_t value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 PhaseContextValue; // x0
  BattlePointPhaseEntity_o *v7; // x1
  struct BattlePointPhaseEntity_o *beforeEntity; // x8
  BattlePointPhaseEntity_o **p_beforeEntity; // x22
  struct BattlePointPhaseEntity_o *beforeNextEntity; // x9
  struct BattlePointPhaseEntity_o **p_beforeNextEntity; // x21
  int v12; // w23
  int32_t v13; // w25
  int32_t v14; // w26
  UnityEngine_Object_o *gaugeFrontProgressBar; // x24
  float v16; // s0
  struct BattlePointPhaseEntity_o *v17; // x23
  MethodInfo *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  struct BattlePointPhaseEntity_o *v24; // x8
  UISprite_o *phase; // x23
  const MethodInfo *v26; // x2
  __int64 beforeMaxValue; // x3
  const MethodInfo *v28; // x4
  Il2CppMethodPointer methodPtr; // x10
  struct BattlePointPhaseEntity_o *v30; // x8
  const MethodInfo *v31; // x3
  struct BattlePointPhaseEntity_o *v32; // x8
  int32_t v33; // w20

  if ( (byte_5974145 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974145 = 1;
  }
  PhaseContextValue = BattlePointGaugeComponent__GetPhaseContextValue(this, value, this->fields.beforeMaxValue, v3);
  p_beforeEntity = &this->fields.beforeEntity;
  beforeEntity = this->fields.beforeEntity;
  if ( !beforeEntity )
    goto LABEL_34;
  p_beforeNextEntity = &this->fields.beforeNextEntity;
  beforeNextEntity = this->fields.beforeNextEntity;
  if ( !beforeNextEntity )
    goto LABEL_34;
  v12 = PhaseContextValue;
  v13 = beforeEntity->fields.value;
  v14 = beforeNextEntity->fields.value;
  gaugeFrontProgressBar = (UnityEngine_Object_o *)this->fields.gaugeFrontProgressBar;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( !UnityEngine_Object__op_Equality(gaugeFrontProgressBar, 0, 0) )
  {
    v16 = (float)(v12 - v13) / (float)(v14 - v13);
    if ( v16 > 1.0 )
    {
      v17 = this->fields.beforeNextEntity;
      if ( (((__int64 (__fastcall *)(BattlePointGaugeComponent_o *, const MethodInfo *))this->klass->vtable._4_get_PlayFinalPhaseAnimationAtPointEffectStart.methodPtr)(
              this,
              this->klass->vtable._4_get_PlayFinalPhaseAnimationAtPointEffectStart.method)
          & 1) == 0 )
      {
        PhaseContextValue = (__int64)this->fields.battlePointPhaseMaster;
        if ( !PhaseContextValue )
          goto LABEL_34;
        PhaseContextValue = BattlePointPhaseMaster__IsEffectIdChanged_48808148(
                              (BattlePointPhaseMaster_o *)PhaseContextValue,
                              *p_beforeEntity,
                              v17,
                              0);
        if ( (PhaseContextValue & 1) != 0 )
        {
          if ( !v17 )
            goto LABEL_34;
          BattlePointGaugeComponent__ShowStepUpEffect(this, v17->fields.effectId, v18);
        }
      }
      this->fields.beforeEntity = v17;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.beforeEntity,
        (int32_t)v17,
        (System_String_o *)v18,
        v19,
        v20,
        v21,
        v22,
        v23);
      v24 = this->fields.beforeEntity;
      if ( v24 )
      {
        phase = this->fields.phase;
        PhaseContextValue = ((__int64 (__fastcall *)(BattlePointGaugeComponent_o *, _QWORD, const MethodInfo *))this->klass->vtable._13_GetPhaseSpriteName.methodPtr)(
                              this,
                              (unsigned int)v24->fields.phase,
                              this->klass->vtable._13_GetPhaseSpriteName.method);
        if ( phase )
        {
          UISprite__set_spriteName(phase, (System_String_o *)PhaseContextValue, 0);
          PhaseContextValue = ((__int64 (__fastcall *)(BattlePointGaugeComponent_o *, const MethodInfo *))this->klass->vtable._4_get_PlayFinalPhaseAnimationAtPointEffectStart.methodPtr)(
                                this,
                                this->klass->vtable._4_get_PlayFinalPhaseAnimationAtPointEffectStart.method);
          if ( (PhaseContextValue & 1) == 0 )
          {
            if ( !*p_beforeEntity )
              goto LABEL_34;
            BattlePointGaugeComponent__PlayPhaseAnimation(this, (*p_beforeEntity)->fields.phase, v26);
          }
          v7 = *p_beforeEntity;
          if ( *p_beforeEntity )
          {
            beforeMaxValue = (unsigned int)this->fields.beforeMaxValue;
            methodPtr = this->klass->vtable._8_UpdateProgressGauge.methodPtr;
            v28 = this->klass->vtable._8_UpdateProgressGauge.method;
            this->fields.lastUpPhaseInTween = v7->fields.phase;
            PhaseContextValue = ((__int64 (__fastcall *)(BattlePointGaugeComponent_o *, BattlePointPhaseEntity_o *, _QWORD, __int64, const MethodInfo *))methodPtr)(
                                  this,
                                  v7,
                                  (unsigned int)value,
                                  beforeMaxValue,
                                  v28);
            v30 = this->fields.beforeEntity;
            if ( v30 )
            {
              PhaseContextValue = (__int64)this->fields.battlePointPhaseMaster;
              if ( PhaseContextValue )
              {
                PhaseContextValue = BattlePointPhaseMaster__TryGetEntity(
                                      (BattlePointPhaseMaster_o *)PhaseContextValue,
                                      &this->fields.beforeNextEntity,
                                      this->fields.battlePointId,
                                      v30->fields.phase + 1,
                                      0);
                if ( (PhaseContextValue & 1) != 0 )
                {
                  PhaseContextValue = BattlePointGaugeComponent__GetPhaseContextValue(
                                        this,
                                        value,
                                        this->fields.beforeMaxValue,
                                        v31);
                  v32 = this->fields.beforeEntity;
                  if ( !v32 || !*p_beforeNextEntity )
                    goto LABEL_34;
                  v16 = (float)(PhaseContextValue - v32->fields.value)
                      / (float)((*p_beforeNextEntity)->fields.value - v32->fields.value);
                  goto LABEL_27;
                }
                if ( *p_beforeEntity )
                {
                  PhaseContextValue = (__int64)this->fields.battlePointPhaseMaster;
                  if ( PhaseContextValue )
                  {
                    v33 = (*p_beforeEntity)->fields.phase;
                    if ( v33 != BattlePointPhaseMaster__GetMaxPhase(
                                  (BattlePointPhaseMaster_o *)PhaseContextValue,
                                  this->fields.battlePointId,
                                  0) )
                      return;
                    PhaseContextValue = (__int64)this->fields.gaugeFrontProgressBar;
                    if ( PhaseContextValue )
                    {
                      v16 = 1.0;
                      goto LABEL_28;
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_34:
      sub_2213CDC(PhaseContextValue, v7);
    }
LABEL_27:
    PhaseContextValue = (__int64)this->fields.gaugeFrontProgressBar;
    if ( PhaseContextValue )
    {
LABEL_28:
      UIProgressBar__set_value((UIProgressBar_o *)PhaseContextValue, v16, 0);
      return;
    }
    goto LABEL_34;
  }
}


void BattlePointGaugeComponent__UpdateProgressGauge(
        BattlePointGaugeComponent_o *this,
        BattlePointPhaseEntity_o *entity,
        const MethodInfo *method)
{
  ;
}


void BattlePointGaugeComponent__UpdateProgressGauge_54716188(
        BattlePointGaugeComponent_o *this,
        BattlePointPhaseEntity_o *entity,
        int32_t currentPointValue,
        int32_t currentMaxValue,
        const MethodInfo *method)
{
  ((void (__fastcall *)(BattlePointGaugeComponent_o *, BattlePointPhaseEntity_o *, const MethodInfo *))this->klass->vtable._7_UpdateProgressGauge.methodPtr)(
    this,
    entity,
    this->klass->vtable._7_UpdateProgressGauge.method);
}


void BattlePointGaugeComponent__ValidateSerializedField(BattlePointGaugeComponent_o *this, const MethodInfo *method)
{
  BattlePointGaugeSetting_o *setting; // x0

  setting = this->fields.setting;
  if ( !setting )
    sub_2213CDC(0, method);
  BattlePointGaugeSetting__ValidateSerializedField(setting, method);
}


int32_t BattlePointGaugeComponent__get_BattlePointId(BattlePointGaugeComponent_o *this, const MethodInfo *method)
{
  return this->fields.battlePointId;
}


int32_t BattlePointGaugeComponent__get_CurrentMaxValueCache(
        BattlePointGaugeComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.currentMaxValueCache;
}


bool BattlePointGaugeComponent__get_PlayFinalPhaseAnimationAtPointEffectStart(
        BattlePointGaugeComponent_o *this,
        const MethodInfo *method)
{
  return 0;
}


void BattlePointGaugeComponent__PlayPointEffectSequence_d__79___ctor(
        BattlePointGaugeComponent__PlayPointEffectSequence_d__79_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattlePointGaugeComponent__PlayPointEffectSequence_d__79__MoveNext(
        BattlePointGaugeComponent__PlayPointEffectSequence_d__79_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  BattlePointGaugeComponent_o *_4__this; // x20
  __int64 v5; // x1
  int32_t i_5__2; // w8
  System_Collections_Generic_List_object__o *effectPrefabs; // x0
  const MethodInfo *v8; // x2
  struct System_Collections_Generic_List_GameObject__o *v9; // x8
  int32_t size; // w9
  float interval; // s8
  bool result; // w0
  UnityEngine_WaitForSeconds_o *v13; // x20
  Il2CppObject **p__2__current; // x19
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7

  if ( (byte_5974154 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_2213A60(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_5974154 = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    i_5__2 = this->fields._i_5__2;
    this->fields.__1__state = -1;
    goto LABEL_11;
  }
  if ( _1__state )
    return 0;
  v5 = 0;
  this->fields._i_5__2 = 0;
  this->fields.__1__state = -1;
  while ( 1 )
  {
    effectPrefabs = (System_Collections_Generic_List_object__o *)this->fields.effectPrefabs;
    if ( !effectPrefabs )
      goto LABEL_16;
    if ( (int)v5 >= effectPrefabs->fields._size )
      return 0;
    effectPrefabs = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                   effectPrefabs,
                                                                   v5,
                                                                   (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !_4__this
      || (BattlePointGaugeComponent__InstantiatePointEffect(_4__this, (UnityEngine_GameObject_o *)effectPrefabs, v8),
          (v9 = this->fields.effectPrefabs) == 0) )
    {
LABEL_16:
      sub_2213CDC(effectPrefabs, v5);
    }
    size = v9->fields._size;
    i_5__2 = this->fields._i_5__2;
    if ( i_5__2 < size - 1 )
    {
      interval = this->fields.interval;
      if ( interval > 0.0 )
        break;
    }
LABEL_11:
    v5 = (unsigned int)(i_5__2 + 1);
    this->fields._i_5__2 = v5;
  }
  v13 = (UnityEngine_WaitForSeconds_o *)sub_2213CCC(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v13, interval, 0);
  this->fields.__2__current = (Il2CppObject *)v13;
  p__2__current = &this->fields.__2__current;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p__2__current, (int32_t)v13, v15, v16, v17, v18, v19, v20);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


Il2CppObject *BattlePointGaugeComponent__PlayPointEffectSequence_d__79__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattlePointGaugeComponent__PlayPointEffectSequence_d__79_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattlePointGaugeComponent__PlayPointEffectSequence_d__79__System_Collections_IEnumerator_Reset(
        BattlePointGaugeComponent__PlayPointEffectSequence_d__79_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_BattlePointGaugeComponent__PlayPointEffectSequence_d__79_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *BattlePointGaugeComponent__PlayPointEffectSequence_d__79__System_Collections_IEnumerator_get_Current(
        BattlePointGaugeComponent__PlayPointEffectSequence_d__79_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattlePointGaugeComponent__PlayPointEffectSequence_d__79__System_IDisposable_Dispose(
        BattlePointGaugeComponent__PlayPointEffectSequence_d__79_o *this,
        const MethodInfo *method)
{
  ;
}


void BattlePointGaugeComponent__PlaySeInEffectTiming_d__56___ctor(
        BattlePointGaugeComponent__PlaySeInEffectTiming_d__56_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattlePointGaugeComponent__PlaySeInEffectTiming_d__56__MoveNext(
        BattlePointGaugeComponent__PlaySeInEffectTiming_d__56_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  System_String_o *seName; // x0
  int effectNum; // w8
  float elapsed_5__3; // s8
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  float v13; // s0
  float waitSecond; // s1
  int count_5__2; // w8
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  _QWORD *v20; // x0
  System_Reflection_MethodBase_o *v21; // x0

  if ( (byte_5974155 & 1) == 0 )
  {
    sub_2213A60(&Method_BattlePointGaugeComponent__PlaySeInEffectTiming_d__56_MoveNext__);
    byte_5974155 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    elapsed_5__3 = this->fields._elapsed_5__3;
    this->fields.__1__state = -1;
    v13 = elapsed_5__3 + UnityEngine_Time__get_deltaTime(0);
    waitSecond = this->fields.waitSecond;
    this->fields._elapsed_5__3 = v13;
    if ( v13 < waitSecond )
    {
LABEL_16:
      this->fields.__2__current = 0;
      p__2__current = &this->fields.__2__current;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)p__2__current, 0, v7, v8, v9, v10, v11, v12);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
    count_5__2 = this->fields._count_5__2;
    do
    {
      v13 = v13 - waitSecond;
      --count_5__2;
    }
    while ( waitSecond <= v13 );
    this->fields._elapsed_5__3 = v13;
    this->fields._count_5__2 = count_5__2;
    if ( count_5__2 > 0 )
    {
LABEL_13:
      v16 = Method_BattlePointGaugeComponent__PlaySeInEffectTiming_d__56_MoveNext__;
      if ( (*((_BYTE *)Method_BattlePointGaugeComponent__PlaySeInEffectTiming_d__56_MoveNext__ + 83) & 2) != 0 )
        v16 = (_QWORD *)sub_2213A78(Method_BattlePointGaugeComponent__PlaySeInEffectTiming_d__56_MoveNext__);
      v17 = (System_Reflection_MethodBase_o *)sub_2213A44(v16, v16[4]);
      OverwriteAssetSoundName__PlaySeContinue(v17, this->fields.seName, 0, 0);
      goto LABEL_16;
    }
  }
  else if ( !_1__state )
  {
    seName = this->fields.seName;
    this->fields.__1__state = -1;
    if ( !System_String__IsNullOrEmpty(seName, 0) )
    {
      effectNum = this->fields.effectNum;
      if ( effectNum >= 1 )
      {
        if ( this->fields.waitSecond > 0.0 )
        {
          this->fields._count_5__2 = effectNum;
          this->fields._elapsed_5__3 = 0.0;
          goto LABEL_13;
        }
        v20 = Method_BattlePointGaugeComponent__PlaySeInEffectTiming_d__56_MoveNext__;
        if ( (*((_BYTE *)Method_BattlePointGaugeComponent__PlaySeInEffectTiming_d__56_MoveNext__ + 83) & 2) != 0 )
          v20 = (_QWORD *)sub_2213A78(Method_BattlePointGaugeComponent__PlaySeInEffectTiming_d__56_MoveNext__);
        v21 = (System_Reflection_MethodBase_o *)sub_2213A44(v20, v20[4]);
        OverwriteAssetSoundName__PlaySeContinue(v21, this->fields.seName, 0, 0);
      }
    }
  }
  return 0;
}


Il2CppObject *BattlePointGaugeComponent__PlaySeInEffectTiming_d__56__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattlePointGaugeComponent__PlaySeInEffectTiming_d__56_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattlePointGaugeComponent__PlaySeInEffectTiming_d__56__System_Collections_IEnumerator_Reset(
        BattlePointGaugeComponent__PlaySeInEffectTiming_d__56_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_BattlePointGaugeComponent__PlaySeInEffectTiming_d__56_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *BattlePointGaugeComponent__PlaySeInEffectTiming_d__56__System_Collections_IEnumerator_get_Current(
        BattlePointGaugeComponent__PlaySeInEffectTiming_d__56_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattlePointGaugeComponent__PlaySeInEffectTiming_d__56__System_IDisposable_Dispose(
        BattlePointGaugeComponent__PlaySeInEffectTiming_d__56_o *this,
        const MethodInfo *method)
{
  ;
}


void BattlePointGaugeComponent___c__DisplayClass57_0___ctor(
        BattlePointGaugeComponent___c__DisplayClass57_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattlePointGaugeComponent___c__DisplayClass57_0___ShowStepUpEffect_b__0(
        BattlePointGaugeComponent___c__DisplayClass57_0_o *this,
        System_String_o *eventName,
        const MethodInfo *method)
{
  BattlePointGaugeSetting_o *setting; // x0
  __int64 v6; // x1
  struct BattlePointGaugeComponent_o *_4__this; // x8
  UnityEngine_Object_o *step; // x20
  const MethodInfo *v9; // x2
  struct BattlePointGaugeComponent_o *v10; // x8
  UISprite_o *v11; // x20

  if ( (byte_5974153 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_13358/*"SetStepSprite"*/);
    byte_5974153 = 1;
  }
  setting = (BattlePointGaugeSetting_o *)System_String__op_Equality(
                                           eventName,
                                           (System_String_o *)StringLiteral_13358/*"SetStepSprite"*/,
                                           0);
  if ( ((unsigned __int8)setting & 1) != 0 )
  {
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      goto LABEL_13;
    step = (UnityEngine_Object_o *)_4__this->fields.step;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    setting = (BattlePointGaugeSetting_o *)UnityEngine_Object__op_Inequality(step, 0, 0);
    if ( ((unsigned __int8)setting & 1) != 0 )
    {
      v10 = this->fields.__4__this;
      if ( v10 )
      {
        setting = v10->fields.setting;
        if ( setting )
        {
          v11 = v10->fields.step;
          setting = (BattlePointGaugeSetting_o *)BattlePointGaugeSetting__GetStepSpriteName(
                                                   setting,
                                                   this->fields.effectId,
                                                   v9);
          if ( v11 )
          {
            UISprite__set_spriteName(v11, (System_String_o *)setting, 0);
            return;
          }
        }
      }
LABEL_13:
      sub_2213CDC(setting, v6);
    }
  }
}