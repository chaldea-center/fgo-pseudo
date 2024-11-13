void __fastcall OutlineEffectUtility__CreateMaterial(
        UnityEngine_Material_o **material,
        UnityEngine_Shader_o *shader,
        System_String_o *materialName,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *v9; // x22
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  UnityEngine_Material_o *v13; // x22
  __int64 v14; // x0
  __int64 v15; // x1

  if ( (byte_4B11D51 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Material_TypeInfo, shader, materialName);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    byte_4B11D51 = 1;
  }
  v9 = (UnityEngine_Object_o *)*material;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, shader);
  if ( UnityEngine_Object__op_Equality(v9, 0LL, 0LL) )
  {
    v13 = (UnityEngine_Material_o *)sub_1BCAA2C(UnityEngine_Material_TypeInfo, v10, v11, v12);
    UnityEngine_Material___ctor(v13, shader, 0LL);
    if ( !v13 )
      sub_1BCAA3C(v14, v15);
    UnityEngine_Object__set_name((UnityEngine_Object_o *)v13, materialName, 0LL);
    *material = v13;
    sub_1BCA784(material, v13);
  }
}


bool __fastcall OutlineEffectUtility__CreateShader(
        UnityEngine_Shader_o **shaderAsset,
        System_String_o *shaderName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Shader_o *v9; // x0
  __int64 v10; // x1
  UnityEngine_Object_o *v11; // x20
  bool v12; // w20

  if ( (byte_4B11D52 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, shaderName, method);
    sub_1BCA7E0(&StringLiteral_261/*" from Shader.Find"*/, v5, v6);
    sub_1BCA7E0(&StringLiteral_19574/*"failed to get "*/, v7, v8);
    byte_4B11D52 = 1;
  }
  v9 = UnityEngine_Shader__Find(shaderName, 0LL);
  *shaderAsset = v9;
  sub_1BCA784(shaderAsset, v9);
  v11 = (UnityEngine_Object_o *)*shaderAsset;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
  v12 = UnityEngine_Object__op_Equality(v11, 0LL, 0LL);
  if ( v12 )
    System_String__Concat_62412480(
      (System_String_o *)StringLiteral_19574/*"failed to get "*/,
      shaderName,
      (System_String_o *)StringLiteral_261/*" from Shader.Find"*/,
      0LL);
  return !v12;
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
    sub_1BCA784(outlineCmd, 0LL);
  }
}


void __fastcall OutlineEffectUtility__DestroyMaterial(UnityEngine_Material_o **mat, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *v6; // x20
  __int64 v7; // x1
  bool isPlaying; // w0
  __int64 v9; // x1
  UnityEngine_Object_o *v10; // x20
  bool v11; // w21

  if ( (byte_4B11D54 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Application_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B11D54 = 1;
  }
  v6 = (UnityEngine_Object_o *)*mat;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(v6, 0LL, 0LL) )
  {
    if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, v7);
    isPlaying = UnityEngine_Application__get_isPlaying(0LL);
    v10 = (UnityEngine_Object_o *)*mat;
    v11 = isPlaying;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
    if ( v11 )
      UnityEngine_Object__Destroy_70154244(v10, 0LL);
    else
      UnityEngine_Object__DestroyImmediate_70154432(v10, 0LL);
    *mat = 0LL;
    sub_1BCA784(mat, 0LL);
  }
}


void __fastcall OutlineEffectUtility__DestroyRenderTexture(
        UnityEngine_RenderTexture_o **renderTexture,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *v6; // x20
  __int64 v7; // x1
  bool isPlaying; // w0
  __int64 v9; // x1
  UnityEngine_Object_o *v10; // x20
  bool v11; // w21

  if ( (byte_4B11D55 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Application_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B11D55 = 1;
  }
  v6 = (UnityEngine_Object_o *)*renderTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(v6, 0LL, 0LL) )
  {
    if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, v7);
    isPlaying = UnityEngine_Application__get_isPlaying(0LL);
    v10 = (UnityEngine_Object_o *)*renderTexture;
    v11 = isPlaying;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
    if ( v11 )
      UnityEngine_Object__Destroy_70154244(v10, 0LL);
    else
      UnityEngine_Object__DestroyImmediate_70154432(v10, 0LL);
    *renderTexture = 0LL;
    sub_1BCA784(renderTexture, 0LL);
  }
}


