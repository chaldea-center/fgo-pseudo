void FGOCrystalMesh___ctor(FGOCrystalMesh_o *this, const MethodInfo *method)
{
  FGOCrystalMesh_CrystalData_o *v3; // x20
  const MethodInfo *v4; // x1
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4CB5033 & 1) == 0 )
  {
    sub_1C6BA08(&FGOCrystalMesh_CrystalData_TypeInfo);
    byte_4CB5033 = 1;
  }
  v3 = (FGOCrystalMesh_CrystalData_o *)sub_1C6BC54(FGOCrystalMesh_CrystalData_TypeInfo);
  FGOCrystalMesh_CrystalData___ctor(v3, v4);
  this->fields.crystalData = v3;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.crystalData, (int32_t)v3, v5, v6);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void FGOCrystalMesh__AddCrystalMesh(FGOCrystalMesh_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *crystalMat; // x20
  UnityEngine_Component_o *ComponentsInChildren_object__51587040; // x0
  __int64 v5; // x1
  UnityEngine_Component_o *v6; // x20
  unsigned __int64 v7; // x26
  __int64 v8; // x21
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  __int64 v11; // x1
  UnityEngine_Component_o **v12; // x22
  struct FGOCrystalMesh_CrystalData_o *crystalData; // x8
  Il2CppObject *v14; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *Parent; // x24
  UnityEngine_GameObject_o *v17; // x23
  Il2CppObject *Component_object; // x0
  Il2CppObject *v19; // x24
  System_String_o *name; // x0
  System_String_o *v21; // x0
  const MethodInfo *v22; // x3
  Il2CppObject *v23; // x24
  struct FGOCrystalMesh_CrystalData_o *v24; // x8
  UnityEngine_Component_o *v25; // x23
  float z; // w9
  intptr_t v27; // x8
  struct FGOCrystalMesh_CrystalData_o *v28; // x8
  UnityEngine_GameObject_o *v29; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  System_Action_o *v32; // x22
  int32_t v33; // w2
  const MethodInfo *v34; // x3

  if ( (byte_4CB5030 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer___);
    sub_1C6BA08(&Method_UnityEngine_GameObject_AddComponent_FGOMeshExploder___);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_FGOCrystalMesh___);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_FGOMeshExploder___);
    sub_1C6BA08(&Method_UnityEngine_Object_Instantiate_GameObject____78656176);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_FGOCrystalMesh___c__DisplayClass9_0__AddCrystalMesh_b__0__);
    sub_1C6BA08(&FGOCrystalMesh___c__DisplayClass9_0_TypeInfo);
    sub_1C6BA08(&StringLiteral_24904/*"weapon_"*/);
    sub_1C6BA08(&StringLiteral_16537/*"_crystal"*/);
    byte_4CB5030 = 1;
  }
  if ( this->fields.crystalData )
  {
    crystalMat = (UnityEngine_Object_o *)this->fields.crystalMat;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(crystalMat, 0, 0) )
    {
      ComponentsInChildren_object__51587040 = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentsInChildren_object__51587040(
                                                                           (UnityEngine_Component_o *)this,
                                                                           (const MethodInfo_31327E0 *)Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer___);
      if ( !ComponentsInChildren_object__51587040 )
        goto LABEL_39;
      v6 = ComponentsInChildren_object__51587040;
      if ( SLODWORD(ComponentsInChildren_object__51587040[1].klass) >= 1 )
      {
        v7 = 0;
        while ( 1 )
        {
          v8 = sub_1C6BC54(FGOCrystalMesh___c__DisplayClass9_0_TypeInfo);
          System_Object___ctor((Il2CppObject *)v8, 0);
          if ( v7 >= LODWORD(v6[1].klass) )
            sub_1C6BC68(ComponentsInChildren_object__51587040);
          if ( !v8 )
            break;
          v11 = *((_QWORD *)&v6[1].monitor + v7);
          *(_QWORD *)(v8 + 16) = v11;
          v12 = (UnityEngine_Component_o **)(v8 + 16);
          sub_1C6B9AC((CGThumbnailListItem_o *)(v8 + 16), v11, v9, v10);
          crystalData = this->fields.crystalData;
          if ( !crystalData )
            break;
          if ( crystalData->fields.useWeaponModel )
            goto LABEL_18;
          ComponentsInChildren_object__51587040 = *v12;
          if ( !*v12 )
            break;
          ComponentsInChildren_object__51587040 = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                               ComponentsInChildren_object__51587040,
                                                                               0);
          if ( !ComponentsInChildren_object__51587040 )
            break;
          ComponentsInChildren_object__51587040 = (UnityEngine_Component_o *)UnityEngine_Object__get_name(
                                                                               (UnityEngine_Object_o *)ComponentsInChildren_object__51587040,
                                                                               0);
          if ( !ComponentsInChildren_object__51587040 )
            break;
          if ( !System_String__Contains(
                  (System_String_o *)ComponentsInChildren_object__51587040,
                  (System_String_o *)StringLiteral_24904/*"weapon_"*/,
                  0) )
          {
LABEL_18:
            ComponentsInChildren_object__51587040 = *v12;
            if ( !*v12 )
              break;
            ComponentsInChildren_object__51587040 = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                                 ComponentsInChildren_object__51587040,
                                                                                 0);
            if ( !*v12 )
              break;
            v14 = (Il2CppObject *)ComponentsInChildren_object__51587040;
            gameObject = UnityEngine_Component__get_gameObject(*v12, 0);
            Parent = GameObjectExtensions__GetParent(gameObject, 0);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            ComponentsInChildren_object__51587040 = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_object__52199488(
                                                                                 v14,
                                                                                 Parent,
                                                                                 (const MethodInfo_31C8040 *)Method_UnityEngine_Object_Instantiate_GameObject____78656176);
            if ( !ComponentsInChildren_object__51587040 )
              break;
            v17 = (UnityEngine_GameObject_o *)ComponentsInChildren_object__51587040;
            Component_object = UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)ComponentsInChildren_object__51587040,
                                 (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_FGOCrystalMesh___);
            if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
            {
              v19 = UnityEngine_GameObject__GetComponent_object_(
                      v17,
                      (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_FGOCrystalMesh___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              UnityEngine_Object__Destroy_71659676((UnityEngine_Object_o *)v19, 0);
            }
            ComponentsInChildren_object__51587040 = *v12;
            if ( !*v12 )
              break;
            ComponentsInChildren_object__51587040 = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                                 ComponentsInChildren_object__51587040,
                                                                                 0);
            if ( !ComponentsInChildren_object__51587040 )
              break;
            name = UnityEngine_Object__get_name((UnityEngine_Object_o *)ComponentsInChildren_object__51587040, 0);
            v21 = System_String__Concat_63966792(name, (System_String_o *)StringLiteral_16537/*"_crystal"*/, 0);
            UnityEngine_Object__set_name((UnityEngine_Object_o *)v17, v21, 0);
            FGOCrystalMesh__ChangeCrystalMaterial(this, v17, this->fields.crystalMat, v22);
            v23 = UnityEngine_GameObject__GetComponent_object_(
                    v17,
                    (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_FGOMeshExploder___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v23, 0, 0) )
            {
              ComponentsInChildren_object__51587040 = (UnityEngine_Component_o *)UnityEngine_GameObject__AddComponent_object_(
                                                                                   v17,
                                                                                   (const MethodInfo_3193044 *)Method_UnityEngine_GameObject_AddComponent_FGOMeshExploder___);
              v24 = this->fields.crystalData;
              if ( !v24 )
                break;
              v25 = ComponentsInChildren_object__51587040;
              if ( !ComponentsInChildren_object__51587040 )
                break;
              LOBYTE(ComponentsInChildren_object__51587040[1].monitor) = v24->fields.useBrokenPiece;
              BYTE1(ComponentsInChildren_object__51587040[1].monitor) = v24->fields.useGravity;
              HIDWORD(ComponentsInChildren_object__51587040[1].monitor) = LODWORD(v24->fields.mass);
              *(UnityEngine_Component_c **)((char *)&ComponentsInChildren_object__51587040[2].klass + 4) = *(UnityEngine_Component_c **)&v24->fields.minPieceVertex;
              z = v24->fields.angularVelocity.fields.z;
              v27 = *(_QWORD *)&v24->fields.angularVelocity.fields.x;
              *(float *)&ComponentsInChildren_object__51587040[2].klass = z;
              ComponentsInChildren_object__51587040[1].fields.m_CachedPtr = v27;
              v28 = this->fields.crystalData;
              if ( !v28 )
                break;
              *(_OWORD *)((char *)&ComponentsInChildren_object__51587040[2].monitor + 4) = *(_OWORD *)&v28->fields.minBrokenSpeed;
              ComponentsInChildren_object__51587040 = *v12;
              if ( !*v12 )
                break;
              v29 = UnityEngine_Component__get_gameObject(ComponentsInChildren_object__51587040, 0);
              v25[3].monitor = v29;
              sub_1C6B9AC((CGThumbnailListItem_o *)&v25[3].monitor, (int32_t)v29, v30, v31);
              v32 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
              System_Action___ctor(
                v32,
                (Il2CppObject *)v8,
                Method_FGOCrystalMesh___c__DisplayClass9_0__AddCrystalMesh_b__0__,
                0);
              v25[3].fields.m_CachedPtr = (intptr_t)v32;
              sub_1C6B9AC((CGThumbnailListItem_o *)&v25[3].fields, (int32_t)v32, v33, v34);
            }
          }
          if ( (__int64)++v7 >= SLODWORD(v6[1].klass) )
            return;
        }
