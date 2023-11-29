void __fastcall FGOCrystalMesh___ctor(FGOCrystalMesh_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  FGOCrystalMesh_CrystalData_o *v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40FAD85 & 1) == 0 )
  {
    sub_B16FFC(&FGOCrystalMesh_CrystalData_TypeInfo, method);
    byte_40FAD85 = 1;
  }
  v6 = (FGOCrystalMesh_CrystalData_o *)sub_B170CC(FGOCrystalMesh_CrystalData_TypeInfo, method, v2, v3, v4);
  FGOCrystalMesh_CrystalData___ctor(v6, 0LL);
  this->fields.crystalData = v6;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.crystalData,
    (System_Int32_array **)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
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
  WellFired_USTimelineContainer_array *ComponentsInChildren_USTimelineContainer; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  WellFired_USTimelineContainer_array *v19; // x20
  unsigned __int64 v20; // x26
  __int64 v21; // x21
  __int64 v22; // x0
  __int64 v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Int32_array **v30; // x1
  UnityEngine_Component_o **v31; // x22
  struct FGOCrystalMesh_CrystalData_o *crystalData; // x8
  UnityEngine_Object_o *gameObject; // x0
  System_String_o *name; // x0
  UnityEngine_GameObject_o *v35; // x0
  UILabel_o *v36; // x23
  UnityEngine_GameObject_o *v37; // x0
  UnityEngine_Transform_o *Parent; // x24
  UnityEngine_GameObject_o *v39; // x0
  UnityEngine_GameObject_o *v40; // x23
  UnityEngine_Object_o *Component_srcLineSprite; // x0
  UnityEngine_Object_o *v42; // x24
  UnityEngine_Object_o *v43; // x0
  System_String_o *v44; // x0
  System_String_o *v45; // x0
  const MethodInfo *v46; // x3
  UnityEngine_Object_o *v47; // x24
  Firebase_Unity_UnitySynchronizationContext_SynchronizationContextBehavoir_o *v48; // x0
  struct FGOCrystalMesh_CrystalData_o *v49; // x8
  Firebase_Unity_UnitySynchronizationContext_SynchronizationContextBehavoir_o *v50; // x23
  struct FGOCrystalMesh_CrystalData_o *v51; // x8
  struct FGOCrystalMesh_CrystalData_o *v52; // x8
  struct FGOCrystalMesh_CrystalData_o *v53; // x8
  struct FGOCrystalMesh_CrystalData_o *v54; // x8
  struct FGOCrystalMesh_CrystalData_o *v55; // x8
  Firebase_Unity_UnitySynchronizationContext_SynchronizationContextBehavoir_c *v56; // x9
  float z; // w8
  struct FGOCrystalMesh_CrystalData_o *v58; // x8
  struct FGOCrystalMesh_CrystalData_o *v59; // x8
  struct FGOCrystalMesh_CrystalData_o *v60; // x8
  struct FGOCrystalMesh_CrystalData_o *v61; // x8
  System_Int32_array **v62; // x0
  void **p_monitor; // x23
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  __int64 v70; // x1
  __int64 v71; // x2
  __int64 v72; // x3
  __int64 v73; // x4
  System_Action_o *v74; // x22
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7

  if ( (byte_40FAD82 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer___, v3);
    sub_B16FFC(&Method_UnityEngine_GameObject_AddComponent_FGOMeshExploder___, v4);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_FGOCrystalMesh___, v5);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_FGOMeshExploder___, v6);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject____66874888, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    sub_B16FFC(&Method_FGOCrystalMesh___c__DisplayClass9_0__AddCrystalMesh_b__0__, v9);
    sub_B16FFC(&FGOCrystalMesh___c__DisplayClass9_0_TypeInfo, v10);
    sub_B16FFC(&StringLiteral_23165, v11);
    sub_B16FFC(&StringLiteral_16075, v12);
    byte_40FAD82 = 1;
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
      ComponentsInChildren_USTimelineContainer = UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                                                   (UnityEngine_Component_o *)this,
                                                   (const MethodInfo_18BD830 *)Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer___);
      if ( !ComponentsInChildren_USTimelineContainer )
        goto LABEL_51;
      v19 = ComponentsInChildren_USTimelineContainer;
      if ( (int)ComponentsInChildren_USTimelineContainer->max_length >= 1 )
      {
        v20 = 0LL;
        while ( 1 )
        {
          v21 = sub_B170CC(FGOCrystalMesh___c__DisplayClass9_0_TypeInfo, v15, v16, v17, v18);
          FGOCrystalMesh___c__DisplayClass9_0___ctor((FGOCrystalMesh___c__DisplayClass9_0_o *)v21, 0LL);
          if ( v20 >= v19->max_length )
          {
            sub_B17100(v22, v23, v24);
            sub_B170A0();
          }
          if ( !v21 )
            break;
          v30 = (System_Int32_array **)v19->m_Items[v20];
          *(_QWORD *)(v21 + 16) = v30;
          v31 = (UnityEngine_Component_o **)(v21 + 16);
          sub_B16F98((BattleServantConfConponent_o *)(v21 + 16), v30, v24, v25, v26, v27, v28, v29);
          crystalData = this->fields.crystalData;
          if ( !crystalData )
            break;
          if ( crystalData->fields.useWeaponModel )
            goto LABEL_55;
          if ( !*v31 )
            break;
          gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*v31, 0LL);
          if ( !gameObject )
            break;
          name = UnityEngine_Object__get_name(gameObject, 0LL);
          if ( !name )
            break;
          if ( !System_String__Contains(name, (System_String_o *)StringLiteral_23165, 0LL) )
          {
LABEL_55:
            if ( !*v31 )
              break;
            v35 = UnityEngine_Component__get_gameObject(*v31, 0LL);
            if ( !*v31 )
              break;
            v36 = (UILabel_o *)v35;
            v37 = UnityEngine_Component__get_gameObject(*v31, 0LL);
            Parent = GameObjectExtensions__GetParent(v37, 0LL);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            v39 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_UILabel_(
                                                v36,
                                                Parent,
                                                (const MethodInfo_19DE348 *)Method_UnityEngine_Object_Instantiate_GameObject____66874888);
            if ( !v39 )
              break;
            v40 = v39;
            Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                v39,
                                                                (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_FGOCrystalMesh___);
            if ( UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL) )
            {
              v42 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              v40,
                                              (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_FGOCrystalMesh___);
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              UnityEngine_Object__Destroy_34809464(v42, 0LL);
            }
            if ( !*v31 )
              break;
            v43 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*v31, 0LL);
            if ( !v43 )
              break;
            v44 = UnityEngine_Object__get_name(v43, 0LL);
            v45 = System_String__Concat_43743732(v44, (System_String_o *)StringLiteral_16075, 0LL);
            UnityEngine_Object__set_name((UnityEngine_Object_o *)v40, v45, 0LL);
            FGOCrystalMesh__ChangeCrystalMaterial(this, v40, this->fields.crystalMat, v46);
            v47 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            v40,
                                            (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_FGOMeshExploder___);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Equality(v47, 0LL, 0LL) )
            {
              v48 = UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                      v40,
                      (const MethodInfo_19D13E4 *)Method_UnityEngine_GameObject_AddComponent_FGOMeshExploder___);
              v49 = this->fields.crystalData;
              if ( !v49 )
                break;
              v50 = v48;
              if ( !v48 )
                break;
              LOBYTE(v48->fields.callbackQueue) = v49->fields.useBrokenPiece;
              v51 = this->fields.crystalData;
              if ( !v51 )
                break;
              BYTE1(v48->fields.callbackQueue) = v51->fields.useGravity;
              v52 = this->fields.crystalData;
              if ( !v52 )
                break;
              HIDWORD(v48->fields.callbackQueue) = LODWORD(v52->fields.mass);
              v53 = this->fields.crystalData;
              if ( !v53 )
                break;
              HIDWORD(v48[1].monitor) = v53->fields.minPieceVertex;
              v54 = this->fields.crystalData;
              if ( !v54 )
                break;
              v48[1].fields.m_CachedPtr = v54->fields.maxPieceVertex;
              v55 = this->fields.crystalData;
              if ( !v55 )
                break;
              v56 = *(Firebase_Unity_UnitySynchronizationContext_SynchronizationContextBehavoir_c **)&v55->fields.angularVelocity.fields.x;
              z = v55->fields.angularVelocity.fields.z;
              v48[1].klass = v56;
              *(float *)&v48[1].monitor = z;
              v58 = this->fields.crystalData;
              if ( !v58 )
                break;
              *((_DWORD *)&v48[1].fields.UnityEngine_MonoBehaviour_Fields + 1) = LODWORD(v58->fields.minBrokenSpeed);
              v59 = this->fields.crystalData;
              if ( !v59 )
                break;
              *(float *)&v48[1].fields.callbackQueue = v59->fields.maxBrokenSpeed;
              v60 = this->fields.crystalData;
              if ( !v60 )
                break;
              HIDWORD(v48[1].fields.callbackQueue) = LODWORD(v60->fields.pieceScale);
              v61 = this->fields.crystalData;
              if ( !v61 )
                break;
              *(float *)&v48[2].klass = v61->fields.fadeTime;
              if ( !*v31 )
                break;
              v62 = (System_Int32_array **)UnityEngine_Component__get_gameObject(*v31, 0LL);
              v50[2].monitor = v62;
              p_monitor = &v50[2].monitor;
              sub_B16F98((BattleServantConfConponent_o *)p_monitor, v62, v64, v65, v66, v67, v68, v69);
              v74 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v70, v71, v72, v73);
              System_Action___ctor(
                v74,
                (Il2CppObject *)v21,
                Method_FGOCrystalMesh___c__DisplayClass9_0__AddCrystalMesh_b__0__,
                0LL);
              p_monitor[1] = v74;
              sub_B16F98(
                (BattleServantConfConponent_o *)(p_monitor + 1),
                (System_Int32_array **)v74,
                v75,
                v76,
                v77,
                v78,
                v79,
                v80);
            }
          }
          if ( (__int64)++v20 >= (int)v19->max_length )
            return;
        }
