void __fastcall OutlineEffectUtility__CreateMaterial(
        UnityEngine_Material_o **material,
        UnityEngine_Shader_o *shader,
        System_String_o *materialName,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UnityEngine_Object_o *v8; // x22
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_Material_o *v11; // x22
  __int64 v12; // x0

  if ( (byte_49F8069 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Material_TypeInfo, shader);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v7);
    byte_49F8069 = 1;
  }
  v8 = (UnityEngine_Object_o *)*material;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v8, 0LL, 0LL) )
  {
    v11 = (UnityEngine_Material_o *)sub_1B64314(UnityEngine_Material_TypeInfo, v9, v10);
    UnityEngine_Material___ctor(v11, shader, 0LL);
    if ( !v11 )
      sub_1B64324(v12);
    UnityEngine_Object__set_name((UnityEngine_Object_o *)v11, materialName, 0LL);
    *material = v11;
    sub_1B6406C(material);
  }
}


bool __fastcall OutlineEffectUtility__CreateShader(
        UnityEngine_Shader_o **shaderAsset,
        System_String_o *shaderName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Object_o *v7; // x20
  bool v8; // w20

  if ( (byte_49F806A & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, shaderName);
    sub_1B640C8(&StringLiteral_265/*" from Shader.Find"*/, v5);
    sub_1B640C8(&StringLiteral_19295/*"failed to get "*/, v6);
    byte_49F806A = 1;
  }
  *shaderAsset = UnityEngine_Shader__Find(shaderName, 0LL);
  sub_1B6406C(shaderAsset);
  v7 = (UnityEngine_Object_o *)*shaderAsset;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Equality(v7, 0LL, 0LL);
  if ( v8 )
    System_String__Concat_61386656(
      (System_String_o *)StringLiteral_19295/*"failed to get "*/,
      shaderName,
      (System_String_o *)StringLiteral_265/*" from Shader.Find"*/,
      0LL);
  return !v8;
}


void __fastcall OutlineEffectUtility__DestroyCommandBuffer(
        UnityEngine_Rendering_CommandBuffer_o **outlineCmd,
        const MethodInfo *method)
{
  UnityEngine_Rendering_CommandBuffer_o *v3; // x0

  v3 = *outlineCmd;
  if ( v3 )
  {
    UnityEngine_Rendering_CommandBuffer__Dispose(v3, 0LL);
    *outlineCmd = 0LL;
    sub_1B6406C(outlineCmd);
  }
}


void __fastcall OutlineEffectUtility__DestroyMaterial(UnityEngine_Material_o **mat, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *v4; // x20
  bool isPlaying; // w0
  UnityEngine_Object_o *v6; // x20
  bool v7; // w21

  if ( (byte_49F806C & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Application_TypeInfo, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    byte_49F806C = 1;
  }
  v4 = (UnityEngine_Object_o *)*mat;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v4, 0LL, 0LL) )
  {
    if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
    isPlaying = UnityEngine_Application__get_isPlaying(0LL);
    v6 = (UnityEngine_Object_o *)*mat;
    v7 = isPlaying;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( v7 )
      UnityEngine_Object__Destroy_69127736(v6, 0LL);
    else
      UnityEngine_Object__DestroyImmediate_69127924(v6, 0LL);
    *mat = 0LL;
    sub_1B6406C(mat);
  }
}


void __fastcall OutlineEffectUtility__DestroyRenderTexture(
        UnityEngine_RenderTexture_o **renderTexture,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *v4; // x20
  bool isPlaying; // w0
  UnityEngine_Object_o *v6; // x20
  bool v7; // w21

  if ( (byte_49F806D & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Application_TypeInfo, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    byte_49F806D = 1;
  }
  v4 = (UnityEngine_Object_o *)*renderTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0LL, 0LL) )
  {
    if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
    isPlaying = UnityEngine_Application__get_isPlaying(0LL);
    v6 = (UnityEngine_Object_o *)*renderTexture;
    v7 = isPlaying;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( v7 )
      UnityEngine_Object__Destroy_69127736(v6, 0LL);
    else
      UnityEngine_Object__DestroyImmediate_69127924(v6, 0LL);
    *renderTexture = 0LL;
    sub_1B6406C(renderTexture);
  }
}