LABEL_39:
        sub_1C6BC60(ComponentsInChildren_object__51587040, v5);
      }
    }
  }
}


void FGOCrystalMesh__ChangeCrystalMaterial(
        FGOCrystalMesh_o *this,
        UnityEngine_GameObject_o *o,
        UnityEngine_Material_o *crystalMaterial,
        const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  FGOCrystalMesh_o *v7; // x22
  UnityEngine_Renderer_o *v8; // x20
  __int64 v9; // x0
  UnityEngine_Material_array **p_materialsArray; // x23
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t sortingOrder; // w0
  int m_CancellationTokenSource; // w8
  FGOCrystalMesh_o *v15; // x24
  unsigned int v16; // w28
  UnityEngine_Material_o *v17; // x26
  UnityEngine_Material_o *v18; // x25
  float Float; // s0
  float v20; // s0
  UnityEngine_Texture_o *Texture; // x0
  struct FGOCrystalMesh_CrystalData_o *crystalData; // x8
  float timeSinceLevelLoad; // s0
  UnityEngine_Texture_o *mainTexture; // x0
  int32_t renderQueue; // w0
  UnityEngine_Material_array *v26; // x26
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  Il2CppClass **v29; // x0
  __int64 v30; // x0
  FGOCrystalMesh_o *v31; // [xsp+10h] [xbp-70h]
  Il2CppObject *component; // [xsp+18h] [xbp-68h] BYREF

  v31 = this;
  if ( (byte_4CB5032 & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer___);
    sub_1C6BA08(&Method_UnityEngine_GameObject_TryGetComponent_ChangeCrystalMaterialSettingComponent___);
    sub_1C6BA08(&UnityEngine_Material___TypeInfo);
    sub_1C6BA08(&UnityEngine_Material_TypeInfo);
    sub_1C6BA08(&StringLiteral_16411/*"_Xscale"*/);
    sub_1C6BA08(&StringLiteral_16258/*"_MainTex"*/);
    sub_1C6BA08(&StringLiteral_16344/*"_StartTime"*/);
    sub_1C6BA08(&StringLiteral_16412/*"_XscaleB"*/);
    sub_1C6BA08(&StringLiteral_16212/*"_FadeTime"*/);
    sub_1C6BA08(&StringLiteral_16611/*"_xscaleB"*/);
    sub_1C6BA08(&StringLiteral_16392/*"_UseSubtex"*/);
    sub_1C6BA08(&StringLiteral_16353/*"_SubTex"*/);
    this = (FGOCrystalMesh_o *)sub_1C6BA08(&StringLiteral_16610/*"_xscale"*/);
    byte_4CB5032 = 1;
  }
  component = 0;
  if ( !o )
    goto LABEL_36;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       o,
                       (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer___);
  v7 = (FGOCrystalMesh_o *)StringLiteral_16353/*"_SubTex"*/;
  v8 = (UnityEngine_Renderer_o *)Component_object;
  this = (FGOCrystalMesh_o *)UnityEngine_GameObject__TryGetComponent_object_(
                               o,
                               &component,
                               (const MethodInfo_31943BC *)Method_UnityEngine_GameObject_TryGetComponent_ChangeCrystalMaterialSettingComponent___);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    this = (FGOCrystalMesh_o *)component;
    if ( !component )
      goto LABEL_36;
    this = (FGOCrystalMesh_o *)ChangeCrystalMaterialSettingComponent__get_AlphaTexturePropertyName(
                                 (ChangeCrystalMaterialSettingComponent_o *)component,
                                 0);
    v7 = this;
  }
  if ( !v8 )
    goto LABEL_36;
  this = (FGOCrystalMesh_o *)UnityEngine_Renderer__get_materials(v8, 0);
  if ( !this
    || (v9 = sub_1C6BAB0(UnityEngine_Material___TypeInfo, LODWORD(this->fields.m_CancellationTokenSource)),
        v31->fields.materialsArray = (struct UnityEngine_Material_array *)v9,
        p_materialsArray = &v31->fields.materialsArray,
        sub_1C6B9AC((CGThumbnailListItem_o *)&v31->fields.materialsArray, v9, v11, v12),
        sortingOrder = UnityEngine_Renderer__get_sortingOrder(v8, 0),
        UnityEngine_Renderer__set_sortingOrder(v8, sortingOrder + 1, 0),
        (this = (FGOCrystalMesh_o *)UnityEngine_Renderer__get_materials(v8, 0)) == 0) )
  {
LABEL_36:
    sub_1C6BC60(this, o);
  }
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v15 = this;
  if ( m_CancellationTokenSource >= 1 )
  {
    v16 = 0;
    do
    {
      if ( v16 >= m_CancellationTokenSource )
LABEL_37:
        sub_1C6BC68(this);
      v17 = (UnityEngine_Material_o *)*((_QWORD *)&v15->fields.crystalMat + (int)v16);
      v18 = (UnityEngine_Material_o *)sub_1C6BC54(UnityEngine_Material_TypeInfo);
      UnityEngine_Material___ctor_71522240(v18, crystalMaterial, 0);
      if ( !v17 )
        goto LABEL_36;
      if ( UnityEngine_Material__HasProperty_71525148(v17, (System_String_o *)StringLiteral_16610/*"_xscale"*/, 0) )
      {
        Float = UnityEngine_Material__GetFloat(v17, (System_String_o *)StringLiteral_16610/*"_xscale"*/, 0);
        if ( !v18 )
          goto LABEL_36;
        UnityEngine_Material__SetFloat(v18, (System_String_o *)StringLiteral_16411/*"_Xscale"*/, Float, 0);
      }
      this = (FGOCrystalMesh_o *)UnityEngine_Material__HasProperty_71525148(
                                   v17,
                                   (System_String_o *)StringLiteral_16611/*"_xscaleB"*/,
                                   0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v20 = UnityEngine_Material__GetFloat(v17, (System_String_o *)StringLiteral_16611/*"_xscaleB"*/, 0);
        if ( !v18 )
          goto LABEL_36;
      }
      else
      {
        v20 = 1.0;
        if ( !v18 )
          goto LABEL_36;
      }
      UnityEngine_Material__SetFloat(v18, (System_String_o *)StringLiteral_16412/*"_XscaleB"*/, v20, 0);
      if ( UnityEngine_Material__HasProperty_71525148(v17, (System_String_o *)v7, 0) )
      {
        UnityEngine_Material__SetInt(v18, (System_String_o *)StringLiteral_16392/*"_UseSubtex"*/, 1, 0);
        Texture = UnityEngine_Material__GetTexture(v17, (System_String_o *)v7, 0);
        UnityEngine_Material__SetTexture(v18, (System_String_o *)StringLiteral_16353/*"_SubTex"*/, Texture, 0);
      }
      else
      {
        UnityEngine_Material__SetInt(v18, (System_String_o *)StringLiteral_16392/*"_UseSubtex"*/, 0, 0);
      }
      this = (FGOCrystalMesh_o *)UnityEngine_Material__HasProperty_71525148(
                                   v18,
                                   (System_String_o *)StringLiteral_16212/*"_FadeTime"*/,
                                   0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        crystalData = v31->fields.crystalData;
        if ( !crystalData )
          goto LABEL_36;
        UnityEngine_Material__SetFloat(
          v18,
          (System_String_o *)StringLiteral_16212/*"_FadeTime"*/,
          crystalData->fields.crystalFadeTime,
          0);
      }
      if ( UnityEngine_Material__HasProperty_71525148(v18, (System_String_o *)StringLiteral_16344/*"_StartTime"*/, 0) )
      {
        timeSinceLevelLoad = UnityEngine_Time__get_timeSinceLevelLoad(0);
        UnityEngine_Material__SetFloat(v18, (System_String_o *)StringLiteral_16344/*"_StartTime"*/, timeSinceLevelLoad, 0);
      }
      if ( UnityEngine_Material__HasProperty_71525148(v17, (System_String_o *)StringLiteral_16258/*"_MainTex"*/, 0) )
      {
        mainTexture = UnityEngine_Material__get_mainTexture(v17, 0);
        UnityEngine_Material__set_mainTexture(v18, mainTexture, 0);
      }
      renderQueue = UnityEngine_Material__get_renderQueue(v17, 0);
      UnityEngine_Material__set_renderQueue(v18, renderQueue, 0);
      v26 = *p_materialsArray;
      if ( !*p_materialsArray )
        goto LABEL_36;
      this = (FGOCrystalMesh_o *)sub_1C6BB44(v18, v26->obj.klass->_1.element_class);
      if ( !this )
      {
        v30 = sub_1C6BC84(0);
        sub_1C6BB30(v30, 0);
      }
      if ( v16 >= LODWORD(v26->max_length) )
        goto LABEL_37;
      v29 = &v26->obj.klass + (int)v16;
      v29[4] = (Il2CppClass *)v18;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v29 + 4), (int32_t)v18, v27, v28);
      m_CancellationTokenSource = (int)v15->fields.m_CancellationTokenSource;
    }
    while ( (int)++v16 < m_CancellationTokenSource );
  }
  UnityEngine_Renderer__set_materials(v8, *p_materialsArray, 0);
}


