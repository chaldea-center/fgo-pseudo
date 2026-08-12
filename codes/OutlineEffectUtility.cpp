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
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_596BDB1 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Material_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596BDB1 = 1;
  }
  v7 = (UnityEngine_Object_o *)*material;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, shader, materialName);
  if ( UnityEngine_Object__op_Equality(v7, 0, 0) )
  {
    v8 = (UnityEngine_Material_o *)sub_2213CCC(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v8, shader, 0);
    if ( !v8 )
      sub_2213CDC(v9, v10);
    UnityEngine_Object__set_name((UnityEngine_Object_o *)v8, materialName, 0);
    *material = v8;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)material, (int32_t)v8, v11, v12, v13, v14, v15, v16);
  }
}


bool OutlineEffectUtility__CreateShader(
        UnityEngine_Shader_o **shaderAsset,
        System_String_o *shaderName,
        const MethodInfo *method)
{
  UnityEngine_Shader_o *v5; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  __int64 v12; // x1
  __int64 v13; // x2
  UnityEngine_Object_o *v14; // x20
  bool v15; // w20

  if ( (byte_596BDB2 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_251/*" from Shader.Find"*/);
    sub_2213A60(&StringLiteral_20302/*"failed to get "*/);
    byte_596BDB2 = 1;
  }
  v5 = UnityEngine_Shader__Find(shaderName, 0);
  *shaderAsset = v5;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)shaderAsset, (int32_t)v5, v6, v7, v8, v9, v10, v11);
  v14 = (UnityEngine_Object_o *)*shaderAsset;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12, v13);
  v15 = UnityEngine_Object__op_Equality(v14, 0, 0);
  if ( v15 )
    System_String__Concat_75694928(
      (System_String_o *)StringLiteral_20302/*"failed to get "*/,
      shaderName,
      (System_String_o *)StringLiteral_251/*" from Shader.Find"*/,
      0);
  return !v15;
}


void OutlineEffectUtility__DestroyCommandBuffer(
        UnityEngine_Rendering_CommandBuffer_o **outlineCmd,
        const MethodInfo *method)
{
  UnityEngine_Rendering_CommandBuffer_o *v3; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  v3 = *outlineCmd;
  if ( v3 )
  {
    UnityEngine_Rendering_CommandBuffer__Dispose(v3, 0);
    *outlineCmd = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)outlineCmd, 0, v4, v5, v6, v7, v8, v9);
  }
}


void OutlineEffectUtility__DestroyMaterial(UnityEngine_Material_o **mat, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  bool isPlaying; // w8
  UnityEngine_Object_o *v10; // x20
  int v11; // w9
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_596BDB4 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Application_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596BDB4 = 1;
  }
  v4 = (UnityEngine_Object_o *)*mat;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( !UnityEngine_Object__op_Equality(v4, 0, 0) )
  {
    if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, v5, v6);
    isPlaying = UnityEngine_Application__get_isPlaying(0);
    v10 = (UnityEngine_Object_o *)*mat;
    v11 = *(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1);
    if ( isPlaying )
    {
      if ( !v11 )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
      UnityEngine_Object__Destroy_83459800(v10, 0);
    }
    else
    {
      if ( !v11 )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
      UnityEngine_Object__DestroyImmediate_83460132(v10, 0);
    }
    *mat = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)mat, 0, v12, v13, v14, v15, v16, v17);
  }
}


void OutlineEffectUtility__DestroyRenderTexture(UnityEngine_RenderTexture_o **renderTexture, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  bool isPlaying; // w8
  UnityEngine_Object_o *v10; // x20
  int v11; // w9
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_596BDB5 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Application_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596BDB5 = 1;
  }
  v4 = (UnityEngine_Object_o *)*renderTexture;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(v4, 0, 0) )
  {
    if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, v5, v6);
    isPlaying = UnityEngine_Application__get_isPlaying(0);
    v10 = (UnityEngine_Object_o *)*renderTexture;
    v11 = *(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1);
    if ( isPlaying )
    {
      if ( !v11 )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
      UnityEngine_Object__Destroy_83459800(v10, 0);
    }
    else
    {
      if ( !v11 )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
      UnityEngine_Object__DestroyImmediate_83460132(v10, 0);
    }
    *renderTexture = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)renderTexture, 0, v12, v13, v14, v15, v16, v17);
  }
}


