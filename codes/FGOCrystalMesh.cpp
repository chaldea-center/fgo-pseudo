void FGOCrystalMesh___ctor(FGOCrystalMesh_o *this, const MethodInfo *method)
{
  FGOCrystalMesh_CrystalData_o *v3; // x20
  const MethodInfo *v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  if ( (byte_4CED412 & 1) == 0 )
  {
    sub_1C7BAE8(&FGOCrystalMesh_CrystalData_TypeInfo);
    byte_4CED412 = 1;
  }
  v3 = (FGOCrystalMesh_CrystalData_o *)sub_1C7BD34(FGOCrystalMesh_CrystalData_TypeInfo);
  FGOCrystalMesh_CrystalData___ctor(v3, v4);
  this->fields.crystalData = v3;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.crystalData, (int32_t)v3, v5, v6, v7, v8, v9, v10);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void FGOCrystalMesh__AddCrystalMesh(FGOCrystalMesh_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *crystalMat; // x20
  UnityEngine_Component_o *ComponentsInChildren_object__51804268; // x0
  __int64 v5; // x1
  UnityEngine_Component_o *v6; // x20
  unsigned __int64 v7; // x26
  __int64 v8; // x21
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  __int64 v15; // x1
  UnityEngine_Component_o **v16; // x22
  struct FGOCrystalMesh_CrystalData_o *crystalData; // x8
  Il2CppObject *v18; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *Parent; // x24
  UnityEngine_GameObject_o *v21; // x23
  Il2CppObject *Component_object; // x0
  Il2CppObject *v23; // x24
  System_String_o *name; // x0
  System_String_o *v25; // x0
  const MethodInfo *v26; // x3
  Il2CppObject *v27; // x24
  struct FGOCrystalMesh_CrystalData_o *v28; // x8
  UnityEngine_Component_o *v29; // x23
  float z; // w9
  intptr_t v31; // x8
  struct FGOCrystalMesh_CrystalData_o *v32; // x8
  UnityEngine_GameObject_o *v33; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  System_Action_o *v40; // x22
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7

  if ( (byte_4CED40F & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer___);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_AddComponent_FGOMeshExploder___);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_FGOCrystalMesh___);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_FGOMeshExploder___);
    sub_1C7BAE8(&Method_UnityEngine_Object_Instantiate_GameObject____78879968);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_FGOCrystalMesh___c__DisplayClass9_0__AddCrystalMesh_b__0__);
    sub_1C7BAE8(&FGOCrystalMesh___c__DisplayClass9_0_TypeInfo);
    sub_1C7BAE8(&StringLiteral_25049/*"weapon_"*/);
    sub_1C7BAE8(&StringLiteral_16604/*"_crystal"*/);
    byte_4CED40F = 1;
  }
  if ( this->fields.crystalData )
  {
    crystalMat = (UnityEngine_Object_o *)this->fields.crystalMat;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(crystalMat, 0, 0) )
    {
      ComponentsInChildren_object__51804268 = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentsInChildren_object__51804268(
                                                                           (UnityEngine_Component_o *)this,
                                                                           (const MethodInfo_316786C *)Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer___);
      if ( !ComponentsInChildren_object__51804268 )
        goto LABEL_39;
      v6 = ComponentsInChildren_object__51804268;
      if ( SLODWORD(ComponentsInChildren_object__51804268[1].klass) >= 1 )
      {
        v7 = 0;
        while ( 1 )
        {
          v8 = sub_1C7BD34(FGOCrystalMesh___c__DisplayClass9_0_TypeInfo);
          System_Object___ctor((Il2CppObject *)v8, 0);
          if ( v7 >= LODWORD(v6[1].klass) )
            sub_1C7BD48(ComponentsInChildren_object__51804268);
          if ( !v8 )
            break;
          v15 = *((_QWORD *)&v6[1].monitor + v7);
          *(_QWORD *)(v8 + 16) = v15;
          v16 = (UnityEngine_Component_o **)(v8 + 16);
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v8 + 16), v15, v9, v10, v11, v12, v13, v14);
          crystalData = this->fields.crystalData;
          if ( !crystalData )
            break;
          if ( crystalData->fields.useWeaponModel )
            goto LABEL_18;
          ComponentsInChildren_object__51804268 = *v16;
          if ( !*v16 )
            break;
          ComponentsInChildren_object__51804268 = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                               ComponentsInChildren_object__51804268,
                                                                               0);
          if ( !ComponentsInChildren_object__51804268 )
            break;
          ComponentsInChildren_object__51804268 = (UnityEngine_Component_o *)UnityEngine_Object__get_name(
                                                                               (UnityEngine_Object_o *)ComponentsInChildren_object__51804268,
                                                                               0);
          if ( !ComponentsInChildren_object__51804268 )
            break;
          if ( !System_String__Contains(
                  (System_String_o *)ComponentsInChildren_object__51804268,
                  (System_String_o *)StringLiteral_25049/*"weapon_"*/,
                  0) )
          {
LABEL_18:
            ComponentsInChildren_object__51804268 = *v16;
            if ( !*v16 )
              break;
            ComponentsInChildren_object__51804268 = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                                 ComponentsInChildren_object__51804268,
                                                                                 0);
            if ( !*v16 )
              break;
            v18 = (Il2CppObject *)ComponentsInChildren_object__51804268;
            gameObject = UnityEngine_Component__get_gameObject(*v16, 0);
            Parent = GameObjectExtensions__GetParent(gameObject, 0);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            ComponentsInChildren_object__51804268 = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_object__52412380(
                                                                                 v18,
                                                                                 Parent,
                                                                                 (const MethodInfo_31FBFDC *)Method_UnityEngine_Object_Instantiate_GameObject____78879968);
            if ( !ComponentsInChildren_object__51804268 )
              break;
            v21 = (UnityEngine_GameObject_o *)ComponentsInChildren_object__51804268;
            Component_object = UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)ComponentsInChildren_object__51804268,
                                 (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_FGOCrystalMesh___);
            if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
            {
              v23 = UnityEngine_GameObject__GetComponent_object_(
                      v21,
                      (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_FGOCrystalMesh___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              UnityEngine_Object__Destroy_71870148((UnityEngine_Object_o *)v23, 0);
            }
            ComponentsInChildren_object__51804268 = *v16;
            if ( !*v16 )
              break;
            ComponentsInChildren_object__51804268 = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                                 ComponentsInChildren_object__51804268,
                                                                                 0);
            if ( !ComponentsInChildren_object__51804268 )
              break;
            name = UnityEngine_Object__get_name((UnityEngine_Object_o *)ComponentsInChildren_object__51804268, 0);
            v25 = System_String__Concat_64176912(name, (System_String_o *)StringLiteral_16604/*"_crystal"*/, 0);
            UnityEngine_Object__set_name((UnityEngine_Object_o *)v21, v25, 0);
            FGOCrystalMesh__ChangeCrystalMaterial(this, v21, this->fields.crystalMat, v26);
            v27 = UnityEngine_GameObject__GetComponent_object_(
                    v21,
                    (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_FGOMeshExploder___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v27, 0, 0) )
            {
              ComponentsInChildren_object__51804268 = (UnityEngine_Component_o *)UnityEngine_GameObject__AddComponent_object_(
                                                                                   v21,
                                                                                   (const MethodInfo_31C6FE0 *)Method_UnityEngine_GameObject_AddComponent_FGOMeshExploder___);
              v28 = this->fields.crystalData;
              if ( !v28 )
                break;
              v29 = ComponentsInChildren_object__51804268;
              if ( !ComponentsInChildren_object__51804268 )
                break;
              LOBYTE(ComponentsInChildren_object__51804268[1].monitor) = v28->fields.useBrokenPiece;
              BYTE1(ComponentsInChildren_object__51804268[1].monitor) = v28->fields.useGravity;
              HIDWORD(ComponentsInChildren_object__51804268[1].monitor) = LODWORD(v28->fields.mass);
              *(UnityEngine_Component_c **)((char *)&ComponentsInChildren_object__51804268[2].klass + 4) = *(UnityEngine_Component_c **)&v28->fields.minPieceVertex;
              z = v28->fields.angularVelocity.fields.z;
              v31 = *(_QWORD *)&v28->fields.angularVelocity.fields.x;
              *(float *)&ComponentsInChildren_object__51804268[2].klass = z;
              ComponentsInChildren_object__51804268[1].fields.m_CachedPtr = v31;
              v32 = this->fields.crystalData;
              if ( !v32 )
                break;
              *(_OWORD *)((char *)&ComponentsInChildren_object__51804268[2].monitor + 4) = *(_OWORD *)&v32->fields.minBrokenSpeed;
              ComponentsInChildren_object__51804268 = *v16;
              if ( !*v16 )
                break;
              v33 = UnityEngine_Component__get_gameObject(ComponentsInChildren_object__51804268, 0);
              v29[3].monitor = v33;
              sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v29[3].monitor, (int32_t)v33, v34, v35, v36, v37, v38, v39);
              v40 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
              System_Action___ctor(
                v40,
                (Il2CppObject *)v8,
                Method_FGOCrystalMesh___c__DisplayClass9_0__AddCrystalMesh_b__0__,
                0);
              v29[3].fields.m_CachedPtr = (intptr_t)v40;
              sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v29[3].fields, (int32_t)v40, v41, v42, v43, v44, v45, v46);
            }
          }
          if ( (__int64)++v7 >= SLODWORD(v6[1].klass) )
            return;
        }
