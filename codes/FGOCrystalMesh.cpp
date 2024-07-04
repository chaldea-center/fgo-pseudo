void __fastcall FGOCrystalMesh___ctor(FGOCrystalMesh_o *this, const MethodInfo *method)
{
  FGOCrystalMesh_CrystalData_o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_48E166D & 1) == 0 )
  {
    sub_1B00CCC(&FGOCrystalMesh_CrystalData_TypeInfo, method);
    byte_48E166D = 1;
  }
  v3 = (FGOCrystalMesh_CrystalData_o *)sub_1B00F18(FGOCrystalMesh_CrystalData_TypeInfo);
  FGOCrystalMesh_CrystalData___ctor(v3, 0LL);
  this->fields.crystalData = v3;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.crystalData, (int32_t)v3, v4, v5);
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
  UnityEngine_Component_o *ComponentsInChildren_object__47554852; // x0
  __int64 v15; // x1
  UnityEngine_Component_o *v16; // x20
  unsigned __int64 v17; // x26
  __int64 v18; // x21
  int32_t v19; // w2
  int32_t v20; // w3
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
  int32_t v41; // w3
  System_Action_o *v42; // x22
  int32_t v43; // w2
  int32_t v44; // w3

  if ( (byte_48E166A & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    sub_1B00CCC(&Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer___, v3);
    sub_1B00CCC(&Method_UnityEngine_GameObject_AddComponent_FGOMeshExploder___, v4);
    sub_1B00CCC(&Method_UnityEngine_GameObject_GetComponent_FGOCrystalMesh___, v5);
    sub_1B00CCC(&Method_UnityEngine_GameObject_GetComponent_FGOMeshExploder___, v6);
    sub_1B00CCC(&Method_UnityEngine_Object_Instantiate_GameObject____74661840, v7);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v8);
    sub_1B00CCC(&Method_FGOCrystalMesh___c__DisplayClass9_0__AddCrystalMesh_b__0__, v9);
    sub_1B00CCC(&FGOCrystalMesh___c__DisplayClass9_0_TypeInfo, v10);
    sub_1B00CCC(&StringLiteral_24308/*"weapon_"*/, v11);
    sub_1B00CCC(&StringLiteral_16300/*"_crystal"*/, v12);
    byte_48E166A = 1;
  }
  if ( this->fields.crystalData )
  {
    crystalMat = (UnityEngine_Object_o *)this->fields.crystalMat;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(crystalMat, 0LL, 0LL) )
    {
      ComponentsInChildren_object__47554852 = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentsInChildren_object__47554852(
                                                                           (UnityEngine_Component_o *)this,
                                                                           (const MethodInfo_2D5A124 *)Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer___);
      if ( !ComponentsInChildren_object__47554852 )
        goto LABEL_39;
      v16 = ComponentsInChildren_object__47554852;
      if ( SLODWORD(ComponentsInChildren_object__47554852[1].klass) >= 1 )
      {
        v17 = 0LL;
        while ( 1 )
        {
          v18 = sub_1B00F18(FGOCrystalMesh___c__DisplayClass9_0_TypeInfo);
          FGOCrystalMesh___c__DisplayClass9_0___ctor((FGOCrystalMesh___c__DisplayClass9_0_o *)v18, 0LL);
          if ( v17 >= LODWORD(v16[1].klass) )
            sub_1B00F30(ComponentsInChildren_object__47554852, v15);
          if ( !v18 )
            break;
          v21 = *((_QWORD *)&v16[1].monitor + v17);
          *(_QWORD *)(v18 + 16) = v21;
          v22 = (UnityEngine_Component_o **)(v18 + 16);
          sub_1B00C70((ServantStatusBattleListViewItem_o *)(v18 + 16), v21, v19, v20);
          crystalData = this->fields.crystalData;
          if ( !crystalData )
            break;
          if ( crystalData->fields.useWeaponModel )
            goto LABEL_18;
          ComponentsInChildren_object__47554852 = *v22;
          if ( !*v22 )
            break;
          ComponentsInChildren_object__47554852 = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                               ComponentsInChildren_object__47554852,
                                                                               0LL);
          if ( !ComponentsInChildren_object__47554852 )
            break;
          ComponentsInChildren_object__47554852 = (UnityEngine_Component_o *)UnityEngine_Object__get_name(
                                                                               (UnityEngine_Object_o *)ComponentsInChildren_object__47554852,
                                                                               0LL);
          if ( !ComponentsInChildren_object__47554852 )
            break;
          if ( !System_String__Contains(
                  (System_String_o *)ComponentsInChildren_object__47554852,
                  (System_String_o *)StringLiteral_24308/*"weapon_"*/,
                  0LL) )
          {
LABEL_18:
            ComponentsInChildren_object__47554852 = *v22;
            if ( !*v22 )
              break;
            ComponentsInChildren_object__47554852 = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                                 ComponentsInChildren_object__47554852,
                                                                                 0LL);
            if ( !*v22 )
              break;
            v24 = (Il2CppObject *)ComponentsInChildren_object__47554852;
            gameObject = UnityEngine_Component__get_gameObject(*v22, 0LL);
            Parent = GameObjectExtensions__GetParent(gameObject, 0LL);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            ComponentsInChildren_object__47554852 = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_object__48061460(
                                                                                 v24,
                                                                                 Parent,
                                                                                 (const MethodInfo_2DD5C14 *)Method_UnityEngine_Object_Instantiate_GameObject____74661840);
            if ( !ComponentsInChildren_object__47554852 )
              break;
            v27 = (UnityEngine_GameObject_o *)ComponentsInChildren_object__47554852;
            Component_object = UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)ComponentsInChildren_object__47554852,
                                 (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_FGOCrystalMesh___);
            if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
            {
              v29 = UnityEngine_GameObject__GetComponent_object_(
                      v27,
                      (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_FGOCrystalMesh___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              UnityEngine_Object__Destroy_68077656((UnityEngine_Object_o *)v29, 0LL);
            }
            ComponentsInChildren_object__47554852 = *v22;
            if ( !*v22 )
              break;
            ComponentsInChildren_object__47554852 = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                                 ComponentsInChildren_object__47554852,
                                                                                 0LL);
            if ( !ComponentsInChildren_object__47554852 )
              break;
            name = UnityEngine_Object__get_name((UnityEngine_Object_o *)ComponentsInChildren_object__47554852, 0LL);
            v31 = System_String__Concat_60325748(name, (System_String_o *)StringLiteral_16300/*"_crystal"*/, 0LL);
            UnityEngine_Object__set_name((UnityEngine_Object_o *)v27, v31, 0LL);
            FGOCrystalMesh__ChangeCrystalMaterial(this, v27, this->fields.crystalMat, v32);
            v33 = UnityEngine_GameObject__GetComponent_object_(
                    v27,
                    (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_FGOMeshExploder___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v33, 0LL, 0LL) )
            {
              ComponentsInChildren_object__47554852 = (UnityEngine_Component_o *)UnityEngine_GameObject__AddComponent_object_(
                                                                                   v27,
                                                                                   (const MethodInfo_2DADD20 *)Method_UnityEngine_GameObject_AddComponent_FGOMeshExploder___);
              v34 = this->fields.crystalData;
              if ( !v34 )
                break;
              v35 = ComponentsInChildren_object__47554852;
              if ( !ComponentsInChildren_object__47554852 )
                break;
              LOBYTE(ComponentsInChildren_object__47554852[1].monitor) = v34->fields.useBrokenPiece;
              BYTE1(ComponentsInChildren_object__47554852[1].monitor) = v34->fields.useGravity;
              HIDWORD(ComponentsInChildren_object__47554852[1].monitor) = LODWORD(v34->fields.mass);
              *(UnityEngine_Component_c **)((char *)&ComponentsInChildren_object__47554852[2].klass + 4) = *(UnityEngine_Component_c **)&v34->fields.minPieceVertex;
              z = v34->fields.angularVelocity.fields.z;
              v37 = *(_QWORD *)&v34->fields.angularVelocity.fields.x;
              *(float *)&ComponentsInChildren_object__47554852[2].klass = z;
              *(_QWORD *)&ComponentsInChildren_object__47554852[1].fields.m_CachedPtr = v37;
              v38 = this->fields.crystalData;
              if ( !v38 )
                break;
              *(_OWORD *)((char *)&ComponentsInChildren_object__47554852[2].monitor + 4) = *(_OWORD *)&v38->fields.minBrokenSpeed;
              ComponentsInChildren_object__47554852 = *v22;
              if ( !*v22 )
                break;
              v39 = UnityEngine_Component__get_gameObject(ComponentsInChildren_object__47554852, 0LL);
              v35[3].monitor = v39;
              sub_1B00C70((ServantStatusBattleListViewItem_o *)&v35[3].monitor, (int32_t)v39, v40, v41);
              v42 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
              System_Action___ctor(
                v42,
                (Il2CppObject *)v18,
                Method_FGOCrystalMesh___c__DisplayClass9_0__AddCrystalMesh_b__0__,
                0LL);
              *(_QWORD *)&v35[3].fields.m_CachedPtr = v42;
              sub_1B00C70((ServantStatusBattleListViewItem_o *)&v35[3].fields, (int32_t)v42, v43, v44);
            }
          }
          if ( (__int64)++v17 >= SLODWORD(v16[1].klass) )
            return;
        }
