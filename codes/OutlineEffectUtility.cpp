void OutlineEffectUtility__CreateMaterial(
        UnityEngine_Material_o **material,
        UnityEngine_Shader_o *shader,
        System_String_o *materialName,
        const MethodInfo *method)
{
  UnityEngine_Object_o *v7; // x22
  UnityEngine_Material_o *v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4C22ADE & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Material_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C22ADE = 1;
  }
  v7 = (UnityEngine_Object_o *)*material;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v7, 0, 0) )
  {
    v8 = (UnityEngine_Material_o *)sub_1C2D6DC(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v8, shader, 0);
    if ( !v8 )
      sub_1C2D6EC(v9, v10);
    UnityEngine_Object__set_name((UnityEngine_Object_o *)v8, materialName, 0);
    *material = v8;
    sub_1C2D434((CGThumbnailListItem_o *)material, (int32_t)v8, v11, v12);
  }
}


bool OutlineEffectUtility__CreateShader(
        UnityEngine_Shader_o **shaderAsset,
        System_String_o *shaderName,
        const MethodInfo *method)
{
  UnityEngine_Shader_o *v5; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  UnityEngine_Object_o *v8; // x20
  bool v9; // w20

  if ( (byte_4C22ADF & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_244/*" from Shader.Find"*/);
    sub_1C2D490(&StringLiteral_19380/*"failed to get "*/);
    byte_4C22ADF = 1;
  }
  v5 = UnityEngine_Shader__Find(shaderName, 0);
  *shaderAsset = v5;
  sub_1C2D434((CGThumbnailListItem_o *)shaderAsset, (int32_t)v5, v6, v7);
  v8 = (UnityEngine_Object_o *)*shaderAsset;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__op_Equality(v8, 0, 0);
  if ( v9 )
    System_String__Concat_63496112(
      (System_String_o *)StringLiteral_19380/*"failed to get "*/,
      shaderName,
      (System_String_o *)StringLiteral_244/*" from Shader.Find"*/,
      0);
  return !v9;
}


void OutlineEffectUtility__DestroyCommandBuffer(
        UnityEngine_Rendering_CommandBuffer_o **outlineCmd,
        const MethodInfo *method)
{
  UnityEngine_Rendering_CommandBuffer_o *v3; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  v3 = *outlineCmd;
  if ( v3 )
  {
    UnityEngine_Rendering_CommandBuffer__Dispose(v3, 0);
    *outlineCmd = 0;
    sub_1C2D434((CGThumbnailListItem_o *)outlineCmd, 0, v4, v5);
  }
}


void OutlineEffectUtility__DestroyMaterial(UnityEngine_Material_o **mat, const MethodInfo *method)
{
  UnityEngine_Object_o *v3; // x20
  bool isPlaying; // w0
  UnityEngine_Object_o *v5; // x20
  bool v6; // w21
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C22AE1 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Application_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C22AE1 = 1;
  }
  v3 = (UnityEngine_Object_o *)*mat;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v3, 0, 0) )
  {
    if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
    isPlaying = UnityEngine_Application__get_isPlaying(0);
    v5 = (UnityEngine_Object_o *)*mat;
    v6 = isPlaying;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( v6 )
      UnityEngine_Object__Destroy_71163704(v5, 0);
    else
      UnityEngine_Object__DestroyImmediate_71163892(v5, 0);
    *mat = 0;
    sub_1C2D434((CGThumbnailListItem_o *)mat, 0, v7, v8);
  }
}


void OutlineEffectUtility__DestroyRenderTexture(UnityEngine_RenderTexture_o **renderTexture, const MethodInfo *method)
{
  UnityEngine_Object_o *v3; // x20
  bool isPlaying; // w0
  UnityEngine_Object_o *v5; // x20
  bool v6; // w21
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C22AE2 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Application_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C22AE2 = 1;
  }
  v3 = (UnityEngine_Object_o *)*renderTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v3, 0, 0) )
  {
    if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
    isPlaying = UnityEngine_Application__get_isPlaying(0);
    v5 = (UnityEngine_Object_o *)*renderTexture;
    v6 = isPlaying;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( v6 )
      UnityEngine_Object__Destroy_71163704(v5, 0);
    else
      UnityEngine_Object__DestroyImmediate_71163892(v5, 0);
    *renderTexture = 0;
    sub_1C2D434((CGThumbnailListItem_o *)renderTexture, 0, v7, v8);
  }
}