void FGOCrystalMesh__ExplodeCrystalMesh(FGOCrystalMesh_o *this, const MethodInfo *method)
{
  void *ComponentsInChildren_object__51587040; // x0
  __int64 v4; // x1
  int v5; // w8
  _DWORD *v6; // x20
  unsigned int v7; // w22
  char *v8; // x8
  FGOMeshExploder_o *v9; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v11; // x2
  __int64 v12; // x8
  _QWORD *v13; // x20
  unsigned __int64 v14; // x22
  struct FGOCrystalMesh_CrystalData_o *crystalData; // x8
  UnityEngine_Component_o *v16; // x21

  if ( (byte_4CB5031 & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponentsInChildren_FGOMeshExploder___);
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer___);
    sub_1C6BA08(&StringLiteral_24904/*"weapon_"*/);
    byte_4CB5031 = 1;
  }
  ComponentsInChildren_object__51587040 = UnityEngine_Component__GetComponentsInChildren_object__51587040(
                                            (UnityEngine_Component_o *)this,
                                            (const MethodInfo_31327E0 *)Method_UnityEngine_Component_GetComponentsInChildren_FGOMeshExploder___);
  if ( !ComponentsInChildren_object__51587040 )
    goto LABEL_23;
  v5 = *((_DWORD *)ComponentsInChildren_object__51587040 + 6);
  v6 = ComponentsInChildren_object__51587040;
  if ( v5 >= 1 )
  {
    v7 = 0;
    while ( v7 < v5 )
    {
      v8 = (char *)&v6[2 * v7];
      v9 = (FGOMeshExploder_o *)*((_QWORD *)v8 + 4);
      if ( !v9 )
        goto LABEL_23;
      gameObject = UnityEngine_Component__get_gameObject(*((UnityEngine_Component_o **)v8 + 4), 0);
      FGOMeshExploder__Explode_40487404(v9, gameObject, v11);
      v5 = v6[6];
      if ( (int)++v7 >= v5 )
        goto LABEL_9;
    }
LABEL_24:
    sub_1C6BC68(ComponentsInChildren_object__51587040);
  }