LABEL_39:
        sub_1B00F28(ComponentsInChildren_object__47554852, v15);
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
  FGOCrystalMesh_o *v15; // x20
  __int64 v16; // x0
  UnityEngine_Material_array **p_materialsArray; // x22
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t sortingOrder; // w0
  int m_CancellationTokenSource; // w8
  FGOCrystalMesh_o *v22; // x23
  il2cpp_array_size_t v23; // w26
  UnityEngine_Material_o *v24; // x25
  UnityEngine_Material_o *v25; // x24
  float Float; // s0
  UnityEngine_Texture_o *Texture; // x0
  struct FGOCrystalMesh_CrystalData_o *crystalData; // x8
  float timeSinceLevelLoad; // s0
  UnityEngine_Texture_o *mainTexture; // x0
  int32_t renderQueue; // w0
  UnityEngine_Material_array *v32; // x25
  int32_t v33; // w2
  int32_t v34; // w3
  Il2CppClass **v35; // x0
  __int64 v36; // x0
  FGOCrystalMesh_o *v37; // [xsp+8h] [xbp-68h]

  v37 = this;
  if ( (byte_48E166C & 1) == 0 )
  {
    sub_1B00CCC(&Method_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer___, o);
    sub_1B00CCC(&UnityEngine_Material___TypeInfo, v6);
    sub_1B00CCC(&UnityEngine_Material_TypeInfo, v7);
    sub_1B00CCC(&StringLiteral_16176/*"_Xscale"*/, v8);
    sub_1B00CCC(&StringLiteral_16030/*"_MainTex"*/, v9);
    sub_1B00CCC(&StringLiteral_16112/*"_StartTime"*/, v10);
    sub_1B00CCC(&StringLiteral_15987/*"_FadeTime"*/, v11);
    sub_1B00CCC(&StringLiteral_16157/*"_UseSubtex"*/, v12);
    sub_1B00CCC(&StringLiteral_16121/*"_SubTex"*/, v13);
    this = (FGOCrystalMesh_o *)sub_1B00CCC(&StringLiteral_16372/*"_xscale"*/, v14);
    byte_48E166C = 1;
  }
  if ( !o )
    goto LABEL_30;
  this = (FGOCrystalMesh_o *)UnityEngine_GameObject__GetComponent_object_(
                               o,
                               (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer___);
  if ( !this )
    goto LABEL_30;
  v15 = this;
  this = (FGOCrystalMesh_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)this, 0LL);
  if ( !this )
    goto LABEL_30;
  v16 = sub_1B00D74(UnityEngine_Material___TypeInfo, LODWORD(this->fields.m_CancellationTokenSource));
  v37->fields.materialsArray = (struct UnityEngine_Material_array *)v16;
  p_materialsArray = &v37->fields.materialsArray;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v37->fields.materialsArray, v16, v18, v19);
  sortingOrder = UnityEngine_Renderer__get_sortingOrder((UnityEngine_Renderer_o *)v15, 0LL);
  UnityEngine_Renderer__set_sortingOrder((UnityEngine_Renderer_o *)v15, sortingOrder + 1, 0LL);
  this = (FGOCrystalMesh_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v15, 0LL);
  if ( !this )
    goto LABEL_30;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v22 = this;
  if ( m_CancellationTokenSource >= 1 )
  {
    v23 = 0;
    while ( 1 )
    {
      if ( v23 >= m_CancellationTokenSource )
LABEL_31:
        sub_1B00F30(this, o);
      v24 = (UnityEngine_Material_o *)*((_QWORD *)&v22->fields.crystalMat + (int)v23);
      v25 = (UnityEngine_Material_o *)sub_1B00F18(UnityEngine_Material_TypeInfo);
      UnityEngine_Material___ctor_67941016(v25, crystalMaterial, 0LL);
      if ( !v24 )
        break;
      if ( UnityEngine_Material__HasProperty_67943924(v24, (System_String_o *)StringLiteral_16372/*"_xscale"*/, 0LL) )
      {
        Float = UnityEngine_Material__GetFloat(v24, (System_String_o *)StringLiteral_16372/*"_xscale"*/, 0LL);
        if ( !v25 )
          break;
        UnityEngine_Material__SetFloat(v25, (System_String_o *)StringLiteral_16176/*"_Xscale"*/, Float, 0LL);
        LOBYTE(this) = UnityEngine_Material__HasProperty_67943924(v24, (System_String_o *)StringLiteral_16121/*"_SubTex"*/, 0LL);
      }
      else
      {
        this = (FGOCrystalMesh_o *)UnityEngine_Material__HasProperty_67943924(
                                     v24,
                                     (System_String_o *)StringLiteral_16121/*"_SubTex"*/,
                                     0LL);
        if ( !v25 )
          break;
      }
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        UnityEngine_Material__SetInt(v25, (System_String_o *)StringLiteral_16157/*"_UseSubtex"*/, 1, 0LL);
        Texture = UnityEngine_Material__GetTexture(v24, (System_String_o *)StringLiteral_16121/*"_SubTex"*/, 0LL);
        UnityEngine_Material__SetTexture(v25, (System_String_o *)StringLiteral_16121/*"_SubTex"*/, Texture, 0LL);
      }
      else
      {
        UnityEngine_Material__SetInt(v25, (System_String_o *)StringLiteral_16157/*"_UseSubtex"*/, 0, 0LL);
      }
      this = (FGOCrystalMesh_o *)UnityEngine_Material__HasProperty_67943924(
                                   v25,
                                   (System_String_o *)StringLiteral_15987/*"_FadeTime"*/,
                                   0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        crystalData = v37->fields.crystalData;
        if ( !crystalData )
          break;
        UnityEngine_Material__SetFloat(
          v25,
          (System_String_o *)StringLiteral_15987/*"_FadeTime"*/,
          crystalData->fields.crystalFadeTime,
          0LL);
      }
      if ( UnityEngine_Material__HasProperty_67943924(v25, (System_String_o *)StringLiteral_16112/*"_StartTime"*/, 0LL) )
      {
        timeSinceLevelLoad = UnityEngine_Time__get_timeSinceLevelLoad(0LL);
        UnityEngine_Material__SetFloat(v25, (System_String_o *)StringLiteral_16112/*"_StartTime"*/, timeSinceLevelLoad, 0LL);
      }
      if ( UnityEngine_Material__HasProperty_67943924(v24, (System_String_o *)StringLiteral_16030/*"_MainTex"*/, 0LL) )
      {
        mainTexture = UnityEngine_Material__get_mainTexture(v24, 0LL);
        UnityEngine_Material__set_mainTexture(v25, mainTexture, 0LL);
      }
      renderQueue = UnityEngine_Material__get_renderQueue(v24, 0LL);
      UnityEngine_Material__set_renderQueue(v25, renderQueue, 0LL);
      v32 = *p_materialsArray;
      if ( !*p_materialsArray )
        break;
      this = (FGOCrystalMesh_o *)sub_1B00E08(v25, v32->obj.klass->_1.element_class);
      if ( !this )
      {
        v36 = sub_1B00F4C(0LL);
        sub_1B00DF4(v36, 0LL);
      }
      if ( v23 >= v32->max_length )
        goto LABEL_31;
      v35 = &v32->obj.klass + (int)v23;
      v35[4] = (Il2CppClass *)v25;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)(v35 + 4), (int32_t)v25, v33, v34);
      m_CancellationTokenSource = (int)v22->fields.m_CancellationTokenSource;
      if ( (int)++v23 >= m_CancellationTokenSource )
        goto LABEL_29;
    }
