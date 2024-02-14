void __fastcall FGO_TexTrimer___ctor(FGO_TexTrimer_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1

  if ( (byte_4215429 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_16204/*"_mainTex"*/, method);
    byte_4215429 = 1;
  }
  v9 = (System_Int32_array **)StringLiteral_16204/*"_mainTex"*/;
  this->fields.targetTexName = (struct System_String_o *)StringLiteral_16204/*"_mainTex"*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.targetTexName, v9, v2, v3, v4, v5, v6, v7);
  *(_QWORD *)&this->fields.EndXpx = 0x80000000800LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FGO_TexTrimer__OnDestroy(FGO_TexTrimer_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *change_texture; // x20
  UnityEngine_Object_o *v4; // x19

  if ( (byte_4215428 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4215428 = 1;
  }
  change_texture = (UnityEngine_Object_o *)this->fields.change_texture;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(change_texture, 0LL, 0LL) )
  {
    v4 = (UnityEngine_Object_o *)this->fields.change_texture;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__DestroyImmediate_34935488(v4, 0LL);
  }
}


void __fastcall FGO_TexTrimer__Start(FGO_TexTrimer_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 Component_WebViewObject; // x0
  UnityEngine_Texture_o *v7; // x20
  UnityEngine_Color_array *Pixels_35040192; // x22
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  int32_t StartYpx; // w26
  int32_t EndYpx; // w28
  System_Array_o *v14; // x21
  int32_t EndXpx; // w24
  int32_t v16; // w23
  int32_t StartXpx; // w25
  il2cpp_array_size_t v18; // w8
  int32_t v19; // w22
  UnityEngine_Texture2D_o *v20; // x23
  struct UnityEngine_Texture2D_o **p_change_texture; // x22
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  UnityEngine_Texture_o *change_texture; // x23
  __int64 v29; // x0
  FGO_TexTrimer_o *v30; // x0
  const MethodInfo *v31; // x1
  __int128 v32; // [xsp+0h] [xbp-60h] BYREF

  if ( (byte_4215427 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Color___TypeInfo, method);
    sub_B0D8A4(&UnityEngine_Color_TypeInfo, v3);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_Renderer___, v4);
    sub_B0D8A4(&UnityEngine_Texture2D_TypeInfo, v5);
    byte_4215427 = 1;
  }
  Component_WebViewObject = (__int64)UnityEngine_Component__GetComponent_WebViewObject_(
                                       (UnityEngine_Component_o *)this,
                                       (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_Renderer___);
  if ( !Component_WebViewObject )
    goto LABEL_24;
  Component_WebViewObject = (__int64)UnityEngine_Renderer__get_material(
                                       (UnityEngine_Renderer_o *)Component_WebViewObject,
                                       0LL);
  if ( !Component_WebViewObject )
    goto LABEL_24;
  Component_WebViewObject = (__int64)UnityEngine_Material__GetTexture(
                                       (UnityEngine_Material_o *)Component_WebViewObject,
                                       this->fields.targetTexName,
                                       0LL);
  if ( !Component_WebViewObject )
    goto LABEL_24;
  v7 = (UnityEngine_Texture_o *)Component_WebViewObject;
  if ( *(UnityEngine_Texture2D_c **)Component_WebViewObject == UnityEngine_Texture2D_TypeInfo )
  {
    Pixels_35040192 = UnityEngine_Texture2D__GetPixels_35040192((UnityEngine_Texture2D_o *)Component_WebViewObject, 0LL);
    v9 = sub_B0D8BC(
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
            Component_WebViewObject = ((__int64 (__fastcall *)(UnityEngine_Texture_o *, Il2CppMethodPointer))v7->klass->vtable._4_get_width.method)(
                                        v7,
                                        v7->klass->vtable._5_set_width.methodPtr);
            if ( !Pixels_35040192 )
              goto LABEL_24;
            v18 = StartXpx + StartYpx * Component_WebViewObject;
            if ( v18 >= Pixels_35040192->max_length )
            {
              v29 = sub_B0D9A8(Component_WebViewObject);
              sub_B0D948(v29, 0LL);
            }
            v32 = *(_OWORD *)&Pixels_35040192->m_Items[v18].fields.g;
            Component_WebViewObject = j_il2cpp_value_box_0(UnityEngine_Color_TypeInfo, &v32);
            if ( !v14 )
              goto LABEL_24;
            System_Array__SetValue_42581596(v14, (Il2CppObject *)Component_WebViewObject, v16, 0LL);
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
    v19 = this->fields.StartXpx;
    v20 = (UnityEngine_Texture2D_o *)sub_B0D974(UnityEngine_Texture2D_TypeInfo, v10, v11);
    UnityEngine_Texture2D___ctor_35037800(v20, EndXpx - v19, EndYpx - StartYpx, 4, 0, 0LL);
    p_change_texture = &this->fields.change_texture;
    this->fields.change_texture = v20;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.change_texture,
      (System_Int32_array **)v20,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
    change_texture = (UnityEngine_Texture_o *)this->fields.change_texture;
    Component_WebViewObject = UnityEngine_Texture__get_filterMode(v7, 0LL);
    if ( change_texture )
    {
      UnityEngine_Texture__set_filterMode(change_texture, Component_WebViewObject, 0LL);
      Component_WebViewObject = (__int64)*p_change_texture;
      if ( *p_change_texture )
      {
        UnityEngine_Texture2D__SetPixels_35038848(
          (UnityEngine_Texture2D_o *)Component_WebViewObject,
          (UnityEngine_Color_array *)v14,
          0LL);
        Component_WebViewObject = (__int64)*p_change_texture;
        if ( *p_change_texture )
        {
          UnityEngine_Texture2D__Apply_35039676((UnityEngine_Texture2D_o *)Component_WebViewObject, 0LL);
          Component_WebViewObject = (__int64)UnityEngine_Component__GetComponent_WebViewObject_(
                                               (UnityEngine_Component_o *)this,
                                               (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_Renderer___);
          if ( Component_WebViewObject )
          {
            Component_WebViewObject = (__int64)UnityEngine_Renderer__get_material(
                                                 (UnityEngine_Renderer_o *)Component_WebViewObject,
                                                 0LL);
            if ( Component_WebViewObject )
            {
              UnityEngine_Material__SetTexture(
                (UnityEngine_Material_o *)Component_WebViewObject,
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
    sub_B0D97C(Component_WebViewObject);
  }
  v30 = (FGO_TexTrimer_o *)sub_B0DC70(Component_WebViewObject);
  FGO_TexTrimer__OnDestroy(v30, v31);
}