void FGO_TexTrimer___ctor(FGO_TexTrimer_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v9; // w1

  if ( (byte_4D2F78F & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_16669/*"_mainTex"*/);
    byte_4D2F78F = 1;
  }
  v9 = StringLiteral_16669/*"_mainTex"*/;
  this->fields.targetTexName = (struct System_String_o *)StringLiteral_16669/*"_mainTex"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.targetTexName, v9, v2, v3, v4, v5, v6, v7);
  *(_QWORD *)&this->fields.EndXpx = 0x80000000800LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void FGO_TexTrimer__OnDestroy(FGO_TexTrimer_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *change_texture; // x20
  UnityEngine_Object_o *v4; // x19

  if ( (byte_4D2F78E & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2F78E = 1;
  }
  change_texture = (UnityEngine_Object_o *)this->fields.change_texture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(change_texture, 0, 0) )
  {
    v4 = (UnityEngine_Object_o *)this->fields.change_texture;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__DestroyImmediate_72120096(v4, 0);
  }
}


void FGO_TexTrimer__Start(FGO_TexTrimer_o *this, const MethodInfo *method)
{
  __int64 Component_object; // x0
  __int64 v4; // x1
  UnityEngine_Texture_o *v5; // x20
  UnityEngine_Color_array *Pixels_72010068; // x22
  __int64 v7; // x0
  int32_t StartYpx; // w26
  int32_t EndYpx; // w28
  System_Array_o *v10; // x21
  int32_t EndXpx; // w29
  int32_t v12; // w23
  int32_t StartXpx; // w24
  unsigned int v14; // w8
  int32_t v15; // w22
  UnityEngine_Texture2D_o *v16; // x23
  struct UnityEngine_Texture2D_o **p_change_texture; // x22
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  UnityEngine_Texture_o *change_texture; // x23
  FGO_TexTrimer_o *v25; // x0
  const MethodInfo *v26; // x1
  UnityEngine_Color_o v27; // [xsp+0h] [xbp-70h] BYREF

  if ( (byte_4D2F78D & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Color___TypeInfo);
    sub_1C93AD4(&UnityEngine_Color_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_Renderer___);
    sub_1C93AD4(&UnityEngine_Texture2D_TypeInfo);
    byte_4D2F78D = 1;
  }
  Component_object = (__int64)UnityEngine_Component__GetComponent_object_(
                                (UnityEngine_Component_o *)this,
                                (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_Renderer___);
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
    Pixels_72010068 = UnityEngine_Texture2D__GetPixels_72010068((UnityEngine_Texture2D_o *)Component_object, 0);
    v7 = sub_1C93B7C(
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
            if ( !Pixels_72010068 )
              goto LABEL_24;
            v14 = StartXpx + StartYpx * Component_object;
            if ( v14 >= LODWORD(Pixels_72010068->max_length) )
              sub_1C93D34(Component_object);
            v27 = Pixels_72010068->m_Items[v14];
            Component_object = j_il2cpp_value_box_0(UnityEngine_Color_TypeInfo, &v27);
            if ( !v10 )
              goto LABEL_24;
            System_Array__SetValue_66084800(v10, (Il2CppObject *)Component_object, v12, 0);
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
    v15 = this->fields.StartXpx;
    v16 = (UnityEngine_Texture2D_o *)sub_1C93D20(UnityEngine_Texture2D_TypeInfo);
    UnityEngine_Texture2D___ctor_72007492(v16, EndXpx - v15, EndYpx - StartYpx, 4, 0, 0);
    this->fields.change_texture = v16;
    p_change_texture = &this->fields.change_texture;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.change_texture, (int32_t)v16, v18, v19, v20, v21, v22, v23);
    change_texture = (UnityEngine_Texture_o *)this->fields.change_texture;
    Component_object = UnityEngine_Texture__get_filterMode(v5, 0);
    if ( change_texture )
    {
      UnityEngine_Texture__set_filterMode(change_texture, Component_object, 0);
      Component_object = (__int64)*p_change_texture;
      if ( *p_change_texture )
      {
        UnityEngine_Texture2D__SetPixels_72008572(
          (UnityEngine_Texture2D_o *)Component_object,
          (UnityEngine_Color_array *)v10,
          0);
        Component_object = (__int64)*p_change_texture;
        if ( *p_change_texture )
        {
          UnityEngine_Texture2D__Apply_72009344((UnityEngine_Texture2D_o *)Component_object, 0);
          Component_object = (__int64)UnityEngine_Component__GetComponent_object_(
                                        (UnityEngine_Component_o *)this,
                                        (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_Renderer___);
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
    sub_1C93D2C(Component_object, v4);
  }
  sub_1C940C8(Component_object);
  FGO_TexTrimer__OnDestroy(v25, v26);
}