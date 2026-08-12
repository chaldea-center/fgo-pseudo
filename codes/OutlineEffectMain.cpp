void OutlineEffectMain___ctor(OutlineEffectMain_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void OutlineEffectMain__CleanUp(OutlineEffectMain_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *material; // x21
  const MethodInfo *v5; // x1
  OutlineEffectMain_o *v6; // x0
  const MethodInfo *v7; // x2
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  UnityEngine_ComputeBuffer_o *v14; // x0
  MissionNaviTransitionBoardItem_o *p_tinyPolygonVertexBuffer; // x19
  struct UnityEngine_ComputeBuffer_o *tinyPolygonVertexBuffer; // t1
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7

  if ( (byte_596BD9A & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596BD9A = 1;
  }
  material = (UnityEngine_Object_o *)this->fields.material;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(material, 0, 0) )
  {
    OutlineEffectMain__RemoveOutlineMaterialFromSharedMaterials(this, v5);
    OutlineEffectMain__DestroyMaterial(v6, &this->fields.material, v7);
    this->fields.material = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.material, 0, v8, v9, v10, v11, v12, v13);
  }
  tinyPolygonVertexBuffer = this->fields.tinyPolygonVertexBuffer;
  p_tinyPolygonVertexBuffer = (MissionNaviTransitionBoardItem_o *)&this->fields.tinyPolygonVertexBuffer;
  v14 = tinyPolygonVertexBuffer;
  if ( tinyPolygonVertexBuffer )
  {
    UnityEngine_ComputeBuffer__Dispose(v14, 0);
    p_tinyPolygonVertexBuffer->klass = 0;
    sub_2213A04(p_tinyPolygonVertexBuffer, 0, v17, v18, v19, v20, v21, v22);
  }
}


