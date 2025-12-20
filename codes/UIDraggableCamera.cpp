void UIDraggableCamera___ctor(UIDraggableCamera_o *this, const MethodInfo *method)
{
  UnityEngine_Vector2_c *v3; // x8
  struct UnityEngine_Vector2_o oneVector; // d0

  if ( !byte_4D2CAFB )
  {
    sub_1C94098(&UnityEngine_Vector2_TypeInfo);
    byte_4D2CAFB = 1;
  }
  v3 = UnityEngine_Vector2_TypeInfo;
  oneVector = UnityEngine_Vector2_TypeInfo->static_fields->oneVector;
  this->fields.dragEffect = 2;
  this->fields.smoothDragStart = 1;
  this->fields.momentumAmount = 35.0;
  this->fields.scale = oneVector;
  if ( !byte_4D25DF9 )
  {
    sub_1C94098(&UnityEngine_Vector2_TypeInfo);
    v3 = UnityEngine_Vector2_TypeInfo;
    byte_4D25DF9 = 1;
  }
  this->fields.mMomentum = v3->static_fields->zeroVector;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o UIDraggableCamera__CalculateConstrainOffset(UIDraggableCamera_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *rootForBounds; // x20
  __int64 v4; // x1
  UnityEngine_Camera_o *mCam; // x0
  float v6; // s8
  int v7; // w20
  float m_YMin; // s10
  int v9; // w22
  float m_XMin; // s9
  float m_Width; // s11
  int v12; // w21
  float v13; // s13
  float m_Height; // s14
  int v15; // w23
  float z; // s8
  float x; // s10
  float y; // s12
  float v19; // s3
  float v20; // s4
  float v21; // s5
  float v22; // s3
  float v23; // s0
  float v24; // s1
  UnityEngine_Vector2_o v25; // kr00_8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v27; // s2
  UnityEngine_Vector2_o v28; // 0:s4.4,4:s5.4
  UnityEngine_Vector2_o v29; // 0:s6.4,4:s7.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Rect_o rect; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v36; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v37; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D30E62 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D30E62 = 1;
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
        LODWORD(v6) = *(_OWORD *)&UnityEngine_Camera__get_rect(mCam, 0);
        mCam = (UnityEngine_Camera_o *)UnityEngine_Screen__get_width(0);
        if ( this->fields.mCam )
        {
          v7 = (int)mCam;
          rect = UnityEngine_Camera__get_rect(this->fields.mCam, 0);
          m_YMin = rect.fields.m_YMin;
          mCam = (UnityEngine_Camera_o *)UnityEngine_Screen__get_height(0);
          if ( this->fields.mCam )
          {
            v9 = (int)mCam;
            v36 = UnityEngine_Camera__get_rect(this->fields.mCam, 0);
            m_XMin = v36.fields.m_XMin;
            m_Width = v36.fields.m_Width;
            mCam = (UnityEngine_Camera_o *)UnityEngine_Screen__get_width(0);
            if ( this->fields.mCam )
            {
              v12 = (int)mCam;
              v37 = UnityEngine_Camera__get_rect(this->fields.mCam, 0);
              v13 = v37.fields.m_YMin;
              m_Height = v37.fields.m_Height;
              mCam = (UnityEngine_Camera_o *)UnityEngine_Screen__get_height(0);
              if ( this->fields.mCam )
              {
                v15 = (int)mCam;
                v30.fields.x = v6 * (float)v7;
                v30.fields.y = m_YMin * (float)v9;
                v30.fields.z = 0.0;
                z = 0.0;
                v31 = UnityEngine_Camera__ScreenToWorldPoint_71915568(this->fields.mCam, v30, 0);
                mCam = this->fields.mCam;
                if ( mCam )
                {
                  x = v31.fields.x;
                  y = v31.fields.y;
                  v32.fields.x = (float)(m_Width + m_XMin) * (float)v12;
                  v32.fields.y = (float)(m_Height + v13) * (float)v15;
                  v32.fields.z = 0.0;
                  v33 = UnityEngine_Camera__ScreenToWorldPoint_71915568(mCam, v32, 0);
                  v33.fields.z = this->fields.mBounds.fields.m_Center.fields.x;
                  v19 = this->fields.mBounds.fields.m_Center.fields.y;
                  v20 = this->fields.mBounds.fields.m_Extents.fields.x;
                  v21 = this->fields.mBounds.fields.m_Extents.fields.y;
                  v29.fields.x = v33.fields.x;
                  v29.fields.y = v33.fields.y;
                  v33.fields.x = v33.fields.z - v20;
                  v33.fields.y = v19 - v21;
                  v33.fields.z = v33.fields.z + v20;
                  v22 = v19 + v21;
                  v28.fields.x = x;
                  v28.fields.y = y;
                  v25 = NGUIMath__ConstrainRect(
                          *(UnityEngine_Vector2_o *)&v33.fields.x,
                          *(UnityEngine_Vector2_o *)&v33.fields.z,
                          v28,
                          v29,
                          0);
                  v24 = v25.fields.y;
                  v23 = v25.fields.x;
                  goto LABEL_18;
                }
              }
            }
          }
        }
      }
LABEL_19:
      sub_1C942F0(mCam, v4);
    }
  }
  if ( !byte_4D25F19 )
  {
    sub_1C94098(&UnityEngine_Vector3_TypeInfo);
    byte_4D25F19 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v23 = static_fields->zeroVector.fields.x;
  v24 = static_fields->zeroVector.fields.y;
  z = static_fields->zeroVector.fields.z;
LABEL_18:
  v27 = z;
  result.fields.z = v27;
  result.fields.y = v24;
  result.fields.x = v23;
  return result;
}


