void UIDraggableCamera___ctor(UIDraggableCamera_o *this, const MethodInfo *method)
{
  UnityEngine_Vector2_c *v3; // x8
  struct UnityEngine_Vector2_o oneVector; // d0
  int v5; // w9

  if ( !byte_596F578 )
  {
    sub_2213A60(&UnityEngine_Vector2_TypeInfo);
    byte_596F578 = 1;
  }
  v3 = UnityEngine_Vector2_TypeInfo;
  oneVector = UnityEngine_Vector2_TypeInfo->static_fields->oneVector;
  v5 = (unsigned __int8)byte_59699C0;
  this->fields.dragEffect = 2;
  this->fields.smoothDragStart = 1;
  this->fields.scale = oneVector;
  this->fields.momentumAmount = 35.0;
  if ( !v5 )
  {
    sub_2213A60(&UnityEngine_Vector2_TypeInfo);
    v3 = UnityEngine_Vector2_TypeInfo;
    byte_59699C0 = 1;
  }
  this->fields.mMomentum = v3->static_fields->zeroVector;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


UnityEngine_Vector3_o UIDraggableCamera__CalculateConstrainOffset(UIDraggableCamera_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *rootForBounds; // x20
  __int64 v4; // x1
  UnityEngine_Camera_o *mCam; // x0
  float v6; // s8
  int v7; // w20
  float m_YMin; // s11
  int v9; // w22
  int v10; // w21
  int v11; // w23
  float z; // s8
  float x; // s2
  float y; // s7
  float v15; // s3
  float v16; // s5
  UnityEngine_Vector2_o v19; // kr68_8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  unsigned __int64 v22; // kr40_8
  unsigned __int64 v23; // kr60_8
  UnityEngine_Rect_o rect; // 0:kr20_16.16
  UnityEngine_Rect_o v25; // 0:kr30_16.16
  UnityEngine_Vector2_o v26; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v27; // 0:s2.4,4:s3.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5974FBF & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974FBF = 1;
  }
  rootForBounds = (UnityEngine_Object_o *)this->fields.rootForBounds;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
          m_YMin = UnityEngine_Camera__get_rect(this->fields.mCam, 0).fields.m_YMin;
          mCam = (UnityEngine_Camera_o *)UnityEngine_Screen__get_height(0);
          if ( this->fields.mCam )
          {
            v9 = (int)mCam;
            rect = UnityEngine_Camera__get_rect(this->fields.mCam, 0);
            mCam = (UnityEngine_Camera_o *)UnityEngine_Screen__get_width(0);
            if ( this->fields.mCam )
            {
              v10 = (int)mCam;
              v25 = UnityEngine_Camera__get_rect(this->fields.mCam, 0);
              mCam = (UnityEngine_Camera_o *)UnityEngine_Screen__get_height(0);
              if ( this->fields.mCam )
              {
                v11 = (int)mCam;
                v28.fields.z = 0.0;
                v28.fields.x = v6 * (float)v7;
                v28.fields.y = m_YMin * (float)v9;
                z = 0.0;
                v22 = (unsigned __int64)UnityEngine_Camera__ScreenToWorldPoint_83198228(this->fields.mCam, v28, 0);
                mCam = this->fields.mCam;
                if ( mCam )
                {
                  v29.fields.x = (float)(rect.fields.m_Width + rect.fields.m_XMin) * (float)v10;
                  v29.fields.z = 0.0;
                  v29.fields.y = (float)(v25.fields.m_Height + v25.fields.m_YMin) * (float)v11;
                  v23 = (unsigned __int64)UnityEngine_Camera__ScreenToWorldPoint_83198228(mCam, v29, 0);
                  x = this->fields.mBounds.fields.m_Extents.fields.x;
                  y = this->fields.mBounds.fields.m_Extents.fields.y;
                  v15 = this->fields.mBounds.fields.m_Center.fields.x;
                  v16 = this->fields.mBounds.fields.m_Center.fields.y;
                  v26.fields.x = v15 - x;
                  v27.fields.x = v15 + x;
                  v27.fields.y = v16 + y;
                  v26.fields.y = v16 - y;
                  v19 = NGUIMath__ConstrainRect(v26, v27, (UnityEngine_Vector2_o)v22, (UnityEngine_Vector2_o)v23, 0);
                  result.fields.y = v19.fields.y;
                  result.fields.x = v19.fields.x;
                  goto LABEL_18;
                }
              }
            }
          }
        }
      }
LABEL_19:
      sub_2213CDC(mCam, v4);
    }
  }
  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  result.fields.x = static_fields->zeroVector.fields.x;
  result.fields.y = static_fields->zeroVector.fields.y;
  z = static_fields->zeroVector.fields.z;
