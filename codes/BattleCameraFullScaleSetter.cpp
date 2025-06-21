void __fastcall BattleCameraFullScaleSetter___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B1EC89 & 1) == 0 )
  {
    sub_1BCAFF8(&BattleCameraFullScaleSetter_TypeInfo, v1);
    byte_4B1EC89 = 1;
  }
  LODWORD(BattleCameraFullScaleSetter_TypeInfo->static_fields->DefaultFov) = (struct BattleCameraFullScaleSetter_StaticFields)1109393408;
}


void __fastcall BattleCameraFullScaleSetter___ctor(BattleCameraFullScaleSetter_o *this, const MethodInfo *method)
{
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1

  this->fields.heightFit = 1;
  this->fields.baseScale = 576.0;
  *(_QWORD *)&this->fields.baseWidth = 0x445B800045000000LL;
  if ( !byte_4B16196 )
  {
    sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, method);
    byte_4B16196 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->oneVector.fields.z;
  *(_QWORD *)&this->fields.adjustPanelScale.fields.x = *(_QWORD *)&static_fields->oneVector.fields.x;
  this->fields.adjustPanelScale.fields.z = z;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCameraFullScaleSetter__AdjustPanelSize(
        BattleCameraFullScaleSetter_o *this,
        uint32_t movieWidth,
        uint32_t movieHeight,
        const MethodInfo *method)
{
  float v4; // s0
  float v5; // s1
  float v6; // s0
  float v7; // s1

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
  this->fields.adjustPanelScale.fields.x = v7;
  this->fields.adjustPanelScale.fields.y = v6;
  this->fields.adjustPanelScale.fields.z = 1.0;
  BattleCameraFullScaleSetter__CalcScale(this, *(const MethodInfo **)&movieWidth);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCameraFullScaleSetter__CalcScale(BattleCameraFullScaleSetter_o *this, const MethodInfo *method)
{
  BattleCameraFullScaleSetter_o *v2; // x19
  __int64 v3; // x1
  struct BattlePerformance_o *perf; // x8
  UnityEngine_Object_o *actorcamera; // x20
  struct BattlePerformance_o *v6; // x8
  float fieldOfView; // s8
  BattleCameraFullScaleSetter_c *v8; // x20
  float z; // s2
  float32x2_t v10; // d1
  unsigned __int64 v11; // d0
  float DefaultFov; // s10
  float v13; // s8
  float v14; // s9
  int v15; // s1

  v2 = this;
  if ( (byte_4B1EC88 & 1) == 0 )
  {
    sub_1BCAFF8(&BattleCameraFullScaleSetter_TypeInfo, method);
    this = (BattleCameraFullScaleSetter_o *)sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v3);
    byte_4B1EC88 = 1;
  }
  if ( v2->fields.parentCameraType )
  {
    perf = v2->fields.perf;
    if ( !perf )
      goto LABEL_26;
    actorcamera = (UnityEngine_Object_o *)perf->fields.actorcamera;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattleCameraFullScaleSetter_o *)UnityEngine_Object__op_Implicit(actorcamera, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v6 = v2->fields.perf;
      if ( !v6 )
        goto LABEL_26;
      this = (BattleCameraFullScaleSetter_o *)v6->fields.actorcamera;
      if ( !this )
        goto LABEL_26;
      fieldOfView = UnityEngine_Camera__get_fieldOfView((UnityEngine_Camera_o *)this, 0LL);
      v8 = BattleCameraFullScaleSetter_TypeInfo;
    }
    else
    {
      v8 = BattleCameraFullScaleSetter_TypeInfo;
      if ( !BattleCameraFullScaleSetter_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleCameraFullScaleSetter_TypeInfo);
        v8 = BattleCameraFullScaleSetter_TypeInfo;
      }
      fieldOfView = v8->static_fields->DefaultFov;
    }
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = BattleCameraFullScaleSetter_TypeInfo;
    }
    DefaultFov = v8->static_fields->DefaultFov;
    if ( fieldOfView == DefaultFov )
    {
      this = (BattleCameraFullScaleSetter_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v2, 0LL);
      if ( this )
      {
        z = v2->fields.panelScale.fields.z * v2->fields.adjustPanelScale.fields.z;
        v11 = vmul_f32(
                *(float32x2_t *)&v2->fields.panelScale.fields.x,
                *(float32x2_t *)&v2->fields.adjustPanelScale.fields.x).n64_u64[0];
        goto LABEL_25;
      }
    }
    else
    {
      v13 = tanf((float)(fieldOfView * 0.5) * 0.017453);
      if ( !v8->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v8);
        DefaultFov = BattleCameraFullScaleSetter_TypeInfo->static_fields->DefaultFov;
      }
      v14 = tanf((float)(DefaultFov * 0.5) * 0.017453);
      this = (BattleCameraFullScaleSetter_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v2, 0LL);
      if ( this )
      {
        z = (float)((float)(v13 / v14) * v2->fields.panelScale.fields.z) * v2->fields.adjustPanelScale.fields.z;
        v11 = vmul_f32(
                vmul_n_f32(*(float32x2_t *)&v2->fields.panelScale.fields.x, v13 / v14),
                *(float32x2_t *)&v2->fields.adjustPanelScale.fields.x).n64_u64[0];
        goto LABEL_25;
      }
    }
