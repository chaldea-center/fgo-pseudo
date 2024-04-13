void __fastcall FGOCrystalMesh___ctor(FGOCrystalMesh_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  FGOCrystalMesh_CrystalData_o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E7AA5 & 1) == 0 )
  {
    sub_B5D5C4(&FGOCrystalMesh_CrystalData_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7AA5 = 1;
  }
  v5 = (FGOCrystalMesh_CrystalData_o *)sub_B5D694(FGOCrystalMesh_CrystalData_TypeInfo);
  FGOCrystalMesh_CrystalData___ctor(v5, 0LL);
  this->fields.crystalData = v5;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.crystalData,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FGOCrystalMesh__AddCrystalMesh(FGOCrystalMesh_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  UnityEngine_Object_o *crystalMat; // x20
  UnityEngine_Component_o *ComponentsInChildren_USTimelineContainer; // x0
  __int64 v37; // x1
  UnityEngine_Component_o *v38; // x20
  unsigned __int64 v39; // x26
  __int64 v40; // x21
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Int32_array **v47; // x1
  UnityEngine_Component_o **v48; // x22
  struct FGOCrystalMesh_CrystalData_o *crystalData; // x8
  UILabel_o *v50; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *Parent; // x24
  UnityEngine_GameObject_o *v53; // x23
  UnityEngine_Object_o *Component_srcLineSprite; // x0
  UnityEngine_Object_o *v55; // x24
  System_String_o *name; // x0
  System_String_o *v57; // x0
  const MethodInfo *v58; // x3
  UnityEngine_Object_o *v59; // x24
  struct FGOCrystalMesh_CrystalData_o *v60; // x8
  UnityEngine_Component_o *v61; // x23
  struct FGOCrystalMesh_CrystalData_o *v62; // x8
  struct FGOCrystalMesh_CrystalData_o *v63; // x8
  struct FGOCrystalMesh_CrystalData_o *v64; // x8
  struct FGOCrystalMesh_CrystalData_o *v65; // x8
  struct FGOCrystalMesh_CrystalData_o *v66; // x8
  void *v67; // x9
  float z; // w8
  struct FGOCrystalMesh_CrystalData_o *v69; // x8
  struct FGOCrystalMesh_CrystalData_o *v70; // x8
  struct FGOCrystalMesh_CrystalData_o *v71; // x8
  struct FGOCrystalMesh_CrystalData_o *v72; // x8
  System_Int32_array **v73; // x0
  UnityEngine_Component_o *v74; // x23
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  System_Action_o *v81; // x22
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  __int64 v88; // x0

  if ( (byte_42E7AA2 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer___, v5, v6, v7);
    sub_B5D5C4(&Method_UnityEngine_GameObject_AddComponent_FGOMeshExploder___, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_FGOCrystalMesh___, v11, v12, v13);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_FGOMeshExploder___, v14, v15, v16);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject____68882800, v17, v18, v19);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_FGOCrystalMesh___c__DisplayClass9_0__AddCrystalMesh_b__0__, v23, v24, v25);
    sub_B5D5C4(&FGOCrystalMesh___c__DisplayClass9_0_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_23570/*"weapon_"*/, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_16331/*"_crystal"*/, v32, v33, v34);
    byte_42E7AA2 = 1;
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
                                                                              (const MethodInfo_1ADE6A8 *)Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer___);
      if ( !ComponentsInChildren_USTimelineContainer )
        goto LABEL_51;
      v38 = ComponentsInChildren_USTimelineContainer;
      if ( SLODWORD(ComponentsInChildren_USTimelineContainer[1].klass) >= 1 )
      {
        v39 = 0LL;
        while ( 1 )
        {
          v40 = sub_B5D694(FGOCrystalMesh___c__DisplayClass9_0_TypeInfo);
          FGOCrystalMesh___c__DisplayClass9_0___ctor((FGOCrystalMesh___c__DisplayClass9_0_o *)v40, 0LL);
          if ( v39 >= LODWORD(v38[1].klass) )
          {
            v88 = sub_B5D6C8(ComponentsInChildren_USTimelineContainer);
            sub_B5D668(v88, 0LL);
          }
          if ( !v40 )
            break;
          v47 = (System_Int32_array **)*((_QWORD *)&v38[1].monitor + v39);
          *(_QWORD *)(v40 + 16) = v47;
          v48 = (UnityEngine_Component_o **)(v40 + 16);
          sub_B5D560((BattleServantConfConponent_o *)(v40 + 16), v47, v41, v42, v43, v44, v45, v46);
          crystalData = this->fields.crystalData;
          if ( !crystalData )
            break;
          if ( crystalData->fields.useWeaponModel )
            goto LABEL_19;
          ComponentsInChildren_USTimelineContainer = *v48;
          if ( !*v48 )
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
                  (System_String_o *)StringLiteral_23570/*"weapon_"*/,
                  0LL) )
          {
LABEL_19:
            ComponentsInChildren_USTimelineContainer = *v48;
            if ( !*v48 )
              break;
            ComponentsInChildren_USTimelineContainer = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                                    ComponentsInChildren_USTimelineContainer,
                                                                                    0LL);
            if ( !*v48 )
              break;
            v50 = (UILabel_o *)ComponentsInChildren_USTimelineContainer;
            gameObject = UnityEngine_Component__get_gameObject(*v48, 0LL);
            Parent = GameObjectExtensions__GetParent(gameObject, 0LL);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            ComponentsInChildren_USTimelineContainer = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_UILabel_(
                                                                                    v50,
                                                                                    Parent,
                                                                                    (const MethodInfo_1E66414 *)Method_UnityEngine_Object_Instantiate_GameObject____68882800);
            if ( !ComponentsInChildren_USTimelineContainer )
              break;
            v53 = (UnityEngine_GameObject_o *)ComponentsInChildren_USTimelineContainer;
            Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                (UnityEngine_GameObject_o *)ComponentsInChildren_USTimelineContainer,
                                                                (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_FGOCrystalMesh___);
            if ( UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL) )
            {
              v55 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              v53,
                                              (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_FGOCrystalMesh___);
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              UnityEngine_Object__Destroy_35620236(v55, 0LL);
            }
            ComponentsInChildren_USTimelineContainer = *v48;
            if ( !*v48 )
              break;
            ComponentsInChildren_USTimelineContainer = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                                    ComponentsInChildren_USTimelineContainer,
                                                                                    0LL);
            if ( !ComponentsInChildren_USTimelineContainer )
              break;
            name = UnityEngine_Object__get_name((UnityEngine_Object_o *)ComponentsInChildren_USTimelineContainer, 0LL);
            v57 = System_String__Concat_44577788(name, (System_String_o *)StringLiteral_16331/*"_crystal"*/, 0LL);
            UnityEngine_Object__set_name((UnityEngine_Object_o *)v53, v57, 0LL);
            FGOCrystalMesh__ChangeCrystalMaterial(this, v53, this->fields.crystalMat, v58);
            v59 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            v53,
                                            (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_FGOMeshExploder___);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Equality(v59, 0LL, 0LL) )
            {
              ComponentsInChildren_USTimelineContainer = (UnityEngine_Component_o *)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                                                                      v53,
                                                                                      (const MethodInfo_1CC42A0 *)Method_UnityEngine_GameObject_AddComponent_FGOMeshExploder___);
              v60 = this->fields.crystalData;
              if ( !v60 )
                break;
              v61 = ComponentsInChildren_USTimelineContainer;
              if ( !ComponentsInChildren_USTimelineContainer )
                break;
              LOBYTE(ComponentsInChildren_USTimelineContainer[1].klass) = v60->fields.useBrokenPiece;
              v62 = this->fields.crystalData;
              if ( !v62 )
                break;
              BYTE1(ComponentsInChildren_USTimelineContainer[1].klass) = v62->fields.useGravity;
              v63 = this->fields.crystalData;
              if ( !v63 )
                break;
              HIDWORD(ComponentsInChildren_USTimelineContainer[1].klass) = LODWORD(v63->fields.mass);
              v64 = this->fields.crystalData;
              if ( !v64 )
                break;
              *((_DWORD *)&ComponentsInChildren_USTimelineContainer[1].fields + 1) = v64->fields.minPieceVertex;
              v65 = this->fields.crystalData;
              if ( !v65 )
                break;
              LODWORD(ComponentsInChildren_USTimelineContainer[2].klass) = v65->fields.maxPieceVertex;
              v66 = this->fields.crystalData;
              if ( !v66 )
                break;
              v67 = *(void **)&v66->fields.angularVelocity.fields.x;
              z = v66->fields.angularVelocity.fields.z;
              ComponentsInChildren_USTimelineContainer[1].monitor = v67;
              *(float *)&ComponentsInChildren_USTimelineContainer[1].fields.m_CachedPtr = z;
              v69 = this->fields.crystalData;
              if ( !v69 )
                break;
              HIDWORD(ComponentsInChildren_USTimelineContainer[2].klass) = LODWORD(v69->fields.minBrokenSpeed);
              v70 = this->fields.crystalData;
              if ( !v70 )
                break;
              *(float *)&ComponentsInChildren_USTimelineContainer[2].monitor = v70->fields.maxBrokenSpeed;
              v71 = this->fields.crystalData;
              if ( !v71 )
                break;
              HIDWORD(ComponentsInChildren_USTimelineContainer[2].monitor) = LODWORD(v71->fields.pieceScale);
              v72 = this->fields.crystalData;
              if ( !v72 )
                break;
              ComponentsInChildren_USTimelineContainer[2].fields.m_CachedPtr = LODWORD(v72->fields.fadeTime);
              ComponentsInChildren_USTimelineContainer = *v48;
              if ( !*v48 )
                break;
              v73 = (System_Int32_array **)UnityEngine_Component__get_gameObject(
                                             ComponentsInChildren_USTimelineContainer,
                                             0LL);
              v61[3].klass = (UnityEngine_Component_c *)v73;
              v74 = v61 + 3;
              sub_B5D560((BattleServantConfConponent_o *)v74, v73, v75, v76, v77, v78, v79, v80);
              v81 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
              System_Action___ctor(
                v81,
                (Il2CppObject *)v40,
                Method_FGOCrystalMesh___c__DisplayClass9_0__AddCrystalMesh_b__0__,
                0LL);
              v74->monitor = v81;
              sub_B5D560(
                (BattleServantConfConponent_o *)&v74->monitor,
                (System_Int32_array **)v81,
                v82,
                v83,
                v84,
                v85,
                v86,
                v87);
            }
          }
          if ( (__int64)++v39 >= SLODWORD(v38[1].klass) )
            return;
        }
