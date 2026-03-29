void UIWidget___ctor(UIWidget_o *this, const MethodInfo *method)
{
  UIGeometry_o *v8; // x20
  const MethodInfo *v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  struct UnityEngine_Vector3_array *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  const MethodInfo *v23; // x1

  if ( (byte_4D352A4 & 1) == 0 )
  {
    sub_1C93AD4(&UIGeometry_TypeInfo);
    sub_1C93AD4(&UIRect_TypeInfo);
    sub_1C93AD4(&UnityEngine_Vector3___TypeInfo);
    byte_4D352A4 = 1;
  }
  __asm { FMOV            V0.4S, #1.0 }
  this->fields.mColor = _Q0;
  this->fields.mHeight = 100;
  *(_QWORD *)&this->fields.mPivot = 0x6400000004LL;
  this->fields.aspectRatio = 1.0;
  v8 = (UIGeometry_o *)sub_1C93D20(UIGeometry_TypeInfo);
  UIGeometry___ctor(v8, v9);
  this->fields.geometry = v8;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.geometry, (int32_t)v8, v10, v11, v12, v13, v14, v15);
  *(_WORD *)&this->fields.fillGeometry = 257;
  *(_WORD *)&this->fields.mIsVisibleByAlpha = 257;
  this->fields.mDrawRegion = (struct UnityEngine_Vector4_o)xmmword_D00630;
  this->fields.mIsInFront = 1;
  v16 = (struct UnityEngine_Vector3_array *)sub_1C93B7C(UnityEngine_Vector3___TypeInfo, 4);
  this->fields.mCorners = v16;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mCorners, (int32_t)v16, v17, v18, v19, v20, v21, v22);
  *(_QWORD *)&this->fields.mAlphaFrameID = -1;
  if ( !UIRect_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIRect_TypeInfo);
  UIRect___ctor((UIRect_o *)this, v23);
}


void UIWidget__Awake(UIWidget_o *this, const MethodInfo *method)
{
  struct UnityEngine_GameObject_o *gameObject; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D3529F & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Application_TypeInfo);
    byte_4D3529F = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  this->fields.mGo = gameObject;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mGo, (int32_t)gameObject, v4, v5, v6, v7, v8, v9);
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

  result = UIWidget__CalculateBounds_50151560(&v7, this, 0, v3);
  v6 = *(_OWORD *)&v7.fields.m_Center.fields.x;
  *(_QWORD *)&retstr->fields.m_Extents.fields.y = *(_QWORD *)&v7.fields.m_Extents.fields.y;
  *(_OWORD *)&retstr->fields.m_Center.fields.x = v6;
  return result;
}


