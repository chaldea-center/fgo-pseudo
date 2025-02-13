void __fastcall OutlineEffectUtility__CreateMaterial(
        UnityEngine_Material_o **material,
        UnityEngine_Shader_o *shader,
        System_String_o *materialName,
        const MethodInfo *method)
{
  UnityEngine_Object_o *v7; // x22
  UnityEngine_Material_o *v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4BD7FB9 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Material_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD7FB9 = 1;
  }
  v7 = (UnityEngine_Object_o *)*material;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v7, 0LL, 0LL) )
  {
    v8 = (UnityEngine_Material_o *)sub_1C22084(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v8, shader, 0LL);
    if ( !v8 )
      sub_1C22094(v9, v10);
    UnityEngine_Object__set_name((UnityEngine_Object_o *)v8, materialName, 0LL);
    *material = v8;
    sub_1C21DDC(material, v8);
  }
}


bool __fastcall OutlineEffectUtility__CreateShader(
        UnityEngine_Shader_o **shaderAsset,
        System_String_o *shaderName,
        const MethodInfo *method)
{
  UnityEngine_Shader_o *v5; // x0
  UnityEngine_Object_o *v6; // x20
  bool v7; // w20

  if ( (byte_4BD7FBA & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_263/*" from Shader.Find"*/);
    sub_1C21E38(&StringLiteral_19706/*"failed to get "*/);
    byte_4BD7FBA = 1;
  }
  v5 = UnityEngine_Shader__Find(shaderName, 0LL);
  *shaderAsset = v5;
  sub_1C21DDC(shaderAsset, v5);
  v6 = (UnityEngine_Object_o *)*shaderAsset;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Equality(v6, 0LL, 0LL);
  if ( v7 )
    System_String__Concat_63126736(
      (System_String_o *)StringLiteral_19706/*"failed to get "*/,
      shaderName,
      (System_String_o *)StringLiteral_263/*" from Shader.Find"*/,
      0LL);
  return !v7;
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
    sub_1C21DDC(outlineCmd, 0LL);
  }
}


void __fastcall OutlineEffectUtility__DestroyMaterial(UnityEngine_Material_o **mat, const MethodInfo *method)
{
  UnityEngine_Object_o *v3; // x20
  bool isPlaying; // w0
  UnityEngine_Object_o *v5; // x20
  bool v6; // w21

  if ( (byte_4BD7FBC & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Application_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD7FBC = 1;
  }
  v3 = (UnityEngine_Object_o *)*mat;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v3, 0LL, 0LL) )
  {
    if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
    isPlaying = UnityEngine_Application__get_isPlaying(0LL);
    v5 = (UnityEngine_Object_o *)*mat;
    v6 = isPlaying;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( v6 )
      UnityEngine_Object__Destroy_70869612(v5, 0LL);
    else
      UnityEngine_Object__DestroyImmediate_70869800(v5, 0LL);
    *mat = 0LL;
    sub_1C21DDC(mat, 0LL);
  }
}


void __fastcall OutlineEffectUtility__DestroyRenderTexture(
        UnityEngine_RenderTexture_o **renderTexture,
        const MethodInfo *method)
{
  UnityEngine_Object_o *v3; // x20
  bool isPlaying; // w0
  UnityEngine_Object_o *v5; // x20
  bool v6; // w21

  if ( (byte_4BD7FBD & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Application_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD7FBD = 1;
  }
  v3 = (UnityEngine_Object_o *)*renderTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v3, 0LL, 0LL) )
  {
    if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
    isPlaying = UnityEngine_Application__get_isPlaying(0LL);
    v5 = (UnityEngine_Object_o *)*renderTexture;
    v6 = isPlaying;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( v6 )
      UnityEngine_Object__Destroy_70869612(v5, 0LL);
    else
      UnityEngine_Object__DestroyImmediate_70869800(v5, 0LL);
    *renderTexture = 0LL;
    sub_1C21DDC(renderTexture, 0LL);
  }
}


