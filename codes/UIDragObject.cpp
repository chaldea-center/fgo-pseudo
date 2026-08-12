void UIDragObject___ctor(UIDragObject_o *this, const MethodInfo *method)
{
  UnityEngine_Vector3_c *v3; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x10
  __int64 v5; // d1
  float z; // s2
  struct UnityEngine_Vector3_StaticFields *v7; // x10
  struct UnityEngine_Vector3_StaticFields *v8; // x8

  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  v3 = UnityEngine_Vector3_TypeInfo;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v5 = *(_QWORD *)&static_fields->zeroVector.fields.x;
  z = static_fields->zeroVector.fields.z;
  *(_OWORD *)&this->fields.momentumAmount = xmmword_E9CF70;
  this->fields.dragEffect = 2;
  *(_QWORD *)&this->fields.scrollMomentum.fields.x = v5;
  this->fields.scrollMomentum.fields.z = z;
  v7 = v3->static_fields;
  *(float *)&v5 = v7->zeroVector.fields.z;
  *(_QWORD *)&this->fields.mMomentum.fields.x = *(_QWORD *)&v7->zeroVector.fields.x;
  LODWORD(this->fields.mMomentum.fields.z) = v5;
  v8 = v3->static_fields;
  *(float *)&v5 = v8->zeroVector.fields.z;
  *(_QWORD *)&this->fields.mScroll.fields.x = *(_QWORD *)&v8->zeroVector.fields.x;
  LODWORD(this->fields.mScroll.fields.z) = v5;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UIDragObject__CancelMovement(UIDragObject_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x20
  __int64 v4; // x1
  UnityEngine_Transform_o *v5; // x0
  __int64 v6; // x1
  double x; // d11
  __int64 v8; // x1
  double v9; // d0
  double v10; // d0
  double v11; // d1
  double v12; // d1
  float v13; // s9
  double y; // d11
  __int64 v15; // x1
  double v16; // d0
  double v17; // d0
  double v18; // d1
  double v19; // d1
  float v20; // s10
  double z; // d11
  double v22; // d0
  double v23; // d0
  double v24; // d1
  double v25; // d1
  int v26; // w8
  bool v27; // zf
  UnityEngine_Object_o *v29; // x20
  int v30; // w8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v32; // s1
  UnityEngine_Vector3_c *v33; // x8
  struct UnityEngine_Vector3_StaticFields *v34; // x9
  float v35; // s1
  struct UnityEngine_Vector3_StaticFields *v36; // x8
  float v37; // s1
  double iptr; // [xsp+28h] [xbp-28h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:kr00_12.12
  UnityEngine_Vector3_o position; // 0:kr14_12.12
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5974FCC & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974FCC = 1;
  }
  target = (UnityEngine_Object_o *)this->fields.target;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Inequality(target, 0, 0) )
    goto LABEL_60;
  v5 = this->fields.target;
  if ( !v5 )
    goto LABEL_70;
  localPosition = UnityEngine_Transform__get_localPosition(v5, 0);
  if ( !byte_596A30A )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_596A30A = 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v6);
  x = localPosition.fields.x;
  v9 = modf(localPosition.fields.x, &iptr);
  if ( localPosition.fields.x >= 0.0 )
  {
    if ( v9 != 0.5 )
    {
      v10 = floor(x + 0.5);
      goto LABEL_21;
    }
    v11 = 1.0;
    v10 = iptr;
  }
  else
  {
    if ( v9 != -0.5 )
    {
      v10 = ceil(x + -0.5);
      goto LABEL_21;
    }
    v10 = iptr;
    v11 = -1.0;
  }
  v12 = v10 + v11;
  if ( ((__int64)v10 & 1) != 0 )
    v10 = v12;
LABEL_21:
  if ( v10 == INFINITY )
    v13 = -2147500000.0;
  else
    v13 = (float)(int)v10;
  if ( !byte_596A30A )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_596A30A = 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v8);
  y = localPosition.fields.y;
  v16 = modf(localPosition.fields.y, &iptr);
  if ( localPosition.fields.y >= 0.0 )
  {
    if ( v16 != 0.5 )
    {
      v17 = floor(y + 0.5);
      goto LABEL_38;
    }
    v18 = 1.0;
    v17 = iptr;
  }
  else
  {
    if ( v16 != -0.5 )
    {
      v17 = ceil(y + -0.5);
      goto LABEL_38;
    }
    v17 = iptr;
    v18 = -1.0;
  }
  v19 = v17 + v18;
  if ( ((__int64)v17 & 1) != 0 )
    v17 = v19;
LABEL_38:
  if ( v17 == INFINITY )
    v20 = -2147500000.0;
  else
    v20 = (float)(int)v17;
  if ( !byte_596A30A )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_596A30A = 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v15);
  z = localPosition.fields.z;
  v22 = modf(localPosition.fields.z, &iptr);
  if ( localPosition.fields.z >= 0.0 )
  {
    if ( v22 == 0.5 )
    {
      v24 = 1.0;
      v23 = iptr;
LABEL_50:
      v25 = v23 + v24;
      if ( ((__int64)v23 & 1) != 0 )
        v23 = v25;
      goto LABEL_55;
    }
    v23 = floor(z + 0.5);
  }
  else
  {
    if ( v22 == -0.5 )
    {
      v23 = iptr;
      v24 = -1.0;
      goto LABEL_50;
    }
    v23 = ceil(z + -0.5);
  }
