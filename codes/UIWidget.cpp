void UIWidget___ctor(UIWidget_o *this, const MethodInfo *method)
{
  UIGeometry_c *v8; // x0
  UIGeometry_o *v9; // x20
  const MethodInfo *v10; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  Il2CppClass *v17; // x0
  struct UnityEngine_Vector3_array *v18; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  const MethodInfo *v25; // x1
  UIRect_c *v26; // x0

  if ( (byte_593CF00 & 1) == 0 )
  {
    sub_21FFC50(&UIGeometry_TypeInfo);
    sub_21FFC50(&UIRect_TypeInfo);
    sub_21FFC50(&UnityEngine_Vector3___TypeInfo);
    byte_593CF00 = 1;
  }
  __asm { FMOV            V0.4S, #1.0 }
  v8 = UIGeometry_TypeInfo;
  this->fields.mHeight = 100;
  *(_QWORD *)&this->fields.mPivot = 0x6400000004LL;
  this->fields.mColor = _Q0;
  this->fields.aspectRatio = 1.0;
  v9 = (UIGeometry_o *)sub_21FFEBC(v8);
  UIGeometry___ctor(v9, v10);
  this->fields.geometry = v9;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.geometry, (int32_t)v9, v11, v12, v13, v14, v15, v16);
  v17 = UnityEngine_Vector3___TypeInfo;
  *(_WORD *)&this->fields.fillGeometry = 257;
  *(_WORD *)&this->fields.mIsVisibleByAlpha = 257;
  this->fields.mDrawRegion = (struct UnityEngine_Vector4_o)xmmword_E92B70;
  this->fields.mIsInFront = 1;
  v18 = (struct UnityEngine_Vector3_array *)sub_21FFD10(v17, 4);
  this->fields.mCorners = v18;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.mCorners, (int32_t)v18, v19, v20, v21, v22, v23, v24);
  v26 = UIRect_TypeInfo;
  *(_QWORD *)&this->fields.mAlphaFrameID = -1;
  if ( !*(&v26->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v26, v25);
  UIRect___ctor((UIRect_o *)this, v25);
}


void UIWidget__Awake(UIWidget_o *this, const MethodInfo *method)
{
  struct UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  __int64 v10; // x1

  if ( (byte_593CEFB & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Application_TypeInfo);
    byte_593CEFB = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  this->fields.mGo = gameObject;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.mGo, (int32_t)gameObject, v4, v5, v6, v7, v8, v9);
  if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, v10);
  this->fields.mPlayMode = UnityEngine_Application__get_isPlaying(0);
}