LABEL_18:
  result.fields.z = z;
  return result;
}


// local variable allocation has failed, the output may be wrong!
bool UIDraggableCamera__ConstrainToBounds(UIDraggableCamera_o *this, bool immediate, const MethodInfo *method)
{
  UnityEngine_Object_o *mTrans; // x21
  __int64 v6; // x1
  UnityEngine_Object_o *rootForBounds; // x21
  const MethodInfo *v8; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v10; // x1
  UnityEngine_Transform_o *v11; // x19
  UnityEngine_Transform_o *v13; // x8
  UnityEngine_GameObject_o *v14; // x19
  UnityEngine_Vector3_o v15; // 0:kr00_12.12
  UnityEngine_Vector3_o v16; // 0:kr14_12.12
  UnityEngine_Vector3_o position; // 0:kr20_12.12
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5974FC0 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974FC0 = 1;
  }
  mTrans = (UnityEngine_Object_o *)this->fields.mTrans;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, immediate);
  if ( !UnityEngine_Object__op_Inequality(mTrans, 0, 0) )
    return 0;
  rootForBounds = (UnityEngine_Object_o *)this->fields.rootForBounds;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  if ( !UnityEngine_Object__op_Inequality(rootForBounds, 0, 0) )
    return 0;
  v15 = UIDraggableCamera__CalculateConstrainOffset(this, v8);
  if ( (float)((float)(v15.fields.z * v15.fields.z)
             + (float)((float)(v15.fields.x * v15.fields.x) + (float)(v15.fields.y * v15.fields.y))) <= 0.0 )
    return 0;
  if ( !immediate )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    v13 = this->fields.mTrans;
    if ( v13 )
    {
      v14 = gameObject;
      position = UnityEngine_Transform__get_position(v13, 0);
      v19.fields.x = position.fields.x - v15.fields.x;
      v19.fields.y = position.fields.y - v15.fields.y;
      v19.fields.z = position.fields.z - v15.fields.z;
      gameObject = (UnityEngine_GameObject_o *)SpringPosition__Begin(v14, v19, 13.0, 0);
      if ( gameObject )
      {
        LOWORD(gameObject[2].klass) = 257;
        return 1;
      }
    }
LABEL_18:
    sub_2213CDC(gameObject, v10);
  }
  v11 = this->fields.mTrans;
  if ( !v11 )
    goto LABEL_18;
  v16 = UnityEngine_Transform__get_position(v11, 0);
  v18.fields.x = v16.fields.x - v15.fields.x;
  v18.fields.y = v16.fields.y - v15.fields.y;
  v18.fields.z = v16.fields.z - v15.fields.z;
  UnityEngine_Transform__set_position(v11, v18, 0);
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
  int32_t dragEffect; // w8
  struct UnityEngine_Vector2_o zeroVector; // d0
  float y; // [xsp+0h] [xbp-40h]
  float x; // [xsp+10h] [xbp-30h]
  float32x2_t v14; // [xsp+10h] [xbp-30h]
  UnityEngine_Vector3_o localPosition; // 0:kr00_12.12
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4

  y = delta.fields.y;
  x = delta.fields.x;
  if ( (byte_5974FC2 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UICamera_TypeInfo);
    byte_5974FC2 = 1;
  }
  if ( this->fields.smoothDragStart && !this->fields.mDragStarted )
  {
    this->fields.mDragStarted = 1;
    return;
  }
  v4 = (UIRoot_o *)UICamera_TypeInfo;
  if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, method);
    v4 = (UIRoot_o *)UICamera_TypeInfo;
  }
  m_CachedPtr = v4[2].fields.mTrans[6].fields.m_CachedPtr;
  if ( !m_CachedPtr )
    goto LABEL_21;
  mRoot = (UnityEngine_Object_o *)this->fields.mRoot;
  *(_DWORD *)(m_CachedPtr + 96) = 2;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
    sub_2213CDC(v4, method);
  v14.n64_u64[0] = vmul_f32(v7, vneg_f32((float32x2_t)this->fields.scale)).n64_u64[0];
  localPosition = UnityEngine_Transform__get_localPosition(this->fields.mTrans, 0);
  v16.fields.x = v14.n64_f32[0] + localPosition.fields.x;
  v16.fields.z = localPosition.fields.z + 0.0;
  v16.fields.y = v14.n64_f32[1] + localPosition.fields.y;
  UnityEngine_Transform__set_localPosition(mTrans, v16, 0);
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
    if ( !byte_59699C0 )
    {
      sub_2213A60(&UnityEngine_Vector2_TypeInfo);
      byte_59699C0 = 1;
    }
    zeroVector = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
    this->fields.mScroll = 0.0;
    this->fields.mMomentum = zeroVector;
  }
}


