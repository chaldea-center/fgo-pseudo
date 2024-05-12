void __fastcall OutlineEffectMain___ctor(OutlineEffectMain_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall OutlineEffectMain__CleanUp(OutlineEffectMain_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *material; // x21
  const MethodInfo *v4; // x1
  OutlineEffectMain_o *v5; // x0
  const MethodInfo *v6; // x2
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  UnityEngine_ComputeBuffer_o *v13; // x0
  BattleServantConfConponent_o *p_tinyPolygonVertexBuffer; // x19
  struct UnityEngine_ComputeBuffer_o *tinyPolygonVertexBuffer; // t1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_438A32F & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438A32F = 1;
  }
  material = (UnityEngine_Object_o *)this->fields.material;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(material, 0LL, 0LL) )
  {
    OutlineEffectMain__RemoveOutlineMaterialFromSharedMaterials(this, v4);
    OutlineEffectMain__DestroyMaterial(v5, &this->fields.material, v6);
    this->fields.material = 0LL;
    sub_B77560((BattleServantConfConponent_o *)&this->fields.material, 0LL, v7, v8, v9, v10, v11, v12);
  }
  tinyPolygonVertexBuffer = this->fields.tinyPolygonVertexBuffer;
  p_tinyPolygonVertexBuffer = (BattleServantConfConponent_o *)&this->fields.tinyPolygonVertexBuffer;
  v13 = tinyPolygonVertexBuffer;
  if ( tinyPolygonVertexBuffer )
  {
    UnityEngine_ComputeBuffer__Dispose(v13, 0LL);
    p_tinyPolygonVertexBuffer->klass = 0LL;
    sub_B77560(p_tinyPolygonVertexBuffer, 0LL, v16, v17, v18, v19, v20, v21);
  }
}


void __fastcall OutlineEffectMain__DestroyMaterial(
        OutlineEffectMain_o *this,
        UnityEngine_Material_o **mat,
        const MethodInfo *method)
{
  UnityEngine_Object_o *v4; // x20
  bool isPlaying; // w0
  UnityEngine_Object_o *v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_438A330 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438A330 = 1;
  }
  v4 = (UnityEngine_Object_o *)*mat;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(v4, 0LL, 0LL) )
  {
    isPlaying = UnityEngine_Application__get_isPlaying(0LL);
    v6 = (UnityEngine_Object_o *)*mat;
    if ( isPlaying )
    {
      if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_36309980(v6, 0LL);
    }
    else
    {
      if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyImmediate_36310192(v6, 0LL);
    }
    *mat = 0LL;
    sub_B77560((BattleServantConfConponent_o *)mat, 0LL, v7, v8, v9, v10, v11, v12);
  }
}


