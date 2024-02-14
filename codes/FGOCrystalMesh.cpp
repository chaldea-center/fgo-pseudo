void __fastcall FGOCrystalMesh___ctor(FGOCrystalMesh_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  FGOCrystalMesh_CrystalData_o *v4; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_42141A4 & 1) == 0 )
  {
    sub_B0D8A4(&FGOCrystalMesh_CrystalData_TypeInfo, method);
    byte_42141A4 = 1;
  }
  v4 = (FGOCrystalMesh_CrystalData_o *)sub_B0D974(FGOCrystalMesh_CrystalData_TypeInfo, method, v2);
  FGOCrystalMesh_CrystalData___ctor(v4, 0LL);
  this->fields.crystalData = v4;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.crystalData,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
  UnityEngine_Component_o *ComponentsInChildren_USTimelineContainer; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  UnityEngine_Component_o *v17; // x20
  unsigned __int64 v18; // x26
  __int64 v19; // x21
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Int32_array **v26; // x1
  UnityEngine_Component_o **v27; // x22
  struct FGOCrystalMesh_CrystalData_o *crystalData; // x8
  UILabel_o *v29; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *Parent; // x24
  UnityEngine_GameObject_o *v32; // x23
  UnityEngine_Object_o *Component_srcLineSprite; // x0
  UnityEngine_Object_o *v34; // x24
  System_String_o *name; // x0
  System_String_o *v36; // x0
  const MethodInfo *v37; // x3
  UnityEngine_Object_o *v38; // x24
  struct FGOCrystalMesh_CrystalData_o *v39; // x8
  UnityEngine_Component_o *v40; // x23
  struct FGOCrystalMesh_CrystalData_o *v41; // x8
  struct FGOCrystalMesh_CrystalData_o *v42; // x8
  struct FGOCrystalMesh_CrystalData_o *v43; // x8
  struct FGOCrystalMesh_CrystalData_o *v44; // x8
  struct FGOCrystalMesh_CrystalData_o *v45; // x8
  void *v46; // x9
  float z; // w8
  struct FGOCrystalMesh_CrystalData_o *v48; // x8
  struct FGOCrystalMesh_CrystalData_o *v49; // x8
  struct FGOCrystalMesh_CrystalData_o *v50; // x8
  struct FGOCrystalMesh_CrystalData_o *v51; // x8
  System_Int32_array **v52; // x0
  UnityEngine_Component_o *v53; // x23
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  __int64 v60; // x1
  __int64 v61; // x2
  System_Action_o *v62; // x22
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  __int64 v69; // x0

  if ( (byte_42141A1 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer___, v3);
    sub_B0D8A4(&Method_UnityEngine_GameObject_AddComponent_FGOMeshExploder___, v4);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_FGOCrystalMesh___, v5);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_FGOMeshExploder___, v6);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject____68025336, v7);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v8);
    sub_B0D8A4(&Method_FGOCrystalMesh___c__DisplayClass9_0__AddCrystalMesh_b__0__, v9);
    sub_B0D8A4(&FGOCrystalMesh___c__DisplayClass9_0_TypeInfo, v10);
    sub_B0D8A4(&StringLiteral_23337/*"weapon_"*/, v11);
    sub_B0D8A4(&StringLiteral_16186/*"_crystal"*/, v12);
    byte_42141A1 = 1;
  }
  if ( this->fields.crystalData )
  {
    crystalMat = (UnityEngine_Object_o *)this->fields.crystalMat;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(crystalMat, 0LL, 0LL) )
    {
      ComponentsInChildren_USTimelineContainer = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                                                                              (UnityEngine_Component_o *)this,
                                                                              (const MethodInfo_170EAAC *)Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer___);
      if ( !ComponentsInChildren_USTimelineContainer )
        goto LABEL_51;
      v17 = ComponentsInChildren_USTimelineContainer;
      if ( SLODWORD(ComponentsInChildren_USTimelineContainer[1].klass) >= 1 )
      {
        v18 = 0LL;
        while ( 1 )
        {
          v19 = sub_B0D974(FGOCrystalMesh___c__DisplayClass9_0_TypeInfo, v15, v16);
          FGOCrystalMesh___c__DisplayClass9_0___ctor((FGOCrystalMesh___c__DisplayClass9_0_o *)v19, 0LL);
          if ( v18 >= LODWORD(v17[1].klass) )
          {
            v69 = sub_B0D9A8(ComponentsInChildren_USTimelineContainer);
            sub_B0D948(v69, 0LL);
          }
          if ( !v19 )
            break;
          v26 = (System_Int32_array **)*((_QWORD *)&v17[1].monitor + v18);
          *(_QWORD *)(v19 + 16) = v26;
          v27 = (UnityEngine_Component_o **)(v19 + 16);
          sub_B0D840((BattleServantConfConponent_o *)(v19 + 16), v26, v20, v21, v22, v23, v24, v25);
          crystalData = this->fields.crystalData;
          if ( !crystalData )
            break;
          if ( crystalData->fields.useWeaponModel )
            goto LABEL_19;
          ComponentsInChildren_USTimelineContainer = *v27;
          if ( !*v27 )
            break;
          ComponentsInChildren_USTimelineContainer = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                                  ComponentsInChildren_USTimelineContainer,
                                                                                  0LL);
          if ( !ComponentsInChildren_USTimelineContainer )
            break;
          ComponentsInChildren_USTimelineContainer = (UnityEngine_Component_o *)UnityEngine_Object__get_name(
                                                                                  (UnityEngine_Object_o *)ComponentsInChildren_USTimelineContainer,
                                                                                  0LL);
          if ( !ComponentsInChildren_USTimelineContainer )
            break;
          if ( !System_String__Contains(
                  (System_String_o *)ComponentsInChildren_USTimelineContainer,
                  (System_String_o *)StringLiteral_23337/*"weapon_"*/,
                  0LL) )
          {
LABEL_19:
            ComponentsInChildren_USTimelineContainer = *v27;
            if ( !*v27 )
              break;
            ComponentsInChildren_USTimelineContainer = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                                    ComponentsInChildren_USTimelineContainer,
                                                                                    0LL);
            if ( !*v27 )
              break;
            v29 = (UILabel_o *)ComponentsInChildren_USTimelineContainer;
            gameObject = UnityEngine_Component__get_gameObject(*v27, 0LL);
            Parent = GameObjectExtensions__GetParent(gameObject, 0LL);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            ComponentsInChildren_USTimelineContainer = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_UILabel_(
                                                                                    v29,
                                                                                    Parent,
                                                                                    (const MethodInfo_204AAC0 *)Method_UnityEngine_Object_Instantiate_GameObject____68025336);
            if ( !ComponentsInChildren_USTimelineContainer )
              break;
            v32 = (UnityEngine_GameObject_o *)ComponentsInChildren_USTimelineContainer;
            Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                (UnityEngine_GameObject_o *)ComponentsInChildren_USTimelineContainer,
                                                                (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_FGOCrystalMesh___);
            if ( UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL) )
            {
              v34 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              v32,
                                              (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_FGOCrystalMesh___);
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              UnityEngine_Object__Destroy_34935276(v34, 0LL);
            }
            ComponentsInChildren_USTimelineContainer = *v27;
            if ( !*v27 )
              break;
            ComponentsInChildren_USTimelineContainer = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                                    ComponentsInChildren_USTimelineContainer,
                                                                                    0LL);
            if ( !ComponentsInChildren_USTimelineContainer )
              break;
            name = UnityEngine_Object__get_name((UnityEngine_Object_o *)ComponentsInChildren_USTimelineContainer, 0LL);
            v36 = System_String__Concat_43849904(name, (System_String_o *)StringLiteral_16186/*"_crystal"*/, 0LL);
            UnityEngine_Object__set_name((UnityEngine_Object_o *)v32, v36, 0LL);
            FGOCrystalMesh__ChangeCrystalMaterial(this, v32, this->fields.crystalMat, v37);
            v38 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            v32,
                                            (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_FGOMeshExploder___);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Equality(v38, 0LL, 0LL) )
            {
              ComponentsInChildren_USTimelineContainer = (UnityEngine_Component_o *)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                                                                      v32,
                                                                                      (const MethodInfo_1B62AAC *)Method_UnityEngine_GameObject_AddComponent_FGOMeshExploder___);
              v39 = this->fields.crystalData;
              if ( !v39 )
                break;
              v40 = ComponentsInChildren_USTimelineContainer;
              if ( !ComponentsInChildren_USTimelineContainer )
                break;
              LOBYTE(ComponentsInChildren_USTimelineContainer[1].klass) = v39->fields.useBrokenPiece;
              v41 = this->fields.crystalData;
              if ( !v41 )
                break;
              BYTE1(ComponentsInChildren_USTimelineContainer[1].klass) = v41->fields.useGravity;
              v42 = this->fields.crystalData;
              if ( !v42 )
                break;
              HIDWORD(ComponentsInChildren_USTimelineContainer[1].klass) = LODWORD(v42->fields.mass);
              v43 = this->fields.crystalData;
              if ( !v43 )
                break;
              *((_DWORD *)&ComponentsInChildren_USTimelineContainer[1].fields + 1) = v43->fields.minPieceVertex;
              v44 = this->fields.crystalData;
              if ( !v44 )
                break;
              LODWORD(ComponentsInChildren_USTimelineContainer[2].klass) = v44->fields.maxPieceVertex;
              v45 = this->fields.crystalData;
              if ( !v45 )
                break;
              v46 = *(void **)&v45->fields.angularVelocity.fields.x;
              z = v45->fields.angularVelocity.fields.z;
              ComponentsInChildren_USTimelineContainer[1].monitor = v46;
              *(float *)&ComponentsInChildren_USTimelineContainer[1].fields.m_CachedPtr = z;
              v48 = this->fields.crystalData;
              if ( !v48 )
                break;
              HIDWORD(ComponentsInChildren_USTimelineContainer[2].klass) = LODWORD(v48->fields.minBrokenSpeed);
              v49 = this->fields.crystalData;
              if ( !v49 )
                break;
              *(float *)&ComponentsInChildren_USTimelineContainer[2].monitor = v49->fields.maxBrokenSpeed;
              v50 = this->fields.crystalData;
              if ( !v50 )
                break;
              HIDWORD(ComponentsInChildren_USTimelineContainer[2].monitor) = LODWORD(v50->fields.pieceScale);
              v51 = this->fields.crystalData;
              if ( !v51 )
                break;
              ComponentsInChildren_USTimelineContainer[2].fields.m_CachedPtr = LODWORD(v51->fields.fadeTime);
              ComponentsInChildren_USTimelineContainer = *v27;
              if ( !*v27 )
                break;
              v52 = (System_Int32_array **)UnityEngine_Component__get_gameObject(
                                             ComponentsInChildren_USTimelineContainer,
                                             0LL);
              v40[3].klass = (UnityEngine_Component_c *)v52;
              v53 = v40 + 3;
              sub_B0D840((BattleServantConfConponent_o *)v53, v52, v54, v55, v56, v57, v58, v59);
              v62 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v60, v61);
              System_Action___ctor(
                v62,
                (Il2CppObject *)v19,
                Method_FGOCrystalMesh___c__DisplayClass9_0__AddCrystalMesh_b__0__,
                0LL);
              v53->monitor = v62;
              sub_B0D840(
                (BattleServantConfConponent_o *)&v53->monitor,
                (System_Int32_array **)v62,
                v63,
                v64,
                v65,
                v66,
                v67,
                v68);
            }
          }
          if ( (__int64)++v18 >= SLODWORD(v17[1].klass) )
            return;
        }
