void UIDragObject___ctor(UIDragObject_o *this, const MethodInfo *method)
{
  UnityEngine_Vector3_c *v3; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  __int64 v5; // d1
  float z; // s2
  struct UnityEngine_Vector3_StaticFields *v7; // x9
  struct UnityEngine_Vector3_StaticFields *v8; // x8

  if ( !byte_4D2A139 )
  {
    sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A139 = 1;
  }
  v3 = UnityEngine_Vector3_TypeInfo;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v5 = *(_QWORD *)&static_fields->zeroVector.fields.x;
  z = static_fields->zeroVector.fields.z;
  *(_OWORD *)&this->fields.momentumAmount = xmmword_D01FB0;
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
  double x; // d11
  double v7; // d0
  double v8; // d0
  double v9; // d1
  double v10; // d1
  float v11; // s9
  double y; // d11
  double v13; // d0
  double v14; // d0
  double v15; // d1
  double v16; // d1
  float v17; // s10
  double z; // d11
  double v19; // d0
  double v20; // d0
  double v21; // d1
  double v22; // d1
  UnityEngine_Object_o *v23; // x20
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_Vector3_c *v25; // x8
  struct UnityEngine_Vector3_StaticFields *v26; // x9
  float v27; // s1
  struct UnityEngine_Vector3_StaticFields *v28; // x8
  float v29; // s1
  float v30; // s0
  float v31; // s1
  float v32; // s2
  double iptr; // [xsp+28h] [xbp-28h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:kr00_12.12
  UnityEngine_Vector3_o position; // 0:kr14_12.12
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D35091 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D35091 = 1;
  }
  target = (UnityEngine_Object_o *)this->fields.target;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(target, 0, 0) )
    goto LABEL_60;
  v5 = this->fields.target;
  if ( !v5 )
    goto LABEL_71;
  localPosition = UnityEngine_Transform__get_localPosition(v5, 0);
  if ( !byte_4D2A83C )
  {
    sub_1C93AD4(&System_Math_TypeInfo);
    byte_4D2A83C = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  x = localPosition.fields.x;
  v7 = modf(localPosition.fields.x, &iptr);
  if ( localPosition.fields.x >= 0.0 )
  {
    if ( v7 != 0.5 )
    {
      v8 = floor(x + 0.5);
      goto LABEL_21;
    }
    v8 = iptr;
    v9 = 1.0;
  }
  else
  {
    if ( v7 != -0.5 )
    {
      v8 = ceil(x + -0.5);
      goto LABEL_21;
    }
    v8 = iptr;
    v9 = -1.0;
  }
  v10 = v8 + v9;
  if ( ((__int64)v8 & 1) != 0 )
    v8 = v10;
LABEL_21:
  if ( v8 == INFINITY )
    v11 = -2147500000.0;
  else
    v11 = (float)(int)v8;
  if ( !byte_4D2A83C )
  {
    sub_1C93AD4(&System_Math_TypeInfo);
    byte_4D2A83C = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  y = localPosition.fields.y;
  v13 = modf(localPosition.fields.y, &iptr);
  if ( localPosition.fields.y >= 0.0 )
  {
    if ( v13 != 0.5 )
    {
      v14 = floor(y + 0.5);
      goto LABEL_38;
    }
    v14 = iptr;
    v15 = 1.0;
  }
  else
  {
    if ( v13 != -0.5 )
    {
      v14 = ceil(y + -0.5);
      goto LABEL_38;
    }
    v14 = iptr;
    v15 = -1.0;
  }
  v16 = v14 + v15;
  if ( ((__int64)v14 & 1) != 0 )
    v14 = v16;
LABEL_38:
  if ( v14 == INFINITY )
    v17 = -2147500000.0;
  else
    v17 = (float)(int)v14;
  if ( !byte_4D2A83C )
  {
    sub_1C93AD4(&System_Math_TypeInfo);
    byte_4D2A83C = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  z = localPosition.fields.z;
  v19 = modf(localPosition.fields.z, &iptr);
  if ( localPosition.fields.z >= 0.0 )
  {
    if ( v19 == 0.5 )
    {
      v20 = iptr;
      v21 = 1.0;
LABEL_50:
      v22 = v20 + v21;
      if ( ((__int64)v20 & 1) != 0 )
        v20 = v22;
      goto LABEL_55;
    }
    v20 = floor(z + 0.5);
  }
  else
  {
    if ( v19 == -0.5 )
    {
      v20 = iptr;
      v21 = -1.0;
      goto LABEL_50;
    }
    v20 = ceil(z + -0.5);
  }
LABEL_55:
  v5 = this->fields.target;
  if ( !v5 )
    goto LABEL_71;
  if ( v20 == INFINITY )
    v36.fields.z = -2147500000.0;
  else
    v36.fields.z = (float)(int)v20;
  v36.fields.x = v11;
  v36.fields.y = v17;
  UnityEngine_Transform__set_localPosition(v5, v36, 0);
LABEL_60:
  v23 = (UnityEngine_Object_o *)this->fields.target;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v23, 0, 0) )
  {
    v5 = this->fields.target;
    if ( v5 )
    {
      position = UnityEngine_Transform__get_position(v5, 0);
      v30 = position.fields.x;
      v31 = position.fields.y;
      v32 = position.fields.z;
      goto LABEL_68;
    }
LABEL_71:
    sub_1C93D2C(v5, v4);
  }
  if ( !byte_4D2A139 )
  {
    sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A139 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v30 = static_fields->zeroVector.fields.x;
  v31 = static_fields->zeroVector.fields.y;
  v32 = static_fields->zeroVector.fields.z;
LABEL_68:
  this->fields.mTargetPos.fields.x = v30;
  this->fields.mTargetPos.fields.y = v31;
  this->fields.mTargetPos.fields.z = v32;
  if ( !byte_4D2A139 )
  {
    sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A139 = 1;
  }
  v25 = UnityEngine_Vector3_TypeInfo;
  v26 = UnityEngine_Vector3_TypeInfo->static_fields;
  v27 = v26->zeroVector.fields.z;
  *(_QWORD *)&this->fields.mMomentum.fields.x = *(_QWORD *)&v26->zeroVector.fields.x;
  this->fields.mMomentum.fields.z = v27;
  v28 = v25->static_fields;
  v29 = v28->zeroVector.fields.z;
  *(_QWORD *)&this->fields.mScroll.fields.x = *(_QWORD *)&v28->zeroVector.fields.x;
  this->fields.mScroll.fields.z = v29;
}


void UIDragObject__CancelSpring(UIDragObject_o *this, const MethodInfo *method)
{
  struct UnityEngine_Transform_o *target; // x0
  Il2CppObject *Component_object; // x19

  if ( (byte_4D35092 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_SpringPosition___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D35092 = 1;
  }
  target = this->fields.target;
  if ( !target )
    goto LABEL_10;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)target,
                       (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_SpringPosition___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    sub_1C93D2C(target, method);
  }
}


void UIDragObject__FindPanel(UIDragObject_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x20
  bool v4; // w0
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  struct UIPanel_o *v11; // x1
  UnityEngine_Component_o *transform; // x0
  UnityEngine_Transform_o *parent; // x20
  UnityEngine_Object_o *panelRegion; // x20

  if ( (byte_4D3508B & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&UIPanel_TypeInfo);
    byte_4D3508B = 1;
  }
  target = (UnityEngine_Object_o *)this->fields.target;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(target, 0, 0);
  v11 = 0;
  if ( v4 )
  {
    transform = (UnityEngine_Component_o *)this->fields.target;
    if ( !transform || (transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0)) == 0 )
      sub_1C93D2C(transform, v11);
    parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0);
    if ( !UIPanel_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UIPanel_TypeInfo);
    v11 = UIPanel__Find(parent, 0);
  }
  this->fields.panelRegion = v11;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.panelRegion, (int32_t)v11, v5, v6, v7, v8, v9, v10);
  panelRegion = (UnityEngine_Object_o *)this->fields.panelRegion;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(panelRegion, 0, 0) )
    this->fields.restrictWithinPanel = 0;
}