UnityEngine_Camera_o *OutlineEffectUtility__GetCamera(
        System_String_o *editorPath,
        System_String_o *battlePath,
        const MethodInfo *method)
{
  UnityEngine_Object_o *v5; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  Il2CppObject *Component_object; // x19

  if ( (byte_4C22AE7 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_Camera___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_43/*"\n"*/);
    sub_1C2D490(&StringLiteral_7033/*"GameObject.Find return null"*/);
    sub_1C2D490(&StringLiteral_19381/*"failed to get Camera component"*/);
    byte_4C22AE7 = 1;
  }
  v5 = (UnityEngine_Object_o *)UnityEngine_GameObject__Find(editorPath, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality(v5, 0, 0);
  if ( !v6 )
    goto LABEL_10;
  v5 = (UnityEngine_Object_o *)UnityEngine_GameObject__Find(battlePath, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality(v5, 0, 0);
  if ( v6 )
  {
    System_String__Concat_63496112(
      (System_String_o *)StringLiteral_7033/*"GameObject.Find return null"*/,
      (System_String_o *)StringLiteral_43/*"\n"*/,
      battlePath,
      0);
    return 0;
  }
  else
  {
LABEL_10:
    if ( !v5 )
      sub_1C2D6EC(v6, v7);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v5,
                         (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_Camera___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
      return 0;
    else
      return (UnityEngine_Camera_o *)Component_object;
  }
}


UnityEngine_Texture_o *OutlineEffectUtility__GetMainTexture(
        UnityEngine_SkinnedMeshRenderer_o *smr,
        const MethodInfo *method)
{
  UnityEngine_Renderer_o *v2; // x19
  UnityEngine_Material_array *sharedMaterials; // x0

  v2 = (UnityEngine_Renderer_o *)smr;
  if ( (byte_4C22AE6 & 1) == 0 )
  {
    smr = (UnityEngine_SkinnedMeshRenderer_o *)sub_1C2D490(&StringLiteral_17727/*"cant get material from SkinnedMeshRenderer.sharedMaterials. Either the sharedMaterials is null or have 0 length"*/);
    byte_4C22AE6 = 1;
  }
  if ( !v2 )
    goto LABEL_9;
  sharedMaterials = UnityEngine_Renderer__get_sharedMaterials(v2, 0);
  if ( sharedMaterials && SLODWORD(sharedMaterials->max_length) >= 1 )
  {
    smr = (UnityEngine_SkinnedMeshRenderer_o *)sharedMaterials->m_Items[0];
    if ( smr )
      return UnityEngine_Material__get_mainTexture((UnityEngine_Material_o *)smr, 0);
LABEL_9:
    sub_1C2D6EC(smr, method);
  }
  return 0;
}


UnityEngine_Vector2_o OutlineEffectUtility__GetScaledScreenResolution(const MethodInfo *method)
{
  int32_t height; // w19
  float v2; // s9
  int32_t width; // w19
  float v4; // s1
  float v5; // s0
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  height = UnityEngine_Screen__get_height(0);
  v2 = (float)height / (float)UnityEngine_Screen__get_width(0);
  width = UnityEngine_Screen__get_width(0);
  if ( v2 >= 0.5625 )
    v4 = (float)UnityEngine_Screen__get_width(0) * 0.5625;
  else
    v4 = (float)UnityEngine_Screen__get_height(0);
  v5 = (float)width;
  result.fields.y = v4;
  result.fields.x = v5;
  return result;
}


UnityEngine_Vector2_o OutlineEffectUtility__GetScaledUVOffset(const MethodInfo *method)
{
  int32_t height; // w19
  struct UnityEngine_Vector2_StaticFields *static_fields; // x8
  float x; // s0
  float y; // s1
  float v5; // s8
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  height = UnityEngine_Screen__get_height(0);
  if ( (float)((float)height / (float)UnityEngine_Screen__get_width(0)) >= 0.5625 )
  {
    v5 = (float)UnityEngine_Screen__get_width(0) * 0.5625;
    y = (float)((float)((float)UnityEngine_Screen__get_height(0) - v5) * 0.5) / v5;
    x = 0.0;
  }
  else
  {
    if ( !byte_4C20C9A )
    {
      sub_1C2D490(&UnityEngine_Vector2_TypeInfo);
      byte_4C20C9A = 1;
    }
    static_fields = UnityEngine_Vector2_TypeInfo->static_fields;
    x = static_fields->zeroVector.fields.x;
    y = static_fields->zeroVector.fields.y;
  }
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


void OutlineEffectUtility__InsertOutlineMaterialToSharedMaterialsAtLastIndex(
        UnityEngine_SkinnedMeshRenderer_o *smr,
        UnityEngine_Material_o *targetMaterial,
        const MethodInfo *method)
{
  UnityEngine_Renderer_o *v4; // x19
  __int64 sharedMaterials; // x0
  __int64 v6; // x2
  __int64 v7; // x8
  System_Object_array *v8; // x21
  unsigned int v9; // w25
  __int64 v10; // x22
  UnityEngine_Material_o **v11; // x22
  UnityEngine_Object_o *v12; // x23
  UnityEngine_Object_o *v13; // t1
  int max_length; // w8
  System_Collections_Generic_List_object__o *v15; // x22
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  UnityEngine_Object_o *v22; // x23
  UnityEngine_Material_o *v23; // x24
  const MethodInfo *v24; // x3
  UnityEngine_Renderer_o *v25; // x0
  System_Object_array *v26; // x1
  UnityEngine_Material_o *v27; // x24
  UnityEngine_Object_o *shader; // x24
  __int64 v29; // x0

  v4 = (UnityEngine_Renderer_o *)smr;
  if ( (byte_4C22AE4 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Material__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Material__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Material___ctor___77946960);
    sub_1C2D490(&System_Collections_Generic_List_Material__TypeInfo);
    smr = (UnityEngine_SkinnedMeshRenderer_o *)sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C22AE4 = 1;
  }
  if ( !v4 )
    goto LABEL_38;
  sharedMaterials = (__int64)UnityEngine_Renderer__get_sharedMaterials(v4, 0);
  if ( !sharedMaterials )
    return;
  v7 = *(_QWORD *)(sharedMaterials + 24);
  v8 = (System_Object_array *)sharedMaterials;
  if ( !v7 )
    return;
  if ( !(_DWORD)v7 )
    goto LABEL_39;
  v9 = v7 - 1;
  v10 = sharedMaterials + 8LL * ((int)v7 - 1);
  v13 = *(UnityEngine_Object_o **)(v10 + 32);
  v11 = (UnityEngine_Material_o **)(v10 + 32);
  v12 = v13;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  smr = (UnityEngine_SkinnedMeshRenderer_o *)UnityEngine_Object__op_Equality(
                                               v12,
                                               (UnityEngine_Object_o *)targetMaterial,
                                               0);
  if ( ((unsigned __int8)smr & 1) == 0 )
  {
    if ( !targetMaterial )
      goto LABEL_38;
    sharedMaterials = (__int64)UnityEngine_Material__get_shader(targetMaterial, 0);
    max_length = v8->max_length;
    if ( max_length < 2 )
      goto LABEL_13;
    if ( v9 < max_length )
    {
      v22 = (UnityEngine_Object_o *)sharedMaterials;
      v23 = *v11;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      sharedMaterials = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v23, 0, 0);
      if ( (sharedMaterials & 1) != 0 )
      {
LABEL_21:
        if ( v9 < LODWORD(v8->max_length) )
        {
          OutlineEffectUtility__DestroyMaterial(v11, (const MethodInfo *)targetMaterial);
          sharedMaterials = sub_1C2D5CC(targetMaterial, v8->obj.klass->_1.element_class);
          if ( !sharedMaterials )
          {
            v29 = sub_1C2D710();
            sub_1C2D5B8(v29, 0);
          }
          if ( v9 < LODWORD(v8->max_length) )
          {
            *v11 = targetMaterial;
            sub_1C2D434((CGThumbnailListItem_o *)v11, (int32_t)targetMaterial, v6, v24);
            v25 = v4;
            v26 = v8;
LABEL_27:
            UnityEngine_Renderer__set_sharedMaterials(v25, (UnityEngine_Material_array *)v26, 0);
            return;
          }
        }
        goto LABEL_39;
      }
      if ( v9 < LODWORD(v8->max_length) )
      {
        v27 = *v11;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        sharedMaterials = UnityEngine_Object__op_Inequality(
                            (UnityEngine_Object_o *)v27,
                            (UnityEngine_Object_o *)targetMaterial,
                            0);
        if ( (sharedMaterials & 1) == 0 )
        {
LABEL_13:
          v15 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_Material__TypeInfo);
          System_Collections_Generic_List_object____ctor_58233976(
            v15,
            (System_Collections_Generic_IEnumerable_T__o *)v8,
            (const MethodInfo_3789478 *)Method_System_Collections_Generic_List_Material___ctor___77946960);
          if ( v15 )
          {
            items = v15->fields._items;
            v19 = Method_System_Collections_Generic_List_Material__Add__;
            ++v15->fields._version;
            if ( items )
            {
              size = v15->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v15,
                  (Il2CppObject *)targetMaterial,
                  *(const MethodInfo_3789B84 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
              }
              else
              {
                v21 = &items->obj.klass + size;
                v15->fields._size = size + 1;
                v21[4] = (Il2CppClass *)targetMaterial;
                sub_1C2D434((CGThumbnailListItem_o *)(v21 + 4), (int32_t)targetMaterial, v16, v17);
              }
              v26 = System_Collections_Generic_List_object___ToArray(
                      v15,
                      (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_Material__ToArray__);
              v25 = v4;
              goto LABEL_27;
            }
          }
LABEL_38:
          sub_1C2D6EC(smr, targetMaterial);
        }
        if ( v9 < LODWORD(v8->max_length) )
        {
          smr = (UnityEngine_SkinnedMeshRenderer_o *)*v11;
          if ( !*v11 )
            goto LABEL_38;
          shader = (UnityEngine_Object_o *)UnityEngine_Material__get_shader((UnityEngine_Material_o *)smr, 0);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          sharedMaterials = UnityEngine_Object__op_Equality(shader, v22, 0);
          if ( (sharedMaterials & 1) == 0 )
            goto LABEL_13;
          goto LABEL_21;
        }
      }
    }
LABEL_39:
    sub_1C2D6F4(sharedMaterials, targetMaterial, v6);
  }
}


void OutlineEffectUtility__InstantiateCommandBuffer(
        UnityEngine_Rendering_CommandBuffer_o **cb,
        System_String_o *name,
        const MethodInfo *method)
{
  UnityEngine_Rendering_CommandBuffer_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C22AE0 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Rendering_CommandBuffer_TypeInfo);
    byte_4C22AE0 = 1;
  }
  if ( *cb )
    UnityEngine_Rendering_CommandBuffer__Dispose(*cb, 0);
  v5 = (UnityEngine_Rendering_CommandBuffer_o *)sub_1C2D6DC(UnityEngine_Rendering_CommandBuffer_TypeInfo);
  UnityEngine_Rendering_CommandBuffer___ctor(v5, 0);
  if ( !v5 )
    sub_1C2D6EC(v6, v7);
  UnityEngine_Rendering_CommandBuffer__set_name(v5, name, 0);
  *cb = v5;
  sub_1C2D434((CGThumbnailListItem_o *)cb, (int32_t)v5, v8, v9);
}


void OutlineEffectUtility__InstantiateRenderTexture(
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
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  __int64 v16; // x1
  UnityEngine_Object_o *v17; // x0

  if ( (byte_4C22AE5 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Application_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&UnityEngine_RenderTexture_TypeInfo);
    byte_4C22AE5 = 1;
  }
  v9 = (UnityEngine_Object_o *)*rt;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v9, 0, 0) )
  {
    if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
    isPlaying = UnityEngine_Application__get_isPlaying(0);
    v11 = (UnityEngine_Object_o *)*rt;
    v12 = isPlaying;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( v12 )
      UnityEngine_Object__Destroy_71163704(v11, 0);
    else
      UnityEngine_Object__DestroyImmediate_71163892(v11, 0);
  }
  v13 = (UnityEngine_RenderTexture_o *)sub_1C2D6DC(UnityEngine_RenderTexture_TypeInfo);
  UnityEngine_RenderTexture___ctor_71070696(v13, rtWidth, rtHeight, 0, 0);
  *rt = v13;
  sub_1C2D434((CGThumbnailListItem_o *)rt, (int32_t)v13, v14, v15);
  v17 = (UnityEngine_Object_o *)*rt;
  if ( !*rt || (UnityEngine_Object__set_name(v17, rtName, 0), (v17 = (UnityEngine_Object_o *)*rt) == 0) )
    sub_1C2D6EC(v17, v16);
  UnityEngine_RenderTexture__Create((UnityEngine_RenderTexture_o *)v17, 0);
}


