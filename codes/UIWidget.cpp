void UIWidget___ctor(UIWidget_o *this, const MethodInfo *method)
{
  UIGeometry_o *v8; // x20
  const MethodInfo *v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct UnityEngine_Vector3_array *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x1

  if ( (byte_4C3C228 & 1) == 0 )
  {
    sub_1C32C20(&UIGeometry_TypeInfo);
    sub_1C32C20(&UIRect_TypeInfo);
    sub_1C32C20(&UnityEngine_Vector3___TypeInfo);
    byte_4C3C228 = 1;
  }
  __asm { FMOV            V0.4S, #1.0 }
  this->fields.mColor = _Q0;
  this->fields.mHeight = 100;
  *(_QWORD *)&this->fields.mPivot = 0x6400000004LL;
  this->fields.aspectRatio = 1.0;
  v8 = (UIGeometry_o *)sub_1C32E6C(UIGeometry_TypeInfo);
  UIGeometry___ctor(v8, v9);
  this->fields.geometry = v8;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.geometry, (int32_t)v8, v10, v11);
  *(_WORD *)&this->fields.fillGeometry = 257;
  *(_WORD *)&this->fields.mIsVisibleByAlpha = 257;
  this->fields.mDrawRegion = (struct UnityEngine_Vector4_o)xmmword_C0C610;
  this->fields.mIsInFront = 1;
  v12 = (struct UnityEngine_Vector3_array *)sub_1C32CC8(UnityEngine_Vector3___TypeInfo, 4);
  this->fields.mCorners = v12;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mCorners, (int32_t)v12, v13, v14);
  *(_QWORD *)&this->fields.mAlphaFrameID = -1;
  if ( !UIRect_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIRect_TypeInfo);
  UIRect___ctor((UIRect_o *)this, v15);
}


void UIWidget__Awake(UIWidget_o *this, const MethodInfo *method)
{
  struct UnityEngine_GameObject_o *gameObject; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C3C223 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Application_TypeInfo);
    byte_4C3C223 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  this->fields.mGo = gameObject;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mGo, (int32_t)gameObject, v4, v5);
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  this->fields.mPlayMode = UnityEngine_Application__get_isPlaying(0);
}


