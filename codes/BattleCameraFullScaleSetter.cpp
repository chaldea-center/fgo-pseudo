void BattleCameraFullScaleSetter___cctor(const MethodInfo *method)
{
  if ( (byte_59731A5 & 1) == 0 )
  {
    sub_2213A60(&BattleCameraFullScaleSetter_TypeInfo);
    byte_59731A5 = 1;
  }
  LODWORD(BattleCameraFullScaleSetter_TypeInfo->static_fields->DefaultFov) = (struct BattleCameraFullScaleSetter_StaticFields)1109393408;
}


void BattleCameraFullScaleSetter___ctor(BattleCameraFullScaleSetter_o *this, const MethodInfo *method)
{
  int v3; // w8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1

  v3 = (unsigned __int8)byte_5969AE5;
  this->fields.heightFit = 1;
  *(_QWORD *)&this->fields.baseWidth = 0x445B800045000000LL;
  this->fields.baseScale = 576.0;
  if ( !v3 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE5 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->oneVector.fields.z;
  *(_QWORD *)&this->fields.adjustPanelScale.fields.x = *(_QWORD *)&static_fields->oneVector.fields.x;
  this->fields.adjustPanelScale.fields.z = z;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattleCameraFullScaleSetter__AdjustPanelSize(
        BattleCameraFullScaleSetter_o *this,
        uint32_t movieWidth,
        uint32_t movieHeight,
        const MethodInfo *method)
{
  float v4; // s0
  float v5; // s1
  float v6; // s0
  float v7; // s1
  _BOOL4 flip; // w9

  v4 = (float)movieWidth;
  v5 = (float)movieHeight;
  if ( (float)((float)movieWidth / (float)movieHeight) >= 2.3333 )
  {
    v7 = (float)(v4 / 21.0) / (float)(v5 / 9.0);
    v6 = 1.0;
  }
  else
  {
    v6 = (float)(v5 / 9.0) / (float)(v4 / 21.0);
    v7 = 1.0;
  }
  flip = this->fields.flip;
  this->fields.adjustPanelScale.fields.x = v7;
  this->fields.adjustPanelScale.fields.y = v6;
  this->fields.adjustPanelScale.fields.z = 1.0;
  if ( flip )
  {
    this->fields.adjustPanelScale.fields.z = 1.0;
    this->fields.adjustPanelScale.fields.x = -v7;
    this->fields.adjustPanelScale.fields.y = v6;
  }
  BattleCameraFullScaleSetter__CalcScale(this, *(const MethodInfo **)&movieWidth);
}


void BattleCameraFullScaleSetter__CalcScale(BattleCameraFullScaleSetter_o *this, const MethodInfo *method)
{
  BattleCameraFullScaleSetter_o *v2; // x19
  struct BattlePerformance_o *perf; // x8
  UnityEngine_Object_o *actorcamera; // x20
  struct BattlePerformance_o *v5; // x8
  float fieldOfView; // s8
  BattleCameraFullScaleSetter_c *v7; // x20
  BattleCameraFullScaleSetter_o *v8; // x20
  float v9; // s2
  float32x2_t v10; // d1
  unsigned __int64 v11; // d0
  float DefaultFov; // s10
  __int64 v13; // x1
  float v14; // s8
  float z; // s9
  float v16; // s0
  UnityEngine_Vector3_o v17; // 0:kr00_12.12

  v2 = this;
  if ( (byte_59731A4 & 1) == 0 )
  {
    sub_2213A60(&BattleCameraFullScaleSetter_TypeInfo);
    this = (BattleCameraFullScaleSetter_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59731A4 = 1;
  }
  if ( v2->fields.parentCameraType )
  {
    perf = v2->fields.perf;
    if ( !perf )
      goto LABEL_26;
    actorcamera = (UnityEngine_Object_o *)perf->fields.actorcamera;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    this = (BattleCameraFullScaleSetter_o *)UnityEngine_Object__op_Implicit(actorcamera, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v5 = v2->fields.perf;
      if ( !v5 )
        goto LABEL_26;
      this = (BattleCameraFullScaleSetter_o *)v5->fields.actorcamera;
      if ( !this )
        goto LABEL_26;
      fieldOfView = UnityEngine_Camera__get_fieldOfView((UnityEngine_Camera_o *)this, 0);
      v7 = BattleCameraFullScaleSetter_TypeInfo;
    }
    else
    {
      v7 = BattleCameraFullScaleSetter_TypeInfo;
      if ( !*(&BattleCameraFullScaleSetter_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BattleCameraFullScaleSetter_TypeInfo, method);
        v7 = BattleCameraFullScaleSetter_TypeInfo;
      }
      fieldOfView = v7->static_fields->DefaultFov;
    }
    if ( !*(&v7->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v7, method);
      v7 = BattleCameraFullScaleSetter_TypeInfo;
    }
    DefaultFov = v7->static_fields->DefaultFov;
    if ( fieldOfView == DefaultFov )
    {
      this = (BattleCameraFullScaleSetter_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v2, 0);
      if ( this )
      {
        v8 = this;
        v9 = v2->fields.panelScale.fields.z * v2->fields.adjustPanelScale.fields.z;
        v11 = vmul_f32(
                *(float32x2_t *)&v2->fields.panelScale.fields.x,
                *(float32x2_t *)&v2->fields.adjustPanelScale.fields.x).n64_u64[0];
        goto LABEL_25;
      }
    }
    else
    {
      v14 = tanf((float)(fieldOfView * 0.5) * 0.017453);
      if ( !*(&v7->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v7, v13);
        DefaultFov = BattleCameraFullScaleSetter_TypeInfo->static_fields->DefaultFov;
      }
      this = (BattleCameraFullScaleSetter_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v2, 0);
      if ( this )
      {
        v8 = this;
        z = v2->fields.panelScale.fields.z;
        v16 = v14 / tanf((float)(DefaultFov * 0.5) * 0.017453);
        v9 = v2->fields.adjustPanelScale.fields.z * (float)(z * v16);
        v11 = vmul_f32(
                vmul_n_f32(*(float32x2_t *)&v2->fields.panelScale.fields.x, v16),
                *(float32x2_t *)&v2->fields.adjustPanelScale.fields.x).n64_u64[0];
        goto LABEL_25;
      }
    }
LABEL_26:
    sub_2213CDC(this, method);
  }
  this = (BattleCameraFullScaleSetter_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v2, 0);
  if ( !this )
    goto LABEL_26;
  v8 = this;
  v9 = v2->fields.adjustPanelScale.fields.z;
  v10.n64_f32[0] = v2->fields.baseScale * v2->fields.aspect;
  v10.n64_u32[1] = LODWORD(v2->fields.baseScale);
  v11 = vmul_f32(v10, *(float32x2_t *)&v2->fields.adjustPanelScale.fields.x).n64_u64[0];
LABEL_25:
  *(_QWORD *)&v17.fields.x = v11;
  v17.fields.z = v9;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)v8, v17, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattleCameraFullScaleSetter__Initialize(
        BattleCameraFullScaleSetter_o *this,
        BattlePerformance_o *performance,
        bool isUI,
        bool isFlip,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  float baseWidth; // s0
  float baseHeight; // s1
  struct UnityEngine_Camera_o **p_parentCamera; // x21
  UnityEngine_Transform_o *transform; // x0
  __int64 v16; // x1
  __int64 v17; // x1
  UnityEngine_Object_c *v18; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  int32_t v25; // w1
  struct BattlePerformance_o **p_perf; // x0
  Il2CppObject *Component_object; // x0
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  struct BattlePerformance_o *perf; // x8
  struct UnityEngine_Camera_o **p_uicamera; // x8
  struct UnityEngine_Camera_o *v36; // x1
  UnityEngine_Object_c *v37; // x0
  UnityEngine_Object_o *parentCamera; // x22
  __int64 v39; // x1
  Il2CppObject *Instance; // x22
  struct BattlePerformance_o *v41; // x8
  UnityEngine_Object_o *v42; // x22
  __int64 v43; // x1
  Il2CppObject *v44; // x22
  UnityEngine_Object_o *v45; // x21
  const MethodInfo *v46; // x1
  UnityEngine_Vector3_o localScale; // 0:kr00_12.12

  if ( (byte_59731A3 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BattlePerformance___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    sub_2213A60(&StringLiteral_11044/*"Performance"*/);
    byte_59731A3 = 1;
  }
  baseWidth = this->fields.baseWidth;
  baseHeight = this->fields.baseHeight;
  this->fields.parentCamera = 0;
  p_parentCamera = &this->fields.parentCamera;
  this->fields.aspect = baseWidth / baseHeight;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.parentCamera,
    0,
    (System_String_o *)isUI,
    (System_String_o *)isFlip,
    (int32_t)method,
    v5,
    v6,
    v7);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_37;
  localScale = UnityEngine_Transform__get_localScale(transform, 0);
  v18 = UnityEngine_Object_TypeInfo;
  this->fields.panelScale = localScale;
  if ( !*(&v18->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v18, v17);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)performance, 0, 0) )
  {
    v25 = (int)performance;
    this->fields.perf = performance;
    p_perf = &this->fields.perf;
  }
  else
  {
    transform = (UnityEngine_Transform_o *)UnityEngine_GameObject__Find((System_String_o *)StringLiteral_11044/*"Performance"*/, 0);
    if ( !transform )
      goto LABEL_37;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)transform,
                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BattlePerformance___);
    v25 = (int)Component_object;
    this->fields.perf = (struct BattlePerformance_o *)Component_object;
    p_perf = &this->fields.perf;
  }
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p_perf, v25, v19, v20, v21, v22, v23, v24);
  if ( isUI )
  {
    perf = this->fields.perf;
    this->fields.parentCameraType = 0;
    if ( perf )
    {
      p_uicamera = &perf->fields.uicamera;
LABEL_13:
      v36 = *p_uicamera;
      *p_parentCamera = *p_uicamera;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.parentCamera,
        (int32_t)v36,
        v28,
        v29,
        v30,
        v31,
        v32,
        v33);
      goto LABEL_32;
    }
    goto LABEL_37;
  }
  v37 = UnityEngine_Object_TypeInfo;
  parentCamera = (UnityEngine_Object_o *)this->fields.parentCamera;
  this->fields.parentCameraType = 1;
  if ( !*(&v37->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v37, v16);
  if ( !UnityEngine_Object__op_Equality(parentCamera, 0, 0) )
    goto LABEL_23;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v39);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    if ( this->fields.parentCameraType == 1 )
    {
      v41 = this->fields.perf;
      if ( v41 )
      {
        p_uicamera = &v41->fields.actorcamera;
        goto LABEL_13;
      }
LABEL_37:
      sub_2213CDC(transform, v16);
    }
  }
  else
  {
LABEL_23:
    v42 = (UnityEngine_Object_o *)*p_parentCamera;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
    if ( UnityEngine_Object__op_Equality(v42, 0, 0) )
    {
      v44 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v43);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v44, 0, 0) && this->fields.parentCameraType == 1 )
      {
        transform = (UnityEngine_Transform_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
        if ( transform )
        {
          p_uicamera = (struct UnityEngine_Camera_o **)&transform[1].monitor;
          goto LABEL_13;
        }
        goto LABEL_37;
      }
    }
  }
LABEL_32:
  v45 = (UnityEngine_Object_o *)*p_parentCamera;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
  if ( UnityEngine_Object__op_Equality(v45, 0, 0) )
  {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
  }
  else
  {
    this->fields.flip = isFlip;
    BattleCameraFullScaleSetter__CalcScale(this, v46);
  }
}


void BattleCameraFullScaleSetter__Update(BattleCameraFullScaleSetter_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    sub_2213CDC(0, v4);
  if ( UnityEngine_Transform__get_hasChanged(transform, 0) )
    BattleCameraFullScaleSetter__CalcScale(this, v5);
}