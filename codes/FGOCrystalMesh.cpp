void __fastcall FGOCrystalMesh___ctor(FGOCrystalMesh_o *this, const MethodInfo *method)
{
  FGOCrystalMesh_CrystalData_o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_418780F & 1) == 0 )
  {
    sub_B2C35C(&FGOCrystalMesh_CrystalData_TypeInfo, method);
    byte_418780F = 1;
  }
  v3 = (FGOCrystalMesh_CrystalData_o *)sub_B2C42C(FGOCrystalMesh_CrystalData_TypeInfo);
  FGOCrystalMesh_CrystalData___ctor(v3, 0LL);
  this->fields.crystalData = v3;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.crystalData,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
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
  UnityEngine_Component_o *v16; // x20
  unsigned __int64 v17; // x26
  __int64 v18; // x21
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Int32_array **v25; // x1
  UnityEngine_Component_o **v26; // x22
  struct FGOCrystalMesh_CrystalData_o *crystalData; // x8
  UILabel_o *v28; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *Parent; // x24
  UnityEngine_GameObject_o *v31; // x23
  UnityEngine_Object_o *Component_srcLineSprite; // x0
  UnityEngine_Object_o *v33; // x24
  System_String_o *name; // x0
  System_String_o *v35; // x0
  const MethodInfo *v36; // x3
  UnityEngine_Object_o *v37; // x24
  struct FGOCrystalMesh_CrystalData_o *v38; // x8
  UnityEngine_Component_o *v39; // x23
  struct FGOCrystalMesh_CrystalData_o *v40; // x8
  struct FGOCrystalMesh_CrystalData_o *v41; // x8
  struct FGOCrystalMesh_CrystalData_o *v42; // x8
  struct FGOCrystalMesh_CrystalData_o *v43; // x8
  struct FGOCrystalMesh_CrystalData_o *v44; // x8
  void *v45; // x9
  float z; // w8
  struct FGOCrystalMesh_CrystalData_o *v47; // x8
  struct FGOCrystalMesh_CrystalData_o *v48; // x8
  struct FGOCrystalMesh_CrystalData_o *v49; // x8
  struct FGOCrystalMesh_CrystalData_o *v50; // x8
  System_Int32_array **v51; // x0
  UnityEngine_Component_o *v52; // x23
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  System_Action_o *v59; // x22
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  __int64 v66; // x0

  if ( (byte_418780C & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer___, v3);
    sub_B2C35C(&Method_UnityEngine_GameObject_AddComponent_FGOMeshExploder___, v4);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_FGOCrystalMesh___, v5);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_FGOMeshExploder___, v6);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject____67450600, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    sub_B2C35C(&Method_FGOCrystalMesh___c__DisplayClass9_0__AddCrystalMesh_b__0__, v9);
    sub_B2C35C(&FGOCrystalMesh___c__DisplayClass9_0_TypeInfo, v10);
    sub_B2C35C(&StringLiteral_23259/*"weapon_"*/, v11);
    sub_B2C35C(&StringLiteral_16138/*"_crystal"*/, v12);
    byte_418780C = 1;
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
                                                                              (const MethodInfo_172DF98 *)Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer___);
      if ( !ComponentsInChildren_USTimelineContainer )
        goto LABEL_51;
      v16 = ComponentsInChildren_USTimelineContainer;
      if ( SLODWORD(ComponentsInChildren_USTimelineContainer[1].klass) >= 1 )
      {
        v17 = 0LL;
        while ( 1 )
        {
          v18 = sub_B2C42C(FGOCrystalMesh___c__DisplayClass9_0_TypeInfo);
          FGOCrystalMesh___c__DisplayClass9_0___ctor((FGOCrystalMesh___c__DisplayClass9_0_o *)v18, 0LL);
          if ( v17 >= LODWORD(v16[1].klass) )
          {
            v66 = sub_B2C460(ComponentsInChildren_USTimelineContainer);
            sub_B2C400(v66, 0LL);
          }
          if ( !v18 )
            break;
          v25 = (System_Int32_array **)*((_QWORD *)&v16[1].monitor + v17);
          *(_QWORD *)(v18 + 16) = v25;
          v26 = (UnityEngine_Component_o **)(v18 + 16);
          sub_B2C2F8((BattleServantConfConponent_o *)(v18 + 16), v25, v19, v20, v21, v22, v23, v24);
          crystalData = this->fields.crystalData;
          if ( !crystalData )
            break;
          if ( crystalData->fields.useWeaponModel )
            goto LABEL_19;
          ComponentsInChildren_USTimelineContainer = *v26;
          if ( !*v26 )
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
                  (System_String_o *)StringLiteral_23259/*"weapon_"*/,
                  0LL) )
          {
LABEL_19:
            ComponentsInChildren_USTimelineContainer = *v26;
            if ( !*v26 )
              break;
            ComponentsInChildren_USTimelineContainer = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                                    ComponentsInChildren_USTimelineContainer,
                                                                                    0LL);
            if ( !*v26 )
              break;
            v28 = (UILabel_o *)ComponentsInChildren_USTimelineContainer;
            gameObject = UnityEngine_Component__get_gameObject(*v26, 0LL);
            Parent = GameObjectExtensions__GetParent(gameObject, 0LL);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            ComponentsInChildren_USTimelineContainer = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_UILabel_(
                                                                                    v28,
                                                                                    Parent,
                                                                                    (const MethodInfo_2095F74 *)Method_UnityEngine_Object_Instantiate_GameObject____67450600);
            if ( !ComponentsInChildren_USTimelineContainer )
              break;
            v31 = (UnityEngine_GameObject_o *)ComponentsInChildren_USTimelineContainer;
            Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                (UnityEngine_GameObject_o *)ComponentsInChildren_USTimelineContainer,
                                                                (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_FGOCrystalMesh___);
            if ( UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL) )
            {
              v33 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              v31,
                                              (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_FGOCrystalMesh___);
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              UnityEngine_Object__Destroy_35314896(v33, 0LL);
            }
            ComponentsInChildren_USTimelineContainer = *v26;
            if ( !*v26 )
              break;
            ComponentsInChildren_USTimelineContainer = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                                    ComponentsInChildren_USTimelineContainer,
                                                                                    0LL);
            if ( !ComponentsInChildren_USTimelineContainer )
              break;
            name = UnityEngine_Object__get_name((UnityEngine_Object_o *)ComponentsInChildren_USTimelineContainer, 0LL);
            v35 = System_String__Concat_44305532(name, (System_String_o *)StringLiteral_16138/*"_crystal"*/, 0LL);
            UnityEngine_Object__set_name((UnityEngine_Object_o *)v31, v35, 0LL);
            FGOCrystalMesh__ChangeCrystalMaterial(this, v31, this->fields.crystalMat, v36);
            v37 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            v31,
                                            (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_FGOMeshExploder___);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Equality(v37, 0LL, 0LL) )
            {
              ComponentsInChildren_USTimelineContainer = (UnityEngine_Component_o *)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                                                                      v31,
                                                                                      (const MethodInfo_1AA77E0 *)Method_UnityEngine_GameObject_AddComponent_FGOMeshExploder___);
              v38 = this->fields.crystalData;
              if ( !v38 )
                break;
              v39 = ComponentsInChildren_USTimelineContainer;
              if ( !ComponentsInChildren_USTimelineContainer )
                break;
              LOBYTE(ComponentsInChildren_USTimelineContainer[1].klass) = v38->fields.useBrokenPiece;
              v40 = this->fields.crystalData;
              if ( !v40 )
                break;
              BYTE1(ComponentsInChildren_USTimelineContainer[1].klass) = v40->fields.useGravity;
              v41 = this->fields.crystalData;
              if ( !v41 )
                break;
              HIDWORD(ComponentsInChildren_USTimelineContainer[1].klass) = LODWORD(v41->fields.mass);
              v42 = this->fields.crystalData;
              if ( !v42 )
                break;
              *((_DWORD *)&ComponentsInChildren_USTimelineContainer[1].fields + 1) = v42->fields.minPieceVertex;
              v43 = this->fields.crystalData;
              if ( !v43 )
                break;
              LODWORD(ComponentsInChildren_USTimelineContainer[2].klass) = v43->fields.maxPieceVertex;
              v44 = this->fields.crystalData;
              if ( !v44 )
                break;
              v45 = *(void **)&v44->fields.angularVelocity.fields.x;
              z = v44->fields.angularVelocity.fields.z;
              ComponentsInChildren_USTimelineContainer[1].monitor = v45;
              *(float *)&ComponentsInChildren_USTimelineContainer[1].fields.m_CachedPtr = z;
              v47 = this->fields.crystalData;
              if ( !v47 )
                break;
              HIDWORD(ComponentsInChildren_USTimelineContainer[2].klass) = LODWORD(v47->fields.minBrokenSpeed);
              v48 = this->fields.crystalData;
              if ( !v48 )
                break;
              *(float *)&ComponentsInChildren_USTimelineContainer[2].monitor = v48->fields.maxBrokenSpeed;
              v49 = this->fields.crystalData;
              if ( !v49 )
                break;
              HIDWORD(ComponentsInChildren_USTimelineContainer[2].monitor) = LODWORD(v49->fields.pieceScale);
              v50 = this->fields.crystalData;
              if ( !v50 )
                break;
              ComponentsInChildren_USTimelineContainer[2].fields.m_CachedPtr = LODWORD(v50->fields.fadeTime);
              ComponentsInChildren_USTimelineContainer = *v26;
              if ( !*v26 )
                break;
              v51 = (System_Int32_array **)UnityEngine_Component__get_gameObject(
                                             ComponentsInChildren_USTimelineContainer,
                                             0LL);
              v39[3].klass = (UnityEngine_Component_c *)v51;
              v52 = v39 + 3;
              sub_B2C2F8((BattleServantConfConponent_o *)v52, v51, v53, v54, v55, v56, v57, v58);
              v59 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
              System_Action___ctor(
                v59,
                (Il2CppObject *)v18,
                Method_FGOCrystalMesh___c__DisplayClass9_0__AddCrystalMesh_b__0__,
                0LL);
              v52->monitor = v59;
              sub_B2C2F8(
                (BattleServantConfConponent_o *)&v52->monitor,
                (System_Int32_array **)v59,
                v60,
                v61,
                v62,
                v63,
                v64,
                v65);
            }
          }
          if ( (__int64)++v17 >= SLODWORD(v16[1].klass) )
            return;
        }
