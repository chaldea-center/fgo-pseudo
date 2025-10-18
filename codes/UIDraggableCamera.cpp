void UIDraggableCamera___ctor(UIDraggableCamera_o *this, const MethodInfo *method)
{
  UnityEngine_Vector2_c *v3; // x8
  struct UnityEngine_Vector2_o oneVector; // d0

  if ( !byte_4C433CF )
  {
    sub_1C37058(&UnityEngine_Vector2_TypeInfo);
    byte_4C433CF = 1;
  }
  v3 = UnityEngine_Vector2_TypeInfo;
  oneVector = UnityEngine_Vector2_TypeInfo->static_fields->oneVector;
  this->fields.dragEffect = 2;
  this->fields.smoothDragStart = 1;
  this->fields.momentumAmount = 35.0;
  this->fields.scale = oneVector;
  if ( !byte_4C3C81A )
  {
    sub_1C37058(&UnityEngine_Vector2_TypeInfo);
    v3 = UnityEngine_Vector2_TypeInfo;
    byte_4C3C81A = 1;
  }
  this->fields.mMomentum = v3->static_fields->zeroVector;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o UIDraggableCamera__CalculateConstrainOffset(UIDraggableCamera_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *rootForBounds; // x20
  UnityEngine_Camera_o *mCam; // x0
  float v5; // s8
  int v6; // w20
  float m_YMin; // s10
  int v8; // w22
  float m_XMin; // s9
  float m_Width; // s11
  int v11; // w21
  float v12; // s13
  float m_Height; // s14
  int v14; // w23
  float z; // s8
  float x; // s10
  float y; // s12
  float v18; // s3
  float v19; // s4
  float v20; // s5
  float v21; // s3
  float v22; // s0
  float v23; // s1
  UnityEngine_Vector2_o v24; // kr00_8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v26; // s2
  UnityEngine_Vector2_o v27; // 0:s4.4,4:s5.4
  UnityEngine_Vector2_o v28; // 0:s6.4,4:s7.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Rect_o rect; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v35; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v36; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C47583 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C47583 = 1;
  }
  rootForBounds = (UnityEngine_Object_o *)this->fields.rootForBounds;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(rootForBounds, 0, 0) )
  {
    mCam = (UnityEngine_Camera_o *)this->fields.rootForBounds;
    if ( !mCam )
      goto LABEL_19;
    if ( UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)mCam, 0) )
    {
      mCam = this->fields.mCam;
      if ( mCam )
      {
        LODWORD(v5) = *(_OWORD *)&UnityEngine_Camera__get_rect(mCam, 0);
        mCam = (UnityEngine_Camera_o *)UnityEngine_Screen__get_width(0);
        if ( this->fields.mCam )
        {
          v6 = (int)mCam;
          rect = UnityEngine_Camera__get_rect(this->fields.mCam, 0);
          m_YMin = rect.fields.m_YMin;
          mCam = (UnityEngine_Camera_o *)UnityEngine_Screen__get_height(0);
          if ( this->fields.mCam )
          {
            v8 = (int)mCam;
            v35 = UnityEngine_Camera__get_rect(this->fields.mCam, 0);
            m_XMin = v35.fields.m_XMin;
            m_Width = v35.fields.m_Width;
            mCam = (UnityEngine_Camera_o *)UnityEngine_Screen__get_width(0);
            if ( this->fields.mCam )
            {
              v11 = (int)mCam;
              v36 = UnityEngine_Camera__get_rect(this->fields.mCam, 0);
              v12 = v36.fields.m_YMin;
              m_Height = v36.fields.m_Height;
              mCam = (UnityEngine_Camera_o *)UnityEngine_Screen__get_height(0);
              if ( this->fields.mCam )
              {
                v14 = (int)mCam;
                v29.fields.x = v5 * (float)v6;
                v29.fields.y = m_YMin * (float)v8;
                v29.fields.z = 0.0;
                z = 0.0;
                v30 = UnityEngine_Camera__ScreenToWorldPoint_71073044(this->fields.mCam, v29, 0);
                mCam = this->fields.mCam;
                if ( mCam )
                {
                  x = v30.fields.x;
                  y = v30.fields.y;
                  v31.fields.x = (float)(m_Width + m_XMin) * (float)v11;
                  v31.fields.y = (float)(m_Height + v12) * (float)v14;
                  v31.fields.z = 0.0;
                  v32 = UnityEngine_Camera__ScreenToWorldPoint_71073044(mCam, v31, 0);
                  v32.fields.z = this->fields.mBounds.fields.m_Center.fields.x;
                  v18 = this->fields.mBounds.fields.m_Center.fields.y;
                  v19 = this->fields.mBounds.fields.m_Extents.fields.x;
                  v20 = this->fields.mBounds.fields.m_Extents.fields.y;
                  v28.fields.x = v32.fields.x;
                  v28.fields.y = v32.fields.y;
                  v32.fields.x = v32.fields.z - v19;
                  v32.fields.y = v18 - v20;
                  v32.fields.z = v32.fields.z + v19;
                  v21 = v18 + v20;
                  v27.fields.x = x;
                  v27.fields.y = y;
                  v24 = NGUIMath__ConstrainRect(
                          *(UnityEngine_Vector2_o *)&v32.fields.x,
                          *(UnityEngine_Vector2_o *)&v32.fields.z,
                          v27,
                          v28,
                          0);
                  v23 = v24.fields.y;
                  v22 = v24.fields.x;
                  goto LABEL_18;
                }
              }
            }
          }
        }
      }
LABEL_19:
      sub_1C372B4(mCam);
    }
  }
  if ( !byte_4C3C921 )
  {
    sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C921 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v22 = static_fields->zeroVector.fields.x;
  v23 = static_fields->zeroVector.fields.y;
  z = static_fields->zeroVector.fields.z;
LABEL_18:
  v26 = z;
  result.fields.z = v26;
  result.fields.y = v23;
  result.fields.x = v22;
  return result;
}