LABEL_55:
  v5 = this->fields.target;
  if ( !v5 )
    goto LABEL_70;
  v26 = (int)v23;
  v27 = v23 == INFINITY;
  v41.fields.x = v13;
  if ( v27 )
    v41.fields.z = -2147500000.0;
  else
    v41.fields.z = (float)v26;
  v41.fields.y = v20;
  UnityEngine_Transform__set_localPosition(v5, v41, 0);
LABEL_60:
  v29 = (UnityEngine_Object_o *)this->fields.target;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  if ( UnityEngine_Object__op_Inequality(v29, 0, 0) )
  {
    v5 = this->fields.target;
    if ( v5 )
    {
      position = UnityEngine_Transform__get_position(v5, 0);
      this->fields.mTargetPos.fields.x = position.fields.x;
      this->fields.mTargetPos.fields.y = position.fields.y;
      v30 = (unsigned __int8)byte_5969AE0;
      this->fields.mTargetPos.fields.z = position.fields.z;
      if ( !v30 )
      {
        sub_2213A60(&UnityEngine_Vector3_TypeInfo);
        byte_5969AE0 = 1;
      }
      goto LABEL_69;
    }
LABEL_70:
    sub_2213CDC(v5, v4);
  }
  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v32 = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.mTargetPos.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields.mTargetPos.fields.z = v32;
LABEL_69:
  v33 = UnityEngine_Vector3_TypeInfo;
  v34 = UnityEngine_Vector3_TypeInfo->static_fields;
  v35 = v34->zeroVector.fields.z;
  *(_QWORD *)&this->fields.mMomentum.fields.x = *(_QWORD *)&v34->zeroVector.fields.x;
  this->fields.mMomentum.fields.z = v35;
  v36 = v33->static_fields;
  v37 = v36->zeroVector.fields.z;
  *(_QWORD *)&this->fields.mScroll.fields.x = *(_QWORD *)&v36->zeroVector.fields.x;
  this->fields.mScroll.fields.z = v37;
}


void UIDragObject__CancelSpring(UIDragObject_o *this, const MethodInfo *method)
{
  struct UnityEngine_Transform_o *target; // x0
  __int64 v4; // x1
  Il2CppObject *Component_object; // x19

  if ( (byte_5974FCD & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_SpringPosition___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974FCD = 1;
  }
  target = this->fields.target;
  if ( !target )
    goto LABEL_10;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)target,
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_SpringPosition___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  target = (struct UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(
                                               (UnityEngine_Object_o *)Component_object,
                                               0,
                                               0);
  if ( ((unsigned __int8)target & 1) != 0 )
  {
    if ( Component_object )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0);
      return;
    }
LABEL_10:
    sub_2213CDC(target, method);
  }
}


void UIDragObject__FindPanel(UIDragObject_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x20
  bool v4; // w0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  struct UIPanel_o *v11; // x1
  UnityEngine_Component_o *transform; // x0
  __int64 v13; // x1
  UnityEngine_Transform_o *parent; // x20
  __int64 v15; // x1
  UnityEngine_Object_o *panelRegion; // x20

  if ( (byte_5974FC6 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UIPanel_TypeInfo);
    byte_5974FC6 = 1;
  }
  target = (UnityEngine_Object_o *)this->fields.target;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v4 = UnityEngine_Object__op_Inequality(target, 0, 0);
  v11 = 0;
  if ( v4 )
  {
    transform = (UnityEngine_Component_o *)this->fields.target;
    if ( !transform || (transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0)) == 0 )
      sub_2213CDC(transform, v11);
    parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0);
    if ( !*(&UIPanel_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UIPanel_TypeInfo, v13);
    v11 = UIPanel__Find(parent, 0);
  }
  this->fields.panelRegion = v11;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.panelRegion, (int32_t)v11, v5, v6, v7, v8, v9, v10);
  panelRegion = (UnityEngine_Object_o *)this->fields.panelRegion;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
  if ( UnityEngine_Object__op_Equality(panelRegion, 0, 0) )
    this->fields.restrictWithinPanel = 0;
}