void UIDragObject__LateUpdate(UIDragObject_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x20
  float deltaTime; // s8
  float32x2_t v5; // d0
  float z; // s9
  float v7; // s1
  float v8; // s10
  float y; // s9
  float x; // s11
  float v11; // s10
  UnityEngine_Object_o *panelRegion; // x21
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x1
  UnityEngine_Object_o *v15; // x21
  const MethodInfo *v16; // x1
  __int64 v17; // x1
  UIPanel_o *v18; // x0
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x1
  float v21; // s10
  float v22; // s11
  float v23; // s8
  unsigned __int32 from; // [xsp+0h] [xbp-70h]
  UnityEngine_Vector3_o v25; // 0:kr40_12.12
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D35090 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D35090 = 1;
  }
  target = (UnityEngine_Object_o *)this->fields.target;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(target, 0, 0) )
  {
    deltaTime = RealTime__get_deltaTime(0);
    v5.n64_u64[0] = *(unsigned __int64 *)&this->fields.mScroll.fields.x;
    z = this->fields.mScroll.fields.z;
    v7 = this->fields.mMomentum.fields.z - z;
    *(float32x2_t *)&this->fields.mMomentum.fields.x = vsub_f32(*(float32x2_t *)&this->fields.mMomentum.fields.x, v5);
    this->fields.mMomentum.fields.z = v7;
    v8 = v5.n64_f32[1];
    if ( !byte_4D2A139 )
    {
      from = v5.n64_u32[0];
      sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
      v5.n64_u32[0] = from;
      byte_4D2A139 = 1;
    }
    LODWORD(v25.fields.x) = v5.n64_u32[0];
    v25.fields.y = v8;
    v25.fields.z = z;
    this->fields.mScroll = NGUIMath__SpringLerp_50025236(
                             v25,
                             UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
                             20.0,
                             deltaTime,
                             0);
    if ( !byte_4D2A13B )
    {
      sub_1C93AD4(&System_Math_TypeInfo);
      byte_4D2A13B = 1;
    }
    x = this->fields.mMomentum.fields.x;
    y = this->fields.mMomentum.fields.y;
    v11 = this->fields.mMomentum.fields.z;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    if ( sqrtf((float)((float)(x * x) + (float)(y * y)) + (float)(v11 * v11)) >= 0.0001 )
    {
      if ( this->fields.mPressed )
      {
        NGUIMath__SpringDampen(&this->fields.mMomentum, 9.0, deltaTime, 0);
      }
      else
      {
        panelRegion = (UnityEngine_Object_o *)this->fields.panelRegion;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality(panelRegion, 0, 0) )
          UIDragObject__FindPanel(this, v13);
        v26 = NGUIMath__SpringDampen(&this->fields.mMomentum, 9.0, deltaTime, 0);
        UIDragObject__Move(this, v26, v14);
        if ( this->fields.restrictWithinPanel )
        {
          v15 = (UnityEngine_Object_o *)this->fields.panelRegion;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(v15, 0, 0) )
          {
            UIDragObject__UpdateBounds(this, v16);
            v18 = this->fields.panelRegion;
            if ( !v18 )
              sub_1C93D2C(0, v17);
            if ( UIPanel__ConstrainTargetToBounds(
                   v18,
                   this->fields.target,
                   &this->fields.mBounds,
                   this->fields.dragEffect == 0,
                   0) )
            {
              UIDragObject__CancelMovement(this, v19);
            }
            else
            {
              UIDragObject__CancelSpring(this, v19);
            }
          }
        }
        NGUIMath__SpringDampen(&this->fields.mMomentum, 9.0, deltaTime, 0);
        if ( !byte_4D2A13B )
        {
          sub_1C93AD4(&System_Math_TypeInfo);
          byte_4D2A13B = 1;
        }
        v22 = this->fields.mMomentum.fields.x;
        v21 = this->fields.mMomentum.fields.y;
        v23 = this->fields.mMomentum.fields.z;
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        if ( sqrtf((float)((float)(v22 * v22) + (float)(v21 * v21)) + (float)(v23 * v23)) < 0.0001 )
          UIDragObject__CancelMovement(this, v20);
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
  float v14; // s1
  UnityEngine_Transform_o *target; // x19
  __int64 v16; // x8
  float v17; // s0
  float v18; // s1
  float v19; // s10
  double v20; // d0
  double v21; // d0
  float v22; // s1
  __int64 v23; // x8
  float v24; // s0
  Il2CppObject *Component_object; // x19
  double iptr; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:kr00_12.12
  UnityEngine_Vector3_o position; // 0:kr14_12.12
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4

  z = worldDelta.fields.z;
  y = worldDelta.fields.y;
  x = worldDelta.fields.x;
  if ( (byte_4D3508F & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_UIScrollView___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D3508F = 1;
  }
  panelRegion = (UnityEngine_Object_o *)this->fields.panelRegion;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(panelRegion, 0, 0);
  if ( ((unsigned __int8)v8 & 1) == 0 )
  {
    target = this->fields.target;
    if ( target )
    {
      position = UnityEngine_Transform__get_position(target, 0);
      v30.fields.y = y + position.fields.y;
      v30.fields.z = z + position.fields.z;
      v30.fields.x = x + position.fields.x;
      UnityEngine_Transform__set_position(target, v30, 0);
      return;
    }
    goto LABEL_38;
  }
  v8 = this->fields.target;
  v29.fields.x = x + this->fields.mTargetPos.fields.x;
  v29.fields.y = y + this->fields.mTargetPos.fields.y;
  v29.fields.z = z + this->fields.mTargetPos.fields.z;
  this->fields.mTargetPos = v29;
  if ( !v8 )
    goto LABEL_38;
  UnityEngine_Transform__set_position(v8, v29, 0);
  v8 = this->fields.target;
  if ( !v8 )
    goto LABEL_38;
  localPosition = UnityEngine_Transform__get_localPosition(v8, 0);
  v12 = modf(localPosition.fields.x, &iptr);
  if ( localPosition.fields.x >= 0.0 )
  {
    if ( v12 != 0.5 )
    {
      v19 = floorf(localPosition.fields.x + 0.5);
      goto LABEL_20;
    }
    v13 = iptr;
    v14 = 1.0;
  }
  else
  {
    if ( v12 != -0.5 )
    {
      v19 = ceilf(localPosition.fields.x + -0.5);
      goto LABEL_20;
    }
    v13 = iptr;
    v14 = -1.0;
  }
  v16 = (__int64)v13;
  v17 = v13;
  v18 = v17 + v14;
  if ( (v16 & 1) != 0 )
    v19 = v18;
  else
    v19 = v17;
LABEL_20:
  v20 = modf(localPosition.fields.y, &iptr);
  if ( localPosition.fields.y >= 0.0 )
  {
    if ( v20 != 0.5 )
    {
      v31.fields.y = floorf(localPosition.fields.y + 0.5);
      goto LABEL_30;
    }
    v21 = iptr;
    v22 = 1.0;
  }
  else
  {
    if ( v20 != -0.5 )
    {
      v31.fields.y = ceilf(localPosition.fields.y + -0.5);
      goto LABEL_30;
    }
    v21 = iptr;
    v22 = -1.0;
  }
  v23 = (__int64)v21;
  v24 = v21;
  v31.fields.y = v24 + v22;
  if ( (v23 & 1) == 0 )
    v31.fields.y = v24;
LABEL_30:
  v8 = this->fields.target;
  if ( !v8 )
    goto LABEL_38;
  v31.fields.x = v19;
  v31.fields.z = localPosition.fields.z;
  UnityEngine_Transform__set_localPosition(v8, v31, 0);
  v8 = (UnityEngine_Transform_o *)this->fields.panelRegion;
  if ( !v8 )
    goto LABEL_38;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)v8,
                       (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_UIScrollView___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    sub_1C93D2C(v8, v9);
  }
}