bool UIDraggableCamera__ConstrainToBounds(UIDraggableCamera_o *this, bool immediate, const MethodInfo *method)
{
  UnityEngine_Object_o *mTrans; // x21
  UnityEngine_Object_o *rootForBounds; // x21
  const MethodInfo *v7; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  float x; // s10
  float y; // s9
  float z; // s8
  UnityEngine_Transform_o *v12; // x19
  UnityEngine_Transform_o *v14; // x8
  UnityEngine_GameObject_o *v15; // x19
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C47584 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C47584 = 1;
  }
  mTrans = (UnityEngine_Object_o *)this->fields.mTrans;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(mTrans, 0, 0) )
    return 0;
  rootForBounds = (UnityEngine_Object_o *)this->fields.rootForBounds;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(rootForBounds, 0, 0) )
    return 0;
  v16 = UIDraggableCamera__CalculateConstrainOffset(this, v7);
  x = v16.fields.x;
  y = v16.fields.y;
  if ( (float)((float)(v16.fields.z * v16.fields.z)
             + (float)((float)(v16.fields.x * v16.fields.x) + (float)(v16.fields.y * v16.fields.y))) <= 0.0 )
    return 0;
  z = v16.fields.z;
  if ( !immediate )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    v14 = this->fields.mTrans;
    if ( v14 )
    {
      v15 = gameObject;
      position = UnityEngine_Transform__get_position(v14, 0);
      position.fields.x = position.fields.x - x;
      position.fields.y = position.fields.y - y;
      position.fields.z = position.fields.z - z;
      gameObject = (UnityEngine_GameObject_o *)SpringPosition__Begin(v15, position, 13.0, 0);
      if ( gameObject )
      {
        LOWORD(gameObject[2].klass) = 257;
        return 1;
      }
    }
LABEL_18:
    sub_1C372B4(gameObject);
  }
  v12 = this->fields.mTrans;
  if ( !v12 )
    goto LABEL_18;
  v17 = UnityEngine_Transform__get_position(v12, 0);
  v17.fields.x = v17.fields.x - x;
  v17.fields.y = v17.fields.y - y;
  v17.fields.z = v17.fields.z - z;
  UnityEngine_Transform__set_position(v12, v17, 0);
  return 1;
}