UnityEngine_Camera_o *__fastcall OutlineEffectUtility__GetCamera(
        System_String_o *editorPath,
        System_String_o *battlePath,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  UnityEngine_Object_o *v14; // x20
  _BOOL8 v15; // x0
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v19; // x1
  Il2CppObject *Component_object; // x19

  if ( (byte_4B11D5A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_Camera___, battlePath, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_43/*"\n"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_7088/*"GameObject.Find return null"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_19575/*"failed to get Camera component"*/, v11, v12);
    byte_4B11D5A = 1;
  }
  v14 = (UnityEngine_Object_o *)UnityEngine_GameObject__Find(editorPath, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
  v15 = UnityEngine_Object__op_Equality(v14, 0LL, 0LL);
  if ( !v15 )
    goto LABEL_10;
  v14 = (UnityEngine_Object_o *)UnityEngine_GameObject__Find(battlePath, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
  v15 = UnityEngine_Object__op_Equality(v14, 0LL, 0LL);
  if ( v15 )
  {
    System_String__Concat_62412480(
      (System_String_o *)StringLiteral_7088/*"GameObject.Find return null"*/,
      (System_String_o *)StringLiteral_43/*"\n"*/,
      battlePath,
      0LL);
    return 0LL;
  }
  else
  {
LABEL_10:
    if ( !v14 )
      sub_1BCAA3C(v15, v16);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v14,
                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_Camera___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
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
  __int64 v2; // x2
  UnityEngine_Renderer_o *v3; // x19
  UnityEngine_Material_array *sharedMaterials; // x0

  v3 = (UnityEngine_Renderer_o *)smr;
  if ( (byte_4B11D59 & 1) == 0 )
  {
    smr = (UnityEngine_SkinnedMeshRenderer_o *)sub_1BCA7E0(&StringLiteral_17917/*"cant get material from SkinnedMeshRenderer.sharedMaterials. Either the sharedMaterials is null or have 0 length"*/, method, v2);
    byte_4B11D59 = 1;
  }
  if ( !v3 )
    goto LABEL_9;
  sharedMaterials = UnityEngine_Renderer__get_sharedMaterials(v3, 0LL);
  if ( sharedMaterials && (int)sharedMaterials->max_length >= 1 )
  {
    smr = (UnityEngine_SkinnedMeshRenderer_o *)sharedMaterials->m_Items[0];
    if ( smr )
      return UnityEngine_Material__get_mainTexture((UnityEngine_Material_o *)smr, 0LL);
LABEL_9:
    sub_1BCAA3C(smr, method);
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
  __int64 v3; // x2
  struct UnityEngine_Vector2_StaticFields *static_fields; // x8
  float x; // s0
  float y; // s1
  float v7; // s8
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  height = UnityEngine_Screen__get_height(0LL);
  if ( (float)((float)height / (float)UnityEngine_Screen__get_width(0LL)) >= 0.5625 )
  {
    v7 = (float)UnityEngine_Screen__get_width(0LL) * 0.5625;
    y = (float)((float)((float)UnityEngine_Screen__get_height(0LL) - v7) * 0.5) / v7;
    x = 0.0;
  }
  else
  {
    if ( !byte_4B108BA )
    {
      sub_1BCA7E0(&UnityEngine_Vector2_TypeInfo, v2, v3);
      byte_4B108BA = 1;
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 sharedMaterials; // x0
  __int64 v14; // x8
  System_Object_array *v15; // x21
  unsigned int v16; // w25
  __int64 v17; // x22
  UnityEngine_Material_o **v18; // x22
  UnityEngine_Object_o *v19; // x23
  UnityEngine_Object_o *v20; // t1
  __int64 v21; // x2
  __int64 v22; // x3
  int max_length; // w8
  System_Collections_Generic_List_object__o *v24; // x22
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0
  UnityEngine_Object_o *v29; // x23
  UnityEngine_Material_o *v30; // x24
  UnityEngine_Renderer_o *v31; // x0
  System_Object_array *v32; // x1
  UnityEngine_Material_o *v33; // x24
  __int64 v34; // x1
  UnityEngine_Object_o *shader; // x24
  __int64 v36; // x0

  v4 = (UnityEngine_Renderer_o *)smr;
  if ( (byte_4B11D57 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Material__Add__, targetMaterial, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Material__ToArray__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Material___ctor___76789440, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_List_Material__TypeInfo, v9, v10);
    smr = (UnityEngine_SkinnedMeshRenderer_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    byte_4B11D57 = 1;
  }
  if ( !v4 )
    goto LABEL_38;
  sharedMaterials = (__int64)UnityEngine_Renderer__get_sharedMaterials(v4, 0LL);
  if ( !sharedMaterials )
    return;
  v14 = *(_QWORD *)(sharedMaterials + 24);
  v15 = (System_Object_array *)sharedMaterials;
  if ( !v14 )
    return;
  if ( !(_DWORD)v14 )
    goto LABEL_39;
  v16 = v14 - 1;
  v17 = sharedMaterials + 8LL * ((int)v14 - 1);
  v20 = *(UnityEngine_Object_o **)(v17 + 32);
  v18 = (UnityEngine_Material_o **)(v17 + 32);
  v19 = v20;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, targetMaterial);
  smr = (UnityEngine_SkinnedMeshRenderer_o *)UnityEngine_Object__op_Equality(
                                               v19,
                                               (UnityEngine_Object_o *)targetMaterial,
                                               0LL);
  if ( ((unsigned __int8)smr & 1) == 0 )
  {
    if ( !targetMaterial )
      goto LABEL_38;
    sharedMaterials = (__int64)UnityEngine_Material__get_shader(targetMaterial, 0LL);
    max_length = v15->max_length;
    if ( max_length < 2 )
      goto LABEL_13;
    if ( v16 < max_length )
    {
      v29 = (UnityEngine_Object_o *)sharedMaterials;
      v30 = *v18;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, targetMaterial);
      sharedMaterials = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v30, 0LL, 0LL);
      if ( (sharedMaterials & 1) != 0 )
      {
LABEL_21:
        if ( v16 < v15->max_length )
        {
          OutlineEffectUtility__DestroyMaterial(v18, (const MethodInfo *)targetMaterial);
          sharedMaterials = sub_1BCA91C(targetMaterial, v15->obj.klass->_1.element_class);
          if ( !sharedMaterials )
          {
            v36 = sub_1BCAA60();
            sub_1BCA908(v36, 0LL);
          }
          if ( v16 < v15->max_length )
          {
            *v18 = targetMaterial;
            sub_1BCA784(v18, targetMaterial);
            v31 = v4;
            v32 = v15;
LABEL_27:
            UnityEngine_Renderer__set_sharedMaterials(v31, (UnityEngine_Material_array *)v32, 0LL);
            return;
          }
        }
        goto LABEL_39;
      }
      if ( v16 < v15->max_length )
      {
        v33 = *v18;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, targetMaterial);
        sharedMaterials = UnityEngine_Object__op_Inequality(
                            (UnityEngine_Object_o *)v33,
                            (UnityEngine_Object_o *)targetMaterial,
                            0LL);
        if ( (sharedMaterials & 1) == 0 )
        {
LABEL_13:
          v24 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                               System_Collections_Generic_List_Material__TypeInfo,
                                                               targetMaterial,
                                                               v21,
                                                               v22);
          System_Collections_Generic_List_object____ctor_56235344(
            v24,
            (System_Collections_Generic_IEnumerable_T__o *)v15,
            (const MethodInfo_35A1550 *)Method_System_Collections_Generic_List_Material___ctor___76789440);
          if ( v24 )
          {
            items = v24->fields._items;
            v26 = Method_System_Collections_Generic_List_Material__Add__;
            ++v24->fields._version;
            if ( items )
            {
              size = v24->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v24,
                  (Il2CppObject *)targetMaterial,
                  *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
              }
              else
              {
                v28 = &items->obj.klass + size;
                v24->fields._size = size + 1;
                v28[4] = (Il2CppClass *)targetMaterial;
                sub_1BCA784(v28 + 4, targetMaterial);
              }
              v32 = System_Collections_Generic_List_object___ToArray(
                      v24,
                      (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_Material__ToArray__);
              v31 = v4;
              goto LABEL_27;
            }
          }
LABEL_38:
          sub_1BCAA3C(smr, targetMaterial);
        }
        if ( v16 < v15->max_length )
        {
          smr = (UnityEngine_SkinnedMeshRenderer_o *)*v18;
          if ( !*v18 )
            goto LABEL_38;
          shader = (UnityEngine_Object_o *)UnityEngine_Material__get_shader((UnityEngine_Material_o *)smr, 0LL);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v34);
          sharedMaterials = UnityEngine_Object__op_Equality(shader, v29, 0LL);
          if ( (sharedMaterials & 1) == 0 )
            goto LABEL_13;
          goto LABEL_21;
        }
      }
    }
LABEL_39:
    sub_1BCAA44(sharedMaterials, targetMaterial);
  }
}


void __fastcall OutlineEffectUtility__InstantiateCommandBuffer(
        UnityEngine_Rendering_CommandBuffer_o **cb,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Rendering_CommandBuffer_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4B11D53 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Rendering_CommandBuffer_TypeInfo, name, method);
    byte_4B11D53 = 1;
  }
  if ( *cb )
    UnityEngine_Rendering_CommandBuffer__Dispose(*cb, 0LL);
  v6 = (UnityEngine_Rendering_CommandBuffer_o *)sub_1BCAA2C(
                                                  UnityEngine_Rendering_CommandBuffer_TypeInfo,
                                                  name,
                                                  method,
                                                  v3);
  UnityEngine_Rendering_CommandBuffer___ctor(v6, 0LL);
  if ( !v6 )
    sub_1BCAA3C(v7, v8);
  UnityEngine_Rendering_CommandBuffer__set_name(v6, name, 0LL);
  *cb = v6;
  sub_1BCA784(cb, v6);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  UnityEngine_Object_o *v13; // x23
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  bool isPlaying; // w0
  __int64 v18; // x1
  UnityEngine_Object_o *v19; // x23
  bool v20; // w24
  UnityEngine_RenderTexture_o *v21; // x23
  __int64 v22; // x1
  UnityEngine_Object_o *v23; // x0

  if ( (byte_4B11D58 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Application_TypeInfo, *(_QWORD *)&rtWidth, *(_QWORD *)&rtHeight);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    sub_1BCA7E0(&UnityEngine_RenderTexture_TypeInfo, v11, v12);
    byte_4B11D58 = 1;
  }
  v13 = (UnityEngine_Object_o *)*rt;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&rtWidth);
  if ( UnityEngine_Object__op_Inequality(v13, 0LL, 0LL) )
  {
    if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, v14);
    isPlaying = UnityEngine_Application__get_isPlaying(0LL);
    v19 = (UnityEngine_Object_o *)*rt;
    v20 = isPlaying;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
    if ( v20 )
      UnityEngine_Object__Destroy_70154244(v19, 0LL);
    else
      UnityEngine_Object__DestroyImmediate_70154432(v19, 0LL);
  }
  v21 = (UnityEngine_RenderTexture_o *)sub_1BCAA2C(UnityEngine_RenderTexture_TypeInfo, v14, v15, v16);
  UnityEngine_RenderTexture___ctor_70061128(v21, rtWidth, rtHeight, 0, 0LL);
  *rt = v21;
  sub_1BCA784(rt, v21);
  v23 = (UnityEngine_Object_o *)*rt;
  if ( !*rt || (UnityEngine_Object__set_name(v23, rtName, 0LL), (v23 = (UnityEngine_Object_o *)*rt) == 0LL) )
    sub_1BCAA3C(v23, v22);
  UnityEngine_RenderTexture__Create((UnityEngine_RenderTexture_o *)v23, 0LL);
}