void OutlineEffectMain__DestroyMaterial(
        OutlineEffectMain_o *this,
        UnityEngine_Material_o **mat,
        const MethodInfo *method)
{
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

  if ( (byte_596BD9B & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Application_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596BD9B = 1;
  }
  v4 = (UnityEngine_Object_o *)*mat;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, mat, method);
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


UnityEngine_GradientColorKey_array *OutlineEffectMain__GetColorKeys(
        OutlineEffectMain_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *settings; // x20
  UnityEngine_Gradient_o *gradient; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  struct OutlineEffectSettings_o *v8; // x8
  OutlineEffectSettings_c *v9; // x0

  if ( (byte_596BD98 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&OutlineEffectSettings_TypeInfo);
    byte_596BD98 = 1;
  }
  settings = (UnityEngine_Object_o *)this->fields.settings;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  gradient = (UnityEngine_Gradient_o *)UnityEngine_Object__op_Equality(settings, 0, 0);
  if ( ((unsigned __int8)gradient & 1) == 0 )
  {
    v8 = this->fields.settings;
    if ( !v8 )
      goto LABEL_12;
    gradient = v8->fields.gradient;
    if ( gradient )
      return UnityEngine_Gradient__get_colorKeys(gradient, 0);
  }
  v9 = OutlineEffectSettings_TypeInfo;
  if ( !*(&OutlineEffectSettings_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(OutlineEffectSettings_TypeInfo, v6, v7);
  gradient = OutlineEffectSettings__get_DefaultGradient((const MethodInfo *)v9);
  if ( !gradient )
LABEL_12:
    sub_2213CDC(gradient, v6);
  return UnityEngine_Gradient__get_colorKeys(gradient, 0);
}


System_ValueTuple_List_Color___List_float___o OutlineEffectMain__GetColorsAndKeys(
        OutlineEffectMain_o *this,
        const MethodInfo *method)
{
  UnityEngine_GradientColorKey_array *ColorKeys; // x20
  System_Collections_Generic_List_Color__o *v4; // x19
  System_Collections_Generic_List_float__o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo_3CF8CCC *v8; // x4
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v10; // x22
  _DWORD *p_time; // x25
  struct UnityEngine_Color_array *items; // x8
  float v16; // s8
  _QWORD *v17; // x9
  __int64 size; // x10
  struct System_Single_array *v19; // x8
  _QWORD *v20; // x9
  __int64 v21; // x10
  struct System_Collections_Generic_List_Color__o *v24; // [xsp+0h] [xbp-60h] BYREF
  struct System_Collections_Generic_List_float__o *v25; // [xsp+8h] [xbp-58h]
  System_ValueTuple_object__object__o v26; // 0:x0.16
  System_ValueTuple_List_Color___List_float___o result; // 0:x0.16
  UnityEngine_Color_o v28; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596BD99 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_float__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_Color__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_float___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_Color___ctor__);
    sub_2213A60(&System_Collections_Generic_List_float__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_Color__TypeInfo);
    sub_2213A60(&Method_System_ValueTuple_List_Color___List_float____ctor__);
    byte_596BD99 = 1;
  }
  ColorKeys = OutlineEffectMain__GetColorKeys(this, method);
  v4 = (System_Collections_Generic_List_Color__o *)sub_2213CCC(System_Collections_Generic_List_Color__TypeInfo);
  System_Collections_Generic_List_Color____ctor(
    v4,
    (const MethodInfo_4418794 *)Method_System_Collections_Generic_List_Color___ctor__);
  v5 = (System_Collections_Generic_List_float__o *)sub_2213CCC(System_Collections_Generic_List_float__TypeInfo);
  System_Collections_Generic_List_float____ctor(
    v5,
    (const MethodInfo_44AE260 *)Method_System_Collections_Generic_List_float___ctor__);
  if ( !ColorKeys )
    goto LABEL_19;
  max_length = ColorKeys->max_length;
  if ( (int)max_length >= 1 )
  {
    v10 = 0;
    p_time = (_DWORD *)&ColorKeys->m_Items[0].fields.time;
    while ( 1 )
    {
      if ( v10 >= (unsigned int)max_length )
        sub_2213CE4(v6);
      if ( !v4 )
        break;
      v28 = (UnityEngine_Color_o)*((_OWORD *)p_time - 1);
      items = v4->fields._items;
      v16 = *(float *)p_time;
      v17 = Method_System_Collections_Generic_List_Color__Add__;
      ++v4->fields._version;
      if ( !items )
        break;
      size = v4->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_Color___AddWithResize(
          v4,
          v28,
          *(const MethodInfo_4419050 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
      }
      else
      {
        v4->fields._size = size + 1;
        items->m_Items[size] = v28;
      }
      if ( !v5 )
        break;
      v19 = v5->fields._items;
      v20 = Method_System_Collections_Generic_List_float__Add__;
      ++v5->fields._version;
      if ( !v19 )
        break;
      v21 = v5->fields._size;
      if ( (unsigned int)v21 >= LODWORD(v19->max_length) )
      {
        System_Collections_Generic_List_float___AddWithResize(
          v5,
          v16,
          *(const MethodInfo_44AEAF4 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v5->fields._size = v21 + 1;
        v19->m_Items[v21] = v16;
      }
      LODWORD(max_length) = ColorKeys->max_length;
      ++v10;
      p_time += 5;
      if ( (__int64)v10 >= (int)max_length )
        goto LABEL_18;
    }
LABEL_19:
    sub_2213CDC(v6, v7);
  }
LABEL_18:
  v26.fields.Item1 = (Il2CppObject *)&v24;
  v26.fields.Item2 = (Il2CppObject *)v4;
  v24 = 0;
  v25 = 0;
  System_ValueTuple_object__object____ctor(
    v26,
    (Il2CppObject *)v5,
    (Il2CppObject *)Method_System_ValueTuple_List_Color___List_float____ctor__,
    v8);
  result.fields.Item1 = v24;
  result.fields.Item2 = v25;
  return result;
}


UnityEngine_Texture_o *OutlineEffectMain__GetMainTexture(OutlineEffectMain_o *this, const MethodInfo *method)
{
  UnityEngine_SkinnedMeshRenderer_o *smr; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *sharedMesh; // x20
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  __int64 *v13; // x8
  UnityEngine_Material_array *sharedMaterials; // x0
  struct System_String_o *v16; // x1

  if ( (byte_596BD97 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_24649/*"sharedMaterials from SkinnedMeshRenderer returned null value"*/);
    sub_2213A60(&StringLiteral_24650/*"sharedMesh from SkinnedMeshRenderer returned null value"*/);
    byte_596BD97 = 1;
  }
  smr = this->fields.smr;
  if ( !smr )
    goto LABEL_15;
  sharedMesh = (UnityEngine_Object_o *)UnityEngine_SkinnedMeshRenderer__get_sharedMesh(smr, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v5);
  if ( !UnityEngine_Object__op_Equality(sharedMesh, 0, 0) )
  {
    smr = this->fields.smr;
    if ( smr )
    {
      sharedMaterials = UnityEngine_Renderer__get_sharedMaterials((UnityEngine_Renderer_o *)smr, 0);
      if ( !sharedMaterials || SLODWORD(sharedMaterials->max_length) <= 1 )
      {
        v13 = &StringLiteral_24649/*"sharedMaterials from SkinnedMeshRenderer returned null value"*/;
        goto LABEL_14;
      }
      smr = (UnityEngine_SkinnedMeshRenderer_o *)sharedMaterials->m_Items[0];
      if ( smr )
        return UnityEngine_Material__get_mainTexture((UnityEngine_Material_o *)smr, 0);
    }
LABEL_15:
    sub_2213CDC(smr, method);
  }
  v13 = &StringLiteral_24650/*"sharedMesh from SkinnedMeshRenderer returned null value"*/;
LABEL_14:
  v16 = (struct System_String_o *)*v13;
  this->fields.message = (struct System_String_o *)*v13;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.message, (int32_t)v16, v7, v8, v9, v10, v11, v12);
  return 0;
}


void OutlineEffectMain__InsertOutlineMaterialToSharedMaterialsAtLastIndex(
        OutlineEffectMain_o *this,
        const MethodInfo *method)
{
  UnityEngine_Renderer_o *smr; // x0
  UnityEngine_Material_array *sharedMaterials; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  il2cpp_array_size_t max_length; // x8
  UnityEngine_Material_array *v8; // x20
  __int64 v9; // x23
  UnityEngine_Object_o *material; // x22
  Il2CppClass **v11; // x24
  UnityEngine_Object_o *v12; // x21
  UnityEngine_Object_o **v13; // x25
  __int64 v14; // x1
  __int64 v15; // x2
  int v16; // w8
  System_Collections_Generic_List_object__o *v17; // x21
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
  UnityEngine_Object_o *v28; // x21
  __int64 v29; // x1
  const MethodInfo *v30; // x2
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  struct UnityEngine_Material_o *v37; // x21
  __int64 v38; // x1
  UnityEngine_Material_array *v39; // x1
  UnityEngine_Object_o *v40; // x21
  UnityEngine_Object_o *v41; // x22
  UnityEngine_Shader_o *shader; // x0
  __int64 v43; // x1
  __int64 v44; // x2
  UnityEngine_Object_o *shaderAsset; // x21
  UnityEngine_Object_o *v46; // x22
  __int64 v47; // x0

  if ( (byte_596BD94 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Material__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_Material__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_Material___ctor___91655600);
    sub_2213A60(&System_Collections_Generic_List_Material__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596BD94 = 1;
  }
  smr = (UnityEngine_Renderer_o *)this->fields.smr;
  if ( !smr )
    goto LABEL_40;
  sharedMaterials = UnityEngine_Renderer__get_sharedMaterials(smr, 0);
  if ( !sharedMaterials )
    return;
  max_length = sharedMaterials->max_length;
  v8 = sharedMaterials;
  if ( !max_length )
    return;
  if ( !(_DWORD)max_length )
    goto LABEL_41;
  v9 = (int)max_length - 1;
  material = (UnityEngine_Object_o *)this->fields.material;
  v11 = &sharedMaterials->obj.klass + v9;
  v13 = (UnityEngine_Object_o **)(v11 + 4);
  v12 = (UnityEngine_Object_o *)v11[4];
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  sharedMaterials = (UnityEngine_Material_array *)UnityEngine_Object__op_Equality(v12, material, 0);
  if ( ((unsigned __int8)sharedMaterials & 1) == 0 )
  {
    v16 = v8->max_length;
    if ( v16 < 2 )
      goto LABEL_12;
    if ( (unsigned int)v9 < v16 )
    {
      v28 = *v13;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14, v15);
      sharedMaterials = (UnityEngine_Material_array *)UnityEngine_Object__op_Equality(v28, 0, 0);
      if ( ((unsigned __int8)sharedMaterials & 1) != 0 )
      {
LABEL_20:
        if ( (unsigned int)v9 < LODWORD(v8->max_length) )
        {
          OutlineEffectMain__DestroyMaterial(
            (OutlineEffectMain_o *)sharedMaterials,
            (UnityEngine_Material_o **)v11 + 4,
            v30);
          v37 = this->fields.material;
          if ( v37 )
          {
            sharedMaterials = (UnityEngine_Material_array *)sub_2213BB4(
                                                              this->fields.material,
                                                              v8->obj.klass->_1.element_class);
            if ( !sharedMaterials )
            {
              v47 = sub_2213D00(0, v38);
              sub_2213BA0(v47, 0);
            }
          }
          if ( (unsigned int)v9 < LODWORD(v8->max_length) )
          {
            *v13 = (UnityEngine_Object_o *)v37;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 4), (int32_t)v37, v31, v32, v33, v34, v35, v36);
            smr = (UnityEngine_Renderer_o *)this->fields.smr;
            if ( smr )
            {
              v39 = v8;
LABEL_29:
              UnityEngine_Renderer__set_sharedMaterials(smr, v39, 0);
              return;
            }
LABEL_40:
            sub_2213CDC(smr, method);
          }
        }
        goto LABEL_41;
      }
      if ( (unsigned int)v9 < LODWORD(v8->max_length) )
      {
        v40 = *v13;
        v41 = (UnityEngine_Object_o *)this->fields.material;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v29, v30);
        sharedMaterials = (UnityEngine_Material_array *)UnityEngine_Object__op_Inequality(v40, v41, 0);
        if ( ((unsigned __int8)sharedMaterials & 1) == 0 )
        {
LABEL_12:
          v17 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_Material__TypeInfo);
          System_Collections_Generic_List_object____ctor_71841080(
            v17,
            (System_Collections_Generic_IEnumerable_T__o *)v8,
            (const MethodInfo_4483538 *)Method_System_Collections_Generic_List_Material___ctor___91655600);
          if ( v17 )
          {
            items = v17->fields._items;
            method = (const MethodInfo *)this->fields.material;
            v25 = Method_System_Collections_Generic_List_Material__Add__;
            ++v17->fields._version;
            if ( items )
            {
              size = v17->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v17,
                  (Il2CppObject *)method,
                  *(const MethodInfo_4483C64 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
              }
              else
              {
                v27 = &items->obj.klass + size;
                v17->fields._size = size + 1;
                v27[4] = (Il2CppClass *)method;
                sub_2213A04(
                  (MissionNaviTransitionBoardItem_o *)(v27 + 4),
                  (int32_t)method,
                  v18,
                  v19,
                  v20,
                  v21,
                  v22,
                  v23);
              }
              smr = (UnityEngine_Renderer_o *)System_Collections_Generic_List_object___ToArray(
                                                v17,
                                                (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_Material__ToArray__);
              if ( this->fields.smr )
              {
                v39 = (UnityEngine_Material_array *)smr;
                smr = (UnityEngine_Renderer_o *)this->fields.smr;
                goto LABEL_29;
              }
            }
          }
          goto LABEL_40;
        }
        if ( (unsigned int)v9 < LODWORD(v8->max_length) )
        {
          smr = (UnityEngine_Renderer_o *)*v13;
          if ( !*v13 )
            goto LABEL_40;
          shader = UnityEngine_Material__get_shader((UnityEngine_Material_o *)smr, 0);
          shaderAsset = (UnityEngine_Object_o *)this->fields.shaderAsset;
          v46 = (UnityEngine_Object_o *)shader;
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v43, v44);
          sharedMaterials = (UnityEngine_Material_array *)UnityEngine_Object__op_Equality(v46, shaderAsset, 0);
          if ( ((unsigned __int8)sharedMaterials & 1) == 0 )
            goto LABEL_12;
          goto LABEL_20;
        }
      }
    }
LABEL_41:
    sub_2213CE4(sharedMaterials);
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
  __int64 v2; // x2
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  int32_t v10; // w1

  if ( (byte_596BD91 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Application_TypeInfo);
    sub_2213A60(&StringLiteral_23901/*"please play!!"*/);
    byte_596BD91 = 1;
  }
  if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, method, v2);
  if ( !UnityEngine_Application__get_isPlaying(0) )
  {
    v10 = StringLiteral_23901/*"please play!!"*/;
    this->fields.message = (struct System_String_o *)StringLiteral_23901/*"please play!!"*/;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.message, v10, v4, v5, v6, v7, v8, v9);
  }
}


