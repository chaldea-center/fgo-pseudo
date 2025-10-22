void StandFigureCamera___cctor(const MethodInfo *method)
{
  StandFigureCamera_c *v1; // x8
  struct StandFigureCamera_StaticFields *static_fields; // x8
  struct UnityEngine_Vector3_StaticFields *v3; // x9
  float z; // s1

  if ( (byte_4C55F95 & 1) == 0 )
  {
    sub_1C3E564(&StandFigureCamera_TypeInfo);
    byte_4C55F95 = 1;
  }
  v1 = StandFigureCamera_TypeInfo;
  StandFigureCamera_TypeInfo->static_fields->figureRenderGradientColor = (struct UnityEngine_Color_o)xmmword_C13180;
  if ( !byte_4C506A1 )
  {
    sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
    v1 = StandFigureCamera_TypeInfo;
    byte_4C506A1 = 1;
  }
  static_fields = v1->static_fields;
  v3 = UnityEngine_Vector3_TypeInfo->static_fields;
  z = v3->zeroVector.fields.z;
  *(_QWORD *)&static_fields->shinyOffset.fields.x = *(_QWORD *)&v3->zeroVector.fields.x;
  static_fields->shinyOffset.fields.z = z;
}


void StandFigureCamera___ctor(StandFigureCamera_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.GRAND_GlowIterations = 0x3F80000000000002LL;
  *(_QWORD *)&this->fields.GRAND_GlowIntensity = 0x3F8000003F99999ALL;
  this->fields.GRAND_GlowColor = (struct UnityEngine_Color_o)xmmword_C134D0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void StandFigureCamera__Awake(StandFigureCamera_o *this, const MethodInfo *method)
{
  ;
}


void StandFigureCamera__ClearAndReleaseTemporary(
        UnityEngine_RenderTexture_o **renderTexture,
        bool clearDepth,
        bool clearColor,
        const MethodInfo *method)
{
  UnityEngine_Object_o *v7; // x22
  UnityEngine_Rendering_CommandBuffer_o *v8; // x22
  UnityEngine_Texture_o *v9; // x1
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  UnityEngine_Rendering_RenderTargetIdentifier_o v14; // [xsp+0h] [xbp-90h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v15; // [xsp+30h] [xbp-60h] BYREF
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C55F84 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Rendering_CommandBuffer_TypeInfo);
    sub_1C3E564(&UnityEngine_Graphics_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C55F84 = 1;
  }
  v7 = (UnityEngine_Object_o *)*renderTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v7, 0, 0) )
  {
    v8 = (UnityEngine_Rendering_CommandBuffer_o *)sub_1C3E7B0(UnityEngine_Rendering_CommandBuffer_TypeInfo);
    UnityEngine_Rendering_CommandBuffer___ctor(v8, 0);
    v9 = (UnityEngine_Texture_o *)*renderTexture;
    memset(&v15, 0, sizeof(v15));
    UnityEngine_Rendering_RenderTargetIdentifier___ctor_71407128(&v15, v9, 0);
    if ( !v8 )
      sub_1C3E7C0(v10, v11);
    v14 = v15;
    UnityEngine_Rendering_CommandBuffer__SetRenderTarget(v8, &v14, 0);
    v16.fields.r = 0.0;
    v16.fields.g = 0.0;
    v16.fields.b = 0.0;
    v16.fields.a = 0.0;
    UnityEngine_Rendering_CommandBuffer__ClearRenderTarget_71411768(v8, clearDepth, clearColor, v16, 0);
    if ( !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
    UnityEngine_Graphics__ExecuteCommandBuffer(v8, 0);
    UnityEngine_Rendering_CommandBuffer__Release(v8, 0);
    UnityEngine_RenderTexture__ReleaseTemporary(*renderTexture, 0);
    *renderTexture = 0;
    sub_1C3E508((CGThumbnailListItem_o *)renderTexture, 0, v12, v13);
  }
}


void StandFigureCamera__DrawGameObjectWithCommandBuffer(
        StandFigureCamera_o *this,
        UnityEngine_Rendering_CommandBuffer_o *cmd,
        UnityEngine_GameObject_o *gameObject,
        const MethodInfo *method)
{
  Il2CppObject *Component_object; // x20
  Il2CppClass *klass; // x25
  UnityEngine_ParticleSystemRenderer_c *v8; // x26
  Il2CppObject *v9; // x21
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  StandFigureCamera_o *v11; // x22
  unsigned __int64 v12; // x27
  UnityEngine_Object_o *v13; // x23
  UnityEngine_ParticleSystem_TrailModule_o v14; // x0
  Il2CppObject *v15; // x0
  __int64 v16; // x1
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C55F90 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_ParticleSystem___);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_Renderer___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    this = (StandFigureCamera_o *)sub_1C3E564(&UnityEngine_ParticleSystemRenderer_TypeInfo);
    byte_4C55F90 = 1;
  }
  m_ParticleSystem = 0;
  if ( !gameObject )
    goto LABEL_29;
  if ( !UnityEngine_GameObject__get_activeInHierarchy(gameObject, 0) )
    return;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
    return;
  if ( !Component_object )
  {
    v15 = UnityEngine_GameObject__GetComponent_object_(
            gameObject,
            (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_ParticleSystem___);
    sub_1C3E7C0(v15, v16);
  }
  klass = Component_object->klass;
  v8 = UnityEngine_ParticleSystemRenderer_TypeInfo;
  v9 = UnityEngine_GameObject__GetComponent_object_(
         gameObject,
         (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_ParticleSystem___);
  this = (StandFigureCamera_o *)UnityEngine_Renderer__get_sharedMaterials((UnityEngine_Renderer_o *)Component_object, 0);
  if ( !this )
LABEL_29:
    sub_1C3E7C0(this, cmd);
  m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
  v11 = this;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v12 = 0;
    do
    {
      if ( v12 >= (unsigned int)m_CancellationTokenSource )
        sub_1C3E7C8(this, cmd);
      v13 = (UnityEngine_Object_o *)*((_QWORD *)&v11->fields.manager + v12);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (StandFigureCamera_o *)UnityEngine_Object__op_Equality(v13, 0, 0);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( klass != (Il2CppClass *)v8 )
          goto LABEL_24;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (StandFigureCamera_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v9, 0, 0);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_24;
        if ( !v9 )
          goto LABEL_29;
        m_ParticleSystem = UnityEngine_ParticleSystem__get_trails((UnityEngine_ParticleSystem_o *)v9, 0).fields.m_ParticleSystem;
        v14.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
        this = (StandFigureCamera_o *)UnityEngine_ParticleSystem_TrailModule__get_enabled(v14, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !cmd )
            goto LABEL_29;
          UnityEngine_Rendering_CommandBuffer__DrawRenderer_71413876(
            cmd,
            (UnityEngine_Renderer_o *)Component_object,
            (UnityEngine_Material_o *)v13,
            0,
            0);
          UnityEngine_Rendering_CommandBuffer__DrawRenderer_71413876(
            cmd,
            (UnityEngine_Renderer_o *)Component_object,
            (UnityEngine_Material_o *)v13,
            1,
            0);
        }
        else
        {
LABEL_24:
          if ( !cmd )
            goto LABEL_29;
          UnityEngine_Rendering_CommandBuffer__DrawRenderer_71413884(
            cmd,
            (UnityEngine_Renderer_o *)Component_object,
            (UnityEngine_Material_o *)v13,
            0);
        }
      }
      LODWORD(m_CancellationTokenSource) = v11->fields.m_CancellationTokenSource;
      ++v12;
    }
    while ( (__int64)v12 < (int)m_CancellationTokenSource );
  }
}