LABEL_51:
        sub_B2C434(ComponentsInChildren_USTimelineContainer, v15);
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
  int crystalMat; // w8
  FGOCrystalMesh_o *v26; // x23
  il2cpp_array_size_t v27; // w26
  UnityEngine_Material_o *v28; // x25
  UnityEngine_Material_o *v29; // x24
  float Float; // s0
  UnityEngine_Texture_o *Texture; // x0
  struct FGOCrystalMesh_CrystalData_o *crystalData; // x8
  float timeSinceLevelLoad; // s0
  UnityEngine_Texture_o *mainTexture; // x0
  int32_t renderQueue; // w0
  UnityEngine_Material_array *v36; // x25
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  Il2CppClass **v43; // x0
  __int64 v44; // x0
  __int64 v45; // x0
  FGOCrystalMesh_o *v46; // [xsp+8h] [xbp-58h]

  v46 = this;
  if ( (byte_418780E & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer___, o);
    sub_B2C35C(&UnityEngine_Material___TypeInfo, v6);
    sub_B2C35C(&UnityEngine_Material_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_16105/*"_Xscale"*/, v8);
    sub_B2C35C(&StringLiteral_16013/*"_MainTex"*/, v9);
    sub_B2C35C(&StringLiteral_16063/*"_StartTime"*/, v10);
    sub_B2C35C(&StringLiteral_15986/*"_FadeTime"*/, v11);
    sub_B2C35C(&StringLiteral_16093/*"_UseSubtex"*/, v12);
    sub_B2C35C(&StringLiteral_16072/*"_SubTex"*/, v13);
    this = (FGOCrystalMesh_o *)sub_B2C35C(&StringLiteral_16210/*"_xscale"*/, v14);
    byte_418780E = 1;
  }
  if ( !o )
    goto LABEL_30;
  this = (FGOCrystalMesh_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                               o,
                               (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer___);
  if ( !this )
    goto LABEL_30;
  v15 = (UnityEngine_Renderer_o *)this;
  this = (FGOCrystalMesh_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)this, 0LL);
  if ( !this )
    goto LABEL_30;
  v16 = (System_Int32_array **)sub_B2C374(UnityEngine_Material___TypeInfo, LODWORD(this->fields.crystalMat));
  v46->fields.materialsArray = (struct UnityEngine_Material_array *)v16;
  p_materialsArray = &v46->fields.materialsArray;
  sub_B2C2F8((BattleServantConfConponent_o *)&v46->fields.materialsArray, v16, v18, v19, v20, v21, v22, v23);
  sortingOrder = UnityEngine_Renderer__get_sortingOrder(v15, 0LL);
  UnityEngine_Renderer__set_sortingOrder(v15, sortingOrder + 1, 0LL);
  this = (FGOCrystalMesh_o *)UnityEngine_Renderer__get_materials(v15, 0LL);
  if ( !this )
    goto LABEL_30;
  crystalMat = (int)this->fields.crystalMat;
  v26 = this;
  if ( crystalMat >= 1 )
  {
    v27 = 0;
    while ( 1 )
    {
      if ( v27 >= crystalMat )
      {
LABEL_31:
        v44 = sub_B2C460(this);
        sub_B2C400(v44, 0LL);
      }
      v28 = (UnityEngine_Material_o *)*((_QWORD *)&v26->fields.crystalData + (int)v27);
      v29 = (UnityEngine_Material_o *)sub_B2C42C(UnityEngine_Material_TypeInfo);
      UnityEngine_Material___ctor_40686000(v29, crystalMaterial, 0LL);
      if ( !v28 )
        break;
      if ( UnityEngine_Material__HasProperty_40688736(v28, (System_String_o *)StringLiteral_16210/*"_xscale"*/, 0LL) )
      {
        Float = UnityEngine_Material__GetFloat(v28, (System_String_o *)StringLiteral_16210/*"_xscale"*/, 0LL);
        if ( !v29 )
          break;
        UnityEngine_Material__SetFloat(v29, (System_String_o *)StringLiteral_16105/*"_Xscale"*/, Float, 0LL);
        LOBYTE(this) = UnityEngine_Material__HasProperty_40688736(v28, (System_String_o *)StringLiteral_16072/*"_SubTex"*/, 0LL);
      }
      else
      {
        this = (FGOCrystalMesh_o *)UnityEngine_Material__HasProperty_40688736(
                                     v28,
                                     (System_String_o *)StringLiteral_16072/*"_SubTex"*/,
                                     0LL);
        if ( !v29 )
          break;
      }
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        UnityEngine_Material__SetInt(v29, (System_String_o *)StringLiteral_16093/*"_UseSubtex"*/, 1, 0LL);
        Texture = UnityEngine_Material__GetTexture(v28, (System_String_o *)StringLiteral_16072/*"_SubTex"*/, 0LL);
        UnityEngine_Material__SetTexture(v29, (System_String_o *)StringLiteral_16072/*"_SubTex"*/, Texture, 0LL);
      }
      else
      {
        UnityEngine_Material__SetInt(v29, (System_String_o *)StringLiteral_16093/*"_UseSubtex"*/, 0, 0LL);
      }
      this = (FGOCrystalMesh_o *)UnityEngine_Material__HasProperty_40688736(
                                   v29,
                                   (System_String_o *)StringLiteral_15986/*"_FadeTime"*/,
                                   0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        crystalData = v46->fields.crystalData;
        if ( !crystalData )
          break;
        UnityEngine_Material__SetFloat(
          v29,
          (System_String_o *)StringLiteral_15986/*"_FadeTime"*/,
          crystalData->fields.crystalFadeTime,
          0LL);
      }
      if ( UnityEngine_Material__HasProperty_40688736(v29, (System_String_o *)StringLiteral_16063/*"_StartTime"*/, 0LL) )
      {
        timeSinceLevelLoad = UnityEngine_Time__get_timeSinceLevelLoad(0LL);
        UnityEngine_Material__SetFloat(v29, (System_String_o *)StringLiteral_16063/*"_StartTime"*/, timeSinceLevelLoad, 0LL);
      }
      if ( UnityEngine_Material__HasProperty_40688736(v28, (System_String_o *)StringLiteral_16013/*"_MainTex"*/, 0LL) )
      {
        mainTexture = UnityEngine_Material__get_mainTexture(v28, 0LL);
        UnityEngine_Material__set_mainTexture(v29, mainTexture, 0LL);
      }
      renderQueue = UnityEngine_Material__get_renderQueue(v28, 0LL);
      UnityEngine_Material__set_renderQueue(v29, renderQueue, 0LL);
      v36 = *p_materialsArray;
      if ( !*p_materialsArray )
        break;
      this = (FGOCrystalMesh_o *)sub_B2C41C(v29, v36->obj.klass->_1.element_class);
      if ( !this )
      {
        v45 = sub_B2C454(0LL);
        sub_B2C400(v45, 0LL);
      }
      if ( v27 >= v36->max_length )
        goto LABEL_31;
      v43 = &v36->obj.klass + (int)v27;
      v43[4] = (Il2CppClass *)v29;
      sub_B2C2F8((BattleServantConfConponent_o *)(v43 + 4), (System_Int32_array **)v29, v37, v38, v39, v40, v41, v42);
      crystalMat = (int)v26->fields.crystalMat;
      if ( (int)++v27 >= crystalMat )
        goto LABEL_29;
    }