LABEL_39:
        sub_1C7BD40(ComponentsInChildren_object__51804268, v5);
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
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  int32_t sortingOrder; // w0
  int m_CancellationTokenSource; // w8
  FGOCrystalMesh_o *v19; // x24
  unsigned int v20; // w28
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
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  Il2CppClass **v37; // x0
  __int64 v38; // x0
  FGOCrystalMesh_o *v39; // [xsp+10h] [xbp-70h]
  Il2CppObject *component; // [xsp+18h] [xbp-68h] BYREF

  v39 = this;
  if ( (byte_4CED411 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer___);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_TryGetComponent_ChangeCrystalMaterialSettingComponent___);
    sub_1C7BAE8(&UnityEngine_Material___TypeInfo);
    sub_1C7BAE8(&UnityEngine_Material_TypeInfo);
    sub_1C7BAE8(&StringLiteral_16478/*"_Xscale"*/);
    sub_1C7BAE8(&StringLiteral_16323/*"_MainTex"*/);
    sub_1C7BAE8(&StringLiteral_16410/*"_StartTime"*/);
    sub_1C7BAE8(&StringLiteral_16479/*"_XscaleB"*/);
    sub_1C7BAE8(&StringLiteral_16277/*"_FadeTime"*/);
    sub_1C7BAE8(&StringLiteral_16678/*"_xscaleB"*/);
    sub_1C7BAE8(&StringLiteral_16459/*"_UseSubtex"*/);
    sub_1C7BAE8(&StringLiteral_16419/*"_SubTex"*/);
    this = (FGOCrystalMesh_o *)sub_1C7BAE8(&StringLiteral_16677/*"_xscale"*/);
    byte_4CED411 = 1;
  }
  component = 0;
  if ( !o )
    goto LABEL_36;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       o,
                       (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer___);
  v7 = (FGOCrystalMesh_o *)StringLiteral_16419/*"_SubTex"*/;
  v8 = (UnityEngine_Renderer_o *)Component_object;
  this = (FGOCrystalMesh_o *)UnityEngine_GameObject__TryGetComponent_object_(
                               o,
                               &component,
                               (const MethodInfo_31C8358 *)Method_UnityEngine_GameObject_TryGetComponent_ChangeCrystalMaterialSettingComponent___);
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
    || (v9 = sub_1C7BB90(UnityEngine_Material___TypeInfo, LODWORD(this->fields.m_CancellationTokenSource)),
        v39->fields.materialsArray = (struct UnityEngine_Material_array *)v9,
        p_materialsArray = &v39->fields.materialsArray,
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v39->fields.materialsArray, v9, v11, v12, v13, v14, v15, v16),
        sortingOrder = UnityEngine_Renderer__get_sortingOrder(v8, 0),
        UnityEngine_Renderer__set_sortingOrder(v8, sortingOrder + 1, 0),
        (this = (FGOCrystalMesh_o *)UnityEngine_Renderer__get_materials(v8, 0)) == 0) )
  {
LABEL_36:
    sub_1C7BD40(this, o);
  }
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v19 = this;
  if ( m_CancellationTokenSource >= 1 )
  {
    v20 = 0;
    do
    {
      if ( v20 >= m_CancellationTokenSource )
LABEL_37:
        sub_1C7BD48(this);
      v21 = (UnityEngine_Material_o *)*((_QWORD *)&v19->fields.crystalMat + (int)v20);
      v22 = (UnityEngine_Material_o *)sub_1C7BD34(UnityEngine_Material_TypeInfo);
      UnityEngine_Material___ctor_71732712(v22, crystalMaterial, 0);
      if ( !v21 )
        goto LABEL_36;
      if ( UnityEngine_Material__HasProperty_71735620(v21, (System_String_o *)StringLiteral_16677/*"_xscale"*/, 0) )
      {
        Float = UnityEngine_Material__GetFloat(v21, (System_String_o *)StringLiteral_16677/*"_xscale"*/, 0);
        if ( !v22 )
          goto LABEL_36;
        UnityEngine_Material__SetFloat(v22, (System_String_o *)StringLiteral_16478/*"_Xscale"*/, Float, 0);
      }
      this = (FGOCrystalMesh_o *)UnityEngine_Material__HasProperty_71735620(
                                   v21,
                                   (System_String_o *)StringLiteral_16678/*"_xscaleB"*/,
                                   0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v24 = UnityEngine_Material__GetFloat(v21, (System_String_o *)StringLiteral_16678/*"_xscaleB"*/, 0);
        if ( !v22 )
          goto LABEL_36;
      }
      else
      {
        v24 = 1.0;
        if ( !v22 )
          goto LABEL_36;
      }
      UnityEngine_Material__SetFloat(v22, (System_String_o *)StringLiteral_16479/*"_XscaleB"*/, v24, 0);
      if ( UnityEngine_Material__HasProperty_71735620(v21, (System_String_o *)v7, 0) )
      {
        UnityEngine_Material__SetInt(v22, (System_String_o *)StringLiteral_16459/*"_UseSubtex"*/, 1, 0);
        Texture = UnityEngine_Material__GetTexture(v21, (System_String_o *)v7, 0);
        UnityEngine_Material__SetTexture(v22, (System_String_o *)StringLiteral_16419/*"_SubTex"*/, Texture, 0);
      }
      else
      {
        UnityEngine_Material__SetInt(v22, (System_String_o *)StringLiteral_16459/*"_UseSubtex"*/, 0, 0);
      }
      this = (FGOCrystalMesh_o *)UnityEngine_Material__HasProperty_71735620(
                                   v22,
                                   (System_String_o *)StringLiteral_16277/*"_FadeTime"*/,
                                   0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        crystalData = v39->fields.crystalData;
        if ( !crystalData )
          goto LABEL_36;
        UnityEngine_Material__SetFloat(
          v22,
          (System_String_o *)StringLiteral_16277/*"_FadeTime"*/,
          crystalData->fields.crystalFadeTime,
          0);
      }
      if ( UnityEngine_Material__HasProperty_71735620(v22, (System_String_o *)StringLiteral_16410/*"_StartTime"*/, 0) )
      {
        timeSinceLevelLoad = UnityEngine_Time__get_timeSinceLevelLoad(0);
        UnityEngine_Material__SetFloat(v22, (System_String_o *)StringLiteral_16410/*"_StartTime"*/, timeSinceLevelLoad, 0);
      }
      if ( UnityEngine_Material__HasProperty_71735620(v21, (System_String_o *)StringLiteral_16323/*"_MainTex"*/, 0) )
      {
        mainTexture = UnityEngine_Material__get_mainTexture(v21, 0);
        UnityEngine_Material__set_mainTexture(v22, mainTexture, 0);
      }
      renderQueue = UnityEngine_Material__get_renderQueue(v21, 0);
      UnityEngine_Material__set_renderQueue(v22, renderQueue, 0);
      v30 = *p_materialsArray;
      if ( !*p_materialsArray )
        goto LABEL_36;
      this = (FGOCrystalMesh_o *)sub_1C7BC24(v22, v30->obj.klass->_1.element_class);
      if ( !this )
      {
        v38 = sub_1C7BD64(0);
        sub_1C7BC10(v38, 0);
      }
      if ( v20 >= LODWORD(v30->max_length) )
        goto LABEL_37;
      v37 = &v30->obj.klass + (int)v20;
      v37[4] = (Il2CppClass *)v22;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v37 + 4), (int32_t)v22, v31, v32, v33, v34, v35, v36);
      m_CancellationTokenSource = (int)v19->fields.m_CancellationTokenSource;
    }
    while ( (int)++v20 < m_CancellationTokenSource );
  }
  UnityEngine_Renderer__set_materials(v8, *p_materialsArray, 0);
}


