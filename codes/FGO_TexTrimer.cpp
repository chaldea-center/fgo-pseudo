void __fastcall FGO_TexTrimer___ctor(FGO_TexTrimer_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int64_t v9; // x1

  if ( (byte_4B150A6 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_16723/*"_mainTex"*/, method, v2);
    byte_4B150A6 = 1;
  }
  v9 = StringLiteral_16723/*"_mainTex"*/;
  this->fields.targetTexName = (struct System_String_o *)StringLiteral_16723/*"_mainTex"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.targetTexName, v9, v2, v3, v4, v5, v6, v7);
  *(_QWORD *)&this->fields.EndXpx = 0x80000000800LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FGO_TexTrimer__OnDestroy(FGO_TexTrimer_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *change_texture; // x20
  __int64 v5; // x1
  UnityEngine_Object_o *v6; // x19

  if ( (byte_4B150A5 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B150A5 = 1;
  }
  change_texture = (UnityEngine_Object_o *)this->fields.change_texture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(change_texture, 0LL, 0LL) )
  {
    v6 = (UnityEngine_Object_o *)this->fields.change_texture;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
    UnityEngine_Object__DestroyImmediate_70154432(v6, 0LL);
  }
}


void __fastcall FGO_TexTrimer__Start(FGO_TexTrimer_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 Component_object; // x0
  __int64 v11; // x1
  UnityEngine_Texture_o *v12; // x20
  UnityEngine_Color_array *Pixels_70044996; // x22
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  int32_t StartYpx; // w26
  int32_t EndYpx; // w28
  System_Array_o *v20; // x21
  int32_t EndXpx; // w29
  int32_t v22; // w23
  int32_t StartXpx; // w24
  il2cpp_array_size_t v24; // w8
  int32_t v25; // w22
  UnityEngine_Texture2D_o *v26; // x23
  struct UnityEngine_Texture2D_o **p_change_texture; // x22
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  UnityEngine_Texture_o *change_texture; // x23
  FGO_TexTrimer_o *v35; // x0
  const MethodInfo *v36; // x1
  __int128 v37; // [xsp+0h] [xbp-70h] BYREF

  if ( (byte_4B150A4 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Color___TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Color_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_Renderer___, v6, v7);
    sub_1BCA7E0(&UnityEngine_Texture2D_TypeInfo, v8, v9);
    byte_4B150A4 = 1;
  }
  Component_object = (__int64)UnityEngine_Component__GetComponent_object_(
                                (UnityEngine_Component_o *)this,
                                (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Renderer___);
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
  v12 = (UnityEngine_Texture_o *)Component_object;
  if ( *(UnityEngine_Texture2D_c **)Component_object == UnityEngine_Texture2D_TypeInfo )
  {
    Pixels_70044996 = UnityEngine_Texture2D__GetPixels_70044996((UnityEngine_Texture2D_o *)Component_object, 0LL);
    v14 = sub_1BCA888(
            UnityEngine_Color___TypeInfo,
            (unsigned int)((this->fields.EndYpx - this->fields.StartYpx) * (this->fields.EndXpx - this->fields.StartXpx)));
    StartYpx = this->fields.StartYpx;
    EndYpx = this->fields.EndYpx;
    v20 = (System_Array_o *)v14;
    if ( StartYpx >= EndYpx )
    {
      EndXpx = this->fields.EndXpx;
    }
    else
    {
      EndXpx = this->fields.EndXpx;
      v22 = 0;
      do
      {
        StartXpx = this->fields.StartXpx;
        if ( StartXpx < EndXpx )
        {
          do
          {
            Component_object = ((__int64 (__fastcall *)(UnityEngine_Texture_o *, Il2CppMethodPointer))v12->klass->vtable._4_get_width.method)(
                                 v12,
                                 v12->klass->vtable._5_set_width.methodPtr);
            if ( !Pixels_70044996 )
              goto LABEL_24;
            v24 = StartXpx + StartYpx * Component_object;
            if ( v24 >= Pixels_70044996->max_length )
              sub_1BCAA44(Component_object, v11);
            v37 = *(_OWORD *)&Pixels_70044996->m_Items[v24].fields.g;
            Component_object = j_il2cpp_value_box_0(UnityEngine_Color_TypeInfo, &v37);
            if ( !v20 )
              goto LABEL_24;
            System_Array__SetValue_63355556(v20, (Il2CppObject *)Component_object, v22, 0LL);
            EndXpx = this->fields.EndXpx;
            ++StartXpx;
            ++v22;
          }
          while ( StartXpx < EndXpx );
          EndYpx = this->fields.EndYpx;
        }
        ++StartYpx;
      }
      while ( StartYpx < EndYpx );
      StartYpx = this->fields.StartYpx;
    }
    v25 = this->fields.StartXpx;
    v26 = (UnityEngine_Texture2D_o *)sub_1BCAA2C(UnityEngine_Texture2D_TypeInfo, v15, v16, v17);
    UnityEngine_Texture2D___ctor_70042420(v26, EndXpx - v25, EndYpx - StartYpx, 4, 0, 0LL);
    this->fields.change_texture = v26;
    p_change_texture = &this->fields.change_texture;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.change_texture, (int64_t)v26, v28, v29, v30, v31, v32, v33);
    change_texture = (UnityEngine_Texture_o *)this->fields.change_texture;
    Component_object = UnityEngine_Texture__get_filterMode(v12, 0LL);
    if ( change_texture )
    {
      UnityEngine_Texture__set_filterMode(change_texture, Component_object, 0LL);
      Component_object = (__int64)*p_change_texture;
      if ( *p_change_texture )
      {
        UnityEngine_Texture2D__SetPixels_70043500(
          (UnityEngine_Texture2D_o *)Component_object,
          (UnityEngine_Color_array *)v20,
          0LL);
        Component_object = (__int64)*p_change_texture;
        if ( *p_change_texture )
        {
          UnityEngine_Texture2D__Apply_70044272((UnityEngine_Texture2D_o *)Component_object, 0LL);
          Component_object = (__int64)UnityEngine_Component__GetComponent_object_(
                                        (UnityEngine_Component_o *)this,
                                        (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Renderer___);
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
    sub_1BCAA3C(Component_object, v11);
  }
  sub_1BCACFC(Component_object);
  FGO_TexTrimer__OnDestroy(v35, v36);
}