LABEL_26:
    sub_1BCB254(this, method);
  }
  this = (BattleCameraFullScaleSetter_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v2, 0LL);
  if ( !this )
    goto LABEL_26;
  z = v2->fields.adjustPanelScale.fields.z;
  v10.n64_f32[0] = v2->fields.baseScale * v2->fields.aspect;
  v10.n64_u32[1] = LODWORD(v2->fields.baseScale);
  v11 = vmul_f32(v10, *(float32x2_t *)&v2->fields.adjustPanelScale.fields.x).n64_u64[0];
LABEL_25:
  v15 = HIDWORD(v11);
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, *(UnityEngine_Vector3_o *)&v11, 0LL);
}


void __fastcall BattleCameraFullScaleSetter__Initialize(
        BattleCameraFullScaleSetter_o *this,
        BattlePerformance_o *performance,
        bool isUI,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct UnityEngine_Camera_o **p_parentCamera; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v13; // x1
  char v14; // w2
  const MethodInfo *v15; // x3
  struct BattlePerformance_o **p_perf; // x0
  int32_t v17; // w1
  Il2CppObject *Component_object; // x0
  char v19; // w2
  const MethodInfo *v20; // x3
  struct BattlePerformance_o *perf; // x8
  struct UnityEngine_Camera_o *uicamera; // x1
  UnityEngine_Object_o *v23; // x21
  Il2CppObject *Instance; // x21
  struct BattlePerformance_o *v25; // x8
  UnityEngine_Object_o *v26; // x21
  Il2CppObject *v27; // x21
  UnityEngine_Object_o *v28; // x20
  const MethodInfo *v29; // x1

  if ( (byte_4B1EC87 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_BattlePerformance___, performance);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v7);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__, v8);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v9);
    sub_1BCAFF8(&StringLiteral_10520/*"Performance"*/, v10);
    byte_4B1EC87 = 1;
  }
  this->fields.aspect = this->fields.baseWidth / this->fields.baseHeight;
  this->fields.parentCamera = 0LL;
  p_parentCamera = &this->fields.parentCamera;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.parentCamera, 0, isUI, method);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_37;
  this->fields.panelScale = UnityEngine_Transform__get_localScale(transform, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)performance, 0LL, 0LL) )
  {
    this->fields.perf = performance;
    p_perf = &this->fields.perf;
    v17 = (int)performance;
  }
  else
  {
    transform = (UnityEngine_Transform_o *)UnityEngine_GameObject__Find((System_String_o *)StringLiteral_10520/*"Performance"*/, 0LL);
    if ( !transform )
      goto LABEL_37;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)transform,
                         (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_BattlePerformance___);
    v17 = (int)Component_object;
    this->fields.perf = (struct BattlePerformance_o *)Component_object;
    p_perf = &this->fields.perf;
  }
  sub_1BCAF9C((CGThumbnailListItem_o *)p_perf, v17, v14, v15);
  this->fields.parentCameraType = !isUI;
  if ( isUI )
  {
    perf = this->fields.perf;
    if ( perf )
    {
      uicamera = perf->fields.uicamera;
LABEL_13:
      *p_parentCamera = uicamera;
      sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.parentCamera, (int32_t)uicamera, v19, v20);
      goto LABEL_32;
    }
    goto LABEL_37;
  }
  v23 = (UnityEngine_Object_o *)*p_parentCamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v23, 0LL, 0LL) )
    goto LABEL_23;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    if ( this->fields.parentCameraType == 1 )
    {
      v25 = this->fields.perf;
      if ( v25 )
      {
        uicamera = v25->fields.actorcamera;
        goto LABEL_13;
      }
LABEL_37:
      sub_1BCB254(transform, v13);
    }
  }
  else
  {
LABEL_23:
    v26 = (UnityEngine_Object_o *)*p_parentCamera;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(v26, 0LL, 0LL) )
    {
      v27 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v27, 0LL, 0LL)
        && this->fields.parentCameraType == 1 )
      {
        transform = (UnityEngine_Transform_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
        if ( transform )
        {
          uicamera = (struct UnityEngine_Camera_o *)transform[1].monitor;
          goto LABEL_13;
        }
        goto LABEL_37;
      }
    }
  }
LABEL_32:
  v28 = (UnityEngine_Object_o *)*p_parentCamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v28, 0LL, 0LL) )
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
  else
    BattleCameraFullScaleSetter__CalcScale(this, v29);
}


void __fastcall BattleCameraFullScaleSetter__Update(BattleCameraFullScaleSetter_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_1BCB254(0LL, v4);
  if ( UnityEngine_Transform__get_hasChanged(transform, 0LL) )
    BattleCameraFullScaleSetter__CalcScale(this, v5);
}