LABEL_9:
  ComponentsInChildren_object__51587040 = UnityEngine_Component__GetComponentsInChildren_object__51587040(
                                            (UnityEngine_Component_o *)this,
                                            (const MethodInfo_31327E0 *)Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer___);
  if ( !ComponentsInChildren_object__51587040 )
LABEL_23:
    sub_1C6BC60(ComponentsInChildren_object__51587040, v4);
  v12 = *((_QWORD *)ComponentsInChildren_object__51587040 + 3);
  v13 = ComponentsInChildren_object__51587040;
  if ( (int)v12 >= 1 )
  {
    v14 = 0;
    while ( v14 < (unsigned int)v12 )
    {
      crystalData = this->fields.crystalData;
      if ( !crystalData )
        goto LABEL_23;
      if ( !crystalData->fields.useWeaponModel )
      {
        v16 = (UnityEngine_Component_o *)v13[v14 + 4];
        if ( !v16 )
          goto LABEL_23;
        ComponentsInChildren_object__51587040 = UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)v13[v14 + 4],
                                                  0);
        if ( !ComponentsInChildren_object__51587040 )
          goto LABEL_23;
        ComponentsInChildren_object__51587040 = UnityEngine_Object__get_name(
                                                  (UnityEngine_Object_o *)ComponentsInChildren_object__51587040,
                                                  0);
        if ( !ComponentsInChildren_object__51587040 )
          goto LABEL_23;
        ComponentsInChildren_object__51587040 = (void *)System_String__Contains(
                                                          (System_String_o *)ComponentsInChildren_object__51587040,
                                                          (System_String_o *)StringLiteral_24904/*"weapon_"*/,
                                                          0);
        if ( ((unsigned __int8)ComponentsInChildren_object__51587040 & 1) != 0 )
        {
          ComponentsInChildren_object__51587040 = UnityEngine_Component__get_gameObject(v16, 0);
          if ( !ComponentsInChildren_object__51587040 )
            goto LABEL_23;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ComponentsInChildren_object__51587040, 0, 0);
        }
      }
      LODWORD(v12) = *((_DWORD *)v13 + 6);
      if ( (__int64)++v14 >= (int)v12 )
        return;
    }
    goto LABEL_24;
  }
}


