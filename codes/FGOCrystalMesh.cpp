void __fastcall FGOCrystalMesh___ctor(FGOCrystalMesh_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  FGOCrystalMesh_CrystalData_o *v5; // x20
  const MethodInfo *v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4B1507B & 1) == 0 )
  {
    sub_1BCA7E0(&FGOCrystalMesh_CrystalData_TypeInfo, method, v2);
    byte_4B1507B = 1;
  }
  v5 = (FGOCrystalMesh_CrystalData_o *)sub_1BCAA2C(FGOCrystalMesh_CrystalData_TypeInfo, method, v2, v3);
  FGOCrystalMesh_CrystalData___ctor(v5, v6);
  this->fields.crystalData = v5;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.crystalData, (int64_t)v5, v7, v8, v9, v10, v11, v12);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FGOCrystalMesh__AddCrystalMesh(FGOCrystalMesh_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  UnityEngine_Object_o *crystalMat; // x20
  UnityEngine_Component_o *ComponentsInChildren_object__49324452; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  UnityEngine_Component_o *v29; // x20
  unsigned __int64 v30; // x26
  __int64 v31; // x21
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  int64_t v38; // x1
  UnityEngine_Component_o **v39; // x22
  struct FGOCrystalMesh_CrystalData_o *crystalData; // x8
  Il2CppObject *v41; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v43; // x1
  UnityEngine_Transform_o *Parent; // x24
  UnityEngine_GameObject_o *v45; // x23
  Il2CppObject *Component_object; // x0
  __int64 v47; // x1
  Il2CppObject *v48; // x24
  System_String_o *name; // x0
  System_String_o *v50; // x0
  const MethodInfo *v51; // x3
  __int64 v52; // x1
  Il2CppObject *v53; // x24
  struct FGOCrystalMesh_CrystalData_o *v54; // x8
  UnityEngine_Component_o *v55; // x23
  float z; // w9
  __int64 v57; // x8
  struct FGOCrystalMesh_CrystalData_o *v58; // x8
  UnityEngine_GameObject_o *v59; // x0
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  __int64 v66; // x1
  __int64 v67; // x2
  __int64 v68; // x3
  System_Action_o *v69; // x22
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7

  if ( (byte_4B15078 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer___, v4, v5);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_AddComponent_FGOMeshExploder___, v6, v7);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_FGOCrystalMesh___, v8, v9);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_FGOMeshExploder___, v10, v11);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject____76924592, v12, v13);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_FGOCrystalMesh___c__DisplayClass9_0__AddCrystalMesh_b__0__, v16, v17);
    sub_1BCA7E0(&FGOCrystalMesh___c__DisplayClass9_0_TypeInfo, v18, v19);
    sub_1BCA7E0(&StringLiteral_24926/*"weapon_"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_16703/*"_crystal"*/, v22, v23);
    byte_4B15078 = 1;
  }
  if ( this->fields.crystalData )
  {
    crystalMat = (UnityEngine_Object_o *)this->fields.crystalMat;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( !UnityEngine_Object__op_Equality(crystalMat, 0LL, 0LL) )
    {
      ComponentsInChildren_object__49324452 = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentsInChildren_object__49324452(
                                                                           (UnityEngine_Component_o *)this,
                                                                           (const MethodInfo_2F0A1A4 *)Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer___);
      if ( !ComponentsInChildren_object__49324452 )
        goto LABEL_39;
      v29 = ComponentsInChildren_object__49324452;
      if ( SLODWORD(ComponentsInChildren_object__49324452[1].klass) >= 1 )
      {
        v30 = 0LL;
        while ( 1 )
        {
          v31 = sub_1BCAA2C(FGOCrystalMesh___c__DisplayClass9_0_TypeInfo, v26, v27, v28);
          System_Object___ctor((Il2CppObject *)v31, 0LL);
          if ( v30 >= LODWORD(v29[1].klass) )
            sub_1BCAA44(ComponentsInChildren_object__49324452, v26);
          if ( !v31 )
            break;
          v38 = *((_QWORD *)&v29[1].monitor + v30);
          *(_QWORD *)(v31 + 16) = v38;
          v39 = (UnityEngine_Component_o **)(v31 + 16);
          sub_1BCA784((PartyOrganizationUtility_o *)(v31 + 16), v38, v32, v33, v34, v35, v36, v37);
          crystalData = this->fields.crystalData;
          if ( !crystalData )
            break;
          if ( crystalData->fields.useWeaponModel )
            goto LABEL_18;
          ComponentsInChildren_object__49324452 = *v39;
          if ( !*v39 )
            break;
          ComponentsInChildren_object__49324452 = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                               ComponentsInChildren_object__49324452,
                                                                               0LL);
          if ( !ComponentsInChildren_object__49324452 )
            break;
          ComponentsInChildren_object__49324452 = (UnityEngine_Component_o *)UnityEngine_Object__get_name(
                                                                               (UnityEngine_Object_o *)ComponentsInChildren_object__49324452,
                                                                               0LL);
          if ( !ComponentsInChildren_object__49324452 )
            break;
          if ( !System_String__Contains(
                  (System_String_o *)ComponentsInChildren_object__49324452,
                  (System_String_o *)StringLiteral_24926/*"weapon_"*/,
                  0LL) )
          {
LABEL_18:
            ComponentsInChildren_object__49324452 = *v39;
            if ( !*v39 )
              break;
            ComponentsInChildren_object__49324452 = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                                 ComponentsInChildren_object__49324452,
                                                                                 0LL);
            if ( !*v39 )
              break;
            v41 = (Il2CppObject *)ComponentsInChildren_object__49324452;
            gameObject = UnityEngine_Component__get_gameObject(*v39, 0LL);
            Parent = GameObjectExtensions__GetParent(gameObject, 0LL);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v43);
            ComponentsInChildren_object__49324452 = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_object__49903816(
                                                                                 v41,
                                                                                 Parent,
                                                                                 (const MethodInfo_2F978C8 *)Method_UnityEngine_Object_Instantiate_GameObject____76924592);
            if ( !ComponentsInChildren_object__49324452 )
              break;
            v45 = (UnityEngine_GameObject_o *)ComponentsInChildren_object__49324452;
            Component_object = UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)ComponentsInChildren_object__49324452,
                                 (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_FGOCrystalMesh___);
            if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
            {
              v48 = UnityEngine_GameObject__GetComponent_object_(
                      v45,
                      (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_FGOCrystalMesh___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v47);
              UnityEngine_Object__Destroy_70154244((UnityEngine_Object_o *)v48, 0LL);
            }
            ComponentsInChildren_object__49324452 = *v39;
            if ( !*v39 )
              break;
            ComponentsInChildren_object__49324452 = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                                 ComponentsInChildren_object__49324452,
                                                                                 0LL);
            if ( !ComponentsInChildren_object__49324452 )
              break;
            name = UnityEngine_Object__get_name((UnityEngine_Object_o *)ComponentsInChildren_object__49324452, 0LL);
            v50 = System_String__Concat_62401220(name, (System_String_o *)StringLiteral_16703/*"_crystal"*/, 0LL);
            UnityEngine_Object__set_name((UnityEngine_Object_o *)v45, v50, 0LL);
            FGOCrystalMesh__ChangeCrystalMaterial(this, v45, this->fields.crystalMat, v51);
            v53 = UnityEngine_GameObject__GetComponent_object_(
                    v45,
                    (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_FGOMeshExploder___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v52);
            if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v53, 0LL, 0LL) )
            {
              ComponentsInChildren_object__49324452 = (UnityEngine_Component_o *)UnityEngine_GameObject__AddComponent_object_(
                                                                                   v45,
                                                                                   (const MethodInfo_2F625E8 *)Method_UnityEngine_GameObject_AddComponent_FGOMeshExploder___);
              v54 = this->fields.crystalData;
              if ( !v54 )
                break;
              v55 = ComponentsInChildren_object__49324452;
              if ( !ComponentsInChildren_object__49324452 )
                break;
              LOBYTE(ComponentsInChildren_object__49324452[1].monitor) = v54->fields.useBrokenPiece;
              BYTE1(ComponentsInChildren_object__49324452[1].monitor) = v54->fields.useGravity;
              HIDWORD(ComponentsInChildren_object__49324452[1].monitor) = LODWORD(v54->fields.mass);
              *(UnityEngine_Component_c **)((char *)&ComponentsInChildren_object__49324452[2].klass + 4) = *(UnityEngine_Component_c **)&v54->fields.minPieceVertex;
              z = v54->fields.angularVelocity.fields.z;
              v57 = *(_QWORD *)&v54->fields.angularVelocity.fields.x;
              *(float *)&ComponentsInChildren_object__49324452[2].klass = z;
              *(_QWORD *)&ComponentsInChildren_object__49324452[1].fields.m_CachedPtr = v57;
              v58 = this->fields.crystalData;
              if ( !v58 )
                break;
              *(_OWORD *)((char *)&ComponentsInChildren_object__49324452[2].monitor + 4) = *(_OWORD *)&v58->fields.minBrokenSpeed;
              ComponentsInChildren_object__49324452 = *v39;
              if ( !*v39 )
                break;
              v59 = UnityEngine_Component__get_gameObject(ComponentsInChildren_object__49324452, 0LL);
              v55[3].monitor = v59;
              sub_1BCA784((PartyOrganizationUtility_o *)&v55[3].monitor, (int64_t)v59, v60, v61, v62, v63, v64, v65);
              v69 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v66, v67, v68);
              System_Action___ctor(
                v69,
                (Il2CppObject *)v31,
                Method_FGOCrystalMesh___c__DisplayClass9_0__AddCrystalMesh_b__0__,
                0LL);
              *(_QWORD *)&v55[3].fields.m_CachedPtr = v69;
              sub_1BCA784((PartyOrganizationUtility_o *)&v55[3].fields, (int64_t)v69, v70, v71, v72, v73, v74, v75);
            }
          }
          if ( (__int64)++v30 >= SLODWORD(v29[1].klass) )
            return;
        }