void OutlineEffectMain__RemoveOutlineMaterialFromSharedMaterials(OutlineEffectMain_o *this, const MethodInfo *method)
{
  UnityEngine_Renderer_o *smr; // x0
  UnityEngine_Material_array *sharedMaterials; // x0
  UnityEngine_Material_array *v5; // x21
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w21
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Item; // x23
  UnityEngine_Object_o *material; // x22
  UnityEngine_Renderer_o *v12; // x19

  if ( (byte_596BD95 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Material__RemoveAt__);
    sub_2213A60(&Method_System_Collections_Generic_List_Material__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_Material___ctor___91655600);
    sub_2213A60(&Method_System_Collections_Generic_List_Material__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_Material__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596BD95 = 1;
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
      v6 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_Material__TypeInfo);
      System_Collections_Generic_List_object____ctor_71841080(
        v6,
        (System_Collections_Generic_IEnumerable_T__o *)v5,
        (const MethodInfo_4483538 *)Method_System_Collections_Generic_List_Material___ctor___91655600);
      if ( !v6 )
        goto LABEL_13;
      v7 = LODWORD(v5->max_length) - 1;
      Item = System_Collections_Generic_List_object___get_Item(
               v6,
               v7,
               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_Material__get_Item__);
      material = (UnityEngine_Object_o *)this->fields.material;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
      if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, material, 0) )
      {
        System_Collections_Generic_List_object___RemoveAt(
          v6,
          v7,
          (const MethodInfo_44853FC *)Method_System_Collections_Generic_List_Material__RemoveAt__);
        v12 = (UnityEngine_Renderer_o *)this->fields.smr;
        smr = (UnityEngine_Renderer_o *)System_Collections_Generic_List_object___ToArray(
                                          v6,
                                          (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_Material__ToArray__);
        if ( v12 )
        {
          UnityEngine_Renderer__set_sharedMaterials(v12, (UnityEngine_Material_array *)smr, 0);
          return;
        }
LABEL_13:
        sub_2213CDC(smr, method);
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
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  __int64 v10; // x1
  __int64 v11; // x2
  UnityEngine_Object_o *shaderAsset; // x21
  __int64 v13; // x1
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  __int64 *v20; // x8
  UnityEngine_Object_o *material; // x22
  UnityEngine_Shader_o *v22; // x22
  UnityEngine_Material_o *v23; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v25; // x1
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  __int64 v32; // x1
  __int64 v33; // x2
  UnityEngine_Object_o *parent; // x20
  Il2CppObject *Component_object; // x0
  struct UnityEngine_SkinnedMeshRenderer_o **p_smr; // x20
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  __int64 v43; // x1
  __int64 v44; // x2
  UnityEngine_Object_o *smr; // x21
  __int64 v46; // x1
  __int64 v47; // x2
  UnityEngine_Object_o *sharedMesh; // x20
  __int64 v49; // x1
  UnityEngine_Object_o *normalDatas; // x20
  const MethodInfo *v51; // x1
  struct System_String_o *v52; // x1

  if ( (byte_596BD92 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_SkinnedMeshRenderer___);
    sub_2213A60(&UnityEngine_Material_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_5093/*"Custom/OutlineEffectShader"*/);
    sub_2213A60(&StringLiteral_20305/*"failed to get SkinnedMeshRenderer component from parent"*/);
    sub_2213A60(&StringLiteral_23796/*"parent is null. please attach this component to object with parent"*/);
    sub_2213A60(&StringLiteral_10474/*"OutlineEffectMaterial"*/);
    sub_2213A60(&StringLiteral_25089/*"success"*/);
    sub_2213A60(&StringLiteral_20304/*"failed to get Custom/OutlineEffectShader from Shader.Find"*/);
    sub_2213A60(&StringLiteral_24650/*"sharedMesh from SkinnedMeshRenderer returned null value"*/);
    byte_596BD92 = 1;
  }
  v3 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_5093/*"Custom/OutlineEffectShader"*/, 0);
  this->fields.shaderAsset = v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.shaderAsset, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  shaderAsset = (UnityEngine_Object_o *)this->fields.shaderAsset;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v11);
  if ( UnityEngine_Object__op_Equality(shaderAsset, 0, 0) )
  {
    v20 = &StringLiteral_20304/*"failed to get Custom/OutlineEffectShader from Shader.Find"*/;
    goto LABEL_33;
  }
  material = (UnityEngine_Object_o *)this->fields.material;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v14);
  if ( UnityEngine_Object__op_Equality(material, 0, 0) )
  {
    v22 = this->fields.shaderAsset;
    v23 = (UnityEngine_Material_o *)sub_2213CCC(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v23, v22, 0);
    if ( !v23 )
      goto LABEL_34;
    UnityEngine_Object__set_name((UnityEngine_Object_o *)v23, (System_String_o *)StringLiteral_10474/*"OutlineEffectMaterial"*/, 0);
    this->fields.material = v23;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.material, (int32_t)v23, v26, v27, v28, v29, v30, v31);
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_34;
  parent = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent(transform, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v32, v33);
  if ( UnityEngine_Object__op_Equality(parent, 0, 0) )
  {
    v20 = &StringLiteral_23796/*"parent is null. please attach this component to object with parent"*/;
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
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_SkinnedMeshRenderer___);
  this->fields.smr = (struct UnityEngine_SkinnedMeshRenderer_o *)Component_object;
  p_smr = &this->fields.smr;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.smr,
    (int32_t)Component_object,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  smr = (UnityEngine_Object_o *)this->fields.smr;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v43, v44);
  if ( UnityEngine_Object__op_Equality(smr, 0, 0) )
  {
    v20 = &StringLiteral_20305/*"failed to get SkinnedMeshRenderer component from parent"*/;
    goto LABEL_33;
  }
  transform = (UnityEngine_Transform_o *)*p_smr;
  if ( !*p_smr )