UnityEngine_Camera_o *OutlineEffectUtility__GetCamera(
        System_String_o *editorPath,
        System_String_o *battlePath,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *v7; // x20
  _BOOL8 v8; // x0
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  Il2CppObject *Component_object; // x19

  if ( (byte_596BDBA & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_Camera___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_43/*"\n"*/);
    sub_2213A60(&StringLiteral_7335/*"GameObject.Find return null"*/);
    sub_2213A60(&StringLiteral_20303/*"failed to get Camera component"*/);
    byte_596BDBA = 1;
  }
  v7 = (UnityEngine_Object_o *)UnityEngine_GameObject__Find(editorPath, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  v8 = UnityEngine_Object__op_Equality(v7, 0, 0);
  if ( !v8 )
    goto LABEL_10;
  v7 = (UnityEngine_Object_o *)UnityEngine_GameObject__Find(battlePath, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v11);
  v8 = UnityEngine_Object__op_Equality(v7, 0, 0);
  if ( v8 )
  {
    System_String__Concat_75694928(
      (System_String_o *)StringLiteral_7335/*"GameObject.Find return null"*/,
      (System_String_o *)StringLiteral_43/*"\n"*/,
      battlePath,
      0);
    return 0;
  }
  else
  {
LABEL_10:
    if ( !v7 )
      sub_2213CDC(v8, v9);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v7,
                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_Camera___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v14);
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
  if ( (byte_596BDB9 & 1) == 0 )
  {
    smr = (UnityEngine_SkinnedMeshRenderer_o *)sub_2213A60(&StringLiteral_18521/*"cant get material from SkinnedMeshRenderer.sharedMaterials. Either the sharedMaterials is null or have 0 length"*/);
    byte_596BDB9 = 1;
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
    sub_2213CDC(smr, method);
  }
  return 0;
}


UnityEngine_Vector2_o OutlineEffectUtility__GetScaledScreenResolution(const MethodInfo *method)
{
  int32_t height; // w19
  float v2; // s9
  int32_t width; // w19
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  height = UnityEngine_Screen__get_height(0);
  v2 = (float)height / (float)UnityEngine_Screen__get_width(0);
  width = UnityEngine_Screen__get_width(0);
  if ( v2 >= 0.5625 )
    result.fields.y = (float)UnityEngine_Screen__get_width(0) * 0.5625;
  else
    result.fields.y = (float)UnityEngine_Screen__get_height(0);
  result.fields.x = (float)width;
  return result;
}


UnityEngine_Vector2_o OutlineEffectUtility__GetScaledUVOffset(const MethodInfo *method)
{
  int32_t height; // w19
  struct UnityEngine_Vector2_StaticFields *static_fields; // x8
  float v5; // s8
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  height = UnityEngine_Screen__get_height(0);
  if ( (float)((float)height / (float)UnityEngine_Screen__get_width(0)) >= 0.5625 )
  {
    v5 = (float)UnityEngine_Screen__get_width(0) * 0.5625;
    result.fields.y = (float)((float)((float)UnityEngine_Screen__get_height(0) - v5) * 0.5) / v5;
    result.fields.x = 0.0;
  }
  else
  {
    if ( !byte_59699C0 )
    {
      sub_2213A60(&UnityEngine_Vector2_TypeInfo);
      byte_59699C0 = 1;
    }
    static_fields = UnityEngine_Vector2_TypeInfo->static_fields;
    result.fields.x = static_fields->zeroVector.fields.x;
    result.fields.y = static_fields->zeroVector.fields.y;
  }
  return result;
}


void OutlineEffectUtility__InsertOutlineMaterialToSharedMaterialsAtLastIndex(
        UnityEngine_SkinnedMeshRenderer_o *smr,
        UnityEngine_Material_o *targetMaterial,
        const MethodInfo *method)
{
  UnityEngine_Renderer_o *v4; // x19
  __int64 sharedMaterials; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x8
  System_Object_array *v9; // x21
  __int64 v10; // x24
  __int64 v11; // x25
  UnityEngine_Object_o *v12; // x22
  UnityEngine_SkinnedMeshRenderer_o **v13; // x26
  __int64 v14; // x1
  __int64 v15; // x2
  int max_length; // w8
  System_Collections_Generic_List_object__o *v17; // x22
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0
  UnityEngine_Object_o *v28; // x22
  UnityEngine_SkinnedMeshRenderer_o *v29; // x23
  const MethodInfo *v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  UnityEngine_Renderer_o *v39; // x0
  System_Object_array *v40; // x1
  UnityEngine_Object_o *v41; // x23
  __int64 v42; // x1
  __int64 v43; // x2
  UnityEngine_Object_o *shader; // x23
  __int64 v45; // x0

  v4 = (UnityEngine_Renderer_o *)smr;
  if ( (byte_596BDB7 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Material__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_Material__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_Material___ctor___91655600);
    sub_2213A60(&System_Collections_Generic_List_Material__TypeInfo);
    smr = (UnityEngine_SkinnedMeshRenderer_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596BDB7 = 1;
  }
  if ( !v4 )
    goto LABEL_38;
  sharedMaterials = (__int64)UnityEngine_Renderer__get_sharedMaterials(v4, 0);
  if ( !sharedMaterials )
    return;
  v8 = *(_QWORD *)(sharedMaterials + 24);
  v9 = (System_Object_array *)sharedMaterials;
  if ( !v8 )
    return;
  if ( !(_DWORD)v8 )
    goto LABEL_39;
  v10 = (int)v8 - 1;
  v11 = sharedMaterials + 8 * v10;
  v13 = (UnityEngine_SkinnedMeshRenderer_o **)(v11 + 32);
  v12 = *(UnityEngine_Object_o **)(v11 + 32);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
  smr = (UnityEngine_SkinnedMeshRenderer_o *)UnityEngine_Object__op_Equality(
                                               v12,
                                               (UnityEngine_Object_o *)targetMaterial,
                                               0);
  if ( ((unsigned __int8)smr & 1) == 0 )
  {
    if ( !targetMaterial )
      goto LABEL_38;
    sharedMaterials = (__int64)UnityEngine_Material__get_shader(targetMaterial, 0);
    max_length = v9->max_length;
    if ( max_length < 2 )
      goto LABEL_13;
    if ( (unsigned int)v10 < max_length )
    {
      v28 = (UnityEngine_Object_o *)sharedMaterials;
      v29 = *v13;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14, v15);
      sharedMaterials = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v29, 0, 0);
      if ( (sharedMaterials & 1) != 0 )
      {
LABEL_21:
        if ( (unsigned int)v10 < LODWORD(v9->max_length) )
        {
          OutlineEffectUtility__DestroyMaterial((UnityEngine_Material_o **)(v11 + 32), v30);
          sharedMaterials = sub_2213BB4(targetMaterial, v9->obj.klass->_1.element_class);
          if ( !sharedMaterials )
          {
            v45 = sub_2213D00(0, v32);
            sub_2213BA0(v45, 0);
          }
          if ( (unsigned int)v10 < LODWORD(v9->max_length) )
          {
            *v13 = (UnityEngine_SkinnedMeshRenderer_o *)targetMaterial;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)(v11 + 32),
              (int32_t)targetMaterial,
              v33,
              v34,
              v35,
              v36,
              v37,
              v38);
            v39 = v4;
            v40 = v9;
LABEL_27:
            UnityEngine_Renderer__set_sharedMaterials(v39, (UnityEngine_Material_array *)v40, 0);
            return;
          }
        }
        goto LABEL_39;
      }
      if ( (unsigned int)v10 < LODWORD(v9->max_length) )
      {
        v41 = (UnityEngine_Object_o *)*v13;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v30, v31);
        sharedMaterials = UnityEngine_Object__op_Inequality(v41, (UnityEngine_Object_o *)targetMaterial, 0);
        if ( (sharedMaterials & 1) == 0 )
        {
LABEL_13:
          v17 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_Material__TypeInfo);
          System_Collections_Generic_List_object____ctor_71841080(
            v17,
            (System_Collections_Generic_IEnumerable_T__o *)v9,
            (const MethodInfo_4483538 *)Method_System_Collections_Generic_List_Material___ctor___91655600);
          if ( v17 )
          {
            items = v17->fields._items;
            v25 = Method_System_Collections_Generic_List_Material__Add__;
            ++v17->fields._version;
            if ( items )
            {
              size = v17->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v17,
                  (Il2CppObject *)targetMaterial,
                  *(const MethodInfo_4483C64 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
              }
              else
              {
                v27 = &items->obj.klass + size;
                v17->fields._size = size + 1;
                v27[4] = (Il2CppClass *)targetMaterial;
                sub_2213A04(
                  (MissionNaviTransitionBoardItem_o *)(v27 + 4),
                  (int32_t)targetMaterial,
                  v18,
                  v19,
                  v20,
                  v21,
                  v22,
                  v23);
              }
              v40 = System_Collections_Generic_List_object___ToArray(
                      v17,
                      (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_Material__ToArray__);
              v39 = v4;
              goto LABEL_27;
            }
          }
LABEL_38:
          sub_2213CDC(smr, targetMaterial);
        }
        if ( (unsigned int)v10 < LODWORD(v9->max_length) )
        {
          smr = *v13;
          if ( !*v13 )
            goto LABEL_38;
          shader = (UnityEngine_Object_o *)UnityEngine_Material__get_shader((UnityEngine_Material_o *)smr, 0);
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v42, v43);
          sharedMaterials = UnityEngine_Object__op_Equality(shader, v28, 0);
          if ( (sharedMaterials & 1) == 0 )
            goto LABEL_13;
          goto LABEL_21;
        }
      }
    }
