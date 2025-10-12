void UIDragObject___ctor(UIDragObject_o *this, const MethodInfo *method)
{
  UnityEngine_Vector3_c *v3; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  __int64 v5; // d1
  float z; // s2
  struct UnityEngine_Vector3_StaticFields *v7; // x9
  struct UnityEngine_Vector3_StaticFields *v8; // x8

  if ( !byte_4C313D1 )
  {
    sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
    byte_4C313D1 = 1;
  }
  v3 = UnityEngine_Vector3_TypeInfo;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v5 = *(_QWORD *)&static_fields->zeroVector.fields.x;
  z = static_fields->zeroVector.fields.z;
  *(_OWORD *)&this->fields.momentumAmount = xmmword_C0DF60;
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


// local variable allocation has failed, the output may be wrong!
void UIDragObject__CancelMovement(UIDragObject_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x20
  UnityEngine_Transform_o *v4; // x0
  float x; // s9
  float y; // s10
  float z; // s8
  double v8; // d11
  double v9; // d0
  double v10; // d0
  double v11; // d1
  double v12; // d1
  float v13; // s9
  double v14; // d11
  double v15; // d0
  double v16; // d0
  double v17; // d1
  double v18; // d1
  float v19; // s10
  double v20; // d11
  double v21; // d0
  double v22; // d0
  double v23; // d1
  double v24; // d1
  float v25; // s2 OVERLAPPED
  float v26; // s0
  float v27; // s1
  UnityEngine_Object_o *v28; // x20
  UnityEngine_Vector3_c *v29; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  float v31; // s1
  struct UnityEngine_Vector3_StaticFields *v32; // x8
  float v33; // s1
  double iptr; // [xsp+28h] [xbp-28h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3C015 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3C015 = 1;
  }
  target = (UnityEngine_Object_o *)this->fields.target;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(target, 0, 0) )
    goto LABEL_60;
  v4 = this->fields.target;
  if ( !v4 )
    goto LABEL_71;
  localPosition = UnityEngine_Transform__get_localPosition(v4, 0);
  x = localPosition.fields.x;
  y = localPosition.fields.y;
  z = localPosition.fields.z;
  if ( !byte_4C32B16 )
  {
    sub_1C32C20(&System_Math_TypeInfo);
    byte_4C32B16 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v8 = x;
  v9 = modf(x, &iptr);
  if ( x >= 0.0 )
  {
    if ( v9 != 0.5 )
    {
      v10 = floor(v8 + 0.5);
      goto LABEL_21;
    }
    v10 = iptr;
    v11 = 1.0;
  }
  else
  {
    if ( v9 != -0.5 )
    {
      v10 = ceil(v8 + -0.5);
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
  if ( !byte_4C32B16 )
  {
    sub_1C32C20(&System_Math_TypeInfo);
    byte_4C32B16 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v14 = y;
  v15 = modf(y, &iptr);
  if ( y >= 0.0 )
  {
    if ( v15 != 0.5 )
    {
      v16 = floor(v14 + 0.5);
      goto LABEL_38;
    }
    v16 = iptr;
    v17 = 1.0;
  }
  else
  {
    if ( v15 != -0.5 )
    {
      v16 = ceil(v14 + -0.5);
      goto LABEL_38;
    }
    v16 = iptr;
    v17 = -1.0;
  }
  v18 = v16 + v17;
  if ( ((__int64)v16 & 1) != 0 )
    v16 = v18;
LABEL_38:
  if ( v16 == INFINITY )
    v19 = -2147500000.0;
  else
    v19 = (float)(int)v16;
  if ( !byte_4C32B16 )
  {
    sub_1C32C20(&System_Math_TypeInfo);
    byte_4C32B16 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v20 = z;
  v21 = modf(z, &iptr);
  if ( z >= 0.0 )
  {
    if ( v21 == 0.5 )
    {
      v22 = iptr;
      v23 = 1.0;
LABEL_50:
      v24 = v22 + v23;
      if ( ((__int64)v22 & 1) != 0 )
        v22 = v24;
      goto LABEL_55;
    }
    v22 = floor(v20 + 0.5);
  }
  else
  {
    if ( v21 == -0.5 )
    {
      v22 = iptr;
      v23 = -1.0;
      goto LABEL_50;
    }
    v22 = ceil(v20 + -0.5);
  }
LABEL_55:
  v4 = this->fields.target;
  if ( !v4 )
    goto LABEL_71;
  if ( v22 == INFINITY )
    v25 = -2147500000.0;
  else
    v25 = (float)(int)v22;
  v26 = v13;
  v27 = v19;
  UnityEngine_Transform__set_localPosition(v4, *(UnityEngine_Vector3_o *)(&v25 - 2), 0);
LABEL_60:
  v28 = (UnityEngine_Object_o *)this->fields.target;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v28, 0, 0) )
  {
    v4 = this->fields.target;
    if ( v4 )
    {
      position = UnityEngine_Transform__get_position(v4, 0);
      goto LABEL_68;
    }
LABEL_71:
    sub_1C32E7C(v4);
  }
  if ( !byte_4C313D1 )
  {
    sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
    byte_4C313D1 = 1;
  }
  position = UnityEngine_Vector3_TypeInfo->static_fields->zeroVector;
LABEL_68:
  this->fields.mTargetPos = position;
  if ( !byte_4C313D1 )
  {
    sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
    byte_4C313D1 = 1;
  }
  v29 = UnityEngine_Vector3_TypeInfo;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v31 = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.mMomentum.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields.mMomentum.fields.z = v31;
  v32 = v29->static_fields;
  v33 = v32->zeroVector.fields.z;
  *(_QWORD *)&this->fields.mScroll.fields.x = *(_QWORD *)&v32->zeroVector.fields.x;
  this->fields.mScroll.fields.z = v33;
}


void UIDragObject__CancelSpring(UIDragObject_o *this, const MethodInfo *method)
{
  struct UnityEngine_Transform_o *target; // x0
  Il2CppObject *Component_object; // x19

  if ( (byte_4C3C016 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_SpringPosition___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3C016 = 1;
  }
  target = this->fields.target;
  if ( !target )
    goto LABEL_10;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)target,
                       (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_SpringPosition___);
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
    sub_1C32E7C(target);
  }
}


void UIDragObject__FindPanel(UIDragObject_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x20
  bool v4; // w0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  struct UIPanel_o *v7; // x1
  UnityEngine_Component_o *transform; // x0
  UnityEngine_Transform_o *parent; // x20
  UnityEngine_Object_o *panelRegion; // x20

  if ( (byte_4C3C00F & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&UIPanel_TypeInfo);
    byte_4C3C00F = 1;
  }
  target = (UnityEngine_Object_o *)this->fields.target;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(target, 0, 0);
  v7 = 0;
  if ( v4 )
  {
    transform = (UnityEngine_Component_o *)this->fields.target;
    if ( !transform || (transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0)) == 0 )
      sub_1C32E7C(transform);
    parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0);
    if ( !UIPanel_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UIPanel_TypeInfo);
    v7 = UIPanel__Find(parent, 0);
  }
  this->fields.panelRegion = v7;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.panelRegion, (int32_t)v7, v5, v6);
  panelRegion = (UnityEngine_Object_o *)this->fields.panelRegion;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(panelRegion, 0, 0) )
    this->fields.restrictWithinPanel = 0;
}