void UIDragObject__LateUpdate(UIDragObject_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x20
  float deltaTime; // s8
  float32x2_t v5; // d0
  float z; // s9
  int v7; // w8
  float v8; // s10
  float v9; // s1
  __int64 v10; // x1
  int v11; // w8
  float x; // s9
  float32x2_t v13; // d10
  unsigned __int64 v14; // d1
  UnityEngine_Object_o *panelRegion; // x21
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x1
  __int64 v18; // x1
  UnityEngine_Object_o *v19; // x21
  const MethodInfo *v20; // x1
  __int64 v21; // x1
  UIPanel_o *v22; // x0
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x1
  float v25; // s8
  float32x2_t v26; // d10
  unsigned __int64 v27; // d1
  unsigned __int32 from; // [xsp+0h] [xbp-60h]
  UnityEngine_Vector3_o v29; // 0:kr00_12.12
  UnityEngine_Vector3_o v30; // 0:kr40_12.12
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5974FCB & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974FCB = 1;
  }
  target = (UnityEngine_Object_o *)this->fields.target;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(target, 0, 0) )
  {
    deltaTime = RealTime__get_deltaTime(0);
    v5.n64_u64[0] = *(unsigned __int64 *)&this->fields.mScroll.fields.x;
    z = this->fields.mScroll.fields.z;
    v7 = (unsigned __int8)byte_5969AE0;
    v8 = v5.n64_f32[1];
    v9 = this->fields.mMomentum.fields.z - z;
    *(float32x2_t *)&this->fields.mMomentum.fields.x = vsub_f32(*(float32x2_t *)&this->fields.mMomentum.fields.x, v5);
    this->fields.mMomentum.fields.z = v9;
    if ( !v7 )
    {
      from = v5.n64_u32[0];
      sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      v5.n64_u32[0] = from;
      byte_5969AE0 = 1;
    }
    LODWORD(v30.fields.x) = v5.n64_u32[0];
    v30.fields.y = v8;
    v30.fields.z = z;
    v29 = NGUIMath__SpringLerp_56364876(
            v30,
            UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
            20.0,
            deltaTime,
            0);
    this->fields.mScroll.fields.x = v29.fields.x;
    this->fields.mScroll.fields.y = v29.fields.y;
    v11 = (unsigned __int8)byte_5969AE2;
    this->fields.mScroll.fields.z = v29.fields.z;
    if ( !v11 )
    {
      sub_2213A60(&System_Math_TypeInfo);
      byte_5969AE2 = 1;
    }
    x = this->fields.mMomentum.fields.x;
    v13.n64_u64[0] = *(unsigned __int64 *)&this->fields.mMomentum.fields.y;
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v10);
    v14 = vmul_f32(v13, v13).n64_u64[0];
    if ( sqrtf((float)((float)(x * x) + *(float *)&v14) + *((float *)&v14 + 1)) >= 0.0001 )
    {
      if ( this->fields.mPressed )
      {
        NGUIMath__SpringDampen(&this->fields.mMomentum, 9.0, deltaTime, 0);
      }
      else
      {
        panelRegion = (UnityEngine_Object_o *)this->fields.panelRegion;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
        if ( UnityEngine_Object__op_Equality(panelRegion, 0, 0) )
          UIDragObject__FindPanel(this, v16);
        v31 = NGUIMath__SpringDampen(&this->fields.mMomentum, 9.0, deltaTime, 0);
        UIDragObject__Move(this, v31, v17);
        if ( this->fields.restrictWithinPanel )
        {
          v19 = (UnityEngine_Object_o *)this->fields.panelRegion;
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
          if ( UnityEngine_Object__op_Inequality(v19, 0, 0) )
          {
            UIDragObject__UpdateBounds(this, v20);
            v22 = this->fields.panelRegion;
            if ( !v22 )
              sub_2213CDC(0, v21);
            if ( UIPanel__ConstrainTargetToBounds(
                   v22,
                   this->fields.target,
                   &this->fields.mBounds,
                   this->fields.dragEffect == 0,
                   0) )
            {
              UIDragObject__CancelMovement(this, v23);
            }
            else
            {
              UIDragObject__CancelSpring(this, v23);
            }
          }
        }
        NGUIMath__SpringDampen(&this->fields.mMomentum, 9.0, deltaTime, 0);
        if ( !byte_5969AE2 )
        {
          sub_2213A60(&System_Math_TypeInfo);
          byte_5969AE2 = 1;
        }
        v25 = this->fields.mMomentum.fields.x;
        v26.n64_u64[0] = *(unsigned __int64 *)&this->fields.mMomentum.fields.y;
        if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v24);
        v27 = vmul_f32(v26, v26).n64_u64[0];
        if ( sqrtf((float)((float)(v25 * v25) + *(float *)&v27) + *((float *)&v27 + 1)) < 0.0001 )
          UIDragObject__CancelMovement(this, v24);
      }
    }
  }
}