LABEL_39:
        sub_1BCAA3C(ComponentsInChildren_object__49324452, v26);
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
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  Il2CppObject *Component_object; // x0
  FGOCrystalMesh_o *v27; // x22
  UnityEngine_Renderer_o *v28; // x20
  int64_t v29; // x0
  UnityEngine_Material_array **p_materialsArray; // x23
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  int32_t sortingOrder; // w0
  __int64 v38; // x2
  __int64 v39; // x3
  int m_CancellationTokenSource; // w8
  FGOCrystalMesh_o *v41; // x24
  il2cpp_array_size_t v42; // w28
  UnityEngine_Material_o *v43; // x26
  UnityEngine_Material_o *v44; // x25
  float Float; // s0
  UnityEngine_Texture_o *Texture; // x0
  struct FGOCrystalMesh_CrystalData_o *crystalData; // x8
  float timeSinceLevelLoad; // s0
  UnityEngine_Texture_o *mainTexture; // x0
  int32_t renderQueue; // w0
  UnityEngine_Material_array *v51; // x26
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  Il2CppClass **v58; // x0
  __int64 v59; // x0
  FGOCrystalMesh_o *v60; // [xsp+10h] [xbp-70h]
  Il2CppObject *component; // [xsp+18h] [xbp-68h] BYREF

  v60 = this;
  if ( (byte_4B1507A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer___, o, crystalMaterial);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_TryGetComponent_ChangeCrystalMaterialSettingComponent___, v6, v7);
    sub_1BCA7E0(&UnityEngine_Material___TypeInfo, v8, v9);
    sub_1BCA7E0(&UnityEngine_Material_TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_16578/*"_Xscale"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_16431/*"_MainTex"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_16513/*"_StartTime"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_16387/*"_FadeTime"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_16559/*"_UseSubtex"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_16522/*"_SubTex"*/, v22, v23);
    this = (FGOCrystalMesh_o *)sub_1BCA7E0(&StringLiteral_16775/*"_xscale"*/, v24, v25);
    byte_4B1507A = 1;
  }
  component = 0LL;
  if ( !o )
    goto LABEL_33;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       o,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer___);
  v27 = (FGOCrystalMesh_o *)StringLiteral_16522/*"_SubTex"*/;
  v28 = (UnityEngine_Renderer_o *)Component_object;
  this = (FGOCrystalMesh_o *)UnityEngine_GameObject__TryGetComponent_object_(
                               o,
                               &component,
                               (const MethodInfo_2F63960 *)Method_UnityEngine_GameObject_TryGetComponent_ChangeCrystalMaterialSettingComponent___);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    this = (FGOCrystalMesh_o *)component;
    if ( !component )
      goto LABEL_33;
    this = (FGOCrystalMesh_o *)ChangeCrystalMaterialSettingComponent__get_AlphaTexturePropertyName(
                                 (ChangeCrystalMaterialSettingComponent_o *)component,
                                 0LL);
    v27 = this;
  }
  if ( !v28 )
    goto LABEL_33;
  this = (FGOCrystalMesh_o *)UnityEngine_Renderer__get_materials(v28, 0LL);
  if ( !this
    || (v29 = sub_1BCA888(UnityEngine_Material___TypeInfo, LODWORD(this->fields.m_CancellationTokenSource)),
        v60->fields.materialsArray = (struct UnityEngine_Material_array *)v29,
        p_materialsArray = &v60->fields.materialsArray,
        sub_1BCA784((PartyOrganizationUtility_o *)&v60->fields.materialsArray, v29, v31, v32, v33, v34, v35, v36),
        sortingOrder = UnityEngine_Renderer__get_sortingOrder(v28, 0LL),
        UnityEngine_Renderer__set_sortingOrder(v28, sortingOrder + 1, 0LL),
        (this = (FGOCrystalMesh_o *)UnityEngine_Renderer__get_materials(v28, 0LL)) == 0LL) )
  {
LABEL_33:
    sub_1BCAA3C(this, o);
  }
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v41 = this;
  if ( m_CancellationTokenSource >= 1 )
  {
    v42 = 0;
    do
    {
      if ( v42 >= m_CancellationTokenSource )
LABEL_34:
        sub_1BCAA44(this, o);
      v43 = (UnityEngine_Material_o *)*((_QWORD *)&v41->fields.crystalMat + (int)v42);
      v44 = (UnityEngine_Material_o *)sub_1BCAA2C(UnityEngine_Material_TypeInfo, o, v38, v39);
      UnityEngine_Material___ctor_70017516(v44, crystalMaterial, 0LL);
      if ( !v43 )
        goto LABEL_33;
      if ( UnityEngine_Material__HasProperty_70020424(v43, (System_String_o *)StringLiteral_16775/*"_xscale"*/, 0LL) )
      {
        Float = UnityEngine_Material__GetFloat(v43, (System_String_o *)StringLiteral_16775/*"_xscale"*/, 0LL);
        if ( !v44 )
          goto LABEL_33;
        UnityEngine_Material__SetFloat(v44, (System_String_o *)StringLiteral_16578/*"_Xscale"*/, Float, 0LL);
        LOBYTE(this) = UnityEngine_Material__HasProperty_70020424(v43, (System_String_o *)v27, 0LL);
      }
      else
      {
        this = (FGOCrystalMesh_o *)UnityEngine_Material__HasProperty_70020424(v43, (System_String_o *)v27, 0LL);
        if ( !v44 )
          goto LABEL_33;
      }
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        UnityEngine_Material__SetInt(v44, (System_String_o *)StringLiteral_16559/*"_UseSubtex"*/, 1, 0LL);
        Texture = UnityEngine_Material__GetTexture(v43, (System_String_o *)v27, 0LL);
        UnityEngine_Material__SetTexture(v44, (System_String_o *)StringLiteral_16522/*"_SubTex"*/, Texture, 0LL);
      }
      else
      {
        UnityEngine_Material__SetInt(v44, (System_String_o *)StringLiteral_16559/*"_UseSubtex"*/, 0, 0LL);
      }
      this = (FGOCrystalMesh_o *)UnityEngine_Material__HasProperty_70020424(
                                   v44,
                                   (System_String_o *)StringLiteral_16387/*"_FadeTime"*/,
                                   0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        crystalData = v60->fields.crystalData;
        if ( !crystalData )
          goto LABEL_33;
        UnityEngine_Material__SetFloat(
          v44,
          (System_String_o *)StringLiteral_16387/*"_FadeTime"*/,
          crystalData->fields.crystalFadeTime,
          0LL);
      }
      if ( UnityEngine_Material__HasProperty_70020424(v44, (System_String_o *)StringLiteral_16513/*"_StartTime"*/, 0LL) )
      {
        timeSinceLevelLoad = UnityEngine_Time__get_timeSinceLevelLoad(0LL);
        UnityEngine_Material__SetFloat(v44, (System_String_o *)StringLiteral_16513/*"_StartTime"*/, timeSinceLevelLoad, 0LL);
      }
      if ( UnityEngine_Material__HasProperty_70020424(v43, (System_String_o *)StringLiteral_16431/*"_MainTex"*/, 0LL) )
      {
        mainTexture = UnityEngine_Material__get_mainTexture(v43, 0LL);
        UnityEngine_Material__set_mainTexture(v44, mainTexture, 0LL);
      }
      renderQueue = UnityEngine_Material__get_renderQueue(v43, 0LL);
      UnityEngine_Material__set_renderQueue(v44, renderQueue, 0LL);
      v51 = *p_materialsArray;
      if ( !*p_materialsArray )
        goto LABEL_33;
      this = (FGOCrystalMesh_o *)sub_1BCA91C(v44, v51->obj.klass->_1.element_class);
      if ( !this )
      {
        v59 = sub_1BCAA60(0LL);
        sub_1BCA908(v59, 0LL);
      }
      if ( v42 >= v51->max_length )
        goto LABEL_34;
      v58 = &v51->obj.klass + (int)v42;
      v58[4] = (Il2CppClass *)v44;
      sub_1BCA784((PartyOrganizationUtility_o *)(v58 + 4), (int64_t)v44, v52, v53, v54, v55, v56, v57);
      m_CancellationTokenSource = (int)v41->fields.m_CancellationTokenSource;
    }
    while ( (int)++v42 < m_CancellationTokenSource );
  }
  UnityEngine_Renderer__set_materials(v28, *p_materialsArray, 0LL);
}


