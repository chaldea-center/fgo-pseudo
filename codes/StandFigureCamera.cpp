void StandFigureCamera___cctor(const MethodInfo *method)
{
  if ( (byte_4D2FC2F & 1) == 0 )
  {
    sub_1C93AD4(&StandFigureCamera_TypeInfo);
    byte_4D2FC2F = 1;
  }
  StandFigureCamera_TypeInfo->static_fields->figureRenderGradientColor = (struct UnityEngine_Color_o)xmmword_D01BC0;
}


void StandFigureCamera___ctor(StandFigureCamera_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.GRAND_GlowIterations = 0x3F80000000000002LL;
  *(_QWORD *)&this->fields.GRAND_GlowIntensity = 0x3F8000003F99999ALL;
  this->fields.GRAND_GlowColor = (struct UnityEngine_Color_o)xmmword_D01F30;
  this->fields.GRAND_HighTextureGradientOffset = 0.875;
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
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  UnityEngine_Rendering_RenderTargetIdentifier_o v18; // [xsp+0h] [xbp-90h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v19; // [xsp+30h] [xbp-60h] BYREF
  UnityEngine_Color_o v20; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D2FC1E & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Rendering_CommandBuffer_TypeInfo);
    sub_1C93AD4(&UnityEngine_Graphics_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2FC1E = 1;
  }
  v7 = (UnityEngine_Object_o *)*renderTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v7, 0, 0) )
  {
    v8 = (UnityEngine_Rendering_CommandBuffer_o *)sub_1C93D20(UnityEngine_Rendering_CommandBuffer_TypeInfo);
    UnityEngine_Rendering_CommandBuffer___ctor(v8, 0);
    v9 = (UnityEngine_Texture_o *)*renderTexture;
    memset(&v19, 0, sizeof(v19));
    UnityEngine_Rendering_RenderTargetIdentifier___ctor_72186100(&v19, v9, 0);
    if ( !v8 )
      sub_1C93D2C(v10, v11);
    v18 = v19;
    UnityEngine_Rendering_CommandBuffer__SetRenderTarget(v8, &v18, 0);
    v20.fields.r = 0.0;
    v20.fields.g = 0.0;
    v20.fields.b = 0.0;
    v20.fields.a = 0.0;
    UnityEngine_Rendering_CommandBuffer__ClearRenderTarget_72190740(v8, clearDepth, clearColor, v20, 0);
    if ( !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
    UnityEngine_Graphics__ExecuteCommandBuffer(v8, 0);
    UnityEngine_Rendering_CommandBuffer__Release(v8, 0);
    UnityEngine_RenderTexture__ReleaseTemporary(*renderTexture, 0);
    *renderTexture = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)renderTexture, 0, v12, v13, v14, v15, v16, v17);
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
  Il2CppObject *v14; // x0
  __int64 v15; // x1
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4D2FC2A & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_ParticleSystem___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_Renderer___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    this = (StandFigureCamera_o *)sub_1C93AD4(&UnityEngine_ParticleSystemRenderer_TypeInfo);
    byte_4D2FC2A = 1;
  }
  m_ParticleSystem = 0;
  if ( !gameObject )
    goto LABEL_29;
  if ( !UnityEngine_GameObject__get_activeInHierarchy(gameObject, 0) )
    return;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
    return;
  if ( !Component_object )
  {
    v14 = UnityEngine_GameObject__GetComponent_object_(
            gameObject,
            (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_ParticleSystem___);
    sub_1C93D2C(v14, v15);
  }
  klass = Component_object->klass;
  v8 = UnityEngine_ParticleSystemRenderer_TypeInfo;
  v9 = UnityEngine_GameObject__GetComponent_object_(
         gameObject,
         (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_ParticleSystem___);
  this = (StandFigureCamera_o *)UnityEngine_Renderer__get_sharedMaterials((UnityEngine_Renderer_o *)Component_object, 0);
  if ( !this )
LABEL_29:
    sub_1C93D2C(this, cmd);
  m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
  v11 = this;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v12 = 0;
    do
    {
      if ( v12 >= (unsigned int)m_CancellationTokenSource )
        sub_1C93D34(this);
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
        this = (StandFigureCamera_o *)UnityEngine_ParticleSystem_TrailModule__get_enabled(
                                        (UnityEngine_ParticleSystem_TrailModule_o)&m_ParticleSystem,
                                        0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !cmd )
            goto LABEL_29;
          UnityEngine_Rendering_CommandBuffer__DrawRenderer_72192932(
            cmd,
            (UnityEngine_Renderer_o *)Component_object,
            (UnityEngine_Material_o *)v13,
            0,
            0);
          UnityEngine_Rendering_CommandBuffer__DrawRenderer_72192932(
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
          UnityEngine_Rendering_CommandBuffer__DrawRenderer_72192940(
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
  if ( (byte_4D2FC2B & 1) == 0 )
  {
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    sub_1C93AD4(&System_Collections_IEnumerator_TypeInfo);
    this = (StandFigureCamera_o *)sub_1C93AD4(&UnityEngine_Transform_TypeInfo);
    byte_4D2FC2B = 1;
  }
  StandFigureCamera__DrawGameObjectWithCommandBuffer(this, cmd, gameObject, method);
  if ( !gameObject || (transform = UnityEngine_GameObject__get_transform(gameObject, 0)) == 0 )
    sub_1C93D2C(transform, v8);
  Enumerator = UnityEngine_Transform__GetEnumerator(transform, 0);
  if ( !Enumerator )
    sub_1C93D2C(0, v9);
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
      v14 = sub_1C69E5C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
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
      v18 = sub_1C69E5C(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
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
      sub_1C940C8(v19);
LABEL_33:
      sub_1C93D2C(v19, v20);
    }
    v22 = UnityEngine_Component__get_gameObject(v19, 0);
    StandFigureCamera__DrawGameObjectWithCommandBufferRecursive(v6, cmd, v22, v23);
  }
  v24 = sub_1C93C10(Enumerator, System_IDisposable_TypeInfo);
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
      v29 = sub_1C69E5C(v24, System_IDisposable_TypeInfo, 0);
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
  GrandQuestFolderBoardItem_o *m_Items; // x21
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  GrandQuestFolderBoardItem_c *v15; // x22
  __int64 v17; // x0

  if ( (byte_4D2FC27 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponentInChildren_UITexture____79080432);
    sub_1C93AD4(&Method_UnityEngine_Object_FindObjectsOfType_UIStandFigureR___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&UITexture___TypeInfo);
    byte_4D2FC27 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  ObjectsOfType_object = UnityEngine_Object__FindObjectsOfType_object_((const MethodInfo_3230D10 *)Method_UnityEngine_Object_FindObjectsOfType_UIStandFigureR___);
  if ( !ObjectsOfType_object )
LABEL_16:
    sub_1C93D2C(ObjectsOfType_object, v3);
  v4 = ObjectsOfType_object;
  ObjectsOfType_object = (System_Object_array *)sub_1C93B7C(
                                                  UITexture___TypeInfo,
                                                  LODWORD(ObjectsOfType_object->max_length));
  max_length = v4->max_length;
  v6 = (UITexture_array *)ObjectsOfType_object;
  if ( max_length >= 1 )
  {
    v7 = 0;
    m_Items = (GrandQuestFolderBoardItem_o *)ObjectsOfType_object->m_Items;
    while ( (unsigned int)v7 < max_length )
    {
      ObjectsOfType_object = (System_Object_array *)v4->m_Items[v7];
      if ( !ObjectsOfType_object )
        goto LABEL_16;
      ObjectsOfType_object = (System_Object_array *)UnityEngine_Component__GetComponentInChildren_object_(
                                                      (UnityEngine_Component_o *)ObjectsOfType_object,
                                                      1,
                                                      (const MethodInfo_319B690 *)Method_UnityEngine_Component_GetComponentInChildren_UITexture____79080432);
      if ( !v6 )
        goto LABEL_16;
      v15 = (GrandQuestFolderBoardItem_c *)ObjectsOfType_object;
      if ( ObjectsOfType_object )
      {
        ObjectsOfType_object = (System_Object_array *)sub_1C93C10(ObjectsOfType_object, v6->obj.klass->_1.element_class);
        if ( !ObjectsOfType_object )
        {
          v17 = sub_1C93D50(0);
          sub_1C93BFC(v17, 0);
        }
      }
      if ( (unsigned int)v7 >= LODWORD(v6->max_length) )
        break;
      m_Items->klass = v15;
      sub_1C93A78(m_Items, (int32_t)v15, v9, v10, v11, v12, v13, v14);
      max_length = v4->max_length;
      ++v7;
      m_Items = (GrandQuestFolderBoardItem_o *)((char *)m_Items + 8);
      if ( (int)v7 >= max_length )
        return v6;
    }
    sub_1C93D34(ObjectsOfType_object);
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
  UnityEngine_Object_o *Temporary_72027580; // x0
  __int64 v8; // x1
  UnityEngine_Object_o *v9; // x21
  Il2CppObject *v10; // x2
  System_String_o *v11; // x0
  const MethodInfo_3BD5A20 *v12; // x4
  __int64 v13; // x0
  __int64 v14; // x1
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  struct System_ValueTuple_bool__RenderTexture__array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  GrandQuestFolderBoardItem_o *v23; // x0
  int32_t InstanceID; // [xsp+4h] [xbp-8Ch] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+20h] [xbp-70h] BYREF
  System_ValueTuple_bool__object__o v27; // 0:x0.16
  System_ValueTuple_bool__object__o v28; // 0:x1.16

  v6 = collectList;
  if ( (byte_4D2FC1F & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ValueTuple_bool__RenderTexture___Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    sub_1C93AD4(&Method_System_ValueTuple_bool__RenderTexture___ctor__);
    collectList = (System_Collections_Generic_List_StandFigureCollect__o *)sub_1C93AD4(&StringLiteral_25433/*"{0} ({1})"*/);
    byte_4D2FC1F = 1;
  }
  memset(&v26, 0, sizeof(v26));
  if ( !v6 )
    sub_1C93D2C(collectList, renderTextureEffects);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v25,
    (System_Collections_Generic_List_object__o *)v6,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  v26 = v25;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v26,
            (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__) )
  {
    Temporary_72027580 = (UnityEngine_Object_o *)UnityEngine_RenderTexture__GetTemporary_72027580(2048, 2048, 0, 0, 0);
    v9 = Temporary_72027580;
    if ( !Temporary_72027580 )
      sub_1C93D2C(0, v8);
    InstanceID = UnityEngine_Object__GetInstanceID(Temporary_72027580, 0);
    v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &InstanceID);
    v11 = System_String__Format_64467032((System_String_o *)StringLiteral_25433/*"{0} ({1})"*/, (Il2CppObject *)textureName, v10, 0);
    UnityEngine_Object__set_name(v9, v11, 0);
    UnityEngine_Texture__set_filterMode((UnityEngine_Texture_o *)v9, 1, 0);
    *(_OWORD *)&v25.fields._list = 0u;
    *(_QWORD *)&v27.fields.Item1 = &v25;
    v27.fields.Item2 = 0;
    System_ValueTuple_bool__object____ctor(
      v27,
      (bool)v9,
      (Il2CppObject *)Method_System_ValueTuple_bool__RenderTexture___ctor__,
      v12);
    if ( !renderTextureEffects )
      sub_1C93D2C(v13, v14);
    v28 = *(System_ValueTuple_bool__object__o *)&v25.fields._list;
    items = renderTextureEffects->fields._items;
    v21 = Method_System_Collections_Generic_List_ValueTuple_bool__RenderTexture___Add__;
    ++renderTextureEffects->fields._version;
    if ( !items )
      sub_1C93D2C(v13, *(_QWORD *)&v28.fields.Item1);
    size = renderTextureEffects->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_ValueTuple_bool__object____AddWithResize(
        (System_Collections_Generic_List_T__o *)renderTextureEffects,
        v28,
        *(const MethodInfo_381C170 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
    }
    else
    {
      v23 = (GrandQuestFolderBoardItem_o *)(&items->obj + size);
      renderTextureEffects->fields._size = size + 1;
      v23->fields.sortValue0B = (int64_t)v28.fields.Item2;
      v23 = (GrandQuestFolderBoardItem_o *)((char *)v23 + 40);
      v23[-1].fields._ClosedMessage_k__BackingField = *(struct System_String_o **)&v28.fields.Item1;
      sub_1C93A78(v23, 0, (int32_t)v28.fields.Item2, v15, v16, v17, v18, v19);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v26,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
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
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  Il2CppObject *Item2; // x1
  System_Collections_Generic_List_T__o *Instance; // x0
  __int64 v17; // x8
  int v18; // w8
  int i; // w25
  System_ValueTuple_bool__object__o Item; // kr00_16
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  StandFigureCamera_c *v27; // x0
  UnityEngine_Object_o *front; // x23
  const MethodInfo *v29; // x1
  Il2CppObject *Highest_36_2; // x23
  Il2CppObject *v31; // x0
  struct StandFigureCamera_StaticFields *v32; // x8
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  UnityEngine_Material_o *v39; // x3
  const MethodInfo *v40; // x5
  const MethodInfo *v41; // x1
  UnityEngine_RenderTexture_o *RenderTextureForEffect; // x0
  struct StandFigureCamera_StaticFields *v43; // x8
  int32_t v44; // w2
  int32_t v45; // w3
  System_String_o *v46; // x4
  int32_t v47; // w5
  int64_t v48; // x6
  System_String_o *v49; // x7
  struct StandFigureCamera_StaticFields *v50; // x8
  StandFigureCamera_c *v51; // x0
  UnityEngine_Object_o *back; // x23
  const MethodInfo *v53; // x2
  Il2CppObject *Lowest_36_1; // x23
  Il2CppObject *v55; // x0
  struct StandFigureCamera_StaticFields *v56; // x8
  int32_t v57; // w2
  int32_t v58; // w3
  System_String_o *v59; // x4
  int32_t v60; // w5
  int64_t v61; // x6
  System_String_o *v62; // x7
  UnityEngine_Material_o *v63; // x3
  const MethodInfo *v64; // x5
  const MethodInfo *v65; // x1
  UnityEngine_RenderTexture_o *v66; // x0
  struct StandFigureCamera_StaticFields *v67; // x8
  int32_t v68; // w2
  int32_t v69; // w3
  System_String_o *v70; // x4
  int32_t v71; // w5
  int64_t v72; // x6
  System_String_o *v73; // x7
  struct StandFigureCamera_StaticFields *v74; // x8
  StandFigureCamera_c *v75; // x0
  StandFigureCamera___c__DisplayClass36_0_o v76; // [xsp+8h] [xbp-68h] BYREF
  System_ValueTuple_bool__object__o v77; // 0:x2.16

  if ( (byte_4D2FC28 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_All_ValueTuple_bool__RenderTexture____);
    sub_1C93AD4(&System_Func_ValueTuple_bool__RenderTexture___bool__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ValueTuple_bool__RenderTexture___get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ValueTuple_bool__RenderTexture___get_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ValueTuple_bool__RenderTexture___set_Item__);
    sub_1C93AD4(&Method_UnityEngine_Object_Instantiate_UITexture___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    sub_1C93AD4(&StandFigureCamera_TypeInfo);
    sub_1C93AD4(&Method_StandFigureCamera___c__InitializeEffectNguiTextures_b__36_0__);
    sub_1C93AD4(&StandFigureCamera___c_TypeInfo);
    sub_1C93AD4(&StringLiteral_11404/*"RenderTextureBack"*/);
    sub_1C93AD4(&StringLiteral_11414/*"RenderTextureFront"*/);
    byte_4D2FC28 = 1;
  }
  v3 = StandFigureCamera_TypeInfo;
  v76.fields.uitextures = 0;
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
      _9__36_0 = (System_Func_T__TResult__o *)sub_1C93D20(System_Func_ValueTuple_bool__RenderTexture___bool__TypeInfo);
      System_Func_ValueTuple_bool__object___bool____ctor(
        _9__36_0,
        v7,
        Method_StandFigureCamera___c__InitializeEffectNguiTextures_b__36_0__,
        0);
      static_fields = StandFigureCamera___c_TypeInfo->static_fields;
      static_fields->__9__36_0 = (struct System_Func_ValueTuple_bool__RenderTexture___bool__o *)_9__36_0;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__36_0,
        (int32_t)_9__36_0,
        v9,
        v10,
        v11,
        v12,
        v13,
        v14);
    }
    if ( !System_Linq_Enumerable__All_ValueTuple_bool__object__(
            renderTextureEffects,
            (System_Func_TSource__bool__o *)_9__36_0,
            (const MethodInfo_31AE38C *)Method_System_Linq_Enumerable_All_ValueTuple_bool__RenderTexture____) )
    {
      Instance = (System_Collections_Generic_List_T__o *)StandFigureCamera_TypeInfo;
      if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
        Instance = (System_Collections_Generic_List_T__o *)StandFigureCamera_TypeInfo;
      }
      v17 = *(_QWORD *)(*(_QWORD *)&Instance[4].fields._size + 8LL);
      if ( !v17 )
        goto LABEL_54;
      v18 = *(_DWORD *)(v17 + 24);
      if ( v18 - 1 >= 0 )
      {
        for ( i = v18 - 2; ; --i )
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
                   (const MethodInfo_381BE54 *)Method_System_Collections_Generic_List_ValueTuple_bool__RenderTexture___get_Item__);
          Item2 = Item.fields.Item2;
          if ( !Item.fields.Item1 )
          {
            Instance = (System_Collections_Generic_List_T__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
            if ( !Instance )
              break;
            if ( Instance[2].monitor )
            {
              v76.fields.uitextures = StandFigureCamera__GetStandFigureUITextures(
                                        (StandFigureCamera_o *)Instance,
                                        (const MethodInfo *)Item2);
              sub_1C93A78(
                (GrandQuestFolderBoardItem_o *)&v76,
                (int32_t)v76.fields.uitextures,
                v21,
                v22,
                v23,
                v24,
                v25,
                v26);
              v27 = StandFigureCamera_TypeInfo;
              if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
                v27 = StandFigureCamera_TypeInfo;
              }
              front = (UnityEngine_Object_o *)v27->static_fields->front;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Equality(front, 0, 0) )
              {
                if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
                Highest_36_2 = (Il2CppObject *)StandFigureCamera___InitializeEffectNguiTextures_g__FindHighest_36_2(
                                                 &v76,
                                                 v29);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                v31 = UnityEngine_Object__Instantiate_object_(
                        Highest_36_2,
                        (const MethodInfo_3230E6C *)Method_UnityEngine_Object_Instantiate_UITexture___);
                v32 = StandFigureCamera_TypeInfo->static_fields;
                v32->front = (struct UITexture_o *)v31;
                sub_1C93A78((GrandQuestFolderBoardItem_o *)&v32->front, (int32_t)v31, v33, v34, v35, v36, v37, v38);
                StandFigureCamera__SetupNguiTexture(
                  this,
                  (UITexture_o *)Highest_36_2,
                  StandFigureCamera_TypeInfo->static_fields->front,
                  v39,
                  1,
                  v40);
                RenderTextureForEffect = StandFigureCamera__MakeRenderTextureForEffect(
                                           (System_String_o *)StringLiteral_11414/*"RenderTextureFront"*/,
                                           v41);
                v43 = StandFigureCamera_TypeInfo->static_fields;
                v43->renderTextureEffectFront = RenderTextureForEffect;
                sub_1C93A78(
                  (GrandQuestFolderBoardItem_o *)&v43->renderTextureEffectFront,
                  (int32_t)RenderTextureForEffect,
                  v44,
                  v45,
                  v46,
                  v47,
                  v48,
                  v49);
                v50 = StandFigureCamera_TypeInfo->static_fields;
                Instance = (System_Collections_Generic_List_T__o *)v50->front;
                if ( !Instance )
                  break;
                ((void (__fastcall *)(System_Collections_Generic_List_T__o *, struct UnityEngine_RenderTexture_o *, const MethodInfo *))Instance->klass->vtable._27_System_Collections_IList_Remove.methodPtr)(
                  Instance,
                  v50->renderTextureEffectFront,
                  Instance->klass->vtable._27_System_Collections_IList_Remove.method);
              }
              v51 = StandFigureCamera_TypeInfo;
              if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
                v51 = StandFigureCamera_TypeInfo;
              }
              back = (UnityEngine_Object_o *)v51->static_fields->back;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Equality(back, 0, 0) )
              {
                if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
                Lowest_36_1 = (Il2CppObject *)StandFigureCamera___InitializeEffectNguiTextures_g__FindLowest_36_1(
                                                &v76,
                                                (const MethodInfo *)Item2);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                v55 = UnityEngine_Object__Instantiate_object_(
                        Lowest_36_1,
                        (const MethodInfo_3230E6C *)Method_UnityEngine_Object_Instantiate_UITexture___);
                v56 = StandFigureCamera_TypeInfo->static_fields;
                v56->back = (struct UITexture_o *)v55;
                sub_1C93A78((GrandQuestFolderBoardItem_o *)&v56->back, (int32_t)v55, v57, v58, v59, v60, v61, v62);
                StandFigureCamera__SetupNguiTexture(
                  this,
                  (UITexture_o *)Lowest_36_1,
                  StandFigureCamera_TypeInfo->static_fields->back,
                  v63,
                  -1,
                  v64);
                v66 = StandFigureCamera__MakeRenderTextureForEffect((System_String_o *)StringLiteral_11404/*"RenderTextureBack"*/, v65);
                v67 = StandFigureCamera_TypeInfo->static_fields;
                v67->renderTextureEffectBack = v66;
                sub_1C93A78(
                  (GrandQuestFolderBoardItem_o *)&v67->renderTextureEffectBack,
                  (int32_t)v66,
                  v68,
                  v69,
                  v70,
                  v71,
                  v72,
                  v73);
                v74 = StandFigureCamera_TypeInfo->static_fields;
                Instance = (System_Collections_Generic_List_T__o *)v74->back;
                if ( !Instance )
                  break;
                ((void (__fastcall *)(System_Collections_Generic_List_T__o *, struct UnityEngine_RenderTexture_o *, const MethodInfo *))Instance->klass->vtable._27_System_Collections_IList_Remove.methodPtr)(
                  Instance,
                  v74->renderTextureEffectBack,
                  Instance->klass->vtable._27_System_Collections_IList_Remove.method);
              }
              Instance = (System_Collections_Generic_List_T__o *)this->fields.manager;
              if ( !Instance )
                break;
              StandFigureManager__OnRenderEndWithEffect(
                (StandFigureManager_o *)Instance,
                (UnityEngine_RenderTexture_o *)Item.fields.Item2,
                v53);
              v75 = StandFigureCamera_TypeInfo;
              if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
                v75 = StandFigureCamera_TypeInfo;
              }
              Instance = (System_Collections_Generic_List_T__o *)v75->static_fields->renderTextureEffects;
              if ( !Instance )
                break;
              *(_QWORD *)&v77.fields.Item1 = *(_QWORD *)&Item.fields.Item1 & 0xFFFFFFFFFFFFFF00LL | 1;
              v77.fields.Item2 = Item.fields.Item2;
              System_Collections_Generic_List_ValueTuple_bool__object____set_Item(
                Instance,
                i + 1,
                v77,
                (const MethodInfo_381BEAC *)Method_System_Collections_Generic_List_ValueTuple_bool__RenderTexture___set_Item__);
            }
          }
          if ( i < 0 )
            return;
          Instance = (System_Collections_Generic_List_T__o *)StandFigureCamera_TypeInfo;
        }
LABEL_54:
        sub_1C93D2C(Instance, Item2);
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
  UnityEngine_Object_o *Temporary_72027580; // x0
  __int64 v4; // x1
  UnityEngine_Object_o *v5; // x20
  Il2CppObject *v6; // x0
  System_String_o *v7; // x0
  int32_t InstanceID; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4D2FC22 & 1) == 0 )
  {
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&StringLiteral_25433/*"{0} ({1})"*/);
    byte_4D2FC22 = 1;
  }
  Temporary_72027580 = (UnityEngine_Object_o *)UnityEngine_RenderTexture__GetTemporary_72027580(2048, 2048, 0, 0, 0);
  if ( !Temporary_72027580 )
    sub_1C93D2C(0, v4);
  v5 = Temporary_72027580;
  InstanceID = UnityEngine_Object__GetInstanceID(Temporary_72027580, 0);
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &InstanceID);
  v7 = System_String__Format_64467032((System_String_o *)StringLiteral_25433/*"{0} ({1})"*/, (Il2CppObject *)nameToSet, v6, 0);
  UnityEngine_Object__set_name(v5, v7, 0);
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
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  const MethodInfo *v17; // x2

  if ( (byte_4D2FC26 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_Camera___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_13776/*"TempStandFigureRenderTexture"*/);
    sub_1C93AD4(&StringLiteral_11403/*"RenderTexture"*/);
    byte_4D2FC26 = 1;
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
                                                 (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_Camera___);
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
                                                       (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_Camera___);
          v10 = Component_object;
          if ( v9 )
          {
            if ( !Component_object )
              goto LABEL_22;
            UnityEngine_Camera__set_targetTexture(Component_object, *p_recycleTexture, 0);
            *p_recycleTexture = 0;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.recycleTexture, 0, v11, v12, v13, v14, v15, v16);
          }
          else
          {
            Component_object = (UnityEngine_Camera_o *)UnityEngine_RenderTexture__GetTemporary_72027580(
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
                                                       (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_Camera___);
          if ( Component_object )
          {
            Component_object = (UnityEngine_Camera_o *)UnityEngine_Camera__get_targetTexture(Component_object, 0);
            if ( Component_object )
            {
              UnityEngine_Object__set_name(
                (UnityEngine_Object_o *)Component_object,
                (System_String_o *)StringLiteral_11403/*"RenderTexture"*/,
                0);
              UnityEngine_Object__set_name(v6, (System_String_o *)StringLiteral_13776/*"TempStandFigureRenderTexture"*/, 0);
              Component_object = (UnityEngine_Camera_o *)this->fields.manager;
              if ( Component_object )
              {
                StandFigureManager__OnRenderEnd(
                  (StandFigureManager_o *)Component_object,
                  (UnityEngine_RenderTexture_o *)v6,
                  v17);
                this->fields.state = 0;
                return;
              }
            }
          }
        }
      }
    }
