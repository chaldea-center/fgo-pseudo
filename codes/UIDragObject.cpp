void UIDragObject___ctor(UIDragObject_o *this, const MethodInfo *method)
{
  UnityEngine_Vector3_c *v3; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  __int64 v5; // d1
  float z; // s2
  struct UnityEngine_Vector3_StaticFields *v7; // x9
  struct UnityEngine_Vector3_StaticFields *v8; // x8

  if ( !byte_4C506A1 )
  {
    sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
    byte_4C506A1 = 1;
  }
  v3 = UnityEngine_Vector3_TypeInfo;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v5 = *(_QWORD *)&static_fields->zeroVector.fields.x;
  z = static_fields->zeroVector.fields.z;
  *(_OWORD *)&this->fields.momentumAmount = xmmword_C13550;
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
  __int64 v4; // x1
  UnityEngine_Transform_o *v5; // x0
  float x; // s9
  float y; // s10
  float z; // s8
  double v9; // d11
  double v10; // d0
  double v11; // d0
  double v12; // d1
  double v13; // d1
  float v14; // s9
  double v15; // d11
  double v16; // d0
  double v17; // d0
  double v18; // d1
  double v19; // d1
  float v20; // s10
  double v21; // d11
  double v22; // d0
  double v23; // d0
  double v24; // d1
  double v25; // d1
  float v26; // s2 OVERLAPPED
  float v27; // s0
  float v28; // s1
  UnityEngine_Object_o *v29; // x20
  UnityEngine_Vector3_c *v30; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  float v32; // s1
  struct UnityEngine_Vector3_StaticFields *v33; // x8
  float v34; // s1
  double iptr; // [xsp+28h] [xbp-28h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C5B387 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5B387 = 1;
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
  x = localPosition.fields.x;
  y = localPosition.fields.y;
  z = localPosition.fields.z;
  if ( !byte_4C51E80 )
  {
    sub_1C3E564(&System_Math_TypeInfo);
    byte_4C51E80 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v9 = x;
  v10 = modf(x, &iptr);
  if ( x >= 0.0 )
  {
    if ( v10 != 0.5 )
    {
      v11 = floor(v9 + 0.5);
      goto LABEL_21;
    }
    v11 = iptr;
    v12 = 1.0;
  }
  else
  {
    if ( v10 != -0.5 )
    {
      v11 = ceil(v9 + -0.5);
      goto LABEL_21;
    }
    v11 = iptr;
    v12 = -1.0;
  }
  v13 = v11 + v12;
  if ( ((__int64)v11 & 1) != 0 )
    v11 = v13;
LABEL_21:
  if ( v11 == INFINITY )
    v14 = -2147500000.0;
  else
    v14 = (float)(int)v11;
  if ( !byte_4C51E80 )
  {
    sub_1C3E564(&System_Math_TypeInfo);
    byte_4C51E80 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v15 = y;
  v16 = modf(y, &iptr);
  if ( y >= 0.0 )
  {
    if ( v16 != 0.5 )
    {
      v17 = floor(v15 + 0.5);
      goto LABEL_38;
    }
    v17 = iptr;
    v18 = 1.0;
  }
  else
  {
    if ( v16 != -0.5 )
    {
      v17 = ceil(v15 + -0.5);
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
  if ( !byte_4C51E80 )
  {
    sub_1C3E564(&System_Math_TypeInfo);
    byte_4C51E80 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v21 = z;
  v22 = modf(z, &iptr);
  if ( z >= 0.0 )
  {
    if ( v22 == 0.5 )
    {
      v23 = iptr;
      v24 = 1.0;
LABEL_50:
      v25 = v23 + v24;
      if ( ((__int64)v23 & 1) != 0 )
        v23 = v25;
      goto LABEL_55;
    }
    v23 = floor(v21 + 0.5);
  }
  else
  {
    if ( v22 == -0.5 )
    {
      v23 = iptr;
      v24 = -1.0;
      goto LABEL_50;
    }
    v23 = ceil(v21 + -0.5);
  }
LABEL_55:
  v5 = this->fields.target;
  if ( !v5 )
    goto LABEL_71;
  if ( v23 == INFINITY )
    v26 = -2147500000.0;
  else
    v26 = (float)(int)v23;
  v27 = v14;
  v28 = v20;
  UnityEngine_Transform__set_localPosition(v5, *(UnityEngine_Vector3_o *)(&v26 - 2), 0);
LABEL_60:
  v29 = (UnityEngine_Object_o *)this->fields.target;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v29, 0, 0) )
  {
    v5 = this->fields.target;
    if ( v5 )
    {
      position = UnityEngine_Transform__get_position(v5, 0);
      goto LABEL_68;
    }
LABEL_71:
    sub_1C3E7C0(v5, v4);
  }
  if ( !byte_4C506A1 )
  {
    sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
    byte_4C506A1 = 1;
  }
  position = UnityEngine_Vector3_TypeInfo->static_fields->zeroVector;
LABEL_68:
  this->fields.mTargetPos = position;
  if ( !byte_4C506A1 )
  {
    sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
    byte_4C506A1 = 1;
  }
  v30 = UnityEngine_Vector3_TypeInfo;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v32 = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.mMomentum.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields.mMomentum.fields.z = v32;
  v33 = v30->static_fields;
  v34 = v33->zeroVector.fields.z;
  *(_QWORD *)&this->fields.mScroll.fields.x = *(_QWORD *)&v33->zeroVector.fields.x;
  this->fields.mScroll.fields.z = v34;
}


void UIDragObject__CancelSpring(UIDragObject_o *this, const MethodInfo *method)
{
  struct UnityEngine_Transform_o *target; // x0
  Il2CppObject *Component_object; // x19

  if ( (byte_4C5B388 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_SpringPosition___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5B388 = 1;
  }
  target = this->fields.target;
  if ( !target )
    goto LABEL_10;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)target,
                       (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_SpringPosition___);
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
    sub_1C3E7C0(target, method);
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

  if ( (byte_4C5B381 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&UIPanel_TypeInfo);
    byte_4C5B381 = 1;
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
      sub_1C3E7C0(transform, v7);
    parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0);
    if ( !UIPanel_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UIPanel_TypeInfo);
    v7 = UIPanel__Find(parent, 0);
  }
  this->fields.panelRegion = v7;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.panelRegion, (int32_t)v7, v5, v6);
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
  __int64 v19; // x1
  UIPanel_o *v20; // x0
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x1
  float v23; // s10
  float v24; // s11
  float v25; // s8
  unsigned __int32 from; // [xsp+0h] [xbp-70h]
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C5B386 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5B386 = 1;
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
    if ( !byte_4C506A1 )
    {
      from = v5.n64_u32[0];
      sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
      v5.n64_u32[0] = from;
      byte_4C506A1 = 1;
    }
    v9 = v8;
    v10 = z;
    this->fields.mScroll = NGUIMath__SpringLerp_49375244(
                             *(UnityEngine_Vector3_o *)v5.n64_u64,
                             UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
                             20.0,
                             deltaTime,
                             0);
    if ( !byte_4C506A3 )
    {
      sub_1C3E564(&System_Math_TypeInfo);
      byte_4C506A3 = 1;
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
        v27 = NGUIMath__SpringDampen(&this->fields.mMomentum, 9.0, deltaTime, 0);
        UIDragObject__Move(this, v27, v16);
        if ( this->fields.restrictWithinPanel )
        {
          v17 = (UnityEngine_Object_o *)this->fields.panelRegion;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(v17, 0, 0) )
          {
            UIDragObject__UpdateBounds(this, v18);
            v20 = this->fields.panelRegion;
            if ( !v20 )
              sub_1C3E7C0(0, v19);
            if ( UIPanel__ConstrainTargetToBounds(
                   v20,
                   this->fields.target,
                   &this->fields.mBounds,
                   this->fields.dragEffect == 0,
                   0) )
            {
              UIDragObject__CancelMovement(this, v21);
            }
            else
            {
              UIDragObject__CancelSpring(this, v21);
            }
          }
        }
        NGUIMath__SpringDampen(&this->fields.mMomentum, 9.0, deltaTime, 0);
        if ( !byte_4C506A3 )
        {
          sub_1C3E564(&System_Math_TypeInfo);
          byte_4C506A3 = 1;
        }
        v24 = this->fields.mMomentum.fields.x;
        v23 = this->fields.mMomentum.fields.y;
        v25 = this->fields.mMomentum.fields.z;
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        if ( sqrtf((float)((float)(v24 * v24) + (float)(v23 * v23)) + (float)(v25 * v25)) < 0.0001 )
          UIDragObject__CancelMovement(this, v22);
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
  __int64 v9; // x1
  float v10; // s0 OVERLAPPED
  float v11; // s1
  float v12; // s2
  float v13; // s10
  float v14; // s9
  float v15; // s8
  double v16; // d0
  double v17; // d0
  float v18; // s1
  UnityEngine_Transform_o *target; // x19
  __int64 v20; // x8
  float v21; // s0
  float v22; // s1
  float v23; // s10
  double v24; // d0
  double v25; // d0
  float v26; // s1
  __int64 v27; // x8
  float v28; // s0
  float v29; // s1 OVERLAPPED
  float v30; // s0
  float v31; // s2
  Il2CppObject *Component_object; // x19
  double iptr; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4

  z = worldDelta.fields.z;
  y = worldDelta.fields.y;
  x = worldDelta.fields.x;
  if ( (byte_4C5B385 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_UIScrollView___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5B385 = 1;
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
  v10 = x + this->fields.mTargetPos.fields.x;
  v11 = y + this->fields.mTargetPos.fields.y;
  v12 = z + this->fields.mTargetPos.fields.z;
  this->fields.mTargetPos.fields.x = v10;
  this->fields.mTargetPos.fields.y = v11;
  this->fields.mTargetPos.fields.z = v12;
  if ( !v8 )
    goto LABEL_38;
  UnityEngine_Transform__set_position(v8, *(UnityEngine_Vector3_o *)&v10, 0);
  v8 = this->fields.target;
  if ( !v8 )
    goto LABEL_38;
  localPosition = UnityEngine_Transform__get_localPosition(v8, 0);
  v13 = localPosition.fields.x;
  v14 = localPosition.fields.y;
  v15 = localPosition.fields.z;
  v16 = modf(localPosition.fields.x, &iptr);
  if ( v13 >= 0.0 )
  {
    if ( v16 != 0.5 )
    {
      v23 = floorf(v13 + 0.5);
      goto LABEL_20;
    }
    v17 = iptr;
    v18 = 1.0;
  }
  else
  {
    if ( v16 != -0.5 )
    {
      v23 = ceilf(v13 + -0.5);
      goto LABEL_20;
    }
    v17 = iptr;
    v18 = -1.0;
  }
  v20 = (__int64)v17;
  v21 = v17;
  v22 = v21 + v18;
  if ( (v20 & 1) != 0 )
    v23 = v22;
  else
    v23 = v21;
LABEL_20:
  v24 = modf(v14, &iptr);
  if ( v14 >= 0.0 )
  {
    if ( v24 != 0.5 )
    {
      v29 = floorf(v14 + 0.5);
      goto LABEL_30;
    }
    v25 = iptr;
    v26 = 1.0;
  }
  else
  {
    if ( v24 != -0.5 )
    {
      v29 = ceilf(v14 + -0.5);
      goto LABEL_30;
    }
    v25 = iptr;
    v26 = -1.0;
  }
  v27 = (__int64)v25;
  v28 = v25;
  v29 = v28 + v26;
  if ( (v27 & 1) == 0 )
    v29 = v28;
LABEL_30:
  v8 = this->fields.target;
  if ( !v8 )
    goto LABEL_38;
  v30 = v23;
  v31 = v15;
  UnityEngine_Transform__set_localPosition(v8, *(UnityEngine_Vector3_o *)(&v29 - 1), 0);
  v8 = (UnityEngine_Transform_o *)this->fields.panelRegion;
  if ( !v8 )
    goto LABEL_38;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)v8,
                       (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_UIScrollView___);
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
    sub_1C3E7C0(v8, v9);
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
  __int64 v8; // x1
  UnityEngine_Camera_o *panelRegion; // x0
  intptr_t m_CachedPtr; // x9
  __int64 v11; // x8
  float z; // s9
  float x; // s8
  float y; // s15
  float m_Distance; // s10
  float v16; // s14
  __int64 v17; // kr00_8
  float v18; // s12
  struct UnityEngine_Mathf_StaticFields *static_fields; // x8
  float v20; // s0
  float v21; // s0
  float32x2_t v22; // d3
  _BOOL4 mStarted; // w8
  float v24; // s4
  float v25; // v0.s[1]
  float32x2_t v26; // d0 OVERLAPPED
  float v27; // s8
  struct UnityEngine_Vector3_StaticFields *v28; // x8
  int8x8_t v29; // d2
  unsigned __int32 v30; // s1
  float v31; // s2
  float v32; // s2
  unsigned __int32 v33; // s1
  float v34; // s2
  float v35; // s1
  float v36; // s9
  float v37; // s10
  float v38; // s11
  const MethodInfo *v39; // x1
  float v40; // s8
  float v41; // s12
  float v42; // s13
  int32_t dragEffect; // w8
  const MethodInfo *v44; // x1
  unsigned __int64 worldDelta; // [xsp+0h] [xbp-B0h]
  UnityEngine_Ray_o v46; // [xsp+18h] [xbp-98h] BYREF
  UnityEngine_Ray_o v47; // [xsp+30h] [xbp-80h] BYREF
  UnityEngine_Vector3_o v48; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o Point; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v53; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C5B384 & 1) == 0 )
  {
    sub_1C3E564(&NGUITools_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&UICamera_TypeInfo);
    byte_4C5B384 = 1;
  }
  memset(&v47, 0, sizeof(v47));
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
      if ( NGUITools__GetActive_49418336(gameObject, 0) )
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
          UnityEngine_Camera__ScreenPointToRay_71148320(&v46, panelRegion, v48, 0);
          v47 = v46;
          z = v46.fields.m_Origin.fields.z;
          x = this->fields.mPlane.fields.m_Normal.fields.x;
          y = this->fields.mPlane.fields.m_Normal.fields.y;
          v16 = this->fields.mPlane.fields.m_Normal.fields.z;
          m_Distance = this->fields.mPlane.fields.m_Distance;
          v17 = *(_QWORD *)&v46.fields.m_Origin.fields.x;
          v18 = (float)(v46.fields.m_Direction.fields.z * v16)
              + (float)((float)(v46.fields.m_Direction.fields.x * x) + (float)(v46.fields.m_Direction.fields.y * y));
          if ( !byte_4C506A5 )
          {
            sub_1C3E564(&UnityEngine_Mathf_TypeInfo);
            byte_4C506A5 = 1;
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
              Point = UnityEngine_Ray__GetPoint(&v47, v21, 0);
              v22.n64_u64[0] = *(unsigned __int64 *)&this->fields.mLastPos.fields.x;
              mStarted = this->fields.mStarted;
              v24 = this->fields.mLastPos.fields.z;
              this->fields.mLastPos = Point;
              if ( mStarted )
              {
                v25 = Point.fields.y;
                v26.n64_u64[0] = vsub_f32(*(float32x2_t *)&Point.fields.x, v22).n64_u64[0];
                v27 = Point.fields.z - v24;
              }
              else
              {
                this->fields.mStarted = 1;
                if ( !byte_4C506A1 )
                {
                  sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
                  byte_4C506A1 = 1;
                }
                v28 = UnityEngine_Vector3_TypeInfo->static_fields;
                v26.n64_u64[0] = *(unsigned __int64 *)&v28->zeroVector.fields.x;
                v27 = v28->zeroVector.fields.z;
              }
              v29.n64_u64[0] = vceqz_f32(v26).n64_u64[0];
              if ( (vand_s8(vdup_lane_s32(v29, 1), v29).n64_u8[0] & 1) == 0 )
              {
                panelRegion = (UnityEngine_Camera_o *)this->fields.target;
                if ( !panelRegion )
                  goto LABEL_43;
                v30 = v26.n64_u32[1];
                v31 = v27;
                v50 = UnityEngine_Transform__InverseTransformDirection(
                        (UnityEngine_Transform_o *)panelRegion,
                        *(UnityEngine_Vector3_o *)v26.n64_u64,
                        0);
                panelRegion = (UnityEngine_Camera_o *)this->fields.target;
                if ( !panelRegion )
                  goto LABEL_43;
                v51.fields.z = v50.fields.z * this->fields.scale.fields.z;
                v51.fields.y = v50.fields.y * this->fields.scale.fields.y;
                v51.fields.x = v50.fields.x * this->fields.scale.fields.x;
                *(UnityEngine_Vector3_o *)v26.n64_u64 = UnityEngine_Transform__TransformDirection(
                                                          (UnityEngine_Transform_o *)panelRegion,
                                                          v51,
                                                          0);
                v27 = v32;
                v26.n64_u32[1] = v33;
              }
              if ( this->fields.dragEffect )
              {
                v34 = this->fields.momentumAmount * 0.01;
                v35 = this->fields.mMomentum.fields.z
                    + (float)((float)((float)(this->fields.mMomentum.fields.z + (float)(v27 * v34))
                                    - this->fields.mMomentum.fields.z)
                            * 0.67);
                *(float32x2_t *)&this->fields.mMomentum.fields.x = vadd_f32(
                                                                     *(float32x2_t *)&this->fields.mMomentum.fields.x,
                                                                     vmul_f32(
                                                                       vsub_f32(
                                                                         vadd_f32(
                                                                           *(float32x2_t *)&this->fields.mMomentum.fields.x,
                                                                           vmul_n_f32(v26, v34)),
                                                                         *(float32x2_t *)&this->fields.mMomentum.fields.x),
                                                                       vdup_n_s32(0x3F2B851Fu)));
                this->fields.mMomentum.fields.z = v35;
              }
              panelRegion = (UnityEngine_Camera_o *)this->fields.target;
              worldDelta = v26.n64_u64[0];
              if ( panelRegion )
              {
                localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)panelRegion, 0);
                v36 = localPosition.fields.x;
                LODWORD(localPosition.fields.x) = worldDelta;
                v37 = localPosition.fields.y;
                v38 = localPosition.fields.z;
                localPosition.fields.y = *((float *)&worldDelta + 1);
                localPosition.fields.z = v27;
                UIDragObject__Move(this, localPosition, v39);
                if ( !this->fields.restrictWithinPanel )
                  return;
                panelRegion = (UnityEngine_Camera_o *)this->fields.target;
                if ( panelRegion )
                {
                  v41 = this->fields.mBounds.fields.m_Center.fields.y;
                  v40 = this->fields.mBounds.fields.m_Center.fields.z;
                  v42 = this->fields.mBounds.fields.m_Center.fields.x;
                  v53 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)panelRegion, 0);
                  dragEffect = this->fields.dragEffect;
                  this->fields.mBounds.fields.m_Center.fields.x = v42 + (float)(v53.fields.x - v36);
                  this->fields.mBounds.fields.m_Center.fields.y = v41 + (float)(v53.fields.y - v37);
                  this->fields.mBounds.fields.m_Center.fields.z = v40 + (float)(v53.fields.z - v38);
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
                      UIDragObject__CancelMovement(this, v44);
                    }
                    return;
                  }
                }
              }