// local variable allocation has failed, the output may be wrong!
void UIDragObject__LateUpdate(UIDragObject_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x20
  float deltaTime; // s8
  float32x2_t v5; // d0 OVERLAPPED
  float z; // s9
  float v7; // s1
  unsigned __int32 v8; // s10
  unsigned __int32 v9; // s1
  float v10; // s2
  float y; // s9
  float x; // s11
  float v13; // s10
  UnityEngine_Object_o *panelRegion; // x21
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x1
  UnityEngine_Object_o *v17; // x21
  const MethodInfo *v18; // x1
  UIPanel_o *v19; // x0
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x1
  float v22; // s10
  float v23; // s11
  float v24; // s8
  unsigned __int32 from; // [xsp+0h] [xbp-70h]
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3C014 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3C014 = 1;
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
    v8 = v5.n64_u32[1];
    if ( !byte_4C313D1 )
    {
      from = v5.n64_u32[0];
      sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
      v5.n64_u32[0] = from;
      byte_4C313D1 = 1;
    }
    v9 = v8;
    v10 = z;
    this->fields.mScroll = NGUIMath__SpringLerp_49258892(
                             *(UnityEngine_Vector3_o *)v5.n64_u64,
                             UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
                             20.0,
                             deltaTime,
                             0);
    if ( !byte_4C313D3 )
    {
      sub_1C32C20(&System_Math_TypeInfo);
      byte_4C313D3 = 1;
    }
    x = this->fields.mMomentum.fields.x;
    y = this->fields.mMomentum.fields.y;
    v13 = this->fields.mMomentum.fields.z;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    if ( sqrtf((float)((float)(x * x) + (float)(y * y)) + (float)(v13 * v13)) >= 0.0001 )
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
          UIDragObject__FindPanel(this, v15);
        v26 = NGUIMath__SpringDampen(&this->fields.mMomentum, 9.0, deltaTime, 0);
        UIDragObject__Move(this, v26, v16);
        if ( this->fields.restrictWithinPanel )
        {
          v17 = (UnityEngine_Object_o *)this->fields.panelRegion;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(v17, 0, 0) )
          {
            UIDragObject__UpdateBounds(this, v18);
            v19 = this->fields.panelRegion;
            if ( !v19 )
              sub_1C32E7C(0);
            if ( UIPanel__ConstrainTargetToBounds(
                   v19,
                   this->fields.target,
                   &this->fields.mBounds,
                   this->fields.dragEffect == 0,
                   0) )
            {
              UIDragObject__CancelMovement(this, v20);
            }
            else
            {
              UIDragObject__CancelSpring(this, v20);
            }
          }
        }
        NGUIMath__SpringDampen(&this->fields.mMomentum, 9.0, deltaTime, 0);
        if ( !byte_4C313D3 )
        {
          sub_1C32C20(&System_Math_TypeInfo);
          byte_4C313D3 = 1;
        }
        v23 = this->fields.mMomentum.fields.x;
        v22 = this->fields.mMomentum.fields.y;
        v24 = this->fields.mMomentum.fields.z;
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        if ( sqrtf((float)((float)(v23 * v23) + (float)(v22 * v22)) + (float)(v24 * v24)) < 0.0001 )
          UIDragObject__CancelMovement(this, v21);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void UIDragObject__Move(UIDragObject_o *this, UnityEngine_Vector3_o worldDelta, const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  UnityEngine_Object_o *panelRegion; // x20
  UnityEngine_Transform_o *v8; // x0
  float v9; // s0 OVERLAPPED
  float v10; // s1
  float v11; // s2
  float v12; // s10
  float v13; // s9
  float v14; // s8
  double v15; // d0
  double v16; // d0
  float v17; // s1
  UnityEngine_Transform_o *target; // x19
  __int64 v19; // x8
  float v20; // s0
  float v21; // s1
  float v22; // s10
  double v23; // d0
  double v24; // d0
  float v25; // s1
  __int64 v26; // x8
  float v27; // s0
  float v28; // s1 OVERLAPPED
  float v29; // s0
  float v30; // s2
  Il2CppObject *Component_object; // x19
  double iptr; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4

  z = worldDelta.fields.z;
  y = worldDelta.fields.y;
  x = worldDelta.fields.x;
  if ( (byte_4C3C013 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_UIScrollView___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3C013 = 1;
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
      position.fields.y = y + position.fields.y;
      position.fields.z = z + position.fields.z;
      position.fields.x = x + position.fields.x;
      UnityEngine_Transform__set_position(target, position, 0);
      return;
    }
    goto LABEL_38;
  }
  v8 = this->fields.target;
  v9 = x + this->fields.mTargetPos.fields.x;
  v10 = y + this->fields.mTargetPos.fields.y;
  v11 = z + this->fields.mTargetPos.fields.z;
  this->fields.mTargetPos.fields.x = v9;
  this->fields.mTargetPos.fields.y = v10;
  this->fields.mTargetPos.fields.z = v11;
  if ( !v8 )
    goto LABEL_38;
  UnityEngine_Transform__set_position(v8, *(UnityEngine_Vector3_o *)&v9, 0);
  v8 = this->fields.target;
  if ( !v8 )
    goto LABEL_38;
  localPosition = UnityEngine_Transform__get_localPosition(v8, 0);
  v12 = localPosition.fields.x;
  v13 = localPosition.fields.y;
  v14 = localPosition.fields.z;
  v15 = modf(localPosition.fields.x, &iptr);
  if ( v12 >= 0.0 )
  {
    if ( v15 != 0.5 )
    {
      v22 = floorf(v12 + 0.5);
      goto LABEL_20;
    }
    v16 = iptr;
    v17 = 1.0;
  }
  else
  {
    if ( v15 != -0.5 )
    {
      v22 = ceilf(v12 + -0.5);
      goto LABEL_20;
    }
    v16 = iptr;
    v17 = -1.0;
  }
  v19 = (__int64)v16;
  v20 = v16;
  v21 = v20 + v17;
  if ( (v19 & 1) != 0 )
    v22 = v21;
  else
    v22 = v20;
LABEL_20:
  v23 = modf(v13, &iptr);
  if ( v13 >= 0.0 )
  {
    if ( v23 != 0.5 )
    {
      v28 = floorf(v13 + 0.5);
      goto LABEL_30;
    }
    v24 = iptr;
    v25 = 1.0;
  }
  else
  {
    if ( v23 != -0.5 )
    {
      v28 = ceilf(v13 + -0.5);
      goto LABEL_30;
    }
    v24 = iptr;
    v25 = -1.0;
  }
  v26 = (__int64)v24;
  v27 = v24;
  v28 = v27 + v25;
  if ( (v26 & 1) == 0 )
    v28 = v27;
LABEL_30:
  v8 = this->fields.target;
  if ( !v8 )
    goto LABEL_38;
  v29 = v22;
  v30 = v14;
  UnityEngine_Transform__set_localPosition(v8, *(UnityEngine_Vector3_o *)(&v28 - 1), 0);
  v8 = (UnityEngine_Transform_o *)this->fields.panelRegion;
  if ( !v8 )
    goto LABEL_38;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)v8,
                       (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UIScrollView___);
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
    sub_1C32E7C(v8);
  }
}