UnityEngine_Bounds_o *UIWidget__CalculateBounds(
        UnityEngine_Bounds_o *__return_ptr retstr,
        UIWidget_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  UnityEngine_Bounds_o *result; // x0
  __int64 v6; // x8
  UnityEngine_Bounds_o v7; // [xsp+8h] [xbp-28h] BYREF

  result = UIWidget__CalculateBounds_56286400(&v7, this, 0, v3);
  v6 = *(_QWORD *)&v7.fields.m_Extents.fields.y;
  *(_OWORD *)&retstr->fields.m_Center.fields.x = *(_OWORD *)&v7.fields.m_Center.fields.x;
  *(_QWORD *)&retstr->fields.m_Extents.fields.y = v6;
  return result;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Bounds_o *UIWidget__CalculateBounds_56286400(
        UnityEngine_Bounds_o *__return_ptr retstr,
        UIWidget_o *this,
        UnityEngine_Transform_o *relativeParent,
        const MethodInfo *method)
{
  int v7; // w8
  UnityEngine_Bounds_o *result; // x0
  __int64 v9; // x1
  __int64 v10; // x9
  UnityEngine_Bounds_o *v11; // x20
  float32x2_t v12; // d0 OVERLAPPED
  float y; // s8
  __int64 v14; // x8
  __int64 v15; // x9
  float32x2_t *static_fields; // x10
  float32x2_t v17; // d10
  float v18; // s9
  float v19; // s2
  int8x8_t v20; // d4
  float v21; // s3
  int8x8_t v22; // d5
  int8x8_t v23; // d7
  int8x8_t v24; // d16
  int8x8_t v25; // d17
  float32x2_t v26; // d4
  float32x2_t v27; // d5
  UIWidget_c *klass; // x8
  UnityEngine_Bounds_o *v29; // x20
  float *p_y; // x21
  unsigned __int64 v31; // x22
  float32x2_t *v32; // x8
  float v33; // t1
  float z; // s3
  int8x8_t v35; // d0 OVERLAPPED
  float v36; // s1
  int8x8_t v37; // d4
  int8x8_t v38; // d5
  int8x8_t v39; // d6
  int8x8_t v40; // d7
  float32x2_t v41; // d2
  float v42; // [xsp+0h] [xbp-100h]
  unsigned __int64 v43; // [xsp+10h] [xbp-F0h]
  unsigned __int32 v44; // [xsp+10h] [xbp-F0h]
  float32x2_t v45; // [xsp+10h] [xbp-F0h]
  UnityEngine_Matrix4x4_o v46; // [xsp+20h] [xbp-E0h] BYREF
  UnityEngine_Matrix4x4_o v47; // [xsp+60h] [xbp-A0h] BYREF
  UnityEngine_Vector3_o v48; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v49; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_593CEF4 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CEF4 = 1;
  }
  v7 = *(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1);
  memset(&v47, 0, sizeof(v47));
  if ( !v7 )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, relativeParent);
  result = (UnityEngine_Bounds_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)relativeParent, 0, 0);
  if ( ((unsigned __int8)result & 1) != 0 )
  {
    result = (UnityEngine_Bounds_o *)((__int64 (__fastcall *)(UIWidget_o *, const MethodInfo *))this->klass->vtable._10_get_localCorners.methodPtr)(
                                       this,
                                       this->klass->vtable._10_get_localCorners.method);
    if ( result )
    {
      *(float *)&v10 = result[1].fields.m_Center.fields.x;
      v11 = result;
      if ( (_DWORD)v10 )
      {
        v12.n64_u64[0] = *(unsigned __int64 *)&result[1].fields.m_Center.fields.z;
        y = result[1].fields.m_Extents.fields.y;
        if ( !byte_5931940 )
        {
          v43 = *(_QWORD *)&result[1].fields.m_Center.fields.z;
          result = (UnityEngine_Bounds_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
          v12.n64_u64[0] = v43;
          v10 = *(_QWORD *)&v11[1].fields.m_Center.fields.x;
          byte_5931940 = 1;
        }
        v14 = 0;
        v15 = (unsigned int)v10 & 0xFFFFFFFC;
        static_fields = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
        v17.n64_u64[0] = vmul_f32((float32x2_t)static_fields->n64_u64[0], (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
        v18 = static_fields[1].n64_f32[0] * 0.5;
        while ( v15 )
        {
          v19 = y - v18;
          v20.n64_u64[0] = vsub_f32(v12, v17).n64_u64[0];
          v21 = *(float *)((char *)&v11[2].fields.m_Center.fields.y + v14);
          v22.n64_u64[0] = vadd_f32(v12, v17).n64_u64[0];
          v23.n64_u64[0] = *(unsigned __int64 *)((char *)&v11[1].fields.m_Extents.fields.z + v14);
          v14 += 12;
          v24.n64_u64[0] = vcgt_f32(v23, v20).n64_u64[0];
          v25.n64_u64[0] = vcgt_f32(v22, v23).n64_u64[0];
          if ( (float)(y - v18) >= v21 )
            v19 = v21;
          v26.n64_u64[0] = vbsl_s8(v24, v20, v23).n64_u64[0];
          v27.n64_u64[0] = vbsl_s8(v25, v22, v23).n64_u64[0];
          if ( (float)(y + v18) > v21 )
            v21 = y + v18;
          v17.n64_u64[0] = vmul_f32(vsub_f32(v27, v26), (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
          v18 = (float)(v21 - v19) * 0.5;
          v12.n64_u64[0] = vadd_f32(v26, v17).n64_u64[0];
          y = v19 + v18;
          if ( v14 == 36 )
            goto LABEL_30;
        }
      }
LABEL_31:
      sub_21FFED4(result);
    }
LABEL_32:
    sub_21FFECC(result, v9);
  }
  if ( !relativeParent )
    goto LABEL_32;
  UnityEngine_Transform__get_worldToLocalMatrix(&v46, relativeParent, 0);
  klass = this->klass;
  v47 = v46;
  result = (UnityEngine_Bounds_o *)((__int64 (__fastcall *)(UIWidget_o *, const MethodInfo *))klass->vtable._11_get_worldCorners.methodPtr)(
                                     this,
                                     klass->vtable._11_get_worldCorners.method);
  if ( !result )
    goto LABEL_32;
  v29 = result;
  if ( !LODWORD(result[1].fields.m_Center.fields.x) )
    goto LABEL_31;
  *(UnityEngine_Vector3_o *)v12.n64_u64 = UnityEngine_Matrix4x4__MultiplyPoint3x4(
                                            &v47,
                                            *(UnityEngine_Vector3_o *)&result[1].fields.m_Center.fields.z,
                                            0);
  y = v48.fields.z;
  if ( !byte_5931940 )
  {
    v42 = v48.fields.y;
    v44 = v12.n64_u32[0];
    result = (UnityEngine_Bounds_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    v48.fields.y = v42;
    v12.n64_u32[0] = v44;
    byte_5931940 = 1;
  }
  v12.n64_u32[1] = LODWORD(v48.fields.y);
  p_y = &v29[2].fields.m_Center.fields.y;
  v31 = 1;
  v32 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v17.n64_u64[0] = vmul_f32((float32x2_t)v32->n64_u64[0], (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
  v18 = v32[1].n64_f32[0] * 0.5;
  do
  {
    v45.n64_u64[0] = v12.n64_u64[0];
    if ( v31 >= LODWORD(v29[1].fields.m_Center.fields.x) )
      goto LABEL_31;
    v49.fields.x = *(p_y - 2);
    v49.fields.y = *(p_y - 1);
    v33 = *p_y;
    p_y += 3;
    v49.fields.z = v33;
    *(UnityEngine_Vector3_o *)v35.n64_u64 = UnityEngine_Matrix4x4__MultiplyPoint3x4(&v47, v49, 0);
    z = y - v18;
    ++v31;
    v35.n64_u32[1] = LODWORD(v50.fields.y);
    v36 = y + v18;
    v37.n64_u64[0] = vsub_f32(v45, v17).n64_u64[0];
    v38.n64_u64[0] = vadd_f32(v45, v17).n64_u64[0];
    v39.n64_u64[0] = vcgt_f32(v35, v37).n64_u64[0];
    v40.n64_u64[0] = vcgt_f32(v38, v35).n64_u64[0];
    if ( (float)(y - v18) >= v50.fields.z )
      z = v50.fields.z;
    if ( v36 <= v50.fields.z )
      v36 = v50.fields.z;
    v41.n64_u64[0] = vbsl_s8(v39, v37, v35).n64_u64[0];
    v18 = (float)(v36 - z) * 0.5;
    v17.n64_u64[0] = vmul_f32(vsub_f32(vbsl_s8(v40, v38, v35), v41), (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
    y = z + v18;
    v12.n64_u64[0] = vadd_f32(v41, v17).n64_u64[0];
  }
  while ( v31 != 4 );
LABEL_30:
  *(float32x2_t *)&retstr->fields.m_Center.fields.x = v12;
  retstr->fields.m_Center.fields.z = y;
  *(float32x2_t *)&retstr->fields.m_Extents.fields.x = v17;
  retstr->fields.m_Extents.fields.z = v18;
  return result;
}


// local variable allocation has failed, the output may be wrong!
float UIWidget__CalculateCumulativeAlpha(UIWidget_o *this, int32_t frameID, const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *parent; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1

  if ( (byte_593CEEF & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CEEF = 1;
  }
  parent = (UnityEngine_Object_o *)UIRect__get_parent((UIRect_o *)this, *(const MethodInfo **)&frameID);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  v7 = UnityEngine_Object__op_Inequality(parent, 0, 0);
  if ( !v7 )
    return this->fields.mColor.fields.a;
  if ( !parent )
    sub_21FFECC(v7, v8);
  return ((float (__fastcall *)(UnityEngine_Object_o *, _QWORD, Il2CppClass *))parent->klass[1]._1.declaringType)(
           parent,
           (unsigned int)frameID,
           parent->klass[1]._1.parent)
       * this->fields.mColor.fields.a;
}


float UIWidget__CalculateFinalAlpha(UIWidget_o *this, int32_t frameID, const MethodInfo *method)
{
  if ( this->fields.mAlphaFrameID != frameID )
  {
    this->fields.mAlphaFrameID = frameID;
    UIWidget__UpdateFinalAlpha(this, frameID, method);
  }
  return this->fields.finalAlpha;
}


void UIWidget__CheckLayer(UIWidget_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *panel; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *gameObject; // x0
  int32_t layer; // w20
  UnityEngine_Component_o *v7; // x8
  UnityEngine_GameObject_o *v8; // x19

  if ( (byte_593CEF9 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CEF9 = 1;
  }
  panel = (UnityEngine_Object_o *)this->fields.panel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(panel, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.panel;
    if ( gameObject )
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
      if ( gameObject )
      {
        layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)gameObject, 0);
        gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0);
        if ( gameObject )
        {
          if ( layer == UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)gameObject, 0) )
            return;
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0);
          v7 = (UnityEngine_Component_o *)this->fields.panel;
          if ( v7 )
          {
            v8 = (UnityEngine_GameObject_o *)gameObject;
            gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(v7, 0);
            if ( gameObject )
            {
              gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_layer(
                                                        (UnityEngine_GameObject_o *)gameObject,
                                                        0);
              if ( v8 )
              {
                UnityEngine_GameObject__set_layer(v8, (int32_t)gameObject, 0);
                return;
              }
            }
          }
        }
      }
    }
    sub_21FFECC(gameObject, v4);
  }
}


UIPanel_o *UIWidget__CreatePanel(UIWidget_o *this, const MethodInfo *method)
{
  struct UIPanel_o **p_panel; // x20
  UnityEngine_Object_o *panel; // x21
  __int64 v5; // x1
  UnityEngine_GameObject_o *gameObject; // x21
  const MethodInfo *v7; // x1
  UnityEngine_Transform_o *cachedTransform; // x21
  const MethodInfo *v9; // x1
  UnityEngine_GameObject_o *cachedGameObject; // x0
  __int64 v11; // x1
  __int64 v12; // x1
  int32_t layer; // w22
  UIPanel_o *_55980932; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  __int64 v21; // x1
  UnityEngine_Object_o *v22; // x20
  const MethodInfo *v23; // x1

  if ( (byte_593CEF8 & 1) == 0 )
  {
    sub_21FFC50(&NGUITools_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&UIPanel_TypeInfo);
    byte_593CEF8 = 1;
  }
  if ( this->fields.mStarted )
  {
    p_panel = &this->fields.panel;
    panel = (UnityEngine_Object_o *)this->fields.panel;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( UnityEngine_Object__op_Equality(panel, 0, 0)
      && UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v5);
      if ( NGUITools__GetActive_56206348(gameObject, 0) )
      {
        cachedTransform = UIRect__get_cachedTransform((UIRect_o *)this, v7);
        cachedGameObject = UIRect__get_cachedGameObject((UIRect_o *)this, v9);
        if ( !cachedGameObject )
          goto LABEL_20;
        layer = UnityEngine_GameObject__get_layer(cachedGameObject, 0);
        if ( !*(&UIPanel_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UIPanel_TypeInfo, v12);
        _55980932 = UIPanel__Find_55980932(cachedTransform, 1, layer, 0);
        *p_panel = _55980932;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&this->fields.panel,
          (int32_t)_55980932,
          v15,
          v16,
          v17,
          v18,
          v19,
          v20);
        v22 = (UnityEngine_Object_o *)*p_panel;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
        if ( UnityEngine_Object__op_Inequality(v22, 0, 0) )
        {
          cachedGameObject = (UnityEngine_GameObject_o *)this->fields.panel;
          this->fields.mParentFound = 0;
          if ( cachedGameObject )
          {
            UIPanel__AddWidget((UIPanel_o *)cachedGameObject, this, 0);
            UIWidget__CheckLayer(this, v23);
            ((void (__fastcall *)(UIWidget_o *, __int64, const MethodInfo *))this->klass->vtable._12_Invalidate.methodPtr)(
              this,
              1,
              this->klass->vtable._12_Invalidate.method);
            return this->fields.panel;
          }
LABEL_20:
          sub_21FFECC(cachedGameObject, v11);
        }
      }
    }
  }
  return this->fields.panel;
}


int32_t UIWidget__FullCompareFunc(UIWidget_o *left, UIWidget_o *right, const MethodInfo *method)
{
  UIWidget_o *v4; // x20
  UIPanel_o *panel; // x21
  UIPanel_o *v6; // x22
  int32_t result; // w0
  const MethodInfo *v8; // x2

  v4 = left;
  if ( (byte_593CEF2 & 1) == 0 )
  {
    left = (UIWidget_o *)sub_21FFC50(&UIPanel_TypeInfo);
    byte_593CEF2 = 1;
  }
  if ( !v4 || !right )
    sub_21FFECC(left, right);
  panel = v4->fields.panel;
  v6 = right->fields.panel;
  if ( !*(&UIPanel_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UIPanel_TypeInfo, right);
  result = UIPanel__CompareFunc(panel, v6, 0);
  if ( !result )
    return UIWidget__PanelCompareFunc(v4, right, v8);
  return result;
}


UnityEngine_Vector3_array *UIWidget__GetSides(
        UIWidget_o *this,
        UnityEngine_Transform_o *relativeTo,
        const MethodInfo *method)
{
  UnityEngine_Vector2_o PivotOffset; // kr00_8
  int32_t mWidth; // s10
  int32_t mHeight; // s11
  const MethodInfo *v8; // x1
  UnityEngine_Transform_o *cachedTransform; // x0
  __int64 v10; // x1
  float v11; // s12
  struct UnityEngine_Vector3_array *mCorners; // x22
  UnityEngine_Transform_o *v13; // x21
  float v14; // s8
  float v15; // s10
  float v16; // s11
  float v17; // s12
  struct UnityEngine_Vector3_array *v18; // x22
  float v19; // s10
  struct UnityEngine_Vector3_array *v20; // x22
  struct UnityEngine_Vector3_array *v21; // x22
  __int64 v22; // x21
  unsigned __int64 v23; // x22
  struct UnityEngine_Vector3_array *v24; // x24
  char *v25; // x23
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_593CEEC & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CEEC = 1;
  }
  PivotOffset = NGUIMath__GetPivotOffset(this->fields.mPivot, 0);
  mWidth = this->fields.mWidth;
  mHeight = this->fields.mHeight;
  cachedTransform = UIRect__get_cachedTransform((UIRect_o *)this, v8);
  if ( !cachedTransform )
    goto LABEL_22;
  v11 = (float)mWidth;
  mCorners = this->fields.mCorners;
  v13 = cachedTransform;
  v14 = -(float)(PivotOffset.fields.y * (float)mHeight);
  v15 = -(float)(PivotOffset.fields.x * (float)mWidth);
  v16 = (float)mHeight - (float)(PivotOffset.fields.y * (float)mHeight);
  v27 = UnityEngine_Transform__TransformPoint_83283144(cachedTransform, v15, (float)(v14 + v16) * 0.5, 0.0, 0);
  if ( !mCorners )
    goto LABEL_22;
  if ( !LODWORD(mCorners->max_length) )
    goto LABEL_23;
  v17 = v15 + v11;
  mCorners->m_Items[0] = v27;
  v18 = this->fields.mCorners;
  v19 = (float)(v15 + v17) * 0.5;
  v28 = UnityEngine_Transform__TransformPoint_83283144(v13, v19, v16, 0.0, 0);
  if ( !v18 )
    goto LABEL_22;
  if ( (v18->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_23;
  v18->m_Items[1] = v28;
  v20 = this->fields.mCorners;
  v29 = UnityEngine_Transform__TransformPoint_83283144(v13, v17, (float)(v14 + v16) * 0.5, 0.0, 0);
  if ( !v20 )
    goto LABEL_22;
  if ( LODWORD(v20->max_length) <= 2 )
    goto LABEL_23;
  v20->m_Items[2] = v29;
  v21 = this->fields.mCorners;
  v30 = UnityEngine_Transform__TransformPoint_83283144(v13, v19, v14, 0.0, 0);
  if ( !v21 )
    goto LABEL_22;
  if ( (v21->max_length & 0xFFFFFFFC) == 0 )
LABEL_23:
    sub_21FFED4(cachedTransform);
  v21->m_Items[3] = v30;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
  cachedTransform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(
                                                 (UnityEngine_Object_o *)relativeTo,
                                                 0,
                                                 0);
  if ( ((unsigned __int8)cachedTransform & 1) != 0 )
  {
    v22 = 0;
    v23 = 0;
    while ( 1 )
    {
      v24 = this->fields.mCorners;
      if ( !v24 )
        break;
      if ( v23 >= LODWORD(v24->max_length) )
        goto LABEL_23;
      if ( !relativeTo )
        break;
      v25 = (char *)v24 + v22 * 12;
      v31 = UnityEngine_Transform__InverseTransformPoint(relativeTo, v24->m_Items[v22], 0);
      if ( v23 >= LODWORD(v24->max_length) )
        goto LABEL_23;
      ++v23;
      ++v22;
      *(UnityEngine_Vector3_o *)(v25 + 32) = v31;
      if ( v23 == 4 )
        return this->fields.mCorners;
    }
LABEL_22:
    sub_21FFECC(cachedTransform, v10);
  }
  return this->fields.mCorners;
}


// local variable allocation has failed, the output may be wrong!
void UIWidget__Invalidate(UIWidget_o *this, bool includeChildren, const MethodInfo *method)
{
  UnityEngine_Object_c *v5; // x0
  UnityEngine_Object_o *panel; // x21
  int v7; // w9
  __int64 v8; // x1
  UIPanel_o *v9; // x0
  bool IsVisible_55969232; // w21
  int32_t frameCount; // w0
  const MethodInfo *v12; // x2
  _BOOL4 v13; // w8
  _BOOL4 v14; // w9
  int32_t v15; // w0
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x2

  if ( (byte_593CEEE & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CEEE = 1;
  }
  v5 = UnityEngine_Object_TypeInfo;
  panel = (UnityEngine_Object_o *)this->fields.panel;
  this->fields.mChanged = 1;
  v7 = *(&v5->_2.cctor_finished + 1);
  this->fields.mAlphaFrameID = -1;
  if ( !v7 )
    j_il2cpp_runtime_class_init_0(v5, includeChildren);
  if ( UnityEngine_Object__op_Inequality(panel, 0, 0) )
  {
    if ( !this->fields.hideIfOffScreen )
    {
      v9 = this->fields.panel;
      if ( !v9 )
        goto LABEL_18;
      if ( !UIPanel__get_hasCumulativeClipping(v9, 0) )
      {
        IsVisible_55969232 = 1;
LABEL_11:
        frameCount = UnityEngine_Time__get_frameCount(0);
        v13 = UIWidget__CalculateCumulativeAlpha(this, frameCount, v12) > 0.001;
        v14 = IsVisible_55969232;
        if ( this->fields.mIsVisibleByAlpha != v13 || this->fields.mIsVisibleByPanel != v14 )
        {
          this->fields.mIsVisibleByAlpha = v13;
          this->fields.mChanged = 1;
          this->fields.mIsVisibleByPanel = v14;
        }
        v15 = UnityEngine_Time__get_frameCount(0);
        UIWidget__UpdateFinalAlpha(this, v15, v16);
        if ( includeChildren )
          UIRect__Invalidate((UIRect_o *)this, 1, v17);
        return;
      }
    }
    v9 = this->fields.panel;
    if ( v9 )
    {
      IsVisible_55969232 = UIPanel__IsVisible_55969232(v9, this, 0);
      goto LABEL_11;
    }
LABEL_18:
    sub_21FFECC(v9, v8);
  }
}


// local variable allocation has failed, the output may be wrong!
void UIWidget__MakePixelPerfect(UIWidget_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *cachedTransform; // x0
  __int64 v4; // x1
  float x; // s10
  float z; // s9
  float y; // s8
  double v8; // d0
  double v9; // d0
  float v10; // s2
  float v11; // s1
  float v12; // s9
  double v13; // d0
  double v14; // d0
  float v15; // s2
  float v16; // s1
  float v17; // s10
  const MethodInfo *v18; // x1
  double v19; // d0
  double v20; // d0
  float v21; // s2
  float v22; // s1
  float v23; // s8
  const MethodInfo *v24; // x1
  float v25; // s8
  float v26; // s9
  const MethodInfo *v27; // x1
  float v28; // s0 OVERLAPPED
  float v29; // s1
  float v30; // s2
  double iptr; // [xsp+8h] [xbp-28h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4

  cachedTransform = UIRect__get_cachedTransform((UIRect_o *)this, method);
  if ( !cachedTransform )
LABEL_41:
    sub_21FFECC(cachedTransform, v4);
  localPosition = UnityEngine_Transform__get_localPosition(cachedTransform, 0);
  x = localPosition.fields.x;
  z = localPosition.fields.z;
  y = localPosition.fields.y;
  v8 = modf(localPosition.fields.z, &iptr);
  if ( z >= 0.0 )
  {
    if ( v8 != 0.5 )
    {
      v12 = floorf(z + 0.5);
      goto LABEL_12;
    }
    v9 = iptr;
    v10 = 1.0;
  }
  else
  {
    if ( v8 != -0.5 )
    {
      v12 = ceilf(z + -0.5);
      goto LABEL_12;
    }
    v9 = iptr;
    v10 = -1.0;
  }
  if ( ((__int64)v9 & 1) != 0 )
  {
    v11 = v9;
    v12 = v11 + v10;
  }
  else
  {
    v12 = v9;
  }
LABEL_12:
  v13 = modf(x, &iptr);
  if ( x >= 0.0 )
  {
    if ( v13 != 0.5 )
    {
      v17 = floorf(x + 0.5);
      goto LABEL_22;
    }
    v14 = iptr;
    v15 = 1.0;
  }
  else
  {
    if ( v13 != -0.5 )
    {
      v17 = ceilf(x + -0.5);
      goto LABEL_22;
    }
    v14 = iptr;
    v15 = -1.0;
  }
  if ( ((__int64)v14 & 1) != 0 )
  {
    v16 = v14;
    v17 = v16 + v15;
  }
  else
  {
    v17 = v14;
  }
LABEL_22:
  v19 = modf(y, &iptr);
  if ( y >= 0.0 )
  {
    if ( v19 != 0.5 )
    {
      v23 = floorf(y + 0.5);
      goto LABEL_32;
    }
    v20 = iptr;
    v21 = 1.0;
  }
  else
  {
    if ( v19 != -0.5 )
    {
      v23 = ceilf(y + -0.5);
      goto LABEL_32;
    }
    v20 = iptr;
    v21 = -1.0;
  }
  if ( ((__int64)v20 & 1) != 0 )
  {
    v22 = v20;
    v23 = v22 + v21;
  }
  else
  {
    v23 = v20;
  }
LABEL_32:
  cachedTransform = UIRect__get_cachedTransform((UIRect_o *)this, v18);
  if ( !cachedTransform )
    goto LABEL_41;
  v33.fields.x = v17;
  v33.fields.y = v23;
  v33.fields.z = v12;
  UnityEngine_Transform__set_localPosition(cachedTransform, v33, 0);
  cachedTransform = UIRect__get_cachedTransform((UIRect_o *)this, v24);
  if ( !cachedTransform )
    goto LABEL_41;
  localScale = UnityEngine_Transform__get_localScale(cachedTransform, 0);
  v25 = localScale.fields.x;
  v26 = localScale.fields.y;
  cachedTransform = UIRect__get_cachedTransform((UIRect_o *)this, v27);
  if ( !cachedTransform )
    goto LABEL_41;
  v28 = 1.0;
  if ( v26 >= 0.0 )
    v29 = 1.0;
  else
    v29 = -1.0;
  if ( v25 < 0.0 )
    v28 = -1.0;
  v30 = 1.0;
  UnityEngine_Transform__set_localScale(cachedTransform, *(UnityEngine_Vector3_o *)&v28, 0);
}


void UIWidget__MarkAsChanged(UIWidget_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *panel; // x20
  __int64 v5; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1

  if ( (byte_593CEF7 & 1) == 0 )
  {
    sub_21FFC50(&NGUITools_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CEF7 = 1;
  }
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, method);
  if ( NGUITools__GetActive((UnityEngine_Behaviour_o *)this, 0) )
  {
    panel = (UnityEngine_Object_o *)this->fields.panel;
    this->fields.mChanged = 1;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
    if ( UnityEngine_Object__op_Inequality(panel, 0, 0)
      && UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v5);
      if ( NGUITools__GetActive_56206348(gameObject, 0) && !this->fields.mPlayMode )
      {
        UIWidget__SetDirty(this, v7);
        UIWidget__CheckLayer(this, v8);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void UIWidget__OnAnchor(UIWidget_o *this, const MethodInfo *method)
{
  void *cachedTransform; // x0
  __int64 v4; // x1
  UnityEngine_Transform_o *v5; // x21
  UnityEngine_Transform_o *parent; // x20
  float x; // s10
  float y; // s15
  float z; // s9
  UnityEngine_Vector2_o PivotOffset; // kr00_8
  struct UIRect_AnchorPoint_o *leftAnchor; // x8
  struct UIRect_AnchorPoint_o *bottomAnchor; // x9
  UnityEngine_Object_o *target; // x21
  UnityEngine_Object_o *v14; // x22
  struct UIRect_AnchorPoint_o *v15; // x8
  struct UIRect_AnchorPoint_o *rightAnchor; // x9
  UnityEngine_Object_o *v17; // x21
  UnityEngine_Object_o *v18; // x22
  struct UIRect_AnchorPoint_o *v19; // x8
  struct UIRect_AnchorPoint_o *topAnchor; // x9
  UnityEngine_Object_o *v21; // x21
  UnityEngine_Object_o *v22; // x22
  const MethodInfo *v23; // x2
  const MethodInfo *v24; // x3
  float *v25; // x21
  struct UIRect_AnchorPoint_o *v26; // x8
  float v27; // s0
  struct UIRect_AnchorPoint_o *v28; // x8
  struct UIRect_AnchorPoint_o *v29; // x9
  float v30; // s13
  int absolute; // s8
  float v32; // s0
  struct UIRect_AnchorPoint_o *v33; // x8
  struct UIRect_AnchorPoint_o *v34; // x9
  float v35; // s14
  int v36; // s10
  float v37; // s0
  struct UIRect_AnchorPoint_o *v38; // x8
  struct UIRect_AnchorPoint_o *v39; // x9
  float v40; // s15
  float v41; // s9
  int v42; // s13
  float v43; // s0
  struct UIRect_AnchorPoint_o *v44; // x8
  float v45; // s4
  float v46; // s1
  float v47; // s13
  float v48; // s8
  float v49; // s14
  struct UIRect_AnchorPoint_o *v50; // x8
  UnityEngine_Object_o *v51; // x21
  const MethodInfo *v52; // x2
  const MethodInfo *v53; // x3
  struct UIRect_AnchorPoint_o *v54; // x8
  float v55; // s0
  struct UIRect_AnchorPoint_o *v56; // x8
  struct UIRect_AnchorPoint_o *v57; // x8
  UnityEngine_Object_o *v58; // x21
  const MethodInfo *v59; // x2
  const MethodInfo *v60; // x3
  struct UIRect_AnchorPoint_o *v61; // x8
  float v62; // s0
  struct UIRect_AnchorPoint_o *v63; // x8
  struct UIRect_AnchorPoint_o *v64; // x8
  UnityEngine_Object_o *v65; // x21
  const MethodInfo *v66; // x2
  const MethodInfo *v67; // x3
  struct UIRect_AnchorPoint_o *v68; // x8
  float v69; // s0
  struct UIRect_AnchorPoint_o *v70; // x8
  struct UIRect_AnchorPoint_o *v71; // x8
  struct UIRect_AnchorPoint_o *v72; // x8
  UnityEngine_Object_o *v73; // x21
  const MethodInfo *v74; // x2
  const MethodInfo *v75; // x3
  struct UIRect_AnchorPoint_o *v76; // x8
  struct UIRect_AnchorPoint_o *v77; // x8
  float v78; // s10
  float mHeight; // s0
  float v80; // s1 OVERLAPPED
  struct UIRect_AnchorPoint_o *v81; // x8
  float v82; // s0
  float v83; // s15
  float v84; // s1
  float v85; // s12
  float v86; // s8
  float v87; // s11
  int v88; // w8
  unsigned int v89; // w10
  float v90; // s10
  int32_t v91; // w20
  float v92; // s9
  unsigned int v93; // w9
  int32_t keepAspectRatio; // w8
  int32_t v95; // w21
  float aspectRatio; // s11
  float v97; // s9
  double v98; // d11
  double v99; // d0
  double v100; // d0
  double v101; // d1
  float v102; // s9
  double v103; // d11
  double v104; // d0
  double v105; // d0
  double v106; // d1
  double v107; // d1
  double v108; // d1
  struct UIRect_AnchorPoint_o *v109; // x9
  struct UIRect_AnchorPoint_o *v110; // x11
  struct UIRect_AnchorPoint_o *v111; // x10
  struct UIRect_AnchorPoint_o *v112; // x8
  float v113; // s3
  float v114; // s4
  float v115; // s5
  float v116; // s6
  bool v118; // w8
  float v119; // s8
  const MethodInfo *v120; // x1
  _BOOL4 mIsInFront; // w8
  float v122; // [xsp+Ch] [xbp-84h]
  float v123; // [xsp+10h] [xbp-80h]
  float v124; // [xsp+14h] [xbp-7Ch]
  double iptr; // [xsp+18h] [xbp-78h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v127; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o LocalPos; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v129; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_593CEFD & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CEFD = 1;
  }
  cachedTransform = UIRect__get_cachedTransform((UIRect_o *)this, method);
  if ( !cachedTransform )
    goto LABEL_177;
  v5 = (UnityEngine_Transform_o *)cachedTransform;
  parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)cachedTransform, 0);
  localPosition = UnityEngine_Transform__get_localPosition(v5, 0);
  x = localPosition.fields.x;
  y = localPosition.fields.y;
  z = localPosition.fields.z;
  PivotOffset = NGUIMath__GetPivotOffset(this->fields.mPivot, 0);
  leftAnchor = this->fields.leftAnchor;
  if ( !leftAnchor )
    goto LABEL_177;
  bottomAnchor = this->fields.bottomAnchor;
  if ( !bottomAnchor )
    goto LABEL_177;
  target = (UnityEngine_Object_o *)leftAnchor->fields.target;
  v14 = (UnityEngine_Object_o *)bottomAnchor->fields.target;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  cachedTransform = (void *)UnityEngine_Object__op_Equality(target, v14, 0);
  v123 = x;
  v124 = z;
  v122 = y;
  if ( ((unsigned __int8)cachedTransform & 1) == 0 )
    goto LABEL_34;
  v15 = this->fields.leftAnchor;
  if ( !v15 )
    goto LABEL_177;
  rightAnchor = this->fields.rightAnchor;
  if ( !rightAnchor )
    goto LABEL_177;
  v17 = (UnityEngine_Object_o *)v15->fields.target;
  v18 = (UnityEngine_Object_o *)rightAnchor->fields.target;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  cachedTransform = (void *)UnityEngine_Object__op_Equality(v17, v18, 0);
  if ( ((unsigned __int8)cachedTransform & 1) == 0 )
    goto LABEL_34;
  v19 = this->fields.leftAnchor;
  if ( !v19 )
    goto LABEL_177;
  topAnchor = this->fields.topAnchor;
  if ( !topAnchor )
    goto LABEL_177;
  v21 = (UnityEngine_Object_o *)v19->fields.target;
  v22 = (UnityEngine_Object_o *)topAnchor->fields.target;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  cachedTransform = (void *)UnityEngine_Object__op_Equality(v21, v22, 0);
  if ( ((unsigned __int8)cachedTransform & 1) != 0 )
  {
    cachedTransform = this->fields.leftAnchor;
    if ( !cachedTransform )
      goto LABEL_177;
    cachedTransform = UIRect_AnchorPoint__GetSides((UIRect_AnchorPoint_o *)cachedTransform, parent, v23);
    if ( cachedTransform )
    {
      v25 = (float *)cachedTransform;
      if ( *((_DWORD *)cachedTransform + 6) > 2u )
      {
        v26 = this->fields.leftAnchor;
        if ( !v26 )
          goto LABEL_177;
        v27 = NGUIMath__Lerp(*((float *)cachedTransform + 8), *((float *)cachedTransform + 14), v26->fields.relative, 0);
        v28 = this->fields.leftAnchor;
        if ( !v28 )
          goto LABEL_177;
        if ( *((_DWORD *)v25 + 6) > 2u )
        {
          v29 = this->fields.rightAnchor;
          if ( !v29 )
            goto LABEL_177;
          v30 = v27;
          absolute = v28->fields.absolute;
          v32 = NGUIMath__Lerp(v25[8], v25[14], v29->fields.relative, 0);
          v33 = this->fields.rightAnchor;
          if ( !v33 )
            goto LABEL_177;
          if ( ((_DWORD)v25[6] & 0xFFFFFFFC) != 0 )
          {
            v34 = this->fields.bottomAnchor;
            if ( !v34 )
              goto LABEL_177;
            v35 = v32;
            v36 = v33->fields.absolute;
            v37 = NGUIMath__Lerp(v25[18], v25[12], v34->fields.relative, 0);
            v38 = this->fields.bottomAnchor;
            if ( !v38 )
              goto LABEL_177;
            if ( ((_DWORD)v25[6] & 0xFFFFFFFC) != 0 )
            {
              v39 = this->fields.topAnchor;
              if ( !v39 )
                goto LABEL_177;
              v40 = v37;
              v41 = v30;
              v42 = v38->fields.absolute;
              v43 = NGUIMath__Lerp(v25[18], v25[12], v39->fields.relative, 0);
              v44 = this->fields.topAnchor;
              if ( !v44 )
                goto LABEL_177;
              v45 = (float)v42;
              v46 = (float)v44->fields.absolute;
              this->fields.mIsInFront = 1;
              v47 = v41 + (float)absolute;
              v48 = v35 + (float)v36;
              v49 = v40 + v45;
LABEL_83:
              v78 = v43 + v46;
              goto LABEL_88;
            }
          }
        }
      }
      goto LABEL_178;
    }
    LocalPos = UIRect__GetLocalPos((UIRect_o *)this, this->fields.leftAnchor, parent, v24);
    v109 = this->fields.leftAnchor;
    if ( !v109 )
      goto LABEL_177;
    v110 = this->fields.bottomAnchor;
    if ( !v110 )
      goto LABEL_177;
    v111 = this->fields.rightAnchor;
    if ( !v111 )
      goto LABEL_177;
    v112 = this->fields.topAnchor;
    if ( !v112 )
      goto LABEL_177;
    v113 = (float)v109->fields.absolute;
    v114 = (float)v110->fields.absolute;
    v115 = (float)v111->fields.absolute;
    v116 = (float)v112->fields.absolute;
    v118 = LocalPos.fields.z >= 0.0 || !this->fields.hideIfOffScreen;
    this->fields.mIsInFront = v118;
    v47 = LocalPos.fields.x + v113;
    v49 = LocalPos.fields.y + v114;
    v48 = LocalPos.fields.x + v115;
    v78 = LocalPos.fields.y + v116;
  }
  else
  {
LABEL_34:
    v50 = this->fields.leftAnchor;
    this->fields.mIsInFront = 1;
    if ( !v50 )
      goto LABEL_177;
    v51 = (UnityEngine_Object_o *)v50->fields.target;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
    cachedTransform = (void *)UnityEngine_Object__op_Implicit(v51, 0);
    if ( ((unsigned __int8)cachedTransform & 1) != 0 )
    {
      cachedTransform = this->fields.leftAnchor;
      if ( !cachedTransform )
        goto LABEL_177;
      cachedTransform = UIRect_AnchorPoint__GetSides((UIRect_AnchorPoint_o *)cachedTransform, parent, v52);
      if ( cachedTransform )
      {
        if ( *((_DWORD *)cachedTransform + 6) <= 2u )
          goto LABEL_178;
        v54 = this->fields.leftAnchor;
        if ( !v54 )
          goto LABEL_177;
        v55 = NGUIMath__Lerp(*((float *)cachedTransform + 8), *((float *)cachedTransform + 14), v54->fields.relative, 0);
      }
      else
      {
        LODWORD(v55) = (unsigned int)UIRect__GetLocalPos((UIRect_o *)this, this->fields.leftAnchor, parent, v53);
      }
      v56 = this->fields.leftAnchor;
      if ( !v56 )
        goto LABEL_177;
      v47 = v55 + (float)v56->fields.absolute;
    }
    else
    {
      v47 = x - (float)(PivotOffset.fields.x * (float)this->fields.mWidth);
    }
    v57 = this->fields.rightAnchor;
    if ( !v57 )
      goto LABEL_177;
    v58 = (UnityEngine_Object_o *)v57->fields.target;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
    cachedTransform = (void *)UnityEngine_Object__op_Implicit(v58, 0);
    if ( ((unsigned __int8)cachedTransform & 1) != 0 )
    {
      cachedTransform = this->fields.rightAnchor;
      if ( !cachedTransform )
        goto LABEL_177;
      cachedTransform = UIRect_AnchorPoint__GetSides((UIRect_AnchorPoint_o *)cachedTransform, parent, v59);
      if ( cachedTransform )
      {
        if ( *((_DWORD *)cachedTransform + 6) <= 2u )
          goto LABEL_178;
        v61 = this->fields.rightAnchor;
        if ( !v61 )
          goto LABEL_177;
        v62 = NGUIMath__Lerp(*((float *)cachedTransform + 8), *((float *)cachedTransform + 14), v61->fields.relative, 0);
      }
      else
      {
        LODWORD(v62) = (unsigned int)UIRect__GetLocalPos((UIRect_o *)this, this->fields.rightAnchor, parent, v60);
      }
      v63 = this->fields.rightAnchor;
      if ( !v63 )
        goto LABEL_177;
      v48 = v62 + (float)v63->fields.absolute;
    }
    else
    {
      v48 = (float)(x - (float)(PivotOffset.fields.x * (float)this->fields.mWidth)) + (float)this->fields.mWidth;
    }
    v64 = this->fields.bottomAnchor;
    if ( !v64 )
      goto LABEL_177;
    v65 = (UnityEngine_Object_o *)v64->fields.target;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
    cachedTransform = (void *)UnityEngine_Object__op_Implicit(v65, 0);
    if ( ((unsigned __int8)cachedTransform & 1) != 0 )
    {
      cachedTransform = this->fields.bottomAnchor;
      if ( !cachedTransform )
        goto LABEL_177;
      cachedTransform = UIRect_AnchorPoint__GetSides((UIRect_AnchorPoint_o *)cachedTransform, parent, v66);
      if ( cachedTransform )
      {
        if ( (*((_DWORD *)cachedTransform + 6) & 0xFFFFFFFC) == 0 )
          goto LABEL_178;
        v68 = this->fields.bottomAnchor;
        if ( !v68 )
          goto LABEL_177;
        v69 = NGUIMath__Lerp(
                *((float *)cachedTransform + 18),
                *((float *)cachedTransform + 12),
                v68->fields.relative,
                0);
        v70 = this->fields.bottomAnchor;
        if ( !v70 )
          goto LABEL_177;
        v49 = v69 + (float)v70->fields.absolute;
      }
      else
      {
        v127 = UIRect__GetLocalPos((UIRect_o *)this, this->fields.bottomAnchor, parent, v67);
        v71 = this->fields.bottomAnchor;
        if ( !v71 )
          goto LABEL_177;
        v49 = v127.fields.y + (float)v71->fields.absolute;
      }
    }
    else
    {
      v49 = y - (float)(PivotOffset.fields.y * (float)this->fields.mHeight);
    }
    v72 = this->fields.topAnchor;
    if ( !v72 )
      goto LABEL_177;
    v73 = (UnityEngine_Object_o *)v72->fields.target;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
    if ( UnityEngine_Object__op_Implicit(v73, 0) )
    {
      cachedTransform = this->fields.topAnchor;
      if ( !cachedTransform )
        goto LABEL_177;
      cachedTransform = UIRect_AnchorPoint__GetSides((UIRect_AnchorPoint_o *)cachedTransform, parent, v74);
      if ( cachedTransform )
      {
        if ( (*((_DWORD *)cachedTransform + 6) & 0xFFFFFFFC) != 0 )
        {
          v76 = this->fields.topAnchor;
          if ( !v76 )
            goto LABEL_177;
          v43 = NGUIMath__Lerp(
                  *((float *)cachedTransform + 18),
                  *((float *)cachedTransform + 12),
                  v76->fields.relative,
                  0);
          v77 = this->fields.topAnchor;
          if ( !v77 )
            goto LABEL_177;
          v46 = (float)v77->fields.absolute;
          goto LABEL_83;
        }
LABEL_178:
        sub_21FFED4(cachedTransform);
      }
      *(UnityEngine_Vector3_o *)(&v80 - 1) = UIRect__GetLocalPos((UIRect_o *)this, this->fields.topAnchor, parent, v75);
      v81 = this->fields.topAnchor;
      if ( !v81 )
        goto LABEL_177;
      mHeight = (float)v81->fields.absolute;
    }
    else
    {
      mHeight = (float)this->fields.mHeight;
      v80 = y - (float)(PivotOffset.fields.y * mHeight);
    }
    v78 = v80 + mHeight;
  }
LABEL_88:
  v82 = 1.0;
  v83 = v48 - v47;
  if ( PivotOffset.fields.x <= 1.0 )
    v84 = PivotOffset.fields.x;
  else
    v84 = 1.0;
  if ( PivotOffset.fields.x >= 0.0 )
    v85 = v84;
  else
    v85 = 0.0;
  if ( PivotOffset.fields.y <= 1.0 )
    v82 = PivotOffset.fields.y;
  if ( PivotOffset.fields.y >= 0.0 )
    v86 = v82;
  else
    v86 = 0.0;
  if ( !byte_593193F )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_593193F = 1;
  }
  v87 = v83 + 0.5;
  if ( *(&System_Math_TypeInfo->_2.cctor_finished + 1) )
  {
    v88 = 1;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v4);
    v88 = (unsigned __int8)byte_593193F;
  }
  v89 = vcvtms_s32_f32(v87);
  v90 = v78 - v49;
  if ( floorf(v87) == INFINITY )
    v91 = 0x80000000;
  else
    v91 = v89;
  if ( !v88 )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_593193F = 1;
  }
  v92 = v90 + 0.5;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v4);
  v93 = vcvtms_s32_f32(v92);
  keepAspectRatio = this->fields.keepAspectRatio;
  if ( floorf(v92) == INFINITY )
    v95 = 0x80000000;
  else
    v95 = v93;
  if ( keepAspectRatio )
  {
    aspectRatio = this->fields.aspectRatio;
    if ( aspectRatio != 0.0 )
    {
      if ( keepAspectRatio == 2 )
      {
        if ( !byte_593220B )
        {
          sub_21FFC50(&System_Math_TypeInfo);
          byte_593220B = 1;
        }
        v97 = aspectRatio * (float)v95;
        if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v4);
        v98 = v97;
        v99 = modf(v97, &iptr);
        if ( v97 >= 0.0 )
        {
          if ( v99 == 0.5 )
          {
            v101 = 1.0;
            v100 = iptr;
LABEL_133:
            v107 = v100 + v101;
            if ( ((__int64)v100 & 1) != 0 )
              v100 = v107;
            goto LABEL_155;
          }
          v100 = floor(v98 + 0.5);
        }
        else
        {
          if ( v99 == -0.5 )
          {
            v100 = iptr;
            v101 = -1.0;
            goto LABEL_133;
          }
          v100 = ceil(v98 + -0.5);
        }
LABEL_155:
        if ( v100 == INFINITY )
          v91 = 0x80000000;
        else
          v91 = (int)v100;
        goto LABEL_162;
      }
      if ( !byte_593220B )
      {
        sub_21FFC50(&System_Math_TypeInfo);
        byte_593220B = 1;
      }
      v102 = (float)v91 / aspectRatio;
      if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v4);
      v103 = v102;
      v104 = modf(v102, &iptr);
      if ( v102 >= 0.0 )
      {
        if ( v104 == 0.5 )
        {
          v106 = 1.0;
          v105 = iptr;
LABEL_138:
          v108 = v105 + v106;
          if ( ((__int64)v105 & 1) != 0 )
            v105 = v108;
          goto LABEL_159;
        }
        v105 = floor(v103 + 0.5);
      }
      else
      {
        if ( v104 == -0.5 )
        {
          v105 = iptr;
          v106 = -1.0;
          goto LABEL_138;
        }
        v105 = ceil(v103 + -0.5);
      }
LABEL_159:
      if ( v105 == INFINITY )
        v95 = 0x80000000;
      else
        v95 = (int)v105;
    }
  }
LABEL_162:
  v119 = v86 * v90;
  if ( v91 < ((int (__fastcall *)(UIWidget_o *, const MethodInfo *))this->klass->vtable._34_get_minWidth.methodPtr)(
               this,
               this->klass->vtable._34_get_minWidth.method) )
    v91 = ((__int64 (__fastcall *)(UIWidget_o *, const MethodInfo *))this->klass->vtable._34_get_minWidth.methodPtr)(
            this,
            this->klass->vtable._34_get_minWidth.method);
  if ( v95 < ((int (__fastcall *)(UIWidget_o *, const MethodInfo *))this->klass->vtable._35_get_minHeight.methodPtr)(
               this,
               this->klass->vtable._35_get_minHeight.method) )
    v95 = ((__int64 (__fastcall *)(UIWidget_o *, const MethodInfo *))this->klass->vtable._35_get_minHeight.methodPtr)(
            this,
            this->klass->vtable._35_get_minHeight.method);
  if ( (float)((float)((float)(v124 - v124) * (float)(v124 - v124))
             + (float)((float)((float)(v122 - (float)(v49 + v119)) * (float)(v122 - (float)(v49 + v119)))
                     + (float)((float)(v123 - (float)(v47 + (float)(v85 * v83)))
                             * (float)(v123 - (float)(v47 + (float)(v85 * v83)))))) > 0.001 )
  {
    cachedTransform = UIRect__get_cachedTransform((UIRect_o *)this, v120);
    if ( cachedTransform )
    {
      v129.fields.x = v47 + (float)(v85 * v83);
      v129.fields.y = v49 + v119;
      v129.fields.z = v124;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)cachedTransform, v129, 0);
      if ( this->fields.mIsInFront )
        this->fields.mChanged = 1;
      goto LABEL_170;
    }