LABEL_22:
    sub_1C93D2C(Component_object, v5);
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
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D2FC1D & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2FC1D = 1;
  }
  v3 = (UnityEngine_Object_o *)*renderTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v3, 0, 0) )
  {
    UnityEngine_RenderTexture__ReleaseTemporary(*renderTexture, 0);
    *renderTexture = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)renderTexture, 0, v4, v5, v6, v7, v8, v9);
  }
}


void StandFigureCamera__ReleaseRenderTextures(
        System_Collections_Generic_List_ValueTuple_bool__RenderTexture___o *renderTextureEffects,
        const MethodInfo *method)
{
  __int128 v3; // [xsp+0h] [xbp-40h] BYREF
  __int128 v4; // [xsp+10h] [xbp-30h]

  if ( (byte_4D2FC1C & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_bool__RenderTexture___Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_bool__RenderTexture___MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_bool__RenderTexture___get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ValueTuple_bool__RenderTexture___GetEnumerator__);
    byte_4D2FC1C = 1;
  }
  v3 = 0u;
  v4 = 0u;
  if ( renderTextureEffects )
  {
    System_Collections_Generic_List_ValueTuple_bool__object____GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v3,
      (System_Collections_Generic_List_T__o *)renderTextureEffects,
      (const MethodInfo_381CCC8 *)Method_System_Collections_Generic_List_ValueTuple_bool__RenderTexture___GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_ValueTuple_bool__object____MoveNext(
              (System_Collections_Generic_List_Enumerator_T__o *)&v3,
              (const MethodInfo_35F0468 *)Method_System_Collections_Generic_List_Enumerator_ValueTuple_bool__RenderTexture___MoveNext__) )
      UnityEngine_RenderTexture__ReleaseTemporary(*((UnityEngine_RenderTexture_o **)&v4 + 1), 0);
    System_Collections_Generic_List_Enumerator_ValueTuple_bool__object____Dispose(
      (System_Collections_Generic_List_Enumerator_T__o *)&v3,
      (const MethodInfo_35F0464 *)Method_System_Collections_Generic_List_Enumerator_ValueTuple_bool__RenderTexture___Dispose__);
  }
}