LABEL_43:
              sub_1C3E7C0(panelRegion, v8);
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
  __int64 v9; // x1
  UnityEngine_Component_o *v10; // x0
  Il2CppObject *Component_object; // x19
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4C5B380 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Application_TypeInfo);
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5B380 = 1;
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
        v10 = (UnityEngine_Component_o *)this->fields.target;
        if ( !v10 )
          sub_1C3E7C0(0, v9);
        Component_object = UnityEngine_Component__GetComponent_object_(
                             v10,
                             (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
        {
          p_contentRect->klass = (CGThumbnailListItem_c *)Component_object;
          sub_1C3E508(p_contentRect, (int32_t)Component_object, v12, v13);
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

  if ( (byte_4C5B383 & 1) == 0 )
  {
    sub_1C3E564(&NGUITools_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&UICamera_TypeInfo);
    byte_4C5B383 = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    if ( NGUITools__GetActive_49418336(gameObject, 0) )
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
              sub_1C3E7C0(currentCamera, v7);
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
            if ( !byte_4C53574 )
            {
              sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
              byte_4C53574 = 1;
            }
            v40.fields.x = x;
            v40.fields.y = y;
            v40.fields.z = z;
            v40.fields.w = w;
            v38 = UnityEngine_Quaternion__op_Multiply_71280864(
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
            if ( !byte_4C506A4 )
            {
              sub_1C3E564(&System_Math_TypeInfo);
              byte_4C506A4 = 1;
            }
            if ( !System_Math_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
            v33 = sqrtf((float)(v28 * v28) + (float)((float)(v26 * v26) + (float)(v27 * v27)));
            if ( v33 <= 0.00001 )
            {
              if ( !byte_4C506A1 )
              {
                sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
                byte_4C506A1 = 1;
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

  if ( (byte_4C5B389 & 1) == 0 )
  {
    sub_1C3E564(&NGUITools_TypeInfo);
    byte_4C5B389 = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    if ( NGUITools__GetActive_49418336(gameObject, 0) )
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
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C5B382 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5B382 = 1;
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
            if ( !byte_4C506A1 )
            {
              cachedTransform = sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
              byte_4C506A1 = 1;
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
          sub_1C3E7C8(cachedTransform, v5);
        }
      }
    }
LABEL_27:
    sub_1C3E7C0(cachedTransform, v5);
  }
  NGUIMath__CalculateRelativeWidgetBounds_49298288(
    &v32,
    (UnityEngine_Transform_o *)cachedTransform,
    this->fields.target,
    0);
  v31 = *(_OWORD *)&v32.fields.m_Center.fields.x;
  *(_QWORD *)&v33.fields.m01 = *(_QWORD *)&v32.fields.m_Extents.fields.y;
  *(_OWORD *)&v33.fields.m00 = *(_OWORD *)&v32.fields.m_Center.fields.x;
  *(_QWORD *)&this->fields.mBounds.fields.m_Extents.fields.y = *(_QWORD *)&v32.fields.m_Extents.fields.y;
  *(_OWORD *)&this->fields.mBounds.fields.m_Center.fields.x = v31;
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