void StandFigureCamera__DrawGameObjectWithCommandBufferRecursive(
        StandFigureCamera_o *this,
        UnityEngine_Rendering_CommandBuffer_o *cmd,
        UnityEngine_GameObject_o *gameObject,
        const MethodInfo *method)
{
  StandFigureCamera_o *v6; // x21
  UnityEngine_Transform_o *transform; // x0
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 v14; // x0
  System_Collections_IEnumerator_c *v15; // x8
  __int64 v16; // x9
  System_Collections_IEnumerator_c **v17; // x10
  __int64 v18; // x0
  UnityEngine_Component_o *v19; // x0
  __int64 v20; // x1
  __int64 naturalAligment; // x9
  UnityEngine_GameObject_o *v22; // x0
  const MethodInfo *v23; // x3
  __int64 v24; // x0
  __int64 v25; // x8
  __int64 v26; // x19
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0

  v6 = this;
  if ( (byte_4C55F91 & 1) == 0 )
  {
    sub_1C3E564(&System_IDisposable_TypeInfo);
    sub_1C3E564(&System_Collections_IEnumerator_TypeInfo);
    this = (StandFigureCamera_o *)sub_1C3E564(&UnityEngine_Transform_TypeInfo);
    byte_4C55F91 = 1;
  }
  StandFigureCamera__DrawGameObjectWithCommandBuffer(this, cmd, gameObject, method);
  if ( !gameObject || (transform = UnityEngine_GameObject__get_transform(gameObject, 0)) == 0 )
    sub_1C3E7C0(transform, v8);
  Enumerator = UnityEngine_Transform__GetEnumerator(transform, 0);
  if ( !Enumerator )
    sub_1C3E7C0(0, v9);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v12 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_10;
      }
      v14 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v14 = sub_1C8ED7C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v14)(Enumerator, *(_QWORD *)(v14 + 8))
        & 1) == 0 )
      break;
    v15 = Enumerator->klass;
    v16 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v17 = (System_Collections_IEnumerator_c **)&v15->_1.interfaceOffsets->offset;
      while ( *(v17 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v16;
        v17 += 2;
        if ( !v16 )
          goto LABEL_17;
      }
      v18 = (__int64)&v15->vtable[*(_DWORD *)v17 + 1];
    }
    else
    {
LABEL_17:
      v18 = sub_1C8ED7C(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v19 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v18)(
                                       Enumerator,
                                       *(_QWORD *)(v18 + 8));
    if ( !v19 )
      goto LABEL_33;
    naturalAligment = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
    if ( v19->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (UnityEngine_Transform_c *)v19->klass->_2.typeHierarchy[naturalAligment - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_1C3EA80(v19);
LABEL_33:
      sub_1C3E7C0(v19, v20);
    }
    v22 = UnityEngine_Component__get_gameObject(v19, 0);
    StandFigureCamera__DrawGameObjectWithCommandBufferRecursive(v6, cmd, v22, v23);
  }
  v24 = sub_1C3E6A0(Enumerator, System_IDisposable_TypeInfo);
  if ( v24 )
  {
    v25 = *(_QWORD *)v24;
    v26 = v24;
    v27 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
    {
      v28 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
      {
        --v27;
        v28 += 4;
        if ( !v27 )
          goto LABEL_28;
      }
      v29 = v25 + 16LL * *v28 + 312;
    }
    else
    {
LABEL_28:
      v29 = sub_1C8ED7C(v24, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v29)(v26, *(_QWORD *)(v29 + 8));
  }
}


UITexture_array *StandFigureCamera__GetStandFigureUITextures(StandFigureCamera_o *this, const MethodInfo *method)
{
  System_Object_array *ObjectsOfType_object; // x0
  __int64 v3; // x1
  System_Object_array *v4; // x19
  int max_length; // w8
  UITexture_array *v6; // x20
  __int64 v7; // x23
  CGThumbnailListItem_o *m_Items; // x21
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  CGThumbnailListItem_c *v11; // x22
  __int64 v13; // x0

  if ( (byte_4C55F8D & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_Component_GetComponentInChildren_UITexture____78207312);
    sub_1C3E564(&Method_UnityEngine_Object_FindObjectsOfType_UIStandFigureR___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&UITexture___TypeInfo);
    byte_4C55F8D = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  ObjectsOfType_object = UnityEngine_Object__FindObjectsOfType_object_((const MethodInfo_3185D58 *)Method_UnityEngine_Object_FindObjectsOfType_UIStandFigureR___);
  if ( !ObjectsOfType_object )
LABEL_16:
    sub_1C3E7C0(ObjectsOfType_object, v3);
  v4 = ObjectsOfType_object;
  ObjectsOfType_object = (System_Object_array *)sub_1C3E60C(
                                                  UITexture___TypeInfo,
                                                  LODWORD(ObjectsOfType_object->max_length));
  max_length = v4->max_length;
  v6 = (UITexture_array *)ObjectsOfType_object;
  if ( max_length >= 1 )
  {
    v7 = 0;
    m_Items = (CGThumbnailListItem_o *)ObjectsOfType_object->m_Items;
    while ( (unsigned int)v7 < max_length )
    {
      ObjectsOfType_object = (System_Object_array *)v4->m_Items[v7];
      if ( !ObjectsOfType_object )
        goto LABEL_16;
      ObjectsOfType_object = (System_Object_array *)UnityEngine_Component__GetComponentInChildren_object_(
                                                      (UnityEngine_Component_o *)ObjectsOfType_object,
                                                      1,
                                                      (const MethodInfo_30F06C4 *)Method_UnityEngine_Component_GetComponentInChildren_UITexture____78207312);
      if ( !v6 )
        goto LABEL_16;
      v11 = (CGThumbnailListItem_c *)ObjectsOfType_object;
      if ( ObjectsOfType_object )
      {
        ObjectsOfType_object = (System_Object_array *)sub_1C3E6A0(ObjectsOfType_object, v6->obj.klass->_1.element_class);
        if ( !ObjectsOfType_object )
        {
          v13 = sub_1C3E7E4(0);
          sub_1C3E68C(v13, 0);
        }
      }
      if ( (unsigned int)v7 >= LODWORD(v6->max_length) )
        break;
      m_Items->klass = v11;
      sub_1C3E508(m_Items, (int32_t)v11, v9, v10);
      max_length = v4->max_length;
      ++v7;
      m_Items = (CGThumbnailListItem_o *)((char *)m_Items + 8);
      if ( (int)v7 >= max_length )
        return v6;
    }
    sub_1C3E7C8(ObjectsOfType_object, v3);
  }
  return v6;
}


void StandFigureCamera__InitRenderTextures(
        System_Collections_Generic_List_StandFigureCollect__o *collectList,
        System_Collections_Generic_List_ValueTuple_bool__RenderTexture___o *renderTextureEffects,
        System_String_o *textureName,
        const MethodInfo *method)
{
  System_Collections_Generic_List_StandFigureCollect__o *v6; // x21
  UnityEngine_Object_o *Temporary_71249868; // x0
  __int64 v8; // x1
  UnityEngine_Object_o *v9; // x21
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v13; // x5
  __int64 v14; // x6
  __int64 v15; // x7
  Il2CppObject *v16; // x2
  System_String_o *v17; // x0
  const MethodInfo_3B0D3CC *v18; // x4
  __int64 v19; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x3
  System_ValueTuple_bool__object__o v22; // x1 OVERLAPPED
  struct System_ValueTuple_bool__RenderTexture__array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  CGThumbnailListItem_o *v26; // x0
  int32_t InstanceID; // [xsp+4h] [xbp-8Ch] BYREF
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+20h] [xbp-70h] BYREF
  System_ValueTuple_bool__object__o v30; // 0:x0.16

  v6 = collectList;
  if ( (byte_4C55F85 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_ValueTuple_bool__RenderTexture___Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    sub_1C3E564(&Method_System_ValueTuple_bool__RenderTexture___ctor__);
    collectList = (System_Collections_Generic_List_StandFigureCollect__o *)sub_1C3E564(&StringLiteral_25128/*"{0} ({1})"*/);
    byte_4C55F85 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  if ( !v6 )
    sub_1C3E7C0(collectList, renderTextureEffects);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    (System_Collections_Generic_List_object__o *)v6,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  v29 = v28;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__) )
  {
    Temporary_71249868 = (UnityEngine_Object_o *)UnityEngine_RenderTexture__GetTemporary_71249868(2048, 2048, 0, 0, 0);
    v9 = Temporary_71249868;
    if ( !Temporary_71249868 )
      sub_1C3E7C0(0, v8);
    InstanceID = UnityEngine_Object__GetInstanceID(Temporary_71249868, 0);
    v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &InstanceID, v10, v11, v12, v13, v14, v15);
    v17 = System_String__Format_63677760((System_String_o *)StringLiteral_25128/*"{0} ({1})"*/, (Il2CppObject *)textureName, v16, 0);
    UnityEngine_Object__set_name(v9, v17, 0);
    UnityEngine_Texture__set_filterMode((UnityEngine_Texture_o *)v9, 1, 0);
    *(_OWORD *)&v28.fields._list = 0u;
    *(_QWORD *)&v30.fields.Item1 = &v28;
    v30.fields.Item2 = 0;
    System_ValueTuple_bool__object____ctor(
      v30,
      (bool)v9,
      (Il2CppObject *)Method_System_ValueTuple_bool__RenderTexture___ctor__,
      v18);
    if ( !renderTextureEffects )
      sub_1C3E7C0(v19, v20);
    v22 = *(System_ValueTuple_bool__object__o *)&v28.fields._list;
    items = renderTextureEffects->fields._items;
    v24 = Method_System_Collections_Generic_List_ValueTuple_bool__RenderTexture___Add__;
    ++renderTextureEffects->fields._version;
    if ( !items )
      sub_1C3E7C0(v19, *(_QWORD *)&v22.fields.Item1);
    size = renderTextureEffects->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_ValueTuple_bool__object____AddWithResize(
        (System_Collections_Generic_List_T__o *)renderTextureEffects,
        v22,
        *(const MethodInfo_375A464 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
    }
    else
    {
      v26 = (CGThumbnailListItem_o *)(&items->obj + size);
      renderTextureEffects->fields._size = size + 1;
      v26->fields.sortValue0B = (int64_t)v22.fields.Item2;
      v26 = (CGThumbnailListItem_o *)((char *)v26 + 40);
      v26[-1].fields._ThumbnailSpritePath_k__BackingField = *(struct System_String_o **)&v22.fields.Item1;
      sub_1C3E508(v26, 0, (int32_t)v22.fields.Item2, v21);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
}


void StandFigureCamera__InitializeEffectNguiTextures(StandFigureCamera_o *this, const MethodInfo *method)
{
  StandFigureCamera_c *v3; // x0
  System_Collections_Generic_IEnumerable_TSource__o *renderTextureEffects; // x20
  StandFigureCamera___c_c *v5; // x0
  System_Func_T__TResult__o *_9__36_0; // x21
  Il2CppObject *v7; // x22
  struct StandFigureCamera___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  Il2CppObject *Item2; // x1
  System_Collections_Generic_List_T__o *Instance; // x0
  __int64 v13; // x8
  int v14; // w8
  int i; // w25
  System_ValueTuple_bool__object__o Item; // kr00_16
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  StandFigureCamera_c *v19; // x0
  UnityEngine_Object_o *front; // x23
  const MethodInfo *v21; // x1
  Il2CppObject *Highest_36_2; // x23
  Il2CppObject *v23; // x0
  struct StandFigureCamera_StaticFields *v24; // x8
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  UnityEngine_Material_o *v27; // x3
  const MethodInfo *v28; // x5
  const MethodInfo *v29; // x1
  UnityEngine_RenderTexture_o *RenderTextureForEffect; // x0
  struct StandFigureCamera_StaticFields *v31; // x8
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  struct StandFigureCamera_StaticFields *v34; // x8
  StandFigureCamera_c *v35; // x0
  UnityEngine_Object_o *back; // x23
  const MethodInfo *v37; // x2
  Il2CppObject *Lowest_36_1; // x23
  Il2CppObject *v39; // x0
  struct StandFigureCamera_StaticFields *v40; // x8
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  UnityEngine_Material_o *v43; // x3
  const MethodInfo *v44; // x5
  const MethodInfo *v45; // x1
  UnityEngine_RenderTexture_o *v46; // x0
  struct StandFigureCamera_StaticFields *v47; // x8
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  struct StandFigureCamera_StaticFields *v50; // x8
  StandFigureCamera_c *v51; // x0
  StandFigureCamera___c__DisplayClass36_0_o v52; // [xsp+8h] [xbp-68h] BYREF
  System_ValueTuple_bool__object__o v53; // 0:x2.16

  if ( (byte_4C55F8E & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Linq_Enumerable_All_ValueTuple_bool__RenderTexture____);
    sub_1C3E564(&System_Func_ValueTuple_bool__RenderTexture___bool__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_ValueTuple_bool__RenderTexture___get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ValueTuple_bool__RenderTexture___get_Item__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ValueTuple_bool__RenderTexture___set_Item__);
    sub_1C3E564(&Method_UnityEngine_Object_Instantiate_UITexture___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    sub_1C3E564(&StandFigureCamera_TypeInfo);
    sub_1C3E564(&Method_StandFigureCamera___c__InitializeEffectNguiTextures_b__36_0__);
    sub_1C3E564(&StandFigureCamera___c_TypeInfo);
    sub_1C3E564(&StringLiteral_11320/*"RenderTextureBack"*/);
    sub_1C3E564(&StringLiteral_11330/*"RenderTextureFront"*/);
    byte_4C55F8E = 1;
  }
  v3 = StandFigureCamera_TypeInfo;
  v52.fields.uitextures = 0;
  if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
    v3 = StandFigureCamera_TypeInfo;
  }
  renderTextureEffects = (System_Collections_Generic_IEnumerable_TSource__o *)v3->static_fields->renderTextureEffects;
  if ( renderTextureEffects )
  {
    v5 = StandFigureCamera___c_TypeInfo;
    if ( !StandFigureCamera___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(StandFigureCamera___c_TypeInfo);
      v5 = StandFigureCamera___c_TypeInfo;
    }
    _9__36_0 = (System_Func_T__TResult__o *)v5->static_fields->__9__36_0;
    if ( !_9__36_0 )
    {
      if ( !v5->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v5);
        v5 = StandFigureCamera___c_TypeInfo;
      }
      v7 = (Il2CppObject *)v5->static_fields->__9;
      _9__36_0 = (System_Func_T__TResult__o *)sub_1C3E7B0(System_Func_ValueTuple_bool__RenderTexture___bool__TypeInfo);
      System_Func_ValueTuple_bool__object___bool____ctor(
        _9__36_0,
        v7,
        Method_StandFigureCamera___c__InitializeEffectNguiTextures_b__36_0__,
        0);
      static_fields = StandFigureCamera___c_TypeInfo->static_fields;
      static_fields->__9__36_0 = (struct System_Func_ValueTuple_bool__RenderTexture___bool__o *)_9__36_0;
      sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__36_0, (int32_t)_9__36_0, v9, v10);
    }
    if ( !System_Linq_Enumerable__All_ValueTuple_bool__object__(
            renderTextureEffects,
            (System_Func_TSource__bool__o *)_9__36_0,
            (const MethodInfo_3103260 *)Method_System_Linq_Enumerable_All_ValueTuple_bool__RenderTexture____) )
    {
      Instance = (System_Collections_Generic_List_T__o *)StandFigureCamera_TypeInfo;
      if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
        Instance = (System_Collections_Generic_List_T__o *)StandFigureCamera_TypeInfo;
      }
      v13 = *(_QWORD *)(*(_QWORD *)&Instance[4].fields._size + 8LL);
      if ( !v13 )
        goto LABEL_54;
      v14 = *(_DWORD *)(v13 + 24);
      if ( v14 - 1 >= 0 )
      {
        for ( i = v14 - 2; ; --i )
        {
          if ( !Instance[5].fields._size )
          {
            j_il2cpp_runtime_class_init_0(Instance);
            Instance = (System_Collections_Generic_List_T__o *)StandFigureCamera_TypeInfo;
          }
          Instance = *(System_Collections_Generic_List_T__o **)(*(_QWORD *)&Instance[4].fields._size + 8LL);
          if ( !Instance )
            break;
          Item = System_Collections_Generic_List_ValueTuple_bool__object____get_Item(
                   Instance,
                   i + 1,
                   (const MethodInfo_375A148 *)Method_System_Collections_Generic_List_ValueTuple_bool__RenderTexture___get_Item__);
          Item2 = Item.fields.Item2;
          if ( !Item.fields.Item1 )
          {
            Instance = (System_Collections_Generic_List_T__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
            if ( !Instance )
              break;
            if ( Instance[2].monitor )
            {
              v52.fields.uitextures = StandFigureCamera__GetStandFigureUITextures(
                                        (StandFigureCamera_o *)Instance,
                                        (const MethodInfo *)Item2);
              sub_1C3E508((CGThumbnailListItem_o *)&v52, (int32_t)v52.fields.uitextures, v17, v18);
              v19 = StandFigureCamera_TypeInfo;
              if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
                v19 = StandFigureCamera_TypeInfo;
              }
              front = (UnityEngine_Object_o *)v19->static_fields->front;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Equality(front, 0, 0) )
              {
                if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
                Highest_36_2 = (Il2CppObject *)StandFigureCamera___InitializeEffectNguiTextures_g__FindHighest_36_2(
                                                 &v52,
                                                 v21);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                v23 = UnityEngine_Object__Instantiate_object_(
                        Highest_36_2,
                        (const MethodInfo_3185EB4 *)Method_UnityEngine_Object_Instantiate_UITexture___);
                v24 = StandFigureCamera_TypeInfo->static_fields;
                v24->front = (struct UITexture_o *)v23;
                sub_1C3E508((CGThumbnailListItem_o *)&v24->front, (int32_t)v23, v25, v26);
                StandFigureCamera__SetupNguiTexture(
                  this,
                  (UITexture_o *)Highest_36_2,
                  StandFigureCamera_TypeInfo->static_fields->front,
                  v27,
                  1,
                  v28);
                RenderTextureForEffect = StandFigureCamera__MakeRenderTextureForEffect(
                                           (System_String_o *)StringLiteral_11330/*"RenderTextureFront"*/,
                                           v29);
                v31 = StandFigureCamera_TypeInfo->static_fields;
                v31->renderTextureEffectFront = RenderTextureForEffect;
                sub_1C3E508(
                  (CGThumbnailListItem_o *)&v31->renderTextureEffectFront,
                  (int32_t)RenderTextureForEffect,
                  v32,
                  v33);
                v34 = StandFigureCamera_TypeInfo->static_fields;
                Instance = (System_Collections_Generic_List_T__o *)v34->front;
                if ( !Instance )
                  break;
                ((void (__fastcall *)(System_Collections_Generic_List_T__o *, struct UnityEngine_RenderTexture_o *, const MethodInfo *))Instance->klass->vtable._27_System_Collections_IList_Remove.methodPtr)(
                  Instance,
                  v34->renderTextureEffectFront,
                  Instance->klass->vtable._27_System_Collections_IList_Remove.method);
              }
              v35 = StandFigureCamera_TypeInfo;
              if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
                v35 = StandFigureCamera_TypeInfo;
              }
              back = (UnityEngine_Object_o *)v35->static_fields->back;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Equality(back, 0, 0) )
              {
                if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
                Lowest_36_1 = (Il2CppObject *)StandFigureCamera___InitializeEffectNguiTextures_g__FindLowest_36_1(
                                                &v52,
                                                (const MethodInfo *)Item2);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                v39 = UnityEngine_Object__Instantiate_object_(
                        Lowest_36_1,
                        (const MethodInfo_3185EB4 *)Method_UnityEngine_Object_Instantiate_UITexture___);
                v40 = StandFigureCamera_TypeInfo->static_fields;
                v40->back = (struct UITexture_o *)v39;
                sub_1C3E508((CGThumbnailListItem_o *)&v40->back, (int32_t)v39, v41, v42);
                StandFigureCamera__SetupNguiTexture(
                  this,
                  (UITexture_o *)Lowest_36_1,
                  StandFigureCamera_TypeInfo->static_fields->back,
                  v43,
                  -1,
                  v44);
                v46 = StandFigureCamera__MakeRenderTextureForEffect((System_String_o *)StringLiteral_11320/*"RenderTextureBack"*/, v45);
                v47 = StandFigureCamera_TypeInfo->static_fields;
                v47->renderTextureEffectBack = v46;
                sub_1C3E508((CGThumbnailListItem_o *)&v47->renderTextureEffectBack, (int32_t)v46, v48, v49);
                v50 = StandFigureCamera_TypeInfo->static_fields;
                Instance = (System_Collections_Generic_List_T__o *)v50->back;
                if ( !Instance )
                  break;
                ((void (__fastcall *)(System_Collections_Generic_List_T__o *, struct UnityEngine_RenderTexture_o *, const MethodInfo *))Instance->klass->vtable._27_System_Collections_IList_Remove.methodPtr)(
                  Instance,
                  v50->renderTextureEffectBack,
                  Instance->klass->vtable._27_System_Collections_IList_Remove.method);
              }
              Instance = (System_Collections_Generic_List_T__o *)this->fields.manager;
              if ( !Instance )
                break;
              StandFigureManager__OnRenderEndWithEffect(
                (StandFigureManager_o *)Instance,
                (UnityEngine_RenderTexture_o *)Item.fields.Item2,
                v37);
              v51 = StandFigureCamera_TypeInfo;
              if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
                v51 = StandFigureCamera_TypeInfo;
              }
              Instance = (System_Collections_Generic_List_T__o *)v51->static_fields->renderTextureEffects;
              if ( !Instance )
                break;
              *(_QWORD *)&v53.fields.Item1 = *(_QWORD *)&Item.fields.Item1 & 0xFFFFFFFFFFFFFF00LL | 1;
              v53.fields.Item2 = Item.fields.Item2;
              System_Collections_Generic_List_ValueTuple_bool__object____set_Item(
                Instance,
                i + 1,
                v53,
                (const MethodInfo_375A1A0 *)Method_System_Collections_Generic_List_ValueTuple_bool__RenderTexture___set_Item__);
            }
          }
          if ( i < 0 )
            return;
          Instance = (System_Collections_Generic_List_T__o *)StandFigureCamera_TypeInfo;
        }