UnityEngine_Camera_o *__fastcall OutlineEffectUtility__GetCamera(
        System_String_o *editorPath,
        System_String_o *battlePath,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Object_o *v9; // x20
  _BOOL8 v10; // x0
  Il2CppObject *Component_object; // x19

  if ( (byte_49F8072 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_Camera___, battlePath);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_43/*"\n"*/, v6);
    sub_1B640C8(&StringLiteral_6937/*"GameObject.Find return null"*/, v7);
    sub_1B640C8(&StringLiteral_19296/*"failed to get Camera component"*/, v8);
    byte_49F8072 = 1;
  }
  v9 = (UnityEngine_Object_o *)UnityEngine_GameObject__Find(editorPath, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v10 = UnityEngine_Object__op_Equality(v9, 0LL, 0LL);
  if ( !v10 )
    goto LABEL_10;
  v9 = (UnityEngine_Object_o *)UnityEngine_GameObject__Find(battlePath, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v10 = UnityEngine_Object__op_Equality(v9, 0LL, 0LL);
  if ( v10 )
  {
    System_String__Concat_61386656(
      (System_String_o *)StringLiteral_6937/*"GameObject.Find return null"*/,
      (System_String_o *)StringLiteral_43/*"\n"*/,
      battlePath,
      0LL);
    return 0LL;
  }
  else
  {
LABEL_10:
    if ( !v9 )
      sub_1B64324(v10);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v9,
                         (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_Camera___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
      return 0LL;
    else
      return (UnityEngine_Camera_o *)Component_object;
  }
}


UnityEngine_Texture_o *__fastcall OutlineEffectUtility__GetMainTexture(
        UnityEngine_SkinnedMeshRenderer_o *smr,
        const MethodInfo *method)
{
  UnityEngine_Renderer_o *v2; // x19
  UnityEngine_Material_array *sharedMaterials; // x0

  v2 = (UnityEngine_Renderer_o *)smr;
  if ( (byte_49F8071 & 1) == 0 )
  {
    smr = (UnityEngine_SkinnedMeshRenderer_o *)sub_1B640C8(&StringLiteral_17666/*"cant get material from SkinnedMeshRenderer.sharedMaterials. Either the sharedMaterials is null or have 0 length"*/, method);
    byte_49F8071 = 1;
  }
  if ( !v2 )
    goto LABEL_9;
  sharedMaterials = UnityEngine_Renderer__get_sharedMaterials(v2, 0LL);
  if ( sharedMaterials && (int)sharedMaterials->max_length >= 1 )
  {
    smr = (UnityEngine_SkinnedMeshRenderer_o *)sharedMaterials->m_Items[0];
    if ( smr )
      return UnityEngine_Material__get_mainTexture((UnityEngine_Material_o *)smr, 0LL);
LABEL_9:
    sub_1B64324(smr);
  }
  return 0LL;
}


UnityEngine_Vector2_o __fastcall OutlineEffectUtility__GetScaledScreenResolution(const MethodInfo *method)
{
  int32_t height; // w19
  float v2; // s9
  int32_t width; // w19
  float v4; // s1
  float v5; // s0
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  height = UnityEngine_Screen__get_height(0LL);
  v2 = (float)height / (float)UnityEngine_Screen__get_width(0LL);
  width = UnityEngine_Screen__get_width(0LL);
  if ( v2 >= 0.5625 )
    v4 = (float)UnityEngine_Screen__get_width(0LL) * 0.5625;
  else
    v4 = (float)UnityEngine_Screen__get_height(0LL);
  v5 = (float)width;
  result.fields.y = v4;
  result.fields.x = v5;
  return result;
}


UnityEngine_Vector2_o __fastcall OutlineEffectUtility__GetScaledUVOffset(const MethodInfo *method)
{
  int32_t height; // w19
  __int64 v2; // x1
  struct UnityEngine_Vector2_StaticFields *static_fields; // x8
  float x; // s0
  float y; // s1
  float v6; // s8
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  height = UnityEngine_Screen__get_height(0LL);
  if ( (float)((float)height / (float)UnityEngine_Screen__get_width(0LL)) >= 0.5625 )
  {
    v6 = (float)UnityEngine_Screen__get_width(0LL) * 0.5625;
    y = (float)((float)((float)UnityEngine_Screen__get_height(0LL) - v6) * 0.5) / v6;
    x = 0.0;
  }
  else
  {
    if ( !byte_49F700A )
    {
      sub_1B640C8(&UnityEngine_Vector2_TypeInfo, v2);
      byte_49F700A = 1;
    }
    static_fields = UnityEngine_Vector2_TypeInfo->static_fields;
    x = static_fields->zeroVector.fields.x;
    y = static_fields->zeroVector.fields.y;
  }
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


void __fastcall OutlineEffectUtility__InsertOutlineMaterialToSharedMaterialsAtLastIndex(
        UnityEngine_SkinnedMeshRenderer_o *smr,
        UnityEngine_Material_o *targetMaterial,
        const MethodInfo *method)
{
  UnityEngine_Renderer_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 sharedMaterials; // x0
  const MethodInfo *v10; // x1
  __int64 v11; // x8
  System_Object_array *v12; // x21
  unsigned int v13; // w25
  __int64 v14; // x22
  UnityEngine_Material_o **v15; // x22
  UnityEngine_Object_o *v16; // x23
  UnityEngine_Object_o *v17; // t1
  __int64 v18; // x2
  int max_length; // w8
  System_Collections_Generic_List_object__o *v20; // x22
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  UnityEngine_Object_o *v25; // x23
  UnityEngine_Material_o *v26; // x24
  UnityEngine_Renderer_o *v27; // x0
  System_Object_array *v28; // x1
  UnityEngine_Material_o *v29; // x24
  UnityEngine_Object_o *shader; // x24
  __int64 v31; // x0

  v4 = (UnityEngine_Renderer_o *)smr;
  if ( (byte_49F806F & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Material__Add__, targetMaterial);
    sub_1B640C8(&Method_System_Collections_Generic_List_Material__ToArray__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Material___ctor___75659184, v6);
    sub_1B640C8(&System_Collections_Generic_List_Material__TypeInfo, v7);
    smr = (UnityEngine_SkinnedMeshRenderer_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, v8);
    byte_49F806F = 1;
  }
  if ( !v4 )
    goto LABEL_38;
  sharedMaterials = (__int64)UnityEngine_Renderer__get_sharedMaterials(v4, 0LL);
  if ( !sharedMaterials )
    return;
  v11 = *(_QWORD *)(sharedMaterials + 24);
  v12 = (System_Object_array *)sharedMaterials;
  if ( !v11 )
    return;
  if ( !(_DWORD)v11 )
    goto LABEL_39;
  v13 = v11 - 1;
  v14 = sharedMaterials + 8LL * ((int)v11 - 1);
  v17 = *(UnityEngine_Object_o **)(v14 + 32);
  v15 = (UnityEngine_Material_o **)(v14 + 32);
  v16 = v17;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  smr = (UnityEngine_SkinnedMeshRenderer_o *)UnityEngine_Object__op_Equality(
                                               v16,
                                               (UnityEngine_Object_o *)targetMaterial,
                                               0LL);
  if ( ((unsigned __int8)smr & 1) == 0 )
  {
    if ( !targetMaterial )
      goto LABEL_38;
    sharedMaterials = (__int64)UnityEngine_Material__get_shader(targetMaterial, 0LL);
    max_length = v12->max_length;
    if ( max_length < 2 )
      goto LABEL_13;
    if ( v13 < max_length )
    {
      v25 = (UnityEngine_Object_o *)sharedMaterials;
      v26 = *v15;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      sharedMaterials = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v26, 0LL, 0LL);
      if ( (sharedMaterials & 1) != 0 )
      {
LABEL_21:
        if ( v13 < v12->max_length )
        {
          OutlineEffectUtility__DestroyMaterial(v15, v10);
          sharedMaterials = sub_1B64204(targetMaterial, v12->obj.klass->_1.element_class);
          if ( !sharedMaterials )
          {
            v31 = sub_1B64348();
            sub_1B641F0(v31, 0LL);
          }
          if ( v13 < v12->max_length )
          {
            *v15 = targetMaterial;
            sub_1B6406C(v15);
            v27 = v4;
            v28 = v12;
LABEL_27:
            UnityEngine_Renderer__set_sharedMaterials(v27, (UnityEngine_Material_array *)v28, 0LL);
            return;
          }
        }
        goto LABEL_39;
      }
      if ( v13 < v12->max_length )
      {
        v29 = *v15;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        sharedMaterials = UnityEngine_Object__op_Inequality(
                            (UnityEngine_Object_o *)v29,
                            (UnityEngine_Object_o *)targetMaterial,
                            0LL);
        if ( (sharedMaterials & 1) == 0 )
        {
LABEL_13:
          v20 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                               System_Collections_Generic_List_Material__TypeInfo,
                                                               v10,
                                                               v18);
          System_Collections_Generic_List_object____ctor_55234504(
            v20,
            (System_Collections_Generic_IEnumerable_T__o *)v12,
            (const MethodInfo_34ACFC8 *)Method_System_Collections_Generic_List_Material___ctor___75659184);
          if ( v20 )
          {
            items = v20->fields._items;
            v22 = Method_System_Collections_Generic_List_Material__Add__;
            ++v20->fields._version;
            if ( items )
            {
              size = v20->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v20,
                  (Il2CppObject *)targetMaterial,
                  *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
              }
              else
              {
                v24 = &items->obj.klass + size;
                v20->fields._size = size + 1;
                v24[4] = (Il2CppClass *)targetMaterial;
                sub_1B6406C(v24 + 4);
              }
              v28 = System_Collections_Generic_List_object___ToArray(
                      v20,
                      (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_Material__ToArray__);
              v27 = v4;
              goto LABEL_27;
            }
          }
LABEL_38:
          sub_1B64324(smr);
        }
        if ( v13 < v12->max_length )
        {
          smr = (UnityEngine_SkinnedMeshRenderer_o *)*v15;
          if ( !*v15 )
            goto LABEL_38;
          shader = (UnityEngine_Object_o *)UnityEngine_Material__get_shader((UnityEngine_Material_o *)smr, 0LL);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          sharedMaterials = UnityEngine_Object__op_Equality(shader, v25, 0LL);
          if ( (sharedMaterials & 1) == 0 )
            goto LABEL_13;
          goto LABEL_21;
        }
      }
    }
LABEL_39:
    sub_1B6432C(sharedMaterials, v10);
  }
}


void __fastcall OutlineEffectUtility__InstantiateCommandBuffer(
        UnityEngine_Rendering_CommandBuffer_o **cb,
        System_String_o *name,
        const MethodInfo *method)
{
  UnityEngine_Rendering_CommandBuffer_o *v5; // x21
  __int64 v6; // x0

  if ( (byte_49F806B & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Rendering_CommandBuffer_TypeInfo, name);
    byte_49F806B = 1;
  }
  if ( *cb )
    UnityEngine_Rendering_CommandBuffer__Dispose(*cb, 0LL);
  v5 = (UnityEngine_Rendering_CommandBuffer_o *)sub_1B64314(UnityEngine_Rendering_CommandBuffer_TypeInfo, name, method);
  UnityEngine_Rendering_CommandBuffer___ctor(v5, 0LL);
  if ( !v5 )
    sub_1B64324(v6);
  UnityEngine_Rendering_CommandBuffer__set_name(v5, name, 0LL);
  *cb = v5;
  sub_1B6406C(cb);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall OutlineEffectUtility__InstantiateRenderTexture(
        UnityEngine_RenderTexture_o **rt,
        int32_t rtWidth,
        int32_t rtHeight,
        System_String_o *rtName,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_Object_o *v11; // x23
  __int64 v12; // x1
  __int64 v13; // x2
  bool isPlaying; // w0
  UnityEngine_Object_o *v15; // x23
  bool v16; // w24
  UnityEngine_RenderTexture_o *v17; // x23
  UnityEngine_Object_o *v18; // x0

  if ( (byte_49F8070 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Application_TypeInfo, *(_QWORD *)&rtWidth);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v9);
    sub_1B640C8(&UnityEngine_RenderTexture_TypeInfo, v10);
    byte_49F8070 = 1;
  }
  v11 = (UnityEngine_Object_o *)*rt;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v11, 0LL, 0LL) )
  {
    if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
    isPlaying = UnityEngine_Application__get_isPlaying(0LL);
    v15 = (UnityEngine_Object_o *)*rt;
    v16 = isPlaying;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( v16 )
      UnityEngine_Object__Destroy_69127736(v15, 0LL);
    else
      UnityEngine_Object__DestroyImmediate_69127924(v15, 0LL);
  }
  v17 = (UnityEngine_RenderTexture_o *)sub_1B64314(UnityEngine_RenderTexture_TypeInfo, v12, v13);
  UnityEngine_RenderTexture___ctor_69034708(v17, rtWidth, rtHeight, 0, 0LL);
  *rt = v17;
  sub_1B6406C(rt);
  v18 = (UnityEngine_Object_o *)*rt;
  if ( !*rt || (UnityEngine_Object__set_name(v18, rtName, 0LL), (v18 = (UnityEngine_Object_o *)*rt) == 0LL) )
    sub_1B64324(v18);
  UnityEngine_RenderTexture__Create((UnityEngine_RenderTexture_o *)v18, 0LL);
}