LABEL_51:
        sub_B170D4();
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
  UnityEngine_Renderer_o *Component_srcLineSprite; // x0
  UnityEngine_Renderer_o *v16; // x20
  UnityEngine_Material_array *materials; // x0
  __int64 v18; // x2
  struct UnityEngine_Material_array *v19; // x0
  UnityEngine_Material_array **p_materialsArray; // x22
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  int32_t sortingOrder; // w0
  UnityEngine_Material_array *v28; // x0
  __int64 v29; // x1
  System_String_array **v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  int max_length; // w8
  UnityEngine_Material_array *v34; // x23
  il2cpp_array_size_t v35; // w26
  UnityEngine_Material_o *v36; // x25
  UnityEngine_Material_o *v37; // x24
  float Float; // s0
  bool HasProperty_40721564; // w0
  UnityEngine_Texture_o *Texture; // x0
  struct FGOCrystalMesh_CrystalData_o *crystalData; // x8
  float timeSinceLevelLoad; // s0
  UnityEngine_Texture_o *mainTexture; // x0
  int32_t renderQueue; // w0
  UnityEngine_Material_array *v45; // x25
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  Il2CppClass **v51; // x0

  if ( (byte_40FAD84 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer___, o);
    sub_B16FFC(&UnityEngine_Material___TypeInfo, v6);
    sub_B16FFC(&UnityEngine_Material_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_16042, v8);
    sub_B16FFC(&StringLiteral_15950, v9);
    sub_B16FFC(&StringLiteral_16000, v10);
    sub_B16FFC(&StringLiteral_15923, v11);
    sub_B16FFC(&StringLiteral_16030, v12);
    sub_B16FFC(&StringLiteral_16009, v13);
    sub_B16FFC(&StringLiteral_16145, v14);
    byte_40FAD84 = 1;
  }
  if ( !o )
    goto LABEL_30;
  Component_srcLineSprite = (UnityEngine_Renderer_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        o,
                                                        (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer___);
  if ( !Component_srcLineSprite )
    goto LABEL_30;
  v16 = Component_srcLineSprite;
  materials = UnityEngine_Renderer__get_materials(Component_srcLineSprite, 0LL);
  if ( !materials )
    goto LABEL_30;
  v19 = (struct UnityEngine_Material_array *)sub_B17014(UnityEngine_Material___TypeInfo, materials->max_length, v18);
  this->fields.materialsArray = v19;
  p_materialsArray = &this->fields.materialsArray;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.materialsArray,
    (System_Int32_array **)v19,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  sortingOrder = UnityEngine_Renderer__get_sortingOrder(v16, 0LL);
  UnityEngine_Renderer__set_sortingOrder(v16, sortingOrder + 1, 0LL);
  v28 = UnityEngine_Renderer__get_materials(v16, 0LL);
  if ( !v28 )
    goto LABEL_30;
  max_length = v28->max_length;
  v34 = v28;
  if ( max_length >= 1 )
  {
    v35 = 0;
    while ( 1 )
    {
      if ( v35 >= max_length )
      {
LABEL_31:
        sub_B17100(v28, v29, v30);
        sub_B170A0();
      }
      v36 = v34->m_Items[v35];
      v37 = (UnityEngine_Material_o *)sub_B170CC(UnityEngine_Material_TypeInfo, v29, v30, v31, v32);
      UnityEngine_Material___ctor_40718828(v37, crystalMaterial, 0LL);
      if ( !v36 )
        break;
      if ( UnityEngine_Material__HasProperty_40721564(v36, (System_String_o *)StringLiteral_16145, 0LL) )
      {
        Float = UnityEngine_Material__GetFloat(v36, (System_String_o *)StringLiteral_16145, 0LL);
        if ( !v37 )
          break;
        UnityEngine_Material__SetFloat(v37, (System_String_o *)StringLiteral_16042, Float, 0LL);
        HasProperty_40721564 = UnityEngine_Material__HasProperty_40721564(
                                 v36,
                                 (System_String_o *)StringLiteral_16009,
                                 0LL);
      }
      else
      {
        HasProperty_40721564 = UnityEngine_Material__HasProperty_40721564(
                                 v36,
                                 (System_String_o *)StringLiteral_16009,
                                 0LL);
        if ( !v37 )
          break;
      }
      if ( HasProperty_40721564 )
      {
        UnityEngine_Material__SetInt(v37, (System_String_o *)StringLiteral_16030, 1, 0LL);
        Texture = UnityEngine_Material__GetTexture(v36, (System_String_o *)StringLiteral_16009, 0LL);
        UnityEngine_Material__SetTexture(v37, (System_String_o *)StringLiteral_16009, Texture, 0LL);
      }
      else
      {
        UnityEngine_Material__SetInt(v37, (System_String_o *)StringLiteral_16030, 0, 0LL);
      }
      if ( UnityEngine_Material__HasProperty_40721564(v37, (System_String_o *)StringLiteral_15923, 0LL) )
      {
        crystalData = this->fields.crystalData;
        if ( !crystalData )
          break;
        UnityEngine_Material__SetFloat(
          v37,
          (System_String_o *)StringLiteral_15923,
          crystalData->fields.crystalFadeTime,
          0LL);
      }
      if ( UnityEngine_Material__HasProperty_40721564(v37, (System_String_o *)StringLiteral_16000, 0LL) )
      {
        timeSinceLevelLoad = UnityEngine_Time__get_timeSinceLevelLoad(0LL);
        UnityEngine_Material__SetFloat(v37, (System_String_o *)StringLiteral_16000, timeSinceLevelLoad, 0LL);
      }
      if ( UnityEngine_Material__HasProperty_40721564(v36, (System_String_o *)StringLiteral_15950, 0LL) )
      {
        mainTexture = UnityEngine_Material__get_mainTexture(v36, 0LL);
        UnityEngine_Material__set_mainTexture(v37, mainTexture, 0LL);
      }
      renderQueue = UnityEngine_Material__get_renderQueue(v36, 0LL);
      UnityEngine_Material__set_renderQueue(v37, renderQueue, 0LL);
      v45 = *p_materialsArray;
      if ( !*p_materialsArray )
        break;
      v28 = (UnityEngine_Material_array *)sub_B170BC(v37, v45->obj.klass->_1.element_class);
      if ( !v28 )
      {
        sub_B170F4(0LL);
        sub_B170A0();
      }
      if ( v35 >= v45->max_length )
        goto LABEL_31;
      v51 = &v45->obj.klass + (int)v35;
      v51[4] = (Il2CppClass *)v37;
      sub_B16F98((BattleServantConfConponent_o *)(v51 + 4), (System_Int32_array **)v37, v30, v46, v47, v48, v49, v50);
      max_length = v34->max_length;
      if ( (int)++v35 >= max_length )
        goto LABEL_29;
    }
LABEL_30:
    sub_B170D4();
  }
LABEL_29:
  UnityEngine_Renderer__set_materials(v16, *p_materialsArray, 0LL);
}


