void OutlineEffectMain___ctor(OutlineEffectMain_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void OutlineEffectMain__CleanUp(OutlineEffectMain_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *material; // x21
  const MethodInfo *v4; // x1
  OutlineEffectMain_o *v5; // x0
  const MethodInfo *v6; // x2
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  UnityEngine_ComputeBuffer_o *v13; // x0
  GrandQuestFolderBoardItem_o *p_tinyPolygonVertexBuffer; // x19
  struct UnityEngine_ComputeBuffer_o *tinyPolygonVertexBuffer; // t1
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7

  if ( (byte_4CC2B63 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC2B63 = 1;
  }
  material = (UnityEngine_Object_o *)this->fields.material;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(material, 0, 0) )
  {
    OutlineEffectMain__RemoveOutlineMaterialFromSharedMaterials(this, v4);
    OutlineEffectMain__DestroyMaterial(v5, &this->fields.material, v6);
    this->fields.material = 0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.material, 0, v7, v8, v9, v10, v11, v12);
  }
  tinyPolygonVertexBuffer = this->fields.tinyPolygonVertexBuffer;
  p_tinyPolygonVertexBuffer = (GrandQuestFolderBoardItem_o *)&this->fields.tinyPolygonVertexBuffer;
  v13 = tinyPolygonVertexBuffer;
  if ( tinyPolygonVertexBuffer )
  {
    UnityEngine_ComputeBuffer__Dispose(v13, 0);
    p_tinyPolygonVertexBuffer->klass = 0;
    sub_1C71354(p_tinyPolygonVertexBuffer, 0, v16, v17, v18, v19, v20, v21);
  }
}


void OutlineEffectMain__DestroyMaterial(
        OutlineEffectMain_o *this,
        UnityEngine_Material_o **mat,
        const MethodInfo *method)
{
  UnityEngine_Object_o *v4; // x20
  bool isPlaying; // w0
  UnityEngine_Object_o *v6; // x20
  bool v7; // w21
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4CC2B64 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Application_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC2B64 = 1;
  }
  v4 = (UnityEngine_Object_o *)*mat;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v4, 0, 0) )
  {
    if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
    isPlaying = UnityEngine_Application__get_isPlaying(0);
    v6 = (UnityEngine_Object_o *)*mat;
    v7 = isPlaying;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( v7 )
      UnityEngine_Object__Destroy_71724608(v6, 0);
    else
      UnityEngine_Object__DestroyImmediate_71724796(v6, 0);
    *mat = 0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)mat, 0, v8, v9, v10, v11, v12, v13);
  }
}


UnityEngine_GradientColorKey_array *OutlineEffectMain__GetColorKeys(
        OutlineEffectMain_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *settings; // x20
  UnityEngine_Gradient_o *gradient; // x0
  __int64 v5; // x1
  struct OutlineEffectSettings_o *v6; // x8
  OutlineEffectSettings_c *v7; // x0

  if ( (byte_4CC2B61 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&OutlineEffectSettings_TypeInfo);
    byte_4CC2B61 = 1;
  }
  settings = (UnityEngine_Object_o *)this->fields.settings;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gradient = (UnityEngine_Gradient_o *)UnityEngine_Object__op_Equality(settings, 0, 0);
  if ( ((unsigned __int8)gradient & 1) == 0 )
  {
    v6 = this->fields.settings;
    if ( !v6 )
      goto LABEL_12;
    gradient = v6->fields.gradient;
    if ( gradient )
      return UnityEngine_Gradient__get_colorKeys(gradient, 0);
  }
  v7 = OutlineEffectSettings_TypeInfo;
  if ( !OutlineEffectSettings_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OutlineEffectSettings_TypeInfo);
  gradient = OutlineEffectSettings__get_DefaultGradient((const MethodInfo *)v7);
  if ( !gradient )
LABEL_12:
    sub_1C71608(gradient, v5);
  return UnityEngine_Gradient__get_colorKeys(gradient, 0);
}


