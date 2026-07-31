void FGOCrystalMesh___ctor(FGOCrystalMesh_o *this, const MethodInfo *method)
{
  FGOCrystalMesh_CrystalData_o *v3; // x20
  const MethodInfo *v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  if ( (byte_59373C7 & 1) == 0 )
  {
    sub_21FFC50(&FGOCrystalMesh_CrystalData_TypeInfo);
    byte_59373C7 = 1;
  }
  v3 = (FGOCrystalMesh_CrystalData_o *)sub_21FFEBC(FGOCrystalMesh_CrystalData_TypeInfo);
  FGOCrystalMesh_CrystalData___ctor(v3, v4);
  this->fields.crystalData = v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.crystalData, (int32_t)v3, v5, v6, v7, v8, v9, v10);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void FGOCrystalMesh__AddCrystalMesh(FGOCrystalMesh_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *crystalMat; // x20
  UnityEngine_Component_o *ComponentsInChildren_object__58647176; // x0
  __int64 v6; // x1
  UnityEngine_Component_o *v7; // x20
  unsigned __int64 v8; // x26
  __int64 v9; // x21
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  __int64 v16; // x1
  UnityEngine_Component_o **v17; // x22
  struct FGOCrystalMesh_CrystalData_o *crystalData; // x8
  Il2CppObject *v19; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  UnityEngine_Transform_o *Parent; // x24
  UnityEngine_GameObject_o *v24; // x23
  Il2CppObject *Component_object; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  Il2CppObject *v28; // x24
  System_String_o *name; // x0
  System_String_o *v30; // x0
  const MethodInfo *v31; // x3
  __int64 v32; // x1
  __int64 v33; // x2
  Il2CppObject *v34; // x24
  struct FGOCrystalMesh_CrystalData_o *v35; // x8
  UnityEngine_Component_o *v36; // x23
  UnityEngine_Component_c *v37; // d1
  float z; // w9
  intptr_t v39; // x8
  struct FGOCrystalMesh_CrystalData_o *v40; // x8
  UnityEngine_GameObject_o *v41; // x0
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  System_Action_o *v48; // x22
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7

  if ( (byte_59373C4 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer___);
    sub_21FFC50(&Method_UnityEngine_GameObject_AddComponent_FGOMeshExploder___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_FGOCrystalMesh___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_FGOMeshExploder___);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject____91575024);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_FGOCrystalMesh___c__DisplayClass9_0__AddCrystalMesh_b__0__);
    sub_21FFC50(&FGOCrystalMesh___c__DisplayClass9_0_TypeInfo);
    sub_21FFC50(&StringLiteral_26118/*"weapon_"*/);
    sub_21FFC50(&StringLiteral_17179/*"_crystal"*/);
    byte_59373C4 = 1;
  }
  if ( this->fields.crystalData )
  {
    crystalMat = (UnityEngine_Object_o *)this->fields.crystalMat;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
    if ( !UnityEngine_Object__op_Equality(crystalMat, 0, 0) )
    {
      ComponentsInChildren_object__58647176 = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentsInChildren_object__58647176(
                                                                           (UnityEngine_Component_o *)this,
                                                                           (const MethodInfo_37EE288 *)Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer___);
      if ( !ComponentsInChildren_object__58647176 )
        goto LABEL_39;
      v7 = ComponentsInChildren_object__58647176;
      if ( SLODWORD(ComponentsInChildren_object__58647176[1].klass) >= 1 )
      {
        v8 = 0;
        while ( 1 )
        {
          v9 = sub_21FFEBC(FGOCrystalMesh___c__DisplayClass9_0_TypeInfo);
          System_Object___ctor((Il2CppObject *)v9, 0);
          if ( v8 >= LODWORD(v7[1].klass) )
            sub_21FFED4(ComponentsInChildren_object__58647176);
          if ( !v9 )
            break;
          v16 = *((_QWORD *)&v7[1].monitor + v8);
          *(_QWORD *)(v9 + 16) = v16;
          v17 = (UnityEngine_Component_o **)(v9 + 16);
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v9 + 16), v16, v10, v11, v12, v13, v14, v15);
          crystalData = this->fields.crystalData;
          if ( !crystalData )
            break;
          if ( crystalData->fields.useWeaponModel )
            goto LABEL_18;
          ComponentsInChildren_object__58647176 = *v17;
          if ( !*v17 )
            break;
          ComponentsInChildren_object__58647176 = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                               ComponentsInChildren_object__58647176,
                                                                               0);
          if ( !ComponentsInChildren_object__58647176 )
            break;
          ComponentsInChildren_object__58647176 = (UnityEngine_Component_o *)UnityEngine_Object__get_name(
                                                                               (UnityEngine_Object_o *)ComponentsInChildren_object__58647176,
                                                                               0);
          if ( !ComponentsInChildren_object__58647176 )
            break;
          if ( !System_String__Contains(
                  (System_String_o *)ComponentsInChildren_object__58647176,
                  (System_String_o *)StringLiteral_26118/*"weapon_"*/,
                  0) )
          {
LABEL_18:
            ComponentsInChildren_object__58647176 = *v17;
            if ( !*v17 )
              break;
            ComponentsInChildren_object__58647176 = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                                 ComponentsInChildren_object__58647176,
                                                                                 0);
            if ( !*v17 )
              break;
            v19 = (Il2CppObject *)ComponentsInChildren_object__58647176;
            gameObject = UnityEngine_Component__get_gameObject(*v17, 0);
            Parent = GameObjectExtensions__GetParent(gameObject, 0);
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21, v22);
            ComponentsInChildren_object__58647176 = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_object__59506996(
                                                                                 v19,
                                                                                 Parent,
                                                                                 (const MethodInfo_38C0134 *)Method_UnityEngine_Object_Instantiate_GameObject____91575024);
            if ( !ComponentsInChildren_object__58647176 )
              break;
            v24 = (UnityEngine_GameObject_o *)ComponentsInChildren_object__58647176;
            Component_object = UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)ComponentsInChildren_object__58647176,
                                 (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_FGOCrystalMesh___);
            if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
            {
              v28 = UnityEngine_GameObject__GetComponent_object_(
                      v24,
                      (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_FGOCrystalMesh___);
              if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26, v27);
              UnityEngine_Object__Destroy_83246496((UnityEngine_Object_o *)v28, 0);
            }
            ComponentsInChildren_object__58647176 = *v17;
            if ( !*v17 )
              break;
            ComponentsInChildren_object__58647176 = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                                 ComponentsInChildren_object__58647176,
                                                                                 0);
            if ( !ComponentsInChildren_object__58647176 )
              break;
            name = UnityEngine_Object__get_name((UnityEngine_Object_o *)ComponentsInChildren_object__58647176, 0);
            v30 = System_String__Concat_75438412(name, (System_String_o *)StringLiteral_17179/*"_crystal"*/, 0);
            UnityEngine_Object__set_name((UnityEngine_Object_o *)v24, v30, 0);
            FGOCrystalMesh__ChangeCrystalMaterial(this, v24, this->fields.crystalMat, v31);
            v34 = UnityEngine_GameObject__GetComponent_object_(
                    v24,
                    (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_FGOMeshExploder___);
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v32, v33);
            if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v34, 0, 0) )
            {
              ComponentsInChildren_object__58647176 = (UnityEngine_Component_o *)UnityEngine_GameObject__AddComponent_object_(
                                                                                   v24,
                                                                                   (const MethodInfo_38839E8 *)Method_UnityEngine_GameObject_AddComponent_FGOMeshExploder___);
              v35 = this->fields.crystalData;
              if ( !v35 )
                break;
              v36 = ComponentsInChildren_object__58647176;
              if ( !ComponentsInChildren_object__58647176 )
                break;
              LOWORD(ComponentsInChildren_object__58647176[1].monitor) = *(_WORD *)&v35->fields.useBrokenPiece;
              v37 = *(UnityEngine_Component_c **)&v35->fields.minPieceVertex;
              HIDWORD(ComponentsInChildren_object__58647176[1].monitor) = LODWORD(v35->fields.mass);
              *(UnityEngine_Component_c **)((char *)&ComponentsInChildren_object__58647176[2].klass + 4) = v37;
              z = v35->fields.angularVelocity.fields.z;
              v39 = *(_QWORD *)&v35->fields.angularVelocity.fields.x;
              *(float *)&ComponentsInChildren_object__58647176[2].klass = z;
              ComponentsInChildren_object__58647176[1].fields.m_CachedPtr = v39;
              v40 = this->fields.crystalData;
              if ( !v40 )
                break;
              ComponentsInChildren_object__58647176 = *v17;
              *(_OWORD *)((char *)&v36[2].monitor + 4) = *(_OWORD *)&v40->fields.minBrokenSpeed;
              if ( !ComponentsInChildren_object__58647176 )
                break;
              v41 = UnityEngine_Component__get_gameObject(ComponentsInChildren_object__58647176, 0);
              v36[3].monitor = v41;
              sub_21FFBF4(
                (MissionNaviTransitionBoardItem_o *)&v36[3].monitor,
                (int32_t)v41,
                v42,
                v43,
                v44,
                v45,
                v46,
                v47);
              v48 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
              System_Action___ctor(
                v48,
                (Il2CppObject *)v9,
                Method_FGOCrystalMesh___c__DisplayClass9_0__AddCrystalMesh_b__0__,
                0);
              v36[3].fields.m_CachedPtr = (intptr_t)v48;
              sub_21FFBF4(
                (MissionNaviTransitionBoardItem_o *)&v36[3].fields,
                (int32_t)v48,
                v49,
                v50,
                v51,
                v52,
                v53,
                v54);
            }
          }
          if ( (__int64)++v8 >= SLODWORD(v7[1].klass) )
            return;
        }