void __fastcall FGOCrystalMesh__ExplodeCrystalMesh(FGOCrystalMesh_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WellFired_USTimelineContainer_array *ComponentsInChildren_USTimelineContainer; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  int max_length; // w8
  WellFired_USTimelineContainer_array *v9; // x20
  unsigned int v10; // w21
  FGOMeshExploder_o *v11; // x0
  __int64 v12; // x8
  WellFired_USTimelineContainer_array *v13; // x20
  unsigned __int64 v14; // x22
  struct FGOCrystalMesh_CrystalData_o *crystalData; // x8
  UnityEngine_Component_o *v16; // x21
  UnityEngine_Object_o *gameObject; // x0
  System_String_o *name; // x0
  UnityEngine_GameObject_o *v19; // x0

  if ( (byte_40FAD83 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentsInChildren_FGOMeshExploder___, method);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer___, v3);
    sub_B16FFC(&StringLiteral_23165, v4);
    byte_40FAD83 = 1;
  }
  ComponentsInChildren_USTimelineContainer = UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                                               (UnityEngine_Component_o *)this,
                                               (const MethodInfo_18BD830 *)Method_UnityEngine_Component_GetComponentsInChildren_FGOMeshExploder___);
  if ( !ComponentsInChildren_USTimelineContainer )
    goto LABEL_23;
  max_length = ComponentsInChildren_USTimelineContainer->max_length;
  v9 = ComponentsInChildren_USTimelineContainer;
  if ( max_length >= 1 )
  {
    v10 = 0;
    while ( v10 < max_length )
    {
      v11 = (FGOMeshExploder_o *)v9->m_Items[v10];
      if ( !v11 )
        goto LABEL_23;
      FGOMeshExploder__Explode(v11, 0LL);
      max_length = v9->max_length;
      if ( (int)++v10 >= max_length )
        goto LABEL_9;
    }
LABEL_24:
    sub_B17100(ComponentsInChildren_USTimelineContainer, v6, v7);
    sub_B170A0();
  }
