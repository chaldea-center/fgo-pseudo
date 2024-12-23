void __fastcall FGOCrystalMesh___ctor(FGOCrystalMesh_o *this, const MethodInfo *method)
{
  FGOCrystalMesh_CrystalData_o *v3; // x20
  const MethodInfo *v4; // x1
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B65A22 & 1) == 0 )
  {
    sub_1BE4ACC(&FGOCrystalMesh_CrystalData_TypeInfo, method);
    byte_4B65A22 = 1;
  }
  v3 = (FGOCrystalMesh_CrystalData_o *)sub_1BE4D18(FGOCrystalMesh_CrystalData_TypeInfo);
  FGOCrystalMesh_CrystalData___ctor(v3, v4);
  this->fields.crystalData = v3;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.crystalData, (int64_t)v3, v5, v6, v7, v8, v9, v10);
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
  UnityEngine_Component_o *ComponentsInChildren_object__49612324; // x0
  __int64 v15; // x1
  UnityEngine_Component_o *v16; // x20
  unsigned __int64 v17; // x26
  __int64 v18; // x21
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int64_t v25; // x1
  UnityEngine_Component_o **v26; // x22
  struct FGOCrystalMesh_CrystalData_o *crystalData; // x8
  Il2CppObject *v28; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *Parent; // x24
  UnityEngine_GameObject_o *v31; // x23
  Il2CppObject *Component_object; // x0
  Il2CppObject *v33; // x24
  System_String_o *name; // x0
  System_String_o *v35; // x0
  const MethodInfo *v36; // x3
  Il2CppObject *v37; // x24
  struct FGOCrystalMesh_CrystalData_o *v38; // x8
  UnityEngine_Component_o *v39; // x23
  float z; // w9
  __int64 v41; // x8
  struct FGOCrystalMesh_CrystalData_o *v42; // x8
  UnityEngine_GameObject_o *v43; // x0
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  System_Action_o *v50; // x22
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7

  if ( (byte_4B65A1F & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    sub_1BE4ACC(&Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer___, v3);
    sub_1BE4ACC(&Method_UnityEngine_GameObject_AddComponent_FGOMeshExploder___, v4);
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_FGOCrystalMesh___, v5);
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_FGOMeshExploder___, v6);
    sub_1BE4ACC(&Method_UnityEngine_Object_Instantiate_GameObject____77247160, v7);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v8);
    sub_1BE4ACC(&Method_FGOCrystalMesh___c__DisplayClass9_0__AddCrystalMesh_b__0__, v9);
    sub_1BE4ACC(&FGOCrystalMesh___c__DisplayClass9_0_TypeInfo, v10);
    sub_1BE4ACC(&StringLiteral_25014/*"weapon_"*/, v11);
    sub_1BE4ACC(&StringLiteral_16744/*"_crystal"*/, v12);
    byte_4B65A1F = 1;
  }
  if ( this->fields.crystalData )
  {
    crystalMat = (UnityEngine_Object_o *)this->fields.crystalMat;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(crystalMat, 0LL, 0LL) )
    {
      ComponentsInChildren_object__49612324 = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentsInChildren_object__49612324(
                                                                           (UnityEngine_Component_o *)this,
                                                                           (const MethodInfo_2F50624 *)Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer___);
      if ( !ComponentsInChildren_object__49612324 )
        goto LABEL_39;
      v16 = ComponentsInChildren_object__49612324;
      if ( SLODWORD(ComponentsInChildren_object__49612324[1].klass) >= 1 )
      {
        v17 = 0LL;
        while ( 1 )
        {
          v18 = sub_1BE4D18(FGOCrystalMesh___c__DisplayClass9_0_TypeInfo);
          System_Object___ctor((Il2CppObject *)v18, 0LL);
          if ( v17 >= LODWORD(v16[1].klass) )
            sub_1BE4D30(ComponentsInChildren_object__49612324, v15);
          if ( !v18 )
            break;
          v25 = *((_QWORD *)&v16[1].monitor + v17);
          *(_QWORD *)(v18 + 16) = v25;
          v26 = (UnityEngine_Component_o **)(v18 + 16);
          sub_1BE4A70((PartyOrganizationUtility_o *)(v18 + 16), v25, v19, v20, v21, v22, v23, v24);
          crystalData = this->fields.crystalData;
          if ( !crystalData )
            break;
          if ( crystalData->fields.useWeaponModel )
            goto LABEL_18;
          ComponentsInChildren_object__49612324 = *v26;
          if ( !*v26 )
            break;
          ComponentsInChildren_object__49612324 = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                               ComponentsInChildren_object__49612324,
                                                                               0LL);
          if ( !ComponentsInChildren_object__49612324 )
            break;
          ComponentsInChildren_object__49612324 = (UnityEngine_Component_o *)UnityEngine_Object__get_name(
                                                                               (UnityEngine_Object_o *)ComponentsInChildren_object__49612324,
                                                                               0LL);
          if ( !ComponentsInChildren_object__49612324 )
            break;
          if ( !System_String__Contains(
                  (System_String_o *)ComponentsInChildren_object__49612324,
                  (System_String_o *)StringLiteral_25014/*"weapon_"*/,
                  0LL) )
          {
LABEL_18:
            ComponentsInChildren_object__49612324 = *v26;
            if ( !*v26 )
              break;
            ComponentsInChildren_object__49612324 = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                                 ComponentsInChildren_object__49612324,
                                                                                 0LL);
            if ( !*v26 )
              break;
            v28 = (Il2CppObject *)ComponentsInChildren_object__49612324;
            gameObject = UnityEngine_Component__get_gameObject(*v26, 0LL);
            Parent = GameObjectExtensions__GetParent(gameObject, 0LL);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            ComponentsInChildren_object__49612324 = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_object__50195216(
                                                                                 v28,
                                                                                 Parent,
                                                                                 (const MethodInfo_2FDEB10 *)Method_UnityEngine_Object_Instantiate_GameObject____77247160);
            if ( !ComponentsInChildren_object__49612324 )
              break;
            v31 = (UnityEngine_GameObject_o *)ComponentsInChildren_object__49612324;
            Component_object = UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)ComponentsInChildren_object__49612324,
                                 (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_FGOCrystalMesh___);
            if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
            {
              v33 = UnityEngine_GameObject__GetComponent_object_(
                      v31,
                      (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_FGOCrystalMesh___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              UnityEngine_Object__Destroy_70452000((UnityEngine_Object_o *)v33, 0LL);
            }
            ComponentsInChildren_object__49612324 = *v26;
            if ( !*v26 )
              break;
            ComponentsInChildren_object__49612324 = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                                 ComponentsInChildren_object__49612324,
                                                                                 0LL);
            if ( !ComponentsInChildren_object__49612324 )
              break;
            name = UnityEngine_Object__get_name((UnityEngine_Object_o *)ComponentsInChildren_object__49612324, 0LL);
            v35 = System_String__Concat_62698808(name, (System_String_o *)StringLiteral_16744/*"_crystal"*/, 0LL);
            UnityEngine_Object__set_name((UnityEngine_Object_o *)v31, v35, 0LL);
            FGOCrystalMesh__ChangeCrystalMaterial(this, v31, this->fields.crystalMat, v36);
            v37 = UnityEngine_GameObject__GetComponent_object_(
                    v31,
                    (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_FGOMeshExploder___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v37, 0LL, 0LL) )
            {
              ComponentsInChildren_object__49612324 = (UnityEngine_Component_o *)UnityEngine_GameObject__AddComponent_object_(
                                                                                   v31,
                                                                                   (const MethodInfo_2FA96B4 *)Method_UnityEngine_GameObject_AddComponent_FGOMeshExploder___);
              v38 = this->fields.crystalData;
              if ( !v38 )
                break;
              v39 = ComponentsInChildren_object__49612324;
              if ( !ComponentsInChildren_object__49612324 )
                break;
              LOBYTE(ComponentsInChildren_object__49612324[1].monitor) = v38->fields.useBrokenPiece;
              BYTE1(ComponentsInChildren_object__49612324[1].monitor) = v38->fields.useGravity;
              HIDWORD(ComponentsInChildren_object__49612324[1].monitor) = LODWORD(v38->fields.mass);
              *(UnityEngine_Component_c **)((char *)&ComponentsInChildren_object__49612324[2].klass + 4) = *(UnityEngine_Component_c **)&v38->fields.minPieceVertex;
              z = v38->fields.angularVelocity.fields.z;
              v41 = *(_QWORD *)&v38->fields.angularVelocity.fields.x;
              *(float *)&ComponentsInChildren_object__49612324[2].klass = z;
              *(_QWORD *)&ComponentsInChildren_object__49612324[1].fields.m_CachedPtr = v41;
              v42 = this->fields.crystalData;
              if ( !v42 )
                break;
              *(_OWORD *)((char *)&ComponentsInChildren_object__49612324[2].monitor + 4) = *(_OWORD *)&v42->fields.minBrokenSpeed;
              ComponentsInChildren_object__49612324 = *v26;
              if ( !*v26 )
                break;
              v43 = UnityEngine_Component__get_gameObject(ComponentsInChildren_object__49612324, 0LL);
              v39[3].monitor = v43;
              sub_1BE4A70((PartyOrganizationUtility_o *)&v39[3].monitor, (int64_t)v43, v44, v45, v46, v47, v48, v49);
              v50 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
              System_Action___ctor(
                v50,
                (Il2CppObject *)v18,
                Method_FGOCrystalMesh___c__DisplayClass9_0__AddCrystalMesh_b__0__,
                0LL);
              *(_QWORD *)&v39[3].fields.m_CachedPtr = v50;
              sub_1BE4A70((PartyOrganizationUtility_o *)&v39[3].fields, (int64_t)v50, v51, v52, v53, v54, v55, v56);
            }
          }
          if ( (__int64)++v17 >= SLODWORD(v16[1].klass) )
            return;
        }