LABEL_34:
    sub_2213CDC(transform, v25);
  sharedMesh = (UnityEngine_Object_o *)UnityEngine_SkinnedMeshRenderer__get_sharedMesh(
                                         (UnityEngine_SkinnedMeshRenderer_o *)transform,
                                         0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v46, v47);
  if ( UnityEngine_Object__op_Equality(sharedMesh, 0, 0) )
  {
    v20 = &StringLiteral_24650/*"sharedMesh from SkinnedMeshRenderer returned null value"*/;
  }
  else
  {
    normalDatas = (UnityEngine_Object_o *)this->fields.normalDatas;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v49, v14);
    if ( UnityEngine_Object__op_Inequality(normalDatas, 0, 0) )
      OutlineEffectMain__SetupSkinnedMeshRenderer(this, v51);
    v20 = &StringLiteral_25089/*"success"*/;
  }
LABEL_33:
  v52 = (struct System_String_o *)*v20;
  this->fields.message = (struct System_String_o *)*v20;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.message, (int32_t)v52, v14, v15, v16, v17, v18, v19);
}


void OutlineEffectMain__SetupSkinnedMeshRenderer(OutlineEffectMain_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *smr; // x20
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  __int64 *v12; // x8
  UnityEngine_SkinnedMeshRenderer_o *v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  UnityEngine_Object_o *sharedMesh; // x20
  const MethodInfo *v17; // x1
  struct System_String_o *v18; // x1
  const MethodInfo *v19; // x2

  if ( (byte_596BD93 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_13373/*"SetupSkinnedMeshRenderer -> sharedMesh from SkinnedMeshRenderer returned null value"*/);
    sub_2213A60(&StringLiteral_13372/*"SetupSkinnedMeshRenderer -> SkinnedMeshRenderer is null"*/);
    byte_596BD93 = 1;
  }
  smr = (UnityEngine_Object_o *)this->fields.smr;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(smr, 0, 0) )
  {
    v12 = &StringLiteral_13372/*"SetupSkinnedMeshRenderer -> SkinnedMeshRenderer is null"*/;
LABEL_12:
    v18 = (struct System_String_o *)*v12;
    this->fields.message = (struct System_String_o *)*v12;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.message, (int32_t)v18, v6, v7, v8, v9, v10, v11);
    return;
  }
  v13 = this->fields.smr;
  if ( !v13 )
    sub_2213CDC(0, v5);
  sharedMesh = (UnityEngine_Object_o *)UnityEngine_SkinnedMeshRenderer__get_sharedMesh(v13, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14, v15);
  if ( UnityEngine_Object__op_Equality(sharedMesh, 0, 0) )
  {
    v12 = &StringLiteral_13373/*"SetupSkinnedMeshRenderer -> sharedMesh from SkinnedMeshRenderer returned null value"*/;
    goto LABEL_12;
  }
  OutlineEffectMain__InsertOutlineMaterialToSharedMaterialsAtLastIndex(this, v17);
  OutlineEffectMain__UploadNormalsToMesh(this, (UnityEngine_Mesh_o *)sharedMesh, v19);
}