LABEL_177:
    sub_21FFECC(cachedTransform, v4);
  }
LABEL_170:
  if ( this->fields.mWidth != v91 || this->fields.mHeight != v95 )
  {
    mIsInFront = this->fields.mIsInFront;
    this->fields.mWidth = v91;
    this->fields.mHeight = v95;
    if ( mIsInFront )
      this->fields.mChanged = 1;
    if ( this->fields.autoResizeBoxCollider )
      UIWidget__ResizeCollider(this, v120);
  }
}


void UIWidget__OnApplicationPause(UIWidget_o *this, bool paused, const MethodInfo *method)
{
  if ( !paused )
    ((void (__fastcall *)(UIWidget_o *, const MethodInfo *))this->klass->vtable._30_MarkAsChanged.methodPtr)(
      this,
      this->klass->vtable._30_MarkAsChanged.method);
}


void UIWidget__OnDisable(UIWidget_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  UIWidget__RemoveFromPanel(this, method);
  UIRect__OnDisable((UIRect_o *)this, v3);
}


void UIWidget__OnFill(
        UIWidget_o *this,
        BetterList_Vector3__o *verts,
        BetterList_Vector2__o *uvs,
        BetterList_Color32__o *cols,
        const MethodInfo *method)
{
  ;
}


void UIWidget__OnInit(UIWidget_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x1
  int32_t mWidth; // w8
  UnityEngine_Transform_o *cachedTransform; // x0
  __int64 v7; // x1
  float x; // s8
  float y; // s9
  float z; // s10
  const MethodInfo *v11; // x1
  UnityEngine_Transform_o *v12; // x20
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4

  UIRect__OnInit((UIRect_o *)this, method);
  UIWidget__RemoveFromPanel(this, v3);
  mWidth = this->fields.mWidth;
  this->fields.mMoved = 1;
  if ( __PAIR64__(this->fields.mHeight, mWidth) == 0x6400000064LL )
  {
    cachedTransform = UIRect__get_cachedTransform((UIRect_o *)this, v4);
    if ( !cachedTransform )
      goto LABEL_13;
    localScale = UnityEngine_Transform__get_localScale(cachedTransform, 0);
    x = localScale.fields.x;
    y = localScale.fields.y;
    z = localScale.fields.z;
    if ( !byte_5931942 )
    {
      sub_21FFC50(&System_Math_TypeInfo);
      byte_5931942 = 1;
    }
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v4);
    if ( sqrtf((float)(z * z) + (float)((float)(x * x) + (float)(y * y))) > 8.0 )
    {
      ((void (__fastcall *)(UIWidget_o *, const MethodInfo *))this->klass->vtable._32_UpgradeFrom265.methodPtr)(
        this,
        this->klass->vtable._32_UpgradeFrom265.method);
      cachedTransform = UIRect__get_cachedTransform((UIRect_o *)this, v11);
      v12 = cachedTransform;
      if ( !byte_5931945 )
      {
        cachedTransform = (UnityEngine_Transform_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
        byte_5931945 = 1;
      }
      if ( v12 )
      {
        UnityEngine_Transform__set_localScale(v12, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
        goto LABEL_12;
      }
LABEL_13:
      sub_21FFECC(cachedTransform, v7);
    }
  }
LABEL_12:
  UIRect__UpdateMe((UIRect_o *)this, v4);
}


void UIWidget__OnUpdate(UIWidget_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *panel; // x20
  const MethodInfo *v4; // x1

  if ( (byte_593CEFE & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CEFE = 1;
  }
  panel = (UnityEngine_Object_o *)this->fields.panel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(panel, 0, 0) )
    UIWidget__CreatePanel(this, v4);
}


int32_t UIWidget__PanelCompareFunc(UIWidget_o *left, UIWidget_o *right, const MethodInfo *method)
{
  UIWidget_o *v4; // x19
  int32_t mDepth; // w8
  int32_t v6; // w9
  UnityEngine_Object_o *v8; // x19
  __int64 v9; // x1
  UnityEngine_Object_o *v10; // x20
  __int64 v11; // x1
  __int64 v12; // x1

  v4 = left;
  if ( (byte_593CEF3 & 1) == 0 )
  {
    left = (UIWidget_o *)sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CEF3 = 1;
  }
  if ( !v4 || !right )
    goto LABEL_24;
  mDepth = v4->fields.mDepth;
  v6 = right->fields.mDepth;
  if ( mDepth < v6 )
    return -1;
  if ( mDepth > v6 )
    return 1;
  v8 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UIWidget_o *, const MethodInfo *, const MethodInfo *))v4->klass->vtable._24_get_material.methodPtr)(
                                 v4,
                                 v4->klass->vtable._24_get_material.method,
                                 method);
  v10 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UIWidget_o *, const MethodInfo *))right->klass->vtable._24_get_material.methodPtr)(
                                  right,
                                  right->klass->vtable._24_get_material.method);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  if ( UnityEngine_Object__op_Equality(v8, v10, 0) )
    return 0;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
  if ( UnityEngine_Object__op_Inequality(v8, 0, 0) )
    return -1;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
  left = (UIWidget_o *)UnityEngine_Object__op_Inequality(v10, 0, 0);
  if ( ((unsigned __int8)left & 1) != 0 )
    return 1;
  if ( !v8 || (left = (UIWidget_o *)UnityEngine_Object__GetInstanceID(v8, 0), !v10) )