LABEL_39:
        sub_21FFECC(ComponentsInChildren_object__58647176, v6);
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
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  int32_t sortingOrder; // w0
  int m_CancellationTokenSource; // w8
  FGOCrystalMesh_o *v19; // x24
  unsigned int v20; // w20
  UnityEngine_Material_o *v21; // x26
  UnityEngine_Material_o *v22; // x25
  float Float; // s0
  float v24; // s0
  UnityEngine_Texture_o *Texture; // x0
  struct FGOCrystalMesh_CrystalData_o *crystalData; // x8
  float timeSinceLevelLoad; // s0
  UnityEngine_Texture_o *mainTexture; // x0
  int32_t renderQueue; // w0
  UnityEngine_Material_array *v30; // x26
  __int64 v31; // x1
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  Il2CppClass **v38; // x0
  __int64 v39; // x0
  UnityEngine_Renderer_o *v40; // [xsp+8h] [xbp-78h]
  FGOCrystalMesh_o *v41; // [xsp+10h] [xbp-70h]
  Il2CppObject *component; // [xsp+18h] [xbp-68h] BYREF

  v41 = this;
  if ( (byte_59373C6 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer___);
    sub_21FFC50(&Method_UnityEngine_GameObject_TryGetComponent_ChangeCrystalMaterialSettingComponent___);
    sub_21FFC50(&UnityEngine_Material___TypeInfo);
    sub_21FFC50(&UnityEngine_Material_TypeInfo);
    sub_21FFC50(&StringLiteral_17039/*"_Xscale"*/);
    sub_21FFC50(&StringLiteral_16879/*"_MainTex"*/);
    sub_21FFC50(&StringLiteral_16967/*"_StartTime"*/);
    sub_21FFC50(&StringLiteral_17040/*"_XscaleB"*/);
    sub_21FFC50(&StringLiteral_16833/*"_FadeTime"*/);
    sub_21FFC50(&StringLiteral_17255/*"_xscaleB"*/);
    sub_21FFC50(&StringLiteral_17019/*"_UseSubtex"*/);
    sub_21FFC50(&StringLiteral_16976/*"_SubTex"*/);
    this = (FGOCrystalMesh_o *)sub_21FFC50(&StringLiteral_17254/*"_xscale"*/);
    byte_59373C6 = 1;
  }
  component = 0;
  if ( !o )
    goto LABEL_36;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       o,
                       (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer___);
  v7 = (FGOCrystalMesh_o *)StringLiteral_16976/*"_SubTex"*/;
  v8 = (UnityEngine_Renderer_o *)Component_object;
  this = (FGOCrystalMesh_o *)UnityEngine_GameObject__TryGetComponent_object_(
                               o,
                               &component,
                               (const MethodInfo_3884A68 *)Method_UnityEngine_GameObject_TryGetComponent_ChangeCrystalMaterialSettingComponent___);
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
  if ( !this )
    goto LABEL_36;
  v9 = sub_21FFD10(UnityEngine_Material___TypeInfo, LODWORD(this->fields.m_CancellationTokenSource));
  v41->fields.materialsArray = (struct UnityEngine_Material_array *)v9;
  p_materialsArray = &v41->fields.materialsArray;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v41->fields.materialsArray, v9, v11, v12, v13, v14, v15, v16);
  sortingOrder = UnityEngine_Renderer__get_sortingOrder(v8, 0);
  UnityEngine_Renderer__set_sortingOrder(v8, sortingOrder + 1, 0);
  v40 = v8;
  this = (FGOCrystalMesh_o *)UnityEngine_Renderer__get_materials(v8, 0);
  if ( !this )
