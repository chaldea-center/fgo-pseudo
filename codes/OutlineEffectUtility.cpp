void __fastcall OutlineEffectUtility__CreateMaterial(
        UnityEngine_Material_o **material,
        UnityEngine_Shader_o *shader,
        System_String_o *materialName,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UnityEngine_Object_o *v8; // x22
  UnityEngine_Material_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_4A6BB52 & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Material_TypeInfo, shader);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v7);
    byte_4A6BB52 = 1;
  }
  v8 = (UnityEngine_Object_o *)*material;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v8, 0LL, 0LL) )
  {
    v9 = (UnityEngine_Material_o *)sub_1B9025C(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v9, shader, 0LL);
    if ( !v9 )
      sub_1B9026C(v10, v11);
    UnityEngine_Object__set_name((UnityEngine_Object_o *)v9, materialName, 0LL);
    *material = v9;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)material, (int32_t)v9, v12, v13);
  }
}


bool __fastcall OutlineEffectUtility__CreateShader(
        UnityEngine_Shader_o **shaderAsset,
        System_String_o *shaderName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Shader_o *v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  UnityEngine_Object_o *v10; // x20
  bool v11; // w20

  if ( (byte_4A6BB53 & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, shaderName);
    sub_1B90010(&StringLiteral_265/*" from Shader.Find"*/, v5);
    sub_1B90010(&StringLiteral_19399/*"failed to get "*/, v6);
    byte_4A6BB53 = 1;
  }
  v7 = UnityEngine_Shader__Find(shaderName, 0LL);
  *shaderAsset = v7;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)shaderAsset, (int32_t)v7, v8, v9);
  v10 = (UnityEngine_Object_o *)*shaderAsset;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v11 = UnityEngine_Object__op_Equality(v10, 0LL, 0LL);
  if ( v11 )
    System_String__Concat_61798352(
      (System_String_o *)StringLiteral_19399/*"failed to get "*/,
      shaderName,
      (System_String_o *)StringLiteral_265/*" from Shader.Find"*/,
      0LL);
  return !v11;
}


void __fastcall OutlineEffectUtility__DestroyCommandBuffer(
        UnityEngine_Rendering_CommandBuffer_o **outlineCmd,
        const MethodInfo *method)
{
  UnityEngine_Rendering_CommandBuffer_o *v3; // x0
  int32_t v4; // w2
  int32_t v5; // w3

  v3 = *outlineCmd;
  if ( v3 )
  {
    UnityEngine_Rendering_CommandBuffer__Dispose(v3, 0LL);
    *outlineCmd = 0LL;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)outlineCmd, 0, v4, v5);
  }
}