UnityEngine_Bounds_o *UIWidget__CalculateBounds_50151560(
        UnityEngine_Bounds_o *__return_ptr retstr,
        UIWidget_o *this,
        UnityEngine_Transform_o *relativeParent,
        const MethodInfo *method)
{
  UnityEngine_Bounds_o *result; // x0
  __int64 v8; // x1
  unsigned int x_low; // w9
  UnityEngine_Bounds_o *v10; // x20
  float32x2_t v11; // d0
  float y; // s8
  __int64 v13; // x8
  unsigned int v14; // w9
  float32x2_t *static_fields; // x10
  float32x2_t v16; // d10
  float v17; // s9
  float v18; // s6
  int8x8_t v19; // d5
  float v20; // s3
  int8x8_t v21; // d2
  int8x8_t v22; // d4
  int8x8_t v23; // d16
  int8x8_t v24; // d17
  float32x2_t v25; // d2
  float32x2_t v26; // d4
  float v27; // s5
  UnityEngine_Bounds_o *v28; // x20
  float *p_y; // x21
  unsigned __int64 v30; // x22
  float32x2_t *v31; // x8
  float v32; // t1
  float v33; // s4
  int8x8_t v34; // d3
  int8x8_t v35; // d5
  int8x8_t v36; // d1
  float32x2_t v37; // d1
  float32x2_t v38; // d0
  float v39; // s1
  float z; // s2
  unsigned __int64 v41; // [xsp+10h] [xbp-F0h]
  float32x2_t v42; // [xsp+10h] [xbp-F0h]
  UnityEngine_Matrix4x4_o v43; // [xsp+20h] [xbp-E0h] BYREF
  UnityEngine_Matrix4x4_o v44; // [xsp+60h] [xbp-A0h] BYREF
  UnityEngine_Vector3_o v45; // 0:kr00_12.12
  UnityEngine_Vector3_o v46; // 0:kr14_12.12
  UnityEngine_Vector3_o v47; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D35298 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D35298 = 1;
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
      v10 = result;
      if ( x_low )
      {
        v11.n64_u64[0] = *(unsigned __int64 *)&result[1].fields.m_Center.fields.z;
        y = result[1].fields.m_Extents.fields.y;
        if ( !byte_4D2A139 )
        {
          v41 = *(_QWORD *)&result[1].fields.m_Center.fields.z;
          result = (UnityEngine_Bounds_o *)sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
          byte_4D2A139 = 1;
          v11.n64_u64[0] = v41;
          x_low = LODWORD(v10[1].fields.m_Center.fields.x);
        }
        if ( x_low <= 1 )
          x_low = 1;
        v13 = 0;
        v14 = x_low - 1;
        static_fields = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
        v16.n64_u64[0] = vmul_f32((float32x2_t)static_fields->n64_u64[0], (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
        v17 = static_fields[1].n64_f32[0] * 0.5;
        while ( v14 > 2 )
        {
          v18 = *(float *)((char *)&v10[2].fields.m_Center.fields.y + v13);
          v19.n64_u64[0] = *(unsigned __int64 *)((char *)&v10[1].fields.m_Extents.fields.z + v13);
          v20 = y - v17;
          v21.n64_u64[0] = vsub_f32(v11, v16).n64_u64[0];
          v22.n64_u64[0] = vadd_f32(v11, v16).n64_u64[0];
          v23.n64_u64[0] = vcgt_f32(v19, v21).n64_u64[0];
          v24.n64_u64[0] = vcgt_f32(v22, v19).n64_u64[0];
          if ( (float)(y - v17) >= v18 )
            v20 = *(float *)((char *)&v10[2].fields.m_Center.fields.y + v13);
          v25.n64_u64[0] = vbsl_s8(v23, v21, v19).n64_u64[0];
          v26.n64_u64[0] = vbsl_s8(v24, v22, v19).n64_u64[0];
          if ( (float)(y + v17) <= v18 )
            v27 = *(float *)((char *)&v10[2].fields.m_Center.fields.y + v13);
          else
            v27 = y + v17;
          v13 += 12;
          v16.n64_u64[0] = vmul_f32(vsub_f32(v26, v25), (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
          v17 = (float)(v27 - v20) * 0.5;
          v11.n64_u64[0] = vadd_f32(v25, v16).n64_u64[0];
          y = v20 + v17;
          if ( v13 == 36 )
            goto LABEL_33;
        }
      }
LABEL_34:
      sub_1C93D34(result);
    }
LABEL_35:
    sub_1C93D2C(result, v8);
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
  v28 = result;
  if ( !LODWORD(result[1].fields.m_Center.fields.x) )
    goto LABEL_34;
  v45 = UnityEngine_Matrix4x4__MultiplyPoint3x4(&v44, *(UnityEngine_Vector3_o *)&result[1].fields.m_Center.fields.z, 0);
  v11.n64_u32[0] = LODWORD(v45.fields.x);
  v39 = v45.fields.y;
  y = v45.fields.z;
  if ( !byte_4D2A139 )
  {
    result = (UnityEngine_Bounds_o *)sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    v39 = v45.fields.y;
    v11.n64_u32[0] = LODWORD(v45.fields.x);
    byte_4D2A139 = 1;
  }
  v11.n64_f32[1] = v39;
  p_y = &v28[2].fields.m_Center.fields.y;
  v30 = 1;
  v31 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v16.n64_u64[0] = vmul_f32((float32x2_t)v31->n64_u64[0], (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
  v17 = v31[1].n64_f32[0] * 0.5;
  do
  {
    v42.n64_u64[0] = v11.n64_u64[0];
    if ( v30 >= LODWORD(v28[1].fields.m_Center.fields.x) )
      goto LABEL_34;
    v47.fields.x = *(p_y - 2);
    v47.fields.y = *(p_y - 1);
    v32 = *p_y;
    p_y += 3;
    v47.fields.z = v32;
    v46 = UnityEngine_Matrix4x4__MultiplyPoint3x4(&v44, v47, 0);
    z = v46.fields.z;
    v33 = y - v17;
    v34.n64_u64[0] = vsub_f32(v42, v16).n64_u64[0];
    v35.n64_u64[0] = vadd_f32(v42, v16).n64_u64[0];
    v36.n64_u64[0] = vcgt_f32(*(float32x2_t *)&v46.fields.x, v34).n64_u64[0];
    if ( (float)(y - v17) >= v46.fields.z )
      v33 = v46.fields.z;
    v37.n64_u64[0] = vbsl_s8(v36, v34, *(int8x8_t *)&v46.fields.x).n64_u64[0];
    v38.n64_u64[0] = vbsl_s8(vcgt_f32(v35, *(float32x2_t *)&v46.fields.x), v35, *(int8x8_t *)&v46.fields.x).n64_u64[0];
    if ( (float)(y + v17) > v46.fields.z )
      z = y + v17;
    ++v30;
    v16.n64_u64[0] = vmul_f32(vsub_f32(v38, v37), (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
    v17 = (float)(z - v33) * 0.5;
    v11.n64_u64[0] = vadd_f32(v37, v16).n64_u64[0];
    y = v33 + v17;
  }
  while ( v30 != 4 );
LABEL_33:
  *(float32x2_t *)&retstr->fields.m_Center.fields.x = v11;
  retstr->fields.m_Center.fields.z = y;
  *(float32x2_t *)&retstr->fields.m_Extents.fields.x = v16;
  retstr->fields.m_Extents.fields.z = v17;
  return result;
}


// local variable allocation has failed, the output may be wrong!
float UIWidget__CalculateCumulativeAlpha(UIWidget_o *this, int32_t frameID, const MethodInfo *method)
{
  UnityEngine_Object_o *parent; // x21
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_4D35293 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D35293 = 1;
  }
  parent = (UnityEngine_Object_o *)UIRect__get_parent((UIRect_o *)this, *(const MethodInfo **)&frameID);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality(parent, 0, 0);
  if ( !v6 )
    return this->fields.mColor.fields.a;
  if ( !parent )
    sub_1C93D2C(v6, v7);
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

  if ( (byte_4D3529D & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D3529D = 1;
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
    sub_1C93D2C(gameObject, v4);
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
  __int64 v10; // x1
  int32_t layer; // w22
  UIPanel_o *_49843268; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  UnityEngine_Object_o *v19; // x20
  const MethodInfo *v20; // x1

  if ( (byte_4D3529C & 1) == 0 )
  {
    sub_1C93AD4(&NGUITools_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&UIPanel_TypeInfo);
    byte_4D3529C = 1;
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
      if ( NGUITools__GetActive_50071416(gameObject, 0) )
      {
        cachedTransform = UIRect__get_cachedTransform((UIRect_o *)this, v6);
        cachedGameObject = UIRect__get_cachedGameObject((UIRect_o *)this, v8);
        if ( !cachedGameObject )
          goto LABEL_20;
        layer = UnityEngine_GameObject__get_layer(cachedGameObject, 0);
        if ( !UIPanel_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UIPanel_TypeInfo);
        _49843268 = UIPanel__Find_49843268(cachedTransform, 1, layer, 0);
        *p_panel = _49843268;
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&this->fields.panel,
          (int32_t)_49843268,
          v13,
          v14,
          v15,
          v16,
          v17,
          v18);
        v19 = (UnityEngine_Object_o *)*p_panel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v19, 0, 0) )
        {
          cachedGameObject = (UnityEngine_GameObject_o *)this->fields.panel;
          this->fields.mParentFound = 0;
          if ( cachedGameObject )
          {
            UIPanel__AddWidget((UIPanel_o *)cachedGameObject, this, 0);
            UIWidget__CheckLayer(this, v20);
            ((void (__fastcall *)(UIWidget_o *, __int64, const MethodInfo *))this->klass->vtable._12_Invalidate.methodPtr)(
              this,
              1,
              this->klass->vtable._12_Invalidate.method);
            return this->fields.panel;
          }
LABEL_20:
          sub_1C93D2C(cachedGameObject, v10);
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
  if ( (byte_4D35296 & 1) == 0 )
  {
    left = (UIWidget_o *)sub_1C93AD4(&UIPanel_TypeInfo);
    byte_4D35296 = 1;
  }
  if ( !v4 || !right )
    sub_1C93D2C(left, right);
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
  UnityEngine_Vector2_o PivotOffset; // kr50_8
  int32_t mHeight; // s10
  int32_t mWidth; // s11
  const MethodInfo *v8; // x1
  UnityEngine_Transform_o *cachedTransform; // x0
  __int64 v10; // x1
  float v11; // s8
  float v12; // s12
  float v13; // s11
  struct UnityEngine_Vector3_array *mCorners; // x22
  float v15; // s10
  UnityEngine_Transform_o *v16; // x21
  float v17; // s12
  struct UnityEngine_Vector3_array *v18; // x22
  float v19; // s10
  struct UnityEngine_Vector3_array *v20; // x22
  struct UnityEngine_Vector3_array *v21; // x22
  __int64 v22; // x21
  unsigned __int64 v23; // x22
  struct UnityEngine_Vector3_array *v24; // x23
  char *v25; // x24
  UnityEngine_Vector3_o v27; // 0:kr00_12.12
  UnityEngine_Vector3_o v28; // 0:kr14_12.12
  UnityEngine_Vector3_o v29; // 0:kr20_12.12
  UnityEngine_Vector3_o v30; // 0:kr34_12.12
  UnityEngine_Vector3_o v31; // 0:kr40_12.12

  if ( (byte_4D35290 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D35290 = 1;
  }
  PivotOffset = NGUIMath__GetPivotOffset(this->fields.mPivot, 0);
  mWidth = this->fields.mWidth;
  mHeight = this->fields.mHeight;
  cachedTransform = UIRect__get_cachedTransform((UIRect_o *)this, v8);
  if ( !cachedTransform )
    goto LABEL_22;
  v11 = (float)-PivotOffset.fields.y * (float)mHeight;
  v12 = (float)mWidth;
  v13 = v11 + (float)mHeight;
  mCorners = this->fields.mCorners;
  v15 = (float)-PivotOffset.fields.x * v12;
  v16 = cachedTransform;
  v27 = UnityEngine_Transform__TransformPoint_72146688(cachedTransform, v15, (float)(v11 + v13) * 0.5, 0.0, 0);
  if ( !mCorners )
    goto LABEL_22;
  if ( !LODWORD(mCorners->max_length) )
    goto LABEL_23;
  mCorners->m_Items[0] = v27;
  v17 = v15 + v12;
  v18 = this->fields.mCorners;
  v19 = (float)(v15 + v17) * 0.5;
  v28 = UnityEngine_Transform__TransformPoint_72146688(v16, v19, v13, 0.0, 0);
  if ( !v18 )
    goto LABEL_22;
  if ( LODWORD(v18->max_length) <= 1 )
    goto LABEL_23;
  v18->m_Items[1] = v28;
  v20 = this->fields.mCorners;
  v29 = UnityEngine_Transform__TransformPoint_72146688(v16, v17, (float)(v11 + v13) * 0.5, 0.0, 0);
  if ( !v20 )
    goto LABEL_22;
  if ( LODWORD(v20->max_length) <= 2 )
    goto LABEL_23;
  v20->m_Items[2] = v29;
  v21 = this->fields.mCorners;
  v30 = UnityEngine_Transform__TransformPoint_72146688(v16, v19, v11, 0.0, 0);
  if ( !v21 )
    goto LABEL_22;
  if ( LODWORD(v21->max_length) <= 3 )
LABEL_23:
    sub_1C93D34(cachedTransform);
  v21->m_Items[3] = v30;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    sub_1C93D2C(cachedTransform, v10);
  }
  return this->fields.mCorners;
}


void UIWidget__Invalidate(UIWidget_o *this, bool includeChildren, const MethodInfo *method)
{
  UnityEngine_Object_o *panel; // x21
  __int64 v6; // x1
  UIPanel_o *v7; // x0
  bool IsVisible_49831600; // w21
  int32_t frameCount; // w0
  const MethodInfo *v10; // x2
  _BOOL4 v11; // w8
  _BOOL4 v12; // w9
  int32_t v13; // w0
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x2

  if ( (byte_4D35292 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D35292 = 1;
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
      v7 = this->fields.panel;
      if ( !v7 )
        goto LABEL_18;
      if ( !UIPanel__get_hasCumulativeClipping(v7, 0) )
      {
        IsVisible_49831600 = 1;
LABEL_11:
        frameCount = UnityEngine_Time__get_frameCount(0);
        v11 = UIWidget__CalculateCumulativeAlpha(this, frameCount, v10) > 0.001;
        v12 = IsVisible_49831600;
        if ( this->fields.mIsVisibleByAlpha != v11 || this->fields.mIsVisibleByPanel != v12 )
        {
          this->fields.mIsVisibleByAlpha = v11;
          this->fields.mChanged = 1;
          this->fields.mIsVisibleByPanel = v12;
        }
        v13 = UnityEngine_Time__get_frameCount(0);
        UIWidget__UpdateFinalAlpha(this, v13, v14);
        if ( includeChildren )
          UIRect__Invalidate((UIRect_o *)this, 1, v15);
        return;
      }
    }
    v7 = this->fields.panel;
    if ( v7 )
    {
      IsVisible_49831600 = UIPanel__IsVisible_49831600(v7, this, 0);
      goto LABEL_11;
    }
LABEL_18:
    sub_1C93D2C(v7, v6);
  }
}


void UIWidget__MakePixelPerfect(UIWidget_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *cachedTransform; // x0
  __int64 v4; // x1
  double v5; // d0
  double v6; // d0
  float v7; // s1
  __int64 v8; // x8
  float v9; // s0
  float v10; // s1
  float v11; // s9
  double v12; // d0
  double v13; // d0
  float v14; // s1
  __int64 v15; // x8
  float v16; // s0
  float v17; // s1
  float v18; // s10
  const MethodInfo *v19; // x1
  double v20; // d0
  double v21; // d0
  float v22; // s1
  __int64 v23; // x8
  float v24; // s0
  float v25; // s1
  float v26; // s8
  const MethodInfo *v27; // x1
  const MethodInfo *v28; // x1
  unsigned __int64 localScale; // kr20_8
  double iptr; // [xsp+8h] [xbp-28h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:kr00_12.12
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4

  cachedTransform = UIRect__get_cachedTransform((UIRect_o *)this, method);
  if ( !cachedTransform )
LABEL_41:
    sub_1C93D2C(cachedTransform, v4);
  localPosition = UnityEngine_Transform__get_localPosition(cachedTransform, 0);
  v5 = modf(localPosition.fields.z, &iptr);
  if ( localPosition.fields.z >= 0.0 )
  {
    if ( v5 != 0.5 )
    {
      v11 = floorf(localPosition.fields.z + 0.5);
      goto LABEL_12;
    }
    v6 = iptr;
    v7 = 1.0;
  }
  else
  {
    if ( v5 != -0.5 )
    {
      v11 = ceilf(localPosition.fields.z + -0.5);
      goto LABEL_12;
    }
    v6 = iptr;
    v7 = -1.0;
  }
  v8 = (__int64)v6;
  v9 = v6;
  v10 = v9 + v7;
  if ( (v8 & 1) != 0 )
    v11 = v10;
  else
    v11 = v9;
LABEL_12:
  v12 = modf(localPosition.fields.x, &iptr);
  if ( localPosition.fields.x >= 0.0 )
  {
    if ( v12 != 0.5 )
    {
      v18 = floorf(localPosition.fields.x + 0.5);
      goto LABEL_22;
    }
    v13 = iptr;
    v14 = 1.0;
  }
  else
  {
    if ( v12 != -0.5 )
    {
      v18 = ceilf(localPosition.fields.x + -0.5);
      goto LABEL_22;
    }
    v13 = iptr;
    v14 = -1.0;
  }
  v15 = (__int64)v13;
  v16 = v13;
  v17 = v16 + v14;
  if ( (v15 & 1) != 0 )
    v18 = v17;
  else
    v18 = v16;
LABEL_22:
  v20 = modf(localPosition.fields.y, &iptr);
  if ( localPosition.fields.y >= 0.0 )
  {
    if ( v20 != 0.5 )
    {
      v26 = floorf(localPosition.fields.y + 0.5);
      goto LABEL_32;
    }
    v21 = iptr;
    v22 = 1.0;
  }
  else
  {
    if ( v20 != -0.5 )
    {
      v26 = ceilf(localPosition.fields.y + -0.5);
      goto LABEL_32;
    }
    v21 = iptr;
    v22 = -1.0;
  }
  v23 = (__int64)v21;
  v24 = v21;
  v25 = v24 + v22;
  if ( (v23 & 1) != 0 )
    v26 = v25;
  else
    v26 = v24;
LABEL_32:
  cachedTransform = UIRect__get_cachedTransform((UIRect_o *)this, v19);
  if ( !cachedTransform )
    goto LABEL_41;
  v33.fields.x = v18;
  v33.fields.y = v26;
  v33.fields.z = v11;
  UnityEngine_Transform__set_localPosition(cachedTransform, v33, 0);
  cachedTransform = UIRect__get_cachedTransform((UIRect_o *)this, v27);
  if ( !cachedTransform )
    goto LABEL_41;
  localScale = (unsigned __int64)UnityEngine_Transform__get_localScale(cachedTransform, 0);
  cachedTransform = UIRect__get_cachedTransform((UIRect_o *)this, v28);
  if ( !cachedTransform )
    goto LABEL_41;
  v34.fields.x = -1.0;
  if ( *((float *)&localScale + 1) < 0.0 )
    v34.fields.y = -1.0;
  else
    v34.fields.y = 1.0;
  if ( *(float *)&localScale >= 0.0 )
    v34.fields.x = 1.0;
  v34.fields.z = 1.0;
  UnityEngine_Transform__set_localScale(cachedTransform, v34, 0);
}


void UIWidget__MarkAsChanged(UIWidget_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *panel; // x20
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1

  if ( (byte_4D3529B & 1) == 0 )
  {
    sub_1C93AD4(&NGUITools_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D3529B = 1;
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
      if ( NGUITools__GetActive_50071416(gameObject, 0) && !this->fields.mPlayMode )
      {
        UIWidget__SetDirty(this, v5);
        UIWidget__CheckLayer(this, v6);
      }
    }
  }
}


void UIWidget__OnAnchor(UIWidget_o *this, const MethodInfo *method)
{
  void *cachedTransform; // x0
  __int64 v4; // x1
  UnityEngine_Transform_o *v5; // x21
  UnityEngine_Transform_o *parent; // x20
  UnityEngine_Vector2_o PivotOffset; // kr10_8
  struct UIRect_AnchorPoint_o *leftAnchor; // x8
  struct UIRect_AnchorPoint_o *bottomAnchor; // x9
  UnityEngine_Object_o *target; // x21
  UnityEngine_Object_o *v11; // x22
  struct UIRect_AnchorPoint_o *v12; // x8
  struct UIRect_AnchorPoint_o *rightAnchor; // x9
  UnityEngine_Object_o *v14; // x21
  UnityEngine_Object_o *v15; // x22
  struct UIRect_AnchorPoint_o *v16; // x8
  struct UIRect_AnchorPoint_o *topAnchor; // x9
  UnityEngine_Object_o *v18; // x21
  UnityEngine_Object_o *v19; // x22
  const MethodInfo *v20; // x2
  const MethodInfo *v21; // x3
  float *v22; // x21
  struct UIRect_AnchorPoint_o *v23; // x8
  float v24; // s0
  struct UIRect_AnchorPoint_o *v25; // x8
  struct UIRect_AnchorPoint_o *v26; // x9
  float v27; // s13
  int v28; // s8
  float v29; // s0
  struct UIRect_AnchorPoint_o *v30; // x8
  struct UIRect_AnchorPoint_o *v31; // x9
  float v32; // s14
  int v33; // s10
  float v34; // s0
  struct UIRect_AnchorPoint_o *v35; // x8
  struct UIRect_AnchorPoint_o *v36; // x9
  float v37; // s15
  float v38; // s9
  int v39; // s13
  float v40; // s0
  struct UIRect_AnchorPoint_o *v41; // x8
  int v42; // s4
  float v43; // s3
  char v44; // w8
  float v45; // s13
  float v46; // s8
  float v47; // s14
  float v48; // s10
  struct UIRect_AnchorPoint_o *v49; // x8
  UnityEngine_Object_o *v50; // x21
  const MethodInfo *v51; // x2
  const MethodInfo *v52; // x3
  struct UIRect_AnchorPoint_o *v53; // x8
  float v54; // s0
  struct UIRect_AnchorPoint_o *v55; // x8
  struct UIRect_AnchorPoint_o *v56; // x8
  UnityEngine_Object_o *v57; // x21
  const MethodInfo *v58; // x2
  const MethodInfo *v59; // x3
  struct UIRect_AnchorPoint_o *v60; // x8
  float v61; // s0
  struct UIRect_AnchorPoint_o *v62; // x8
  struct UIRect_AnchorPoint_o *v63; // x8
  UnityEngine_Object_o *v64; // x21
  const MethodInfo *v65; // x2
  const MethodInfo *v66; // x3
  struct UIRect_AnchorPoint_o *v67; // x8
  float v68; // s0
  struct UIRect_AnchorPoint_o *v69; // x8
  struct UIRect_AnchorPoint_o *v70; // x8
  struct UIRect_AnchorPoint_o *v71; // x8
  UnityEngine_Object_o *v72; // x21
  const MethodInfo *v73; // x2
  const MethodInfo *v74; // x3
  struct UIRect_AnchorPoint_o *v75; // x8
  float v76; // s0
  struct UIRect_AnchorPoint_o *v77; // x8
  float mHeight; // s0
  float v79; // s1
  struct UIRect_AnchorPoint_o *v80; // x8
  float v81; // s2
  float v82; // s15
  float v83; // s8
  float v84; // s0
  float v85; // s12
  float v86; // s11
  int v87; // w8
  unsigned int v88; // w9
  float v89; // s10
  int32_t v90; // w20
  float v91; // s11
  int32_t keepAspectRatio; // w8
  unsigned int v93; // w10
  int32_t v94; // w21
  float aspectRatio; // s11
  float v96; // s9
  double v97; // d11
  double v98; // d0
  double v99; // d0
  double v100; // d1
  float v101; // s9
  double v102; // d11
  double v103; // d0
  double v104; // d0
  double v105; // d1
  double v106; // d1
  double v107; // d1
  struct UIRect_AnchorPoint_o *v108; // x10
  struct UIRect_AnchorPoint_o *v109; // x11
  struct UIRect_AnchorPoint_o *v110; // x9
  struct UIRect_AnchorPoint_o *v111; // x8
  float absolute; // s3
  float v113; // s8
  float v114; // s10
  const MethodInfo *v115; // x1
  _BOOL4 mIsInFront; // w8
  float y; // s1
  double iptr; // [xsp+18h] [xbp-78h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:kr00_12.12
  UnityEngine_Vector3_o LocalPos; // 0:kr54_12.12
  UnityEngine_Vector3_o v121; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D352A1 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D352A1 = 1;
  }
  cachedTransform = UIRect__get_cachedTransform((UIRect_o *)this, method);
  if ( !cachedTransform )
    goto LABEL_166;
  v5 = (UnityEngine_Transform_o *)cachedTransform;
  parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)cachedTransform, 0);
  localPosition = UnityEngine_Transform__get_localPosition(v5, 0);
  PivotOffset = NGUIMath__GetPivotOffset(this->fields.mPivot, 0);
  leftAnchor = this->fields.leftAnchor;
  if ( !leftAnchor )
    goto LABEL_166;
  bottomAnchor = this->fields.bottomAnchor;
  if ( !bottomAnchor )
    goto LABEL_166;
  target = (UnityEngine_Object_o *)leftAnchor->fields.target;
  v11 = (UnityEngine_Object_o *)bottomAnchor->fields.target;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  cachedTransform = (void *)UnityEngine_Object__op_Equality(target, v11, 0);
  if ( ((unsigned __int8)cachedTransform & 1) != 0 )
  {
    v12 = this->fields.leftAnchor;
    if ( !v12 )
      goto LABEL_166;
    rightAnchor = this->fields.rightAnchor;
    if ( !rightAnchor )
      goto LABEL_166;
    v14 = (UnityEngine_Object_o *)v12->fields.target;
    v15 = (UnityEngine_Object_o *)rightAnchor->fields.target;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    cachedTransform = (void *)UnityEngine_Object__op_Equality(v14, v15, 0);
    if ( ((unsigned __int8)cachedTransform & 1) != 0 )
    {
      v16 = this->fields.leftAnchor;
      if ( !v16 )
        goto LABEL_166;
      topAnchor = this->fields.topAnchor;
      if ( !topAnchor )
        goto LABEL_166;
      v18 = (UnityEngine_Object_o *)v16->fields.target;
      v19 = (UnityEngine_Object_o *)topAnchor->fields.target;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      cachedTransform = (void *)UnityEngine_Object__op_Equality(v18, v19, 0);
      if ( ((unsigned __int8)cachedTransform & 1) != 0 )
      {
        cachedTransform = this->fields.leftAnchor;
        if ( !cachedTransform )
          goto LABEL_166;
        cachedTransform = UIRect_AnchorPoint__GetSides((UIRect_AnchorPoint_o *)cachedTransform, parent, v20);
        if ( !cachedTransform )
        {
          LocalPos = UIRect__GetLocalPos((UIRect_o *)this, this->fields.leftAnchor, parent, v21);
          v108 = this->fields.leftAnchor;
          if ( !v108 )
            goto LABEL_166;
          v109 = this->fields.bottomAnchor;
          if ( !v109 )
            goto LABEL_166;
          v110 = this->fields.rightAnchor;
          if ( !v110 )
            goto LABEL_166;
          v111 = this->fields.topAnchor;
          if ( !v111 )
            goto LABEL_166;
          v45 = LocalPos.fields.x + (float)v108->fields.absolute;
          v46 = LocalPos.fields.x + (float)v110->fields.absolute;
          absolute = (float)v111->fields.absolute;
          v44 = LocalPos.fields.z >= 0.0 || !this->fields.hideIfOffScreen;
          v47 = LocalPos.fields.y + (float)v109->fields.absolute;
          v48 = LocalPos.fields.y + absolute;
          goto LABEL_140;
        }
        v22 = (float *)cachedTransform;
        if ( *((_DWORD *)cachedTransform + 6) > 2u )
        {
          v23 = this->fields.leftAnchor;
          if ( !v23 )
            goto LABEL_166;
          v24 = NGUIMath__Lerp(
                  *((float *)cachedTransform + 8),
                  *((float *)cachedTransform + 14),
                  v23->fields.relative,
                  0);
          v25 = this->fields.leftAnchor;
          if ( !v25 )
            goto LABEL_166;
          if ( *((_DWORD *)v22 + 6) > 2u )
          {
            v26 = this->fields.rightAnchor;
            if ( !v26 )
              goto LABEL_166;
            v27 = v24;
            v28 = v25->fields.absolute;
            v29 = NGUIMath__Lerp(v22[8], v22[14], v26->fields.relative, 0);
            v30 = this->fields.rightAnchor;
            if ( !v30 )
              goto LABEL_166;
            if ( *((_DWORD *)v22 + 6) > 3u )
            {
              v31 = this->fields.bottomAnchor;
              if ( !v31 )
                goto LABEL_166;
              v32 = v29;
              v33 = v30->fields.absolute;
              v34 = NGUIMath__Lerp(v22[18], v22[12], v31->fields.relative, 0);
              v35 = this->fields.bottomAnchor;
              if ( !v35 )
                goto LABEL_166;
              if ( *((_DWORD *)v22 + 6) > 3u )
              {
                v36 = this->fields.topAnchor;
                if ( !v36 )
                  goto LABEL_166;
                v37 = v34;
                v38 = v27;
                v39 = v35->fields.absolute;
                v40 = NGUIMath__Lerp(v22[18], v22[12], v36->fields.relative, 0);
                v41 = this->fields.topAnchor;
                if ( !v41 )
                  goto LABEL_166;
                v42 = v41->fields.absolute;
                v43 = (float)v39;
                v44 = 1;
                v45 = v38 + (float)v28;
                v46 = v32 + (float)v33;
                v47 = v37 + v43;
                v48 = v40 + (float)v42;
LABEL_140:
                this->fields.mIsInFront = v44;
                goto LABEL_87;
              }
            }
          }
        }
LABEL_167:
        sub_1C93D34(cachedTransform);
      }
    }
  }
  v49 = this->fields.leftAnchor;
  this->fields.mIsInFront = 1;
  if ( !v49 )
    goto LABEL_166;
  v50 = (UnityEngine_Object_o *)v49->fields.target;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  cachedTransform = (void *)UnityEngine_Object__op_Implicit(v50, 0);
  if ( ((unsigned __int8)cachedTransform & 1) != 0 )
  {
    cachedTransform = this->fields.leftAnchor;
    if ( !cachedTransform )
      goto LABEL_166;
    cachedTransform = UIRect_AnchorPoint__GetSides((UIRect_AnchorPoint_o *)cachedTransform, parent, v51);
    if ( cachedTransform )
    {
      if ( *((_DWORD *)cachedTransform + 6) <= 2u )
        goto LABEL_167;
      v53 = this->fields.leftAnchor;
      if ( !v53 )
        goto LABEL_166;
      v54 = NGUIMath__Lerp(*((float *)cachedTransform + 8), *((float *)cachedTransform + 14), v53->fields.relative, 0);
    }
    else
    {
      LODWORD(v54) = (unsigned int)UIRect__GetLocalPos((UIRect_o *)this, this->fields.leftAnchor, parent, v52);
    }
    v55 = this->fields.leftAnchor;
    if ( !v55 )
      goto LABEL_166;
    v45 = v54 + (float)v55->fields.absolute;
  }
  else
  {
    v45 = localPosition.fields.x - (float)(PivotOffset.fields.x * (float)this->fields.mWidth);
  }
  v56 = this->fields.rightAnchor;
  if ( !v56 )
    goto LABEL_166;
  v57 = (UnityEngine_Object_o *)v56->fields.target;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  cachedTransform = (void *)UnityEngine_Object__op_Implicit(v57, 0);
  if ( ((unsigned __int8)cachedTransform & 1) != 0 )
  {
    cachedTransform = this->fields.rightAnchor;
    if ( !cachedTransform )
      goto LABEL_166;
    cachedTransform = UIRect_AnchorPoint__GetSides((UIRect_AnchorPoint_o *)cachedTransform, parent, v58);
    if ( cachedTransform )
    {
      if ( *((_DWORD *)cachedTransform + 6) <= 2u )
        goto LABEL_167;
      v60 = this->fields.rightAnchor;
      if ( !v60 )
        goto LABEL_166;
      v61 = NGUIMath__Lerp(*((float *)cachedTransform + 8), *((float *)cachedTransform + 14), v60->fields.relative, 0);
    }
    else
    {
      LODWORD(v61) = (unsigned int)UIRect__GetLocalPos((UIRect_o *)this, this->fields.rightAnchor, parent, v59);
    }
    v62 = this->fields.rightAnchor;
    if ( !v62 )
      goto LABEL_166;
    v46 = v61 + (float)v62->fields.absolute;
  }
  else
  {
    v46 = (float)(localPosition.fields.x - (float)(PivotOffset.fields.x * (float)this->fields.mWidth))
        + (float)this->fields.mWidth;
  }
  v63 = this->fields.bottomAnchor;
  if ( !v63 )
    goto LABEL_166;
  v64 = (UnityEngine_Object_o *)v63->fields.target;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  cachedTransform = (void *)UnityEngine_Object__op_Implicit(v64, 0);
  if ( ((unsigned __int8)cachedTransform & 1) != 0 )
  {
    cachedTransform = this->fields.bottomAnchor;
    if ( !cachedTransform )
      goto LABEL_166;
    cachedTransform = UIRect_AnchorPoint__GetSides((UIRect_AnchorPoint_o *)cachedTransform, parent, v65);
    if ( cachedTransform )
    {
      if ( *((_DWORD *)cachedTransform + 6) <= 3u )
        goto LABEL_167;
      v67 = this->fields.bottomAnchor;
      if ( !v67 )
        goto LABEL_166;
      v68 = NGUIMath__Lerp(*((float *)cachedTransform + 18), *((float *)cachedTransform + 12), v67->fields.relative, 0);
      v69 = this->fields.bottomAnchor;
      if ( !v69 )
        goto LABEL_166;
      v47 = v68 + (float)v69->fields.absolute;
    }
    else
    {
      y = UIRect__GetLocalPos((UIRect_o *)this, this->fields.bottomAnchor, parent, v66).fields.y;
      v70 = this->fields.bottomAnchor;
      if ( !v70 )
        goto LABEL_166;
      v47 = y + (float)v70->fields.absolute;
    }
  }
  else
  {
    v47 = localPosition.fields.y - (float)(PivotOffset.fields.y * (float)this->fields.mHeight);
  }
  v71 = this->fields.topAnchor;
  if ( !v71 )
    goto LABEL_166;
  v72 = (UnityEngine_Object_o *)v71->fields.target;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Implicit(v72, 0) )
  {
    mHeight = (float)this->fields.mHeight;
    v79 = localPosition.fields.y - (float)(PivotOffset.fields.y * mHeight);
LABEL_86:
    v48 = v79 + mHeight;
    goto LABEL_87;
  }
  cachedTransform = this->fields.topAnchor;
  if ( !cachedTransform )
    goto LABEL_166;
  cachedTransform = UIRect_AnchorPoint__GetSides((UIRect_AnchorPoint_o *)cachedTransform, parent, v73);
  if ( !cachedTransform )
  {
    v79 = UIRect__GetLocalPos((UIRect_o *)this, this->fields.topAnchor, parent, v74).fields.y;
    v80 = this->fields.topAnchor;
    if ( !v80 )
      goto LABEL_166;
    mHeight = (float)v80->fields.absolute;
    goto LABEL_86;
  }
  if ( *((_DWORD *)cachedTransform + 6) <= 3u )
    goto LABEL_167;
  v75 = this->fields.topAnchor;
  if ( !v75 )
    goto LABEL_166;
  v76 = NGUIMath__Lerp(*((float *)cachedTransform + 18), *((float *)cachedTransform + 12), v75->fields.relative, 0);
  v77 = this->fields.topAnchor;
  if ( !v77 )
    goto LABEL_166;
  v48 = v76 + (float)v77->fields.absolute;
LABEL_87:
  v81 = fminf(PivotOffset.fields.x, 1.0);
  v82 = v46 - v45;
  if ( PivotOffset.fields.x < 0.0 )
    v83 = 0.0;
  else
    v83 = v81;
  v84 = fminf(PivotOffset.fields.y, 1.0);
  if ( PivotOffset.fields.y < 0.0 )
    v85 = 0.0;
  else
    v85 = v84;
  if ( !byte_4D2A138 )
  {
    sub_1C93AD4(&System_Math_TypeInfo);
    byte_4D2A138 = 1;
  }
  v86 = v82 + 0.5;
  if ( System_Math_TypeInfo->_2.cctor_finished )
  {
    v87 = 1;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v87 = (unsigned __int8)byte_4D2A138;
  }
  v88 = vcvtms_s32_f32(v86);
  v89 = v48 - v47;
  if ( floorf(v86) == INFINITY )
    v90 = 0x80000000;
  else
    v90 = v88;
  if ( !v87 )
  {
    sub_1C93AD4(&System_Math_TypeInfo);
    byte_4D2A138 = 1;
  }
  v91 = v89 + 0.5;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  keepAspectRatio = this->fields.keepAspectRatio;
  v93 = vcvtms_s32_f32(v91);
  if ( floorf(v91) == INFINITY )
    v94 = 0x80000000;
  else
    v94 = v93;
  if ( keepAspectRatio )
  {
    aspectRatio = this->fields.aspectRatio;
    if ( aspectRatio != 0.0 )
    {
      if ( keepAspectRatio == 2 )
      {
        if ( !byte_4D2A83C )
        {
          sub_1C93AD4(&System_Math_TypeInfo);
          byte_4D2A83C = 1;
        }
        v96 = aspectRatio * (float)v94;
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v97 = v96;
        v98 = modf(v96, &iptr);
        if ( v96 >= 0.0 )
        {
          if ( v98 == 0.5 )
          {
            v99 = iptr;
            v100 = 1.0;
LABEL_127:
            v106 = v99 + v100;
            if ( ((__int64)v99 & 1) != 0 )
              v99 = v106;
            goto LABEL_144;
          }
          v99 = floor(v97 + 0.5);
        }
        else
        {
          if ( v98 == -0.5 )
          {
            v99 = iptr;
            v100 = -1.0;
            goto LABEL_127;
          }
          v99 = ceil(v97 + -0.5);
        }
LABEL_144:
        if ( v99 == INFINITY )
          v90 = 0x80000000;
        else
          v90 = (int)v99;
        goto LABEL_151;
      }
      if ( !byte_4D2A83C )
      {
        sub_1C93AD4(&System_Math_TypeInfo);
        byte_4D2A83C = 1;
      }
      v101 = (float)v90 / aspectRatio;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v102 = v101;
      v103 = modf(v101, &iptr);
      if ( v101 >= 0.0 )
      {
        if ( v103 == 0.5 )
        {
          v104 = iptr;
          v105 = 1.0;
LABEL_132:
          v107 = v104 + v105;
          if ( ((__int64)v104 & 1) != 0 )
            v104 = v107;
          goto LABEL_148;
        }
        v104 = floor(v102 + 0.5);
      }
      else
      {
        if ( v103 == -0.5 )
        {
          v104 = iptr;
          v105 = -1.0;
          goto LABEL_132;
        }
        v104 = ceil(v102 + -0.5);
      }
LABEL_148:
      if ( v104 == INFINITY )
        v94 = 0x80000000;
      else
        v94 = (int)v104;
    }
  }
LABEL_151:
  v113 = v83 * v82;
  v114 = v85 * v89;
  if ( v90 < ((int (__fastcall *)(UIWidget_o *, const MethodInfo *))this->klass->vtable._34_get_minWidth.methodPtr)(
               this,
               this->klass->vtable._34_get_minWidth.method) )
    v90 = ((__int64 (__fastcall *)(UIWidget_o *, const MethodInfo *))this->klass->vtable._34_get_minWidth.methodPtr)(
            this,
            this->klass->vtable._34_get_minWidth.method);
  if ( v94 < ((int (__fastcall *)(UIWidget_o *, const MethodInfo *))this->klass->vtable._35_get_minHeight.methodPtr)(
               this,
               this->klass->vtable._35_get_minHeight.method) )
    v94 = ((__int64 (__fastcall *)(UIWidget_o *, const MethodInfo *))this->klass->vtable._35_get_minHeight.methodPtr)(
            this,
            this->klass->vtable._35_get_minHeight.method);
  if ( (float)((float)((float)(localPosition.fields.z - localPosition.fields.z)
                     * (float)(localPosition.fields.z - localPosition.fields.z))
             + (float)((float)((float)(localPosition.fields.y - (float)(v47 + v114))
                             * (float)(localPosition.fields.y - (float)(v47 + v114)))
                     + (float)((float)(localPosition.fields.x - (float)(v45 + v113))
                             * (float)(localPosition.fields.x - (float)(v45 + v113))))) > 0.001 )
  {
    cachedTransform = UIRect__get_cachedTransform((UIRect_o *)this, v115);
    if ( cachedTransform )
    {
      v121.fields.x = v45 + v113;
      v121.fields.y = v47 + v114;
      v121.fields.z = localPosition.fields.z;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)cachedTransform, v121, 0);
      if ( this->fields.mIsInFront )
        this->fields.mChanged = 1;
      goto LABEL_159;
    }
LABEL_166:
    sub_1C93D2C(cachedTransform, v4);
  }
LABEL_159:
  if ( this->fields.mWidth != v90 || this->fields.mHeight != v94 )
  {
    mIsInFront = this->fields.mIsInFront;
    this->fields.mWidth = v90;
    this->fields.mHeight = v94;
    if ( mIsInFront )
      this->fields.mChanged = 1;
    if ( this->fields.autoResizeBoxCollider )
      UIWidget__ResizeCollider(this, v115);
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
  const MethodInfo *v8; // x1
  UnityEngine_Transform_o *v9; // x20
  UnityEngine_Vector3_o localScale; // 0:kr00_12.12

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
    if ( !byte_4D2A13B )
    {
      sub_1C93AD4(&System_Math_TypeInfo);
      byte_4D2A13B = 1;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    if ( sqrtf(
           (float)(localScale.fields.z * localScale.fields.z)
         + (float)((float)(localScale.fields.x * localScale.fields.x)
                 + (float)(localScale.fields.y * localScale.fields.y))) > 8.0 )
    {
      ((void (__fastcall *)(UIWidget_o *, const MethodInfo *))this->klass->vtable._32_UpgradeFrom265.methodPtr)(
        this,
        this->klass->vtable._32_UpgradeFrom265.method);
      cachedTransform = UIRect__get_cachedTransform((UIRect_o *)this, v8);
      v9 = cachedTransform;
      if ( !byte_4D2A13E )
      {
        cachedTransform = (UnityEngine_Transform_o *)sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
        byte_4D2A13E = 1;
      }
      if ( v9 )
      {
        UnityEngine_Transform__set_localScale(v9, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
        goto LABEL_12;
      }
LABEL_13:
      sub_1C93D2C(cachedTransform, v7);
    }
  }
LABEL_12:
  UIRect__UpdateMe((UIRect_o *)this, v4);
}


void UIWidget__OnUpdate(UIWidget_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *panel; // x20
  const MethodInfo *v4; // x1

  if ( (byte_4D352A2 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D352A2 = 1;
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
  if ( (byte_4D35297 & 1) == 0 )
  {
    left = (UIWidget_o *)sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D35297 = 1;
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
    sub_1C93D2C(left, right);
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
  __int64 v8; // x1
  int32_t layer; // w21
  UIPanel_o *_49843268; // x0
  UnityEngine_Object_o *v11; // x21
  UnityEngine_Object_o *v12; // x20
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x1

  if ( (byte_4D3529E & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&UIPanel_TypeInfo);
    byte_4D3529E = 1;
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
      sub_1C93D2C(0, v8);
    layer = UnityEngine_GameObject__get_layer(cachedGameObject, 0);
    if ( !UIPanel_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UIPanel_TypeInfo);
    _49843268 = UIPanel__Find_49843268(cachedTransform, 1, layer, 0);
    v11 = (UnityEngine_Object_o *)this->fields.panel;
    v12 = (UnityEngine_Object_o *)_49843268;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v11, v12, 0) )
    {
      UIWidget__RemoveFromPanel(this, v13);
      UIWidget__CreatePanel(this, v14);
    }
  }
}


void UIWidget__RemoveFromPanel(UIWidget_o *this, const MethodInfo *method)
{
  UIPanel_o **p_panel; // x20
  UnityEngine_Object_o *panel; // x21
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7

  if ( (byte_4D3529A & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D3529A = 1;
  }
  p_panel = &this->fields.panel;
  panel = (UnityEngine_Object_o *)this->fields.panel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(panel, 0, 0) )
  {
    if ( !*p_panel )
      sub_1C93D2C(0, v5);
    UIPanel__RemoveWidget(*p_panel, this, 0);
    this->fields.panel = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.panel, 0, v12, v13, v14, v15, v16, v17);
  }
  this->fields.drawCall = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.drawCall, 0, v6, v7, v8, v9, v10, v11);
}


void UIWidget__ResizeCollider(UIWidget_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x19

  if ( (byte_4D35295 & 1) == 0 )
  {
    sub_1C93AD4(&NGUITools_TypeInfo);
    byte_4D35295 = 1;
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
      if ( !byte_4D2A83C )
      {
        sub_1C93AD4(&System_Math_TypeInfo);
        byte_4D2A83C = 1;
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
      if ( !byte_4D2A83C )
      {
        sub_1C93AD4(&System_Math_TypeInfo);
        byte_4D2A83C = 1;
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
  struct UIGeometry_o *geometry; // x8
  struct BetterList_Vector3__o *verts; // x8

  if ( (byte_4D35299 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D35299 = 1;
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
    sub_1C93D2C(isVisible, v5);
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
  const MethodInfo *v10; // x1
  UnityEngine_Vector2_o PivotOffset; // kr10_8
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
  __int64 v24; // x1
  float v25; // s11
  float v26; // s10
  UnityEngine_Transform_o *v27; // x20
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
  UnityEngine_Vector3_o localPosition; // 0:kr00_12.12
  UnityEngine_Vector3_o v48; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D35294 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D35294 = 1;
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
  if ( !byte_4D2A138 )
  {
    sub_1C93AD4(&System_Math_TypeInfo);
    byte_4D2A138 = 1;
  }
  v16 = width + 0.5;
  if ( System_Math_TypeInfo->_2.cctor_finished )
  {
    v17 = 1;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v17 = (unsigned __int8)byte_4D2A138;
  }
  v18 = vcvtms_s32_f32(v16);
  if ( floorf(v16) == INFINITY )
    v19 = 0x80000000;
  else
    v19 = v18;
  if ( !v17 )
  {
    sub_1C93AD4(&System_Math_TypeInfo);
    byte_4D2A138 = 1;
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
  v25 = x + width;
  v26 = y + height;
  v27 = cachedTransform;
  localPosition = UnityEngine_Transform__get_localPosition(cachedTransform, 0);
  if ( v19 < ((int (__fastcall *)(UIWidget_o *, const MethodInfo *, float, float))this->klass->vtable._34_get_minWidth.methodPtr)(
               this,
               this->klass->vtable._34_get_minWidth.method,
               localPosition.fields.x,
               localPosition.fields.y) )
    v19 = ((__int64 (__fastcall *)(UIWidget_o *, const MethodInfo *))this->klass->vtable._34_get_minWidth.methodPtr)(
            this,
            this->klass->vtable._34_get_minWidth.method);
  v28 = floorf((float)((float)((float)(v25 - x) * v13) + x) + 0.5);
  v29 = floorf((float)((float)((float)(v26 - y) * v15) + y) + 0.5);
  if ( v22 < ((int (__fastcall *)(UIWidget_o *, const MethodInfo *))this->klass->vtable._35_get_minHeight.methodPtr)(
               this,
               this->klass->vtable._35_get_minHeight.method) )
    v22 = ((__int64 (__fastcall *)(UIWidget_o *, const MethodInfo *))this->klass->vtable._35_get_minHeight.methodPtr)(
            this,
            this->klass->vtable._35_get_minHeight.method);
  v48.fields.x = v28;
  v48.fields.y = v29;
  v48.fields.z = localPosition.fields.z;
  UnityEngine_Transform__set_localPosition(v27, v48, 0);
  UIWidget__set_width(this, v19, v30);
  UIWidget__set_height(this, v22, v31);
  if ( UIRect__get_isAnchored((UIRect_o *)this, v32) )
  {
    cachedTransform = UnityEngine_Transform__get_parent(v27, 0);
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
      UIRect_AnchorPoint__SetHorizontal((UIRect_AnchorPoint_o *)cachedTransform, v34, v25, v39);
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
      sub_1C93D2C(cachedTransform, v24);
    v44 = (UnityEngine_Object_o *)topAnchor->fields.target;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Implicit(v44, 0) )
    {
      cachedTransform = (UnityEngine_Transform_o *)this->fields.topAnchor;
      if ( cachedTransform )
      {
        UIRect_AnchorPoint__SetVertical((UIRect_AnchorPoint_o *)cachedTransform, v34, v26, v45);
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
  __int64 v8; // x1

  if ( (byte_4D35291 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D35291 = 1;
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
        sub_1C93D2C(v7, v8);
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

  if ( (byte_4D352A3 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D352A3 = 1;
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
    sub_1C93D2C(geometry, v5);
  }
  return v13;
}


// local variable allocation has failed, the output may be wrong!
bool UIWidget__UpdateTransform(UIWidget_o *this, int32_t frame, const MethodInfo *method)
{
  UIWidget_o *v3; // x19
  struct UIPanel_o *panel; // x8
  struct UIPanel_o *v6; // x8
  __int128 v7; // q0
  __int128 v8; // q2
  __int128 v9; // q3
  __int128 v10; // q0
  __int128 v11; // q2
  __int128 v12; // q3
  int32_t mPivot; // w0
  UnityEngine_Vector2_o PivotOffset; // kr40_8
  int mHeight; // s10
  int mWidth; // s11
  const MethodInfo *v17; // x1
  float v18; // s0
  float v19; // s1
  float v20; // s12
  UIWidget_o *v21; // x20
  float v22; // s11
  UnityEngine_Matrix4x4_o *v23; // x8
  UnityEngine_Matrix4x4_o *v24; // x8
  struct UIWidget_OnDimensionsChanged_o *onChange; // x8
  UnityEngine_Matrix4x4_o v27; // [xsp+0h] [xbp-190h] BYREF
  UnityEngine_Matrix4x4_o v28; // [xsp+40h] [xbp-150h] BYREF
  UnityEngine_Matrix4x4_o v29; // [xsp+80h] [xbp-110h] BYREF
  UnityEngine_Matrix4x4_o v30; // [xsp+C0h] [xbp-D0h] BYREF
  UnityEngine_Matrix4x4_o v31; // [xsp+100h] [xbp-90h]
  UnityEngine_Vector3_o v32; // 0:kr00_12.12
  UnityEngine_Vector3_o v33; // 0:kr14_12.12
  UnityEngine_Vector3_o v34; // 0:kr20_12.12
  UnityEngine_Vector3_o v35; // 0:kr34_12.12

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
            v7 = *(_OWORD *)&v6->fields.worldToLocal.fields.m03;
            v9 = *(_OWORD *)&v6->fields.worldToLocal.fields.m00;
            v8 = *(_OWORD *)&v6->fields.worldToLocal.fields.m01;
            *(_OWORD *)&v31.fields.m02 = *(_OWORD *)&v6->fields.worldToLocal.fields.m02;
            *(_OWORD *)&v31.fields.m03 = v7;
            *(_OWORD *)&v31.fields.m00 = v9;
            *(_OWORD *)&v31.fields.m01 = v8;
            this = (UIWidget_o *)UIRect__get_cachedTransform((UIRect_o *)v3, *(const MethodInfo **)&frame);
            if ( this )
            {
              UnityEngine_Transform__get_localToWorldMatrix(&v30, (UnityEngine_Transform_o *)this, 0);
              v27 = v30;
              v28 = v31;
              UnityEngine_Matrix4x4__op_Multiply(&v29, &v28, &v27, 0);
              v10 = *(_OWORD *)&v29.fields.m03;
              v12 = *(_OWORD *)&v29.fields.m00;
              v11 = *(_OWORD *)&v29.fields.m01;
              v30 = v29;
              *(_OWORD *)&v3->fields.mLocalToPanel.fields.m02 = *(_OWORD *)&v29.fields.m02;
              *(_OWORD *)&v3->fields.mLocalToPanel.fields.m03 = v10;
              *(_OWORD *)&v3->fields.mLocalToPanel.fields.m00 = v12;
              *(_OWORD *)&v3->fields.mLocalToPanel.fields.m01 = v11;
              mPivot = v3->fields.mPivot;
              v3->fields.mMatrixFrame = frame;
              PivotOffset = NGUIMath__GetPivotOffset(mPivot, 0);
              mWidth = v3->fields.mWidth;
              mHeight = v3->fields.mHeight;
              this = (UIWidget_o *)UIRect__get_cachedTransform((UIRect_o *)v3, v17);
              if ( this )
              {
                v18 = (float)-PivotOffset.fields.x * (float)mWidth;
                v19 = (float)-PivotOffset.fields.y * (float)mHeight;
                v20 = v18 + (float)mWidth;
                v21 = this;
                v22 = v19 + (float)mHeight;
                v32 = UnityEngine_Transform__TransformPoint_72146688((UnityEngine_Transform_o *)this, v18, v19, 0.0, 0);
                v33 = UnityEngine_Transform__TransformPoint_72146688((UnityEngine_Transform_o *)v21, v20, v22, 0.0, 0);
                v23 = (UnityEngine_Matrix4x4_o *)v3->fields.panel;
                if ( v23 )
                {
                  v34 = UnityEngine_Matrix4x4__MultiplyPoint3x4(v23 + 3, v32, 0);
                  v24 = (UnityEngine_Matrix4x4_o *)v3->fields.panel;
                  if ( v24 )
                  {
                    v35 = UnityEngine_Matrix4x4__MultiplyPoint3x4(v24 + 3, v33, 0);
                    if ( (float)((float)((float)(v3->fields.mOldV0.fields.z - v34.fields.z)
                                       * (float)(v3->fields.mOldV0.fields.z - v34.fields.z))
                               + (float)((float)((float)(v3->fields.mOldV0.fields.x - v34.fields.x)
                                               * (float)(v3->fields.mOldV0.fields.x - v34.fields.x))
                                       + (float)((float)(v3->fields.mOldV0.fields.y - v34.fields.y)
                                               * (float)(v3->fields.mOldV0.fields.y - v34.fields.y)))) > 0.000001
                      || (float)((float)((float)(v3->fields.mOldV1.fields.z - v35.fields.z)
                                       * (float)(v3->fields.mOldV1.fields.z - v35.fields.z))
                               + (float)((float)((float)(v3->fields.mOldV1.fields.x - v35.fields.x)
                                               * (float)(v3->fields.mOldV1.fields.x - v35.fields.x))
                                       + (float)((float)(v3->fields.mOldV1.fields.y - v35.fields.y)
                                               * (float)(v3->fields.mOldV1.fields.y - v35.fields.y)))) > 0.000001 )
                    {
                      v3->fields.mOldV0 = v34;
                      v3->fields.mOldV1.fields.x = v35.fields.x;
                      v3->fields.mOldV1.fields.y = v35.fields.y;
                      v3->fields.mMoved = 1;
                      v3->fields.mOldV1.fields.z = v35.fields.z;
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
    sub_1C93D2C(this, *(_QWORD *)&frame);
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
  double v5; // d10
  double v6; // d0
  double v7; // d0
  double v8; // d1
  double v9; // d1
  int v10; // w23
  int32_t v11; // w8
  double v12; // d9
  double v13; // d0
  double v14; // d0
  double v15; // d1
  double v16; // d1
  int v17; // w21
  int32_t v18; // w8
  UnityEngine_GameObject_o *gameObject; // x19
  unsigned __int64 localScale; // kr00_8
  double iptr; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4D352A0 & 1) == 0 )
  {
    sub_1C93AD4(&NGUITools_TypeInfo);
    byte_4D352A0 = 1;
  }
  cachedTransform = UIRect__get_cachedTransform((UIRect_o *)this, method);
  if ( !cachedTransform )
    sub_1C93D2C(0, v4);
  localScale = (unsigned __int64)UnityEngine_Transform__get_localScale(cachedTransform, 0);
  if ( !byte_4D2A83C )
  {
    sub_1C93AD4(&System_Math_TypeInfo);
    byte_4D2A83C = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v5 = *(float *)&localScale;
  v6 = modf(*(float *)&localScale, &iptr);
  if ( *(float *)&localScale >= 0.0 )
  {
    if ( v6 != 0.5 )
    {
      v7 = floor(v5 + 0.5);
      goto LABEL_18;
    }
    v7 = iptr;
    v8 = 1.0;
  }
  else
  {
    if ( v6 != -0.5 )
    {
      v7 = ceil(v5 + -0.5);
      goto LABEL_18;
    }
    v7 = iptr;
    v8 = -1.0;
  }
  v9 = v7 + v8;
  if ( ((__int64)v7 & 1) != 0 )
    v7 = v9;
LABEL_18:
  if ( v7 == INFINITY )
    v10 = 0x80000000;
  else
    v10 = (int)v7;
  if ( !byte_4D2B979 )
  {
    sub_1C93AD4(&System_Math_TypeInfo);
    byte_4D2B979 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( v10 >= 0 )
    v11 = v10;
  else
    v11 = -v10;
  this->fields.mWidth = v11;
  if ( !byte_4D2A83C )
  {
    sub_1C93AD4(&System_Math_TypeInfo);
    byte_4D2A83C = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v12 = *((float *)&localScale + 1);
  v13 = modf(*((float *)&localScale + 1), &iptr);
  if ( *((float *)&localScale + 1) >= 0.0 )
  {
    if ( v13 != 0.5 )
    {
      v14 = floor(v12 + 0.5);
      goto LABEL_42;
    }
    v14 = iptr;
    v15 = 1.0;
  }
  else
  {
    if ( v13 != -0.5 )
    {
      v14 = ceil(v12 + -0.5);
      goto LABEL_42;
    }
    v14 = iptr;
    v15 = -1.0;
  }
  v16 = v14 + v15;
  if ( ((__int64)v14 & 1) != 0 )
    v14 = v16;
LABEL_42:
  if ( v14 == INFINITY )
    v17 = 0x80000000;
  else
    v17 = (int)v14;
  if ( !byte_4D2B979 )
  {
    sub_1C93AD4(&System_Math_TypeInfo);
    byte_4D2B979 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( v17 >= 0 )
    v18 = v17;
  else
    v18 = -v17;
  this->fields.mHeight = v18;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__UpdateWidgetCollider_50074656(gameObject, 1, 0);
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
    sub_1C93D2C(0, v);
  UIGeometry__WriteToBuffers(geometry, v, u, c, n, t, method);
}


float UIWidget__get_alpha(UIWidget_o *this, const MethodInfo *method)
{
  return this->fields.mColor.fields.a;
}


UnityEngine_Vector4_o UIWidget__get_border(UIWidget_o *this, const MethodInfo *method)
{
  struct UnityEngine_Vector4_StaticFields *static_fields; // x8
  UnityEngine_Vector4_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( !byte_4D2A426 )
  {
    sub_1C93AD4(&UnityEngine_Vector4_TypeInfo);
    byte_4D2A426 = 1;
  }
  static_fields = UnityEngine_Vector4_TypeInfo->static_fields;
  result.fields.x = static_fields->zeroVector.fields.x;
  result.fields.y = static_fields->zeroVector.fields.y;
  result.fields.z = static_fields->zeroVector.fields.z;
  result.fields.w = static_fields->zeroVector.fields.w;
  return result;
}


UnityEngine_Color_o UIWidget__get_color(UIWidget_o *this, const MethodInfo *method)
{
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  result.fields.r = this->fields.mColor.fields.r;
  result.fields.g = this->fields.mColor.fields.g;
  result.fields.b = this->fields.mColor.fields.b;
  result.fields.a = this->fields.mColor.fields.a;
  return result;
}


int32_t UIWidget__get_depth(UIWidget_o *this, const MethodInfo *method)
{
  return this->fields.mDepth;
}


UnityEngine_Vector4_o UIWidget__get_drawRegion(UIWidget_o *this, const MethodInfo *method)
{
  UnityEngine_Vector4_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  result.fields.x = this->fields.mDrawRegion.fields.x;
  result.fields.y = this->fields.mDrawRegion.fields.y;
  result.fields.z = this->fields.mDrawRegion.fields.z;
  result.fields.w = this->fields.mDrawRegion.fields.w;
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
  float v11; // s0
  float y; // s6
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
  result.fields.z = v7 + mWidth;
  result.fields.x = v7;
  if ( x != 0.0 )
  {
    v11 = fminf(x, 1.0);
    if ( x < 0.0 )
      v11 = 0.0;
    result.fields.x = v7 + (float)((float)(result.fields.z - v7) * v11);
  }
  y = this->fields.mDrawRegion.fields.y;
  result.fields.w = v8 + mHeight;
  result.fields.y = (float)-PivotOffset.fields.y * mHeight;
  if ( y != 0.0 )
  {
    v15 = fminf(y, 1.0);
    if ( y < 0.0 )
      v15 = 0.0;
    result.fields.y = v8 + (float)((float)(result.fields.w - v8) * v15);
  }
  z = this->fields.mDrawRegion.fields.z;
  if ( z != 1.0 )
  {
    v17 = fminf(z, 1.0);
    v18 = z < 0.0;
    v19 = 0.0;
    if ( !v18 )
      v19 = v17;
    result.fields.z = v7 + (float)((float)(result.fields.z - v7) * v19);
  }
  w = this->fields.mDrawRegion.fields.w;
  if ( w != 1.0 )
  {
    v18 = w < 0.0;
    v21 = fminf(w, 1.0);
    if ( v18 )
      v21 = 0.0;
    result.fields.w = v8 + (float)((float)(result.fields.w - v8) * v21);
  }
  return result;
}


bool UIWidget__get_hasBoxCollider(UIWidget_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  Il2CppObject *v4; // x20
  __int64 naturalAligment; // x10
  UnityEngine_Object_o *v6; // x0
  Il2CppObject *v8; // x19

  if ( (byte_4D3528F & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_BoxCollider_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_BoxCollider2D___);
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D3528F = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_Collider___);
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
         (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_BoxCollider2D___);
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
    sub_1C93D2C(this, method);
  return verts->fields.size > 0;
}


int32_t UIWidget__get_height(UIWidget_o *this, const MethodInfo *method)
{
  return this->fields.mHeight;
}


bool UIWidget__get_isVisible(UIWidget_o *this, const MethodInfo *method)
{
  if ( (byte_4D3528A & 1) == 0 )
  {
    sub_1C93AD4(&NGUITools_TypeInfo);
    byte_4D3528A = 1;
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
  __int64 v3; // x1
  unsigned __int64 v4; // d0
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  v2 = (float32x2_t *)((__int64 (__fastcall *)(UIWidget_o *, const MethodInfo *))this->klass->vtable._10_get_localCorners.methodPtr)(
                        this,
                        this->klass->vtable._10_get_localCorners.method);
  if ( !v2 )
    sub_1C93D2C(0, v3);
  if ( v2[3].n64_u32[0] <= 2 )
    sub_1C93D34(v2);
  v4 = vadd_f32(v2[4], vmul_f32(vsub_f32(v2[7], v2[4]), (float32x2_t)0x3F0000003F000000LL)).n64_u64[0];
  result.fields.z = v2[5].n64_f32[0] + (float)((float)(v2[8].n64_f32[0] - v2[5].n64_f32[0]) * 0.5);
  result.fields.y = *((float *)&v4 + 1);
  result.fields.x = *(float *)&v4;
  return result;
}


UnityEngine_Vector3_array *UIWidget__get_localCorners(UIWidget_o *this, const MethodInfo *method)
{
  UnityEngine_Vector2_o v3; // x0
  UnityEngine_Vector2_o v4; // x1
  UnityEngine_Vector2_o PivotOffset; // kr00_8
  struct UnityEngine_Vector3_array *mCorners; // x8
  int32_t mWidth; // s2
  int32_t mHeight; // s3
  float v9; // s1
  float v10; // s3
  float v11; // s2
  float v12; // s0
  struct UnityEngine_Vector3_array *v13; // x8
  float v14; // s3
  struct UnityEngine_Vector3_array *v15; // x8
  float v16; // s1
  struct UnityEngine_Vector3_array *v17; // x8

  PivotOffset = NGUIMath__GetPivotOffset(this->fields.mPivot, 0);
  mCorners = this->fields.mCorners;
  if ( !mCorners )
    goto LABEL_10;
  if ( !LODWORD(mCorners->max_length) )
    goto LABEL_11;
  mWidth = this->fields.mWidth;
  mHeight = this->fields.mHeight;
  mCorners->m_Items[0].fields.z = 0.0;
  v9 = (float)mWidth;
  v10 = (float)mHeight;
  v11 = (float)-PivotOffset.fields.x * (float)mWidth;
  v12 = (float)-PivotOffset.fields.y * v10;
  mCorners->m_Items[0].fields.x = v11;
  mCorners->m_Items[0].fields.y = v12;
  v13 = this->fields.mCorners;
  if ( !v13 )
    goto LABEL_10;
  if ( LODWORD(v13->max_length) <= 1 )
    goto LABEL_11;
  v14 = v12 + v10;
  v13->m_Items[1].fields.x = v11;
  v13->m_Items[1].fields.y = v14;
  v13->m_Items[1].fields.z = 0.0;
  v15 = this->fields.mCorners;
  if ( !v15 )
    goto LABEL_10;
  if ( LODWORD(v15->max_length) <= 2 )
    goto LABEL_11;
  v16 = v11 + v9;
  v15->m_Items[2].fields.x = v16;
  v15->m_Items[2].fields.y = v14;
  v15->m_Items[2].fields.z = 0.0;
  v17 = this->fields.mCorners;
  if ( !v17 )
LABEL_10:
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_1C93D2C)(v3, v4);
  if ( LODWORD(v17->max_length) <= 3 )
LABEL_11:
    ((void (__fastcall __noreturn *)(_QWORD))sub_1C93D34)(v3);
  v17->m_Items[3].fields.x = v16;
  v17->m_Items[3].fields.y = v12;
  v17->m_Items[3].fields.z = 0.0;
  return this->fields.mCorners;
}


UnityEngine_Vector2_o UIWidget__get_localSize(UIWidget_o *this, const MethodInfo *method)
{
  float32x2_t *v2; // x0
  __int64 v3; // x1
  unsigned __int64 v4; // d0
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  v2 = (float32x2_t *)((__int64 (__fastcall *)(UIWidget_o *, const MethodInfo *))this->klass->vtable._10_get_localCorners.methodPtr)(
                        this,
                        this->klass->vtable._10_get_localCorners.method);
  if ( !v2 )
    sub_1C93D2C(0, v3);
  if ( v2[3].n64_u32[0] <= 2 )
    sub_1C93D34(v2);
  v4 = vsub_f32(v2[7], v2[4]).n64_u64[0];
  result.fields.y = *((float *)&v4 + 1);
  result.fields.x = *(float *)&v4;
  return result;
}


UnityEngine_Texture_o *UIWidget__get_mainTexture(UIWidget_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *v3; // x19
  _BOOL8 v4; // x0
  __int64 v5; // x1

  if ( (byte_4D3528D & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D3528D = 1;
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
    sub_1C93D2C(v4, v5);
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
  UnityEngine_Vector2_o PivotOffset; // kr00_8
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  PivotOffset = NGUIMath__GetPivotOffset(this->fields.mPivot, 0);
  result.fields.y = PivotOffset.fields.y;
  result.fields.x = PivotOffset.fields.x;
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
  int32_t mDepth; // w8
  struct UIPanel_o *v9; // x9

  if ( (byte_4D3528C & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D3528C = 1;
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
    v9 = this->fields.panel;
    if ( !v9 )
      sub_1C93D2C(v6, v7);
    mDepth += 1000 * v9->fields.mDepth;
  }
  return mDepth;
}


UnityEngine_Vector2_o UIWidget__get_relativeSize(UIWidget_o *this, const MethodInfo *method)
{
  struct UnityEngine_Vector2_StaticFields *static_fields; // x8
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( !byte_4D30C94 )
  {
    sub_1C93AD4(&UnityEngine_Vector2_TypeInfo);
    byte_4D30C94 = 1;
  }
  static_fields = UnityEngine_Vector2_TypeInfo->static_fields;
  result.fields.x = static_fields->oneVector.fields.x;
  result.fields.y = static_fields->oneVector.fields.y;
  return result;
}


UnityEngine_Shader_o *UIWidget__get_shader(UIWidget_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *v3; // x19
  _BOOL8 v4; // x0
  __int64 v5; // x1

  if ( (byte_4D3528E & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D3528E = 1;
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
    sub_1C93D2C(v4, v5);
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
  __int64 v6; // x1
  UnityEngine_Vector3_o localCenter; // 0:s0.4,4:s1.4,8:s2.4

  cachedTransform = UIRect__get_cachedTransform((UIRect_o *)this, method);
  localCenter = UIWidget__get_localCenter(this, v4);
  if ( !cachedTransform )
    sub_1C93D2C(v5, v6);
  return UnityEngine_Transform__TransformPoint(cachedTransform, localCenter, 0);
}


UnityEngine_Vector3_array *UIWidget__get_worldCorners(UIWidget_o *this, const MethodInfo *method)
{
  UnityEngine_Vector2_o PivotOffset; // kr40_8
  int32_t mHeight; // s10
  int32_t mWidth; // s11
  const MethodInfo *v6; // x1
  UnityEngine_Transform_o *cachedTransform; // x0
  __int64 v8; // x1
  float v9; // s11
  struct UnityEngine_Vector3_array *mCorners; // x21
  float v11; // s9
  float v12; // s10
  float v13; // s8
  UnityEngine_Transform_o *v14; // x20
  struct UnityEngine_Vector3_array *v15; // x21
  float v16; // s10
  struct UnityEngine_Vector3_array *v17; // x21
  float v18; // s9
  struct UnityEngine_Vector3_array *v19; // x21
  UnityEngine_Vector3_o v21; // 0:kr00_12.12
  UnityEngine_Vector3_o v22; // 0:kr14_12.12
  UnityEngine_Vector3_o v23; // 0:kr20_12.12
  UnityEngine_Vector3_o v24; // 0:kr34_12.12

  PivotOffset = NGUIMath__GetPivotOffset(this->fields.mPivot, 0);
  mWidth = this->fields.mWidth;
  mHeight = this->fields.mHeight;
  cachedTransform = UIRect__get_cachedTransform((UIRect_o *)this, v6);
  if ( !cachedTransform )
    goto LABEL_11;
  v9 = (float)mWidth;
  mCorners = this->fields.mCorners;
  v11 = (float)-PivotOffset.fields.x * v9;
  v12 = (float)mHeight;
  v13 = (float)-PivotOffset.fields.y * v12;
  v14 = cachedTransform;
  v21 = UnityEngine_Transform__TransformPoint_72146688(cachedTransform, v11, v13, 0.0, 0);
  if ( !mCorners )
    goto LABEL_11;
  if ( !LODWORD(mCorners->max_length) )
    goto LABEL_12;
  mCorners->m_Items[0] = v21;
  v15 = this->fields.mCorners;
  v16 = v13 + v12;
  v22 = UnityEngine_Transform__TransformPoint_72146688(v14, v11, v16, 0.0, 0);
  if ( !v15 )
    goto LABEL_11;
  if ( LODWORD(v15->max_length) <= 1 )
    goto LABEL_12;
  v15->m_Items[1] = v22;
  v17 = this->fields.mCorners;
  v18 = v11 + v9;
  v23 = UnityEngine_Transform__TransformPoint_72146688(v14, v18, v16, 0.0, 0);
  if ( !v17 )
    goto LABEL_11;
  if ( LODWORD(v17->max_length) <= 2 )
    goto LABEL_12;
  v17->m_Items[2] = v23;
  v19 = this->fields.mCorners;
  v24 = UnityEngine_Transform__TransformPoint_72146688(v14, v18, v13, 0.0, 0);
  if ( !v19 )
LABEL_11:
    sub_1C93D2C(cachedTransform, v8);
  if ( LODWORD(v19->max_length) <= 3 )
LABEL_12:
    sub_1C93D34(cachedTransform);
  v19->m_Items[3] = v24;
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
  __int64 v6; // x1
  UIPanel_o *v7; // x0
  UnityEngine_Object_o *v8; // x20

  if ( (byte_4D3528B & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Application_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D3528B = 1;
  }
  if ( this->fields.mDepth != value )
  {
    panel = (UnityEngine_Object_o *)this->fields.panel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(panel, 0, 0) )
    {
      v7 = this->fields.panel;
      if ( !v7 )
        goto LABEL_20;
      UIPanel__RemoveWidget(v7, this, 0);
    }
    this->fields.mDepth = value;
    v8 = (UnityEngine_Object_o *)this->fields.panel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v8, 0, 0) )
    {
      v7 = this->fields.panel;
      if ( v7 )
      {
        UIPanel__AddWidget(v7, this, 0);
        if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
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
      sub_1C93D2C(v7, v6);
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
  float v14; // s1
  int v15; // w8
  struct UIRect_AnchorPoint_o *v16; // x8
  UnityEngine_Object_o *v17; // x21
  bool v18; // w0
  int32_t mHeight; // w8
  float v20; // s3
  int v21; // w8
  signed int v22; // w8

  if ( (byte_4D35289 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D35289 = 1;
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
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v6 = UnityEngine_Object__op_Inequality(target, 0, 0);
      if ( (v6 & 1) != 0 )
      {
        topAnchor = this->fields.topAnchor;
        if ( !topAnchor )
          goto LABEL_33;
        v12 = (UnityEngine_Object_o *)topAnchor->fields.target;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v6 = UnityEngine_Object__op_Inequality(v12, 0, 0);
        if ( (v6 & 1) != 0 )
        {
          mPivot = this->fields.mPivot;
          if ( mPivot >= 3 )
          {
            if ( mPivot - 6 > 2 )
            {
              v22 = (value - this->fields.mHeight) & 0xFFFFFFFE;
              if ( !v22 )
                return;
              v20 = (float)v22 * 0.5;
              v14 = (float)-v22 * 0.5;
LABEL_30:
              NGUIMath__AdjustWidget(this, 0.0, v14, 0.0, v20, 0);
              return;
            }
            v14 = 0.0;
            v15 = value - this->fields.mHeight;
LABEL_26:
            v20 = (float)v15;
            goto LABEL_30;
          }
          v21 = this->fields.mHeight - value;
          goto LABEL_29;
        }
      }
      v16 = this->fields.bottomAnchor;
      if ( v16 )
      {
        v17 = (UnityEngine_Object_o *)v16->fields.target;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v18 = UnityEngine_Object__op_Inequality(v17, 0, 0);
        mHeight = this->fields.mHeight;
        if ( v18 )
        {
          v15 = value - mHeight;
          v14 = 0.0;
          goto LABEL_26;
        }
        v21 = mHeight - value;
LABEL_29:
        v14 = (float)v21;
        v20 = 0.0;
        goto LABEL_30;
      }
    }
LABEL_33:
    sub_1C93D2C(v6, v7);
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
  v5 = (System_String_o *)sub_1C93AE8(&StringLiteral_249/*" has no mainTexture setter"*/);
  v6 = System_String__Concat_64425724(v4, v5, 0);
  v7 = sub_1C93AE8(&System_NotImplementedException_TypeInfo);
  v8 = (System_NotImplementedException_o *)sub_1C93D20(v7);
  System_NotImplementedException___ctor_65953432(v8, v6, 0);
  v9 = sub_1C93AE8(&Method_UIWidget_set_mainTexture__);
  sub_1C93BFC(v8, v9);
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
  v5 = (System_String_o *)sub_1C93AE8(&StringLiteral_250/*" has no material setter"*/);
  v6 = System_String__Concat_64425724(v4, v5, 0);
  v7 = sub_1C93AE8(&System_NotImplementedException_TypeInfo);
  v8 = (System_NotImplementedException_o *)sub_1C93D20(v7);
  System_NotImplementedException___ctor_65953432(v8, v6, 0);
  v9 = sub_1C93AE8(&Method_UIWidget_set_material__);
  sub_1C93BFC(v8, v9);
}


void UIWidget__set_onRender(UIWidget_o *this, UIDrawCall_OnRenderCallback_o *value, const MethodInfo *method)
{
  System_Delegate_o **p_mOnRender; // x21
  UnityEngine_Object_o *drawCall; // x22
  _BOOL8 v7; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  struct UIDrawCall_o *v15; // x22
  System_Delegate_o *v16; // x0
  GrandQuestFolderBoardItem_o *p_onRender; // x22
  System_Delegate_o *onRender; // t1
  System_Delegate_o *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  System_Delegate_o *v26; // x8
  UIDrawCall_OnRenderCallback_c *v27; // x1
  UnityEngine_Object_o *v28; // x21
  struct UIDrawCall_o *v29; // x20
  GrandQuestFolderBoardItem_o *v30; // x20
  System_Delegate_o *v31; // t1
  System_Delegate_o *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  UIDrawCall_OnRenderCallback_c *v39; // x1

  if ( (byte_4D35287 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&UIDrawCall_OnRenderCallback_TypeInfo);
    byte_4D35287 = 1;
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
      v15 = this->fields.drawCall;
      if ( !v15 )
        goto LABEL_27;
      onRender = (System_Delegate_o *)v15->fields.onRender;
      p_onRender = (GrandQuestFolderBoardItem_o *)&v15->fields.onRender;
      v16 = onRender;
      if ( onRender && *p_mOnRender )
      {
        v19 = System_Delegate__Remove(v16, *p_mOnRender, 0);
        v26 = v19;
        if ( v19 )
        {
          v27 = UIDrawCall_OnRenderCallback_TypeInfo;
          if ( (UIDrawCall_OnRenderCallback_c *)v19->klass != UIDrawCall_OnRenderCallback_TypeInfo )
            goto LABEL_23;
          p_onRender->klass = (GrandQuestFolderBoardItem_c *)v19;
          if ( (UIDrawCall_OnRenderCallback_c *)v19->klass != v27 )
            goto LABEL_23;
        }
        else
        {
          p_onRender->klass = 0;
        }
        sub_1C93A78(p_onRender, (int32_t)v19, v20, v21, v22, v23, v24, v25);
      }
    }
    this->fields.mOnRender = value;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mOnRender, (int32_t)value, v9, v10, v11, v12, v13, v14);
    v28 = (UnityEngine_Object_o *)this->fields.drawCall;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality(v28, 0, 0);
    if ( v7 )
    {
      v29 = this->fields.drawCall;
      if ( v29 )
      {
        v31 = (System_Delegate_o *)v29->fields.onRender;
        v30 = (GrandQuestFolderBoardItem_o *)&v29->fields.onRender;
        v32 = System_Delegate__Combine(v31, (System_Delegate_o *)value, 0);
        v26 = v32;
        if ( v32 )
        {
          v39 = UIDrawCall_OnRenderCallback_TypeInfo;
          if ( (UIDrawCall_OnRenderCallback_c *)v32->klass != UIDrawCall_OnRenderCallback_TypeInfo
            || (v30->klass = (GrandQuestFolderBoardItem_c *)v32, (UIDrawCall_OnRenderCallback_c *)v32->klass != v39) )
          {
LABEL_23:
            sub_1C940C8(v26);
            return;
          }
        }
        else
        {
          v30->klass = 0;
        }
        sub_1C93A78(v30, (int32_t)v32, v33, v34, v35, v36, v37, v38);
        return;
      }
LABEL_27:
      sub_1C93D2C(v7, v8);
    }
  }
}


void UIWidget__set_pivot(UIWidget_o *this, int32_t value, const MethodInfo *method)
{
  UnityEngine_Transform_o *cachedTransform; // x0
  const MethodInfo *v6; // x1
  UIWidget_c *klass; // x8
  float v8; // s12
  float v9; // s13
  float v10; // s14
  float v11; // s15
  UnityEngine_Transform_o *v12; // x20
  float z; // s8
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x1
  unsigned __int64 localPosition; // kr20_8
  double v17; // d0
  double v18; // d0
  float v19; // s1
  __int64 v20; // x8
  float v21; // s0
  float v22; // s1
  float v23; // s10
  const MethodInfo *v24; // x1
  double v25; // d0
  double v26; // d0
  float v27; // s1
  __int64 v28; // x8
  float v29; // s0
  float v30; // s1
  float v31; // s9
  double iptr; // [xsp+48h] [xbp-18h] BYREF
  UnityEngine_Vector3_o position; // 0:kr00_12.12
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4

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
      sub_1C93D34(cachedTransform);
    v10 = *(float *)&cachedTransform[1].monitor;
    v11 = *((float *)&cachedTransform[1].monitor + 1);
    cachedTransform = UIRect__get_cachedTransform((UIRect_o *)this, v6);
    if ( !cachedTransform )
      goto LABEL_31;
    v12 = cachedTransform;
    position = UnityEngine_Transform__get_position(cachedTransform, 0);
    z = UnityEngine_Transform__get_localPosition(v12, 0).fields.z;
    cachedTransform = UIRect__get_cachedTransform((UIRect_o *)this, v14);
    if ( !cachedTransform
      || (v34.fields.y = (float)(v9 - v11) + position.fields.y,
          v34.fields.x = (float)(v8 - v10) + position.fields.x,
          v34.fields.z = position.fields.z,
          UnityEngine_Transform__set_position(cachedTransform, v34, 0),
          (cachedTransform = UIRect__get_cachedTransform((UIRect_o *)this, v15)) == 0) )
    {
LABEL_31:
      sub_1C93D2C(cachedTransform, v6);
    }
    localPosition = (unsigned __int64)UnityEngine_Transform__get_localPosition(cachedTransform, 0);
    v17 = modf(*(float *)&localPosition, &iptr);
    if ( *(float *)&localPosition >= 0.0 )
    {
      if ( v17 != 0.5 )
      {
        v23 = floorf(*(float *)&localPosition + 0.5);
        goto LABEL_19;
      }
      v18 = iptr;
      v19 = 1.0;
    }
    else
    {
      if ( v17 != -0.5 )
      {
        v23 = ceilf(*(float *)&localPosition + -0.5);
        goto LABEL_19;
      }
      v18 = iptr;
      v19 = -1.0;
    }
    v20 = (__int64)v18;
    v21 = v18;
    v22 = v21 + v19;
    if ( (v20 & 1) != 0 )
      v23 = v22;
    else
      v23 = v21;
LABEL_19:
    v25 = modf(*((float *)&localPosition + 1), &iptr);
    if ( *((float *)&localPosition + 1) >= 0.0 )
    {
      if ( v25 != 0.5 )
      {
        v31 = floorf(*((float *)&localPosition + 1) + 0.5);
        goto LABEL_29;
      }
      v26 = iptr;
      v27 = 1.0;
    }
    else
    {
      if ( v25 != -0.5 )
      {
        v31 = ceilf(*((float *)&localPosition + 1) + -0.5);
        goto LABEL_29;
      }
      v26 = iptr;
      v27 = -1.0;
    }
    v28 = (__int64)v26;
    v29 = v26;
    v30 = v29 + v27;
    if ( (v28 & 1) != 0 )
      v31 = v30;
    else
      v31 = v29;
LABEL_29:
    cachedTransform = UIRect__get_cachedTransform((UIRect_o *)this, v24);
    if ( cachedTransform )
    {
      v35.fields.x = v23;
      v35.fields.y = v31;
      v35.fields.z = z;
      UnityEngine_Transform__set_localPosition(cachedTransform, v35, 0);
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
  v5 = (System_String_o *)sub_1C93AE8(&StringLiteral_251/*" has no shader setter"*/);
  v6 = System_String__Concat_64425724(v4, v5, 0);
  v7 = sub_1C93AE8(&System_NotImplementedException_TypeInfo);
  v8 = (System_NotImplementedException_o *)sub_1C93D20(v7);
  System_NotImplementedException___ctor_65953432(v8, v6, 0);
  v9 = sub_1C93AE8(&Method_UIWidget_set_shader__);
  sub_1C93BFC(v8, v9);
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
  float v15; // s2
  int v16; // w8
  struct UIRect_AnchorPoint_o *v17; // x8
  UnityEngine_Object_o *v18; // x21
  bool v19; // w0
  int32_t mWidth; // w8
  int v21; // w8
  float v22; // s0
  signed int v23; // w8

  if ( (byte_4D35288 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D35288 = 1;
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
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v6 = UnityEngine_Object__op_Inequality(target, 0, 0);
      if ( (v6 & 1) != 0 )
      {
        rightAnchor = this->fields.rightAnchor;
        if ( !rightAnchor )
          goto LABEL_34;
        v12 = (UnityEngine_Object_o *)rightAnchor->fields.target;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v6 = UnityEngine_Object__op_Inequality(v12, 0, 0);
        if ( (v6 & 1) != 0 )
        {
          mPivot = this->fields.mPivot;
          if ( mPivot > 8 )
            goto LABEL_32;
          v14 = 1 << mPivot;
          if ( (v14 & 0x49) == 0 )
          {
            if ( (v14 & 0x124) != 0 )
            {
              v15 = 0.0;
              v16 = this->fields.mWidth - value;
LABEL_28:
              v22 = (float)v16;
              goto LABEL_31;
            }
LABEL_32:
            v23 = (value - this->fields.mWidth) & 0xFFFFFFFE;
            if ( !v23 )
              return;
            v15 = (float)v23 * 0.5;
            v22 = (float)-v23 * 0.5;
LABEL_31:
            NGUIMath__AdjustWidget(this, v22, 0.0, v15, 0.0, 0);
            return;
          }
          v22 = 0.0;
          v21 = value - this->fields.mWidth;
LABEL_30:
          v15 = (float)v21;
          goto LABEL_31;
        }
      }
      v17 = this->fields.leftAnchor;
      if ( v17 )
      {
        v18 = (UnityEngine_Object_o *)v17->fields.target;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v19 = UnityEngine_Object__op_Inequality(v18, 0, 0);
        mWidth = this->fields.mWidth;
        if ( !v19 )
        {
          v16 = mWidth - value;
          v15 = 0.0;
          goto LABEL_28;
        }
        v21 = value - mWidth;
        v22 = 0.0;
        goto LABEL_30;
      }
    }
LABEL_34:
    sub_1C93D2C(v6, v7);
  }
}


void UIWidget_HitCheck___ctor(UIWidget_HitCheck_o *this, Il2CppObject *object, intptr_t method, const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C93B94(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C93D48(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C93BFC(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1AD0B2C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AD0AB8;
}


System_IAsyncResult_o *UIWidget_HitCheck__BeginInvoke(
        UIWidget_HitCheck_o *this,
        UnityEngine_Vector3_o worldPos,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+0h] [xbp-50h] BYREF
  UnityEngine_Vector3_o v10; // [xsp+10h] [xbp-40h] BYREF

  v10 = worldPos;
  if ( (byte_4D352A6 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D352A6 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v10);
  return sub_1C93A88(this, v9, callback, object);
}


bool UIWidget_HitCheck__EndInvoke(UIWidget_HitCheck_o *this, System_IAsyncResult_o *result, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x3

  v3 = sub_1C93A8C(result, 0, method);
  if ( !v3 )
    sub_1C93D2C(0, v4);
  return *(_BYTE *)j_il2cpp_object_unbox_0(v3, v4, v5, v6);
}


// local variable allocation has failed, the output may be wrong!
bool UIWidget_HitCheck__Invoke(UIWidget_HitCheck_o *this, UnityEngine_Vector3_o worldPos, const MethodInfo *method)
{
  return ((bool (__fastcall *)(intptr_t, intptr_t, long double, long double, long double))this->fields.invoke_impl)(
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
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C93B94(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C93D48(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C93BFC(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1AD07C4;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AD0784;
}


System_IAsyncResult_o *UIWidget_OnDimensionsChanged__BeginInvoke(
        UIWidget_OnDimensionsChanged_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0;
  return sub_1C93A88(this, &v5, callback, object);
}


void UIWidget_OnDimensionsChanged__EndInvoke(
        UIWidget_OnDimensionsChanged_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C93A8C(result, 0, method);
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
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
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
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C93B94(method) & 1) != 0 )
  {
    if ( v12 == 5 )
    {
      v13 = sub_1AD0880;
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
        v14 = sub_1C93B8C(method);
        v15 = sub_1C94120(method);
        if ( (v14 & 1) != 0 )
        {
          if ( (v15 & 1) != 0 )
            v13 = sub_1AD09FC;
          else
            v13 = sub_1AD0990;
        }
        else if ( (v15 & 1) != 0 )
        {
          v13 = sub_1AD08DC;
        }
        else
        {
          v13 = sub_1AD08A0;
        }
      }
      else
      {
        v13 = sub_1AD0850;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v17 = sub_1C93D48(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C93BFC(v17, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_17:
  this->fields.extra_arg = (intptr_t)sub_1AD07D8;
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
  _QWORD v17[6]; // [xsp+8h] [xbp-88h] BYREF
  int32_t v18; // [xsp+3Ch] [xbp-54h] BYREF

  v18 = bufferOffset;
  if ( (byte_4D352A5 & 1) == 0 )
  {
    sub_1C93AD4(&int_TypeInfo);
    byte_4D352A5 = 1;
  }
  v17[5] = 0;
  v17[0] = widget;
  v17[1] = j_il2cpp_value_box_0(int_TypeInfo, &v18);
  v17[2] = verts;
  v17[3] = uvs;
  v17[4] = cols;
  return sub_1C93A88(this, v17, callback, object);
}


void UIWidget_OnPostFillCallback__EndInvoke(
        UIWidget_OnPostFillCallback_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C93A8C(result, 0, method);
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