void __fastcall OutlineEffectUtility__RemoveNullMaterials(
        UnityEngine_SkinnedMeshRenderer_o *smr,
        const MethodInfo *method)
{
  UnityEngine_Renderer_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Material_array *sharedMaterials; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_IEnumerable_T__o *v12; // x21
  System_Collections_Generic_List_object__o *v13; // x20
  int32_t v14; // w21
  Il2CppObject *Item; // x22
  System_Object_array *v16; // x1

  v2 = (UnityEngine_Renderer_o *)smr;
  if ( (byte_49F806E & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Material__RemoveAt__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Material__ToArray__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Material___ctor___75659184, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Material__get_Count__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Material__get_Item__, v6);
    sub_1B640C8(&System_Collections_Generic_List_Material__TypeInfo, v7);
    smr = (UnityEngine_SkinnedMeshRenderer_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, v8);
    byte_49F806E = 1;
  }
  if ( !v2 )
    goto LABEL_17;
  sharedMaterials = UnityEngine_Renderer__get_sharedMaterials(v2, 0LL);
  if ( !sharedMaterials )
    return;
  v12 = (System_Collections_Generic_IEnumerable_T__o *)sharedMaterials;
  if ( !*(_QWORD *)&sharedMaterials->max_length )
    return;
  v13 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_Material__TypeInfo,
                                                       v10,
                                                       v11);
  System_Collections_Generic_List_object____ctor_55234504(
    v13,
    v12,
    (const MethodInfo_34ACFC8 *)Method_System_Collections_Generic_List_Material___ctor___75659184);
  if ( !v13 )