LABEL_54:
        sub_1C3E7C0(Instance, Item2);
      }
    }
  }
}


// attributes: thunk
void StandFigureCamera__LateUpdate(StandFigureCamera_o *this, const MethodInfo *method)
{
  StandFigureCamera__UpdateWithEffect(this, method);
}


UnityEngine_RenderTexture_o *StandFigureCamera__MakeRenderTextureForEffect(
        System_String_o *nameToSet,
        const MethodInfo *method)
{
  UnityEngine_Object_o *Temporary_71249868; // x0
  __int64 v4; // x1
  UnityEngine_Object_o *v5; // x20
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  __int64 v9; // x5
  __int64 v10; // x6
  __int64 v11; // x7
  Il2CppObject *v12; // x0
  System_String_o *v13; // x0
  int32_t InstanceID; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C55F88 & 1) == 0 )
  {
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&StringLiteral_25128/*"{0} ({1})"*/);
    byte_4C55F88 = 1;
  }
  Temporary_71249868 = (UnityEngine_Object_o *)UnityEngine_RenderTexture__GetTemporary_71249868(2048, 2048, 0, 0, 0);
  if ( !Temporary_71249868 )
    sub_1C3E7C0(0, v4);
  v5 = Temporary_71249868;
  InstanceID = UnityEngine_Object__GetInstanceID(Temporary_71249868, 0);
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &InstanceID, v6, v7, v8, v9, v10, v11);
  v13 = System_String__Format_63677760((System_String_o *)StringLiteral_25128/*"{0} ({1})"*/, (Il2CppObject *)nameToSet, v12, 0);
  UnityEngine_Object__set_name(v5, v13, 0);
  return (UnityEngine_RenderTexture_o *)v5;
}


void StandFigureCamera__OnPostRender(StandFigureCamera_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UnityEngine_Camera_o *Component_object; // x0
  __int64 v5; // x1
  UnityEngine_Object_o *v6; // x20
  UnityEngine_RenderTexture_o **p_recycleTexture; // x21
  UnityEngine_Object_o *recycleTexture; // x22
  bool v9; // w23
  UnityEngine_Camera_o *v10; // x22
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x2

  if ( (byte_4C55F8C & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_Camera___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&StringLiteral_13687/*"TempStandFigureRenderTexture"*/);
    sub_1C3E564(&StringLiteral_11319/*"RenderTexture"*/);
    byte_4C55F8C = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( this->fields.withEffect )
    {
      StandFigureCamera__InitializeEffectNguiTextures(this, method);
      StandFigureCamera__RenderServantWithEffects(this, v3);
      return;
    }
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_Camera___);
    if ( Component_object )
    {
      Component_object = (UnityEngine_Camera_o *)UnityEngine_Camera__get_targetTexture(Component_object, 0);
      if ( Component_object )
      {
        v6 = (UnityEngine_Object_o *)Component_object;
        if ( !UnityEngine_RenderTexture__IsCreated((UnityEngine_RenderTexture_o *)Component_object, 0) )
          return;
        Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0);
        if ( Component_object )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 0, 0);
          p_recycleTexture = &this->fields.recycleTexture;
          recycleTexture = (UnityEngine_Object_o *)this->fields.recycleTexture;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v9 = UnityEngine_Object__op_Inequality(recycleTexture, 0, 0);
          Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_object_(
                                                       (UnityEngine_Component_o *)this,
                                                       (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_Camera___);
          v10 = Component_object;
          if ( v9 )
          {
            if ( !Component_object )
              goto LABEL_22;
            UnityEngine_Camera__set_targetTexture(Component_object, *p_recycleTexture, 0);
            *p_recycleTexture = 0;
            sub_1C3E508((CGThumbnailListItem_o *)&this->fields.recycleTexture, 0, v11, v12);
          }
          else
          {
            Component_object = (UnityEngine_Camera_o *)UnityEngine_RenderTexture__GetTemporary_71249868(
                                                         2048,
                                                         2048,
                                                         0,
                                                         0,
                                                         0);
            if ( !v10 )
              goto LABEL_22;
            UnityEngine_Camera__set_targetTexture(v10, (UnityEngine_RenderTexture_o *)Component_object, 0);
          }
          Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_object_(
                                                       (UnityEngine_Component_o *)this,
                                                       (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_Camera___);
          if ( Component_object )
          {
            Component_object = (UnityEngine_Camera_o *)UnityEngine_Camera__get_targetTexture(Component_object, 0);
            if ( Component_object )
            {
              UnityEngine_Object__set_name(
                (UnityEngine_Object_o *)Component_object,
                (System_String_o *)StringLiteral_11319/*"RenderTexture"*/,
                0);
              UnityEngine_Object__set_name(v6, (System_String_o *)StringLiteral_13687/*"TempStandFigureRenderTexture"*/, 0);
              Component_object = (UnityEngine_Camera_o *)this->fields.manager;
              if ( Component_object )
              {
                StandFigureManager__OnRenderEnd(
                  (StandFigureManager_o *)Component_object,
                  (UnityEngine_RenderTexture_o *)v6,
                  v13);
                this->fields.state = 0;
                return;
              }
            }
          }
        }
      }
    }
LABEL_22:
    sub_1C3E7C0(Component_object, v5);
  }
}


void StandFigureCamera__OnPreRender(StandFigureCamera_o *this, const MethodInfo *method)
{
  if ( this->fields.withEffect || this->fields.state == 1 )
    this->fields.state = 2;
}


void StandFigureCamera__ReleaseRenderTexture(UnityEngine_RenderTexture_o **renderTexture, const MethodInfo *method)
{
  UnityEngine_Object_o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C55F83 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C55F83 = 1;
  }
  v3 = (UnityEngine_Object_o *)*renderTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v3, 0, 0) )
  {
    UnityEngine_RenderTexture__ReleaseTemporary(*renderTexture, 0);
    *renderTexture = 0;
    sub_1C3E508((CGThumbnailListItem_o *)renderTexture, 0, v4, v5);
  }
}


