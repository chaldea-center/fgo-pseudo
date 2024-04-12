void __fastcall FGOCrystalMesh___ctor(FGOCrystalMesh_o *this, const MethodInfo *method)
{
  FGOCrystalMesh_CrystalData_o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_42AF0D8 & 1) == 0 )
  {
    sub_B52984(&FGOCrystalMesh_CrystalData_TypeInfo);
    byte_42AF0D8 = 1;
  }
  v3 = (FGOCrystalMesh_CrystalData_o *)sub_B52A54(FGOCrystalMesh_CrystalData_TypeInfo);
  FGOCrystalMesh_CrystalData___ctor(v3, 0LL);
  this->fields.crystalData = v3;
  sub_B52920(
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
  UnityEngine_Object_o *crystalMat; // x20
  UnityEngine_Component_o *ComponentsInChildren_USTimelineContainer; // x0
  __int64 v5; // x1
  UnityEngine_Component_o *v6; // x20
  unsigned __int64 v7; // x26
  __int64 v8; // x21
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Int32_array **v15; // x1
  UnityEngine_Component_o **v16; // x22
  struct FGOCrystalMesh_CrystalData_o *crystalData; // x8
  UILabel_o *v18; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *Parent; // x24
  UnityEngine_GameObject_o *v21; // x23
  UnityEngine_Object_o *Component_srcLineSprite; // x0
  UnityEngine_Object_o *v23; // x24
  System_String_o *name; // x0
  System_String_o *v25; // x0
  const MethodInfo *v26; // x3
  UnityEngine_Object_o *v27; // x24
  struct FGOCrystalMesh_CrystalData_o *v28; // x8
  UnityEngine_Component_o *v29; // x23
  struct FGOCrystalMesh_CrystalData_o *v30; // x8
  struct FGOCrystalMesh_CrystalData_o *v31; // x8
  struct FGOCrystalMesh_CrystalData_o *v32; // x8
  struct FGOCrystalMesh_CrystalData_o *v33; // x8
  struct FGOCrystalMesh_CrystalData_o *v34; // x8
  void *v35; // x9
  float z; // w8
  struct FGOCrystalMesh_CrystalData_o *v37; // x8
  struct FGOCrystalMesh_CrystalData_o *v38; // x8
  struct FGOCrystalMesh_CrystalData_o *v39; // x8
  struct FGOCrystalMesh_CrystalData_o *v40; // x8
  System_Int32_array **v41; // x0
  UnityEngine_Component_o *v42; // x23
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_Action_o *v49; // x22
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  __int64 v56; // x0

  if ( (byte_42AF0D5 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer___);
    sub_B52984(&Method_UnityEngine_GameObject_AddComponent_FGOMeshExploder___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_FGOCrystalMesh___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_FGOMeshExploder___);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject____68654656);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_FGOCrystalMesh___c__DisplayClass9_0__AddCrystalMesh_b__0__);
    sub_B52984(&FGOCrystalMesh___c__DisplayClass9_0_TypeInfo);
    sub_B52984(&StringLiteral_23452/*"weapon_"*/);
    sub_B52984(&StringLiteral_16246/*"_crystal"*/);
    byte_42AF0D5 = 1;
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
                                                                              (const MethodInfo_1A495E0 *)Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer___);
      if ( !ComponentsInChildren_USTimelineContainer )
        goto LABEL_51;
      v6 = ComponentsInChildren_USTimelineContainer;
      if ( SLODWORD(ComponentsInChildren_USTimelineContainer[1].klass) >= 1 )
      {
        v7 = 0LL;
        while ( 1 )
        {
          v8 = sub_B52A54(FGOCrystalMesh___c__DisplayClass9_0_TypeInfo);
          FGOCrystalMesh___c__DisplayClass9_0___ctor((FGOCrystalMesh___c__DisplayClass9_0_o *)v8, 0LL);
          if ( v7 >= LODWORD(v6[1].klass) )
          {
            v56 = sub_B52A88(ComponentsInChildren_USTimelineContainer);
            sub_B52A28(v56, 0LL);
          }
          if ( !v8 )
            break;
          v15 = (System_Int32_array **)*((_QWORD *)&v6[1].monitor + v7);
          *(_QWORD *)(v8 + 16) = v15;
          v16 = (UnityEngine_Component_o **)(v8 + 16);
          sub_B52920((BattleServantConfConponent_o *)(v8 + 16), v15, v9, v10, v11, v12, v13, v14);
          crystalData = this->fields.crystalData;
          if ( !crystalData )
            break;
          if ( crystalData->fields.useWeaponModel )
            goto LABEL_19;
          ComponentsInChildren_USTimelineContainer = *v16;
          if ( !*v16 )
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
                  (System_String_o *)StringLiteral_23452/*"weapon_"*/,
                  0LL) )
          {
LABEL_19:
            ComponentsInChildren_USTimelineContainer = *v16;
            if ( !*v16 )
              break;
            ComponentsInChildren_USTimelineContainer = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                                    ComponentsInChildren_USTimelineContainer,
                                                                                    0LL);
            if ( !*v16 )
              break;
            v18 = (UILabel_o *)ComponentsInChildren_USTimelineContainer;
            gameObject = UnityEngine_Component__get_gameObject(*v16, 0LL);
            Parent = GameObjectExtensions__GetParent(gameObject, 0LL);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            ComponentsInChildren_USTimelineContainer = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_UILabel_(
                                                                                    v18,
                                                                                    Parent,
                                                                                    (const MethodInfo_1F712F4 *)Method_UnityEngine_Object_Instantiate_GameObject____68654656);
            if ( !ComponentsInChildren_USTimelineContainer )
              break;
            v21 = (UnityEngine_GameObject_o *)ComponentsInChildren_USTimelineContainer;
            Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                (UnityEngine_GameObject_o *)ComponentsInChildren_USTimelineContainer,
                                                                (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_FGOCrystalMesh___);
            if ( UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL) )
            {
              v23 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              v21,
                                              (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_FGOCrystalMesh___);
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              UnityEngine_Object__Destroy_35616956(v23, 0LL);
            }
            ComponentsInChildren_USTimelineContainer = *v16;
            if ( !*v16 )
              break;
            ComponentsInChildren_USTimelineContainer = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                                    ComponentsInChildren_USTimelineContainer,
                                                                                    0LL);
            if ( !ComponentsInChildren_USTimelineContainer )
              break;
            name = UnityEngine_Object__get_name((UnityEngine_Object_o *)ComponentsInChildren_USTimelineContainer, 0LL);
            v25 = System_String__Concat_44568316(name, (System_String_o *)StringLiteral_16246/*"_crystal"*/, 0LL);
            UnityEngine_Object__set_name((UnityEngine_Object_o *)v21, v25, 0LL);
            FGOCrystalMesh__ChangeCrystalMaterial(this, v21, this->fields.crystalMat, v26);
            v27 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            v21,
                                            (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_FGOMeshExploder___);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Equality(v27, 0LL, 0LL) )
            {
              ComponentsInChildren_USTimelineContainer = (UnityEngine_Component_o *)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                                                                      v21,
                                                                                      (const MethodInfo_1B7B0BC *)Method_UnityEngine_GameObject_AddComponent_FGOMeshExploder___);
              v28 = this->fields.crystalData;
              if ( !v28 )
                break;
              v29 = ComponentsInChildren_USTimelineContainer;
              if ( !ComponentsInChildren_USTimelineContainer )
                break;
              LOBYTE(ComponentsInChildren_USTimelineContainer[1].klass) = v28->fields.useBrokenPiece;
              v30 = this->fields.crystalData;
              if ( !v30 )
                break;
              BYTE1(ComponentsInChildren_USTimelineContainer[1].klass) = v30->fields.useGravity;
              v31 = this->fields.crystalData;
              if ( !v31 )
                break;
              HIDWORD(ComponentsInChildren_USTimelineContainer[1].klass) = LODWORD(v31->fields.mass);
              v32 = this->fields.crystalData;
              if ( !v32 )
                break;
              *((_DWORD *)&ComponentsInChildren_USTimelineContainer[1].fields + 1) = v32->fields.minPieceVertex;
              v33 = this->fields.crystalData;
              if ( !v33 )
                break;
              LODWORD(ComponentsInChildren_USTimelineContainer[2].klass) = v33->fields.maxPieceVertex;
              v34 = this->fields.crystalData;
              if ( !v34 )
                break;
              v35 = *(void **)&v34->fields.angularVelocity.fields.x;
              z = v34->fields.angularVelocity.fields.z;
              ComponentsInChildren_USTimelineContainer[1].monitor = v35;
              *(float *)&ComponentsInChildren_USTimelineContainer[1].fields.m_CachedPtr = z;
              v37 = this->fields.crystalData;
              if ( !v37 )
                break;
              HIDWORD(ComponentsInChildren_USTimelineContainer[2].klass) = LODWORD(v37->fields.minBrokenSpeed);
              v38 = this->fields.crystalData;
              if ( !v38 )
                break;
              *(float *)&ComponentsInChildren_USTimelineContainer[2].monitor = v38->fields.maxBrokenSpeed;
              v39 = this->fields.crystalData;
              if ( !v39 )
                break;
              HIDWORD(ComponentsInChildren_USTimelineContainer[2].monitor) = LODWORD(v39->fields.pieceScale);
              v40 = this->fields.crystalData;
              if ( !v40 )
                break;
              ComponentsInChildren_USTimelineContainer[2].fields.m_CachedPtr = LODWORD(v40->fields.fadeTime);
              ComponentsInChildren_USTimelineContainer = *v16;
              if ( !*v16 )
                break;
              v41 = (System_Int32_array **)UnityEngine_Component__get_gameObject(
                                             ComponentsInChildren_USTimelineContainer,
                                             0LL);
              v29[3].klass = (UnityEngine_Component_c *)v41;
              v42 = v29 + 3;
              sub_B52920((BattleServantConfConponent_o *)v42, v41, v43, v44, v45, v46, v47, v48);
              v49 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
              System_Action___ctor(
                v49,
                (Il2CppObject *)v8,
                Method_FGOCrystalMesh___c__DisplayClass9_0__AddCrystalMesh_b__0__,
                0LL);
              v42->monitor = v49;
              sub_B52920(
                (BattleServantConfConponent_o *)&v42->monitor,
                (System_Int32_array **)v49,
                v50,
                v51,
                v52,
                v53,
                v54,
                v55);
            }
          }
          if ( (__int64)++v7 >= SLODWORD(v6[1].klass) )
            return;
        }