void __fastcall OutlineEffectUtility__DestroyMaterial(UnityEngine_Material_o **mat, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *v4; // x20
  bool isPlaying; // w0
  UnityEngine_Object_o *v6; // x20
  bool v7; // w21
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A6BB55 & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Application_TypeInfo, method);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v3);
    byte_4A6BB55 = 1;
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
      UnityEngine_Object__Destroy_69539440(v6, 0LL);
    else
      UnityEngine_Object__DestroyImmediate_69539628(v6, 0LL);
    *mat = 0LL;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)mat, 0, v8, v9);
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
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A6BB56 & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Application_TypeInfo, method);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v3);
    byte_4A6BB56 = 1;
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
      UnityEngine_Object__Destroy_69539440(v6, 0LL);
    else
      UnityEngine_Object__DestroyImmediate_69539628(v6, 0LL);
    *renderTexture = 0LL;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)renderTexture, 0, v8, v9);
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
  __int64 v11; // x1
  Il2CppObject *Component_object; // x19

  if ( (byte_4A6BB5B & 1) == 0 )
  {
    sub_1B90010(&Method_UnityEngine_GameObject_GetComponent_Camera___, battlePath);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v5);
    sub_1B90010(&StringLiteral_43/*"\n"*/, v6);
    sub_1B90010(&StringLiteral_6968/*"GameObject.Find return null"*/, v7);
    sub_1B90010(&StringLiteral_19400/*"failed to get Camera component"*/, v8);
    byte_4A6BB5B = 1;
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
    System_String__Concat_61798352(
      (System_String_o *)StringLiteral_6968/*"GameObject.Find return null"*/,
      (System_String_o *)StringLiteral_43/*"\n"*/,
      battlePath,
      0LL);
    return 0LL;
  }
  else
  {
LABEL_10:
    if ( !v9 )
      sub_1B9026C(v10, v11);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v9,
                         (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_Camera___);
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
  if ( (byte_4A6BB5A & 1) == 0 )
  {
    smr = (UnityEngine_SkinnedMeshRenderer_o *)sub_1B90010(&StringLiteral_17762/*"cant get material from SkinnedMeshRenderer.sharedMaterials. Either the sharedMaterials is null or have 0 length"*/, method);
    byte_4A6BB5A = 1;
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
    sub_1B9026C(smr, method);
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
    if ( !byte_4A6A8BA )
    {
      sub_1B90010(&UnityEngine_Vector2_TypeInfo, v2);
      byte_4A6A8BA = 1;
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
  __int64 v10; // x8
  System_Object_array *v11; // x21
  unsigned int v12; // w25
  __int64 v13; // x22
  UnityEngine_Material_o **v14; // x22
  UnityEngine_Object_o *v15; // x23
  UnityEngine_Object_o *v16; // t1
  int max_length; // w8
  System_Collections_Generic_List_object__o *v18; // x22
  int32_t v19; // w2
  int32_t v20; // w3
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  UnityEngine_Object_o *v25; // x23
  UnityEngine_Material_o *v26; // x24
  int32_t v27; // w2
  int32_t v28; // w3
  UnityEngine_Renderer_o *v29; // x0
  System_Object_array *v30; // x1
  UnityEngine_Material_o *v31; // x24
  UnityEngine_Object_o *shader; // x24
  __int64 v33; // x0

  v4 = (UnityEngine_Renderer_o *)smr;
  if ( (byte_4A6BB58 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_List_Material__Add__, targetMaterial);
    sub_1B90010(&Method_System_Collections_Generic_List_Material__ToArray__, v5);
    sub_1B90010(&Method_System_Collections_Generic_List_Material___ctor___76122640, v6);
    sub_1B90010(&System_Collections_Generic_List_Material__TypeInfo, v7);
    smr = (UnityEngine_SkinnedMeshRenderer_o *)sub_1B90010(&UnityEngine_Object_TypeInfo, v8);
    byte_4A6BB58 = 1;
  }
  if ( !v4 )
    goto LABEL_38;
  sharedMaterials = (__int64)UnityEngine_Renderer__get_sharedMaterials(v4, 0LL);
  if ( !sharedMaterials )
    return;
  v10 = *(_QWORD *)(sharedMaterials + 24);
  v11 = (System_Object_array *)sharedMaterials;
  if ( !v10 )
    return;
  if ( !(_DWORD)v10 )
    goto LABEL_39;
  v12 = v10 - 1;
  v13 = sharedMaterials + 8LL * ((int)v10 - 1);
  v16 = *(UnityEngine_Object_o **)(v13 + 32);
  v14 = (UnityEngine_Material_o **)(v13 + 32);
  v15 = v16;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  smr = (UnityEngine_SkinnedMeshRenderer_o *)UnityEngine_Object__op_Equality(
                                               v15,
                                               (UnityEngine_Object_o *)targetMaterial,
                                               0LL);
  if ( ((unsigned __int8)smr & 1) == 0 )
  {
    if ( !targetMaterial )
      goto LABEL_38;
    sharedMaterials = (__int64)UnityEngine_Material__get_shader(targetMaterial, 0LL);
    max_length = v11->max_length;
    if ( max_length < 2 )
      goto LABEL_13;
    if ( v12 < max_length )
    {
      v25 = (UnityEngine_Object_o *)sharedMaterials;
      v26 = *v14;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      sharedMaterials = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v26, 0LL, 0LL);
      if ( (sharedMaterials & 1) != 0 )
      {
LABEL_21:
        if ( v12 < v11->max_length )
        {
          OutlineEffectUtility__DestroyMaterial(v14, (const MethodInfo *)targetMaterial);
          sharedMaterials = sub_1B9014C(targetMaterial, v11->obj.klass->_1.element_class);
          if ( !sharedMaterials )
          {
            v33 = sub_1B90290();
            sub_1B90138(v33, 0LL);
          }
          if ( v12 < v11->max_length )
          {
            *v14 = targetMaterial;
            sub_1B8FFB4((ServantStatusBattleListViewItem_o *)v14, (int32_t)targetMaterial, v27, v28);
            v29 = v4;
            v30 = v11;
LABEL_27:
            UnityEngine_Renderer__set_sharedMaterials(v29, (UnityEngine_Material_array *)v30, 0LL);
            return;
          }
        }
        goto LABEL_39;
      }
      if ( v12 < v11->max_length )
      {
        v31 = *v14;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        sharedMaterials = UnityEngine_Object__op_Inequality(
                            (UnityEngine_Object_o *)v31,
                            (UnityEngine_Object_o *)targetMaterial,
                            0LL);
        if ( (sharedMaterials & 1) == 0 )
        {
LABEL_13:
          v18 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_Material__TypeInfo);
          System_Collections_Generic_List_object____ctor_55640756(
            v18,
            (System_Collections_Generic_IEnumerable_T__o *)v11,
            (const MethodInfo_35102B4 *)Method_System_Collections_Generic_List_Material___ctor___76122640);
          if ( v18 )
          {
            items = v18->fields._items;
            v22 = Method_System_Collections_Generic_List_Material__Add__;
            ++v18->fields._version;
            if ( items )
            {
              size = v18->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v18,
                  (Il2CppObject *)targetMaterial,
                  *(const MethodInfo_35109C0 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
              }
              else
              {
                v24 = &items->obj.klass + size;
                v18->fields._size = size + 1;
                v24[4] = (Il2CppClass *)targetMaterial;
                sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v24 + 4), (int32_t)targetMaterial, v19, v20);
              }
              v30 = System_Collections_Generic_List_object___ToArray(
                      v18,
                      (const MethodInfo_3512518 *)Method_System_Collections_Generic_List_Material__ToArray__);
              v29 = v4;
              goto LABEL_27;
            }
          }
LABEL_38:
          sub_1B9026C(smr, targetMaterial);
        }
        if ( v12 < v11->max_length )
        {
          smr = (UnityEngine_SkinnedMeshRenderer_o *)*v14;
          if ( !*v14 )
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
    sub_1B90274(sharedMaterials, targetMaterial);
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
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A6BB54 & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Rendering_CommandBuffer_TypeInfo, name);
    byte_4A6BB54 = 1;
  }
  if ( *cb )
    UnityEngine_Rendering_CommandBuffer__Dispose(*cb, 0LL);
  v5 = (UnityEngine_Rendering_CommandBuffer_o *)sub_1B9025C(UnityEngine_Rendering_CommandBuffer_TypeInfo);
  UnityEngine_Rendering_CommandBuffer___ctor(v5, 0LL);
  if ( !v5 )
    sub_1B9026C(v6, v7);
  UnityEngine_Rendering_CommandBuffer__set_name(v5, name, 0LL);
  *cb = v5;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)cb, (int32_t)v5, v8, v9);
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
  bool isPlaying; // w0
  UnityEngine_Object_o *v13; // x23
  bool v14; // w24
  UnityEngine_RenderTexture_o *v15; // x23
  int32_t v16; // w2
  int32_t v17; // w3
  __int64 v18; // x1
  UnityEngine_Object_o *v19; // x0

  if ( (byte_4A6BB59 & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Application_TypeInfo, *(_QWORD *)&rtWidth);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v9);
    sub_1B90010(&UnityEngine_RenderTexture_TypeInfo, v10);
    byte_4A6BB59 = 1;
  }
  v11 = (UnityEngine_Object_o *)*rt;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v11, 0LL, 0LL) )
  {
    if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
    isPlaying = UnityEngine_Application__get_isPlaying(0LL);
    v13 = (UnityEngine_Object_o *)*rt;
    v14 = isPlaying;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( v14 )
      UnityEngine_Object__Destroy_69539440(v13, 0LL);
    else
      UnityEngine_Object__DestroyImmediate_69539628(v13, 0LL);
  }
  v15 = (UnityEngine_RenderTexture_o *)sub_1B9025C(UnityEngine_RenderTexture_TypeInfo);
  UnityEngine_RenderTexture___ctor_69446412(v15, rtWidth, rtHeight, 0, 0LL);
  *rt = v15;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)rt, (int32_t)v15, v16, v17);
  v19 = (UnityEngine_Object_o *)*rt;
  if ( !*rt || (UnityEngine_Object__set_name(v19, rtName, 0LL), (v19 = (UnityEngine_Object_o *)*rt) == 0LL) )
    sub_1B9026C(v19, v18);
  UnityEngine_RenderTexture__Create((UnityEngine_RenderTexture_o *)v19, 0LL);
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
  System_Collections_Generic_IEnumerable_T__o *v10; // x21
  System_Collections_Generic_List_object__o *v11; // x20
  int32_t v12; // w21
  Il2CppObject *Item; // x22
  System_Object_array *v14; // x1

  v2 = (UnityEngine_Renderer_o *)smr;
  if ( (byte_4A6BB57 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_List_Material__RemoveAt__, method);
    sub_1B90010(&Method_System_Collections_Generic_List_Material__ToArray__, v3);
    sub_1B90010(&Method_System_Collections_Generic_List_Material___ctor___76122640, v4);
    sub_1B90010(&Method_System_Collections_Generic_List_Material__get_Count__, v5);
    sub_1B90010(&Method_System_Collections_Generic_List_Material__get_Item__, v6);
    sub_1B90010(&System_Collections_Generic_List_Material__TypeInfo, v7);
    smr = (UnityEngine_SkinnedMeshRenderer_o *)sub_1B90010(&UnityEngine_Object_TypeInfo, v8);
    byte_4A6BB57 = 1;
  }
  if ( !v2 )
    goto LABEL_17;
  sharedMaterials = UnityEngine_Renderer__get_sharedMaterials(v2, 0LL);
  if ( !sharedMaterials )
    return;
  v10 = (System_Collections_Generic_IEnumerable_T__o *)sharedMaterials;
  if ( !*(_QWORD *)&sharedMaterials->max_length )
    return;
  v11 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_Material__TypeInfo);
  System_Collections_Generic_List_object____ctor_55640756(
    v11,
    v10,
    (const MethodInfo_35102B4 *)Method_System_Collections_Generic_List_Material___ctor___76122640);
  if ( !v11 )