void StandFigureCamera__ReleaseRenderTextures(
        System_Collections_Generic_List_ValueTuple_bool__RenderTexture___o *renderTextureEffects,
        const MethodInfo *method)
{
  __int128 v3; // [xsp+0h] [xbp-40h] BYREF
  UnityEngine_RenderTexture_o *temp[2]; // [xsp+10h] [xbp-30h]

  if ( (byte_4C55F82 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_bool__RenderTexture___Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_bool__RenderTexture___MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_bool__RenderTexture___get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ValueTuple_bool__RenderTexture___GetEnumerator__);
    byte_4C55F82 = 1;
  }
  v3 = 0u;
  *(_OWORD *)temp = 0u;
  if ( renderTextureEffects )
  {
    System_Collections_Generic_List_ValueTuple_bool__object____GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v3,
      (System_Collections_Generic_List_T__o *)renderTextureEffects,
      (const MethodInfo_375AFBC *)Method_System_Collections_Generic_List_ValueTuple_bool__RenderTexture___GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_ValueTuple_bool__object____MoveNext(
              (System_Collections_Generic_List_Enumerator_T__o *)&v3,
              (const MethodInfo_353651C *)Method_System_Collections_Generic_List_Enumerator_ValueTuple_bool__RenderTexture___MoveNext__) )
      UnityEngine_RenderTexture__ReleaseTemporary(temp[1], 0);
    System_Collections_Generic_List_Enumerator_ValueTuple_bool__object____Dispose(
      (System_Collections_Generic_List_Enumerator_T__o *)&v3,
      (const MethodInfo_3536518 *)Method_System_Collections_Generic_List_Enumerator_ValueTuple_bool__RenderTexture___Dispose__);
  }
}


void StandFigureCamera__ReleaseRenderTexturesForEffects(const MethodInfo *method)
{
  const MethodInfo *v1; // x1
  StandFigureCamera_c *v2; // x0

  if ( (byte_4C55F86 & 1) == 0 )
  {
    sub_1C3E564(&StandFigureCamera_TypeInfo);
    byte_4C55F86 = 1;
  }
  v2 = StandFigureCamera_TypeInfo;
  if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
    v2 = StandFigureCamera_TypeInfo;
  }
  StandFigureCamera__ReleaseRenderTextures(v2->static_fields->renderTextureEffects, v1);
}