LABEL_24:
    sub_21FFECC(left, right);
  if ( (int)left < UnityEngine_Object__GetInstanceID(v10, 0) )
    return -1;
  else
    return 1;
}


void UIWidget__ParentHasChanged(UIWidget_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *panel; // x20
  const MethodInfo *v5; // x1
  UnityEngine_Transform_o *cachedTransform; // x20
  const MethodInfo *v7; // x1
  UnityEngine_GameObject_o *cachedGameObject; // x0
  __int64 v9; // x1
  __int64 v10; // x1
  int32_t layer; // w21
  UIPanel_o *_55980932; // x0
  __int64 v13; // x1
  UnityEngine_Object_o *v14; // x21
  UnityEngine_Object_o *v15; // x20
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x1

  if ( (byte_593CEFA & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&UIPanel_TypeInfo);
    byte_593CEFA = 1;
  }
  UIRect__ParentHasChanged((UIRect_o *)this, method);
  panel = (UnityEngine_Object_o *)this->fields.panel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  if ( UnityEngine_Object__op_Inequality(panel, 0, 0) )
  {
    cachedTransform = UIRect__get_cachedTransform((UIRect_o *)this, v5);
    cachedGameObject = UIRect__get_cachedGameObject((UIRect_o *)this, v7);
    if ( !cachedGameObject )
      sub_21FFECC(0, v9);
    layer = UnityEngine_GameObject__get_layer(cachedGameObject, 0);
    if ( !*(&UIPanel_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UIPanel_TypeInfo, v10);
    _55980932 = UIPanel__Find_55980932(cachedTransform, 1, layer, 0);
    v14 = (UnityEngine_Object_o *)this->fields.panel;
    v15 = (UnityEngine_Object_o *)_55980932;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
    if ( UnityEngine_Object__op_Inequality(v14, v15, 0) )
    {
      UIWidget__RemoveFromPanel(this, v16);
      UIWidget__CreatePanel(this, v17);
    }
  }
}


void UIWidget__RemoveFromPanel(UIWidget_o *this, const MethodInfo *method)
{
  UIPanel_o **p_panel; // x20
  UnityEngine_Object_o *panel; // x21
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_593CEF6 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CEF6 = 1;
  }
  p_panel = &this->fields.panel;
  panel = (UnityEngine_Object_o *)this->fields.panel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(panel, 0, 0) )
  {
    if ( !*p_panel )
      sub_21FFECC(0, v5);
    UIPanel__RemoveWidget(*p_panel, this, 0);
    this->fields.panel = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.panel, 0, v12, v13, v14, v15, v16, v17);
  }
  this->fields.drawCall = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.drawCall, 0, v6, v7, v8, v9, v10, v11);
}


void UIWidget__ResizeCollider(UIWidget_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *gameObject; // x19

  if ( (byte_593CEF1 & 1) == 0 )
  {
    sub_21FFC50(&NGUITools_TypeInfo);
    byte_593CEF1 = 1;
  }
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, method);
  if ( NGUITools__GetActive((UnityEngine_Behaviour_o *)this, 0) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v3);
    NGUITools__UpdateWidgetCollider(gameObject, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void UIWidget__SetDimensions(UIWidget_o *this, int32_t w, int32_t h, const MethodInfo *method)
{
  int32_t keepAspectRatio; // w8
  float v6; // s8
  float v7; // s9
  float v8; // s9
  double v9; // d8
  double v10; // d0
  double v11; // d0
  double v12; // d1
  float v13; // s8
  float aspectRatio; // s9
  float v15; // s9
  double v16; // d8
  double v17; // d0
  double v18; // d0
  double v19; // d1
  double v20; // d1
  double v21; // d1
  int32_t v22; // w8
  int32_t v23; // w8
  _BOOL4 autoResizeBoxCollider; // w8
  double iptr; // [xsp+18h] [xbp-18h] BYREF

  if ( this->fields.mWidth == w && this->fields.mHeight == h )
    return;
  keepAspectRatio = this->fields.keepAspectRatio;
  this->fields.mWidth = w;
  this->fields.mHeight = h;
  switch ( keepAspectRatio )
  {
    case 0:
      this->fields.aspectRatio = (float)w / (float)h;
      break;
    case 2:
      v13 = (float)h;
      aspectRatio = this->fields.aspectRatio;
      if ( !byte_593220B )
      {
        sub_21FFC50(&System_Math_TypeInfo);
        byte_593220B = 1;
      }
      v15 = aspectRatio * v13;
      if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, *(_QWORD *)&w);
      v16 = v15;
      v17 = modf(v15, &iptr);
      if ( v15 >= 0.0 )
      {
        if ( v17 == 0.5 )
        {
          v19 = 1.0;
          v18 = iptr;
LABEL_23:
          v20 = v18 + v19;
          if ( ((__int64)v18 & 1) != 0 )
            v18 = v20;
          goto LABEL_33;
        }
        v18 = floor(v16 + 0.5);
      }
      else
      {
        if ( v17 == -0.5 )
        {
          v18 = iptr;
          v19 = -1.0;
          goto LABEL_23;
        }
        v18 = ceil(v16 + -0.5);
      }
LABEL_33:
      if ( v18 == INFINITY )
        v22 = 0x80000000;
      else
        v22 = (int)v18;
      this->fields.mWidth = v22;
      break;
    case 1:
      v6 = (float)w;
      v7 = this->fields.aspectRatio;
      if ( !byte_593220B )
      {
        sub_21FFC50(&System_Math_TypeInfo);
        byte_593220B = 1;
      }
      v8 = v6 / v7;
      if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, *(_QWORD *)&w);
      v9 = v8;
      v10 = modf(v8, &iptr);
      if ( v8 >= 0.0 )
      {
        if ( v10 == 0.5 )
        {
          v12 = 1.0;
          v11 = iptr;
LABEL_28:
          v21 = v11 + v12;
          if ( ((__int64)v11 & 1) != 0 )
            v11 = v21;
          goto LABEL_39;
        }
        v11 = floor(v9 + 0.5);
      }
      else
      {
        if ( v10 == -0.5 )
        {
          v11 = iptr;
          v12 = -1.0;
          goto LABEL_28;
        }
        v11 = ceil(v9 + -0.5);
      }
LABEL_39:
      if ( v11 == INFINITY )
        v23 = 0x80000000;
      else
        v23 = (int)v11;
      this->fields.mHeight = v23;
      break;
  }
  autoResizeBoxCollider = this->fields.autoResizeBoxCollider;
  this->fields.mMoved = 1;
  if ( autoResizeBoxCollider )
    UIWidget__ResizeCollider(this, *(const MethodInfo **)&w);
  ((void (__fastcall *)(UIWidget_o *, const MethodInfo *))this->klass->vtable._30_MarkAsChanged.methodPtr)(
    this,
    this->klass->vtable._30_MarkAsChanged.method);
}