LABEL_39:
        sub_1BE4D28(ComponentsInChildren_object__49612324, v15);
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
  int64_t v21; // x0
  UnityEngine_Material_array **p_materialsArray; // x23
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int32_t sortingOrder; // w0
  int m_CancellationTokenSource; // w8
  FGOCrystalMesh_o *v31; // x24
  il2cpp_array_size_t v32; // w28
  UnityEngine_Material_o *v33; // x26
  UnityEngine_Material_o *v34; // x25
  float Float; // s0
  float v36; // s0
  UnityEngine_Texture_o *Texture; // x0
  struct FGOCrystalMesh_CrystalData_o *crystalData; // x8
  float timeSinceLevelLoad; // s0
  UnityEngine_Texture_o *mainTexture; // x0
  int32_t renderQueue; // w0
  UnityEngine_Material_array *v42; // x26
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  Il2CppClass **v49; // x0
  __int64 v50; // x0
  FGOCrystalMesh_o *v51; // [xsp+10h] [xbp-70h]
  Il2CppObject *component; // [xsp+18h] [xbp-68h] BYREF

  v51 = this;
  if ( (byte_4B65A21 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer___, o);
    sub_1BE4ACC(&Method_UnityEngine_GameObject_TryGetComponent_ChangeCrystalMaterialSettingComponent___, v6);
    sub_1BE4ACC(&UnityEngine_Material___TypeInfo, v7);
    sub_1BE4ACC(&UnityEngine_Material_TypeInfo, v8);
    sub_1BE4ACC(&StringLiteral_16618/*"_Xscale"*/, v9);
    sub_1BE4ACC(&StringLiteral_16471/*"_MainTex"*/, v10);
    sub_1BE4ACC(&StringLiteral_16553/*"_StartTime"*/, v11);
    sub_1BE4ACC(&StringLiteral_16619/*"_XscaleB"*/, v12);
    sub_1BE4ACC(&StringLiteral_16427/*"_FadeTime"*/, v13);
    sub_1BE4ACC(&StringLiteral_16817/*"_xscaleB"*/, v14);
    sub_1BE4ACC(&StringLiteral_16599/*"_UseSubtex"*/, v15);
    sub_1BE4ACC(&StringLiteral_16562/*"_SubTex"*/, v16);
    this = (FGOCrystalMesh_o *)sub_1BE4ACC(&StringLiteral_16816/*"_xscale"*/, v17);
    byte_4B65A21 = 1;
  }
  component = 0LL;
  if ( !o )
    goto LABEL_36;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       o,
                       (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer___);
  v19 = (FGOCrystalMesh_o *)StringLiteral_16562/*"_SubTex"*/;
  v20 = (UnityEngine_Renderer_o *)Component_object;
  this = (FGOCrystalMesh_o *)UnityEngine_GameObject__TryGetComponent_object_(
                               o,
                               &component,
                               (const MethodInfo_2FAAA2C *)Method_UnityEngine_GameObject_TryGetComponent_ChangeCrystalMaterialSettingComponent___);
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
    || (v21 = sub_1BE4B74(UnityEngine_Material___TypeInfo, LODWORD(this->fields.m_CancellationTokenSource)),
        v51->fields.materialsArray = (struct UnityEngine_Material_array *)v21,
        p_materialsArray = &v51->fields.materialsArray,
        sub_1BE4A70((PartyOrganizationUtility_o *)&v51->fields.materialsArray, v21, v23, v24, v25, v26, v27, v28),
        sortingOrder = UnityEngine_Renderer__get_sortingOrder(v20, 0LL),
        UnityEngine_Renderer__set_sortingOrder(v20, sortingOrder + 1, 0LL),
        (this = (FGOCrystalMesh_o *)UnityEngine_Renderer__get_materials(v20, 0LL)) == 0LL) )
  {
LABEL_36:
    sub_1BE4D28(this, o);
  }
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v31 = this;
  if ( m_CancellationTokenSource >= 1 )
  {
    v32 = 0;
    do
    {
      if ( v32 >= m_CancellationTokenSource )
LABEL_37:
        sub_1BE4D30(this, o);
      v33 = (UnityEngine_Material_o *)*((_QWORD *)&v31->fields.crystalMat + (int)v32);
      v34 = (UnityEngine_Material_o *)sub_1BE4D18(UnityEngine_Material_TypeInfo);
      UnityEngine_Material___ctor_70315272(v34, crystalMaterial, 0LL);
      if ( !v33 )
        goto LABEL_36;
      if ( UnityEngine_Material__HasProperty_70318180(v33, (System_String_o *)StringLiteral_16816/*"_xscale"*/, 0LL) )
      {
        Float = UnityEngine_Material__GetFloat(v33, (System_String_o *)StringLiteral_16816/*"_xscale"*/, 0LL);
        if ( !v34 )
          goto LABEL_36;
        UnityEngine_Material__SetFloat(v34, (System_String_o *)StringLiteral_16618/*"_Xscale"*/, Float, 0LL);
      }
      this = (FGOCrystalMesh_o *)UnityEngine_Material__HasProperty_70318180(
                                   v33,
                                   (System_String_o *)StringLiteral_16817/*"_xscaleB"*/,
                                   0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v36 = UnityEngine_Material__GetFloat(v33, (System_String_o *)StringLiteral_16817/*"_xscaleB"*/, 0LL);
        if ( !v34 )
          goto LABEL_36;
      }
      else
      {
        v36 = 1.0;
        if ( !v34 )
          goto LABEL_36;
      }
      UnityEngine_Material__SetFloat(v34, (System_String_o *)StringLiteral_16619/*"_XscaleB"*/, v36, 0LL);
      if ( UnityEngine_Material__HasProperty_70318180(v33, (System_String_o *)v19, 0LL) )
      {
        UnityEngine_Material__SetInt(v34, (System_String_o *)StringLiteral_16599/*"_UseSubtex"*/, 1, 0LL);
        Texture = UnityEngine_Material__GetTexture(v33, (System_String_o *)v19, 0LL);
        UnityEngine_Material__SetTexture(v34, (System_String_o *)StringLiteral_16562/*"_SubTex"*/, Texture, 0LL);
      }
      else
      {
        UnityEngine_Material__SetInt(v34, (System_String_o *)StringLiteral_16599/*"_UseSubtex"*/, 0, 0LL);
      }
      this = (FGOCrystalMesh_o *)UnityEngine_Material__HasProperty_70318180(
                                   v34,
                                   (System_String_o *)StringLiteral_16427/*"_FadeTime"*/,
                                   0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        crystalData = v51->fields.crystalData;
        if ( !crystalData )
          goto LABEL_36;
        UnityEngine_Material__SetFloat(
          v34,
          (System_String_o *)StringLiteral_16427/*"_FadeTime"*/,
          crystalData->fields.crystalFadeTime,
          0LL);
      }
      if ( UnityEngine_Material__HasProperty_70318180(v34, (System_String_o *)StringLiteral_16553/*"_StartTime"*/, 0LL) )
      {
        timeSinceLevelLoad = UnityEngine_Time__get_timeSinceLevelLoad(0LL);
        UnityEngine_Material__SetFloat(v34, (System_String_o *)StringLiteral_16553/*"_StartTime"*/, timeSinceLevelLoad, 0LL);
      }
      if ( UnityEngine_Material__HasProperty_70318180(v33, (System_String_o *)StringLiteral_16471/*"_MainTex"*/, 0LL) )
      {
        mainTexture = UnityEngine_Material__get_mainTexture(v33, 0LL);
        UnityEngine_Material__set_mainTexture(v34, mainTexture, 0LL);
      }
      renderQueue = UnityEngine_Material__get_renderQueue(v33, 0LL);
      UnityEngine_Material__set_renderQueue(v34, renderQueue, 0LL);
      v42 = *p_materialsArray;
      if ( !*p_materialsArray )
        goto LABEL_36;
      this = (FGOCrystalMesh_o *)sub_1BE4C08(v34, v42->obj.klass->_1.element_class);
      if ( !this )
      {
        v50 = sub_1BE4D4C(0LL);
        sub_1BE4BF4(v50, 0LL);
      }
      if ( v32 >= v42->max_length )
        goto LABEL_37;
      v49 = &v42->obj.klass + (int)v32;
      v49[4] = (Il2CppClass *)v34;
      sub_1BE4A70((PartyOrganizationUtility_o *)(v49 + 4), (int64_t)v34, v43, v44, v45, v46, v47, v48);
      m_CancellationTokenSource = (int)v31->fields.m_CancellationTokenSource;
    }
    while ( (int)++v32 < m_CancellationTokenSource );
  }
  UnityEngine_Renderer__set_materials(v20, *p_materialsArray, 0LL);
}