void __fastcall FGOCrystalMesh__ExplodeCrystalMesh(FGOCrystalMesh_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  void *ComponentsInChildren_object__49324452; // x0
  __int64 v9; // x1
  int v10; // w8
  _DWORD *v11; // x20
  unsigned int v12; // w22
  char *v13; // x8
  FGOMeshExploder_o *v14; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v16; // x2
  __int64 v17; // x8
  _QWORD *v18; // x20
  unsigned __int64 v19; // x22
  struct FGOCrystalMesh_CrystalData_o *crystalData; // x8
  UnityEngine_Component_o *v21; // x21

  if ( (byte_4B15079 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentsInChildren_FGOMeshExploder___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer___, v4, v5);
    sub_1BCA7E0(&StringLiteral_24926/*"weapon_"*/, v6, v7);
    byte_4B15079 = 1;
  }
  ComponentsInChildren_object__49324452 = UnityEngine_Component__GetComponentsInChildren_object__49324452(
                                            (UnityEngine_Component_o *)this,
                                            (const MethodInfo_2F0A1A4 *)Method_UnityEngine_Component_GetComponentsInChildren_FGOMeshExploder___);
  if ( !ComponentsInChildren_object__49324452 )
    goto LABEL_23;
  v10 = *((_DWORD *)ComponentsInChildren_object__49324452 + 6);
  v11 = ComponentsInChildren_object__49324452;
  if ( v10 >= 1 )
  {
    v12 = 0;
    while ( v12 < v10 )
    {
      v13 = (char *)&v11[2 * v12];
      v14 = (FGOMeshExploder_o *)*((_QWORD *)v13 + 4);
      if ( !v14 )
        goto LABEL_23;
      gameObject = UnityEngine_Component__get_gameObject(*((UnityEngine_Component_o **)v13 + 4), 0LL);
      FGOMeshExploder__Explode_38254504(v14, gameObject, v16);
      v10 = v11[6];
      if ( (int)++v12 >= v10 )
        goto LABEL_9;
    }
LABEL_24:
    sub_1BCAA44(ComponentsInChildren_object__49324452, v9);
  }
LABEL_9:
  ComponentsInChildren_object__49324452 = UnityEngine_Component__GetComponentsInChildren_object__49324452(
                                            (UnityEngine_Component_o *)this,
                                            (const MethodInfo_2F0A1A4 *)Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer___);
  if ( !ComponentsInChildren_object__49324452 )
LABEL_23:
    sub_1BCAA3C(ComponentsInChildren_object__49324452, v9);
  v17 = *((_QWORD *)ComponentsInChildren_object__49324452 + 3);
  v18 = ComponentsInChildren_object__49324452;
  if ( (int)v17 >= 1 )
  {
    v19 = 0LL;
    while ( v19 < (unsigned int)v17 )
    {
      crystalData = this->fields.crystalData;
      if ( !crystalData )
        goto LABEL_23;
      if ( !crystalData->fields.useWeaponModel )
      {
        v21 = (UnityEngine_Component_o *)v18[v19 + 4];
        if ( !v21 )
          goto LABEL_23;
        ComponentsInChildren_object__49324452 = UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)v18[v19 + 4],
                                                  0LL);
        if ( !ComponentsInChildren_object__49324452 )
          goto LABEL_23;
        ComponentsInChildren_object__49324452 = UnityEngine_Object__get_name(
                                                  (UnityEngine_Object_o *)ComponentsInChildren_object__49324452,
                                                  0LL);
        if ( !ComponentsInChildren_object__49324452 )
          goto LABEL_23;
        ComponentsInChildren_object__49324452 = (void *)System_String__Contains(
                                                          (System_String_o *)ComponentsInChildren_object__49324452,
                                                          (System_String_o *)StringLiteral_24926/*"weapon_"*/,
                                                          0LL);
        if ( ((unsigned __int8)ComponentsInChildren_object__49324452 & 1) != 0 )
        {
          ComponentsInChildren_object__49324452 = UnityEngine_Component__get_gameObject(v21, 0LL);
          if ( !ComponentsInChildren_object__49324452 )
            goto LABEL_23;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ComponentsInChildren_object__49324452, 0, 0LL);
        }
      }
      LODWORD(v17) = *((_DWORD *)v18 + 6);
      if ( (__int64)++v19 >= (int)v17 )
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
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.crystalData,
    (int64_t)crystalData,
    (int64_t)crystalMat,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.crystalMat = crystalMat;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.crystalMat, (int64_t)crystalMat, v10, v11, v12, v13, v14, v15);
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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.materialsArray, 0LL, v2, v3, v4, v5, v6, v7);
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
  __int64 v2; // x2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  __int64 v5; // d0
  float z; // s1

  *(_WORD *)&this->fields.useWeaponModel = 257;
  this->fields.useGravity = 1;
  this->fields.mass = 1.0;
  *(_QWORD *)&this->fields.minPieceVertex = 0x140000000ALL;
  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, method, v2);
    byte_4B109C1 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v5 = *(_QWORD *)&static_fields->zeroVector.fields.x;
  z = static_fields->zeroVector.fields.z;
  *(_OWORD *)&this->fields.minBrokenSpeed = xmmword_BD2FF0;
  *(_QWORD *)&this->fields.angularVelocity.fields.x = v5;
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
  __int64 v2; // x2
  UnityEngine_Component_o *r; // x0
  __int64 v5; // x1
  UnityEngine_Object_o *gameObject; // x20

  if ( (byte_4B1507C & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B1507C = 1;
  }
  r = (UnityEngine_Component_o *)this->fields.r;
  if ( !r )
    goto LABEL_11;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(r, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
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
    sub_1BCAA3C(r, method);
  }
}