void UIWidget__SetDirty(UIWidget_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *drawCall; // x20
  _BOOL8 isVisible; // x0
  const MethodInfo *v5; // x1
  struct UIDrawCall_o *v6; // x8
  struct UIGeometry_o *geometry; // x8
  struct BetterList_Vector3__o *verts; // x8

  if ( (byte_593CEF5 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CEF5 = 1;
  }
  drawCall = (UnityEngine_Object_o *)this->fields.drawCall;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  isVisible = UnityEngine_Object__op_Inequality(drawCall, 0, 0);
  if ( isVisible )
  {
    v6 = this->fields.drawCall;
    if ( v6 )
    {
      v6->fields.isDirty = 1;
      return;
    }
LABEL_14:
    sub_21FFECC(isVisible, v5);
  }
  isVisible = UIWidget__get_isVisible(this, v5);
  if ( isVisible )
  {
    geometry = this->fields.geometry;
    if ( geometry )
    {
      verts = geometry->fields.verts;
      if ( !verts )
        goto LABEL_14;
      if ( verts->fields.size >= 1 )
        UIWidget__CreatePanel(this, v5);
    }
  }
}


void UIWidget__SetRect(UIWidget_o *this, float x, float y, float width, float height, const MethodInfo *method)
{
  const MethodInfo *v7; // x1
  UnityEngine_Vector2_o PivotOffset; // kr00_8
  float v9; // s8
  int v10; // w8
  unsigned int v11; // w10
  int32_t v12; // w22
  float v13; // s8
  unsigned int v14; // w9
  unsigned int v15; // w8
  int32_t v16; // w21
  UnityEngine_Transform_o *cachedTransform; // x0
  __int64 v18; // x1
  UnityEngine_Transform_o *v19; // x20
  float32x2_t v20; // d4
  float32x2_t v26; // d9
  float z; // s8
  float32x2_t v28; // d9
  const MethodInfo *v29; // x2
  const MethodInfo *v30; // x2
  const MethodInfo *v31; // x1
  struct UIRect_AnchorPoint_o *leftAnchor; // x8
  UnityEngine_Transform_o *v33; // x20
  UnityEngine_Object_o *target; // x21
  const MethodInfo *v35; // x2
  struct UIRect_AnchorPoint_o *rightAnchor; // x8
  UnityEngine_Object_o *v37; // x21
  const MethodInfo *v38; // x2
  struct UIRect_AnchorPoint_o *bottomAnchor; // x8
  UnityEngine_Object_o *v40; // x21
  const MethodInfo *v41; // x2
  struct UIRect_AnchorPoint_o *topAnchor; // x8
  UnityEngine_Object_o *v43; // x21
  const MethodInfo *v44; // x2
  float32x2_t v48; // [xsp+40h] [xbp-60h]
  unsigned __int64 valuea; // [xsp+50h] [xbp-50h]
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v52; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_593CEF0 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CEF0 = 1;
  }
  PivotOffset = NGUIMath__GetPivotOffset(this->fields.mPivot, 0);
  if ( !byte_593193F )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_593193F = 1;
  }
  v9 = width + 0.5;
  if ( *(&System_Math_TypeInfo->_2.cctor_finished + 1) )
  {
    v10 = 1;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v7);
    v10 = (unsigned __int8)byte_593193F;
  }
  v11 = vcvtms_s32_f32(v9);
  if ( floorf(v9) == INFINITY )
    v12 = 0x80000000;
  else
    v12 = v11;
  if ( !v10 )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_593193F = 1;
  }
  v13 = height + 0.5;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v7);
  v14 = vcvtms_s32_f32(v13);
  if ( floorf(v13) == INFINITY )
    v15 = 0x80000000;
  else
    v15 = v14;
  if ( PivotOffset.fields.y == 0.5 )
    v16 = v15 & 0xFFFFFFFE;
  else
    v16 = v15;
  cachedTransform = UIRect__get_cachedTransform((UIRect_o *)this, v7);
  if ( !cachedTransform )
    goto LABEL_54;
  v19 = cachedTransform;
  v20.n64_f32[0] = width;
  __asm { FMOV            V1.2S, #1.0 }
  if ( _ZF )
    v12 &= ~1u;
  v20.n64_f32[1] = height;
  v48.n64_u64[0] = vadd_f32((float32x2_t)__PAIR64__(LODWORD(y), LODWORD(x)), v20).n64_u64[0];
  v26.n64_u64[0] = vadd_f32(
                     vmul_f32(
                       vsub_f32(v48, (float32x2_t)__PAIR64__(LODWORD(y), LODWORD(x))),
                       vbic_s8(
                         vbsl_s8(vcgt_f32((float32x2_t)PivotOffset, _D1), _D1, (int8x8_t)PivotOffset),
                         vcltz_f32((float32x2_t)PivotOffset))),
                     (float32x2_t)__PAIR64__(LODWORD(y), LODWORD(x))).n64_u64[0];
  localPosition = UnityEngine_Transform__get_localPosition(cachedTransform, 0);
  z = localPosition.fields.z;
  v28.n64_u64[0] = vadd_f32(v26, (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
  if ( v12 < ((int (__fastcall *)(UIWidget_o *, const MethodInfo *))this->klass->vtable._34_get_minWidth.methodPtr)(
               this,
               this->klass->vtable._34_get_minWidth.method) )
    v12 = ((__int64 (__fastcall *)(UIWidget_o *, const MethodInfo *))this->klass->vtable._34_get_minWidth.methodPtr)(
            this,
            this->klass->vtable._34_get_minWidth.method);
  valuea = vrndm_f32(v28).n64_u64[0];
  if ( v16 < ((int (__fastcall *)(UIWidget_o *, const MethodInfo *))this->klass->vtable._35_get_minHeight.methodPtr)(
               this,
               this->klass->vtable._35_get_minHeight.method) )
    v16 = ((__int64 (__fastcall *)(UIWidget_o *, const MethodInfo *))this->klass->vtable._35_get_minHeight.methodPtr)(
            this,
            this->klass->vtable._35_get_minHeight.method);
  LODWORD(v52.fields.x) = valuea;
  v52.fields.z = z;
  v52.fields.y = *((float *)&valuea + 1);
  UnityEngine_Transform__set_localPosition(v19, v52, 0);
  UIWidget__set_width(this, v12, v29);
  UIWidget__set_height(this, v16, v30);
  if ( UIRect__get_isAnchored((UIRect_o *)this, v31) )
  {
    cachedTransform = UnityEngine_Transform__get_parent(v19, 0);
    leftAnchor = this->fields.leftAnchor;
    if ( !leftAnchor )
      goto LABEL_54;
    v33 = cachedTransform;
    target = (UnityEngine_Object_o *)leftAnchor->fields.target;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
    cachedTransform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Implicit(target, 0);
    if ( ((unsigned __int8)cachedTransform & 1) != 0 )
    {
      cachedTransform = (UnityEngine_Transform_o *)this->fields.leftAnchor;
      if ( !cachedTransform )
        goto LABEL_54;
      UIRect_AnchorPoint__SetHorizontal((UIRect_AnchorPoint_o *)cachedTransform, v33, x, v35);
    }
    rightAnchor = this->fields.rightAnchor;
    if ( !rightAnchor )
      goto LABEL_54;
    v37 = (UnityEngine_Object_o *)rightAnchor->fields.target;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
    cachedTransform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Implicit(v37, 0);
    if ( ((unsigned __int8)cachedTransform & 1) != 0 )
    {
      cachedTransform = (UnityEngine_Transform_o *)this->fields.rightAnchor;
      if ( !cachedTransform )
        goto LABEL_54;
      UIRect_AnchorPoint__SetHorizontal((UIRect_AnchorPoint_o *)cachedTransform, v33, v48.n64_f32[0], v38);
    }
    bottomAnchor = this->fields.bottomAnchor;
    if ( !bottomAnchor )
      goto LABEL_54;
    v40 = (UnityEngine_Object_o *)bottomAnchor->fields.target;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
    cachedTransform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Implicit(v40, 0);
    if ( ((unsigned __int8)cachedTransform & 1) != 0 )
    {
      cachedTransform = (UnityEngine_Transform_o *)this->fields.bottomAnchor;
      if ( !cachedTransform )
        goto LABEL_54;
      UIRect_AnchorPoint__SetVertical((UIRect_AnchorPoint_o *)cachedTransform, v33, y, v41);
    }
    topAnchor = this->fields.topAnchor;
    if ( !topAnchor )
LABEL_54:
      sub_21FFECC(cachedTransform, v18);
    v43 = (UnityEngine_Object_o *)topAnchor->fields.target;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
    if ( UnityEngine_Object__op_Implicit(v43, 0) )
    {
      cachedTransform = (UnityEngine_Transform_o *)this->fields.topAnchor;
      if ( cachedTransform )
      {
        UIRect_AnchorPoint__SetVertical((UIRect_AnchorPoint_o *)cachedTransform, v33, v48.n64_f32[1], v44);
        return;
      }
      goto LABEL_54;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void UIWidget__UpdateFinalAlpha(UIWidget_o *this, int32_t frameID, const MethodInfo *method)
{
  float a; // s0
  __int64 v6; // x1
  UnityEngine_Object_o *parent; // x21
  _BOOL8 v8; // x0
  __int64 v9; // x1

  if ( (byte_593CEED & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CEED = 1;
  }
  a = 0.0;
  if ( this->fields.mIsVisibleByAlpha && this->fields.mIsInFront )
  {
    parent = (UnityEngine_Object_o *)UIRect__get_parent((UIRect_o *)this, *(const MethodInfo **)&frameID);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    v8 = UnityEngine_Object__op_Inequality(parent, 0, 0);
    if ( v8 )
    {
      if ( !parent )
        sub_21FFECC(v8, v9);
      a = ((float (__fastcall *)(UnityEngine_Object_o *, _QWORD, Il2CppClass *))parent->klass[1]._1.declaringType)(
            parent,
            (unsigned int)frameID,
            parent->klass[1]._1.parent)
        * this->fields.mColor.fields.a;
    }
    else
    {
      a = this->fields.mColor.fields.a;
    }
  }
  this->fields.finalAlpha = a;
}


bool UIWidget__UpdateGeometry(UIWidget_o *this, int32_t frame, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x2
  float v7; // s0
  _BOOL4 mIsVisibleByAlpha; // w8
  _BOOL4 mChanged; // w9
  __int64 v10; // x1
  UnityEngine_Object_o *v11; // x21
  UnityEngine_Transform_o *geometry; // x0
  intptr_t v13; // x8
  bool v14; // w21
  struct UIGeometry_o *v15; // x8
  intptr_t v16; // x8
  __int128 v17; // q1
  __int128 v18; // q2
  intptr_t v19; // x8
  intptr_t m_CachedPtr; // x8
  __int128 v21; // q1
  __int128 v22; // q2
  struct UIPanel_o *panel; // x8
  __int128 v24; // q1
  __int128 v25; // q2
  __int128 v26; // q0
  __int128 v27; // q1
  __int128 v28; // q1
  __int128 v29; // q0
  __int128 v30; // q0
  UnityEngine_Matrix4x4_o *v31; // x1
  struct UIPanel_o *v32; // x8
  __int128 v33; // q1
  __int128 v34; // q2
  __int128 v35; // q0
  __int128 v36; // q1
  __int128 v37; // q1
  __int128 v38; // q0
  __int128 v39; // q0
  UnityEngine_Matrix4x4_o v41; // [xsp+0h] [xbp-270h] BYREF
  UnityEngine_Matrix4x4_o v42; // [xsp+40h] [xbp-230h] BYREF
  UnityEngine_Matrix4x4_o v43; // [xsp+80h] [xbp-1F0h] BYREF
  UnityEngine_Matrix4x4_o v44; // [xsp+C0h] [xbp-1B0h] BYREF
  UnityEngine_Matrix4x4_o v45; // [xsp+100h] [xbp-170h] BYREF
  UnityEngine_Matrix4x4_o v46; // [xsp+140h] [xbp-130h] BYREF
  UnityEngine_Matrix4x4_o v47; // [xsp+180h] [xbp-F0h] BYREF
  UnityEngine_Matrix4x4_o v48; // [xsp+1C0h] [xbp-B0h] BYREF
  UnityEngine_Matrix4x4_o v49; // [xsp+200h] [xbp-70h]

  if ( (byte_593CEFF & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CEFF = 1;
  }
  ((void (__fastcall *)(UIWidget_o *, _QWORD, const MethodInfo *))this->klass->vtable._9_CalculateFinalAlpha.methodPtr)(
    this,
    (unsigned int)frame,
    this->klass->vtable._9_CalculateFinalAlpha.method);
  mIsVisibleByAlpha = this->fields.mIsVisibleByAlpha;
  if ( this->fields.mIsVisibleByAlpha && this->fields.mLastAlpha != v7 )
    this->fields.mChanged = 1;
  mChanged = this->fields.mChanged;
  this->fields.mLastAlpha = v7;
  if ( !mChanged )
  {
    if ( this->fields.mMoved )
    {
      geometry = (UnityEngine_Transform_o *)this->fields.geometry;
      if ( !geometry )
        goto LABEL_44;
      m_CachedPtr = geometry->fields.m_CachedPtr;
      if ( !m_CachedPtr )
        goto LABEL_44;
      if ( *(int *)(m_CachedPtr + 24) >= 1 )
      {
        if ( this->fields.mMatrixFrame == frame )
        {
          v21 = *(_OWORD *)&this->fields.mLocalToPanel.fields.m01;
          *(_OWORD *)&v49.fields.m00 = *(_OWORD *)&this->fields.mLocalToPanel.fields.m00;
          *(_OWORD *)&v49.fields.m01 = v21;
          v22 = *(_OWORD *)&this->fields.mLocalToPanel.fields.m03;
          *(_OWORD *)&v49.fields.m02 = *(_OWORD *)&this->fields.mLocalToPanel.fields.m02;
          *(_OWORD *)&v49.fields.m03 = v22;
        }
        else
        {
          panel = this->fields.panel;
          if ( !panel )
            goto LABEL_44;
          v24 = *(_OWORD *)&panel->fields.worldToLocal.fields.m01;
          *(_OWORD *)&v49.fields.m00 = *(_OWORD *)&panel->fields.worldToLocal.fields.m00;
          *(_OWORD *)&v49.fields.m01 = v24;
          v25 = *(_OWORD *)&panel->fields.worldToLocal.fields.m03;
          *(_OWORD *)&v49.fields.m02 = *(_OWORD *)&panel->fields.worldToLocal.fields.m02;
          *(_OWORD *)&v49.fields.m03 = v25;
          geometry = UIRect__get_cachedTransform((UIRect_o *)this, v5);
          if ( !geometry )
            goto LABEL_44;
          UnityEngine_Transform__get_localToWorldMatrix(&v48, geometry, 0);
          v43 = v49;
          v42 = v48;
          UnityEngine_Matrix4x4__op_Multiply(&v47, &v43, &v42, 0);
          v26 = *(_OWORD *)&v47.fields.m00;
          v27 = *(_OWORD *)&v47.fields.m01;
          geometry = (UnityEngine_Transform_o *)this->fields.geometry;
          this->fields.mMatrixFrame = frame;
          *(_OWORD *)&this->fields.mLocalToPanel.fields.m00 = v26;
          *(_OWORD *)&this->fields.mLocalToPanel.fields.m01 = v27;
          v28 = *(_OWORD *)&v47.fields.m03;
          *(_OWORD *)&this->fields.mLocalToPanel.fields.m02 = *(_OWORD *)&v47.fields.m02;
          *(_OWORD *)&this->fields.mLocalToPanel.fields.m03 = v28;
          v29 = *(_OWORD *)&this->fields.mLocalToPanel.fields.m01;
          *(_OWORD *)&v49.fields.m00 = *(_OWORD *)&this->fields.mLocalToPanel.fields.m00;
          *(_OWORD *)&v49.fields.m01 = v29;
          v30 = *(_OWORD *)&this->fields.mLocalToPanel.fields.m03;
          *(_OWORD *)&v49.fields.m02 = *(_OWORD *)&this->fields.mLocalToPanel.fields.m02;
          *(_OWORD *)&v49.fields.m03 = v30;
          if ( !geometry )
            goto LABEL_44;
        }
        v31 = &v41;
        v41 = v49;
LABEL_41:
        UIGeometry__ApplyTransform((UIGeometry_o *)geometry, v31, v6);
LABEL_42:
        this->fields.mMoved = 0;
        return 1;
      }
    }
    goto LABEL_32;
  }
  this->fields.mChanged = 0;
  if ( v7 <= 0.001 || !mIsVisibleByAlpha )
    goto LABEL_21;
  v11 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UIWidget_o *, const MethodInfo *))this->klass->vtable._28_get_shader.methodPtr)(
                                  this,
                                  this->klass->vtable._28_get_shader.method);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
  if ( !UnityEngine_Object__op_Inequality(v11, 0, 0) )
  {
LABEL_21:
    geometry = (UnityEngine_Transform_o *)this->fields.geometry;
    if ( !geometry )
      goto LABEL_44;
    v19 = geometry->fields.m_CachedPtr;
    if ( !v19 )
      goto LABEL_44;
    if ( *(int *)(v19 + 24) >= 1 )
    {
      if ( this->fields.fillGeometry )
        UIGeometry__Clear((UIGeometry_o *)geometry, v5);
      goto LABEL_42;
    }
LABEL_32:
    v14 = 0;
    this->fields.mMoved = 0;
    return v14;
  }
  geometry = (UnityEngine_Transform_o *)this->fields.geometry;
  if ( !geometry )
    goto LABEL_44;
  v13 = geometry->fields.m_CachedPtr;
  if ( !v13 )
    goto LABEL_44;
  v14 = *(_DWORD *)(v13 + 24) > 0;
  if ( this->fields.fillGeometry )
  {
    UIGeometry__Clear((UIGeometry_o *)geometry, v5);
    v15 = this->fields.geometry;
    if ( !v15 )
      goto LABEL_44;
    ((void (__fastcall *)(UIWidget_o *, struct BetterList_Vector3__o *, struct BetterList_Vector2__o *, struct BetterList_Color32__o *, const MethodInfo *))this->klass->vtable._38_OnFill.methodPtr)(
      this,
      v15->fields.verts,
      v15->fields.uvs,
      v15->fields.cols,
      this->klass->vtable._38_OnFill.method);
    geometry = (UnityEngine_Transform_o *)this->fields.geometry;
    if ( !geometry )
      goto LABEL_44;
  }
  v16 = geometry->fields.m_CachedPtr;
  if ( !v16 )
    goto LABEL_44;
  if ( *(int *)(v16 + 24) >= 1 )
  {
    if ( this->fields.mMatrixFrame == frame )
    {
      v17 = *(_OWORD *)&this->fields.mLocalToPanel.fields.m01;
      *(_OWORD *)&v49.fields.m00 = *(_OWORD *)&this->fields.mLocalToPanel.fields.m00;
      *(_OWORD *)&v49.fields.m01 = v17;
      v18 = *(_OWORD *)&this->fields.mLocalToPanel.fields.m03;
      *(_OWORD *)&v49.fields.m02 = *(_OWORD *)&this->fields.mLocalToPanel.fields.m02;
      *(_OWORD *)&v49.fields.m03 = v18;
LABEL_40:
      v31 = &v44;
      v44 = v49;
      goto LABEL_41;
    }
    v32 = this->fields.panel;
    if ( v32 )
    {
      v33 = *(_OWORD *)&v32->fields.worldToLocal.fields.m01;
      *(_OWORD *)&v49.fields.m00 = *(_OWORD *)&v32->fields.worldToLocal.fields.m00;
      *(_OWORD *)&v49.fields.m01 = v33;
      v34 = *(_OWORD *)&v32->fields.worldToLocal.fields.m03;
      *(_OWORD *)&v49.fields.m02 = *(_OWORD *)&v32->fields.worldToLocal.fields.m02;
      *(_OWORD *)&v49.fields.m03 = v34;
      geometry = UIRect__get_cachedTransform((UIRect_o *)this, v5);
      if ( geometry )
      {
        UnityEngine_Transform__get_localToWorldMatrix(&v48, geometry, 0);
        v46 = v49;
        v45 = v48;
        UnityEngine_Matrix4x4__op_Multiply(&v47, &v46, &v45, 0);
        v35 = *(_OWORD *)&v47.fields.m00;
        v36 = *(_OWORD *)&v47.fields.m01;
        geometry = (UnityEngine_Transform_o *)this->fields.geometry;
        this->fields.mMatrixFrame = frame;
        *(_OWORD *)&this->fields.mLocalToPanel.fields.m00 = v35;
        *(_OWORD *)&this->fields.mLocalToPanel.fields.m01 = v36;
        v37 = *(_OWORD *)&v47.fields.m03;
        *(_OWORD *)&this->fields.mLocalToPanel.fields.m02 = *(_OWORD *)&v47.fields.m02;
        *(_OWORD *)&this->fields.mLocalToPanel.fields.m03 = v37;
        v38 = *(_OWORD *)&this->fields.mLocalToPanel.fields.m01;
        *(_OWORD *)&v49.fields.m00 = *(_OWORD *)&this->fields.mLocalToPanel.fields.m00;
        *(_OWORD *)&v49.fields.m01 = v38;
        v39 = *(_OWORD *)&this->fields.mLocalToPanel.fields.m03;
        *(_OWORD *)&v49.fields.m02 = *(_OWORD *)&this->fields.mLocalToPanel.fields.m02;
        *(_OWORD *)&v49.fields.m03 = v39;
        if ( geometry )
          goto LABEL_40;
      }
    }
LABEL_44:
    sub_21FFECC(geometry, v5);
  }
  return v14;
}


// local variable allocation has failed, the output may be wrong!
bool UIWidget__UpdateTransform(UIWidget_o *this, int32_t frame, const MethodInfo *method)
{
  UIWidget_o *v3; // x19
  struct UIPanel_o *panel; // x8
  struct UIPanel_o *v6; // x8
  __int128 v7; // q1
  __int128 v8; // q2
  __int128 v9; // q0
  __int128 v10; // q1
  int32_t mPivot; // w0
  __int128 v12; // q2
  UnityEngine_Vector2_o PivotOffset; // kr00_8
  int mWidth; // w21
  int mHeight; // w22
  const MethodInfo *v16; // x1
  UIWidget_o *v17; // x20
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Matrix4x4_o *v21; // x8
  float v22; // s11
  float v23; // s12
  float v24; // s13
  UnityEngine_Matrix4x4_o *v25; // x8
  float v26; // s9
  float v27; // s8
  float v28; // s10
  struct UIWidget_OnDimensionsChanged_o *onChange; // x8
  UnityEngine_Matrix4x4_o v31; // [xsp+0h] [xbp-1A0h] BYREF
  UnityEngine_Matrix4x4_o v32; // [xsp+40h] [xbp-160h] BYREF
  UnityEngine_Matrix4x4_o v33; // [xsp+80h] [xbp-120h] BYREF
  UnityEngine_Matrix4x4_o v34; // [xsp+C0h] [xbp-E0h] BYREF
  UnityEngine_Matrix4x4_o v35; // [xsp+100h] [xbp-A0h]
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4

  v3 = this;
  if ( !this->fields.mMoved )
  {
    panel = this->fields.panel;
    if ( panel )
    {
      if ( panel->fields.widgetsAreStatic )
        goto LABEL_15;
      this = (UIWidget_o *)UIRect__get_cachedTransform((UIRect_o *)this, *(const MethodInfo **)&frame);
      if ( this )
      {
        if ( !UnityEngine_Transform__get_hasChanged((UnityEngine_Transform_o *)this, 0) )
          goto LABEL_15;
        this = (UIWidget_o *)v3->fields.mTrans;
        if ( this )
        {
          UnityEngine_Transform__set_hasChanged((UnityEngine_Transform_o *)this, 0, 0);
          v6 = v3->fields.panel;
          if ( v6 )
          {
            v7 = *(_OWORD *)&v6->fields.worldToLocal.fields.m01;
            *(_OWORD *)&v35.fields.m00 = *(_OWORD *)&v6->fields.worldToLocal.fields.m00;
            *(_OWORD *)&v35.fields.m01 = v7;
            v8 = *(_OWORD *)&v6->fields.worldToLocal.fields.m03;
            *(_OWORD *)&v35.fields.m02 = *(_OWORD *)&v6->fields.worldToLocal.fields.m02;
            *(_OWORD *)&v35.fields.m03 = v8;
            this = (UIWidget_o *)UIRect__get_cachedTransform((UIRect_o *)v3, *(const MethodInfo **)&frame);
            if ( this )
            {
              UnityEngine_Transform__get_localToWorldMatrix(&v34, (UnityEngine_Transform_o *)this, 0);
              v32 = v35;
              v31 = v34;
              UnityEngine_Matrix4x4__op_Multiply(&v33, &v32, &v31, 0);
              v9 = *(_OWORD *)&v33.fields.m00;
              v10 = *(_OWORD *)&v33.fields.m01;
              mPivot = v3->fields.mPivot;
              v3->fields.mMatrixFrame = frame;
              *(_OWORD *)&v3->fields.mLocalToPanel.fields.m00 = v9;
              *(_OWORD *)&v3->fields.mLocalToPanel.fields.m01 = v10;
              v12 = *(_OWORD *)&v33.fields.m03;
              *(_OWORD *)&v3->fields.mLocalToPanel.fields.m02 = *(_OWORD *)&v33.fields.m02;
              *(_OWORD *)&v3->fields.mLocalToPanel.fields.m03 = v12;
              PivotOffset = NGUIMath__GetPivotOffset(mPivot, 0);
              mWidth = v3->fields.mWidth;
              mHeight = v3->fields.mHeight;
              this = (UIWidget_o *)UIRect__get_cachedTransform((UIRect_o *)v3, v16);
              if ( this )
              {
                v17 = this;
                v36 = UnityEngine_Transform__TransformPoint_83283144(
                        (UnityEngine_Transform_o *)this,
                        -(float)(PivotOffset.fields.x * (float)mWidth),
                        -(float)(PivotOffset.fields.y * (float)mHeight),
                        0.0,
                        0);
                x = v36.fields.x;
                y = v36.fields.y;
                z = v36.fields.z;
                v37 = UnityEngine_Transform__TransformPoint_83283144(
                        (UnityEngine_Transform_o *)v17,
                        (float)mWidth - (float)(PivotOffset.fields.x * (float)mWidth),
                        (float)mHeight - (float)(PivotOffset.fields.y * (float)mHeight),
                        0.0,
                        0);
                v21 = (UnityEngine_Matrix4x4_o *)v3->fields.panel;
                if ( v21 )
                {
                  v22 = v37.fields.x;
                  v23 = v37.fields.y;
                  v24 = v37.fields.z;
                  v38.fields.x = x;
                  v38.fields.y = y;
                  v38.fields.z = z;
                  v39 = UnityEngine_Matrix4x4__MultiplyPoint3x4(v21 + 3, v38, 0);
                  v25 = (UnityEngine_Matrix4x4_o *)v3->fields.panel;
                  if ( v25 )
                  {
                    v26 = v39.fields.x;
                    v27 = v39.fields.y;
                    v28 = v39.fields.z;
                    v40.fields.x = v22;
                    v40.fields.y = v23;
                    v40.fields.z = v24;
                    v41 = UnityEngine_Matrix4x4__MultiplyPoint3x4(v25 + 3, v40, 0);
                    if ( (float)((float)((float)(v3->fields.mOldV0.fields.z - v28)
                                       * (float)(v3->fields.mOldV0.fields.z - v28))
                               + (float)((float)((float)(v3->fields.mOldV0.fields.x - v26)
                                               * (float)(v3->fields.mOldV0.fields.x - v26))
                                       + (float)((float)(v3->fields.mOldV0.fields.y - v27)
                                               * (float)(v3->fields.mOldV0.fields.y - v27)))) > 0.000001
                      || (float)((float)((float)(v3->fields.mOldV1.fields.z - v41.fields.z)
                                       * (float)(v3->fields.mOldV1.fields.z - v41.fields.z))
                               + (float)((float)((float)(v3->fields.mOldV1.fields.x - v41.fields.x)
                                               * (float)(v3->fields.mOldV1.fields.x - v41.fields.x))
                                       + (float)((float)(v3->fields.mOldV1.fields.y - v41.fields.y)
                                               * (float)(v3->fields.mOldV1.fields.y - v41.fields.y)))) > 0.000001 )
                    {
                      v3->fields.mOldV0.fields.x = v26;
                      v3->fields.mMoved = 1;
                      v3->fields.mOldV0.fields.y = v27;
                      v3->fields.mOldV0.fields.z = v28;
                      v3->fields.mOldV1 = v41;
                    }
LABEL_15:
                    if ( !v3->fields.mMoved )
                      return v3->fields.mChanged;
                    goto LABEL_16;
                  }
                }
              }
            }
          }
        }
      }
    }
    sub_21FFECC(this, *(_QWORD *)&frame);
  }
LABEL_16:
  onChange = v3->fields.onChange;
  if ( !onChange )
    return 1;
  ((void (__fastcall *)(intptr_t, intptr_t, const MethodInfo *))onChange->fields.invoke_impl)(
    onChange->fields.method_code,
    onChange->fields.method,
    method);
  if ( v3->fields.mMoved )
    return 1;
  return v3->fields.mChanged;
}


bool UIWidget__UpdateVisibility(UIWidget_o *this, bool visibleByAlpha, bool visibleByPanel, const MethodInfo *method)
{
  _BOOL4 v4; // w10
  bool v5; // w8

  v4 = visibleByPanel;
  if ( this->fields.mIsVisibleByAlpha == visibleByAlpha && this->fields.mIsVisibleByPanel == v4 )
    return 0;
  v5 = 1;
  this->fields.mIsVisibleByAlpha = visibleByAlpha;
  this->fields.mChanged = 1;
  this->fields.mIsVisibleByPanel = v4;
  return v5;
}


void UIWidget__UpgradeFrom265(UIWidget_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *cachedTransform; // x0
  __int64 v4; // x1
  __int64 v5; // x1
  float x; // s9
  float y; // s8
  double v8; // d10
  __int64 v9; // x1
  double v10; // d0
  double v11; // d0
  double v12; // d1
  double v13; // d1
  int v14; // w23
  int v15; // w8
  int32_t v16; // w9
  double v17; // d9
  __int64 v18; // x1
  double v19; // d0
  double v20; // d0
  double v21; // d1
  double v22; // d1
  int v23; // w21
  int32_t v24; // w8
  __int64 v25; // x1
  UnityEngine_GameObject_o *gameObject; // x19
  double iptr; // [xsp+8h] [xbp-48h] BYREF
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_593CEFC & 1) == 0 )
  {
    sub_21FFC50(&NGUITools_TypeInfo);
    byte_593CEFC = 1;
  }
  cachedTransform = UIRect__get_cachedTransform((UIRect_o *)this, method);
  if ( !cachedTransform )
    sub_21FFECC(0, v4);
  localScale = UnityEngine_Transform__get_localScale(cachedTransform, 0);
  x = localScale.fields.x;
  y = localScale.fields.y;
  if ( !byte_593220B )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_593220B = 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v5);
  v8 = x;
  v10 = modf(x, &iptr);
  if ( x >= 0.0 )
  {
    if ( v10 != 0.5 )
    {
      v11 = floor(v8 + 0.5);
      goto LABEL_18;
    }
    v12 = 1.0;
    v11 = iptr;
  }
  else
  {
    if ( v10 != -0.5 )
    {
      v11 = ceil(v8 + -0.5);
      goto LABEL_18;
    }
    v11 = iptr;
    v12 = -1.0;
  }
  v13 = v11 + v12;
  if ( ((__int64)v11 & 1) != 0 )
    v11 = v13;
LABEL_18:
  if ( v11 == INFINITY )
    v14 = 0x80000000;
  else
    v14 = (int)v11;
  if ( !byte_5932DF6 )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_5932DF6 = 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v9);
  v15 = (unsigned __int8)byte_593220B;
  if ( v14 >= 0 )
    v16 = v14;
  else
    v16 = -v14;
  this->fields.mWidth = v16;
  if ( !v15 )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_593220B = 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v9);
  v17 = y;
  v19 = modf(y, &iptr);
  if ( y >= 0.0 )
  {
    if ( v19 != 0.5 )
    {
      v20 = floor(v17 + 0.5);
      goto LABEL_42;
    }
    v21 = 1.0;
    v20 = iptr;
  }
  else
  {
    if ( v19 != -0.5 )
    {
      v20 = ceil(v17 + -0.5);
      goto LABEL_42;
    }
    v20 = iptr;
    v21 = -1.0;
  }
  v22 = v20 + v21;
  if ( ((__int64)v20 & 1) != 0 )
    v20 = v22;
