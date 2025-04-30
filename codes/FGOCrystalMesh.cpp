void __fastcall FGOCrystalMesh___ctor(FGOCrystalMesh_o *this, const MethodInfo *method)
{
  FGOCrystalMesh_CrystalData_o *v3; // x20
  const MethodInfo *v4; // x1
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4A4D2E6 & 1) == 0 )
  {
    sub_1B863B8(&FGOCrystalMesh_CrystalData_TypeInfo, method);
    byte_4A4D2E6 = 1;
  }
  v3 = (FGOCrystalMesh_CrystalData_o *)sub_1B86604(FGOCrystalMesh_CrystalData_TypeInfo);
  FGOCrystalMesh_CrystalData___ctor(v3, v4);
  this->fields.crystalData = v3;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.crystalData, (int32_t)v3, v5, v6);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FGOCrystalMesh__AddCrystalMesh(FGOCrystalMesh_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  UnityEngine_Object_o *crystalMat; // x20
  UnityEngine_Component_o *ComponentsInChildren_object__49697072; // x0
  __int64 v15; // x1
  UnityEngine_Component_o *v16; // x20
  unsigned __int64 v17; // x26
  __int64 v18; // x21
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  __int64 v21; // x1
  UnityEngine_Component_o **v22; // x22
  struct FGOCrystalMesh_CrystalData_o *crystalData; // x8
  Il2CppObject *v24; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *Parent; // x24
  UnityEngine_GameObject_o *v27; // x23
  Il2CppObject *Component_object; // x0
  Il2CppObject *v29; // x24
  System_String_o *name; // x0
  System_String_o *v31; // x0
  const MethodInfo *v32; // x3
  Il2CppObject *v33; // x24
  struct FGOCrystalMesh_CrystalData_o *v34; // x8
  UnityEngine_Component_o *v35; // x23
  float z; // w9
  __int64 v37; // x8
  struct FGOCrystalMesh_CrystalData_o *v38; // x8
  UnityEngine_GameObject_o *v39; // x0
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  System_Action_o *v42; // x22
  int32_t v43; // w2
  const MethodInfo *v44; // x3

  if ( (byte_4A4D2E3 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer___, v3);
    sub_1B863B8(&Method_UnityEngine_GameObject_AddComponent_FGOMeshExploder___, v4);
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_FGOCrystalMesh___, v5);
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_FGOMeshExploder___, v6);
    sub_1B863B8(&Method_UnityEngine_Object_Instantiate_GameObject____76169360, v7);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v8);
    sub_1B863B8(&Method_FGOCrystalMesh___c__DisplayClass9_0__AddCrystalMesh_b__0__, v9);
    sub_1B863B8(&FGOCrystalMesh___c__DisplayClass9_0_TypeInfo, v10);
    sub_1B863B8(&StringLiteral_24510/*"weapon_"*/, v11);
    sub_1B863B8(&StringLiteral_16301/*"_crystal"*/, v12);
    byte_4A4D2E3 = 1;
  }
  if ( this->fields.crystalData )
  {
    crystalMat = (UnityEngine_Object_o *)this->fields.crystalMat;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(crystalMat, 0LL, 0LL) )
    {
      ComponentsInChildren_object__49697072 = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentsInChildren_object__49697072(
                                                                           (UnityEngine_Component_o *)this,
                                                                           (const MethodInfo_2F65130 *)Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer___);
      if ( !ComponentsInChildren_object__49697072 )
        goto LABEL_39;
      v16 = ComponentsInChildren_object__49697072;
      if ( SLODWORD(ComponentsInChildren_object__49697072[1].klass) >= 1 )
      {
        v17 = 0LL;
        while ( 1 )
        {
          v18 = sub_1B86604(FGOCrystalMesh___c__DisplayClass9_0_TypeInfo);
          System_Object___ctor((Il2CppObject *)v18, 0LL);
          if ( v17 >= LODWORD(v16[1].klass) )
            sub_1B8661C(ComponentsInChildren_object__49697072, v15);
          if ( !v18 )
            break;
          v21 = *((_QWORD *)&v16[1].monitor + v17);
          *(_QWORD *)(v18 + 16) = v21;
          v22 = (UnityEngine_Component_o **)(v18 + 16);
          sub_1B8635C((CGThumbnailListItem_o *)(v18 + 16), v21, v19, v20);
          crystalData = this->fields.crystalData;
          if ( !crystalData )
            break;
          if ( crystalData->fields.useWeaponModel )
            goto LABEL_18;
          ComponentsInChildren_object__49697072 = *v22;
          if ( !*v22 )
            break;
          ComponentsInChildren_object__49697072 = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                               ComponentsInChildren_object__49697072,
                                                                               0LL);
          if ( !ComponentsInChildren_object__49697072 )
            break;
          ComponentsInChildren_object__49697072 = (UnityEngine_Component_o *)UnityEngine_Object__get_name(
                                                                               (UnityEngine_Object_o *)ComponentsInChildren_object__49697072,
                                                                               0LL);
          if ( !ComponentsInChildren_object__49697072 )
            break;
          if ( !System_String__Contains(
                  (System_String_o *)ComponentsInChildren_object__49697072,
                  (System_String_o *)StringLiteral_24510/*"weapon_"*/,
                  0LL) )
          {
LABEL_18:
            ComponentsInChildren_object__49697072 = *v22;
            if ( !*v22 )
              break;
            ComponentsInChildren_object__49697072 = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                                 ComponentsInChildren_object__49697072,
                                                                                 0LL);
            if ( !*v22 )
              break;
            v24 = (Il2CppObject *)ComponentsInChildren_object__49697072;
            gameObject = UnityEngine_Component__get_gameObject(*v22, 0LL);
            Parent = GameObjectExtensions__GetParent(gameObject, 0LL);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            ComponentsInChildren_object__49697072 = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_object__50290416(
                                                                                 v24,
                                                                                 Parent,
                                                                                 (const MethodInfo_2FF5EF0 *)Method_UnityEngine_Object_Instantiate_GameObject____76169360);
            if ( !ComponentsInChildren_object__49697072 )
              break;
            v27 = (UnityEngine_GameObject_o *)ComponentsInChildren_object__49697072;
            Component_object = UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)ComponentsInChildren_object__49697072,
                                 (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_FGOCrystalMesh___);
            if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
            {
              v29 = UnityEngine_GameObject__GetComponent_object_(
                      v27,
                      (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_FGOCrystalMesh___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              UnityEngine_Object__Destroy_69356292((UnityEngine_Object_o *)v29, 0LL);
            }
            ComponentsInChildren_object__49697072 = *v22;
            if ( !*v22 )
              break;
            ComponentsInChildren_object__49697072 = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                                 ComponentsInChildren_object__49697072,
                                                                                 0LL);
            if ( !ComponentsInChildren_object__49697072 )
              break;
            name = UnityEngine_Object__get_name((UnityEngine_Object_o *)ComponentsInChildren_object__49697072, 0LL);
            v31 = System_String__Concat_61645176(name, (System_String_o *)StringLiteral_16301/*"_crystal"*/, 0LL);
            UnityEngine_Object__set_name((UnityEngine_Object_o *)v27, v31, 0LL);
            FGOCrystalMesh__ChangeCrystalMaterial(this, v27, this->fields.crystalMat, v32);
            v33 = UnityEngine_GameObject__GetComponent_object_(
                    v27,
                    (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_FGOMeshExploder___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v33, 0LL, 0LL) )
            {
              ComponentsInChildren_object__49697072 = (UnityEngine_Component_o *)UnityEngine_GameObject__AddComponent_object_(
                                                                                   v27,
                                                                                   (const MethodInfo_2FC0D08 *)Method_UnityEngine_GameObject_AddComponent_FGOMeshExploder___);
              v34 = this->fields.crystalData;
              if ( !v34 )
                break;
              v35 = ComponentsInChildren_object__49697072;
              if ( !ComponentsInChildren_object__49697072 )
                break;
              LOBYTE(ComponentsInChildren_object__49697072[1].monitor) = v34->fields.useBrokenPiece;
              BYTE1(ComponentsInChildren_object__49697072[1].monitor) = v34->fields.useGravity;
              HIDWORD(ComponentsInChildren_object__49697072[1].monitor) = LODWORD(v34->fields.mass);
              *(UnityEngine_Component_c **)((char *)&ComponentsInChildren_object__49697072[2].klass + 4) = *(UnityEngine_Component_c **)&v34->fields.minPieceVertex;
              z = v34->fields.angularVelocity.fields.z;
              v37 = *(_QWORD *)&v34->fields.angularVelocity.fields.x;
              *(float *)&ComponentsInChildren_object__49697072[2].klass = z;
              *(_QWORD *)&ComponentsInChildren_object__49697072[1].fields.m_CachedPtr = v37;
              v38 = this->fields.crystalData;
              if ( !v38 )
                break;
              *(_OWORD *)((char *)&ComponentsInChildren_object__49697072[2].monitor + 4) = *(_OWORD *)&v38->fields.minBrokenSpeed;
              ComponentsInChildren_object__49697072 = *v22;
              if ( !*v22 )
                break;
              v39 = UnityEngine_Component__get_gameObject(ComponentsInChildren_object__49697072, 0LL);
              v35[3].monitor = v39;
              sub_1B8635C((CGThumbnailListItem_o *)&v35[3].monitor, (int32_t)v39, v40, v41);
              v42 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
              System_Action___ctor(
                v42,
                (Il2CppObject *)v18,
                Method_FGOCrystalMesh___c__DisplayClass9_0__AddCrystalMesh_b__0__,
                0LL);
              *(_QWORD *)&v35[3].fields.m_CachedPtr = v42;
              sub_1B8635C((CGThumbnailListItem_o *)&v35[3].fields, (int32_t)v42, v43, v44);
            }
          }
          if ( (__int64)++v17 >= SLODWORD(v16[1].klass) )
            return;
        }