void OutlineEffectMain__UploadMaterialSettingsToGPU(OutlineEffectMain_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_float__o *Item2; // x1
  System_ValueTuple_List_Color___List_float___o ColorsAndKeys; // kr00_16
  UnityEngine_Material_o *material; // x0
  UnityEngine_Material_o *v6; // x20
  const MethodInfo *v7; // x1
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Object_o *settings; // x20
  bool v11; // w8
  __int64 v12; // x2
  UnityEngine_Material_o *v13; // x20
  float *m_CachedPtr; // x8
  __int64 v15; // x2
  UnityEngine_Material_o *v16; // x19
  struct OutlineEffectSettings_o *v17; // x9
  struct OutlineEffectSettings_o *v18; // x8
  struct OutlineEffectSettings_o *v19; // x8
  struct OutlineEffectSettings_o *v20; // x8
  struct OutlineEffectSettings_o *v21; // x8
  struct OutlineEffectSettings_o *v22; // x8
  UnityEngine_Vector4_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v24; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596BD96 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Color__get_Count__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&OutlineEffectSettings_TypeInfo);
    sub_2213A60(&StringLiteral_16887/*"_GradientArrayKeys"*/);
    sub_2213A60(&StringLiteral_17064/*"_VertexScale"*/);
    sub_2213A60(&StringLiteral_16943/*"_OutlineShiftPixel"*/);
    sub_2213A60(&StringLiteral_16801/*"_ClipFade"*/);
    sub_2213A60(&StringLiteral_16816/*"_ColorKeysLength"*/);
    sub_2213A60(&StringLiteral_16946/*"_OutlineThickness"*/);
    sub_2213A60(&StringLiteral_16886/*"_GradientArrayColors"*/);
    sub_2213A60(&StringLiteral_17061/*"_VertexOffset"*/);
    sub_2213A60(&StringLiteral_16975/*"_RotationSpeed"*/);
    byte_596BD96 = 1;
  }
  ColorsAndKeys = OutlineEffectMain__GetColorsAndKeys(this, method);
  Item2 = ColorsAndKeys.fields.Item2;
  material = this->fields.material;
  if ( !material )
    goto LABEL_41;
  UnityEngine_Material__SetColorArray_83285948(
    material,
    (System_String_o *)StringLiteral_16886/*"_GradientArrayColors"*/,
    ColorsAndKeys.fields.Item1,
    0);
  material = this->fields.material;
  if ( !material )
    goto LABEL_41;
  UnityEngine_Material__SetFloatArray_83285720(
    material,
    (System_String_o *)StringLiteral_16887/*"_GradientArrayKeys"*/,
    ColorsAndKeys.fields.Item2,
    0);
  if ( !ColorsAndKeys.fields.Item1 )
    goto LABEL_41;
  material = this->fields.material;
  if ( !material )
    goto LABEL_41;
  UnityEngine_Material__SetInt(
    material,
    (System_String_o *)StringLiteral_16816/*"_ColorKeysLength"*/,
    ColorsAndKeys.fields.Item1->fields._size,
    0);
  v6 = this->fields.material;
  material = (UnityEngine_Material_o *)OutlineEffectMain__GetMainTexture(this, v7);
  if ( !v6 )
    goto LABEL_41;
  UnityEngine_Material__set_mainTexture(v6, (UnityEngine_Texture_o *)material, 0);
  settings = (UnityEngine_Object_o *)this->fields.settings;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
  v11 = UnityEngine_Object__op_Equality(settings, 0, 0);
  material = this->fields.material;
  if ( v11 )
  {
    if ( material )
    {
      UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16946/*"_OutlineThickness"*/, 5.0, 0);
      material = this->fields.material;
      if ( material )
      {
        UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16975/*"_RotationSpeed"*/, 3.0, 0);
        material = this->fields.material;
        if ( material )
        {
          UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16801/*"_ClipFade"*/, 0.8, 0);
          material = this->fields.material;
          if ( material )
          {
            UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16943/*"_OutlineShiftPixel"*/, 2.0, 0);
            v13 = this->fields.material;
            if ( !*(&OutlineEffectSettings_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(OutlineEffectSettings_TypeInfo, Item2, v12);
            if ( !byte_596BE57 )
            {
              sub_2213A60(&OutlineEffectSettings_TypeInfo);
              byte_596BE57 = 1;
            }
            material = (UnityEngine_Material_o *)OutlineEffectSettings_TypeInfo;
            if ( !*(&OutlineEffectSettings_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(OutlineEffectSettings_TypeInfo, Item2, v12);
              material = (UnityEngine_Material_o *)OutlineEffectSettings_TypeInfo;
            }
            if ( v13 )
            {
              m_CachedPtr = (float *)material[7].fields.m_CachedPtr;
              v23.fields.w = 0.0;
              v23.fields.y = m_CachedPtr[13];
              v23.fields.z = m_CachedPtr[14];
              v23.fields.x = m_CachedPtr[12];
              UnityEngine_Material__SetVector(v13, (System_String_o *)StringLiteral_17064/*"_VertexScale"*/, v23, 0);
              v16 = this->fields.material;
              if ( !byte_596BE58 )
              {
                sub_2213A60(&OutlineEffectSettings_TypeInfo);
                byte_596BE58 = 1;
              }
              material = (UnityEngine_Material_o *)OutlineEffectSettings_TypeInfo;
              if ( !*(&OutlineEffectSettings_TypeInfo->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(OutlineEffectSettings_TypeInfo, Item2, v15);
                material = (UnityEngine_Material_o *)OutlineEffectSettings_TypeInfo;
              }
              if ( v16 )
              {
                v17 = (struct OutlineEffectSettings_o *)material[7].fields.m_CachedPtr;
                goto LABEL_40;
              }
            }
          }
        }
      }
    }
LABEL_41:
    sub_2213CDC(material, Item2);
  }
  v18 = this->fields.settings;
  if ( !v18 )
    goto LABEL_41;
  if ( !material )
    goto LABEL_41;
  UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16946/*"_OutlineThickness"*/, v18->fields.thickness, 0);
  v19 = this->fields.settings;
  if ( !v19 )
    goto LABEL_41;
  material = this->fields.material;
  if ( !material )
    goto LABEL_41;
  UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16975/*"_RotationSpeed"*/, v19->fields.speed, 0);
  v20 = this->fields.settings;
  if ( !v20 )
    goto LABEL_41;
  material = this->fields.material;
  if ( !material )
    goto LABEL_41;
  UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16801/*"_ClipFade"*/, v20->fields.clipFade, 0);
  v21 = this->fields.settings;
  if ( !v21 )
    goto LABEL_41;
  material = this->fields.material;
  if ( !material )
    goto LABEL_41;
  UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16943/*"_OutlineShiftPixel"*/, v21->fields.outlineShiftPixel, 0);
  v22 = this->fields.settings;
  if ( !v22 )
    goto LABEL_41;
  material = this->fields.material;
  if ( !material )
    goto LABEL_41;
  v24.fields.w = 0.0;
  v24.fields.y = v22->fields.vertexScale.fields.y;
  v24.fields.z = v22->fields.vertexScale.fields.z;
  v24.fields.x = v22->fields.vertexScale.fields.x;
  UnityEngine_Material__SetVector(material, (System_String_o *)StringLiteral_17064/*"_VertexScale"*/, v24, 0);
  v17 = this->fields.settings;
  if ( !v17 )
    goto LABEL_41;
  v16 = this->fields.material;
  if ( !v16 )
    goto LABEL_41;
