void FGO_TexTrimer___ctor(FGO_TexTrimer_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t v9; // w1

  if ( (byte_596F54E & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_17239/*"_mainTex"*/);
    byte_596F54E = 1;
  }
  v9 = StringLiteral_17239/*"_mainTex"*/;
  this->fields.targetTexName = (struct System_String_o *)StringLiteral_17239/*"_mainTex"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.targetTexName, v9, v2, v3, v4, v5, v6, v7);
  *(_QWORD *)&this->fields.EndXpx = 0x80000000800LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void FGO_TexTrimer__OnDestroy(FGO_TexTrimer_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *change_texture; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *v7; // x19

  if ( (byte_596F54D & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596F54D = 1;
  }
  change_texture = (UnityEngine_Object_o *)this->fields.change_texture;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(change_texture, 0, 0) )
  {
    v7 = (UnityEngine_Object_o *)this->fields.change_texture;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
    UnityEngine_Object__DestroyImmediate_83460132(v7, 0);
  }
}


void FGO_TexTrimer__Start(FGO_TexTrimer_o *this, const MethodInfo *method)
{
  __int64 Component_object; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x3
  UnityEngine_Texture_o *v7; // x20
  UnityEngine_Color_array *Pixels_83321228; // x22
  __int64 v9; // x0
  int32_t EndXpx; // w28
  int32_t EndYpx; // w29
  int32_t StartYpx; // w26
  System_Array_o *v13; // x21
  int32_t v14; // w23
  int32_t StartXpx; // w24
  unsigned int v16; // w8
  int32_t v17; // w22
  UnityEngine_Texture2D_o *v18; // x23
  struct UnityEngine_Texture2D_o **p_change_texture; // x22
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  UnityEngine_Texture_o *change_texture; // x23
  FGO_TexTrimer_o *v27; // x0
  const MethodInfo *v28; // x1
  UnityEngine_Color_o v29; // [xsp+0h] [xbp-70h] BYREF

  if ( (byte_596F54C & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Color___TypeInfo);
    sub_2213A60(&UnityEngine_Color_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Renderer___);
    sub_2213A60(&UnityEngine_Texture2D_TypeInfo);
    byte_596F54C = 1;
  }
  Component_object = (__int64)UnityEngine_Component__GetComponent_object_(
                                (UnityEngine_Component_o *)this,
                                (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Renderer___);
  if ( !Component_object )
    goto LABEL_23;
  Component_object = (__int64)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)Component_object, 0);
  if ( !Component_object )
    goto LABEL_23;
  Component_object = (__int64)UnityEngine_Material__GetTexture(
                                (UnityEngine_Material_o *)Component_object,
                                this->fields.targetTexName,
                                0);
  if ( !Component_object )
    goto LABEL_23;
  v7 = (UnityEngine_Texture_o *)Component_object;
  if ( *(UnityEngine_Texture2D_c **)Component_object == UnityEngine_Texture2D_TypeInfo )
  {
    Pixels_83321228 = UnityEngine_Texture2D__GetPixels_83321228((UnityEngine_Texture2D_o *)Component_object, 0);
    v9 = sub_2213B20(
           UnityEngine_Color___TypeInfo,
           (unsigned int)((this->fields.EndYpx - this->fields.StartYpx) * (this->fields.EndXpx - this->fields.StartXpx)));
    EndXpx = this->fields.EndXpx;
    EndYpx = this->fields.EndYpx;
    StartYpx = this->fields.StartYpx;
    v13 = (System_Array_o *)v9;
    if ( StartYpx < EndYpx )
    {
      v14 = 0;
      do
      {
        StartXpx = this->fields.StartXpx;
        if ( StartXpx < EndXpx )
        {
          do
          {
            Component_object = ((__int64 (__fastcall *)(UnityEngine_Texture_o *, const MethodInfo *))v7->klass->vtable._4_get_width.methodPtr)(
                                 v7,
                                 v7->klass->vtable._4_get_width.method);
            if ( !Pixels_83321228 )
              goto LABEL_23;
            v16 = StartXpx + StartYpx * Component_object;
            if ( v16 >= LODWORD(Pixels_83321228->max_length) )
              sub_2213CE4(Component_object);
            v29 = Pixels_83321228->m_Items[v16];
            Component_object = j_il2cpp_value_box_0(UnityEngine_Color_TypeInfo, &v29);
            if ( !v13 )
              goto LABEL_23;
            System_Array__SetValue_77290088(v13, (Il2CppObject *)Component_object, v14, 0);
            EndXpx = this->fields.EndXpx;
            ++StartXpx;
            ++v14;
          }
          while ( StartXpx < EndXpx );
          EndYpx = this->fields.EndYpx;
        }
        ++StartYpx;
      }
      while ( StartYpx < EndYpx );
      StartYpx = this->fields.StartYpx;
    }
    v17 = this->fields.StartXpx;
    v18 = (UnityEngine_Texture2D_o *)sub_2213CCC(UnityEngine_Texture2D_TypeInfo);
    UnityEngine_Texture2D___ctor_83318944(v18, EndXpx - v17, EndYpx - StartYpx, 4, 0, 0);
    this->fields.change_texture = v18;
    p_change_texture = &this->fields.change_texture;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.change_texture,
      (int32_t)v18,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
    change_texture = (UnityEngine_Texture_o *)this->fields.change_texture;
    Component_object = UnityEngine_Texture__get_filterMode(v7, 0);
    if ( change_texture )
    {
      UnityEngine_Texture__set_filterMode(change_texture, Component_object, 0);
      Component_object = (__int64)*p_change_texture;
      if ( *p_change_texture )
      {
        UnityEngine_Texture2D__SetPixels_83320140(
          (UnityEngine_Texture2D_o *)Component_object,
          (UnityEngine_Color_array *)v13,
          0);
        Component_object = (__int64)*p_change_texture;
        if ( *p_change_texture )
        {
          UnityEngine_Texture2D__Apply_83320824((UnityEngine_Texture2D_o *)Component_object, 0);
          Component_object = (__int64)UnityEngine_Component__GetComponent_object_(
                                        (UnityEngine_Component_o *)this,
                                        (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Renderer___);
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
LABEL_23:
    sub_2213CDC(Component_object, v4);
  }
  sub_221405C(Component_object, UnityEngine_Texture2D_TypeInfo, v5, v6);
  FGO_TexTrimer__OnDestroy(v27, v28);
}