LABEL_36:
    sub_21FFECC(this, o);
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v19 = this;
  if ( m_CancellationTokenSource >= 1 )
  {
    v20 = 0;
    do
    {
      if ( v20 >= m_CancellationTokenSource )
LABEL_37:
        sub_21FFED4(this);
      v21 = (UnityEngine_Material_o *)*((_QWORD *)&v19->fields.crystalMat + (int)v20);
      v22 = (UnityEngine_Material_o *)sub_21FFEBC(UnityEngine_Material_TypeInfo);
      UnityEngine_Material___ctor_83061620(v22, crystalMaterial, 0);
      if ( !v21 )
        goto LABEL_36;
      if ( UnityEngine_Material__HasProperty_83064036(v21, (System_String_o *)StringLiteral_17254/*"_xscale"*/, 0) )
      {
        Float = UnityEngine_Material__GetFloat(v21, (System_String_o *)StringLiteral_17254/*"_xscale"*/, 0);
        if ( !v22 )
          goto LABEL_36;
        UnityEngine_Material__SetFloat(v22, (System_String_o *)StringLiteral_17039/*"_Xscale"*/, Float, 0);
      }
      this = (FGOCrystalMesh_o *)UnityEngine_Material__HasProperty_83064036(
                                   v21,
                                   (System_String_o *)StringLiteral_17255/*"_xscaleB"*/,
                                   0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v24 = UnityEngine_Material__GetFloat(v21, (System_String_o *)StringLiteral_17255/*"_xscaleB"*/, 0);
        if ( !v22 )
          goto LABEL_36;
      }
      else
      {
        v24 = 1.0;
        if ( !v22 )
          goto LABEL_36;
      }
      UnityEngine_Material__SetFloat(v22, (System_String_o *)StringLiteral_17040/*"_XscaleB"*/, v24, 0);
      if ( UnityEngine_Material__HasProperty_83064036(v21, (System_String_o *)v7, 0) )
      {
        UnityEngine_Material__SetInt(v22, (System_String_o *)StringLiteral_17019/*"_UseSubtex"*/, 1, 0);
        Texture = UnityEngine_Material__GetTexture(v21, (System_String_o *)v7, 0);
        UnityEngine_Material__SetTexture(v22, (System_String_o *)StringLiteral_16976/*"_SubTex"*/, Texture, 0);
      }
      else
      {
        UnityEngine_Material__SetInt(v22, (System_String_o *)StringLiteral_17019/*"_UseSubtex"*/, 0, 0);
      }
      this = (FGOCrystalMesh_o *)UnityEngine_Material__HasProperty_83064036(
                                   v22,
                                   (System_String_o *)StringLiteral_16833/*"_FadeTime"*/,
                                   0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        crystalData = v41->fields.crystalData;
        if ( !crystalData )
          goto LABEL_36;
        UnityEngine_Material__SetFloat(
          v22,
          (System_String_o *)StringLiteral_16833/*"_FadeTime"*/,
          crystalData->fields.crystalFadeTime,
          0);
      }
      if ( UnityEngine_Material__HasProperty_83064036(v22, (System_String_o *)StringLiteral_16967/*"_StartTime"*/, 0) )
      {
        timeSinceLevelLoad = UnityEngine_Time__get_timeSinceLevelLoad(0);
        UnityEngine_Material__SetFloat(v22, (System_String_o *)StringLiteral_16967/*"_StartTime"*/, timeSinceLevelLoad, 0);
      }
      if ( UnityEngine_Material__HasProperty_83064036(v21, (System_String_o *)StringLiteral_16879/*"_MainTex"*/, 0) )
      {
        mainTexture = UnityEngine_Material__get_mainTexture(v21, 0);
        UnityEngine_Material__set_mainTexture(v22, mainTexture, 0);
      }
      renderQueue = UnityEngine_Material__get_renderQueue(v21, 0);
      UnityEngine_Material__set_renderQueue(v22, renderQueue, 0);
      v30 = *p_materialsArray;
      if ( !*p_materialsArray )
        goto LABEL_36;
      this = (FGOCrystalMesh_o *)sub_21FFDA4(v22, v30->obj.klass->_1.element_class);
      if ( !this )
      {
        v39 = sub_21FFEF0(0, v31);
        sub_21FFD90(v39, 0);
      }
      if ( v20 >= LODWORD(v30->max_length) )
        goto LABEL_37;
      v38 = &v30->obj.klass + (int)v20;
      v38[4] = (Il2CppClass *)v22;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v38 + 4), (int32_t)v22, v32, v33, v34, v35, v36, v37);
      m_CancellationTokenSource = (int)v19->fields.m_CancellationTokenSource;
    }
    while ( (int)++v20 < m_CancellationTokenSource );
  }
  UnityEngine_Renderer__set_materials(v40, *p_materialsArray, 0);
}


