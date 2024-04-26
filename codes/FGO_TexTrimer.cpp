void __fastcall FGO_TexTrimer___ctor(FGO_TexTrimer_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1

  if ( (byte_43521F7 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_16393/*"_mainTex"*/);
    byte_43521F7 = 1;
  }
  v9 = (System_Int32_array **)StringLiteral_16393/*"_mainTex"*/;
  this->fields.targetTexName = (struct System_String_o *)StringLiteral_16393/*"_mainTex"*/;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.targetTexName, v9, v2, v3, v4, v5, v6, v7);
  *(_QWORD *)&this->fields.EndXpx = 0x80000000800LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FGO_TexTrimer__OnDestroy(FGO_TexTrimer_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *change_texture; // x20
  UnityEngine_Object_o *v4; // x19

  if ( (byte_43521F6 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_43521F6 = 1;
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
    UnityEngine_Object__DestroyImmediate_36067420(v4, 0LL);
  }
}


void __fastcall FGO_TexTrimer__Start(FGO_TexTrimer_o *this, const MethodInfo *method)
{
  __int64 Component_WebViewObject; // x0
  __int64 v4; // x1
  UnityEngine_Texture_o *v5; // x20
  UnityEngine_Color_array *Pixels_36172292; // x22
  __int64 v7; // x0
  int32_t StartYpx; // w26
  int32_t EndYpx; // w28
  System_Array_o *v10; // x21
  int32_t EndXpx; // w24
  int32_t v12; // w23
  int32_t StartXpx; // w25
  __int64 v14; // x2
  il2cpp_array_size_t v15; // w8
  int32_t v16; // w22
  UnityEngine_Texture2D_o *v17; // x23
  struct UnityEngine_Texture2D_o **p_change_texture; // x22
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  UnityEngine_Texture_o *change_texture; // x23
  __int64 v26; // x0
  FGO_TexTrimer_o *v27; // x0
  const MethodInfo *v28; // x1
  __int128 v29; // [xsp+0h] [xbp-60h] BYREF

  if ( (byte_43521F5 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Color___TypeInfo);
    sub_B70694(&UnityEngine_Color_TypeInfo);
    sub_B70694(&Method_UnityEngine_Component_GetComponent_Renderer___);
    sub_B70694(&UnityEngine_Texture2D_TypeInfo);
    byte_43521F5 = 1;
  }
  Component_WebViewObject = (__int64)UnityEngine_Component__GetComponent_WebViewObject_(
                                       (UnityEngine_Component_o *)this,
                                       (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_Renderer___);
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
  v5 = (UnityEngine_Texture_o *)Component_WebViewObject;
  if ( *(UnityEngine_Texture2D_c **)Component_WebViewObject == UnityEngine_Texture2D_TypeInfo )
  {
    Pixels_36172292 = UnityEngine_Texture2D__GetPixels_36172292((UnityEngine_Texture2D_o *)Component_WebViewObject, 0LL);
    v7 = sub_B706AC(
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
            Component_WebViewObject = ((__int64 (__fastcall *)(UnityEngine_Texture_o *, Il2CppMethodPointer))v5->klass->vtable._4_get_width.method)(
                                        v5,
                                        v5->klass->vtable._5_set_width.methodPtr);
            if ( !Pixels_36172292 )
              goto LABEL_24;
            v15 = StartXpx + StartYpx * Component_WebViewObject;
            if ( v15 >= Pixels_36172292->max_length )
            {
              v26 = sub_B70798(Component_WebViewObject);
              sub_B70738(v26, 0LL);
            }
            v29 = *(_OWORD *)&Pixels_36172292->m_Items[v15].fields.g;
            Component_WebViewObject = j_il2cpp_value_box_0(UnityEngine_Color_TypeInfo, &v29, v14);
            if ( !v10 )
              goto LABEL_24;
            System_Array__SetValue_43133112(v10, (Il2CppObject *)Component_WebViewObject, v12, 0LL);
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
    v16 = this->fields.StartXpx;
    v17 = (UnityEngine_Texture2D_o *)sub_B70764(UnityEngine_Texture2D_TypeInfo);
    UnityEngine_Texture2D___ctor_36169900(v17, EndXpx - v16, EndYpx - StartYpx, 4, 0, 0LL);
    p_change_texture = &this->fields.change_texture;
    this->fields.change_texture = v17;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.change_texture,
      (System_Int32_array **)v17,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
    change_texture = (UnityEngine_Texture_o *)this->fields.change_texture;
    Component_WebViewObject = UnityEngine_Texture__get_filterMode(v5, 0LL);
    if ( change_texture )
    {
      UnityEngine_Texture__set_filterMode(change_texture, Component_WebViewObject, 0LL);
      Component_WebViewObject = (__int64)*p_change_texture;
      if ( *p_change_texture )
      {
        UnityEngine_Texture2D__SetPixels_36170948(
          (UnityEngine_Texture2D_o *)Component_WebViewObject,
          (UnityEngine_Color_array *)v10,
          0LL);
        Component_WebViewObject = (__int64)*p_change_texture;
        if ( *p_change_texture )
        {
          UnityEngine_Texture2D__Apply_36171776((UnityEngine_Texture2D_o *)Component_WebViewObject, 0LL);
          Component_WebViewObject = (__int64)UnityEngine_Component__GetComponent_WebViewObject_(
                                               (UnityEngine_Component_o *)this,
                                               (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_Renderer___);
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
    sub_B7076C(Component_WebViewObject, v4);
  }
  v27 = (FGO_TexTrimer_o *)sub_B70A60(Component_WebViewObject);
  FGO_TexTrimer__OnDestroy(v27, v28);
}