LABEL_51:
        sub_B0D97C(ComponentsInChildren_USTimelineContainer);
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
  UnityEngine_Renderer_o *v15; // x20
  System_Int32_array **v16; // x0
  UnityEngine_Material_array **p_materialsArray; // x22
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  int32_t sortingOrder; // w0
  __int64 v25; // x1
  __int64 v26; // x2
  int crystalMat; // w8
  FGOCrystalMesh_o *v28; // x23
  il2cpp_array_size_t v29; // w26
  UnityEngine_Material_o *v30; // x25
  UnityEngine_Material_o *v31; // x24
  float Float; // s0
  UnityEngine_Texture_o *Texture; // x0
  struct FGOCrystalMesh_CrystalData_o *crystalData; // x8
  float timeSinceLevelLoad; // s0
  UnityEngine_Texture_o *mainTexture; // x0
  int32_t renderQueue; // w0
  UnityEngine_Material_array *v38; // x25
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  Il2CppClass **v45; // x0
  __int64 v46; // x0
  __int64 v47; // x0
  FGOCrystalMesh_o *v48; // [xsp+8h] [xbp-58h]

  v48 = this;
  if ( (byte_42141A3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer___, o);
    sub_B0D8A4(&UnityEngine_Material___TypeInfo, v6);
    sub_B0D8A4(&UnityEngine_Material_TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_16153/*"_Xscale"*/, v8);
    sub_B0D8A4(&StringLiteral_16061/*"_MainTex"*/, v9);
    sub_B0D8A4(&StringLiteral_16111/*"_StartTime"*/, v10);
    sub_B0D8A4(&StringLiteral_16034/*"_FadeTime"*/, v11);
    sub_B0D8A4(&StringLiteral_16141/*"_UseSubtex"*/, v12);
    sub_B0D8A4(&StringLiteral_16120/*"_SubTex"*/, v13);
    this = (FGOCrystalMesh_o *)sub_B0D8A4(&StringLiteral_16258/*"_xscale"*/, v14);
    byte_42141A3 = 1;
  }
  if ( !o )
    goto LABEL_30;
  this = (FGOCrystalMesh_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                               o,
                               (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer___);
  if ( !this )
    goto LABEL_30;
  v15 = (UnityEngine_Renderer_o *)this;
  this = (FGOCrystalMesh_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)this, 0LL);
  if ( !this )
    goto LABEL_30;
  v16 = (System_Int32_array **)sub_B0D8BC(UnityEngine_Material___TypeInfo, LODWORD(this->fields.crystalMat));
  v48->fields.materialsArray = (struct UnityEngine_Material_array *)v16;
  p_materialsArray = &v48->fields.materialsArray;
  sub_B0D840((BattleServantConfConponent_o *)&v48->fields.materialsArray, v16, v18, v19, v20, v21, v22, v23);
  sortingOrder = UnityEngine_Renderer__get_sortingOrder(v15, 0LL);
  UnityEngine_Renderer__set_sortingOrder(v15, sortingOrder + 1, 0LL);
  this = (FGOCrystalMesh_o *)UnityEngine_Renderer__get_materials(v15, 0LL);
  if ( !this )
    goto LABEL_30;
  crystalMat = (int)this->fields.crystalMat;
  v28 = this;
  if ( crystalMat >= 1 )
  {
    v29 = 0;
    while ( 1 )
    {
      if ( v29 >= crystalMat )
      {
LABEL_31:
        v46 = sub_B0D9A8(this);
        sub_B0D948(v46, 0LL);
      }
      v30 = (UnityEngine_Material_o *)*((_QWORD *)&v28->fields.crystalData + (int)v29);
      v31 = (UnityEngine_Material_o *)sub_B0D974(UnityEngine_Material_TypeInfo, v25, v26);
      UnityEngine_Material___ctor_40810340(v31, crystalMaterial, 0LL);
      if ( !v30 )
        break;
      if ( UnityEngine_Material__HasProperty_40813076(v30, (System_String_o *)StringLiteral_16258/*"_xscale"*/, 0LL) )
      {
        Float = UnityEngine_Material__GetFloat(v30, (System_String_o *)StringLiteral_16258/*"_xscale"*/, 0LL);
        if ( !v31 )
          break;
        UnityEngine_Material__SetFloat(v31, (System_String_o *)StringLiteral_16153/*"_Xscale"*/, Float, 0LL);
        LOBYTE(this) = UnityEngine_Material__HasProperty_40813076(v30, (System_String_o *)StringLiteral_16120/*"_SubTex"*/, 0LL);
      }
      else
      {
        this = (FGOCrystalMesh_o *)UnityEngine_Material__HasProperty_40813076(
                                     v30,
                                     (System_String_o *)StringLiteral_16120/*"_SubTex"*/,
                                     0LL);
        if ( !v31 )
          break;
      }
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        UnityEngine_Material__SetInt(v31, (System_String_o *)StringLiteral_16141/*"_UseSubtex"*/, 1, 0LL);
        Texture = UnityEngine_Material__GetTexture(v30, (System_String_o *)StringLiteral_16120/*"_SubTex"*/, 0LL);
        UnityEngine_Material__SetTexture(v31, (System_String_o *)StringLiteral_16120/*"_SubTex"*/, Texture, 0LL);
      }
      else
      {
        UnityEngine_Material__SetInt(v31, (System_String_o *)StringLiteral_16141/*"_UseSubtex"*/, 0, 0LL);
      }
      this = (FGOCrystalMesh_o *)UnityEngine_Material__HasProperty_40813076(
                                   v31,
                                   (System_String_o *)StringLiteral_16034/*"_FadeTime"*/,
                                   0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        crystalData = v48->fields.crystalData;
        if ( !crystalData )
          break;
        UnityEngine_Material__SetFloat(
          v31,
          (System_String_o *)StringLiteral_16034/*"_FadeTime"*/,
          crystalData->fields.crystalFadeTime,
          0LL);
      }
      if ( UnityEngine_Material__HasProperty_40813076(v31, (System_String_o *)StringLiteral_16111/*"_StartTime"*/, 0LL) )
      {
        timeSinceLevelLoad = UnityEngine_Time__get_timeSinceLevelLoad(0LL);
        UnityEngine_Material__SetFloat(v31, (System_String_o *)StringLiteral_16111/*"_StartTime"*/, timeSinceLevelLoad, 0LL);
      }
      if ( UnityEngine_Material__HasProperty_40813076(v30, (System_String_o *)StringLiteral_16061/*"_MainTex"*/, 0LL) )
      {
        mainTexture = UnityEngine_Material__get_mainTexture(v30, 0LL);
        UnityEngine_Material__set_mainTexture(v31, mainTexture, 0LL);
      }
      renderQueue = UnityEngine_Material__get_renderQueue(v30, 0LL);
      UnityEngine_Material__set_renderQueue(v31, renderQueue, 0LL);
      v38 = *p_materialsArray;
      if ( !*p_materialsArray )
        break;
      this = (FGOCrystalMesh_o *)sub_B0D964(v31, v38->obj.klass->_1.element_class);
      if ( !this )
      {
        v47 = sub_B0D99C(0LL);
        sub_B0D948(v47, 0LL);
      }
      if ( v29 >= v38->max_length )
        goto LABEL_31;
      v45 = &v38->obj.klass + (int)v29;
      v45[4] = (Il2CppClass *)v31;
      sub_B0D840((BattleServantConfConponent_o *)(v45 + 4), (System_Int32_array **)v31, v39, v40, v41, v42, v43, v44);
      crystalMat = (int)v28->fields.crystalMat;
      if ( (int)++v29 >= crystalMat )
        goto LABEL_29;
    }