void __fastcall OutlineEffectUtility__RemoveNullMaterials(
        UnityEngine_SkinnedMeshRenderer_o *smr,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Renderer_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  UnityEngine_Material_array *sharedMaterials; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  System_Collections_Generic_IEnumerable_T__o *v20; // x21
  System_Collections_Generic_List_object__o *v21; // x20
  int32_t v22; // w21
  __int64 v23; // x1
  Il2CppObject *Item; // x22
  System_Object_array *v25; // x1

  v3 = (UnityEngine_Renderer_o *)smr;
  if ( (byte_4B11D56 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Material__RemoveAt__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Material__ToArray__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Material___ctor___76789440, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Material__get_Count__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Material__get_Item__, v10, v11);
    sub_1BCA7E0(&System_Collections_Generic_List_Material__TypeInfo, v12, v13);
    smr = (UnityEngine_SkinnedMeshRenderer_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v14, v15);
    byte_4B11D56 = 1;
  }
  if ( !v3 )
    goto LABEL_17;
  sharedMaterials = UnityEngine_Renderer__get_sharedMaterials(v3, 0LL);
  if ( !sharedMaterials )
    return;
  v20 = (System_Collections_Generic_IEnumerable_T__o *)sharedMaterials;
  if ( !*(_QWORD *)&sharedMaterials->max_length )
    return;
  v21 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_Material__TypeInfo,
                                                       v17,
                                                       v18,
                                                       v19);
  System_Collections_Generic_List_object____ctor_56235344(
    v21,
    v20,
    (const MethodInfo_35A1550 *)Method_System_Collections_Generic_List_Material___ctor___76789440);
  if ( !v21 )