LABEL_51:
        sub_B52A5C(ComponentsInChildren_USTimelineContainer, v5);
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
  UnityEngine_Renderer_o *v6; // x20
  System_Int32_array **v7; // x0
  UnityEngine_Material_array **p_materialsArray; // x22
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  int32_t sortingOrder; // w0
  int crystalMat; // w8
  FGOCrystalMesh_o *v17; // x23
  il2cpp_array_size_t v18; // w26
  UnityEngine_Material_o *v19; // x25
  UnityEngine_Material_o *v20; // x24
  float Float; // s0
  UnityEngine_Texture_o *Texture; // x0
  struct FGOCrystalMesh_CrystalData_o *crystalData; // x8
  float timeSinceLevelLoad; // s0
  UnityEngine_Texture_o *mainTexture; // x0
  int32_t renderQueue; // w0
  UnityEngine_Material_array *v27; // x25
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  Il2CppClass **v34; // x0
  __int64 v35; // x0
  __int64 v36; // x0
  FGOCrystalMesh_o *v37; // [xsp+8h] [xbp-58h]

  v37 = this;
  if ( (byte_42AF0D7 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer___);
    sub_B52984(&UnityEngine_Material___TypeInfo);
    sub_B52984(&UnityEngine_Material_TypeInfo);
    sub_B52984(&StringLiteral_16212/*"_Xscale"*/);
    sub_B52984(&StringLiteral_16120/*"_MainTex"*/);
    sub_B52984(&StringLiteral_16170/*"_StartTime"*/);
    sub_B52984(&StringLiteral_16093/*"_FadeTime"*/);
    sub_B52984(&StringLiteral_16200/*"_UseSubtex"*/);
    sub_B52984(&StringLiteral_16179/*"_SubTex"*/);
    this = (FGOCrystalMesh_o *)sub_B52984(&StringLiteral_16319/*"_xscale"*/);
    byte_42AF0D7 = 1;
  }
  if ( !o )
    goto LABEL_30;
  this = (FGOCrystalMesh_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                               o,
                               (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer___);
  if ( !this )
    goto LABEL_30;
  v6 = (UnityEngine_Renderer_o *)this;
  this = (FGOCrystalMesh_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)this, 0LL);
  if ( !this )
    goto LABEL_30;
  v7 = (System_Int32_array **)sub_B5299C(UnityEngine_Material___TypeInfo, LODWORD(this->fields.crystalMat));
  v37->fields.materialsArray = (struct UnityEngine_Material_array *)v7;
  p_materialsArray = &v37->fields.materialsArray;
  sub_B52920((BattleServantConfConponent_o *)&v37->fields.materialsArray, v7, v9, v10, v11, v12, v13, v14);
  sortingOrder = UnityEngine_Renderer__get_sortingOrder(v6, 0LL);
  UnityEngine_Renderer__set_sortingOrder(v6, sortingOrder + 1, 0LL);
  this = (FGOCrystalMesh_o *)UnityEngine_Renderer__get_materials(v6, 0LL);
  if ( !this )
    goto LABEL_30;
  crystalMat = (int)this->fields.crystalMat;
  v17 = this;
  if ( crystalMat >= 1 )
  {
    v18 = 0;
    while ( 1 )
    {
      if ( v18 >= crystalMat )
      {
LABEL_31:
        v35 = sub_B52A88(this);
        sub_B52A28(v35, 0LL);
      }
      v19 = (UnityEngine_Material_o *)*((_QWORD *)&v17->fields.crystalData + (int)v18);
      v20 = (UnityEngine_Material_o *)sub_B52A54(UnityEngine_Material_TypeInfo);
      UnityEngine_Material___ctor_41516484(v20, crystalMaterial, 0LL);
      if ( !v19 )
        break;
      if ( UnityEngine_Material__HasProperty_41519220(v19, (System_String_o *)StringLiteral_16319/*"_xscale"*/, 0LL) )
      {
        Float = UnityEngine_Material__GetFloat(v19, (System_String_o *)StringLiteral_16319/*"_xscale"*/, 0LL);
        if ( !v20 )
          break;
        UnityEngine_Material__SetFloat(v20, (System_String_o *)StringLiteral_16212/*"_Xscale"*/, Float, 0LL);
        LOBYTE(this) = UnityEngine_Material__HasProperty_41519220(v19, (System_String_o *)StringLiteral_16179/*"_SubTex"*/, 0LL);
      }
      else
      {
        this = (FGOCrystalMesh_o *)UnityEngine_Material__HasProperty_41519220(
                                     v19,
                                     (System_String_o *)StringLiteral_16179/*"_SubTex"*/,
                                     0LL);
        if ( !v20 )
          break;
      }
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        UnityEngine_Material__SetInt(v20, (System_String_o *)StringLiteral_16200/*"_UseSubtex"*/, 1, 0LL);
        Texture = UnityEngine_Material__GetTexture(v19, (System_String_o *)StringLiteral_16179/*"_SubTex"*/, 0LL);
        UnityEngine_Material__SetTexture(v20, (System_String_o *)StringLiteral_16179/*"_SubTex"*/, Texture, 0LL);
      }
      else
      {
        UnityEngine_Material__SetInt(v20, (System_String_o *)StringLiteral_16200/*"_UseSubtex"*/, 0, 0LL);
      }
      this = (FGOCrystalMesh_o *)UnityEngine_Material__HasProperty_41519220(
                                   v20,
                                   (System_String_o *)StringLiteral_16093/*"_FadeTime"*/,
                                   0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        crystalData = v37->fields.crystalData;
        if ( !crystalData )
          break;
        UnityEngine_Material__SetFloat(
          v20,
          (System_String_o *)StringLiteral_16093/*"_FadeTime"*/,
          crystalData->fields.crystalFadeTime,
          0LL);
      }
      if ( UnityEngine_Material__HasProperty_41519220(v20, (System_String_o *)StringLiteral_16170/*"_StartTime"*/, 0LL) )
      {
        timeSinceLevelLoad = UnityEngine_Time__get_timeSinceLevelLoad(0LL);
        UnityEngine_Material__SetFloat(v20, (System_String_o *)StringLiteral_16170/*"_StartTime"*/, timeSinceLevelLoad, 0LL);
      }
      if ( UnityEngine_Material__HasProperty_41519220(v19, (System_String_o *)StringLiteral_16120/*"_MainTex"*/, 0LL) )
      {
        mainTexture = UnityEngine_Material__get_mainTexture(v19, 0LL);
        UnityEngine_Material__set_mainTexture(v20, mainTexture, 0LL);
      }
      renderQueue = UnityEngine_Material__get_renderQueue(v19, 0LL);
      UnityEngine_Material__set_renderQueue(v20, renderQueue, 0LL);
      v27 = *p_materialsArray;
      if ( !*p_materialsArray )
        break;
      this = (FGOCrystalMesh_o *)sub_B52A44(v20, v27->obj.klass->_1.element_class);
      if ( !this )
      {
        v36 = sub_B52A7C(0LL);
        sub_B52A28(v36, 0LL);
      }
      if ( v18 >= v27->max_length )
        goto LABEL_31;
      v34 = &v27->obj.klass + (int)v18;
      v34[4] = (Il2CppClass *)v20;
      sub_B52920((BattleServantConfConponent_o *)(v34 + 4), (System_Int32_array **)v20, v28, v29, v30, v31, v32, v33);
      crystalMat = (int)v17->fields.crystalMat;
      if ( (int)++v18 >= crystalMat )
        goto LABEL_29;
    }