LABEL_42:
  if ( v20 == INFINITY )
    v23 = 0x80000000;
  else
    v23 = (int)v20;
  if ( !byte_5932DF6 )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_5932DF6 = 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v18);
  if ( v23 >= 0 )
    v24 = v23;
  else
    v24 = -v23;
  this->fields.mHeight = v24;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v25);
  NGUITools__UpdateWidgetCollider_56209572(gameObject, 1, 0);
}


void UIWidget__WriteToBuffers(
        UIWidget_o *this,
        BetterList_Vector3__o *v,
        BetterList_Vector2__o *u,
        BetterList_Color32__o *c,
        BetterList_Vector3__o *n,
        BetterList_Vector4__o *t,
        const MethodInfo *method)
{
  UIGeometry_o *geometry; // x0

  geometry = this->fields.geometry;
  if ( !geometry )
    sub_21FFECC(0, v);
  UIGeometry__WriteToBuffers(geometry, v, u, c, n, t, method);
}


float UIWidget__get_alpha(UIWidget_o *this, const MethodInfo *method)
{
  return this->fields.mColor.fields.a;
}


UnityEngine_Vector4_o UIWidget__get_border(UIWidget_o *this, const MethodInfo *method)
{
  struct UnityEngine_Vector4_StaticFields *static_fields; // x8
  float x; // s0
  float y; // s1
  float z; // s2
  float w; // s3
  UnityEngine_Vector4_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( !byte_5931C1E )
  {
    sub_21FFC50(&UnityEngine_Vector4_TypeInfo);
    byte_5931C1E = 1;
  }
  static_fields = UnityEngine_Vector4_TypeInfo->static_fields;
  x = static_fields->zeroVector.fields.x;
  y = static_fields->zeroVector.fields.y;
  z = static_fields->zeroVector.fields.z;
  w = static_fields->zeroVector.fields.w;
  result.fields.w = w;
  result.fields.z = z;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


UnityEngine_Color_o UIWidget__get_color(UIWidget_o *this, const MethodInfo *method)
{
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  r = this->fields.mColor.fields.r;
  g = this->fields.mColor.fields.g;
  b = this->fields.mColor.fields.b;
  a = this->fields.mColor.fields.a;
  result.fields.a = a;
  result.fields.b = b;
  result.fields.g = g;
  result.fields.r = r;
  return result;
}


int32_t UIWidget__get_depth(UIWidget_o *this, const MethodInfo *method)
{
  return this->fields.mDepth;
}


UnityEngine_Vector4_o UIWidget__get_drawRegion(UIWidget_o *this, const MethodInfo *method)
{
  float x; // s0
  float y; // s1
  float z; // s2
  float w; // s3
  UnityEngine_Vector4_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  x = this->fields.mDrawRegion.fields.x;
  y = this->fields.mDrawRegion.fields.y;
  z = this->fields.mDrawRegion.fields.z;
  w = this->fields.mDrawRegion.fields.w;
  result.fields.w = w;
  result.fields.z = z;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


UnityEngine_Vector4_o UIWidget__get_drawingDimensions(UIWidget_o *this, const MethodInfo *method)
{
  UnityEngine_Vector2_o PivotOffset; // kr00_8
  float x; // s6
  float mWidth; // s2
  float mHeight; // s3
  float v7; // s5
  float v8; // s4
  float v9; // s2
  float v10; // s0
  float v11; // s0
  float y; // s6
  float v13; // s3
  float v14; // s1
  float v15; // s1
  float v16; // s6
  float z; // s7
  float v18; // s16
  float v19; // s2
  float v20; // s7
  float w; // s5
  float v22; // s3
  float v23; // s5
  UnityEngine_Vector4_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  PivotOffset = NGUIMath__GetPivotOffset(this->fields.mPivot, 0);
  x = this->fields.mDrawRegion.fields.x;
  mWidth = (float)this->fields.mWidth;
  mHeight = (float)this->fields.mHeight;
  v7 = -(float)(PivotOffset.fields.x * mWidth);
  v8 = -(float)(PivotOffset.fields.y * mHeight);
  v9 = mWidth - (float)(PivotOffset.fields.x * mWidth);
  v10 = v7;
  if ( x != 0.0 )
  {
    v11 = 1.0;
    if ( x <= 1.0 )
      v11 = this->fields.mDrawRegion.fields.x;
    if ( x < 0.0 )
      v11 = 0.0;
    v10 = v7 + (float)((float)(v9 - v7) * v11);
  }
  y = this->fields.mDrawRegion.fields.y;
  v13 = mHeight - (float)(PivotOffset.fields.y * mHeight);
  v14 = v8;
  if ( y != 0.0 )
  {
    v15 = 1.0;
    if ( y <= 1.0 )
      v15 = this->fields.mDrawRegion.fields.y;
    if ( y < 0.0 )
      v15 = 0.0;
    v14 = v8 + (float)((float)(v13 - v8) * v15);
  }
  v16 = 1.0;
  z = this->fields.mDrawRegion.fields.z;
  if ( z != 1.0 )
  {
    if ( z <= 1.0 )
      v18 = this->fields.mDrawRegion.fields.z;
    else
      v18 = 1.0;
    v19 = v9 - v7;
    if ( z >= 0.0 )
      v20 = v18;
    else
      v20 = 0.0;
    v9 = v7 + (float)(v19 * v20);
  }
  w = this->fields.mDrawRegion.fields.w;
  if ( w != 1.0 )
  {
    v22 = v13 - v8;
    if ( w <= 1.0 )
      v16 = this->fields.mDrawRegion.fields.w;
    if ( w >= 0.0 )
      v23 = v16;
    else
      v23 = 0.0;
    v13 = v8 + (float)(v22 * v23);
  }
  result.fields.w = v13;
  result.fields.z = v9;
  result.fields.y = v14;
  result.fields.x = v10;
  return result;
}


bool UIWidget__get_hasBoxCollider(UIWidget_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  __int64 v4; // x1
  Il2CppObject *v5; // x20
  __int64 naturalAligment; // x10
  UnityEngine_Object_o *v7; // x0
  __int64 v9; // x1
  Il2CppObject *v10; // x19

  if ( (byte_593CEEB & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_BoxCollider_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_BoxCollider2D___);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CEEB = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_Collider___);
  v5 = Component_object;
  if ( *(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
  {
    if ( !Component_object )
      goto LABEL_8;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
    if ( !v5 )
    {
LABEL_8:
      v7 = 0;
      goto LABEL_12;
    }
  }
  naturalAligment = UnityEngine_BoxCollider_TypeInfo->_2.naturalAligment;
  if ( v5->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    goto LABEL_8;
  if ( (UnityEngine_BoxCollider_c *)v5->klass->_2.typeHierarchy[naturalAligment - 1] == UnityEngine_BoxCollider_TypeInfo )
    v7 = (UnityEngine_Object_o *)v5;
  else
    v7 = 0;
LABEL_12:
  if ( UnityEngine_Object__op_Inequality(v7, 0, 0) )
    return 1;
  v10 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_BoxCollider2D___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  return UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v10, 0, 0);
}


bool UIWidget__get_hasVertices(UIWidget_o *this, const MethodInfo *method)
{
  struct UIGeometry_o *geometry; // x8
  struct BetterList_Vector3__o *verts; // x8

  geometry = this->fields.geometry;
  if ( !geometry )
    return 0;
  verts = geometry->fields.verts;
  if ( !verts )
    sub_21FFECC(this, method);
  return verts->fields.size > 0;
}


int32_t UIWidget__get_height(UIWidget_o *this, const MethodInfo *method)
{
  return this->fields.mHeight;
}


bool UIWidget__get_isVisible(UIWidget_o *this, const MethodInfo *method)
{
  if ( (byte_593CEE6 & 1) == 0 )
  {
    sub_21FFC50(&NGUITools_TypeInfo);
    byte_593CEE6 = 1;
  }
  if ( !this->fields.mIsVisibleByPanel
    || !this->fields.mIsVisibleByAlpha
    || !this->fields.mIsInFront
    || this->fields.finalAlpha <= 0.001 )
  {
    return 0;
  }
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, method);
  return NGUITools__GetActive((UnityEngine_Behaviour_o *)this, 0);
}


UnityEngine_Vector3_o UIWidget__get_localCenter(UIWidget_o *this, const MethodInfo *method)
{
  float32x2_t *v2; // x0
  __int64 v3; // x1
  unsigned __int64 v4; // d0
  float v5; // s2
  float v6; // s1
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  v2 = (float32x2_t *)((__int64 (__fastcall *)(UIWidget_o *, const MethodInfo *))this->klass->vtable._10_get_localCorners.methodPtr)(
                        this,
                        this->klass->vtable._10_get_localCorners.method);
  if ( !v2 )
    sub_21FFECC(0, v3);
  if ( v2[3].n64_u32[0] <= 2 )
    sub_21FFED4(v2);
  v4 = vadd_f32(v2[4], vmul_f32(vsub_f32(v2[7], v2[4]), (float32x2_t)0x3F0000003F000000LL)).n64_u64[0];
  v5 = v2[5].n64_f32[0] + (float)((float)(v2[8].n64_f32[0] - v2[5].n64_f32[0]) * 0.5);
  v6 = *((float *)&v4 + 1);
  result.fields.x = *(float *)&v4;
  result.fields.z = v5;
  result.fields.y = v6;
  return result;
}


UnityEngine_Vector3_array *UIWidget__get_localCorners(UIWidget_o *this, const MethodInfo *method)
{
  UnityEngine_Vector2_o v3; // x0
  UnityEngine_Vector2_o v4; // x1
  float32x2_t v5; // d0
  UnityEngine_Vector2_o PivotOffset; // kr00_8
  struct UnityEngine_Vector3_array *mCorners; // x8
  int32x2_t v8; // d1
  float32x2_t v9; // d1
  float32x2_t v10; // d0
  struct UnityEngine_Vector3_array *v11; // x8
  unsigned __int64 v12; // d1
  struct UnityEngine_Vector3_array *v13; // x8
  struct UnityEngine_Vector3_array *v14; // x8

  PivotOffset = NGUIMath__GetPivotOffset(this->fields.mPivot, 0);
  v5.n64_u32[0] = LODWORD(PivotOffset.fields.x);
  mCorners = this->fields.mCorners;
  if ( !mCorners )
    goto LABEL_10;
  if ( !LODWORD(mCorners->max_length) )
    goto LABEL_11;
  v5.n64_u32[1] = LODWORD(PivotOffset.fields.y);
  v8.n64_u64[0] = *(unsigned __int64 *)&this->fields.mWidth;
  mCorners->m_Items[0].fields.z = 0.0;
  v9.n64_u64[0] = vcvt_f32_s32(v8).n64_u64[0];
  v10.n64_u64[0] = vmul_f32(vneg_f32(v5), v9).n64_u64[0];
  *(float32x2_t *)&mCorners->m_Items[0].fields.x = v10;
  v11 = this->fields.mCorners;
  if ( !v11 )
    goto LABEL_10;
  if ( (v11->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_11;
  v12 = vadd_f32(v10, v9).n64_u64[0];
  v11->m_Items[1].fields.z = 0.0;
  *(_QWORD *)&v11->m_Items[1].fields.x = __PAIR64__(HIDWORD(v12), v10.n64_u32[0]);
  v13 = this->fields.mCorners;
  if ( !v13 )
    goto LABEL_10;
  if ( LODWORD(v13->max_length) <= 2 )
    goto LABEL_11;
  *(_QWORD *)&v13->m_Items[2].fields.x = v12;
  v13->m_Items[2].fields.z = 0.0;
  v14 = this->fields.mCorners;
  if ( !v14 )
LABEL_10:
    sub_21FFECC(v3, v4);
  if ( (v14->max_length & 0xFFFFFFFC) == 0 )
LABEL_11:
    ((void (__fastcall __noreturn *)(_QWORD))sub_21FFED4)(v3);
  HIDWORD(v12) = v10.n64_u32[1];
  v14->m_Items[3].fields.z = 0.0;
  *(_QWORD *)&v14->m_Items[3].fields.x = v12;
  return this->fields.mCorners;
}


UnityEngine_Vector2_o UIWidget__get_localSize(UIWidget_o *this, const MethodInfo *method)
{
  float32x2_t *v2; // x0
  __int64 v3; // x1
  unsigned __int64 v4; // d0
  float v5; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  v2 = (float32x2_t *)((__int64 (__fastcall *)(UIWidget_o *, const MethodInfo *))this->klass->vtable._10_get_localCorners.methodPtr)(
                        this,
                        this->klass->vtable._10_get_localCorners.method);
  if ( !v2 )
    sub_21FFECC(0, v3);
  if ( v2[3].n64_u32[0] <= 2 )
    sub_21FFED4(v2);
  v4 = vsub_f32(v2[7], v2[4]).n64_u64[0];
  v5 = *((float *)&v4 + 1);
  result.fields.x = *(float *)&v4;
  result.fields.y = v5;
  return result;
}


UnityEngine_Texture_o *UIWidget__get_mainTexture(UIWidget_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *v4; // x19
  _BOOL8 v5; // x0
  __int64 v6; // x1

  if ( (byte_593CEE9 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CEE9 = 1;
  }
  v4 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UIWidget_o *, const MethodInfo *))this->klass->vtable._24_get_material.methodPtr)(
                                 this,
                                 this->klass->vtable._24_get_material.method);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  v5 = UnityEngine_Object__op_Inequality(v4, 0, 0);
  if ( !v5 )
    return 0;
  if ( !v4 )
    sub_21FFECC(v5, v6);
  return UnityEngine_Material__get_mainTexture((UnityEngine_Material_o *)v4, 0);
}


UnityEngine_Material_o *UIWidget__get_material(UIWidget_o *this, const MethodInfo *method)
{
  return 0;
}


int32_t UIWidget__get_minHeight(UIWidget_o *this, const MethodInfo *method)
{
  return 2;
}


int32_t UIWidget__get_minWidth(UIWidget_o *this, const MethodInfo *method)
{
  return 2;
}


UIDrawCall_OnRenderCallback_o *UIWidget__get_onRender(UIWidget_o *this, const MethodInfo *method)
{
  return this->fields.mOnRender;
}


int32_t UIWidget__get_pivot(UIWidget_o *this, const MethodInfo *method)
{
  return this->fields.mPivot;
}


UnityEngine_Vector2_o UIWidget__get_pivotOffset(UIWidget_o *this, const MethodInfo *method)
{
  float x; // s0
  float y; // s1
  UnityEngine_Vector2_o PivotOffset; // kr00_8
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  PivotOffset = NGUIMath__GetPivotOffset(this->fields.mPivot, 0);
  y = PivotOffset.fields.y;
  x = PivotOffset.fields.x;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


int32_t UIWidget__get_rawPivot(UIWidget_o *this, const MethodInfo *method)
{
  return this->fields.mPivot;
}


int32_t UIWidget__get_raycastDepth(UIWidget_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *panel; // x20
  const MethodInfo *v4; // x1
  UnityEngine_Object_o *v5; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  struct UIPanel_o *v8; // x8

  if ( (byte_593CEE8 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CEE8 = 1;
  }
  panel = (UnityEngine_Object_o *)this->fields.panel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(panel, 0, 0) )
    UIWidget__CreatePanel(this, v4);
  v5 = (UnityEngine_Object_o *)this->fields.panel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  v6 = UnityEngine_Object__op_Inequality(v5, 0, 0);
  if ( !v6 )
    return this->fields.mDepth;
  v8 = this->fields.panel;
  if ( !v8 )
    sub_21FFECC(v6, v7);
  return this->fields.mDepth + 1000 * v8->fields.mDepth;
}


UnityEngine_Vector2_o UIWidget__get_relativeSize(UIWidget_o *this, const MethodInfo *method)
{
  struct UnityEngine_Vector2_StaticFields *static_fields; // x8
  float x; // s0
  float y; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( !byte_59373DF )
  {
    sub_21FFC50(&UnityEngine_Vector2_TypeInfo);
    byte_59373DF = 1;
  }
  static_fields = UnityEngine_Vector2_TypeInfo->static_fields;
  x = static_fields->oneVector.fields.x;
  y = static_fields->oneVector.fields.y;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


UnityEngine_Shader_o *UIWidget__get_shader(UIWidget_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *v4; // x19
  _BOOL8 v5; // x0
  __int64 v6; // x1

  if ( (byte_593CEEA & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CEEA = 1;
  }
  v4 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UIWidget_o *, const MethodInfo *))this->klass->vtable._24_get_material.methodPtr)(
                                 this,
                                 this->klass->vtable._24_get_material.method);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  v5 = UnityEngine_Object__op_Inequality(v4, 0, 0);
  if ( !v5 )
    return 0;
  if ( !v4 )
    sub_21FFECC(v5, v6);
  return UnityEngine_Material__get_shader((UnityEngine_Material_o *)v4, 0);
}


int32_t UIWidget__get_width(UIWidget_o *this, const MethodInfo *method)
{
  return this->fields.mWidth;
}


UnityEngine_Vector3_o UIWidget__get_worldCenter(UIWidget_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *cachedTransform; // x19
  const MethodInfo *v4; // x1
  __int64 v5; // x0
  __int64 v6; // x1
  UnityEngine_Vector3_o localCenter; // 0:s0.4,4:s1.4,8:s2.4

  cachedTransform = UIRect__get_cachedTransform((UIRect_o *)this, method);
  localCenter = UIWidget__get_localCenter(this, v4);
  if ( !cachedTransform )
    sub_21FFECC(v5, v6);
  return UnityEngine_Transform__TransformPoint(cachedTransform, localCenter, 0);
}


UnityEngine_Vector3_array *UIWidget__get_worldCorners(UIWidget_o *this, const MethodInfo *method)
{
  UnityEngine_Vector2_o PivotOffset; // kr00_8
  int32_t mHeight; // s9
  int32_t mWidth; // s11
  const MethodInfo *v6; // x1
  UnityEngine_Transform_o *cachedTransform; // x0
  __int64 v8; // x1
  float v9; // s11
  float v10; // s12
  struct UnityEngine_Vector3_array *mCorners; // x21
  UnityEngine_Transform_o *v12; // x20
  float v13; // s9
  struct UnityEngine_Vector3_array *v14; // x21
  float v15; // s9
  struct UnityEngine_Vector3_array *v16; // x21
  struct UnityEngine_Vector3_array *v17; // x21
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4

  PivotOffset = NGUIMath__GetPivotOffset(this->fields.mPivot, 0);
  mWidth = this->fields.mWidth;
  mHeight = this->fields.mHeight;
  cachedTransform = UIRect__get_cachedTransform((UIRect_o *)this, v6);
  if ( !cachedTransform )
    goto LABEL_11;
  v9 = (float)mWidth;
  v10 = (float)mHeight;
  mCorners = this->fields.mCorners;
  v12 = cachedTransform;
  v13 = -(float)(PivotOffset.fields.x * v9);
  v19 = UnityEngine_Transform__TransformPoint_83283144(
          cachedTransform,
          v13,
          -(float)(PivotOffset.fields.y * v10),
          0.0,
          0);
  if ( !mCorners )
    goto LABEL_11;
  if ( !LODWORD(mCorners->max_length) )
    goto LABEL_12;
  mCorners->m_Items[0] = v19;
  v14 = this->fields.mCorners;
  v20 = UnityEngine_Transform__TransformPoint_83283144(v12, v13, v10 - (float)(PivotOffset.fields.y * v10), 0.0, 0);
  if ( !v14 )
    goto LABEL_11;
  if ( (v14->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_12;
  v15 = v9 - (float)(PivotOffset.fields.x * v9);
  v14->m_Items[1] = v20;
  v16 = this->fields.mCorners;
  v21 = UnityEngine_Transform__TransformPoint_83283144(v12, v15, v10 - (float)(PivotOffset.fields.y * v10), 0.0, 0);
  if ( !v16 )
    goto LABEL_11;
  if ( LODWORD(v16->max_length) <= 2 )
    goto LABEL_12;
  v16->m_Items[2] = v21;
  v17 = this->fields.mCorners;
  v22 = UnityEngine_Transform__TransformPoint_83283144(v12, v15, -(float)(PivotOffset.fields.y * v10), 0.0, 0);
  if ( !v17 )
LABEL_11:
    sub_21FFECC(cachedTransform, v8);
  if ( (v17->max_length & 0xFFFFFFFC) == 0 )
LABEL_12:
    sub_21FFED4(cachedTransform);
  v17->m_Items[3] = v22;
  return this->fields.mCorners;
}


void UIWidget__set_alpha(UIWidget_o *this, float value, const MethodInfo *method)
{
  UIWidget_c *klass; // x8

  if ( this->fields.mColor.fields.a != value )
  {
    klass = this->klass;
    this->fields.mColor.fields.a = value;
    ((void (__fastcall *)(UIWidget_o *, __int64, const MethodInfo *))klass->vtable._12_Invalidate.methodPtr)(
      this,
      1,
      klass->vtable._12_Invalidate.method);
  }
}


void UIWidget__set_border(UIWidget_o *this, UnityEngine_Vector4_o value, const MethodInfo *method)
{
  ;
}


void UIWidget__set_color(UIWidget_o *this, UnityEngine_Color_o value, const MethodInfo *method)
{
  float a; // s4
  UIWidget_c *klass; // x8

  a = this->fields.mColor.fields.a;
  if ( (float)((float)((float)(a - value.fields.a) * (float)(a - value.fields.a))
             + (float)((float)((float)(this->fields.mColor.fields.b - value.fields.b)
                             * (float)(this->fields.mColor.fields.b - value.fields.b))
                     + (float)((float)((float)(this->fields.mColor.fields.r - value.fields.r)
                                     * (float)(this->fields.mColor.fields.r - value.fields.r))
                             + (float)((float)(this->fields.mColor.fields.g - value.fields.g)
                                     * (float)(this->fields.mColor.fields.g - value.fields.g))))) >= 1.0e-10 )
  {
    klass = this->klass;
    this->fields.mColor = value;
    ((void (__fastcall *)(UIWidget_o *, bool, const MethodInfo *))klass->vtable._12_Invalidate.methodPtr)(
      this,
      a != value.fields.a,
      klass->vtable._12_Invalidate.method);
  }
}


// local variable allocation has failed, the output may be wrong!
void UIWidget__set_depth(UIWidget_o *this, int32_t value, const MethodInfo *method)
{
  UnityEngine_Object_o *panel; // x21
  __int64 v6; // x1
  UIPanel_o *v7; // x0
  UnityEngine_Object_c *v8; // x0
  UnityEngine_Object_o *v9; // x21
  __int64 v10; // x1

  if ( (byte_593CEE7 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Application_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CEE7 = 1;
  }
  if ( this->fields.mDepth != value )
  {
    panel = (UnityEngine_Object_o *)this->fields.panel;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&value);
    if ( UnityEngine_Object__op_Inequality(panel, 0, 0) )
    {
      v7 = this->fields.panel;
      if ( !v7 )
        goto LABEL_20;
      UIPanel__RemoveWidget(v7, this, 0);
    }
    v8 = UnityEngine_Object_TypeInfo;
    v9 = (UnityEngine_Object_o *)this->fields.panel;
    this->fields.mDepth = value;
    if ( !*(&v8->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v8, v6);
    if ( UnityEngine_Object__op_Inequality(v9, 0, 0) )
    {
      v7 = this->fields.panel;
      if ( v7 )
      {
        UIPanel__AddWidget(v7, this, 0);
        if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, v10);
        if ( UnityEngine_Application__get_isPlaying(0) )
          return;
        v7 = this->fields.panel;
        if ( v7 )
        {
          UIPanel__SortWidgets(v7, 0);
          v7 = this->fields.panel;
          if ( v7 )
          {
            UIPanel__RebuildAllDrawCalls(v7, 0);
            return;
          }
        }
      }
LABEL_20:
      sub_21FFECC(v7, v6);
    }
  }
}


void UIWidget__set_drawRegion(UIWidget_o *this, UnityEngine_Vector4_o value, const MethodInfo *method)
{
  _BOOL4 autoResizeBoxCollider; // w8

  if ( (float)((float)((float)(this->fields.mDrawRegion.fields.w - value.fields.w)
                     * (float)(this->fields.mDrawRegion.fields.w - value.fields.w))
             + (float)((float)((float)(this->fields.mDrawRegion.fields.z - value.fields.z)
                             * (float)(this->fields.mDrawRegion.fields.z - value.fields.z))
                     + (float)((float)((float)(this->fields.mDrawRegion.fields.x - value.fields.x)
                                     * (float)(this->fields.mDrawRegion.fields.x - value.fields.x))
                             + (float)((float)(this->fields.mDrawRegion.fields.y - value.fields.y)
                                     * (float)(this->fields.mDrawRegion.fields.y - value.fields.y))))) >= 1.0e-10 )
  {
    autoResizeBoxCollider = this->fields.autoResizeBoxCollider;
    this->fields.mDrawRegion = value;
    if ( autoResizeBoxCollider )
      UIWidget__ResizeCollider(this, method);
    ((void (__fastcall *)(UIWidget_o *, const MethodInfo *))this->klass->vtable._30_MarkAsChanged.methodPtr)(
      this,
      this->klass->vtable._30_MarkAsChanged.method);
  }
}


void UIWidget__set_height(UIWidget_o *this, int32_t value, const MethodInfo *method)
{
  int32_t v5; // w0
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  struct UIRect_AnchorPoint_o *bottomAnchor; // x8
  UnityEngine_Object_o *target; // x21
  struct UIRect_AnchorPoint_o *topAnchor; // x8
  UnityEngine_Object_o *v12; // x21
  unsigned int mPivot; // w8
  int32_t mHeight; // w8
  struct UIRect_AnchorPoint_o *v15; // x8
  UnityEngine_Object_o *v16; // x21
  bool v17; // w0
  float v18; // s1
  float v19; // s3
  unsigned int v20; // w8

  if ( (byte_593CEE5 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CEE5 = 1;
  }
  v5 = ((__int64 (__fastcall *)(UIWidget_o *, const MethodInfo *, const MethodInfo *))this->klass->vtable._35_get_minHeight.methodPtr)(
         this,
         this->klass->vtable._35_get_minHeight.method,
         method);
  if ( v5 > value )
    value = v5;
  if ( this->fields.mHeight != value && this->fields.keepAspectRatio != 1 )
  {
    v6 = ((__int64 (__fastcall *)(UIWidget_o *, const MethodInfo *))this->klass->vtable._5_get_isAnchoredVertically.methodPtr)(
           this,
           this->klass->vtable._5_get_isAnchoredVertically.method);
    if ( (v6 & 1) == 0 )
    {
      UIWidget__SetDimensions(this, this->fields.mWidth, value, v8);
      return;
    }
    bottomAnchor = this->fields.bottomAnchor;
    if ( bottomAnchor )
    {
      target = (UnityEngine_Object_o *)bottomAnchor->fields.target;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
      v6 = UnityEngine_Object__op_Inequality(target, 0, 0);
      if ( (v6 & 1) != 0 )
      {
        topAnchor = this->fields.topAnchor;
        if ( !topAnchor )
          goto LABEL_31;
        v12 = (UnityEngine_Object_o *)topAnchor->fields.target;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
        v6 = UnityEngine_Object__op_Inequality(v12, 0, 0);
        if ( (v6 & 1) != 0 )
        {
          mPivot = this->fields.mPivot;
          if ( mPivot >= 3 )
          {
            if ( mPivot - 6 > 2 )
            {
              v20 = (value - this->fields.mHeight) & 0xFFFFFFFE;
              if ( !v20 )
                return;
              v19 = vcvts_n_f32_s32(v20, 1u);
              v18 = vcvts_n_f32_s32(-v20, 1u);
LABEL_28:
              NGUIMath__AdjustWidget(this, 0.0, v18, 0.0, v19, 0);
              return;
            }
            mHeight = this->fields.mHeight;
LABEL_25:
            v18 = 0.0;
            v19 = (float)(value - mHeight);
            goto LABEL_28;
          }
          mHeight = this->fields.mHeight;
LABEL_27:
          v18 = (float)(mHeight - value);
          v19 = 0.0;
          goto LABEL_28;
        }
      }
      v15 = this->fields.bottomAnchor;
      if ( v15 )
      {
        v16 = (UnityEngine_Object_o *)v15->fields.target;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
        v17 = UnityEngine_Object__op_Inequality(v16, 0, 0);
        mHeight = this->fields.mHeight;
        if ( v17 )
          goto LABEL_25;
        goto LABEL_27;
      }
    }
LABEL_31:
    sub_21FFECC(v6, v7);
  }
}


void __noreturn UIWidget__set_mainTexture(UIWidget_o *this, UnityEngine_Texture_o *value, const MethodInfo *method)
{
  System_Type_o *Type; // x0
  System_String_o *v4; // x19
  System_String_o *v5; // x0
  System_String_o *v6; // x19
  __int64 v7; // x0
  System_NotImplementedException_o *v8; // x20
  __int64 v9; // x0

  Type = System_Object__GetType((Il2CppObject *)this, 0);
  v4 = 0;
  if ( Type )
    v4 = (System_String_o *)((__int64 (__fastcall *)(System_Type_o *, const MethodInfo *))Type->klass->vtable._3_ToString.methodPtr)(
                              Type,
                              Type->klass->vtable._3_ToString.method);
  v5 = (System_String_o *)sub_21FFC64(&StringLiteral_255/*" has no mainTexture setter"*/);
  v6 = System_String__Concat_75438412(v4, v5, 0);
  v7 = sub_21FFC64(&System_NotImplementedException_TypeInfo);
  v8 = (System_NotImplementedException_o *)sub_21FFEBC(v7);
  System_NotImplementedException___ctor_76945884(v8, v6, 0);
  v9 = sub_21FFC64(&Method_UIWidget_set_mainTexture__);
  sub_21FFD90(v8, v9);
}


void __noreturn UIWidget__set_material(UIWidget_o *this, UnityEngine_Material_o *value, const MethodInfo *method)
{
  System_Type_o *Type; // x0
  System_String_o *v4; // x19
  System_String_o *v5; // x0
  System_String_o *v6; // x19
  __int64 v7; // x0
  System_NotImplementedException_o *v8; // x20
  __int64 v9; // x0

  Type = System_Object__GetType((Il2CppObject *)this, 0);
  v4 = 0;
  if ( Type )
    v4 = (System_String_o *)((__int64 (__fastcall *)(System_Type_o *, const MethodInfo *))Type->klass->vtable._3_ToString.methodPtr)(
                              Type,
                              Type->klass->vtable._3_ToString.method);
  v5 = (System_String_o *)sub_21FFC64(&StringLiteral_256/*" has no material setter"*/);
  v6 = System_String__Concat_75438412(v4, v5, 0);
  v7 = sub_21FFC64(&System_NotImplementedException_TypeInfo);
  v8 = (System_NotImplementedException_o *)sub_21FFEBC(v7);
  System_NotImplementedException___ctor_76945884(v8, v6, 0);
  v9 = sub_21FFC64(&Method_UIWidget_set_material__);
  sub_21FFD90(v8, v9);
}


void UIWidget__set_onRender(UIWidget_o *this, UIDrawCall_OnRenderCallback_o *value, const MethodInfo *method)
{
  System_Delegate_o **p_mOnRender; // x21
  __int64 v6; // x1
  UnityEngine_Object_o *drawCall; // x22
  _BOOL8 v8; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct UIDrawCall_o *v16; // x22
  System_Delegate_o *v17; // x0
  MissionNaviTransitionBoardItem_o *p_onRender; // x22
  System_Delegate_o *onRender; // t1
  System_Delegate_o *v20; // x0
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_Delegate_o *v27; // x8
  UIDrawCall_OnRenderCallback_c *v28; // x1
  __int64 v29; // x1
  UnityEngine_Object_o *v30; // x21
  struct UIDrawCall_o *v31; // x20
  MissionNaviTransitionBoardItem_o *v32; // x20
  System_Delegate_o *v33; // t1
  System_Delegate_o *v34; // x0
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7

  if ( (byte_593CEE3 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&UIDrawCall_OnRenderCallback_TypeInfo);
    byte_593CEE3 = 1;
  }
  p_mOnRender = (System_Delegate_o **)&this->fields.mOnRender;
  if ( System_Delegate__op_Inequality((System_Delegate_o *)this->fields.mOnRender, (System_Delegate_o *)value, 0) )
  {
    drawCall = (UnityEngine_Object_o *)this->fields.drawCall;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    v8 = UnityEngine_Object__op_Inequality(drawCall, 0, 0);
    if ( v8 )
    {
      v16 = this->fields.drawCall;
      if ( !v16 )
        goto LABEL_27;
      onRender = (System_Delegate_o *)v16->fields.onRender;
      p_onRender = (MissionNaviTransitionBoardItem_o *)&v16->fields.onRender;
      v17 = onRender;
      if ( onRender && *p_mOnRender )
      {
        v20 = System_Delegate__Remove(v17, *p_mOnRender, 0);
        v27 = v20;
        if ( v20 )
        {
          v28 = UIDrawCall_OnRenderCallback_TypeInfo;
          if ( (UIDrawCall_OnRenderCallback_c *)v20->klass != UIDrawCall_OnRenderCallback_TypeInfo )
            goto LABEL_23;
          p_onRender->klass = (MissionNaviTransitionBoardItem_c *)v20;
          if ( (UIDrawCall_OnRenderCallback_c *)v20->klass != v28 )
            goto LABEL_23;
        }
        else
        {
          p_onRender->klass = 0;
        }
        sub_21FFBF4(p_onRender, (int32_t)v20, v21, v22, v23, v24, v25, v26);
      }
    }
    this->fields.mOnRender = value;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.mOnRender,
      (int32_t)value,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
    v30 = (UnityEngine_Object_o *)this->fields.drawCall;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v29);
    v8 = UnityEngine_Object__op_Inequality(v30, 0, 0);
    if ( v8 )
    {
      v31 = this->fields.drawCall;
      if ( v31 )
      {
        v33 = (System_Delegate_o *)v31->fields.onRender;
        v32 = (MissionNaviTransitionBoardItem_o *)&v31->fields.onRender;
        v34 = System_Delegate__Combine(v33, (System_Delegate_o *)value, 0);
        v27 = v34;
        if ( v34 )
        {
          v28 = UIDrawCall_OnRenderCallback_TypeInfo;
          if ( (UIDrawCall_OnRenderCallback_c *)v34->klass != UIDrawCall_OnRenderCallback_TypeInfo
            || (v32->klass = (MissionNaviTransitionBoardItem_c *)v34, (UIDrawCall_OnRenderCallback_c *)v34->klass != v28) )
          {
LABEL_23:
            sub_220024C(v27, v28, v21);
            return;
          }
        }
        else
        {
          v32->klass = 0;
        }
        sub_21FFBF4(v32, (int32_t)v34, v21, v35, v36, v37, v38, v39);
        return;
      }
LABEL_27:
      sub_21FFECC(v8, v9);
    }
  }
}


void UIWidget__set_pivot(UIWidget_o *this, int32_t value, const MethodInfo *method)
{
  UnityEngine_Transform_o *cachedTransform; // x0
  const MethodInfo *v6; // x1
  UIWidget_c *klass; // x9
  float v8; // s12
  float v9; // s13
  float v10; // s14
  float v11; // s15
  UnityEngine_Transform_o *v12; // x20
  float x; // s10
  float y; // s11
  float z; // s9
  float v16; // s8
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x1
  float v19; // s10
  float v20; // s9
  double v21; // d0
  double v22; // d0
  float v23; // s2
  float v24; // s1
  float v25; // s10
  const MethodInfo *v26; // x1
  double v27; // d0
  double v28; // d0
  float v29; // s2
  float v30; // s1
  float v31; // s9
  double iptr; // [xsp+48h] [xbp-18h] BYREF
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4

  if ( this->fields.mPivot != value )
  {
    cachedTransform = (UnityEngine_Transform_o *)((__int64 (__fastcall *)(UIWidget_o *, const MethodInfo *, const MethodInfo *))this->klass->vtable._11_get_worldCorners.methodPtr)(
                                                   this,
                                                   this->klass->vtable._11_get_worldCorners.method,
                                                   method);
    if ( !cachedTransform )
      goto LABEL_31;
    if ( !LODWORD(cachedTransform[1].klass) )
      goto LABEL_32;
    klass = this->klass;
    v8 = *(float *)&cachedTransform[1].monitor;
    v9 = *((float *)&cachedTransform[1].monitor + 1);
    this->fields.mPivot = value;
    this->fields.mChanged = 1;
    cachedTransform = (UnityEngine_Transform_o *)((__int64 (__fastcall *)(UIWidget_o *, const MethodInfo *))klass->vtable._11_get_worldCorners.methodPtr)(
                                                   this,
                                                   klass->vtable._11_get_worldCorners.method);
    if ( !cachedTransform )
      goto LABEL_31;
    if ( !LODWORD(cachedTransform[1].klass) )
LABEL_32:
      sub_21FFED4(cachedTransform);
    v10 = *(float *)&cachedTransform[1].monitor;
    v11 = *((float *)&cachedTransform[1].monitor + 1);
    cachedTransform = UIRect__get_cachedTransform((UIRect_o *)this, v6);
    if ( !cachedTransform )
      goto LABEL_31;
    v12 = cachedTransform;
    position = UnityEngine_Transform__get_position(cachedTransform, 0);
    x = position.fields.x;
    y = position.fields.y;
    z = position.fields.z;
    localPosition = UnityEngine_Transform__get_localPosition(v12, 0);
    v16 = localPosition.fields.z;
    cachedTransform = UIRect__get_cachedTransform((UIRect_o *)this, v17);
    if ( !cachedTransform
      || (v35.fields.y = (float)(v9 - v11) + y,
          v35.fields.x = (float)(v8 - v10) + x,
          v35.fields.z = z,
          UnityEngine_Transform__set_position(cachedTransform, v35, 0),
          (cachedTransform = UIRect__get_cachedTransform((UIRect_o *)this, v18)) == 0) )
    {
LABEL_31:
      sub_21FFECC(cachedTransform, v6);
    }
    v36 = UnityEngine_Transform__get_localPosition(cachedTransform, 0);
    v19 = v36.fields.x;
    v20 = v36.fields.y;
    v21 = modf(v36.fields.x, &iptr);
    if ( v19 >= 0.0 )
    {
      if ( v21 != 0.5 )
      {
        v25 = floorf(v19 + 0.5);
        goto LABEL_19;
      }
      v22 = iptr;
      v23 = 1.0;
    }
    else
    {
      if ( v21 != -0.5 )
      {
        v25 = ceilf(v19 + -0.5);
        goto LABEL_19;
      }
      v22 = iptr;
      v23 = -1.0;
    }
    if ( ((__int64)v22 & 1) != 0 )
    {
      v24 = v22;
      v25 = v24 + v23;
    }
    else
    {
      v25 = v22;
    }
LABEL_19:
    v27 = modf(v20, &iptr);
    if ( v20 >= 0.0 )
    {
      if ( v27 != 0.5 )
      {
        v31 = floorf(v20 + 0.5);
        goto LABEL_29;
      }
      v28 = iptr;
      v29 = 1.0;
    }
    else
    {
      if ( v27 != -0.5 )
      {
        v31 = ceilf(v20 + -0.5);
        goto LABEL_29;
      }
      v28 = iptr;
      v29 = -1.0;
    }
    if ( ((__int64)v28 & 1) != 0 )
    {
      v30 = v28;
      v31 = v30 + v29;
    }
    else
    {
      v31 = v28;
    }
LABEL_29:
    cachedTransform = UIRect__get_cachedTransform((UIRect_o *)this, v26);
    if ( cachedTransform )
    {
      v37.fields.x = v25;
      v37.fields.y = v31;
      v37.fields.z = v16;
      UnityEngine_Transform__set_localPosition(cachedTransform, v37, 0);
      return;
    }
    goto LABEL_31;
  }
}


// local variable allocation has failed, the output may be wrong!
void UIWidget__set_rawPivot(UIWidget_o *this, int32_t value, const MethodInfo *method)
{
  _BOOL4 autoResizeBoxCollider; // w8

  if ( this->fields.mPivot != value )
  {
    autoResizeBoxCollider = this->fields.autoResizeBoxCollider;
    this->fields.mPivot = value;
    if ( autoResizeBoxCollider )
      UIWidget__ResizeCollider(this, *(const MethodInfo **)&value);
    ((void (__fastcall *)(UIWidget_o *, const MethodInfo *))this->klass->vtable._30_MarkAsChanged.methodPtr)(
      this,
      this->klass->vtable._30_MarkAsChanged.method);
  }
}


void __noreturn UIWidget__set_shader(UIWidget_o *this, UnityEngine_Shader_o *value, const MethodInfo *method)
{
  System_Type_o *Type; // x0
  System_String_o *v4; // x19
  System_String_o *v5; // x0
  System_String_o *v6; // x19
  __int64 v7; // x0
  System_NotImplementedException_o *v8; // x20
  __int64 v9; // x0

  Type = System_Object__GetType((Il2CppObject *)this, 0);
  v4 = 0;
  if ( Type )
    v4 = (System_String_o *)((__int64 (__fastcall *)(System_Type_o *, const MethodInfo *))Type->klass->vtable._3_ToString.methodPtr)(
                              Type,
                              Type->klass->vtable._3_ToString.method);
  v5 = (System_String_o *)sub_21FFC64(&StringLiteral_257/*" has no shader setter"*/);
  v6 = System_String__Concat_75438412(v4, v5, 0);
  v7 = sub_21FFC64(&System_NotImplementedException_TypeInfo);
  v8 = (System_NotImplementedException_o *)sub_21FFEBC(v7);
  System_NotImplementedException___ctor_76945884(v8, v6, 0);
  v9 = sub_21FFC64(&Method_UIWidget_set_shader__);
  sub_21FFD90(v8, v9);
}


void UIWidget__set_width(UIWidget_o *this, int32_t value, const MethodInfo *method)
{
  int32_t v5; // w0
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  struct UIRect_AnchorPoint_o *leftAnchor; // x8
  UnityEngine_Object_o *target; // x21
  struct UIRect_AnchorPoint_o *rightAnchor; // x8
  UnityEngine_Object_o *v12; // x21
  unsigned int mPivot; // w8
  int v14; // w8
  int32_t mWidth; // w8
  struct UIRect_AnchorPoint_o *v16; // x8
  UnityEngine_Object_o *v17; // x21
  bool v18; // w0
  float v19; // s2
  float v20; // s0
  unsigned int v21; // w8

  if ( (byte_593CEE4 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CEE4 = 1;
  }
  v5 = ((__int64 (__fastcall *)(UIWidget_o *, const MethodInfo *, const MethodInfo *))this->klass->vtable._34_get_minWidth.methodPtr)(
         this,
         this->klass->vtable._34_get_minWidth.method,
         method);
  if ( v5 > value )
    value = v5;
  if ( this->fields.mWidth != value && this->fields.keepAspectRatio != 2 )
  {
    v6 = ((__int64 (__fastcall *)(UIWidget_o *, const MethodInfo *))this->klass->vtable._4_get_isAnchoredHorizontally.methodPtr)(
           this,
           this->klass->vtable._4_get_isAnchoredHorizontally.method);
    if ( (v6 & 1) == 0 )
    {
      UIWidget__SetDimensions(this, value, this->fields.mHeight, v8);
      return;
    }
    leftAnchor = this->fields.leftAnchor;
    if ( leftAnchor )
    {
      target = (UnityEngine_Object_o *)leftAnchor->fields.target;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
      v6 = UnityEngine_Object__op_Inequality(target, 0, 0);
      if ( (v6 & 1) != 0 )
      {
        rightAnchor = this->fields.rightAnchor;
        if ( !rightAnchor )
          goto LABEL_32;
        v12 = (UnityEngine_Object_o *)rightAnchor->fields.target;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
        v6 = UnityEngine_Object__op_Inequality(v12, 0, 0);
        if ( (v6 & 1) != 0 )
        {
          mPivot = this->fields.mPivot;
          if ( mPivot > 8 )
            goto LABEL_30;
          v14 = 1 << mPivot;
          if ( (v14 & 0x49) == 0 )
          {
            if ( (v14 & 0x124) != 0 )
            {
              mWidth = this->fields.mWidth;
LABEL_26:
              v19 = 0.0;
              v20 = (float)(mWidth - value);
              goto LABEL_29;
            }
LABEL_30:
            v21 = (value - this->fields.mWidth) & 0xFFFFFFFE;
            if ( !v21 )
              return;
            v19 = vcvts_n_f32_s32(v21, 1u);
            v20 = vcvts_n_f32_s32(-v21, 1u);
LABEL_29:
            NGUIMath__AdjustWidget(this, v20, 0.0, v19, 0.0, 0);
            return;
          }
          mWidth = this->fields.mWidth;
LABEL_28:
          v20 = 0.0;
          v19 = (float)(value - mWidth);
          goto LABEL_29;
        }
      }
      v16 = this->fields.leftAnchor;
      if ( v16 )
      {
        v17 = (UnityEngine_Object_o *)v16->fields.target;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
        v18 = UnityEngine_Object__op_Inequality(v17, 0, 0);
        mWidth = this->fields.mWidth;
        if ( !v18 )
          goto LABEL_26;
        goto LABEL_28;
      }
    }
LABEL_32:
    sub_21FFECC(v6, v7);
  }
}


void UIWidget_HitCheck___ctor(UIWidget_HitCheck_o *this, Il2CppObject *object, intptr_t method, const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_21FFD28(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_21FFEE8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_21FFD90(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_20049A4;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_2004930;
}


System_IAsyncResult_o *UIWidget_HitCheck__BeginInvoke(
        UIWidget_HitCheck_o *this,
        UnityEngine_Vector3_o worldPos,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+0h] [xbp-50h] BYREF
  UnityEngine_Vector3_o v10; // [xsp+14h] [xbp-3Ch] BYREF

  v10 = worldPos;
  if ( (byte_593CF01 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_593CF01 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_21FFC04(this, v9, callback, object);
}


bool UIWidget_HitCheck__EndInvoke(UIWidget_HitCheck_o *this, System_IAsyncResult_o *result, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2

  v3 = sub_21FFC08(result, 0, method);
  if ( !v3 )
    sub_21FFECC(0, v4);
  return *(_BYTE *)j_il2cpp_object_unbox_0(v3, v4, v5);
}


// local variable allocation has failed, the output may be wrong!
bool UIWidget_HitCheck__Invoke(UIWidget_HitCheck_o *this, UnityEngine_Vector3_o worldPos, const MethodInfo *method)
{
  return ((__int64 (__fastcall *)(intptr_t, intptr_t, long double, long double, long double))this->fields.invoke_impl)(
           this->fields.method_code,
           this->fields.method,
           *(long double *)&worldPos.fields.x,
           *(long double *)&worldPos.fields.y,
           *(long double *)&worldPos.fields.z);
}


void UIWidget_OnDimensionsChanged___ctor(
        UIWidget_OnDimensionsChanged_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_21FFD28(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_21FFEE8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_21FFD90(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_2004644;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_2004604;
}


System_IAsyncResult_o *UIWidget_OnDimensionsChanged__BeginInvoke(
        UIWidget_OnDimensionsChanged_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  return (System_IAsyncResult_o *)sub_21FFC04(this, &v5, callback, object);
}


void UIWidget_OnDimensionsChanged__EndInvoke(
        UIWidget_OnDimensionsChanged_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
}


void UIWidget_OnDimensionsChanged__Invoke(UIWidget_OnDimensionsChanged_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}


void UIWidget_OnPostFillCallback___ctor(
        UIWidget_OnPostFillCallback_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  __int64 (__fastcall *v13)(); // x8
  char v14; // w21
  char v15; // w0
  Il2CppObject *m_target; // x9
  __int64 v17; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_21FFD28(method) & 1) != 0 )
  {
    if ( v12 == 5 )
    {
      v13 = sub_20046FC;
LABEL_16:
      this->fields.invoke_impl = (intptr_t)v13;
      goto LABEL_17;
    }
  }
  else
  {
    if ( v12 == 4 )
    {
      if ( this->fields.method_is_virtual )
      {
        v14 = sub_21FFD20(method);
        v15 = sub_22002A4(method);
        if ( (v14 & 1) != 0 )
        {
          if ( (v15 & 1) != 0 )
            v13 = sub_2004874;
          else
            v13 = sub_2004808;
        }
        else if ( (v15 & 1) != 0 )
        {
          v13 = sub_2004754;
        }
        else
        {
          v13 = sub_200471C;
        }
      }
      else
      {
        v13 = sub_20046D0;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v17 = sub_21FFEE8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_21FFD90(v17, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_17:
  this->fields.extra_arg = (intptr_t)sub_2004658;
}


System_IAsyncResult_o *UIWidget_OnPostFillCallback__BeginInvoke(
        UIWidget_OnPostFillCallback_o *this,
        UIWidget_o *widget,
        int32_t bufferOffset,
        BetterList_Vector3__o *verts,
        BetterList_Vector2__o *uvs,
        BetterList_Color32__o *cols,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int128 v16; // [xsp+0h] [xbp-70h] BYREF
  BetterList_Vector3__o *v17; // [xsp+10h] [xbp-60h]
  BetterList_Vector2__o *v18; // [xsp+18h] [xbp-58h]
  __int128 v19; // [xsp+20h] [xbp-50h]
  int32_t v20; // [xsp+3Ch] [xbp-34h] BYREF

  v20 = bufferOffset;
  v16 = (unsigned __int64)widget;
  v19 = 0u;
  *((_QWORD *)&v16 + 1) = j_il2cpp_value_box_0(qword_594C070, &v20);
  v17 = verts;
  v18 = uvs;
  *(_QWORD *)&v19 = cols;
  return (System_IAsyncResult_o *)sub_21FFC04(this, &v16, callback, object);
}


void UIWidget_OnPostFillCallback__EndInvoke(
        UIWidget_OnPostFillCallback_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
}


void UIWidget_OnPostFillCallback__Invoke(
        UIWidget_OnPostFillCallback_o *this,
        UIWidget_o *widget,
        int32_t bufferOffset,
        BetterList_Vector3__o *verts,
        BetterList_Vector2__o *uvs,
        BetterList_Color32__o *cols,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, UIWidget_o *, int32_t, BetterList_Vector3__o *, BetterList_Vector2__o *, BetterList_Color32__o *, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    widget,
    bufferOffset,
    verts,
    uvs,
    cols,
    this->fields.method);
}