LABEL_39:
        sub_1B86614(ComponentsInChildren_object__49697072, v15);
      }
    }
  }
}


void __fastcall FGOCrystalMesh__ChangeCrystalMaterial(
        FGOCrystalMesh_o *this,
        UnityEngine_GameObject_o *o,
        UnityEngine_Material_o *crystalMaterial,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  Il2CppObject *Component_object; // x0
  FGOCrystalMesh_o *v19; // x22
  UnityEngine_Renderer_o *v20; // x20
  __int64 v21; // x0
  UnityEngine_Material_array **p_materialsArray; // x23
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  int32_t sortingOrder; // w0
  int m_CancellationTokenSource; // w8
  FGOCrystalMesh_o *v27; // x24
  il2cpp_array_size_t v28; // w28
  UnityEngine_Material_o *v29; // x26
  UnityEngine_Material_o *v30; // x25
  float Float; // s0
  float v32; // s0
  UnityEngine_Texture_o *Texture; // x0
  struct FGOCrystalMesh_CrystalData_o *crystalData; // x8
  float timeSinceLevelLoad; // s0
  UnityEngine_Texture_o *mainTexture; // x0
  int32_t renderQueue; // w0
  UnityEngine_Material_array *v38; // x26
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  Il2CppClass **v41; // x0
  __int64 v42; // x0
  FGOCrystalMesh_o *v43; // [xsp+10h] [xbp-70h]
  Il2CppObject *component; // [xsp+18h] [xbp-68h] BYREF

  v43 = this;
  if ( (byte_4A4D2E5 & 1) == 0 )
  {
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer___, o);
    sub_1B863B8(&Method_UnityEngine_GameObject_TryGetComponent_ChangeCrystalMaterialSettingComponent___, v6);
    sub_1B863B8(&UnityEngine_Material___TypeInfo, v7);
    sub_1B863B8(&UnityEngine_Material_TypeInfo, v8);
    sub_1B863B8(&StringLiteral_16175/*"_Xscale"*/, v9);
    sub_1B863B8(&StringLiteral_16027/*"_MainTex"*/, v10);
    sub_1B863B8(&StringLiteral_16110/*"_StartTime"*/, v11);
    sub_1B863B8(&StringLiteral_16176/*"_XscaleB"*/, v12);
    sub_1B863B8(&StringLiteral_15983/*"_FadeTime"*/, v13);
    sub_1B863B8(&StringLiteral_16376/*"_xscaleB"*/, v14);
    sub_1B863B8(&StringLiteral_16156/*"_UseSubtex"*/, v15);
    sub_1B863B8(&StringLiteral_16119/*"_SubTex"*/, v16);
    this = (FGOCrystalMesh_o *)sub_1B863B8(&StringLiteral_16375/*"_xscale"*/, v17);
    byte_4A4D2E5 = 1;
  }
  component = 0LL;
  if ( !o )
    goto LABEL_36;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       o,
                       (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer___);
  v19 = (FGOCrystalMesh_o *)StringLiteral_16119/*"_SubTex"*/;
  v20 = (UnityEngine_Renderer_o *)Component_object;
  this = (FGOCrystalMesh_o *)UnityEngine_GameObject__TryGetComponent_object_(
                               o,
                               &component,
                               (const MethodInfo_2FC2080 *)Method_UnityEngine_GameObject_TryGetComponent_ChangeCrystalMaterialSettingComponent___);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    this = (FGOCrystalMesh_o *)component;
    if ( !component )
      goto LABEL_36;
    this = (FGOCrystalMesh_o *)ChangeCrystalMaterialSettingComponent__get_AlphaTexturePropertyName(
                                 (ChangeCrystalMaterialSettingComponent_o *)component,
                                 0LL);
    v19 = this;
  }
  if ( !v20 )
    goto LABEL_36;
  this = (FGOCrystalMesh_o *)UnityEngine_Renderer__get_materials(v20, 0LL);
  if ( !this
    || (v21 = sub_1B86460(UnityEngine_Material___TypeInfo, LODWORD(this->fields.m_CancellationTokenSource)),
        v43->fields.materialsArray = (struct UnityEngine_Material_array *)v21,
        p_materialsArray = &v43->fields.materialsArray,
        sub_1B8635C((CGThumbnailListItem_o *)&v43->fields.materialsArray, v21, v23, v24),
        sortingOrder = UnityEngine_Renderer__get_sortingOrder(v20, 0LL),
        UnityEngine_Renderer__set_sortingOrder(v20, sortingOrder + 1, 0LL),
        (this = (FGOCrystalMesh_o *)UnityEngine_Renderer__get_materials(v20, 0LL)) == 0LL) )
  {
LABEL_36:
    sub_1B86614(this, o);
  }
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v27 = this;
  if ( m_CancellationTokenSource >= 1 )
  {
    v28 = 0;
    do
    {
      if ( v28 >= m_CancellationTokenSource )
LABEL_37:
        sub_1B8661C(this, o);
      v29 = (UnityEngine_Material_o *)*((_QWORD *)&v27->fields.crystalMat + (int)v28);
      v30 = (UnityEngine_Material_o *)sub_1B86604(UnityEngine_Material_TypeInfo);
      UnityEngine_Material___ctor_69219356(v30, crystalMaterial, 0LL);
      if ( !v29 )
        goto LABEL_36;
      if ( UnityEngine_Material__HasProperty_69222264(v29, (System_String_o *)StringLiteral_16375/*"_xscale"*/, 0LL) )
      {
        Float = UnityEngine_Material__GetFloat(v29, (System_String_o *)StringLiteral_16375/*"_xscale"*/, 0LL);
        if ( !v30 )
          goto LABEL_36;
        UnityEngine_Material__SetFloat(v30, (System_String_o *)StringLiteral_16175/*"_Xscale"*/, Float, 0LL);
      }
      this = (FGOCrystalMesh_o *)UnityEngine_Material__HasProperty_69222264(
                                   v29,
                                   (System_String_o *)StringLiteral_16376/*"_xscaleB"*/,
                                   0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v32 = UnityEngine_Material__GetFloat(v29, (System_String_o *)StringLiteral_16376/*"_xscaleB"*/, 0LL);
        if ( !v30 )
          goto LABEL_36;
      }
      else
      {
        v32 = 1.0;
        if ( !v30 )
          goto LABEL_36;
      }
      UnityEngine_Material__SetFloat(v30, (System_String_o *)StringLiteral_16176/*"_XscaleB"*/, v32, 0LL);
      if ( UnityEngine_Material__HasProperty_69222264(v29, (System_String_o *)v19, 0LL) )
      {
        UnityEngine_Material__SetInt(v30, (System_String_o *)StringLiteral_16156/*"_UseSubtex"*/, 1, 0LL);
        Texture = UnityEngine_Material__GetTexture(v29, (System_String_o *)v19, 0LL);
        UnityEngine_Material__SetTexture(v30, (System_String_o *)StringLiteral_16119/*"_SubTex"*/, Texture, 0LL);
      }
      else
      {
        UnityEngine_Material__SetInt(v30, (System_String_o *)StringLiteral_16156/*"_UseSubtex"*/, 0, 0LL);
      }
      this = (FGOCrystalMesh_o *)UnityEngine_Material__HasProperty_69222264(
                                   v30,
                                   (System_String_o *)StringLiteral_15983/*"_FadeTime"*/,
                                   0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        crystalData = v43->fields.crystalData;
        if ( !crystalData )
          goto LABEL_36;
        UnityEngine_Material__SetFloat(
          v30,
          (System_String_o *)StringLiteral_15983/*"_FadeTime"*/,
          crystalData->fields.crystalFadeTime,
          0LL);
      }
      if ( UnityEngine_Material__HasProperty_69222264(v30, (System_String_o *)StringLiteral_16110/*"_StartTime"*/, 0LL) )
      {
        timeSinceLevelLoad = UnityEngine_Time__get_timeSinceLevelLoad(0LL);
        UnityEngine_Material__SetFloat(v30, (System_String_o *)StringLiteral_16110/*"_StartTime"*/, timeSinceLevelLoad, 0LL);
      }
      if ( UnityEngine_Material__HasProperty_69222264(v29, (System_String_o *)StringLiteral_16027/*"_MainTex"*/, 0LL) )
      {
        mainTexture = UnityEngine_Material__get_mainTexture(v29, 0LL);
        UnityEngine_Material__set_mainTexture(v30, mainTexture, 0LL);
      }
      renderQueue = UnityEngine_Material__get_renderQueue(v29, 0LL);
      UnityEngine_Material__set_renderQueue(v30, renderQueue, 0LL);
      v38 = *p_materialsArray;
      if ( !*p_materialsArray )
        goto LABEL_36;
      this = (FGOCrystalMesh_o *)sub_1B864F4(v30, v38->obj.klass->_1.element_class);
      if ( !this )
      {
        v42 = sub_1B86638(0LL);
        sub_1B864E0(v42, 0LL);
      }
      if ( v28 >= v38->max_length )
        goto LABEL_37;
      v41 = &v38->obj.klass + (int)v28;
      v41[4] = (Il2CppClass *)v30;
      sub_1B8635C((CGThumbnailListItem_o *)(v41 + 4), (int32_t)v30, v39, v40);
      m_CancellationTokenSource = (int)v27->fields.m_CancellationTokenSource;
    }
    while ( (int)++v28 < m_CancellationTokenSource );
  }
  UnityEngine_Renderer__set_materials(v20, *p_materialsArray, 0LL);
}