void UIDragObject__OnDisable(UIDragObject_o *this, const MethodInfo *method)
{
  this->fields.mStarted = 0;
}


void UIDragObject__OnDrag(UIDragObject_o *this, UnityEngine_Vector2_o delta, const MethodInfo *method)
{
  int32_t mTouchID; // w20
  UICamera_c *v5; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  UnityEngine_Object_o *target; // x20
  __int64 v8; // x1
  UnityEngine_Camera_o *panelRegion; // x0
  intptr_t m_CachedPtr; // x9
  __int64 v11; // x8
  float z; // s9
  float x; // s8
  float y; // s15
  float m_Distance; // s10
  float v16; // s14
  __int64 v17; // kr70_8
  float v18; // s12
  struct UnityEngine_Mathf_StaticFields *static_fields; // x8
  float v20; // s0
  float v21; // s0
  float32x2_t v22; // d3
  _BOOL4 mStarted; // w8
  float v24; // s4
  float32x2_t v25; // d0
  float v26; // s8
  struct UnityEngine_Vector3_StaticFields *v27; // x8
  int8x8_t v28; // d2
  float v29; // s2
  float v30; // s1
  const MethodInfo *v31; // x1
  float v32; // s8
  float v33; // s12
  float v34; // s13
  int32_t dragEffect; // w8
  const MethodInfo *v36; // x1
  float32x2_t v37; // d0
  unsigned __int64 worldDelta; // [xsp+0h] [xbp-B0h]
  UnityEngine_Ray_o v39; // [xsp+18h] [xbp-98h] BYREF
  UnityEngine_Ray_o v40; // [xsp+30h] [xbp-80h] BYREF
  UnityEngine_Vector3_o Point; // 0:kr00_12.12
  UnityEngine_Vector3_o v42; // 0:kr14_12.12
  UnityEngine_Vector3_o v43; // 0:kr20_12.12
  UnityEngine_Vector3_o localPosition; // 0:kr34_12.12
  UnityEngine_Vector3_o v45; // 0:kr40_12.12
  UnityEngine_Vector3_o v46; // 0:kr54_12.12
  UnityEngine_Vector3_o v47; // 0:kr60_12.12
  UnityEngine_Vector3_o v48; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v49; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D3508E & 1) == 0 )
  {
    sub_1C93AD4(&NGUITools_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&UICamera_TypeInfo);
    byte_4D3508E = 1;
  }
  memset(&v40, 0, sizeof(v40));
  if ( this->fields.mPressed )
  {
    mTouchID = this->fields.mTouchID;
    v5 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v5 = UICamera_TypeInfo;
    }
    if ( mTouchID == v5->static_fields->currentTouchID
      && UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !NGUITools_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
      if ( NGUITools__GetActive_50071416(gameObject, 0) )
      {
        target = (UnityEngine_Object_o *)this->fields.target;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(target, 0, 0) )
        {
          panelRegion = (UnityEngine_Camera_o *)UICamera_TypeInfo;
          if ( !UICamera_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
            panelRegion = (UnityEngine_Camera_o *)UICamera_TypeInfo;
          }
          m_CachedPtr = panelRegion[7].fields.m_CachedPtr;
          v11 = *(_QWORD *)(m_CachedPtr + 160);
          if ( !v11 )
            goto LABEL_43;
          *(_DWORD *)(v11 + 96) = 2;
          panelRegion = *(UnityEngine_Camera_o **)(m_CachedPtr + 136);
          if ( !panelRegion )
            goto LABEL_43;
          v48.fields.x = *(float *)(v11 + 16);
          v48.fields.y = *(float *)(v11 + 20);
          v48.fields.z = 0.0;
          UnityEngine_Camera__ScreenPointToRay_71924968(&v39, panelRegion, v48, 0);
          v40 = v39;
          z = v39.fields.m_Origin.fields.z;
          x = this->fields.mPlane.fields.m_Normal.fields.x;
          y = this->fields.mPlane.fields.m_Normal.fields.y;
          v16 = this->fields.mPlane.fields.m_Normal.fields.z;
          m_Distance = this->fields.mPlane.fields.m_Distance;
          v17 = *(_QWORD *)&v39.fields.m_Origin.fields.x;
          v18 = (float)(v39.fields.m_Direction.fields.z * v16)
              + (float)((float)(v39.fields.m_Direction.fields.x * x) + (float)(v39.fields.m_Direction.fields.y * y));
          if ( !byte_4D2A13D )
          {
            sub_1C93AD4(&UnityEngine_Mathf_TypeInfo);
            byte_4D2A13D = 1;
          }
          static_fields = UnityEngine_Mathf_TypeInfo->static_fields;
          v20 = fmaxf(fabsf(v18), 0.0) * 0.000001;
          if ( v20 <= (float)(static_fields->Epsilon * 8.0) )
            v20 = static_fields->Epsilon * 8.0;
          if ( vabds_f32(0.0, v18) >= v20 )
          {
            v21 = (float)((float)-(float)((float)(z * v16)
                                        + (float)((float)(*(float *)&v17 * x) + (float)(*((float *)&v17 + 1) * y)))
                        - m_Distance)
                / v18;
            if ( v21 > 0.0 )
            {
              Point = UnityEngine_Ray__GetPoint(&v40, v21, 0);
              v37.n64_u32[0] = LODWORD(Point.fields.x);
              v22.n64_u64[0] = *(unsigned __int64 *)&this->fields.mLastPos.fields.x;
              mStarted = this->fields.mStarted;
              v24 = this->fields.mLastPos.fields.z;
              this->fields.mLastPos = Point;
              if ( mStarted )
              {
                v37.n64_u32[1] = LODWORD(Point.fields.y);
                v25.n64_u64[0] = vsub_f32(v37, v22).n64_u64[0];
                v26 = Point.fields.z - v24;
              }
              else
              {
                this->fields.mStarted = 1;
                if ( !byte_4D2A139 )
                {
                  sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
                  byte_4D2A139 = 1;
                }
                v27 = UnityEngine_Vector3_TypeInfo->static_fields;
                v25.n64_u64[0] = *(unsigned __int64 *)&v27->zeroVector.fields.x;
                v26 = v27->zeroVector.fields.z;
              }
              v28.n64_u64[0] = vceqz_f32(v25).n64_u64[0];
              if ( (vand_s8(vdup_lane_s32(v28, 1), v28).n64_u8[0] & 1) == 0 )
              {
                panelRegion = (UnityEngine_Camera_o *)this->fields.target;
                if ( !panelRegion )
                  goto LABEL_43;
                *(float32x2_t *)&v46.fields.x = v25;
                v46.fields.z = v26;
                v42 = UnityEngine_Transform__InverseTransformDirection((UnityEngine_Transform_o *)panelRegion, v46, 0);
                panelRegion = (UnityEngine_Camera_o *)this->fields.target;
                if ( !panelRegion )
                  goto LABEL_43;
                v49.fields.z = v42.fields.z * this->fields.scale.fields.z;
                v49.fields.y = v42.fields.y * this->fields.scale.fields.y;
                v49.fields.x = v42.fields.x * this->fields.scale.fields.x;
                v43 = UnityEngine_Transform__TransformDirection((UnityEngine_Transform_o *)panelRegion, v49, 0);
                v25.n64_u64[0] = *(unsigned __int64 *)&v43.fields.x;
                v26 = v43.fields.z;
              }
              if ( this->fields.dragEffect )
              {
                v29 = this->fields.momentumAmount * 0.01;
                v30 = this->fields.mMomentum.fields.z
                    + (float)((float)((float)(this->fields.mMomentum.fields.z + (float)(v26 * v29))
                                    - this->fields.mMomentum.fields.z)
                            * 0.67);
                *(float32x2_t *)&this->fields.mMomentum.fields.x = vadd_f32(
                                                                     *(float32x2_t *)&this->fields.mMomentum.fields.x,
                                                                     vmul_f32(
                                                                       vsub_f32(
                                                                         vadd_f32(
                                                                           *(float32x2_t *)&this->fields.mMomentum.fields.x,
                                                                           vmul_n_f32(v25, v29)),
                                                                         *(float32x2_t *)&this->fields.mMomentum.fields.x),
                                                                       vdup_n_s32(0x3F2B851Fu)));
                this->fields.mMomentum.fields.z = v30;
              }
              panelRegion = (UnityEngine_Camera_o *)this->fields.target;
              worldDelta = v25.n64_u64[0];
              if ( panelRegion )
              {
                localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)panelRegion, 0);
                *(_QWORD *)&v47.fields.x = worldDelta;
                v47.fields.z = v26;
                UIDragObject__Move(this, v47, v31);
                if ( !this->fields.restrictWithinPanel )
                  return;
                panelRegion = (UnityEngine_Camera_o *)this->fields.target;
                if ( panelRegion )
                {
                  v33 = this->fields.mBounds.fields.m_Center.fields.y;
                  v32 = this->fields.mBounds.fields.m_Center.fields.z;
                  v34 = this->fields.mBounds.fields.m_Center.fields.x;
                  v45 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)panelRegion, 0);
                  dragEffect = this->fields.dragEffect;
                  this->fields.mBounds.fields.m_Center.fields.x = v34 + (float)(v45.fields.x - localPosition.fields.x);
                  this->fields.mBounds.fields.m_Center.fields.y = v33 + (float)(v45.fields.y - localPosition.fields.y);
                  this->fields.mBounds.fields.m_Center.fields.z = v32 + (float)(v45.fields.z - localPosition.fields.z);
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
                      UIDragObject__CancelMovement(this, v36);
                    }
                    return;
                  }
                }
              }