LABEL_39:
    sub_2213CE4(sharedMaterials);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  if ( (byte_596BDB3 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Rendering_CommandBuffer_TypeInfo);
    byte_596BDB3 = 1;
  }
  if ( *cb )
    UnityEngine_Rendering_CommandBuffer__Dispose(*cb, 0);
  v5 = (UnityEngine_Rendering_CommandBuffer_o *)sub_2213CCC(UnityEngine_Rendering_CommandBuffer_TypeInfo);
  UnityEngine_Rendering_CommandBuffer___ctor(v5, 0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  UnityEngine_Rendering_CommandBuffer__set_name(v5, name, 0);
  *cb = v5;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)cb, (int32_t)v5, v8, v9, v10, v11, v12, v13);
}


// local variable allocation has failed, the output may be wrong!
void OutlineEffectUtility__InstantiateRenderTexture(
        UnityEngine_RenderTexture_o **rt,
        int32_t rtWidth,
        int32_t rtHeight,
        System_String_o *rtName,
        const MethodInfo *method)
{
  UnityEngine_Object_o *v9; // x23
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  bool isPlaying; // w8
  UnityEngine_Object_o *v15; // x23
  int v16; // w9
  UnityEngine_RenderTexture_o *v17; // x23
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  __int64 v24; // x1
  UnityEngine_Object_o *v25; // x0

  if ( (byte_596BDB8 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Application_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UnityEngine_RenderTexture_TypeInfo);
    byte_596BDB8 = 1;
  }
  v9 = (UnityEngine_Object_o *)*rt;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&rtWidth, *(_QWORD *)&rtHeight);
  if ( UnityEngine_Object__op_Inequality(v9, 0, 0) )
  {
    if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, v10, v11);
    isPlaying = UnityEngine_Application__get_isPlaying(0);
    v15 = (UnityEngine_Object_o *)*rt;
    v16 = *(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1);
    if ( isPlaying )
    {
      if ( !v16 )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12, v13);
      UnityEngine_Object__Destroy_83459800(v15, 0);
    }
    else
    {
      if ( !v16 )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12, v13);
      UnityEngine_Object__DestroyImmediate_83460132(v15, 0);
    }
  }
  v17 = (UnityEngine_RenderTexture_o *)sub_2213CCC(UnityEngine_RenderTexture_TypeInfo);
  UnityEngine_RenderTexture___ctor_83340476(v17, rtWidth, rtHeight, 0, 0);
  *rt = v17;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)rt, (int32_t)v17, v18, v19, v20, v21, v22, v23);
  v25 = (UnityEngine_Object_o *)*rt;
  if ( !*rt || (UnityEngine_Object__set_name(v25, rtName, 0), (v25 = (UnityEngine_Object_o *)*rt) == 0) )
    sub_2213CDC(v25, v24);
  UnityEngine_RenderTexture__Create((UnityEngine_RenderTexture_o *)v25, 0);
}


