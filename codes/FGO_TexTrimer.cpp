void __fastcall FGO_TexTrimer___ctor(FGO_TexTrimer_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t v5; // w1

  if ( (byte_49FB318 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_16485/*"_mainTex"*/, method);
    byte_49FB318 = 1;
  }
  v5 = StringLiteral_16485/*"_mainTex"*/;
  this->fields.targetTexName = (struct System_String_o *)StringLiteral_16485/*"_mainTex"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.targetTexName, v5, v2, v3);
  *(_QWORD *)&this->fields.EndXpx = 0x80000000800LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FGO_TexTrimer__OnDestroy(FGO_TexTrimer_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *change_texture; // x20
  UnityEngine_Object_o *v4; // x19

  if ( (byte_49FB317 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FB317 = 1;
  }
  change_texture = (UnityEngine_Object_o *)this->fields.change_texture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(change_texture, 0LL, 0LL) )
  {
    v4 = (UnityEngine_Object_o *)this->fields.change_texture;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__DestroyImmediate_69127924(v4, 0LL);
  }
}


void __fastcall FGO_TexTrimer__Start(FGO_TexTrimer_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 Component_object; // x0
  UnityEngine_Texture_o *v7; // x20
  UnityEngine_Color_array *Pixels_69018576; // x22
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  int32_t StartYpx; // w26
  int32_t EndYpx; // w28
  System_Array_o *v14; // x21
  int32_t EndXpx; // w29
  int32_t v16; // w23
  int32_t StartXpx; // w24
  __int64 v18; // x1
  il2cpp_array_size_t v19; // w8
  int32_t v20; // w22
  UnityEngine_Texture2D_o *v21; // x23
  struct UnityEngine_Texture2D_o **p_change_texture; // x22
  int32_t v23; // w2
  int32_t v24; // w3
  UnityEngine_Texture_o *change_texture; // x23
  FGO_TexTrimer_o *v26; // x0
  const MethodInfo *v27; // x1
  __int128 v28; // [xsp+0h] [xbp-70h] BYREF

  if ( (byte_49FB316 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Color___TypeInfo, method);
    sub_1B640C8(&UnityEngine_Color_TypeInfo, v3);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_Renderer___, v4);
    sub_1B640C8(&UnityEngine_Texture2D_TypeInfo, v5);
    byte_49FB316 = 1;
  }
  Component_object = (__int64)UnityEngine_Component__GetComponent_object_(
                                (UnityEngine_Component_o *)this,
                                (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_Renderer___);
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
  v7 = (UnityEngine_Texture_o *)Component_object;
  if ( *(UnityEngine_Texture2D_c **)Component_object == UnityEngine_Texture2D_TypeInfo )
  {
    Pixels_69018576 = UnityEngine_Texture2D__GetPixels_69018576((UnityEngine_Texture2D_o *)Component_object, 0LL);
    v9 = sub_1B64170(
           UnityEngine_Color___TypeInfo,
           (unsigned int)((this->fields.EndYpx - this->fields.StartYpx) * (this->fields.EndXpx - this->fields.StartXpx)));
    StartYpx = this->fields.StartYpx;
    EndYpx = this->fields.EndYpx;
    v14 = (System_Array_o *)v9;
    if ( StartYpx >= EndYpx )
    {
      EndXpx = this->fields.EndXpx;
    }
    else
    {
      EndXpx = this->fields.EndXpx;
      v16 = 0;
      do
      {
        StartXpx = this->fields.StartXpx;
        if ( StartXpx < EndXpx )
        {
          do
          {
            Component_object = ((__int64 (__fastcall *)(UnityEngine_Texture_o *, Il2CppMethodPointer))v7->klass->vtable._4_get_width.method)(
                                 v7,
                                 v7->klass->vtable._5_set_width.methodPtr);
            if ( !Pixels_69018576 )
              goto LABEL_24;
            v19 = StartXpx + StartYpx * Component_object;
            if ( v19 >= Pixels_69018576->max_length )
              sub_1B6432C(Component_object, v18);
            v28 = *(_OWORD *)&Pixels_69018576->m_Items[v19].fields.g;
            Component_object = j_il2cpp_value_box_0(UnityEngine_Color_TypeInfo, &v28);
            if ( !v14 )
              goto LABEL_24;
            System_Array__SetValue_62329396(v14, (Il2CppObject *)Component_object, v16, 0LL);
            EndXpx = this->fields.EndXpx;
            ++StartXpx;
            ++v16;
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
    v21 = (UnityEngine_Texture2D_o *)sub_1B64314(UnityEngine_Texture2D_TypeInfo, v10, v11);
    UnityEngine_Texture2D___ctor_69016000(v21, EndXpx - v20, EndYpx - StartYpx, 4, 0, 0LL);
    this->fields.change_texture = v21;
    p_change_texture = &this->fields.change_texture;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.change_texture, (int32_t)v21, v23, v24);
    change_texture = (UnityEngine_Texture_o *)this->fields.change_texture;
    Component_object = UnityEngine_Texture__get_filterMode(v7, 0LL);
    if ( change_texture )
    {
      UnityEngine_Texture__set_filterMode(change_texture, Component_object, 0LL);
      Component_object = (__int64)*p_change_texture;
      if ( *p_change_texture )
      {
        UnityEngine_Texture2D__SetPixels_69017080(
          (UnityEngine_Texture2D_o *)Component_object,
          (UnityEngine_Color_array *)v14,
          0LL);
        Component_object = (__int64)*p_change_texture;
        if ( *p_change_texture )
        {
          UnityEngine_Texture2D__Apply_69017852((UnityEngine_Texture2D_o *)Component_object, 0LL);
          Component_object = (__int64)UnityEngine_Component__GetComponent_object_(
                                        (UnityEngine_Component_o *)this,
                                        (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_Renderer___);
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
    sub_1B64324(Component_object);
  }
  sub_1B645E4(Component_object);
  FGO_TexTrimer__OnDestroy(v26, v27);
}