UnityEngine_Camera_o *__fastcall OutlineEffectUtility__GetCamera(
        System_String_o *editorPath,
        System_String_o *battlePath,
        const MethodInfo *method)
{
  UnityEngine_Object_o *v5; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  Il2CppObject *Component_object; // x19

  if ( (byte_4BD7FC2 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_Camera___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_43/*"\n"*/);
    sub_1C21E38(&StringLiteral_7141/*"GameObject.Find return null"*/);
    sub_1C21E38(&StringLiteral_19707/*"failed to get Camera component"*/);
    byte_4BD7FC2 = 1;
  }
  v5 = (UnityEngine_Object_o *)UnityEngine_GameObject__Find(editorPath, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality(v5, 0LL, 0LL);
  if ( !v6 )
    goto LABEL_10;
  v5 = (UnityEngine_Object_o *)UnityEngine_GameObject__Find(battlePath, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality(v5, 0LL, 0LL);
  if ( v6 )
  {
    System_String__Concat_63126736(
      (System_String_o *)StringLiteral_7141/*"GameObject.Find return null"*/,
      (System_String_o *)StringLiteral_43/*"\n"*/,
      battlePath,
      0LL);
    return 0LL;
  }
  else
  {
LABEL_10:
    if ( !v5 )
      sub_1C22094(v6, v7);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v5,
                         (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_Camera___);
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
  if ( (byte_4BD7FC1 & 1) == 0 )
  {
    smr = (UnityEngine_SkinnedMeshRenderer_o *)sub_1C21E38(&StringLiteral_18037/*"cant get material from SkinnedMeshRenderer.sharedMaterials. Either the sharedMaterials is null or have 0 length"*/);
    byte_4BD7FC1 = 1;
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
    sub_1C22094(smr, method);
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
  struct UnityEngine_Vector2_StaticFields *static_fields; // x8
  float x; // s0
  float y; // s1
  float v5; // s8
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  height = UnityEngine_Screen__get_height(0LL);
  if ( (float)((float)height / (float)UnityEngine_Screen__get_width(0LL)) >= 0.5625 )
  {
    v5 = (float)UnityEngine_Screen__get_width(0LL) * 0.5625;
    y = (float)((float)((float)UnityEngine_Screen__get_height(0LL) - v5) * 0.5) / v5;
    x = 0.0;
  }
  else
  {
    if ( !byte_4BD6AAA )
    {
      sub_1C21E38(&UnityEngine_Vector2_TypeInfo);
      byte_4BD6AAA = 1;
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
  __int64 sharedMaterials; // x0
  __int64 v6; // x8
  System_Object_array *v7; // x21
  unsigned int v8; // w25
  __int64 v9; // x22
  UnityEngine_Material_o **v10; // x22
  UnityEngine_Object_o *v11; // x23
  UnityEngine_Object_o *v12; // t1
  int max_length; // w8
  System_Collections_Generic_List_object__o *v14; // x22
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0
  UnityEngine_Object_o *v19; // x23
  UnityEngine_Material_o *v20; // x24
  UnityEngine_Renderer_o *v21; // x0
  System_Object_array *v22; // x1
  UnityEngine_Material_o *v23; // x24
  UnityEngine_Object_o *shader; // x24
  __int64 v25; // x0

  v4 = (UnityEngine_Renderer_o *)smr;
  if ( (byte_4BD7FBF & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Material__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Material__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Material___ctor___77578624);
    sub_1C21E38(&System_Collections_Generic_List_Material__TypeInfo);
    smr = (UnityEngine_SkinnedMeshRenderer_o *)sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD7FBF = 1;
  }
  if ( !v4 )
    goto LABEL_38;
  sharedMaterials = (__int64)UnityEngine_Renderer__get_sharedMaterials(v4, 0LL);
  if ( !sharedMaterials )
    return;
  v6 = *(_QWORD *)(sharedMaterials + 24);
  v7 = (System_Object_array *)sharedMaterials;
  if ( !v6 )
    return;
  if ( !(_DWORD)v6 )
    goto LABEL_39;
  v8 = v6 - 1;
  v9 = sharedMaterials + 8LL * ((int)v6 - 1);
  v12 = *(UnityEngine_Object_o **)(v9 + 32);
  v10 = (UnityEngine_Material_o **)(v9 + 32);
  v11 = v12;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  smr = (UnityEngine_SkinnedMeshRenderer_o *)UnityEngine_Object__op_Equality(
                                               v11,
                                               (UnityEngine_Object_o *)targetMaterial,
                                               0LL);
  if ( ((unsigned __int8)smr & 1) == 0 )
  {
    if ( !targetMaterial )
      goto LABEL_38;
    sharedMaterials = (__int64)UnityEngine_Material__get_shader(targetMaterial, 0LL);
    max_length = v7->max_length;
    if ( max_length < 2 )
      goto LABEL_13;
    if ( v8 < max_length )
    {
      v19 = (UnityEngine_Object_o *)sharedMaterials;
      v20 = *v10;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      sharedMaterials = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v20, 0LL, 0LL);
      if ( (sharedMaterials & 1) != 0 )
      {
LABEL_21:
        if ( v8 < v7->max_length )
        {
          OutlineEffectUtility__DestroyMaterial(v10, (const MethodInfo *)targetMaterial);
          sharedMaterials = sub_1C21F74(targetMaterial, v7->obj.klass->_1.element_class);
          if ( !sharedMaterials )
          {
            v25 = sub_1C220B8();
            sub_1C21F60(v25, 0LL);
          }
          if ( v8 < v7->max_length )
          {
            *v10 = targetMaterial;
            sub_1C21DDC(v10, targetMaterial);
            v21 = v4;
            v22 = v7;
LABEL_27:
            UnityEngine_Renderer__set_sharedMaterials(v21, (UnityEngine_Material_array *)v22, 0LL);
            return;
          }
        }
        goto LABEL_39;
      }
      if ( v8 < v7->max_length )
      {
        v23 = *v10;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        sharedMaterials = UnityEngine_Object__op_Inequality(
                            (UnityEngine_Object_o *)v23,
                            (UnityEngine_Object_o *)targetMaterial,
                            0LL);
        if ( (sharedMaterials & 1) == 0 )
        {
LABEL_13:
          v14 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_Material__TypeInfo);
          System_Collections_Generic_List_object____ctor_56945064(
            v14,
            (System_Collections_Generic_IEnumerable_T__o *)v7,
            (const MethodInfo_364E9A8 *)Method_System_Collections_Generic_List_Material___ctor___77578624);
          if ( v14 )
          {
            items = v14->fields._items;
            v16 = Method_System_Collections_Generic_List_Material__Add__;
            ++v14->fields._version;
            if ( items )
            {
              size = v14->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v14,
                  (Il2CppObject *)targetMaterial,
                  *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
              }
              else
              {
                v18 = &items->obj.klass + size;
                v14->fields._size = size + 1;
                v18[4] = (Il2CppClass *)targetMaterial;
                sub_1C21DDC(v18 + 4, targetMaterial);
              }
              v22 = System_Collections_Generic_List_object___ToArray(
                      v14,
                      (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_Material__ToArray__);
              v21 = v4;
              goto LABEL_27;
            }
          }
LABEL_38:
          sub_1C22094(smr, targetMaterial);
        }
        if ( v8 < v7->max_length )
        {
          smr = (UnityEngine_SkinnedMeshRenderer_o *)*v10;
          if ( !*v10 )
            goto LABEL_38;
          shader = (UnityEngine_Object_o *)UnityEngine_Material__get_shader((UnityEngine_Material_o *)smr, 0LL);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          sharedMaterials = UnityEngine_Object__op_Equality(shader, v19, 0LL);
          if ( (sharedMaterials & 1) == 0 )
            goto LABEL_13;
          goto LABEL_21;
        }
      }
    }
LABEL_39:
    sub_1C2209C(sharedMaterials, targetMaterial);
  }
}


void __fastcall OutlineEffectUtility__InstantiateCommandBuffer(
        UnityEngine_Rendering_CommandBuffer_o **cb,
        System_String_o *name,
        const MethodInfo *method)
{
  UnityEngine_Rendering_CommandBuffer_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4BD7FBB & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Rendering_CommandBuffer_TypeInfo);
    byte_4BD7FBB = 1;
  }
  if ( *cb )
    UnityEngine_Rendering_CommandBuffer__Dispose(*cb, 0LL);
  v5 = (UnityEngine_Rendering_CommandBuffer_o *)sub_1C22084(UnityEngine_Rendering_CommandBuffer_TypeInfo);
  UnityEngine_Rendering_CommandBuffer___ctor(v5, 0LL);
  if ( !v5 )
    sub_1C22094(v6, v7);
  UnityEngine_Rendering_CommandBuffer__set_name(v5, name, 0LL);
  *cb = v5;
  sub_1C21DDC(cb, v5);
}


void __fastcall OutlineEffectUtility__InstantiateRenderTexture(
        UnityEngine_RenderTexture_o **rt,
        int32_t rtWidth,
        int32_t rtHeight,
        System_String_o *rtName,
        const MethodInfo *method)
{
  UnityEngine_Object_o *v9; // x23
  bool isPlaying; // w0
  UnityEngine_Object_o *v11; // x23
  bool v12; // w24
  UnityEngine_RenderTexture_o *v13; // x23
  __int64 v14; // x1
  UnityEngine_Object_o *v15; // x0

  if ( (byte_4BD7FC0 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Application_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&UnityEngine_RenderTexture_TypeInfo);
    byte_4BD7FC0 = 1;
  }
  v9 = (UnityEngine_Object_o *)*rt;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v9, 0LL, 0LL) )
  {
    if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
    isPlaying = UnityEngine_Application__get_isPlaying(0LL);
    v11 = (UnityEngine_Object_o *)*rt;
    v12 = isPlaying;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( v12 )
      UnityEngine_Object__Destroy_70869612(v11, 0LL);
    else
      UnityEngine_Object__DestroyImmediate_70869800(v11, 0LL);
  }
  v13 = (UnityEngine_RenderTexture_o *)sub_1C22084(UnityEngine_RenderTexture_TypeInfo);
  UnityEngine_RenderTexture___ctor_70776496(v13, rtWidth, rtHeight, 0, 0LL);
  *rt = v13;
  sub_1C21DDC(rt, v13);
  v15 = (UnityEngine_Object_o *)*rt;
  if ( !*rt || (UnityEngine_Object__set_name(v15, rtName, 0LL), (v15 = (UnityEngine_Object_o *)*rt) == 0LL) )
    sub_1C22094(v15, v14);
  UnityEngine_RenderTexture__Create((UnityEngine_RenderTexture_o *)v15, 0LL);
}