void FGOCrystalMesh__ExplodeCrystalMesh(FGOCrystalMesh_o *this, const MethodInfo *method)
{
  void *ComponentsInChildren_object__58647176; // x0
  __int64 v4; // x1
  int v5; // w8
  void *v6; // x20
  __int64 v7; // x22
  FGOMeshExploder_o *v8; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v10; // x2
  __int64 v11; // x8
  _QWORD *v12; // x20
  unsigned __int64 v13; // x22
  struct FGOCrystalMesh_CrystalData_o *crystalData; // x8
  UnityEngine_Component_o *v15; // x21

  if ( (byte_59373C5 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponentsInChildren_FGOMeshExploder___);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer___);
    sub_21FFC50(&StringLiteral_26118/*"weapon_"*/);
    byte_59373C5 = 1;
  }
  ComponentsInChildren_object__58647176 = UnityEngine_Component__GetComponentsInChildren_object__58647176(
                                            (UnityEngine_Component_o *)this,
                                            (const MethodInfo_37EE288 *)Method_UnityEngine_Component_GetComponentsInChildren_FGOMeshExploder___);
  if ( !ComponentsInChildren_object__58647176 )
    goto LABEL_23;
  v5 = *((_DWORD *)ComponentsInChildren_object__58647176 + 6);
  v6 = ComponentsInChildren_object__58647176;
  if ( v5 >= 1 )
  {
    v7 = 0;
    while ( (unsigned int)v7 < v5 )
    {
      v8 = (FGOMeshExploder_o *)*((_QWORD *)v6 + v7 + 4);
      if ( !v8 )
        goto LABEL_23;
      gameObject = UnityEngine_Component__get_gameObject(*((UnityEngine_Component_o **)v6 + v7 + 4), 0);
      FGOMeshExploder__Explode_47184968(v8, gameObject, v10);
      v5 = *((_DWORD *)v6 + 6);
      if ( (int)++v7 >= v5 )
        goto LABEL_9;
    }
LABEL_24:
    sub_21FFED4(ComponentsInChildren_object__58647176);
  }