void FGOCrystalMesh__ExplodeCrystalMesh(FGOCrystalMesh_o *this, const MethodInfo *method)
{
  void *ComponentsInChildren_object__51804268; // x0
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

  if ( (byte_4CED410 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponentsInChildren_FGOMeshExploder___);
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer___);
    sub_1C7BAE8(&StringLiteral_25049/*"weapon_"*/);
    byte_4CED410 = 1;
  }
  ComponentsInChildren_object__51804268 = UnityEngine_Component__GetComponentsInChildren_object__51804268(
                                            (UnityEngine_Component_o *)this,
                                            (const MethodInfo_316786C *)Method_UnityEngine_Component_GetComponentsInChildren_FGOMeshExploder___);
  if ( !ComponentsInChildren_object__51804268 )
    goto LABEL_23;
  v5 = *((_DWORD *)ComponentsInChildren_object__51804268 + 6);
  v6 = ComponentsInChildren_object__51804268;
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
      FGOMeshExploder__Explode_40818744(v9, gameObject, v11);
      v5 = v6[6];
      if ( (int)++v7 >= v5 )
        goto LABEL_9;
    }
LABEL_24:
    sub_1C7BD48(ComponentsInChildren_object__51804268);
  }
LABEL_9:
  ComponentsInChildren_object__51804268 = UnityEngine_Component__GetComponentsInChildren_object__51804268(
                                            (UnityEngine_Component_o *)this,
                                            (const MethodInfo_316786C *)Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer___);
  if ( !ComponentsInChildren_object__51804268 )