void StandFigureCamera__RenderManuallyUsingCommandBuffer(
        StandFigureCamera_o *this,
        UnityEngine_RenderTexture_o *mainTexture,
        UIStandFigureRender_o *standFigure,
        UIStandFigureRender_o *standFigure0,
        bool renderBack,
        bool renderFront,
        UnityEngine_RenderTexture_o *rtBack,
        UnityEngine_RenderTexture_o *rtFront,
        const MethodInfo *method)
{
  UnityEngine_Rendering_CommandBuffer_o *v15; // x19
  __int64 v16; // x0
  __int64 v17; // x1
  __int64 v18; // x0
  __int64 v19; // x1
  UnityEngine_Transform_o *transform; // x0
  __int64 v21; // x1
  UnityEngine_Component_o *Child; // x0
  __int64 v23; // x1
  Il2CppObject *Component_object; // x0
  __int64 v25; // x1
  UnityEngine_Component_o *v26; // x28
  UnityEngine_Transform_o *v27; // x0
  __int64 v28; // x1
  UnityEngine_Component_o *v29; // x0
  __int64 v30; // x1
  Il2CppObject *v31; // x0
  __int64 v32; // x1
  UnityEngine_Component_o *v33; // x24
  UnityEngine_Transform_o *v34; // x0
  __int64 v35; // x1
  UnityEngine_Transform_o *v36; // x0
  __int64 v37; // x1
  UnityEngine_Component_o *v38; // x29
  UnityEngine_Transform_o *v39; // x0
  __int64 v40; // x1
  UnityEngine_Transform_o *v41; // x26
  UnityEngine_Transform_o *v42; // x0
  __int64 v43; // x1
  UnityEngine_Transform_o *v44; // x0
  __int64 v45; // x1
  UnityEngine_Component_o *v46; // x24
  __int64 v47; // x0
  __int64 v48; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v50; // x3
  __int64 v51; // x0
  __int64 v52; // x1
  UnityEngine_GameObject_o *v53; // x0
  const MethodInfo *v54; // x3
  UnityEngine_Material_array *sharedMaterials; // x0
  __int64 v56; // x1
  UnityEngine_Material_array *v57; // x22
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v59; // x21
  UnityEngine_Object_o *v60; // x24
  UnityEngine_Shader_o *v61; // x22
  UnityEngine_Shader_o *v62; // x24
  UnityEngine_Material_o *v63; // x29
  UnityEngine_Material_o *v64; // x25
  float GRAND_GlowIntensity; // s8
  __int64 v66; // x0
  __int64 v67; // x1
  float time; // s0
  float v69; // s0
  float v70; // s1
  float v71; // s2
  int v72; // w21
  __int64 v73; // x0
  __int64 v74; // x1
  StandFigureCamera_c *v75; // x0
  UnityEngine_Transform_o *v76; // x21
  UnityEngine_Material_array *v77; // x0
  __int64 v78; // x1
  UnityEngine_Material_array *v79; // x24
  il2cpp_array_size_t v80; // x8
  unsigned __int64 v81; // x26
  UnityEngine_Object_o *v82; // x27
  __int64 v83; // x0
  __int64 v84; // x1
  float x; // s8
  float y; // s9
  float z; // s10
  float v88; // s0
  UnityEngine_GameObject_o *v89; // x24
  StandFigureCamera_c *v90; // x0
  UnityEngine_GameObject_o *v91; // x0
  const MethodInfo *v92; // x3
  __int64 v93; // x0
  __int64 v94; // x1
  UnityEngine_GameObject_o *v95; // x0
  const MethodInfo *v96; // x3
  UnityEngine_GameObject_o *v97; // x0
  const MethodInfo *v98; // x3
  UnityEngine_Rendering_CommandBuffer_c *klass; // x8
  __int64 v100; // x9
  int32_t *p_offset; // x10
  __int64 v102; // x0
  UIStandFigureRender_o *v103; // [xsp+18h] [xbp-598h]
  UnityEngine_Component_o *v104; // [xsp+20h] [xbp-590h]
  bool v105; // [xsp+28h] [xbp-588h]
  UnityEngine_Rendering_RenderTargetIdentifier_o v107; // [xsp+30h] [xbp-580h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v108; // [xsp+60h] [xbp-550h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v109; // [xsp+90h] [xbp-520h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v110; // [xsp+B8h] [xbp-4F8h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v111; // [xsp+E0h] [xbp-4D0h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v112; // [xsp+110h] [xbp-4A0h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v113; // [xsp+140h] [xbp-470h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v114; // [xsp+170h] [xbp-440h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v115; // [xsp+1A0h] [xbp-410h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v116; // [xsp+1D0h] [xbp-3E0h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v117; // [xsp+200h] [xbp-3B0h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v118; // [xsp+230h] [xbp-380h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v119; // [xsp+260h] [xbp-350h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v120; // [xsp+290h] [xbp-320h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v121; // [xsp+2C0h] [xbp-2F0h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v122; // [xsp+2F0h] [xbp-2C0h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v123; // [xsp+320h] [xbp-290h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v124; // [xsp+350h] [xbp-260h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v125; // [xsp+380h] [xbp-230h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v126; // [xsp+3B0h] [xbp-200h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v127; // [xsp+3E0h] [xbp-1D0h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v128; // [xsp+410h] [xbp-1A0h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v129; // [xsp+440h] [xbp-170h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v130; // [xsp+470h] [xbp-140h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v131; // [xsp+4A0h] [xbp-110h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v132; // [xsp+4D0h] [xbp-E0h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v133; // [xsp+500h] [xbp-B0h]
  UnityEngine_Texture_o *v134; // [xsp+538h] [xbp-78h]
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v136; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v137; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v138; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v139; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v140; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v141; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v134 = (UnityEngine_Texture_o *)mainTexture;
  if ( (byte_4C55F92 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Rendering_CommandBuffer_TypeInfo);
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_MeshRenderer___);
    sub_1C3E564(&UnityEngine_Graphics_TypeInfo);
    sub_1C3E564(&System_IDisposable_TypeInfo);
    sub_1C3E564(&UnityEngine_Material_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&StandFigureCamera_TypeInfo);
    sub_1C3E564(&StringLiteral_7317/*"Hidden/NGUIGlow"*/);
    sub_1C3E564(&StringLiteral_16153/*"_BlurSize"*/);
    sub_1C3E564(&StringLiteral_16183/*"_Color"*/);
    sub_1C3E564(&StringLiteral_16258/*"_Intensity"*/);
    sub_1C3E564(&StringLiteral_16249/*"_GradientColor"*/);
    sub_1C3E564(&StringLiteral_6981/*"GRAND"*/);
    sub_1C3E564(&StringLiteral_7156/*"GrandServant ServantSelection Cmd"*/);
    sub_1C3E564(&StringLiteral_7306/*"Hidden/GrandServantServantSelectionOutlineGlowApplicatorShader"*/);
    byte_4C55F92 = 1;
  }
  v15 = (UnityEngine_Rendering_CommandBuffer_o *)sub_1C3E7B0(UnityEngine_Rendering_CommandBuffer_TypeInfo);
  UnityEngine_Rendering_CommandBuffer___ctor(v15, 0);
  if ( !v15 )
    sub_1C3E7C0(v16, v17);
  UnityEngine_Rendering_CommandBuffer__set_name(v15, (System_String_o *)StringLiteral_7156/*"GrandServant ServantSelection Cmd"*/, 0);
  if ( !standFigure )
    sub_1C3E7C0(v18, v19);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)standFigure, 0);
  if ( !transform )
    sub_1C3E7C0(0, v21);
  Child = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(transform, 0, 0);
  if ( !Child )
    sub_1C3E7C0(0, v23);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       Child,
                       (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_MeshRenderer___);
  if ( !standFigure0 )
    sub_1C3E7C0(Component_object, v25);
  v26 = (UnityEngine_Component_o *)Component_object;
  v27 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)standFigure0, 0);
  if ( !v27 )
    sub_1C3E7C0(0, v28);
  v29 = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v27, 0, 0);
  v105 = renderFront;
  if ( !v29 )
    sub_1C3E7C0(0, v30);
  v31 = UnityEngine_Component__GetComponent_object_(
          v29,
          (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_MeshRenderer___);
  v33 = (UnityEngine_Component_o *)v31;
  if ( !v31 )
    sub_1C3E7C0(0, v32);
  v34 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v31, 0);
  if ( !v34 )
    sub_1C3E7C0(0, v35);
  v36 = UnityEngine_Transform__GetChild(v34, 0, 0);
  if ( !v26 )
    sub_1C3E7C0(v36, v37);
  v38 = (UnityEngine_Component_o *)v36;
  v39 = UnityEngine_Component__get_transform(v26, 0);
  if ( !v39 )
    sub_1C3E7C0(0, v40);
  v41 = UnityEngine_Transform__GetChild(v39, 1, 0);
  v42 = UnityEngine_Component__get_transform(v33, 0);
  if ( !v42 )
    sub_1C3E7C0(0, v43);
  v104 = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v42, 2, 0);
  v44 = UnityEngine_Component__get_transform(v33, 0);
  if ( !v44 )
    sub_1C3E7C0(0, v45);
  v46 = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v44, 3, 0);
  UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_71407468(&v132, v134, 0);
  v133 = v132;
  v131 = v132;
  UnityEngine_Rendering_CommandBuffer__SetRenderTarget(v15, &v131, 0);
  v137.fields.r = 0.0;
  v137.fields.g = 0.0;
  v137.fields.b = 0.0;
  v137.fields.a = 0.0;
  UnityEngine_Rendering_CommandBuffer__ClearRenderTarget_71411768(v15, 1, 1, v137, 0);
  if ( renderBack )
  {
    UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_71407468(&v132, (UnityEngine_Texture_o *)rtBack, 0);
    v133 = v132;
    v130 = v132;
    UnityEngine_Rendering_CommandBuffer__SetRenderTarget(v15, &v130, 0);
    v138.fields.r = 0.0;
    v138.fields.g = 0.0;
    v138.fields.b = 0.0;
    v138.fields.a = 0.0;
    UnityEngine_Rendering_CommandBuffer__ClearRenderTarget_71411768(v15, 1, 1, v138, 0);
    if ( !v46 )
      sub_1C3E7C0(v47, v48);
    gameObject = UnityEngine_Component__get_gameObject(v46, 0);
    StandFigureCamera__DrawGameObjectWithCommandBufferRecursive(this, v15, gameObject, v50);
    if ( !v38 )
      sub_1C3E7C0(v51, v52);
    v53 = UnityEngine_Component__get_gameObject(v38, 0);
    StandFigureCamera__DrawGameObjectWithCommandBufferRecursive(this, v15, v53, v54);
    UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_71407468(&v129, v134, 0);
    v132 = v129;
    v128 = v129;
    UnityEngine_Rendering_CommandBuffer__SetRenderTarget(v15, &v128, 0);
  }
  UnityEngine_Rendering_CommandBuffer__GetTemporaryRT_71410680(v15, 1, 512, 512, 0, 1, 16, 0);
  UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_71407440(&v132, 1, 0);
  v133 = v132;
  v127 = v132;
  UnityEngine_Rendering_CommandBuffer__SetRenderTarget(v15, &v127, 0);
  v139.fields.r = 0.0;
  v139.fields.g = 0.0;
  v139.fields.b = 0.0;
  v139.fields.a = 0.0;
  UnityEngine_Rendering_CommandBuffer__ClearRenderTarget_71411768(v15, 1, 1, v139, 0);
  sharedMaterials = UnityEngine_Renderer__get_sharedMaterials((UnityEngine_Renderer_o *)v26, 0);
  v57 = sharedMaterials;
  v103 = standFigure;
  if ( !sharedMaterials )
    sub_1C3E7C0(0, v56);
  max_length = sharedMaterials->max_length;
  if ( (int)max_length >= 1 )
  {
    v59 = 0;
    do
    {
      if ( v59 >= (unsigned int)max_length )
        sub_1C3E7C8(sharedMaterials, v56);
      v60 = (UnityEngine_Object_o *)v57->m_Items[v59];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      sharedMaterials = (UnityEngine_Material_array *)UnityEngine_Object__op_Equality(v60, 0, 0);
      if ( ((unsigned __int8)sharedMaterials & 1) == 0 )
        UnityEngine_Rendering_CommandBuffer__DrawRenderer_71413884(
          v15,
          (UnityEngine_Renderer_o *)v26,
          (UnityEngine_Material_o *)v60,
          0);
      LODWORD(max_length) = v57->max_length;
      ++v59;
    }
    while ( (__int64)v59 < (int)max_length );
  }
  v61 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_7317/*"Hidden/NGUIGlow"*/, 0);
  v62 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_7306/*"Hidden/GrandServantServantSelectionOutlineGlowApplicatorShader"*/, 0);
  v63 = (UnityEngine_Material_o *)sub_1C3E7B0(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v63, v61, 0);
  v64 = (UnityEngine_Material_o *)sub_1C3E7B0(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v64, v62, 0);
  UnityEngine_Rendering_CommandBuffer__GetTemporaryRT_71410680(v15, 2, 512, 512, 0, 1, 16, 0);
  UnityEngine_Rendering_CommandBuffer__GetTemporaryRT_71410680(v15, 3, 512, 512, 0, 1, 16, 0);
  UnityEngine_Rendering_CommandBuffer__GetTemporaryRT_71410680(v15, 4, 512, 512, 0, 1, 16, 0);
  GRAND_GlowIntensity = this->fields.GRAND_GlowIntensity;
  time = UnityEngine_Time__get_time(0);
  if ( !v63 )
    sub_1C3E7C0(v66, v67);
  v69 = (float)(time * 0.1) - (float)(floorf((float)(time * 0.1) / 0.3) * 0.3);
  v70 = -0.15;
  v71 = fminf(v69, 0.3) + -0.15;
  if ( v69 >= 0.0 )
    v70 = v71;
  UnityEngine_Material__SetFloat(
    v63,
    (System_String_o *)StringLiteral_16258/*"_Intensity"*/,
    GRAND_GlowIntensity + (float)(0.15 - fabsf(v70)),
    0);
  UnityEngine_Material__SetFloat(v63, (System_String_o *)StringLiteral_16153/*"_BlurSize"*/, this->fields.GRAND_GlowSize, 0);
  v140.fields.r = 1.0;
  v140.fields.g = 1.0;
  v140.fields.b = 1.0;
  v140.fields.a = 1.0;
  UnityEngine_Material__SetColor(v63, (System_String_o *)StringLiteral_16183/*"_Color"*/, v140, 0);
  UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_71407440(&v132, 1, 0);
  v133 = v132;
  UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_71407440(&v129, 3, 0);
  v132 = v129;
  v126 = v133;
  v125 = v129;
  UnityEngine_Rendering_CommandBuffer__Blit_71414320(v15, &v126, &v125, v63, 0, 0);
  if ( this->fields.GRAND_GlowIterations - 1 >= 1 )
  {
    v72 = 0;
    do
    {
      UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_71407440(&v132, 3, 0);
      v133 = v132;
      UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_71407440(&v129, 4, 0);
      v132 = v129;
      v124 = v133;
      v123 = v129;
      UnityEngine_Rendering_CommandBuffer__Blit_71414320(v15, &v124, &v123, v63, 1, 0);
      UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_71407440(&v122, 4, 0);
      v129 = v122;
      UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_71407440(&v121, 3, 0);
      v122 = v121;
      v120 = v129;
      v119 = v121;
      UnityEngine_Rendering_CommandBuffer__Blit_71414320(v15, &v120, &v119, v63, 0, 0);
      ++v72;
    }
    while ( v72 < this->fields.GRAND_GlowIterations - 1 );
  }
  UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_71407440(&v132, 3, 0);
  v133 = v132;
  UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_71407440(&v129, 2, 0);
  v132 = v129;
  v118 = v133;
  v117 = v129;
  UnityEngine_Rendering_CommandBuffer__Blit_71414320(v15, &v118, &v117, v63, 1, 0);
  UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_71407440(&v122, 2, 0);
  v129 = v122;
  UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_71407440(&v121, 1, 0);
  v122 = v121;
  v116 = v129;
  v115 = v121;
  UnityEngine_Rendering_CommandBuffer__Blit_71414036(v15, &v116, &v115, 0);
  UnityEngine_Rendering_CommandBuffer__ReleaseTemporaryRT(v15, 3, 0);
  UnityEngine_Rendering_CommandBuffer__ReleaseTemporaryRT(v15, 4, 0);
  UnityEngine_Rendering_CommandBuffer__ReleaseTemporaryRT(v15, 2, 0);
  if ( !v64 )
    sub_1C3E7C0(v73, v74);
  UnityEngine_Material__SetFloat(
    v64,
    (System_String_o *)StringLiteral_16258/*"_Intensity"*/,
    this->fields.GRAND_GlowApplicatorIntensity,
    0);
  UnityEngine_Rendering_CommandBuffer__SetGlobalColor_71414476(
    v15,
    (System_String_o *)StringLiteral_16183/*"_Color"*/,
    this->fields.GRAND_GlowColor,
    0);
  UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_71407440(&v114, 1, 0);
  v121 = v114;
  UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_71407468(&v113, v134, 0);
  v114 = v113;
  v112 = v121;
  v111 = v113;
  UnityEngine_Rendering_CommandBuffer__Blit_71414176(v15, &v112, &v111, v64, 0);
  UnityEngine_Rendering_CommandBuffer__ReleaseTemporaryRT(v15, 1, 0);
  UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_71407468(&v110, v134, 0);
  v113 = v110;
  v109 = v110;
  UnityEngine_Rendering_CommandBuffer__SetRenderTarget(v15, &v109, 0);
  UnityEngine_Rendering_CommandBuffer__EnableShaderKeyword(v15, (System_String_o *)StringLiteral_6981/*"GRAND"*/, 0);
  v75 = StandFigureCamera_TypeInfo;
  if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
    v75 = StandFigureCamera_TypeInfo;
  }
  UnityEngine_Rendering_CommandBuffer__SetGlobalColor_71414476(
    v15,
    (System_String_o *)StringLiteral_16249/*"_GradientColor"*/,
    v75->static_fields->figureRenderGradientColor,
    0);
  v76 = v41;
  v77 = UnityEngine_Renderer__get_sharedMaterials((UnityEngine_Renderer_o *)v26, 0);
  v79 = v77;
  if ( !v77 )
    sub_1C3E7C0(0, v78);
  v80 = v77->max_length;
  if ( (int)v80 >= 1 )
  {
    v81 = 0;
    do
    {
      if ( v81 >= (unsigned int)v80 )
        sub_1C3E7C8(v77, v78);
      v82 = (UnityEngine_Object_o *)v79->m_Items[v81];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v77 = (UnityEngine_Material_array *)UnityEngine_Object__op_Equality(v82, 0, 0);
      if ( ((unsigned __int8)v77 & 1) == 0 )
        UnityEngine_Rendering_CommandBuffer__DrawRenderer_71413884(
          v15,
          (UnityEngine_Renderer_o *)v26,
          (UnityEngine_Material_o *)v82,
          0);
      LODWORD(v80) = v79->max_length;
      ++v81;
    }
    while ( (__int64)v81 < (int)v80 );
  }
  UnityEngine_Rendering_CommandBuffer__DisableShaderKeyword(v15, (System_String_o *)StringLiteral_6981/*"GRAND"*/, 0);
  if ( !v76 )
    sub_1C3E7C0(v83, v84);
  localPosition = UnityEngine_Transform__get_localPosition(v76, 0);
  x = localPosition.fields.x;
  y = localPosition.fields.y;
  z = localPosition.fields.z;
  v88 = 512.0;
  if ( !v103->fields.isHigh )
    v88 = 0.0;
  TransformHelper__SetLocalPositionY(v76, v88, 0);
  v89 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v76, 0);
  v90 = StandFigureCamera_TypeInfo;
  if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
    v90 = StandFigureCamera_TypeInfo;
  }
  GameObjectExtensions__AddLocalPosition(v89, v90->static_fields->shinyOffset, 0);
  if ( v105 )
  {
    v91 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v76, 0);
    StandFigureCamera__DrawGameObjectWithCommandBufferRecursive(this, v15, v91, v92);
    UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_71407468(&v132, (UnityEngine_Texture_o *)rtFront, 0);
    v133 = v132;
    v108 = v132;
    UnityEngine_Rendering_CommandBuffer__SetRenderTarget(v15, &v108, 0);
    v141.fields.r = 0.0;
    v141.fields.g = 0.0;
    v141.fields.b = 0.0;
    v141.fields.a = 0.0;
    UnityEngine_Rendering_CommandBuffer__ClearRenderTarget_71411768(v15, 1, 1, v141, 0);
    if ( !v104 )
      sub_1C3E7C0(v93, v94);
    v95 = UnityEngine_Component__get_gameObject(v104, 0);
    StandFigureCamera__DrawGameObjectWithCommandBufferRecursive(this, v15, v95, v96);
    UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_71407468(&v129, v134, 0);
    v132 = v129;
    v107 = v129;
    UnityEngine_Rendering_CommandBuffer__SetRenderTarget(v15, &v107, 0);
  }
  else if ( renderBack )
  {
    v97 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v76, 0);
    StandFigureCamera__DrawGameObjectWithCommandBufferRecursive(this, v15, v97, v98);
  }
  if ( !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
  UnityEngine_Graphics__ExecuteCommandBuffer(v15, 0);
  v136.fields.x = x;
  v136.fields.y = y;
  v136.fields.z = z;
  UnityEngine_Transform__set_localPosition(v76, v136, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71341564((UnityEngine_Object_o *)v63, 0);
  UnityEngine_Object__Destroy_71341564((UnityEngine_Object_o *)v64, 0);
  klass = v15->klass;
  v100 = *(unsigned __int16 *)&v15->klass->_2.rank;
  if ( *(_WORD *)&v15->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v100;
      p_offset += 4;
      if ( !v100 )
        goto LABEL_65;
    }
    v102 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_65:
    v102 = sub_1C8ED7C(v15, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(UnityEngine_Rendering_CommandBuffer_o *, _QWORD))v102)(v15, *(_QWORD *)(v102 + 8));
}