void OutlineEffectUtility__RemoveNullMaterials(UnityEngine_SkinnedMeshRenderer_o *smr, const MethodInfo *method)
{
  UnityEngine_Renderer_o *v2; // x19
  UnityEngine_Material_array *sharedMaterials; // x0
  System_Collections_Generic_IEnumerable_T__o *v4; // x21
  System_Collections_Generic_List_object__o *v5; // x20
  int32_t v6; // w21
  Il2CppObject *Item; // x22
  System_Object_array *v8; // x1

  v2 = (UnityEngine_Renderer_o *)smr;
  if ( (byte_4C22AE3 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Material__RemoveAt__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Material__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Material___ctor___77946960);
    sub_1C2D490(&Method_System_Collections_Generic_List_Material__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Material__get_Item__);
    sub_1C2D490(&System_Collections_Generic_List_Material__TypeInfo);
    smr = (UnityEngine_SkinnedMeshRenderer_o *)sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C22AE3 = 1;
  }
  if ( !v2 )
    goto LABEL_17;
  sharedMaterials = UnityEngine_Renderer__get_sharedMaterials(v2, 0);
  if ( !sharedMaterials )
    return;
  v4 = (System_Collections_Generic_IEnumerable_T__o *)sharedMaterials;
  if ( !sharedMaterials->max_length )
    return;
  v5 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_Material__TypeInfo);
  System_Collections_Generic_List_object____ctor_58233976(
    v5,
    v4,
    (const MethodInfo_3789478 *)Method_System_Collections_Generic_List_Material___ctor___77946960);
  if ( !v5 )