void UIDragObject__Move(UIDragObject_o *this, UnityEngine_Vector3_o worldDelta, const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  UnityEngine_Object_o *panelRegion; // x20
  UnityEngine_Transform_o *v8; // x0
  __int64 v9; // x1
  double v12; // d0
  double v13; // d0
  float v14; // s2
  UnityEngine_Transform_o *target; // x19
  float v16; // s1
  float v17; // s10
  double v18; // d0
  double v19; // d0
  float v20; // s2
  __int64 v21; // x1
  Il2CppObject *Component_object; // x19
  double iptr; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:kr00_12.12
  UnityEngine_Vector3_o position; // 0:kr14_12.12
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4

  z = worldDelta.fields.z;
  y = worldDelta.fields.y;
  x = worldDelta.fields.x;
  if ( (byte_5974FCA & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIScrollView___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974FCA = 1;
  }
  panelRegion = (UnityEngine_Object_o *)this->fields.panelRegion;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v8 = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(panelRegion, 0, 0);
  if ( ((unsigned __int8)v8 & 1) == 0 )
  {
    target = this->fields.target;
    if ( target )
    {
      position = UnityEngine_Transform__get_position(target, 0);
      v27.fields.y = y + position.fields.y;
      v27.fields.z = z + position.fields.z;
      v27.fields.x = x + position.fields.x;
      UnityEngine_Transform__set_position(target, v27, 0);
      return;
    }
    goto LABEL_38;
  }
  v8 = this->fields.target;
  v26.fields.z = z + this->fields.mTargetPos.fields.z;
  v26.fields.x = x + this->fields.mTargetPos.fields.x;
  v26.fields.y = y + this->fields.mTargetPos.fields.y;
  this->fields.mTargetPos = v26;
  if ( !v8 )
    goto LABEL_38;
  UnityEngine_Transform__set_position(v8, v26, 0);
  v8 = this->fields.target;
  if ( !v8 )
    goto LABEL_38;
  localPosition = UnityEngine_Transform__get_localPosition(v8, 0);
  v12 = modf(localPosition.fields.x, &iptr);
  if ( localPosition.fields.x >= 0.0 )
  {
    if ( v12 != 0.5 )
    {
      v17 = floorf(localPosition.fields.x + 0.5);
      goto LABEL_20;
    }
    v13 = iptr;
    v14 = 1.0;
  }
  else
  {
    if ( v12 != -0.5 )
    {
      v17 = ceilf(localPosition.fields.x + -0.5);
      goto LABEL_20;
    }
    v13 = iptr;
    v14 = -1.0;
  }
  if ( ((__int64)v13 & 1) != 0 )
  {
    v16 = v13;
    v17 = v16 + v14;
  }
  else
  {
    v17 = v13;
  }
LABEL_20:
  v18 = modf(localPosition.fields.y, &iptr);
  if ( localPosition.fields.y >= 0.0 )
  {
    if ( v18 != 0.5 )
    {
      v28.fields.y = floorf(localPosition.fields.y + 0.5);
      goto LABEL_30;
    }
    v19 = iptr;
    v20 = 1.0;
  }
  else
  {
    if ( v18 != -0.5 )
    {
      v28.fields.y = ceilf(localPosition.fields.y + -0.5);
      goto LABEL_30;
    }
    v19 = iptr;
    v20 = -1.0;
  }
  v28.fields.y = v19;
  if ( ((__int64)v19 & 1) != 0 )
    v28.fields.y = v28.fields.y + v20;
LABEL_30:
  v8 = this->fields.target;
  if ( !v8 )
    goto LABEL_38;
  v28.fields.x = v17;
  v28.fields.z = localPosition.fields.z;
  UnityEngine_Transform__set_localPosition(v8, v28, 0);
  v8 = (UnityEngine_Transform_o *)this->fields.panelRegion;
  if ( !v8 )
    goto LABEL_38;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)v8,
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIScrollView___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
  v8 = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( ((unsigned __int8)v8 & 1) != 0 )
  {
    if ( Component_object )
    {
      ((void (__fastcall *)(Il2CppObject *, __int64, const MethodInfo *))Component_object->klass->vtable[8].methodPtr)(
        Component_object,
        1,
        Component_object->klass->vtable[8].method);
      return;
    }
LABEL_38:
    sub_2213CDC(v8, v9);
  }
}


void UIDragObject__OnDisable(UIDragObject_o *this, const MethodInfo *method)
{
  this->fields.mStarted = 0;
}