void StandFigureCamera__ReleaseRenderTexturesForEffects(const MethodInfo *method)
{
  const MethodInfo *v1; // x1
  StandFigureCamera_c *v2; // x0

  if ( (byte_4D2FC20 & 1) == 0 )
  {
    sub_1C93AD4(&StandFigureCamera_TypeInfo);
    byte_4D2FC20 = 1;
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
  UnityEngine_Rendering_CommandBuffer_o *v14; // x19
  __int64 v15; // x0
  __int64 v16; // x1
  __int64 v17; // x0
  __int64 v18; // x1
  UnityEngine_Transform_o *transform; // x0
  __int64 v20; // x1
  UnityEngine_Component_o *Child; // x0
  __int64 v22; // x1
  Il2CppObject *Component_object; // x0
  __int64 v24; // x1
  UnityEngine_Component_o *v25; // x27
  UnityEngine_Transform_o *v26; // x0
  __int64 v27; // x1
  UnityEngine_Component_o *v28; // x0
  __int64 v29; // x1
  Il2CppObject *v30; // x0
  __int64 v31; // x1
  UnityEngine_Component_o *v32; // x24
  UnityEngine_Transform_o *v33; // x0
  __int64 v34; // x1
  UnityEngine_Transform_o *v35; // x0
  __int64 v36; // x1
  UnityEngine_Component_o *v37; // x29
  UnityEngine_Transform_o *v38; // x0
  __int64 v39; // x1
  UnityEngine_Transform_o *v40; // x26
  UnityEngine_Transform_o *v41; // x0
  __int64 v42; // x1
  UnityEngine_Transform_o *v43; // x21
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
  UnityEngine_Material_o *v64; // x0
  UnityEngine_Texture_o *v65; // x25
  UnityEngine_Material_o *v66; // x22
  float GRAND_GlowIntensity; // s8
  __int64 v68; // x0
  __int64 v69; // x1
  float time; // s0
  float v71; // s0
  float v72; // s1
  float v73; // s2
  int v74; // w21
  __int64 v75; // x0
  __int64 v76; // x1
  StandFigureCamera_c *v77; // x0
  float GRAND_HighTextureGradientOffset; // s0
  UnityEngine_Object_o *v79; // x21
  UnityEngine_Material_array *v80; // x0
  __int64 v81; // x1
  UnityEngine_Material_array *v82; // x24
  il2cpp_array_size_t v83; // x8
  UnityEngine_Transform_o *v84; // x22
  unsigned __int64 v85; // x25
  UnityEngine_Object_o *v86; // x28
  __int64 v87; // x0
  __int64 v88; // x1
  UnityEngine_Texture_o *v89; // x26
  float v90; // s0
  UnityEngine_GameObject_o *v91; // x0
  const MethodInfo *v92; // x3
  __int64 v93; // x1
  UnityEngine_GameObject_o *v94; // x0
  const MethodInfo *v95; // x3
  UnityEngine_GameObject_o *v96; // x0
  const MethodInfo *v97; // x3
  UnityEngine_Rendering_CommandBuffer_c *klass; // x8
  __int64 v99; // x9
  int32_t *p_offset; // x10
  __int64 v101; // x0
  UnityEngine_Component_o *v102; // [xsp+10h] [xbp-5A0h]
  UIStandFigureRender_o *v106; // [xsp+28h] [xbp-588h]
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
  UnityEngine_RenderTexture_o *v134; // [xsp+538h] [xbp-78h]
  UnityEngine_Vector3_o localPosition; // 0:kr00_12.12
  UnityEngine_Color_o v136; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v137; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v138; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v139; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v140; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D2FC2C & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Rendering_CommandBuffer_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_MeshRenderer___);
    sub_1C93AD4(&UnityEngine_Graphics_TypeInfo);
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    sub_1C93AD4(&UnityEngine_Material_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StandFigureCamera_TypeInfo);
    sub_1C93AD4(&StringLiteral_7356/*"Hidden/NGUIGlow"*/);
    sub_1C93AD4(&StringLiteral_16340/*"_GradientOffset"*/);
    sub_1C93AD4(&StringLiteral_16242/*"_BlurSize"*/);
    sub_1C93AD4(&StringLiteral_16273/*"_Color"*/);
    sub_1C93AD4(&StringLiteral_16349/*"_Intensity"*/);
    sub_1C93AD4(&StringLiteral_16339/*"_GradientColor"*/);
    sub_1C93AD4(&StringLiteral_7016/*"GRAND"*/);
    sub_1C93AD4(&StringLiteral_7193/*"GrandServant ServantSelection Cmd"*/);
    sub_1C93AD4(&StringLiteral_7345/*"Hidden/GrandServantServantSelectionOutlineGlowApplicatorShader"*/);
    byte_4D2FC2C = 1;
  }
  v14 = (UnityEngine_Rendering_CommandBuffer_o *)sub_1C93D20(UnityEngine_Rendering_CommandBuffer_TypeInfo);
  UnityEngine_Rendering_CommandBuffer___ctor(v14, 0);
  if ( !v14 )
    sub_1C93D2C(v15, v16);
  UnityEngine_Rendering_CommandBuffer__set_name(v14, (System_String_o *)StringLiteral_7193/*"GrandServant ServantSelection Cmd"*/, 0);
  if ( !standFigure )
    sub_1C93D2C(v17, v18);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)standFigure, 0);
  if ( !transform )
    sub_1C93D2C(0, v20);
  Child = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(transform, 0, 0);
  v106 = standFigure;
  if ( !Child )
    sub_1C93D2C(0, v22);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       Child,
                       (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_MeshRenderer___);
  if ( !standFigure0 )
    sub_1C93D2C(Component_object, v24);
  v25 = (UnityEngine_Component_o *)Component_object;
  v26 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)standFigure0, 0);
  if ( !v26 )
    sub_1C93D2C(0, v27);
  v28 = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v26, 0, 0);
  if ( !v28 )
    sub_1C93D2C(0, v29);
  v30 = UnityEngine_Component__GetComponent_object_(
          v28,
          (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_MeshRenderer___);
  v32 = (UnityEngine_Component_o *)v30;
  if ( !v30 )
    sub_1C93D2C(0, v31);
  v33 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v30, 0);
  if ( !v33 )
    sub_1C93D2C(0, v34);
  v35 = UnityEngine_Transform__GetChild(v33, 0, 0);
  if ( !v25 )
    sub_1C93D2C(v35, v36);
  v37 = (UnityEngine_Component_o *)v35;
  v38 = UnityEngine_Component__get_transform(v25, 0);
  if ( !v38 )
    sub_1C93D2C(0, v39);
  v40 = UnityEngine_Transform__GetChild(v38, 1, 0);
  v41 = UnityEngine_Component__get_transform(v32, 0);
  if ( !v41 )
    sub_1C93D2C(0, v42);
  v43 = UnityEngine_Transform__GetChild(v41, 2, 0);
  v44 = UnityEngine_Component__get_transform(v32, 0);
  if ( !v44 )
    sub_1C93D2C(0, v45);
  v46 = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v44, 3, 0);
  UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_72186440(&v132, (UnityEngine_Texture_o *)mainTexture, 0);
  v133 = v132;
  v131 = v132;
  UnityEngine_Rendering_CommandBuffer__SetRenderTarget(v14, &v131, 0);
  v136.fields.r = 0.0;
  v136.fields.g = 0.0;
  v136.fields.b = 0.0;
  v136.fields.a = 0.0;
  UnityEngine_Rendering_CommandBuffer__ClearRenderTarget_72190740(v14, 1, 1, v136, 0);
  if ( renderBack )
  {
    UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_72186440(&v132, (UnityEngine_Texture_o *)rtBack, 0);
    v133 = v132;
    v130 = v132;
    UnityEngine_Rendering_CommandBuffer__SetRenderTarget(v14, &v130, 0);
    v137.fields.r = 0.0;
    v137.fields.g = 0.0;
    v137.fields.b = 0.0;
    v137.fields.a = 0.0;
    UnityEngine_Rendering_CommandBuffer__ClearRenderTarget_72190740(v14, 1, 1, v137, 0);
    if ( !v46 )
      sub_1C93D2C(v47, v48);
    gameObject = UnityEngine_Component__get_gameObject(v46, 0);
    StandFigureCamera__DrawGameObjectWithCommandBufferRecursive(this, v14, gameObject, v50);
    if ( !v37 )
      sub_1C93D2C(v51, v52);
    v53 = UnityEngine_Component__get_gameObject(v37, 0);
    StandFigureCamera__DrawGameObjectWithCommandBufferRecursive(this, v14, v53, v54);
    UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_72186440(&v129, (UnityEngine_Texture_o *)mainTexture, 0);
    v132 = v129;
    v128 = v129;
    UnityEngine_Rendering_CommandBuffer__SetRenderTarget(v14, &v128, 0);
  }
  UnityEngine_Rendering_CommandBuffer__GetTemporaryRT_72189652(v14, 1, 512, 512, 0, 1, 16, 0);
  UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_72186412(&v132, 1, 0);
  v133 = v132;
  v127 = v132;
  UnityEngine_Rendering_CommandBuffer__SetRenderTarget(v14, &v127, 0);
  v138.fields.r = 0.0;
  v138.fields.g = 0.0;
  v138.fields.b = 0.0;
  v138.fields.a = 0.0;
  UnityEngine_Rendering_CommandBuffer__ClearRenderTarget_72190740(v14, 1, 1, v138, 0);
  sharedMaterials = UnityEngine_Renderer__get_sharedMaterials((UnityEngine_Renderer_o *)v25, 0);
  v57 = sharedMaterials;
  v102 = (UnityEngine_Component_o *)v43;
  v134 = mainTexture;
  if ( !sharedMaterials )
    sub_1C93D2C(0, v56);
  max_length = sharedMaterials->max_length;
  if ( (int)max_length >= 1 )
  {
    v59 = 0;
    do
    {
      if ( v59 >= (unsigned int)max_length )
        sub_1C93D34(sharedMaterials);
      v60 = (UnityEngine_Object_o *)v57->m_Items[v59];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      sharedMaterials = (UnityEngine_Material_array *)UnityEngine_Object__op_Equality(v60, 0, 0);
      if ( ((unsigned __int8)sharedMaterials & 1) == 0 )
        UnityEngine_Rendering_CommandBuffer__DrawRenderer_72192940(
          v14,
          (UnityEngine_Renderer_o *)v25,
          (UnityEngine_Material_o *)v60,
          0);
      LODWORD(max_length) = v57->max_length;
      ++v59;
    }
    while ( (__int64)v59 < (int)max_length );
  }
  v61 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_7356/*"Hidden/NGUIGlow"*/, 0);
  v62 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_7345/*"Hidden/GrandServantServantSelectionOutlineGlowApplicatorShader"*/, 0);
  v63 = (UnityEngine_Material_o *)sub_1C93D20(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v63, v61, 0);
  v64 = (UnityEngine_Material_o *)sub_1C93D20(UnityEngine_Material_TypeInfo);
  v65 = (UnityEngine_Texture_o *)v134;
  v66 = v64;
  UnityEngine_Material___ctor(v64, v62, 0);
  UnityEngine_Rendering_CommandBuffer__GetTemporaryRT_72189652(v14, 2, 512, 512, 0, 1, 16, 0);
  UnityEngine_Rendering_CommandBuffer__GetTemporaryRT_72189652(v14, 3, 512, 512, 0, 1, 16, 0);
  UnityEngine_Rendering_CommandBuffer__GetTemporaryRT_72189652(v14, 4, 512, 512, 0, 1, 16, 0);
  GRAND_GlowIntensity = this->fields.GRAND_GlowIntensity;
  time = UnityEngine_Time__get_time(0);
  if ( !v63 )
    sub_1C93D2C(v68, v69);
  v71 = (float)(time * 0.1) - (float)(floorf((float)(time * 0.1) / 0.3) * 0.3);
  v72 = -0.15;
  v73 = fminf(v71, 0.3) + -0.15;
  if ( v71 >= 0.0 )
    v72 = v73;
  UnityEngine_Material__SetFloat(
    v63,
    (System_String_o *)StringLiteral_16349/*"_Intensity"*/,
    GRAND_GlowIntensity + (float)(0.15 - fabsf(v72)),
    0);
  UnityEngine_Material__SetFloat(v63, (System_String_o *)StringLiteral_16242/*"_BlurSize"*/, this->fields.GRAND_GlowSize, 0);
  v139.fields.r = 1.0;
  v139.fields.g = 1.0;
  v139.fields.b = 1.0;
  v139.fields.a = 1.0;
  UnityEngine_Material__SetColor(v63, (System_String_o *)StringLiteral_16273/*"_Color"*/, v139, 0);
  UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_72186412(&v132, 1, 0);
  v133 = v132;
  UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_72186412(&v129, 3, 0);
  v132 = v129;
  v126 = v133;
  v125 = v129;
  UnityEngine_Rendering_CommandBuffer__Blit_72193376(v14, &v126, &v125, v63, 0, 0);
  if ( this->fields.GRAND_GlowIterations - 1 >= 1 )
  {
    v74 = 0;
    do
    {
      UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_72186412(&v132, 3, 0);
      v133 = v132;
      UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_72186412(&v129, 4, 0);
      v132 = v129;
      v124 = v133;
      v123 = v129;
      UnityEngine_Rendering_CommandBuffer__Blit_72193376(v14, &v124, &v123, v63, 1, 0);
      UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_72186412(&v122, 4, 0);
      v129 = v122;
      UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_72186412(&v121, 3, 0);
      v122 = v121;
      v120 = v129;
      v119 = v121;
      UnityEngine_Rendering_CommandBuffer__Blit_72193376(v14, &v120, &v119, v63, 0, 0);
      ++v74;
    }
    while ( v74 < this->fields.GRAND_GlowIterations - 1 );
  }
  UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_72186412(&v132, 3, 0);
  v133 = v132;
  UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_72186412(&v129, 2, 0);
  v132 = v129;
  v118 = v133;
  v117 = v129;
  UnityEngine_Rendering_CommandBuffer__Blit_72193376(v14, &v118, &v117, v63, 1, 0);
  UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_72186412(&v122, 2, 0);
  v129 = v122;
  UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_72186412(&v121, 1, 0);
  v122 = v121;
  v116 = v129;
  v115 = v121;
  UnityEngine_Rendering_CommandBuffer__Blit_72193092(v14, &v116, &v115, 0);
  UnityEngine_Rendering_CommandBuffer__ReleaseTemporaryRT(v14, 3, 0);
  UnityEngine_Rendering_CommandBuffer__ReleaseTemporaryRT(v14, 4, 0);
  UnityEngine_Rendering_CommandBuffer__ReleaseTemporaryRT(v14, 2, 0);
  if ( !v66 )
    sub_1C93D2C(v75, v76);
  UnityEngine_Material__SetFloat(
    v66,
    (System_String_o *)StringLiteral_16349/*"_Intensity"*/,
    this->fields.GRAND_GlowApplicatorIntensity,
    0);
  UnityEngine_Rendering_CommandBuffer__SetGlobalColor_72193628(
    v14,
    (System_String_o *)StringLiteral_16273/*"_Color"*/,
    this->fields.GRAND_GlowColor,
    0);
  UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_72186412(&v114, 1, 0);
  v121 = v114;
  UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_72186440(&v113, v65, 0);
  v114 = v113;
  v112 = v121;
  v111 = v113;
  UnityEngine_Rendering_CommandBuffer__Blit_72193232(v14, &v112, &v111, v66, 0);
  UnityEngine_Rendering_CommandBuffer__ReleaseTemporaryRT(v14, 1, 0);
  UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_72186440(&v110, v65, 0);
  v113 = v110;
  v109 = v110;
  UnityEngine_Rendering_CommandBuffer__SetRenderTarget(v14, &v109, 0);
  UnityEngine_Rendering_CommandBuffer__EnableShaderKeyword(v14, (System_String_o *)StringLiteral_7016/*"GRAND"*/, 0);
  v77 = StandFigureCamera_TypeInfo;
  if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
    v77 = StandFigureCamera_TypeInfo;
  }
  UnityEngine_Rendering_CommandBuffer__SetGlobalColor_72193628(
    v14,
    (System_String_o *)StringLiteral_16339/*"_GradientColor"*/,
    v77->static_fields->figureRenderGradientColor,
    0);
  if ( v106->fields.isHigh )
    GRAND_HighTextureGradientOffset = this->fields.GRAND_HighTextureGradientOffset;
  else
    GRAND_HighTextureGradientOffset = 0.0;
  UnityEngine_Rendering_CommandBuffer__SetGlobalFloat_72193532(
    v14,
    (System_String_o *)StringLiteral_16340/*"_GradientOffset"*/,
    GRAND_HighTextureGradientOffset,
    0);
  v79 = (UnityEngine_Object_o *)v66;
  v80 = UnityEngine_Renderer__get_sharedMaterials((UnityEngine_Renderer_o *)v25, 0);
  v82 = v80;
  if ( !v80 )
    sub_1C93D2C(0, v81);
  v83 = v80->max_length;
  v84 = v40;
  if ( (int)v83 >= 1 )
  {
    v85 = 0;
    do
    {
      if ( v85 >= (unsigned int)v83 )
        sub_1C93D34(v80);
      v86 = (UnityEngine_Object_o *)v82->m_Items[v85];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v80 = (UnityEngine_Material_array *)UnityEngine_Object__op_Equality(v86, 0, 0);
      if ( ((unsigned __int8)v80 & 1) == 0 )
        UnityEngine_Rendering_CommandBuffer__DrawRenderer_72192940(
          v14,
          (UnityEngine_Renderer_o *)v25,
          (UnityEngine_Material_o *)v86,
          0);
      LODWORD(v83) = v82->max_length;
      ++v85;
    }
    while ( (__int64)v85 < (int)v83 );
  }
  UnityEngine_Rendering_CommandBuffer__DisableShaderKeyword(v14, (System_String_o *)StringLiteral_7016/*"GRAND"*/, 0);
  v89 = (UnityEngine_Texture_o *)v134;
  if ( !v84 )
    sub_1C93D2C(v87, v88);
  localPosition = UnityEngine_Transform__get_localPosition(v84, 0);
  v90 = 512.0;
  if ( !v106->fields.isHigh )
    v90 = 0.0;
  TransformHelper__SetLocalPositionY(v84, v90, 0);
  if ( renderFront )
  {
    v91 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v84, 0);
    StandFigureCamera__DrawGameObjectWithCommandBufferRecursive(this, v14, v91, v92);
    UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_72186440(&v132, (UnityEngine_Texture_o *)rtFront, 0);
    v133 = v132;
    v108 = v132;
    UnityEngine_Rendering_CommandBuffer__SetRenderTarget(v14, &v108, 0);
    v140.fields.r = 0.0;
    v140.fields.g = 0.0;
    v140.fields.b = 0.0;
    v140.fields.a = 0.0;
    UnityEngine_Rendering_CommandBuffer__ClearRenderTarget_72190740(v14, 1, 1, v140, 0);
    if ( !v102 )
      sub_1C93D2C(0, v93);
    v94 = UnityEngine_Component__get_gameObject(v102, 0);
    StandFigureCamera__DrawGameObjectWithCommandBufferRecursive(this, v14, v94, v95);
    UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_72186440(&v129, v89, 0);
    v132 = v129;
    v107 = v129;
    UnityEngine_Rendering_CommandBuffer__SetRenderTarget(v14, &v107, 0);
  }
  else if ( renderBack )
  {
    v96 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v84, 0);
    StandFigureCamera__DrawGameObjectWithCommandBufferRecursive(this, v14, v96, v97);
  }
  if ( !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
  UnityEngine_Graphics__ExecuteCommandBuffer(v14, 0);
  UnityEngine_Transform__set_localPosition(v84, localPosition, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_72119908((UnityEngine_Object_o *)v63, 0);
  UnityEngine_Object__Destroy_72119908(v79, 0);
  klass = v14->klass;
  v99 = *(unsigned __int16 *)&v14->klass->_2.rank;
  if ( *(_WORD *)&v14->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v99;
      p_offset += 4;
      if ( !v99 )
        goto LABEL_66;
    }
    v101 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_66:
    v101 = sub_1C69E5C(v14, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(UnityEngine_Rendering_CommandBuffer_o *, _QWORD))v101)(v14, *(_QWORD *)(v101 + 8));
}