LABEL_23:
    sub_1C7BD40(ComponentsInChildren_object__51804268, v4);
  v12 = *((_QWORD *)ComponentsInChildren_object__51804268 + 3);
  v13 = ComponentsInChildren_object__51804268;
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
        ComponentsInChildren_object__51804268 = UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)v13[v14 + 4],
                                                  0);
        if ( !ComponentsInChildren_object__51804268 )
          goto LABEL_23;
        ComponentsInChildren_object__51804268 = UnityEngine_Object__get_name(
                                                  (UnityEngine_Object_o *)ComponentsInChildren_object__51804268,
                                                  0);
        if ( !ComponentsInChildren_object__51804268 )
          goto LABEL_23;
        ComponentsInChildren_object__51804268 = (void *)System_String__Contains(
                                                          (System_String_o *)ComponentsInChildren_object__51804268,
                                                          (System_String_o *)StringLiteral_25049/*"weapon_"*/,
                                                          0);
        if ( ((unsigned __int8)ComponentsInChildren_object__51804268 & 1) != 0 )
        {
          ComponentsInChildren_object__51804268 = UnityEngine_Component__get_gameObject(v16, 0);
          if ( !ComponentsInChildren_object__51804268 )
            goto LABEL_23;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ComponentsInChildren_object__51804268, 0, 0);
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
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7

  this->fields.crystalData = crystalData;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.crystalData,
    (int32_t)crystalData,
    (int32_t)crystalMat,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.crystalMat = crystalMat;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.crystalMat,
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
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.materialsArray = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.materialsArray, 0, v2, v3, v4, v5, v6, v7);
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
  if ( !byte_4CE7E59 )
  {
    sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
    byte_4CE7E59 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v4 = *(_QWORD *)&static_fields->zeroVector.fields.x;
  z = static_fields->zeroVector.fields.z;
  *(_OWORD *)&this->fields.minBrokenSpeed = xmmword_CF6190;
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

  if ( (byte_4CED413 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CED413 = 1;
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
    sub_1C7BD40(r, method);
  }
}