void __fastcall FGOCrystalMesh__ExplodeCrystalMesh(FGOCrystalMesh_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  void *ComponentsInChildren_object__49612324; // x0
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

  if ( (byte_4B65A20 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_Component_GetComponentsInChildren_FGOMeshExploder___, method);
    sub_1BE4ACC(&Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer___, v3);
    sub_1BE4ACC(&StringLiteral_25014/*"weapon_"*/, v4);
    byte_4B65A20 = 1;
  }
  ComponentsInChildren_object__49612324 = UnityEngine_Component__GetComponentsInChildren_object__49612324(
                                            (UnityEngine_Component_o *)this,
                                            (const MethodInfo_2F50624 *)Method_UnityEngine_Component_GetComponentsInChildren_FGOMeshExploder___);
  if ( !ComponentsInChildren_object__49612324 )
    goto LABEL_23;
  v7 = *((_DWORD *)ComponentsInChildren_object__49612324 + 6);
  v8 = ComponentsInChildren_object__49612324;
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
      FGOMeshExploder__Explode_38439756(v11, gameObject, v13);
      v7 = v8[6];
      if ( (int)++v9 >= v7 )
        goto LABEL_9;
    }
LABEL_24:
    sub_1BE4D30(ComponentsInChildren_object__49612324, v6);
  }
