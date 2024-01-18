void __fastcall FGO_TexTrimer___ctor(FGO_TexTrimer_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1

  if ( (byte_41885B0 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_16156/*"_mainTex"*/, method);
    byte_41885B0 = 1;
  }
  v9 = (System_Int32_array **)StringLiteral_16156/*"_mainTex"*/;
  this->fields.targetTexName = (struct System_String_o *)StringLiteral_16156/*"_mainTex"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.targetTexName, v9, v2, v3, v4, v5, v6, v7);
  *(_QWORD *)&this->fields.EndXpx = 0x80000000800LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FGO_TexTrimer__OnDestroy(FGO_TexTrimer_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *change_texture; // x20
  UnityEngine_Object_o *v4; // x19

  if ( (byte_41885AF & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_41885AF = 1;
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
    UnityEngine_Object__DestroyImmediate_35315108(v4, 0LL);
  }
}


void __fastcall FGO_TexTrimer__Start(FGO_TexTrimer_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 Component_WebViewObject; // x0
  __int64 v7; // x1
  UnityEngine_Texture_o *v8; // x20
  UnityEngine_Color_array *Pixels_35419812; // x22
  __int64 v10; // x0
  int32_t StartYpx; // w26
  int32_t EndYpx; // w28
  System_Array_o *v13; // x21
  int32_t EndXpx; // w24
  int32_t v15; // w23
  int32_t StartXpx; // w25
  il2cpp_array_size_t v17; // w8
  int32_t v18; // w22
  UnityEngine_Texture2D_o *v19; // x23
  struct UnityEngine_Texture2D_o **p_change_texture; // x22
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  UnityEngine_Texture_o *change_texture; // x23
  __int64 v28; // x0
  FGO_TexTrimer_o *v29; // x0
  const MethodInfo *v30; // x1
  __int128 v31; // [xsp+0h] [xbp-60h] BYREF

  if ( (byte_41885AE & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Color___TypeInfo, method);
    sub_B2C35C(&UnityEngine_Color_TypeInfo, v3);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_Renderer___, v4);
    sub_B2C35C(&UnityEngine_Texture2D_TypeInfo, v5);
    byte_41885AE = 1;
  }
  Component_WebViewObject = (__int64)UnityEngine_Component__GetComponent_WebViewObject_(
                                       (UnityEngine_Component_o *)this,
                                       (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Renderer___);
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
  v8 = (UnityEngine_Texture_o *)Component_WebViewObject;
  if ( *(UnityEngine_Texture2D_c **)Component_WebViewObject == UnityEngine_Texture2D_TypeInfo )
  {
    Pixels_35419812 = UnityEngine_Texture2D__GetPixels_35419812((UnityEngine_Texture2D_o *)Component_WebViewObject, 0LL);
    v10 = sub_B2C374(
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
            Component_WebViewObject = ((__int64 (__fastcall *)(UnityEngine_Texture_o *, Il2CppMethodPointer))v8->klass->vtable._4_get_width.method)(
                                        v8,
                                        v8->klass->vtable._5_set_width.methodPtr);
            if ( !Pixels_35419812 )
              goto LABEL_24;
            v17 = StartXpx + StartYpx * Component_WebViewObject;
            if ( v17 >= Pixels_35419812->max_length )
            {
              v28 = sub_B2C460(Component_WebViewObject);
              sub_B2C400(v28, 0LL);
            }
            v31 = *(_OWORD *)&Pixels_35419812->m_Items[v17].fields.g;
            Component_WebViewObject = j_il2cpp_value_box_0(UnityEngine_Color_TypeInfo, &v31);
            if ( !v13 )
              goto LABEL_24;
            System_Array__SetValue_42670068(v13, (Il2CppObject *)Component_WebViewObject, v15, 0LL);
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
    v18 = this->fields.StartXpx;
    v19 = (UnityEngine_Texture2D_o *)sub_B2C42C(UnityEngine_Texture2D_TypeInfo);
    UnityEngine_Texture2D___ctor_35417420(v19, EndXpx - v18, EndYpx - StartYpx, 4, 0, 0LL);
    p_change_texture = &this->fields.change_texture;
    this->fields.change_texture = v19;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.change_texture,
      (System_Int32_array **)v19,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
    change_texture = (UnityEngine_Texture_o *)this->fields.change_texture;
    Component_WebViewObject = UnityEngine_Texture__get_filterMode(v8, 0LL);
    if ( change_texture )
    {
      UnityEngine_Texture__set_filterMode(change_texture, Component_WebViewObject, 0LL);
      Component_WebViewObject = (__int64)*p_change_texture;
      if ( *p_change_texture )
      {
        UnityEngine_Texture2D__SetPixels_35418468(
          (UnityEngine_Texture2D_o *)Component_WebViewObject,
          (UnityEngine_Color_array *)v13,
          0LL);
        Component_WebViewObject = (__int64)*p_change_texture;
        if ( *p_change_texture )
        {
          UnityEngine_Texture2D__Apply_35419296((UnityEngine_Texture2D_o *)Component_WebViewObject, 0LL);
          Component_WebViewObject = (__int64)UnityEngine_Component__GetComponent_WebViewObject_(
                                               (UnityEngine_Component_o *)this,
                                               (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Renderer___);
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
    sub_B2C434(Component_WebViewObject, v7);
  }
  v29 = (FGO_TexTrimer_o *)sub_B2C728(Component_WebViewObject);
  FGO_TexTrimer__OnDestroy(v29, v30);
}