LABEL_51:
        sub_B5D69C(ComponentsInChildren_USTimelineContainer, v37);
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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  UnityEngine_Renderer_o *v33; // x20
  System_Int32_array **v34; // x0
  UnityEngine_Material_array **p_materialsArray; // x22
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  int32_t sortingOrder; // w0
  int crystalMat; // w8
  FGOCrystalMesh_o *v44; // x23
  il2cpp_array_size_t v45; // w26
  UnityEngine_Material_o *v46; // x25
  UnityEngine_Material_o *v47; // x24
  float Float; // s0
  UnityEngine_Texture_o *Texture; // x0
  struct FGOCrystalMesh_CrystalData_o *crystalData; // x8
  float timeSinceLevelLoad; // s0
  UnityEngine_Texture_o *mainTexture; // x0
  int32_t renderQueue; // w0
  UnityEngine_Material_array *v54; // x25
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  Il2CppClass **v61; // x0
  __int64 v62; // x0
  __int64 v63; // x0
  FGOCrystalMesh_o *v64; // [xsp+8h] [xbp-58h]

  v64 = this;
  if ( (byte_42E7AA4 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer___,
      (_DWORD)o,
      (_DWORD)crystalMaterial,
      method);
    sub_B5D5C4(&UnityEngine_Material___TypeInfo, v6, v7, v8);
    sub_B5D5C4(&UnityEngine_Material_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_16297/*"_Xscale"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_16205/*"_MainTex"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_16255/*"_StartTime"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_16178/*"_FadeTime"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_16285/*"_UseSubtex"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_16264/*"_SubTex"*/, v27, v28, v29);
    this = (FGOCrystalMesh_o *)sub_B5D5C4(&StringLiteral_16404/*"_xscale"*/, v30, v31, v32);
    byte_42E7AA4 = 1;
  }
  if ( !o )
    goto LABEL_30;
  this = (FGOCrystalMesh_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                               o,
                               (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer___);
  if ( !this )
    goto LABEL_30;
  v33 = (UnityEngine_Renderer_o *)this;
  this = (FGOCrystalMesh_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)this, 0LL);
  if ( !this )
    goto LABEL_30;
  v34 = (System_Int32_array **)sub_B5D5DC(UnityEngine_Material___TypeInfo, LODWORD(this->fields.crystalMat));
  v64->fields.materialsArray = (struct UnityEngine_Material_array *)v34;
  p_materialsArray = &v64->fields.materialsArray;
  sub_B5D560((BattleServantConfConponent_o *)&v64->fields.materialsArray, v34, v36, v37, v38, v39, v40, v41);
  sortingOrder = UnityEngine_Renderer__get_sortingOrder(v33, 0LL);
  UnityEngine_Renderer__set_sortingOrder(v33, sortingOrder + 1, 0LL);
  this = (FGOCrystalMesh_o *)UnityEngine_Renderer__get_materials(v33, 0LL);
  if ( !this )
    goto LABEL_30;
  crystalMat = (int)this->fields.crystalMat;
  v44 = this;
  if ( crystalMat >= 1 )
  {
    v45 = 0;
    while ( 1 )
    {
      if ( v45 >= crystalMat )
      {
LABEL_31:
        v62 = sub_B5D6C8(this);
        sub_B5D668(v62, 0LL);
      }
      v46 = (UnityEngine_Material_o *)*((_QWORD *)&v44->fields.crystalData + (int)v45);
      v47 = (UnityEngine_Material_o *)sub_B5D694(UnityEngine_Material_TypeInfo);
      UnityEngine_Material___ctor_41620632(v47, crystalMaterial, 0LL);
      if ( !v46 )
        break;
      if ( UnityEngine_Material__HasProperty_41623368(v46, (System_String_o *)StringLiteral_16404/*"_xscale"*/, 0LL) )
      {
        Float = UnityEngine_Material__GetFloat(v46, (System_String_o *)StringLiteral_16404/*"_xscale"*/, 0LL);
        if ( !v47 )
          break;
        UnityEngine_Material__SetFloat(v47, (System_String_o *)StringLiteral_16297/*"_Xscale"*/, Float, 0LL);
        LOBYTE(this) = UnityEngine_Material__HasProperty_41623368(v46, (System_String_o *)StringLiteral_16264/*"_SubTex"*/, 0LL);
      }
      else
      {
        this = (FGOCrystalMesh_o *)UnityEngine_Material__HasProperty_41623368(
                                     v46,
                                     (System_String_o *)StringLiteral_16264/*"_SubTex"*/,
                                     0LL);
        if ( !v47 )
          break;
      }
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        UnityEngine_Material__SetInt(v47, (System_String_o *)StringLiteral_16285/*"_UseSubtex"*/, 1, 0LL);
        Texture = UnityEngine_Material__GetTexture(v46, (System_String_o *)StringLiteral_16264/*"_SubTex"*/, 0LL);
        UnityEngine_Material__SetTexture(v47, (System_String_o *)StringLiteral_16264/*"_SubTex"*/, Texture, 0LL);
      }
      else
      {
        UnityEngine_Material__SetInt(v47, (System_String_o *)StringLiteral_16285/*"_UseSubtex"*/, 0, 0LL);
      }
      this = (FGOCrystalMesh_o *)UnityEngine_Material__HasProperty_41623368(
                                   v47,
                                   (System_String_o *)StringLiteral_16178/*"_FadeTime"*/,
                                   0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        crystalData = v64->fields.crystalData;
        if ( !crystalData )
          break;
        UnityEngine_Material__SetFloat(
          v47,
          (System_String_o *)StringLiteral_16178/*"_FadeTime"*/,
          crystalData->fields.crystalFadeTime,
          0LL);
      }
      if ( UnityEngine_Material__HasProperty_41623368(v47, (System_String_o *)StringLiteral_16255/*"_StartTime"*/, 0LL) )
      {
        timeSinceLevelLoad = UnityEngine_Time__get_timeSinceLevelLoad(0LL);
        UnityEngine_Material__SetFloat(v47, (System_String_o *)StringLiteral_16255/*"_StartTime"*/, timeSinceLevelLoad, 0LL);
      }
      if ( UnityEngine_Material__HasProperty_41623368(v46, (System_String_o *)StringLiteral_16205/*"_MainTex"*/, 0LL) )
      {
        mainTexture = UnityEngine_Material__get_mainTexture(v46, 0LL);
        UnityEngine_Material__set_mainTexture(v47, mainTexture, 0LL);
      }
      renderQueue = UnityEngine_Material__get_renderQueue(v46, 0LL);
      UnityEngine_Material__set_renderQueue(v47, renderQueue, 0LL);
      v54 = *p_materialsArray;
      if ( !*p_materialsArray )
        break;
      this = (FGOCrystalMesh_o *)sub_B5D684(v47, v54->obj.klass->_1.element_class);
      if ( !this )
      {
        v63 = sub_B5D6BC(0LL);
        sub_B5D668(v63, 0LL);
      }
      if ( v45 >= v54->max_length )
        goto LABEL_31;
      v61 = &v54->obj.klass + (int)v45;
      v61[4] = (Il2CppClass *)v47;
      sub_B5D560((BattleServantConfConponent_o *)(v61 + 4), (System_Int32_array **)v47, v55, v56, v57, v58, v59, v60);
      crystalMat = (int)v44->fields.crystalMat;
      if ( (int)++v45 >= crystalMat )
        goto LABEL_29;
    }