LABEL_17:
    sub_1B64324(smr);
  if ( v13->fields._size >= 1 )
  {
    v14 = 0;
    do
    {
      while ( 1 )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 v13,
                 v14,
                 (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_Material__get_Item__);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0LL, 0LL) )
          break;
        System_Collections_Generic_List_object___RemoveAt(
          v13,
          v14,
          (const MethodInfo_34AEF48 *)Method_System_Collections_Generic_List_Material__RemoveAt__);
        v14 = 0;
        if ( v13->fields._size <= 0 )
          goto LABEL_15;
      }
      ++v14;
    }
    while ( v14 < v13->fields._size );
  }
LABEL_15:
  v16 = System_Collections_Generic_List_object___ToArray(
          v13,
          (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_Material__ToArray__);
  UnityEngine_Renderer__set_sharedMaterials(v2, (UnityEngine_Material_array *)v16, 0LL);
}


void __fastcall OutlineEffectUtility__RemoveOutlineMaterialFromSharedMaterials(
        UnityEngine_SkinnedMeshRenderer_o *smr,
        UnityEngine_Material_o *instantiatedMaterialReference,
        const MethodInfo *method)
{
  UnityEngine_Renderer_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_Material_array *sharedMaterials; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  UnityEngine_Material_array *v13; // x22
  System_Collections_Generic_List_object__o *v14; // x21
  int32_t v15; // w22
  Il2CppObject *Item; // x23
  System_Object_array *v17; // x1

  v4 = (UnityEngine_Renderer_o *)smr;
  if ( (byte_49F8073 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Material__RemoveAt__, instantiatedMaterialReference);
    sub_1B640C8(&Method_System_Collections_Generic_List_Material__ToArray__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Material___ctor___75659184, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Material__get_Item__, v7);
    sub_1B640C8(&System_Collections_Generic_List_Material__TypeInfo, v8);
    smr = (UnityEngine_SkinnedMeshRenderer_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, v9);
    byte_49F8073 = 1;
  }
  if ( !v4 )
    goto LABEL_12;
  sharedMaterials = UnityEngine_Renderer__get_sharedMaterials(v4, 0LL);
  if ( !sharedMaterials )
    return;
  v13 = sharedMaterials;
  if ( !*(_QWORD *)&sharedMaterials->max_length )
    return;
  v14 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_Material__TypeInfo,
                                                       v11,
                                                       v12);
  System_Collections_Generic_List_object____ctor_55234504(
    v14,
    (System_Collections_Generic_IEnumerable_T__o *)v13,
    (const MethodInfo_34ACFC8 *)Method_System_Collections_Generic_List_Material___ctor___75659184);
  if ( !v14 )
LABEL_12:
    sub_1B64324(smr);
  v15 = v13->max_length - 1;
  Item = System_Collections_Generic_List_object___get_Item(
           v14,
           v15,
           (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_Material__get_Item__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(
         (UnityEngine_Object_o *)Item,
         (UnityEngine_Object_o *)instantiatedMaterialReference,
         0LL) )
  {
    System_Collections_Generic_List_object___RemoveAt(
      v14,
      v15,
      (const MethodInfo_34AEF48 *)Method_System_Collections_Generic_List_Material__RemoveAt__);
    v17 = System_Collections_Generic_List_object___ToArray(
            v14,
            (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_Material__ToArray__);
    UnityEngine_Renderer__set_sharedMaterials(v4, (UnityEngine_Material_array *)v17, 0LL);
  }
}


void __fastcall OutlineEffectUtility__ShowLog(System_String_o *message, const MethodInfo *method)
{
  ;
}