UnityEngine_GradientColorKey_array *__fastcall OutlineEffectMain__GetColorKeys(
        OutlineEffectMain_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *settings; // x20
  UnityEngine_Gradient_o *gradient; // x0
  __int64 v5; // x1
  struct OutlineEffectSettings_o *v6; // x8
  OutlineEffectSettings_c *v7; // x0

  if ( (byte_438A32D & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&OutlineEffectSettings_TypeInfo);
    byte_438A32D = 1;
  }
  settings = (UnityEngine_Object_o *)this->fields.settings;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gradient = (UnityEngine_Gradient_o *)UnityEngine_Object__op_Equality(settings, 0LL, 0LL);
  if ( ((unsigned __int8)gradient & 1) == 0 )
  {
    v6 = this->fields.settings;
    if ( !v6 )
      goto LABEL_14;
    gradient = v6->fields.gradient;
    if ( gradient )
      return UnityEngine_Gradient__get_colorKeys(gradient, 0LL);
  }
  v7 = OutlineEffectSettings_TypeInfo;
  if ( (BYTE3(OutlineEffectSettings_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OutlineEffectSettings_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OutlineEffectSettings_TypeInfo);
  }
  gradient = OutlineEffectSettings__get_DefaultGradient((const MethodInfo *)v7);
  if ( !gradient )
LABEL_14:
    sub_B7769C(gradient, v5);
  return UnityEngine_Gradient__get_colorKeys(gradient, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_ValueTuple_List_Color___List_float___o __fastcall OutlineEffectMain__GetColorsAndKeys(
        OutlineEffectMain_o *this,
        const MethodInfo *method)
{
  UnityEngine_GradientColorKey_array *ColorKeys; // x20
  System_Collections_Generic_List_Color__o *v4; // x19
  System_Collections_Generic_List_float__o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo_26CF010 *v8; // x4
  __int64 v9; // x8
  unsigned __int64 v10; // x22
  UnityEngine_Color_o *p_color; // x23
  float r; // s8
  struct System_Collections_Generic_List_Color__o *v13; // x0 OVERLAPPED
  struct System_Collections_Generic_List_float__o *v14; // x1
  __int64 v15; // x0
  struct System_Collections_Generic_List_Color__o *v16; // [xsp+0h] [xbp-50h] BYREF
  struct System_Collections_Generic_List_float__o *v17; // [xsp+8h] [xbp-48h]
  System_ValueTuple_ServicePointScheduler_ConnectionGroup__WebOperation__o v18; // 0:x0.16
  System_ValueTuple_List_Color___List_float___o result; // 0:x0.16

  if ( (byte_438A32E & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_float__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_Color__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_float___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_Color___ctor__);
    sub_B775C4(&System_Collections_Generic_List_float__TypeInfo);
    sub_B775C4(&System_Collections_Generic_List_Color__TypeInfo);
    sub_B775C4(&Method_System_ValueTuple_List_Color___List_float____ctor__);
    byte_438A32E = 1;
  }
  ColorKeys = OutlineEffectMain__GetColorKeys(this, method);
  v4 = (System_Collections_Generic_List_Color__o *)sub_B77694(System_Collections_Generic_List_Color__TypeInfo);
  System_Collections_Generic_List_Color____ctor(
    v4,
    (const MethodInfo_30AB624 *)Method_System_Collections_Generic_List_Color___ctor__);
  v5 = (System_Collections_Generic_List_float__o *)sub_B77694(System_Collections_Generic_List_float__TypeInfo);
  System_Collections_Generic_List_float____ctor(
    v5,
    (const MethodInfo_308E634 *)Method_System_Collections_Generic_List_float___ctor__);
  if ( !ColorKeys )
    goto LABEL_11;
  v9 = *(_QWORD *)&ColorKeys->max_length;
  if ( (int)v9 >= 1 )
  {
    v10 = 0LL;
    p_color = &ColorKeys->m_Items[1].fields.color;
    while ( 1 )
    {
      if ( v10 >= (unsigned int)v9 )
      {
        v15 = sub_B776C8(v6);
        sub_B77668(v15, 0LL);
      }
      if ( !v4 )
        break;
      r = p_color->fields.r;
      System_Collections_Generic_List_Color___Add(
        v4,
        p_color[-1],
        (const MethodInfo_30AC3B8 *)Method_System_Collections_Generic_List_Color__Add__);
      if ( !v5 )
        break;
      System_Collections_Generic_List_float___Add(
        v5,
        r,
        (const MethodInfo_308F38C *)Method_System_Collections_Generic_List_float__Add__);
      LODWORD(v9) = ColorKeys->max_length;
      ++v10;
      p_color = (UnityEngine_Color_o *)((char *)p_color + 20);
      if ( (__int64)v10 >= (int)v9 )
        goto LABEL_10;
    }
LABEL_11:
    sub_B7769C(v6, v7);
  }
LABEL_10:
  v18.fields.Item1 = (struct System_Net_ServicePointScheduler_ConnectionGroup_o *)&v16;
  v18.fields.Item2 = (struct System_Net_WebOperation_o *)v4;
  v16 = 0LL;
  v17 = 0LL;
  System_ValueTuple_ServicePointScheduler_ConnectionGroup__WebOperation____ctor(
    v18,
    (System_Net_ServicePointScheduler_ConnectionGroup_o *)v5,
    (System_Net_WebOperation_o *)Method_System_ValueTuple_List_Color___List_float____ctor__,
    v8);
  v13 = v16;
  v14 = v17;
  result.fields.Item2 = v14;
  result.fields.Item1 = v13;
  return result;
}


UnityEngine_Texture_o *__fastcall OutlineEffectMain__GetMainTexture(
        OutlineEffectMain_o *this,
        const MethodInfo *method)
{
  UnityEngine_SkinnedMeshRenderer_o *smr; // x0
  UnityEngine_Object_o *sharedMesh; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  __int64 *v11; // x8
  UnityEngine_Material_array *sharedMaterials; // x0
  struct System_String_o *v14; // x1

  if ( (byte_438A32C & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_22565/*"sharedMaterials from SkinnedMeshRenderer returned null value"*/);
    sub_B775C4(&StringLiteral_22566/*"sharedMesh from SkinnedMeshRenderer returned null value"*/);
    byte_438A32C = 1;
  }
  smr = this->fields.smr;
  if ( !smr )
    goto LABEL_16;
  sharedMesh = (UnityEngine_Object_o *)UnityEngine_SkinnedMeshRenderer__get_sharedMesh(smr, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(sharedMesh, 0LL, 0LL) )
  {
    smr = this->fields.smr;
    if ( smr )
    {
      sharedMaterials = UnityEngine_Renderer__get_sharedMaterials((UnityEngine_Renderer_o *)smr, 0LL);
      if ( !sharedMaterials || (int)sharedMaterials->max_length <= 1 )
      {
        v11 = &StringLiteral_22565/*"sharedMaterials from SkinnedMeshRenderer returned null value"*/;
        goto LABEL_15;
      }
      smr = (UnityEngine_SkinnedMeshRenderer_o *)sharedMaterials->m_Items[0];
      if ( smr )
        return UnityEngine_Material__get_mainTexture((UnityEngine_Material_o *)smr, 0LL);
    }
LABEL_16:
    sub_B7769C(smr, method);
  }
  v11 = &StringLiteral_22566/*"sharedMesh from SkinnedMeshRenderer returned null value"*/;
LABEL_15:
  v14 = (struct System_String_o *)*v11;
  this->fields.message = (struct System_String_o *)*v11;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.message, (System_Int32_array **)v14, v5, v6, v7, v8, v9, v10);
  return 0LL;
}


void __fastcall OutlineEffectMain__InsertOutlineMaterialToSharedMaterialsAtLastIndex(
        OutlineEffectMain_o *this,
        const MethodInfo *method)
{
  UnityEngine_Material_o *smr; // x0
  UnityEngine_Material_array *sharedMaterials; // x0
  __int64 v5; // x8
  UnityEngine_Material_array *v6; // x20
  unsigned int v7; // w24
  char *v8; // x21
  UnityEngine_Material_o **v9; // x21
  UnityEngine_Object_o *v10; // x22
  UnityEngine_Object_o *v11; // t1
  UnityEngine_Object_o *material; // x23
  int max_length; // w8
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v14; // x21
  UnityEngine_Material_array *v15; // x1
  UnityEngine_Material_o *v16; // x22
  const MethodInfo *v17; // x2
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Int32_array **v24; // x22
  UnityEngine_Material_o *v25; // x22
  UnityEngine_Object_o *v26; // x23
  UnityEngine_Shader_o *shader; // x0
  UnityEngine_Object_o *shaderAsset; // x22
  UnityEngine_Object_o *v29; // x23
  __int64 v30; // x0
  __int64 v31; // x0

  if ( (byte_438A329 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Material__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_Material__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_Material___ctor___69398976);
    sub_B775C4(&System_Collections_Generic_List_Material__TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438A329 = 1;
  }
  smr = (UnityEngine_Material_o *)this->fields.smr;
  if ( !smr )
    goto LABEL_40;
  sharedMaterials = UnityEngine_Renderer__get_sharedMaterials((UnityEngine_Renderer_o *)smr, 0LL);
  if ( !sharedMaterials )
    return;
  v5 = *(_QWORD *)&sharedMaterials->max_length;
  v6 = sharedMaterials;
  if ( !v5 )
    return;
  if ( !(_DWORD)v5 )
    goto LABEL_41;
  v7 = v5 - 1;
  v8 = (char *)sharedMaterials + 8 * (int)v5 - 8;
  v11 = (UnityEngine_Object_o *)*((_QWORD *)v8 + 4);
  v9 = (UnityEngine_Material_o **)(v8 + 32);
  v10 = v11;
  material = (UnityEngine_Object_o *)this->fields.material;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  sharedMaterials = (UnityEngine_Material_array *)UnityEngine_Object__op_Equality(v10, material, 0LL);
  if ( ((unsigned __int8)sharedMaterials & 1) == 0 )
  {
    max_length = v6->max_length;
    if ( max_length < 2 )
      goto LABEL_13;
    if ( v7 < max_length )
    {
      v16 = *v9;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      sharedMaterials = (UnityEngine_Material_array *)UnityEngine_Object__op_Equality(
                                                        (UnityEngine_Object_o *)v16,
                                                        0LL,
                                                        0LL);
      if ( ((unsigned __int8)sharedMaterials & 1) != 0 )
      {
LABEL_21:
        if ( v7 < v6->max_length )
        {
          OutlineEffectMain__DestroyMaterial((OutlineEffectMain_o *)sharedMaterials, v9, v17);
          v24 = (System_Int32_array **)this->fields.material;
          if ( v24 )
          {
            sharedMaterials = (UnityEngine_Material_array *)sub_B77684(
                                                              this->fields.material,
                                                              v6->obj.klass->_1.element_class);
            if ( !sharedMaterials )
            {
              v31 = sub_B776BC(0LL);
              sub_B77668(v31, 0LL);
            }
          }
          if ( v7 < v6->max_length )
          {
            *v9 = (UnityEngine_Material_o *)v24;
            sub_B77560((BattleServantConfConponent_o *)v9, v24, v18, v19, v20, v21, v22, v23);
            smr = (UnityEngine_Material_o *)this->fields.smr;
            if ( smr )
            {
              v15 = v6;
              goto LABEL_27;
            }
LABEL_40:
            sub_B7769C(smr, method);
          }
        }
        goto LABEL_41;
      }
      if ( v7 < v6->max_length )
      {
        v25 = *v9;
        v26 = (UnityEngine_Object_o *)this->fields.material;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        sharedMaterials = (UnityEngine_Material_array *)UnityEngine_Object__op_Inequality(
                                                          (UnityEngine_Object_o *)v25,
                                                          v26,
                                                          0LL);
        if ( ((unsigned __int8)sharedMaterials & 1) == 0 )
        {
LABEL_13:
          v14 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B77694(System_Collections_Generic_List_Material__TypeInfo);
          System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
            v14,
            (System_Collections_Generic_IEnumerable_T__o *)v6,
            (const MethodInfo_30527CC *)Method_System_Collections_Generic_List_Material___ctor___69398976);
          if ( v14 )
          {
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v14,
              (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.material,
              (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_Material__Add__);
            smr = (UnityEngine_Material_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v14,
                                              (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_Material__ToArray__);
            if ( this->fields.smr )
            {
              v15 = (UnityEngine_Material_array *)smr;
              smr = (UnityEngine_Material_o *)this->fields.smr;
LABEL_27:
              UnityEngine_Renderer__set_sharedMaterials((UnityEngine_Renderer_o *)smr, v15, 0LL);
              return;
            }
          }
          goto LABEL_40;
        }
        if ( v7 < v6->max_length )
        {
          smr = *v9;
          if ( !*v9 )
            goto LABEL_40;
          shader = UnityEngine_Material__get_shader(smr, 0LL);
          shaderAsset = (UnityEngine_Object_o *)this->fields.shaderAsset;
          v29 = (UnityEngine_Object_o *)shader;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          sharedMaterials = (UnityEngine_Material_array *)UnityEngine_Object__op_Equality(v29, shaderAsset, 0LL);
          if ( ((unsigned __int8)sharedMaterials & 1) == 0 )
            goto LABEL_13;
          goto LABEL_21;
        }
      }
    }
LABEL_41:
    v30 = sub_B776C8(sharedMaterials);
    sub_B77668(v30, 0LL);
  }
}


// attributes: thunk
void __fastcall OutlineEffectMain__OnDisable(OutlineEffectMain_o *this, const MethodInfo *method)
{
  OutlineEffectMain__CleanUp(this, method);
}


// attributes: thunk
void __fastcall OutlineEffectMain__OnEnable(OutlineEffectMain_o *this, const MethodInfo *method)
{
  OutlineEffectMain__Setup(this, method);
}


void __fastcall OutlineEffectMain__OnValidate(OutlineEffectMain_o *this, const MethodInfo *method)
{
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  System_Int32_array **v9; // x1

  if ( (byte_438A326 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_21954/*"please play!!"*/);
    byte_438A326 = 1;
  }
  if ( !UnityEngine_Application__get_isPlaying(0LL) )
  {
    v9 = (System_Int32_array **)StringLiteral_21954/*"please play!!"*/;
    this->fields.message = (struct System_String_o *)StringLiteral_21954/*"please play!!"*/;
    sub_B77560((BattleServantConfConponent_o *)&this->fields.message, v9, v3, v4, v5, v6, v7, v8);
  }
}


void __fastcall OutlineEffectMain__RemoveOutlineMaterialFromSharedMaterials(
        OutlineEffectMain_o *this,
        const MethodInfo *method)
{
  UnityEngine_Renderer_o *smr; // x0
  UnityEngine_Material_array *sharedMaterials; // x0
  UnityEngine_Material_array *v5; // x21
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v6; // x20
  int32_t v7; // w21
  UnityEngine_Object_o *material; // x23
  UnityEngine_Object_o *v9; // x22
  UnityEngine_Renderer_o *v10; // x19

  if ( (byte_438A32A & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Material__RemoveAt__);
    sub_B775C4(&Method_System_Collections_Generic_List_Material__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_Material___ctor___69398976);
    sub_B775C4(&Method_System_Collections_Generic_List_Material__get_Item__);
    sub_B775C4(&System_Collections_Generic_List_Material__TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438A32A = 1;
  }
  smr = (UnityEngine_Renderer_o *)this->fields.smr;
  if ( !smr )
    goto LABEL_16;
  sharedMaterials = UnityEngine_Renderer__get_sharedMaterials(smr, 0LL);
  if ( sharedMaterials )
  {
    v5 = sharedMaterials;
    if ( *(_QWORD *)&sharedMaterials->max_length )
    {
      v6 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B77694(System_Collections_Generic_List_Material__TypeInfo);
      System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
        v6,
        (System_Collections_Generic_IEnumerable_T__o *)v5,
        (const MethodInfo_30527CC *)Method_System_Collections_Generic_List_Material___ctor___69398976);
      if ( !v6 )
        goto LABEL_16;
      v7 = v5->max_length - 1;
      if ( v6->fields._size <= (unsigned int)v7 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      material = (UnityEngine_Object_o *)this->fields.material;
      v9 = (UnityEngine_Object_o *)v6->fields._items->m_Items[v7];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Equality(v9, material, 0LL) )
      {
        System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)v6,
          v7,
          (const MethodInfo_3054F88 *)Method_System_Collections_Generic_List_Material__RemoveAt__);
        v10 = (UnityEngine_Renderer_o *)this->fields.smr;
        smr = (UnityEngine_Renderer_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v6,
                                          (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_Material__ToArray__);
        if ( v10 )
        {
          UnityEngine_Renderer__set_sharedMaterials(v10, (UnityEngine_Material_array *)smr, 0LL);
          return;
        }
LABEL_16:
        sub_B7769C(smr, method);
      }
    }
  }
}


void __fastcall OutlineEffectMain__SetActive(OutlineEffectMain_o *this, bool value, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1

  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, value, 0LL);
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


void __fastcall OutlineEffectMain__Setup(OutlineEffectMain_o *this, const MethodInfo *method)
{
  struct UnityEngine_Shader_o *v3; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  UnityEngine_Object_o *shaderAsset; // x21
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  __int64 *v17; // x8
  UnityEngine_Object_o *material; // x22
  UnityEngine_Shader_o *v19; // x22
  UnityEngine_Material_o *v20; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  UnityEngine_Object_o *parent; // x20
  struct UnityEngine_SkinnedMeshRenderer_o *Component_WebViewObject; // x0
  struct UnityEngine_SkinnedMeshRenderer_o **p_smr; // x20
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  UnityEngine_Object_o *smr; // x21
  UnityEngine_Object_o *sharedMesh; // x20
  UnityEngine_Object_o *normalDatas; // x20
  const MethodInfo *v41; // x1
  struct System_String_o *v42; // x1

  if ( (byte_438A327 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_SkinnedMeshRenderer___);
    sub_B775C4(&UnityEngine_Material_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_4648/*"Custom/OutlineEffectShader"*/);
    sub_B775C4(&StringLiteral_19059/*"failed to get SkinnedMeshRenderer component from parent"*/);
    sub_B775C4(&StringLiteral_21865/*"parent is null. please attach this component to object with parent"*/);
    sub_B775C4(&StringLiteral_10368/*"OutlineEffectMaterial"*/);
    sub_B775C4(&StringLiteral_22901/*"success"*/);
    sub_B775C4(&StringLiteral_19058/*"failed to get Custom/OutlineEffectShader from Shader.Find"*/);
    sub_B775C4(&StringLiteral_22566/*"sharedMesh from SkinnedMeshRenderer returned null value"*/);
    byte_438A327 = 1;
  }
  v3 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4648/*"Custom/OutlineEffectShader"*/, 0LL);
  this->fields.shaderAsset = v3;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.shaderAsset,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  shaderAsset = (UnityEngine_Object_o *)this->fields.shaderAsset;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(shaderAsset, 0LL, 0LL) )
  {
    v17 = &StringLiteral_19058/*"failed to get Custom/OutlineEffectShader from Shader.Find"*/;
    goto LABEL_39;
  }
  material = (UnityEngine_Object_o *)this->fields.material;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(material, 0LL, 0LL) )
  {
    v19 = this->fields.shaderAsset;
    v20 = (UnityEngine_Material_o *)sub_B77694(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v20, v19, 0LL);
    if ( !v20 )
      goto LABEL_40;
    UnityEngine_Object__set_name((UnityEngine_Object_o *)v20, (System_String_o *)StringLiteral_10368/*"OutlineEffectMaterial"*/, 0LL);
    this->fields.material = v20;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.material,
      (System_Int32_array **)v20,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_40;
  parent = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent(transform, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(parent, 0LL, 0LL) )
  {
    v17 = &StringLiteral_21865/*"parent is null. please attach this component to object with parent"*/;
    goto LABEL_39;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_40;
  transform = UnityEngine_Transform__get_parent(transform, 0LL);
  if ( !transform )
    goto LABEL_40;
  Component_WebViewObject = (struct UnityEngine_SkinnedMeshRenderer_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                          (UnityEngine_Component_o *)transform,
                                                                          (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_SkinnedMeshRenderer___);
  this->fields.smr = Component_WebViewObject;
  p_smr = &this->fields.smr;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.smr,
    (System_Int32_array **)Component_WebViewObject,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  smr = (UnityEngine_Object_o *)this->fields.smr;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(smr, 0LL, 0LL) )
  {
    v17 = &StringLiteral_19059/*"failed to get SkinnedMeshRenderer component from parent"*/;
    goto LABEL_39;
  }
  transform = (UnityEngine_Transform_o *)*p_smr;
  if ( !*p_smr )
LABEL_40:
    sub_B7769C(transform, v22);
  sharedMesh = (UnityEngine_Object_o *)UnityEngine_SkinnedMeshRenderer__get_sharedMesh(
                                         (UnityEngine_SkinnedMeshRenderer_o *)transform,
                                         0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(sharedMesh, 0LL, 0LL) )
  {
    v17 = &StringLiteral_22566/*"sharedMesh from SkinnedMeshRenderer returned null value"*/;
  }
  else
  {
    normalDatas = (UnityEngine_Object_o *)this->fields.normalDatas;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(normalDatas, 0LL, 0LL) )
      OutlineEffectMain__SetupSkinnedMeshRenderer(this, v41);
    v17 = &StringLiteral_22901/*"success"*/;
  }
LABEL_39:
  v42 = (struct System_String_o *)*v17;
  this->fields.message = (struct System_String_o *)*v17;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.message,
    (System_Int32_array **)v42,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
}


void __fastcall OutlineEffectMain__SetupSkinnedMeshRenderer(OutlineEffectMain_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *smr; // x20
  __int64 v4; // x1
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  __int64 *v11; // x8
  UnityEngine_SkinnedMeshRenderer_o *v12; // x0
  UnityEngine_Object_o *sharedMesh; // x20
  const MethodInfo *v14; // x1
  struct System_String_o *v15; // x1
  const MethodInfo *v16; // x2

  if ( (byte_438A328 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_13069/*"SetupSkinnedMeshRenderer -> sharedMesh from SkinnedMeshRenderer returned null value"*/);
    sub_B775C4(&StringLiteral_13068/*"SetupSkinnedMeshRenderer -> SkinnedMeshRenderer is null"*/);
    byte_438A328 = 1;
  }
  smr = (UnityEngine_Object_o *)this->fields.smr;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(smr, 0LL, 0LL) )
  {
    v11 = &StringLiteral_13068/*"SetupSkinnedMeshRenderer -> SkinnedMeshRenderer is null"*/;
LABEL_14:
    v15 = (struct System_String_o *)*v11;
    this->fields.message = (struct System_String_o *)*v11;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.message,
      (System_Int32_array **)v15,
      v5,
      v6,
      v7,
      v8,
      v9,
      v10);
    return;
  }
  v12 = this->fields.smr;
  if ( !v12 )
    sub_B7769C(0LL, v4);
  sharedMesh = (UnityEngine_Object_o *)UnityEngine_SkinnedMeshRenderer__get_sharedMesh(v12, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(sharedMesh, 0LL, 0LL) )
  {
    v11 = &StringLiteral_13069/*"SetupSkinnedMeshRenderer -> sharedMesh from SkinnedMeshRenderer returned null value"*/;
    goto LABEL_14;
  }
  OutlineEffectMain__InsertOutlineMaterialToSharedMaterialsAtLastIndex(this, v14);
  OutlineEffectMain__UploadNormalsToMesh(this, (UnityEngine_Mesh_o *)sharedMesh, v16);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall OutlineEffectMain__UploadMaterialSettingsToGPU(OutlineEffectMain_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_float__o *Item2; // x1
  System_ValueTuple_List_Color___List_float___o ColorsAndKeys; // kr00_16
  UnityEngine_Material_o *material; // x0
  UnityEngine_Material_o *v6; // x20
  const MethodInfo *v7; // x1
  UnityEngine_Object_o *settings; // x20
  struct UnityEngine_Material_o *v9; // x8
  UnityEngine_Material_o *v10; // x20
  OutlineEffectSettings_c *v11; // x0
  int v12; // s0
  UnityEngine_Material_o *v16; // x19
  OutlineEffectSettings_c *v17; // x0
  float *p_x; // x8
  float x; // s0
  float y; // s1
  float z; // s2
  struct OutlineEffectSettings_o *v22; // x9
  struct OutlineEffectSettings_o *v23; // x8
  struct OutlineEffectSettings_o *v24; // x8
  struct OutlineEffectSettings_o *v25; // x8
  struct OutlineEffectSettings_o *v26; // x8
  UnityEngine_Material_o *v27; // x20
  int v28; // s0
  struct OutlineEffectSettings_o *v32; // x8
  int v33; // s0

  if ( (byte_438A32B & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Color__get_Count__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&OutlineEffectSettings_TypeInfo);
    sub_B775C4(&StringLiteral_16292/*"_GradientArrayKeys"*/);
    sub_B775C4(&StringLiteral_16403/*"_VertexScale"*/);
    sub_B775C4(&StringLiteral_16328/*"_OutlineShiftPixel"*/);
    sub_B775C4(&StringLiteral_16237/*"_ClipFade"*/);
    sub_B775C4(&StringLiteral_16250/*"_ColorKeysLength"*/);
    sub_B775C4(&StringLiteral_16329/*"_OutlineThickness"*/);
    sub_B775C4(&StringLiteral_16291/*"_GradientArrayColors"*/);
    sub_B775C4(&StringLiteral_16402/*"_VertexOffset"*/);
    sub_B775C4(&StringLiteral_16352/*"_RotationSpeed"*/);
    byte_438A32B = 1;
  }
  ColorsAndKeys = OutlineEffectMain__GetColorsAndKeys(this, method);
  Item2 = ColorsAndKeys.fields.Item2;
  material = this->fields.material;
  if ( !material )
    goto LABEL_45;
  UnityEngine_Material__SetColorArray_41470960(
    material,
    (System_String_o *)StringLiteral_16291/*"_GradientArrayColors"*/,
    ColorsAndKeys.fields.Item1,
    0LL);
  material = this->fields.material;
  if ( !material )
    goto LABEL_45;
  UnityEngine_Material__SetFloatArray_41470744(
    material,
    (System_String_o *)StringLiteral_16292/*"_GradientArrayKeys"*/,
    ColorsAndKeys.fields.Item2,
    0LL);
  if ( !ColorsAndKeys.fields.Item1 )
    goto LABEL_45;
  material = this->fields.material;
  if ( !material )
    goto LABEL_45;
  UnityEngine_Material__SetInt(
    material,
    (System_String_o *)StringLiteral_16250/*"_ColorKeysLength"*/,
    ColorsAndKeys.fields.Item1->fields._size,
    0LL);
  v6 = this->fields.material;
  material = (UnityEngine_Material_o *)OutlineEffectMain__GetMainTexture(this, v7);
  if ( !v6 )
    goto LABEL_45;
  UnityEngine_Material__set_mainTexture(v6, (UnityEngine_Texture_o *)material, 0LL);
  settings = (UnityEngine_Object_o *)this->fields.settings;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  material = (UnityEngine_Material_o *)UnityEngine_Object__op_Equality(settings, 0LL, 0LL);
  v9 = this->fields.material;
  if ( ((unsigned __int8)material & 1) == 0 )
  {
    v22 = this->fields.settings;
    if ( v22 )
    {
      if ( v9 )
      {
        UnityEngine_Material__SetFloat(
          this->fields.material,
          (System_String_o *)StringLiteral_16329/*"_OutlineThickness"*/,
          v22->fields.thickness,
          0LL);
        v23 = this->fields.settings;
        if ( v23 )
        {
          material = this->fields.material;
          if ( material )
          {
            UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16352/*"_RotationSpeed"*/, v23->fields.speed, 0LL);
            v24 = this->fields.settings;
            if ( v24 )
            {
              material = this->fields.material;
              if ( material )
              {
                UnityEngine_Material__SetFloat(
                  material,
                  (System_String_o *)StringLiteral_16237/*"_ClipFade"*/,
                  v24->fields.clipFade,
                  0LL);
                v25 = this->fields.settings;
                if ( v25 )
                {
                  material = this->fields.material;
                  if ( material )
                  {
                    UnityEngine_Material__SetFloat(
                      material,
                      (System_String_o *)StringLiteral_16328/*"_OutlineShiftPixel"*/,
                      v25->fields.outlineShiftPixel,
                      0LL);
                    v26 = this->fields.settings;
                    if ( v26 )
                    {
                      v27 = this->fields.material;
                      *(UnityEngine_Vector4_o *)&v28 = UnityEngine_Vector4__op_Implicit(v26->fields.vertexScale, 0LL);
                      if ( v27 )
                      {
                        UnityEngine_Material__SetVector(
                          v27,
                          (System_String_o *)StringLiteral_16403/*"_VertexScale"*/,
                          *(UnityEngine_Vector4_o *)&v28,
                          0LL);
                        v32 = this->fields.settings;
                        if ( v32 )
                        {
                          v16 = this->fields.material;
                          x = v32->fields.vertexOffset.fields.x;
                          y = v32->fields.vertexOffset.fields.y;
                          z = v32->fields.vertexOffset.fields.z;
                          goto LABEL_43;
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
LABEL_45:
    sub_B7769C(material, Item2);
  }
  if ( !v9 )
    goto LABEL_45;
  UnityEngine_Material__SetFloat(this->fields.material, (System_String_o *)StringLiteral_16329/*"_OutlineThickness"*/, 5.0, 0LL);
  material = this->fields.material;
  if ( !material )
    goto LABEL_45;
  UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16352/*"_RotationSpeed"*/, 3.0, 0LL);
  material = this->fields.material;
  if ( !material )
    goto LABEL_45;
  UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16237/*"_ClipFade"*/, 0.8, 0LL);
  material = this->fields.material;
  if ( !material )
    goto LABEL_45;
  UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16328/*"_OutlineShiftPixel"*/, 2.0, 0LL);
  v10 = this->fields.material;
  if ( (BYTE3(OutlineEffectSettings_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OutlineEffectSettings_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OutlineEffectSettings_TypeInfo);
  }
  if ( !byte_438A366 )
  {
    sub_B775C4(&OutlineEffectSettings_TypeInfo);
    byte_438A366 = 1;
  }
  v11 = OutlineEffectSettings_TypeInfo;
  if ( (BYTE3(OutlineEffectSettings_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OutlineEffectSettings_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OutlineEffectSettings_TypeInfo);
    v11 = OutlineEffectSettings_TypeInfo;
  }
  *(UnityEngine_Vector4_o *)&v12 = UnityEngine_Vector4__op_Implicit(
                                     v11->static_fields->_DefaultVertexScale_k__BackingField,
                                     0LL);
  if ( !v10 )
    goto LABEL_45;
  UnityEngine_Material__SetVector(v10, (System_String_o *)StringLiteral_16403/*"_VertexScale"*/, *(UnityEngine_Vector4_o *)&v12, 0LL);
  v16 = this->fields.material;
  if ( !byte_438A367 )
  {
    sub_B775C4(&OutlineEffectSettings_TypeInfo);
    byte_438A367 = 1;
  }
  v17 = OutlineEffectSettings_TypeInfo;
  if ( (BYTE3(OutlineEffectSettings_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OutlineEffectSettings_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OutlineEffectSettings_TypeInfo);
    v17 = OutlineEffectSettings_TypeInfo;
  }
  p_x = &v17->static_fields->_DefaultVertexScale_k__BackingField.fields.x;
  x = p_x[3];
  y = p_x[4];
  z = p_x[5];
LABEL_43:
  *(UnityEngine_Vector4_o *)&v33 = UnityEngine_Vector4__op_Implicit(*(UnityEngine_Vector3_o *)&x, 0LL);
  if ( !v16 )
    goto LABEL_45;
  UnityEngine_Material__SetVector(v16, (System_String_o *)StringLiteral_16402/*"_VertexOffset"*/, *(UnityEngine_Vector4_o *)&v33, 0LL);
}


void __fastcall OutlineEffectMain__UploadNormalsToMesh(
        OutlineEffectMain_o *this,
        UnityEngine_Mesh_o *mesh,
        const MethodInfo *method)
{
  struct OutlineEffectNormalDatas_o *normalDatas; // x8

  normalDatas = this->fields.normalDatas;
  if ( !normalDatas || (this = (OutlineEffectMain_o *)mesh) == 0LL )
    sub_B7769C(this, mesh);
  UnityEngine_Mesh__set_normals(mesh, normalDatas->fields.normals, 0LL);
}


float __fastcall OutlineEffectMain__get_ClipFade(OutlineEffectMain_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *settings; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  struct OutlineEffectSettings_o *v7; // x8

  if ( (byte_438A320 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438A320 = 1;
  }
  settings = (UnityEngine_Object_o *)this->fields.settings;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = UnityEngine_Object__op_Equality(settings, 0LL, 0LL);
  if ( v4 )
    return 0.8;
  v7 = this->fields.settings;
  if ( !v7 )
    sub_B7769C(v4, v5);
  return v7->fields.clipFade;
}


UnityEngine_Gradient_o *__fastcall OutlineEffectMain__get_Gradient(OutlineEffectMain_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *settings; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  OutlineEffectSettings_c *v6; // x0
  struct OutlineEffectSettings_o *v8; // x8

  if ( (byte_438A324 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&OutlineEffectSettings_TypeInfo);
    byte_438A324 = 1;
  }
  settings = (UnityEngine_Object_o *)this->fields.settings;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = UnityEngine_Object__op_Equality(settings, 0LL, 0LL);
  if ( v4 )
  {
    v6 = OutlineEffectSettings_TypeInfo;
    if ( (BYTE3(OutlineEffectSettings_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OutlineEffectSettings_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OutlineEffectSettings_TypeInfo);
    }
    return OutlineEffectSettings__get_DefaultGradient((const MethodInfo *)v6);
  }
  else
  {
    v8 = this->fields.settings;
    if ( !v8 )
      sub_B7769C(v4, v5);
    return v8->fields.gradient;
  }
}


float __fastcall OutlineEffectMain__get_OutlineShiftPixel(OutlineEffectMain_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *settings; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  struct OutlineEffectSettings_o *v7; // x8

  if ( (byte_438A322 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438A322 = 1;
  }
  settings = (UnityEngine_Object_o *)this->fields.settings;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = UnityEngine_Object__op_Equality(settings, 0LL, 0LL);
  if ( v4 )
    return 2.0;
  v7 = this->fields.settings;
  if ( !v7 )
    sub_B7769C(v4, v5);
  return v7->fields.outlineShiftPixel;
}


float __fastcall OutlineEffectMain__get_Speed(OutlineEffectMain_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *settings; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  struct OutlineEffectSettings_o *v7; // x8

  if ( (byte_438A31E & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438A31E = 1;
  }
  settings = (UnityEngine_Object_o *)this->fields.settings;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = UnityEngine_Object__op_Equality(settings, 0LL, 0LL);
  if ( v4 )
    return 3.0;
  v7 = this->fields.settings;
  if ( !v7 )
    sub_B7769C(v4, v5);
  return v7->fields.speed;
}


float __fastcall OutlineEffectMain__get_Thickness(OutlineEffectMain_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *settings; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  struct OutlineEffectSettings_o *v7; // x8

  if ( (byte_438A31C & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438A31C = 1;
  }
  settings = (UnityEngine_Object_o *)this->fields.settings;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = UnityEngine_Object__op_Equality(settings, 0LL, 0LL);
  if ( v4 )
    return 5.0;
  v7 = this->fields.settings;
  if ( !v7 )
    sub_B7769C(v4, v5);
  return v7->fields.thickness;
}


void __fastcall OutlineEffectMain__set_ClipFade(OutlineEffectMain_o *this, float value, const MethodInfo *method)
{
  UnityEngine_Object_o *settings; // x20
  _BOOL8 v6; // x0
  const MethodInfo *v7; // x1
  struct OutlineEffectSettings_o *v8; // x8

  if ( (byte_438A321 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438A321 = 1;
  }
  settings = (UnityEngine_Object_o *)this->fields.settings;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Equality(settings, 0LL, 0LL);
  if ( !v6 )
  {
    v8 = this->fields.settings;
    if ( !v8 )
      sub_B7769C(v6, v7);
    v8->fields.clipFade = value;
    OutlineEffectMain__UploadMaterialSettingsToGPU(this, v7);
  }
}


void __fastcall OutlineEffectMain__set_Gradient(
        OutlineEffectMain_o *this,
        UnityEngine_Gradient_o *value,
        const MethodInfo *method)
{
  UnityEngine_Object_o *settings; // x21
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct OutlineEffectSettings_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_438A325 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438A325 = 1;
  }
  settings = (UnityEngine_Object_o *)this->fields.settings;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(settings, 0LL, 0LL) )
  {
    v13 = this->fields.settings;
    if ( !v13 )
      sub_B7769C(0LL, v6);
    v13->fields.gradient = value;
    sub_B77560(
      (BattleServantConfConponent_o *)&v13->fields.gradient,
      (System_Int32_array **)value,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
    OutlineEffectMain__UploadMaterialSettingsToGPU(this, v14);
  }
}


void __fastcall OutlineEffectMain__set_OutlineShiftPixel(
        OutlineEffectMain_o *this,
        float value,
        const MethodInfo *method)
{
  UnityEngine_Object_o *settings; // x20
  _BOOL8 v6; // x0
  const MethodInfo *v7; // x1
  struct OutlineEffectSettings_o *v8; // x8

  if ( (byte_438A323 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438A323 = 1;
  }
  settings = (UnityEngine_Object_o *)this->fields.settings;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Equality(settings, 0LL, 0LL);
  if ( !v6 )
  {
    v8 = this->fields.settings;
    if ( !v8 )
      sub_B7769C(v6, v7);
    v8->fields.outlineShiftPixel = value;
    OutlineEffectMain__UploadMaterialSettingsToGPU(this, v7);
  }
}


void __fastcall OutlineEffectMain__set_Speed(OutlineEffectMain_o *this, float value, const MethodInfo *method)
{
  UnityEngine_Object_o *settings; // x20
  _BOOL8 v6; // x0
  const MethodInfo *v7; // x1
  struct OutlineEffectSettings_o *v8; // x8

  if ( (byte_438A31F & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438A31F = 1;
  }
  settings = (UnityEngine_Object_o *)this->fields.settings;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Equality(settings, 0LL, 0LL);
  if ( !v6 )
  {
    v8 = this->fields.settings;
    if ( !v8 )
      sub_B7769C(v6, v7);
    v8->fields.speed = value;
    OutlineEffectMain__UploadMaterialSettingsToGPU(this, v7);
  }
}


void __fastcall OutlineEffectMain__set_Thickness(OutlineEffectMain_o *this, float value, const MethodInfo *method)
{
  UnityEngine_Object_o *settings; // x20
  _BOOL8 v6; // x0
  const MethodInfo *v7; // x1
  struct OutlineEffectSettings_o *v8; // x8

  if ( (byte_438A31D & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438A31D = 1;
  }
  settings = (UnityEngine_Object_o *)this->fields.settings;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Equality(settings, 0LL, 0LL);
  if ( !v6 )
  {
    v8 = this->fields.settings;
    if ( !v8 )
      sub_B7769C(v6, v7);
    v8->fields.thickness = value;
    OutlineEffectMain__UploadMaterialSettingsToGPU(this, v7);
  }
}