void StandFigureCamera__RenderServantWithEffects(StandFigureCamera_o *this, const MethodInfo *method)
{
  StandFigureCamera_c *v2; // x0
  il2cpp_array_size_t ComponentsInChildren_object__52018868; // x0
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
  Il2CppObject *ComponentInChildren_object__52016240; // x23
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

  if ( (byte_4D2FC29 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_IsValidIndex_StandFigureCollect___);
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponentInChildren_UITexture___);
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponentsInChildren_UIStandFigureRender___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_StandFigureCollect__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&UnityEngine_RenderTexture_TypeInfo);
    sub_1C93AD4(&StandFigureCamera_TypeInfo);
    byte_4D2FC29 = 1;
  }
  v2 = StandFigureCamera_TypeInfo;
  if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
    v2 = StandFigureCamera_TypeInfo;
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v2->static_fields->collectList, 0) )
  {
    ComponentsInChildren_object__52018868 = (il2cpp_array_size_t)UnityEngine_Component__GetComponentsInChildren_object__52018868(
                                                                   (UnityEngine_Component_o *)this,
                                                                   (const MethodInfo_319BEB4 *)Method_UnityEngine_Component_GetComponentsInChildren_UIStandFigureRender___);
    if ( !ComponentsInChildren_object__52018868 )
      goto LABEL_54;
    v5 = ComponentsInChildren_object__52018868;
    if ( *(int *)(ComponentsInChildren_object__52018868 + 24) >= 1 )
    {
      v24 = (Il2CppObject **)(ComponentsInChildren_object__52018868 + 32);
      v6 = 0;
      for ( i = -1; ; --i )
      {
        v8 = StandFigureCamera_TypeInfo;
        if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
          v8 = StandFigureCamera_TypeInfo;
        }
        ComponentsInChildren_object__52018868 = (il2cpp_array_size_t)v8->static_fields->collectList;
        if ( !ComponentsInChildren_object__52018868 )
          break;
        v9 = i + *(_DWORD *)(ComponentsInChildren_object__52018868 + 24);
        if ( BasicHelper__IsValidIndex_object_(
               (System_Collections_Generic_List_T__o *)ComponentsInChildren_object__52018868,
               v9,
               (const MethodInfo_31930E4 *)Method_BasicHelper_IsValidIndex_StandFigureCollect___) )
        {
          v10 = StandFigureCamera_TypeInfo;
          if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
            v10 = StandFigureCamera_TypeInfo;
          }
          ComponentsInChildren_object__52018868 = (il2cpp_array_size_t)v10->static_fields->collectList;
          if ( !ComponentsInChildren_object__52018868 )
            break;
          if ( System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)ComponentsInChildren_object__52018868,
                 v9,
                 (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__) )
          {
            v11 = StandFigureCamera_TypeInfo;
            if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
              v11 = StandFigureCamera_TypeInfo;
            }
            ComponentsInChildren_object__52018868 = (il2cpp_array_size_t)v11->static_fields->collectList;
            if ( !ComponentsInChildren_object__52018868 )
              break;
            ComponentsInChildren_object__52018868 = (il2cpp_array_size_t)System_Collections_Generic_List_object___get_Item(
                                                                           (System_Collections_Generic_List_object__o *)ComponentsInChildren_object__52018868,
                                                                           v9,
                                                                           (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
            if ( !ComponentsInChildren_object__52018868 )
              break;
            v12 = *(UnityEngine_Object_o **)(ComponentsInChildren_object__52018868 + 24);
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
              ComponentsInChildren_object__52018868 = (il2cpp_array_size_t)v13->static_fields->collectList;
              if ( !ComponentsInChildren_object__52018868 )
                break;
              ComponentsInChildren_object__52018868 = (il2cpp_array_size_t)System_Collections_Generic_List_object___get_Item(
                                                                             (System_Collections_Generic_List_object__o *)ComponentsInChildren_object__52018868,
                                                                             v9,
                                                                             (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
              if ( !ComponentsInChildren_object__52018868 )
                break;
              ComponentsInChildren_object__52018868 = *(_QWORD *)(ComponentsInChildren_object__52018868 + 24);
              if ( !ComponentsInChildren_object__52018868 )
                break;
              ComponentInChildren_object__52016240 = UnityEngine_Component__GetComponentInChildren_object__52016240(
                                                       (UnityEngine_Component_o *)ComponentsInChildren_object__52018868,
                                                       (const MethodInfo_319B470 *)Method_UnityEngine_Component_GetComponentInChildren_UITexture___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              ComponentsInChildren_object__52018868 = UnityEngine_Object__op_Equality(
                                                        (UnityEngine_Object_o *)ComponentInChildren_object__52016240,
                                                        0,
                                                        0);
              if ( (ComponentsInChildren_object__52018868 & 1) == 0 )
              {
                if ( v6 >= *(unsigned int *)(v5 + 24) )
                  sub_1C93D34(ComponentsInChildren_object__52018868);
                if ( !ComponentInChildren_object__52016240 )
                  break;
                v15 = *(UIStandFigureRender_o **)(v5 + 32);
                v16 = (UIStandFigureRender_o *)v24[v6];
                v17 = ((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))ComponentInChildren_object__52016240->klass->vtable[26].methodPtr)(
                        ComponentInChildren_object__52016240,
                        ComponentInChildren_object__52016240->klass->vtable[26].method);
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
      sub_1C93D2C(ComponentsInChildren_object__52018868, v4);
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
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  UnityEngine_Object_o *v16; // x22
  Il2CppObject *v17; // x22
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7

  if ( (byte_4D2FC23 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_Camera___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_11403/*"RenderTexture"*/);
    sub_1C93AD4(&StringLiteral_11330/*"RecycleRenderTexture"*/);
    byte_4D2FC23 = 1;
  }
  state = this->fields.state;
  if ( !state )
  {
    this->fields.state = 1;
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_Camera___);
    if ( !Component_object )
      goto LABEL_24;
    targetTexture = UnityEngine_Camera__get_targetTexture(Component_object, 0);
    this->fields.recycleTexture = targetTexture;
    p_recycleTexture = &this->fields.recycleTexture;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.recycleTexture,
      (int32_t)targetTexture,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
    v16 = (UnityEngine_Object_o *)this->fields.recycleTexture;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v16, 0, 0) )
      UnityEngine_RenderTexture__ReleaseTemporary(*p_recycleTexture, 0);
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !Component_object )
      goto LABEL_24;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 1, 0);
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_Camera___);
    if ( !Component_object )
      goto LABEL_24;
    UnityEngine_Camera__set_aspect(Component_object, 1.0, 0);
    v17 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)this,
            (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_Camera___);
    Component_object = (UnityEngine_Camera_o *)UnityEngine_RenderTexture__GetTemporary_72027580(2048, 2048, 0, 0, 0);
    if ( !v17 )
      goto LABEL_24;
    UnityEngine_Camera__set_targetTexture(
      (UnityEngine_Camera_o *)v17,
      (UnityEngine_RenderTexture_o *)Component_object,
      0);
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_Camera___);
    if ( !Component_object )
      goto LABEL_24;
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Camera__get_targetTexture(Component_object, 0);
    if ( !Component_object )
      goto LABEL_24;
    UnityEngine_Object__set_name((UnityEngine_Object_o *)Component_object, (System_String_o *)StringLiteral_11403/*"RenderTexture"*/, 0);
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_Camera___);
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
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.recycleTexture, 0, v18, v19, v20, v21, v22, v23);
      return state == 0;
    }
    if ( !recycleTexture
      || (UnityEngine_Object__set_name(
            (UnityEngine_Object_o *)recycleTexture,
            (System_String_o *)StringLiteral_11330/*"RecycleRenderTexture"*/,
            0),
          *p_recycleTexture = recycleTexture,
          sub_1C93A78(
            (GrandQuestFolderBoardItem_o *)&this->fields.recycleTexture,
            (int32_t)recycleTexture,
            v24,
            v25,
            v26,
            v27,
            v28,
            v29),
          (Component_object = (UnityEngine_Camera_o *)*p_recycleTexture) == 0) )
    {
LABEL_24:
      sub_1C93D2C(Component_object, v7);
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
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  UnityEngine_Object_o *v16; // x22
  Il2CppObject *v17; // x22
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7

  if ( (byte_4D2FC25 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_Camera___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_11403/*"RenderTexture"*/);
    sub_1C93AD4(&StringLiteral_11330/*"RecycleRenderTexture"*/);
    byte_4D2FC25 = 1;
  }
  state = this->fields.state;
  if ( !state )
  {
    this->fields.state = 1;
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_Camera___);
    if ( !Component_object )
      goto LABEL_24;
    targetTexture = UnityEngine_Camera__get_targetTexture(Component_object, 0);
    this->fields.recycleTexture = targetTexture;
    p_recycleTexture = &this->fields.recycleTexture;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.recycleTexture,
      (int32_t)targetTexture,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
    v16 = (UnityEngine_Object_o *)this->fields.recycleTexture;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v16, 0, 0) )
      UnityEngine_RenderTexture__ReleaseTemporary(*p_recycleTexture, 0);
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !Component_object )
      goto LABEL_24;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 1, 0);
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_Camera___);
    if ( !Component_object )
      goto LABEL_24;
    UnityEngine_Camera__set_aspect(Component_object, 1.0, 0);
    v17 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)this,
            (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_Camera___);
    Component_object = (UnityEngine_Camera_o *)UnityEngine_RenderTexture__GetTemporary_72027580(2048, 2048, 0, 0, 0);
    if ( !v17 )
      goto LABEL_24;
    UnityEngine_Camera__set_targetTexture(
      (UnityEngine_Camera_o *)v17,
      (UnityEngine_RenderTexture_o *)Component_object,
      0);
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_Camera___);
    if ( !Component_object )
      goto LABEL_24;
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Camera__get_targetTexture(Component_object, 0);
    if ( !Component_object )
      goto LABEL_24;
    UnityEngine_Object__set_name((UnityEngine_Object_o *)Component_object, (System_String_o *)StringLiteral_11403/*"RenderTexture"*/, 0);
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_Camera___);
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
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.recycleTexture, 0, v18, v19, v20, v21, v22, v23);
      return state == 0;
    }
    if ( !recycleTexture
      || (UnityEngine_Object__set_name(
            (UnityEngine_Object_o *)recycleTexture,
            (System_String_o *)StringLiteral_11330/*"RecycleRenderTexture"*/,
            0),
          *p_recycleTexture = recycleTexture,
          sub_1C93A78(
            (GrandQuestFolderBoardItem_o *)&this->fields.recycleTexture,
            (int32_t)recycleTexture,
            v24,
            v25,
            v26,
            v27,
            v28,
            v29),
          (Component_object = (UnityEngine_Camera_o *)*p_recycleTexture) == 0) )
    {
LABEL_24:
      sub_1C93D2C(Component_object, v7);
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
  UnityEngine_RenderTexture_o *Temporary_72027580; // x0

  if ( (byte_4D2FC24 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_Camera___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_5412/*"Dummy"*/);
    byte_4D2FC24 = 1;
  }
  this->fields.withEffect = 1;
  this->fields.entranceDuration = 1.0;
  Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_object_(
                                               (UnityEngine_Component_o *)this,
                                               (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_Camera___);
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
  Temporary_72027580 = UnityEngine_RenderTexture__GetTemporary_72027580(2, 2, 0, 0, 0);
  UnityEngine_Camera__set_targetTexture(v6, Temporary_72027580, 0);
  Component_object = (UnityEngine_Camera_o *)UnityEngine_Camera__get_targetTexture(v6, 0);
  if ( !Component_object
    || (UnityEngine_Object__set_name((UnityEngine_Object_o *)Component_object, (System_String_o *)StringLiteral_5412/*"Dummy"*/, 0),
        (Component_object = (UnityEngine_Camera_o *)UnityEngine_Camera__get_targetTexture(v6, 0)) == 0)
    || (UnityEngine_Texture__set_filterMode((UnityEngine_Texture_o *)Component_object, 0, 0),
        this->fields.state = 1,
        (Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)this,
                                                      0)) == 0) )
  {
LABEL_12:
    sub_1C93D2C(Component_object, v5);
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
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  UnityEngine_Camera_o *v16; // x19
  UnityEngine_Object_o *targetTexture; // x20
  UnityEngine_RenderTexture_o *v18; // x20
  StandFigureCamera_c *v19; // x0
  UnityEngine_Object_o *front; // x19
  StandFigureCamera_c *v21; // x0
  UnityEngine_Object_o *v22; // x19
  struct StandFigureCamera_StaticFields *v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  StandFigureCamera_c *v30; // x0
  UnityEngine_Object_o *back; // x19
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  StandFigureCamera_c *v38; // x0
  UnityEngine_Object_o *v39; // x19
  struct StandFigureCamera_StaticFields *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  StandFigureCamera_c *v47; // x0

  if ( (byte_4D2FC2E & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_Camera___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StandFigureCamera_TypeInfo);
    byte_4D2FC2E = 1;
  }
  this->fields.state = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_37;
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
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->renderTextureEffects, 0, v10, v11, v12, v13, v14, v15);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                             (UnityEngine_Component_o *)this,
                                             (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_Camera___);
  if ( !gameObject )
    goto LABEL_37;
  v16 = (UnityEngine_Camera_o *)gameObject;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  targetTexture = (UnityEngine_Object_o *)UnityEngine_Camera__get_targetTexture(v16, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(targetTexture, 0, 0) )
  {
    v18 = UnityEngine_Camera__get_targetTexture(v16, 0);
    UnityEngine_Camera__set_targetTexture(v16, 0, 0);
    UnityEngine_RenderTexture__ReleaseTemporary(v18, 0);
  }
  v19 = StandFigureCamera_TypeInfo;
  if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
    v19 = StandFigureCamera_TypeInfo;
  }
  front = (UnityEngine_Object_o *)v19->static_fields->front;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(front, 0, 0) )
  {
    v21 = StandFigureCamera_TypeInfo;
    if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
      v21 = StandFigureCamera_TypeInfo;
    }
    gameObject = (UnityEngine_GameObject_o *)v21->static_fields->front;
    if ( !gameObject )
      goto LABEL_37;
    v22 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_72119908(v22, 0);
    v23 = StandFigureCamera_TypeInfo->static_fields;
    v23->front = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v23->front, 0, v24, v25, v26, v27, v28, v29);
  }
  v30 = StandFigureCamera_TypeInfo;
  if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
    v30 = StandFigureCamera_TypeInfo;
  }
  back = (UnityEngine_Object_o *)v30->static_fields->back;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(back, 0, 0) )
  {
    v38 = StandFigureCamera_TypeInfo;
    if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
      v38 = StandFigureCamera_TypeInfo;
    }
    gameObject = (UnityEngine_GameObject_o *)v38->static_fields->back;
    if ( gameObject )
    {
      v39 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_72119908(v39, 0);
      v40 = StandFigureCamera_TypeInfo->static_fields;
      v40->back = 0;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&v40->back, 0, v41, v42, v43, v44, v45, v46);
      goto LABEL_34;
    }