UnityEngine_Bounds_o *UIWidget__CalculateBounds(
        UnityEngine_Bounds_o *__return_ptr retstr,
        UIWidget_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  UnityEngine_Bounds_o *result; // x0
  __int128 v6; // q0
  UnityEngine_Bounds_o v7; // [xsp+8h] [xbp-28h] BYREF

  result = UIWidget__CalculateBounds_49382128(&v7, this, 0, v3);
  v6 = *(_OWORD *)&v7.fields.m_Center.fields.x;
  *(_QWORD *)&retstr->fields.m_Extents.fields.y = *(_QWORD *)&v7.fields.m_Extents.fields.y;
  *(_OWORD *)&retstr->fields.m_Center.fields.x = v6;
  return result;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Bounds_o *UIWidget__CalculateBounds_49382128(
        UnityEngine_Bounds_o *__return_ptr retstr,
        UIWidget_o *this,
        UnityEngine_Transform_o *relativeParent,
        const MethodInfo *method)
{
  UnityEngine_Bounds_o *result; // x0
  unsigned int x_low; // w9
  UnityEngine_Bounds_o *v9; // x20
  float32x2_t v10; // d0 OVERLAPPED
  float y; // s8
  __int64 v12; // x8
  unsigned int v13; // w9
  float32x2_t *static_fields; // x10
  float32x2_t v15; // d10
  float v16; // s9
  float v17; // s6
  int8x8_t v18; // d5
  float v19; // s3
  int8x8_t v20; // d2
  int8x8_t v21; // d4
  int8x8_t v22; // d16
  int8x8_t v23; // d17
  float32x2_t v24; // d2
  float32x2_t v25; // d4
  float v26; // s5
  UnityEngine_Bounds_o *v27; // x20
  float *p_y; // x21
  unsigned __int64 v29; // x22
  float32x2_t *v30; // x8
  float v31; // t1
  float z; // s4
  int8x8_t v33; // d0 OVERLAPPED
  int8x8_t v34; // d3
  int8x8_t v35; // d5
  int8x8_t v36; // d1
  float32x2_t v37; // d1
  float32x2_t v38; // d0
  float v39; // [xsp+0h] [xbp-100h]
  unsigned __int64 v40; // [xsp+10h] [xbp-F0h]
  unsigned __int32 v41; // [xsp+10h] [xbp-F0h]
  float32x2_t v42; // [xsp+10h] [xbp-F0h]
  UnityEngine_Matrix4x4_o v43; // [xsp+20h] [xbp-E0h] BYREF
  UnityEngine_Matrix4x4_o v44; // [xsp+60h] [xbp-A0h] BYREF
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v46; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v47; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3C21C & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3C21C = 1;
  }
  memset(&v44, 0, sizeof(v44));
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  result = (UnityEngine_Bounds_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)relativeParent, 0, 0);
  if ( ((unsigned __int8)result & 1) != 0 )
  {
    result = (UnityEngine_Bounds_o *)((__int64 (__fastcall *)(UIWidget_o *, const MethodInfo *))this->klass->vtable._10_get_localCorners.methodPtr)(
                                       this,
                                       this->klass->vtable._10_get_localCorners.method);
    if ( result )
    {
      x_low = LODWORD(result[1].fields.m_Center.fields.x);
      v9 = result;
      if ( x_low )
      {
        v10.n64_u64[0] = *(unsigned __int64 *)&result[1].fields.m_Center.fields.z;
        y = result[1].fields.m_Extents.fields.y;
        if ( !byte_4C313D1 )
        {
          v40 = *(_QWORD *)&result[1].fields.m_Center.fields.z;
          result = (UnityEngine_Bounds_o *)sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
          byte_4C313D1 = 1;
          v10.n64_u64[0] = v40;
          x_low = LODWORD(v9[1].fields.m_Center.fields.x);
        }
        if ( x_low <= 1 )
          x_low = 1;
        v12 = 0;
        v13 = x_low - 1;
        static_fields = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
        v15.n64_u64[0] = vmul_f32((float32x2_t)static_fields->n64_u64[0], (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
        v16 = static_fields[1].n64_f32[0] * 0.5;
        while ( v13 > 2 )
        {
          v17 = *(float *)((char *)&v9[2].fields.m_Center.fields.y + v12);
          v18.n64_u64[0] = *(unsigned __int64 *)((char *)&v9[1].fields.m_Extents.fields.z + v12);
          v19 = y - v16;
          v20.n64_u64[0] = vsub_f32(v10, v15).n64_u64[0];
          v21.n64_u64[0] = vadd_f32(v10, v15).n64_u64[0];
          v22.n64_u64[0] = vcgt_f32(v18, v20).n64_u64[0];
          v23.n64_u64[0] = vcgt_f32(v21, v18).n64_u64[0];
          if ( (float)(y - v16) >= v17 )
            v19 = *(float *)((char *)&v9[2].fields.m_Center.fields.y + v12);
          v24.n64_u64[0] = vbsl_s8(v22, v20, v18).n64_u64[0];
          v25.n64_u64[0] = vbsl_s8(v23, v21, v18).n64_u64[0];
          if ( (float)(y + v16) <= v17 )
            v26 = *(float *)((char *)&v9[2].fields.m_Center.fields.y + v12);
          else
            v26 = y + v16;
          v12 += 12;
          v15.n64_u64[0] = vmul_f32(vsub_f32(v25, v24), (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
          v16 = (float)(v26 - v19) * 0.5;
          v10.n64_u64[0] = vadd_f32(v24, v15).n64_u64[0];
          y = v19 + v16;
          if ( v12 == 36 )
            goto LABEL_33;
        }
      }
LABEL_34:
      sub_1C32E84(result);
    }
LABEL_35:
    sub_1C32E7C(result);
  }
  if ( !relativeParent )
    goto LABEL_35;
  UnityEngine_Transform__get_worldToLocalMatrix(&v43, relativeParent, 0);
  v44 = v43;
  result = (UnityEngine_Bounds_o *)((__int64 (__fastcall *)(UIWidget_o *, const MethodInfo *))this->klass->vtable._11_get_worldCorners.methodPtr)(
                                     this,
                                     this->klass->vtable._11_get_worldCorners.method);
  if ( !result )
    goto LABEL_35;
  v27 = result;
  if ( !LODWORD(result[1].fields.m_Center.fields.x) )
    goto LABEL_34;
  *(UnityEngine_Vector3_o *)v10.n64_u64 = UnityEngine_Matrix4x4__MultiplyPoint3x4(
                                            &v44,
                                            *(UnityEngine_Vector3_o *)&result[1].fields.m_Center.fields.z,
                                            0);
  y = v45.fields.z;
  if ( !byte_4C313D1 )
  {
    v39 = v45.fields.y;
    v41 = v10.n64_u32[0];
    result = (UnityEngine_Bounds_o *)sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
    v45.fields.y = v39;
    v10.n64_u32[0] = v41;
    byte_4C313D1 = 1;
  }
  v10.n64_u32[1] = LODWORD(v45.fields.y);
  p_y = &v27[2].fields.m_Center.fields.y;
  v29 = 1;
  v30 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v15.n64_u64[0] = vmul_f32((float32x2_t)v30->n64_u64[0], (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
  v16 = v30[1].n64_f32[0] * 0.5;
  do
  {
    v42.n64_u64[0] = v10.n64_u64[0];
    if ( v29 >= LODWORD(v27[1].fields.m_Center.fields.x) )
      goto LABEL_34;
    v46.fields.x = *(p_y - 2);
    v46.fields.y = *(p_y - 1);
    v31 = *p_y;
    p_y += 3;
    v46.fields.z = v31;
    *(UnityEngine_Vector3_o *)v33.n64_u64 = UnityEngine_Matrix4x4__MultiplyPoint3x4(&v44, v46, 0);
    z = y - v16;
    v33.n64_u32[1] = LODWORD(v47.fields.y);
    v34.n64_u64[0] = vsub_f32(v42, v15).n64_u64[0];
    v35.n64_u64[0] = vadd_f32(v42, v15).n64_u64[0];
    v36.n64_u64[0] = vcgt_f32(v33, v34).n64_u64[0];
    if ( (float)(y - v16) >= v47.fields.z )
      z = v47.fields.z;
    v37.n64_u64[0] = vbsl_s8(v36, v34, v33).n64_u64[0];
    v38.n64_u64[0] = vbsl_s8(vcgt_f32(v35, v33), v35, v33).n64_u64[0];
    if ( (float)(y + v16) > v47.fields.z )
      v47.fields.z = y + v16;
    ++v29;
    v15.n64_u64[0] = vmul_f32(vsub_f32(v38, v37), (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
    v16 = (float)(v47.fields.z - z) * 0.5;
    v10.n64_u64[0] = vadd_f32(v37, v15).n64_u64[0];
    y = z + v16;
  }
  while ( v29 != 4 );
LABEL_33:
  *(float32x2_t *)&retstr->fields.m_Center.fields.x = v10;
  retstr->fields.m_Center.fields.z = y;
  *(float32x2_t *)&retstr->fields.m_Extents.fields.x = v15;
  retstr->fields.m_Extents.fields.z = v16;
  return result;
}


// local variable allocation has failed, the output may be wrong!
float UIWidget__CalculateCumulativeAlpha(UIWidget_o *this, int32_t frameID, const MethodInfo *method)
{
  UnityEngine_Object_o *parent; // x21
  _BOOL8 v6; // x0

  if ( (byte_4C3C217 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3C217 = 1;
  }
  parent = (UnityEngine_Object_o *)UIRect__get_parent((UIRect_o *)this, *(const MethodInfo **)&frameID);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality(parent, 0, 0);
  if ( !v6 )
    return this->fields.mColor.fields.a;
  if ( !parent )
    sub_1C32E7C(v6);
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
  UnityEngine_Component_o *gameObject; // x0
  int32_t layer; // w20
  UnityEngine_Component_o *v6; // x8
  UnityEngine_GameObject_o *v7; // x19

  if ( (byte_4C3C221 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3C221 = 1;
  }
  panel = (UnityEngine_Object_o *)this->fields.panel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
          v6 = (UnityEngine_Component_o *)this->fields.panel;
          if ( v6 )
          {
            v7 = (UnityEngine_GameObject_o *)gameObject;
            gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(v6, 0);
            if ( gameObject )
            {
              gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_layer(
                                                        (UnityEngine_GameObject_o *)gameObject,
                                                        0);
              if ( v7 )
              {
                UnityEngine_GameObject__set_layer(v7, (int32_t)gameObject, 0);
                return;
              }
            }
          }
        }
      }
    }
    sub_1C32E7C(gameObject);
  }
}


UIPanel_o *UIWidget__CreatePanel(UIWidget_o *this, const MethodInfo *method)
{
  struct UIPanel_o **p_panel; // x20
  UnityEngine_Object_o *panel; // x21
  UnityEngine_GameObject_o *gameObject; // x21
  const MethodInfo *v6; // x1
  UnityEngine_Transform_o *cachedTransform; // x21
  const MethodInfo *v8; // x1
  UnityEngine_GameObject_o *cachedGameObject; // x0
  int32_t layer; // w22
  UIPanel_o *_49077024; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  UnityEngine_Object_o *v14; // x20
  const MethodInfo *v15; // x1

  if ( (byte_4C3C220 & 1) == 0 )
  {
    sub_1C32C20(&NGUITools_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&UIPanel_TypeInfo);
    byte_4C3C220 = 1;
  }
  if ( this->fields.mStarted )
  {
    p_panel = &this->fields.panel;
    panel = (UnityEngine_Object_o *)this->fields.panel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(panel, 0, 0)
      && UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !NGUITools_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
      if ( NGUITools__GetActive_49301984(gameObject, 0) )
      {
        cachedTransform = UIRect__get_cachedTransform((UIRect_o *)this, v6);
        cachedGameObject = UIRect__get_cachedGameObject((UIRect_o *)this, v8);
        if ( !cachedGameObject )
          goto LABEL_20;
        layer = UnityEngine_GameObject__get_layer(cachedGameObject, 0);
        if ( !UIPanel_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UIPanel_TypeInfo);
        _49077024 = UIPanel__Find_49077024(cachedTransform, 1, layer, 0);
        *p_panel = _49077024;
        sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.panel, (int32_t)_49077024, v12, v13);
        v14 = (UnityEngine_Object_o *)*p_panel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v14, 0, 0) )
        {
          cachedGameObject = (UnityEngine_GameObject_o *)this->fields.panel;
          this->fields.mParentFound = 0;
          if ( cachedGameObject )
          {
            UIPanel__AddWidget((UIPanel_o *)cachedGameObject, this, 0);
            UIWidget__CheckLayer(this, v15);
            ((void (__fastcall *)(UIWidget_o *, __int64, const MethodInfo *))this->klass->vtable._12_Invalidate.methodPtr)(
              this,
              1,
              this->klass->vtable._12_Invalidate.method);
            return this->fields.panel;
          }
LABEL_20:
          sub_1C32E7C(cachedGameObject);
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
  if ( (byte_4C3C21A & 1) == 0 )
  {
    left = (UIWidget_o *)sub_1C32C20(&UIPanel_TypeInfo);
    byte_4C3C21A = 1;
  }
  if ( !v4 || !right )
    sub_1C32E7C(left);
  panel = v4->fields.panel;
  v6 = right->fields.panel;
  if ( !UIPanel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIPanel_TypeInfo);
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
  int32_t mHeight; // s10
  int32_t mWidth; // s11
  const MethodInfo *v8; // x1
  UnityEngine_Transform_o *cachedTransform; // x0
  float v10; // s8
  float v11; // s12
  float v12; // s11
  struct UnityEngine_Vector3_array *mCorners; // x22
  float v14; // s10
  UnityEngine_Transform_o *v15; // x21
  float v16; // s12
  struct UnityEngine_Vector3_array *v17; // x22
  float v18; // s10
  struct UnityEngine_Vector3_array *v19; // x22
  struct UnityEngine_Vector3_array *v20; // x22
  __int64 v21; // x21
  unsigned __int64 v22; // x22
  struct UnityEngine_Vector3_array *v23; // x23
  char *v24; // x24
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3C214 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3C214 = 1;
  }
  PivotOffset = NGUIMath__GetPivotOffset(this->fields.mPivot, 0);
  mWidth = this->fields.mWidth;
  mHeight = this->fields.mHeight;
  cachedTransform = UIRect__get_cachedTransform((UIRect_o *)this, v8);
  if ( !cachedTransform )
    goto LABEL_22;
  v10 = (float)-PivotOffset.fields.y * (float)mHeight;
  v11 = (float)mWidth;
  v12 = v10 + (float)mHeight;
  mCorners = this->fields.mCorners;
  v14 = (float)-PivotOffset.fields.x * v11;
  v15 = cachedTransform;
  v26 = UnityEngine_Transform__TransformPoint_71250240(cachedTransform, v14, (float)(v10 + v12) * 0.5, 0.0, 0);
  if ( !mCorners )
    goto LABEL_22;
  if ( !LODWORD(mCorners->max_length) )
    goto LABEL_23;
  mCorners->m_Items[0] = v26;
  v16 = v14 + v11;
  v17 = this->fields.mCorners;
  v18 = (float)(v14 + v16) * 0.5;
  v27 = UnityEngine_Transform__TransformPoint_71250240(v15, v18, v12, 0.0, 0);
  if ( !v17 )
    goto LABEL_22;
  if ( LODWORD(v17->max_length) <= 1 )
    goto LABEL_23;
  v17->m_Items[1] = v27;
  v19 = this->fields.mCorners;
  v28 = UnityEngine_Transform__TransformPoint_71250240(v15, v16, (float)(v10 + v12) * 0.5, 0.0, 0);
  if ( !v19 )
    goto LABEL_22;
  if ( LODWORD(v19->max_length) <= 2 )
    goto LABEL_23;
  v19->m_Items[2] = v28;
  v20 = this->fields.mCorners;
  v29 = UnityEngine_Transform__TransformPoint_71250240(v15, v18, v10, 0.0, 0);
  if ( !v20 )
    goto LABEL_22;
  if ( LODWORD(v20->max_length) <= 3 )
LABEL_23:
    sub_1C32E84(cachedTransform);
  v20->m_Items[3] = v29;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  cachedTransform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(
                                                 (UnityEngine_Object_o *)relativeTo,
                                                 0,
                                                 0);
  if ( ((unsigned __int8)cachedTransform & 1) != 0 )
  {
    v21 = 0;
    v22 = 0;
    while ( 1 )
    {
      v23 = this->fields.mCorners;
      if ( !v23 )
        break;
      if ( v22 >= LODWORD(v23->max_length) )
        goto LABEL_23;
      if ( !relativeTo )
        break;
      v24 = (char *)v23 + v21 * 12;
      v30 = UnityEngine_Transform__InverseTransformPoint(relativeTo, v23->m_Items[v21], 0);
      if ( v22 >= LODWORD(v23->max_length) )
        goto LABEL_23;
      ++v22;
      ++v21;
      *(UnityEngine_Vector3_o *)(v24 + 32) = v30;
      if ( v22 == 4 )
        return this->fields.mCorners;
    }
LABEL_22:
    sub_1C32E7C(cachedTransform);
  }
  return this->fields.mCorners;
}


void UIWidget__Invalidate(UIWidget_o *this, bool includeChildren, const MethodInfo *method)
{
  UnityEngine_Object_o *panel; // x21
  UIPanel_o *v6; // x0
  bool IsVisible_49065356; // w21
  int32_t frameCount; // w0
  const MethodInfo *v9; // x2
  _BOOL4 v10; // w8
  _BOOL4 v11; // w9
  int32_t v12; // w0
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x2

  if ( (byte_4C3C216 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3C216 = 1;
  }
  this->fields.mChanged = 1;
  this->fields.mAlphaFrameID = -1;
  panel = (UnityEngine_Object_o *)this->fields.panel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(panel, 0, 0) )
  {
    if ( !this->fields.hideIfOffScreen )
    {
      v6 = this->fields.panel;
      if ( !v6 )
        goto LABEL_18;
      if ( !UIPanel__get_hasCumulativeClipping(v6, 0) )
      {
        IsVisible_49065356 = 1;
LABEL_11:
        frameCount = UnityEngine_Time__get_frameCount(0);
        v10 = UIWidget__CalculateCumulativeAlpha(this, frameCount, v9) > 0.001;
        v11 = IsVisible_49065356;
        if ( this->fields.mIsVisibleByAlpha != v10 || this->fields.mIsVisibleByPanel != v11 )
        {
          this->fields.mIsVisibleByAlpha = v10;
          this->fields.mChanged = 1;
          this->fields.mIsVisibleByPanel = v11;
        }
        v12 = UnityEngine_Time__get_frameCount(0);
        UIWidget__UpdateFinalAlpha(this, v12, v13);
        if ( includeChildren )
          UIRect__Invalidate((UIRect_o *)this, 1, v14);
        return;
      }
    }
    v6 = this->fields.panel;
    if ( v6 )
    {
      IsVisible_49065356 = UIPanel__IsVisible_49065356(v6, this, 0);
      goto LABEL_11;
    }
LABEL_18:
    sub_1C32E7C(v6);
  }
}


// local variable allocation has failed, the output may be wrong!
void UIWidget__MakePixelPerfect(UIWidget_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *cachedTransform; // x0
  float x; // s10
  float y; // s8
  float z; // s9
  double v7; // d0
  double v8; // d0
  float v9; // s1
  __int64 v10; // x8
  float v11; // s0
  float v12; // s1
  float v13; // s9
  double v14; // d0
  double v15; // d0
  float v16; // s1
  __int64 v17; // x8
  float v18; // s0
  float v19; // s1
  float v20; // s10
  const MethodInfo *v21; // x1
  double v22; // d0
  double v23; // d0
  float v24; // s1
  __int64 v25; // x8
  float v26; // s0
  float v27; // s1
  float v28; // s8
  const MethodInfo *v29; // x1
  float v30; // s8
  float v31; // s9
  const MethodInfo *v32; // x1
  float v33; // s0 OVERLAPPED
  float v34; // s1
  float v35; // s2
  double iptr; // [xsp+8h] [xbp-28h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4

  cachedTransform = UIRect__get_cachedTransform((UIRect_o *)this, method);
  if ( !cachedTransform )
LABEL_41:
    sub_1C32E7C(cachedTransform);
  localPosition = UnityEngine_Transform__get_localPosition(cachedTransform, 0);
  x = localPosition.fields.x;
  y = localPosition.fields.y;
  z = localPosition.fields.z;
  v7 = modf(localPosition.fields.z, &iptr);
  if ( z >= 0.0 )
  {
    if ( v7 != 0.5 )
    {
      v13 = floorf(z + 0.5);
      goto LABEL_12;
    }
    v8 = iptr;
    v9 = 1.0;
  }
  else
  {
    if ( v7 != -0.5 )
    {
      v13 = ceilf(z + -0.5);
      goto LABEL_12;
    }
    v8 = iptr;
    v9 = -1.0;
  }
  v10 = (__int64)v8;
  v11 = v8;
  v12 = v11 + v9;
  if ( (v10 & 1) != 0 )
    v13 = v12;
  else
    v13 = v11;
LABEL_12:
  v14 = modf(x, &iptr);
  if ( x >= 0.0 )
  {
    if ( v14 != 0.5 )
    {
      v20 = floorf(x + 0.5);
      goto LABEL_22;
    }
    v15 = iptr;
    v16 = 1.0;
  }
  else
  {
    if ( v14 != -0.5 )
    {
      v20 = ceilf(x + -0.5);
      goto LABEL_22;
    }
    v15 = iptr;
    v16 = -1.0;
  }
  v17 = (__int64)v15;
  v18 = v15;
  v19 = v18 + v16;
  if ( (v17 & 1) != 0 )
    v20 = v19;
  else
    v20 = v18;
LABEL_22:
  v22 = modf(y, &iptr);
  if ( y >= 0.0 )
  {
    if ( v22 != 0.5 )
    {
      v28 = floorf(y + 0.5);
      goto LABEL_32;
    }
    v23 = iptr;
    v24 = 1.0;
  }
  else
  {
    if ( v22 != -0.5 )
    {
      v28 = ceilf(y + -0.5);
      goto LABEL_32;
    }
    v23 = iptr;
    v24 = -1.0;
  }
  v25 = (__int64)v23;
  v26 = v23;
  v27 = v26 + v24;
  if ( (v25 & 1) != 0 )
    v28 = v27;
  else
    v28 = v26;
LABEL_32:
  cachedTransform = UIRect__get_cachedTransform((UIRect_o *)this, v21);
  if ( !cachedTransform )
    goto LABEL_41;
  v38.fields.x = v20;
  v38.fields.y = v28;
  v38.fields.z = v13;
  UnityEngine_Transform__set_localPosition(cachedTransform, v38, 0);
  cachedTransform = UIRect__get_cachedTransform((UIRect_o *)this, v29);
  if ( !cachedTransform )
    goto LABEL_41;
  localScale = UnityEngine_Transform__get_localScale(cachedTransform, 0);
  v30 = localScale.fields.x;
  v31 = localScale.fields.y;
  cachedTransform = UIRect__get_cachedTransform((UIRect_o *)this, v32);
  if ( !cachedTransform )
    goto LABEL_41;
  v33 = -1.0;
  if ( v31 < 0.0 )
    v34 = -1.0;
  else
    v34 = 1.0;
  if ( v30 >= 0.0 )
    v33 = 1.0;
  v35 = 1.0;
  UnityEngine_Transform__set_localScale(cachedTransform, *(UnityEngine_Vector3_o *)&v33, 0);
}


void UIWidget__MarkAsChanged(UIWidget_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *panel; // x20
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1

  if ( (byte_4C3C21F & 1) == 0 )
  {
    sub_1C32C20(&NGUITools_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3C21F = 1;
  }
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  if ( NGUITools__GetActive((UnityEngine_Behaviour_o *)this, 0) )
  {
    this->fields.mChanged = 1;
    panel = (UnityEngine_Object_o *)this->fields.panel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(panel, 0, 0)
      && UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !NGUITools_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
      if ( NGUITools__GetActive_49301984(gameObject, 0) && !this->fields.mPlayMode )
      {
        UIWidget__SetDirty(this, v5);
        UIWidget__CheckLayer(this, v6);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void UIWidget__OnAnchor(UIWidget_o *this, const MethodInfo *method)
{
  void *cachedTransform; // x0
  UnityEngine_Transform_o *v4; // x21
  UnityEngine_Transform_o *parent; // x20
  float x; // s10
  float y; // s15
  float z; // s9
  UnityEngine_Vector2_o PivotOffset; // kr00_8
  struct UIRect_AnchorPoint_o *leftAnchor; // x8
  struct UIRect_AnchorPoint_o *bottomAnchor; // x9
  UnityEngine_Object_o *target; // x21
  UnityEngine_Object_o *v13; // x22
  struct UIRect_AnchorPoint_o *v14; // x8
  struct UIRect_AnchorPoint_o *rightAnchor; // x9
  UnityEngine_Object_o *v16; // x21
  UnityEngine_Object_o *v17; // x22
  struct UIRect_AnchorPoint_o *v18; // x8
  struct UIRect_AnchorPoint_o *topAnchor; // x9
  UnityEngine_Object_o *v20; // x21
  UnityEngine_Object_o *v21; // x22
  const MethodInfo *v22; // x2
  const MethodInfo *v23; // x3
  float *v24; // x21
  struct UIRect_AnchorPoint_o *v25; // x8
  float v26; // s0
  struct UIRect_AnchorPoint_o *v27; // x8
  struct UIRect_AnchorPoint_o *v28; // x9
  float v29; // s13
  int v30; // s8
  float v31; // s0
  struct UIRect_AnchorPoint_o *v32; // x8
  struct UIRect_AnchorPoint_o *v33; // x9
  float v34; // s14
  int v35; // s10
  float v36; // s0
  struct UIRect_AnchorPoint_o *v37; // x8
  struct UIRect_AnchorPoint_o *v38; // x9
  float v39; // s15
  float v40; // s9
  int v41; // s13
  float v42; // s0
  struct UIRect_AnchorPoint_o *v43; // x8
  int v44; // s4
  float v45; // s3
  char v46; // w8
  float v47; // s13
  float v48; // s8
  float v49; // s14
  float v50; // s10
  struct UIRect_AnchorPoint_o *v51; // x8
  UnityEngine_Object_o *v52; // x21
  const MethodInfo *v53; // x2
  const MethodInfo *v54; // x3
  struct UIRect_AnchorPoint_o *v55; // x8
  float v56; // s0
  struct UIRect_AnchorPoint_o *v57; // x8
  struct UIRect_AnchorPoint_o *v58; // x8
  UnityEngine_Object_o *v59; // x21
  const MethodInfo *v60; // x2
  const MethodInfo *v61; // x3
  struct UIRect_AnchorPoint_o *v62; // x8
  float v63; // s0
  struct UIRect_AnchorPoint_o *v64; // x8
  struct UIRect_AnchorPoint_o *v65; // x8
  UnityEngine_Object_o *v66; // x21
  const MethodInfo *v67; // x2
  const MethodInfo *v68; // x3
  struct UIRect_AnchorPoint_o *v69; // x8
  float v70; // s0
  struct UIRect_AnchorPoint_o *v71; // x8
  struct UIRect_AnchorPoint_o *v72; // x8
  struct UIRect_AnchorPoint_o *v73; // x8
  UnityEngine_Object_o *v74; // x21
  const MethodInfo *v75; // x2
  const MethodInfo *v76; // x3
  struct UIRect_AnchorPoint_o *v77; // x8
  float v78; // s0
  struct UIRect_AnchorPoint_o *v79; // x8
  float mHeight; // s0
  float v81; // s1 OVERLAPPED
  struct UIRect_AnchorPoint_o *v82; // x8
  float v83; // s2
  float v84; // s15
  float v85; // s8
  float v86; // s0
  float v87; // s12
  float v88; // s11
  int v89; // w8
  unsigned int v90; // w9
  float v91; // s10
  int32_t v92; // w20
  float v93; // s11
  int32_t keepAspectRatio; // w8
  unsigned int v95; // w10
  int32_t v96; // w21
  float aspectRatio; // s11
  float v98; // s9
  double v99; // d11
  double v100; // d0
  double v101; // d0
  double v102; // d1
  float v103; // s9
  double v104; // d11
  double v105; // d0
  double v106; // d0
  double v107; // d1
  double v108; // d1
  double v109; // d1
  struct UIRect_AnchorPoint_o *v110; // x10
  struct UIRect_AnchorPoint_o *v111; // x11
  struct UIRect_AnchorPoint_o *v112; // x9
  struct UIRect_AnchorPoint_o *v113; // x8
  float absolute; // s3
  float v115; // s8
  float v116; // s10
  const MethodInfo *v117; // x1
  _BOOL4 mIsInFront; // w8
  float v119; // [xsp+Ch] [xbp-84h]
  float v120; // [xsp+10h] [xbp-80h]
  float v121; // [xsp+14h] [xbp-7Ch]
  double iptr; // [xsp+18h] [xbp-78h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v124; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o LocalPos; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v126; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3C225 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3C225 = 1;
  }
  cachedTransform = UIRect__get_cachedTransform((UIRect_o *)this, method);
  if ( !cachedTransform )
    goto LABEL_166;
  v4 = (UnityEngine_Transform_o *)cachedTransform;
  parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)cachedTransform, 0);
  localPosition = UnityEngine_Transform__get_localPosition(v4, 0);
  x = localPosition.fields.x;
  y = localPosition.fields.y;
  z = localPosition.fields.z;
  PivotOffset = NGUIMath__GetPivotOffset(this->fields.mPivot, 0);
  leftAnchor = this->fields.leftAnchor;
  if ( !leftAnchor )
    goto LABEL_166;
  bottomAnchor = this->fields.bottomAnchor;
  if ( !bottomAnchor )
    goto LABEL_166;
  target = (UnityEngine_Object_o *)leftAnchor->fields.target;
  v13 = (UnityEngine_Object_o *)bottomAnchor->fields.target;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  cachedTransform = (void *)UnityEngine_Object__op_Equality(target, v13, 0);
  v120 = x;
  v121 = z;
  v119 = y;
  if ( ((unsigned __int8)cachedTransform & 1) != 0 )
  {
    v14 = this->fields.leftAnchor;
    if ( !v14 )
      goto LABEL_166;
    rightAnchor = this->fields.rightAnchor;
    if ( !rightAnchor )
      goto LABEL_166;
    v16 = (UnityEngine_Object_o *)v14->fields.target;
    v17 = (UnityEngine_Object_o *)rightAnchor->fields.target;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    cachedTransform = (void *)UnityEngine_Object__op_Equality(v16, v17, 0);
    if ( ((unsigned __int8)cachedTransform & 1) != 0 )
    {
      v18 = this->fields.leftAnchor;
      if ( !v18 )
        goto LABEL_166;
      topAnchor = this->fields.topAnchor;
      if ( !topAnchor )
        goto LABEL_166;
      v20 = (UnityEngine_Object_o *)v18->fields.target;
      v21 = (UnityEngine_Object_o *)topAnchor->fields.target;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      cachedTransform = (void *)UnityEngine_Object__op_Equality(v20, v21, 0);
      if ( ((unsigned __int8)cachedTransform & 1) != 0 )
      {
        cachedTransform = this->fields.leftAnchor;
        if ( !cachedTransform )
          goto LABEL_166;
        cachedTransform = UIRect_AnchorPoint__GetSides((UIRect_AnchorPoint_o *)cachedTransform, parent, v22);
        if ( !cachedTransform )
        {
          LocalPos = UIRect__GetLocalPos((UIRect_o *)this, this->fields.leftAnchor, parent, v23);
          v110 = this->fields.leftAnchor;
          if ( !v110 )
            goto LABEL_166;
          v111 = this->fields.bottomAnchor;
          if ( !v111 )
            goto LABEL_166;
          v112 = this->fields.rightAnchor;
          if ( !v112 )
            goto LABEL_166;
          v113 = this->fields.topAnchor;
          if ( !v113 )
            goto LABEL_166;
          v47 = LocalPos.fields.x + (float)v110->fields.absolute;
          v48 = LocalPos.fields.x + (float)v112->fields.absolute;
          absolute = (float)v113->fields.absolute;
          v46 = LocalPos.fields.z >= 0.0 || !this->fields.hideIfOffScreen;
          v49 = LocalPos.fields.y + (float)v111->fields.absolute;
          v50 = LocalPos.fields.y + absolute;
          goto LABEL_140;
        }
        v24 = (float *)cachedTransform;
        if ( *((_DWORD *)cachedTransform + 6) > 2u )
        {
          v25 = this->fields.leftAnchor;
          if ( !v25 )
            goto LABEL_166;
          v26 = NGUIMath__Lerp(
                  *((float *)cachedTransform + 8),
                  *((float *)cachedTransform + 14),
                  v25->fields.relative,
                  0);
          v27 = this->fields.leftAnchor;
          if ( !v27 )
            goto LABEL_166;
          if ( *((_DWORD *)v24 + 6) > 2u )
          {
            v28 = this->fields.rightAnchor;
            if ( !v28 )
              goto LABEL_166;
            v29 = v26;
            v30 = v27->fields.absolute;
            v31 = NGUIMath__Lerp(v24[8], v24[14], v28->fields.relative, 0);
            v32 = this->fields.rightAnchor;
            if ( !v32 )
              goto LABEL_166;
            if ( *((_DWORD *)v24 + 6) > 3u )
            {
              v33 = this->fields.bottomAnchor;
              if ( !v33 )
                goto LABEL_166;
              v34 = v31;
              v35 = v32->fields.absolute;
              v36 = NGUIMath__Lerp(v24[18], v24[12], v33->fields.relative, 0);
              v37 = this->fields.bottomAnchor;
              if ( !v37 )
                goto LABEL_166;
              if ( *((_DWORD *)v24 + 6) > 3u )
              {
                v38 = this->fields.topAnchor;
                if ( !v38 )
                  goto LABEL_166;
                v39 = v36;
                v40 = v29;
                v41 = v37->fields.absolute;
                v42 = NGUIMath__Lerp(v24[18], v24[12], v38->fields.relative, 0);
                v43 = this->fields.topAnchor;
                if ( !v43 )
                  goto LABEL_166;
                v44 = v43->fields.absolute;
                v45 = (float)v41;
                v46 = 1;
                v47 = v40 + (float)v30;
                v48 = v34 + (float)v35;
                v49 = v39 + v45;
                v50 = v42 + (float)v44;
LABEL_140:
                this->fields.mIsInFront = v46;
                goto LABEL_87;
              }
            }
          }
        }
LABEL_167:
        sub_1C32E84(cachedTransform);
      }
    }
  }
  v51 = this->fields.leftAnchor;
  this->fields.mIsInFront = 1;
  if ( !v51 )
    goto LABEL_166;
  v52 = (UnityEngine_Object_o *)v51->fields.target;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  cachedTransform = (void *)UnityEngine_Object__op_Implicit(v52, 0);
  if ( ((unsigned __int8)cachedTransform & 1) != 0 )
  {
    cachedTransform = this->fields.leftAnchor;
    if ( !cachedTransform )
      goto LABEL_166;
    cachedTransform = UIRect_AnchorPoint__GetSides((UIRect_AnchorPoint_o *)cachedTransform, parent, v53);
    if ( cachedTransform )
    {
      if ( *((_DWORD *)cachedTransform + 6) <= 2u )
        goto LABEL_167;
      v55 = this->fields.leftAnchor;
      if ( !v55 )
        goto LABEL_166;
      v56 = NGUIMath__Lerp(*((float *)cachedTransform + 8), *((float *)cachedTransform + 14), v55->fields.relative, 0);
    }
    else
    {
      LODWORD(v56) = (unsigned int)UIRect__GetLocalPos((UIRect_o *)this, this->fields.leftAnchor, parent, v54);
    }
    v57 = this->fields.leftAnchor;
    if ( !v57 )
      goto LABEL_166;
    v47 = v56 + (float)v57->fields.absolute;
  }
  else
  {
    v47 = x - (float)(PivotOffset.fields.x * (float)this->fields.mWidth);
  }
  v58 = this->fields.rightAnchor;
  if ( !v58 )
    goto LABEL_166;
  v59 = (UnityEngine_Object_o *)v58->fields.target;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  cachedTransform = (void *)UnityEngine_Object__op_Implicit(v59, 0);
  if ( ((unsigned __int8)cachedTransform & 1) != 0 )
  {
    cachedTransform = this->fields.rightAnchor;
    if ( !cachedTransform )
      goto LABEL_166;
    cachedTransform = UIRect_AnchorPoint__GetSides((UIRect_AnchorPoint_o *)cachedTransform, parent, v60);
    if ( cachedTransform )
    {
      if ( *((_DWORD *)cachedTransform + 6) <= 2u )
        goto LABEL_167;
      v62 = this->fields.rightAnchor;
      if ( !v62 )
        goto LABEL_166;
      v63 = NGUIMath__Lerp(*((float *)cachedTransform + 8), *((float *)cachedTransform + 14), v62->fields.relative, 0);
    }
    else
    {
      LODWORD(v63) = (unsigned int)UIRect__GetLocalPos((UIRect_o *)this, this->fields.rightAnchor, parent, v61);
    }
    v64 = this->fields.rightAnchor;
    if ( !v64 )
      goto LABEL_166;
    v48 = v63 + (float)v64->fields.absolute;
  }
  else
  {
    v48 = (float)(x - (float)(PivotOffset.fields.x * (float)this->fields.mWidth)) + (float)this->fields.mWidth;
  }
  v65 = this->fields.bottomAnchor;
  if ( !v65 )
    goto LABEL_166;
  v66 = (UnityEngine_Object_o *)v65->fields.target;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  cachedTransform = (void *)UnityEngine_Object__op_Implicit(v66, 0);
  if ( ((unsigned __int8)cachedTransform & 1) != 0 )
  {
    cachedTransform = this->fields.bottomAnchor;
    if ( !cachedTransform )
      goto LABEL_166;
    cachedTransform = UIRect_AnchorPoint__GetSides((UIRect_AnchorPoint_o *)cachedTransform, parent, v67);
    if ( cachedTransform )
    {
      if ( *((_DWORD *)cachedTransform + 6) <= 3u )
        goto LABEL_167;
      v69 = this->fields.bottomAnchor;
      if ( !v69 )
        goto LABEL_166;
      v70 = NGUIMath__Lerp(*((float *)cachedTransform + 18), *((float *)cachedTransform + 12), v69->fields.relative, 0);
      v71 = this->fields.bottomAnchor;
      if ( !v71 )
        goto LABEL_166;
      v49 = v70 + (float)v71->fields.absolute;
    }
    else
    {
      v124 = UIRect__GetLocalPos((UIRect_o *)this, this->fields.bottomAnchor, parent, v68);
      v72 = this->fields.bottomAnchor;
      if ( !v72 )
        goto LABEL_166;
      v49 = v124.fields.y + (float)v72->fields.absolute;
    }
  }
  else
  {
    v49 = y - (float)(PivotOffset.fields.y * (float)this->fields.mHeight);
  }
  v73 = this->fields.topAnchor;
  if ( !v73 )
    goto LABEL_166;
  v74 = (UnityEngine_Object_o *)v73->fields.target;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Implicit(v74, 0) )
  {
    mHeight = (float)this->fields.mHeight;
    v81 = y - (float)(PivotOffset.fields.y * mHeight);
LABEL_86:
    v50 = v81 + mHeight;
    goto LABEL_87;
  }
  cachedTransform = this->fields.topAnchor;
  if ( !cachedTransform )
    goto LABEL_166;
  cachedTransform = UIRect_AnchorPoint__GetSides((UIRect_AnchorPoint_o *)cachedTransform, parent, v75);
  if ( !cachedTransform )
  {
    *(UnityEngine_Vector3_o *)(&v81 - 1) = UIRect__GetLocalPos((UIRect_o *)this, this->fields.topAnchor, parent, v76);
    v82 = this->fields.topAnchor;
    if ( !v82 )
      goto LABEL_166;
    mHeight = (float)v82->fields.absolute;
    goto LABEL_86;
  }
  if ( *((_DWORD *)cachedTransform + 6) <= 3u )
    goto LABEL_167;
  v77 = this->fields.topAnchor;
  if ( !v77 )
    goto LABEL_166;
  v78 = NGUIMath__Lerp(*((float *)cachedTransform + 18), *((float *)cachedTransform + 12), v77->fields.relative, 0);
  v79 = this->fields.topAnchor;
  if ( !v79 )
    goto LABEL_166;
  v50 = v78 + (float)v79->fields.absolute;
LABEL_87:
  v83 = fminf(PivotOffset.fields.x, 1.0);
  v84 = v48 - v47;
  if ( PivotOffset.fields.x < 0.0 )
    v85 = 0.0;
  else
    v85 = v83;
  v86 = fminf(PivotOffset.fields.y, 1.0);
  if ( PivotOffset.fields.y < 0.0 )
    v87 = 0.0;
  else
    v87 = v86;
  if ( !byte_4C313D0 )
  {
    sub_1C32C20(&System_Math_TypeInfo);
    byte_4C313D0 = 1;
  }
  v88 = v84 + 0.5;
  if ( System_Math_TypeInfo->_2.cctor_finished )
  {
    v89 = 1;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v89 = (unsigned __int8)byte_4C313D0;
  }
  v90 = vcvtms_s32_f32(v88);
  v91 = v50 - v49;
  if ( floorf(v88) == INFINITY )
    v92 = 0x80000000;
  else
    v92 = v90;
  if ( !v89 )
  {
    sub_1C32C20(&System_Math_TypeInfo);
    byte_4C313D0 = 1;
  }
  v93 = v91 + 0.5;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  keepAspectRatio = this->fields.keepAspectRatio;
  v95 = vcvtms_s32_f32(v93);
  if ( floorf(v93) == INFINITY )
    v96 = 0x80000000;
  else
    v96 = v95;
  if ( keepAspectRatio )
  {
    aspectRatio = this->fields.aspectRatio;
    if ( aspectRatio != 0.0 )
    {
      if ( keepAspectRatio == 2 )
      {
        if ( !byte_4C32B16 )
        {
          sub_1C32C20(&System_Math_TypeInfo);
          byte_4C32B16 = 1;
        }
        v98 = aspectRatio * (float)v96;
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v99 = v98;
        v100 = modf(v98, &iptr);
        if ( v98 >= 0.0 )
        {
          if ( v100 == 0.5 )
          {
            v101 = iptr;
            v102 = 1.0;
LABEL_127:
            v108 = v101 + v102;
            if ( ((__int64)v101 & 1) != 0 )
              v101 = v108;
            goto LABEL_144;
          }
          v101 = floor(v99 + 0.5);
        }
        else
        {
          if ( v100 == -0.5 )
          {
            v101 = iptr;
            v102 = -1.0;
            goto LABEL_127;
          }
          v101 = ceil(v99 + -0.5);
        }
LABEL_144:
        if ( v101 == INFINITY )
          v92 = 0x80000000;
        else
          v92 = (int)v101;
        goto LABEL_151;
      }
      if ( !byte_4C32B16 )
      {
        sub_1C32C20(&System_Math_TypeInfo);
        byte_4C32B16 = 1;
      }
      v103 = (float)v92 / aspectRatio;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v104 = v103;
      v105 = modf(v103, &iptr);
      if ( v103 >= 0.0 )
      {
        if ( v105 == 0.5 )
        {
          v106 = iptr;
          v107 = 1.0;
LABEL_132:
          v109 = v106 + v107;
          if ( ((__int64)v106 & 1) != 0 )
            v106 = v109;
          goto LABEL_148;
        }
        v106 = floor(v104 + 0.5);
      }
      else
      {
        if ( v105 == -0.5 )
        {
          v106 = iptr;
          v107 = -1.0;
          goto LABEL_132;
        }
        v106 = ceil(v104 + -0.5);
      }
LABEL_148:
      if ( v106 == INFINITY )
        v96 = 0x80000000;
      else
        v96 = (int)v106;
    }
  }
LABEL_151:
  v115 = v85 * v84;
  v116 = v87 * v91;
  if ( v92 < ((int (__fastcall *)(UIWidget_o *, const MethodInfo *))this->klass->vtable._34_get_minWidth.methodPtr)(
               this,
               this->klass->vtable._34_get_minWidth.method) )
    v92 = ((__int64 (__fastcall *)(UIWidget_o *, const MethodInfo *))this->klass->vtable._34_get_minWidth.methodPtr)(
            this,
            this->klass->vtable._34_get_minWidth.method);
  if ( v96 < ((int (__fastcall *)(UIWidget_o *, const MethodInfo *))this->klass->vtable._35_get_minHeight.methodPtr)(
               this,
               this->klass->vtable._35_get_minHeight.method) )
    v96 = ((__int64 (__fastcall *)(UIWidget_o *, const MethodInfo *))this->klass->vtable._35_get_minHeight.methodPtr)(
            this,
            this->klass->vtable._35_get_minHeight.method);
  if ( (float)((float)((float)(v121 - v121) * (float)(v121 - v121))
             + (float)((float)((float)(v119 - (float)(v49 + v116)) * (float)(v119 - (float)(v49 + v116)))
                     + (float)((float)(v120 - (float)(v47 + v115)) * (float)(v120 - (float)(v47 + v115))))) > 0.001 )
  {
    cachedTransform = UIRect__get_cachedTransform((UIRect_o *)this, v117);
    if ( cachedTransform )
    {
      v126.fields.x = v47 + v115;
      v126.fields.y = v49 + v116;
      v126.fields.z = v121;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)cachedTransform, v126, 0);
      if ( this->fields.mIsInFront )
        this->fields.mChanged = 1;
      goto LABEL_159;
    }
LABEL_166:
    sub_1C32E7C(cachedTransform);
  }
LABEL_159:
  if ( this->fields.mWidth != v92 || this->fields.mHeight != v96 )
  {
    mIsInFront = this->fields.mIsInFront;
    this->fields.mWidth = v92;
    this->fields.mHeight = v96;
    if ( mIsInFront )
      this->fields.mChanged = 1;
    if ( this->fields.autoResizeBoxCollider )
      UIWidget__ResizeCollider(this, v117);
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
  float x; // s8
  float y; // s9
  float z; // s10
  const MethodInfo *v10; // x1
  UnityEngine_Transform_o *v11; // x20
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
    if ( !byte_4C313D3 )
    {
      sub_1C32C20(&System_Math_TypeInfo);
      byte_4C313D3 = 1;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    if ( sqrtf((float)(z * z) + (float)((float)(x * x) + (float)(y * y))) > 8.0 )
    {
      ((void (__fastcall *)(UIWidget_o *, const MethodInfo *))this->klass->vtable._32_UpgradeFrom265.methodPtr)(
        this,
        this->klass->vtable._32_UpgradeFrom265.method);
      cachedTransform = UIRect__get_cachedTransform((UIRect_o *)this, v10);
      v11 = cachedTransform;
      if ( !byte_4C313D6 )
      {
        cachedTransform = (UnityEngine_Transform_o *)sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
        byte_4C313D6 = 1;
      }
      if ( v11 )
      {
        UnityEngine_Transform__set_localScale(v11, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
        goto LABEL_12;
      }
LABEL_13:
      sub_1C32E7C(cachedTransform);
    }
  }
LABEL_12:
  UIRect__UpdateMe((UIRect_o *)this, v4);
}


void UIWidget__OnUpdate(UIWidget_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *panel; // x20
  const MethodInfo *v4; // x1

  if ( (byte_4C3C226 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3C226 = 1;
  }
  panel = (UnityEngine_Object_o *)this->fields.panel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(panel, 0, 0) )
    UIWidget__CreatePanel(this, v4);
}


int32_t UIWidget__PanelCompareFunc(UIWidget_o *left, UIWidget_o *right, const MethodInfo *method)
{
  UIWidget_o *v4; // x19
  int32_t mDepth; // w8
  int32_t v6; // w9
  UnityEngine_Object_o *v8; // x19
  UnityEngine_Object_o *v9; // x20

  v4 = left;
  if ( (byte_4C3C21B & 1) == 0 )
  {
    left = (UIWidget_o *)sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3C21B = 1;
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
  v9 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UIWidget_o *, const MethodInfo *))right->klass->vtable._24_get_material.methodPtr)(
                                 right,
                                 right->klass->vtable._24_get_material.method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v8, v9, 0) )
    return 0;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v8, 0, 0) )
    return -1;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  left = (UIWidget_o *)UnityEngine_Object__op_Inequality(v9, 0, 0);
  if ( ((unsigned __int8)left & 1) != 0 )
    return 1;
  if ( !v8 || (left = (UIWidget_o *)UnityEngine_Object__GetInstanceID(v8, 0), !v9) )