// local variable allocation has failed, the output may be wrong!
System_ValueTuple_List_Color___List_float___o OutlineEffectMain__GetColorsAndKeys(
        OutlineEffectMain_o *this,
        const MethodInfo *method)
{
  UnityEngine_GradientColorKey_array *ColorKeys; // x20
  System_Collections_Generic_List_Color__o *v4; // x19
  System_Collections_Generic_List_float__o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo_3B76D88 *v8; // x4
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v10; // x22
  float *p_time; // x25
  int v12; // s0 OVERLAPPED
  int v13; // s1
  int v14; // s2
  int v15; // s3
  float v16; // s8
  struct UnityEngine_Color_array *items; // x9
  _QWORD *v18; // x8
  __int64 size; // x10
  Il2CppObject *v20; // x9
  struct System_Single_array *v21; // x8
  _QWORD *v22; // x9
  __int64 v23; // x10
  struct System_Collections_Generic_List_Color__o *v24; // x0
  struct System_Collections_Generic_List_float__o *v25; // x1
  struct System_Collections_Generic_List_Color__o *v26; // [xsp+0h] [xbp-60h] BYREF
  struct System_Collections_Generic_List_float__o *v27; // [xsp+8h] [xbp-58h]
  System_ValueTuple_object__object__o v28; // 0:x0.16
  System_ValueTuple_List_Color___List_float___o result; // 0:x0.16

  if ( (byte_4CC2B62 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_float__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Color__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_float___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Color___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_float__TypeInfo);
    sub_1C713B0(&System_Collections_Generic_List_Color__TypeInfo);
    sub_1C713B0(&Method_System_ValueTuple_List_Color___List_float____ctor__);
    byte_4CC2B62 = 1;
  }
  ColorKeys = OutlineEffectMain__GetColorKeys(this, method);
  v4 = (System_Collections_Generic_List_Color__o *)sub_1C715FC(System_Collections_Generic_List_Color__TypeInfo);
  System_Collections_Generic_List_Color____ctor(
    v4,
    (const MethodInfo_37D13AC *)Method_System_Collections_Generic_List_Color___ctor__);
  v5 = (System_Collections_Generic_List_float__o *)sub_1C715FC(System_Collections_Generic_List_float__TypeInfo);
  System_Collections_Generic_List_float____ctor(
    v5,
    (const MethodInfo_3835A38 *)Method_System_Collections_Generic_List_float___ctor__);
  if ( !ColorKeys )
    goto LABEL_19;
  max_length = ColorKeys->max_length;
  if ( (int)max_length >= 1 )
  {
    v10 = 0;
    p_time = &ColorKeys->m_Items[0].fields.time;
    while ( 1 )
    {
      if ( v10 >= (unsigned int)max_length )
        sub_1C71610(v6);
      if ( !v4 )
        break;
      v12 = *((_DWORD *)p_time - 4);
      v13 = *((_DWORD *)p_time - 3);
      v14 = *((_DWORD *)p_time - 2);
      v15 = *((_DWORD *)p_time - 1);
      v16 = *p_time;
      items = v4->fields._items;
      v18 = Method_System_Collections_Generic_List_Color__Add__;
      ++v4->fields._version;
      if ( !items )
        break;
      size = v4->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_Color___AddWithResize(
          v4,
          *(UnityEngine_Color_o *)&v12,
          *(const MethodInfo_37D1C38 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = &items->obj + size;
        v4->fields._size = size + 1;
        LODWORD(v20[2].klass) = v12;
        HIDWORD(v20[2].klass) = v13;
        LODWORD(v20[2].monitor) = v14;
        HIDWORD(v20[2].monitor) = v15;
      }
      if ( !v5 )
        break;
      v21 = v5->fields._items;
      v22 = Method_System_Collections_Generic_List_float__Add__;
      ++v5->fields._version;
      if ( !v21 )
        break;
      v23 = v5->fields._size;
      if ( (unsigned int)v23 >= LODWORD(v21->max_length) )
      {
        System_Collections_Generic_List_float___AddWithResize(
          v5,
          v16,
          *(const MethodInfo_3836294 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
      }
      else
      {
        v5->fields._size = v23 + 1;
        v21->m_Items[v23] = v16;
      }
      LODWORD(max_length) = ColorKeys->max_length;
      ++v10;
      p_time += 5;
      if ( (__int64)v10 >= (int)max_length )
        goto LABEL_18;
    }
LABEL_19:
    sub_1C71608(v6, v7);
  }
LABEL_18:
  v28.fields.Item1 = (Il2CppObject *)&v26;
  v28.fields.Item2 = (Il2CppObject *)v4;
  v26 = 0;
  v27 = 0;
  System_ValueTuple_object__object____ctor(
    v28,
    (Il2CppObject *)v5,
    (Il2CppObject *)Method_System_ValueTuple_List_Color___List_float____ctor__,
    v8);
  v24 = v26;
  v25 = v27;
  result.fields.Item2 = v25;
  result.fields.Item1 = v24;
  return result;
}


UnityEngine_Texture_o *OutlineEffectMain__GetMainTexture(OutlineEffectMain_o *this, const MethodInfo *method)
{
  UnityEngine_SkinnedMeshRenderer_o *smr; // x0
  UnityEngine_Object_o *sharedMesh; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  __int64 *v11; // x8
  UnityEngine_Material_array *sharedMaterials; // x0
  struct System_String_o *v14; // x1

  if ( (byte_4CC2B60 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_23531/*"sharedMaterials from SkinnedMeshRenderer returned null value"*/);
    sub_1C713B0(&StringLiteral_23532/*"sharedMesh from SkinnedMeshRenderer returned null value"*/);
    byte_4CC2B60 = 1;
  }
  smr = this->fields.smr;
  if ( !smr )
    goto LABEL_15;
  sharedMesh = (UnityEngine_Object_o *)UnityEngine_SkinnedMeshRenderer__get_sharedMesh(smr, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(sharedMesh, 0, 0) )
  {
    smr = this->fields.smr;
    if ( smr )
    {
      sharedMaterials = UnityEngine_Renderer__get_sharedMaterials((UnityEngine_Renderer_o *)smr, 0);
      if ( !sharedMaterials || SLODWORD(sharedMaterials->max_length) <= 1 )
      {
        v11 = &StringLiteral_23531/*"sharedMaterials from SkinnedMeshRenderer returned null value"*/;
        goto LABEL_14;
      }
      smr = (UnityEngine_SkinnedMeshRenderer_o *)sharedMaterials->m_Items[0];
      if ( smr )
        return UnityEngine_Material__get_mainTexture((UnityEngine_Material_o *)smr, 0);
    }
LABEL_15:
    sub_1C71608(smr, method);
  }
  v11 = &StringLiteral_23532/*"sharedMesh from SkinnedMeshRenderer returned null value"*/;
LABEL_14:
  v14 = (struct System_String_o *)*v11;
  this->fields.message = (struct System_String_o *)*v11;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.message, (int32_t)v14, v5, v6, v7, v8, v9, v10);
  return 0;
}


void OutlineEffectMain__InsertOutlineMaterialToSharedMaterialsAtLastIndex(
        OutlineEffectMain_o *this,
        const MethodInfo *method)
{
  UnityEngine_Material_o *smr; // x0
  UnityEngine_Material_array *sharedMaterials; // x0
  il2cpp_array_size_t max_length; // x8
  UnityEngine_Material_array *v6; // x20
  unsigned int v7; // w24
  char *v8; // x21
  UnityEngine_Material_o **v9; // x21
  UnityEngine_Object_o *v10; // x22
  UnityEngine_Object_o *v11; // t1
  UnityEngine_Object_o *material; // x23
  int v13; // w8
  System_Collections_Generic_List_object__o *v14; // x21
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  UnityEngine_Material_o *v25; // x22
  const MethodInfo *v26; // x2
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  struct UnityEngine_Material_o *v33; // x22
  UnityEngine_Material_array *v34; // x1
  UnityEngine_Material_o *v35; // x22
  UnityEngine_Object_o *v36; // x23
  UnityEngine_Shader_o *shader; // x0
  UnityEngine_Object_o *shaderAsset; // x22
  UnityEngine_Object_o *v39; // x23
  __int64 v40; // x0

  if ( (byte_4CC2B5D & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_Material__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Material__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Material___ctor___78589576);
    sub_1C713B0(&System_Collections_Generic_List_Material__TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC2B5D = 1;
  }
  smr = (UnityEngine_Material_o *)this->fields.smr;
  if ( !smr )
    goto LABEL_40;
  sharedMaterials = UnityEngine_Renderer__get_sharedMaterials((UnityEngine_Renderer_o *)smr, 0);
  if ( !sharedMaterials )
    return;
  max_length = sharedMaterials->max_length;
  v6 = sharedMaterials;
  if ( !max_length )
    return;
  if ( !(_DWORD)max_length )
    goto LABEL_41;
  v7 = max_length - 1;
  v8 = (char *)sharedMaterials + 8 * (int)max_length - 8;
  v11 = (UnityEngine_Object_o *)*((_QWORD *)v8 + 4);
  v9 = (UnityEngine_Material_o **)(v8 + 32);
  v10 = v11;
  material = (UnityEngine_Object_o *)this->fields.material;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  sharedMaterials = (UnityEngine_Material_array *)UnityEngine_Object__op_Equality(v10, material, 0);
  if ( ((unsigned __int8)sharedMaterials & 1) == 0 )
  {
    v13 = v6->max_length;
    if ( v13 < 2 )
      goto LABEL_12;
    if ( v7 < v13 )
    {
      v25 = *v9;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      sharedMaterials = (UnityEngine_Material_array *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v25, 0, 0);
      if ( ((unsigned __int8)sharedMaterials & 1) != 0 )
      {
LABEL_20:
        if ( v7 < LODWORD(v6->max_length) )
        {
          OutlineEffectMain__DestroyMaterial((OutlineEffectMain_o *)sharedMaterials, v9, v26);
          v33 = this->fields.material;
          if ( v33 )
          {
            sharedMaterials = (UnityEngine_Material_array *)sub_1C714EC(
                                                              this->fields.material,
                                                              v6->obj.klass->_1.element_class);
            if ( !sharedMaterials )
            {
              v40 = sub_1C7162C();
              sub_1C714D8(v40, 0);
            }
          }
          if ( v7 < LODWORD(v6->max_length) )
          {
            *v9 = v33;
            sub_1C71354((GrandQuestFolderBoardItem_o *)v9, (int32_t)v33, v27, v28, v29, v30, v31, v32);
            smr = (UnityEngine_Material_o *)this->fields.smr;
            if ( smr )
            {
              v34 = v6;
LABEL_29:
              UnityEngine_Renderer__set_sharedMaterials((UnityEngine_Renderer_o *)smr, v34, 0);
              return;
            }
LABEL_40:
            sub_1C71608(smr, method);
          }
        }
        goto LABEL_41;
      }
      if ( v7 < LODWORD(v6->max_length) )
      {
        v35 = *v9;
        v36 = (UnityEngine_Object_o *)this->fields.material;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        sharedMaterials = (UnityEngine_Material_array *)UnityEngine_Object__op_Inequality(
                                                          (UnityEngine_Object_o *)v35,
                                                          v36,
                                                          0);
        if ( ((unsigned __int8)sharedMaterials & 1) == 0 )
        {
LABEL_12:
          v14 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_Material__TypeInfo);
          System_Collections_Generic_List_object____ctor_58785804(
            v14,
            (System_Collections_Generic_IEnumerable_T__o *)v6,
            (const MethodInfo_381000C *)Method_System_Collections_Generic_List_Material___ctor___78589576);
          if ( v14 )
          {
            method = (const MethodInfo *)this->fields.material;
            items = v14->fields._items;
            v22 = Method_System_Collections_Generic_List_Material__Add__;
            ++v14->fields._version;
            if ( items )
            {
              size = v14->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v14,
                  (Il2CppObject *)method,
                  *(const MethodInfo_3810718 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
              }
              else
              {
                v24 = &items->obj.klass + size;
                v14->fields._size = size + 1;
                v24[4] = (Il2CppClass *)method;
                sub_1C71354((GrandQuestFolderBoardItem_o *)(v24 + 4), (int32_t)method, v15, v16, v17, v18, v19, v20);
              }
              smr = (UnityEngine_Material_o *)System_Collections_Generic_List_object___ToArray(
                                                v14,
                                                (const MethodInfo_3812270 *)Method_System_Collections_Generic_List_Material__ToArray__);
              if ( this->fields.smr )
              {
                v34 = (UnityEngine_Material_array *)smr;
                smr = (UnityEngine_Material_o *)this->fields.smr;
                goto LABEL_29;
              }
            }
          }
          goto LABEL_40;
        }
        if ( v7 < LODWORD(v6->max_length) )
        {
          smr = *v9;
          if ( !*v9 )
            goto LABEL_40;
          shader = UnityEngine_Material__get_shader(smr, 0);
          shaderAsset = (UnityEngine_Object_o *)this->fields.shaderAsset;
          v39 = (UnityEngine_Object_o *)shader;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          sharedMaterials = (UnityEngine_Material_array *)UnityEngine_Object__op_Equality(v39, shaderAsset, 0);
          if ( ((unsigned __int8)sharedMaterials & 1) == 0 )
            goto LABEL_12;
          goto LABEL_20;
        }
      }
    }
LABEL_41:
    sub_1C71610(sharedMaterials);
  }
}


// attributes: thunk
void OutlineEffectMain__OnDisable(OutlineEffectMain_o *this, const MethodInfo *method)
{
  OutlineEffectMain__CleanUp(this, method);
}


// attributes: thunk
void OutlineEffectMain__OnEnable(OutlineEffectMain_o *this, const MethodInfo *method)
{
  OutlineEffectMain__Setup(this, method);
}


void OutlineEffectMain__OnValidate(OutlineEffectMain_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  int32_t v9; // w1

  if ( (byte_4CC2B5A & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Application_TypeInfo);
    sub_1C713B0(&StringLiteral_22834/*"please play!!"*/);
    byte_4CC2B5A = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  if ( !UnityEngine_Application__get_isPlaying(0) )
  {
    v9 = StringLiteral_22834/*"please play!!"*/;
    this->fields.message = (struct System_String_o *)StringLiteral_22834/*"please play!!"*/;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.message, v9, v3, v4, v5, v6, v7, v8);
  }
}


void OutlineEffectMain__RemoveOutlineMaterialFromSharedMaterials(OutlineEffectMain_o *this, const MethodInfo *method)
{
  UnityEngine_Renderer_o *smr; // x0
  UnityEngine_Material_array *sharedMaterials; // x0
  UnityEngine_Material_array *v5; // x21
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w21
  Il2CppObject *Item; // x0
  UnityEngine_Object_o *material; // x22
  UnityEngine_Object_o *v10; // x23
  UnityEngine_Renderer_o *v11; // x19

  if ( (byte_4CC2B5E & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_Material__RemoveAt__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Material__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Material___ctor___78589576);
    sub_1C713B0(&Method_System_Collections_Generic_List_Material__get_Item__);
    sub_1C713B0(&System_Collections_Generic_List_Material__TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC2B5E = 1;
  }
  smr = (UnityEngine_Renderer_o *)this->fields.smr;
  if ( !smr )
    goto LABEL_13;
  sharedMaterials = UnityEngine_Renderer__get_sharedMaterials(smr, 0);
  if ( sharedMaterials )
  {
    v5 = sharedMaterials;
    if ( sharedMaterials->max_length )
    {
      v6 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_Material__TypeInfo);
      System_Collections_Generic_List_object____ctor_58785804(
        v6,
        (System_Collections_Generic_IEnumerable_T__o *)v5,
        (const MethodInfo_381000C *)Method_System_Collections_Generic_List_Material___ctor___78589576);
      if ( !v6 )
        goto LABEL_13;
      v7 = LODWORD(v5->max_length) - 1;
      Item = System_Collections_Generic_List_object___get_Item(
               v6,
               v7,
               (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_Material__get_Item__);
      material = (UnityEngine_Object_o *)this->fields.material;
      v10 = (UnityEngine_Object_o *)Item;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(v10, material, 0) )
      {
        System_Collections_Generic_List_object___RemoveAt(
          v6,
          v7,
          (const MethodInfo_3811EEC *)Method_System_Collections_Generic_List_Material__RemoveAt__);
        v11 = (UnityEngine_Renderer_o *)this->fields.smr;
        smr = (UnityEngine_Renderer_o *)System_Collections_Generic_List_object___ToArray(
                                          v6,
                                          (const MethodInfo_3812270 *)Method_System_Collections_Generic_List_Material__ToArray__);
        if ( v11 )
        {
          UnityEngine_Renderer__set_sharedMaterials(v11, (UnityEngine_Material_array *)smr, 0);
          return;
        }
LABEL_13:
        sub_1C71608(smr, method);
      }
    }
  }
}


void OutlineEffectMain__SetActive(OutlineEffectMain_o *this, bool value, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1

  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, value, 0);
  if ( value )
  {
    OutlineEffectMain__Setup(this, v5);
    OutlineEffectMain__UploadMaterialSettingsToGPU(this, v6);
  }
  else
  {
    OutlineEffectMain__CleanUp(this, v5);
  }
}


void OutlineEffectMain__Setup(OutlineEffectMain_o *this, const MethodInfo *method)
{
  struct UnityEngine_Shader_o *v3; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  UnityEngine_Object_o *shaderAsset; // x21
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  __int64 *v17; // x8
  UnityEngine_Object_o *material; // x22
  UnityEngine_Shader_o *v19; // x22
  UnityEngine_Material_o *v20; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v22; // x1
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  UnityEngine_Object_o *parent; // x20
  Il2CppObject *Component_object; // x0
  struct UnityEngine_SkinnedMeshRenderer_o **p_smr; // x20
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  UnityEngine_Object_o *smr; // x21
  UnityEngine_Object_o *sharedMesh; // x20
  UnityEngine_Object_o *normalDatas; // x20
  const MethodInfo *v41; // x1
  struct System_String_o *v42; // x1

  if ( (byte_4CC2B5B & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_SkinnedMeshRenderer___);
    sub_1C713B0(&UnityEngine_Material_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_4903/*"Custom/OutlineEffectShader"*/);
    sub_1C713B0(&StringLiteral_19469/*"failed to get SkinnedMeshRenderer component from parent"*/);
    sub_1C713B0(&StringLiteral_22743/*"parent is null. please attach this component to object with parent"*/);
    sub_1C713B0(&StringLiteral_10072/*"OutlineEffectMaterial"*/);
    sub_1C713B0(&StringLiteral_23936/*"success"*/);
    sub_1C713B0(&StringLiteral_19468/*"failed to get Custom/OutlineEffectShader from Shader.Find"*/);
    sub_1C713B0(&StringLiteral_23532/*"sharedMesh from SkinnedMeshRenderer returned null value"*/);
    byte_4CC2B5B = 1;
  }
  v3 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4903/*"Custom/OutlineEffectShader"*/, 0);
  this->fields.shaderAsset = v3;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.shaderAsset, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  shaderAsset = (UnityEngine_Object_o *)this->fields.shaderAsset;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(shaderAsset, 0, 0) )
  {
    v17 = &StringLiteral_19468/*"failed to get Custom/OutlineEffectShader from Shader.Find"*/;
    goto LABEL_33;
  }
  material = (UnityEngine_Object_o *)this->fields.material;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(material, 0, 0) )
  {
    v19 = this->fields.shaderAsset;
    v20 = (UnityEngine_Material_o *)sub_1C715FC(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v20, v19, 0);
    if ( !v20 )
      goto LABEL_34;
    UnityEngine_Object__set_name((UnityEngine_Object_o *)v20, (System_String_o *)StringLiteral_10072/*"OutlineEffectMaterial"*/, 0);
    this->fields.material = v20;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.material, (int32_t)v20, v23, v24, v25, v26, v27, v28);
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_34;
  parent = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent(transform, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(parent, 0, 0) )
  {
    v17 = &StringLiteral_22743/*"parent is null. please attach this component to object with parent"*/;
    goto LABEL_33;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_34;
  transform = UnityEngine_Transform__get_parent(transform, 0);
  if ( !transform )
    goto LABEL_34;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)transform,
                       (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_SkinnedMeshRenderer___);
  this->fields.smr = (struct UnityEngine_SkinnedMeshRenderer_o *)Component_object;
  p_smr = &this->fields.smr;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.smr, (int32_t)Component_object, v32, v33, v34, v35, v36, v37);
  smr = (UnityEngine_Object_o *)this->fields.smr;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(smr, 0, 0) )
  {
    v17 = &StringLiteral_19469/*"failed to get SkinnedMeshRenderer component from parent"*/;
    goto LABEL_33;
  }
  transform = (UnityEngine_Transform_o *)*p_smr;
  if ( !*p_smr )