LABEL_37:
    sub_1C93D2C(gameObject, v4);
  }
LABEL_34:
  v47 = StandFigureCamera_TypeInfo;
  if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
    v47 = StandFigureCamera_TypeInfo;
  }
  v47->static_fields->collectList = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)StandFigureCamera_TypeInfo->static_fields, 0, v32, v33, v34, v35, v36, v37);
}


void StandFigureCamera__SetupEffects(
        System_Collections_Generic_List_StandFigureCollect__o *collectList,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  StandFigureCamera_c *v9; // x0
  System_Collections_Generic_List_T__o *v10; // x20
  struct StandFigureCamera_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  const MethodInfo *v18; // x3

  if ( (byte_4D2FC21 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_ValueTuple_bool__RenderTexture____ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_ValueTuple_bool__RenderTexture___TypeInfo);
    sub_1C93AD4(&StandFigureCamera_TypeInfo);
    sub_1C93AD4(&StringLiteral_11415/*"RenderTextureMain"*/);
    byte_4D2FC21 = 1;
  }
  v9 = StandFigureCamera_TypeInfo;
  if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
    v9 = StandFigureCamera_TypeInfo;
  }
  v9->static_fields->collectList = collectList;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)StandFigureCamera_TypeInfo->static_fields,
    (int32_t)collectList,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = (System_Collections_Generic_List_T__o *)sub_1C93D20(System_Collections_Generic_List_ValueTuple_bool__RenderTexture___TypeInfo);
  System_Collections_Generic_List_ValueTuple_bool__object_____ctor(
    v10,
    (const MethodInfo_381B8F0 *)Method_System_Collections_Generic_List_ValueTuple_bool__RenderTexture____ctor__);
  static_fields = StandFigureCamera_TypeInfo->static_fields;
  static_fields->renderTextureEffects = (struct System_Collections_Generic_List_ValueTuple_bool__RenderTexture___o *)v10;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&static_fields->renderTextureEffects,
    (int32_t)v10,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  StandFigureCamera__InitRenderTextures(
    collectList,
    StandFigureCamera_TypeInfo->static_fields->renderTextureEffects,
    (System_String_o *)StringLiteral_11415/*"RenderTextureMain"*/,
    v18);
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
  if ( !byte_4D2A13E )
  {
    this = (StandFigureCamera_o *)sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A13E = 1;
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
    sub_1C93D2C(this, parent);
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

  if ( (byte_4D2FC2D & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_MeshRenderer___);
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponentsInChildren_UIStandFigureRender____79080864);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_16482/*"_TimeValue"*/);
    byte_4D2FC2D = 1;
  }
  if ( this->fields.withEffect )
  {
    ComponentsInChildren_object = UnityEngine_Component__GetComponentsInChildren_object_(
                                    (UnityEngine_Component_o *)this,
                                    1,
                                    (const MethodInfo_319BF30 *)Method_UnityEngine_Component_GetComponentsInChildren_UIStandFigureRender____79080864);
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
            sub_1C93D34(ComponentsInChildren_object);
          transform = (UnityEngine_Component_o *)v6->m_Items[v10];
          if ( !transform
            || (transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0)) == 0 )
          {
LABEL_26:
            sub_1C93D2C(transform, v4);
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
                               (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_MeshRenderer___);
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
            (System_String_o *)StringLiteral_16482/*"_TimeValue"*/,
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
  if ( (byte_4D2FC31 & 1) == 0 )
  {
    a1 = (StandFigureCamera___c__DisplayClass36_0_o *)sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2FC31 = 1;
  }
  uitextures = v2->fields.uitextures;
  if ( !v2->fields.uitextures )
LABEL_24:
    sub_1C93D2C(a1, method);
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
        sub_1C93D34(a1);
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
  if ( (byte_4D2FC30 & 1) == 0 )
  {
    a1 = (StandFigureCamera___c__DisplayClass36_0_o *)sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2FC30 = 1;
  }
  uitextures = v2->fields.uitextures;
  if ( !v2->fields.uitextures )
LABEL_24:
    sub_1C93D2C(a1, method);
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
        sub_1C93D34(a1);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2FC32 & 1) == 0 )
  {
    sub_1C93AD4(&StandFigureCamera___c_TypeInfo);
    byte_4D2FC32 = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(StandFigureCamera___c_TypeInfo);
  System_Object___ctor(v1, 0);
  StandFigureCamera___c_TypeInfo->static_fields->__9 = (struct StandFigureCamera___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)StandFigureCamera___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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