LABEL_24:
    sub_1C32E7C(left);
  if ( (int)left < UnityEngine_Object__GetInstanceID(v9, 0) )
    return -1;
  else
    return 1;
}


void UIWidget__ParentHasChanged(UIWidget_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *panel; // x20
  const MethodInfo *v4; // x1
  UnityEngine_Transform_o *cachedTransform; // x20
  const MethodInfo *v6; // x1
  UnityEngine_GameObject_o *cachedGameObject; // x0
  int32_t layer; // w21
  UIPanel_o *_49077024; // x0
  UnityEngine_Object_o *v10; // x21
  UnityEngine_Object_o *v11; // x20
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1

  if ( (byte_4C3C222 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&UIPanel_TypeInfo);
    byte_4C3C222 = 1;
  }
  UIRect__ParentHasChanged((UIRect_o *)this, method);
  panel = (UnityEngine_Object_o *)this->fields.panel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(panel, 0, 0) )
  {
    cachedTransform = UIRect__get_cachedTransform((UIRect_o *)this, v4);
    cachedGameObject = UIRect__get_cachedGameObject((UIRect_o *)this, v6);
    if ( !cachedGameObject )
      sub_1C32E7C(0);
    layer = UnityEngine_GameObject__get_layer(cachedGameObject, 0);
    if ( !UIPanel_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UIPanel_TypeInfo);
    _49077024 = UIPanel__Find_49077024(cachedTransform, 1, layer, 0);
    v10 = (UnityEngine_Object_o *)this->fields.panel;
    v11 = (UnityEngine_Object_o *)_49077024;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v10, v11, 0) )
    {
      UIWidget__RemoveFromPanel(this, v12);
      UIWidget__CreatePanel(this, v13);
    }
  }
}


