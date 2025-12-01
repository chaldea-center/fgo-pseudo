void BattleCameraFullScaleSetter___cctor(const MethodInfo *method)
{
  if ( (byte_4CC9D95 & 1) == 0 )
  {
    sub_1C713B0(&BattleCameraFullScaleSetter_TypeInfo);
    byte_4CC9D95 = 1;
  }
  LODWORD(BattleCameraFullScaleSetter_TypeInfo->static_fields->DefaultFov) = (struct BattleCameraFullScaleSetter_StaticFields)1109393408;
}


void BattleCameraFullScaleSetter___ctor(BattleCameraFullScaleSetter_o *this, const MethodInfo *method)
{
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1

  this->fields.heightFit = 1;
  this->fields.baseScale = 576.0;
  *(_QWORD *)&this->fields.baseWidth = 0x445B800045000000LL;
  if ( !byte_4CC0D0E )
  {
    sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
    byte_4CC0D0E = 1;
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
  float v6; // s1
  float v7; // s0
  _BOOL4 flip; // w8

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
    this->fields.adjustPanelScale.fields.x = -v7;
  BattleCameraFullScaleSetter__CalcScale(this, *(const MethodInfo **)&movieWidth);
}


// local variable allocation has failed, the output may be wrong!
void BattleCameraFullScaleSetter__CalcScale(BattleCameraFullScaleSetter_o *this, const MethodInfo *method)
{
  BattleCameraFullScaleSetter_o *v2; // x19
  struct BattlePerformance_o *perf; // x8
  UnityEngine_Object_o *actorcamera; // x20
  struct BattlePerformance_o *v5; // x8
  float fieldOfView; // s8
  BattleCameraFullScaleSetter_c *v7; // x20
  float z; // s2
  float32x2_t v9; // d1
  unsigned __int64 v10; // d0 OVERLAPPED
  float DefaultFov; // s10
  float v12; // s8
  float v13; // s9
  int v14; // s1

  v2 = this;
  if ( (byte_4CC9D94 & 1) == 0 )
  {
    sub_1C713B0(&BattleCameraFullScaleSetter_TypeInfo);
    this = (BattleCameraFullScaleSetter_o *)sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC9D94 = 1;
  }
  if ( v2->fields.parentCameraType )
  {
    perf = v2->fields.perf;
    if ( !perf )
      goto LABEL_26;
    actorcamera = (UnityEngine_Object_o *)perf->fields.actorcamera;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      if ( !BattleCameraFullScaleSetter_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleCameraFullScaleSetter_TypeInfo);
        v7 = BattleCameraFullScaleSetter_TypeInfo;
      }
      fieldOfView = v7->static_fields->DefaultFov;
    }
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = BattleCameraFullScaleSetter_TypeInfo;
    }
    DefaultFov = v7->static_fields->DefaultFov;
    if ( fieldOfView == DefaultFov )
    {
      this = (BattleCameraFullScaleSetter_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v2, 0);
      if ( this )
      {
        z = v2->fields.panelScale.fields.z * v2->fields.adjustPanelScale.fields.z;
        v10 = vmul_f32(
                *(float32x2_t *)&v2->fields.panelScale.fields.x,
                *(float32x2_t *)&v2->fields.adjustPanelScale.fields.x).n64_u64[0];
        goto LABEL_25;
      }
    }
    else
    {
      v12 = tanf((float)(fieldOfView * 0.5) * 0.017453);
      if ( !v7->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v7);
        DefaultFov = BattleCameraFullScaleSetter_TypeInfo->static_fields->DefaultFov;
      }
      v13 = tanf((float)(DefaultFov * 0.5) * 0.017453);
      this = (BattleCameraFullScaleSetter_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v2, 0);
      if ( this )
      {
        z = (float)((float)(v12 / v13) * v2->fields.panelScale.fields.z) * v2->fields.adjustPanelScale.fields.z;
        v10 = vmul_f32(
                vmul_n_f32(*(float32x2_t *)&v2->fields.panelScale.fields.x, v12 / v13),
                *(float32x2_t *)&v2->fields.adjustPanelScale.fields.x).n64_u64[0];
        goto LABEL_25;
      }
    }