LABEL_30:
    sub_B5D69C(this, o);
  }
LABEL_29:
  UnityEngine_Renderer__set_materials(v33, *p_materialsArray, 0LL);
}


void __fastcall FGOCrystalMesh__ExplodeCrystalMesh(FGOCrystalMesh_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  void *ComponentsInChildren_USTimelineContainer; // x0
  __int64 v12; // x1
  int v13; // w8
  void *v14; // x20
  unsigned int v15; // w21
  __int64 v16; // x8
  _QWORD *v17; // x20
  unsigned __int64 v18; // x22
  struct FGOCrystalMesh_CrystalData_o *crystalData; // x8
  UnityEngine_Component_o *v20; // x21
  __int64 v21; // x0

  if ( (byte_42E7AA3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentsInChildren_FGOMeshExploder___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer___, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_23570/*"weapon_"*/, v8, v9, v10);
    byte_42E7AA3 = 1;
  }
  ComponentsInChildren_USTimelineContainer = UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                                               (UnityEngine_Component_o *)this,
                                               (const MethodInfo_1ADE6A8 *)Method_UnityEngine_Component_GetComponentsInChildren_FGOMeshExploder___);
  if ( !ComponentsInChildren_USTimelineContainer )
    goto LABEL_23;
  v13 = *((_DWORD *)ComponentsInChildren_USTimelineContainer + 6);
  v14 = ComponentsInChildren_USTimelineContainer;
  if ( v13 >= 1 )
  {
    v15 = 0;
    while ( v15 < v13 )
    {
      ComponentsInChildren_USTimelineContainer = (void *)*((_QWORD *)v14 + (int)v15 + 4);
      if ( !ComponentsInChildren_USTimelineContainer )
        goto LABEL_23;
      FGOMeshExploder__Explode((FGOMeshExploder_o *)ComponentsInChildren_USTimelineContainer, 0LL);
      v13 = *((_DWORD *)v14 + 6);
      if ( (int)++v15 >= v13 )
        goto LABEL_9;
    }
LABEL_24:
    v21 = sub_B5D6C8(ComponentsInChildren_USTimelineContainer);
    sub_B5D668(v21, 0LL);
  }