void StandFigureCamera__RenderServantWithEffects(StandFigureCamera_o *this, const MethodInfo *method)
{
  StandFigureCamera_c *v2; // x0
  il2cpp_array_size_t ComponentsInChildren_object__51318504; // x0
  __int64 v4; // x1
  il2cpp_array_size_t v5; // x20
  unsigned __int64 v6; // x26
  int i; // w28
  StandFigureCamera_c *v8; // x0
  int32_t v9; // w21
  StandFigureCamera_c *v10; // x0
  StandFigureCamera_c *v11; // x0
  UnityEngine_Object_o *v12; // x22
  StandFigureCamera_c *v13; // x0
  Il2CppObject *ComponentInChildren_object__51315876; // x23
  UIStandFigureRender_o *v15; // x21
  UIStandFigureRender_o *v16; // x22
  __int64 v17; // x0
  UnityEngine_Object_o *v18; // x24
  __int64 naturalAligment; // x10
  UnityEngine_RenderTexture_o *v20; // x23
  StandFigureCamera_c *v21; // x0
  __int64 v22; // x24
  const MethodInfo *v23; // [xsp+0h] [xbp-80h]
  Il2CppObject **v24; // [xsp+10h] [xbp-70h]

  if ( (byte_4C55F8F & 1) == 0 )
  {
    sub_1C3E564(&Method_BasicHelper_IsValidIndex_StandFigureCollect___);
    sub_1C3E564(&Method_UnityEngine_Component_GetComponentInChildren_UITexture___);
    sub_1C3E564(&Method_UnityEngine_Component_GetComponentsInChildren_UIStandFigureRender___);
    sub_1C3E564(&Method_System_Collections_Generic_List_StandFigureCollect__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&UnityEngine_RenderTexture_TypeInfo);
    sub_1C3E564(&StandFigureCamera_TypeInfo);
    byte_4C55F8F = 1;
  }
  v2 = StandFigureCamera_TypeInfo;
  if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
    v2 = StandFigureCamera_TypeInfo;
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v2->static_fields->collectList, 0) )
  {
    ComponentsInChildren_object__51318504 = (il2cpp_array_size_t)UnityEngine_Component__GetComponentsInChildren_object__51318504(
                                                                   (UnityEngine_Component_o *)this,
                                                                   (const MethodInfo_30F0EE8 *)Method_UnityEngine_Component_GetComponentsInChildren_UIStandFigureRender___);
    if ( !ComponentsInChildren_object__51318504 )
      goto LABEL_54;
    v5 = ComponentsInChildren_object__51318504;
    if ( *(int *)(ComponentsInChildren_object__51318504 + 24) >= 1 )
    {
      v24 = (Il2CppObject **)(ComponentsInChildren_object__51318504 + 32);
      v6 = 0;
      for ( i = -1; ; --i )
      {
        v8 = StandFigureCamera_TypeInfo;
        if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
          v8 = StandFigureCamera_TypeInfo;
        }
        ComponentsInChildren_object__51318504 = (il2cpp_array_size_t)v8->static_fields->collectList;
        if ( !ComponentsInChildren_object__51318504 )
          break;
        v9 = i + *(_DWORD *)(ComponentsInChildren_object__51318504 + 24);
        if ( BasicHelper__IsValidIndex_object_(
               (System_Collections_Generic_List_T__o *)ComponentsInChildren_object__51318504,
               v9,
               (const MethodInfo_30E837C *)Method_BasicHelper_IsValidIndex_StandFigureCollect___) )
        {
          v10 = StandFigureCamera_TypeInfo;
          if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
            v10 = StandFigureCamera_TypeInfo;
          }
          ComponentsInChildren_object__51318504 = (il2cpp_array_size_t)v10->static_fields->collectList;
          if ( !ComponentsInChildren_object__51318504 )
            break;
          if ( System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)ComponentsInChildren_object__51318504,
                 v9,
                 (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__) )
          {
            v11 = StandFigureCamera_TypeInfo;
            if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
              v11 = StandFigureCamera_TypeInfo;
            }
            ComponentsInChildren_object__51318504 = (il2cpp_array_size_t)v11->static_fields->collectList;
            if ( !ComponentsInChildren_object__51318504 )
              break;
            ComponentsInChildren_object__51318504 = (il2cpp_array_size_t)System_Collections_Generic_List_object___get_Item(
                                                                           (System_Collections_Generic_List_object__o *)ComponentsInChildren_object__51318504,
                                                                           v9,
                                                                           (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
            if ( !ComponentsInChildren_object__51318504 )
              break;
            v12 = *(UnityEngine_Object_o **)(ComponentsInChildren_object__51318504 + 24);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( !UnityEngine_Object__op_Equality(v12, 0, 0) )
            {
              v13 = StandFigureCamera_TypeInfo;
              if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
                v13 = StandFigureCamera_TypeInfo;
              }
              ComponentsInChildren_object__51318504 = (il2cpp_array_size_t)v13->static_fields->collectList;
              if ( !ComponentsInChildren_object__51318504 )
                break;
              ComponentsInChildren_object__51318504 = (il2cpp_array_size_t)System_Collections_Generic_List_object___get_Item(
                                                                             (System_Collections_Generic_List_object__o *)ComponentsInChildren_object__51318504,
                                                                             v9,
                                                                             (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
              if ( !ComponentsInChildren_object__51318504 )
                break;
              ComponentsInChildren_object__51318504 = *(_QWORD *)(ComponentsInChildren_object__51318504 + 24);
              if ( !ComponentsInChildren_object__51318504 )
                break;
              ComponentInChildren_object__51315876 = UnityEngine_Component__GetComponentInChildren_object__51315876(
                                                       (UnityEngine_Component_o *)ComponentsInChildren_object__51318504,
                                                       (const MethodInfo_30F04A4 *)Method_UnityEngine_Component_GetComponentInChildren_UITexture___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              ComponentsInChildren_object__51318504 = UnityEngine_Object__op_Equality(
                                                        (UnityEngine_Object_o *)ComponentInChildren_object__51315876,
                                                        0,
                                                        0);
              if ( (ComponentsInChildren_object__51318504 & 1) == 0 )
              {
                if ( v6 >= *(unsigned int *)(v5 + 24) )
                  sub_1C3E7C8(ComponentsInChildren_object__51318504, v4);
                if ( !ComponentInChildren_object__51315876 )
                  break;
                v15 = *(UIStandFigureRender_o **)(v5 + 32);
                v16 = (UIStandFigureRender_o *)v24[v6];
                v17 = ((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))ComponentInChildren_object__51315876->klass->vtable[26].methodPtr)(
                        ComponentInChildren_object__51315876,
                        ComponentInChildren_object__51315876->klass->vtable[26].method);
                v18 = (UnityEngine_Object_o *)v17;
                if ( v17
                  && (naturalAligment = UnityEngine_RenderTexture_TypeInfo->_2.naturalAligment,
                      *(unsigned __int8 *)(*(_QWORD *)v17 + 304LL) >= (unsigned int)naturalAligment) )
                {
                  if ( *(UnityEngine_RenderTexture_c **)(*(_QWORD *)(*(_QWORD *)v17 + 200LL) + 8 * naturalAligment - 8) == UnityEngine_RenderTexture_TypeInfo )
                    v20 = (UnityEngine_RenderTexture_o *)v17;
                  else
                    v20 = 0;
                }
                else
                {
                  v20 = 0;
                }
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v16, 0, 0) )
                {
                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  if ( !UnityEngine_Object__op_Equality(v18, 0, 0) )
                  {
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v20, 0, 0) )
                    {
                      v21 = StandFigureCamera_TypeInfo;
                      v22 = (unsigned int)(*(_DWORD *)(v5 + 24) - 1);
                      if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
                        v21 = StandFigureCamera_TypeInfo;
                      }
                      StandFigureCamera__RenderManuallyUsingCommandBuffer(
                        this,
                        v20,
                        v16,
                        v15,
                        v6 == 0,
                        v6 == v22,
                        v21->static_fields->renderTextureEffectBack,
                        v21->static_fields->renderTextureEffectFront,
                        v23);
                    }
                  }
                }
              }
            }
          }
        }
        if ( (__int64)++v6 >= *(int *)(v5 + 24) )
          return;
      }
LABEL_54:
      sub_1C3E7C0(ComponentsInChildren_object__51318504, v4);
    }
  }
}


bool StandFigureCamera__Request(
        StandFigureCamera_o *this,
        UnityEngine_RenderTexture_o *recycleTexture,
        const MethodInfo *method)
{
  int32_t state; // w23
  UnityEngine_Camera_o *Component_object; // x0
  __int64 v7; // x1
  struct UnityEngine_RenderTexture_o *targetTexture; // x0
  UnityEngine_RenderTexture_o **p_recycleTexture; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  UnityEngine_Object_o *v12; // x22
  Il2CppObject *v13; // x22
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3

  if ( (byte_4C55F89 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_Camera___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&StringLiteral_11319/*"RenderTexture"*/);
    sub_1C3E564(&StringLiteral_11246/*"RecycleRenderTexture"*/);
    byte_4C55F89 = 1;
  }
  state = this->fields.state;
  if ( !state )
  {
    this->fields.state = 1;
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_Camera___);
    if ( !Component_object )
      goto LABEL_24;
    targetTexture = UnityEngine_Camera__get_targetTexture(Component_object, 0);
    this->fields.recycleTexture = targetTexture;
    p_recycleTexture = &this->fields.recycleTexture;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.recycleTexture, (int32_t)targetTexture, v10, v11);
    v12 = (UnityEngine_Object_o *)this->fields.recycleTexture;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v12, 0, 0) )
      UnityEngine_RenderTexture__ReleaseTemporary(*p_recycleTexture, 0);
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !Component_object )
      goto LABEL_24;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 1, 0);
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_Camera___);
    if ( !Component_object )
      goto LABEL_24;
    UnityEngine_Camera__set_aspect(Component_object, 1.0, 0);
    v13 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)this,
            (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_Camera___);
    Component_object = (UnityEngine_Camera_o *)UnityEngine_RenderTexture__GetTemporary_71249868(2048, 2048, 0, 0, 0);
    if ( !v13 )
      goto LABEL_24;
    UnityEngine_Camera__set_targetTexture(
      (UnityEngine_Camera_o *)v13,
      (UnityEngine_RenderTexture_o *)Component_object,
      0);
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_Camera___);
    if ( !Component_object )
      goto LABEL_24;
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Camera__get_targetTexture(Component_object, 0);
    if ( !Component_object )
      goto LABEL_24;
    UnityEngine_Object__set_name((UnityEngine_Object_o *)Component_object, (System_String_o *)StringLiteral_11319/*"RenderTexture"*/, 0);
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_Camera___);
    if ( !Component_object )
      goto LABEL_24;
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Camera__get_targetTexture(Component_object, 0);
    if ( !Component_object )
      goto LABEL_24;
    UnityEngine_Texture__set_filterMode((UnityEngine_Texture_o *)Component_object, 1, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Object__op_Inequality(
                                                 (UnityEngine_Object_o *)recycleTexture,
                                                 0,
                                                 0);
    if ( ((unsigned __int8)Component_object & 1) == 0 )
    {
      *p_recycleTexture = 0;
      sub_1C3E508((CGThumbnailListItem_o *)&this->fields.recycleTexture, 0, v14, v15);
      return state == 0;
    }
    if ( !recycleTexture
      || (UnityEngine_Object__set_name(
            (UnityEngine_Object_o *)recycleTexture,
            (System_String_o *)StringLiteral_11246/*"RecycleRenderTexture"*/,
            0),
          *p_recycleTexture = recycleTexture,
          sub_1C3E508((CGThumbnailListItem_o *)&this->fields.recycleTexture, (int32_t)recycleTexture, v16, v17),
          (Component_object = (UnityEngine_Camera_o *)*p_recycleTexture) == 0) )
    {
LABEL_24:
      sub_1C3E7C0(Component_object, v7);
    }
    UnityEngine_Texture__set_filterMode((UnityEngine_Texture_o *)Component_object, 1, 0);
  }
  return state == 0;
}