void UIDragObject__OnDisable(UIDragObject_o *this, const MethodInfo *method)
{
  this->fields.mStarted = 0;
}


// local variable allocation has failed, the output may be wrong!
void UIDragObject__OnDrag(UIDragObject_o *this, UnityEngine_Vector2_o delta, const MethodInfo *method)
{
  int32_t mTouchID; // w20
  UICamera_c *v5; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  UnityEngine_Object_o *target; // x20
  UnityEngine_Camera_o *panelRegion; // x0
  intptr_t m_CachedPtr; // x9
  __int64 v10; // x8
  float z; // s9
  float x; // s8
  float y; // s15
  float m_Distance; // s10
  float v15; // s14
  __int64 v16; // kr00_8
  float v17; // s12
  struct UnityEngine_Mathf_StaticFields *static_fields; // x8
  float v19; // s0
  float v20; // s0
  float32x2_t v21; // d3
  _BOOL4 mStarted; // w8
  float v23; // s4
  float v24; // v0.s[1]
  float32x2_t v25; // d0 OVERLAPPED
  float v26; // s8
  struct UnityEngine_Vector3_StaticFields *v27; // x8
  int8x8_t v28; // d2
  unsigned __int32 v29; // s1
  float v30; // s2
  float v31; // s2
  unsigned __int32 v32; // s1
  float v33; // s2
  float v34; // s1
  float v35; // s9
  float v36; // s10
  float v37; // s11
  const MethodInfo *v38; // x1
  float v39; // s8
  float v40; // s12
  float v41; // s13
  int32_t dragEffect; // w8
  const MethodInfo *v43; // x1
  unsigned __int64 worldDelta; // [xsp+0h] [xbp-B0h]
  UnityEngine_Ray_o v45; // [xsp+18h] [xbp-98h] BYREF
  UnityEngine_Ray_o v46; // [xsp+30h] [xbp-80h] BYREF
  UnityEngine_Vector3_o v47; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o Point; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o v49; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v52; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3C012 & 1) == 0 )
  {
    sub_1C32C20(&NGUITools_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&UICamera_TypeInfo);
    byte_4C3C012 = 1;
  }
  memset(&v46, 0, sizeof(v46));
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
      if ( NGUITools__GetActive_49301984(gameObject, 0) )
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
          v10 = *(_QWORD *)(m_CachedPtr + 160);
          if ( !v10 )
            goto LABEL_43;
          *(_DWORD *)(v10 + 96) = 2;
          panelRegion = *(UnityEngine_Camera_o **)(m_CachedPtr + 136);
          if ( !panelRegion )
            goto LABEL_43;
          v47.fields.x = *(float *)(v10 + 16);
          v47.fields.y = *(float *)(v10 + 20);
          v47.fields.z = 0.0;
          UnityEngine_Camera__ScreenPointToRay_71030396(&v45, panelRegion, v47, 0);
          v46 = v45;
          z = v45.fields.m_Origin.fields.z;
          x = this->fields.mPlane.fields.m_Normal.fields.x;
          y = this->fields.mPlane.fields.m_Normal.fields.y;
          v15 = this->fields.mPlane.fields.m_Normal.fields.z;
          m_Distance = this->fields.mPlane.fields.m_Distance;
          v16 = *(_QWORD *)&v45.fields.m_Origin.fields.x;
          v17 = (float)(v45.fields.m_Direction.fields.z * v15)
              + (float)((float)(v45.fields.m_Direction.fields.x * x) + (float)(v45.fields.m_Direction.fields.y * y));
          if ( !byte_4C313D5 )
          {
            sub_1C32C20(&UnityEngine_Mathf_TypeInfo);
            byte_4C313D5 = 1;
          }
          static_fields = UnityEngine_Mathf_TypeInfo->static_fields;
          v19 = fmaxf(fabsf(v17), 0.0) * 0.000001;
          if ( v19 <= (float)(static_fields->Epsilon * 8.0) )
            v19 = static_fields->Epsilon * 8.0;
          if ( vabds_f32(0.0, v17) >= v19 )
          {
            v20 = (float)((float)-(float)((float)(z * v15)
                                        + (float)((float)(*(float *)&v16 * x) + (float)(*((float *)&v16 + 1) * y)))
                        - m_Distance)
                / v17;
            if ( v20 > 0.0 )
            {
              Point = UnityEngine_Ray__GetPoint(&v46, v20, 0);
              v21.n64_u64[0] = *(unsigned __int64 *)&this->fields.mLastPos.fields.x;
              mStarted = this->fields.mStarted;
              v23 = this->fields.mLastPos.fields.z;
              this->fields.mLastPos = Point;
              if ( mStarted )
              {
                v24 = Point.fields.y;
                v25.n64_u64[0] = vsub_f32(*(float32x2_t *)&Point.fields.x, v21).n64_u64[0];
                v26 = Point.fields.z - v23;
              }
              else
              {
                this->fields.mStarted = 1;
                if ( !byte_4C313D1 )
                {
                  sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
                  byte_4C313D1 = 1;
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
                v29 = v25.n64_u32[1];
                v30 = v26;
                v49 = UnityEngine_Transform__InverseTransformDirection(
                        (UnityEngine_Transform_o *)panelRegion,
                        *(UnityEngine_Vector3_o *)v25.n64_u64,
                        0);
                panelRegion = (UnityEngine_Camera_o *)this->fields.target;
                if ( !panelRegion )
                  goto LABEL_43;
                v50.fields.z = v49.fields.z * this->fields.scale.fields.z;
                v50.fields.y = v49.fields.y * this->fields.scale.fields.y;
                v50.fields.x = v49.fields.x * this->fields.scale.fields.x;
                *(UnityEngine_Vector3_o *)v25.n64_u64 = UnityEngine_Transform__TransformDirection(
                                                          (UnityEngine_Transform_o *)panelRegion,
                                                          v50,
                                                          0);
                v26 = v31;
                v25.n64_u32[1] = v32;
              }
              if ( this->fields.dragEffect )
              {
                v33 = this->fields.momentumAmount * 0.01;
                v34 = this->fields.mMomentum.fields.z
                    + (float)((float)((float)(this->fields.mMomentum.fields.z + (float)(v26 * v33))
                                    - this->fields.mMomentum.fields.z)
                            * 0.67);
                *(float32x2_t *)&this->fields.mMomentum.fields.x = vadd_f32(
                                                                     *(float32x2_t *)&this->fields.mMomentum.fields.x,
                                                                     vmul_f32(
                                                                       vsub_f32(
                                                                         vadd_f32(
                                                                           *(float32x2_t *)&this->fields.mMomentum.fields.x,
                                                                           vmul_n_f32(v25, v33)),
                                                                         *(float32x2_t *)&this->fields.mMomentum.fields.x),
                                                                       vdup_n_s32(0x3F2B851Fu)));
                this->fields.mMomentum.fields.z = v34;
              }
              panelRegion = (UnityEngine_Camera_o *)this->fields.target;
              worldDelta = v25.n64_u64[0];
              if ( panelRegion )
              {
                localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)panelRegion, 0);
                v35 = localPosition.fields.x;
                LODWORD(localPosition.fields.x) = worldDelta;
                v36 = localPosition.fields.y;
                v37 = localPosition.fields.z;
                localPosition.fields.y = *((float *)&worldDelta + 1);
                localPosition.fields.z = v26;
                UIDragObject__Move(this, localPosition, v38);
                if ( !this->fields.restrictWithinPanel )
                  return;
                panelRegion = (UnityEngine_Camera_o *)this->fields.target;
                if ( panelRegion )
                {
                  v40 = this->fields.mBounds.fields.m_Center.fields.y;
                  v39 = this->fields.mBounds.fields.m_Center.fields.z;
                  v41 = this->fields.mBounds.fields.m_Center.fields.x;
                  v52 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)panelRegion, 0);
                  dragEffect = this->fields.dragEffect;
                  this->fields.mBounds.fields.m_Center.fields.x = v41 + (float)(v52.fields.x - v35);
                  this->fields.mBounds.fields.m_Center.fields.y = v40 + (float)(v52.fields.y - v36);
                  this->fields.mBounds.fields.m_Center.fields.z = v39 + (float)(v52.fields.z - v37);
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
                      UIDragObject__CancelMovement(this, v43);
                    }
                    return;
                  }
                }
              }