void UIDragObject__OnDrag(UIDragObject_o *this, UnityEngine_Vector2_o delta, const MethodInfo *method)
{
  _BOOL4 mPressed; // w8
  int32_t mTouchID; // w20
  UICamera_c *v6; // x0
  __int64 v7; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v9; // x1
  UnityEngine_Object_o *target; // x20
  __int64 v11; // x1
  UnityEngine_Camera_o *panelRegion; // x0
  __int64 v13; // x9
  __int64 v14; // x8
  float x; // s3
  float y; // s4
  _BOOL4 mStarted; // w8
  float z; // s5
  float v19; // s8
  float v20; // s9
  float v21; // s10
  float v22; // s1
  float v23; // s2
  float v24; // s0
  float v25; // s1
  float v26; // s2
  float v27; // s0
  const MethodInfo *v28; // x1
  float v29; // s8
  float v30; // s9
  float v31; // s10
  int32_t dragEffect; // w8
  const MethodInfo *v33; // x1
  UnityEngine_Ray_o v34; // [xsp+0h] [xbp-B0h] BYREF
  UnityEngine_Ray_o v35; // [xsp+24h] [xbp-8Ch] BYREF
  float v36; // [xsp+3Ch] [xbp-74h] BYREF
  UnityEngine_Ray_o v37; // [xsp+40h] [xbp-70h] BYREF
  UnityEngine_Vector3_o Point; // 0:kr00_12.12
  UnityEngine_Vector3_o v39; // 0:kr14_12.12
  UnityEngine_Vector3_o v40; // 0:kr20_12.12
  UnityEngine_Vector3_o localPosition; // 0:kr34_12.12
  UnityEngine_Vector3_o v42; // 0:kr40_12.12
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v44; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v46; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5974FC9 & 1) == 0 )
  {
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UICamera_TypeInfo);
    byte_5974FC9 = 1;
  }
  mPressed = this->fields.mPressed;
  memset(&v37, 0, sizeof(v37));
  v36 = 0.0;
  if ( mPressed )
  {
    mTouchID = this->fields.mTouchID;
    v6 = UICamera_TypeInfo;
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, method);
      v6 = UICamera_TypeInfo;
    }
    if ( mTouchID == v6->static_fields->currentTouchID
      && UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v7);
      if ( NGUITools__GetActive_56411004(gameObject, 0) )
      {
        target = (UnityEngine_Object_o *)this->fields.target;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
        if ( UnityEngine_Object__op_Inequality(target, 0, 0) )
        {
          panelRegion = (UnityEngine_Camera_o *)UICamera_TypeInfo;
          if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v11);
            panelRegion = (UnityEngine_Camera_o *)UICamera_TypeInfo;
          }
          v13 = *(_QWORD *)&panelRegion[5].fields.m_NonSerializedVersion;
          v14 = *(_QWORD *)(v13 + 160);
          if ( v14 )
          {
            panelRegion = *(UnityEngine_Camera_o **)(v13 + 136);
            *(_DWORD *)(v14 + 96) = 2;
            if ( panelRegion )
            {
              v43.fields.z = 0.0;
              v43.fields.x = *(float *)(v14 + 16);
              v43.fields.y = *(float *)(v14 + 20);
              UnityEngine_Camera__ScreenPointToRay_83198808(&v35, panelRegion, v43, 0);
              v36 = 0.0;
              v37 = v35;
              v34 = v35;
              if ( (sub_35AC8F8(&this->fields.mPlane, &v34, &v36, 0) & 1) == 0 )
                return;
              Point = UnityEngine_Ray__GetPoint(&v37, v36, 0);
              x = this->fields.mLastPos.fields.x;
              y = this->fields.mLastPos.fields.y;
              mStarted = this->fields.mStarted;
              z = this->fields.mLastPos.fields.z;
              this->fields.mLastPos = Point;
              if ( mStarted )
              {
                v19 = Point.fields.x - x;
                v20 = Point.fields.y - y;
                v21 = Point.fields.z - z;
              }
              else
              {
                this->fields.mStarted = 1;
                v19 = sub_24B9B38(0);
                v20 = v22;
                v21 = v23;
              }
              if ( v19 != 0.0 || v20 != 0.0 )
              {
                panelRegion = (UnityEngine_Camera_o *)this->fields.target;
                if ( !panelRegion )
                  goto LABEL_37;
                v44.fields.x = v19;
                v44.fields.y = v20;
                v44.fields.z = v21;
                v39 = UnityEngine_Transform__InverseTransformDirection((UnityEngine_Transform_o *)panelRegion, v44, 0);
                panelRegion = (UnityEngine_Camera_o *)this->fields.target;
                if ( !panelRegion )
                  goto LABEL_37;
                v45.fields.z = v39.fields.z * this->fields.scale.fields.z;
                v45.fields.y = v39.fields.y * this->fields.scale.fields.y;
                v45.fields.x = v39.fields.x * this->fields.scale.fields.x;
                v40 = UnityEngine_Transform__TransformDirection((UnityEngine_Transform_o *)panelRegion, v45, 0);
                v19 = v40.fields.x;
                v20 = v40.fields.y;
                v21 = v40.fields.z;
              }
              if ( this->fields.dragEffect )
              {
                v24 = this->fields.momentumAmount * 0.01;
                v25 = this->fields.mMomentum.fields.x
                    + (float)((float)((float)(this->fields.mMomentum.fields.x + (float)(v19 * v24))
                                    - this->fields.mMomentum.fields.x)
                            * 0.67);
                v26 = this->fields.mMomentum.fields.y
                    + (float)((float)((float)(this->fields.mMomentum.fields.y + (float)(v20 * v24))
                                    - this->fields.mMomentum.fields.y)
                            * 0.67);
                v27 = this->fields.mMomentum.fields.z
                    + (float)((float)((float)(this->fields.mMomentum.fields.z + (float)(v21 * v24))
                                    - this->fields.mMomentum.fields.z)
                            * 0.67);
                this->fields.mMomentum.fields.x = v25;
                this->fields.mMomentum.fields.y = v26;
                this->fields.mMomentum.fields.z = v27;
              }
              panelRegion = (UnityEngine_Camera_o *)this->fields.target;
              if ( panelRegion )
              {
                localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)panelRegion, 0);
                v46.fields.x = v19;
                v46.fields.y = v20;
                v46.fields.z = v21;
                UIDragObject__Move(this, v46, v28);
                if ( !this->fields.restrictWithinPanel )
                  return;
                panelRegion = (UnityEngine_Camera_o *)this->fields.target;
                if ( panelRegion )
                {
                  v30 = this->fields.mBounds.fields.m_Center.fields.y;
                  v29 = this->fields.mBounds.fields.m_Center.fields.z;
                  v31 = this->fields.mBounds.fields.m_Center.fields.x;
                  v42 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)panelRegion, 0);
                  dragEffect = this->fields.dragEffect;
                  this->fields.mBounds.fields.m_Center.fields.x = v31 + (float)(v42.fields.x - localPosition.fields.x);
                  this->fields.mBounds.fields.m_Center.fields.y = v30 + (float)(v42.fields.y - localPosition.fields.y);
                  this->fields.mBounds.fields.m_Center.fields.z = v29 + (float)(v42.fields.z - localPosition.fields.z);
                  if ( dragEffect == 2 )
                    return;
                  panelRegion = (UnityEngine_Camera_o *)this->fields.panelRegion;
                  if ( panelRegion )
                  {
                    if ( UIPanel__ConstrainTargetToBounds(
                           (UIPanel_o *)panelRegion,
                           this->fields.target,
                           &this->fields.mBounds,
                           1,
                           0) )
                    {
                      UIDragObject__CancelMovement(this, v33);
                    }
                    return;
                  }
                }
              }
            }
          }