void OutlineEffectUtility__RemoveNullMaterials(UnityEngine_SkinnedMeshRenderer_o *smr, const MethodInfo *method)
{
  UnityEngine_Renderer_o *v2; // x19
  UnityEngine_Material_array *sharedMaterials; // x0
  System_Collections_Generic_IEnumerable_T__o *v4; // x21
  System_Collections_Generic_List_object__o *v5; // x20
  int32_t v6; // w21
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Item; // x22
  System_Object_array *v10; // x1

  v2 = (UnityEngine_Renderer_o *)smr;
  if ( (byte_596BDB6 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Material__RemoveAt__);
    sub_2213A60(&Method_System_Collections_Generic_List_Material__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_Material___ctor___91655600);
    sub_2213A60(&Method_System_Collections_Generic_List_Material__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_Material__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_Material__TypeInfo);
    smr = (UnityEngine_SkinnedMeshRenderer_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596BDB6 = 1;
  }
  if ( !v2 )
    goto LABEL_17;
  sharedMaterials = UnityEngine_Renderer__get_sharedMaterials(v2, 0);
  if ( !sharedMaterials )
    return;
  v4 = (System_Collections_Generic_IEnumerable_T__o *)sharedMaterials;
  if ( !sharedMaterials->max_length )
    return;
  v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_Material__TypeInfo);
  System_Collections_Generic_List_object____ctor_71841080(
    v5,
    v4,
    (const MethodInfo_4483538 *)Method_System_Collections_Generic_List_Material___ctor___91655600);
  if ( !v5 )
LABEL_17:
    sub_2213CDC(smr, method);
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
                 (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_Material__get_Item__);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
        if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0, 0) )
          break;
        System_Collections_Generic_List_object___RemoveAt(
          v5,
          v6,
          (const MethodInfo_44853FC *)Method_System_Collections_Generic_List_Material__RemoveAt__);
        v6 = 0;
        if ( v5->fields._size <= 0 )
          goto LABEL_15;
      }
      ++v6;
    }
    while ( v6 < v5->fields._size );
  }