LABEL_30:
    sub_1B00F28(this, o);
  }
LABEL_29:
  UnityEngine_Renderer__set_materials((UnityEngine_Renderer_o *)v15, *p_materialsArray, 0LL);
}


void __fastcall FGOCrystalMesh__ExplodeCrystalMesh(FGOCrystalMesh_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  void *ComponentsInChildren_object__47554852; // x0
  __int64 v6; // x1
  int v7; // w8
  void *v8; // x20
  unsigned int v9; // w21
  __int64 v10; // x8
  _QWORD *v11; // x20
  unsigned __int64 v12; // x22
  struct FGOCrystalMesh_CrystalData_o *crystalData; // x8
  UnityEngine_Component_o *v14; // x21

  if ( (byte_48E166B & 1) == 0 )
  {
    sub_1B00CCC(&Method_UnityEngine_Component_GetComponentsInChildren_FGOMeshExploder___, method);
    sub_1B00CCC(&Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer___, v3);
    sub_1B00CCC(&StringLiteral_24308/*"weapon_"*/, v4);
    byte_48E166B = 1;
  }
  ComponentsInChildren_object__47554852 = UnityEngine_Component__GetComponentsInChildren_object__47554852(
                                            (UnityEngine_Component_o *)this,
                                            (const MethodInfo_2D5A124 *)Method_UnityEngine_Component_GetComponentsInChildren_FGOMeshExploder___);
  if ( !ComponentsInChildren_object__47554852 )
    goto LABEL_23;
  v7 = *((_DWORD *)ComponentsInChildren_object__47554852 + 6);
  v8 = ComponentsInChildren_object__47554852;
  if ( v7 >= 1 )
  {
    v9 = 0;
    while ( v9 < v7 )
    {
      ComponentsInChildren_object__47554852 = (void *)*((_QWORD *)v8 + (int)v9 + 4);
      if ( !ComponentsInChildren_object__47554852 )
        goto LABEL_23;
      FGOMeshExploder__Explode((FGOMeshExploder_o *)ComponentsInChildren_object__47554852, 0LL);
      v7 = *((_DWORD *)v8 + 6);
      if ( (int)++v9 >= v7 )
        goto LABEL_9;
    }
LABEL_24:
    sub_1B00F30(ComponentsInChildren_object__47554852, v6);
  }
LABEL_9:
  ComponentsInChildren_object__47554852 = UnityEngine_Component__GetComponentsInChildren_object__47554852(
                                            (UnityEngine_Component_o *)this,
                                            (const MethodInfo_2D5A124 *)Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer___);
  if ( !ComponentsInChildren_object__47554852 )
LABEL_23:
    sub_1B00F28(ComponentsInChildren_object__47554852, v6);
  v10 = *((_QWORD *)ComponentsInChildren_object__47554852 + 3);
  v11 = ComponentsInChildren_object__47554852;
  if ( (int)v10 >= 1 )
  {
    v12 = 0LL;
    while ( v12 < (unsigned int)v10 )
    {
      crystalData = this->fields.crystalData;
      if ( !crystalData )
        goto LABEL_23;
      if ( !crystalData->fields.useWeaponModel )
      {
        v14 = (UnityEngine_Component_o *)v11[v12 + 4];
        if ( !v14 )
          goto LABEL_23;
        ComponentsInChildren_object__47554852 = UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)v11[v12 + 4],
                                                  0LL);
        if ( !ComponentsInChildren_object__47554852 )
          goto LABEL_23;
        ComponentsInChildren_object__47554852 = UnityEngine_Object__get_name(
                                                  (UnityEngine_Object_o *)ComponentsInChildren_object__47554852,
                                                  0LL);
        if ( !ComponentsInChildren_object__47554852 )
          goto LABEL_23;
        ComponentsInChildren_object__47554852 = (void *)System_String__Contains(
                                                          (System_String_o *)ComponentsInChildren_object__47554852,
                                                          (System_String_o *)StringLiteral_24308/*"weapon_"*/,
                                                          0LL);
        if ( ((unsigned __int8)ComponentsInChildren_object__47554852 & 1) != 0 )
        {
          ComponentsInChildren_object__47554852 = UnityEngine_Component__get_gameObject(v14, 0LL);
          if ( !ComponentsInChildren_object__47554852 )
            goto LABEL_23;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ComponentsInChildren_object__47554852, 0, 0LL);
        }
      }
      LODWORD(v10) = *((_DWORD *)v11 + 6);
      if ( (__int64)++v12 >= (int)v10 )
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
  int32_t v7; // w3

  this->fields.crystalData = crystalData;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields.crystalData,
    (int32_t)crystalData,
    (int32_t)crystalMat,
    (int32_t)method);
  this->fields.crystalMat = crystalMat;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.crystalMat, (int32_t)crystalMat, v6, v7);
}


void __fastcall FGOCrystalMesh__OnDestroy(FGOCrystalMesh_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3

  this->fields.materialsArray = 0LL;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.materialsArray, 0, v2, v3);
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
  if ( !byte_48DD9F1 )
  {
    sub_1B00CCC(&UnityEngine_Vector3_TypeInfo, method);
    byte_48DD9F1 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v4 = *(_QWORD *)&static_fields->zeroVector.fields.x;
  z = static_fields->zeroVector.fields.z;
  *(_OWORD *)&this->fields.minBrokenSpeed = xmmword_B71210;
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

  if ( (byte_48E172E & 1) == 0 )
  {
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, method);
    byte_48E172E = 1;
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
    sub_1B00F28(r, method);
  }
}