void UIDraggableCamera__Drag(UIDraggableCamera_o *this, UnityEngine_Vector2_o delta, const MethodInfo *method)
{
  UIRoot_o *v4; // x0
  intptr_t m_CachedPtr; // x8
  UnityEngine_Object_o *mRoot; // x20
  float32x2_t v7; // d1
  UnityEngine_Transform_o *mTrans; // x20
  const MethodInfo *v9; // x2
  int32_t dragEffect; // w9
  struct UnityEngine_Vector2_o zeroVector; // d0
  float y; // [xsp+0h] [xbp-40h]
  float x; // [xsp+10h] [xbp-30h]
  float32x2_t v14; // [xsp+10h] [xbp-30h]
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  y = delta.fields.y;
  x = delta.fields.x;
  if ( (byte_4C47586 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&UICamera_TypeInfo);
    byte_4C47586 = 1;
  }
  if ( this->fields.smoothDragStart && !this->fields.mDragStarted )
  {
    this->fields.mDragStarted = 1;
    return;
  }
  v4 = (UIRoot_o *)UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v4 = (UIRoot_o *)UICamera_TypeInfo;
  }
  m_CachedPtr = v4[2].fields.mTrans[6].fields.m_CachedPtr;
  if ( !m_CachedPtr )
    goto LABEL_21;
  *(_DWORD *)(m_CachedPtr + 96) = 2;
  mRoot = (UnityEngine_Object_o *)this->fields.mRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = (UIRoot_o *)UnityEngine_Object__op_Inequality(mRoot, 0, 0);
  v7.n64_u64[0] = __PAIR64__(LODWORD(y), LODWORD(x));
  if ( ((unsigned __int8)v4 & 1) != 0 )
  {
    v4 = this->fields.mRoot;
    if ( !v4 )
      goto LABEL_21;
    v7.n64_u64[0] = vmul_n_f32((float32x2_t)__PAIR64__(LODWORD(y), LODWORD(x)), UIRoot__get_pixelSizeAdjustment(v4, 0)).n64_u64[0];
  }
  mTrans = this->fields.mTrans;
  if ( !mTrans )
LABEL_21:
    sub_1C372B4(v4);
  v14.n64_u64[0] = vmul_f32(v7, vneg_f32((float32x2_t)this->fields.scale)).n64_u64[0];
  localPosition = UnityEngine_Transform__get_localPosition(this->fields.mTrans, 0);
  localPosition.fields.z = localPosition.fields.z + 0.0;
  localPosition.fields.x = v14.n64_f32[0] + localPosition.fields.x;
  localPosition.fields.y = v14.n64_f32[1] + localPosition.fields.y;
  UnityEngine_Transform__set_localPosition(mTrans, localPosition, 0);
  dragEffect = this->fields.dragEffect;
  this->fields.mMomentum = (struct UnityEngine_Vector2_o)vadd_f32(
                                                           (float32x2_t)this->fields.mMomentum,
                                                           vmul_f32(
                                                             vsub_f32(
                                                               vadd_f32(
                                                                 (float32x2_t)this->fields.mMomentum,
                                                                 vmul_n_f32(v14, this->fields.momentumAmount * 0.01)),
                                                               (float32x2_t)this->fields.mMomentum),
                                                             vdup_n_s32(0x3F2B851Fu))).n64_u64[0];
  if ( dragEffect != 2 && UIDraggableCamera__ConstrainToBounds(this, 1, v9) )
  {
    if ( !byte_4C3C81A )
    {
      sub_1C37058(&UnityEngine_Vector2_TypeInfo);
      byte_4C3C81A = 1;
    }
    zeroVector = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
    this->fields.mScroll = 0.0;
    this->fields.mMomentum = zeroVector;
  }
}