LABEL_30:
    sub_B0D97C(this);
  }
LABEL_29:
  UnityEngine_Renderer__set_materials(v15, *p_materialsArray, 0LL);
}


void __fastcall FGOCrystalMesh__ExplodeCrystalMesh(FGOCrystalMesh_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  void *ComponentsInChildren_USTimelineContainer; // x0
  int v6; // w8
  void *v7; // x20
  unsigned int v8; // w21
  __int64 v9; // x8
  _QWORD *v10; // x20
  unsigned __int64 v11; // x22
  struct FGOCrystalMesh_CrystalData_o *crystalData; // x8
  UnityEngine_Component_o *v13; // x21
  __int64 v14; // x0

  if ( (byte_42141A2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponentsInChildren_FGOMeshExploder___, method);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer___, v3);
    sub_B0D8A4(&StringLiteral_23337/*"weapon_"*/, v4);
    byte_42141A2 = 1;
  }
  ComponentsInChildren_USTimelineContainer = UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                                               (UnityEngine_Component_o *)this,
                                               (const MethodInfo_170EAAC *)Method_UnityEngine_Component_GetComponentsInChildren_FGOMeshExploder___);
  if ( !ComponentsInChildren_USTimelineContainer )
    goto LABEL_23;
  v6 = *((_DWORD *)ComponentsInChildren_USTimelineContainer + 6);
  v7 = ComponentsInChildren_USTimelineContainer;
  if ( v6 >= 1 )
  {
    v8 = 0;
    while ( v8 < v6 )
    {
      ComponentsInChildren_USTimelineContainer = (void *)*((_QWORD *)v7 + (int)v8 + 4);
      if ( !ComponentsInChildren_USTimelineContainer )
        goto LABEL_23;
      FGOMeshExploder__Explode((FGOMeshExploder_o *)ComponentsInChildren_USTimelineContainer, 0LL);
      v6 = *((_DWORD *)v7 + 6);
      if ( (int)++v8 >= v6 )
        goto LABEL_9;
    }
LABEL_24:
    v14 = sub_B0D9A8(ComponentsInChildren_USTimelineContainer);
    sub_B0D948(v14, 0LL);
  }