LABEL_37:
          sub_2213CDC(panelRegion, v11);
        }
      }
    }
  }
}


void UIDragObject__OnEnable(UIDragObject_o *this, const MethodInfo *method)
{
  float scrollWheelFactor; // s0
  float32x2_t v4; // d1
  float z; // s2
  MissionNaviTransitionBoardItem_o *p_contentRect; // x20
  UnityEngine_Object_o *contentRect; // x21
  __int64 v8; // x1
  UnityEngine_Object_o *target; // x21
  __int64 v10; // x1
  __int64 v11; // x1
  UnityEngine_Component_o *v12; // x0
  __int64 v13; // x1
  Il2CppObject *Component_object; // x19
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7

  if ( (byte_5974FC5 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Application_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974FC5 = 1;
  }
  scrollWheelFactor = this->fields.scrollWheelFactor;
  if ( scrollWheelFactor != 0.0 )
  {
    v4.n64_u64[0] = *(unsigned __int64 *)&this->fields.scale.fields.x;
    z = this->fields.scale.fields.z;
    this->fields.scrollWheelFactor = 0.0;
    *(float32x2_t *)&this->fields.scrollMomentum.fields.x = vmul_n_f32(v4, scrollWheelFactor);
    this->fields.scrollMomentum.fields.z = scrollWheelFactor * z;
  }
  p_contentRect = (MissionNaviTransitionBoardItem_o *)&this->fields.contentRect;
  contentRect = (UnityEngine_Object_o *)this->fields.contentRect;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(contentRect, 0, 0) )
  {
    target = (UnityEngine_Object_o *)this->fields.target;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    if ( UnityEngine_Object__op_Inequality(target, 0, 0) )
    {
      if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, v10);
      if ( UnityEngine_Application__get_isPlaying(0) )
      {
        v12 = (UnityEngine_Component_o *)this->fields.target;
        if ( !v12 )
          sub_2213CDC(0, v11);
        Component_object = UnityEngine_Component__GetComponent_object_(
                             v12,
                             (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
        {
          p_contentRect->klass = (MissionNaviTransitionBoardItem_c *)Component_object;
          sub_2213A04(p_contentRect, (int32_t)Component_object, v15, v16, v17, v18, v19, v20);
        }
      }
    }
  }
}


void UIDragObject__OnPress(UIDragObject_o *this, bool pressed, const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_GameObject_o *gameObject; // x21
  __int64 v7; // x1
  UnityEngine_Object_o *target; // x21
  const MethodInfo *v9; // x1
  UICamera_c *v10; // x0
  int32_t currentTouchID; // w8
  const MethodInfo *v12; // x1
  UnityEngine_Object_o *panelRegion; // x20
  UICamera_c *v14; // x0
  UnityEngine_Component_o *currentCamera; // x0
  UnityEngine_Transform_o *transform; // x0
  __int64 v17; // x1
  UnityEngine_Object_o *v18; // x21
  UnityEngine_Transform_o *v19; // x20
  int32_t mTouchID; // w20
  UICamera_c *v21; // x0
  _BOOL4 restrictWithinPanel; // w8
  const MethodInfo *v23; // x1
  float v24; // s1
  float v25; // s2
  __int64 v26; // x1
  UICamera_c *v27; // x0
  float *static_fields; // x8
  float v29; // s3
  float v30; // s4
  float v31; // s5
  struct UnityEngine_Plane_o v32; // [xsp+0h] [xbp-60h] BYREF
  UnityEngine_Vector3_o v33; // 0:kr10_12.12
  UnityEngine_Quaternion_o rotation; // 0:kr00_16.16
  UnityEngine_Vector3_o v35; // 0:s4.4,4:s5.4,8:s6.4

  if ( (byte_5974FC8 & 1) == 0 )
  {
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UICamera_TypeInfo);
    byte_5974FC8 = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v5);
    if ( NGUITools__GetActive_56411004(gameObject, 0) )
    {
      target = (UnityEngine_Object_o *)this->fields.target;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
      if ( UnityEngine_Object__op_Inequality(target, 0, 0) )
      {
        if ( pressed )
        {
          if ( !this->fields.mPressed )
          {
            v10 = UICamera_TypeInfo;
            if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v9);
              v10 = UICamera_TypeInfo;
            }
            currentTouchID = v10->static_fields->currentTouchID;
            *(_WORD *)&this->fields.mStarted = 256;
            this->fields.mTouchID = currentTouchID;
            UIDragObject__CancelMovement(this, v9);
            if ( this->fields.restrictWithinPanel )
            {
              panelRegion = (UnityEngine_Object_o *)this->fields.panelRegion;
              if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
              if ( UnityEngine_Object__op_Equality(panelRegion, 0, 0) )
                UIDragObject__FindPanel(this, v12);
              if ( this->fields.restrictWithinPanel )
                UIDragObject__UpdateBounds(this, v12);
            }
            UIDragObject__CancelSpring(this, v12);
            v14 = UICamera_TypeInfo;
            if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v9);
              v14 = UICamera_TypeInfo;
            }
            currentCamera = (UnityEngine_Component_o *)v14->static_fields->currentCamera;
            if ( !currentCamera )
LABEL_44:
              sub_2213CDC(currentCamera, v9);
            transform = UnityEngine_Component__get_transform(currentCamera, 0);
            v18 = (UnityEngine_Object_o *)this->fields.panelRegion;
            v19 = transform;
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
            currentCamera = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v18, 0, 0);
            if ( ((unsigned __int8)currentCamera & 1) != 0 )
            {
              currentCamera = (UnityEngine_Component_o *)this->fields.panelRegion;
              if ( !currentCamera )
                goto LABEL_44;
              currentCamera = (UnityEngine_Component_o *)UIRect__get_cachedTransform((UIRect_o *)currentCamera, 0);
              v19 = (UnityEngine_Transform_o *)currentCamera;
              if ( !currentCamera )
                goto LABEL_44;
            }
            else if ( !v19 )
            {
              goto LABEL_44;
            }
            rotation = UnityEngine_Transform__get_rotation(v19, 0);
            v35.fields.x = sub_35AC7A4(0);
            v35.fields.y = v24;
            v35.fields.z = v25;
            v33 = UnityEngine_Quaternion__op_Multiply_83371700(rotation, v35, 0);
            v27 = UICamera_TypeInfo;
            if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v26);
              v27 = UICamera_TypeInfo;
            }
            static_fields = (float *)v27->static_fields;
            v29 = static_fields[17];
            v30 = static_fields[18];
            v31 = static_fields[19];
            v32 = (struct UnityEngine_Plane_o)0LL;
            sub_35AC7E8(&v32, 0, v33.fields.x, v33.fields.y, v33.fields.z, v29, v30, v31);
            this->fields.mPlane = v32;
          }
        }
        else if ( this->fields.mPressed )
        {
          mTouchID = this->fields.mTouchID;
          v21 = UICamera_TypeInfo;
          if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v9);
            v21 = UICamera_TypeInfo;
          }
          if ( mTouchID == v21->static_fields->currentTouchID )
          {
            restrictWithinPanel = this->fields.restrictWithinPanel;
            this->fields.mPressed = 0;
            if ( restrictWithinPanel && this->fields.dragEffect == 2 )
            {
              currentCamera = (UnityEngine_Component_o *)this->fields.panelRegion;
              if ( !currentCamera )
                goto LABEL_44;
              if ( UIPanel__ConstrainTargetToBounds(
                     (UIPanel_o *)currentCamera,
                     this->fields.target,
                     &this->fields.mBounds,
                     0,
                     0) )
              {
                UIDragObject__CancelMovement(this, v23);
              }
            }
          }
        }
      }
    }
  }
}