LABEL_17:
    sub_1B9026C(smr, method);
  if ( v11->fields._size >= 1 )
  {
    v12 = 0;
    do
    {
      while ( 1 )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 v11,
                 v12,
                 (const MethodInfo_35106F0 *)Method_System_Collections_Generic_List_Material__get_Item__);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0LL, 0LL) )
          break;
        System_Collections_Generic_List_object___RemoveAt(
          v11,
          v12,
          (const MethodInfo_3512194 *)Method_System_Collections_Generic_List_Material__RemoveAt__);
        v12 = 0;
        if ( v11->fields._size <= 0 )
          goto LABEL_15;
      }
      ++v12;
    }
    while ( v12 < v11->fields._size );
  }
LABEL_15:
  v14 = System_Collections_Generic_List_object___ToArray(
          v11,
          (const MethodInfo_3512518 *)Method_System_Collections_Generic_List_Material__ToArray__);
  UnityEngine_Renderer__set_sharedMaterials(v2, (UnityEngine_Material_array *)v14, 0LL);
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
  UnityEngine_Material_array *v11; // x22
  System_Collections_Generic_List_object__o *v12; // x21
  int32_t v13; // w22
  Il2CppObject *Item; // x23
  System_Object_array *v15; // x1

  v4 = (UnityEngine_Renderer_o *)smr;
  if ( (byte_4A6BB5C & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_List_Material__RemoveAt__, instantiatedMaterialReference);
    sub_1B90010(&Method_System_Collections_Generic_List_Material__ToArray__, v5);
    sub_1B90010(&Method_System_Collections_Generic_List_Material___ctor___76122640, v6);
    sub_1B90010(&Method_System_Collections_Generic_List_Material__get_Item__, v7);
    sub_1B90010(&System_Collections_Generic_List_Material__TypeInfo, v8);
    smr = (UnityEngine_SkinnedMeshRenderer_o *)sub_1B90010(&UnityEngine_Object_TypeInfo, v9);
    byte_4A6BB5C = 1;
  }
  if ( !v4 )
    goto LABEL_12;
  sharedMaterials = UnityEngine_Renderer__get_sharedMaterials(v4, 0LL);
  if ( !sharedMaterials )
    return;
  v11 = sharedMaterials;
  if ( !*(_QWORD *)&sharedMaterials->max_length )
    return;
  v12 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_Material__TypeInfo);
  System_Collections_Generic_List_object____ctor_55640756(
    v12,
    (System_Collections_Generic_IEnumerable_T__o *)v11,
    (const MethodInfo_35102B4 *)Method_System_Collections_Generic_List_Material___ctor___76122640);
  if ( !v12 )
LABEL_12:
    sub_1B9026C(smr, instantiatedMaterialReference);
  v13 = v11->max_length - 1;
  Item = System_Collections_Generic_List_object___get_Item(
           v12,
           v13,
           (const MethodInfo_35106F0 *)Method_System_Collections_Generic_List_Material__get_Item__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(
         (UnityEngine_Object_o *)Item,
         (UnityEngine_Object_o *)instantiatedMaterialReference,
         0LL) )
  {
    System_Collections_Generic_List_object___RemoveAt(
      v12,
      v13,
      (const MethodInfo_3512194 *)Method_System_Collections_Generic_List_Material__RemoveAt__);
    v15 = System_Collections_Generic_List_object___ToArray(
            v12,
            (const MethodInfo_3512518 *)Method_System_Collections_Generic_List_Material__ToArray__);
    UnityEngine_Renderer__set_sharedMaterials(v4, (UnityEngine_Material_array *)v15, 0LL);
  }
}


void __fastcall OutlineEffectUtility__ShowLog(System_String_o *message, const MethodInfo *method)
{
  ;
}