LABEL_30:
    sub_B2C434(this, o);
  }
LABEL_29:
  UnityEngine_Renderer__set_materials(v15, *p_materialsArray, 0LL);
}


void __fastcall FGOCrystalMesh__ExplodeCrystalMesh(FGOCrystalMesh_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  void *ComponentsInChildren_USTimelineContainer; // x0
  __int64 v6; // x1
  int v7; // w8
  void *v8; // x20
  unsigned int v9; // w21
  __int64 v10; // x8
  _QWORD *v11; // x20
  unsigned __int64 v12; // x22
  struct FGOCrystalMesh_CrystalData_o *crystalData; // x8
  UnityEngine_Component_o *v14; // x21
  __int64 v15; // x0

  if ( (byte_418780D & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponentsInChildren_FGOMeshExploder___, method);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer___, v3);
    sub_B2C35C(&StringLiteral_23259/*"weapon_"*/, v4);
    byte_418780D = 1;
  }
  ComponentsInChildren_USTimelineContainer = UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                                               (UnityEngine_Component_o *)this,
                                               (const MethodInfo_172DF98 *)Method_UnityEngine_Component_GetComponentsInChildren_FGOMeshExploder___);
  if ( !ComponentsInChildren_USTimelineContainer )
    goto LABEL_23;
  v7 = *((_DWORD *)ComponentsInChildren_USTimelineContainer + 6);
  v8 = ComponentsInChildren_USTimelineContainer;
  if ( v7 >= 1 )
  {
    v9 = 0;
    while ( v9 < v7 )
    {
      ComponentsInChildren_USTimelineContainer = (void *)*((_QWORD *)v8 + (int)v9 + 4);
      if ( !ComponentsInChildren_USTimelineContainer )
        goto LABEL_23;
      FGOMeshExploder__Explode((FGOMeshExploder_o *)ComponentsInChildren_USTimelineContainer, 0LL);
      v7 = *((_DWORD *)v8 + 6);
      if ( (int)++v9 >= v7 )
        goto LABEL_9;
    }
LABEL_24:
    v15 = sub_B2C460(ComponentsInChildren_USTimelineContainer);
    sub_B2C400(v15, 0LL);
  }