// local variable allocation has failed, the output may be wrong!
void UIDraggableCamera__Press(UIDraggableCamera_o *this, bool isPressed, const MethodInfo *method)
{
  UnityEngine_Object_o *rootForBounds; // x21
  const MethodInfo *v6; // x2
  __int64 v7; // x8
  int v8; // w9
  struct UnityEngine_Vector2_o zeroVector; // d0
  const MethodInfo_3820CA8 *v10; // x1
  __int64 v11; // x1
  Il2CppObject *Component_object; // x19
  _BOOL8 v13; // x0
  __int64 v14; // x1
  UnityEngine_Bounds_o v15; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_5974FC1 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_SpringPosition___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974FC1 = 1;
  }
  if ( isPressed )
    this->fields.mDragStarted = 0;
  rootForBounds = (UnityEngine_Object_o *)this->fields.rootForBounds;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isPressed);
  if ( UnityEngine_Object__op_Inequality(rootForBounds, 0, 0) )
  {
    this->fields.mPressed = isPressed;
    if ( isPressed )
    {
      NGUIMath__CalculateAbsoluteWidgetBounds(&v15, this->fields.rootForBounds, 0);
      v7 = *(_QWORD *)&v15.fields.m_Extents.fields.y;
      v8 = (unsigned __int8)byte_59699C0;
      *(_OWORD *)&this->fields.mBounds.fields.m_Center.fields.x = *(_OWORD *)&v15.fields.m_Center.fields.x;
      *(_QWORD *)&this->fields.mBounds.fields.m_Extents.fields.y = v7;
      if ( !v8 )
      {
        sub_2213A60(&UnityEngine_Vector2_TypeInfo);
        byte_59699C0 = 1;
      }
      zeroVector = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
      v10 = (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_SpringPosition___;
      this->fields.mScroll = 0.0;
      this->fields.mMomentum = zeroVector;
      Component_object = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)this, v10);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
      v13 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
      if ( v13 )
      {
        if ( !Component_object )
          sub_2213CDC(v13, v14);
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
  __int64 v5; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  float mScroll; // s0
  float v8; // s1
  float v9; // s3

  if ( (byte_5974FC3 & 1) == 0 )
  {
    sub_2213A60(&NGUITools_TypeInfo);
    byte_5974FC3 = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v5);
    if ( NGUITools__GetActive_56411004(gameObject, 0) )
    {
      mScroll = this->fields.mScroll;
      v8 = 1.0;
      if ( mScroll >= 0.0 )
        v9 = 1.0;
      else
        v9 = -1.0;
      if ( delta < 0.0 )
        v8 = -1.0;
      if ( v9 != v8 )
      {
        mScroll = 0.0;
        this->fields.mScroll = 0.0;
      }
      this->fields.mScroll = mScroll + (float)(this->fields.scrollWheelFactor * delta);
    }
  }
}


void UIDraggableCamera__Start(UIDraggableCamera_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  struct UnityEngine_Transform_o *transform; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  __int64 v17; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  Il2CppObject *v19; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  __int64 v26; // x1
  UnityEngine_Object_o *rootForBounds; // x20
  __int64 v28; // x1
  UnityEngine_GameObject_o *v29; // x20
  System_String_o *Hierarchy; // x0
  __int64 v31; // x1
  Il2CppObject *v32; // x20

  if ( (byte_5974FBE & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Camera___);
    sub_2213A60(&UnityEngine_Debug_TypeInfo);
    sub_2213A60(&Method_NGUITools_FindInParents_UIRoot___);
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_290/*" needs the 'Root For Bounds' parameter to be set"*/);
    byte_5974FBE = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Camera___);
  this->fields.mCam = (struct UnityEngine_Camera_o *)Component_object;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mCam, (int32_t)Component_object, v4, v5, v6, v7, v8, v9);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  this->fields.mTrans = transform;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mTrans,
    (int32_t)transform,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v17);
  v19 = NGUITools__FindInParents_object_(
          gameObject,
          (const MethodInfo_38F0B48 *)Method_NGUITools_FindInParents_UIRoot___);
  this->fields.mRoot = (struct UIRoot_o *)v19;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mRoot, (int32_t)v19, v20, v21, v22, v23, v24, v25);
  rootForBounds = (UnityEngine_Object_o *)this->fields.rootForBounds;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
  if ( UnityEngine_Object__op_Equality(rootForBounds, 0, 0) )
  {
    v29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v28);
    Hierarchy = NGUITools__GetHierarchy(v29, 0);
    v32 = (Il2CppObject *)System_String__Concat_75651716(Hierarchy, (System_String_o *)StringLiteral_290/*" needs the 'Root For Bounds' parameter to be set"*/, 0);
    if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, v31);
    UnityEngine_Debug__LogError_83208728(v32, (UnityEngine_Object_o *)this, 0);
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
  }
}