LABEL_17:
    sub_1BCAA3C(smr, method);
  if ( v21->fields._size >= 1 )
  {
    v22 = 0;
    do
    {
      while ( 1 )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 v21,
                 v22,
                 (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_Material__get_Item__);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23);
        if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0LL, 0LL) )
          break;
        System_Collections_Generic_List_object___RemoveAt(
          v21,
          v22,
          (const MethodInfo_35A3430 *)Method_System_Collections_Generic_List_Material__RemoveAt__);
        v22 = 0;
        if ( v21->fields._size <= 0 )
          goto LABEL_15;
      }
      ++v22;
    }
    while ( v22 < v21->fields._size );
  }
LABEL_15:
  v25 = System_Collections_Generic_List_object___ToArray(
          v21,
          (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_Material__ToArray__);
  UnityEngine_Renderer__set_sharedMaterials(v3, (UnityEngine_Material_array *)v25, 0LL);
}


void __fastcall OutlineEffectUtility__RemoveOutlineMaterialFromSharedMaterials(
        UnityEngine_SkinnedMeshRenderer_o *smr,
        UnityEngine_Material_o *instantiatedMaterialReference,
        const MethodInfo *method)
{
  UnityEngine_Renderer_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  UnityEngine_Material_array *sharedMaterials; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  UnityEngine_Material_array *v19; // x22
  System_Collections_Generic_List_object__o *v20; // x21
  int32_t v21; // w22
  __int64 v22; // x1
  Il2CppObject *Item; // x23
  System_Object_array *v24; // x1

  v4 = (UnityEngine_Renderer_o *)smr;
  if ( (byte_4B11D5B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Material__RemoveAt__, instantiatedMaterialReference, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Material__ToArray__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Material___ctor___76789440, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Material__get_Item__, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_List_Material__TypeInfo, v11, v12);
    smr = (UnityEngine_SkinnedMeshRenderer_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v13, v14);
    byte_4B11D5B = 1;
  }
  if ( !v4 )
    goto LABEL_12;
  sharedMaterials = UnityEngine_Renderer__get_sharedMaterials(v4, 0LL);
  if ( !sharedMaterials )
    return;
  v19 = sharedMaterials;
  if ( !*(_QWORD *)&sharedMaterials->max_length )
    return;
  v20 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_Material__TypeInfo,
                                                       v16,
                                                       v17,
                                                       v18);
  System_Collections_Generic_List_object____ctor_56235344(
    v20,
    (System_Collections_Generic_IEnumerable_T__o *)v19,
    (const MethodInfo_35A1550 *)Method_System_Collections_Generic_List_Material___ctor___76789440);
  if ( !v20 )
LABEL_12:
    sub_1BCAA3C(smr, instantiatedMaterialReference);
  v21 = v19->max_length - 1;
  Item = System_Collections_Generic_List_object___get_Item(
           v20,
           v21,
           (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_Material__get_Item__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
  if ( UnityEngine_Object__op_Equality(
         (UnityEngine_Object_o *)Item,
         (UnityEngine_Object_o *)instantiatedMaterialReference,
         0LL) )
  {
    System_Collections_Generic_List_object___RemoveAt(
      v20,
      v21,
      (const MethodInfo_35A3430 *)Method_System_Collections_Generic_List_Material__RemoveAt__);
    v24 = System_Collections_Generic_List_object___ToArray(
            v20,
            (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_Material__ToArray__);
    UnityEngine_Renderer__set_sharedMaterials(v4, (UnityEngine_Material_array *)v24, 0LL);
  }
}


void __fastcall OutlineEffectUtility__ShowLog(System_String_o *message, const MethodInfo *method)
{
  ;
}