LABEL_30:
    sub_B52A5C(this, o);
  }
LABEL_29:
  UnityEngine_Renderer__set_materials(v6, *p_materialsArray, 0LL);
}


void __fastcall FGOCrystalMesh__ExplodeCrystalMesh(FGOCrystalMesh_o *this, const MethodInfo *method)
{
  void *ComponentsInChildren_USTimelineContainer; // x0
  __int64 v4; // x1
  int v5; // w8
  void *v6; // x20
  unsigned int v7; // w21
  __int64 v8; // x8
  _QWORD *v9; // x20
  unsigned __int64 v10; // x22
  struct FGOCrystalMesh_CrystalData_o *crystalData; // x8
  UnityEngine_Component_o *v12; // x21
  __int64 v13; // x0

  if ( (byte_42AF0D6 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponentsInChildren_FGOMeshExploder___);
    sub_B52984(&Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer___);
    sub_B52984(&StringLiteral_23452/*"weapon_"*/);
    byte_42AF0D6 = 1;
  }
  ComponentsInChildren_USTimelineContainer = UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                                               (UnityEngine_Component_o *)this,
                                               (const MethodInfo_1A495E0 *)Method_UnityEngine_Component_GetComponentsInChildren_FGOMeshExploder___);
  if ( !ComponentsInChildren_USTimelineContainer )
    goto LABEL_23;
  v5 = *((_DWORD *)ComponentsInChildren_USTimelineContainer + 6);
  v6 = ComponentsInChildren_USTimelineContainer;
  if ( v5 >= 1 )
  {
    v7 = 0;
    while ( v7 < v5 )
    {
      ComponentsInChildren_USTimelineContainer = (void *)*((_QWORD *)v6 + (int)v7 + 4);
      if ( !ComponentsInChildren_USTimelineContainer )
        goto LABEL_23;
      FGOMeshExploder__Explode((FGOMeshExploder_o *)ComponentsInChildren_USTimelineContainer, 0LL);
      v5 = *((_DWORD *)v6 + 6);
      if ( (int)++v7 >= v5 )
        goto LABEL_9;
    }
LABEL_24:
    v13 = sub_B52A88(ComponentsInChildren_USTimelineContainer);
    sub_B52A28(v13, 0LL);
  }