LABEL_15:
  v10 = System_Collections_Generic_List_object___ToArray(
          v5,
          (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_Material__ToArray__);
  UnityEngine_Renderer__set_sharedMaterials(v2, (UnityEngine_Material_array *)v10, 0);
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
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *Item; // x23
  System_Object_array *v12; // x1

  v4 = (UnityEngine_Renderer_o *)smr;
  if ( (byte_596BDBB & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Material__RemoveAt__);
    sub_2213A60(&Method_System_Collections_Generic_List_Material__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_Material___ctor___91655600);
    sub_2213A60(&Method_System_Collections_Generic_List_Material__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_Material__TypeInfo);
    smr = (UnityEngine_SkinnedMeshRenderer_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596BDBB = 1;
  }
  if ( !v4 )
    goto LABEL_12;
  sharedMaterials = UnityEngine_Renderer__get_sharedMaterials(v4, 0);
  if ( !sharedMaterials )
    return;
  v6 = sharedMaterials;
  if ( !sharedMaterials->max_length )
    return;
  v7 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_Material__TypeInfo);
  System_Collections_Generic_List_object____ctor_71841080(
    v7,
    (System_Collections_Generic_IEnumerable_T__o *)v6,
    (const MethodInfo_4483538 *)Method_System_Collections_Generic_List_Material___ctor___91655600);
  if ( !v7 )
LABEL_12:
    sub_2213CDC(smr, instantiatedMaterialReference);
  v8 = LODWORD(v6->max_length) - 1;
  Item = System_Collections_Generic_List_object___get_Item(
           v7,
           v8,
           (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_Material__get_Item__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
  if ( UnityEngine_Object__op_Equality(
         (UnityEngine_Object_o *)Item,
         (UnityEngine_Object_o *)instantiatedMaterialReference,
         0) )
  {
    System_Collections_Generic_List_object___RemoveAt(
      v7,
      v8,
      (const MethodInfo_44853FC *)Method_System_Collections_Generic_List_Material__RemoveAt__);
    v12 = System_Collections_Generic_List_object___ToArray(
            v7,
            (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_Material__ToArray__);
    UnityEngine_Renderer__set_sharedMaterials(v4, (UnityEngine_Material_array *)v12, 0);
  }
}


void OutlineEffectUtility__ShowLog(System_String_o *message, const MethodInfo *method)
{
  ;
}