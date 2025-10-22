void FGO_TexTrimer___ctor(FGO_TexTrimer_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w1

  if ( (byte_4C55B02 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_16576/*"_mainTex"*/);
    byte_4C55B02 = 1;
  }
  v5 = StringLiteral_16576/*"_mainTex"*/;
  this->fields.targetTexName = (struct System_String_o *)StringLiteral_16576/*"_mainTex"*/;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.targetTexName, v5, v2, v3);
  *(_QWORD *)&this->fields.EndXpx = 0x80000000800LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void FGO_TexTrimer__OnDestroy(FGO_TexTrimer_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *change_texture; // x20
  UnityEngine_Object_o *v4; // x19

  if ( (byte_4C55B01 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C55B01 = 1;
  }
  change_texture = (UnityEngine_Object_o *)this->fields.change_texture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(change_texture, 0, 0) )
  {
    v4 = (UnityEngine_Object_o *)this->fields.change_texture;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__DestroyImmediate_71341752(v4, 0);
  }
}


void FGO_TexTrimer__Start(FGO_TexTrimer_o *this, const MethodInfo *method)
{
  __int64 Component_object; // x0
  __int64 v4; // x1
  UnityEngine_Texture_o *v5; // x20
  UnityEngine_Color_array *Pixels_71232356; // x22
  __int64 v7; // x0
  int32_t StartYpx; // w26
  int32_t EndYpx; // w28
  System_Array_o *v10; // x21
  int32_t EndXpx; // w29
  int32_t v12; // w23
  int32_t StartXpx; // w24
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  __int64 v17; // x5
  __int64 v18; // x6
  __int64 v19; // x7
  unsigned int v20; // w8
  int32_t v21; // w22
  UnityEngine_Texture2D_o *v22; // x23
  struct UnityEngine_Texture2D_o **p_change_texture; // x22
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  UnityEngine_Texture_o *change_texture; // x23
  FGO_TexTrimer_o *v27; // x0
  const MethodInfo *v28; // x1
  UnityEngine_Color_o v29; // [xsp+0h] [xbp-70h] BYREF

  if ( (byte_4C55B00 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Color___TypeInfo);
    sub_1C3E564(&UnityEngine_Color_TypeInfo);
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_Renderer___);
    sub_1C3E564(&UnityEngine_Texture2D_TypeInfo);
    byte_4C55B00 = 1;
  }
  Component_object = (__int64)UnityEngine_Component__GetComponent_object_(
                                (UnityEngine_Component_o *)this,
                                (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_Renderer___);
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
  v5 = (UnityEngine_Texture_o *)Component_object;
  if ( *(UnityEngine_Texture2D_c **)Component_object == UnityEngine_Texture2D_TypeInfo )
  {
    Pixels_71232356 = UnityEngine_Texture2D__GetPixels_71232356((UnityEngine_Texture2D_o *)Component_object, 0);
    v7 = sub_1C3E60C(
           UnityEngine_Color___TypeInfo,
           (unsigned int)((this->fields.EndYpx - this->fields.StartYpx) * (this->fields.EndXpx - this->fields.StartXpx)));
    StartYpx = this->fields.StartYpx;
    EndYpx = this->fields.EndYpx;
    v10 = (System_Array_o *)v7;
    if ( StartYpx >= EndYpx )
    {
      EndXpx = this->fields.EndXpx;
    }
    else
    {
      EndXpx = this->fields.EndXpx;
      v12 = 0;
      do
      {
        StartXpx = this->fields.StartXpx;
        if ( StartXpx < EndXpx )
        {
          do
          {
            Component_object = ((__int64 (__fastcall *)(UnityEngine_Texture_o *, const MethodInfo *))v5->klass->vtable._4_get_width.methodPtr)(
                                 v5,
                                 v5->klass->vtable._4_get_width.method);
            if ( !Pixels_71232356 )
              goto LABEL_24;
            v20 = StartXpx + StartYpx * Component_object;
            if ( v20 >= LODWORD(Pixels_71232356->max_length) )
              sub_1C3E7C8(Component_object, v4);
            v29 = Pixels_71232356->m_Items[v20];
            Component_object = j_il2cpp_value_box_0(UnityEngine_Color_TypeInfo, &v29, v14, v15, v16, v17, v18, v19);
            if ( !v10 )
              goto LABEL_24;
            System_Array__SetValue_65297156(v10, (Il2CppObject *)Component_object, v12, 0);
            EndXpx = this->fields.EndXpx;
            ++StartXpx;
            ++v12;
          }
          while ( StartXpx < EndXpx );
          EndYpx = this->fields.EndYpx;
        }
        ++StartYpx;
      }
      while ( StartYpx < EndYpx );
      StartYpx = this->fields.StartYpx;
    }
    v21 = this->fields.StartXpx;
    v22 = (UnityEngine_Texture2D_o *)sub_1C3E7B0(UnityEngine_Texture2D_TypeInfo);
    UnityEngine_Texture2D___ctor_71229780(v22, EndXpx - v21, EndYpx - StartYpx, 4, 0, 0);
    this->fields.change_texture = v22;
    p_change_texture = &this->fields.change_texture;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.change_texture, (int32_t)v22, v24, v25);
    change_texture = (UnityEngine_Texture_o *)this->fields.change_texture;
    Component_object = UnityEngine_Texture__get_filterMode(v5, 0);
    if ( change_texture )
    {
      UnityEngine_Texture__set_filterMode(change_texture, Component_object, 0);
      Component_object = (__int64)*p_change_texture;
      if ( *p_change_texture )
      {
        UnityEngine_Texture2D__SetPixels_71230860(
          (UnityEngine_Texture2D_o *)Component_object,
          (UnityEngine_Color_array *)v10,
          0);
        Component_object = (__int64)*p_change_texture;
        if ( *p_change_texture )
        {
          UnityEngine_Texture2D__Apply_71231632((UnityEngine_Texture2D_o *)Component_object, 0);
          Component_object = (__int64)UnityEngine_Component__GetComponent_object_(
                                        (UnityEngine_Component_o *)this,
                                        (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_Renderer___);
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
    sub_1C3E7C0(Component_object, v4);
  }
  sub_1C3EA80(Component_object);
  FGO_TexTrimer__OnDestroy(v27, v28);
}