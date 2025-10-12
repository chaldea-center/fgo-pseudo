void FGO_TexTrimer___ctor(FGO_TexTrimer_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w1

  if ( (byte_4C36771 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_16564/*"_mainTex"*/);
    byte_4C36771 = 1;
  }
  v5 = StringLiteral_16564/*"_mainTex"*/;
  this->fields.targetTexName = (struct System_String_o *)StringLiteral_16564/*"_mainTex"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.targetTexName, v5, v2, v3);
  *(_QWORD *)&this->fields.EndXpx = 0x80000000800LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void FGO_TexTrimer__OnDestroy(FGO_TexTrimer_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *change_texture; // x20
  UnityEngine_Object_o *v4; // x19

  if ( (byte_4C36770 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C36770 = 1;
  }
  change_texture = (UnityEngine_Object_o *)this->fields.change_texture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(change_texture, 0, 0) )
  {
    v4 = (UnityEngine_Object_o *)this->fields.change_texture;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__DestroyImmediate_71223828(v4, 0);
  }
}


void FGO_TexTrimer__Start(FGO_TexTrimer_o *this, const MethodInfo *method)
{
  __int64 Component_object; // x0
  UnityEngine_Texture_o *v4; // x20
  UnityEngine_Color_array *Pixels_71114432; // x22
  __int64 v6; // x0
  int32_t StartYpx; // w26
  int32_t EndYpx; // w28
  System_Array_o *v9; // x21
  int32_t EndXpx; // w29
  int32_t v11; // w23
  int32_t StartXpx; // w24
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  __int64 v16; // x5
  __int64 v17; // x6
  __int64 v18; // x7
  unsigned int v19; // w8
  int32_t v20; // w22
  UnityEngine_Texture2D_o *v21; // x23
  struct UnityEngine_Texture2D_o **p_change_texture; // x22
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  UnityEngine_Texture_o *change_texture; // x23
  FGO_TexTrimer_o *v26; // x0
  const MethodInfo *v27; // x1
  UnityEngine_Color_o v28; // [xsp+0h] [xbp-70h] BYREF

  if ( (byte_4C3676F & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Color___TypeInfo);
    sub_1C32C20(&UnityEngine_Color_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_Renderer___);
    sub_1C32C20(&UnityEngine_Texture2D_TypeInfo);
    byte_4C3676F = 1;
  }
  Component_object = (__int64)UnityEngine_Component__GetComponent_object_(
                                (UnityEngine_Component_o *)this,
                                (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_Renderer___);
  if ( !Component_object )
    goto LABEL_24;
  Component_object = (__int64)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)Component_object, 0);
  if ( !Component_object )
    goto LABEL_24;
  Component_object = (__int64)UnityEngine_Material__GetTexture(
                                (UnityEngine_Material_o *)Component_object,
                                this->fields.targetTexName,
                                0);
  if ( !Component_object )
    goto LABEL_24;
  v4 = (UnityEngine_Texture_o *)Component_object;
  if ( *(UnityEngine_Texture2D_c **)Component_object == UnityEngine_Texture2D_TypeInfo )
  {
    Pixels_71114432 = UnityEngine_Texture2D__GetPixels_71114432((UnityEngine_Texture2D_o *)Component_object, 0);
    v6 = sub_1C32CC8(
           UnityEngine_Color___TypeInfo,
           (unsigned int)((this->fields.EndYpx - this->fields.StartYpx) * (this->fields.EndXpx - this->fields.StartXpx)));
    StartYpx = this->fields.StartYpx;
    EndYpx = this->fields.EndYpx;
    v9 = (System_Array_o *)v6;
    if ( StartYpx >= EndYpx )
    {
      EndXpx = this->fields.EndXpx;
    }
    else
    {
      EndXpx = this->fields.EndXpx;
      v11 = 0;
      do
      {
        StartXpx = this->fields.StartXpx;
        if ( StartXpx < EndXpx )
        {
          do
          {
            Component_object = ((__int64 (__fastcall *)(UnityEngine_Texture_o *, const MethodInfo *))v4->klass->vtable._4_get_width.methodPtr)(
                                 v4,
                                 v4->klass->vtable._4_get_width.method);
            if ( !Pixels_71114432 )
              goto LABEL_24;
            v19 = StartXpx + StartYpx * Component_object;
            if ( v19 >= LODWORD(Pixels_71114432->max_length) )
              sub_1C32E84(Component_object);
            v28 = Pixels_71114432->m_Items[v19];
            Component_object = j_il2cpp_value_box_0(UnityEngine_Color_TypeInfo, &v28, v13, v14, v15, v16, v17, v18);
            if ( !v9 )
              goto LABEL_24;
            System_Array__SetValue_65179232(v9, (Il2CppObject *)Component_object, v11, 0);
            EndXpx = this->fields.EndXpx;
            ++StartXpx;
            ++v11;
          }
          while ( StartXpx < EndXpx );
          EndYpx = this->fields.EndYpx;
        }
        ++StartYpx;
      }
      while ( StartYpx < EndYpx );
      StartYpx = this->fields.StartYpx;
    }
    v20 = this->fields.StartXpx;
    v21 = (UnityEngine_Texture2D_o *)sub_1C32E6C(UnityEngine_Texture2D_TypeInfo);
    UnityEngine_Texture2D___ctor_71111856(v21, EndXpx - v20, EndYpx - StartYpx, 4, 0, 0);
    this->fields.change_texture = v21;
    p_change_texture = &this->fields.change_texture;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.change_texture, (int32_t)v21, v23, v24);
    change_texture = (UnityEngine_Texture_o *)this->fields.change_texture;
    Component_object = UnityEngine_Texture__get_filterMode(v4, 0);
    if ( change_texture )
    {
      UnityEngine_Texture__set_filterMode(change_texture, Component_object, 0);
      Component_object = (__int64)*p_change_texture;
      if ( *p_change_texture )
      {
        UnityEngine_Texture2D__SetPixels_71112936(
          (UnityEngine_Texture2D_o *)Component_object,
          (UnityEngine_Color_array *)v9,
          0);
        Component_object = (__int64)*p_change_texture;
        if ( *p_change_texture )
        {
          UnityEngine_Texture2D__Apply_71113708((UnityEngine_Texture2D_o *)Component_object, 0);
          Component_object = (__int64)UnityEngine_Component__GetComponent_object_(
                                        (UnityEngine_Component_o *)this,
                                        (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_Renderer___);
          if ( Component_object )
          {
            Component_object = (__int64)UnityEngine_Renderer__get_material(
                                          (UnityEngine_Renderer_o *)Component_object,
                                          0);
            if ( Component_object )
            {
              UnityEngine_Material__SetTexture(
                (UnityEngine_Material_o *)Component_object,
                this->fields.targetTexName,
                (UnityEngine_Texture_o *)this->fields.change_texture,
                0);
              return;
            }
          }
        }
      }
    }
LABEL_24:
    sub_1C32E7C(Component_object);
  }
  sub_1C3313C(Component_object);
  FGO_TexTrimer__OnDestroy(v26, v27);
}