LABEL_40:
  v25.fields.x = v17->fields.vertexOffset.fields.x;
  v25.fields.z = v17->fields.vertexOffset.fields.z;
  v25.fields.y = v17->fields.vertexOffset.fields.y;
  v25.fields.w = 0.0;
  UnityEngine_Material__SetVector(v16, (System_String_o *)StringLiteral_17061/*"_VertexOffset"*/, v25, 0);
}


void OutlineEffectMain__UploadNormalsToMesh(
        OutlineEffectMain_o *this,
        UnityEngine_Mesh_o *mesh,
        const MethodInfo *method)
{
  struct OutlineEffectNormalDatas_o *normalDatas; // x8

  normalDatas = this->fields.normalDatas;
  if ( !normalDatas || !mesh )
    sub_2213CDC(this, mesh);
  UnityEngine_Mesh__set_normals(mesh, normalDatas->fields.normals, 0);
}


float OutlineEffectMain__get_ClipFade(OutlineEffectMain_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *settings; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  struct OutlineEffectSettings_o *v8; // x8

  if ( (byte_596BD8B & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596BD8B = 1;
  }
  settings = (UnityEngine_Object_o *)this->fields.settings;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  v5 = UnityEngine_Object__op_Equality(settings, 0, 0);
  if ( v5 )
    return 0.8;
  v8 = this->fields.settings;
  if ( !v8 )
    sub_2213CDC(v5, v6);
  return v8->fields.clipFade;
}


UnityEngine_Gradient_o *OutlineEffectMain__get_Gradient(OutlineEffectMain_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *settings; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  OutlineEffectSettings_c *v8; // x0
  struct OutlineEffectSettings_o *v10; // x8

  if ( (byte_596BD8F & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&OutlineEffectSettings_TypeInfo);
    byte_596BD8F = 1;
  }
  settings = (UnityEngine_Object_o *)this->fields.settings;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  v5 = UnityEngine_Object__op_Equality(settings, 0, 0);
  if ( v5 )
  {
    v8 = OutlineEffectSettings_TypeInfo;
    if ( !*(&OutlineEffectSettings_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(OutlineEffectSettings_TypeInfo, v6, v7);
    return OutlineEffectSettings__get_DefaultGradient((const MethodInfo *)v8);
  }
  else
  {
    v10 = this->fields.settings;
    if ( !v10 )
      sub_2213CDC(v5, v6);
    return v10->fields.gradient;
  }
}


float OutlineEffectMain__get_OutlineShiftPixel(OutlineEffectMain_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *settings; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  float result; // s0
  struct OutlineEffectSettings_o *v8; // x8

  if ( (byte_596BD8D & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596BD8D = 1;
  }
  settings = (UnityEngine_Object_o *)this->fields.settings;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  v5 = UnityEngine_Object__op_Equality(settings, 0, 0);
  result = 2.0;
  if ( !v5 )
  {
    v8 = this->fields.settings;
    if ( !v8 )
      sub_2213CDC(v5, v6);
    return v8->fields.outlineShiftPixel;
  }
  return result;
}


float OutlineEffectMain__get_Speed(OutlineEffectMain_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *settings; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  float result; // s0
  struct OutlineEffectSettings_o *v8; // x8

  if ( (byte_596BD89 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596BD89 = 1;
  }
  settings = (UnityEngine_Object_o *)this->fields.settings;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  v5 = UnityEngine_Object__op_Equality(settings, 0, 0);
  result = 3.0;
  if ( !v5 )
  {
    v8 = this->fields.settings;
    if ( !v8 )
      sub_2213CDC(v5, v6);
    return v8->fields.speed;
  }
  return result;
}


float OutlineEffectMain__get_Thickness(OutlineEffectMain_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *settings; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  float result; // s0
  struct OutlineEffectSettings_o *v8; // x8

  if ( (byte_596BD87 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596BD87 = 1;
  }
  settings = (UnityEngine_Object_o *)this->fields.settings;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  v5 = UnityEngine_Object__op_Equality(settings, 0, 0);
  result = 5.0;
  if ( !v5 )
  {
    v8 = this->fields.settings;
    if ( !v8 )
      sub_2213CDC(v5, v6);
    return v8->fields.thickness;
  }
  return result;
}


void OutlineEffectMain__set_ClipFade(OutlineEffectMain_o *this, float value, const MethodInfo *method)
{
  __int64 v3; // x2
  UnityEngine_Object_o *settings; // x20
  _BOOL8 v7; // x0
  const MethodInfo *v8; // x1
  struct OutlineEffectSettings_o *v9; // x8

  if ( (byte_596BD8C & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596BD8C = 1;
  }
  settings = (UnityEngine_Object_o *)this->fields.settings;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v3);
  v7 = UnityEngine_Object__op_Equality(settings, 0, 0);
  if ( !v7 )
  {
    v9 = this->fields.settings;
    if ( !v9 )
      sub_2213CDC(v7, v8);
    v9->fields.clipFade = value;
    OutlineEffectMain__UploadMaterialSettingsToGPU(this, v8);
  }
}


void OutlineEffectMain__set_Gradient(
        OutlineEffectMain_o *this,
        UnityEngine_Gradient_o *value,
        const MethodInfo *method)
{
  UnityEngine_Object_o *settings; // x21
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  struct OutlineEffectSettings_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_596BD90 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596BD90 = 1;
  }
  settings = (UnityEngine_Object_o *)this->fields.settings;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, value, method);
  if ( !UnityEngine_Object__op_Equality(settings, 0, 0) )
  {
    v13 = this->fields.settings;
    if ( !v13 )
      sub_2213CDC(0, v6);
    v13->fields.gradient = value;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v13->fields.gradient, (int32_t)value, v7, v8, v9, v10, v11, v12);
    OutlineEffectMain__UploadMaterialSettingsToGPU(this, v14);
  }
}


void OutlineEffectMain__set_OutlineShiftPixel(OutlineEffectMain_o *this, float value, const MethodInfo *method)
{
  __int64 v3; // x2
  UnityEngine_Object_o *settings; // x20
  _BOOL8 v7; // x0
  const MethodInfo *v8; // x1
  struct OutlineEffectSettings_o *v9; // x8

  if ( (byte_596BD8E & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596BD8E = 1;
  }
  settings = (UnityEngine_Object_o *)this->fields.settings;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v3);
  v7 = UnityEngine_Object__op_Equality(settings, 0, 0);
  if ( !v7 )
  {
    v9 = this->fields.settings;
    if ( !v9 )
      sub_2213CDC(v7, v8);
    v9->fields.outlineShiftPixel = value;
    OutlineEffectMain__UploadMaterialSettingsToGPU(this, v8);
  }
}


void OutlineEffectMain__set_Speed(OutlineEffectMain_o *this, float value, const MethodInfo *method)
{
  __int64 v3; // x2
  UnityEngine_Object_o *settings; // x20
  _BOOL8 v7; // x0
  const MethodInfo *v8; // x1
  struct OutlineEffectSettings_o *v9; // x8

  if ( (byte_596BD8A & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596BD8A = 1;
  }
  settings = (UnityEngine_Object_o *)this->fields.settings;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v3);
  v7 = UnityEngine_Object__op_Equality(settings, 0, 0);
  if ( !v7 )
  {
    v9 = this->fields.settings;
    if ( !v9 )
      sub_2213CDC(v7, v8);
    v9->fields.speed = value;
    OutlineEffectMain__UploadMaterialSettingsToGPU(this, v8);
  }
}


void OutlineEffectMain__set_Thickness(OutlineEffectMain_o *this, float value, const MethodInfo *method)
{
  __int64 v3; // x2
  UnityEngine_Object_o *settings; // x20
  _BOOL8 v7; // x0
  const MethodInfo *v8; // x1
  struct OutlineEffectSettings_o *v9; // x8

  if ( (byte_596BD88 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596BD88 = 1;
  }
  settings = (UnityEngine_Object_o *)this->fields.settings;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v3);
  v7 = UnityEngine_Object__op_Equality(settings, 0, 0);
  if ( !v7 )
  {
    v9 = this->fields.settings;
    if ( !v9 )
      sub_2213CDC(v7, v8);
    v9->fields.thickness = value;
    OutlineEffectMain__UploadMaterialSettingsToGPU(this, v8);
  }
}