LABEL_43:
              sub_1C32E7C(panelRegion);
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
  CGThumbnailListItem_o *p_contentRect; // x20
  UnityEngine_Object_o *contentRect; // x21
  UnityEngine_Object_o *target; // x21
  UnityEngine_Component_o *v9; // x0
  Il2CppObject *Component_object; // x19
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4C3C00E & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Application_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3C00E = 1;
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
  p_contentRect = (CGThumbnailListItem_o *)&this->fields.contentRect;
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
        v9 = (UnityEngine_Component_o *)this->fields.target;
        if ( !v9 )
          sub_1C32E7C(0);
        Component_object = UnityEngine_Component__GetComponent_object_(
                             v9,
                             (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
        {
          p_contentRect->klass = (CGThumbnailListItem_c *)Component_object;
          sub_1C32BC4(p_contentRect, (int32_t)Component_object, v11, v12);
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
  float x; // s8
  float y; // s9
  float z; // s10
  float w; // s11
  UICamera_c *v25; // x0
  float v26; // s8
  float v27; // s9
  float v28; // s10
  float *static_fields; // x8
  float v30; // s11
  float v31; // s12
  float v32; // s13
  float v33; // s2
  float v34; // s0
  float v35; // s1
  float v36; // s2
  struct UnityEngine_Vector3_StaticFields *v37; // x8
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v40; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C3C011 & 1) == 0 )
  {
    sub_1C32C20(&NGUITools_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&UICamera_TypeInfo);
    byte_4C3C011 = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    if ( NGUITools__GetActive_49301984(gameObject, 0) )
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
              sub_1C32E7C(currentCamera);
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
            x = rotation.fields.x;
            y = rotation.fields.y;
            z = rotation.fields.z;
            w = rotation.fields.w;
            if ( !byte_4C341EF )
            {
              sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
              byte_4C341EF = 1;
            }
            v40.fields.x = x;
            v40.fields.y = y;
            v40.fields.z = z;
            v40.fields.w = w;
            v38 = UnityEngine_Quaternion__op_Multiply_71162940(
                    v40,
                    UnityEngine_Vector3_TypeInfo->static_fields->backVector,
                    0);
            v25 = UICamera_TypeInfo;
            v26 = v38.fields.x;
            v27 = v38.fields.y;
            v28 = v38.fields.z;
            if ( !UICamera_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
              v25 = UICamera_TypeInfo;
            }
            static_fields = (float *)v25->static_fields;
            v31 = static_fields[17];
            v30 = static_fields[18];
            v32 = static_fields[19];
            if ( !byte_4C313D4 )
            {
              sub_1C32C20(&System_Math_TypeInfo);
              byte_4C313D4 = 1;
            }
            if ( !System_Math_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
            v33 = sqrtf((float)(v28 * v28) + (float)((float)(v26 * v26) + (float)(v27 * v27)));
            if ( v33 <= 0.00001 )
            {
              if ( !byte_4C313D1 )
              {
                sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
                byte_4C313D1 = 1;
              }
              v37 = UnityEngine_Vector3_TypeInfo->static_fields;
              v34 = v37->zeroVector.fields.x;
              v35 = v37->zeroVector.fields.y;
              v36 = v37->zeroVector.fields.z;
            }
            else
            {
              v34 = v26 / v33;
              v35 = v27 / v33;
              v36 = v28 / v33;
            }
            this->fields.mPlane.fields.m_Normal.fields.x = v34;
            this->fields.mPlane.fields.m_Normal.fields.y = v35;
            this->fields.mPlane.fields.m_Normal.fields.z = v36;
            this->fields.mPlane.fields.m_Distance = -(float)((float)(v32 * v36)
                                                           + (float)((float)(v31 * v34) + (float)(v30 * v35)));
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

  if ( (byte_4C3C017 & 1) == 0 )
  {
    sub_1C32C20(&NGUITools_TypeInfo);
    byte_4C3C017 = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    if ( NGUITools__GetActive_49301984(gameObject, 0) )
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
  char v5; // w20
  unsigned __int32 v6; // w8
  float32x2_t *v7; // x20
  unsigned __int64 v8; // x21
  __int64 v9; // x22
  float32x2_t v10; // d8
  float v11; // s9
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  float *v13; // x8
  float32x2_t v14; // d2
  float z; // s4
  unsigned __int64 v16; // x9
  float32x2_t v17; // d3
  float v18; // s2
  int8x8_t v19; // d4
  float v20; // t1
  float v21; // s5
  float v22; // s7
  int8x8_t v23; // d6
  int8x8_t v24; // d3
  float v25; // s2
  int8x8_t v26; // d16
  int8x8_t v27; // d17
  float32x2_t v28; // d6
  float32x2_t v29; // d3
  __int128 v30; // q0
  UnityEngine_Bounds_o v31; // [xsp+8h] [xbp-D8h] BYREF
  UnityEngine_Matrix4x4_o v32; // [xsp+20h] [xbp-C0h] BYREF
  UnityEngine_Matrix4x4_o v33; // [xsp+60h] [xbp-80h] BYREF
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3C010 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3C010 = 1;
  }
  memset(&v33, 0, sizeof(v33));
  contentRect = (UnityEngine_Object_o *)this->fields.contentRect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  cachedTransform = UnityEngine_Object__op_Implicit(contentRect, 0);
  if ( !this->fields.panelRegion )
    goto LABEL_27;
  v5 = cachedTransform;
  cachedTransform = (__int64)UIRect__get_cachedTransform((UIRect_o *)this->fields.panelRegion, 0);
  if ( (v5 & 1) != 0 )
  {
    if ( cachedTransform )
    {
      UnityEngine_Transform__get_worldToLocalMatrix(&v32, (UnityEngine_Transform_o *)cachedTransform, 0);
      v33 = v32;
      cachedTransform = (__int64)this->fields.contentRect;
      if ( cachedTransform )
      {
        cachedTransform = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)cachedTransform + 488LL))(
                            cachedTransform,
                            *(_QWORD *)(*(_QWORD *)cachedTransform + 496LL));
        if ( cachedTransform )
        {
          v6 = *(_DWORD *)(cachedTransform + 24);
          v7 = (float32x2_t *)cachedTransform;
          v8 = 0;
          v9 = cachedTransform + 40;
          do
          {
            if ( v8 >= v6 )
              goto LABEL_26;
            v34 = UnityEngine_Matrix4x4__MultiplyPoint3x4(&v33, *(UnityEngine_Vector3_o *)(v9 - 8), 0);
            if ( v8 >= v7[3].n64_u32[0] )
              goto LABEL_26;
            *(UnityEngine_Vector3_o *)(v9 - 8) = v34;
            v9 += 12;
            v6 = v7[3].n64_u32[0];
            ++v8;
          }
          while ( v8 != 4 );
          if ( v6 )
          {
            v10.n64_u64[0] = v7[4].n64_u64[0];
            v11 = v7[5].n64_f32[0];
            if ( !byte_4C313D1 )
            {
              cachedTransform = sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
              byte_4C313D1 = 1;
            }
            static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
            v13 = (float *)&v7[6] + 1;
            v14.n64_u64[0] = *(unsigned __int64 *)&static_fields->zeroVector.fields.x;
            z = static_fields->zeroVector.fields.z;
            v16 = 1;
            *(float32x2_t *)&this->fields.mBounds.fields.m_Center.fields.x = v10;
            v17.n64_u64[0] = vmul_f32(v14, (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
            v18 = z * 0.5;
            this->fields.mBounds.fields.m_Center.fields.z = v11;
            *(float32x2_t *)&this->fields.mBounds.fields.m_Extents.fields.x = v17;
            this->fields.mBounds.fields.m_Extents.fields.z = z * 0.5;
            while ( v16 < v7[3].n64_u32[0] )
            {
              v19.n64_u64[0] = *(_QWORD *)(v13 - 2);
              v20 = *v13;
              v13 += 3;
              v21 = v20;
              v22 = v11 - v18;
              v23.n64_u64[0] = vsub_f32(v10, v17).n64_u64[0];
              v24.n64_u64[0] = vadd_f32(v10, v17).n64_u64[0];
              v25 = v11 + v18;
              v26.n64_u64[0] = vcgt_f32(v19, v23).n64_u64[0];
              v27.n64_u64[0] = vcgt_f32(v24, v19).n64_u64[0];
              if ( v22 >= v20 )
                v22 = v21;
              v28.n64_u64[0] = vbsl_s8(v26, v23, v19).n64_u64[0];
              v29.n64_u64[0] = vbsl_s8(v27, v24, v19).n64_u64[0];
              if ( v25 <= v21 )
                v25 = v21;
              ++v16;
              v17.n64_u64[0] = vmul_f32(vsub_f32(v29, v28), (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
              v18 = (float)(v25 - v22) * 0.5;
              v10.n64_u64[0] = vadd_f32(v28, v17).n64_u64[0];
              v11 = v22 + v18;
              *(float32x2_t *)&this->fields.mBounds.fields.m_Extents.fields.x = v17;
              this->fields.mBounds.fields.m_Extents.fields.z = v18;
              *(float32x2_t *)&this->fields.mBounds.fields.m_Center.fields.x = v10;
              this->fields.mBounds.fields.m_Center.fields.z = v22 + v18;
              if ( v16 == 4 )
                return;
            }
          }
LABEL_26:
          sub_1C32E84(cachedTransform);
        }
      }
    }
LABEL_27:
    sub_1C32E7C(cachedTransform);
  }
  NGUIMath__CalculateRelativeWidgetBounds_49181936(
    &v31,
    (UnityEngine_Transform_o *)cachedTransform,
    this->fields.target,
    0);
  v30 = *(_OWORD *)&v31.fields.m_Center.fields.x;
  *(_QWORD *)&v32.fields.m01 = *(_QWORD *)&v31.fields.m_Extents.fields.y;
  *(_OWORD *)&v32.fields.m00 = *(_OWORD *)&v31.fields.m_Center.fields.x;
  *(_QWORD *)&this->fields.mBounds.fields.m_Extents.fields.y = *(_QWORD *)&v31.fields.m_Extents.fields.y;
  *(_OWORD *)&this->fields.mBounds.fields.m_Center.fields.x = v30;
}


UnityEngine_Vector3_o UIDragObject__get_dragMovement(UIDragObject_o *this, const MethodInfo *method)
{
  float x; // s0
  float y; // s1
  float z; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  x = this->fields.scale.fields.x;
  y = this->fields.scale.fields.y;
  z = this->fields.scale.fields.z;
  result.fields.z = z;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


void UIDragObject__set_dragMovement(UIDragObject_o *this, UnityEngine_Vector3_o value, const MethodInfo *method)
{
  this->fields.scale = value;
}