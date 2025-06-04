void __fastcall FGO_TexTrimer___ctor(FGO_TexTrimer_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w1

  if ( (byte_4B00E1B & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_16417/*"_mainTex"*/, method);
    byte_4B00E1B = 1;
  }
  v5 = StringLiteral_16417/*"_mainTex"*/;
  this->fields.targetTexName = (struct System_String_o *)StringLiteral_16417/*"_mainTex"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.targetTexName, v5, v2, v3);
  *(_QWORD *)&this->fields.EndXpx = 0x80000000800LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FGO_TexTrimer__OnDestroy(FGO_TexTrimer_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *change_texture; // x20
  UnityEngine_Object_o *v4; // x19

  if ( (byte_4B00E1A & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4B00E1A = 1;
  }
  change_texture = (UnityEngine_Object_o *)this->fields.change_texture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(change_texture, 0LL, 0LL) )
  {
    v4 = (UnityEngine_Object_o *)this->fields.change_texture;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__DestroyImmediate_70034488(v4, 0LL);
  }
}


void __fastcall FGO_TexTrimer__Start(FGO_TexTrimer_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 Component_object; // x0
  __int64 v7; // x1
  UnityEngine_Texture_o *v8; // x20
  UnityEngine_Color_array *Pixels_69925092; // x22
  __int64 v10; // x0
  int32_t StartYpx; // w26
  int32_t EndYpx; // w28
  System_Array_o *v13; // x21
  int32_t EndXpx; // w29
  int32_t v15; // w23
  int32_t StartXpx; // w24
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  il2cpp_array_size_t v20; // w8
  int32_t v21; // w22
  UnityEngine_Texture2D_o *v22; // x23
  struct UnityEngine_Texture2D_o **p_change_texture; // x22
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  UnityEngine_Texture_o *change_texture; // x23
  FGO_TexTrimer_o *v27; // x0
  const MethodInfo *v28; // x1
  __int128 v29; // [xsp+0h] [xbp-70h] BYREF

  if ( (byte_4B00E19 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Color___TypeInfo, method);
    sub_1BC3008(&UnityEngine_Color_TypeInfo, v3);
    sub_1BC3008(&Method_UnityEngine_Component_GetComponent_Renderer___, v4);
    sub_1BC3008(&UnityEngine_Texture2D_TypeInfo, v5);
    byte_4B00E19 = 1;
  }
  Component_object = (__int64)UnityEngine_Component__GetComponent_object_(
                                (UnityEngine_Component_o *)this,
                                (const MethodInfo_2FF8634 *)Method_UnityEngine_Component_GetComponent_Renderer___);
  if ( !Component_object )
    goto LABEL_24;
  Component_object = (__int64)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)Component_object, 0LL);
  if ( !Component_object )
    goto LABEL_24;
  Component_object = (__int64)UnityEngine_Material__GetTexture(
                                (UnityEngine_Material_o *)Component_object,
                                this->fields.targetTexName,
                                0LL);
  if ( !Component_object )
    goto LABEL_24;
  v8 = (UnityEngine_Texture_o *)Component_object;
  if ( *(UnityEngine_Texture2D_c **)Component_object == UnityEngine_Texture2D_TypeInfo )
  {
    Pixels_69925092 = UnityEngine_Texture2D__GetPixels_69925092((UnityEngine_Texture2D_o *)Component_object, 0LL);
    v10 = sub_1BC30B0(
            UnityEngine_Color___TypeInfo,
            (unsigned int)((this->fields.EndYpx - this->fields.StartYpx) * (this->fields.EndXpx - this->fields.StartXpx)));
    StartYpx = this->fields.StartYpx;
    EndYpx = this->fields.EndYpx;
    v13 = (System_Array_o *)v10;
    if ( StartYpx >= EndYpx )
    {
      EndXpx = this->fields.EndXpx;
    }
    else
    {
      EndXpx = this->fields.EndXpx;
      v15 = 0;
      do
      {
        StartXpx = this->fields.StartXpx;
        if ( StartXpx < EndXpx )
        {
          do
          {
            Component_object = ((__int64 (__fastcall *)(UnityEngine_Texture_o *, Il2CppMethodPointer))v8->klass->vtable._4_get_width.method)(
                                 v8,
                                 v8->klass->vtable._5_set_width.methodPtr);
            if ( !Pixels_69925092 )
              goto LABEL_24;
            v20 = StartXpx + StartYpx * Component_object;
            if ( v20 >= Pixels_69925092->max_length )
              sub_1BC326C(Component_object, v7, v17);
            v29 = *(_OWORD *)&Pixels_69925092->m_Items[v20].fields.g;
            Component_object = j_il2cpp_value_box_0(UnityEngine_Color_TypeInfo, &v29, v17, v18, v19);
            if ( !v13 )
              goto LABEL_24;
            System_Array__SetValue_64008152(v13, (Il2CppObject *)Component_object, v15, 0LL);
            EndXpx = this->fields.EndXpx;
            ++StartXpx;
            ++v15;
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
    v22 = (UnityEngine_Texture2D_o *)sub_1BC3254(UnityEngine_Texture2D_TypeInfo);
    UnityEngine_Texture2D___ctor_69922516(v22, EndXpx - v21, EndYpx - StartYpx, 4, 0, 0LL);
    this->fields.change_texture = v22;
    p_change_texture = &this->fields.change_texture;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.change_texture, (int32_t)v22, v24, v25);
    change_texture = (UnityEngine_Texture_o *)this->fields.change_texture;
    Component_object = UnityEngine_Texture__get_filterMode(v8, 0LL);
    if ( change_texture )
    {
      UnityEngine_Texture__set_filterMode(change_texture, Component_object, 0LL);
      Component_object = (__int64)*p_change_texture;
      if ( *p_change_texture )
      {
        UnityEngine_Texture2D__SetPixels_69923596(
          (UnityEngine_Texture2D_o *)Component_object,
          (UnityEngine_Color_array *)v13,
          0LL);
        Component_object = (__int64)*p_change_texture;
        if ( *p_change_texture )
        {
          UnityEngine_Texture2D__Apply_69924368((UnityEngine_Texture2D_o *)Component_object, 0LL);
          Component_object = (__int64)UnityEngine_Component__GetComponent_object_(
                                        (UnityEngine_Component_o *)this,
                                        (const MethodInfo_2FF8634 *)Method_UnityEngine_Component_GetComponent_Renderer___);
          if ( Component_object )
          {
            Component_object = (__int64)UnityEngine_Renderer__get_material(
                                          (UnityEngine_Renderer_o *)Component_object,
                                          0LL);
            if ( Component_object )
            {
              UnityEngine_Material__SetTexture(
                (UnityEngine_Material_o *)Component_object,
                this->fields.targetTexName,
                (UnityEngine_Texture_o *)this->fields.change_texture,
                0LL);
              return;
            }
          }
        }
      }
    }
LABEL_24:
    sub_1BC3264(Component_object, v7);
  }
  sub_1BC3524(Component_object);
  FGO_TexTrimer__OnDestroy(v27, v28);
}