LABEL_9:
  ComponentsInChildren_USTimelineContainer = UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                                               (UnityEngine_Component_o *)this,
                                               (const MethodInfo_170EAAC *)Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer___);
  if ( !ComponentsInChildren_USTimelineContainer )
LABEL_23:
    sub_B0D97C(ComponentsInChildren_USTimelineContainer);
  v9 = *((_QWORD *)ComponentsInChildren_USTimelineContainer + 3);
  v10 = ComponentsInChildren_USTimelineContainer;
  if ( (int)v9 >= 1 )
  {
    v11 = 0LL;
    while ( v11 < (unsigned int)v9 )
    {
      crystalData = this->fields.crystalData;
      if ( !crystalData )
        goto LABEL_23;
      if ( !crystalData->fields.useWeaponModel )
      {
        v13 = (UnityEngine_Component_o *)v10[v11 + 4];
        if ( !v13 )
          goto LABEL_23;
        ComponentsInChildren_USTimelineContainer = UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)v10[v11 + 4],
                                                     0LL);
        if ( !ComponentsInChildren_USTimelineContainer )
          goto LABEL_23;
        ComponentsInChildren_USTimelineContainer = UnityEngine_Object__get_name(
                                                     (UnityEngine_Object_o *)ComponentsInChildren_USTimelineContainer,
                                                     0LL);
        if ( !ComponentsInChildren_USTimelineContainer )
          goto LABEL_23;
        ComponentsInChildren_USTimelineContainer = (void *)System_String__Contains(
                                                             (System_String_o *)ComponentsInChildren_USTimelineContainer,
                                                             (System_String_o *)StringLiteral_23337/*"weapon_"*/,
                                                             0LL);
        if ( ((unsigned __int8)ComponentsInChildren_USTimelineContainer & 1) != 0 )
        {
          ComponentsInChildren_USTimelineContainer = UnityEngine_Component__get_gameObject(v13, 0LL);
          if ( !ComponentsInChildren_USTimelineContainer )
            goto LABEL_23;
          UnityEngine_GameObject__SetActive(
            (UnityEngine_GameObject_o *)ComponentsInChildren_USTimelineContainer,
            0,
            0LL);
        }
      }
      LODWORD(v9) = *((_DWORD *)v10 + 6);
      if ( (__int64)++v11 >= (int)v9 )
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
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  this->fields.crystalData = crystalData;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.crystalData,
    (System_Int32_array **)crystalData,
    (System_String_array **)crystalMat,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.crystalMat = crystalMat;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.crystalMat,
    (System_Int32_array **)crystalMat,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
}


void __fastcall FGOCrystalMesh__OnDestroy(FGOCrystalMesh_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.materialsArray = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.materialsArray, 0LL, v2, v3, v4, v5, v6, v7);
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
  *(_WORD *)&this->fields.useWeaponModel = 257;
  this->fields.useGravity = 1;
  this->fields.mass = 1.0;
  *(_QWORD *)&this->fields.minPieceVertex = 0x140000000ALL;
  this->fields.angularVelocity = UnityEngine_Vector3__get_zero(0LL);
  *(_OWORD *)&this->fields.minBrokenSpeed = xmmword_31FFBC0;
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

  if ( (byte_4210F3A & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4210F3A = 1;
  }
  r = (UnityEngine_Component_o *)this->fields.r;
  if ( !r )
    goto LABEL_12;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(r, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
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
LABEL_12:
    sub_B0D97C(r);
  }
}