LABEL_9:
  ComponentsInChildren_object__58647176 = UnityEngine_Component__GetComponentsInChildren_object__58647176(
                                            (UnityEngine_Component_o *)this,
                                            (const MethodInfo_37EE288 *)Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer___);
  if ( !ComponentsInChildren_object__58647176 )
LABEL_23:
    sub_21FFECC(ComponentsInChildren_object__58647176, v4);
  v11 = *((_QWORD *)ComponentsInChildren_object__58647176 + 3);
  v12 = ComponentsInChildren_object__58647176;
  if ( (int)v11 >= 1 )
  {
    v13 = 0;
    while ( v13 < (unsigned int)v11 )
    {
      crystalData = this->fields.crystalData;
      if ( !crystalData )
        goto LABEL_23;
      if ( !crystalData->fields.useWeaponModel )
      {
        v15 = (UnityEngine_Component_o *)v12[v13 + 4];
        if ( !v15 )
          goto LABEL_23;
        ComponentsInChildren_object__58647176 = UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)v12[v13 + 4],
                                                  0);
        if ( !ComponentsInChildren_object__58647176 )
          goto LABEL_23;
        ComponentsInChildren_object__58647176 = UnityEngine_Object__get_name(
                                                  (UnityEngine_Object_o *)ComponentsInChildren_object__58647176,
                                                  0);
        if ( !ComponentsInChildren_object__58647176 )
          goto LABEL_23;
        ComponentsInChildren_object__58647176 = (void *)System_String__Contains(
                                                          (System_String_o *)ComponentsInChildren_object__58647176,
                                                          (System_String_o *)StringLiteral_26118/*"weapon_"*/,
                                                          0);
        if ( ((unsigned __int8)ComponentsInChildren_object__58647176 & 1) != 0 )
        {
          ComponentsInChildren_object__58647176 = UnityEngine_Component__get_gameObject(v15, 0);
          if ( !ComponentsInChildren_object__58647176 )
            goto LABEL_23;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ComponentsInChildren_object__58647176, 0, 0);
        }
      }
      LODWORD(v11) = *((_DWORD *)v12 + 6);
      if ( (__int64)++v13 >= (int)v11 )
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
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  this->fields.crystalData = crystalData;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.crystalData,
    (int32_t)crystalData,
    (System_String_o *)crystalMat,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.crystalMat = crystalMat;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.crystalMat,
    (int32_t)crystalMat,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
}


void FGOCrystalMesh__OnDestroy(FGOCrystalMesh_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.materialsArray = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.materialsArray, 0, v2, v3, v4, v5, v6, v7);
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
  int v3; // w8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  __int64 v5; // d0
  float z; // s1

  *(_WORD *)&this->fields.useWeaponModel = 257;
  v3 = (unsigned __int8)byte_5931940;
  this->fields.useGravity = 1;
  this->fields.mass = 1.0;
  *(_QWORD *)&this->fields.minPieceVertex = 0x140000000ALL;
  if ( !v3 )
  {
    sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931940 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v5 = *(_QWORD *)&static_fields->zeroVector.fields.x;
  z = static_fields->zeroVector.fields.z;
  *(_OWORD *)&this->fields.minBrokenSpeed = xmmword_E94AE0;
  *(_QWORD *)&this->fields.angularVelocity.fields.x = v5;
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
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *gameObject; // x20

  if ( (byte_59373C8 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59373C8 = 1;
  }
  r = (UnityEngine_Component_o *)this->fields.r;
  if ( !r )
    goto LABEL_11;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(r, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v5);
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
    sub_21FFECC(r, method);
  }
}