LABEL_9:
  ComponentsInChildren_object__49612324 = UnityEngine_Component__GetComponentsInChildren_object__49612324(
                                            (UnityEngine_Component_o *)this,
                                            (const MethodInfo_2F50624 *)Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer___);
  if ( !ComponentsInChildren_object__49612324 )
LABEL_23:
    sub_1BE4D28(ComponentsInChildren_object__49612324, v6);
  v14 = *((_QWORD *)ComponentsInChildren_object__49612324 + 3);
  v15 = ComponentsInChildren_object__49612324;
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
        ComponentsInChildren_object__49612324 = UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)v15[v16 + 4],
                                                  0LL);
        if ( !ComponentsInChildren_object__49612324 )
          goto LABEL_23;
        ComponentsInChildren_object__49612324 = UnityEngine_Object__get_name(
                                                  (UnityEngine_Object_o *)ComponentsInChildren_object__49612324,
                                                  0LL);
        if ( !ComponentsInChildren_object__49612324 )
          goto LABEL_23;
        ComponentsInChildren_object__49612324 = (void *)System_String__Contains(
                                                          (System_String_o *)ComponentsInChildren_object__49612324,
                                                          (System_String_o *)StringLiteral_25014/*"weapon_"*/,
                                                          0LL);
        if ( ((unsigned __int8)ComponentsInChildren_object__49612324 & 1) != 0 )
        {
          ComponentsInChildren_object__49612324 = UnityEngine_Component__get_gameObject(v18, 0LL);
          if ( !ComponentsInChildren_object__49612324 )
            goto LABEL_23;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ComponentsInChildren_object__49612324, 0, 0LL);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  this->fields.crystalData = crystalData;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.crystalData,
    (int64_t)crystalData,
    (int64_t)crystalMat,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.crystalMat = crystalMat;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.crystalMat, (int64_t)crystalMat, v10, v11, v12, v13, v14, v15);
}


void __fastcall FGOCrystalMesh__OnDestroy(FGOCrystalMesh_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.materialsArray = 0LL;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.materialsArray, 0LL, v2, v3, v4, v5, v6, v7);
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
  if ( !byte_4B612E1 )
  {
    sub_1BE4ACC(&UnityEngine_Vector3_TypeInfo, method);
    byte_4B612E1 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v4 = *(_QWORD *)&static_fields->zeroVector.fields.x;
  z = static_fields->zeroVector.fields.z;
  *(_OWORD *)&this->fields.minBrokenSpeed = xmmword_BE2580;
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

  if ( (byte_4B65A23 & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, method);
    byte_4B65A23 = 1;
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
    sub_1BE4D28(r, method);
  }
}