bool StandFigureCamera__RequestTypePoint(
        StandFigureCamera_o *this,
        UnityEngine_RenderTexture_o *recycleTexture,
        const MethodInfo *method)
{
  int32_t state; // w23
  UnityEngine_Camera_o *Component_object; // x0
  __int64 v7; // x1
  struct UnityEngine_RenderTexture_o *targetTexture; // x0
  UnityEngine_RenderTexture_o **p_recycleTexture; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  UnityEngine_Object_o *v12; // x22
  Il2CppObject *v13; // x22
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3

  if ( (byte_4C55F8B & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_Camera___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&StringLiteral_11319/*"RenderTexture"*/);
    sub_1C3E564(&StringLiteral_11246/*"RecycleRenderTexture"*/);
    byte_4C55F8B = 1;
  }
  state = this->fields.state;
  if ( !state )
  {
    this->fields.state = 1;
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_Camera___);
    if ( !Component_object )
      goto LABEL_24;
    targetTexture = UnityEngine_Camera__get_targetTexture(Component_object, 0);
    this->fields.recycleTexture = targetTexture;
    p_recycleTexture = &this->fields.recycleTexture;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.recycleTexture, (int32_t)targetTexture, v10, v11);
    v12 = (UnityEngine_Object_o *)this->fields.recycleTexture;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v12, 0, 0) )
      UnityEngine_RenderTexture__ReleaseTemporary(*p_recycleTexture, 0);
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !Component_object )
      goto LABEL_24;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 1, 0);
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_Camera___);
    if ( !Component_object )
      goto LABEL_24;
    UnityEngine_Camera__set_aspect(Component_object, 1.0, 0);
    v13 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)this,
            (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_Camera___);
    Component_object = (UnityEngine_Camera_o *)UnityEngine_RenderTexture__GetTemporary_71249868(2048, 2048, 0, 0, 0);
    if ( !v13 )
      goto LABEL_24;
    UnityEngine_Camera__set_targetTexture(
      (UnityEngine_Camera_o *)v13,
      (UnityEngine_RenderTexture_o *)Component_object,
      0);
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_Camera___);
    if ( !Component_object )
      goto LABEL_24;
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Camera__get_targetTexture(Component_object, 0);
    if ( !Component_object )
      goto LABEL_24;
    UnityEngine_Object__set_name((UnityEngine_Object_o *)Component_object, (System_String_o *)StringLiteral_11319/*"RenderTexture"*/, 0);
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_Camera___);
    if ( !Component_object )
      goto LABEL_24;
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Camera__get_targetTexture(Component_object, 0);
    if ( !Component_object )
      goto LABEL_24;
    UnityEngine_Texture__set_filterMode((UnityEngine_Texture_o *)Component_object, 0, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Object__op_Inequality(
                                                 (UnityEngine_Object_o *)recycleTexture,
                                                 0,
                                                 0);
    if ( ((unsigned __int8)Component_object & 1) == 0 )
    {
      *p_recycleTexture = 0;
      sub_1C3E508((CGThumbnailListItem_o *)&this->fields.recycleTexture, 0, v14, v15);
      return state == 0;
    }
    if ( !recycleTexture
      || (UnityEngine_Object__set_name(
            (UnityEngine_Object_o *)recycleTexture,
            (System_String_o *)StringLiteral_11246/*"RecycleRenderTexture"*/,
            0),
          *p_recycleTexture = recycleTexture,
          sub_1C3E508((CGThumbnailListItem_o *)&this->fields.recycleTexture, (int32_t)recycleTexture, v16, v17),
          (Component_object = (UnityEngine_Camera_o *)*p_recycleTexture) == 0) )
    {
LABEL_24:
      sub_1C3E7C0(Component_object, v7);
    }
    UnityEngine_Texture__set_filterMode((UnityEngine_Texture_o *)Component_object, 0, 0);
  }
  return state == 0;
}


bool StandFigureCamera__RequestWithEffect(
        StandFigureCamera_o *this,
        UnityEngine_RenderTexture_o *recycleTexture,
        const MethodInfo *method)
{
  UnityEngine_Camera_o *Component_object; // x0
  __int64 v5; // x1
  UnityEngine_Camera_o *v6; // x20
  UnityEngine_Object_o *targetTexture; // x21
  UnityEngine_RenderTexture_o *v8; // x0
  UnityEngine_RenderTexture_o *Temporary_71249868; // x0

  if ( (byte_4C55F8A & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_Camera___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&StringLiteral_5389/*"Dummy"*/);
    byte_4C55F8A = 1;
  }
  this->fields.withEffect = 1;
  this->fields.entranceDuration = 1.0;
  Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_object_(
                                               (UnityEngine_Component_o *)this,
                                               (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_Camera___);
  if ( !Component_object )
    goto LABEL_12;
  v6 = Component_object;
  targetTexture = (UnityEngine_Object_o *)UnityEngine_Camera__get_targetTexture(Component_object, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(targetTexture, 0, 0) )
  {
    v8 = UnityEngine_Camera__get_targetTexture(v6, 0);
    UnityEngine_RenderTexture__ReleaseTemporary(v8, 0);
  }
  Temporary_71249868 = UnityEngine_RenderTexture__GetTemporary_71249868(2, 2, 0, 0, 0);
  UnityEngine_Camera__set_targetTexture(v6, Temporary_71249868, 0);
  Component_object = (UnityEngine_Camera_o *)UnityEngine_Camera__get_targetTexture(v6, 0);
  if ( !Component_object
    || (UnityEngine_Object__set_name((UnityEngine_Object_o *)Component_object, (System_String_o *)StringLiteral_5389/*"Dummy"*/, 0),
        (Component_object = (UnityEngine_Camera_o *)UnityEngine_Camera__get_targetTexture(v6, 0)) == 0)
    || (UnityEngine_Texture__set_filterMode((UnityEngine_Texture_o *)Component_object, 0, 0),
        this->fields.state = 1,
        (Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)this,
                                                      0)) == 0) )
  {
LABEL_12:
    sub_1C3E7C0(Component_object, v5);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 1, 0);
  return 1;
}


void StandFigureCamera__ResetCameraRenderState(StandFigureCamera_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1
  StandFigureCamera_c *v6; // x0
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x3
  struct StandFigureCamera_StaticFields *static_fields; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  UnityEngine_Camera_o *v12; // x19
  UnityEngine_Object_o *targetTexture; // x20
  UnityEngine_RenderTexture_o *v14; // x20
  StandFigureCamera_c *v15; // x0
  UnityEngine_Object_o *front; // x19
  StandFigureCamera_c *v17; // x0
  UnityEngine_Object_o *v18; // x19
  struct StandFigureCamera_StaticFields *v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  StandFigureCamera_c *v22; // x0
  UnityEngine_Object_o *back; // x19
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  StandFigureCamera_c *v26; // x0
  UnityEngine_Object_o *v27; // x19
  struct StandFigureCamera_StaticFields *v28; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  StandFigureCamera_c *v31; // x0
  struct StandFigureCamera_StaticFields *v32; // x9
  struct UnityEngine_Vector3_StaticFields *v33; // x8
  float z; // s1

  if ( (byte_4C55F94 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_Camera___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&StandFigureCamera_TypeInfo);
    byte_4C55F94 = 1;
  }
  this->fields.state = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  this->fields.withEffect = 0;
  this->fields.entranceDuration = 0.0;
  v6 = StandFigureCamera_TypeInfo;
  if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
    v6 = StandFigureCamera_TypeInfo;
  }
  StandFigureCamera__ReleaseRenderTextures(v6->static_fields->renderTextureEffects, v5);
  StandFigureCamera__ClearAndReleaseTemporary(
    &StandFigureCamera_TypeInfo->static_fields->renderTextureEffectBack,
    1,
    1,
    v7);
  StandFigureCamera__ClearAndReleaseTemporary(
    &StandFigureCamera_TypeInfo->static_fields->renderTextureEffectFront,
    1,
    1,
    v8);
  static_fields = StandFigureCamera_TypeInfo->static_fields;
  static_fields->renderTextureEffects = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&static_fields->renderTextureEffects, 0, v10, v11);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                             (UnityEngine_Component_o *)this,
                                             (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_Camera___);
  if ( !gameObject )
    goto LABEL_39;
  v12 = (UnityEngine_Camera_o *)gameObject;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  targetTexture = (UnityEngine_Object_o *)UnityEngine_Camera__get_targetTexture(v12, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(targetTexture, 0, 0) )
  {
    v14 = UnityEngine_Camera__get_targetTexture(v12, 0);
    UnityEngine_Camera__set_targetTexture(v12, 0, 0);
    UnityEngine_RenderTexture__ReleaseTemporary(v14, 0);
  }
  v15 = StandFigureCamera_TypeInfo;
  if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
    v15 = StandFigureCamera_TypeInfo;
  }
  front = (UnityEngine_Object_o *)v15->static_fields->front;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(front, 0, 0) )
  {
    v17 = StandFigureCamera_TypeInfo;
    if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
      v17 = StandFigureCamera_TypeInfo;
    }
    gameObject = (UnityEngine_GameObject_o *)v17->static_fields->front;
    if ( !gameObject )
      goto LABEL_39;
    v18 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71341564(v18, 0);
    v19 = StandFigureCamera_TypeInfo->static_fields;
    v19->front = 0;
    sub_1C3E508((CGThumbnailListItem_o *)&v19->front, 0, v20, v21);
  }
  v22 = StandFigureCamera_TypeInfo;
  if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
    v22 = StandFigureCamera_TypeInfo;
  }
  back = (UnityEngine_Object_o *)v22->static_fields->back;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(back, 0, 0) )
  {
    v26 = StandFigureCamera_TypeInfo;
    if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
      v26 = StandFigureCamera_TypeInfo;
    }
    gameObject = (UnityEngine_GameObject_o *)v26->static_fields->back;
    if ( gameObject )
    {
      v27 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71341564(v27, 0);
      v28 = StandFigureCamera_TypeInfo->static_fields;
      v28->back = 0;
      sub_1C3E508((CGThumbnailListItem_o *)&v28->back, 0, v29, v30);
      goto LABEL_34;
    }
LABEL_39:
    sub_1C3E7C0(gameObject, v4);
  }
LABEL_34:
  v31 = StandFigureCamera_TypeInfo;
  if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
    v31 = StandFigureCamera_TypeInfo;
  }
  v31->static_fields->collectList = 0;
  sub_1C3E508((CGThumbnailListItem_o *)StandFigureCamera_TypeInfo->static_fields, 0, v24, v25);
  if ( !byte_4C506A1 )
  {
    sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
    byte_4C506A1 = 1;
  }
  v32 = StandFigureCamera_TypeInfo->static_fields;
  v33 = UnityEngine_Vector3_TypeInfo->static_fields;
  z = v33->zeroVector.fields.z;
  *(_QWORD *)&v32->shinyOffset.fields.x = *(_QWORD *)&v33->zeroVector.fields.x;
  v32->shinyOffset.fields.z = z;
}


void StandFigureCamera__SetupEffects(
        System_Collections_Generic_List_StandFigureCollect__o *collectList,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  StandFigureCamera_c *v5; // x0
  System_Collections_Generic_List_T__o *v6; // x20
  struct StandFigureCamera_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x3

  if ( (byte_4C55F87 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_ValueTuple_bool__RenderTexture____ctor__);
    sub_1C3E564(&System_Collections_Generic_List_ValueTuple_bool__RenderTexture___TypeInfo);
    sub_1C3E564(&StandFigureCamera_TypeInfo);
    sub_1C3E564(&StringLiteral_11331/*"RenderTextureMain"*/);
    byte_4C55F87 = 1;
  }
  v5 = StandFigureCamera_TypeInfo;
  if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
    v5 = StandFigureCamera_TypeInfo;
  }
  v5->static_fields->collectList = collectList;
  sub_1C3E508((CGThumbnailListItem_o *)StandFigureCamera_TypeInfo->static_fields, (int32_t)collectList, v2, v3);
  v6 = (System_Collections_Generic_List_T__o *)sub_1C3E7B0(System_Collections_Generic_List_ValueTuple_bool__RenderTexture___TypeInfo);
  System_Collections_Generic_List_ValueTuple_bool__object_____ctor(
    v6,
    (const MethodInfo_3759BE4 *)Method_System_Collections_Generic_List_ValueTuple_bool__RenderTexture____ctor__);
  static_fields = StandFigureCamera_TypeInfo->static_fields;
  static_fields->renderTextureEffects = (struct System_Collections_Generic_List_ValueTuple_bool__RenderTexture___o *)v6;
  sub_1C3E508((CGThumbnailListItem_o *)&static_fields->renderTextureEffects, (int32_t)v6, v8, v9);
  StandFigureCamera__InitRenderTextures(
    collectList,
    StandFigureCamera_TypeInfo->static_fields->renderTextureEffects,
    (System_String_o *)StringLiteral_11331/*"RenderTextureMain"*/,
    v10);
}