void __fastcall OutlineEffectUtility__RemoveNullMaterials(
        UnityEngine_SkinnedMeshRenderer_o *smr,
        const MethodInfo *method)
{
  UnityEngine_Renderer_o *v2; // x19
  UnityEngine_Material_array *sharedMaterials; // x0
  System_Collections_Generic_IEnumerable_T__o *v4; // x21
  System_Collections_Generic_List_object__o *v5; // x20
  int32_t v6; // w21
  Il2CppObject *Item; // x22
  System_Object_array *v8; // x1

  v2 = (UnityEngine_Renderer_o *)smr;
  if ( (byte_4BD7FBE & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Material__RemoveAt__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Material__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Material___ctor___77578624);
    sub_1C21E38(&Method_System_Collections_Generic_List_Material__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Material__get_Item__);
    sub_1C21E38(&System_Collections_Generic_List_Material__TypeInfo);
    smr = (UnityEngine_SkinnedMeshRenderer_o *)sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD7FBE = 1;
  }
  if ( !v2 )
    goto LABEL_17;
  sharedMaterials = UnityEngine_Renderer__get_sharedMaterials(v2, 0LL);
  if ( !sharedMaterials )
    return;
  v4 = (System_Collections_Generic_IEnumerable_T__o *)sharedMaterials;
  if ( !*(_QWORD *)&sharedMaterials->max_length )
    return;
  v5 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_Material__TypeInfo);
  System_Collections_Generic_List_object____ctor_56945064(
    v5,
    v4,
    (const MethodInfo_364E9A8 *)Method_System_Collections_Generic_List_Material___ctor___77578624);
  if ( !v5 )
