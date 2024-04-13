void __fastcall FGO_TexTrimer___ctor(FGO_TexTrimer_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1

  if ( (byte_42E8C80 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_16349/*"_mainTex"*/, (_DWORD)method, (_DWORD)v2, v3);
    byte_42E8C80 = 1;
  }
  v9 = (System_Int32_array **)StringLiteral_16349/*"_mainTex"*/;
  this->fields.targetTexName = (struct System_String_o *)StringLiteral_16349/*"_mainTex"*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.targetTexName, v9, v2, v3, v4, v5, v6, v7);
  *(_QWORD *)&this->fields.EndXpx = 0x80000000800LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FGO_TexTrimer__OnDestroy(FGO_TexTrimer_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *change_texture; // x20
  UnityEngine_Object_o *v6; // x19

  if ( (byte_42E8C7F & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8C7F = 1;
  }
  change_texture = (UnityEngine_Object_o *)this->fields.change_texture;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(change_texture, 0LL, 0LL) )
  {
    v6 = (UnityEngine_Object_o *)this->fields.change_texture;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__DestroyImmediate_35620448(v6, 0LL);
  }
}


void __fastcall FGO_TexTrimer__Start(FGO_TexTrimer_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  __int64 Component_WebViewObject; // x0
  __int64 v15; // x1
  UnityEngine_Texture_o *v16; // x20
  UnityEngine_Color_array *Pixels_35725256; // x22
  __int64 v18; // x0
  int32_t StartYpx; // w26
  int32_t EndYpx; // w28
  System_Array_o *v21; // x21
  int32_t EndXpx; // w24
  int32_t v23; // w23
  int32_t StartXpx; // w25
  il2cpp_array_size_t v25; // w8
  int32_t v26; // w22
  UnityEngine_Texture2D_o *v27; // x23
  struct UnityEngine_Texture2D_o **p_change_texture; // x22
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  UnityEngine_Texture_o *change_texture; // x23
  __int64 v36; // x0
  FGO_TexTrimer_o *v37; // x0
  const MethodInfo *v38; // x1
  __int128 v39; // [xsp+0h] [xbp-60h] BYREF

  if ( (byte_42E8C7E & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Color___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Color_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_Renderer___, v8, v9, v10);
    sub_B5D5C4(&UnityEngine_Texture2D_TypeInfo, v11, v12, v13);
    byte_42E8C7E = 1;
  }
  Component_WebViewObject = (__int64)UnityEngine_Component__GetComponent_WebViewObject_(
                                       (UnityEngine_Component_o *)this,
                                       (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Renderer___);
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
  v16 = (UnityEngine_Texture_o *)Component_WebViewObject;
  if ( *(UnityEngine_Texture2D_c **)Component_WebViewObject == UnityEngine_Texture2D_TypeInfo )
  {
    Pixels_35725256 = UnityEngine_Texture2D__GetPixels_35725256((UnityEngine_Texture2D_o *)Component_WebViewObject, 0LL);
    v18 = sub_B5D5DC(
            UnityEngine_Color___TypeInfo,
            (unsigned int)((this->fields.EndYpx - this->fields.StartYpx) * (this->fields.EndXpx - this->fields.StartXpx)));
    StartYpx = this->fields.StartYpx;
    EndYpx = this->fields.EndYpx;
    v21 = (System_Array_o *)v18;
    if ( StartYpx >= EndYpx )
    {
      EndXpx = this->fields.EndXpx;
    }
    else
    {
      EndXpx = this->fields.EndXpx;
      v23 = 0;
      do
      {
        StartXpx = this->fields.StartXpx;
        if ( StartXpx < EndXpx )
        {
          do
          {
            Component_WebViewObject = ((__int64 (__fastcall *)(UnityEngine_Texture_o *, Il2CppMethodPointer))v16->klass->vtable._4_get_width.method)(
                                        v16,
                                        v16->klass->vtable._5_set_width.methodPtr);
            if ( !Pixels_35725256 )
              goto LABEL_24;
            v25 = StartXpx + StartYpx * Component_WebViewObject;
            if ( v25 >= Pixels_35725256->max_length )
            {
              v36 = sub_B5D6C8(Component_WebViewObject);
              sub_B5D668(v36, 0LL);
            }
            v39 = *(_OWORD *)&Pixels_35725256->m_Items[v25].fields.g;
            Component_WebViewObject = j_il2cpp_value_box_0(UnityEngine_Color_TypeInfo, &v39);
            if ( !v21 )
              goto LABEL_24;
            System_Array__SetValue_43379960(v21, (Il2CppObject *)Component_WebViewObject, v23, 0LL);
            EndXpx = this->fields.EndXpx;
            ++StartXpx;
            ++v23;
          }
          while ( StartXpx < EndXpx );
          EndYpx = this->fields.EndYpx;
        }
        ++StartYpx;
      }
      while ( StartYpx < EndYpx );
      StartYpx = this->fields.StartYpx;
    }
    v26 = this->fields.StartXpx;
    v27 = (UnityEngine_Texture2D_o *)sub_B5D694(UnityEngine_Texture2D_TypeInfo);
    UnityEngine_Texture2D___ctor_35722864(v27, EndXpx - v26, EndYpx - StartYpx, 4, 0, 0LL);
    p_change_texture = &this->fields.change_texture;
    this->fields.change_texture = v27;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.change_texture,
      (System_Int32_array **)v27,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
    change_texture = (UnityEngine_Texture_o *)this->fields.change_texture;
    Component_WebViewObject = UnityEngine_Texture__get_filterMode(v16, 0LL);
    if ( change_texture )
    {
      UnityEngine_Texture__set_filterMode(change_texture, Component_WebViewObject, 0LL);
      Component_WebViewObject = (__int64)*p_change_texture;
      if ( *p_change_texture )
      {
        UnityEngine_Texture2D__SetPixels_35723912(
          (UnityEngine_Texture2D_o *)Component_WebViewObject,
          (UnityEngine_Color_array *)v21,
          0LL);
        Component_WebViewObject = (__int64)*p_change_texture;
        if ( *p_change_texture )
        {
          UnityEngine_Texture2D__Apply_35724740((UnityEngine_Texture2D_o *)Component_WebViewObject, 0LL);
          Component_WebViewObject = (__int64)UnityEngine_Component__GetComponent_WebViewObject_(
                                               (UnityEngine_Component_o *)this,
                                               (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Renderer___);
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
    sub_B5D69C(Component_WebViewObject, v15);
  }
  v37 = (FGO_TexTrimer_o *)sub_B5D990(Component_WebViewObject);
  FGO_TexTrimer__OnDestroy(v37, v38);
}