bool UIDraggableCamera__ConstrainToBounds(UIDraggableCamera_o *this, bool immediate, const MethodInfo *method)
{
  UnityEngine_Object_o *mTrans; // x21
  UnityEngine_Object_o *rootForBounds; // x21
  const MethodInfo *v7; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v9; // x1
  float x; // s10
  float y; // s9
  float z; // s8
  UnityEngine_Transform_o *v13; // x19
  UnityEngine_Transform_o *v15; // x8
  UnityEngine_GameObject_o *v16; // x19
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D30E63 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D30E63 = 1;
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
  v17 = UIDraggableCamera__CalculateConstrainOffset(this, v7);
  x = v17.fields.x;
  y = v17.fields.y;
  if ( (float)((float)(v17.fields.z * v17.fields.z)
             + (float)((float)(v17.fields.x * v17.fields.x) + (float)(v17.fields.y * v17.fields.y))) <= 0.0 )
    return 0;
  z = v17.fields.z;
  if ( !immediate )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    v15 = this->fields.mTrans;
    if ( v15 )
    {
      v16 = gameObject;
      position = UnityEngine_Transform__get_position(v15, 0);
      position.fields.x = position.fields.x - x;
      position.fields.y = position.fields.y - y;
      position.fields.z = position.fields.z - z;
      gameObject = (UnityEngine_GameObject_o *)SpringPosition__Begin(v16, position, 13.0, 0);
      if ( gameObject )
      {
        LOWORD(gameObject[2].klass) = 257;
        return 1;
      }
    }
LABEL_18:
    sub_1C942F0(gameObject, v9);
  }
  v13 = this->fields.mTrans;
  if ( !v13 )
    goto LABEL_18;
  v18 = UnityEngine_Transform__get_position(v13, 0);
  v18.fields.x = v18.fields.x - x;
  v18.fields.y = v18.fields.y - y;
  v18.fields.z = v18.fields.z - z;
  UnityEngine_Transform__set_position(v13, v18, 0);
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
  if ( (byte_4D30E65 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&UICamera_TypeInfo);
    byte_4D30E65 = 1;
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
    sub_1C942F0(v4, method);
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
    if ( !byte_4D25DF9 )
    {
      sub_1C94098(&UnityEngine_Vector2_TypeInfo);
      byte_4D25DF9 = 1;
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
  __int64 v11; // x1
  UnityEngine_Bounds_o v12[2]; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4D30E64 & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_Component_GetComponent_SpringPosition___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D30E64 = 1;
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
      NGUIMath__CalculateAbsoluteWidgetBounds(v12, this->fields.rootForBounds, 0);
      v7 = *(_OWORD *)&v12[0].fields.m_Center.fields.x;
      v12[1] = v12[0];
      *(_QWORD *)&this->fields.mBounds.fields.m_Extents.fields.y = *(_QWORD *)&v12[0].fields.m_Extents.fields.y;
      *(_OWORD *)&this->fields.mBounds.fields.m_Center.fields.x = v7;
      if ( !byte_4D25DF9 )
      {
        sub_1C94098(&UnityEngine_Vector2_TypeInfo);
        byte_4D25DF9 = 1;
      }
      zeroVector = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
      this->fields.mScroll = 0.0;
      this->fields.mMomentum = zeroVector;
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)this,
                           (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_SpringPosition___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v10 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
      if ( v10 )
      {
        if ( !Component_object )
          sub_1C942F0(v10, v11);
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

  if ( (byte_4D30E66 & 1) == 0 )
  {
    sub_1C94098(&NGUITools_TypeInfo);
    byte_4D30E66 = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    if ( NGUITools__GetActive_50038832(gameObject, 0) )
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
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  struct UnityEngine_Transform_o *transform; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  UnityEngine_GameObject_o *gameObject; // x20
  Il2CppObject *v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  UnityEngine_Object_o *rootForBounds; // x20
  UnityEngine_GameObject_o *v26; // x20
  System_String_o *Hierarchy; // x0
  Il2CppObject *v28; // x20

  if ( (byte_4D30E61 & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_Component_GetComponent_Camera___);
    sub_1C94098(&UnityEngine_Debug_TypeInfo);
    sub_1C94098(&Method_NGUITools_FindInParents_UIRoot___);
    sub_1C94098(&NGUITools_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&StringLiteral_280/*" needs the 'Root For Bounds' parameter to be set"*/);
    byte_4D30E61 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_Camera___);
  this->fields.mCam = (struct UnityEngine_Camera_o *)Component_object;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.mCam, (int32_t)Component_object, v4, v5, v6, v7, v8, v9);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  this->fields.mTrans = transform;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.mTrans, (int32_t)transform, v11, v12, v13, v14, v15, v16);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  v18 = NGUITools__FindInParents_object_(
          gameObject,
          (const MethodInfo_32274D4 *)Method_NGUITools_FindInParents_UIRoot___);
  this->fields.mRoot = (struct UIRoot_o *)v18;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.mRoot, (int32_t)v18, v19, v20, v21, v22, v23, v24);
  rootForBounds = (UnityEngine_Object_o *)this->fields.rootForBounds;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(rootForBounds, 0, 0) )
  {
    v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    Hierarchy = NGUITools__GetHierarchy(v26, 0);
    v28 = (Il2CppObject *)System_String__Concat_64417744(Hierarchy, (System_String_o *)StringLiteral_280/*" needs the 'Root For Bounds' parameter to be set"*/, 0);
    if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    UnityEngine_Debug__LogError_71922664(v28, (UnityEngine_Object_o *)this, 0);
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
  }
}