LABEL_17:
    sub_1C22094(smr, method);
  if ( v5->fields._size >= 1 )
  {
    v6 = 0;
    do
    {
      while ( 1 )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 v5,
                 v6,
                 (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_Material__get_Item__);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0LL, 0LL) )
          break;
        System_Collections_Generic_List_object___RemoveAt(
          v5,
          v6,
          (const MethodInfo_3650888 *)Method_System_Collections_Generic_List_Material__RemoveAt__);
        v6 = 0;
        if ( v5->fields._size <= 0 )
          goto LABEL_15;
      }
      ++v6;
    }
    while ( v6 < v5->fields._size );
  }
LABEL_15:
  v8 = System_Collections_Generic_List_object___ToArray(
         v5,
         (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_Material__ToArray__);
  UnityEngine_Renderer__set_sharedMaterials(v2, (UnityEngine_Material_array *)v8, 0LL);
}


void __fastcall OutlineEffectUtility__RemoveOutlineMaterialFromSharedMaterials(
        UnityEngine_SkinnedMeshRenderer_o *smr,
        UnityEngine_Material_o *instantiatedMaterialReference,
        const MethodInfo *method)
{
  UnityEngine_Renderer_o *v4; // x19
  UnityEngine_Material_array *sharedMaterials; // x0
  UnityEngine_Material_array *v6; // x22
  System_Collections_Generic_List_object__o *v7; // x21
  int32_t v8; // w22
  Il2CppObject *Item; // x23
  System_Object_array *v10; // x1

  v4 = (UnityEngine_Renderer_o *)smr;
  if ( (byte_4BD7FC3 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Material__RemoveAt__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Material__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Material___ctor___77578624);
    sub_1C21E38(&Method_System_Collections_Generic_List_Material__get_Item__);
    sub_1C21E38(&System_Collections_Generic_List_Material__TypeInfo);
    smr = (UnityEngine_SkinnedMeshRenderer_o *)sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD7FC3 = 1;
  }
  if ( !v4 )
    goto LABEL_12;
  sharedMaterials = UnityEngine_Renderer__get_sharedMaterials(v4, 0LL);
  if ( !sharedMaterials )
    return;
  v6 = sharedMaterials;
  if ( !*(_QWORD *)&sharedMaterials->max_length )
    return;
  v7 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_Material__TypeInfo);
  System_Collections_Generic_List_object____ctor_56945064(
    v7,
    (System_Collections_Generic_IEnumerable_T__o *)v6,
    (const MethodInfo_364E9A8 *)Method_System_Collections_Generic_List_Material___ctor___77578624);
  if ( !v7 )
LABEL_12:
    sub_1C22094(smr, instantiatedMaterialReference);
  v8 = v6->max_length - 1;
  Item = System_Collections_Generic_List_object___get_Item(
           v7,
           v8,
           (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_Material__get_Item__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(
         (UnityEngine_Object_o *)Item,
         (UnityEngine_Object_o *)instantiatedMaterialReference,
         0LL) )
  {
    System_Collections_Generic_List_object___RemoveAt(
      v7,
      v8,
      (const MethodInfo_3650888 *)Method_System_Collections_Generic_List_Material__RemoveAt__);
    v10 = System_Collections_Generic_List_object___ToArray(
            v7,
            (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_Material__ToArray__);
    UnityEngine_Renderer__set_sharedMaterials(v4, (UnityEngine_Material_array *)v10, 0LL);
  }
}


void __fastcall OutlineEffectUtility__ShowLog(System_String_o *message, const MethodInfo *method)
{
  ;
}