void UIDragObject__OnScroll(UIDragObject_o *this, float delta, const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  float v7; // s0

  if ( (byte_5974FCE & 1) == 0 )
  {
    sub_2213A60(&NGUITools_TypeInfo);
    byte_5974FCE = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v5);
    if ( NGUITools__GetActive_56411004(gameObject, 0) )
    {
      v7 = this->fields.mScroll.fields.z - (float)((float)(delta * 0.05) * this->fields.scrollMomentum.fields.z);
      *(float32x2_t *)&this->fields.mScroll.fields.x = vsub_f32(
                                                         *(float32x2_t *)&this->fields.mScroll.fields.x,
                                                         vmul_n_f32(
                                                           *(float32x2_t *)&this->fields.scrollMomentum.fields.x,
                                                           delta * 0.05));
      this->fields.mScroll.fields.z = v7;
    }
  }
}


void UIDragObject__UpdateBounds(UIDragObject_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *contentRect; // x20
  int v4; // w8
  __int64 v5; // x1
  bool v6; // w8
  UIRect_o *panelRegion; // x0
  float32x2_t *v8; // x20
  unsigned __int64 v9; // x21
  struct UIRect_AnchorPoint_o **p_rightAnchor; // x22
  float32x2_t v11; // d9
  float v12; // s8
  unsigned __int64 v13; // x9
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float32x2_t v15; // d2
  float z; // s4
  float *v17; // x8
  float32x2_t v18; // d3
  float v19; // s2
  float v20; // s4
  int8x8_t v21; // d5
  float v22; // s6
  int8x8_t v23; // d3
  float v24; // s2
  int8x8_t v25; // d7
  int8x8_t v26; // d16
  int8x8_t v27; // d17
  float32x2_t v28; // d5
  float32x2_t v29; // d3
  UnityEngine_Transform_o *cachedTransform; // x0
  __int64 v31; // x8
  UnityEngine_Matrix4x4_o v32; // [xsp+0h] [xbp-C0h] BYREF
  UnityEngine_Matrix4x4_o v33; // [xsp+40h] [xbp-80h] BYREF
  UnityEngine_Vector3_o v34; // 0:kr00_12.12

  if ( (byte_5974FC7 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974FC7 = 1;
  }
  contentRect = (UnityEngine_Object_o *)this->fields.contentRect;
  v4 = *(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1);
  memset(&v33, 0, sizeof(v33));
  if ( !v4 )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v6 = UnityEngine_Object__op_Implicit(contentRect, 0);
  panelRegion = (UIRect_o *)this->fields.panelRegion;
  if ( v6 )
  {
    if ( panelRegion )
    {
      panelRegion = (UIRect_o *)UIRect__get_cachedTransform(panelRegion, 0);
      if ( panelRegion )
      {
        UnityEngine_Transform__get_worldToLocalMatrix(&v32, (UnityEngine_Transform_o *)panelRegion, 0);
        panelRegion = this->fields.contentRect;
        v33 = v32;
        if ( panelRegion )
        {
          panelRegion = (UIRect_o *)((__int64 (__fastcall *)(UIRect_o *, const MethodInfo *))panelRegion->klass->vtable._11_unknown.methodPtr)(
                                      panelRegion,
                                      panelRegion->klass->vtable._11_unknown.method);
          if ( panelRegion )
          {
            v8 = (float32x2_t *)panelRegion;
            v9 = 0;
            p_rightAnchor = &panelRegion->fields.rightAnchor;
            do
            {
              if ( v9 >= v8[3].n64_u32[0] )
                goto LABEL_27;
              v34 = UnityEngine_Matrix4x4__MultiplyPoint3x4(&v33, *(UnityEngine_Vector3_o *)(p_rightAnchor - 1), 0);
              if ( v9 >= v8[3].n64_u32[0] )
                goto LABEL_27;
              ++v9;
              *(UnityEngine_Vector3_o *)(p_rightAnchor - 1) = v34;
              p_rightAnchor = (struct UIRect_AnchorPoint_o **)((char *)p_rightAnchor + 12);
            }
            while ( v9 != 4 );
            if ( v8[3].n64_u32[0] )
            {
              v11.n64_u64[0] = v8[4].n64_u64[0];
              v12 = v8[5].n64_f32[0];
              if ( !byte_5969AE0 )
              {
                panelRegion = (UIRect_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
                byte_5969AE0 = 1;
              }
              v13 = 1;
              static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
              v15.n64_u64[0] = *(unsigned __int64 *)&static_fields->zeroVector.fields.x;
              z = static_fields->zeroVector.fields.z;
              v17 = (float *)&v8[6] + 1;
              *(float32x2_t *)&this->fields.mBounds.fields.m_Center.fields.x = v11;
              v18.n64_u64[0] = vmul_f32(v15, (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
              v19 = z * 0.5;
              this->fields.mBounds.fields.m_Center.fields.z = v12;
              *(float32x2_t *)&this->fields.mBounds.fields.m_Extents.fields.x = v18;
              this->fields.mBounds.fields.m_Extents.fields.z = z * 0.5;
              while ( v13 < v8[3].n64_u32[0] )
              {
                v20 = v12 - v19;
                v21.n64_u64[0] = vsub_f32(v11, v18).n64_u64[0];
                v22 = *v17;
                v23.n64_u64[0] = vadd_f32(v11, v18).n64_u64[0];
                v24 = v12 + v19;
                v25.n64_u64[0] = *(_QWORD *)(v17 - 2);
                ++v13;
                v17 += 3;
                v26.n64_u64[0] = vcgt_f32(v25, v21).n64_u64[0];
                v27.n64_u64[0] = vcgt_f32(v23, v25).n64_u64[0];
                if ( v20 >= v22 )
                  v20 = v22;
                v28.n64_u64[0] = vbsl_s8(v26, v21, v25).n64_u64[0];
                v29.n64_u64[0] = vbsl_s8(v27, v23, v25).n64_u64[0];
                if ( v24 <= v22 )
                  v24 = v22;
                v18.n64_u64[0] = vmul_f32(vsub_f32(v29, v28), (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
                v19 = (float)(v24 - v20) * 0.5;
                v11.n64_u64[0] = vadd_f32(v28, v18).n64_u64[0];
                *(float32x2_t *)&this->fields.mBounds.fields.m_Extents.fields.x = v18;
                v12 = v20 + v19;
                this->fields.mBounds.fields.m_Extents.fields.z = v19;
                *(float32x2_t *)&this->fields.mBounds.fields.m_Center.fields.x = v11;
                this->fields.mBounds.fields.m_Center.fields.z = v20 + v19;
                if ( v13 == 4 )
                  return;
              }
            }
LABEL_27:
            sub_2213CE4(panelRegion);
          }
        }
      }
    }
LABEL_28:
    sub_2213CDC(panelRegion, v5);
  }
  if ( !panelRegion )
    goto LABEL_28;
  cachedTransform = UIRect__get_cachedTransform(panelRegion, 0);
  NGUIMath__CalculateRelativeWidgetBounds_56289764(
    (UnityEngine_Bounds_o *)&v32,
    cachedTransform,
    this->fields.target,
    0);
  v31 = *(_QWORD *)&v32.fields.m01;
  *(_OWORD *)&this->fields.mBounds.fields.m_Center.fields.x = *(_OWORD *)&v32.fields.m00;
  *(_QWORD *)&this->fields.mBounds.fields.m_Extents.fields.y = v31;
}


UnityEngine_Vector3_o UIDragObject__get_dragMovement(UIDragObject_o *this, const MethodInfo *method)
{
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  result.fields.x = this->fields.scale.fields.x;
  result.fields.y = this->fields.scale.fields.y;
  result.fields.z = this->fields.scale.fields.z;
  return result;
}


void UIDragObject__set_dragMovement(UIDragObject_o *this, UnityEngine_Vector3_o value, const MethodInfo *method)
{
  this->fields.scale = value;
}