LABEL_9:
  ComponentsInChildren_USTimelineContainer = UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                                               (UnityEngine_Component_o *)this,
                                               (const MethodInfo_172DF98 *)Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer___);
  if ( !ComponentsInChildren_USTimelineContainer )
LABEL_23:
    sub_B2C434(ComponentsInChildren_USTimelineContainer, v6);
  v10 = *((_QWORD *)ComponentsInChildren_USTimelineContainer + 3);
  v11 = ComponentsInChildren_USTimelineContainer;
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
        ComponentsInChildren_USTimelineContainer = UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)v11[v12 + 4],
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
                                                             (System_String_o *)StringLiteral_23259/*"weapon_"*/,
                                                             0LL);
        if ( ((unsigned __int8)ComponentsInChildren_USTimelineContainer & 1) != 0 )
        {
          ComponentsInChildren_USTimelineContainer = UnityEngine_Component__get_gameObject(v14, 0LL);
          if ( !ComponentsInChildren_USTimelineContainer )
            goto LABEL_23;
          UnityEngine_GameObject__SetActive(
            (UnityEngine_GameObject_o *)ComponentsInChildren_USTimelineContainer,
            0,
            0LL);
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.crystalData,
    (System_Int32_array **)crystalData,
    (System_String_array **)crystalMat,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.crystalMat = crystalMat;
  sub_B2C2F8(
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
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.materialsArray, 0LL, v2, v3, v4, v5, v6, v7);
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
  *(_OWORD *)&this->fields.minBrokenSpeed = xmmword_319E080;
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

  if ( (byte_41841BE & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_41841BE = 1;
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
    sub_B2C434(r, method);
  }
}