void FGOCrystalMesh__InitCrystalData(
        FGOCrystalMesh_o *this,
        FGOCrystalMesh_CrystalData_o *crystalData,
        UnityEngine_Material_o *crystalMat,
        const MethodInfo *method)
{
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  this->fields.crystalData = crystalData;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.crystalData, (int32_t)crystalData, (int32_t)crystalMat, method);
  this->fields.crystalMat = crystalMat;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.crystalMat, (int32_t)crystalMat, v6, v7);
}


void FGOCrystalMesh__OnDestroy(FGOCrystalMesh_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  this->fields.materialsArray = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.materialsArray, 0, v2, v3);
}


// attributes: thunk
void FGOCrystalMesh__Start(FGOCrystalMesh_o *this, const MethodInfo *method)
{
  FGOCrystalMesh__AddCrystalMesh(this, method);
}


void FGOCrystalMesh__Update(FGOCrystalMesh_o *this, const MethodInfo *method)
{
  ;
}


void FGOCrystalMesh_CrystalData___ctor(FGOCrystalMesh_CrystalData_o *this, const MethodInfo *method)
{
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  __int64 v4; // d0
  float z; // s1

  *(_WORD *)&this->fields.useWeaponModel = 257;
  this->fields.useGravity = 1;
  this->fields.mass = 1.0;
  *(_QWORD *)&this->fields.minPieceVertex = 0x140000000ALL;
  if ( !byte_4CAFC09 )
  {
    sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
    byte_4CAFC09 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v4 = *(_QWORD *)&static_fields->zeroVector.fields.x;
  z = static_fields->zeroVector.fields.z;
  *(_OWORD *)&this->fields.minBrokenSpeed = xmmword_CECB70;
  *(_QWORD *)&this->fields.angularVelocity.fields.x = v4;
  this->fields.angularVelocity.fields.z = z;
  System_Object___ctor((Il2CppObject *)this, 0);
}


void FGOCrystalMesh___c__DisplayClass9_0___ctor(FGOCrystalMesh___c__DisplayClass9_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void FGOCrystalMesh___c__DisplayClass9_0___AddCrystalMesh_b__0(
        FGOCrystalMesh___c__DisplayClass9_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *r; // x0
  UnityEngine_Object_o *gameObject; // x20

  if ( (byte_4CB5034 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB5034 = 1;
  }
  r = (UnityEngine_Component_o *)this->fields.r;
  if ( !r )
    goto LABEL_11;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(r, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Implicit(gameObject, 0) )
  {
    r = (UnityEngine_Component_o *)this->fields.r;
    if ( r )
    {
      r = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(r, 0);
      if ( r )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)r, 0, 0);
        return;
      }
    }
LABEL_11:
    sub_1C6BC60(r, method);
  }
}