LABEL_34:
    sub_1C71608(transform, v22);
  sharedMesh = (UnityEngine_Object_o *)UnityEngine_SkinnedMeshRenderer__get_sharedMesh(
                                         (UnityEngine_SkinnedMeshRenderer_o *)transform,
                                         0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(sharedMesh, 0, 0) )
  {
    v17 = &StringLiteral_23532/*"sharedMesh from SkinnedMeshRenderer returned null value"*/;
  }
  else
  {
    normalDatas = (UnityEngine_Object_o *)this->fields.normalDatas;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(normalDatas, 0, 0) )
      OutlineEffectMain__SetupSkinnedMeshRenderer(this, v41);
    v17 = &StringLiteral_23936/*"success"*/;
  }
LABEL_33:
  v42 = (struct System_String_o *)*v17;
  this->fields.message = (struct System_String_o *)*v17;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.message, (int32_t)v42, v11, v12, v13, v14, v15, v16);
}


void OutlineEffectMain__SetupSkinnedMeshRenderer(OutlineEffectMain_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *smr; // x20
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  __int64 *v11; // x8
  UnityEngine_SkinnedMeshRenderer_o *v12; // x0
  UnityEngine_Object_o *sharedMesh; // x20
  const MethodInfo *v14; // x1
  struct System_String_o *v15; // x1
  const MethodInfo *v16; // x2

  if ( (byte_4CC2B5C & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_12843/*"SetupSkinnedMeshRenderer -> sharedMesh from SkinnedMeshRenderer returned null value"*/);
    sub_1C713B0(&StringLiteral_12842/*"SetupSkinnedMeshRenderer -> SkinnedMeshRenderer is null"*/);
    byte_4CC2B5C = 1;
  }
  smr = (UnityEngine_Object_o *)this->fields.smr;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(smr, 0, 0) )
  {
    v11 = &StringLiteral_12842/*"SetupSkinnedMeshRenderer -> SkinnedMeshRenderer is null"*/;
LABEL_12:
    v15 = (struct System_String_o *)*v11;
    this->fields.message = (struct System_String_o *)*v11;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.message, (int32_t)v15, v5, v6, v7, v8, v9, v10);
    return;
  }
  v12 = this->fields.smr;
  if ( !v12 )
    sub_1C71608(0, v4);
  sharedMesh = (UnityEngine_Object_o *)UnityEngine_SkinnedMeshRenderer__get_sharedMesh(v12, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(sharedMesh, 0, 0) )
  {
    v11 = &StringLiteral_12843/*"SetupSkinnedMeshRenderer -> sharedMesh from SkinnedMeshRenderer returned null value"*/;
    goto LABEL_12;
  }
  OutlineEffectMain__InsertOutlineMaterialToSharedMaterialsAtLastIndex(this, v14);
  OutlineEffectMain__UploadNormalsToMesh(this, (UnityEngine_Mesh_o *)sharedMesh, v16);
}