LABEL_26:
    sub_1C71608(this, method);
  }
  this = (BattleCameraFullScaleSetter_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v2, 0);
  if ( !this )
    goto LABEL_26;
  z = v2->fields.adjustPanelScale.fields.z;
  v9.n64_f32[0] = v2->fields.baseScale * v2->fields.aspect;
  v9.n64_u32[1] = LODWORD(v2->fields.baseScale);
  v10 = vmul_f32(v9, *(float32x2_t *)&v2->fields.adjustPanelScale.fields.x).n64_u64[0];
LABEL_25:
  v14 = HIDWORD(v10);
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, *(UnityEngine_Vector3_o *)&v10, 0);
}


void BattleCameraFullScaleSetter__Initialize(
        BattleCameraFullScaleSetter_o *this,
        BattlePerformance_o *performance,
        bool isUI,
        bool isFlip,
        const MethodInfo *method)
{
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct UnityEngine_Camera_o **p_parentCamera; // x21
  UnityEngine_Transform_o *transform; // x0
  __int64 v14; // x1
  char v15; // w2
  char v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  struct BattlePerformance_o **p_perf; // x0
  int32_t v22; // w1
  Il2CppObject *Component_object; // x0
  char v24; // w2
  char v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  struct BattlePerformance_o *perf; // x8
  struct UnityEngine_Camera_o *uicamera; // x1
  UnityEngine_Object_o *v32; // x22
  Il2CppObject *Instance; // x22
  struct BattlePerformance_o *v34; // x8
  UnityEngine_Object_o *v35; // x22
  Il2CppObject *v36; // x22
  UnityEngine_Object_o *v37; // x21
  const MethodInfo *v38; // x1

  if ( (byte_4CC9D93 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_BattlePerformance___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    sub_1C713B0(&StringLiteral_10606/*"Performance"*/);
    byte_4CC9D93 = 1;
  }
  this->fields.aspect = this->fields.baseWidth / this->fields.baseHeight;
  this->fields.parentCamera = 0;
  p_parentCamera = &this->fields.parentCamera;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.parentCamera,
    0,
    isUI,
    isFlip,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_37;
  this->fields.panelScale = UnityEngine_Transform__get_localScale(transform, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)performance, 0, 0) )
  {
    this->fields.perf = performance;
    p_perf = &this->fields.perf;
    v22 = (int)performance;
  }
  else
  {
    transform = (UnityEngine_Transform_o *)UnityEngine_GameObject__Find((System_String_o *)StringLiteral_10606/*"Performance"*/, 0);
    if ( !transform )
      goto LABEL_37;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)transform,
                         (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_BattlePerformance___);
    v22 = (int)Component_object;
    this->fields.perf = (struct BattlePerformance_o *)Component_object;
    p_perf = &this->fields.perf;
  }
  sub_1C71354((GrandQuestFolderBoardItem_o *)p_perf, v22, v15, v16, v17, v18, v19, v20);
  this->fields.parentCameraType = !isUI;
  if ( isUI )
  {
    perf = this->fields.perf;
    if ( perf )
    {
      uicamera = perf->fields.uicamera;
LABEL_13:
      *p_parentCamera = uicamera;
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)&this->fields.parentCamera,
        (int32_t)uicamera,
        v24,
        v25,
        v26,
        v27,
        v28,
        v29);
      goto LABEL_32;
    }
    goto LABEL_37;
  }
  v32 = (UnityEngine_Object_o *)*p_parentCamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v32, 0, 0) )
    goto LABEL_23;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    if ( this->fields.parentCameraType == 1 )
    {
      v34 = this->fields.perf;
      if ( v34 )
      {
        uicamera = v34->fields.actorcamera;
        goto LABEL_13;
      }
LABEL_37:
      sub_1C71608(transform, v14);
    }
  }
  else
  {
LABEL_23:
    v35 = (UnityEngine_Object_o *)*p_parentCamera;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(v35, 0, 0) )
    {
      v36 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v36, 0, 0) && this->fields.parentCameraType == 1 )
      {
        transform = (UnityEngine_Transform_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
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
  v37 = (UnityEngine_Object_o *)*p_parentCamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v37, 0, 0) )
  {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
  }
  else
  {
    this->fields.flip = isFlip;
    BattleCameraFullScaleSetter__CalcScale(this, v38);
  }
}


void BattleCameraFullScaleSetter__Update(BattleCameraFullScaleSetter_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    sub_1C71608(0, v4);
  if ( UnityEngine_Transform__get_hasChanged(transform, 0) )
    BattleCameraFullScaleSetter__CalcScale(this, v5);
}