LABEL_17:
    sub_1C2D6EC(smr, method);
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
                 (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_Material__get_Item__);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0, 0) )
          break;
        System_Collections_Generic_List_object___RemoveAt(
          v5,
          v6,
          (const MethodInfo_378B358 *)Method_System_Collections_Generic_List_Material__RemoveAt__);
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
         (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_Material__ToArray__);
  UnityEngine_Renderer__set_sharedMaterials(v2, (UnityEngine_Material_array *)v8, 0);
}


void OutlineEffectUtility__RemoveOutlineMaterialFromSharedMaterials(
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
  if ( (byte_4C22AE8 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Material__RemoveAt__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Material__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Material___ctor___77946960);
    sub_1C2D490(&Method_System_Collections_Generic_List_Material__get_Item__);
    sub_1C2D490(&System_Collections_Generic_List_Material__TypeInfo);
    smr = (UnityEngine_SkinnedMeshRenderer_o *)sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C22AE8 = 1;
  }
  if ( !v4 )
    goto LABEL_12;
  sharedMaterials = UnityEngine_Renderer__get_sharedMaterials(v4, 0);
  if ( !sharedMaterials )
    return;
  v6 = sharedMaterials;
  if ( !sharedMaterials->max_length )
    return;
  v7 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_Material__TypeInfo);
  System_Collections_Generic_List_object____ctor_58233976(
    v7,
    (System_Collections_Generic_IEnumerable_T__o *)v6,
    (const MethodInfo_3789478 *)Method_System_Collections_Generic_List_Material___ctor___77946960);
  if ( !v7 )
LABEL_12:
    sub_1C2D6EC(smr, instantiatedMaterialReference);
  v8 = LODWORD(v6->max_length) - 1;
  Item = System_Collections_Generic_List_object___get_Item(
           v7,
           v8,
           (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_Material__get_Item__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(
         (UnityEngine_Object_o *)Item,
         (UnityEngine_Object_o *)instantiatedMaterialReference,
         0) )
  {
    System_Collections_Generic_List_object___RemoveAt(
      v7,
      v8,
      (const MethodInfo_378B358 *)Method_System_Collections_Generic_List_Material__RemoveAt__);
    v10 = System_Collections_Generic_List_object___ToArray(
            v7,
            (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_Material__ToArray__);
    UnityEngine_Renderer__set_sharedMaterials(v4, (UnityEngine_Material_array *)v10, 0);
  }
}


void OutlineEffectUtility__ShowLog(System_String_o *message, const MethodInfo *method)
{
  ;
}