void OutlineEffectMain__UploadMaterialSettingsToGPU(OutlineEffectMain_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_float__o *Item2; // x1
  System_ValueTuple_List_Color___List_float___o ColorsAndKeys; // kr00_16
  UnityEngine_Material_o *material; // x0
  UnityEngine_Material_o *v6; // x20
  const MethodInfo *v7; // x1
  UnityEngine_Object_o *settings; // x20
  struct UnityEngine_Material_o *v9; // x8
  UnityEngine_Material_o *v10; // x20
  float *m_CachedPtr; // x8
  UnityEngine_Material_o *v12; // x19
  float *v13; // x9
  float *p_z; // x8
  float *p_y; // x10
  float *p_x; // x9
  struct OutlineEffectSettings_o *v17; // x9
  struct OutlineEffectSettings_o *v18; // x8
  struct OutlineEffectSettings_o *v19; // x8
  struct OutlineEffectSettings_o *v20; // x8
  struct OutlineEffectSettings_o *v21; // x8
  struct OutlineEffectSettings_o *v22; // x10
  UnityEngine_Vector4_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v24; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CC2B5F & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_Color__get_Count__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&OutlineEffectSettings_TypeInfo);
    sub_1C713B0(&StringLiteral_16238/*"_GradientArrayKeys"*/);
    sub_1C713B0(&StringLiteral_16408/*"_VertexScale"*/);
    sub_1C713B0(&StringLiteral_16293/*"_OutlineShiftPixel"*/);
    sub_1C713B0(&StringLiteral_16160/*"_ClipFade"*/);
    sub_1C713B0(&StringLiteral_16176/*"_ColorKeysLength"*/);
    sub_1C713B0(&StringLiteral_16296/*"_OutlineThickness"*/);
    sub_1C713B0(&StringLiteral_16237/*"_GradientArrayColors"*/);
    sub_1C713B0(&StringLiteral_16405/*"_VertexOffset"*/);
    sub_1C713B0(&StringLiteral_16325/*"_RotationSpeed"*/);
    byte_4CC2B5F = 1;
  }
  ColorsAndKeys = OutlineEffectMain__GetColorsAndKeys(this, method);
  Item2 = ColorsAndKeys.fields.Item2;
  material = this->fields.material;
  if ( !material )
    goto LABEL_42;
  UnityEngine_Material__SetColorArray_71594420(
    material,
    (System_String_o *)StringLiteral_16237/*"_GradientArrayColors"*/,
    ColorsAndKeys.fields.Item1,
    0);
  material = this->fields.material;
  if ( !material )
    goto LABEL_42;
  UnityEngine_Material__SetFloatArray_71594144(
    material,
    (System_String_o *)StringLiteral_16238/*"_GradientArrayKeys"*/,
    ColorsAndKeys.fields.Item2,
    0);
  if ( !ColorsAndKeys.fields.Item1 )
    goto LABEL_42;
  material = this->fields.material;
  if ( !material )
    goto LABEL_42;
  UnityEngine_Material__SetInt(
    material,
    (System_String_o *)StringLiteral_16176/*"_ColorKeysLength"*/,
    ColorsAndKeys.fields.Item1->fields._size,
    0);
  v6 = this->fields.material;
  material = (UnityEngine_Material_o *)OutlineEffectMain__GetMainTexture(this, v7);
  if ( !v6 )
    goto LABEL_42;
  UnityEngine_Material__set_mainTexture(v6, (UnityEngine_Texture_o *)material, 0);
  settings = (UnityEngine_Object_o *)this->fields.settings;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  material = (UnityEngine_Material_o *)UnityEngine_Object__op_Equality(settings, 0, 0);
  v9 = this->fields.material;
  if ( ((unsigned __int8)material & 1) == 0 )
  {
    v17 = this->fields.settings;
    if ( v17 )
    {
      if ( v9 )
      {
        UnityEngine_Material__SetFloat(
          this->fields.material,
          (System_String_o *)StringLiteral_16296/*"_OutlineThickness"*/,
          v17->fields.thickness,
          0);
        v18 = this->fields.settings;
        if ( v18 )
        {
          material = this->fields.material;
          if ( material )
          {
            UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16325/*"_RotationSpeed"*/, v18->fields.speed, 0);
            v19 = this->fields.settings;
            if ( v19 )
            {
              material = this->fields.material;
              if ( material )
              {
                UnityEngine_Material__SetFloat(
                  material,
                  (System_String_o *)StringLiteral_16160/*"_ClipFade"*/,
                  v19->fields.clipFade,
                  0);
                v20 = this->fields.settings;
                if ( v20 )
                {
                  material = this->fields.material;
                  if ( material )
                  {
                    UnityEngine_Material__SetFloat(
                      material,
                      (System_String_o *)StringLiteral_16293/*"_OutlineShiftPixel"*/,
                      v20->fields.outlineShiftPixel,
                      0);
                    v21 = this->fields.settings;
                    if ( v21 )
                    {
                      material = this->fields.material;
                      if ( material )
                      {
                        v24.fields.y = v21->fields.vertexScale.fields.y;
                        v24.fields.z = v21->fields.vertexScale.fields.z;
                        v24.fields.x = v21->fields.vertexScale.fields.x;
                        v24.fields.w = 0.0;
                        UnityEngine_Material__SetVector(material, (System_String_o *)StringLiteral_16408/*"_VertexScale"*/, v24, 0);
                        v22 = this->fields.settings;
                        if ( v22 )
                        {
                          v12 = this->fields.material;
                          if ( v12 )
                          {
                            p_z = &v22->fields.vertexOffset.fields.z;
                            p_x = &v22->fields.vertexOffset.fields.x;
                            p_y = &v22->fields.vertexOffset.fields.y;
                            goto LABEL_41;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_42:
    sub_1C71608(material, Item2);
  }
  if ( !v9 )
    goto LABEL_42;
  UnityEngine_Material__SetFloat(this->fields.material, (System_String_o *)StringLiteral_16296/*"_OutlineThickness"*/, 5.0, 0);
  material = this->fields.material;
  if ( !material )
    goto LABEL_42;
  UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16325/*"_RotationSpeed"*/, 3.0, 0);
  material = this->fields.material;
  if ( !material )
    goto LABEL_42;
  UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16160/*"_ClipFade"*/, 0.8, 0);
  material = this->fields.material;
  if ( !material )
    goto LABEL_42;
  UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16293/*"_OutlineShiftPixel"*/, 2.0, 0);
  v10 = this->fields.material;
  if ( !OutlineEffectSettings_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OutlineEffectSettings_TypeInfo);
  if ( !byte_4CC2C43 )
  {
    sub_1C713B0(&OutlineEffectSettings_TypeInfo);
    byte_4CC2C43 = 1;
  }
  material = (UnityEngine_Material_o *)OutlineEffectSettings_TypeInfo;
  if ( !OutlineEffectSettings_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OutlineEffectSettings_TypeInfo);
    material = (UnityEngine_Material_o *)OutlineEffectSettings_TypeInfo;
  }
  if ( !v10 )
    goto LABEL_42;
  m_CachedPtr = (float *)material[7].fields.m_CachedPtr;
  v23.fields.w = 0.0;
  v23.fields.y = m_CachedPtr[13];
  v23.fields.z = m_CachedPtr[14];
  v23.fields.x = m_CachedPtr[12];
  UnityEngine_Material__SetVector(v10, (System_String_o *)StringLiteral_16408/*"_VertexScale"*/, v23, 0);
  v12 = this->fields.material;
  if ( !byte_4CC2C44 )
  {
    sub_1C713B0(&OutlineEffectSettings_TypeInfo);
    byte_4CC2C44 = 1;
  }
  material = (UnityEngine_Material_o *)OutlineEffectSettings_TypeInfo;
  if ( !OutlineEffectSettings_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OutlineEffectSettings_TypeInfo);
    material = (UnityEngine_Material_o *)OutlineEffectSettings_TypeInfo;
  }
  if ( !v12 )
    goto LABEL_42;
  v13 = (float *)material[7].fields.m_CachedPtr;
  p_z = v13 + 17;
  p_y = v13 + 16;
  p_x = v13 + 15;
LABEL_41:
  v25.fields.z = *p_z;
  v25.fields.y = *p_y;
  v25.fields.x = *p_x;
  v25.fields.w = 0.0;
  UnityEngine_Material__SetVector(v12, (System_String_o *)StringLiteral_16405/*"_VertexOffset"*/, v25, 0);
}


void OutlineEffectMain__UploadNormalsToMesh(
        OutlineEffectMain_o *this,
        UnityEngine_Mesh_o *mesh,
        const MethodInfo *method)
{
  struct OutlineEffectNormalDatas_o *normalDatas; // x8

  normalDatas = this->fields.normalDatas;
  if ( !normalDatas || !mesh )
    sub_1C71608(this, mesh);
  UnityEngine_Mesh__set_normals(mesh, normalDatas->fields.normals, 0);
}


float OutlineEffectMain__get_ClipFade(OutlineEffectMain_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *settings; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  struct OutlineEffectSettings_o *v7; // x8

  if ( (byte_4CC2B54 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC2B54 = 1;
  }
  settings = (UnityEngine_Object_o *)this->fields.settings;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality(settings, 0, 0);
  if ( v4 )
    return 0.8;
  v7 = this->fields.settings;
  if ( !v7 )
    sub_1C71608(v4, v5);
  return v7->fields.clipFade;
}


UnityEngine_Gradient_o *OutlineEffectMain__get_Gradient(OutlineEffectMain_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *settings; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  OutlineEffectSettings_c *v6; // x0
  struct OutlineEffectSettings_o *v8; // x8

  if ( (byte_4CC2B58 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&OutlineEffectSettings_TypeInfo);
    byte_4CC2B58 = 1;
  }
  settings = (UnityEngine_Object_o *)this->fields.settings;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality(settings, 0, 0);
  if ( v4 )
  {
    v6 = OutlineEffectSettings_TypeInfo;
    if ( !OutlineEffectSettings_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OutlineEffectSettings_TypeInfo);
    return OutlineEffectSettings__get_DefaultGradient((const MethodInfo *)v6);
  }
  else
  {
    v8 = this->fields.settings;
    if ( !v8 )
      sub_1C71608(v4, v5);
    return v8->fields.gradient;
  }
}


float OutlineEffectMain__get_OutlineShiftPixel(OutlineEffectMain_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *settings; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  float result; // s0
  struct OutlineEffectSettings_o *v7; // x8

  if ( (byte_4CC2B56 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC2B56 = 1;
  }
  settings = (UnityEngine_Object_o *)this->fields.settings;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality(settings, 0, 0);
  result = 2.0;
  if ( !v4 )
  {
    v7 = this->fields.settings;
    if ( !v7 )
      sub_1C71608(v4, v5);
    return v7->fields.outlineShiftPixel;
  }
  return result;
}


float OutlineEffectMain__get_Speed(OutlineEffectMain_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *settings; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  float result; // s0
  struct OutlineEffectSettings_o *v7; // x8

  if ( (byte_4CC2B52 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC2B52 = 1;
  }
  settings = (UnityEngine_Object_o *)this->fields.settings;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality(settings, 0, 0);
  result = 3.0;
  if ( !v4 )
  {
    v7 = this->fields.settings;
    if ( !v7 )
      sub_1C71608(v4, v5);
    return v7->fields.speed;
  }
  return result;
}


float OutlineEffectMain__get_Thickness(OutlineEffectMain_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *settings; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  float result; // s0
  struct OutlineEffectSettings_o *v7; // x8

  if ( (byte_4CC2B50 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC2B50 = 1;
  }
  settings = (UnityEngine_Object_o *)this->fields.settings;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality(settings, 0, 0);
  result = 5.0;
  if ( !v4 )
  {
    v7 = this->fields.settings;
    if ( !v7 )
      sub_1C71608(v4, v5);
    return v7->fields.thickness;
  }
  return result;
}


void OutlineEffectMain__set_ClipFade(OutlineEffectMain_o *this, float value, const MethodInfo *method)
{
  UnityEngine_Object_o *settings; // x20
  _BOOL8 v6; // x0
  const MethodInfo *v7; // x1
  struct OutlineEffectSettings_o *v8; // x8

  if ( (byte_4CC2B55 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC2B55 = 1;
  }
  settings = (UnityEngine_Object_o *)this->fields.settings;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality(settings, 0, 0);
  if ( !v6 )
  {
    v8 = this->fields.settings;
    if ( !v8 )
      sub_1C71608(v6, v7);
    v8->fields.clipFade = value;
    OutlineEffectMain__UploadMaterialSettingsToGPU(this, v7);
  }
}


void OutlineEffectMain__set_Gradient(
        OutlineEffectMain_o *this,
        UnityEngine_Gradient_o *value,
        const MethodInfo *method)
{
  UnityEngine_Object_o *settings; // x21
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  struct OutlineEffectSettings_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_4CC2B59 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC2B59 = 1;
  }
  settings = (UnityEngine_Object_o *)this->fields.settings;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(settings, 0, 0) )
  {
    v13 = this->fields.settings;
    if ( !v13 )
      sub_1C71608(0, v6);
    v13->fields.gradient = value;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v13->fields.gradient, (int32_t)value, v7, v8, v9, v10, v11, v12);
    OutlineEffectMain__UploadMaterialSettingsToGPU(this, v14);
  }
}


void OutlineEffectMain__set_OutlineShiftPixel(OutlineEffectMain_o *this, float value, const MethodInfo *method)
{
  UnityEngine_Object_o *settings; // x20
  _BOOL8 v6; // x0
  const MethodInfo *v7; // x1
  struct OutlineEffectSettings_o *v8; // x8

  if ( (byte_4CC2B57 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC2B57 = 1;
  }
  settings = (UnityEngine_Object_o *)this->fields.settings;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality(settings, 0, 0);
  if ( !v6 )
  {
    v8 = this->fields.settings;
    if ( !v8 )
      sub_1C71608(v6, v7);
    v8->fields.outlineShiftPixel = value;
    OutlineEffectMain__UploadMaterialSettingsToGPU(this, v7);
  }
}


void OutlineEffectMain__set_Speed(OutlineEffectMain_o *this, float value, const MethodInfo *method)
{
  UnityEngine_Object_o *settings; // x20
  _BOOL8 v6; // x0
  const MethodInfo *v7; // x1
  struct OutlineEffectSettings_o *v8; // x8

  if ( (byte_4CC2B53 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC2B53 = 1;
  }
  settings = (UnityEngine_Object_o *)this->fields.settings;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality(settings, 0, 0);
  if ( !v6 )
  {
    v8 = this->fields.settings;
    if ( !v8 )
      sub_1C71608(v6, v7);
    v8->fields.speed = value;
    OutlineEffectMain__UploadMaterialSettingsToGPU(this, v7);
  }
}


void OutlineEffectMain__set_Thickness(OutlineEffectMain_o *this, float value, const MethodInfo *method)
{
  UnityEngine_Object_o *settings; // x20
  _BOOL8 v6; // x0
  const MethodInfo *v7; // x1
  struct OutlineEffectSettings_o *v8; // x8

  if ( (byte_4CC2B51 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC2B51 = 1;
  }
  settings = (UnityEngine_Object_o *)this->fields.settings;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality(settings, 0, 0);
  if ( !v6 )
  {
    v8 = this->fields.settings;
    if ( !v8 )
      sub_1C71608(v6, v7);
    v8->fields.thickness = value;
    OutlineEffectMain__UploadMaterialSettingsToGPU(this, v7);
  }
}