void UIDraggableCamera__Update(UIDraggableCamera_o *this, const MethodInfo *method)
{
  float deltaTime; // s8
  __int64 v4; // x1
  Il2CppObject *Component_object; // x20
  System_Math_c *v6; // x0
  __int64 v7; // x1
  float mScroll; // s0
  struct UnityEngine_Vector2_o mMomentum; // d9
  UnityEngine_Transform_o *mTrans; // x21
  UnityEngine_Vector2_o v11; // kr10_8
  int32_t dragEffect; // w8
  __int64 v13; // x9
  const MethodInfo *v14; // x2
  __int64 v15; // x1
  Il2CppObject *v16; // x19
  UnityEngine_Bounds_o v17; // [xsp+8h] [xbp-68h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:kr00_12.12
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5974FC4 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_SpringPosition___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974FC4 = 1;
  }
  deltaTime = RealTime__get_deltaTime(0);
  if ( this->fields.mPressed )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_SpringPosition___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
    v6 = (System_Math_c *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
    if ( ((unsigned __int8)v6 & 1) == 0 )
      goto LABEL_22;
    if ( Component_object )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0);
LABEL_22:
      this->fields.mScroll = 0.0;
      NGUIMath__SpringDampen_56364100(&this->fields.mMomentum, 9.0, deltaTime, 0);
      return;
    }
LABEL_23:
    sub_2213CDC(v6, v7);
  }
  mScroll = this->fields.mScroll;
  this->fields.mMomentum = (struct UnityEngine_Vector2_o)vadd_f32(
                                                           (float32x2_t)this->fields.mMomentum,
                                                           vmul_n_f32((float32x2_t)this->fields.scale, mScroll * 20.0)).n64_u64[0];
  this->fields.mScroll = NGUIMath__SpringLerp_56302512(mScroll, 0.0, 20.0, deltaTime, 0);
  if ( !byte_5969AE1 )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_5969AE1 = 1;
  }
  mMomentum = this->fields.mMomentum;
  v6 = System_Math_TypeInfo;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v7);
  if ( sqrtf(vaddv_f32(vmul_f32((float32x2_t)mMomentum, (float32x2_t)mMomentum))) <= 0.01 )
    goto LABEL_22;
  mTrans = this->fields.mTrans;
  if ( !mTrans )
    goto LABEL_23;
  localPosition = UnityEngine_Transform__get_localPosition(this->fields.mTrans, 0);
  v11 = NGUIMath__SpringDampen_56364100(&this->fields.mMomentum, 9.0, deltaTime, 0);
  v19.fields.x = localPosition.fields.x + v11.fields.x;
  v19.fields.y = localPosition.fields.y + v11.fields.y;
  v19.fields.z = localPosition.fields.z + 0.0;
  UnityEngine_Transform__set_localPosition(mTrans, v19, 0);
  NGUIMath__CalculateAbsoluteWidgetBounds(&v17, this->fields.rootForBounds, 0);
  dragEffect = this->fields.dragEffect;
  v13 = *(_QWORD *)&v17.fields.m_Extents.fields.y;
  *(_OWORD *)&this->fields.mBounds.fields.m_Center.fields.x = *(_OWORD *)&v17.fields.m_Center.fields.x;
  *(_QWORD *)&this->fields.mBounds.fields.m_Extents.fields.y = v13;
  if ( !UIDraggableCamera__ConstrainToBounds(this, dragEffect == 0, v14) )
  {
    v16 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)this,
            (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_SpringPosition___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
    v6 = (System_Math_c *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v16, 0, 0);
    if ( ((unsigned __int8)v6 & 1) != 0 )
    {
      if ( !v16 )
        goto LABEL_23;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v16, 0, 0);
    }
  }
}


UnityEngine_Vector2_o UIDraggableCamera__get_currentMomentum(UIDraggableCamera_o *this, const MethodInfo *method)
{
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  result.fields.x = this->fields.mMomentum.fields.x;
  result.fields.y = this->fields.mMomentum.fields.y;
  return result;
}


void UIDraggableCamera__set_currentMomentum(
        UIDraggableCamera_o *this,
        UnityEngine_Vector2_o value,
        const MethodInfo *method)
{
  this->fields.mMomentum = value;
}