void UIWidget__RemoveFromPanel(UIWidget_o *this, const MethodInfo *method)
{
  UIPanel_o **p_panel; // x20
  UnityEngine_Object_o *panel; // x21
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C3C21E & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3C21E = 1;
  }
  p_panel = &this->fields.panel;
  panel = (UnityEngine_Object_o *)this->fields.panel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(panel, 0, 0) )
  {
    if ( !*p_panel )
      sub_1C32E7C(0);
    UIPanel__RemoveWidget(*p_panel, this, 0);
    this->fields.panel = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.panel, 0, v7, v8);
  }
  this->fields.drawCall = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.drawCall, 0, v5, v6);
}


void UIWidget__ResizeCollider(UIWidget_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x19

  if ( (byte_4C3C219 & 1) == 0 )
  {
    sub_1C32C20(&NGUITools_TypeInfo);
    byte_4C3C219 = 1;
  }
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  if ( NGUITools__GetActive((UnityEngine_Behaviour_o *)this, 0) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
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
  float aspectRatio; // s8
  float v14; // s9
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
      aspectRatio = this->fields.aspectRatio;
      v14 = (float)h;
      if ( !byte_4C32B16 )
      {
        sub_1C32C20(&System_Math_TypeInfo);
        byte_4C32B16 = 1;
      }
      v15 = aspectRatio * v14;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v16 = v15;
      v17 = modf(v15, &iptr);
      if ( v15 >= 0.0 )
      {
        if ( v17 == 0.5 )
        {
          v18 = iptr;
          v19 = 1.0;
LABEL_28:
          v21 = v18 + v19;
          if ( ((__int64)v18 & 1) != 0 )
            v18 = v21;
          goto LABEL_39;
        }
        v18 = floor(v16 + 0.5);
      }
      else
      {
        if ( v17 == -0.5 )
        {
          v18 = iptr;
          v19 = -1.0;
          goto LABEL_28;
        }
        v18 = ceil(v16 + -0.5);
      }
LABEL_39:
      if ( v18 == INFINITY )
        v23 = 0x80000000;
      else
        v23 = (int)v18;
      this->fields.mWidth = v23;
      break;
    case 1:
      v6 = this->fields.aspectRatio;
      v7 = (float)w;
      if ( !byte_4C32B16 )
      {
        sub_1C32C20(&System_Math_TypeInfo);
        byte_4C32B16 = 1;
      }
      v8 = v7 / v6;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v9 = v8;
      v10 = modf(v8, &iptr);
      if ( v8 >= 0.0 )
      {
        if ( v10 == 0.5 )
        {
          v11 = iptr;
          v12 = 1.0;
LABEL_23:
          v20 = v11 + v12;
          if ( ((__int64)v11 & 1) != 0 )
            v11 = v20;
          goto LABEL_34;
        }
        v11 = floor(v9 + 0.5);
      }
      else
      {
        if ( v10 == -0.5 )
        {
          v11 = iptr;
          v12 = -1.0;
          goto LABEL_23;
        }
        v11 = ceil(v9 + -0.5);
      }
LABEL_34:
      if ( v11 == INFINITY )
        v22 = 0x80000000;
      else
        v22 = (int)v11;
      this->fields.mHeight = v22;
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
  const MethodInfo *v7; // x1
  struct UIGeometry_o *geometry; // x8
  struct BetterList_Vector3__o *verts; // x8

  if ( (byte_4C3C21D & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3C21D = 1;
  }
  drawCall = (UnityEngine_Object_o *)this->fields.drawCall;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    sub_1C32E7C(isVisible);
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
        UIWidget__CreatePanel(this, v7);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void UIWidget__SetRect(UIWidget_o *this, float x, float y, float width, float height, const MethodInfo *method)
{
  const MethodInfo *v10; // x1
  UnityEngine_Vector2_o PivotOffset; // kr00_8
  float v12; // s2
  float v13; // s14
  float v14; // s0
  float v15; // s15
  float v16; // s8
  int v17; // w8
  unsigned int v18; // w9
  int32_t v19; // w22
  float v20; // s8
  unsigned int v21; // w8
  int32_t v22; // w21
  UnityEngine_Transform_o *cachedTransform; // x0
  float v24; // s11
  float v25; // s10
  UnityEngine_Transform_o *v26; // x20
  float z; // s12
  float v28; // s14
  float v29; // s13
  const MethodInfo *v30; // x2
  const MethodInfo *v31; // x2
  const MethodInfo *v32; // x1
  struct UIRect_AnchorPoint_o *leftAnchor; // x8
  UnityEngine_Transform_o *v34; // x20
  UnityEngine_Object_o *target; // x21
  const MethodInfo *v36; // x2
  struct UIRect_AnchorPoint_o *rightAnchor; // x8
  UnityEngine_Object_o *v38; // x21
  const MethodInfo *v39; // x2
  struct UIRect_AnchorPoint_o *bottomAnchor; // x8
  UnityEngine_Object_o *v41; // x21
  const MethodInfo *v42; // x2
  struct UIRect_AnchorPoint_o *topAnchor; // x8
  UnityEngine_Object_o *v44; // x21
  const MethodInfo *v45; // x2
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o v48; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3C218 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3C218 = 1;
  }
  PivotOffset = NGUIMath__GetPivotOffset(this->fields.mPivot, 0);
  v12 = fminf(PivotOffset.fields.x, 1.0);
  if ( PivotOffset.fields.x < 0.0 )
    v13 = 0.0;
  else
    v13 = v12;
  v14 = fminf(PivotOffset.fields.y, 1.0);
  if ( PivotOffset.fields.y < 0.0 )
    v15 = 0.0;
  else
    v15 = v14;
  if ( !byte_4C313D0 )
  {
    sub_1C32C20(&System_Math_TypeInfo);
    byte_4C313D0 = 1;
  }
  v16 = width + 0.5;
  if ( System_Math_TypeInfo->_2.cctor_finished )
  {
    v17 = 1;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v17 = (unsigned __int8)byte_4C313D0;
  }
  v18 = vcvtms_s32_f32(v16);
  if ( floorf(v16) == INFINITY )
    v19 = 0x80000000;
  else
    v19 = v18;
  if ( !v17 )
  {
    sub_1C32C20(&System_Math_TypeInfo);
    byte_4C313D0 = 1;
  }
  v20 = height + 0.5;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v21 = vcvtms_s32_f32(v20);
  if ( floorf(v20) == INFINITY )
    v21 = 0x80000000;
  if ( PivotOffset.fields.x == 0.5 )
    v19 &= ~1u;
  if ( PivotOffset.fields.y == 0.5 )
    v22 = v21 & 0xFFFFFFFE;
  else
    v22 = v21;
  cachedTransform = UIRect__get_cachedTransform((UIRect_o *)this, v10);
  if ( !cachedTransform )
    goto LABEL_59;
  v24 = x + width;
  v25 = y + height;
  v26 = cachedTransform;
  localPosition = UnityEngine_Transform__get_localPosition(cachedTransform, 0);
  z = localPosition.fields.z;
  if ( v19 < ((int (__fastcall *)(UIWidget_o *, const MethodInfo *, long double, long double))this->klass->vtable._34_get_minWidth.methodPtr)(
               this,
               this->klass->vtable._34_get_minWidth.method,
               *(long double *)&localPosition.fields.x,
               *(long double *)&localPosition.fields.y) )
    v19 = ((__int64 (__fastcall *)(UIWidget_o *, const MethodInfo *))this->klass->vtable._34_get_minWidth.methodPtr)(
            this,
            this->klass->vtable._34_get_minWidth.method);
  v28 = floorf((float)((float)((float)(v24 - x) * v13) + x) + 0.5);
  v29 = floorf((float)((float)((float)(v25 - y) * v15) + y) + 0.5);
  if ( v22 < ((int (__fastcall *)(UIWidget_o *, const MethodInfo *))this->klass->vtable._35_get_minHeight.methodPtr)(
               this,
               this->klass->vtable._35_get_minHeight.method) )
    v22 = ((__int64 (__fastcall *)(UIWidget_o *, const MethodInfo *))this->klass->vtable._35_get_minHeight.methodPtr)(
            this,
            this->klass->vtable._35_get_minHeight.method);
  v48.fields.x = v28;
  v48.fields.y = v29;
  v48.fields.z = z;
  UnityEngine_Transform__set_localPosition(v26, v48, 0);
  UIWidget__set_width(this, v19, v30);
  UIWidget__set_height(this, v22, v31);
  if ( UIRect__get_isAnchored((UIRect_o *)this, v32) )
  {
    cachedTransform = UnityEngine_Transform__get_parent(v26, 0);
    leftAnchor = this->fields.leftAnchor;
    if ( !leftAnchor )
      goto LABEL_59;
    v34 = cachedTransform;
    target = (UnityEngine_Object_o *)leftAnchor->fields.target;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    cachedTransform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Implicit(target, 0);
    if ( ((unsigned __int8)cachedTransform & 1) != 0 )
    {
      cachedTransform = (UnityEngine_Transform_o *)this->fields.leftAnchor;
      if ( !cachedTransform )
        goto LABEL_59;
      UIRect_AnchorPoint__SetHorizontal((UIRect_AnchorPoint_o *)cachedTransform, v34, x, v36);
    }
    rightAnchor = this->fields.rightAnchor;
    if ( !rightAnchor )
      goto LABEL_59;
    v38 = (UnityEngine_Object_o *)rightAnchor->fields.target;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    cachedTransform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Implicit(v38, 0);
    if ( ((unsigned __int8)cachedTransform & 1) != 0 )
    {
      cachedTransform = (UnityEngine_Transform_o *)this->fields.rightAnchor;
      if ( !cachedTransform )
        goto LABEL_59;
      UIRect_AnchorPoint__SetHorizontal((UIRect_AnchorPoint_o *)cachedTransform, v34, v24, v39);
    }
    bottomAnchor = this->fields.bottomAnchor;
    if ( !bottomAnchor )
      goto LABEL_59;
    v41 = (UnityEngine_Object_o *)bottomAnchor->fields.target;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    cachedTransform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Implicit(v41, 0);
    if ( ((unsigned __int8)cachedTransform & 1) != 0 )
    {
      cachedTransform = (UnityEngine_Transform_o *)this->fields.bottomAnchor;
      if ( !cachedTransform )
        goto LABEL_59;
      UIRect_AnchorPoint__SetVertical((UIRect_AnchorPoint_o *)cachedTransform, v34, y, v42);
    }
    topAnchor = this->fields.topAnchor;
    if ( !topAnchor )
LABEL_59:
      sub_1C32E7C(cachedTransform);
    v44 = (UnityEngine_Object_o *)topAnchor->fields.target;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Implicit(v44, 0) )
    {
      cachedTransform = (UnityEngine_Transform_o *)this->fields.topAnchor;
      if ( cachedTransform )
      {
        UIRect_AnchorPoint__SetVertical((UIRect_AnchorPoint_o *)cachedTransform, v34, v25, v45);
        return;
      }
      goto LABEL_59;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void UIWidget__UpdateFinalAlpha(UIWidget_o *this, int32_t frameID, const MethodInfo *method)
{
  float a; // s0
  UnityEngine_Object_o *parent; // x21
  _BOOL8 v7; // x0

  if ( (byte_4C3C215 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3C215 = 1;
  }
  a = 0.0;
  if ( this->fields.mIsVisibleByAlpha && this->fields.mIsInFront )
  {
    parent = (UnityEngine_Object_o *)UIRect__get_parent((UIRect_o *)this, *(const MethodInfo **)&frameID);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality(parent, 0, 0);
    if ( v7 )
    {
      if ( !parent )
        sub_1C32E7C(v7);
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
  UnityEngine_Object_o *v10; // x21
  UnityEngine_Transform_o *geometry; // x0
  intptr_t v12; // x8
  bool v13; // w21
  struct UIGeometry_o *v14; // x8
  intptr_t v15; // x8
  __int128 v16; // q1
  __int128 v17; // q2
  __int128 v18; // q3
  intptr_t v19; // x8
  intptr_t m_CachedPtr; // x8
  __int128 v21; // q1
  __int128 v22; // q2
  __int128 v23; // q3
  struct UIPanel_o *panel; // x8
  __int128 v25; // q0
  __int128 v26; // q2
  __int128 v27; // q3
  __int128 v28; // q0
  __int128 v29; // q2
  __int128 v30; // q3
  __int128 v31; // q1
  __int128 v32; // q2
  __int128 v33; // q3
  UnityEngine_Matrix4x4_o *v34; // x1
  struct UIPanel_o *v35; // x8
  __int128 v36; // q0
  __int128 v37; // q2
  __int128 v38; // q3
  __int128 v39; // q0
  __int128 v40; // q2
  __int128 v41; // q3
  __int128 v42; // q1
  __int128 v43; // q2
  __int128 v44; // q3
  UnityEngine_Matrix4x4_o v46; // [xsp+0h] [xbp-270h] BYREF
  UnityEngine_Matrix4x4_o v47; // [xsp+40h] [xbp-230h] BYREF
  UnityEngine_Matrix4x4_o v48; // [xsp+80h] [xbp-1F0h] BYREF
  UnityEngine_Matrix4x4_o v49; // [xsp+C0h] [xbp-1B0h] BYREF
  UnityEngine_Matrix4x4_o v50; // [xsp+100h] [xbp-170h] BYREF
  UnityEngine_Matrix4x4_o v51; // [xsp+140h] [xbp-130h] BYREF
  UnityEngine_Matrix4x4_o v52; // [xsp+180h] [xbp-F0h] BYREF
  UnityEngine_Matrix4x4_o v53; // [xsp+1C0h] [xbp-B0h] BYREF
  UnityEngine_Matrix4x4_o v54; // [xsp+200h] [xbp-70h]

  if ( (byte_4C3C227 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3C227 = 1;
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
          v21 = *(_OWORD *)&this->fields.mLocalToPanel.fields.m03;
          v22 = *(_OWORD *)&this->fields.mLocalToPanel.fields.m00;
          v23 = *(_OWORD *)&this->fields.mLocalToPanel.fields.m01;
          *(_OWORD *)&v54.fields.m02 = *(_OWORD *)&this->fields.mLocalToPanel.fields.m02;
          *(_OWORD *)&v54.fields.m03 = v21;
          *(_OWORD *)&v54.fields.m00 = v22;
          *(_OWORD *)&v54.fields.m01 = v23;
        }
        else
        {
          panel = this->fields.panel;
          if ( !panel )
            goto LABEL_44;
          v25 = *(_OWORD *)&panel->fields.worldToLocal.fields.m03;
          v27 = *(_OWORD *)&panel->fields.worldToLocal.fields.m00;
          v26 = *(_OWORD *)&panel->fields.worldToLocal.fields.m01;
          *(_OWORD *)&v54.fields.m02 = *(_OWORD *)&panel->fields.worldToLocal.fields.m02;
          *(_OWORD *)&v54.fields.m03 = v25;
          *(_OWORD *)&v54.fields.m00 = v27;
          *(_OWORD *)&v54.fields.m01 = v26;
          geometry = UIRect__get_cachedTransform((UIRect_o *)this, v5);
          if ( !geometry )
            goto LABEL_44;
          UnityEngine_Transform__get_localToWorldMatrix(&v53, geometry, 0);
          v47 = v53;
          v48 = v54;
          UnityEngine_Matrix4x4__op_Multiply(&v52, &v48, &v47, 0);
          v28 = *(_OWORD *)&v52.fields.m03;
          v30 = *(_OWORD *)&v52.fields.m00;
          v29 = *(_OWORD *)&v52.fields.m01;
          v53 = v52;
          *(_OWORD *)&this->fields.mLocalToPanel.fields.m02 = *(_OWORD *)&v52.fields.m02;
          *(_OWORD *)&this->fields.mLocalToPanel.fields.m03 = v28;
          *(_OWORD *)&this->fields.mLocalToPanel.fields.m00 = v30;
          *(_OWORD *)&this->fields.mLocalToPanel.fields.m01 = v29;
          this->fields.mMatrixFrame = frame;
          v31 = *(_OWORD *)&this->fields.mLocalToPanel.fields.m03;
          v32 = *(_OWORD *)&this->fields.mLocalToPanel.fields.m00;
          v33 = *(_OWORD *)&this->fields.mLocalToPanel.fields.m01;
          geometry = (UnityEngine_Transform_o *)this->fields.geometry;
          *(_OWORD *)&v54.fields.m02 = *(_OWORD *)&this->fields.mLocalToPanel.fields.m02;
          *(_OWORD *)&v54.fields.m03 = v31;
          *(_OWORD *)&v54.fields.m00 = v32;
          *(_OWORD *)&v54.fields.m01 = v33;
          if ( !geometry )
            goto LABEL_44;
        }
        v34 = &v46;
        v46 = v54;
LABEL_41:
        UIGeometry__ApplyTransform((UIGeometry_o *)geometry, v34, v6);
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
  v10 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UIWidget_o *, const MethodInfo *))this->klass->vtable._28_get_shader.methodPtr)(
                                  this,
                                  this->klass->vtable._28_get_shader.method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v10, 0, 0) )
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
    v13 = 0;
    this->fields.mMoved = 0;
    return v13;
  }
  geometry = (UnityEngine_Transform_o *)this->fields.geometry;
  if ( !geometry )
    goto LABEL_44;
  v12 = geometry->fields.m_CachedPtr;
  if ( !v12 )
    goto LABEL_44;
  v13 = *(_DWORD *)(v12 + 24) > 0;
  if ( this->fields.fillGeometry )
  {
    UIGeometry__Clear((UIGeometry_o *)geometry, v5);
    v14 = this->fields.geometry;
    if ( !v14 )
      goto LABEL_44;
    ((void (__fastcall *)(UIWidget_o *, struct BetterList_Vector3__o *, struct BetterList_Vector2__o *, struct BetterList_Color32__o *, const MethodInfo *))this->klass->vtable._38_OnFill.methodPtr)(
      this,
      v14->fields.verts,
      v14->fields.uvs,
      v14->fields.cols,
      this->klass->vtable._38_OnFill.method);
    geometry = (UnityEngine_Transform_o *)this->fields.geometry;
    if ( !geometry )
      goto LABEL_44;
  }
  v15 = geometry->fields.m_CachedPtr;
  if ( !v15 )
    goto LABEL_44;
  if ( *(int *)(v15 + 24) >= 1 )
  {
    if ( this->fields.mMatrixFrame == frame )
    {
      v16 = *(_OWORD *)&this->fields.mLocalToPanel.fields.m03;
      v17 = *(_OWORD *)&this->fields.mLocalToPanel.fields.m00;
      v18 = *(_OWORD *)&this->fields.mLocalToPanel.fields.m01;
      *(_OWORD *)&v54.fields.m02 = *(_OWORD *)&this->fields.mLocalToPanel.fields.m02;
      *(_OWORD *)&v54.fields.m03 = v16;
      *(_OWORD *)&v54.fields.m00 = v17;
      *(_OWORD *)&v54.fields.m01 = v18;
LABEL_40:
      v34 = &v49;
      v49 = v54;
      goto LABEL_41;
    }
    v35 = this->fields.panel;
    if ( v35 )
    {
      v36 = *(_OWORD *)&v35->fields.worldToLocal.fields.m03;
      v38 = *(_OWORD *)&v35->fields.worldToLocal.fields.m00;
      v37 = *(_OWORD *)&v35->fields.worldToLocal.fields.m01;
      *(_OWORD *)&v54.fields.m02 = *(_OWORD *)&v35->fields.worldToLocal.fields.m02;
      *(_OWORD *)&v54.fields.m03 = v36;
      *(_OWORD *)&v54.fields.m00 = v38;
      *(_OWORD *)&v54.fields.m01 = v37;
      geometry = UIRect__get_cachedTransform((UIRect_o *)this, v5);
      if ( geometry )
      {
        UnityEngine_Transform__get_localToWorldMatrix(&v53, geometry, 0);
        v50 = v53;
        v51 = v54;
        UnityEngine_Matrix4x4__op_Multiply(&v52, &v51, &v50, 0);
        v39 = *(_OWORD *)&v52.fields.m03;
        v41 = *(_OWORD *)&v52.fields.m00;
        v40 = *(_OWORD *)&v52.fields.m01;
        v53 = v52;
        *(_OWORD *)&this->fields.mLocalToPanel.fields.m02 = *(_OWORD *)&v52.fields.m02;
        *(_OWORD *)&this->fields.mLocalToPanel.fields.m03 = v39;
        *(_OWORD *)&this->fields.mLocalToPanel.fields.m00 = v41;
        *(_OWORD *)&this->fields.mLocalToPanel.fields.m01 = v40;
        this->fields.mMatrixFrame = frame;
        v42 = *(_OWORD *)&this->fields.mLocalToPanel.fields.m03;
        v43 = *(_OWORD *)&this->fields.mLocalToPanel.fields.m00;
        v44 = *(_OWORD *)&this->fields.mLocalToPanel.fields.m01;
        geometry = (UnityEngine_Transform_o *)this->fields.geometry;
        *(_OWORD *)&v54.fields.m02 = *(_OWORD *)&this->fields.mLocalToPanel.fields.m02;
        *(_OWORD *)&v54.fields.m03 = v42;
        *(_OWORD *)&v54.fields.m00 = v43;
        *(_OWORD *)&v54.fields.m01 = v44;
        if ( geometry )
          goto LABEL_40;
      }
    }
LABEL_44:
    sub_1C32E7C(geometry);
  }
  return v13;
}


// local variable allocation has failed, the output may be wrong!
bool UIWidget__UpdateTransform(UIWidget_o *this, int32_t frame, const MethodInfo *method)
{
  UIWidget_o *v3; // x19
  struct UIPanel_o *panel; // x8
  const MethodInfo *v6; // x1
  struct UIPanel_o *v7; // x8
  __int128 v8; // q0
  __int128 v9; // q2
  __int128 v10; // q3
  __int128 v11; // q0
  __int128 v12; // q2
  __int128 v13; // q3
  int32_t mPivot; // w0
  UnityEngine_Vector2_o PivotOffset; // kr00_8
  int mHeight; // s10
  int mWidth; // s11
  const MethodInfo *v18; // x1
  float v19; // s0
  float v20; // s1
  float v21; // s12
  UIWidget_o *v22; // x20
  float v23; // s11
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Matrix4x4_o *v27; // x8
  float v28; // s11
  float v29; // s12
  float v30; // s13
  UnityEngine_Matrix4x4_o *v31; // x8
  float v32; // s8
  float v33; // s9
  float v34; // s10
  struct UIWidget_OnDimensionsChanged_o *onChange; // x8
  UnityEngine_Matrix4x4_o v37; // [xsp+0h] [xbp-190h] BYREF
  UnityEngine_Matrix4x4_o v38; // [xsp+40h] [xbp-150h] BYREF
  UnityEngine_Matrix4x4_o v39; // [xsp+80h] [xbp-110h] BYREF
  UnityEngine_Matrix4x4_o v40; // [xsp+C0h] [xbp-D0h] BYREF
  UnityEngine_Matrix4x4_o v41; // [xsp+100h] [xbp-90h]
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v44; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v46; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v47; // 0:s0.4,4:s1.4,8:s2.4

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
          v7 = v3->fields.panel;
          if ( v7 )
          {
            v8 = *(_OWORD *)&v7->fields.worldToLocal.fields.m03;
            v10 = *(_OWORD *)&v7->fields.worldToLocal.fields.m00;
            v9 = *(_OWORD *)&v7->fields.worldToLocal.fields.m01;
            *(_OWORD *)&v41.fields.m02 = *(_OWORD *)&v7->fields.worldToLocal.fields.m02;
            *(_OWORD *)&v41.fields.m03 = v8;
            *(_OWORD *)&v41.fields.m00 = v10;
            *(_OWORD *)&v41.fields.m01 = v9;
            this = (UIWidget_o *)UIRect__get_cachedTransform((UIRect_o *)v3, v6);
            if ( this )
            {
              UnityEngine_Transform__get_localToWorldMatrix(&v40, (UnityEngine_Transform_o *)this, 0);
              v37 = v40;
              v38 = v41;
              UnityEngine_Matrix4x4__op_Multiply(&v39, &v38, &v37, 0);
              v11 = *(_OWORD *)&v39.fields.m03;
              v13 = *(_OWORD *)&v39.fields.m00;
              v12 = *(_OWORD *)&v39.fields.m01;
              v40 = v39;
              *(_OWORD *)&v3->fields.mLocalToPanel.fields.m02 = *(_OWORD *)&v39.fields.m02;
              *(_OWORD *)&v3->fields.mLocalToPanel.fields.m03 = v11;
              *(_OWORD *)&v3->fields.mLocalToPanel.fields.m00 = v13;
              *(_OWORD *)&v3->fields.mLocalToPanel.fields.m01 = v12;
              mPivot = v3->fields.mPivot;
              v3->fields.mMatrixFrame = frame;
              PivotOffset = NGUIMath__GetPivotOffset(mPivot, 0);
              mWidth = v3->fields.mWidth;
              mHeight = v3->fields.mHeight;
              this = (UIWidget_o *)UIRect__get_cachedTransform((UIRect_o *)v3, v18);
              if ( this )
              {
                v19 = (float)-PivotOffset.fields.x * (float)mWidth;
                v20 = (float)-PivotOffset.fields.y * (float)mHeight;
                v21 = v19 + (float)mWidth;
                v22 = this;
                v23 = v20 + (float)mHeight;
                v42 = UnityEngine_Transform__TransformPoint_71250240((UnityEngine_Transform_o *)this, v19, v20, 0.0, 0);
                x = v42.fields.x;
                y = v42.fields.y;
                z = v42.fields.z;
                v43 = UnityEngine_Transform__TransformPoint_71250240((UnityEngine_Transform_o *)v22, v21, v23, 0.0, 0);
                v27 = (UnityEngine_Matrix4x4_o *)v3->fields.panel;
                if ( v27 )
                {
                  v28 = v43.fields.x;
                  v29 = v43.fields.y;
                  v30 = v43.fields.z;
                  v44.fields.x = x;
                  v44.fields.y = y;
                  v44.fields.z = z;
                  v45 = UnityEngine_Matrix4x4__MultiplyPoint3x4(v27 + 3, v44, 0);
                  v31 = (UnityEngine_Matrix4x4_o *)v3->fields.panel;
                  if ( v31 )
                  {
                    v32 = v45.fields.x;
                    v33 = v45.fields.y;
                    v34 = v45.fields.z;
                    v46.fields.x = v28;
                    v46.fields.y = v29;
                    v46.fields.z = v30;
                    v47 = UnityEngine_Matrix4x4__MultiplyPoint3x4(v31 + 3, v46, 0);
                    if ( (float)((float)((float)(v3->fields.mOldV0.fields.z - v34)
                                       * (float)(v3->fields.mOldV0.fields.z - v34))
                               + (float)((float)((float)(v3->fields.mOldV0.fields.x - v32)
                                               * (float)(v3->fields.mOldV0.fields.x - v32))
                                       + (float)((float)(v3->fields.mOldV0.fields.y - v33)
                                               * (float)(v3->fields.mOldV0.fields.y - v33)))) > 0.000001
                      || (float)((float)((float)(v3->fields.mOldV1.fields.z - v47.fields.z)
                                       * (float)(v3->fields.mOldV1.fields.z - v47.fields.z))
                               + (float)((float)((float)(v3->fields.mOldV1.fields.x - v47.fields.x)
                                               * (float)(v3->fields.mOldV1.fields.x - v47.fields.x))
                                       + (float)((float)(v3->fields.mOldV1.fields.y - v47.fields.y)
                                               * (float)(v3->fields.mOldV1.fields.y - v47.fields.y)))) > 0.000001 )
                    {
                      v3->fields.mOldV0.fields.x = v32;
                      v3->fields.mOldV0.fields.y = v33;
                      v3->fields.mOldV0.fields.z = v34;
                      v3->fields.mOldV1.fields.x = v47.fields.x;
                      v3->fields.mOldV1.fields.y = v47.fields.y;
                      v3->fields.mMoved = 1;
                      v3->fields.mOldV1.fields.z = v47.fields.z;
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
    sub_1C32E7C(this);
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
  float x; // s9
  float y; // s8
  double v6; // d10
  double v7; // d0
  double v8; // d0
  double v9; // d1
  double v10; // d1
  int v11; // w23
  int32_t v12; // w8
  double v13; // d9
  double v14; // d0
  double v15; // d0
  double v16; // d1
  double v17; // d1
  int v18; // w21
  int32_t v19; // w8
  UnityEngine_GameObject_o *gameObject; // x19
  double iptr; // [xsp+8h] [xbp-48h] BYREF
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3C224 & 1) == 0 )
  {
    sub_1C32C20(&NGUITools_TypeInfo);
    byte_4C3C224 = 1;
  }
  cachedTransform = UIRect__get_cachedTransform((UIRect_o *)this, method);
  if ( !cachedTransform )
    sub_1C32E7C(0);
  localScale = UnityEngine_Transform__get_localScale(cachedTransform, 0);
  x = localScale.fields.x;
  y = localScale.fields.y;
  if ( !byte_4C32B16 )
  {
    sub_1C32C20(&System_Math_TypeInfo);
    byte_4C32B16 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v6 = x;
  v7 = modf(x, &iptr);
  if ( x >= 0.0 )
  {
    if ( v7 != 0.5 )
    {
      v8 = floor(v6 + 0.5);
      goto LABEL_18;
    }
    v8 = iptr;
    v9 = 1.0;
  }
  else
  {
    if ( v7 != -0.5 )
    {
      v8 = ceil(v6 + -0.5);
      goto LABEL_18;
    }
    v8 = iptr;
    v9 = -1.0;
  }
  v10 = v8 + v9;
  if ( ((__int64)v8 & 1) != 0 )
    v8 = v10;
LABEL_18:
  if ( v8 == INFINITY )
    v11 = 0x80000000;
  else
    v11 = (int)v8;
  if ( !byte_4C323E5 )
  {
    sub_1C32C20(&System_Math_TypeInfo);
    byte_4C323E5 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( v11 >= 0 )
    v12 = v11;
  else
    v12 = -v11;
  this->fields.mWidth = v12;
  if ( !byte_4C32B16 )
  {
    sub_1C32C20(&System_Math_TypeInfo);
    byte_4C32B16 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v13 = y;
  v14 = modf(y, &iptr);
  if ( y >= 0.0 )
  {
    if ( v14 != 0.5 )
    {
      v15 = floor(v13 + 0.5);
      goto LABEL_42;
    }
    v15 = iptr;
    v16 = 1.0;
  }
  else
  {
    if ( v14 != -0.5 )
    {
      v15 = ceil(v13 + -0.5);
      goto LABEL_42;
    }
    v15 = iptr;
    v16 = -1.0;
  }
  v17 = v15 + v16;
  if ( ((__int64)v15 & 1) != 0 )
    v15 = v17;
LABEL_42:
  if ( v15 == INFINITY )
    v18 = 0x80000000;
  else
    v18 = (int)v15;
  if ( !byte_4C323E5 )
  {
    sub_1C32C20(&System_Math_TypeInfo);
    byte_4C323E5 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( v18 >= 0 )
    v19 = v18;
  else
    v19 = -v18;
  this->fields.mHeight = v19;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__UpdateWidgetCollider_49305224(gameObject, 1, 0);
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
    sub_1C32E7C(0);
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

  if ( !byte_4C316D7 )
  {
    sub_1C32C20(&UnityEngine_Vector4_TypeInfo);
    byte_4C316D7 = 1;
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
  float x; // s3
  float mWidth; // s2
  float mHeight; // s1
  float v7; // s5
  float v8; // s4
  float v9; // s2
  float v10; // s0
  float v11; // s0
  float y; // s6
  float v13; // s3
  float v14; // s1
  float v15; // s1
  float z; // s7
  float v17; // s16
  bool v18; // nf
  float v19; // s7
  float w; // s5
  float v21; // s5
  UnityEngine_Vector4_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  PivotOffset = NGUIMath__GetPivotOffset(this->fields.mPivot, 0);
  x = this->fields.mDrawRegion.fields.x;
  mWidth = (float)this->fields.mWidth;
  mHeight = (float)this->fields.mHeight;
  v7 = (float)-PivotOffset.fields.x * mWidth;
  v8 = (float)-PivotOffset.fields.y * mHeight;
  v9 = v7 + mWidth;
  v10 = v7;
  if ( x != 0.0 )
  {
    v11 = fminf(x, 1.0);
    if ( x < 0.0 )
      v11 = 0.0;
    v10 = v7 + (float)((float)(v9 - v7) * v11);
  }
  y = this->fields.mDrawRegion.fields.y;
  v13 = v8 + mHeight;
  v14 = (float)-PivotOffset.fields.y * mHeight;
  if ( y != 0.0 )
  {
    v15 = fminf(y, 1.0);
    if ( y < 0.0 )
      v15 = 0.0;
    v14 = v8 + (float)((float)(v13 - v8) * v15);
  }
  z = this->fields.mDrawRegion.fields.z;
  if ( z != 1.0 )
  {
    v17 = fminf(z, 1.0);
    v18 = z < 0.0;
    v19 = 0.0;
    if ( !v18 )
      v19 = v17;
    v9 = v7 + (float)((float)(v9 - v7) * v19);
  }
  w = this->fields.mDrawRegion.fields.w;
  if ( w != 1.0 )
  {
    v18 = w < 0.0;
    v21 = fminf(w, 1.0);
    if ( v18 )
      v21 = 0.0;
    v13 = v8 + (float)((float)(v13 - v8) * v21);
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
  Il2CppObject *v4; // x20
  __int64 naturalAligment; // x10
  UnityEngine_Object_o *v6; // x0
  Il2CppObject *v8; // x19

  if ( (byte_4C3C213 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_BoxCollider_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_BoxCollider2D___);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3C213 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_Collider___);
  v4 = Component_object;
  if ( UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    if ( !Component_object )
      goto LABEL_8;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !v4 )
    {
LABEL_8:
      v6 = 0;
      goto LABEL_12;
    }
  }
  naturalAligment = UnityEngine_BoxCollider_TypeInfo->_2.naturalAligment;
  if ( v4->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    goto LABEL_8;
  if ( (UnityEngine_BoxCollider_c *)v4->klass->_2.typeHierarchy[naturalAligment - 1] == UnityEngine_BoxCollider_TypeInfo )
    v6 = (UnityEngine_Object_o *)v4;
  else
    v6 = 0;
LABEL_12:
  if ( UnityEngine_Object__op_Inequality(v6, 0, 0) )
    return 1;
  v8 = UnityEngine_Component__GetComponent_object_(
         (UnityEngine_Component_o *)this,
         (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_BoxCollider2D___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v8, 0, 0);
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
    sub_1C32E7C(this);
  return verts->fields.size > 0;
}


int32_t UIWidget__get_height(UIWidget_o *this, const MethodInfo *method)
{
  return this->fields.mHeight;
}


bool UIWidget__get_isVisible(UIWidget_o *this, const MethodInfo *method)
{
  if ( (byte_4C3C20E & 1) == 0 )
  {
    sub_1C32C20(&NGUITools_TypeInfo);
    byte_4C3C20E = 1;
  }
  if ( !this->fields.mIsVisibleByPanel
    || !this->fields.mIsVisibleByAlpha
    || !this->fields.mIsInFront
    || this->fields.finalAlpha <= 0.001 )
  {
    return 0;
  }
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  return NGUITools__GetActive((UnityEngine_Behaviour_o *)this, 0);
}


UnityEngine_Vector3_o UIWidget__get_localCenter(UIWidget_o *this, const MethodInfo *method)
{
  float32x2_t *v2; // x0
  unsigned __int64 v3; // d0
  float v4; // s2
  float v5; // s1
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  v2 = (float32x2_t *)((__int64 (__fastcall *)(UIWidget_o *, const MethodInfo *))this->klass->vtable._10_get_localCorners.methodPtr)(
                        this,
                        this->klass->vtable._10_get_localCorners.method);
  if ( !v2 )
    sub_1C32E7C(0);
  if ( v2[3].n64_u32[0] <= 2 )
    sub_1C32E84(v2);
  v3 = vadd_f32(v2[4], vmul_f32(vsub_f32(v2[7], v2[4]), (float32x2_t)0x3F0000003F000000LL)).n64_u64[0];
  v4 = v2[5].n64_f32[0] + (float)((float)(v2[8].n64_f32[0] - v2[5].n64_f32[0]) * 0.5);
  v5 = *((float *)&v3 + 1);
  result.fields.x = *(float *)&v3;
  result.fields.z = v4;
  result.fields.y = v5;
  return result;
}


UnityEngine_Vector3_array *UIWidget__get_localCorners(UIWidget_o *this, const MethodInfo *method)
{
  UnityEngine_Vector2_o v3; // x0
  UnityEngine_Vector2_o PivotOffset; // kr00_8
  struct UnityEngine_Vector3_array *mCorners; // x8
  int32_t mWidth; // s2
  int32_t mHeight; // s3
  float v8; // s1
  float v9; // s3
  float v10; // s2
  float v11; // s0
  struct UnityEngine_Vector3_array *v12; // x8
  float v13; // s3
  struct UnityEngine_Vector3_array *v14; // x8
  float v15; // s1
  struct UnityEngine_Vector3_array *v16; // x8

  PivotOffset = NGUIMath__GetPivotOffset(this->fields.mPivot, 0);
  mCorners = this->fields.mCorners;
  if ( !mCorners )
    goto LABEL_10;
  if ( !LODWORD(mCorners->max_length) )
    goto LABEL_11;
  mWidth = this->fields.mWidth;
  mHeight = this->fields.mHeight;
  mCorners->m_Items[0].fields.z = 0.0;
  v8 = (float)mWidth;
  v9 = (float)mHeight;
  v10 = (float)-PivotOffset.fields.x * (float)mWidth;
  v11 = (float)-PivotOffset.fields.y * v9;
  mCorners->m_Items[0].fields.x = v10;
  mCorners->m_Items[0].fields.y = v11;
  v12 = this->fields.mCorners;
  if ( !v12 )
    goto LABEL_10;
  if ( LODWORD(v12->max_length) <= 1 )
    goto LABEL_11;
  v13 = v11 + v9;
  v12->m_Items[1].fields.x = v10;
  v12->m_Items[1].fields.y = v13;
  v12->m_Items[1].fields.z = 0.0;
  v14 = this->fields.mCorners;
  if ( !v14 )
    goto LABEL_10;
  if ( LODWORD(v14->max_length) <= 2 )
    goto LABEL_11;
  v15 = v10 + v8;
  v14->m_Items[2].fields.x = v15;
  v14->m_Items[2].fields.y = v13;
  v14->m_Items[2].fields.z = 0.0;
  v16 = this->fields.mCorners;
  if ( !v16 )
LABEL_10:
    ((void (__fastcall __noreturn *)(_QWORD))sub_1C32E7C)(v3);
  if ( LODWORD(v16->max_length) <= 3 )
LABEL_11:
    ((void (__fastcall __noreturn *)(_QWORD))sub_1C32E84)(v3);
  v16->m_Items[3].fields.x = v15;
  v16->m_Items[3].fields.y = v11;
  v16->m_Items[3].fields.z = 0.0;
  return this->fields.mCorners;
}


UnityEngine_Vector2_o UIWidget__get_localSize(UIWidget_o *this, const MethodInfo *method)
{
  float32x2_t *v2; // x0
  unsigned __int64 v3; // d0
  float v4; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  v2 = (float32x2_t *)((__int64 (__fastcall *)(UIWidget_o *, const MethodInfo *))this->klass->vtable._10_get_localCorners.methodPtr)(
                        this,
                        this->klass->vtable._10_get_localCorners.method);
  if ( !v2 )
    sub_1C32E7C(0);
  if ( v2[3].n64_u32[0] <= 2 )
    sub_1C32E84(v2);
  v3 = vsub_f32(v2[7], v2[4]).n64_u64[0];
  v4 = *((float *)&v3 + 1);
  result.fields.x = *(float *)&v3;
  result.fields.y = v4;
  return result;
}


UnityEngine_Texture_o *UIWidget__get_mainTexture(UIWidget_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *v3; // x19
  _BOOL8 v4; // x0

  if ( (byte_4C3C211 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3C211 = 1;
  }
  v3 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UIWidget_o *, const MethodInfo *))this->klass->vtable._24_get_material.methodPtr)(
                                 this,
                                 this->klass->vtable._24_get_material.method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(v3, 0, 0);
  if ( !v4 )
    return 0;
  if ( !v3 )
    sub_1C32E7C(v4);
  return UnityEngine_Material__get_mainTexture((UnityEngine_Material_o *)v3, 0);
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
  int32_t mDepth; // w8
  struct UIPanel_o *v8; // x9

  if ( (byte_4C3C210 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3C210 = 1;
  }
  panel = (UnityEngine_Object_o *)this->fields.panel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(panel, 0, 0) )
    UIWidget__CreatePanel(this, v4);
  v5 = (UnityEngine_Object_o *)this->fields.panel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality(v5, 0, 0);
  mDepth = this->fields.mDepth;
  if ( v6 )
  {
    v8 = this->fields.panel;
    if ( !v8 )
      sub_1C32E7C(v6);
    mDepth += 1000 * v8->fields.mDepth;
  }
  return mDepth;
}


UnityEngine_Vector2_o UIWidget__get_relativeSize(UIWidget_o *this, const MethodInfo *method)
{
  struct UnityEngine_Vector2_StaticFields *static_fields; // x8
  float x; // s0
  float y; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( !byte_4C37DD6 )
  {
    sub_1C32C20(&UnityEngine_Vector2_TypeInfo);
    byte_4C37DD6 = 1;
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
  UnityEngine_Object_o *v3; // x19
  _BOOL8 v4; // x0

  if ( (byte_4C3C212 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3C212 = 1;
  }
  v3 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UIWidget_o *, const MethodInfo *))this->klass->vtable._24_get_material.methodPtr)(
                                 this,
                                 this->klass->vtable._24_get_material.method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(v3, 0, 0);
  if ( !v4 )
    return 0;
  if ( !v3 )
    sub_1C32E7C(v4);
  return UnityEngine_Material__get_shader((UnityEngine_Material_o *)v3, 0);
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
  UnityEngine_Vector3_o localCenter; // 0:s0.4,4:s1.4,8:s2.4

  cachedTransform = UIRect__get_cachedTransform((UIRect_o *)this, method);
  localCenter = UIWidget__get_localCenter(this, v4);
  if ( !cachedTransform )
    sub_1C32E7C(v5);
  return UnityEngine_Transform__TransformPoint(cachedTransform, localCenter, 0);
}


UnityEngine_Vector3_array *UIWidget__get_worldCorners(UIWidget_o *this, const MethodInfo *method)
{
  UnityEngine_Vector2_o PivotOffset; // kr00_8
  int32_t mHeight; // s10
  int32_t mWidth; // s11
  const MethodInfo *v6; // x1
  UnityEngine_Transform_o *cachedTransform; // x0
  float v8; // s11
  struct UnityEngine_Vector3_array *mCorners; // x21
  float v10; // s9
  float v11; // s10
  float v12; // s8
  UnityEngine_Transform_o *v13; // x20
  struct UnityEngine_Vector3_array *v14; // x21
  float v15; // s10
  struct UnityEngine_Vector3_array *v16; // x21
  float v17; // s9
  struct UnityEngine_Vector3_array *v18; // x21
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4

  PivotOffset = NGUIMath__GetPivotOffset(this->fields.mPivot, 0);
  mWidth = this->fields.mWidth;
  mHeight = this->fields.mHeight;
  cachedTransform = UIRect__get_cachedTransform((UIRect_o *)this, v6);
  if ( !cachedTransform )
    goto LABEL_11;
  v8 = (float)mWidth;
  mCorners = this->fields.mCorners;
  v10 = (float)-PivotOffset.fields.x * v8;
  v11 = (float)mHeight;
  v12 = (float)-PivotOffset.fields.y * v11;
  v13 = cachedTransform;
  v20 = UnityEngine_Transform__TransformPoint_71250240(cachedTransform, v10, v12, 0.0, 0);
  if ( !mCorners )
    goto LABEL_11;
  if ( !LODWORD(mCorners->max_length) )
    goto LABEL_12;
  mCorners->m_Items[0] = v20;
  v14 = this->fields.mCorners;
  v15 = v12 + v11;
  v21 = UnityEngine_Transform__TransformPoint_71250240(v13, v10, v15, 0.0, 0);
  if ( !v14 )
    goto LABEL_11;
  if ( LODWORD(v14->max_length) <= 1 )
    goto LABEL_12;
  v14->m_Items[1] = v21;
  v16 = this->fields.mCorners;
  v17 = v10 + v8;
  v22 = UnityEngine_Transform__TransformPoint_71250240(v13, v17, v15, 0.0, 0);
  if ( !v16 )
    goto LABEL_11;
  if ( LODWORD(v16->max_length) <= 2 )
    goto LABEL_12;
  v16->m_Items[2] = v22;
  v18 = this->fields.mCorners;
  v23 = UnityEngine_Transform__TransformPoint_71250240(v13, v17, v12, 0.0, 0);
  if ( !v18 )
LABEL_11:
    sub_1C32E7C(cachedTransform);
  if ( LODWORD(v18->max_length) <= 3 )
LABEL_12:
    sub_1C32E84(cachedTransform);
  v18->m_Items[3] = v23;
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


void UIWidget__set_depth(UIWidget_o *this, int32_t value, const MethodInfo *method)
{
  UnityEngine_Object_o *panel; // x21
  UIPanel_o *v6; // x0
  UnityEngine_Object_o *v7; // x20

  if ( (byte_4C3C20F & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Application_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3C20F = 1;
  }
  if ( this->fields.mDepth != value )
  {
    panel = (UnityEngine_Object_o *)this->fields.panel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(panel, 0, 0) )
    {
      v6 = this->fields.panel;
      if ( !v6 )
        goto LABEL_20;
      UIPanel__RemoveWidget(v6, this, 0);
    }
    this->fields.mDepth = value;
    v7 = (UnityEngine_Object_o *)this->fields.panel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v7, 0, 0) )
    {
      v6 = this->fields.panel;
      if ( v6 )
      {
        UIPanel__AddWidget(v6, this, 0);
        if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
        if ( UnityEngine_Application__get_isPlaying(0) )
          return;
        v6 = this->fields.panel;
        if ( v6 )
        {
          UIPanel__SortWidgets(v6, 0);
          v6 = this->fields.panel;
          if ( v6 )
          {
            UIPanel__RebuildAllDrawCalls(v6, 0);
            return;
          }
        }
      }
LABEL_20:
      sub_1C32E7C(v6);
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
  const MethodInfo *v7; // x3
  struct UIRect_AnchorPoint_o *bottomAnchor; // x8
  UnityEngine_Object_o *target; // x21
  struct UIRect_AnchorPoint_o *topAnchor; // x8
  UnityEngine_Object_o *v11; // x21
  unsigned int mPivot; // w8
  float v13; // s1
  int v14; // w8
  struct UIRect_AnchorPoint_o *v15; // x8
  UnityEngine_Object_o *v16; // x21
  bool v17; // w0
  int32_t mHeight; // w8
  float v19; // s3
  int v20; // w8
  signed int v21; // w8

  if ( (byte_4C3C20D & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3C20D = 1;
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
      UIWidget__SetDimensions(this, this->fields.mWidth, value, v7);
      return;
    }
    bottomAnchor = this->fields.bottomAnchor;
    if ( bottomAnchor )
    {
      target = (UnityEngine_Object_o *)bottomAnchor->fields.target;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v6 = UnityEngine_Object__op_Inequality(target, 0, 0);
      if ( (v6 & 1) != 0 )
      {
        topAnchor = this->fields.topAnchor;
        if ( !topAnchor )
          goto LABEL_33;
        v11 = (UnityEngine_Object_o *)topAnchor->fields.target;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v6 = UnityEngine_Object__op_Inequality(v11, 0, 0);
        if ( (v6 & 1) != 0 )
        {
          mPivot = this->fields.mPivot;
          if ( mPivot >= 3 )
          {
            if ( mPivot - 6 > 2 )
            {
              v21 = (value - this->fields.mHeight) & 0xFFFFFFFE;
              if ( !v21 )
                return;
              v19 = (float)v21 * 0.5;
              v13 = (float)-v21 * 0.5;
LABEL_30:
              NGUIMath__AdjustWidget(this, 0.0, v13, 0.0, v19, 0);
              return;
            }
            v13 = 0.0;
            v14 = value - this->fields.mHeight;
LABEL_26:
            v19 = (float)v14;
            goto LABEL_30;
          }
          v20 = this->fields.mHeight - value;
          goto LABEL_29;
        }
      }
      v15 = this->fields.bottomAnchor;
      if ( v15 )
      {
        v16 = (UnityEngine_Object_o *)v15->fields.target;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v17 = UnityEngine_Object__op_Inequality(v16, 0, 0);
        mHeight = this->fields.mHeight;
        if ( v17 )
        {
          v14 = value - mHeight;
          v13 = 0.0;
          goto LABEL_26;
        }
        v20 = mHeight - value;
LABEL_29:
        v13 = (float)v20;
        v19 = 0.0;
        goto LABEL_30;
      }
    }
LABEL_33:
    sub_1C32E7C(v6);
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
  v5 = (System_String_o *)sub_1C32C34(&StringLiteral_248/*" has no mainTexture setter"*/);
  v6 = System_String__Concat_63518544(v4, v5, 0);
  v7 = sub_1C32C34(&System_NotImplementedException_TypeInfo);
  v8 = (System_NotImplementedException_o *)sub_1C32E6C(v7);
  System_NotImplementedException___ctor_65047864(v8, v6, 0);
  v9 = sub_1C32C34(&Method_UIWidget_set_mainTexture__);
  sub_1C32D48(v8, v9);
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
  v5 = (System_String_o *)sub_1C32C34(&StringLiteral_249/*" has no material setter"*/);
  v6 = System_String__Concat_63518544(v4, v5, 0);
  v7 = sub_1C32C34(&System_NotImplementedException_TypeInfo);
  v8 = (System_NotImplementedException_o *)sub_1C32E6C(v7);
  System_NotImplementedException___ctor_65047864(v8, v6, 0);
  v9 = sub_1C32C34(&Method_UIWidget_set_material__);
  sub_1C32D48(v8, v9);
}


void UIWidget__set_onRender(UIWidget_o *this, UIDrawCall_OnRenderCallback_o *value, const MethodInfo *method)
{
  System_Delegate_o **p_mOnRender; // x21
  UnityEngine_Object_o *drawCall; // x22
  _BOOL8 v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct UIDrawCall_o *v10; // x22
  System_Delegate_o *v11; // x0
  CGThumbnailListItem_o *p_onRender; // x22
  System_Delegate_o *onRender; // t1
  System_Delegate_o *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Delegate_o *v17; // x8
  UIDrawCall_OnRenderCallback_c *v18; // x1
  UnityEngine_Object_o *v19; // x21
  struct UIDrawCall_o *v20; // x20
  CGThumbnailListItem_o *v21; // x20
  System_Delegate_o *v22; // t1
  System_Delegate_o *v23; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  UIDrawCall_OnRenderCallback_c *v26; // x1

  if ( (byte_4C3C20B & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&UIDrawCall_OnRenderCallback_TypeInfo);
    byte_4C3C20B = 1;
  }
  p_mOnRender = (System_Delegate_o **)&this->fields.mOnRender;
  if ( System_Delegate__op_Inequality((System_Delegate_o *)this->fields.mOnRender, (System_Delegate_o *)value, 0) )
  {
    drawCall = (UnityEngine_Object_o *)this->fields.drawCall;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality(drawCall, 0, 0);
    if ( v7 )
    {
      v10 = this->fields.drawCall;
      if ( !v10 )
        goto LABEL_27;
      onRender = (System_Delegate_o *)v10->fields.onRender;
      p_onRender = (CGThumbnailListItem_o *)&v10->fields.onRender;
      v11 = onRender;
      if ( onRender && *p_mOnRender )
      {
        v14 = System_Delegate__Remove(v11, *p_mOnRender, 0);
        v17 = v14;
        if ( v14 )
        {
          v18 = UIDrawCall_OnRenderCallback_TypeInfo;
          if ( (UIDrawCall_OnRenderCallback_c *)v14->klass != UIDrawCall_OnRenderCallback_TypeInfo )
            goto LABEL_23;
          p_onRender->klass = (CGThumbnailListItem_c *)v14;
          if ( (UIDrawCall_OnRenderCallback_c *)v14->klass != v18 )
            goto LABEL_23;
        }
        else
        {
          p_onRender->klass = 0;
        }
        sub_1C32BC4(p_onRender, (int32_t)v14, v15, v16);
      }
    }
    this->fields.mOnRender = value;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mOnRender, (int32_t)value, v8, v9);
    v19 = (UnityEngine_Object_o *)this->fields.drawCall;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality(v19, 0, 0);
    if ( v7 )
    {
      v20 = this->fields.drawCall;
      if ( v20 )
      {
        v22 = (System_Delegate_o *)v20->fields.onRender;
        v21 = (CGThumbnailListItem_o *)&v20->fields.onRender;
        v23 = System_Delegate__Combine(v22, (System_Delegate_o *)value, 0);
        v17 = v23;
        if ( v23 )
        {
          v26 = UIDrawCall_OnRenderCallback_TypeInfo;
          if ( (UIDrawCall_OnRenderCallback_c *)v23->klass != UIDrawCall_OnRenderCallback_TypeInfo
            || (v21->klass = (CGThumbnailListItem_c *)v23, (UIDrawCall_OnRenderCallback_c *)v23->klass != v26) )
          {
LABEL_23:
            sub_1C3313C(v17);
            return;
          }
        }
        else
        {
          v21->klass = 0;
        }
        sub_1C32BC4(v21, (int32_t)v23, v24, v25);
        return;
      }
LABEL_27:
      sub_1C32E7C(v7);
    }
  }
}


void UIWidget__set_pivot(UIWidget_o *this, int32_t value, const MethodInfo *method)
{
  UnityEngine_Transform_o *cachedTransform; // x0
  UIWidget_c *klass; // x8
  float v7; // s12
  float v8; // s13
  const MethodInfo *v9; // x1
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
  float v23; // s1
  __int64 v24; // x8
  float v25; // s0
  float v26; // s1
  float v27; // s10
  const MethodInfo *v28; // x1
  double v29; // d0
  double v30; // d0
  float v31; // s1
  __int64 v32; // x8
  float v33; // s0
  float v34; // s1
  float v35; // s9
  double iptr; // [xsp+48h] [xbp-18h] BYREF
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4

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
    v7 = *(float *)&cachedTransform[1].monitor;
    v8 = *((float *)&cachedTransform[1].monitor + 1);
    this->fields.mPivot = value;
    this->fields.mChanged = 1;
    cachedTransform = (UnityEngine_Transform_o *)((__int64 (__fastcall *)(UIWidget_o *, const MethodInfo *))klass->vtable._11_get_worldCorners.methodPtr)(
                                                   this,
                                                   klass->vtable._11_get_worldCorners.method);
    if ( !cachedTransform )
      goto LABEL_31;
    if ( !LODWORD(cachedTransform[1].klass) )
LABEL_32:
      sub_1C32E84(cachedTransform);
    v10 = *(float *)&cachedTransform[1].monitor;
    v11 = *((float *)&cachedTransform[1].monitor + 1);
    cachedTransform = UIRect__get_cachedTransform((UIRect_o *)this, v9);
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
      || (v39.fields.y = (float)(v8 - v11) + y,
          v39.fields.x = (float)(v7 - v10) + x,
          v39.fields.z = z,
          UnityEngine_Transform__set_position(cachedTransform, v39, 0),
          (cachedTransform = UIRect__get_cachedTransform((UIRect_o *)this, v18)) == 0) )
    {
LABEL_31:
      sub_1C32E7C(cachedTransform);
    }
    v40 = UnityEngine_Transform__get_localPosition(cachedTransform, 0);
    v19 = v40.fields.x;
    v20 = v40.fields.y;
    v21 = modf(v40.fields.x, &iptr);
    if ( v19 >= 0.0 )
    {
      if ( v21 != 0.5 )
      {
        v27 = floorf(v19 + 0.5);
        goto LABEL_19;
      }
      v22 = iptr;
      v23 = 1.0;
    }
    else
    {
      if ( v21 != -0.5 )
      {
        v27 = ceilf(v19 + -0.5);
        goto LABEL_19;
      }
      v22 = iptr;
      v23 = -1.0;
    }
    v24 = (__int64)v22;
    v25 = v22;
    v26 = v25 + v23;
    if ( (v24 & 1) != 0 )
      v27 = v26;
    else
      v27 = v25;
LABEL_19:
    v29 = modf(v20, &iptr);
    if ( v20 >= 0.0 )
    {
      if ( v29 != 0.5 )
      {
        v35 = floorf(v20 + 0.5);
        goto LABEL_29;
      }
      v30 = iptr;
      v31 = 1.0;
    }
    else
    {
      if ( v29 != -0.5 )
      {
        v35 = ceilf(v20 + -0.5);
        goto LABEL_29;
      }
      v30 = iptr;
      v31 = -1.0;
    }
    v32 = (__int64)v30;
    v33 = v30;
    v34 = v33 + v31;
    if ( (v32 & 1) != 0 )
      v35 = v34;
    else
      v35 = v33;
LABEL_29:
    cachedTransform = UIRect__get_cachedTransform((UIRect_o *)this, v28);
    if ( cachedTransform )
    {
      v41.fields.x = v27;
      v41.fields.y = v35;
      v41.fields.z = v16;
      UnityEngine_Transform__set_localPosition(cachedTransform, v41, 0);
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
  v5 = (System_String_o *)sub_1C32C34(&StringLiteral_250/*" has no shader setter"*/);
  v6 = System_String__Concat_63518544(v4, v5, 0);
  v7 = sub_1C32C34(&System_NotImplementedException_TypeInfo);
  v8 = (System_NotImplementedException_o *)sub_1C32E6C(v7);
  System_NotImplementedException___ctor_65047864(v8, v6, 0);
  v9 = sub_1C32C34(&Method_UIWidget_set_shader__);
  sub_1C32D48(v8, v9);
}


void UIWidget__set_width(UIWidget_o *this, int32_t value, const MethodInfo *method)
{
  int32_t v5; // w0
  __int64 v6; // x0
  const MethodInfo *v7; // x3
  struct UIRect_AnchorPoint_o *leftAnchor; // x8
  UnityEngine_Object_o *target; // x21
  struct UIRect_AnchorPoint_o *rightAnchor; // x8
  UnityEngine_Object_o *v11; // x21
  unsigned int mPivot; // w8
  int v13; // w8
  float v14; // s2
  int v15; // w8
  struct UIRect_AnchorPoint_o *v16; // x8
  UnityEngine_Object_o *v17; // x21
  bool v18; // w0
  int32_t mWidth; // w8
  int v20; // w8
  float v21; // s0
  signed int v22; // w8

  if ( (byte_4C3C20C & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3C20C = 1;
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
      UIWidget__SetDimensions(this, value, this->fields.mHeight, v7);
      return;
    }
    leftAnchor = this->fields.leftAnchor;
    if ( leftAnchor )
    {
      target = (UnityEngine_Object_o *)leftAnchor->fields.target;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v6 = UnityEngine_Object__op_Inequality(target, 0, 0);
      if ( (v6 & 1) != 0 )
      {
        rightAnchor = this->fields.rightAnchor;
        if ( !rightAnchor )
          goto LABEL_34;
        v11 = (UnityEngine_Object_o *)rightAnchor->fields.target;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v6 = UnityEngine_Object__op_Inequality(v11, 0, 0);
        if ( (v6 & 1) != 0 )
        {
          mPivot = this->fields.mPivot;
          if ( mPivot > 8 )
            goto LABEL_32;
          v13 = 1 << mPivot;
          if ( (v13 & 0x49) == 0 )
          {
            if ( (v13 & 0x124) != 0 )
            {
              v14 = 0.0;
              v15 = this->fields.mWidth - value;
LABEL_28:
              v21 = (float)v15;
              goto LABEL_31;
            }
LABEL_32:
            v22 = (value - this->fields.mWidth) & 0xFFFFFFFE;
            if ( !v22 )
              return;
            v14 = (float)v22 * 0.5;
            v21 = (float)-v22 * 0.5;
LABEL_31:
            NGUIMath__AdjustWidget(this, v21, 0.0, v14, 0.0, 0);
            return;
          }
          v21 = 0.0;
          v20 = value - this->fields.mWidth;
LABEL_30:
          v14 = (float)v20;
          goto LABEL_31;
        }
      }
      v16 = this->fields.leftAnchor;
      if ( v16 )
      {
        v17 = (UnityEngine_Object_o *)v16->fields.target;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v18 = UnityEngine_Object__op_Inequality(v17, 0, 0);
        mWidth = this->fields.mWidth;
        if ( !v18 )
        {
          v15 = mWidth - value;
          v14 = 0.0;
          goto LABEL_28;
        }
        v20 = value - mWidth;
        v21 = 0.0;
        goto LABEL_30;
      }
    }
LABEL_34:
    sub_1C32E7C(v6);
  }
}


void UIWidget_HitCheck___ctor(UIWidget_HitCheck_o *this, Il2CppObject *object, intptr_t method, const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C32CE0(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C32E98(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C32D48(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A7EEF8;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A7EE84;
}


System_IAsyncResult_o *UIWidget_HitCheck__BeginInvoke(
        UIWidget_HitCheck_o *this,
        UnityEngine_Vector3_o worldPos,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // x4
  __int64 v6; // x5
  __int64 v7; // x6
  __int64 v8; // x7
  _QWORD v13[2]; // [xsp+0h] [xbp-50h] BYREF
  UnityEngine_Vector3_o v14; // [xsp+10h] [xbp-40h] BYREF

  v14 = worldPos;
  if ( (byte_4C3C22A & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C22A = 1;
  }
  v13[1] = 0;
  v13[0] = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v14, object, method, v5, v6, v7, v8);
  return (System_IAsyncResult_o *)sub_1C32BD4(this, v13, callback, object);
}


bool UIWidget_HitCheck__EndInvoke(UIWidget_HitCheck_o *this, System_IAsyncResult_o *result, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x3

  v3 = sub_1C32BD8(result, 0, method);
  if ( !v3 )
    sub_1C32E7C(0);
  return *(_BYTE *)j_il2cpp_object_unbox_0(v3, v4, v5, v6);
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
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C32CE0(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C32E98(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C32D48(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A7EB90;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A7EB50;
}


System_IAsyncResult_o *UIWidget_OnDimensionsChanged__BeginInvoke(
        UIWidget_OnDimensionsChanged_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0;
  return (System_IAsyncResult_o *)sub_1C32BD4(this, &v5, callback, object);
}


void UIWidget_OnDimensionsChanged__EndInvoke(
        UIWidget_OnDimensionsChanged_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C32BD8(result, 0, method);
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
  intptr_t v4; // x8
  int v8; // w22
  __int64 (__fastcall *v9)(); // x8
  char v10; // w21
  char v11; // w0
  Il2CppObject *m_target; // x9
  __int64 v13; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C32CE0(method) & 1) != 0 )
  {
    if ( v8 == 5 )
    {
      v9 = sub_1A7EC4C;
LABEL_16:
      this->fields.invoke_impl = (intptr_t)v9;
      goto LABEL_17;
    }
  }
  else
  {
    if ( v8 == 4 )
    {
      if ( this->fields.method_is_virtual )
      {
        v10 = sub_1C32CD8(method);
        v11 = sub_1C33194(method);
        if ( (v10 & 1) != 0 )
        {
          if ( (v11 & 1) != 0 )
            v9 = sub_1A7EDC8;
          else
            v9 = sub_1A7ED5C;
        }
        else if ( (v11 & 1) != 0 )
        {
          v9 = sub_1A7ECA8;
        }
        else
        {
          v9 = sub_1A7EC6C;
        }
      }
      else
      {
        v9 = sub_1A7EC1C;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v13 = sub_1C32E98(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C32D48(v13, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_17:
  this->fields.extra_arg = (intptr_t)sub_1A7EBA4;
}


// local variable allocation has failed, the output may be wrong!
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
  _QWORD v17[6]; // [xsp+8h] [xbp-88h] BYREF
  int32_t v18; // [xsp+3Ch] [xbp-54h] BYREF

  v18 = bufferOffset;
  if ( (byte_4C3C229 & 1) == 0 )
  {
    sub_1C32C20(&int_TypeInfo);
    byte_4C3C229 = 1;
  }
  v17[5] = 0;
  v17[0] = widget;
  v17[1] = j_il2cpp_value_box_0(int_TypeInfo, &v18, *(_QWORD *)&bufferOffset, verts, uvs, cols, callback, object);
  v17[2] = verts;
  v17[3] = uvs;
  v17[4] = cols;
  return (System_IAsyncResult_o *)sub_1C32BD4(this, v17, callback, object);
}


void UIWidget_OnPostFillCallback__EndInvoke(
        UIWidget_OnPostFillCallback_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C32BD8(result, 0, method);
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