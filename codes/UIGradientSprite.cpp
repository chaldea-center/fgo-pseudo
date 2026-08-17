void UIGradientSprite___ctor(UIGradientSprite_o *this, const MethodInfo *method)
{
  __asm { FMOV            V0.4S, #1.0 }
  this->fields.topColor = _Q0;
  this->fields.bottomColor = _Q0;
  UISprite___ctor((UISprite_o *)this, 0);
}


void UIGradientSprite__OnFill(
        UIGradientSprite_o *this,
        BetterList_Vector3__o *verts,
        BetterList_Vector2__o *uvs,
        BetterList_Color32__o *cols,
        const MethodInfo *method)
{
  UIGradientSprite_o *v8; // x21
  int32_t size; // w22
  int32_t v10; // w24
  float v11; // s8
  float y; // s9
  int32_t v13; // w23
  float v14; // s10
  float32x2_t v15; // d14
  float v16; // s0
  float v17; // s0
  float v18; // s1
  float v19; // s0
  float v20; // s11
  float32x2_t v21; // d13
  unsigned int rgba; // w0
  double v23; // d1
  UnityEngine_Color32_o v24; // x2
  UnityEngine_Vector3_o Item; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4

  v8 = this;
  if ( (byte_597212F & 1) == 0 )
  {
    sub_2213A60(&Method_BetterList_Color32__get_Item__);
    sub_2213A60(&Method_BetterList_Vector3__get_Item__);
    sub_2213A60(&Method_BetterList_Color32__set_Item__);
    this = (UIGradientSprite_o *)sub_2213A60(&UnityEngine_Mathf_TypeInfo);
    byte_597212F = 1;
  }
  if ( !verts )
    goto LABEL_24;
  size = verts->fields.size;
  UISprite__OnFill((UISprite_o *)v8, verts, uvs, cols, 0);
  v10 = verts->fields.size;
  if ( v10 > size )
  {
    v11 = -3.4028e38;
    y = 3.4028e38;
    v13 = size;
    do
    {
      Item = BetterList_Vector3___get_Item(
               verts,
               v13,
               (const MethodInfo_3E714B0 *)Method_BetterList_Vector3__get_Item__);
      if ( y >= Item.fields.y )
        y = Item.fields.y;
      v26 = BetterList_Vector3___get_Item(
              verts,
              v13++,
              (const MethodInfo_3E714B0 *)Method_BetterList_Vector3__get_Item__);
      if ( v11 <= v26.fields.y )
        v11 = v26.fields.y;
    }
    while ( v10 != v13 );
    v14 = v11 - y;
    v15.n64_u64[0] = vdup_n_s32(0x437F0000u).n64_u64[0];
    while ( 1 )
    {
      v16 = 0.0;
      if ( v14 > UnityEngine_Mathf_TypeInfo->static_fields->Epsilon )
      {
        v27 = BetterList_Vector3___get_Item(
                verts,
                size,
                (const MethodInfo_3E714B0 *)Method_BetterList_Vector3__get_Item__);
        v16 = 0.0;
        if ( y != v11 )
        {
          v17 = v27.fields.y - y;
          v18 = 1.0;
          v19 = v17 / v14;
          if ( v19 <= 1.0 )
            v18 = v19;
          if ( v19 >= 0.0 )
            v16 = v18;
          else
            v16 = 0.0;
        }
      }
      if ( !cols )
        break;
      if ( v16 < 0.0 )
        v16 = 0.0;
      v20 = v8->fields.bottomColor.fields.r
          + (float)(v16 * (float)(v8->fields.topColor.fields.r - v8->fields.bottomColor.fields.r));
      v21.n64_u64[0] = vadd_f32(
                         *(float32x2_t *)&v8->fields.bottomColor.fields.g,
                         vmul_n_f32(
                           vsub_f32(
                             *(float32x2_t *)&v8->fields.topColor.fields.g,
                             *(float32x2_t *)&v8->fields.bottomColor.fields.g),
                           v16)).n64_u64[0];
      rgba = BetterList_Color32___get_Item(
               cols,
               size,
               (const MethodInfo_3E6E51C *)Method_BetterList_Color32__get_Item__).fields.rgba;
      v23 = vmul_f32(
              v21,
              vdiv_f32(
                vcvt_f32_u32(vand_s8(vshl_u32(vdup_n_s32(rgba), (uint32x2_t)0xFFFFFFF0FFFFFFF8LL), (int8x8_t)0xFF000000FFLL)),
                v15)).n64_f64[0];
      v24 = (UnityEngine_Color32_o)(unsigned int)sub_2BB24C8(
                                                   0,
                                                   v20 * (float)((float)(unsigned __int8)rgba / 255.0),
                                                   v23,
                                                   *((float *)&v23 + 1),
                                                   (float)HIBYTE(rgba) / 255.0);
      BetterList_Color32___set_Item(
        cols,
        size++,
        v24,
        (const MethodInfo_3E6E54C *)Method_BetterList_Color32__set_Item__);
      if ( v10 == size )
        return;
    }
LABEL_24:
    sub_2213CDC(this, verts);
  }
}


UnityEngine_Color_o UIGradientSprite__get_BottomColor(UIGradientSprite_o *this, const MethodInfo *method)
{
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  r = this->fields.bottomColor.fields.r;
  g = this->fields.bottomColor.fields.g;
  b = this->fields.bottomColor.fields.b;
  a = this->fields.bottomColor.fields.a;
  result.fields.a = a;
  result.fields.b = b;
  result.fields.g = g;
  result.fields.r = r;
  return result;
}


UnityEngine_Color_o UIGradientSprite__get_TopColor(UIGradientSprite_o *this, const MethodInfo *method)
{
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  r = this->fields.topColor.fields.r;
  g = this->fields.topColor.fields.g;
  b = this->fields.topColor.fields.b;
  a = this->fields.topColor.fields.a;
  result.fields.a = a;
  result.fields.b = b;
  result.fields.g = g;
  result.fields.r = r;
  return result;
}


void UIGradientSprite__set_BottomColor(UIGradientSprite_o *this, UnityEngine_Color_o value, const MethodInfo *method)
{
  UIGradientSprite_c *klass; // x8

  if ( (float)((float)((float)(this->fields.bottomColor.fields.a - value.fields.a)
                     * (float)(this->fields.bottomColor.fields.a - value.fields.a))
             + (float)((float)((float)(this->fields.bottomColor.fields.b - value.fields.b)
                             * (float)(this->fields.bottomColor.fields.b - value.fields.b))
                     + (float)((float)((float)(this->fields.bottomColor.fields.r - value.fields.r)
                                     * (float)(this->fields.bottomColor.fields.r - value.fields.r))
                             + (float)((float)(this->fields.bottomColor.fields.g - value.fields.g)
                                     * (float)(this->fields.bottomColor.fields.g - value.fields.g))))) >= 1.0e-10 )
  {
    klass = this->klass;
    this->fields.bottomColor = value;
    ((void (__fastcall *)(UIGradientSprite_o *, const MethodInfo *))klass->vtable._30_MarkAsChanged.methodPtr)(
      this,
      klass->vtable._30_MarkAsChanged.method);
  }
}


void UIGradientSprite__set_TopColor(UIGradientSprite_o *this, UnityEngine_Color_o value, const MethodInfo *method)
{
  UIGradientSprite_c *klass; // x8

  if ( (float)((float)((float)(this->fields.topColor.fields.a - value.fields.a)
                     * (float)(this->fields.topColor.fields.a - value.fields.a))
             + (float)((float)((float)(this->fields.topColor.fields.b - value.fields.b)
                             * (float)(this->fields.topColor.fields.b - value.fields.b))
                     + (float)((float)((float)(this->fields.topColor.fields.r - value.fields.r)
                                     * (float)(this->fields.topColor.fields.r - value.fields.r))
                             + (float)((float)(this->fields.topColor.fields.g - value.fields.g)
                                     * (float)(this->fields.topColor.fields.g - value.fields.g))))) >= 1.0e-10 )
  {
    klass = this->klass;
    this->fields.topColor = value;
    ((void (__fastcall *)(UIGradientSprite_o *, const MethodInfo *))klass->vtable._30_MarkAsChanged.methodPtr)(
      this,
      klass->vtable._30_MarkAsChanged.method);
  }
}