void UIDraggableCamera__Press(UIDraggableCamera_o *this, bool isPressed, const MethodInfo *method)
{
  UnityEngine_Object_o *rootForBounds; // x21
  const MethodInfo *v6; // x2
  __int128 v7; // q0
  struct UnityEngine_Vector2_o zeroVector; // d0
  Il2CppObject *Component_object; // x19
  _BOOL8 v10; // x0
  UnityEngine_Bounds_o v11[2]; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C47585 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_SpringPosition___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C47585 = 1;
  }
  if ( isPressed )
    this->fields.mDragStarted = 0;
  rootForBounds = (UnityEngine_Object_o *)this->fields.rootForBounds;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(rootForBounds, 0, 0) )
  {
    this->fields.mPressed = isPressed;
    if ( isPressed )
    {
      NGUIMath__CalculateAbsoluteWidgetBounds(v11, this->fields.rootForBounds, 0);
      v7 = *(_OWORD *)&v11[0].fields.m_Center.fields.x;
      v11[1] = v11[0];
      *(_QWORD *)&this->fields.mBounds.fields.m_Extents.fields.y = *(_QWORD *)&v11[0].fields.m_Extents.fields.y;
      *(_OWORD *)&this->fields.mBounds.fields.m_Center.fields.x = v7;
      if ( !byte_4C3C81A )
      {
        sub_1C37058(&UnityEngine_Vector2_TypeInfo);
        byte_4C3C81A = 1;
      }
      zeroVector = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
      this->fields.mScroll = 0.0;
      this->fields.mMomentum = zeroVector;
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)this,
                           (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_SpringPosition___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v10 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
      if ( v10 )
      {
        if ( !Component_object )
          sub_1C372B4(v10);
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0);
      }
    }
    else if ( this->fields.dragEffect == 2 )
    {
      UIDraggableCamera__ConstrainToBounds(this, 0, v6);
    }
  }
}


void UIDraggableCamera__Scroll(UIDraggableCamera_o *this, float delta, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x20
  float mScroll; // s0
  float v7; // s1
  float v8; // s5

  if ( (byte_4C47587 & 1) == 0 )
  {
    sub_1C37058(&NGUITools_TypeInfo);
    byte_4C47587 = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    if ( NGUITools__GetActive_49345096(gameObject, 0) )
    {
      mScroll = this->fields.mScroll;
      v7 = -1.0;
      if ( mScroll < 0.0 )
        v8 = -1.0;
      else
        v8 = 1.0;
      if ( delta >= 0.0 )
        v7 = 1.0;
      if ( v8 != v7 )
        mScroll = 0.0;
      this->fields.mScroll = mScroll + (float)(this->fields.scrollWheelFactor * delta);
    }
  }
}


void UIDraggableCamera__Start(UIDraggableCamera_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  struct UnityEngine_Transform_o *transform; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  UnityEngine_GameObject_o *gameObject; // x20
  Il2CppObject *v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  UnityEngine_Object_o *rootForBounds; // x20
  UnityEngine_GameObject_o *v14; // x20
  System_String_o *Hierarchy; // x0
  Il2CppObject *v16; // x20

  if ( (byte_4C47582 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_Camera___);
    sub_1C37058(&UnityEngine_Debug_TypeInfo);
    sub_1C37058(&Method_NGUITools_FindInParents_UIRoot___);
    sub_1C37058(&NGUITools_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_280/*" needs the 'Root For Bounds' parameter to be set"*/);
    byte_4C47582 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_Camera___);
  this->fields.mCam = (struct UnityEngine_Camera_o *)Component_object;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mCam, (int32_t)Component_object, v4, v5);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  this->fields.mTrans = transform;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mTrans, (int32_t)transform, v7, v8);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  v10 = NGUITools__FindInParents_object_(
          gameObject,
          (const MethodInfo_3171F1C *)Method_NGUITools_FindInParents_UIRoot___);
  this->fields.mRoot = (struct UIRoot_o *)v10;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mRoot, (int32_t)v10, v11, v12);
  rootForBounds = (UnityEngine_Object_o *)this->fields.rootForBounds;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(rootForBounds, 0, 0) )
  {
    v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    Hierarchy = NGUITools__GetHierarchy(v14, 0);
    v16 = (Il2CppObject *)System_String__Concat_63561656(Hierarchy, (System_String_o *)StringLiteral_280/*" needs the 'Root For Bounds' parameter to be set"*/, 0);
    if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    UnityEngine_Debug__LogError_71079304(v16, (UnityEngine_Object_o *)this, 0);
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
  }
}