void __fastcall FGOCrystalMesh__ExplodeCrystalMesh(FGOCrystalMesh_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  void *ComponentsInChildren_object__49697072; // x0
  __int64 v6; // x1
  int v7; // w8
  _DWORD *v8; // x20
  unsigned int v9; // w22
  char *v10; // x8
  FGOMeshExploder_o *v11; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v13; // x2
  __int64 v14; // x8
  _QWORD *v15; // x20
  unsigned __int64 v16; // x22
  struct FGOCrystalMesh_CrystalData_o *crystalData; // x8
  UnityEngine_Component_o *v18; // x21

  if ( (byte_4A4D2E4 & 1) == 0 )
  {
    sub_1B863B8(&Method_UnityEngine_Component_GetComponentsInChildren_FGOMeshExploder___, method);
    sub_1B863B8(&Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer___, v3);
    sub_1B863B8(&StringLiteral_24510/*"weapon_"*/, v4);
    byte_4A4D2E4 = 1;
  }
  ComponentsInChildren_object__49697072 = UnityEngine_Component__GetComponentsInChildren_object__49697072(
                                            (UnityEngine_Component_o *)this,
                                            (const MethodInfo_2F65130 *)Method_UnityEngine_Component_GetComponentsInChildren_FGOMeshExploder___);
  if ( !ComponentsInChildren_object__49697072 )
    goto LABEL_23;
  v7 = *((_DWORD *)ComponentsInChildren_object__49697072 + 6);
  v8 = ComponentsInChildren_object__49697072;
  if ( v7 >= 1 )
  {
    v9 = 0;
    while ( v9 < v7 )
    {
      v10 = (char *)&v8[2 * v9];
      v11 = (FGOMeshExploder_o *)*((_QWORD *)v10 + 4);
      if ( !v11 )
        goto LABEL_23;
      gameObject = UnityEngine_Component__get_gameObject(*((UnityEngine_Component_o **)v10 + 4), 0LL);
      FGOMeshExploder__Explode_38482496(v11, gameObject, v13);
      v7 = v8[6];
      if ( (int)++v9 >= v7 )
        goto LABEL_9;
    }
LABEL_24:
    sub_1B8661C(ComponentsInChildren_object__49697072, v6);
  }
LABEL_9:
  ComponentsInChildren_object__49697072 = UnityEngine_Component__GetComponentsInChildren_object__49697072(
                                            (UnityEngine_Component_o *)this,
                                            (const MethodInfo_2F65130 *)Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer___);
  if ( !ComponentsInChildren_object__49697072 )
LABEL_23:
    sub_1B86614(ComponentsInChildren_object__49697072, v6);
  v14 = *((_QWORD *)ComponentsInChildren_object__49697072 + 3);
  v15 = ComponentsInChildren_object__49697072;
  if ( (int)v14 >= 1 )
  {
    v16 = 0LL;
    while ( v16 < (unsigned int)v14 )
    {
      crystalData = this->fields.crystalData;
      if ( !crystalData )
        goto LABEL_23;
      if ( !crystalData->fields.useWeaponModel )
      {
        v18 = (UnityEngine_Component_o *)v15[v16 + 4];
        if ( !v18 )
          goto LABEL_23;
        ComponentsInChildren_object__49697072 = UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)v15[v16 + 4],
                                                  0LL);
        if ( !ComponentsInChildren_object__49697072 )
          goto LABEL_23;
        ComponentsInChildren_object__49697072 = UnityEngine_Object__get_name(
                                                  (UnityEngine_Object_o *)ComponentsInChildren_object__49697072,
                                                  0LL);
        if ( !ComponentsInChildren_object__49697072 )
          goto LABEL_23;
        ComponentsInChildren_object__49697072 = (void *)System_String__Contains(
                                                          (System_String_o *)ComponentsInChildren_object__49697072,
                                                          (System_String_o *)StringLiteral_24510/*"weapon_"*/,
                                                          0LL);
        if ( ((unsigned __int8)ComponentsInChildren_object__49697072 & 1) != 0 )
        {
          ComponentsInChildren_object__49697072 = UnityEngine_Component__get_gameObject(v18, 0LL);
          if ( !ComponentsInChildren_object__49697072 )
            goto LABEL_23;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ComponentsInChildren_object__49697072, 0, 0LL);
        }
      }
      LODWORD(v14) = *((_DWORD *)v15 + 6);
      if ( (__int64)++v16 >= (int)v14 )
        return;
    }
    goto LABEL_24;
  }
}