LABEL_9:
  ComponentsInChildren_USTimelineContainer = UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                                               (UnityEngine_Component_o *)this,
                                               (const MethodInfo_18BD830 *)Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer___);
  if ( !ComponentsInChildren_USTimelineContainer )
LABEL_23:
    sub_B170D4();
  v12 = *(_QWORD *)&ComponentsInChildren_USTimelineContainer->max_length;
  v13 = ComponentsInChildren_USTimelineContainer;
  if ( (int)v12 >= 1 )
  {
    v14 = 0LL;
    while ( v14 < (unsigned int)v12 )
    {
      crystalData = this->fields.crystalData;
      if ( !crystalData )
        goto LABEL_23;
      if ( !crystalData->fields.useWeaponModel )
      {
        v16 = (UnityEngine_Component_o *)v13->m_Items[v14];
        if ( !v16 )
          goto LABEL_23;
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)v13->m_Items[v14],
                                               0LL);
        if ( !gameObject )
          goto LABEL_23;
        name = UnityEngine_Object__get_name(gameObject, 0LL);
        if ( !name )
          goto LABEL_23;
        ComponentsInChildren_USTimelineContainer = (WellFired_USTimelineContainer_array *)System_String__Contains(
                                                                                            name,
                                                                                            (System_String_o *)StringLiteral_23165,
                                                                                            0LL);
        if ( ((unsigned __int8)ComponentsInChildren_USTimelineContainer & 1) != 0 )
        {
          v19 = UnityEngine_Component__get_gameObject(v16, 0LL);
          if ( !v19 )
            goto LABEL_23;
          UnityEngine_GameObject__SetActive(v19, 0, 0LL);
        }
      }
      LODWORD(v12) = v13->max_length;
      if ( (__int64)++v14 >= (int)v12 )
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.crystalData,
    (System_Int32_array **)crystalData,
    (System_String_array **)crystalMat,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.crystalMat = crystalMat;
  sub_B16F98(
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
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.materialsArray, 0LL, v2, v3, v4, v5, v6, v7);
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
  *(_OWORD *)&this->fields.minBrokenSpeed = xmmword_3132200;
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
  UnityEngine_Component_o *v5; // x0
  UnityEngine_GameObject_o *v6; // x0

  if ( (byte_40F68AB & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F68AB = 1;
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
    v5 = (UnityEngine_Component_o *)this->fields.r;
    if ( v5 )
    {
      v6 = UnityEngine_Component__get_gameObject(v5, 0LL);
      if ( v6 )
      {
        UnityEngine_GameObject__SetActive(v6, 0, 0LL);
        return;
      }
    }
LABEL_12:
    sub_B170D4();
  }
}