void UIDraggableCamera__Update(UIDraggableCamera_o *this, const MethodInfo *method)
{
  float deltaTime; // s8
  Il2CppObject *Component_object; // x20
  System_Math_c *v5; // x0
  __int64 v6; // x1
  float mScroll; // s0
  float y; // s9
  float x; // s10
  UnityEngine_Transform_o *mTrans; // x21
  float v11; // s9
  float v12; // s10
  float z; // s11
  UnityEngine_Vector2_o v14; // kr00_8
  __int128 v15; // q0
  int32_t dragEffect; // w9
  const MethodInfo *v17; // x2
  Il2CppObject *v18; // x19
  UnityEngine_Bounds_o v19[2]; // [xsp+8h] [xbp-88h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D30E67 & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_Component_GetComponent_SpringPosition___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D30E67 = 1;
  }
  deltaTime = RealTime__get_deltaTime(0);
  if ( this->fields.mPressed )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_SpringPosition___);
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
      NGUIMath__SpringDampen_49991880(&this->fields.mMomentum, 9.0, deltaTime, 0);
      return;
    }
LABEL_23:
    sub_1C942F0(v5, v6);
  }
  mScroll = this->fields.mScroll;
  this->fields.mMomentum = (struct UnityEngine_Vector2_o)vadd_f32(
                                                           (float32x2_t)this->fields.mMomentum,
                                                           vmul_n_f32((float32x2_t)this->fields.scale, mScroll * 20.0)).n64_u64[0];
  this->fields.mScroll = NGUIMath__SpringLerp_49929252(mScroll, 0.0, 20.0, deltaTime, 0);
  if ( !byte_4D25F1A )
  {
    sub_1C94098(&System_Math_TypeInfo);
    byte_4D25F1A = 1;
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
  v11 = localPosition.fields.x;
  v12 = localPosition.fields.y;
  z = localPosition.fields.z;
  v14 = NGUIMath__SpringDampen_49991880(&this->fields.mMomentum, 9.0, deltaTime, 0);
  v21.fields.x = v11 + v14.fields.x;
  v21.fields.y = v12 + v14.fields.y;
  v21.fields.z = z + 0.0;
  UnityEngine_Transform__set_localPosition(mTrans, v21, 0);
  NGUIMath__CalculateAbsoluteWidgetBounds(v19, this->fields.rootForBounds, 0);
  v15 = *(_OWORD *)&v19[0].fields.m_Center.fields.x;
  v19[1] = v19[0];
  dragEffect = this->fields.dragEffect;
  *(_QWORD *)&this->fields.mBounds.fields.m_Extents.fields.y = *(_QWORD *)&v19[0].fields.m_Extents.fields.y;
  *(_OWORD *)&this->fields.mBounds.fields.m_Center.fields.x = v15;
  if ( !UIDraggableCamera__ConstrainToBounds(this, dragEffect == 0, v17) )
  {
    v18 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)this,
            (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_SpringPosition___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v5 = (System_Math_c *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v18, 0, 0);
    if ( ((unsigned __int8)v5 & 1) != 0 )
    {
      if ( !v18 )
        goto LABEL_23;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v18, 0, 0);
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