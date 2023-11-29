void __fastcall FGO_TexTrimer___ctor(FGO_TexTrimer_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1

  if ( (byte_40F9F5D & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16092, method);
    byte_40F9F5D = 1;
  }
  v9 = (System_Int32_array **)StringLiteral_16092;
  this->fields.targetTexName = (struct System_String_o *)StringLiteral_16092;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.targetTexName, v9, v2, v3, v4, v5, v6, v7);
  *(_QWORD *)&this->fields.EndXpx = 0x80000000800LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FGO_TexTrimer__OnDestroy(FGO_TexTrimer_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *change_texture; // x20
  UnityEngine_Object_o *v4; // x19

  if ( (byte_40F9F5C & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F9F5C = 1;
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
    UnityEngine_Object__DestroyImmediate_34809676(v4, 0LL);
  }
}


void __fastcall FGO_TexTrimer__Start(FGO_TexTrimer_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Renderer_o *Component_WebViewObject; // x0
  UnityEngine_Material_o *material; // x0
  UnityEngine_Texture_o *Texture; // x0
  UnityEngine_Texture_o *v9; // x20
  UnityEngine_Color_array *Pixels_34914336; // x22
  __int64 v11; // x2
  __int64 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  int32_t StartYpx; // w26
  int32_t EndYpx; // w28
  System_Array_o *v19; // x21
  int32_t EndXpx; // w24
  int32_t v21; // w23
  int32_t StartXpx; // w25
  __int64 v23; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  il2cpp_array_size_t v26; // w8
  Il2CppObject *v27; // x0
  int32_t v28; // w22
  UnityEngine_Texture2D_o *v29; // x23
  UnityEngine_Texture2D_o **p_change_texture; // x22
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  UnityEngine_Texture_o *change_texture; // x23
  int32_t filterMode; // w0
  UnityEngine_Renderer_o *v39; // x0
  UnityEngine_Material_o *v40; // x0
  FGO_TexTrimer_o *v41; // x0
  const MethodInfo *v42; // x1
  __int128 v43; // [xsp+0h] [xbp-60h] BYREF

  if ( (byte_40F9F5B & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Color___TypeInfo, method);
    sub_B16FFC(&UnityEngine_Color_TypeInfo, v3);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_Renderer___, v4);
    sub_B16FFC(&UnityEngine_Texture2D_TypeInfo, v5);
    byte_40F9F5B = 1;
  }
  Component_WebViewObject = (UnityEngine_Renderer_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                        (UnityEngine_Component_o *)this,
                                                        (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Renderer___);
  if ( !Component_WebViewObject )
    goto LABEL_24;
  material = UnityEngine_Renderer__get_material(Component_WebViewObject, 0LL);
  if ( !material )
    goto LABEL_24;
  Texture = UnityEngine_Material__GetTexture(material, this->fields.targetTexName, 0LL);
  if ( !Texture )
    goto LABEL_24;
  v9 = Texture;
  if ( (UnityEngine_Texture2D_c *)Texture->klass == UnityEngine_Texture2D_TypeInfo )
  {
    Pixels_34914336 = UnityEngine_Texture2D__GetPixels_34914336((UnityEngine_Texture2D_o *)Texture, 0LL);
    v12 = sub_B17014(
            UnityEngine_Color___TypeInfo,
            (unsigned int)((this->fields.EndYpx - this->fields.StartYpx) * (this->fields.EndXpx - this->fields.StartXpx)),
            v11);
    StartYpx = this->fields.StartYpx;
    EndYpx = this->fields.EndYpx;
    v19 = (System_Array_o *)v12;
    if ( StartYpx >= EndYpx )
    {
      EndXpx = this->fields.EndXpx;
    }
    else
    {
      EndXpx = this->fields.EndXpx;
      v21 = 0;
      do
      {
        StartXpx = this->fields.StartXpx;
        if ( StartXpx < EndXpx )
        {
          do
          {
            v23 = ((__int64 (__fastcall *)(UnityEngine_Texture_o *, Il2CppMethodPointer))v9->klass->vtable._4_get_width.method)(
                    v9,
                    v9->klass->vtable._5_set_width.methodPtr);
            if ( !Pixels_34914336 )
              goto LABEL_24;
            v26 = StartXpx + StartYpx * v23;
            if ( v26 >= Pixels_34914336->max_length )
            {
              sub_B17100(v23, v24, v25);
              sub_B170A0();
            }
            v43 = *(_OWORD *)&Pixels_34914336->m_Items[v26].fields.g;
            v27 = (Il2CppObject *)j_il2cpp_value_box_0(UnityEngine_Color_TypeInfo, &v43);
            if ( !v19 )
              goto LABEL_24;
            System_Array__SetValue_42334852(v19, v27, v21, 0LL);
            EndXpx = this->fields.EndXpx;
            ++StartXpx;
            ++v21;
          }
          while ( StartXpx < EndXpx );
          EndYpx = this->fields.EndYpx;
        }
        ++StartYpx;
      }
      while ( StartYpx < EndYpx );
      StartYpx = this->fields.StartYpx;
    }
    v28 = this->fields.StartXpx;
    v29 = (UnityEngine_Texture2D_o *)sub_B170CC(UnityEngine_Texture2D_TypeInfo, v13, v14, v15, v16);
    UnityEngine_Texture2D___ctor_34911944(v29, EndXpx - v28, EndYpx - StartYpx, 4, 0, 0LL);
    p_change_texture = &this->fields.change_texture;
    this->fields.change_texture = v29;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.change_texture,
      (System_Int32_array **)v29,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
    change_texture = (UnityEngine_Texture_o *)this->fields.change_texture;
    filterMode = UnityEngine_Texture__get_filterMode(v9, 0LL);
    if ( change_texture )
    {
      UnityEngine_Texture__set_filterMode(change_texture, filterMode, 0LL);
      if ( *p_change_texture )
      {
        UnityEngine_Texture2D__SetPixels_34912992(*p_change_texture, (UnityEngine_Color_array *)v19, 0LL);
        if ( *p_change_texture )
        {
          UnityEngine_Texture2D__Apply_34913820(*p_change_texture, 0LL);
          v39 = (UnityEngine_Renderer_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                            (UnityEngine_Component_o *)this,
                                            (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Renderer___);
          if ( v39 )
          {
            v40 = UnityEngine_Renderer__get_material(v39, 0LL);
            if ( v40 )
            {
              UnityEngine_Material__SetTexture(
                v40,
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
    sub_B170D4();
  }
  v41 = (FGO_TexTrimer_o *)sub_B173C8(Texture);
  FGO_TexTrimer__OnDestroy(v41, v42);
}