LABEL_9:
  ComponentsInChildren_USTimelineContainer = UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                                               (UnityEngine_Component_o *)this,
                                               (const MethodInfo_1A495E0 *)Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer___);
  if ( !ComponentsInChildren_USTimelineContainer )
LABEL_23:
    sub_B52A5C(ComponentsInChildren_USTimelineContainer, v4);
  v8 = *((_QWORD *)ComponentsInChildren_USTimelineContainer + 3);
  v9 = ComponentsInChildren_USTimelineContainer;
  if ( (int)v8 >= 1 )
  {
    v10 = 0LL;
    while ( v10 < (unsigned int)v8 )
    {
      crystalData = this->fields.crystalData;
      if ( !crystalData )
        goto LABEL_23;
      if ( !crystalData->fields.useWeaponModel )
      {
        v12 = (UnityEngine_Component_o *)v9[v10 + 4];
        if ( !v12 )
          goto LABEL_23;
        ComponentsInChildren_USTimelineContainer = UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)v9[v10 + 4],
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
                                                             (System_String_o *)StringLiteral_23452/*"weapon_"*/,
                                                             0LL);
        if ( ((unsigned __int8)ComponentsInChildren_USTimelineContainer & 1) != 0 )
        {
          ComponentsInChildren_USTimelineContainer = UnityEngine_Component__get_gameObject(v12, 0LL);
          if ( !ComponentsInChildren_USTimelineContainer )
            goto LABEL_23;
          UnityEngine_GameObject__SetActive(
            (UnityEngine_GameObject_o *)ComponentsInChildren_USTimelineContainer,
            0,
            0LL);
        }
      }
      LODWORD(v8) = *((_DWORD *)v9 + 6);
      if ( (__int64)++v10 >= (int)v8 )
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
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.crystalData,
    (System_Int32_array **)crystalData,
    (System_String_array **)crystalMat,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.crystalMat = crystalMat;
  sub_B52920(
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
  sub_B52920((BattleServantConfConponent_o *)&this->fields.materialsArray, 0LL, v2, v3, v4, v5, v6, v7);
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
  *(_OWORD *)&this->fields.minBrokenSpeed = xmmword_32787A0;
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

  if ( (byte_42ACE06 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42ACE06 = 1;
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
    sub_B52A5C(r, method);
  }
}