void UIDraggableCamera__Update(UIDraggableCamera_o *this, const MethodInfo *method)
{
  float deltaTime; // s8
  Il2CppObject *Component_object; // x20
  System_Math_c *v5; // x0
  float mScroll; // s0
  float y; // s9
  float x; // s10
  UnityEngine_Transform_o *mTrans; // x21
  float v10; // s9
  float v11; // s10
  float z; // s11
  UnityEngine_Vector2_o v13; // kr00_8
  __int128 v14; // q0
  int32_t dragEffect; // w9
  const MethodInfo *v16; // x2
  Il2CppObject *v17; // x19
  UnityEngine_Bounds_o v18[2]; // [xsp+8h] [xbp-88h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C47588 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_SpringPosition___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C47588 = 1;
  }
  deltaTime = RealTime__get_deltaTime(0);
  if ( this->fields.mPressed )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_SpringPosition___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v5 = (System_Math_c *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
    if ( ((unsigned __int8)v5 & 1) == 0 )
      goto LABEL_22;
    if ( Component_object )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0);
LABEL_22:
      this->fields.mScroll = 0.0;
      NGUIMath__SpringDampen_49301232(&this->fields.mMomentum, 9.0, deltaTime, 0);
      return;
    }
LABEL_23:
    sub_1C372B4(v5);
  }
  mScroll = this->fields.mScroll;
  this->fields.mMomentum = (struct UnityEngine_Vector2_o)vadd_f32(
                                                           (float32x2_t)this->fields.mMomentum,
                                                           vmul_n_f32((float32x2_t)this->fields.scale, mScroll * 20.0)).n64_u64[0];
  this->fields.mScroll = NGUIMath__SpringLerp_49238604(mScroll, 0.0, 20.0, deltaTime, 0);
  if ( !byte_4C3C922 )
  {
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C3C922 = 1;
  }
  x = this->fields.mMomentum.fields.x;
  y = this->fields.mMomentum.fields.y;
  v5 = System_Math_TypeInfo;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( sqrtf((float)(x * x) + (float)(y * y)) <= 0.01 )
    goto LABEL_22;
  mTrans = this->fields.mTrans;
  if ( !mTrans )
    goto LABEL_23;
  localPosition = UnityEngine_Transform__get_localPosition(this->fields.mTrans, 0);
  v10 = localPosition.fields.x;
  v11 = localPosition.fields.y;
  z = localPosition.fields.z;
  v13 = NGUIMath__SpringDampen_49301232(&this->fields.mMomentum, 9.0, deltaTime, 0);
  v20.fields.x = v10 + v13.fields.x;
  v20.fields.y = v11 + v13.fields.y;
  v20.fields.z = z + 0.0;
  UnityEngine_Transform__set_localPosition(mTrans, v20, 0);
  NGUIMath__CalculateAbsoluteWidgetBounds(v18, this->fields.rootForBounds, 0);
  v14 = *(_OWORD *)&v18[0].fields.m_Center.fields.x;
  v18[1] = v18[0];
  dragEffect = this->fields.dragEffect;
  *(_QWORD *)&this->fields.mBounds.fields.m_Extents.fields.y = *(_QWORD *)&v18[0].fields.m_Extents.fields.y;
  *(_OWORD *)&this->fields.mBounds.fields.m_Center.fields.x = v14;
  if ( !UIDraggableCamera__ConstrainToBounds(this, dragEffect == 0, v16) )
  {
    v17 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)this,
            (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_SpringPosition___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v5 = (System_Math_c *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v17, 0, 0);
    if ( ((unsigned __int8)v5 & 1) != 0 )
    {
      if ( !v17 )
        goto LABEL_23;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v17, 0, 0);
    }
  }
}


UnityEngine_Vector2_o UIDraggableCamera__get_currentMomentum(UIDraggableCamera_o *this, const MethodInfo *method)
{
  float x; // s0
  float y; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  x = this->fields.mMomentum.fields.x;
  y = this->fields.mMomentum.fields.y;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


void UIDraggableCamera__set_currentMomentum(
        UIDraggableCamera_o *this,
        UnityEngine_Vector2_o value,
        const MethodInfo *method)
{
  this->fields.mMomentum = value;
}