void StandFigureCamera__SetupNguiTexture(
        StandFigureCamera_o *this,
        UITexture_o *parent,
        UITexture_o *uitex,
        UnityEngine_Material_o *mat,
        int32_t depthOffset,
        const MethodInfo *method)
{
  StandFigureCamera_o *v7; // x20
  StandFigureCamera_o *v10; // x23
  StandFigureCamera_o *v11; // x23
  UnityEngine_Vector3_o v12; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Rect_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( !uitex )
    goto LABEL_13;
  v7 = this;
  this = (StandFigureCamera_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)uitex, 0);
  if ( !parent )
    goto LABEL_13;
  v10 = this;
  this = (StandFigureCamera_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)parent, 0);
  if ( !this )
    goto LABEL_13;
  this = (StandFigureCamera_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)this, 0);
  if ( !this )
    goto LABEL_13;
  this = (StandFigureCamera_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)this, 0);
  if ( !this )
    goto LABEL_13;
  this = (StandFigureCamera_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)this, 0);
  if ( !v10 )
    goto LABEL_13;
  UnityEngine_Transform__SetParent((UnityEngine_Transform_o *)v10, (UnityEngine_Transform_o *)this, 0);
  this = (StandFigureCamera_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)uitex, 0);
  if ( !this )
    goto LABEL_13;
  v12.fields.z = 0.0;
  v12.fields.x = -300.0;
  v12.fields.y = 350.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v12, 0);
  this = (StandFigureCamera_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)uitex, 0);
  v11 = this;
  if ( !byte_4C506A6 )
  {
    this = (StandFigureCamera_o *)sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
    byte_4C506A6 = 1;
  }
  if ( !v11 )
    goto LABEL_13;
  UnityEngine_Transform__set_localScale(
    (UnityEngine_Transform_o *)v11,
    UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
    0);
  v13.fields.m_XMin = 0.0;
  v13.fields.m_YMin = -0.25;
  v13.fields.m_Width = 1.0;
  v13.fields.m_Height = 1.0;
  UITexture__set_uvRect(uitex, v13, 0);
  UIWidget__set_depth((UIWidget_o *)uitex, parent->fields.mDepth + depthOffset, 0);
  ((void (__fastcall *)(UITexture_o *, struct UnityEngine_Material_o *, const MethodInfo *))uitex->klass->vtable._25_set_material.methodPtr)(
    uitex,
    v7->fields.GRAND_FigureAdditiveBackMaterial,
    uitex->klass->vtable._25_set_material.method);
  this = (StandFigureCamera_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)uitex, 0);
  if ( !this )
LABEL_13:
    sub_1C3E7C0(this, parent);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
}


void StandFigureCamera__UpdateWithEffect(StandFigureCamera_o *this, const MethodInfo *method)
{
  System_Object_array *ComponentsInChildren_object; // x0
  __int64 v4; // x1
  float entranceDuration; // s9
  System_Object_array *v6; // x19
  float v7; // s8
  float v8; // s0
  int max_length; // w8
  __int64 v10; // x22
  UnityEngine_Component_o *transform; // x0
  UnityEngine_Object_o *Child; // x20
  Il2CppObject *Component_object; // x20
  UnityEngine_Object_o *sharedMaterial; // x21

  if ( (byte_4C55F93 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_MeshRenderer___);
    sub_1C3E564(&Method_UnityEngine_Component_GetComponentsInChildren_UIStandFigureRender____78207744);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&StringLiteral_16389/*"_TimeValue"*/);
    byte_4C55F93 = 1;
  }
  if ( this->fields.withEffect )
  {
    ComponentsInChildren_object = UnityEngine_Component__GetComponentsInChildren_object_(
                                    (UnityEngine_Component_o *)this,
                                    1,
                                    (const MethodInfo_30F0F64 *)Method_UnityEngine_Component_GetComponentsInChildren_UIStandFigureRender____78207744);
    if ( ComponentsInChildren_object )
    {
      entranceDuration = this->fields.entranceDuration;
      v6 = ComponentsInChildren_object;
      v7 = 0.0;
      if ( entranceDuration > 0.0 )
      {
        v8 = entranceDuration - UnityEngine_Time__get_deltaTime(0);
        this->fields.entranceDuration = v8;
        v7 = v8 * 0.15;
      }
      max_length = v6->max_length;
      if ( max_length >= 1 )
      {
        v10 = 0;
        do
        {
          if ( (unsigned int)v10 >= max_length )
            sub_1C3E7C8(ComponentsInChildren_object, v4);
          transform = (UnityEngine_Component_o *)v6->m_Items[v10];
          if ( !transform
            || (transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0)) == 0 )
          {
LABEL_26:
            sub_1C3E7C0(transform, v4);
          }
          Child = (UnityEngine_Object_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)transform, 0, 0);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Equality(Child, 0, 0);
          if ( ((unsigned __int8)transform & 1) != 0 )
            break;
          if ( !Child )
            goto LABEL_26;
          Component_object = UnityEngine_Component__GetComponent_object_(
                               (UnityEngine_Component_o *)Child,
                               (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_MeshRenderer___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Equality(
                                                   (UnityEngine_Object_o *)Component_object,
                                                   0,
                                                   0);
          if ( ((unsigned __int8)transform & 1) != 0 )
            break;
          if ( !Component_object )
            goto LABEL_26;
          sharedMaterial = (UnityEngine_Object_o *)UnityEngine_Renderer__get_sharedMaterial(
                                                     (UnityEngine_Renderer_o *)Component_object,
                                                     0);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality(sharedMaterial, 0, 0) )
            break;
          transform = (UnityEngine_Component_o *)UnityEngine_Renderer__get_sharedMaterial(
                                                   (UnityEngine_Renderer_o *)Component_object,
                                                   0);
          if ( !transform )
            goto LABEL_26;
          UnityEngine_Material__SetFloat(
            (UnityEngine_Material_o *)transform,
            (System_String_o *)StringLiteral_16389/*"_TimeValue"*/,
            v7,
            0);
          max_length = v6->max_length;
          ++v10;
        }
        while ( (int)v10 < max_length );
      }
    }
  }
}


UITexture_o *StandFigureCamera___InitializeEffectNguiTextures_g__FindHighest_36_2(
        StandFigureCamera___c__DisplayClass36_0_o *a1,
        const MethodInfo *method)
{
  StandFigureCamera___c__DisplayClass36_0_o *v2; // x19
  struct UITexture_array *uitextures; // x8
  UITexture_o *v4; // x20
  __int64 v5; // x23
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v7; // x24
  UnityEngine_Object_o *v8; // x21
  __int64 v9; // x9

  v2 = a1;
  if ( (byte_4C55F97 & 1) == 0 )
  {
    a1 = (StandFigureCamera___c__DisplayClass36_0_o *)sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C55F97 = 1;
  }
  uitextures = v2->fields.uitextures;
  if ( !v2->fields.uitextures )
LABEL_24:
    sub_1C3E7C0(a1, method);
  v4 = 0;
  v5 = 4;
  while ( 1 )
  {
    max_length_low = LODWORD(uitextures->max_length);
    v7 = v5 - 4;
    if ( v5 - 4 >= (int)max_length_low )
      return v4;
    if ( v7 >= max_length_low )
      goto LABEL_26;
    v8 = (UnityEngine_Object_o *)*((_QWORD *)&uitextures->obj.klass + v5);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    a1 = (StandFigureCamera___c__DisplayClass36_0_o *)UnityEngine_Object__op_Equality(v8, 0, 0);
    if ( ((unsigned __int8)a1 & 1) != 0 )
    {
      uitextures = v2->fields.uitextures;
    }
    else
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      a1 = (StandFigureCamera___c__DisplayClass36_0_o *)UnityEngine_Object__op_Equality(
                                                          (UnityEngine_Object_o *)v4,
                                                          0,
                                                          0);
      uitextures = v2->fields.uitextures;
      if ( ((unsigned __int8)a1 & 1) != 0 )
      {
        if ( !uitextures )
          goto LABEL_24;
LABEL_21:
        if ( v7 >= LODWORD(uitextures->max_length) )
          goto LABEL_26;
        v4 = (UITexture_o *)*((_QWORD *)&uitextures->obj.klass + v5);
        goto LABEL_23;
      }
      if ( !uitextures )
        goto LABEL_24;
      if ( v7 >= LODWORD(uitextures->max_length) )
LABEL_26:
        sub_1C3E7C8(a1, method);
      v9 = *((_QWORD *)&uitextures->obj.klass + v5);
      if ( !v9 || !v4 )
        goto LABEL_24;
      if ( *(_DWORD *)(v9 + 176) > v4->fields.mDepth )
        goto LABEL_21;
    }
LABEL_23:
    ++v5;
    if ( !uitextures )
      goto LABEL_24;
  }
}


UITexture_o *StandFigureCamera___InitializeEffectNguiTextures_g__FindLowest_36_1(
        StandFigureCamera___c__DisplayClass36_0_o *a1,
        const MethodInfo *method)
{
  StandFigureCamera___c__DisplayClass36_0_o *v2; // x19
  struct UITexture_array *uitextures; // x8
  UITexture_o *v4; // x20
  __int64 v5; // x23
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v7; // x24
  UnityEngine_Object_o *v8; // x21
  __int64 v9; // x9

  v2 = a1;
  if ( (byte_4C55F96 & 1) == 0 )
  {
    a1 = (StandFigureCamera___c__DisplayClass36_0_o *)sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C55F96 = 1;
  }
  uitextures = v2->fields.uitextures;
  if ( !v2->fields.uitextures )
LABEL_24:
    sub_1C3E7C0(a1, method);
  v4 = 0;
  v5 = 4;
  while ( 1 )
  {
    max_length_low = LODWORD(uitextures->max_length);
    v7 = v5 - 4;
    if ( v5 - 4 >= (int)max_length_low )
      return v4;
    if ( v7 >= max_length_low )
      goto LABEL_26;
    v8 = (UnityEngine_Object_o *)*((_QWORD *)&uitextures->obj.klass + v5);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    a1 = (StandFigureCamera___c__DisplayClass36_0_o *)UnityEngine_Object__op_Equality(v8, 0, 0);
    if ( ((unsigned __int8)a1 & 1) != 0 )
    {
      uitextures = v2->fields.uitextures;
    }
    else
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      a1 = (StandFigureCamera___c__DisplayClass36_0_o *)UnityEngine_Object__op_Equality(
                                                          (UnityEngine_Object_o *)v4,
                                                          0,
                                                          0);
      uitextures = v2->fields.uitextures;
      if ( ((unsigned __int8)a1 & 1) != 0 )
      {
        if ( !uitextures )
          goto LABEL_24;
LABEL_21:
        if ( v7 >= LODWORD(uitextures->max_length) )
          goto LABEL_26;
        v4 = (UITexture_o *)*((_QWORD *)&uitextures->obj.klass + v5);
        goto LABEL_23;
      }
      if ( !uitextures )
        goto LABEL_24;
      if ( v7 >= LODWORD(uitextures->max_length) )
LABEL_26:
        sub_1C3E7C8(a1, method);
      v9 = *((_QWORD *)&uitextures->obj.klass + v5);
      if ( !v9 || !v4 )
        goto LABEL_24;
      if ( *(_DWORD *)(v9 + 176) < v4->fields.mDepth )
        goto LABEL_21;
    }
LABEL_23:
    ++v5;
    if ( !uitextures )
      goto LABEL_24;
  }
}


void StandFigureCamera___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C55F98 & 1) == 0 )
  {
    sub_1C3E564(&StandFigureCamera___c_TypeInfo);
    byte_4C55F98 = 1;
  }
  v1 = (Il2CppObject *)sub_1C3E7B0(StandFigureCamera___c_TypeInfo);
  System_Object___ctor(v1, 0);
  StandFigureCamera___c_TypeInfo->static_fields->__9 = (struct StandFigureCamera___c_o *)v1;
  sub_1C3E508((CGThumbnailListItem_o *)StandFigureCamera___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void StandFigureCamera___c___ctor(StandFigureCamera___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool StandFigureCamera___c___InitializeEffectNguiTextures_b__36_0(
        StandFigureCamera___c_o *this,
        System_ValueTuple_bool__RenderTexture__o x,
        const MethodInfo *method)
{
  return x.fields.Item1;
}