void __fastcall FGOCrystalMesh__InitCrystalData(
        FGOCrystalMesh_o *this,
        FGOCrystalMesh_CrystalData_o *crystalData,
        UnityEngine_Material_o *crystalMat,
        const MethodInfo *method)
{
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  this->fields.crystalData = crystalData;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.crystalData, (int32_t)crystalData, (int32_t)crystalMat, method);
  this->fields.crystalMat = crystalMat;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.crystalMat, (int32_t)crystalMat, v6, v7);
}


void __fastcall FGOCrystalMesh__OnDestroy(FGOCrystalMesh_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  this->fields.materialsArray = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.materialsArray, 0, v2, v3);
}


// attributes: thunk
void __fastcall FGOCrystalMesh__Start(FGOCrystalMesh_o *this, const MethodInfo *method)
{
  FGOCrystalMesh__AddCrystalMesh(this, method);
}


void __fastcall FGOCrystalMesh__Update(FGOCrystalMesh_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall FGOCrystalMesh_CrystalData___ctor(FGOCrystalMesh_CrystalData_o *this, const MethodInfo *method)
{
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  __int64 v4; // d0
  float z; // s1

  *(_WORD *)&this->fields.useWeaponModel = 257;
  this->fields.useGravity = 1;
  this->fields.mass = 1.0;
  *(_QWORD *)&this->fields.minPieceVertex = 0x140000000ALL;
  if ( !byte_4A487E1 )
  {
    sub_1B863B8(&UnityEngine_Vector3_TypeInfo, method);
    byte_4A487E1 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v4 = *(_QWORD *)&static_fields->zeroVector.fields.x;
  z = static_fields->zeroVector.fields.z;
  *(_OWORD *)&this->fields.minBrokenSpeed = xmmword_BC3360;
  *(_QWORD *)&this->fields.angularVelocity.fields.x = v4;
  this->fields.angularVelocity.fields.z = z;
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall FGOCrystalMesh___c__DisplayClass9_0___ctor(
        FGOCrystalMesh___c__DisplayClass9_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall FGOCrystalMesh___c__DisplayClass9_0___AddCrystalMesh_b__0(
        FGOCrystalMesh___c__DisplayClass9_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *r; // x0
  UnityEngine_Object_o *gameObject; // x20

  if ( (byte_4A4D2E7 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, method);
    byte_4A4D2E7 = 1;
  }
  r = (UnityEngine_Component_o *)this->fields.r;
  if ( !r )
    goto LABEL_11;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(r, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Implicit(gameObject, 0LL) )
  {
    r = (UnityEngine_Component_o *)this->fields.r;
    if ( r )
    {
      r = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(r, 0LL);
      if ( r )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)r, 0, 0LL);
        return;
      }
    }
LABEL_11:
    sub_1B86614(r, method);
  }
}