LABEL_43:
              sub_1C93D2C(panelRegion, v8);
            }
          }
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
  GrandQuestFolderBoardItem_o *p_contentRect; // x20
  UnityEngine_Object_o *contentRect; // x21
  UnityEngine_Object_o *target; // x21
  __int64 v9; // x1
  UnityEngine_Component_o *v10; // x0
  Il2CppObject *Component_object; // x19
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7

  if ( (byte_4D3508A & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Application_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D3508A = 1;
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
  p_contentRect = (GrandQuestFolderBoardItem_o *)&this->fields.contentRect;
  contentRect = (UnityEngine_Object_o *)this->fields.contentRect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(contentRect, 0, 0) )
  {
    target = (UnityEngine_Object_o *)this->fields.target;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(target, 0, 0) )
    {
      if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
      if ( UnityEngine_Application__get_isPlaying(0) )
      {
        v10 = (UnityEngine_Component_o *)this->fields.target;
        if ( !v10 )
          sub_1C93D2C(0, v9);
        Component_object = UnityEngine_Component__GetComponent_object_(
                             v10,
                             (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_UIWidget___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
        {
          p_contentRect->klass = (GrandQuestFolderBoardItem_c *)Component_object;
          sub_1C93A78(p_contentRect, (int32_t)Component_object, v12, v13, v14, v15, v16, v17);
        }
      }
    }
  }
}


void UIDragObject__OnPress(UIDragObject_o *this, bool pressed, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x21
  UnityEngine_Object_o *target; // x21
  const MethodInfo *v7; // x1
  UICamera_c *v8; // x0
  int32_t currentTouchID; // w8
  const MethodInfo *v10; // x1
  UnityEngine_Object_o *panelRegion; // x20
  UICamera_c *v12; // x0
  UnityEngine_Component_o *currentCamera; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *v15; // x21
  UnityEngine_Transform_o *v16; // x20
  int32_t mTouchID; // w20
  UICamera_c *v18; // x0
  _BOOL4 restrictWithinPanel; // w8
  const MethodInfo *v20; // x1
  UICamera_c *v21; // x0
  float *static_fields; // x8
  float v23; // s11
  float v24; // s12
  float v25; // s13
  float v26; // s2
  float x; // s0
  float y; // s1
  float z; // s2
  struct UnityEngine_Vector3_StaticFields *v30; // x8
  UnityEngine_Vector3_o v31; // 0:kr10_12.12
  UnityEngine_Quaternion_o rotation; // 0:kr00_16.16

  if ( (byte_4D3508D & 1) == 0 )
  {
    sub_1C93AD4(&NGUITools_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&UICamera_TypeInfo);
    byte_4D3508D = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    if ( NGUITools__GetActive_50071416(gameObject, 0) )
    {
      target = (UnityEngine_Object_o *)this->fields.target;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(target, 0, 0) )
      {
        if ( pressed )
        {
          if ( !this->fields.mPressed )
          {
            v8 = UICamera_TypeInfo;
            if ( !UICamera_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
              v8 = UICamera_TypeInfo;
            }
            currentTouchID = v8->static_fields->currentTouchID;
            *(_WORD *)&this->fields.mStarted = 256;
            this->fields.mTouchID = currentTouchID;
            UIDragObject__CancelMovement(this, v7);
            if ( this->fields.restrictWithinPanel )
            {
              panelRegion = (UnityEngine_Object_o *)this->fields.panelRegion;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Equality(panelRegion, 0, 0) )
                UIDragObject__FindPanel(this, v10);
              if ( this->fields.restrictWithinPanel )
                UIDragObject__UpdateBounds(this, v10);
            }
            UIDragObject__CancelSpring(this, v10);
            v12 = UICamera_TypeInfo;
            if ( !UICamera_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
              v12 = UICamera_TypeInfo;
            }
            currentCamera = (UnityEngine_Component_o *)v12->static_fields->currentCamera;
            if ( !currentCamera )
LABEL_55:
              sub_1C93D2C(currentCamera, v7);
            transform = UnityEngine_Component__get_transform(currentCamera, 0);
            v15 = (UnityEngine_Object_o *)this->fields.panelRegion;
            v16 = transform;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            currentCamera = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v15, 0, 0);
            if ( ((unsigned __int8)currentCamera & 1) != 0 )
            {
              currentCamera = (UnityEngine_Component_o *)this->fields.panelRegion;
              if ( !currentCamera )
                goto LABEL_55;
              currentCamera = (UnityEngine_Component_o *)UIRect__get_cachedTransform((UIRect_o *)currentCamera, 0);
              v16 = (UnityEngine_Transform_o *)currentCamera;
              if ( !currentCamera )
                goto LABEL_55;
            }
            else if ( !v16 )
            {
              goto LABEL_55;
            }
            rotation = UnityEngine_Transform__get_rotation(v16, 0);
            if ( !byte_4D2D067 )
            {
              sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
              byte_4D2D067 = 1;
            }
            v31 = UnityEngine_Quaternion__op_Multiply_72058644(
                    rotation,
                    UnityEngine_Vector3_TypeInfo->static_fields->backVector,
                    0);
            v21 = UICamera_TypeInfo;
            if ( !UICamera_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
              v21 = UICamera_TypeInfo;
            }
            static_fields = (float *)v21->static_fields;
            v24 = static_fields[17];
            v23 = static_fields[18];
            v25 = static_fields[19];
            if ( !byte_4D2A13C )
            {
              sub_1C93AD4(&System_Math_TypeInfo);
              byte_4D2A13C = 1;
            }
            if ( !System_Math_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
            v26 = sqrtf(
                    (float)(v31.fields.z * v31.fields.z)
                  + (float)((float)(v31.fields.x * v31.fields.x) + (float)(v31.fields.y * v31.fields.y)));
            if ( v26 <= 0.00001 )
            {
              if ( !byte_4D2A139 )
              {
                sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
                byte_4D2A139 = 1;
              }
              v30 = UnityEngine_Vector3_TypeInfo->static_fields;
              x = v30->zeroVector.fields.x;
              y = v30->zeroVector.fields.y;
              z = v30->zeroVector.fields.z;
            }
            else
            {
              x = v31.fields.x / v26;
              y = v31.fields.y / v26;
              z = v31.fields.z / v26;
            }
            this->fields.mPlane.fields.m_Normal.fields.x = x;
            this->fields.mPlane.fields.m_Normal.fields.y = y;
            this->fields.mPlane.fields.m_Normal.fields.z = z;
            this->fields.mPlane.fields.m_Distance = -(float)((float)(v25 * z)
                                                           + (float)((float)(v24 * x) + (float)(v23 * y)));
          }
        }
        else if ( this->fields.mPressed )
        {
          mTouchID = this->fields.mTouchID;
          v18 = UICamera_TypeInfo;
          if ( !UICamera_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
            v18 = UICamera_TypeInfo;
          }
          if ( mTouchID == v18->static_fields->currentTouchID )
          {
            restrictWithinPanel = this->fields.restrictWithinPanel;
            this->fields.mPressed = 0;
            if ( restrictWithinPanel && this->fields.dragEffect == 2 )
            {
              currentCamera = (UnityEngine_Component_o *)this->fields.panelRegion;
              if ( !currentCamera )
                goto LABEL_55;
              if ( UIPanel__ConstrainTargetToBounds(
                     (UIPanel_o *)currentCamera,
                     this->fields.target,
                     &this->fields.mBounds,
                     0,
                     0) )
              {
                UIDragObject__CancelMovement(this, v20);
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
  UnityEngine_GameObject_o *gameObject; // x20
  float v6; // s1

  if ( (byte_4D35093 & 1) == 0 )
  {
    sub_1C93AD4(&NGUITools_TypeInfo);
    byte_4D35093 = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    if ( NGUITools__GetActive_50071416(gameObject, 0) )
    {
      v6 = this->fields.mScroll.fields.z - (float)((float)(delta * 0.05) * this->fields.scrollMomentum.fields.z);
      *(float32x2_t *)&this->fields.mScroll.fields.x = vsub_f32(
                                                         *(float32x2_t *)&this->fields.mScroll.fields.x,
                                                         vmul_n_f32(
                                                           *(float32x2_t *)&this->fields.scrollMomentum.fields.x,
                                                           delta * 0.05));
      this->fields.mScroll.fields.z = v6;
    }
  }
}


void UIDragObject__UpdateBounds(UIDragObject_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *contentRect; // x20
  __int64 cachedTransform; // x0
  __int64 v5; // x1
  char v6; // w20
  unsigned __int32 v7; // w8
  float32x2_t *v8; // x20
  unsigned __int64 v9; // x21
  __int64 v10; // x22
  float32x2_t v11; // d8
  float v12; // s9
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  float *v14; // x8
  float32x2_t v15; // d2
  float z; // s4
  unsigned __int64 v17; // x9
  float32x2_t v18; // d3
  float v19; // s2
  int8x8_t v20; // d4
  float v21; // t1
  float v22; // s5
  float v23; // s7
  int8x8_t v24; // d6
  int8x8_t v25; // d3
  float v26; // s2
  int8x8_t v27; // d16
  int8x8_t v28; // d17
  float32x2_t v29; // d6
  float32x2_t v30; // d3
  __int128 v31; // q0
  UnityEngine_Bounds_o v32; // [xsp+8h] [xbp-D8h] BYREF
  UnityEngine_Matrix4x4_o v33; // [xsp+20h] [xbp-C0h] BYREF
  UnityEngine_Matrix4x4_o v34; // [xsp+60h] [xbp-80h] BYREF
  UnityEngine_Vector3_o v35; // 0:kr00_12.12

  if ( (byte_4D3508C & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D3508C = 1;
  }
  memset(&v34, 0, sizeof(v34));
  contentRect = (UnityEngine_Object_o *)this->fields.contentRect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  cachedTransform = UnityEngine_Object__op_Implicit(contentRect, 0);
  if ( !this->fields.panelRegion )
    goto LABEL_27;
  v6 = cachedTransform;
  cachedTransform = (__int64)UIRect__get_cachedTransform((UIRect_o *)this->fields.panelRegion, 0);
  if ( (v6 & 1) != 0 )
  {
    if ( cachedTransform )
    {
      UnityEngine_Transform__get_worldToLocalMatrix(&v33, (UnityEngine_Transform_o *)cachedTransform, 0);
      v34 = v33;
      cachedTransform = (__int64)this->fields.contentRect;
      if ( cachedTransform )
      {
        cachedTransform = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)cachedTransform + 488LL))(
                            cachedTransform,
                            *(_QWORD *)(*(_QWORD *)cachedTransform + 496LL));
        if ( cachedTransform )
        {
          v7 = *(_DWORD *)(cachedTransform + 24);
          v8 = (float32x2_t *)cachedTransform;
          v9 = 0;
          v10 = cachedTransform + 40;
          do
          {
            if ( v9 >= v7 )
              goto LABEL_26;
            v35 = UnityEngine_Matrix4x4__MultiplyPoint3x4(&v34, *(UnityEngine_Vector3_o *)(v10 - 8), 0);
            if ( v9 >= v8[3].n64_u32[0] )
              goto LABEL_26;
            *(UnityEngine_Vector3_o *)(v10 - 8) = v35;
            v10 += 12;
            v7 = v8[3].n64_u32[0];
            ++v9;
          }
          while ( v9 != 4 );
          if ( v7 )
          {
            v11.n64_u64[0] = v8[4].n64_u64[0];
            v12 = v8[5].n64_f32[0];
            if ( !byte_4D2A139 )
            {
              cachedTransform = sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
              byte_4D2A139 = 1;
            }
            static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
            v14 = (float *)&v8[6] + 1;
            v15.n64_u64[0] = *(unsigned __int64 *)&static_fields->zeroVector.fields.x;
            z = static_fields->zeroVector.fields.z;
            v17 = 1;
            *(float32x2_t *)&this->fields.mBounds.fields.m_Center.fields.x = v11;
            v18.n64_u64[0] = vmul_f32(v15, (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
            v19 = z * 0.5;
            this->fields.mBounds.fields.m_Center.fields.z = v12;
            *(float32x2_t *)&this->fields.mBounds.fields.m_Extents.fields.x = v18;
            this->fields.mBounds.fields.m_Extents.fields.z = z * 0.5;
            while ( v17 < v8[3].n64_u32[0] )
            {
              v20.n64_u64[0] = *(_QWORD *)(v14 - 2);
              v21 = *v14;
              v14 += 3;
              v22 = v21;
              v23 = v12 - v19;
              v24.n64_u64[0] = vsub_f32(v11, v18).n64_u64[0];
              v25.n64_u64[0] = vadd_f32(v11, v18).n64_u64[0];
              v26 = v12 + v19;
              v27.n64_u64[0] = vcgt_f32(v20, v24).n64_u64[0];
              v28.n64_u64[0] = vcgt_f32(v25, v20).n64_u64[0];
              if ( v23 >= v21 )
                v23 = v22;
              v29.n64_u64[0] = vbsl_s8(v27, v24, v20).n64_u64[0];
              v30.n64_u64[0] = vbsl_s8(v28, v25, v20).n64_u64[0];
              if ( v26 <= v22 )
                v26 = v22;
              ++v17;
              v18.n64_u64[0] = vmul_f32(vsub_f32(v30, v29), (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
              v19 = (float)(v26 - v23) * 0.5;
              v11.n64_u64[0] = vadd_f32(v29, v18).n64_u64[0];
              v12 = v23 + v19;
              *(float32x2_t *)&this->fields.mBounds.fields.m_Extents.fields.x = v18;
              this->fields.mBounds.fields.m_Extents.fields.z = v19;
              *(float32x2_t *)&this->fields.mBounds.fields.m_Center.fields.x = v11;
              this->fields.mBounds.fields.m_Center.fields.z = v23 + v19;
              if ( v17 == 4 )
                return;
            }
          }
LABEL_26:
          sub_1C93D34(cachedTransform);
        }
      }
    }
LABEL_27:
    sub_1C93D2C(cachedTransform, v5);
  }
  NGUIMath__CalculateRelativeWidgetBounds_49948180(
    &v32,
    (UnityEngine_Transform_o *)cachedTransform,
    this->fields.target,
    0);
  v31 = *(_OWORD *)&v32.fields.m_Center.fields.x;
  *(UnityEngine_Bounds_o *)&v33.fields.m00 = v32;
  *(_QWORD *)&this->fields.mBounds.fields.m_Extents.fields.y = *(_QWORD *)&v32.fields.m_Extents.fields.y;
  *(_OWORD *)&this->fields.mBounds.fields.m_Center.fields.x = v31;
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