LABEL_9:
  ComponentsInChildren_USTimelineContainer = UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                                               (UnityEngine_Component_o *)this,
                                               (const MethodInfo_1ADE6A8 *)Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer___);
  if ( !ComponentsInChildren_USTimelineContainer )
LABEL_23:
    sub_B5D69C(ComponentsInChildren_USTimelineContainer, v12);
  v16 = *((_QWORD *)ComponentsInChildren_USTimelineContainer + 3);
  v17 = ComponentsInChildren_USTimelineContainer;
  if ( (int)v16 >= 1 )
  {
    v18 = 0LL;
    while ( v18 < (unsigned int)v16 )
    {
      crystalData = this->fields.crystalData;
      if ( !crystalData )
        goto LABEL_23;
      if ( !crystalData->fields.useWeaponModel )
      {
        v20 = (UnityEngine_Component_o *)v17[v18 + 4];
        if ( !v20 )
          goto LABEL_23;
        ComponentsInChildren_USTimelineContainer = UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)v17[v18 + 4],
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
                                                             (System_String_o *)StringLiteral_23570/*"weapon_"*/,
                                                             0LL);
        if ( ((unsigned __int8)ComponentsInChildren_USTimelineContainer & 1) != 0 )
        {
          ComponentsInChildren_USTimelineContainer = UnityEngine_Component__get_gameObject(v20, 0LL);
          if ( !ComponentsInChildren_USTimelineContainer )
            goto LABEL_23;
          UnityEngine_GameObject__SetActive(
            (UnityEngine_GameObject_o *)ComponentsInChildren_USTimelineContainer,
            0,
            0LL);
        }
      }
      LODWORD(v16) = *((_DWORD *)v17 + 6);
      if ( (__int64)++v18 >= (int)v16 )
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.crystalData,
    (System_Int32_array **)crystalData,
    (System_String_array **)crystalMat,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.crystalMat = crystalMat;
  sub_B5D560(
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
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.materialsArray, 0LL, v2, v3, v4, v5, v6, v7);
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
  *(_OWORD *)&this->fields.minBrokenSpeed = xmmword_329F5C0;
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
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Component_o *r; // x0
  UnityEngine_Object_o *gameObject; // x20

  if ( (byte_42E56BD & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E56BD = 1;
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
    sub_B5D69C(r, method);
  }
}